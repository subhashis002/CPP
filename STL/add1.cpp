#include<iostream>
#include<vector>
#include<list>
#include<algorithm>
#include "print.hpp"

using namespace std;

class AddValue{
    private:
        int theValue;
    public:
        //constructor initialize the value to add
        AddValue(int v): theValue(v){

        }

        //the "function call" for the element adds the value
        void operator() (int &elem) const{
            elem += theValue;
        }
};


int main(){
    list<int> col1;

    //insert elements from 1 to 9 col1
    for(int i=1; i<=9; ++i){
        col1.push_back(i);
    }

    for_each(col1.begin(),col1.end(),AddValue(10));
    PRINT_ELEMENTS(col1,"10 Added ");
    cout<<endl;

    return 0;
}
