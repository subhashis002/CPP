#include<iostream>
#include<string>

using namespace std;

int main(int argc,char **argv){
    const string delims(" \t,.;");
    string line;

    //for everyline read successfully
    //
    while(getline(cin,line)){
        string::size_type begIdx, endIdx;
        begIdx = line.find_first_not_of(delims);

        //while begining of a word found
        while(begIdx != string::npos){
            endIdx = line.find_first_of(delims,begIdx);
            if(endIdx == string::npos){
                //end of word is end of line
                endIdx = line.length();
            }

            //print characters in reverse order
            for(int i = endIdx-1; i>= static_cast<int>(begIdx); --i){
                cout<<line[i];
            }
            cout<<' ';

            //search begining of the next word
            begIdx = line.find_first_not_of(delims,endIdx);
        }

        cout<<endl;
    }
    return 0;
}
