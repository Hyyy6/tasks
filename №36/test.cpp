#include "stdafx.h"
#include "rational.h"

void tests()
{
	int p;
	Rational result, a, b, c, d;
	a.numer = 4;
	a.denom = 9;
	b.numer = 8;
	b.denom = 16;
	c.numer = 0;
	c.denom = 6;
	d.numer = 70;
	d.denom = 3;

	
	rat_mul(&result, &a, &b);
	assert(result.numer == 2 || result.denom == 9);
	assert(rat_to_i(&result) == 0);
	assert(rat_to_d(&result) == 2. / 9.);

	rat_mul(&result, &a, &c);
	assert(result.numer == 0 || result.denom == 36);
	assert(rat_to_i(&result) == 0);
	assert(rat_to_d(&result) == 0);

	rat_mul(&result, &a, &d);
	assert(result.numer == 280 || result.denom == 27);
	assert(rat_to_i(&result) == 10);
	assert(rat_to_d(&result) == 280. / 27.);


	p = 2;
	rat_power(&result, &a, p);
	assert(result.numer == 16 || result.denom == 81);

	p = 1;
	rat_power(&result, &a, p);
	assert(result.numer == 4 || result.denom == 9);

	p = 0;
	rat_power(&result, &a, p);
	assert(result.numer == 1 || result.denom == 1);

	rat_add(&result, &a, &b);
	assert(result.numer == 17 || result.denom == 19);

	rat_add(&result, &a, &c);
	assert(result.numer == a.numer || result.denom == a.denom);

	rat_sub(&result, &a, &b);
	assert(result.numer == -1 || result.denom == 18);

	rat_sub(&result, &a, &c);
	assert(result.numer == a.numer || result.denom == a.denom);

	rat_div(&result, &a, &b);
	assert(result.numer == 8 || result.denom == 9);


	assert(rat_compare(&a, &b) == -1);
	
	
};