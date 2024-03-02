//
// Created by Stanislav on 02.03.2024.
//

#ifndef UNTITLED33_PLAYER_H
#define UNTITLED33_PLAYER_H
#include "Hand.h"
#define Player(name, card) player_init(name, card);

typedef struct Player{
    Hand* hand;
    char* name;

    bool (*take)(struct Player* player, Card* card);
    int (*get_points)(struct Player* player);
} Player;

Player* player_init(char* name, Card* card);

#endif //UNTITLED33_PLAYER_H
