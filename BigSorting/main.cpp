#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

// Función comparadora
bool comparar(string a, string b)
{
    if (a.size() != b.size())
    {
        return a.size() < b.size();
    }

    return a < b;
}

// Función principal del ejercicio
vector<string> bigSorting(vector<string> unsorted)
{
    sort(unsorted.begin(), unsorted.end(), comparar);
    return unsorted;
}

int main()
{
    int n;
    cin >> n;

    vector<string> unsorted(n);

    for (int i = 0; i < n; i++)
    {
        cin >> unsorted[i];
    }

    vector<string> resultado = bigSorting(unsorted);

    for (string numero : resultado)
    {
        cout << numero << endl;
    }

    return 0;
}