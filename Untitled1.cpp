#include <iostream>
using namespace std;
int CalcularMaximo(int a, int b);
int main(){
	int n1=56, n2=85, r;
	int max;
	max=CalcularMaximo(n1,n2);
	cout<<max<<endl;
	return 0;
}
int CalcularMaximo(int a, int b){
 int max;
 
 if(a>b)
{
	max=a;
	}	
else
{
	max=b;
	}	
	return max;
}
