//binary search.com
//https://binarysearch.com/problems/Check-if-Number-Is-Perfect-Square
#include<iostream>
using namespace std;
int bse(int l,int h,int n)
{
    //cout<<l<<"\t"<<h<<endl;
long long mid=(l+h)/2;
long long m1=mid*mid;
//cout<<mid<<"\t"<<m1<<"\t"<<arr[mid]<<"\t"<<n<<endl;
if(h<l)
{    return 0;
}
if(m1==n)
{
    return 1;
}
else if(m1>n)
{//cout<<m1<<"higher"<<endl;
    return bse(l,mid-1,n);
}
else
{//cout<<m1<<"lower"<<endl;
    return bse(mid+1,h,n);
}
//return 0;
}

bool solve(int n) {
    int i,l;
    //int arr[n];
    if(n==0)
    {
        return true;
    }
    
    int res=bse(1,n,n);
    //cout<<"res "<<res<<endl;
    if(res==1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n;
    cin>>n;
    cout<<solve(n);
     return 0;
}