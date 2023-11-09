//code forces problem:String Task
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    string result;
    for (int i = 0; i < s.length(); i++) {
        transform(s.begin(),s.end(),s.begin(),::tolower);

        if (s[i]=='a'||s[i]=='o'|| s[i]=='y'||s[i]=='e'||s[i]=='u'||s[i]=='i') 
           continue;
        else{
        	
            result += ".";
            result += s[i];
        }
    }

    cout << result << endl;

    return 0;
}

