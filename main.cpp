#include <bits/stdc++.h>
using namespace std;

//int n = a.size();
//for (int i = 0; i < n; i++) {
//a.push_back(a[i]);
//}
//
//// Check if array is cylically sorted or not.
//for (int start = 0; start < n; start++) {
//bool is_sorted = true;
//int last = -1e6;
//for (int i = start; i < start + n; i++) {
//if (a[i] < last) {
//is_sorted = false;
//break;
//}
//last = a[i];
//}
//if (is_sorted) {
//return true;
//}
//}
bool solve(vector<int> &a) {
    //check if the array is sorted
    //iterate though the vector array to see if sorted
//    for(unsigned int i = 1; i < a.size(); i++){
//        if(a[i] < a[i-1]){
//
//        }
//    }
    int i = 0;
    int j = 1;
    int curr = 0;

    //maximum times the array can be sorted
    while(i < a.size()){
        bool sorted = true;
        //iterate though the array
       while(j < a.size() || sorted){
           //check if current number is increasing
           if( a[j] < a[j-1]){
               sorted = false;
               curr
           }
       }

       //if sorted return true
       if(sorted){
           return true;
       }


    }


   return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //read the number of tests
    int t;
    cin >> t;

    //iterate though the tests
    for (int i = 0; i < t; i++) {

        //get the length of array
        int n;
        cin >> n;

        //initialize a vector array of fixed length
        vector<int> a(n);

        //iterate through the input array to add to vector
        for (int j = 0; j < n; j++) {
            cin >> a[j];
        }

        //check if the array can become non-decreasing
        if (solve(a) || n <= 1) {
            cout << "Yes"
                 << "\n";

        //if no return No
        } else {
            cout << "No"
                 << "\n";
        }
    }
    return 0;
}