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
	bool operator== (const Fixed &fixed) const;
	bool operator!= (const Fixed &fixed) const;
	bool operator<= (const Fixed &fixed) const;
	bool operator>= (const Fixed &fixed) const;
	bool operator> (const Fixed &fixed) const;
	bool operator< (const Fixed &fixed) const;

	Fixed operator- (const Fixed &fixed) const;
	Fixed operator+ (const Fixed &fixed) const;
	Fixed operator/ (const Fixed &fixed) const;
	Fixed operator* (const Fixed &fixed) const;

	Fixed& operator++();
	Fixed& operator--();

	Fixed operator++(int);
	Fixed operator--(int);

	static Fixed & min(Fixed & first, Fixed & second);
	static const Fixed & min(const Fixed & first, const Fixed & second);
	static Fixed & max(Fixed & first, Fixed & second);
	static const Fixed & max(const Fixed & first, const Fixed & second);
	void setRawBits( int const raw );
	Fixed(const int i);
	Fixed(const float i);
	float toFloat() const;
	int toInt() const;
};

std::ostream& operator<< (std::ostream &out, const Fixed &fixed);

#endif //CPP00_FIXED_H
