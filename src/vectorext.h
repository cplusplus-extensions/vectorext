#include <iostream>
#include <vector>
#include <fstream>

#if __cplusplus >= 201103L

template<class T> std::ostream& operator<<(std::ostream& os, const std::vector<T>&& v);
template<class T> void join(std::vector<T>&& v1, const std::vector<T>&& v2) noexcept;

#else

template<class T> std::ostream& operator<<(std::ostream& os, const std::vector<T>& v);
template<class T> void join(std::vector<T>& v1, const std::vector<T>& v2) noexcept;

#endif
