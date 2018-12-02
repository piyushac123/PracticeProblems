/*number of even numbers in first 50 fibonacci numbers*/
#include<iostream>
using namespace std;
int main(){
	long int a=0,b=1;
	long int temp;
	int count=1;
	cout<<a<<endl<<b<<endl;
	for(int i=0;i<48;i++){
		temp=a+b;
		a=b;
		b=temp;
		cout<<b<<endl;
		if(b%2==0){
			count++;
		}
	}
	cout<<count;
	return 0;
}