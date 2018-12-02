#include<iostream>
#include<math.h>
using namespace std;
class demo{
public:
	/*void printOut(int a,int count){
		if(count<=5){
			int i;
			int temp=a;
			for(i=0;i<count;i++){
				cout<<temp*temp<<" ";
				temp++;
			}
			count++;
			cout<<endl;
			printOut(a+i,count);
		}
	}*/
	int fibo(int a,int b){
		if(b<100){
			int val=fibo(b,a+b);
			cout<<val<<endl;
			return a;
		}
		return a;
	}
	int pattern(int val){
		if(val>1){
			cout<<pattern(val-1)<<" ";
			return val;
		}
		return val;
	}
};
int main(){
	demo d;
	//d.printOut(1,1);
	/*for(int i=0;i<5;i++){
		temp=cnt;
		for(int j=0;j<=i;j++){
			cout<<temp*temp<<" ";
			temp++;
		}
		cnt=temp;
		cout<<endl;
	}*/
	/*float sum=0;
	int cnt=0;
	for(float i=1;i<=6;i+=2){
		sum+=pow(-1,cnt)*(i/(i+1));
		cnt++;
	}
	cout<<sum;*/
	//for fibonacci
	int val=d.fibo(0,1);
	cout<<val;
	cout<<endl;
	//for pattern
	for(int i=1;i<5;i++){
		cout<<d.pattern(i)<<endl;
	}
	return 0;
}