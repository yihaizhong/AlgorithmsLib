#pragma once
#include "Sort.h"

namespace algorithms {

template <class T>
class InsertSort :
	public Sort<T>
{
public:
	InsertSort(){}
	~InsertSort(){}
	virtual void sort(T *data, int n, Compare cmp);
};


template <class T>
inline void algorithms::InsertSort<T>::sort(T *data, int n, Compare cmp /*= nullptr*/)
{
	for (int i=1;i<n;++i)
	{
		T key = data[i];
		int j = i - 1;
		while (cmp(key,data[j]) && j >= 0)
		{
			data[j + 1] = data[j];
			--j;
		}
		data[j + 1] = key;
	}
}

}