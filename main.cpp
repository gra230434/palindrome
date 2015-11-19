//
//  main.cpp
//  string
//
//  Created by WeiKevin on 2015/11/19.
//  Copyright © 2015年 WeiKevin. All rights reserved.
//

#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>
using namespace::std;

int checkmedia(string stringline, int lengthstring,int halfnum){
    for (int i=0; i<halfnum; i++) {
        if (stringline.at(i) != stringline.at(lengthstring-i-1)) {
            return 1;
        }
    }
    return 0;
}


int main(int argc, const char * argv[]) {
    // insert code here...
    int lengthstring=0, halfnum=0;
    string stringline;

    while ( cin >> stringline ) {
        lengthstring = stringline.length();
        if (lengthstring%2==0) {
            halfnum=lengthstring/2;
        }else{
            halfnum=(lengthstring-1)/2;
        }
        
        if (checkmedia(stringline, lengthstring, halfnum)) {
            cout << "No" <<endl;
        }else{
            cout << "Yes" <<endl;
        }
    }
    return 0;
}