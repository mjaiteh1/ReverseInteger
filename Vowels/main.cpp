//
//  main.cpp
//  Reverse  an Integer!
//
//  Created by Mariama Jaiteh on 10/7/16.
//  Copyright © 2016 Mariama Jaiteh. All rights reserved.
//

#include <iostream>
using namespace std;


int main () {
    
    int num;
    int newNum = 0;
    int remainder;
    cout << "What is your number" << endl;
    cin >> num;
    
    while(num != 0)
    {
        remainder = num % 10;
        newNum = newNum*10 + remainder;
        num /= 10;
    }
    cout << newNum << endl;
    

return 0;
}
