//bst with array
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int main(){
	int height;
	cout<<"Enter height of tree:";
	cin>>height;
	int node=0;
	for(int i=0;i<height;i++){
		node+=pow(2,i);
	}
	int vec[node];
	for(int i=0;i<node;i++){
		vec[i]=-1;
	}
	int flag;
	cout<<"Enter the elements:";
	cin>>flag;
	do{
		//if root is empty
		if(vec[0]==-1){
			vec[0]=flag;
		}
		else{
			int temp=vec[0];
			int flg=0;
			int index=0;
			int inc=0;
			do{
			index+=pow(2,inc)+(index-pow(2,inc)+1);
			if(temp>=flag){
				if(vec[index]==-1){
					vec[index]=flag;
					flg=1;
				}
				else{
					temp=vec[index];
					inc++;
				}
			}
			else{
				if(vec[index+1]==-1){
					vec[index+1]=flag;
					flg=1;
					index++;		
				}
				else{
					index+=1;
					temp=vec[index];
					inc++;
				}
			}
			//cout<<index<<"\n";
			}while(flg==0);
		}
	cin>>flag;
	}while(flag!=-1);
	for(int i=0;i<node;i++){
		cout<<vec[i]<<" ";
	}
	cout<<"\n";
	int ht=(2*height)-1;
	int cnt=0;
	int ind=0;
	int cnt1;
	for(int i=0;i<ht;i++){
		if(i%2==0){
			/*for(int j=1;j<(ht-i);j++){
				cout<<" ";
			}*/
			//cnt1=0;
			//cout<<"\n"<<ind<<"\n";
			for(int j=0;j<pow(2,cnt);j++){
				if(j%2==0){
					if(vec[ind+j]!=-1){
						cout<<vec[ind+j]<<" ";
						//cnt1++;
					}
					else{
						cout<<"| ";
						//cnt1++;
					}
				}
				else{
					if(vec[ind+j]!=-1){
						cout<<vec[ind+j]<<" ";//new one
						//cnt1++;
					}
					else{
						cout<<"| ";
						//cnt1++;
					}
				}
			}
			ind+=pow(2,cnt);
			cnt++;
			cout<<"\n";
		}
		else{
			/*for(int j=1;j<(ht-i);j++){
				cout<<" ";
			}*/
			cnt1=0;
			for(int j=0;j<pow(2,cnt-1);j++){
				if(vec[ind+cnt1]!=-1)
					cout<<"/";
				else
					cout<<"/";
				cnt1++;
				if(vec[ind+cnt1]!=-1)
					cout<<"\\ ";//new one
				else
					cout<<"\\ ";
				cnt1++;
			}
			cout<<"\n";
		}
	}
	return 0;
}