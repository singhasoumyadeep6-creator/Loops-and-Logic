//product of digits
#include<iostream>
int main(){
	int n;
	int prod = 1;
	int digit;
	std::cout<<"Enter a Number: ";
	std::cin>>n;
	
	if( n < 0){
		n = -n;
	}
	while(n > 0){
		digit = n % 10;
		prod = prod * digit;
		n = n/10;
	}
	std::cout<<"Product of digits: "<<prod;
	return 0;
}
