#include <bits/stdc++.h> 
using namespace std; 
void Permutations(int a[], int n) 
{ 
	int flag,flag1=0;
    sort(a, a + n); 
    do {
		flag=0; 
        for(int i=0;i<n-1;i++)
        {
        	if((a[i]+a[i+1])%3 !=0)
        	{
        		flag++;
			}
		}
		if(flag==(n-1))
		{
			flag1=1;
			cout<<"Yes"<<endl;
			break;
		}
        
        
    } while (next_permutation(a, a + n)); 
    if(flag1==0)
    {
    	cout<<"No"<<endl;
	}
} 
  
int main() 
{ 
  
    int t;
    cin>>t;
    while(t!=0)
    {
    	int n1;
    	cin>>n1;
    	int a[n1];
    	for(int i=0;i<n1;i++)
    	{
    		cin>>a[i];
		}
    	int n = sizeof(a) / sizeof(a[0]); 
    	Permutations(a, n); 
    	t--;
	}
  
    
  
    return 0; 
} 
