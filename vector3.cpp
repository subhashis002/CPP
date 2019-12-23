#include<iostream>
#include<vector>

using namespace std;

int main(int argc, char *argv[])
{
    vector<int> g1;
    for(int i=0; i < 5; i++){
        g1.push_back(i);
    }

    for(int it = g1.begin(); it < g1.end() ; t1++){
        cout<<it<<"  ";
    }
    cout<<endl;
    return 0;
}
