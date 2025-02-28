#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={1, 2, 3, 4};
    int sizea=4;
    int brr[]={5, 6, 7};
    int sizeb=3;
    vector<int> ans;
    // Push element on ans vector arr
    for(int i=0; i<sizea; i++){
        ans.push_back(arr[i]);
    }
    // Push element on ans vector arr
    for(int i=0; i<sizeb; i++){
        ans.push_back(brr[i]);
    }
    // final union vector is
    cout << "Union of vector is: ";
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
return 0;
}