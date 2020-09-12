
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int* sortedSquares(int* A, int ASize, int* returnSize){
    int *arr=malloc(sizeof(int)*ASize);
    *returnSize=ASize;
    
    for(int i=0; i<ASize; i++)
        arr[i]=A[i]*A[i];
    
    for(int i=1; i<ASize; i++){
        int insert=arr[i]; int j;
        for(j=i-1; j>=0; j--){
            if(arr[j]>insert)
                arr[j+1]=arr[j];
            else
                break;
        }
        
        arr[j+1]=insert;
    }
    
    return arr;
}
