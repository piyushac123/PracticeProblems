#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class FirstFile{
public:
int pnr;
string name;
	FirstFile(){
		ofstream ofile("abc.txt",ios::binary);
	}
};
class SecondFile{
public:
	fstream ifile;
	FirstFile first;
	void CreateEntry();
	void DisplayRecords();
};
void SecondFile::CreateEntry(){
	ifile.open("abc.txt",ios::in|ios::out|ios::ate|ios::binary);
	cout<<"Enter pnr and name:\n";
	cin>>first.pnr>>first.name;
	ifile<<first.pnr<<" "<<first.name<<"\n";
	ifile.close();
}
void SecondFile::DisplayRecords(){
	ifile.open("abc.txt",ios::in|ios::out|ios::binary);
	ifile.seekg(0,ios::beg);
	while(!ifile.eof()){
		ifile>>first.pnr>>first.name;
		cout<<"\nP.N.R.-> "<<first.pnr<<"\tName-> "<<first.name;
	}
	ifile.close();
}
int main(){
	SecondFile sec;
	char ch,ch1;
	int pnrnum;
	string str;
	do{
		cout<<"Enter your choice:\n1. Create details\n2. Display\n";
		cin>>ch1;
		switch(ch1){
			case '1':
			
			sec.CreateEntry();
			break;
			case '2':
			sec.DisplayRecords();
			break;
			default:
			cout<<"Invalid choice.";
			break;
		}
		cout<<"Do you want to enter more?(y/n)";
		cin>>ch;
	}while(ch=='y');
	return 0;
}