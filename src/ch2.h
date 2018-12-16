/*
 * ch2.h
 *
 *  Created on: Dec 11, 2018
 *      Author: andy
 */

#ifndef CH2_H_
#define CH2_H_

#include<cstddef>
#include<iostream>
using namespace std;
struct node{
	int data;
	node* perv;
	node* next;
};


class ch2_node{
public:
	node *head, *tail;
	int count;
	ch2_node();
	void addNodeFromHead(int data);
	void printAllNode();
	int popFromTheEnd();
};


#endif /* CH2_H_ */
