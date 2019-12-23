#include<iostream>
#include<deque>
#include<vector>

using namespace std;

int main(){
    deque<float> col1;

    //insert element from 1.1 to 6.6 each at the begining
    for(int i=1; i<=6; i++){
        col1.push_back(i*1.1);
    }

    //print all element followed by a space
    for(int i=0;i<col1.size();i++){
        cout<<col1[i]<<' ';
    }

    cout<<endl;
}
