//#include "Sir.h"
//#pragma once
//#include <iostream>
//#include <string>
//using namespace std;
//template <class T>
//class sir
//{
//private:
//	T* vector;
//	int n;
//public:
//	sir(int n);
//	sir(const sir&);
//	int getDim()const { return n; }
//
//	//acesare elemente
//	T& operator[](int i);
//	~sir() { };
//	void afisare();
//	//void sortare();
//};
//template <class T>
//sir<T>::sir(int n)
//{
//	this->n = n;
//	vector = new T[n];
//}
//template <class T>
//T& sir<T>::operator[](int i)
//{
//	if (i >= 0 && i < n)
//	{
//		return vector[i];
//	}
//	else
//	{
//		throw out_of_range("dapasire");
//	}
//
//}
//template<class T>
//void sir<T>::afisare()
//{
//	for (int i = 0; i < n; i++)
//	{
//		cout << vector[i] << " ";
//	}
//	cout << endl;
//}
