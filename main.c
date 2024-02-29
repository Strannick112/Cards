#include <stdio.h>
#include "game/Card.h"

int main() {
//    Game game = Game("Vasya", "Masha", "Roma");
//    game.play();
//    game.show_leaders();
    system("chcp 65001");
    Card* card = Card(L'♥', rangs[1]);
    card->show(card);
    printf("Card points: %d", card->get_points(card));
    return 0;
}
