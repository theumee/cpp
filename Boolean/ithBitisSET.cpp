#include<iostream>
using namespace std;

bool check(int N, int i )
{
    if( N & (1 << i) )
        return true;
    else
        return false;
}
int main(){
    for(int i = 0 ; i < 32 ; i++)
        if(check(15, i))
            cout << i << " ";
}
