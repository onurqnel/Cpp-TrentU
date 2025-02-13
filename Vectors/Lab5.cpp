#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    //vector<string> freezer = {"Chocolate", "Vanilla", "Strawberry", "Caramel", "Banana"};
    vector<string> freezer;
    string flavor;
    int count = 0;
    cout << "(Type done to finish)" << endl;
    cout << "Enter ice cream flavors:\n" << endl;
    do
    {
        cout << count + 1 << ": ";
        getline(cin, flavor);
        if (flavor.find_first_not_of(' ') != string::npos && flavor != "done")
        {
            freezer.push_back(flavor);
            count++;
        }
    }
    while (flavor != "done");

    if (freezer.empty())
    {
        cout << "No ice cream in the freezer" << endl;
    }
    else if (freezer.size() == 4)
    {
        cout << "The fourth flavor in the freezer is: " << freezer[3] << endl;
    }
    else
    {
        cout << "\nThere are " << freezer.size() + 1 << " flavors of ice cream in the freezer." << endl;
    }
}
