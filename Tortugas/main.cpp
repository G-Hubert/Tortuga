#include<gl/glut.h>

void DibujarTortugas() {
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.99, 0.75); //Cuadro de fondo
	glVertex2i(50, 50);
	glVertex2i(50, 650);
	glVertex2i(350, 650);
	glVertex2i(350, 50);
	glEnd();
	glBegin(GL_TRIANGLES);  //caparazon
	glColor3f(0.18, 0.33, 0.28);
	glVertex2i(110, 315);
	glVertex2i(170, 310);
	glVertex2i(140, 240);
	glEnd();
	glBegin(GL_TRIANGLES);  //caparazon
	glColor3f(0.30, 0.50, 0.31);
	glVertex2i(110, 315);
	glVertex2i(140, 395);
	glVertex2i(170, 310);
	glEnd();
	glBegin(GL_TRIANGLES);  //caparazon
	glColor3f(0.59, 0.80, 0.51);
	glVertex2i(140, 395);
	glVertex2i(200, 425);
	glVertex2i(170, 310);
	glEnd();
	glBegin(GL_TRIANGLES);  //caparazon
	glColor3f(0.47, 0.71, 0.44);
	glVertex2i(200, 425);
	glVertex2i(270, 390);
	glVertex2i(170, 310);
	glEnd();
	glBegin(GL_TRIANGLES); //caparazon
	glColor3f(0.21, 0.40, 0.27); //kwdnwd
	glVertex2i(170, 310);
	glVertex2i(200, 260);
	glVertex2i(270, 390);
	glEnd();
	glBegin(GL_TRIANGLES); //caparazon
	glColor3f(0.19, 0.31, 0.19); //cerca del cuello
	glVertex2i(200, 260);
	glVertex2i(270, 390);
	glVertex2i(250, 280);
	glEnd();
	glBegin(GL_TRIANGLES); //caparazon
	glColor3f(0.18, 0.39, 0.26); 
	glVertex2i(140, 240);
	glVertex2i(170, 310);
	glVertex2i(200, 260);
	glEnd();
	glBegin(GL_TRIANGLES); //caparazon
	glColor3f(0.18, 0.30, 0.17); 
	glVertex2i(140, 240);
	glVertex2i(200, 260);
	glVertex2i(170, 200);
	glEnd();
	glBegin(GL_TRIANGLES); //caparazon
	glColor3f(0.14, 0.26, 0.14); 
	glVertex2i(200, 260);
	glVertex2i(250, 280);
	glVertex2i(170, 200);
	glEnd();
	glBegin(GL_TRIANGLES);  //caparazon
	glColor3f(0.17, 0.23, 0.12); //hshhs
	glVertex2i(125, 220);
	glVertex2i(140, 240);
	glVertex2i(170, 200);
	glEnd();
	glBegin(GL_TRIANGLE_STRIP); //cuello1
	glColor3f(0.30, 0.36, 0.18); 
	glVertex2i(250, 280);
	glVertex2i(260, 290);
	glVertex2i(265, 370);
	glVertex2i(275, 390);
	glEnd();
	glBegin(GL_POLYGON); //cuello1.2
	glColor3f(0.25, 0.33, 0.15); 
	glVertex2i(240, 270);
	glVertex2i(250, 280);
	glVertex2i(260, 290);
	glVertex2i(265, 245);
	glVertex2i(260, 265);
	glEnd();
	glBegin(GL_POLYGON);  //cuello1.3
	glColor3f(0.32, 0.41, 0.19); 
	glVertex2i(265, 245);
	glVertex2i(260, 290);
	glVertex2i(295, 310);
	glVertex2i(268, 247);
	glEnd();
	glBegin(GL_TRIANGLES);  //cuello1.4
	glColor3f(0.38, 0.48, 0.21); 
	glVertex2i(260, 290);
	glVertex2i(275, 390);
	glVertex2i(295, 310);
	glEnd();
	glBegin(GL_TRIANGLES);  //cuello1.5
	glColor3f(0.48, 0.57, 0.24); 
	glVertex2i(275, 390);
	glVertex2i(298, 430);
	glVertex2i(295, 310);
	glEnd();
	glBegin(GL_TRIANGLES);  //cuello1.6
	glColor3f(0.38, 0.48, 0.21); 
	glVertex2i(275, 390);
	glVertex2i(285, 455);
	glVertex2i(298, 430);
	glEnd();
	glBegin(GL_TRIANGLES);  //cuello1.7
	glColor3f(0.49, 0.57, 0.25); 
	glVertex2i(275, 390);
	glVertex2i(273, 490);
	glVertex2i(285, 455);
	glEnd();
	glBegin(GL_TRIANGLES);  //cabeza1
	glColor3f(0.72, 0.76, 0.35); 
	glVertex2i(273, 490);
	glVertex2i(285, 455);
	glVertex2i(297, 500);
	glEnd();
	glBegin(GL_TRIANGLES);  //cabeza1.2
	glColor3f(0.31, 0.40, 0.18); 
	glVertex2i(285, 455);
	glVertex2i(298, 430);
	glVertex2i(340, 470);
	glEnd();
	glBegin(GL_TRIANGLES);  //cabeza1.3
	glColor3f(0.54, 0.62, 0.28); 
	glVertex2i(285, 455);
	glVertex2i(297, 500);
	glVertex2i(340, 470);
	glEnd();
	glBegin(GL_TRIANGLES);  //cabeza1.4
	glColor3f(0.59, 0.64, 0.34); 
	glVertex2i(297, 500);
	glVertex2i(340, 515);
	glVertex2i(340, 470);
	glEnd();
	glBegin(GL_TRIANGLES);  //cabeza1.5
	glColor3f(0.58, 0.68, 0.30); 
	glVertex2i(273, 490);
	glVertex2i(290, 530);
	glVertex2i(297, 500);
	glEnd();
	glBegin(GL_TRIANGLES);  //cabeza1.6
	glColor3f(0.70, 0.75, 0.42); 
	glVertex2i(290, 530);
	glVertex2i(297, 500);
	glVertex2i(340, 515);
	glEnd();
	glBegin(GL_TRIANGLES);  //pata1
	glColor3f(0.21, 0.26, 0.13); 
	glVertex2i(110, 180);
	glVertex2i(130, 218);
	glVertex2i(150, 210);
	glEnd();
	glBegin(GL_TRIANGLES);  //pata1.1
	glColor3f(0.31, 0.37, 0.18); 
	glVertex2i(110, 180);
	glVertex2i(140, 210);
	glVertex2i(140, 185);
	glEnd();
	glBegin(GL_TRIANGLES);  //pata1.2
	glColor3f(0.46, 0.55, 0.25); 
	glVertex2i(110, 180);
	glVertex2i(150, 190);
	glVertex2i(120, 155);
	glEnd();
	glBegin(GL_TRIANGLES);  //pata1.3
	glColor3f(0.37, 0.44, 0.19); 
	glVertex2i(120, 155);
	glVertex2i(150, 190);
	glVertex2i(160, 155);
	glEnd();
	glBegin(GL_TRIANGLES);  //Abajo1
	glColor3f(0.26, 0.33, 0.22); 
	glVertex2i(170, 200);
	glVertex2i(190, 220);
	glVertex2i(200, 200);
	glEnd();
	glBegin(GL_TRIANGLES);  //Abajo2
	glColor3f(0.19, 0.28, 0.20); 
	glVertex2i(190, 220);
	glVertex2i(200, 200);
	glVertex2i(210, 240);
	glEnd();
	glBegin(GL_TRIANGLES);  //Abajo3
	glColor3f(0.21, 0.26, 0.16); 
	glVertex2i(210, 240);
	glVertex2i(200, 200);
	glVertex2i(230, 215);
	glEnd();
	glBegin(GL_TRIANGLES);  //Abajo4
	glColor3f(0.25, 0.31, 0.17); 
	glVertex2i(210, 240);
	glVertex2i(240, 270);
	glVertex2i(230, 215);
	glEnd();
	glBegin(GL_TRIANGLES);  //pata2
	glColor3f(0.55, 0.63, 0.29); 
	glVertex2i(140, 214);
	glVertex2i(160, 205);
	glVertex2i(140, 170);
	glEnd();
	glBegin(GL_TRIANGLE_STRIP); //pata2.1
	glColor3f(0.62, 0.68, 0.31); 
	glVertex2i(150, 210);
	glVertex2i(140, 170);
	glVertex2i(160, 205);
	glVertex2i(175, 180);
	glEnd();
	glBegin(GL_TRIANGLES); //pata2.2
	glColor3f(0.35, 0.42, 0.19); 
	glVertex2i(160, 205);
	glVertex2i(170, 200);
	glVertex2i(175, 180);
	glEnd();
	glBegin(GL_TRIANGLES); //pata2.3
	glColor3f(0.52, 0.61, 0.26); 
	glVertex2i(140, 170);
	glVertex2i(175, 180);
	glVertex2i(145, 145);
	glEnd();
	glBegin(GL_TRIANGLES); //pata2.4
	glColor3f(0.72, 0.75, 0.34); 
	glVertex2i(145, 145);
	glVertex2i(175, 180);
	glVertex2i(185, 145);
	glEnd();
	glBegin(GL_TRIANGLES);  //pata3
	glColor3f(0.53, 0.62, 0.27); 
	glVertex2i(230, 215);
	glVertex2i(240, 270);
	glVertex2i(250, 240);
	glEnd();
	glBegin(GL_TRIANGLES);  //pata3.1
	glColor3f(0.74, 0.77, 0.35); 
	glVertex2i(240, 270);
	glVertex2i(260, 265);
	glVertex2i(250, 240);
	glEnd();
	glBegin(GL_TRIANGLES);  //pata3.2
	glColor3f(0.68, 0.73, 0.34);  
	glVertex2i(250, 240);
	glVertex2i(260, 265);
	glVertex2i(270, 245);
	glEnd();
	glBegin(GL_TRIANGLES);  //pata3.3
	glColor3f(0.50, 0.59, 0.26); 
	glVertex2i(230, 215);
	glVertex2i(250, 240);
	glVertex2i(255, 185);
	glEnd();
	glBegin(GL_TRIANGLES);  //pata3.4
	glColor3f(0.46, 0.54, 0.23); 
	glVertex2i(250, 240);
	glVertex2i(270, 245);
	glVertex2i(255, 185);
	glEnd();
	glBegin(GL_TRIANGLES);  //pata3.5
	glColor3f(0.57, 0.64, 0.38); 
	glVertex2i(220, 180);
	glVertex2i(230, 215);
	glVertex2i(255, 185);
	glEnd();
	glBegin(GL_TRIANGLES);  //pata3.6
	glColor3f(0.50, 0.59, 0.25); 
	glVertex2i(220, 180);
	glVertex2i(230, 145);
	glVertex2i(255, 185);
	glEnd();
	glBegin(GL_TRIANGLES);  //pata3.7
	glColor3f(0.72, 0.75, 0.39); 
	glVertex2i(230, 145);
	glVertex2i(255, 185);
	glVertex2i(265, 145);
	glEnd();
	glBegin(GL_TRIANGLE_STRIP);  //pata4
	glColor3f(0.34, 0.42, 0.18); 
	glVertex2i(255, 185);
	glVertex2i(267, 235);
	glVertex2i(260, 165);
	glVertex2i(270, 195);
	glEnd();
	glBegin(GL_TRIANGLES);  //pata4.1
	glColor3f(0.67, 0.71, 0.36); 
	glVertex2i(260, 165);
	glVertex2i(270, 195);
	glVertex2i(285, 165);
	glEnd();
	glBegin(GL_TRIANGLES);  //caparazon
	glColor3f(0.20, 0.27, 0.15);
	glVertex2i(110, 315);
	glVertex2i(140, 240);
	glVertex2i(125, 220);
	glEnd();
	glBegin(GL_TRIANGLES);  //cola uno
	glColor3f(0.51, 0.57, 0.26);
	glVertex2i(90, 235);
	glVertex2i(118, 275);
	glVertex2i(123, 240);
	glEnd();
	glBegin(GL_TRIANGLES);  //cola dos
	glColor3f(0.25, 0.33, 0.15);
	glVertex2i(110, 240);
	glVertex2i(118, 270);
	glVertex2i(123, 240);
	glEnd();
	glFlush();
}
void IniciarConfiguracion() {
	glClearColor(1, 1, 1, 0);
	glLineWidth(3.0);
	glOrtho(0, 800, 0, 800, 1, -1);
}
int main(int argc, char* args[]) {
	glutInit(&argc, args);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	glutInitWindowSize(1100, 600);
	glutInitWindowPosition(40, 40);
	glutCreateWindow("Tortugas:)");
	glutDisplayFunc(DibujarTortugas);
	IniciarConfiguracion();
	glutMainLoop();
	return 0;
}
