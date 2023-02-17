#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int 
#define llu unsigned long long int

int main()
{   
    ios_base :: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
 
   int A, B; cin>> A >> B;

    int ans = 0;
    int coins_A = A + (A-1);
     ans = max(coins_A, ans);
    int coins_B = B + (B-1);
    ans = max(coins_B, ans);
    int coins_both = A + B;
    ans = max(coins_both, ans);
  
    cout<< ans << endl;
     
  
    return 0;
}

