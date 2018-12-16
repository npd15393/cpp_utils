/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   dlist.h
 * Author: endo
 *
 * Created on December 9, 2018, 2:24 PM
 */

#ifndef UTILS_LIST_H
#define UTILS_LIST_H
#include <iostream>
using namespace std;

template<class S>
struct node{
    S* val;
    node<S>* next;
    node<S>* prev;
    node(S y){
        val=&y;
        next=NULL;
        prev=NULL;
    }
};

template<class T>
class dlist{
public:
    node<T>* root;
    int len;
    node<T>* tail;
    dlist();
    void print(node<T>* curr=NULL);
    T& operator[] (const int index);
    void push_back(T&);
    void push_front(T&);
    T* pop_front();
    T* pop_back();
    bool isEmpty();
    int size();
};

template<class T>
dlist<T>::dlist(){
    dlist<T>::root=NULL;
    dlist<T>::tail=NULL;
}

template<class T>
void dlist<T>::print(node<T>* curr){
        if (curr)
        {
            cout<<*(curr->val)<<" ";
            curr=curr->next;
            print(curr);
        }
    }

template<class T>
T& dlist<T>::operator[] (int index){
    node<T>* curr=dlist<T>::root;
    for (int i=0;i<=index;i++){
        if(!curr)
            return NULL;
        else
            curr=curr.next;
    }
    return curr->val;
}

template<class T>
void dlist<T>::push_back(T& obj){
    if (dlist<T>::tail)
    {
        node<T>* u=new node<T>(obj);
        u->prev=dlist<T>::tail;
        dlist<T>::tail->next=u;
    }
    
    else
        dlist<T>::tail=new node<T>(obj);
    
    dlist<T>::len++;
    
}

template<class T>
void dlist<T>::push_front(T& obj)
{
    node<T>* d=new node<T>(obj);
    d->next=dlist<T>::root;
    if (dlist<T>::root)
        dlist<T>::root->prev=d;
    dlist<T>::root=d;
    
    dlist<T>::len++;
}

template<class T>
T* dlist<T>::pop_front(){
    T* t=NULL;
    if (dlist<T>::root){
        t=dlist<T>::root->val;
        dlist<T>::root=dlist<T>::root->next;
        dlist<T>::len--;
    }
    return t;
}

template<class T>
T* dlist<T>::pop_back(){
    T* t=NULL;
    if (dlist<T>::tail){
        t=dlist<T>::tail->val;
        dlist<T>::tail=dlist<T>::tail->prev;
        dlist<T>::len--;
    }
    return t;
}

template<class T>
bool dlist<T>::isEmpty(){
    if (dlist<T>::tail && dlist<T>::root)
        return true;
    else
        return false;
}

#endif /* UTILS_LIST_H */

