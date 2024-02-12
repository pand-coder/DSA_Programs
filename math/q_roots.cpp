class Solution {
  public:
    vector<int> quadraticRoots(int a, int b, int c) {
        vector<int>ans;
        double r1,r2;
        double d=b*b-4*a*c;
        if(d<0)
        return {-1};
        if(d==0)
        {
            r1=-b/(2.0*a);
            r2=r1;
        }
        else
        {
            r1=(-b+sqrt(d))/(2.0*a);
            r2=(-b-sqrt(d))/(2.0*a);
        }
        if(r1>=r2)
        {
            ans.push_back(floor(r1));
            ans.push_back(floor(r2));
        }
        else
        {
            ans.push_back(floor(r2));
            ans.push_back(floor(r1));
        }
        return ans;
        
    }
};
