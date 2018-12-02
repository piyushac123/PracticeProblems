/*find sum of first 2732 prime nos.*/
#include<iostream>
using namespace std;
class function{
public:
	//find prime numbers
	int primeNumber(int a){
		int val=0;
		for(int i=1;i<=a/2;i++){
			if(a%i==0){
				val++;
			}
		}
		if(val==1){
			return 1;
		}
		else{
			return 0;
		}
	}
};
int main(){
	function f;
	long int sum=0;
	int count=0;
	int num=2;
	while(count!=2732){
		if(f.primeNumber(num)){
			sum+=num;
			count++;
		}
		num++;
	}
	cout<<endl<<"Sum:"<<sum<<endl;
	return 0;
}