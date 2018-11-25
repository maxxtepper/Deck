#include "Suit.h"
Suit::Suit() {
}

Suit::~Suit() {
}

std::string Suit::*getSuit(int id) {
	if (id=0)
		return "CLUB";
	else if (id=1)
		return "DIAMOND";
	else if (id=2)
		return "HEART";
	else if (id=3)
		return "SPADE";
}
