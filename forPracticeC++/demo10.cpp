/*circular numbers in 1 million*/
#include<iostream>
#include<math.h>
using namespace std;
class demo{
public:
	int primeNumber(int num){
		int cnt=0;
		if(num==1){
			return 0;
		}
		for(int i=1;i<=num/2;i++){
			if(num%i==0){
				cnt++;
			}
		}
		if(cnt==1){
			return 1;
		}
		return 0;
	}
};
int main(){
	demo d;
	int i=1;
	int arr[20];
	int arrmul[20];
	int temp,temp1,temp2,temp3,cnt=0,cnt1=0;
	int result;
	int x;
	int check;
	int inc;
	while(i<=10){
	for(int j=0;j<20;j++){
			arr[j]=0;
		}
		if(d.primeNumber(i)){
			temp=i;
			do{
				arr[cnt++]=temp%10;
				temp/=10;
			}while(temp!=0);
			cout<<cnt<<endl;
			temp1=cnt;
			temp2=0;
			arrmul[0]=1;
			for(int k=1;k<cnt;k++){
				arrmul[k]=arrmul[k-1]*10;
			}
			for(int k=0;k<cnt;k++){
				inc=k;
				/*for(int y=0;y<cnt;y++){
						cout<<arrmul[y]<<" ";
					}*/
					result=0;
					for(int l=0;l<cnt;l++){
						if(l+inc==cnt){
							inc=-l;
						}
						result+=arr[l]*arrmul[l+inc];
					}
					/*temp2=arrmul[0];
					temp3=0;
					for(int m=0;m<cnt;m++){
						temp3=arrmul[m+1];
						arrmul[m+1]=temp2;
						temp2=temp3;
					}
					arrmul[0]=arrmul[cnt-1];
					arrmul[cnt-1]=temp2;*/
					cout<<result<<endl;
					/*if(d.primeNumber(result)){
						cout<<result<<endl;
						cnt1++;
					}*/
			}
		}
		i++;
	}
	/*i=1193;
	for(int j=0;j<20;j++){
			arr[j]=0;
		}
		if(d.primeNumber(i)){
			
			temp=i;
			do{
				arr[cnt++]=temp%10;
				temp/=10;
			}while(temp!=0);
			cout<<cnt<<endl;
			temp1=cnt;
			temp2=0;
			arrmul[0]=1;
			for(int k=1;k<cnt;k++){
				arrmul[k]=arrmul[k-1]*10;
			}
			for(int k=0;k<cnt;k++){
				for(int y=0;y<cnt;y++){
						cout<<arrmul[y]<<" ";
					}
					result=0;
					for(int l=0;l<cnt;l++){
						result+=arr[l]*arrmul[l];
					}
					temp2=arrmul[0];
					temp3=0;
					for(int m=0;m<cnt;m++){
						temp3=arrmul[m+1];
						arrmul[m+1]=temp2;
						temp2=temp3;
					}
					temp2=arrmul[0];
					arrmul[0]=arrmul[cnt-1];
					arrmul[cnt-1]=temp2;
					cout<<endl;
					/*if(d.primeNumber(result)){
						cout<<result<<endl;
						cnt1++;
					}
			}
			if(cnt==cnt1){
				cout<<i<<endl;
			}
		}*/
	return 0;
}