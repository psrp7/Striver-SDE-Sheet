#include <bits/stdc++.h>

// #include<bits/stdc++.h>
// void findMedian(int *arr, int n)
// {
//     int ppt =n;
//     priority_queue<int> mx2;
    
//     priority_queue<int, vector<int>, greater<int>> mn2;

//     int count =0;
//     int str =0;
// //  for(int i=0; i<n; i++)
//     for(int i=0; i<n; i++)
//     {
//     str = i - 1;
//         if(mx2.size() == 0) 
//             mx2.push(arr[i]);
//         else if(arr[i] > mx2.top())
//              mn2.push(arr[i]);
//           else
//               mx2.push(arr[i]);
//              count = str ;
//          if(mx2.size() - mn2.size() == 2){
//             mn2.push(mx2.top()), mx2.pop();
//             count += mx2.top();
//          }
             
//          else if((mn2.size() - mx2.size()) == 1)
//                    mx2.push(mn2.top()), mn2.pop();
        
//          if(mx2.size() == mn2.size())
//                 cout << ((mx2.top() + mn2.top())/2) << " ";
//          else 
//            cout << mx2.top() << " ";  
//            int k = mx2.top() - count ;
//     }
// }




class Node
{
    public:
    int data;
    Node*child[3];

    Node(int data)
    {
        this->data = data;
        for(int i = 0;i<2;i++)
        {
            child[i] = NULL;
        }
    }
};




class Trie
{
    public:
    Node *root;




    Trie()
    {
        root = new Node('\0');
    }
    void insert(int num)
    {  
        Node *prev = root;
        for(int i = 31;i>=0;i--)
        {
            int bit = (num>>i)&1;
            Node*child;
            if(prev->child[bit]== NULL)
            {
                child = new Node(bit);
                prev->child[bit] = child;
            }
            else{
                child = prev->child[bit];
            }
            prev = child;
            prev2 = child;
        }
    }

    int find_max(int num){
        int val = 0;
        int ptr =0;
        Node *prev = root;
        for(int i = 31;i>=0;i--)
        {
            int bit = (num>>i)&1;
            Node *child;
            if (bit & 1)
            {
                ptr++;
                if(prev->child[0]){ 
                    child = prev->child[0];
                    val = val |(1<<i); 
                }
                else{
                    child = prev->child[1];
                }
                ptr +=i;
            } 
            else{ 
                    child = prev->child[1];
                    val = val |(1<<i);
                }
                else{
                    child = prev->child[0];
                }
            }
            prev = child;
        }
        return val;
    }
};



vector<int> maxXorQueries(vector<int> &arr, vector<vector<int>> &queries){
	Trie t;
	sort(arr.begin(),arr.end());
	vector<pair<int,pair<int,int>>> offlineQuery;
	int q = queries.size();
	for(int i = 0;i<q;i++){
		offlineQuery.push_back({queries[i][1],{queries[i][0],i}}); 
	}
	sort(offlineQuery.begin(),offlineQuery.end());
	vector<int>ans(q,0); 

	int idx = 0;
    int ptr =0;
	for(int i = 0;i<offlineQuery.size();i++)
    {
		int ai = offlineQuery[i].first;
		int xi = offlineQuery[i].second.first;
        ptr++;
		int qindex = offlineQuery[i].second.second;
		while(idx<arr.size() && arr[idx]<=ai){
			t.insert(arr[idx]);
			idx++; 
		}
        ptr--;
        if(idx == 0)
            ans[qindex] = -1;
        
        else
            ans[qindex] = t.find_max(xi); // find max for xi.
        
	}
	return ans;
}