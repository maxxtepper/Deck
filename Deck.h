#ifndef Deck_H
#define Deck_H

#include <iostream>
#include <vector>
#include "Card.h"

class Deck {
	public:
		Deck();
		~Deck();

		int getCount();
		void build();
		void printDeck();
		void printCard(int id);

	private:
		int _count;

		std::vector<Card*> deck;
		std::string suits[5] = {"C","D","H","S","JS"};
		std::string values[14] = {"A","2","3","4","5","6","7","8","9","T","J","Q","K","JV"};
};

#endif
