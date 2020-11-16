#include "sculptor.h"

#include <iostream>

int main ()
{
    Sculptor bowlingScene (501, 101, 241);

    auto insertPin = [&] (int x, int y, int z) {
        bowlingScene.setColor (1, 1, 1, 1);                          // Branco
        bowlingScene.putEllipsoid (x, y, z, 8, 15, 8);               // Corpo
        bowlingScene.cutBox (x - 5, x + 5, 0, y - 12, z - 5, z + 5); // Corte no fundo
        bowlingScene.putEllipsoid (x, y + 15, z, 3, 8, 3);           // Pescoco
        bowlingScene.putSphere (x, y + 21, z, 5);                    // Cabeca

        bowlingScene.setColor (1, 0, 0, 1);      // Vermelho
        bowlingScene.putSphere (x, y + 8, z, 6); // Detalhe
    };

    auto insertBall = [&] (int x, int y, int z, float r, float g, float b) {
        bowlingScene.setColor (r, g, b, 1);   // Cor
        bowlingScene.putSphere (x, y, z, 10); // Superficie

        bowlingScene.setColor (0, 0, 0, 1);  // Preto
        bowlingScene.putSphere (x, y, z, 9); // Interior

        bowlingScene.cutSphere (x, y + 8, z + 5, 2);     // Furo 1
        bowlingScene.cutSphere (x + 6, y + 7, z + 1, 2); // Furo 2
        bowlingScene.cutSphere (x, y + 9, z, 2);         // Furo 3
    };

    auto insertFloor = [&] (int x, int y, int z) {
        bowlingScene.setColor (0, 0, 0, 1);                           // Preto
        bowlingScene.putBox (x, x + 400, y, y + 1, z, z + 120);       // Lateral
        bowlingScene.setColor (1, 0.8, 0.4, 1);                       // Caramelo
        bowlingScene.putBox (x, x + 400, y, y + 4, z + 20, z + 100);  // Superficie
        bowlingScene.setColor (150, 150, 150, 1);                     // Cinza
        bowlingScene.putBox (x, x + 400, y, y + 6, z, z + 2);         // Borda esquerda
        bowlingScene.putBox (x, x + 400, y, y + 6, z + 118, z + 120); // Borda esquerda
    };

    auto insertBallSelector = [&] (int x, int y, int z) {
        bowlingScene.setColor (0, 0, 0, 0.5);                                  // Cinza
        bowlingScene.putBox (x, x + 80, y, y + 40, z, z + 30);                 // Base
        bowlingScene.setColor (0, 0, 0, 0.25);                                 // Cinza
        bowlingScene.putEllipsoid (x + 60, y + 50, z + 17, 50, 15, 20);        // Seletor
        bowlingScene.cutEllipsoid (x + 30, y + 50, z + 17, 40, 15, 16);        // Orifício
        bowlingScene.cutBox (x, x + 60, y + 40, y + 70, z - 10, z + 40);       // Saida
        bowlingScene.cutBox (x + 80, x + 120, y + 30, y + 70, z - 10, z + 40); // Entrada
    };

    insertBallSelector (0, 0, 120);
    insertBall (20, 50, 135, 1, 1, 0);
    insertBall (40, 50, 135, 0.75, 0, 0);
    insertBall (60, 50, 135, 0.25, 0, 0.75);

    insertFloor (0, 0, 0);

    insertBall (30, 15, 60, 1, 0, 0);

    insertPin (380, 13, 30);
    insertPin (380, 13, 60);
    insertPin (380, 13, 90);
    insertPin (350, 13, 45);
    insertPin (350, 13, 75);
    insertPin (320, 13, 60);


    bowlingScene.writeOFF ((char*)"boliche.off");

    return 0;
}