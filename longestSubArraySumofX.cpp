int longestSubarrayWithSumK(vector<int> a, long long k) {
    // Write your code here
    long long int i=0,j=0,sum=0,ans=0;

  int n=a.size();

  while(j<n){

    sum+=a[j];

    if(sum<k)j++;

    else if(sum==k){   

        ans=max(ans,j-i+1); 

          j++; 

        }

        else{  

          while(sum>k){  

              sum=sum-a[i];   

             i++;    

        }      

      if(sum==k){  

              ans=max(ans,j-i+1);   

         }     

       j++;    

    }  

  }   

 return ans;

 
}