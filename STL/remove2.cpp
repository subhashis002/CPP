#include<iostream>
#include<list>
#include<iterator>
#include<algorithm>

using namespace std;

int main(){
    list<int> col1;

    //inserts elements from 6 to 1 and 1 to 6
    for(int i=1; i<=6; i++){
        col1.push_front(i);
        col1.push_back(i);
    }

    //print all elements of the collections
    copy(col1.begin(),col1.end(),ostream_iterator<int> (cout," "));
    cout<<endl;
    //remove all elements of 3
    // - retain new end
    
    list<int>::iterator end = remove(col1.begin(),col1.end(),3);

    //print resulting elements of the collection
    copy(col1.begin(),col1.end(),ostream_iterator<int>(cout," "));
    cout<<endl;

    //print number of resulting elements
    cout<<"number of removed elements: "<<distance(end,col1.end())<<endl;

    //remove "removed" elements
    col1.erase(end,col1.end());

    //print all elements of the modified collection
    copy(col1.begin(),col1.end(),ostream_iterator<int>(cout," "));
    cout<<endl;
    return 0;
}
