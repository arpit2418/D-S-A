#include<bits/stdc++.h>
using namespace std;
// If marks are less than 25, it prints "Grade: F."
// If marks are between 25 and 44 (inclusive), it prints "Grade: E."
// If marks are between 45 and 49 (inclusive), it prints "Grade: D."
// If marks are between 50 and 59 (inclusive), it prints "Grade: C."
// If marks are between 60 and 69 (inclusive), it prints "Grade: B."
// If marks are 70 or higher, it prints "Grade: A."
// If marks are outside the valid range, it prints "Invalid marks entered."
int main(){   
    int marks;
    cin >> marks;
    if (marks< 25){
        cout << "Grade: F." << endl;
        }
    else if (marks >= 25 && marks <= 44){
        cout << "Grade: E." << endl;
        }
    else if (marks>= 45 && marks <= 49){
        cout << "Grade: D." << endl;
        }
    else if (marks>= 50 && marks <= 59){
        cout << "Grade: C." << endl;
        }
    else if (marks>= 60 && marks <= 69){
        cout << "Grade: B." << endl;
        }
    else if (marks>= 70){
        cout << "Grade: A." << endl;
        }
    else{
        cout << "Invalid marks entered." << endl;
        }
return 0;
}