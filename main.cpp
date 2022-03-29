#include <iostream>
#include <fstream>
#include "SelectionSort.h"
#include "ReadWrite.h"

using namespace std;

int main() {
    ReadWrite rw;
    SelectionSort ss;

    rw.readFile("Array.txt", ss.arr);
    ss.displayArray();
    ss.selectionSort();
    ss.displayArray();
    rw.writeFile(ss.arr);
    return 0;
}