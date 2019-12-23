#include<iostream>
#include<set>
#include<iterator>
#include "print.hpp"

using namespace std;

//type for sortng criterion

template <class T>
class RuntimeCmp {
    public:
        enum cmp_mode {normal,reverse};
    private:
        cmp_mode mode;
    public:
        //constructor for sorting criterion
        //-default criterion uses value normal
        RuntimeCmp(cmp_mode m=normal):mode(m){

        }

        //comparison of elements
        bool operator() (const T& t1, const T& t2) const {
            return mode == normal ? t1 < t2 : t2 > t1;
        }

        //comparison of sorting criteria
        bool operator==(const RuntimeCmp& rc){
            return mode == rc.mode;
        }
};

//type of a set that uses this sorting criterion
typedef set<int,RuntimeCmp<int> > IntSet;

//forward declaration
void fill(IntSet &set);

int main(){

    //create, fill, and print set with normal element order
    //-uses default sorting criterion
    
    IntSet col1;
    fill(col1);
    PRINT_ELEMENTS(col1, "col1: ");
    
    //create sorting criterion with reverse element order
    RuntimeCmp<int> reverse_order(RuntimeCmp<
            ``)
}
