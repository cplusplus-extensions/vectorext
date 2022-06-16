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

/**
 * @brief This function joins two given vectors of elements of type T.
 * 
 * @param v1 The first vector
 * @param v2 The second vector
 */
template<class T> void join(std::vector<T>& v1, std::vector<T>& v2) noexcept {
    for(const auto& i: v2) {
        v1.push_back(i);
    }
}