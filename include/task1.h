#include <iostream>


template<typename T>

bool cmp(T a, T b)
{
	return a < b;
}

bool cmp(char *str1, char *str2)
{
	return (strlen(str1) < strlen(str2));
}

template<typename T>

void merge(T *a, int l, int r)
{
	if (l == r) return;
	int ser = (l + r) / 2;
	merge(a, l, ser);
	merge(a, ser + 1, r);
	int i = l, j = ser + 1;
	T *tmp = new T[r];
	for (int k = 0; k < r - l + 1; k++)
	{
		if ((j > r) || ((i <= ser) && (cmp(a[i], a[j]))))
		{
			tmp[k] = a[i];
			i++;
		}
		else
		{
			tmp[k] = a[j];
			j++;
		}
	}
	for (int i = 0; i < r - l + 1; i++)
		a[l + i] = tmp[i];
}

template <typename T>

void msort(T *a, int n)
{
	int l = 0, r = n - 1;
	merge(a, l, r);
}
