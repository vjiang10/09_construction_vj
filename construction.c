#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "construction.h"

struct Pokemon *poke (char *n, int h) {

    struct Pokemon *np;

    np = malloc(sizeof(struct Pokemon));

    strncpy(np->name, n, sizeof(np->name)-1);
    np->hp = h;

    return np;
}

void poke_print (struct Pokemon* poke) {
    printf("%s has %d healthpoints\n", poke->name, poke->hp);
}

void poke_damage (struct Pokemon* poke, int damage) {
    int n = poke->hp;
    if (n < damage) {
        poke->hp = 0;
        printf("%s faints\n", poke->name);
    }
    else {
        poke->hp -= damage;
        printf("%s has %d healthpoints left\n", poke->name, poke->hp);
    }
}