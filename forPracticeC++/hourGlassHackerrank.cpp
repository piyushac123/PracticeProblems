#include <bits/stdc++.h>

using namespace std;
int max1=-9999;

// Complete the hourglassSum function below.
void hourglassSum(int arr[3][3]) {
    int sum=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
            if(i==1&&(j==0||j==2)){
            }
            else{
                sum+=arr[i][j];
            }
        }
        cout<<"\n";
    }
    cout<<max1<<" "<<sum<<"\n";
    if(max1<sum){
        max1=sum;
    }
    cout<<max1<<"\n";
}

int main()
{
    //int m=3,n=3;
    int arr[6][6];
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            cin>>arr[i][j];
        }
    }
    /*for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }*/
    
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            int arr1[3][3]={{arr[i][j],arr[i][j+1],arr[i][j+2]},{arr[i+1][j],arr[i+1][j+1],arr[i+1][j+2]},{arr[i+2][j],arr[i+2][j+1],arr[i+2][j+2]}};
             hourglassSum(arr1);
        }
    }
   
    return 0;
}

