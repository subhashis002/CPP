#include<string>
#include<iostream>
#include<algorithm>

using namespace std;

bool nocase_compare(char c1,char c2){
    return toupper(c1) == toupper(c2);
}

int main(){
    string s1("This is a string");
    string s2("STRING");

    //compare case insensitives
    if(s1.size() == s2.size() && equal(s1.begin(),s1.end(),s2.begin(),nocase_compare)){
        cout<<"The strings are equal"<<endl;
    }
    else {
        cout<<"The strings are not equal"<<endl;
    }

    //search case insensitive
    string::iterator pos;

    pos = search(s1.begin(),s1.end(),s2.begin(),s2.end(),nocase_compare);

    if(pos == s1.end()){
        cout<<"S2 is not a substring of s1"<<endl;
    }else{
        cout<<' " '<<s2<<"\"is a substring of \""<<s1<<"\"(at index "<<pos - s1.begin()<<")"<<endl;
    }
}
