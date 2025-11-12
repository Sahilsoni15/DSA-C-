#include<iostream>
using namespace std;


bool search(int arr[],int size,int key){

    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}

int main(){
    int arr[10]={4,5,6,3,-7,2,-1,0,22,9};

    cout<<"Enter the element to search for "<<endl;
    int key;
    cin>>key;

    bool found=search(arr,10,key);

    if(found){
        cout<<"Key is present"<<endl;
    }
    else{
        cout<<"Key is absent"<<endl;
    }
    //whether 1 is present in it or not?

    return 0;
}