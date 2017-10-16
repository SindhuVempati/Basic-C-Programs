//
//  main.c
//  Selection Sort
//
//  Created by Sindhu Vempati on 9/27/16.
//  Copyright © 2016 Sindhu Vempati. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
   
    int a[6]={9,5,3,7,6,1};
    int i,j,midIndex,temp;
    int n=6;
    for (i=0; i<n-1; i++)
    {
        midIndex=i;
        //finding the index of the current min number
        for (j=i+1; j<n; j++)
        {
            if (a[j]<a[midIndex])
            {
                midIndex=j;
            }
        }
        if (midIndex!=i) {
            temp=a[i];
            a[i]=a[midIndex];
            a[midIndex]=temp;
        }
        
    }
    
    for (i=0; i<n; i++) {
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}
