#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n,k;
    vector<int>A;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> k;
        A.push_back(k);
    }
    reverse(A.begin(),A.end());
    for(int x:A){
        cout << x << endl;
    }

    return 0;
}
