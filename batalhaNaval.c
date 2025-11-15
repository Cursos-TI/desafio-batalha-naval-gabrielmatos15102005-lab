#include <stdio.h>


int main() {

    
    int navioVertical[3][2];
    int navioHorizontal[3][2];

   // Posicionamento dos Navios


    // Navio vertical

    navioVertical[0][0] = 2;  navioVertical[0][1] = 1;
    navioVertical[1][0] = 2;  navioVertical[1][1] = 2;
    navioVertical[2][0] = 2;  navioVertical[2][1] = 3;

    // Navio horizontal

    navioHorizontal[0][0] = 5; navioHorizontal[0][1] = 7;
    navioHorizontal[1][0] = 6; navioHorizontal[1][1] = 7;
    navioHorizontal[2][0] = 7; navioHorizontal[2][1] = 7;


    // Exibição das Coordenadas

    printf("=== Coordenadas do Navio Vertical ===\n");
    for (int i = 0; i < 3; i++) {
        printf("Parte %d: (X = %d, Y = %d)\n",
            i + 1,
            navioVertical[i][0],
            navioVertical[i][1]);
        }


    printf("\n=== Coordenadas do Navio Horizontal ===\n");
    for (int i = 0; i < 3; i++) {
        printf("Parte %d: (X = %d, Y = %d)\n",
            i + 1,
            navioHorizontal[i][0],
            navioHorizontal[i][1]);
        }





    return 0;
}
