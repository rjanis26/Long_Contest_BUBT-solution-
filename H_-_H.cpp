#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll  long long int 
#define llu unsigned long long int 

void solve(int n) {
    for(int i=1; i<=n; i++) {
        if(n%i == 0) cout<<i << endl;
    }
}

int main()
{   
    ios_base :: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n;  cin>> n;
    solve(n);

 

    return 0;
}
