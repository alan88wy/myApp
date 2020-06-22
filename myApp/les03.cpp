//
//  les03.cpp
//  myApp
//
//  Created by Alan Wan on 21/6/20.
//  Copyright © 2020 Alan Wan. All rights reserved.
//

#include <iostream>
#include <cstdio>

using namespace std;

class S {
    public:
        int static_value() {
            static int x = 7;
            return ++x;
        }
};

int func() {
    static int x = 7;      // because it is declare static,
                        //it will not be initialize every time you run it.
      return ++x;
}

int main() {
      int i = 42;
    i = func();
      printf(" The integer is %d\n", i); // print 8
    i = func();
      printf(" The integer is %d\n", i); // print 9
    i = func();
      printf(" The integer is %d\n", i); // print 10

    S a;
    S b;
    S c;

    printf("a.static_value() is %d\n", a.static_value());
    printf("b.static_value() is %d\n", b.static_value());
    printf("c.static_value() is %d\n", c.static_value());

    return 0;
}       
