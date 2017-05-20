//Program to max and min of 2 numbers
#include <iostream>
using namespace std;

int maxreturn(int x, int y)
{
    return (x^((x^y)&-(x<y)));
}
int minreturn(int x, int y)
{
    return (y^((x^y)&-(x<y)));
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<"Max: "<<maxreturn(a,b)<<endl<<"Min: "<<minreturn(a,b)<<endl;
    return 0;
}
