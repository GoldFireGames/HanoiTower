#include <iostream>
using namespace std;

void hanoi(int n, char a, char b, char c);

int main()
{
    //cout << "Podaj ilosc klockow: " << endl;
    int n = 4;
    cout << "ilosc krazkow : "<<n << endl;
    //cin>>n;
    char a='1', b='2', c='3';
    hanoi(n,a,b,c);
    return 0;
}

void hanoi(int n, char a, char b, char c)
{
    if(n>0)
    {
    hanoi(n-1,a,c,b);
    cout<<a<<" "<<b<<endl;
    hanoi(n-1,c,b,a);
    }
}

