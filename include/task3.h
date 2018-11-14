#include <iostream>
using namespace std;


template<class T, int n>

void  map(T (&array)[n], T(*change)(T))
{
	for (int i = 0; i < n; i++)
		array[i] = change(array[i]);
	
}