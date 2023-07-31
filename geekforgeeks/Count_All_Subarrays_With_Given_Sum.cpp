// int findAllSubarraysWithGivenSum(vector < int > & arr, int k) {
//     // Write Your Code Here
//         // int count=0;
//         int sum=0;
//         int output=0;
//         for(int i=0;i<arr.size();i++)
//         {
//             sum=0;
//             for(int j=i;j<arr.size();j++)
//             {
//                 sum+=arr[j];
//                 if(sum==k)
//                 {
//                     output++;
//                 }
//             }
//         }
//         return output;
// }