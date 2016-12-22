#pragma once
#include "Sort.h"

namespace algorithms {

template <class T>
class MergeSort :
	public Sort<T>
{
public:

	MergeSort()
	{
	}

	~MergeSort()
	{
	}

	virtual void sort(T *data, int n, Compare cmp);

	void sort(T *data, int p, int r, Compare cmp);

	void merge(T *data, int p, int q, int r, Compare cmp);
};

template <class T>
void algorithms::MergeSort<T>::sort(T *data, int p, int r, Compare cmp)
{
	if (p < r)
	{
		int q = (p + r) / 2;
		sort(data, p, q, cmp);
		sort(data, q + 1, r, cmp);
		merge(data, p, q, r, cmp);
	}
}

template <class T>
void algorithms::MergeSort<T>::merge(T *data, int p, int q, int r, Compare cmp)
{
	int n1 = q - p + 1;
	int n2 = r - q;
	T *left = new T[n1];
	T *right = new T[n2];
	memcpy(left, data + p, n1 * sizeof(T));
	memcpy(right, data + q + 1, n2 * sizeof(T));
	int i = 0, j = 0, k = 0;
	for (k = p; k <= r; ++k)
	{
		if (cmp(left[i], right[j]))
		{
			data[k] = left[i++];
			if(i == n1)
				break;
		}
		else
		{
			data[k] = right[j++];
			if (j == n2)
				break;
		}
	}

	++k;
	if (i == n1)
	{
		for (;k<=r;++k)
		{
			data[k] = right[j++];
		}
	}
	else
	{
		for (; k <= r; ++k)
		{
			data[k] = left[i++];
		}
	}

	delete[] left;
	delete[] right;
}

template <class T>
inline void algorithms::MergeSort<T>::sort(T *data, int n, Compare cmp)
{
	sort(data, 0, n - 1, cmp);
}

}