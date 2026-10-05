//find first and last digit
#include<iostream>
int main(){
	int n;
	int firstdigit;
	int lastdigit;

	
	std::cout<<"Enter a number: ";
	std::cin>>n;
	

		lastdigit = n % 10;
		std::cout<<"Last Digit is: "<<lastdigit<<'\n';
		
		firstdigit = n/10;
		std::cout<<"First Digit is: "<<firstdigit<<'\n';
		
		while(firstdigit >= 10){
			firstdigit = firstdigit / 10;
		}
		return 0;
	}


