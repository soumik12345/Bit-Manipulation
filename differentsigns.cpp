//Program to check if 2 numbers are of different signs or not
#include <iostream>
using namespace std;

bool isDiffSign(int a, int b)
{
    return ((a^b)<0);
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<(isDiffSign(a,b)?"True":"False");
    return 0;
}
