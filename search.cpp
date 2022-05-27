#include<iostream>
using namespace std;
int main(){
    int arr[100],i,value,n;
    cout<<"enter total number you want to add array: ";
    cin>>n;
    cout<<" the array is : ";
    for(i=0;i<n;i++){
        cin>>arr[i];
     }

    cout<<"enter the search item value: ";
    cin>>value;

    for(i=0;i<n;i++){
        if (arr[i]==value){
        cout<<" the index of search item : " <<i ;
     }
     if (i==n){
        cout<<"\n target value don't found \n";
     }else{
         cout<<" \n found \n";

     }
}
}

