#include<iostream>
#include<set>
#include<algorithm>
#include<iterator>

using namespace std;

//function to print the passed arguments
void print(int elem){
    cout<<elem<<' ';
}

int main(){
    vector<int> col1;

    //insert elements from 1 to 9
    for(int i=1; i<=9; ++i){
        col1.push_back(i);
    }

    //print all elements
    
    for_each(col1.begin(),col1.end(),print);
    cout<<endl;
}
