/*
 * Lab 2
 * Sean Cox
 * Yuchen Yao
 * Jan 16
 * CS1D
 * Lebowitz
 */
#include "header.h"

int main(){

	//header outputs
	cout << "Lab 2\nSean Cox\nYuchen Yao\nCS1D\nLebowitz\n\n";

	//index for ar
	int index = 0;

	//ar that holds all potential palindromes
	string ar[] = {"A man a plan a canal Panama","The rain in Spain","No lemon, no melon","radar", "CS1D","Was it a cat I saw","Racecar", "Saddleback", "mom","dad"};

	while(index < 10){
		cout << ar[index] << " ";
		if(IsPalindrome(ar[index])){
			cout << "is a Palindrome\n";
		}
		else{
			cout << "is not a Palindrome\n";
		}
		index++;
	}




	return 0;
}
