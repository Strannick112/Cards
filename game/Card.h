//
// Created by Stanislav on 29.02.2024.
//

#ifndef UNTITLED33_CARD_H
#define UNTITLED33_CARD_H
#include <stdlib.h>

typedef struct Rang{
    char symbol;
    int points;
} Rang;

const Rang rangs[9] = {
        {'6', 6},
        {'7', 7},
        {'8', 8},
        {'9', 9},
        {'X', 10},
        {'J', 1},
        {'Q', 2},
        {'K', 3},
        {'A', 11}
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

Card* card_init(char mast, Rang rang);

#endif //UNTITLED33_CARD_H
