// war.h
#ifndef WAR_H
#define WAR_H

#define MAX_NOME 50
#define MAX_FRONTEIRAS 10

typedef struct {
    char nome[MAX_NOME];
    int continente;
    int dono;
    int exercitos;
    int fronteiras[MAX_FRONTEIRAS];
    int numFronteiras;
} Pais;

typedef struct {
    char nome[MAX_NOME];
    int bonus;
} Continente;

typedef struct {
    char nome[MAX_NOME];
    int paisesControlados[50];
    int numPaises;
} Jogador;

#endif
