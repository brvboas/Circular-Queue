#include "Queue.h"

Node::Node() {
    next = NULL;
}

Node::Node(Node_entry item, Node *add_on) {
    entry = item;
    next = add_on;
}

Queue::Queue() {
    rear = NULL;
}

bool Queue::append(const Queue_entry &item) {
    Node *new_rear = new Node(item);
    if (new_rear == NULL) return false;
    if (rear == NULL){
        rear = new_rear;
        rear->next = rear;
    }
    else {
        new_rear->next = rear->next;
        rear->next = new_rear;
        //(*rear).next = new_rear;
        rear = new_rear;
    }
    return true;
}

bool Queue::serve() {
    if(rear == NULL) return false;
    if (rear->next == rear){
        delete rear;
        rear->next = NULL;
        return true;
    }
    else{
        Node *old_front = rear->next;
        rear->next = old_front->next;
        delete old_front;
    }
    return true;
}

bool Queue::retrieve(Queue_entry &item) const {
    if (rear == NULL)
        return false;
    item = rear->next->entry;
    return true;
}

void Queue::print(){
	int x;
	Queue Aux;
	while(rear != NULL){
		retrieve(x);
		serve();
		Aux.append(x);
		cout << " " << x;
	}
	while(Aux.rear != NULL){
                Aux.retrieve(x);
                Aux.serve();
                append(x);
        }
}
/*
Queue::~Queue(){
	while(rear != NULL){
		serve();
	}
}

void Queue::operator = (const Queue &original){
	front=original.front;
	rear=original.rear;
}
Queue::Queue(const Queue &original){
	front = original.front;
	rear = original.rear;
}

Queue::~Queue(){
	while(front!=NULL){
		serve();
	}
}

int Queue::size() {
    Node *aux = front;
    int count = 0;
    while (aux != NULL) {
        aux = aux->next;
        count++;
    }
    return count;
}

bool Queue::empty() const{
    if (front==rear)
        return true;
    else
        return false;
}

*/



