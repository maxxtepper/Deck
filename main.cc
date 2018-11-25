#include <iostream>
#include <vector>
#include <new>
#include "Deck.h"

enum SUIT {CLUB,DIAMOND,HEART,SPADE,JOKER_S};
enum VALUE {ACE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE,TEN,JACK,QUEEN,KING,JOKER_V};

std::string suits[5] = {"C","D","H","S","JS"};
std::string values[14] = {"A","2","3","4","5","6","7","8","9","T","J","Q","K","JV"};
//std::string suits[5] = {"CLUB","DIAMOND","HEART","SPADE","JOKER_S"};
//std::string values[14] = {"ACE","TWO","THREE","FOUR","FIVE","SIX","SEVEN","EIGHT","NINE","TEN","JACK","QUEEN","KING","JOKER_V"};

int main(int argc, char* argv[]) {
	// A test: The Deck Maker
	// This is the first iteration of the deck maker. I will soon commit this to the scheme, as its own repo, as its own object.
	//
	// The Deck 
	Deck deck;

	int count = deck.getCount();
	for (int i=0; i<count; i++)
		deck.printCard(i);

	//	Test the Maker
	//	WOW: New Repo: The Test Maker
	

	// The Deck Breaker
	
	return 0;
}
