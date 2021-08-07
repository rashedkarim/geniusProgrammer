#include<stdio.h>

int binarySearch(int *sortedArray, int arrLen, int searchNo){
    int found = 0, count =0;
    int firstIndex = 0;
    int lastIndex = arrLen - 1;
    //printf("\n array size : %d", arrLen);
    int midIndex = (lastIndex - firstIndex) / 2 ;
    //printf("\n sorted array : %d", *sortedArray);
    //printf("\n%d : %d %d", lastIndex, midIndex, searchNo);

    do{
        count++;
        if(searchNo == sortedArray[midIndex]){
            found = 1;
            break;
        }else if (searchNo > sortedArray[midIndex]){
            firstIndex = midIndex + 1;
        }else{
            lastIndex = midIndex - 1;
        }
        //midIndex = ( (lastIndex - firstIndex) > 1 ) ? (lastIndex - firstIndex)/ 2 : 1;
        if ( (lastIndex - firstIndex) > 1 ){
            midIndex = firstIndex + (lastIndex - firstIndex)/ 2;

        } else{
            midIndex = midIndex + 1;
        }
        
        if(midIndex>lastIndex){
            midIndex = lastIndex;
        }
        if(firstIndex > lastIndex){
            midIndex = -1;
            break;
        }
        //printf("\n%d : %d", lastIndex, midIndex);
    }while(!found);
    printf("\nCost of execution : %d",count);
    return midIndex;
}