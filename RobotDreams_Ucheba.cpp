#include <iostream>
#include "functions.h"
using namespace std;



int main(){

    //10.1
    int x = 5, y = 10;

    
    cout << "before swap (links): x = " << x << ", y = " << y << endl;
    swap(x, y);
    cout << "after swap (links): x = " << x << ", y = " << y << endl;

    
    cout << "before swap (pointers): x = " << x << ", y = " << y << endl;
    swap(&x, &y);
    cout << "after swap (pointers): x = " << x << ", y = " << y << endl;


    
    //10.2
    int numbers2[] = { 1, 2, 3, 4, 5 };
    int size2 = sizeof(numbers2) / sizeof(numbers2[0]);

    int search_for = 3;
    if (find(numbers2, size2, search_for)) {
        cout << search_for << " is found in the array" << endl;
    }
    else {
        cout << search_for << " is not found in the array" << endl;
    }

    search_for = 6;
    if (find(numbers2, size2, search_for)) {
        cout << search_for << " is found in the array" << endl;
    }
    else {
        cout << search_for << " is not found in the array" << endl;
    }

    

    //10.3
    double numbers3[] = { 1.2, 2.4, 3.6, 4.8 };
    int size3 = sizeof(numbers3) / sizeof(numbers3[0]);
    double sum;

    if (calculateSum(numbers3, size3, sum)) {
        cout << "Sum of the array: " << sum << endl;
    }
    else {
        cout << "Array size is invalid or zero." << endl;
    }

}