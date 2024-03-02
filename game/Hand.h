//
// Created by Stanislav on 29.02.2024.
//

#ifndef UNTITLED33_HAND_H
#define UNTITLED33_HAND_H
#include "Card.h"
#include <stdbool.h>

#define Hand(card) hand_init(card)

typedef struct Hand{
    Card** cards;
    int _count;
    int points;

    bool (*take)(struct Hand* hand, Card* card);
    void (*show)(struct Hand* hand);
} Hand;

Hand* hand_init(Card* card);

#endif //UNTITLED33_HAND_H
