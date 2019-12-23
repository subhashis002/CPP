#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<algorithm>

using namespace std;

int main(){
    list<int> col1;
    vector<int> col2;

    //insert elements from 1 to 9
    for(int i=1; i<=9; i++){
        col1.push_back(i);
    }

    //resize destination to have enough room for the overwritting algorithm
    
    col2.resize(col1.size());

    /*copy elements from first into second collection
     * overwrites existing elemnets in destination
     */

    copy(col1.begin(),col1.end(),col2.begin());

    /*create third collection with enough room
     * initial size is passed as parameter
     */

    deque<int> col3(col1.size());

    //copy elements from first into third collection 
    copy(col1.begin(),col2.end(),col3.begin());
}
