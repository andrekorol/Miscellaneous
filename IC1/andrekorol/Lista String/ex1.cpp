#include <bits/stdc++.h>
using namespace std;
typedef string str;
typedef unsigned long long ull;
typedef vector<str> vs;
bool isVowel(char c) { return (tolower(c)=='a'||tolower(c)=='e'||tolower(c)=='i'||tolower(c)=='o'||tolower(c)=='u' ? true : false); }
int main() {
    puts("Entre uma frase:");
    str s; getline(cin, s);
    istringstream iss(s);
    vs vec;
    copy(istream_iterator<str>(iss), istream_iterator<str>(), back_inserter(vec));
    ull words = vec.size(), vowels = 0;
    for(auto const& word: vec) {
        for(auto const& letter: word) vowels+=isVowel(letter);
    }
    cout << "Palavras = " << words << endl << "Vogais = " << vowels << endl;
    return 0;
}
