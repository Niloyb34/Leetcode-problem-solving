#include<bits/stdc++.h>
using namespace std;
bool isAnagram(string a,string b)
{
    unordered_map<char,int>count;///aikane char holo key and int holo value
    //Count the frequency of the character in string s
    for(auto x:a)
    {
        count[x]++;
    }
    // Decrement the frequency of the character in string b
    for(auto x:b)
    {
        count[x]--;
    }
    //Check if any character has non-zero frequency
    for(auto x:count)
    {
        if(x.second!=0)
        {
            return false;
        }
    }
    return true;
};
int main()
{
    string a,b;
    cout<<"Enter the strings : ";
    cin>>a>>b;
    if(isAnagram(a,b))
    {
           cout<<"YES ANAGRAM"<<endl;
    }
    else
    {
           cout<<"NOT anagram"<<endl;
    }
}
