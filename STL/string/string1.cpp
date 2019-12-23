#include<iostream>
#include<string>

using namespace std;

int main(int argc,char *argv[]){
    string filename,basename,extname,tmpname;
    const string suffix("tmp");

    /*for each command-line argument
     * (which is an ordinary C-string)
     */

    for(int i=0; i<argc;i++){
        //process actual argument as file name
        filename = argv[i];

        //serch period in filename
        string::size_type idx = filename.find('.');
        if(idx == string::npos){
            //file name does not contain any period
            tmpname = filename + '.'+ suffix;
        }else{
            /* split file nameinto base name and extension
             * - base name contains all characters before the period
             * - extension contains all characters after the period
             */

            basename = filename.substr(0,idx);
            extname = filename.substr(idx,1);

            if(extname.empty()){
                //contains period but no extension: append tmp
                tmpname = filename;
                tmpname += suffix;
            }else if(extname == suffix){
                //replace extension tmp with xxx
                tmpname = filename;
                tmpname.replace(idx+1,extname.size(),"xxx");
            }else{
                //replace any extension with tmp
                tmpname = filename ;
                tmpname.replace(idx+1,string::npos,suffix);
            }
        }

        //print the filename and pemporary name
        cout<<filename<<" => " <<tmpname<<endl;
    }
    return 0;
}
