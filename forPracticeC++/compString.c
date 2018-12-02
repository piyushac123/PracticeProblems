#include<stdio.h>
#include<string.h>
int checkRange(int val){
	if((val>=65&&val<=90)||(val>=97&&val<=122)){
		return 1;
	}
	return 0;
}
int  compare(char val1,char val2){
	int a=val1,b=val2;
	if(a>b){
		return 1;
	}
	else if(a<b){
		return -1;
	}
	return 0;
}	
int main(){
	/*char c1,c2;
	cin>>c1>>c2;
	int result=strcmp((const char*)&c1,(const char*)&c2);
	cout<<result;*/
	string str1,str3;
	getline(cin,str1);
	getline(cin,str3);
	char str2[str1.length()];
	char str4[str3.length()];
	strcpy(str2,str1.c_str());
	strcpy(str4,str3.c_str());
	int val1=0;
	int actlen1=0,actlen2=0;
	for(int i=0;i<str1.length();i++){
		val1=str2[i];
		if(checkRange(val1)){
			//cout<<str2[i];
			actlen1++;
		}
	}
	//cout<<"\n";
	val1=0;
	for(int i=0;i<str3.length();i++){
		val1=str4[i];
		if(checkRange(val1)){
			//cout<<str4[i];
			actlen2++;
		}
	}
	//cout<<"\n";
	char string1[actlen1];
	char string2[actlen2];
	val1=0;
	int cnt1=0,cnt2=0;
	for(int i=0;i<str1.length();i++){
		val1=str2[i];
		if(checkRange(val1)){
			string1[cnt1++]=str2[i];
		}
	}
	val1=0;
	for(int i=0;i<str3.length();i++){
		val1=str4[i];
		if(checkRange(val1)){
			string2[cnt2++]=str4[i];
		}
	}
	//cout<<"\n";
	for(int i=0;i<actlen1;i++){
		printf("%c",string1[i]);
	}
	printf("\n");
	for(int i=0;i<actlen2;i++){
		printf("%c",string2[i]);
	}
	printf("\n");
	int i=0,j=0;
	char a,b;
	int value1=0,value2=0,result=0;
	while(str2[i]!='\0'&&str4[j]!='\0'){
		
		printf("%c %c\n",string1[i],string2[i]);
		result=compare(string1[i],string2[j]);
		printf("%c\n",result);
		if(result!=0){
			break;
		}
		j++;
		i++;
	}
	if(result>0){
		printf("\n%c %c",str3,str1);
	}
	else if(result<=0){
		printf("\n%c %c",str1,str3);
	}
	return 0;
}