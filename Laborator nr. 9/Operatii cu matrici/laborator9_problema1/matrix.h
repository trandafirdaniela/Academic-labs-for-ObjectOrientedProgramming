#pragma once
#include <iostream>
using namespace std;

template<typename T>
class Matrice {
private:
	T** m;
	int lin, col;
public:
	Matrice(int lin = 2, int col = 2);
	Matrice(const Matrice<T>&);
	~Matrice();
	int NrLin() { return lin; }
	int NrCol() { return col; }
	Matrice<T> minor(int l, int c);
	T det();
	Matrice<T> transp();
	Matrice<T> adj();
	Matrice<T> inv();

	Matrice<T> operator+(const Matrice<T>&);
	Matrice<T> operator-(const Matrice<T>&);
	Matrice<T> operator*(const Matrice<T>&);
	Matrice<T> operator*(const T);//matrice cu un scalar*
	Matrice<T> operator-();

	Matrice<T>& operator=(const Matrice<T>&);
	T* operator[](int);
	template<typename T> friend istream& operator >> (istream& in, Matrice<T>&);
	template<typename T> friend ostream& operator << (ostream& out, const Matrice<T>&);
	
};

template<typename T>
Matrice<T>::Matrice(int lin, int col) {
	this->lin = lin;
	this->col = col;
	m = new T * [lin];
	for (int i = 0; i < lin; i++) {
		m[i] = new T[col];
		for (int j = 0; j < col; j++)
			m[i][j] = T();
	}
}

template<typename T>
Matrice<T>::Matrice(const Matrice& M) {
	lin = M.lin;
	col = M.col;
	m = new T * [M.lin];
	for (int i = 0; i < M.lin; i++) {
		m[i] = new T[M.col];
		for (int j = 0; j < M.col; j++)
			m[i][j] = M.m[i][j];
	}
}

template<typename T>
Matrice<T>::~Matrice() {
	for (int i = 0; i < lin; i++) {
		delete[] m[i];
	}
	delete[] m;
}
template<typename T>
Matrice<T> Matrice<T>::minor(int l, int c) {
	Matrice R(lin - 1, col - 1);
	for (int i = 0; i < lin - 1; i++) {
		for (int j = 0; j < col - 1; j++) {
			if (i < l) {
				if (j < c)
					R[i][j] = m[i][j];
				else
					R[i][j] = m[i][j + 1];
			}
			else {
				if (j < c)
					R[i][j] = m[i + 1][j];
				else
					R[i][j] = m[i + 1][j + 1];
			}
		}
	}
	return R;
}
template<typename T>
T Matrice<T>::det() {
	if (lin != col || lin <= 1) 
		return m[0][0];
	T S = 0;
	for (int i = 0; i < lin; i++) {
		S += m[0][i] * (i % 2 ? -1 : 1) * minor(0, i).det();
	}
	return S;
}
template<typename T>
Matrice<T> Matrice<T>::transp() {
	Matrice R(col, lin);
	for (int i = 0; i < lin; i++)
		for (int j = 0; j < col; j++)
			R[i][j] = m[j][i];
	return R;
}
template<typename T>
Matrice<T> Matrice<T>::adj() {
	Matrice<T> R(col, lin);
	for (int i = 0; i < lin; i++)
		for (int j = 0; j < col; j++)
			R[i][j] = minor(j, i).det() * ((i + j) % 2 ? -1 : 1);
	return R;
}
template<typename T>
Matrice<T> Matrice<T>::inv() {
	Matrice<T> R(col, lin);
	T d = det();
	for (int i = 0; i < lin; i++)
		for (int j = 0; j < col; j++)
			R[i][j] = minor(j, i).det() * ((i + j) % 2 ? -1 : 1) / d;
	return R;
}
template<typename T>
Matrice<T> Matrice<T>::operator+(const Matrice<T>& M) {
	Matrice R(lin, col);
	for (int i = 0; i < lin; i++)
		for (int j = 0; j < col; j++)
			R[i][j] = m[i][j] + M.m[i][j];
	return R;
}
template<typename T>
Matrice<T> Matrice<T>::operator-(const Matrice<T>& M) {
	Matrice R(lin, col);
	for (int i = 0; i < lin; i++)
		for (int j = 0; j < col; j++)
			R[i][j] = m[i][j] - M.m[i][j];
	return R;
}
template<typename T>
Matrice<T> Matrice<T>::operator*(const Matrice<T>& M) {
	Matrice R(lin, M.col);
	for (int i = 0; i < lin; i++)
		for (int j = 0; j < M.col; j++) {
			R[i][j] = 0;
			for (int k = 0; k < col; k++)
				R[i][j] += m[i][k] * M.m[k][j];
		}
	return R;
}
template<typename T>
Matrice<T> Matrice<T>::operator*(const T t) {
	Matrice R(lin, col);
	for (int i = 0; i < lin; i++)
		for (int j = 0; j < col; j++) {
			R[i][j] = t * m[i][j];
		}
	return R;
}
template<typename T>
Matrice<T> Matrice<T>::operator-() {
	Matrice R(lin, col);
	for (int i = 0; i < lin; i++)
		for (int j = 0; j < col; j++) {
			R[i][j] = -m[i][j];
		}
	return R;
}
template<typename T>
T* Matrice<T>::operator[](int index) {
	if (index >= 0 && index < lin)
		return m[index];
	return 0;
}

template<typename T>
Matrice<T>& Matrice<T>::operator=(const Matrice<T>& M) {
	if (this != &M) {
		for (int i = 0; i < lin; i++) {
			delete[] m[i];
		}
		delete[] m;
		lin = M.lin;
		col = M.col;
		m = new T * [lin];
		for (int i = 0; i < lin; i++) {
			m[i] = new T[col];
			for (int j = 0; j < col; j++)
				m[i][j] = M.m[i][j];
		}
	}
	return *this;
}

template<typename T>
istream& operator >> (istream& in, Matrice<T>& M) {


	for (int i = 0; i < M.lin; i++) {
		delete[] M.m[i];
	}
	delete[] M.m;
	cout << "Citeste dimensiunea pentru matrice:\n";
	in >> M.lin >> M.col;
	M.m = new T * [M.lin];
	for (int i = 0; i < M.lin; i++) {
		M.m[i] = new T[M.col];
	}
	cout << "Citeste matricea:\n";
	for (int i = 0; i < M.lin; i++) {
		for (int j = 0; j < M.col; j++)
			in >> M.m[i][j];
	}
	return in;
}
template<typename T>
ostream& operator << (ostream& out, const Matrice<T>& M) {
	for (int i = 0; i < M.lin; i++) {
		for (int j = 0; j < M.col; j++)
			cout << M.m[i][j] << " ";
		cout << endl;
	}
	cout << endl;
	return out;
}
