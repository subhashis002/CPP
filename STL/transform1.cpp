#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
#include "print.hpp"

using namespace std;

int square(int value){
    return value*value;
}

int main(){
    std::set<int> col1;
    std::vector<int> col2;

    //insert elements from 1 to 9 col1
    for(int i=1; i<=9; ++i){
        col1.insert(i);
    }

    PRINT_ELEMENTS(col1,"initialized :");

    //transform each element from col1 to col2
    // - square transformed values
    std::transform(col1.begin(),col1.end(),std::back_inserter(col2),square);
    PRINT_ELEMENTS(col2,"squared:  ");
    return 0;
}
