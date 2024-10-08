#ifndef RATIONAL_H
#define RATIONAL_H

class Rational {
private:
	int num;
	int den;		//	denominator
public:
	Rational();
	Rational(int num);
	Rational(int num, int den);
	~Rational();
	
	Rational& operator=(const Rational& rhs);
	
	bool operator==(const Rational& rhs);
	
	const Rational operator+(const Rational& rhs);
	const Rational operator-(const Rational& rhs);
	const Rational operator*(const Rational& rhs);
	const Rational operator/(const Rational& rhs);
	
	int getNum();
	int getDen();
	
	void setNum(int num);
	void setDen(int den);
};

#endif
