//
//  main.cpp
//  myApp
//
//  Created by Alan Wan on 19/6/20.
//  Copyright © 2020 Alan Wan. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int x = 42;
    int &y = x;
    int *p;
    
    p = &x;

    
    std::cout << "x : " << x << endl;
    std::cout << "y: " << y << endl;
    std::cout << "p = " << *p << endl;
    
    char s[] = "This is a string";
    
    for (char c: s) {
        if (c != 0) {
            cout << c << endl;
        }
        
    }
    
    int array[] = {0,1,2,3,4,5};
    
    for (int i : array) {
        cout << "i = " << i << endl;
    }
    
    string aString = "test string";
    
    for (char c: aString) {
        if (c != 0) {
            cout << c << endl;
        }
    }
    
    return 0;
}
