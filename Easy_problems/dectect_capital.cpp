//  We define the usage of capitals in a word to be right when one of the following cases holds:
//      + All letters in this word are capitals, like "USA".
//      + All letters in this word are not capitals, like "leetcode".
//      + Only the first letter in this word is capital, like "Google".

All letters in this word are capitals, like "USA".
All letters in this word are not capitals, like "leetcode".
Only the first letter in this word is capital, like "Google".
#include<string>
#include<iostream>
using namespace std;
class Solution{
    public:
        bool detectCapitalUse(string word){
            int i = 0;
            bool condition = false;
            if (word.length() < 1)
            {
                return false;
            }
            // check if all letters in this word are not capitals
            if (islower(word[0]))
            {
                for(i = 0; i < word.length(); i++){
                    if(!islower(word[i])){
                        condition = false;
                        break;
                    }
                    condition = true;
                }
            }


            // check if all letters in this word are capitals
            else if(!islower(word[0]))
            {
                for(i = 0; i < word.length(); i++){
                    if(islower(word[i])){
                        condition = false;
                        break;
                    }
                    condition = true;
                }

                if (condition == false)
                {
                    for(i = 1; i < word.length(); i++){
                        if(!islower(word[i])){
                            condition = false;
                            cout << word[i] << endl;
                            cout << condition << endl;
                            break;
                        }
                        condition = true;
                    }
                }
                
            }

            return condition;
        }
    
};

int main()
{
    Solution solution;
    // By inserting the boolalpha, it will print true or false instead of 0(false) or 1 (true)
    // cout << boolalpha << solution.detectCapitalUse("USA") << endl;
    // cout << boolalpha << solution.detectCapitalUse("FlaG") << endl;
    cout << boolalpha << solution.detectCapitalUse("Ca") << endl;

}