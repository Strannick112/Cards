//
// Created by Stanislav on 29.02.2024.
//

#include "Deck.h"

Card* get_card(struct Deck* deck){
    if(deck->_index < 36)
        return deck->_deck[deck->_index++];
    else{
        printf("Карты кончились!\n");
        exit(-1);
    }
}

void sort(struct Deck* deck){
    for(int i = 0; i < 100; i++){
        int first_rand = rand() % 36;
        int second_rand = rand() % 36;
        Card* card = deck->_deck[first_rand];
        deck->_deck[first_rand] = deck->_deck[second_rand];
        deck->_deck[second_rand] = card;
    }
    deck->_index = 0;
}