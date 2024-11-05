#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    vector<int>ans(n);
    for (int i = 0; i < n; ++i) {
		cin >> ans[i];
	}
    sort(ans.begin(), ans.end());
    int pos = 1;// because at first contest we have to solve 1 problem.
    for(int i=0; i<n; i++)
    {
        if(ans[i] >= pos) pos++;
    }
    cout<<pos-1<<endl;
    return 0;
}