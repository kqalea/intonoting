/*
 * ch2.cpp
 *
 *  Created on: Dec 11, 2018
 *      Author: andy
 */

#include"ch2.h"

ch2_node::ch2_node() {
	count = 0;
	head = NULL;
	tail = NULL;
}

void ch2_node::addNodeFromHead(int data) {
	if (count == 0) {
		node *newNode = new node;
		newNode->data = data;
		head = newNode;
		tail = newNode;
		count = 1;
	} else if (count == 1) {
		node *newNode = new node;
		newNode->data = data;
		head = newNode;
		head->next = tail;
		head->perv = NULL;
		tail->perv = head;
		tail->next = NULL;
		count = 2;
	} else {
		node *newNode = new node;
		newNode->data = head->data;
		newNode->next = head->next;
		newNode->perv = head;
		newNode->next->perv = newNode;
		head->data = data;
		head->next = newNode;
		++count;
	}

}

int ch2_node::popFromTheEnd(){
	int data;
	node *tmp;
	if(count == 0){
		return 0;
	}else if (count == 1){
		data = head->data;
		--count;
		tmp = head;
		delete head;
		return data;
	}else{
		tmp = tail;
		tail = tmp->perv;
		tail->next = NULL;
		data = tmp->data;
		delete tmp;
		--count;
		return data;
	}
	return 0;
}

void ch2_node::printAllNode() {
	if (count > 0) {
		node *tmp = head;
		for (int i = 0; i < count; i++) {
			cout << tmp->data << endl;
			if(tmp->next != NULL){
				tmp = tmp->next;
			}
		}
	}
}
