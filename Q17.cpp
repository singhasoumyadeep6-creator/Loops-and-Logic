//sum of digits
#include<iostream>
int main(){
	int n;
	int sum = 0;
	int digit;
	std::cout<<"Enter a Number: ";
	std::cin>>n;
	
	if( n < 0){
		n = -n;
	}
	while(n > 0){
		digit = n % 10;
		sum = sum + digit;
		n = n/10;
	}
	std::cout<<"Sum of digits: "<<sum;
	return 0;
}
