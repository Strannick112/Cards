#include <stdio.h>
#include "game/Deck.h"
#include "game/Player.h"

int main() {
//    Game game = Game("Vasya", "Masha", "Roma");
//    game.play();
//    game.show_leaders();
//    system("chcp 65001");
//    Card* card = Card(masts[0], rangs[0]);
//    card->card_show(card);
//    printf("Card points: %d\n", card->card_get_points(card));

//    system("pause");
    Deck* deck = Deck();
//    for(int i = 0; i < 36; i++){
//        Card* card = deck->deck_get_card(deck);
//        card->card_show(card);
//        printf("Card points: %d\n", card->card_get_points(card));
//    }

    Player* player = Player("Slavik", deck->get_card(deck));
    printf("%d\n", player->get_points(player));
    return 0;
}
