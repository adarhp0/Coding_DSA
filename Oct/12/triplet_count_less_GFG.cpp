// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	
	
	public:
	long long countTriplets(long long arr[], int n, long long sum)
	{
	    // Your code goes here
	    sort(arr, arr + n);
        int i,j,k,cou=0,fsum=0,fir_p,las_p;
        for(i=0;i<n-2;i++)
        {if(arr[i]<sum)
        {
            
            fir_p=i+1;
            las_p=n-1;
            while(fir_p<las_p)
            {
                if(arr[i]+arr[fir_p]+arr[las_p]<sum)
                {
                    cou=cou+las_p-fir_p;
                    fir_p++;
                    //int dif=las_p-fir_p;
                    //cou=cou+((dif*(dif+1))/2);
                }
                else
                {
                    las_p=las_p-1;
                }
            }
            
        }
        else
        {//if first element is greater than the expected sum
            break;
        }
        
        }
	return cou;
	    
	}
		 

};

// { Driver Code Starts.

int main() 
{
  
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
    	long long sum;
        cin>>n>>sum;
        long long arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
	    

       

        Solution ob;
        cout << ob.countTriplets(arr, n, sum) ;
	   
        
	    cout << "\n";
	     
    }
    return 0;
}

  // } Driver Code Ends