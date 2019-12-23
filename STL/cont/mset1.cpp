#include<iostream>
#include<set>
#include<iterator>

using namespace std;

int main(){
    /*type of collection:
     * -duplicates are allowed
     *  -elements are integral values
     *  -descending order
     */
    

    //define multiset
    typedef multiset<int,greater<int> > IntSet;
    IntSet col1;
    //insert element in random order
    col1.insert(3);
    col1.insert(1);
    col1.insert(5);
    col1.insert(4);
    col1.insert(1);
    col1.insert(6);
    col1.insert(2);
    

    //iterate over all elements and print them
    IntSet::iterator pos;
    for(pos = col1.begin(); pos != col1.end(); ++pos){
        cout<<*pos<<" ";
    }
    cout<<endl;
    //insert again 4 and process the return value
    IntSet::iterator ipos = col1.insert(4);
    cout<<"4 inserted as element "
        <<distance(col1.begin(),ipos)+1<<endl;

    //assign elements to another multiset with ascending order
    multiset<int> col2(col1.begin(),col1.end());
    //print all elements of the copy
    copy(col2.begin(),col2.end(),ostream_iterator<int>(cout," "));
    //remove all elements up to element with value 3
    col2.erase(col2.begin(),col2.find(3));
    //remove all elements with value 5
    int num;
    num = col2.erase(5);
    cout<<endl;
    cout<<num<<" are 5removed from the set"<<endl;
    //print all elements
    copy(col2.begin(),col2.end(),ostream_iterator<int>(cout," "));
    return 0;
}
