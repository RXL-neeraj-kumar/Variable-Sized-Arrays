#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,q,i,j,q_count,k;
    cin>>n>>q;
    vector <vector <int> > a(n);
    for(i=0;i<n;i++){
        cin>>k;
        a[i].resize(k);
        for(j=0;j<k;j++){
            cin>>a[i][j];
        }
    }
    for(q_count=0;q_count<q;q_count++){
        cin>>i>>j;
        cout<<a[i][j]<<endl;
    }
    return 0;
}
