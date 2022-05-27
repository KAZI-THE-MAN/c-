#include<iostream>
using namespace std;
int main(){
    int arr[100],i,pos,value,n;
    cout<<"enter total number you want to add array: ";
    cin>>n;
    cout<<" the array is : ";
    for(i=0;i<n;i++){
        cin>>arr[i];
     }
    cout<<"enter the position you need to insert element: ";
    cin>>pos;
    cout<<"enter the insert item value: ";
    cin>>value;

    for(i=n;i>=pos;i--){
        arr[i]=arr[i-1];

    }
    arr[i]=value;
    n++;

    cout<< "the new array after inserting : ";
    for(i=0;i<n;i++){
        cout<<arr[i]<< " " ;
     }


}
