//
//  helper.cpp
//  matrix
//
//  Created by Amor Wang on 3/27/23.
//  Edited by Kristin DeMatteo 3/29/23
//

#include "helper.hpp"

using namespace std;

vector<int> stringToNumberArray(const string& input) {
    vector<int> myArray;
    stringstream iss(input);
    
    int number;
    while (iss >> number) {
        myArray.push_back(number);
    }
    
    return myArray;
}
