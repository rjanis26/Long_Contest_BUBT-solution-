#include<bits/stdc++.h>
using namespace std;
#define ll  long long int 
#define llu unsigned long long int 

int main()
{
	int a,b,c;
	cin >> a >> b >> c;
	
	bool ans = false;
	
	for(int i=0; i<=c/a; i++){
		int x = c - i*a;
		if(x%b==0){
			ans = true;
			break;
		}
	}
	
	if(ans) cout << "Yes" << endl;
	else cout << "No" << endl;
}