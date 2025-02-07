#include <iostream>
#include <string>

using namespace std;

int main()
{
    //1 task
    /*string a;
    getline(cin, a);
    int count = 0;
    for (char s : a) {
        if (s != ' ' && s != '.' && s != ',') {
            count++;
        }
    }
    cout << count;*/

    //2 task
    /*string a;
    string b;
    getline(cin, a);
    for (char s : a) {
        if (s != ' ' && s != '.' && s != ',') {
            b.push_back(s);
        }
    }
    a = string(b.rbegin(), b.rend());
    if (a == b)
    {
        cout << "True";
    }
    else {
        cout << "False";
    }*/

    //3 task
    /*string a;
    getline(cin, a);
    int count = 1;
    for (char s : a) {
        if (s == ' ') {
            count++;
        }
    }
    cout << count;*/

    //4 task
    /*string a;
    getline(cin, a);
    a = string(a.rbegin(), a.rend());
    cout << a;*/

    //5 task
    /*string a;
    getline(cin, a);
    char b;
    cin >> b;
    int count = 0;
    for (char s : a) {
        if (s == b) {
            count++;
        }
    }
    cout << count;*/

    //7 task
    /*string a;
    getline(cin, a);
    bool f = false;
    string b;
    for (auto s : a)
    {
        if (f == true) {
            b.push_back(s);
        }
        if (s == '@') {
            f = true;
        }
    }
    cout << b;*/
}