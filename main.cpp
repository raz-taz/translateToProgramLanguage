#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;


unordered_map<string, string> trans = {
    {"-1}sd", "H"},
    {"-2{jh", "e"},
    {"-3*&%", "l"},
    {"-4;s@", "o"},
    {"-59()>", ","},
    {"_", " "}
};


string transformCompLang(string text){
    string outText;
    for (char& c : text){
        for (auto& i: trans)
        {

            if (string(1, c)  == i.second){
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
            if (to_string(c) == i.first){
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

    cout << "Input: " << text << endl;
    cout << "Output: " << transformCompLang(text) << endl;

    return 0;
}


//raz
