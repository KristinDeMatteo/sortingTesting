//
//  main.cpp
//  matrix
//
//  Created by Amor Wang on 3/27/23.
//

#include <iostream>
#include "helper.hpp"

using namespace std;

int main() {
    string input;
    vector<int> inputArray;
    cout << "Starting program.\n";
    cout << "Input array: " << endl;
    getline(cin, input);
    inputArray = stringToNumberArray(input);
    
    bubbleSort(inputArray.data(), static_cast<int>(inputArray.size()));
    cout << "Result: " << endl;
    for (int num: inputArray){
        cout << " " << num;
    }
    return 0;
}
