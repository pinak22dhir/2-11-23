#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
// int maxonerow(vector <vector<int>> &v){
//     int max_rows=-1;
//     int max_one=INT_MIN;
//     int columns=v[0].size();
//     for(int i=0;i<v.size();i++){
//          for(int j=0;j<v.size();j++){
//             if (v[i][j]==1){
//               int number_of_ones=columns-j;
//               if(number_of_ones>max_one){
// max_one=number_of_ones;
// max_rows=i;
//               }  
//               break;
//             }
//          }}
//          return max_rows;

// }
// int main(){
//     int n, m;
//     cin>>n>>m;
//     vector<vector<int>> vec(n,vector<int>(m));
//     for(int i=0;i<n;i++)
// {
//     for (int j=0;j<m;j++){
//         cin>>vec[i][j];
//     }
// } int rs=maxonerow(vec);
// cout<<rs<<endl;
// }
// #include <iostream>
// #include <vector>
// #include <climits>

// using namespace std;

// int maxOneRow(vector<vector<int>> &v) {
//     int maxRows = -1;
//     int maxOnes = INT_MIN;
//     int columns = v[0].size();

//     for (int i = 0; i < v.size(); i++) {
//         int numberOfOnes = 0;

//         for (int j = 0; j < v[i].size(); j++) {
//             if (v[i][j] == 1) {
//                 numberOfOnes = columns - j;
//                 break;
//             }
//         }

//         if (numberOfOnes > maxOnes) {
//             maxOnes = numberOfOnes;
//             maxRows = i;
//         }
//     }

//     return maxRows;
// }

// int main() {
//     int n, m;
//     cin >> n >> m;
//     vector<vector<int>> vec(n, vector<int>(m));

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             cin >> vec[i][j];
//         }
//     }

//     int rs = maxOneRow(vec);
//     cout << rs << endl;

//     return 0;
// }
void rotatearray(vector <vector<int>> &vec){

// transpose 
int n=vec.size();
for(int i=0;i<n;i++){
    for(int j=0;j<i;j++){
swap(vec[i][j], vec[j][i]);
    }
}
//reverse ever row
for(int i=0;i<n;i++){
    reverse(vec[i].begin(), vec[i].end());
}
return; 
}


using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<int>> vec(n, vector<int>(n));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> vec[i][j];
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout <<vec[i][j]<<" ";
        }
        cout<<endl;
    }

    // You can now work with the vector 'vec' containing 'n' rows and 'n' columns.

    return 0;
}
