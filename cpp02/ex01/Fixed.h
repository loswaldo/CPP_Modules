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
	Fixed(const int i);
	Fixed(const float i);
	float toFloat() const;
	int toInt() const;
};

std::ostream& operator<< (std::ostream &out, const Fixed &fixed);

#endif //CPP00_FIXED_H
