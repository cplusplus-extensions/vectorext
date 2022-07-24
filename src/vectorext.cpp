#include "vectorext.h"

#if __cplusplus >= 201103L
#include <algorithm>

/**
 * @brief This operator definition prints all the elements inside the given vector.
 * 
 * @param os The stream on whiich the elements are printed.
 * @param v The vector from which to take the elements.
 * @return std::ostream& The so modified stream.
 * 
 * @warning The parameter class T must define the "<<" operator in order to be printable to the output stream.
 */
template<class T> std::ostream& operator<<(std::ostream& os, const std::vector<T>&& v) {
    std::for_each(v.begin(), v.end(), [&os](const T& i) {
        os << i << " ";
    });
    return os;
};

/**
 * @brief This function joins two given vectors of elements of type T into a single vector.
 * 
 * @param v1 The first vector
 * @param v2 The second vector
 * 
 * @warning As of C++20, there are standard functions that allow two vectors to be joined. This hand-made version is therefore suitable for all C++ standard versions prior to C++20.
 */
template<class T> void join(std::vector<T>&& v1, const std::vector<T>&& v2) noexcept {
    std::for_each(v2.begin(), v2.end(), [&v1](const T& i) {
        v1.push_back(i);
    });
};

#else

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
};

/**
 * @brief This function joins two given vectors of elements of type T into a single vector.
 * 
 * @param v1 The first vector
 * @param v2 The second vector
 * 
 * @warning As of C++20, there are standard functions that allow two vectors to be joined. This hand-made version is therefore suitable for all C++ standard versions prior to C++20.
 */
template<class T> void join(std::vector<T>& v1, const std::vector<T>& v2) noexcept {
    for(const auto& i: v2) {
        v1.push_back(i);
    }
};

#endif
