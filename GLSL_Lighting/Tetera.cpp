#include "Tetera.h"

int Tetera::DibujarPersonaje(float x, float y, float z) {
    glPushMatrix();
    glTranslatef(x, y, z);
    glutSolidTeapot(0.5);
    glPopMatrix();
    return 0;
}