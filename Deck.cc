#include "Deck.h"
Deck::Deck() {
	for (int suit=0; suit<5; suit++) {
		for (int value=0; value<14; value++) {
			if (!((suit==2 && value==13) || (suit==3 && value==13) )) {
				if (suit!=4) {
					Card *card = new Card(suit,value);
					deck.push_back(card);
					_count++;
				}
			}
		}
	}
}

Deck::~Deck() {
	for (int i=0; i<_count; i++)
		delete deck[i];
}

int Deck::getCount() {
	return _count;
}

void Deck::build() {
}

void Deck::printDeck() {
	for (int id=0; id<54; id++) {
		int suit = deck[id]->getSuit();
		int value = deck[id]->getValue();
		std::cout << values[value] << suits[suit] << std::endl;
	}
}

void Deck::printCard(int id) {
	int suit = deck[id]->getSuit();
	int value = deck[id]->getValue();
	std::cout << values[value] << suits[suit] << std::endl;
}
