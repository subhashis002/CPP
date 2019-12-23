#include<iostream>
#include<list>
#include<algorithm>

using namespace std;

int main(){
    list<int> col1;
    list<int>::iterator pos;

    //insert element from 20 to 40
    for(int i=20; i <=40; i++){
        col1.push_back(i);
    }

    /*find the position of elemnet with value 3
     * there is none, so pos get col1.end()
     */

    pos = find(col1.begin(),col1.end(),3);

    /*reverse the order of elements between found element 
     * because pos is col1.end() it reverses an empty range
     */

    reverse(pos,col1.end());

    //find positions of values 25 and 35
    list<int>::iterator pos25,pos35;

    pos25 = find(col1.begin(),col1.end(),25);
    pos35 = find(col1.begin(),col1.end(),35);

    /*print the maximum of the corresponding range
     * note: includeing pos25 but excluding pos35
     */
    cout<<"max: "<<*max_element(pos25,pos35)<<endl;

    //process the elements including the last position
    cout<<"max: "<<*max_element(pos25,++pos35)<<endl;
}
