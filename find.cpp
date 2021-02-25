#include<algorithm>

// find overload for container  
template<typename T>
auto find(T& t, typename T::value_type elem){
    return std::find(t.begin(), t.end(),elem);
}