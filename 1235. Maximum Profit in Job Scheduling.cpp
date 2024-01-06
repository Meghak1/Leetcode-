class Solution {
public:
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        int c_profit,low,high;
        int n=startTime.size();
        vector<vector<int>> jobs;
        for(int i=0;i<n;++i) 
        {
            jobs.push_back({endTime[i], startTime[i], profit[i]});
        }
        sort(jobs.begin(),jobs.end());
        vector<int> arr(n,0);
        arr[0]=jobs[0][2];
        for(int i=1;i<n;++i)
        {
            c_profit=jobs[i][2];
            low=0,high=i-1;
            while(low<=high) 
            {
                int mid=(low+high)/2;
                if(jobs[mid][0]<=jobs[i][1])
                {
                   if(jobs[mid+1][0]<=jobs[i][1]) 
                   {
                        low=mid+1;
                    } 
                  else 
                  {
                      c_profit +=arr[mid];
                        break;
                  }
         } 
              else 
                {
                    high=mid-1;
                }
            }
       arr[i]=max(c_profit,arr[i-1]);
     }
 return arr[n - 1];
    }
};
