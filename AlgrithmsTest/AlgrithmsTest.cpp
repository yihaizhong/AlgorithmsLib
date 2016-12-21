// AlgrithmsTest.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "InsertSort.h"

using namespace std;
using namespace algorithms;

template <class T>
void show(const T *data, int n)
{
	while (n--)
	{
		cout << *data++ << "\t";
	}
	cout << endl;
}
void TestInsertSort();



int main()
{
	TestInsertSort();
    return 0;
}


void TestInsertSort()
{
	typedef double ValueType;
	InsertSort<ValueType> is;
	ValueType a[] = { 15,20,25,3,2,5,3,2,1,4,53,5,3,4 };
	cout << "before:" << endl;
	show(a, sizeof(a) / sizeof(ValueType));
	is.sort(a, sizeof(a) / sizeof(ValueType), ValueCompare);
	cout << "after:" << endl;
	show(a, sizeof(a) / sizeof(ValueType));
}