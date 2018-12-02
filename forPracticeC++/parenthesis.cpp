#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main(){
	vector<char> vec;
	cout<<"Enter your parenthesis('{' or '}')('q' for end):";
	char ch;
	int num1=0;
	cin>>ch;
	while(ch!='q'){
		vec.push_back(ch);
		cin>>ch;
	}
	for(int i=0;i<vec.size();i++){
		cout<<vec[i]<<" ";
	}
	stack <char> stk;
	for(int i=0;i<vec.size();i++){
		if(vec[i]=='{')
			stk.push('{');
		else if(vec[i]=='}')
			stk.pop();
	}
	if(stk.size()==0){
		cout<<"\nParenthesis check is successful";
	}
	else{
		cout<<"\nParenthesis check failed";
	}
	return 0;
}