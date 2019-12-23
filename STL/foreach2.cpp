#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

//simple function object that prints the passed argument
//
class PrintInt{
    public:
        void operator() (int elem) const {
            cout<<elem<<' ';
        }
};

int main(){
    vector<int> col1;

    //insert elements from 1 to 9
    for(int i=1; i<9; ++i){
        col1.push_back(i);
    }

    //print all elements
    for_each(col1.begin(),col1.end(),PrintInt());
    cout<<endl;
    return 0;
}
