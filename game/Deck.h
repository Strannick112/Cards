//
// Created by Stanislav on 29.02.2024.
//

#ifndef UNTITLED33_DECK_H
#define UNTITLED33_DECK_H

#include "Card.h"

typedef struct Deck{
    Card* _deck[36];
    int _index;

    Card* (*get_card)(struct Deck* deck);
    void (*sort)(struct Deck* deck);
} Deck;

Card* get_card(struct Deck* deck);
void sort(struct Deck* deck);

Deck* deck_init(){
    Deck* result = malloc(sizeof(Deck));
    for(int mast_index = 0; mast_index < 4; mast_index++){
        for(int rang_index = 0; rang_index < 9; rang_index++){
            result->_deck[mast_index * 9 + rang_index] = Card(
                    masts[mast_index], rangs[rang_index]
            );
        }
    }

    result->sort = sort;
    result->get_card = get_card;
    result->sort(result);
    return result;
}

#endif //UNTITLED33_DECK_H
