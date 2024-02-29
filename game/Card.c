//
// Created by Stanislav on 29.02.2024.
//

#include "Card.h"
#include <stdio.h>

int get_points(struct Card* card) {
    return card->rang.points;
}

void show(struct Card* card){
    printf("-------\n");
    wprintf(L"%lc%lc     \n", card->rang.symbol, card->mast);
    printf("       \n");
    printf("       \n");
    wprintf(L"     %lc%lc\n", card->mast, card->rang.symbol);
    printf("-------\n");
}
