//
//  linkedlist.cpp
//  340HW
//
//  Created by ShanCho on 11/1/17.
//  Copyright © 2017 ShanCho. All rights reserved.
//

#include <iostream>
//#include <stdio.h>
#include "linkedlist.h"
using namespace std;

//using namespace std;



//void add ( int N ) Add N to the front of the linked list.
void LinkedList::add(int N){
    Node* temp = new Node; // point to last value .. the value just created .. assign new node
    temp->value = N;  // temp head is address not value
    temp->next = head;
    head = temp;
  
}
//bool remove ( int N ) Remove the first instance of N from the list, then return true. If the N was not found, return false.
bool LinkedList::remove(int N){
    Node * temp = head;
    Node * prev = head;
    if(temp->value == N)
    {
        head = head->next;
        delete(temp); 
        return ture;
    }
    else
    {
        temp = temp->next;
        while(temp)
        
    
        /*

//bool remove ( int N ) Remove the first instance of N from the list, then return true. If the N was not found, return false.
bool LinkedList::remove(int N){
    if(head != nullptr){
        if(head->value == N)
        {
            head = head->next;
            --length;
            return true;
        }
        else{
            Node * temp1 = head;
            while(temp1->next != nullptr )
            {
                if (temp1->next->value == N)
                {
                    temp1->next = temp1->next->next;
                    --length;
                    return true;
                }
                temp1= temp1->next;
            }
        }
    }
    return false;
}

 */

//bool remove ( int N ) Remove the first instance of N from the list, then return true. If the N was not found, return false.
/*
bool LinkedList::remove(int N){
    
    //bool found = 0;
    Node * prev = NULL;
    Node * curr = head;
    
    
    if(curr != nullptr)
        {
                if(head->value == N)
                {
                    head = head->next;
                    delete(curr);
                    return true;
                }
                else
                {
                  //  cout<<head->next->next->value;
                    while(curr != NULL)
                    {
                        
                        //if(curr->value == N)
                    }
                
                    return false;
                
            }
        }
 */

/*
    bool LinkedList::remove(int N){
    Node * temp = new Node;
    temp = head;
    head = head->next;
    delete temp;
        return true;
    }
    else{
        return false;
        }
 
//bool remove ( int N ) Remove the first instance of N from the list, then return true. If the N was not found, return false.
bool LinkedList :: remove(int N){
    Node *temp = head;
    if(temp == nullptr){
        return false;
    }
    if(temp->value == N){
        head = temp->next;
        length --;
        free(temp);
        return true;
    }
    
    while(temp->next != nullptr){
        if(temp->next->value == N){
            Node *next = temp->next->next;
            free(temp->next);
            temp->next = next;
            length --;
            return true;
        }
        temp = temp->next;
    }
    return false;
}
   /*
    // bool remove = false;
    Node * temp = new Node;
    temp = head;
    
    if(temp->value == N) {
        head = head -> next;
        return true;
    }




    return 0;

}
     
*/
    


/*
//int find ( int N ) Find the first instance of N in the list and return its index. Return -1 if N was not found.
int LinkedList::find(int N)
{
    Node * temp1 = head;
    int find = 0;
    while (temp1 != nullptr)
    {
        if(temp1->value == N){
            return find;
        }
        temp1= temp1->next;
    }
    return -1;
 }

//int count ( int N ) Return a count of the instances of N in the list.
int LinkedList::count(int N) {
    Node* temp1 = head;
    int count = 0;
    while (temp1 != nullptr)
    {
        if(temp1->value == N){
            count++;
        }
        temp1 = temp1->next;
        
    }
    return count;
}
 



//int at ( int N ) Return the value stored in the node at index N.
 int LinkedList :: at(int N){
 Node *temp = head;
 int index = 0;
 if(N < 0 || N > length-1){
 return -1;
 }
 while(temp != nullptr){
 if(N == index){
 return temp->value;
 }
 temp =temp->next;
 index ++;
 }
 return -1;
 }

//int len() Return the current length of the list.
    int LinkedList::len() {
    return length;
    }

    //int len() Return the current length of the list.
 
     int LinkedList::len()
     {
        Node * temp = head;
        int size = 0;
     while(temp != nullptr){
        ++size;
     temp = temp->next;
        }
     return size;
        }
 
*/
    
    void LinkedList::print() {
    
        Node * temp = new Node();
        temp = head;
 while (temp != nullptr) {
 cout << temp->value;
 temp = temp->next;
 }
 cout << endl;
    }


