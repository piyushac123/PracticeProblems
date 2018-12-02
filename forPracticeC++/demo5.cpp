/*2520 is number divisible by all numbers in 1-10
then which is lowest number divisible by 1-20 */
#include<iostream>
#include<math.h>
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
	//number send is equal to array of prime numbers in 1-20
	int equalNumber(int a,int *arr,int count){
		int temp=0;
		for(int j=0;j<count;j++){
			if(a==arr[j]){
				return 1;
			}
		}
		return 0;
	}
};
int main(){
	function func;
	int arr[50]={0};
	arr[0]=1;
	int cnt=1;
	int max=20;
	//find all prime numbers in 1-20
	//Only change max 
	for(int i=2;i<=max;i++){
		if(func.primeNumber(i)){
			arr[cnt++]=i;
		}
	}
	cout<<cnt<<endl;
	int arrCnt[cnt];//count of prime number occuring in 1-20
	for(int i=0;i<cnt;i++){
		arrCnt[i]=1;
	}
	int temp=0;
	int cnt2;
	//get composite divisors in 1-20
	for(int i=1;i<=max;i++){
		if(!(func.equalNumber(i,arr,cnt))){
			temp=i;
			for(int j=1;j<cnt;j++){
				cnt2=0;
				while(1){
					if(temp%arr[j]==0){
						temp/=arr[j];
						cnt2++;
					}
					else{
						if(arrCnt[j]<cnt2){
							arrCnt[j]=cnt2;
						}
						break;
					}
				}
				if(temp==1){
					break;
				}
			}
			}
		}
		for(int i=0;i<cnt;i++){
			cout<<arr[i]<<" "<<arrCnt[i]<<endl;
		}
		long int result=1;
		for(int i=0;i<cnt;i++){
			result*=pow(arr[i],arrCnt[i]);
		}
		cout<<"Result: "<<result<<endl;
		//cout<<func.equalNumber(i,arr,cnt)<<" "<<i<<endl;
	return 0;
}