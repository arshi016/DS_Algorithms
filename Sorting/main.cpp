//
//  main.cpp
//  Sorting
//
//  Created by A on 12/19/17.
//  Copyright © 2017 Github. All rights reserved.
//

#include "InsertionSort.hpp"
#include "SelectionSort.hpp"
#include "Merge.hpp"
#include <iostream>
#include <vector>

using namespace std;

void display (vector <int> array) {
    cout << endl << "RESULT::: ";
    vector <int> :: iterator it;
    for (it = array.begin(); it != array.end(); ++it)
        cout << *it << "   ";
}

int main(int argc, const char * argv[]) {
    // insert code here...
    vector <int> array;
    array.push_back(1);
    array.push_back(12);
    array.push_back(12);
    array.push_back(15);
    array.push_back(04);
    array.push_back(18);
    array.push_back(18);
    array.push_back(13);
    
    
    InsertionSort obj;
    vector<int> sortedArray = obj.sort(array);
    display(sortedArray);
    
    return 0;
}
