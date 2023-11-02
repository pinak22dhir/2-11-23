#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
//prefix sum;



using namespace std;

// void runningSum(vector<int> &v) {
//     int n = v.size();
//     for (int i = 1; i < n; i++) {
//         v[i] += v[i - 1];
//     }
// }

// int main() {
//     int n;
//     cin >> n;
//     vector<int> v;

//     for (int i = 0; i < n; i++) {
//         int ele;
//         cin >> ele;
//         v.push_back(ele);
//     }

//     runningSum(v);

//     for (int i = 0; i < n; i++) {
//         cout << v[i] << " ";
//     }

//     return 0;
// }
// #include <iostream>
// #include <vector>

// using namespace std;

// bool hasSuffix(vector<int> &v) {
//     int n = v.size();
//     int total_sum = 0;
//     for (int i = 0; i < n; i++) {
//         total_sum += v[i];
//     }
//     int prefix_sum = 0;
//     for (int i = 0; i < n; i++) {
//         prefix_sum += v[i];
//         int suffix_sum = total_sum - prefix_sum;
//         if (suffix_sum == prefix_sum) {
//             return true;
//         }
//     }
//     return false;
// }

// int main() {
//     int n;
//     cin >> n;
//     vector<int> v;

//     for (int i = 0; i < n; i++) {
//         int ele;
//         cin >> ele;
//         v.push_back(ele);
//     }

//     if (hasSuffix(v)) {
//         cout << "Yes, there is a suffix with equal sum." << endl;
//     } else {
//         cout << "No such suffix exists." << endl;
//     }

//     return 0;
// }
// int main(){
//     int n;
//     cin>>n;
//     vector<int> v(n+1,0);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     //calculatr prefix sum array
//     for(int i=0;i<=n;i++){
//   v[i]+=v[i-1];
//     }
//     for(int i=0;i<n;i++){
//         cout<<v[i];
//     }

//     int q;
//     cin>>q;
//     while(q--){
//     int l,r;
//     cin>>l>>r;
//     int ans=0;
//     ans=v[r]-v[l-1];
//     cout<<ans;
// }
// return 0;
// }
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n + 1, 0);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    // Calculate the prefix sum array
    for (int i = 1; i <= n; i++) {
        v[i] += v[i - 1];
    }

    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }

    int q;
    cin >> q;

    while (q--) {
        int l, r;
        cin >> l >> r;
        int ans = v[r] - v[l - 1];
        cout << ans << endl;
    }

    return 0;
}
