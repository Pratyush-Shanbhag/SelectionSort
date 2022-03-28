#include <iostream>
#include "SelectionSort.h"

using namespace std;

void SelectionSort::selectionSort() {
    int min;
    int temp;
    int i, j;
    for(i = 0; i < 9; i++) {
        min = i;
        for(j = i+1; j < 10; j++) {
            if(arr[j] < arr[min])
                min = j;
        }
        if(min != i) {
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
}

void SelectionSort::displayArray() {
    cout << "Array:\n[";

    for (int i = 0; i < 9; i++) {
        cout << arr[i] << " ";
    }

    cout << arr[9] << "]\n" << endl; 
}