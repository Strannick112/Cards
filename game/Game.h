//
// Created by Stanislav on 29.02.2024.
//

#ifndef UNTITLED33_GAME_H
#define UNTITLED33_GAME_H
#include "Deck.h"
#include "Player.h"

#define Game(names, player_count) game_init(names, player_count)

typedef struct Game{
    Deck* deck;
    Player** players;
    int player_count;

//    void (*start)(struct Game* game);
    void (*move)(struct Game* game);
    void (*end)(struct Game* game);
} Game;

Game* game_init(char **names, int player_count);

#endif //UNTITLED33_GAME_H
