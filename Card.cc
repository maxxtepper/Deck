#include "Card.h"
Card::Card(int suit, int value) {
	_suit = suit;
	_value = value;
}

Card::~Card() {
}

int Card::getSuit() {
	return _suit;
}

int Card::getValue() {
	return _value;
}
