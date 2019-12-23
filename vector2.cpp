#include<iostream>
#include<vector>

using namespace std;

int main(int argc, char *argv[])
{
    vector<int> vect1={1,2,3,4};
    vector<int> vect2;

    cout<<"Old vector elements are "<<endl;
    for (int i = 0; i < vect1.size(); ++i) {
        cout<<vect1[i]<<"  ";
    }
    cout<<endl;
    
    cout<<"New vector elements are "<<endl;
    for (int i = 0; i < vect2.size(); ++i) {
        cout<<vect2[i]<<"  ";
    }
    cout<<endl;



    return 0;
}
