#include "Card.h"

std::vector<std::string> Card::faceNames = { "Ace", "Deuce", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King" };
std::vector<std::string> Card::suitNames = { "Hearts", "Diamonds", "Clubs", "Spades" };

Card::Card(int face, int suit) : face(face), suit(suit) {}

int Card::getFace() const {
    return face;
}

int Card::getSuit() const {
    return suit;
}

std::string Card::toString() const {
    return faceNames[face] + " of " + suitNames[suit];
}
