/*find the highest no. <1000 with binary equivalent as palindrome*/
#include<iostream>
using namespace std;
int main(){
	int arr[100];
	int n=0;
	int num=0;
	int count=0;
	char ch;
	for(int i=1000;i>=0;i--){
		num=i;
		count=0;
		for(int j=0;j<100;j++){
			if(num%2==0){
				arr[j]=0;
			}
			else{
				arr[j]=1;
			}
			num=num/2;
			if(num==1){
				n=j+2;
				arr[n-1]=1;
				break;
			}
		}
		
		for(int j=0;j<n/2;j++){
			if(arr[j]==arr[(n-1)-j]){
				count++;
			}
		}
		cout<<count;
		if(count==n/2){
			break;
		}
		cout<<"Print more";
		cin>>ch;
		if(ch=='n'){
			break;
		}
	}
	for(int i=n-1;i>=0;i--){
		cout<<arr[i]<<" ";
		}
		
	
	return 0;
}