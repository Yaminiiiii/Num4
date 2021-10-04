#include <iostream>
#include<string>
using namespace std;
//Average
int main()
{
    string a;
    float b, c, d, ave;
    int n = 1;
    while (n <= 3) {
        cout << "\n Enter Name and Lastname  " << n << "  Person:  "; getline(cin >> ws, a);
        cout << "Grade1:  "; cin >> b;
        cout << "Grade2:  "; cin >> c;
        cout << "Grade3:  "; cin >> d;
        if (d > 0 && b > 0 && c > 0) {
            ave = (b + c + d) / 3;
            if (ave >= 17) {
                cout << "Great!" << endl;
            }
            if (ave < 17 && ave >= 12) {
                cout << "Normal!" << endl;
            }
            if (ave < 12)
                cout << "Fail!" << endl;
        }
        n++;
    }
   
    return 0;
}