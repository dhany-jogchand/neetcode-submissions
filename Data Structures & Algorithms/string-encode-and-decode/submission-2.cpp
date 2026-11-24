class Solution {
public:

string encode(vector<string>& strs) 
{
int required_space=0;
for(auto str:strs)
{
required_space+=to_string(str.size()+1).size();
required_space+=strs.size();
}
string encoded;
encoded.reserve(required_space);
for(auto str:strs)
{
encoded+=to_string(str.size());
encoded+=",";
encoded+=str;
}
return encoded;
}
vector<string> decode(string encoded) 
{
vector<string> decoded;
auto sz=encoded.length();
int k=0;
int i=0;
int len;
while(i<sz)
{
k=i;
while(encoded[i]!=',') ++i;
len=stoi(encoded.substr(k,i-k));
i+=1;
decoded.push_back(encoded.substr(i,len));
i+=len;
}
return decoded;
}
};
