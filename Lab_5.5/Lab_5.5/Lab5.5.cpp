#include <iostream>
using namespace std;

int CountBinaryStrings(int n, int level, int& depth);

int main()
{
    int n;

    cout << "n = ";
    cin >> n;

    int depth = 0;
    int result = CountBinaryStrings(n, 1, depth);

    cout << "Binominal coeficient: " << result << endl;
    cout << "depth = " << depth << endl;

    return 0;
}

int CountBinaryStrings(int n, int level, int& depth)
{
    if (level > depth)
        depth = level;

    if (n == 1)
        return 2;
    if (n == 2)
        return 3;

    return CountBinaryStrings(n - 1, level + 1, depth)
        + CountBinaryStrings(n - 2, level + 2, depth);
}