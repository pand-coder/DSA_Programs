class Solution{
  public:
    /* Function to find largest and second largest element
    *sizeOfArray : number of elements in the array
    * arr = input array
    */
    vector<int> largestAndSecondLargest(int sizeOfArray, int arr[]){
        int max = -1, max2= -1;
  for(int i=0;i<sizeOfArray;i++)
  {
      if(arr[i]>max)
      {
          max=arr[i];
      }
  }
  for(int i=0;i<sizeOfArray;i++)
  {
      if(arr[i]!=max && arr[i]>max2)
      {
      max2=arr[i];
      }
  }
  return {max,max2};
}
};
