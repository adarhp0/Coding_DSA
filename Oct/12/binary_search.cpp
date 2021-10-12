#include<iostream>
using namespace std;

int bin_search(int arr[],int l, int h,int s)
{
    int mid=(l+h)/2;
    if(l>h)
    {
        return -1;
    }
    if(arr[mid]==s)
    {
        return mid;
    }
    else if (arr[mid]>s)
    {
        return bin_search(arr,l,mid-1,s);
    }
    else{
        return bin_search(arr,mid+1,h,s);
    }
}

int main()
{
    int n,i,s_n,res;
    cout<<"enter n"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter array in sorted order"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the number to be searched"<<endl;
    cin>>s_n;
res=bin_search(arr,0,n-1,s_n);
if(res==-1)
{
    cout<<s_n<<" not found"<<endl;
}
else{
    cout<<s_n<<" found at "<<res+1<<" position"<<endl;
}
return 0;
}