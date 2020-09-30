#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


//User function Template for C++
int gcd(int p, int q)
{
    if(q==0)
    return p;
    return gcd(q, p%q );
}
vector<int> solve(int x, int y, int z)
{
  //code here.
  int q, r, s;
q=gcd(x,y);
r=gcd(y,z);
s=gcd(z,x);
    
    solve.pushback(q, r, s);

}

// { Driver Code Starts.
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int x, y, z;
    cin >> x >> y >> z;
    vector<int>d = solve(x, y, z);
    for (int i = 0; i < d.size(); i++) {
      cout << d[i] << " ";
    }
    cout << endl;
  }
  
}
