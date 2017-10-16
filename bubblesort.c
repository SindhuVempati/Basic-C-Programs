//
//  main.c
//  Bubblesort
//
//  Created by Sindhu Vempati on 9/27/16.
//  Copyright © 2016 Sindhu Vempati. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int a[6]={6,5,2,4,3,1};
    int i,j,temp;
    
    for(i=0;i<6;i++)
    {
        int flag=0;
        for(j=0;j<6-i-1;j++)
        {
            if (a[j]>a[j+1]) {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag=1;
            }
        }
        if (!flag) {
            for(i=0;i<6;i++)
                printf("%d",a[i]);
            break;
        }
    }
    
    return 0;
}
