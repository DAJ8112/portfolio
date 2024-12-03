#include <bits/stdc++.h>
using namespace std;

void findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m) {
    vector<int> ans;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";
                ans.push_back(arr1[i]);
                arr2[j] = INT_MIN;
                break;
            }
        }
    }
}

int main() {
    vector<int> arr1 = {1, 2, 2, 2, 3, 4};
    vector<int> arr2 = {2, 2, 3, 3};
    findArrayIntersection(arr1, arr1.size(), arr2, arr2.size());
    return 0;
}