#include <iostream>
#include <fstream>
#include "ReadWrite.h"

using namespace std;

void ReadWrite::readFile(string fileName, int arr[10]) {
    ifstream infile(fileName);
    int count = 0;
    while(!infile.fail()) {
        infile >> arr[count++];
    }

    infile.close();
}

void ReadWrite::writeFile(int arr[10]) {
    ofstream outfile("SortedArray.txt");

    for(int i = 0; i < 10; i++) {
        outfile << arr[i] << endl;
    }
}