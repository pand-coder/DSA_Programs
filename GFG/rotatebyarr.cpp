void rotateArr(int arr[], int d, int n){
        // code here
      int a[n];
        d = d%n;
        for(int i = d; i < n+d; i++){
            if(i < n){
                a[i-d] = arr[i];
            }
            else{
                a[i-d] = arr[i-n];
            }
        }
        for(int i = 0; i < n; i++)
        {
            arr[i] = a[i];
        }
    }
