/*Sum of first 30 even fibonacci numbers*/
#include<iostream>
using namespace std;
class demo
{
public:
	long int fibo(int count){
		long int a=0,b=1;
		int cnt=0;
		long int temp;
		long int sum=0;
		while(cnt!=count){
			temp=a+b;
			a=b;
			b=temp;
			if(b%2==0){
				cnt++;
				cout<<cnt<<" "<<b<<endl;
				sum+=b;
			}
		}
		return sum;
	}
};
int main(){
	long int sum;
	demo d;
	sum=d.fibo(5);
	cout<<"Sum: "<<sum<<endl;
	return 0;
}