#include <iostream>

std::string L(int p, int q, int k);

int main()
{
    std::cout << L(1, 1, 3) + "+" + L(1,2,3) << std::endl;
    return 0;
}

std::string L(int p, int q, int k)
{
    if (k == 0)
    {
        if (p == 1 && q == 1)
            return "b+(lambda)";
        if (p == 1 && q == 2)
            return "a";
        if (p == 1 && q == 3)
            return "";
        if (p == 2 && q == 1)
            return "";
        if (p == 2 && q == 2)
            return "a+(lambda)";
        if (p == 2 && q == 3)
            return "b";
        if (p == 3 && q == 1)
            return "a";
        if (p == 3 && q == 2)
            return "b";
        if (p == 3 && q == 3)
            return "(lambda)";
    }
    else
    {
        return "(" + L(p, q, k - 1) + "+" + L(p, k, k - 1) + L(k, k, k - 1) + "*" + L(k, q, k - 1) + ")";
    }
}
