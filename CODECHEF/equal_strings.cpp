#include <bits/stdc++.h>
using namespace std;

int countDistinct(string arr, int n)
{
    // First sort the array so that all
    // occurrences become consecutive
    sort(arr.begin(), arr.end());
 
    // Traverse the sorted array
    int res = 0;
    for (int i = 0; i < n; i++) {
 
        // Move the index ahead while
        // there are duplicates
        while (i < n - 1 && arr[i] == arr[i + 1])
            i++;
 
        res++;
    }
 
    return res;
}

int main()
{
    int t, n;
    vector<string> x1;
    vector<string> x2;
    cout<<"Hi"<<endl;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        string x, y;
        cin >> n;
        cin >> x;
        cin >> y;
        x1.push_back(x);
        x2.push_back(y);
        // cout<<"hi"<<endl;
    }

    for (int j = 0; j < t; j++)
    {   
        // cout<<"HI"<<endl;
        int s = x1.size();
        string arr;
        int count = 0;
        for (int z = 0; z < s; z++)
        {
            if (x1[j][z] == x2[j][z])
            {
                continue;
            }
            else if (x1[j][z] != x2[j][z])
            {
                arr.push_back(x2[j][z]);
            }
        }
        for (int f=0 ;f<s;f++){
            cout<<arr[f]<<endl;
        }
        // sort(arr.begin(), arr.end());
        // // cout<<"Ji"<<endl;
        // for (int w = 0; w < x1.size(); w++)
        // {
        //     // cout<<"Ji"<<endl;
        //     if (arr[w] == arr[w+1])
        //     {
        //         continue;
        //     }
        //     else
        //     {
        //         count += 1;
        //         // cout<<"Ji"<<endl;
        //     }
        // }
        // cout << arr;
        // set<int> g(arr.begin(),arr.end());
        // cout << g.size() << endl;
        cout<<countDistinct(arr,s);

    }
}
