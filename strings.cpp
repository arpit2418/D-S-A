#include<bits/stdc++.h>
using namespace std;

int main(){
    string a = "ARPIT";
    int len = a.length();
    cout << "1 st string : " << a << endl << "1 st string last character : " << a[len-1] << endl;
    auto it = a.insert(a.begin() + 5, 'A');
    int len1 = a.length();
    cout << "2 nd string : " << a << endl << ++++"2 nd string last character : " << a[len1-1] <<endl;
    return 0 ;
}