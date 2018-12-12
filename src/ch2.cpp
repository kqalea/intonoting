/*
 * ch2.cpp
 *
 *  Created on: Dec 11, 2018
 *      Author: andy
 */


#include"ch2.h"

class ch2_node{
private:
	node head, tail;
public:
	ch2_node(){
		head.perv = NULL;
		head.next = NULL;
		tail.perv = NULL;
		tail.next = NULL;
	}

};
