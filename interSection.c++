#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enters the size of arr: "<<endl;
    cin>>n;
    vector<int> arr(n);
    //Printing vector arr
    cout<<"printig vector arr is: ";
    for(int i=0; i<arr.size(); i++){
        cin>>arr[i];
    }
    int m;
    cout<<"Enters size of brr is : "<<endl;
    cin>>m;
    //Printing vector brr
    cout<<"Printing vector brr is: ";
    vector<int> brr(m);
    for(int i=0; i<brr.size(); i++){
        cin>>brr[i];
    }

    vector<int> ans;

    for(int i=0; i<arr.size(); i++){
        int element=arr[i];
        for(int j=0; j<brr.size(); j++){
            if(element==brr[j]){
                ans.push_back(element);
                break;
            }
        }
    }

    cout<<"Printing Intersection of two vectors is: ";
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
return 0;
}