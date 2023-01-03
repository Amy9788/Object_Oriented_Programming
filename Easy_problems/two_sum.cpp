// Given an array of integers nums and an integer target, 
// return indices of the two numbers such that they add up to target.
// you may assume that each input would have exactly one solution, and you may not use the same element twice.
#include <iostream>
#include <vector>
using namespace std;
class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            vector<int> result;
            int num1 = 0;
            int num2 = num1 + 1;
            bool find = false;
            for (auto i = nums.begin(); i != nums.end(); i++)
            {
                for (auto j = i + 1; j != nums.end(); j++)
                {
                    if (*i + *j == target)
                    {
                        find = true;
                        break;
                    }
                    num2++;        
                }
                if (find == true)
                {
                    break;
                }
                
                num1++;
                num2 = num1 + 1;
                    
            } 
            cout << num1 << endl; 
            cout << num2 << endl;       
            result.push_back(num1);
            result.push_back(num2);
            return result;
               
        }
};

int main()
{
    Solution solution;
    vector<int> g1, result;
    g1.push_back(3);
    g1.push_back(2);
    g1.push_back(4);
    result = solution.twoSum(g1, 6);
    // for (auto i = result.begin(); i !=result.end(); i++)
    // {
    //     cout << *i << " ";
    // }

}