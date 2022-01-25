#include <iostream>

template <typename T>
T sumTwo(T in1, T in2);


template <typename T>
T sumTwo(T in1, T in2)
{
	return in1 + in2;
}

template <typename T, typename U>
T getBigger(T in1, U in2);

template <typename T, typename U>
T getBigger(T in1, U in2)
{
	if (in1 > in2)
		return in1;
	return in2;
}