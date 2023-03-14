#include<bits/stdc++.h>
using namespace std;
int Solution(int arr[],int n)///mane arr[] and n take aikane pass korci amra
{
    if(n%2==0)///tar mane n jeta nisi oita jor snkha hle tar mane median hbe akebare majkane je snkha ta ase take 2 dara vag korle ja pabo ta
    {
        int z=n/2;///2
        int e=arr[z];///arr[2]=3
        int q=arr[z-1];///arr[1]=2
        int ans=(e+q)/2;///2
        return ans;//2
    }
    else
    {
        int z=round(n/2);
        {
            return arr[z];
        }
    }
}
int main()
{
    int arr1[]={-5,3,6,12,15};
    int arr2[]={-12,-10,-6,-3,4,1};
   /// array3[]={-5,3,6,12,15,-12,-10,-6,-3,4,1};

    int i=sizeof(arr1)/sizeof(arr1[0]);///array 1 er size
    int j=sizeof(arr2)/sizeof(arr2[0]);///array 2 er size

    int arr3[i+j];///array 3 er size ta muluto arr1 and arr2 er size er sum i+j
    int l=i+j;///array 3 er length




    for(int k=0;k<i;k++)
    {
        arr3[k]=arr1[k];
    }
    int a=0;
    for(int k=i;k<j;k++)
    {
        arr3[k]=arr2[a++];///arr3[k]=arr2[a++];
    }

    sort(arr3,arr3+l);///akta array thakle tar starting index 0 ke arr lekha jie ,onnodike ses index ke array name + sesh index er length likhte hoi

  cout<<"Median = "<<Solution(arr3,l);///  l=i+j

}
