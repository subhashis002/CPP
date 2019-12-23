#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iterator>

using namespace std;

int main(){
    vector<string> col1;

    /* read all words from the standard input
     * -source: all strings until end-of-file (or error)
     * -destination: col1(inserting)
     */

    copy(istream_iterator<string>(cin),istream_iterator<string>(),back_inserter(col1));
    //sort elements
    sort(col1.begin(),col1.end());

    /* print all elements without duplicates
     * - source: col1
     * - destination: standard output(with newline between elements)
     */

    unique_copy(col1.begin(),col1.end(),ostream_iterator<string>(cout,"\n"));
    return 0;
}
