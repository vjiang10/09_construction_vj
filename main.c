#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "stdio.h"
#include "construction.h"

int main() {
    srand(time(NULL));

    printf("Challenger #1: \n");
    char name1[8] = "Pikachu";
    struct Pokemon *p1;
    p1 = poke(name1, abs(rand()/10000000));
    poke_print(p1);

    printf("\n");

    printf("Challenger #2: \n");
    char name2[10] = "Squirtle";
    struct Pokemon *p2;
    p2 = poke(name2, abs(rand()/10000000));
    poke_print(p2);

    printf("\n");

    printf("Battle commences... \n");
    while (p1->hp && p2->hp) {
        int p1_damage_p2 = abs(5*rand()/100000000);
        printf("%s hits %s with %d damage!\n", p1->name, p2->name, p1_damage_p2);
        // p2 hp modification
        poke_damage(p2, p1_damage_p2);

        if (!p2->hp) break;

        int p2_damage_p1 = abs(2*rand()/100000000);
        printf("%s hits %s with %d damage!\n", p2->name, p1->name, p2_damage_p1);
        // p1 hp modification
        poke_damage(p1, p2_damage_p1);
    }

    printf("Battle ends...\n");
}