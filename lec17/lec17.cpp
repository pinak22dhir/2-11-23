#include<iostream>
using namespace std;


int main() {
    int arr1[] = {2, 3, 6, 8, 9};
    int arr2[] = {2, 6, 7};
    int n = 5;
    int m = 3;
    int result[m + n]; // Declare an array to store the merged result
    int i = 0;
    int j = 0;
    int k = 0;

    while (i < m && j < n) {
        if (arr1[i] < arr2[j]) {
            result[k] = arr1[i];
            k++;
            i++;
        } else {
            result[k] = arr2[j];
            k++;
            j++;
        }
    }

    while (i < m) {
        result[k] = arr1[i];
        i++;
        k++;
    }

    while (j < n) {
        result[k] = arr2[j];
        j++;
        k++;
    }

    // Print the merged result
    for (int idx = 0; idx < m + n; idx++) {
        cout << result[idx] << " ";
    }

    return 0;
}
