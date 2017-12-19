//
//  main.cpp
//  AddIntArrays
//
//  Created by A on 12/19/17.
//  Copyright © 2017 Github. All rights reserved.
//

#include <iostream>
#include "AddIntArrays.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    int a[] = {9, 7, 8};
    int b[] = {9, 9, 9};
    AddIntArrays obj;
    obj.add(a, b, 3);
//    for (int i = 0; i < sizeof(c); i++)
//        cout << c[i] << "\t";
    std::cout << "Hello, World!\n";
    return 0;
}
