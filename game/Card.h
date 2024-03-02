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

extern const Rang rangs[9];

// В РАЗРАБОТКЕ!!!
extern const char masts[4];

#define Card(a, b) card_init(a, b)
typedef struct Card{
    char mast;
    Rang rang;

    int (*get_points)(struct Card* card);
    void (*show)(struct Card* card);
} Card;

Card* card_init(char mast, Rang rang);

#endif //UNTITLED33_CARD_H
