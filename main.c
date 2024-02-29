#include <stdio.h>
#include "game/Card.h"

int main() {
//    Game game = Game("Vasya", "Masha", "Roma");
//    game.play();
//    game.show_leaders();
    Card* card = Card(masts[1], rangs[1]);
    card->show(card);
    printf("Card points: %d", card->get_points(card));
    return 0;
}
