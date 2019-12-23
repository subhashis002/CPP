#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<set>
#include<algorithm>

using namespace std;

int main(){
    list<int> col1;

    //insert element from 1 to 9 into the first collection
    
    for(int i=1 ; i<=9; i++)
        col1.push_back(i);

    //copy the elements of col1 into col2 by appending them
    
    vector<int> col2;
    copy(col1.begin(),col1.end(),back_inserter(col2));

    //copy element of col1 into col3 by inserting them at the front
    //- reverse the order of the elements
    deque<int> col3;
    copy(col1.begin(),col1.end(),front_inserter(col3));
    
    //copy element of col1 into col4 by inserting them at the front
    //-only insert that works for associative collections
    
    set<int> col4;
    copy(col1.begin(),col1.end(),inserter(col4,col4.begin()));
    
    return 0;

}
