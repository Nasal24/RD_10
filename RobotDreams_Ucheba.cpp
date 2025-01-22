#include <iostream>
#include "functions.h"
using namespace std;



int main(){

    //10.1
    int x = 5, y = 10;

    
    cout << "Before swap using references: x = " << x << ", y = " << y << endl;
    swap(x, y);
    cout << "After swap using references: x = " << x << ", y = " << y << endl;

    
    cout << "Before swap using pointers: x = " << x << ", y = " << y << endl;
    swap(&x, &y);
    cout << "After swap using pointers: x = " << x << ", y = " << y << endl;


    
    //10.2
    int numbers2[] = { 1, 2, 3, 4, 5 };
    int size2 = sizeof(numbers2) / sizeof(numbers2[0]);

    int searchFor = 3;
    if (find(numbers2, size2, searchFor)) {
        std::cout << searchFor << " is found in the array." << std::endl;
    }
    else {
        std::cout << searchFor << " is not found in the array." << std::endl;
    }

    searchFor = 6;
    if (find(numbers2, size2, searchFor)) {
        std::cout << searchFor << " is found in the array." << std::endl;
    }
    else {
        std::cout << searchFor << " is not found in the array." << std::endl;
    }

    

    //10.3
    double numbers3[] = { 1.2, 2.4, 3.6, 4.8 };
    int size3 = sizeof(numbers3) / sizeof(numbers3[0]);
    double sum;

    if (calculateSum(numbers3, size3, sum)) {
        std::cout << "Sum of the array: " << sum << std::endl;
    }
    else {
        std::cout << "Array size is invalid or zero." << std::endl;
    }

}