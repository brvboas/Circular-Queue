/*valfarinazzo@hotmail.com
 * File:   main.cpp
 * Author: 317527
 *
 * Created on 21 de Outubro de 2009, 09:44
 */

#include "Queue.h"

/*
 *
 */
int main() {
	Queue q1;//, q2;
	q1.append(5);
	q1.append(6);
	q1.append(7);
	q1.append(8);
	q1.append(9);
	cout<< "lista q1: ";
	q1.print();
	cout<<endl;
	//q2=q1;
	//cout << "q2 recebe q1 " <<endl;
	//cout<< "lista q1: ";
	//q1.print();
	cout<<endl;
	//cout << "lista q2: ";
	//q2.print();
	//cout << endl;
	//Queue q4(q1);
	//cout << "construtor copia" << endl;
	//cout<< "lista q4: ";
	//q4.print();
	//cout<<endl;
	
    return 0;
};

