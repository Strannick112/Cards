//
// Created by Stanislav on 29.02.2024.
//

#ifndef UNTITLED33_CARD_H
#define UNTITLED33_CARD_H
#include <stdlib.h>

typedef struct Rang{
    wchar_t symbol;
    int points;
} Rang;

const Rang rangs[9] = {
        {L'6', 6},
        {L'7', 7},
        {L'8', 8},
        {L'9', 9},
        {L'X', 10},
        {L'J', 1},
        {L'Q', 2},
        {L'K', 3},
        {L'A', 11}
        };

// В РАЗРАБОТКЕ!!!
const wchar_t masts[4] = {L'♦', L'♥', L'♠', L'♣'};

#define Card(a, b) card_init(a, b)
typedef struct Card{
    wchar_t mast;
    Rang rang;

    int (*get_points)(struct Card* card);
    void (*show)(struct Card* card);
} Card;

int get_points(struct Card* card);
void show(struct Card* card);

Card* card_init(wchar_t mast, Rang rang){
    Card* result = malloc(sizeof(Card));
    result->rang = rang;
    result->mast = mast;
    result->get_points = get_points;
    result->show = show;
    return result;
}

#include "Card.c"
#endif //UNTITLED33_CARD_H
