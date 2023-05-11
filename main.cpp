#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;


unordered_map<char, char> trans = {
    {'l', 'H'},
    {'0', 'e'},
    {'p', 'l'},
    {'x', 'o'},
    {'!', ','},
    {' ', ' '}
};


string transformCompLang(string text){
    string outText;
    for (char& c : text){
        for (auto& i: trans)
        {
            if (c == i.second){
                outText += i.first;
            }
        }
    }
    return outText;
}

string transformEngLang(string text){
    string outText;
    for (char& c : text){
        for (auto& i: trans)
        {
            if (c == i.first){
                outText += i.second;
            }
        }
    }
    return outText;
}

int main() {
    string text = "Hello"; // for transformCompLang();
    string text2 = "l0ppx";// for transformEngLang();
    string outText;

    cout << "Input: " << text2 << endl;
    cout << "Output: " << transformEngLang(text2) << endl;

    return 0;
}


//raz
