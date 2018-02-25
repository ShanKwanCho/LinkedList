//
//  main.cpp
//  340HW
//
//  Created by ShanCho on 11/1/17.
//  Copyright © 2017 ShanCho. All rights reserved.
//

#include <iostream>
#include "linkedlist.h"
using namespace std;

int main () {
    LinkedList a;
    
    a.add(1);
    a.add(2);
    a.add(3);
    a.add(4);
    a.add(5);
    a.add(6);
    
    a.print(); // 6 5 4 3 2 1
    
    
    
     cout << a.remove(4) << endl;
    cout << a.remove(2) << endl;
    
    a.print(); // 5 3 1 
    /*
    //cout << "Index of 2 in list: " << a.find(2) << endl;
    cout << "count of 3: " << a.count(3) << endl;
    cout << "length: " << a.len() << endl;
     */
}
