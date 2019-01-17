/*
 * Lab 2
 * Sean Cox
 * Yuchen Yao
 * Jan 16
 * CS1D
 * Lebowitz
 */
#include "header.h"

bool IsPalindrome(string arg){
	//clears the first index in the string of white spaces
	while(arg[0] == ' '){
		arg = arg.substr(1,arg.length()-1);
	}
	//Clears the last index in the string of white spaces
	while(arg[arg.length()-1] == ' '){
		arg = arg.substr(0,arg.length()-1);
	}

	//Base case, if the length of the string is 1, its a palindrome
	//because any single letter is a palindrome, if its 0 then its
	//recursion days are over, and its a palindrome.
	if(arg.length() <= 1){
		return true;
	}
	//Comparison to see if the head and tail of the string are equal.
	else if(tolower(arg[0]) == tolower(arg[arg.length()-1])){
		//Call IsPalindrome recursively, but with a truncated argument
		return IsPalindrome(arg.substr(1,arg.length()-2));
	}
	//If this runs once, not a palindrome
	else{
		return false;
	}



	return true;
}

