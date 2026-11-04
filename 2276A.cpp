#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin >> t;
for(int i=0;i<t;i++){

    int a,b;
    cin >> a >> b;
    vector<int> maxi;

    if(a<=b){
        cout << -1 << endl;

    }
    else{


            cout << min(b,a-b) << endl;

    }

}

}
