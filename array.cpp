#include<bits/stdc++.h>
using namespace std;

int main(){
    // int arr[5];
    // cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
    // cout <<"Array is : "<< arr[0] << " " << arr[1] << " " << arr[2]<< " " << arr[3] << " " << arr[4] << endl;
    int  a[3][5];
    int  i, j;
    cout<<"\n2D Array Input:\n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<5;j++)
        {
            cout<<"\na["<<i<<"]["<<j<<"]=  ";
            cin>>a[i][j];
      }
    } 
    
    cout<<"\nThe 2-D Array is:\n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<5;j++)
        {
            cout<<"\t"<<a[i][j];
      }
      cout<<endl;
    } 
    return 0;
}