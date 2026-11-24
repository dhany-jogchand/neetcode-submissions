class Solution {
public:
    bool isAnagram(string a, string b)
     {
     if(a.length()!=b.length()) return false;
int arr[255]={};
int i;
size_t sz=a.length();
for(i=0;i<sz;++i)
{
++arr[(int)a[i]];
--arr[(int)b[i]];
}
for(i=0;i<255;++i) if(arr[i]!=0) return false;
return true;

    }
};
