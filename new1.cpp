#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int i=1;
	while(i<101){
		if((i % 15 )==0) cout<<"FizzBuzz; ";
		else if((i % 3 )==0) cout<<"Fizz; ";
		else if((i % 5 )==0) cout<<"Buzz; ";
		else cout<<i<<"; ";
	i++;
	}


	return 0;
	}
