#include <iostream>
#include <vector>

using namespace std;

class Concatenate {
    public:
        static string ConcatenateList(vector<string> list) {
            string result = "";
            for(int i = 0; i < list.size(); i++) {
                result += list[i];
                if(i == list.size() - 1) {
                    break;
                }
                result += ",";
            }

            return result;
        }
};

int main() {
    vector<string> elements;
    int sizeList = 0;
    cout << "How much elments do you want in the list? " << "\n";
    cin >> sizeList;
    cout << "Introduce the elements: " << "\n";
    string listElements;
    for(int i = 0; i < sizeList; i++) {
        cin >> listElements;
        elements.push_back(listElements);
    }

    Concatenate list;
    cout << list.ConcatenateList(elements) << "\n";
}
