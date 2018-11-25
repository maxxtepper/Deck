#ifndef Card.H
#define Card.H


class Card {
	public:
		Card(int suit, int value);
		~Card();
		int enum{CLUB,DIAMOND,HEART,SPADE};
		int enum{ACE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE,TEN,JACK,QUEEN,KING,JOKER};

		int getSuite();
		int getValue();

	private:
		//	Together, the suite and the value create the full unique id of each card
		int _suite;
		int _value;	// same as id
};

#endif
