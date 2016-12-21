#pragma once


namespace algorithms {

template<class T>
class Sort
{
public:
	Sort();
	virtual ~Sort();
	typedef bool(*Compare)(const T &left, const T &right);
	virtual void sort(T *data, int n, Compare cmp) = 0;
};

template<class T>
algorithms::Sort<T>::~Sort()
{

}

template<class T>
algorithms::Sort<T>::Sort()
{

}

template<class T>
bool ValueCompare(const T &left, const T &right)
{
	return left < right;
}
}
