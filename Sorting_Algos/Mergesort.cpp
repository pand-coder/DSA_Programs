void Mergesort(l,r)
{
    l=arr[0];
    r=arr[n-1];
    if(l<r)
    {
        mid=(l+r)/2;
        Mergesort(l,mid);
        Mergesort(mid+1,r);
        Mergesort(l,mid,r);
    }
}
