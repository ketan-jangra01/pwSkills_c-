#include <iostream>
using namespace std;
int main()
{
    int x = 65, y = 47,temp;
    cout << "val of x before swap " << x << endl
         << "val of y before swap " << y << endl;
    temp=x;
    x=y;
    y=temp;
    cout << "val of x after swap " << x << endl
         << "val of y after swap " << y << endl;
}