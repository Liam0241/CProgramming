#include <iostream>
#include "DeckOfCards.h"

int main() {
    DeckOfCards deck;
    deck.shuffle();

    while (deck.moreCards()) {
        Card card = deck.dealCard();
        std::cout << card.toString() << std::endl;
    }

    return 0;
}
