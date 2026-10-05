//reverse a number
#include<iostream>
int main(){
	int n;
	int rev = 0;
	int digit;
	std::cout<<"Enter a Number: ";
	std::cin>>n;
	
	if( n < 0){
		n = -n;
	}
	while(n > 0){
		digit = n % 10;
		rev = rev * 10 + digit;
		n = n/10;
	}
	std::cout<<"Reverse of digits: "<<rev;
	return 0;
}
