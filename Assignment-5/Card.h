#ifndef CARD_H
#define CARD_H

#include <string>
#include <vector>

class Card {
private:
    int face;
    int suit;

public:
    static std::vector<std::string> faceNames;
    static std::vector<std::string> suitNames;

    Card(int face, int suit);

    int getFace() const;
    int getSuit() const;

    std::string toString() const;
};

#endif
