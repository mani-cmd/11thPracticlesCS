#include <iostream>
using namespace std;
int main()
{
    float percent;
    int x;

    cout << "Enter your percentage : ";
    cin >> percent;
    cout << "You Have scored - " << percent << " %" << endl;

    x = percent / 10;
    switch (x)
    {
    case 10:
    case 9:
    case 8:
        cout << "You Have passed with Distinction";
        break;
    case 7:
    case 6:
        cout << "You Have passed with First Division";
        break;
    case 5:
        cout << "You Have passed with Second Division";
        break;
    case 4:
        cout << "You Have passed with Third Division";
        break;
    default:
        cout << " Sorry But you have failed ";
        break;
    }
}