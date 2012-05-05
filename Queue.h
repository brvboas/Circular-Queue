/*
 * File:   Queue.h
 * Author: 317527
 *
 * Created on 21 de Outubro de 2009, 09:44
 */
using namespace std;
#include <iostream>

#ifndef _QUEUE_H
#define	_QUEUE_H

typedef int Node_entry;
struct Node {
    // data members
    Node_entry entry;
    Node *next;
    // constructors
    Node();
    Node(Node_entry item, Node *add_on = NULL);
};

typedef Node_entry Queue_entry;

class Queue {
public:
    Node *rear;
public:
    // standard Queue methods
    Queue();
    Queue(const Queue &original);
    bool empty() const;
    bool append(const Queue_entry &item);
    bool serve();
    bool retrieve(Queue_entry &item) const;
    int size();
    //~Queue();
    void operator =(const Queue &original);
    void print();
    

};

#endif	/* _QUEUE_H */

