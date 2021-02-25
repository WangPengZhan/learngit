// // test vscode c++
// #include<iostream>

// int main()
// {
//     std::cout << "test" << std::endl;
//     return 0;
// }

// // test ...
// #include<iostream>

// template<typename T>
// std::ostream& print(std::ostream& os, const T& t)
// {
//     os << "last arg: "<<t << std::endl;
// }

// template<typename T, typename... Args>
// std::ostream& print(std::ostream& os, const T& t, const Args&... args)
// {
//     os << "arg number: " << sizeof...(args) << std::endl;
//     os << "arg type number" << sizeof...(Args) << std::endl;
//     os << "current element: " << t << std::endl;
//     return print(os, args...);
// }

// int main()
// {
//     print(std::cout, 11, 22, 33, 44, 'a', "good test", char(87), std::string("string test"));
//     return 0;
// }

#include <vector>
#include "find.cpp"

int main(){
    std::vector<int> v{1, 2, 3, 4, 5};
    find(v, 5);
    return 0;
}