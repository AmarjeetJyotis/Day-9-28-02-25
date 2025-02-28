#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter vector arrays size: "<<endl;
    cin>>n;
    vector<int> arr(n);
    cout<<"Arr elemnts in vector: ";
    for(int i=0; i<arr.size(); i++){
        cin>>arr[i];
    }
// Printing Pair 
cout<<"Pair sum of random Number 9 is:"<<endl;
    for(int i=0; i<arr.size(); i++){
        int element=arr[i];
        for(int j=i+1; j<arr.size(); j++){
            if(element+arr[j]==9){
            cout<<"("<<element<<","<<arr[j]<<")"<<endl;
            }
        }
    }
return 0;
}