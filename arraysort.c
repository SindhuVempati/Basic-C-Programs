
#include <stdio.h>


void func( int A[], int n ) {
int i;
if ( n == 1) return;
func( A, n-1);
int x = A[n-1];
for( i = n-2; i >= 0 && x < A[i]; i-- ) {
 A[i+1] = A[i];
}
 A[i+1] = x;

for(int j = 0; j < n; j++)
{
     printf("%d ", A[j]);
}
printf("\n");
}

int main()
{
    int P[] = {2,3,4,6,2,3,55,67,1,0,3,3,1};
    func(P,13);

    return 0;
}

/* Output :
2 3
2 3 4
2 3 4 6
2 2 3 4 6
2 2 3 3 4 6
2 2 3 3 4 6 55
2 2 3 3 4 6 55 67
1 2 2 3 3 4 6 55 67
0 1 2 2 3 3 4 6 55 67
0 1 2 2 3 3 3 4 6 55 67
0 1 2 2 3 3 3 3 4 6 55 67
0 1 1 2 2 3 3 3 3 4 6 55 67
*/
