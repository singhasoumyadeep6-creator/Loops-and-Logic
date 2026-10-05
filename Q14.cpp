//sum of 1 to n
#include<iostream>
int main(){
	int n;
	int sum = 0;
	std::cout<<"Enter a Number: ";
	std::cin>>n;
	
	for(int i = 1; i <= n; i++){
		sum = sum + i;
		
	}
	std::cout<<"sum is: "<<sum<<" ";
	return 0;
}
