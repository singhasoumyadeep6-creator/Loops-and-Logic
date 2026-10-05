//factorial of 1 to n
#include<iostream>
int main(){
	int n;
	int fact = 1;
	std::cout<<"Enter a Number: ";
	std::cin>>n;
	
	for(int i = 1; i <= n; i++){
		fact = fact * i;
		
	}
	std::cout<<"Factorial is : "<<fact<<" ";
	return 0;
}
