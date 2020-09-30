//INFIX to Postfix
#include<bits/stdc++.h>
using namespace std;
int precedence(char c)
{
	if(c=='^')
	{
		return 3;
	}
	else if(c=='*' || c=='/')
	{
		return 2;
	}
	else if(c=='+' || c=='-')
	{
		return 1;
	}
	else
	{
		return -1;
	}
}
string infixToPostfix(string s)
{
	stack<char> st;
	st.push('N');
	int len=s.length();
	string ns="";
	for(int i=0;i<len;i++)
	{
		if((s[i]>='a'&&s[i]<='z')||(s[i]>='A' && s[i]<='Z'))
		{
			ns+=s[i];
		}
		else if(s[i]=='(')
		{
			st.push(s[i]);
		}
		else if(s[i]==')')
		{
			while(st.top()!='N'&&st.top()!='(')
			{
				ns+=st.top();
				st.pop();
			}
			if(st.top()=='(')
			{
				st.pop();
			}	
		}
		else
		{
			int pre=precedence(s[i]);
			while(st.top()!='N' && pre<=precedence(st.top()))
			{
				ns+=st.top();
				st.pop();
			}
			st.push(s[i]);
		}
			
	}
	while(st.top()!='N')
	{
		ns+=st.top();
		st.pop();
	}
	return ns;
}
int main()
{
	string s="x^y/(a*z)+b";
	cout<<infixToPostfix(s)<<endl;
}
