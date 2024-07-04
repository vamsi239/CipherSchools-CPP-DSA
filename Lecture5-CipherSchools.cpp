#include<iostream>
using namespace std;

int main()
{
    int a, b, c, d;

    // Prompting the user to input 4 integers
    cout << "Input 4 integers a, b, c, and d:" << endl;

    // Taking input for the 4 integers
    cin >> a >> b >> c >> d;

    // Statement: a > b || c > d
    cout << (a > b || c > d);

    // C++ interprets true as 1
    // C++ interprets false as 0

    return 0;
}
