#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
    int maxArea(vector<int> &container)
    {
        int left = 0;
        int right = container.size()-1;
        int maximum = 0;
        while(left < right)
        {
            int width = right - left;
            int height = min(container[left],container[right]);
            int area = height * width;
            maximum = max(maximum,area);
            if(container[left] < container[right]) left++;
            else if(container[left] > container[right]) right--;
            else 
            {
                left++;
                right--;
            }
        }
        return maximum;
    }
};
int main()
{
    int n;
    cin>>n;
    vector<int> container(n);
    for(int i=0;i<n;i++)
    {
        cin>>container[i];
    }
    Solution sol;
    cout<<sol.maxArea(container);
}