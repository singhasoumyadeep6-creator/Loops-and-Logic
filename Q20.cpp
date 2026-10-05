//palindrom of number
#include<iostream>
int main(){
	int n;
	int rev = 0;
	int digit;
	int originalNum;
	std::cout<<"Enter a Number: ";
	std::cin>>n;
	
	originalNum = n;
	
	while(n > 0){
		digit = n % 10;
		rev = rev * 10 + digit;
		n = n/10;
	}
	if(originalNum == rev){
		std::cout<<"Palindrom\n";
	}
	else{
		std::cout<<"Not Palindrom\n";
	}

	return 0;
}

