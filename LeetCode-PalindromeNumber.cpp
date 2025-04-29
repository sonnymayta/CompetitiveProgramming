#include <iostream>
#include <vector>

bool isPalindrome(int x);

int main()
{
    // Example 1
    bool a = isPalindrome(121);
    return 0;
}

bool isPalindrome(int x)
{
    int module;
    long result = x;
    std::vector<char> number;
    while (abs(result) >= 10)
    {
        module = result % 10;
        result = result / 10;
        number.push_back(module);
    }
    number.push_back(result);
    int n = number.size();
    for (size_t i = 0; i <= n / 2; i++)
    {
        if (number[i] != abs(number[(n - 1) - i]))
        {
            return false;
        }
    }
    return true;
}