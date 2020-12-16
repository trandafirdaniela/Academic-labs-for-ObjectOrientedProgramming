#include<iostream>
#include<string>
using namespace std;
template <typename T>
void afisare(T vect[], int size) {
    for (int i = 0; i < size; i++) {
        cout << vect[i]<<"  ";
    }
    cout << "\n";
} 
template <typename T>
void bubbleSort(T vect[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - 1; j++) {
            if (vect[j] > vect[j + 1]) 
                swap(vect[j], vect[j + 1]);
        } 
    }
} 
