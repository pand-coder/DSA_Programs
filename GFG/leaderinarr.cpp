class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        vector<int> result; // result dynamic array creation
	    int cl=a[n-1];
	    result.push_back(cl);
	    for(int i=n-2;i>=0;i--)
	    {
		    if(cl<=a[i])
		    {
			    cl=a[i];
			    result.push_back(cl);
		    }
	    }
	    reverse(result.begin(), result.end());
	    return result;
    }
};
