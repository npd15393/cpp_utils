/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   tree_main.cpp
 * Author: endo
 *
 * Created on November 7, 2018, 12:09 AM

 * include<> */

#include <cstdlib>
#include <memory>
#include "tree_node.h"
#include "list.h"
using namespace std;

int main(int argc, char** argv) {
//    tree_node<int> p=tree_node<int>(1);
//    p.print_node();
//    
//    tree_node<int>* q=new tree_node<int>(6);
//    q->print_node();
//    
//    p.set_lc(q);
//    tree_node<int>* g=p.get_lc();
//    g->print_node();
    
    dlist<int> p=dlist<int>();
    int y=1;
    p.push_back(y);
    y=2;
    p.push_front(y);
    y=3;
    p.push_back(y);
    p.print(p.root);
    return 0;
}

