class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {

        vector<int> v=nums;

        int n=v.size();
        if(n<3)
            return 0;
        
        sort(v.begin(),v.end());
        
        
        int tmp;
        int dis=INT_MAX;
        int res;
        
        for(int i=0;i<n;i++)
        {
            int j=i+1,k=n-1;
            while(j<k)
            {
                tmp=v[i]+v[j]+v[k];
                if(tmp==target)
                    return tmp;
                if(dis>abs(tmp-target))
                {
                    res=tmp;
                    dis=abs(tmp-target);
                }
                    
                if(tmp<target)
                    j++;
                else
                    k--;
            }
        }
        
        return res;
        
        

    }
};
