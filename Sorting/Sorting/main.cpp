//
//  main.cpp
//  Sorting
//
//  Created by A on 12/19/17.
//  Copyright © 2017 Github. All rights reserved.
//

#include "InsertionSort.hpp"
#include <iostream>
#include <vector>

using namespace std;

void display (vector <int> array) {
    vector <int> :: iterator i;
    for (i = array.begin(); i != array.end(); ++i)
        cout << *i << '\t';
}

int main(int argc, const char * argv[]) {
    // insert code here...
    vector <int> array;
    array.push_back(5);
    array.push_back(2);
    array.push_back(4);
    array.push_back(6);
    array.push_back(1);
    array.push_back(3);
    
    InsertionSort obj;
    vector<int> sortedArray = obj.sort(array);
    display(sortedArray);
    
    return 0;
}
