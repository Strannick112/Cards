//
// Created by Stanislav on 29.02.2024.
//
#include <stdio.h>
#include "Game.h"

//void game_start(struct Game* game);
void game_move(struct Game* game);
void game_end(struct Game* game);

Game* game_init(char **names, int player_count){
    Game* result = malloc(sizeof(Game));
    result->deck = Deck();
    result->players = calloc(player_count, sizeof(Player*));
    for(int i = 0; i < player_count; i++)
        result->players[i] = Player(names[i], result->deck->get_card(result->deck));
    result->player_count = player_count;

//    result->start = game_start;
    result->move = game_move;
    result->end = game_end;

    return result;
}

//void game_start(struct Game* game){
//    printf("Initialization...\n");
//    for(int i = 0; i < game->player_count; i++){
//        game->players[i]->take(game->players[i], game->deck->get_card(game->deck));
//    }
//    printf("Done!\n");
//}

void game_move(struct Game* game){
    for(int i = 0; i < game->player_count; i++){
        while(true){
            game->players[i]->hand->show(game->players[i]->hand);
            printf(
                "Player %s, do you wanna take extra card?(y/N)\n",
                game->players[i]->name
            );
            char answer;
            scanf("%c", &answer);
            fflush(stdin);
//            answer = fgetc(stdin);
            if(answer == 'y'){
                game->players[i]->take(
                        game->players[i],
                        game->deck->get_card(game->deck)
                );
            } else{
                printf("Next player!\n");
                break;
            }
            if(!game->players[i]->get_points(game->players[i])){
                game->players[i]->hand->show(game->players[i]->hand);
                printf("You lose :-(\n");
                break;
            }
        }
    }
}

void game_end(struct Game* game){
    int winner_points = 0;
    for(int i = 0; i < game->player_count; i++){
        int player_points = game->players[i]->get_points(game->players[i]);
        if(player_points > winner_points){
            winner_points = player_points;
        }
    }
    if (winner_points == 0){
        printf("All players loooose...\n");
    }
    else {
        for (int i = 0; i < game->player_count; i++) {
            int player_points = game->players[i]->get_points(game->players[i]);
            if (player_points == winner_points) {
                printf(
                        "Player %s is winner with %d points! Congratulations!!!\n",
                        game->players[i]->name,
                        winner_points
                );
            }
        }
    }
}
