#include<bits/stdc++.h>
using namespace std;
#define endl '\n'


bool is_prime(int n) {
    if(n<2) return false;
    if(n<=3) return true;
    if(n%2 == 0) return false;

    for(int i = 3; i*i <=n; i+= 2) {
        if(n%i == 0) return false;
    }
    return true;
}


int main()
{   
    ios_base :: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n;  cin>> n;
    (is_prime(n))? cout<<"YES\n" : cout << "NO\n";

 

    return 0;
}


