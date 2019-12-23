#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> myvector;
    myvector.push_back(1);
    myvector.push_back(2);
    myvector.push_back(3);
    myvector.push_back(4);
    myvector.push_back(5);
    myvector.push_back(6);

    myvector.clear();

    for (iterator<vector> it = myvector.begin(); it!= myvector.end(); ++it){
        cout<<" "<<*it;
    return 0;
    }
}
