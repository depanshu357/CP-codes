#include <bits/stdc++.h>
using namespace std;
string numToString(char c)
{
    switch (c)
    {
    case '1':
        return "one";
    case '2':
        return "two";
    case '3':
        return "three";
    case '4':
        return "four";
    case '5':
        return "five";
    case '6':
        return "six";
    case '7':
        return "seven";
    case '8':
        return "eight";
    case '9':
        return "nine";
    case '0':
        return "";
    }
    return "";
}

string numToStringInTen(char c)
{
    switch (c)
    {
    case '0':
        return "";
    case '1':
        return "";
    case '2':
        return "twenty";
    case '3':
        return "thirty";
    case '4':
        return "forty";
    case '5':
        return "fifty";
    case '6':
        return "sixty";
    case '7':
        return "seventy";
    case '8':
        return "eighty";
    case '9':
        return "ninety";
    }
    return "";
}

string specialCase(char c)
{
    switch (c)
    {
    case '1':
        return "eleven";
    case '2':
        return "twelve";
    case '3':
        return "thirteen";
    case '4':
        return "fourteen";
    case '5':
        return "fifteen";
    case '6':
        return "sixteen";
    case '7':
        return "seventeen";
    case '8':
        return "eighteen";
    case '9':
        return "nineteen";
    case '0':
        return "ten";
    }
    return "";
}

string posToString(int n)
{
    if (n == 2)
        return "hundred";
    else if (n == 3)
        return "thousand";
    else if (n == 5)
        return "lakh";
    else if (n == 7)
        return "crore";
    return "";
}

string Solution(string A)
{
    string ans;
    reverse(A.begin(), A.end());
    int ayega = 0;
    for (int i = A.size() - 1; i >= 0; i--)
    {
        if (ans.size() && i > 0 && (i == 1 || i == 2 || i == 4 || i == 6) ){
            if(ayega){

                ans.push_back('-');
            ans += (posToString(i+1));
            ayega=0;
            }
        }
        if (i == 1 && A[i] == '0' && A[i - 1] != '0')
        {
            ans += ("-and");
        }
        // if (A[i] == '0' && (i == 2 || i == 3 || i == 5 || i == 7))
        // {
        //     if (ans.size() && i > 0 && i < A.size() && A[i + 1] > '0')
        //         ans.push_back('-');
        //     ans += (posToString(i));
        // }
        if (A[i] == '0')
            continue;
        if (i == 1 || i == 4 || i == 6 || i == 8)
        {
            if (ans.size() && (A[i] > '0' || A[i - 1] > '0') && i == 1)
                ans += ("-and");
            if (ans.size())
                ans.push_back('-');
            if (A[i] == '1')
            {
                ans = ans + (specialCase(A[i - 1]));
                i--;
                ayega = 1;
                // if (ans.size() && i > 0)
                // {

                //     ans.push_back('-');
                //     ans += (posToString(i));
                // }
            }
            else
            {
                ans += (numToStringInTen(A[i]));
                ayega = 1;
            }
        }
        else
        {
            if (ans.size())
                ans.push_back('-');
            ans += (numToString(A[i]));
            ayega = 1;
            // if (ans.size() && i > 0)
            //     ans.push_back('-');
            // ans += (posToString(i));
        }
    }
    return ans;
    // if(ans)return 1;
    // else return 0;
}
string stringToNum(string s)
{
    if (s == "one")
        return "1";
    else if (s == "two")
        return "2";
    else if (s == "three")
        return "3";
    else if (s == "four")
        return "4";
    else if (s == "five")
        return "5";
    else if (s == "six")
        return "6";
    else if (s == "seven")
        return "7";
    else if (s == "eight")
        return "8";
    else if (s == "nine")
        return "9";
    else if (s == "zero")
        return "0";
    else if (s == "eleven")
        return "11";
    else if (s == "twelve")
        return "12";
    else if (s == "thirteen")
        return "13";
    else if (s == "fourteen")
        return "14";
    else if (s == "fifteen")
        return "15";
    else if (s == "sixteen")
        return "16";
    else if (s == "seventeen")
        return "17";
    else if (s == "eighteen")
        return "18";
    else if (s == "nighteen")
        return "19";
    else if (s == "twenty")
        return "20";
    else if (s == "thirty")
        return "30";
    else if (s == "forty")
        return "40";
    else if (s == "fifty")
        return "50";
    else if (s == "sixty")
        return "60";
    else if (s == "seventy")
        return "70";
    else if (s == "eighty")
        return "80";
    else if (s == "ninety")
        return "90";
    else
        return "";
}
int main()
{
    string A = "28440447";
    // string A = "60";
    string B = "two-crore-eighty-four-lakh-forty-thousand-four-hundred-and-forty-seven";
    string C = "two-crore-eighty-four-lakh-forty-thousand-four-hundred-and-forty-seven";
    cout << Solution(A);
    cout << (B == Solution(A));
}
