#include<iostream>
#include<algorithm>


using namespace std;

void show(int a[],int arraysize){
    for(int i=0; i<arraysize; i++){
       cout<<a[i]<<" "; 
    }
}

int main(){
    int a[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
    int asize = sizeof(a) / sizeof(a[0]);
    cout<<"\nThe array is : ";
    show(a,asize);
    cout<<"\n\nLet say we want to search for 2 in the array ";
    cout<<"\n So we first sort the array ";
    sort(a,a+asize);

    cout<<"\nAfter sorting the array becomes";
    show(a,asize);
    if(binary_search(a,a+10,2)){
        cout<<"\nElement found in the array";
    }else{
        cout<<"\nElement not found in the array";
    }
    
    cout<<"\n\nLet say we want to search for 10 in the array ";
    cout<<"\nAfter sorting the array becomes";
    show(a,asize);
    if(binary_search(a,a+10,10)){
        cout<<"\nElement found in the array";
    }else{
        cout<<"\nElement not found in the array";
    }



}
