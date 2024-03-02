#include <stdio.h>
#include "game/Card.h"
#include "game/Deck.h"

int main() {
//    Game game = Game("Vasya", "Masha", "Roma");
//    game.play();
//    game.show_leaders();
//    system("chcp 65001");
//    Card* card = Card(masts[0], rangs[0]);
//    card->show(card);
//    printf("Card points: %d\n", card->get_points(card));

    system("pause");
    Deck* deck = Deck();
    for(int i = 0; i < 36; i++){
        Card* card = deck->get_card(deck);
        card->show(card);
        printf("Card points: %d\n", card->get_points(card));
    }
    return 0;
}
