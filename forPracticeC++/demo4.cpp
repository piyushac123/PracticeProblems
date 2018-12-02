/*sum of all divisors of 6498*/
#include<iostream>
using namespace std;
int main(){
	int a=6498;
	long int sum=0;
	for(int i=1;i<=a/2;i++){
		if(a%i==0){
			//cout<<i<<" ";
			sum+=i;
		}
	}
	sum+=a;
	cout<<"Sum: "<<sum;
	return 0;
}