#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int 
#define llu unsigned long long int 

 

int main()
{   
    ios_base :: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

     int ans = 0;
    int a, b, c; cin >> a >> b >> c;
    for(int i=a; i<=b; i++) {
      if(i%c==0) {

      ans = i;
      break;
      } else ans = -1;
         
    }

    if(ans != -1) cout<< ans << endl;
    else cout<<-1 << endl;
 

    return 0;
}