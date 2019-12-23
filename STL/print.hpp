#include<iostream>
#include<set>
#include<algorithm>
#include<iterator>

/* PRINT_ELEMENTS()
 * - prints optional c-string optcstr followed by
 * - all elements of the collection col1
 * - separated by spaces
 */

template<class T>
inline void PRINT_ELEMENTS(const T& col1, const char * optcstr=""){
    typename T::const_iterator pos;

    std::cout<<optcstr;
    for(pos = col1.begin(); pos!=col1.end(); ++pos){
        std::cout<<*pos<<' ';
    }
    std::cout<<std::endl;
}
