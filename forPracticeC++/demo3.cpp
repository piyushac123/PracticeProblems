/*n=8788739226 find sum of all prime factors of it*/
#include<iostream>
using namespace std;
int main(){
	long int count=0;
	long int n=8788739226;
	long int arr[100];
	for(long int i=1;i<=n/2;i++){
		if(n%i==0){
			cout<<i<<" ";
			arr[count]=i;
			count++;
		}
	}
	long int count1;
	int count2=0;
	long int sum=0;
	for(int i=1;i<count;i++){
		count1=0;
		for(long int j=1;j<=arr[i]/2;j++){
			if(arr[i]%j==0){
				count1++;
			}
		}
		if(count1==1){
			sum+=arr[i];
			count2++;
		}
	}
	//total factors, prime factors, sum(prime factors);
	cout<<count<<" "<<count2<<" "<<sum;
	return 0;
}