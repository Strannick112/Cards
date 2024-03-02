//
// Created by Stanislav on 29.02.2024.
//

#include "Deck.h"
//#include "Card.h"
#include <stdio.h>

Card* deck_get_card(struct Deck* deck);
void deck_sort(struct Deck* deck);

Deck* deck_init(){
    Deck* result = malloc(sizeof(Deck));
    for(int mast_index = 0; mast_index < 4; mast_index++){
        for(int rang_index = 0; rang_index < 9; rang_index++){
            result->_deck[mast_index * 9 + rang_index] = Card(
                    masts[mast_index], rangs[rang_index]
            );
        }
    }

    result->sort = deck_sort;
    result->get_card = deck_get_card;
    result->sort(result);
    return result;
}

Card* deck_get_card(struct Deck* deck){
    if(deck->_index < 36)
        return deck->_deck[deck->_index++];
    else{
        printf("Карты кончились!\n");
        exit(-1);
    }
}

void deck_sort(struct Deck* deck){
    for(int i = 0; i < 100; i++){
        int first_rand = rand() % 36;
        int second_rand = rand() % 36;
        Card* card = deck->_deck[first_rand];
        deck->_deck[first_rand] = deck->_deck[second_rand];
        deck->_deck[second_rand] = card;
    }
    deck->_index = 0;
}