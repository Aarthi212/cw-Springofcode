#include <bits/stdc++.h>

using namespace std; 


int maxLength(vector<string> arr) 

{

    int len = INT_MIN; 

    int N = arr.size(); 

    for (int i = 0; i < N; i++) { 

        int l = arr[i].size(); 

        if (len < l) { 

            len = l; 

        } 

    } 


    return len; 

}

void maxStrings(vector<string> arr, int len) 

{

    int N = arr.size(); 

    vector<string> ans; 

    for (int i = 0; i < N; i++) { 

        if (len == arr[i].size()) { 

            ans.push_back(arr[i]); 

        } 

    } 
    for (int i = 0; i < ans.size(); i++) { 

        cout << ans[i] << " "; 

    } 

}

void printStrings(vector<string>& arr) 

{

    int max = maxLength(arr); 

    maxStrings(arr, max); 

}

int main() 

{

    vector<string> arr 

        = { "code", "home", "water", "food", "keras" }; 

    printStrings(arr); 

 

    return 0; 

}

