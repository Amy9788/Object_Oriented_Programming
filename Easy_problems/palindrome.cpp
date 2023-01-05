// Given an integer x, return true if x is a palindrome, and false otherwise.
#include <iostream>
#include <vector>
using namespace std;

bool isPalindrome(int x)
{
    if (x < 0)
    {
        return false;
    }
    int reverse_num = 0;
    int remain_num = x;
    int last_number = 0;
    while (remain_num > 0)
    {
        last_number = remain_num%10;
        remain_num = remain_num/10;
        reverse_num = reverse_num * 10 + last_number;
    }
    if (reverse_num == x)
    {
        return true;
    }
    
    return false;
}

int main()
{
    cout << boolalpha << isPalindrome(121) << endl;
    cout << boolalpha << isPalindrome(-121) << endl;
    cout << boolalpha << isPalindrome(10) << endl;

}

