#include<iostream>
#include<set>
#include<iterator>

using namespace std;

int main(){
    typedef std::set<int> IntSet;
    IntSet col1;

    col1.insert(3);
    col1.insert(1);
    col1.insert(5);
    col1.insert(4);
    col1.insert(1);
    col1.insert(6);
    col1.insert(2);

    IntSet::const_iterator pos;
    //iterate through the node
    for(pos=col1.begin(); pos!= col1.end(); ++pos){
        std::cout<<*pos<<' ';
    }

    std::cout<<std::endl;

    //insert 4 again and process the return value
    pair<IntSet::iterator,bool> status = col1.insert(4);

    if(status.second){
        cout<<"4 Inserted as element"
            <<distance(col1.begin(),status.first)+1<<endl;
    }
    else{
        cout<<"4 already exist"<<endl;
    }

    //assign another set of element ascending order
    set<int> col2(col1.begin(),col1.end());

    //print all elements from the set2
    copy(col2.begin(),col2.end(),ostream_iterator<int>(cout," "));
    cout<<endl;

    //remove all element upto find the value 3 
    col2.erase(col2.begin(),col2.find(3));
    copy(col2.begin(),col2.end(),ostream_iterator<int>(cout," "));
    
    //remove element with value 5
    int num;
    num = col2.erase(5);
    cout<<endl;
    cout<<num<<" element(5) are delete"<<endl;

    //print all elements
    copy(col2.begin(),col2.end(),ostream_iterator<int>(cout," "));
    cout<<endl;
    return 0;
}
