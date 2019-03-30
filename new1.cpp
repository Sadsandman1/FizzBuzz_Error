#include <iostream>
#include <cmath>

using namespace std;
int main(){
    const int max=100;
    int B[max];
    int F[max];
    int Q[max];
    int N[max];
	int b=0,n=0,f=0,q=0,i=1;

	while(n<101){
        if((n%15)==0){
            Q[q]=i;
            q++;
        }
        else if((n%5)==0){
            B[b]=i;
            b++;
        }
        else if((n%15)==0){
            Q[f]=i;
            f++;
        }
        else{
            N[n]=i;
            n++;
        }
        i++;

	}
        cout<<B<<endl;
        cout<<F<<endl;
        cout<<Q<<endl;
        cout<<N<<endl;

	return 0;
	}
