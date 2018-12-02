#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;
class ticktack{
char arr[4][4];
public:
	static int dec;
	void init(){
		arr[0][0]='0';
		arr[0][1]='1';
		arr[0][2]='2';
		arr[0][3]='3';
		arr[1][0]='1';
		arr[2][0]='2';
		arr[3][0]='3';
		for(int i=1;i<4;i++){
			for(int j=1;j<4;j++){
				arr[i][j]=' ';
			}
		}
	}
	void GiveEntry();
	int CheckForWinner();
};
int ticktack::dec=0;
void ticktack::GiveEntry(){
	cout<<"\n===================== START GAME =====================\n";
	int row,col;
	int temp=0;
	int count;
	dec=0;
	do{
	count=0;
	cout<<"\nEnter row no.:";
	cin>>row;
	cout<<"Enter column no.:";
	cin>>col;
	if(arr[row][col]==' '){
		if(dec==0){
			dec=1;
			arr[row][col]='o';
		}
		else if(dec==1){
			dec=0;
			arr[row][col]='x';
		}
	}
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<"\n";
	}
	for(int i=1;i<4;i++){
		for(int j=1;j<4;j++){
			if(arr[i][j]!=' '){
				count++;
			}
		}
	}
	temp=CheckForWinner();
}while(temp==0&&count!=9);
if(temp==1){
	cout<<"\nPlayer 1 Wins.\n";
}
else if(temp==-1){
	cout<<"\nPlayer 2 Wins.\n";
}
else if(temp==0&&count==9){
	cout<<"\nMatch Tied\n";
}
}
int ticktack::CheckForWinner(){
	if((arr[1][1]=='o'&&arr[1][2]=='o'&&arr[1][3]=='o')){
		return 1;
	}
	else if((arr[2][1]=='o'&&arr[2][2]=='o'&&arr[2][3]=='o')){
		return 1;
	}
	else if((arr[3][1]=='o'&&arr[3][2]=='o'&&arr[3][3]=='o')){
		return 1;
	}
	else if((arr[1][1]=='o'&&arr[2][1]=='o'&&arr[3][1]=='o')){
		return 1;
	}
	else if((arr[1][2]=='o'&&arr[2][2]=='o'&&arr[3][2]=='o')){
		return 1;
	}
	else if((arr[1][3]=='o'&&arr[2][3]=='o'&&arr[3][3]=='o')){
		return 1;
	}
	else if((arr[1][1]=='o'&&arr[2][2]=='o'&&arr[3][3]=='o')){
		return 1;
	}
	else if((arr[1][3]=='o'&&arr[2][2]=='o'&&arr[3][1]=='o')){
		return 1;
	}
	else if((arr[1][1]=='x'&&arr[1][2]=='x'&&arr[1][3]=='x')){
		return -1;
	}
	else if((arr[2][1]=='x'&&arr[2][2]=='x'&&arr[2][3]=='x')){
		return -1;
	}
	else if((arr[3][1]=='x'&&arr[3][2]=='x'&&arr[3][3]=='x')){
		return -1;
	}
	else if((arr[1][1]=='x'&&arr[2][1]=='x'&&arr[3][1]=='x')){
		return -1;
	}
	else if((arr[1][2]=='x'&&arr[2][2]=='x'&&arr[3][2]=='x')){
		return -1;
	}
	else if((arr[1][3]=='x'&&arr[2][3]=='x'&&arr[3][3]=='x')){
		return -1;
	}
	else if((arr[1][1]=='x'&&arr[2][2]=='x'&&arr[3][3]=='x')){
		return -1;
	}
	else if((arr[1][3]=='x'&&arr[2][2]=='x'&&arr[3][1]=='x')){
		return -1;
	}
	else{
		return 0;
	}
}
int main(){
	ticktack t;
	char ch,ch1;
	char num;
	do{
		cout<<"\n===================== TICK TACK TOE =====================\n";
		cout<<"\n===================== MAIN MENU =====================\n";
		cout<<"1. Play Game\n2. Rules of Game\n3. Exit Game\n";
		cin>>num;
		switch(num){
			case '1':
			do{
				t.init();
				t.GiveEntry();
				cout<<"Play Again?(y/n)";
				cin>>ch1;
			}while(ch1=='y');
			break;
			case '2':
			cout<<"\nRules:-\n1. 2 Players game.\n2. Play alternately\n3. Table of 3x3\n4. Choose either 'x' or 'o'\n"
			"5. Player wins if similar signs are in straight line in table\n";
			break;
			case '3':
			exit(0);
			break;
			default:
			cout<<"Invalid option.";
			break;
		}
		cout<<"\nGo to Main Menu?(y/n)";
		cin>>ch;
	}while(ch=='y');
	return 0;
}