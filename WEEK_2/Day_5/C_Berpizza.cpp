#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int q;
    cin>>q;
    deque<int> monQueue;// for monocarp
    priority_queue<pair<int,int>>poly_carp;
    int cust_id = 1;
    set<int>served;
    while(q--)
    {
        int type;
        cin>>type;

        if(type == 1)
        {
            int m;
            cin>>m;
            monQueue.push_back(cust_id);
            poly_carp.push({m,-cust_id});
            cust_id++;

        }
        if(type == 2) // Monocarp serves
        {
            while (served.count(monQueue.front())) 
            {
                monQueue.pop_front();
            }
            int served_customer = monQueue.front();
            monQueue.pop_front();
            served.insert(served_customer);
            cout << served_customer << " ";
        }
        if(type == 3)
        {
            while(served.count(-poly_carp.top().second)) // negative sign is used to retrieve 
            //the original customer_id of the customer at the top of polyHeap.
            {
                poly_carp.pop();
            }
            int served_customer = -poly_carp.top().second;
            poly_carp.pop();
            served.insert(served_customer);
            cout<<served_customer<<" ";
        }
    }
     
    cout<<endl;
    return 0;
}