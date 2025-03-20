#include<bits/stdc++.h>
using namespace std;
void printnName() {
    cout << "Hello Arpit" << endl;
}
void printnName(string name) {
    cout << "Hello " << name << endl;
}
int sum(int a, int b) {
    int res = a + b;
    return res;
}
void add(int a, int b) {  
    int sum = a + b;
    cout << sum << endl;
}

int main(){
    printnName(); 
    cout <<"ENTER YOUR NAME : ";
    string name;
    cin >> name;
    printnName(name);
   // for int fn 
    int a , b;
    cin >> a >> b ;
    int res = sum(a,b);
    cout << res << endl;
    // for void fun
    int a1 , b1;
    cin >> a1 >> b1 ;
    add(a1,b1);
    int num1, num2;
    cin >> num1 >> num2;
    int minimum = min(num1, num2);//in built fn
    int maximum = max(num1, num2);//in built fn
    cout << "Minimum: " << minimum << endl;
    cout << "Maximum: " << maximum << endl;
    return 0;
}