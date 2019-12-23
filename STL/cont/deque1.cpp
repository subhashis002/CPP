#include<iostream>
#include<deque>
#include<string>
#include<algorithm>
#include<iterator>
using namespace std;

int main(){
    //create empty deque string
    deque<string> col1;

    //insert several elements
    col1.assign(3,string("string"));
    col1.push_back("last string");
    col1.push_front("first string");

    //print elements separated by newlines
    
    copy(col1.begin(),col1.end(),ostream_iterator<string>(cout,"\n"));
    cout<<endl;

    //remove first and last element
    
    col1.pop_front();
    col1.pop_back();

    //insert ''another' into every element bu the first
    col1.resize(4,"resized string");
    for(int i=1; i<col1.size(); ++i){
        col1[i] = "another "+ col1[i];
    }
    //print elements separated by newlines
    copy(col1.begin(),col1.end(),ostream_iterator<string>(cout,"\n"));
 
    return 0;
    
}
