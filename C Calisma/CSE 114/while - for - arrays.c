// 10.18 Monday
// print 1 2 3 ... 100
#include <stdio.h>
int main(){
    int i;
    i = 1; // initialization of the loop control variable
    while( i <= 100 ){ // i is called lopp control variable
        printf( "%d ", i );
        i++; // update of the control variable
    }
}


// print 2 4 6 ... 100 and 1 3 5 ... 99
#include <stdio.h>
int main(){
    int i;
    i = 2;
    while( i <= 100 ){
        printf("%d ", i);
        i += 2;
    }
    printf("\n\n");
    i = 1;
    while( i <= 100 ){
        printf("%d ", i);
        i += 2;
    }
}

// print 100 98 96 ... 2
#include <stdio.h>
int main(){
    int i;
    i = 100;
    while( i >= 2 ){ //i != 0
        printf("%d ", i);
        i -= 2;
    }
}

// print
1 2 3 ... 10
1 2 3 ... 10
... (10 rows)
1 2 3 ... 10
//

#include <stdio.h>
int main(){
    int i, j;
    i = 0;
    while( i < 10 ){
        // print 1 2 ... 10
        j = 1;
        while( j <= 10 ){
            printf( "%d ", j );
            j++;
        }
        printf( "\n" );
        i++;
    }
}


print
1 1 1 1 1 1 1 1 1 1
2 2 2 2 2 2 2 2 2 2
...
7 7 7 7 7 7 7 7 7 7
8 8 8 8 8 8 8 8 8 8
9 9 9 9 9 9 9 9 9 9
#include <stdio.h>
int main(){
    int i, j;
    i = 0;
    while( i < 10 ){
        // print 1 2 ... 10
        j = 1;
        while( j <= 10 ){
            printf( "%d ", i );
            j++;
        }
        printf( "\n" );
        i++;
    }
}



// print
3 6 10
5 10 16 23 31
7 14 22 31 41 52 64
9 ...
...
15 30 46 ... in total 15 numbers
//
#include <stdio.h>
int main(){
    int i, j, n, diff;
    i = 3;
    while( i <= 15 ){
        // print i numbers on the screen
        n = diff = i;
        // n = i; diff = i;
        j = 0;
        while( j < i ){
            printf( "%d ", n );
            n += diff++;
            // n = n + diff; diff++;
            j++;
        }
        printf( "\n" );
        i += 2;
    }
}


// Read grades from the user and at the end print the average
// Exit when -1 arrives
#include <stdio.h>
#define SENTINEL -1
int main(){
    int grade, sum = 0, count = 0;
    //const int SENTINEL = -1;
    printf( "Enter the first grade (%d to exit): ", SENTINEL );
    scanf( "%d", &grade );
    while( grade != SENTINEL ){
        sum += grade;
        count++;
        printf( "Enter the next grade (%d to exit): ", SENTINEL );
        scanf( "%d", &grade );
    }
   
    if( count ){
        printf( "Average: %f.\n", sum / (double) count );
    }
    else printf( "No grades!\n" );
}















// 10.20 Wednesday
// Read grades from the user and at the end print the average
// Exit when -1 arrives - use do-while loop
#include <stdio.h>
#define SENTINEL -1
int main(){
    int grade, sum = 0, count = 0, check;
    //const int SENTINEL = -1;
    // *
    do{
        printf( "Enter the next grade (%d to exit): ", SENTINEL );
        scanf( "%d", &grade );
        check = ( grade != SENTINEL );
        if( check ){
            sum += grade;
            count++;  
        }
    }while( check );
    // * /
   
    // *
    do{
        printf( "Enter the next grade (%d to exit): ", SENTINEL );
        scanf( "%d", &grade );
        check = ( grade != SENTINEL );
        //if( check ){
            sum += grade;
            count++;  
        //}
    }while( check );
    // * /
   
    sum -= grade; // sum -= SENTINEL
    count--;
   
    if( count ){
        printf( "Average: %f.\n", sum / (double) count );
    }
    else printf( "No grades!\n" );
}


// Read 100 numbers from the user and count a number among them
#include <stdio.h>
#define NUM_OF_NUMBERS 5
int main(){
    int i = 0, num, count = 0, number_to_be_counted;
    printf( "Enter the number to be counted: " );
    scanf( "%d", &number_to_be_counted );
   
    while( i < NUM_OF_NUMBERS ){
        printf( "Enter the next number: " );
        scanf( "%d", &num );
        if( num == number_to_be_counted ) count++;
        i++;
    }
   
    printf( "%d %d's have been entered.\n", count, number_to_be_counted );
   
}


// Read a number k from the user, then read k numbers and print the sum
// Then read a new number k from the user and read k numbers and print the sum
// Repeat this as long a k > 0
#include <stdio.h>
int main(){
    int i, sum, k, num;
    printf( "Enter the number of numbers in the first group: " );
    scanf( "%d", &k );
   
    while( k > 0 ){
        sum = 0;
        // Read k numbers and print the sum
        /*i = 0;
        while( i < k ){
            printf( "Enter the %dth number of the group with %d elements: ", i+1, k );
            scanf( "%d", &num );
            sum += num;
            i++;
        }*/
       
        while( k ){
            printf( "Enter number %d of the group: ", k );
            scanf( "%d", &num );
            sum += num;
            k--;
        }
       
        printf( "Sum: %d\n\n", sum );
       
        printf( "Enter the number of numbers in the next group: " );
        scanf( "%d", &k );
    }
   
}













// 10.25 Monday
// print 100 95 95 ... 50
#include <stdio.h>
int main(){
    int i = 100;
   
    for( ; i >= 50 ; i-= 5 ){
        printf( "%d ", i );
    }
    return 0;
}




/ * print
9 8 7 ... 1 0
9 8 7 ... 1
9 8 7 ..2
...
9
* /
#include <stdio.h>
int main(){
    int i, j;
   
    for( i = 0; i < 10; i++ ){
        // print 9 8 ... i
        //for( j = 9; j >= i; j-- ) printf( "%d ", j );
       
        for( j = 9; j >= 0; j-- ){
            if( j >= i ) printf( "%d ", j ); else break;
            //printf( "x" );
            //break;
        }
       
        //if( i == 4 ) break;
       
       
        printf( "\n" );
    }
    return 0;
}




/ * print
1
2 2
3 3 3
...
9 9 ... 9

         1
        22
       333
     ...
99       9
* /
#include <stdio.h>
int main(){
    int i, j, spaces;
    for( i = 1; i < 10; i++ ){
        // print i number of i's
        for( j = 0; j < i; j++ ) printf( "%d ", i );
        printf( "\n" );
    }
   
    for( i = 1; i < 10; i++ ){
        spaces = 9 - i;
        // print spaces (9-i) number of spaces and i number of i's
        for( j = 0; j < spaces; j++ ) printf( " " );
        for( j = 0; j < i; j++ ) printf( "%d", i );
        printf( "\n" );
    }
   
    return 0;
}




/ * print
   *
  ***
 *****
******* // get base from the user
* /
#include <stdio.h>
int main(){
    int base, i, j, spaces, stars;
    printf( "Enter the base (an odd number): " );
    scanf( "%d", &base );
   
   
    for( stars = 1, spaces = base / 2; spaces >= 0; spaces--, stars += 2 ){
        // print spaces # of spaces and star # of stars
        for( i = 0; i < spaces; i++ ) printf( " " );
        for( i = 0; i < stars; i++ ) printf( "*" );
        printf( "\n" );
    }
   
}


// print the digits of a decimal number without log
* /
#include <stdio.h>
#include <math.h>
int main(){
    int n, power, m, digit;
    printf( "Enter n: " ); scanf( "%d", &n); m = n;
    for( power = 1; m; m /= 10 ) power *= 10;
    power /= 10;
    for( ; n; n -= digit * power, power /= 10 ){
        digit = n / power;
        printf( "%d ", digit );
    }
   
    // what if rightmost digit is zero!!!
   
   
}











// 10.27 Wednesday
// read numbers from the user until 0 arrives, find the second max
// assume at least 2 numbers
#include <stdio.h>
#define SENTINEL 0
int main(){
    int num, max, second_max;
   
    printf( "Enter first two numbers: " );
    scanf( "%d%d", &max, &second_max );
    printf( "%d %d ", num, max );
    if( max < second_max ){
        // swap max and second_max
        num = max; // num used as temporary storage place
        max = second_max;
        second_max = num;
    }
   
    printf( "Enter third number: " );
    scanf( "%d", &num );
   
    for( ; num != SENTINEL; scanf( "%d", &num ) ){
        if( num > max ){
            second_max = max;
            max = num;
        }
        else{
            if( num > second_max ) second_max = num;
        }
        printf( "Enter next number: " );
    }
   
    printf( "second max: %d", second_max );
}












// 11.01 Monday

#include<stdio.h>
int main( void ) {
    int prime_lt_100[] = {2.0, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97}, n;
    
    n = sizeof( prime_lt_100 ) / sizeof( double );
    
    printf( "The size of the array is: %d.\n", n );
    
    printf( "\n\n" );
    return 0;    
}


// write functions to copy an array inside another in normal and reverse order
#include <stdio.h>
#define SIZE 5
void print_array( const int A[], int size ){
    int i;
    printf("\n\n");
    for( i = 0; i < size; i++ ) printf( "%d ", A[ i ] );
    printf("\n\n");
}
// assumes the sizes of the arrays are same
void copy_array( int dest[], const int source[], int size ){
    int i;
    for( i = size - 1; i >= 0; i-- ) dest[ i ] = source[ i ];
    // source[ 0 ] = 8; will fire a compiler error because attempting to write
    // to the source array... const means it is read-only
}
// assumes the sizes of the arrays are same
void copy_array_reverse( int dest[], const int source[], int size ){
    int i, j;
    for( i = 0, j = size - 1; i < size; i++, j-- ) dest[ i ] = source[ j ];
}
int main()
{
    int A[ SIZE ] = { 3, 5, 7, 2, 0 }, B[ SIZE ], C[ SIZE ];
    
    print_array( A, SIZE );
    print_array( B, SIZE );
    copy_array( B, A, SIZE );
    print_array( B, SIZE );
    
    print_array( C, SIZE );
    copy_array_reverse( C, B, SIZE );
    print_array( C, SIZE );
    
    copy_array( C, A, 2 ); // will copy only the first 2 elements from A to C
    print_array( C, SIZE );
    
    printf("\n\n");
    return 0;
}


// write a function which returns both min and max of an array
#include <stdio.h>
#define SIZE 5
void print_array( const int A[], int size ){
    int i;
    printf("\n\n");
    for( i = 0; i < size; i++ ) printf( "%d ", A[ i ] );
    printf("\n\n");
}
// assume unique elements and size > 1
void min_max( const int A[], int size, int Results[] ){
    int i;
    
    Results[ 0 ] = A[ 0 ] < A[ 1 ] ? A[ 0 ] : A[ 1 ];
    Results[ 1 ] = A[ 0 ] < A[ 1 ] ? A[ 1 ] : A[ 0 ];
    
    for( i = 2; i < size; i++ ){
        if( A[ i ] > Results[ 1 ] ) Results[ 1 ] = A[ i ];
        else if( A[ i ] < Results[ 0 ] ) Results[ 0 ] = A[ i ];
    }
}
int main()
{
    int A[ SIZE ] = { 10, 20, -30 }, B[ 2 ];
    
    print_array( A, SIZE );
    
    // call the function
    min_max( A, SIZE, B );
    printf( "Min is: %d, max is: %d.\n\n", B[ 0 ], B[ 1 ] );
    
    printf("\n\n");
    return 0;
}

// write a function which searches for a number in an array - return TRUE or FALSE
// write a function which counts a number in an array - return the count 
#include <stdio.h>
#define SIZE 5
#define TRUE 1
#define FALSE 0

void print_array( const int A[], int size ){
    int i;
    printf("\n\n");
    for( i = 0; i < size; i++ ) printf( "%d ", A[ i ] );
    printf("\n\n");
}
int search( int A[], int size, int n ){
    int i = 0;
    while( i < size ){
        if( A[ i ] == n ) return TRUE;
        i++;
    }
    return FALSE;
}
int count( int A[], int size, int n ){
    int i = 0, count = 0;
    while( i < size ){
        if( A[ i ] == n ) count++;
        i++;
    }
    return count;
}

int main(){
    int A[ SIZE ] = { 1, 5, 30, 40, 5 }, n = 5, x;
    
    if( search( A, SIZE, n ) == TRUE ) printf( "%d appears inside the array.\n", n );
    else printf( "%d does not appear inside the array.\n", n );
    
    x = count( A, SIZE, n );
    if( x ){
        printf( "%d appears inside the array.\n", n );
        printf( "%d appears %d times inside the array.\n", n, x );
    }
    else printf( "%d does not appear inside the array.\n", n );
}

// write a fuction to check whether an array is symmetric or not
#include <stdio.h>
#define SIZE 6
#define TRUE 1
#define FALSE 0

int is_symmetric( int A[], int size ){
    int left = 0, right = size - 1;
    while( left < right ){
        if( A[ left ] != A[ right ] ) return FALSE;
        left++;
        right--;
    }
    return TRUE;
}

int main(){
    int A[ SIZE ] = { 1, 5, 30, 30, 5, 1 };
    
    if( is_symmetric( A, SIZE ) == TRUE ) printf( "symmetric.\n" );
    else printf( "not symmetric.\n" );
    
}



// write a function which copies the contents of an array inside another
// in this order: negatives on the left, 0's in the middle and positives on the right
#include <stdio.h>
#define SIZE 9
void print_array( const int A[], int size ){
    int i;
    printf("\n\n");
    for( i = 0; i < size; i++ ) printf( "%d ", A[ i ] );
    printf("\n\n");
}
void special_copy( int dest[], const int source[], int size ){
    int i = 0, left = 0, right = size - 1;
    while( i < size ){
        if( source[ i ] < 0 ){
            dest[ left ] = source[ i ];
            left++;
        }
        else{
            if( source[ i ] > 0 ){
                dest[ right ] = source[ i ];
                right--;
            }
        }
        i++;
    }
}

int main(){
    int A[ SIZE ] = { 1, 5, -30, -30, 0, 0, 8, 9, -10 }, B[ SIZE ] = { 0 };
    
    special_copy( B, A, SIZE );
    print_array( B, SIZE );
    
}