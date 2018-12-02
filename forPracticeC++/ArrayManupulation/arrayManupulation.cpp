//This code fails to consider big operations and timed out. Solution given below gives proper result
#include <bits/stdc++.h>
#include<vector>
using namespace std;

// Complete the arrayManipulation function below.
long arrayManipulation(long n, vector<vector<long>> queries) {
    vector<long> vec(n,0);
    long cnt;
    for(long i=0;i<queries.size();i++){
        cnt=queries[i][0]-1;
        for(long j=queries[i][0]-1;j<=queries[i][1]-1;j++){
            vec[cnt++]+=queries[i][2];
        }
    }
    long value=vec[0];
    for(int i=1;i<vec.size();i++){
        if(value<vec[i]){
            value=vec[i];
        }
    }
    return value;
}

int main()
{
    vector<vector<long>> queries;
    long n,m;
    cin>>n>>m;
    long temp;
    for(long i=0;i<m;i++){
        vector<long> row;
        for(long j=0;j<3;j++){
            cin>>temp;
            row.push_back(temp);
        }
        queries.push_back(row);
    }
    long result=arrayManipulation(n,queries);
    cout<<result;
    return 0;
}
/*
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long int N,K,p,q,sum,i,j,max=0,x=0;

    cin>>N>>K;
    long int *a=new long int[N+1]();

    for(i=0;i<K;i++)
    {
        cin>>p>>q>>sum;
        a[p]+=sum;
        if((q+1)<=N) a[q+1]-=sum;
    }

    for(i=1;i<=N;i++)
    {
       x=x+a[i];
       if(max<x) max=x;

    }

    cout<<max;
    return 0;
}
*/