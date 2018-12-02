//Not Satisfied
#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>
using namespace std;

int stringcmp(string a,string b){
    char val1[20],val2[20];
    strcpy(val1,a.c_str());
    strcpy(val2,b.c_str());
    int len;
    if(a.length()==b.length()){
        len=a.length();
    }
    else{
        return 1;//length not equal
    }
    int cnt=0;
    for(int i=0;i<len;i++){
        //cout<<val1[i]<<" "<<val2[i]<<" "<<cnt<<"\n";
        if(val1[i]==val2[i]){
            cnt++;
        }
        else{
            break;
        }
    }
    if(cnt==len){
        return 0;//a and b are same string
    }
    return 1;//not same
}

// Complete the matchingStrings function below.
vector<int> matchingStrings(vector<string> str1, vector<string> str2) {
    /*for(int i=0;i<strings.size();i++){
        cout<<strings[i]<<" ";
    }
    cout<<"\n";
    for(int i=0;i<queries.size();i++){
        cout<<queries[i]<<" ";
    }*/
    /*vector<int> count;
    int cnt=0;
    int pre,next;
    for(int i=0;i<str1.size();i++){
        pre=str1[i].c_str()[0];
        next=str1[i+1].c_str()[0];
        if(i==str1.size()-1){
            count.push_back(++cnt);
        }
        else{
            if(pre==next){
                 cnt++;
            }
             else{
                 count.push_back(++cnt);
                 cnt=0;
             }
        }
        
    }*/
    /*for(int i=0;i<count.size();i++){
        cout<<count[i]<<"\n";
    }*/
    //pre for queries string
    //next for strings string
    int pre,next;
    vector<int> result;
    int temp=0;
    int j,val,cntresult;
    for(int i=0;i<str2.size();i++){
        pre=str2[i].c_str()[0];
        next=str1[0].c_str()[0];
        cntresult=temp=0;
        while((pre!=next)&&(temp<str1.size())){
            if(temp<str1.size()-1)
                next=str1[++temp].c_str()[0];
            else
                temp++;
        }
        while(temp<str1.size()){
            val=stringcmp(str1[temp],str2[i]);
            //cout<<val<<"\n";
            if(val==0){
                cntresult++;
            }
            if(temp<str1.size()-1)
                next=str1[++temp].c_str()[0];
            else
                temp++;
        }
        result.push_back(cntresult);
    }
    return result;
}

int main()
{
    vector<string> str1,str2;
    int num1,num2;
    cin>>num1;
    string temp;
    for(int i=0;i<num1;i++){
        cin>>temp;
        str1.push_back(temp);
    }
    cin>>num2;
    for(int i=0;i<num2;i++){
        cin>>temp;
        str2.push_back(temp);
    }
    std::sort(str1.begin(),str1.end());
    vector<int> result;
    result=matchingStrings(str1,str2);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<"\n";
    }
    return 0;
}
