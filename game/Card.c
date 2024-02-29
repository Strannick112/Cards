//
// Created by Stanislav on 29.02.2024.
//

#include "Card.h"
#include <stdio.h>

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
    printf("-------");
    printf("%c%lc     ", card->rang.symbol, card->mast);
    printf("       ");
    printf("       ");
    printf("     %lc%c", card->mast, card->rang.symbol);
    printf("-------");
}
