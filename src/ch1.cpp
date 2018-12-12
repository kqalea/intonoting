#include"ch1.h"

bool ch1_1::isUniquechars(string str) {
	if (str.length() > 128)
		return false;

	bool char_set[128] = { 0 };
	int val = 0;
	for (unsigned int i = 0; i < str.length(); i++) {
		val = str[i];
		if (char_set[val]) {
			return false;
		}
		char_set[val] = true;
	}
	return true;
}

bool ch1_1::isUniquechars26(string str) {
	int checker = 0;
	int val = 0;
	for (unsigned int i = 0; i < str.length(); i++) {
		val = str[i] - 'a';
		if ((checker & (1 << val)) > 0) {
			return false;
		}
		checker |= (1 << val);
	}
	return true;
}

bool ch1_2::permutation(string a, string b){
	if(a.length() != b.length()) return false;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    if(a.compare(b)!=0){
    	return false;
    }
	return true;
}

string ch1_3::replaceSpaces(string str){
	int spaceCount = 0;
	string re = "02%";
	for(unsigned int i=0; i<str.length()+spaceCount; i++){
		if(str[i] == ' '){
			spaceCount+=2;
			str.replace(i,1,re);
		}
	}
	return str;
}

bool ch1_4::isPermutationOfPalindrome(string str){
	int bitVector = 0;
	int mask = 0;
	int index = 0;
	for(unsigned int i=0; i<str.length(); i++){
		index = str[i] - 'a';
		if(index < 0 || index > 26) continue;
		mask = 1 << index;
		if((bitVector & mask) == 0){
			bitVector |= mask;
		}else{
			bitVector &= ~mask;
		}
	}
	if(bitVector == 0 || (bitVector & bitVector-1) == 0){
		return true;
	}
	return false;
}

bool ch1_5::oneEditAway(string a, string b){
	char chA[a.length()];
	char chB[b.length()];
	strcpy(chA, a.c_str());
	strcpy(chB, b.c_str());
	multiset<char> setA(chA, chA+strlen(chA));
	multiset<char> setB(chB, chB+strlen(chB));
	vector<char> result;
    std::set_difference(setA.begin(),setA.end(), setB.begin(),setB.end(), std::inserter(result,result.begin()));
    if(result.size() == 1){
    	return true;
    }
    return false;
}

