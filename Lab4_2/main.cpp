#include <cstring>
#include <iostream>

using namespace std;

int main()
{
    string s4, s5;

    cout << "Enter value for s4: " << endl;
    getline(cin, s4);

    cout << "Enter value for s5: " << endl;
    getline(cin, s5);

    string s6 = s4 + s5;
    cout << "Combined s6: " << s6 << endl;
    cout << "Length: " << s6.length() << endl;
}
