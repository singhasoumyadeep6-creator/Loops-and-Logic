//find the smallest digit
#include<iostream>
int main(){
	int n; 
	int digit;
	int smallest = 9;
	
	std::cout<<"Enter a Number: ";
	std::cin>>n;
	
	digit = n % 10;

	
	while( n > 0){
		digit = n % 10;
	
	if( digit < smallest){
		smallest = digit;
	}
	n = n / 10;
}
	
	std::cout<<"Smallest Number is: "<<smallest<<" ";
	return 0;
}
