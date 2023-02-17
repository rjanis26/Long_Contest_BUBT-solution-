 #include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int 
#define llu unsigned long long int

void fun1(int n, int arr[]) {
 
    int even = 0, odd = 0;
    for(int i=0; i<n; i++) {
        if(arr[i]&1) odd++;
        else even++;
    }

    cout<< "Even: " << even << endl;
    cout<<"Odd: " << odd << endl;
}


void fun2(int n, int arr[]) {
    int pos = 0, neg = 0;
    for(int i=0; i<n; i++) {
        if(arr[i] > 0) pos++;
        else if(arr[i] < 0) 
            neg++;
    }

    cout<<"Positive: "<< pos << endl;
    cout<< "Negative: " <<neg << endl;
}

int main()
{   
    ios_base :: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n; cin>> n;
    int arr[n]; 
    for(int i=0; i<n; i++) {
        cin>> arr[i];
    }
   
   fun1(n, arr);
   fun2(n, arr);
    
 

    return 0;
}