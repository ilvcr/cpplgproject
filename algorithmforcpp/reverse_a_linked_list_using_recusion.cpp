/*************************************************************************
> File Name: reverse_a_linked_list_using_recusion.cpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年07月17日 星期二 16时37分52秒
> Description: 
 ************************************************************************/

#include<iostream>
using namespace std;


struct node{
    int val;
    node* next;
};

node* start;

void insert(int x){
    nodee* t = start;
    if(start != NULL){
        while(t->next != NULL){
            t = t->next;
        }

        node* n = new node;
        t->next = n;
        n->val = x;
        n->next = NULL;
    }
    else{
        node* n = new node;
        n->val = x;
        n->next = NULL;
        start = n;
    }
}

void reverse(node* p, nodee* q){
    if(q->next == NULL){
        q->next = p;
        p->next = NULL;
        start = q;
        return;
    }
    else{
        reverse(q, q->next);
        q->next = p;
        p->next = NULL;
    }
}


void show(){
    node* t = start;
    while(t != NULL){
        cout << t->val << "\t";
        t = t->next;
    }
}

int main(int argc, char* argv[]){
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    insert(6);

    reverse(start, start->next);

    return 0;
}



