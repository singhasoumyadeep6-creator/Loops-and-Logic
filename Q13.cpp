//print odd 1 to n
#include<iostream>
int main(){
	int n;
	std::cout<<"Enter a Number: ";
	std::cin>>n;
	
	for(int i = 1; i <= n; i++){
		if( i % 2 != 0){
			std::cout<<i<<" ";
		}
	}
	return 0;
}
