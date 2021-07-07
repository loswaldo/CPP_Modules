//
// Created by shaurmyashka on 7/7/21.
//

#ifndef CPP00_FIXED_H
#define CPP00_FIXED_H


class Fixed {
private:
	int value;
	static const int fraction = 8;
public:
	Fixed();
	Fixed(const Fixed &fixed);
	~Fixed();
	int getRawBits() const;
	Fixed& operator= (const Fixed &fixed);
	void setRawBits( int const raw );

};


#endif //CPP00_FIXED_H
