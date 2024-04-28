class Solution{
public:	
	string addBinary(string a, string b)
	{
	    // your code here
	    if(a=="0" && b=="0")
	    return "0";
	    string ans="";
	    int i=0,j=0,c=0;
	    reverse(a.begin(),a.end());
	    reverse(b.begin(),b.end());
	    while(i<a.size() || j<b.size() || c)
	    {
	        int val1=(i<a.size())?a[i]-'0':0;
	        int val2=(j<b.size())?b[j]-'0':0;
	        int sum=val1+val2+c;
	        if(sum%2==0)
	        ans+='0';
	        else
	        ans+='1';
	        c=sum/2;
	        i++;
	        j++;
	    }
	    while(ans.back()=='0')
	    {
	        ans.pop_back();
	    }
	    reverse(ans.begin(),ans.end());
	    return ans;
	}
};
