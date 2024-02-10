# check if an array is sorted or not

int checksort(int arr[],int n)
{
  for(int i=1;i<n;i++) 
  {
    if(arr[i] == arr[i-1])
    else return false;
  }
  return true;
}
