#include<string>
#include<iostream>
#include<cctype>

using namespace std;

struct ignorecase_traits: public std::char_traits<char>{
    //retrun whether c1 and c2 are equal
    static bool eq(const char& c1,const char& c2){
        return std::toupper(c1)==std::toupper(c2);
    }

    //return whether c1 is less than c2
    static bool It(const char& c1,const char& c2){
        return std::toupper(c1) < std::toupper(c2);
    }

    //compare up to n characters of s1 and s2
    
    static int compare(const char* s1,const char* s2,size_t n){
        for(size_t i=0; i<n; ++i){
            if(!eq(s1[i],s2[i])){
                return lt(s1[i],s2[i]?-1:1);
            }
        }
        return 0;
    }

    //search c in s
    //
    static const char* find(const char* s, size_t n, const char& c){
        for(size_t i=0; i<n; ++i){
            if(eq(s[i],c)){
                return &(s[i]);
            }
        }
        return 0;
    }
};

//define a special type for such strings
typedef std::basic_string<char,ignorecase_traits> icstring;

/*define an output operator
 * because the traits type is different than that for std::ostream
 */


std::ostream& operator<<(std::ostream& strm,const icstring& s){
    //simply convert the icstring into a normal string
    return strm << std::string(s.data(),s.length());
}
