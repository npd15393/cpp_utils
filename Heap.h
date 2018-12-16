//
// Created by endo on 12/16/18.
//

#ifndef UTILS_HEAP_H
#define UTILS_HEAP_H

#include<vector>
#include "tree_node.h"
using namespace std;

//template<class S>
//struct node{
//    S val;
//    int pr;
//    node(S& y, int p){
//        val=y;
//        pr=p;
//    }
//};

template<class S>
class heap{
public:
//        vector<int>* arr;
    bool isEmpty;
    S val;
    int pr;
    heap();
    void push(S,int);
    void heapify(S*,int*);
    void insertroot(heap<S>*,heap<S>*);
    S pop();
private:
    heap<S>* left_child;
    heap<S>* right_child;
};

template<class S>
heap<S>::heap(){

}

template<class S>
void heap<S>::heapify(S* a, int* pr){
    if (a.size()!=pr.size())
    {   int *a =NULL;
        cout<<"Check arrays"<<endl;
    }
    for(int i=0;i<a.size();i++){
        heap<S>::push(a[i],pr[i]);
    }
}

template<class S>
void heap<S>::push(S a, int pr){
    if (tree==NULL)
        tree=new tree_node(node(a,pr));
    else{
        heap<S>::val=a;
        heap<S>::pr=pr;
        tree_node* nt=new tree_nodes(n);
        tree_node<node>* curr=tree;
        insertroot(curr,nt);
    }
}

template<class S>
void heap<S>::insertroot(tree_node* t,tree_node* c){
    if(t->data.pr>c->data.pr)
    {
        if (!(t->get_lc()))
        {
            t->set_lc(c);
            return;
        }
        else if (!(t->get_rc()))
        {
            t->set_rc(c);
            return;
        }
        else
        {

            tree_node* min=t->get_rc()->data.pr>t->get_lc()->data.pr?t->get_lc()->data.pr:t->get_rc()->data.pr;
//                    tree_node* max=t->get_rc()->data.pr<t->get_lc()->data.pr?t->get_lc()->data.pr:t->get_rc()->data.pr;

            if(min->data.pr>c->data.pr)
            {
                insertroot(o,c);
            }
            else
            {
                void (*func)(tree_node*)=t->get_rc()->data.pr>t->get_lc()->data.pr?&(t->set_lc):&(t->set_rc);

                t->(*func)(c);
                c->data.set_lc(min);
            }
        }
    }
    else
    {
        insertroot(curr, nt);
    }
}

S heap<S>::pop(){
    S e=heap<S>::val;
    heap<S>* min=t->get_rc()->data.pr>t->get_lc()->data.pr?t->get_lc()->data.pr:t->get_rc()->data.pr;
    heap<S>* max=t->get_rc()->data.pr<t->get_lc()->data.pr?t->get_lc()->data.pr:t->get_rc()->data.pr;
    tree=cascade(max,min);
    return e;
}

#endif //UTILS_HEAP_H
