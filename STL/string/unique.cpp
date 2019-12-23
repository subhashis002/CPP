#include<string>
#include<iostream>
#include<algorithm>
#include<locale>
#include<iterator>

using namespace std;

class bothWhiteSpaces {
    private:
        const locale& loc;
    public:
        bothWhiteSpaces(const locale& l): loc(l){

        }
        bool operator()(char elem1,char elem2){
            return isspace(elem1,loc) && isspace(elem2,loc);
        }
};

int main(){
    string contents;

    //don't skip leading whitespace
    cin.unsetf(ios::skipws);

    //read all characters while compressing whitespaces
    unique_copy(istream_iterator<char>(cin),
            istream_iterator<char>(),
            back_inserter(contents),
            bothWhiteSpaces(cin.getloc())
            );

    //process contents
    //-here: write it to the standard output
    cout<<contents;
    return 0;
}
