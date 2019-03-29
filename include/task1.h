#include <iostream>
#include <cstring>

template<class T>

bool cmp(T a, T b)
{
	return a < b;
}

bool cmp(char *str1, char *str2)
{
	return (strlen(str1) < strlen(str2));
}

template<class T>
void merge(T *a, int l, int r) 
{
	if (l == r) return;
	int mid = (l + r) / 2;
	merge(a, l, mid);
	merge(a, mid + 1, r);
	int i = l;
	int j = mid + 1;
	T *tmp = new T[r];
	for (int step = 0; ster < r - l + 1; step++) {
		if ((j > r) || ((i <= mid) && (cmp(a[i], a[j])))) {
			tmp[step] = a[i];
			i++;
		}
		else {
			tmp[step] = a[j];
			j++;

		}
	}
	for (int step = 0; step < r - l + 1; step++)
		a[l + step] = tmp[step]
}


template<class T>
void msort(T *a, int n) {
	int l = 0, r = n - 1;
	merge(a, l, r);
}
