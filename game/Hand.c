//
// Created by Stanislav on 29.02.2024.
//

#include "Hand.h"
#include <stdio.h>

bool hand_take(struct Hand* hand, Card* card);
bool _hand_calculate_points(struct Hand* hand, Card* card);
void hand_show(struct Hand* hand);

Hand* hand_init(Card* card){
    Hand* result = malloc(sizeof(Hand));
    result->cards = malloc(sizeof(Card*));
    result->cards[0] = card;
    result->_count = 1;
    result->points = card->get_points(card);
    result->take = hand_take;
    result->show = hand_show;

    return result;
}

bool hand_take(struct Hand* hand, Card* card){
    hand->cards = realloc(hand->cards, (++hand->_count) * sizeof(Card*));
    hand->cards[hand->_count - 1] = card;
    return _hand_calculate_points(hand, card);
}

bool _hand_calculate_points(struct Hand* hand, Card* card) {
    if(hand->points == 0)
        return false;
    hand->points += card->get_points(card);
    if(hand->points > 21) {
        hand->points = 0;
        return false;
    }
    return true;
}

void hand_show(struct Hand* hand){
    for(int i = 0; i < hand->_count; i++){
        hand->cards[i]->show(hand->cards[i]);
    }
    printf("Points: %d\n", hand->points);
}
