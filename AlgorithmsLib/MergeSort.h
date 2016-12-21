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

	void merge(T *data, int p, int q, int r);
};

template <class T>
void algorithms::MergeSort<T>::merge(T *data, int p, int q, int r)
{
	int n1 = q - p + 1;
	int n2 = r - q;
	T *left = new T[n1+1]
}

template <class T>
inline void algorithms::MergeSort<T>::sort(T *data, int n, Compare cmp)
{

}

}