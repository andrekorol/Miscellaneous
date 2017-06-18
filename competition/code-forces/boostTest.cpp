#include <iostream>
#include <boost/array.hpp>

using namespace std;

int main() {
    boost::array<int, 4> array1 = {{1, 2, 3, 4}};
    cout << "hi " << array1[0] << endl;
    return 0;
}