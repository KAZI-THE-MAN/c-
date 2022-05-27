#include<iostream>
using namespace std;
int main(){
    int arr[100],i,value,new_value,n;
    cout<<"enter total number you want to add array: ";
    cin>>n;
    cout<<" the array is : ";
    for(i=0;i<n;i++){
        cin>>arr[i];
     }

    cout<<"enter the update item value: ";
    cin>>value;
    cout<<"enter the update item new value: ";
    cin>>new_value;

    for(i=0;i<n;i++){
        if (arr[i]==value){
         arr[i]=new_value;
        }
     }




    cout<< "the new array after update : ";
    for(i=0;i<n;i++){
        cout<<arr[i]<< " " ;
     }


}
