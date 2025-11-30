// main.c
#include <stdio.h>
#include <string.h>
#include "war.h"

int main() {
    Pais brasil;

    strcpy(brasil.nome, "Brasil");
    brasil.continente = 0;
    brasil.dono = 1; // Jogador 1
    brasil.exercitos = 5;
    brasil.numFronteiras = 0;

    printf("Pais: %s\n", brasil.nome);
    printf("Continente: %d\n", brasil.continente);
    printf("Dono: Jogador %d\n", brasil.dono);
    printf("Exércitos: %d\n", brasil.exercitos);

    return 0;
}
