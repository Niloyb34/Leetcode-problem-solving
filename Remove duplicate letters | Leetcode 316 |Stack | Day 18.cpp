#include<bits/stdc++.h>
using namespace std;
string removeduplicateletters(string s)///mane return type string and pass korci string s take
{
    vector<int>lastindex(26,0);///mane smosto character gular last index gulake ba srbosesh kothie pao gese ta amra save korbo atate aikane initallly 26 ta ghor raklam and every ghor ke 0 dia initialize korlam
    for(int i=0; i<s.length(); i++)
    {
        lastindex[s[i]-'a']=i;//mane amra aikane i er value er maddome dukabo last jtotmo index e every character ke pao gese taderke
    }
    vector<bool>seen(26,false);///mane holo bool namok seen vector er vitore amra false gula rakci
    stack<char>st;
    for(int i=0; i<s.size(); i++)
    {
        int curr=s[i]-'a';///mane current index er manta aikan teke ber korbo
        if(seen[curr])
        {
            continue;
        }
        while(st.size()>0&&st.top()>s[i]&&i<lastindex[st.top()-'a'])
        {
            seen[st.top()-'a']=false;
            st.pop();
        }
        st.push(s[i]);
        seen[curr]=true;
    }
    string res="";
    while(st.size()>0)
    {
        res+=st.top();
        st.pop();
    }
    reverse(res.begin(),res.end());
    return res;
}
int main()
{
    string s,res;
    getline(cin,s);//mane amra akta string input nilam s name tie getline(cin,string name) use korlam
    cout<<removeduplicateletters(s);///mane function take call korlam and string take pass korlam
}

