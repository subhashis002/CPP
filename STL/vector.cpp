#include<iostream>
#include<vector>
#include<algorithm>
#include<set>

using namespace std;

bool f(int x,int y){
    return x > y;
}

void vectorDemo(){
    vector<int> A = {11,2,3,14};
    cout<<A[1]<<endl;

    sort(A.begin(),A.end());
    bool present = binary_search(A.begin(),A.end(),3);
    present = binary_search(A.begin(),A.end(),4);

    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(123); 

    vector<int>::iterator it=lower_bound(A.begin(),A.end(),100); //>=
    vector<int>::iterator it2 = upper_bound(A.begin(),A.end(),100); //>

    cout<<*it <<"  "<<*it<<endl;
    cout<<it2 - it<<endl;//a4
    sort(A.begin(),A.end(),f);
    vector<int>::iterator it3; 


    for(it3 = A.begin(); it3 != A.end(); it3++){
        cout<<*it3 <<"  ";
    }    
    cout<<endl;
}

void setDemo(){
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(-1);
    s.insert(-10);

    for(int x: s){
        cout<< x <<" ";
    }

    cout<<endl;
}


int main(){
//    vectorDemo();
    setDemo();
}
