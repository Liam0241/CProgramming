#include "DeckOfCards.h"
#include <cstdlib>
#include <ctime>

DeckOfCards::DeckOfCards() : currentCard(0) {
    for (int suit = 0; suit < 4; ++suit) {
        for (int face = 0; face < 13; ++face) {
            deck.push_back(Card(face, suit));
        }
    }
}

void DeckOfCards::shuffle() {
    srand(static_cast<unsigned int>(time(0)));
    for (int i = deck.size() - 1; i > 0; --i) {
        int j = rand() % (i + 1);
        std::swap(deck[i], deck[j]);
    }
    currentCard = 0;
}

Card DeckOfCards::dealCard() {
    if (moreCards()) {
        return deck[currentCard++];
    }
    return Card(0, 0);
}

bool DeckOfCards::moreCards() const {
    return currentCard < static_cast<int>(deck.size());
}
