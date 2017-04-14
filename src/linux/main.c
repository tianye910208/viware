#include <unistd.h>
#include <sys/time.h>
#include <X11/Xlib.h>
#include <X11/Xatom.h>
#include <X11/Xutil.h>

#include "vi3d.h"


#define APP_W 800
#define APP_H 480


EGLNativeDisplayType nativeDisplay = EGL_DEFAULT_DISPLAY;
EGLNativeWindowType  nativeWindow = 0;

EGLConfig  eglConfig;
EGLDisplay eglDisplay;
EGLContext eglContext;
EGLSurface eglSurface;

int egl_init()
{
    EGLint configNum = 0;
    EGLint majorVersion;
    EGLint minorVersion;
    EGLint ctxAttribList[] =
    {
        EGL_CONTEXT_CLIENT_VERSION, 2,
        EGL_NONE
    };
    EGLint cfgAttribList[] =
    {
		EGL_SURFACE_TYPE, EGL_WINDOW_BIT,
        EGL_RED_SIZE, 5,
        EGL_GREEN_SIZE, 6,
        EGL_BLUE_SIZE, 5,
        EGL_ALPHA_SIZE, EGL_DONT_CARE,
        EGL_DEPTH_SIZE, EGL_DONT_CARE,
        EGL_STENCIL_SIZE, EGL_DONT_CARE,
        EGL_SAMPLE_BUFFERS, 0,
        EGL_RENDERABLE_TYPE, EGL_OPENGL_ES2_BIT,
        EGL_NONE
    };


    eglDisplay = eglGetDisplay(nativeDisplay);

    if (eglDisplay == EGL_NO_DISPLAY || eglGetError() != EGL_SUCCESS)
        return 1;

    if (!eglInitialize(eglDisplay, &majorVersion, &minorVersion) || eglGetError() != EGL_SUCCESS)
        return 2;

	if (!eglChooseConfig(eglDisplay, cfgAttribList, &eglConfig, 1, &configNum) || configNum < 1)
        return 3;

	eglContext = eglCreateContext(eglDisplay, eglConfig, EGL_NO_CONTEXT, ctxAttribList);
    if (eglContext == EGL_NO_CONTEXT || eglGetError() != EGL_SUCCESS)
        return 4;

	eglSurface = eglCreateWindowSurface(eglDisplay, eglConfig, nativeWindow, NULL);
    if (eglSurface == EGL_NO_SURFACE || eglGetError() != EGL_SUCCESS)
        return 5;

    if (!eglMakeCurrent(eglDisplay, eglSurface, eglSurface, eglContext) || eglGetError() != EGL_SUCCESS)
        return 6;

    return 0;
}

void egl_exit()
{
    eglMakeCurrent(eglDisplay, NULL, NULL, NULL);
    eglDestroyContext(eglDisplay, eglContext);
    eglDestroySurface(eglDisplay, eglSurface);
    eglTerminate(eglDisplay);
}


Atom wmDeleteWindow;
int win_init(const char *title, int w, int h)
{
 
    nativeDisplay = XOpenDisplay(NULL);
    if (nativeDisplay == NULL)
        return 1;

    nativeWindow = XCreateWindow(
        nativeDisplay, 
        DefaultRootWindow(nativeDisplay),
        0, 0, w, h, 0,
        CopyFromParent, InputOutput,
        CopyFromParent, 0, 0);

    XStoreName(nativeDisplay, nativeWindow, title);

    XSelectInput(nativeDisplay, nativeWindow, ExposureMask | StructureNotifyMask | FocusChangeMask | VisibilityChangeMask | KeyPressMask | KeyReleaseMask | KeymapStateMask | ButtonPressMask | ButtonReleaseMask | PointerMotionMask );



    wmDeleteWindow = XInternAtom(nativeDisplay, "WM_DELETE_WINDOW", False);
    XSetWMProtocols(nativeDisplay, nativeWindow, &wmDeleteWindow, 1);

    //XSizeHints* hints = XAllocSizeHints();
    //hints->flags |= (PMinSize | PMaxSize);
    //hints->min_width  = hints->max_width  = w;
    //hints->min_height = hints->max_height = h;
    //XSetWMNormalHints(nativeDisplay, nativeWindow, hints);
    //XFree(hints);


    XFlush(nativeDisplay);
    XMapWindow(nativeDisplay, nativeWindow);

    return 0;
}

void win_exit()
{
    XDestroyWindow(nativeDisplay, nativeWindow);
    XCloseDisplay(nativeDisplay);
}

void win_proc(XEvent* pev)
{
    switch(pev->type)
    {
        case ConfigureNotify:
            vi_app_set_screen_size(pev->xconfigure.width, pev->xconfigure.height);
            break;
        default:
            break;
    }
}

void win_loop()
{
    float dt;
    struct timeval t1, t2;
    struct timezone tz;
    gettimeofday(&t1, &tz);

    XEvent xev;
    while (1)
    {
    
        if(XPending(nativeDisplay))
        {
            XNextEvent(nativeDisplay, &xev);
            if (xev.type == ClientMessage && xev.xclient.data.l[0] == wmDeleteWindow)
                return;
            win_proc(&xev);
        }
        else
        {
            gettimeofday(&t2, &tz);
            dt = (float)(t2.tv_sec - t1.tv_sec + (t2.tv_usec - t1.tv_usec) * 1e-6);
            t1 = t2;

            vi_app_loop(dt);
            eglSwapBuffers(eglDisplay, eglSurface);
            usleep(10000);
        }

    }
}


int main(int argc, char *argv[])
{

    if (win_init("vi3d", APP_W, APP_H) != 0)
        return 1;
    if (egl_init() != 0)
        return 2;

	vi_app_init(argc>1 ? argv[1] : "../../", argc>2 ? argv[2] : "../../dat");
    vi_app_set_screen_size(APP_W, APP_H);

    win_loop();

    vi_app_exit();
    egl_exit();
    win_exit();
    return 0;
}







