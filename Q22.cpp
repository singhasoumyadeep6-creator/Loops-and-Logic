//find the largest digit
#include<iostream>
int main(){
	int n; 
	int digit;
	int largest = 0;
	
	std::cout<<"Enter a Number: ";
	std::cin>>n;
	
	digit = n % 10;

	
	while( n > 0){
		digit = n % 10;
	
	if( digit > largest){
		largest = digit;
	}
	n = n / 10;
}
	
	std::cout<<"Largest Number is: "<<largest<<" ";
	return 0;
}
