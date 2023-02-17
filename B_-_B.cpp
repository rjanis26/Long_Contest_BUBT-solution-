
 #include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int 
#define llu unsigned long long int 
 

int main()
{   
    ios_base :: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
   int a, b; cin>> a >> b;
   int count  = 0 ;
   for(int i=a; i<=b; i++) {
        count++;
   }
    
   cout<< count << endl;
     
    return 0;
}
