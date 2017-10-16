//
//  main.c
//  Insertion Sort
//
//  Created by Sindhu Vempati on 9/27/16.
//  Copyright © 2016 Sindhu Vempati. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a[6]={3,7,4,9,1,5};
    int i,j,key;
    for (i=1; i<6; i++)
    {
        key=a[i];
        j=i;
        
        while (j>0&& key<a[j-1]) {
            a[j]=a[j-1];
            j--;
        }
        a[j]=key;
    }
    
    for (i=0; i<6; i++) {
        printf("%d ",a[i]);
    }
    
    return 0;
}
