//count no of digits
#include<iostream>
int main(){
	int n;
	int count = 0;
	std::cout<<"Enter a Number: ";
	std::cin>>n;
	
	if( n == 0){
		count = 1;
	}
	while(n > 0){
		n = n/10;
		count++;
	}
	std::cout<<"Numbers are: "<<count;
	return 0;
}
