#ifndef CONSTRUCTION_H
#define CONSTRUCTION_H

struct Pokemon {
    char name[256];
    int hp;
};

struct Pokemon *poke(char *n, int h);

void poke_print(struct Pokemon *poke);

void poke_damage(struct Pokemon *poke, int damage);

#endif

