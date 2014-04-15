#include "stdafx.h"
#include "rational.h"


void rat_create( Rational *res)
{
	int a, b;
	printf("enter int numer and denom\n");
	scanf_s("%d/%d", &a, &b);
	while (b == 0)
	{
		printf("denom is zero, not good\n");
		scanf_s("%d", &b);
	}
	res->numer = a;
	res->denom = b;
	
}

int rat_gcd(Rational *a)
{

	int gcd1;

	gcd1 = gcd(a->numer, a->denom);
	a->numer = a->numer / gcd1;
	a->denom = a->denom / gcd1;

	if (a->denom < 0)
		a->numer *= -1;
	else if (a->denom < 0 && a->numer < 0)
	{
		a->denom = abs(a->denom);
		a->numer = abs(a->numer);
	}

	if (a->denom == 0)
	{
		printf("denom is 0\n");

		return -1;
	}
	else return 0;
}


void rat_add(Rational *result, struct Rational *a, struct Rational *b)
{

	result->numer = a->numer * b->denom + b->numer * a->denom;
	result->denom = a->denom * b->denom;

	rat_gcd(result);
	
}

void rat_sub(Rational *result, Rational *a, Rational *b)
{

	result->numer = a->numer * b->denom - b->numer * a->denom;
	result->denom = a->denom * b->denom;

	rat_gcd(result);
}

void rat_mul(Rational *result, Rational *a, Rational *b)
{

	result->numer = a->numer * b->numer;
	result->denom = a->denom * b->denom;
	rat_gcd(result);
}

void rat_div(Rational *result, Rational *a, Rational *b)
{

	result->numer = a->numer * b->denom;
	result->denom = a->denom * b->numer;
	rat_gcd(result);
}

void rat_power(Rational *result, Rational *r, int power)
{
	int a, negative = 0;
	if (power < 0)
	{
		negative = 1;
		power = abs(power);
	}

	a = r->numer;
	result->numer = pow2(a, power);
	a = r->denom;
	result->denom = pow2(a, power);
	if (negative == 1)
	{
		a = result->numer;
		result->numer = result->denom;
		result->denom = a;
	}

}


int rat_compare(Rational *a, Rational *b)
{
	int c1 = a->numer * b->denom;
	int c2 = a->denom * b->numer;

	if (c1 == c2)
		return 0;
	else if (c1 < c2)
		return -1;
	else 
		return 1;
}


int rat_to_i(Rational *a) /* округление до ближ. целого */
{
	float i = a->numer / a->denom;
	float f = (float)a->numer / (float)a->denom;

	if ((f - i) >= 0.5)
		return (int)i + 1;
	else return (int)i;

}

double rat_to_d(Rational *a) /* преобразование в число с плав. точкой */
{
	double d = double(a->numer) / double(a->denom);

	return d;

}

void rat_print(Rational *a)
{
	printf("%d/%d\n", a->numer, a->denom);
}