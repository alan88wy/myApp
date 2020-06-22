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

    const char *s = "This is a string";
    
    for (unsigned int i=0;s[i]; i++) {
        if (s[i] != 0) {
            cout << s[i] << endl;
        }
        
    }
    
    string aString = "test string";
    
    for (char c: aString) {
        if (c != 0) {
            cout << c << endl;
        }
    }
    
    return 0;
}
