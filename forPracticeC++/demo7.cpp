/*Curious number-n digit is equal to last n-digit of n^2*/
#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int i=1;
	int arr[20];
	int cnt=0;
	int temp;
	int cnt1=0;
	while(i<1000){
		for(int j=0;j<20;j++){
			arr[j]=0;
		}
		temp=i;
		cnt=0;
		cnt1=0;
		do{
			arr[cnt++]=temp%10;
			temp/=10;
		}while(temp!=0);
		temp=pow(i,2);
		for(int j=0;j<cnt;j++){
			if(temp%10==arr[j]){
				cnt1++;
				temp/=10;
			}
		}
		if(cnt==cnt1){
			cout<<i<<" "<<pow(i,2)<<endl;
		}
		i++;
	}
	return 0;
}