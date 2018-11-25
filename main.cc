#include <iostream>
#include <vector>
#include <new>
#include "Card.h"

enum SUIT {CLUB,DIAMOND,HEART,SPADE,JOKER_S};
enum VALUE {ACE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE,TEN,JACK,QUEEN,KING,JOKER_V};

int main(int argc, char* argv[]) {
	// A test: The Deck Maker
	// This is the first iteration of the deck maker. I will soon commit this to the scheme, as its own repo, as its own object.
	//
	// The Deck 
	std::vector<Card*>deck;

	// The Deck Maker
	for (int id=0; id<54; id++) {
		//	Build a suite?
		for (int suit=0; suit<5; suit++) {
			for (int value=0; value<14; value++) {
				Card *card = new Card(suit,value);
				deck.push_back(card);
			}
		}
	}

	//	Test the Maker
	//	WOW: New Repo: The Test Maker
	for (int id=0; id<54; id++) {
		std::cout << deck[id]->getSuit() << "," << deck[id]->getValue() << std::endl;
	}
	

	// The Deck Breaker
	for (int id=0; id<54; id++)
		delete deck[id];
	
	return 0;
}
