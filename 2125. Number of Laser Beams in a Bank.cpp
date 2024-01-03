class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
    int result=0;
    vector<int> v;
    for(const auto& a:bank) {
        int cnt=count(a.begin(),a.end(),'1');
        if(cnt!=0)
        {
           v.push_back(cnt);
       }
    }
    for(size_t i=1;i<v.size();++i) {
        result+=v[i]*v[i-1];
    }
  return result;
  }
};
