#include"ch1.h"
#include"ch2.h"

#include<iostream>

string test_str = "aabbccdd";
string test_str2 = "abcdefg";
string test_str3 = "iloveit";
string test_str4 = "youare";
string test_str5 = "areyou";
string test_str6 = "i have a pen";
string test_str7 = "taco cat";
string test_str8 = "pale";
string test_str9 = "pal";
string test_str10 = "pales";
string test_str11 = "bale";
string test_str12 = "bake";

void testch11() {
	ch1_1 ch11;

	cout << ch11.isUniquechars(test_str) << endl;
	cout << ch11.isUniquechars(test_str2) << endl;
	cout << ch11.isUniquechars(test_str3) << endl;
	cout << ch11.isUniquechars(test_str4) << endl;

	cout << ch11.isUniquechars26(test_str) << endl;
	cout << ch11.isUniquechars26(test_str2) << endl;
	cout << ch11.isUniquechars26(test_str3) << endl;
	cout << ch11.isUniquechars26(test_str4) << endl;
}

void testch12() {
	ch1_2 ch12;

	cout << ch12.permutation(test_str, test_str) << endl;
	cout << ch12.permutation(test_str2, test_str3) << endl;
	cout << ch12.permutation(test_str4, test_str5) << endl;

}

void testch13() {
	ch1_3 ch13;
	cout << test_str6 << endl;
	cout << ch13.replaceSpaces(test_str6) << endl;

}

void testch14() {
	ch1_4 ch14;
	cout << ch14.isPermutationOfPalindrome(test_str) << endl;
	cout << ch14.isPermutationOfPalindrome(test_str2) << endl;
	cout << ch14.isPermutationOfPalindrome(test_str7) << endl;
}

void testch15() {
	ch1_5 ch15;
	cout << ch15.oneEditAway(test_str8, test_str9) << endl;
	cout << ch15.oneEditAway(test_str10, test_str8) << endl;
	cout << ch15.oneEditAway(test_str8, test_str11) << endl;
	cout << ch15.oneEditAway(test_str8, test_str12) << endl;

}

int main(int argc, char* argv[]) {
	cout << "ch11--------------------" << endl;
	testch11();
	cout << "ch11--------------------" << endl;

	cout << "ch12--------------------" << endl;
	testch12();
	cout << "ch12--------------------" << endl;

	cout << "ch13--------------------" << endl;
	testch13();
	cout << "ch13--------------------" << endl;

	cout << "ch14--------------------" << endl;
	testch14();
	cout << "ch14--------------------" << endl;

	cout << "ch15--------------------" << endl;
	testch15();
	cout << "ch15--------------------" << endl;

	ch2_node *test = new ch2_node();

	test->addNodeFromHead(40);
	test->addNodeFromHead(30);
	test->addNodeFromHead(20);
	test->addNodeFromHead(10);
	test->printAllNode();
	cout << "-----------------------" << endl;
	cout << test->popFromTheEnd() << endl;
	cout << test->popFromTheEnd() << endl;
	cout << test->popFromTheEnd() << endl;
	cout << test->popFromTheEnd() << endl;
	delete test;
	return 0;
}

