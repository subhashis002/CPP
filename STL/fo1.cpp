#include<iostream>
#include<set>
#include<deque>
#include<algorithm>
#include<iterator>
#include "print.hpp"

using namespace std;

int main(){
    set<int,greater<int> > col1;
    deque<int> col2;

    //inserts elements from 1 to 9
    
    for(int i=1; i<=9; i++){
        col1.insert(i);
    }

    PRINT_ELEMENTS(col1,"Initialized :");

    //transform all elementsinto col2 by multiplying 10
    
    transform(col1.begin(),col1.end(),back_inserter(col2),bind2nd(multiplies<int>(),10));

    PRINT_ELEMENTS(col2,"transformed: ");

    //replace the value equal to 70 with 42
    replace_if(col2.begin(),col2.end(),bind2nd(equal_to<int>(),70),42);
    PRINT_ELEMENTS(col2,"replaced: ");

    //remove all elements with values less than 50
    col2.erase(remove_if(col2.begin(),col2.end(),bind2nd(less<int>(),50)),col2.end());

    PRINT_ELEMENTS(col2,"Removed: ");
    return 0;
}
