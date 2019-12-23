#include<iostream>
#include<list>
#include<algorithm>
#include<iterator>

using namespace std;

int main(){
    list<int> col1;

    //insert elements from 6 to 1 and 1 to 6
    for(int i=1; i<=6; i++){
        col1.push_back(i);
        col1.push_front(i);
    }

    //print all elements of the collections
    
    cout<<"pre: ";
    copy(col1.begin(),col1.end(),ostream_iterator<int>(cout," "));
    cout<<endl;

    //remove all elements with value 3
    remove(col1.begin(),col1.end(),3);

    //print all elements of the collections
    cout<<"post: ";
    copy(col1.begin(),col1.end(),ostream_iterator<int>(cout," "));
    cout<<endl;
    return 0;
}
