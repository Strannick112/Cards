//
// Created by Stanislav on 29.02.2024.
//

#include "Card.h"
#include <stdio.h>

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
const char masts[4] = {'\x03', '\x04', '\x05', '\x06'};

int get_points(struct Card* card);
void show(struct Card* card);

Card* card_init(char mast, Rang rang){
    Card* result = malloc(sizeof(Card));
    result->rang = rang;
    result->mast = mast;
    result->get_points = get_points;
    result->show = show;
    return result;
}

int get_points(struct Card* card) {
    return card->rang.points;
}

void show(struct Card* card){
    printf("-------\n");
    wprintf(L"%C%C     \n", card->rang.symbol, card->mast);
    printf("       \n");
    printf("       \n");
    wprintf(L"     %C%C\n", card->mast, card->rang.symbol);
    printf("-------\n");
}
