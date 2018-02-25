//
//  linkedlist.h
//  340HW
//
//  Created by ShanCho on 11/1/17.
//  Copyright © 2017 ShanCho. All rights reserved.
//

#ifndef linkedlist_h
#define linkedlist_h


#endif /* linkedlist_h */
#include "node.h"
using namespace std;

class LinkedList {
    Node * head = nullptr;
    int length = 0;
public:
    void add( int );
    bool remove( int );
    int find( int );
    int count( int );
    int at( int );
    int len();
    
    void print();
};
