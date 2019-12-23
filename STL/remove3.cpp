#include<iostream>
#include<set>
#include<algorithm>
#include<iterator>

using namespace std;

int main(){
    set<int> col1;

    //insert element from 1 t0 9
    for(int i=0;i <=9; i++){
        col1.insert(i);
    }

    //print all elements of the collection
    
    copy(col1.begin(),col1.end(),ostream_iterator<int>(cout," "));
    cout<<endl;

    /*Remove all elements with value 3
     * - algorithm remove() does not work
     * - instead member function erase() works
     */

    int num = col1.erase(3);

    //print all elements of the modified collection
    copy(col1.begin(),col1.end(),ostream_iterator<int> (cout," "));
    cout<<endl;

    return 0;
}
