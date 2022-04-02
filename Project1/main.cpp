#include <GL/freeglut.h>


void render_scene_cb() {
    glClear(GL_COLOR_BUFFER_BIT);
    glutSwapBuffers();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);

    glutInitDisplayMode(GLUT_DOUBLE);
    glutInitWindowSize(400, 400);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("Sablin DP Laboratory - 1");

    glutDisplayFunc(render_scene_cb);
    glutMainLoop();
    
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    return 0;
}