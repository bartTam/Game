#pragma once
class OpenGLInst {
public:
    /**
     * Initializes the OpenGL instance and creates a window.
     */
    OpenGLInst();
    /**
     * Cleans up OpenGL instance and window.
     */
    ~OpenGLInst();

    /**
     * Runs the rendering loop for the window.
     * Returns when  window has been closed.
     */
    void renderLoop();

private:
    /**
     * The window that we are rendering to.
     */
    GLFWwindow* window;
};
