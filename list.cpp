#include<iostream>
#include<list>
#include<vector>
#include<iterator>


using namespace std;

void showList(list<int> g){
    list<int>::iterator it;
    for(it = g.begin(); it != g.end(); ++it){
        cout<<*it<<"  ";
    }
    cout<<endl;
}

int main(){
    list<int> gqlist1, gqlist2;

    for(int i=0 ;i<10; ++i){
        gqlist1.push_back(i*2);
        gqlist2.push_front(i*3);
    }

    cout<<"\nList1 gqlist1 is :"<<endl;
    showList(gqlist1);
    cout<<"\nList1 gqlist1 is :"<<endl;
    showList(gqlist1);

}
