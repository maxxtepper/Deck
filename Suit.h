#ifndef Suit_H
#define Suit_H

#include <string>

class Suit {
	public:
		Suit();
		~Suit();

		std::string *getSuit(int id);

	private:
		std::string _suit;
};

#endif
