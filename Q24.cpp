//count particular digit
#include<iostream>
int main(){
	int n;
	int count = 0;
	int findDigit;
	int digit;
	
	std::cout<<"Enter a Number: ";
	std::cin>>n;
	
	std::cout<<"Enter a digit to find: ";
	std::cin>>findDigit;
	
	while(n > 0){
		digit = n % 10;
		
		if(digit == findDigit){
			count ++;
		}
	    n = n / 10;
	}
		std::cout<<"Your digit occurs: "<<count<<" times\n";
	return 0;
}
