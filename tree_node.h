/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   tree_node.h
 * Author: endo
 *
 * Created on October 21, 2018, 8:37 PM
 */

#ifndef UTILS_TREE_NODE_H
#define UTILS_TREE_NODE_H
#include <stdio.h>
#include<iostream>
using namespace std;
template <class T>
class tree_node{
public:
    T data;
    tree_node(T);
    tree_node* get_lc() const;
    tree_node* get_rc() const;
    bool set_lc(tree_node*);
    bool set_rc(tree_node*);
    void print_node();
    void print_tree();

private:
    tree_node* left_child;
    tree_node* right_child;
};

template <class T>
tree_node<T>::tree_node(T dat) {
    data=dat;
    left_child=NULL;
    right_child=NULL;
    
}

template <class T>
tree_node<T>* tree_node<T>::get_lc() const{
    return left_child;
}

template <class T>
tree_node<T>* tree_node<T>::get_rc() const{
    return right_child;
}

template <class T>
bool tree_node<T>::set_lc(tree_node<T>* lc){
        left_child=lc;
}

template <class T>
bool tree_node<T>::set_rc(tree_node<T>* rc){
        right_child=rc;
}

template <class T>
void tree_node<T>::print_node(){
    std::cout<<tree_node<T>::data<<std::endl;
}

template <class T>
void tree_node<T>::print_tree(){
        print_node();
        if(left_child)
            std::cout<<tree_node<T>::get_lc()->print_node()<<std::endl;
        if(right_child)
            std::cout<<tree_node<T>::get_rc()->print_node()<<std::endl;
        
        
    }

#endif /* UTILS_TREE_NODE_H */

