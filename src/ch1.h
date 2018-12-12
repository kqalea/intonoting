/*
 * ch1.h
 *
 *  Created on: Dec 9, 2018
 *      Author: kqalea
 */

#ifndef CH1_H_
#define CH1_H_

#include<string>
#include<iostream>
#include<algorithm> //ch12 sort ch15
#include<locale> //ch13 isspace
#include<set>//ch15
#include<vector>//ch15
#include<cstring>
using namespace std;

class ch1_1{
public:
	bool isUniquechars(string str);
	bool isUniquechars26(string str);
};

class ch1_2{
public:
	bool permutation(string a, string b);
};

class ch1_3{
public:
	string replaceSpaces(string str);
};

class ch1_4{
public:
	bool isPermutationOfPalindrome(string str);
};


class ch1_5{
public:
	bool oneEditAway(string a, string b);
};
#endif /* CH1_H_ */
