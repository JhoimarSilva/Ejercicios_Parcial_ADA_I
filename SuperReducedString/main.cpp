#include <iostream>
#include <string>

using namespace std;

string superReducedString(string s)
{
    string resultado = "";

    for (char c : s)
    {
        if (resultado.empty() || resultado.back() != c)
        {
            resultado.push_back(c);
        }
        else
        {
            resultado.pop_back();
        }
    }

    if (resultado.empty())
    {
        return "Empty String";
    }

    return resultado;
}

int main()
{
    string s;
    cin >> s;

    cout << superReducedString(s) << endl;

    return 0;
}