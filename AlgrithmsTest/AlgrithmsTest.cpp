// AlgrithmsTest.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "InsertSort.h"
#include "MergeSort.h"

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

void TestMerge();
void TestMergeSort();






int main()
{
	TestInsertSort();
	TestMerge();
	TestMergeSort();
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

void TestMerge()
{
	double a[]{ 1,3,5,8,9,55, 0,4,6,8,40,58,59,60};
	//double b[]{  };
	MergeSort<double> ms;
	ms.merge(a, 0, 5, 13,ValueCompare);
	show(a, 14);
}

void TestMergeSort()
{
	typedef double ValueType;
	MergeSort<ValueType> is;
	ValueType a[] = { 15,20,25,3,2,5,3,2,1,4,53,5,3,4 };
	cout << "before:" << endl;
	show(a, sizeof(a) / sizeof(ValueType));
	is.sort(a, sizeof(a) / sizeof(ValueType), ValueCompare);
	cout << "after:" << endl;
	show(a, sizeof(a) / sizeof(ValueType));
}