//
// Created by Stanislav on 29.02.2024.
//
#include "Player.h"
#include <stdio.h>

int player_get_points(struct Player* player);
bool player_take(struct Player* player, Card* card);

Player* player_init(char* name, Card* card){
    Player* result = malloc(sizeof(Player));
    result->hand = Hand(card);
    result->name = name;
    result->get_points = player_get_points;
    result->take = player_take;
}

int player_get_points(struct Player* player){
    return player->hand->points;
}

bool player_take(struct Player* player, Card* card){
//    printf("Player %s, do you wanna take extra card?(y/N)\n", player->name);
//    char answer;
//    scanf("%c\n", &answer);
//    if(answer == 'y'){
//
//    }
    return player->hand->take(player->hand, card);
}

