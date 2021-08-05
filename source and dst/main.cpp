#include "func.hpp"
#include <iostream>
using namespace std;
int main() {
    int n;
    int src;
    int dst;

    cout<<"Enter the size of the massive:\n";
    cin>>n;
    int* arr = new int(n);
    for(int i = 0; i < n; i++ ){
        cout<<"enter the"<<i<<"\n";
        cin>>arr[i];
    }
    cout<<"enter dst: "<<endl;
    cin>>dst;
    
    cout<<"enter src: "<<endl;
    cin>>src;
    change (arr, n, src, dst);
    cout<<"result\n";
    for(int i = 0; i < n; i++ ){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
