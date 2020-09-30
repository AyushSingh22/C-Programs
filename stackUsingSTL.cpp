//program to perform the operation of stack using STL
#include<bits/stdc++.h>
using namespace std;
void traversal(stack<int> s)
{
	while(s.size()!=0)
	{
		cout<<s.top()<<endl;
		s.pop();
	}
	
}
int main()
{
	stack<int> st;
	st.push(1);
	st.push(2);
	st.push(3);
	st.push(31);
	st.push(32);
	st.push(33);
	traversal(st);
	cout<<"Size of the stack is equal to "<<st.size()<<endl;
	st.pop();
	st.pop();
	traversal(st);
}
