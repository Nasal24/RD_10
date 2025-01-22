#include <iostream>
#include "functions.h"
using namespace std;


//10.1
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}


void swap(int* a, int* b) {
    if (a && b) { 
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}



//10.2
bool find(const int* arr, int size, int elem) {
    const int* end = arr + size;

    while (arr < end) {
        if (*arr == elem) {
            return true;
        }
        ++arr;
    }

    return false;
}



//10.3
bool calculateSum(const double* arr, int arr_size, double& sum) {
    sum = 0.0;

    if (arr_size <= 0) {
        return false;
    }

    const double* end = arr + arr_size; 

    while (arr < end) {
        sum += *arr;
        ++arr;
    }

    return true;
}