#include <iostream>
#include <string>
//#include <iomanip>

using namespace std;

int main()  {
    
    string input_str{},
            final_str{},
            reverse_str{};

    cout << "Enter a string of characters: ";
    getline(cin, input_str);
    cout << endl;
    
    for (size_t i{}, j{input_str.length()}; i < input_str.length(); ++i, --j)    {
        reverse_str.insert(i, 1, input_str.at(j-1));
    }
    
    size_t mid_point = (input_str.length()-1);
    
    for (size_t i{0}, j{input_str.length()}; i < input_str.length(); ++i, --j) {
        for (size_t z {0}; z < mid_point; ++z)
            cout << " ";
        final_str = input_str.substr(0, i+1) + reverse_str.substr(j, i);
        cout << final_str << endl;
        mid_point--;
    }
    cout << endl;
    
    return 0;
}