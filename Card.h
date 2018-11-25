#ifndef Card_H
#define Card_H


class Card {
	public:
		Card(int suit, int value);
		~Card();

		int getSuit();
		int getValue();

	private:
		//	Together, the suite and the value create the full unique id of each card
		int _suit;
		int _value;	// same as id

		enum SUIT {CLUB,DIAMOND,HEART,SPADE,JOKER_S};
		enum VALUE {ACE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE,TEN,JACK,QUEEN,KING,JOKER_V};
};

#endif
