#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int 
#define llu unsigned long long int 


int main()
{   
    ios_base :: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int a, b, c; cin>> a >> b >> c;
    (a*a + b*b < c*c) ? cout<<"Yes\n" :  cout<< "No\n";
 

    return 0;
}