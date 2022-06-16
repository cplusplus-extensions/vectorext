#include <iostream>
#include <vector>
#include <fstream>

/**
 * @brief This operator definition prints all the elements inside the given vector.
 * 
 * @param os The stream on whiich the elements are printed.
 * @param v The vector from which to take the elements.
 * @return std::ostream& The so modified stream.
 * 
 * @warning The parameter class T must define the "<<" operator in order to be printable to the output stream.
 */
template<class T> std::ostream& operator<<(std::ostream& os, const std::vector<T>& v) {
    for(const auto& i: v) {
        os << i << " ";
    }
    return os;
}