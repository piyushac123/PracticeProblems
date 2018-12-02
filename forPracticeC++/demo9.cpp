/*both fibonacci and palindrome <1000*/
#include<iostream>
using namespace std;
class demo{
	int arr[2];
public:
	int *fibo(int a,int b){
		arr[0]=a;
		arr[1]=b;
		if(b<1000){
			fibo(b,a+b);
		}
		return arr;
	}
};
int main(){
	demo d;
	int *arr=d.fibo(0,1);
	//cout<<arr[0]<<" "<<arr[1]<<endl;
	int a=arr[1]-arr[0];
	int b=arr[0];
	int arr1[10];
	int temp;
	int cnt,cnt1;
	int temp1;
	while(a!=0){
		for(int i=0;i<10;i++){
			arr1[i]=0;
		}
		temp=b;
		cnt=0;
		cnt1=0;
		do{
			arr1[cnt++]=temp%10;
			temp/=10;
		}while(temp!=0);
		//cout<<cnt<<" ";
		temp1=cnt/2;
		for(int i=0;i<temp1;i++){
			//cout<<arr1[i]<<" ";
			if(arr1[i]==arr1[(cnt-1)-i]){
				cnt1++;
			}
		}
		if(cnt1==temp1){
			cout<<b<<endl;
		}
		temp=b-a;
		b=a;
		a=temp;
	}
	//cout<<a<<" "<<b<<endl;
	return 0;
}