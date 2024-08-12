//Best
int maxSum=0,tempSum=0;
for(int i=0; i<n; i++){
    tempSum = max(a[i] , tempSum+a[i]);
    maxSum = max(maxSum, tempSum);
}
