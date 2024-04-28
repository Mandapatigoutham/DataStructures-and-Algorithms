#include <bits/stdc++.h> 
vector<string> subsequences(string str){
	
	// Write your code here
	vector<string>ans;
	for(int i=1;i<(1<<str.size());i++)
	{
		string temp="";
		for(int j=0;j<str.size();j++)
		{
			if(i&(1<<j))
			{
				temp+=str[j];
			}
		}
		ans.push_back(temp);
	}
	return ans;
}
