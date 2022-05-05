#ifndef LAB4_INSERTIONSORT_CPP
#define LAB4_INSERTIONSORT_CPP
#include "Vector.cpp"


template<typename T>
void insertionSort(Vector<T> &v){
    int i, key, j;
    for (i = 1; i < v.size(); i++)
    {
        key = v[i];
        j = i - 1;

        /* Move elements of arr[0..i-1], that are
        greater than key, to one position ahead
        of their current position */
        while (j >= 0 && v[j] > key)
        {
            v[j + 1] = v[j];
            j = j - 1;
        }
        v[j + 1] = key;
    }
}

template<typename T>
void insertionSort(T* v, int n){
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = v[i];
        j = i - 1;

        /* Move elements of arr[0..i-1], that are
        greater than key, to one position ahead
        of their current position */
        while (j >= 0 && v[j] > key)
        {
            v[j + 1] = v[j];
            j = j - 1;
        }
        v[j + 1] = key;
    }
}
#endif