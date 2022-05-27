#include<iostream>
using namespace std;
int main(){
    int arr[100],i,n;
    cout<<"enter total number you want to add array: ";
    cin>>n;
    cout<<" the array is : ";
    for(i=0;i<n;i++){
        cin>>arr[i];
     }



    for(i=0;i<n;i++){
        if (arr[0]<arr[i]){
         arr[0]=arr[i];
        }
     }




    cout<< "the largest value : "<< arr[0];



}
