// int longestSuccessiveElements(vector<int>&a) {
//     // Write your code here.
//     sort(a.begin(),a.end());
//     int count=1;
//     int answer=1;
//     for(int i=0;i<a.size();i++)
//     {
//         if(a[i+1]-a[i]==0)
//         {
//             i++;
//         }
//         if(a[i+1]-a[i]==1)
//         {
//             count++;
//         }
//         else
//         {
//             answer=max(count,answer);
//             count=1;
//         }
//     }
//     return answer;
// }