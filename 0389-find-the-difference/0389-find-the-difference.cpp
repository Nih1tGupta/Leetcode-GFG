class Solution {
public:
char findTheDifference(string s, string t) {
int sumS=0 ;
int sumT=0;
for(int i =0 ; i<t.size() ; i++)
{
sumS+=s[i];
sumT+=t[i];
}
return sumT-sumS;
}
};