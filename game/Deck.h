//
// Created by Stanislav on 29.02.2024.
//

#ifndef UNTITLED33_DECK_H
#define UNTITLED33_DECK_H

#include "Card.h"

#define Deck() deck_init()

typedef struct Deck{
    Card* _deck[36];
    int _index;

    Card* (*get_card)(struct Deck* deck);
    void (*sort)(struct Deck* deck);
} Deck;

Deck* deck_init();

#endif //UNTITLED33_DECK_H
