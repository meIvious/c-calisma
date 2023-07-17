// write a function to check whether an array is symmetric or not
#include <stdio.h>
int is_symmetric( int A[], int size ){
    // 0 1 2 3
    int i = 0, j = size - 1;
    for(; i < j; i++, j-- ){
        if( A[ i ] != A[ j ] ) return 0;
    }
    return 1;
}
int main(){
    int A[] = { 1, 3, 3, 5, 2, 1 }, size;
    size = sizeof( A ) / sizeof( int );
    if( is_symmetric( A, size ) ) printf( "Symmetric.\n" );
    else printf( "Not symmetric.\n" );
   
    if( is_symmetric( &A[ size / 2 ], size / 2 ) ) printf( "Second half is symmetric.\n" );
    else printf( "Second half is not symmetric.\n" );
    return 0;
}



// read midterm and final exam grades in a 2-D array
// write the overall grades in another parallel array
#include <stdio.h>
int main(){
    int exams[ 3 ][ 2 ] = { { 50, 60 }, { 70, 60 }, { 57, 100 } };
    double overall[ 3 ];
    int i;
   
    for( i = 0; i < 3; i++ ) overall[ i ] = 0.4 * exams[ i ][ 0 ]
                                            + 0.6 * exams[ i ][ 1 ];
                                           
    for( i = 0; i < 3; i++ )
        printf( "Student %d, mid: %d, final: %d, overall: %f.\n", i, exams[ i ][ 0 ]
                            , exams[ i ][ 1 ], overall[ i ] );
   
   
    return 0;
}










// 11.15 Monday
// a pointer is a variable which can store the address of another variable
// ex: size of an int pointer is same a size of a double pnt, or size of a char
// because all stores an address of a cell in main memory
// only zero can be assigned as a constant value to a pointer - NULL POINTER
//call by reference with functions - parameters accepting addresses
void foo( int*, int* );
void print_array( int *first, int *last ){
    for( ; first <= last; first++ ) printf( "%d\n", *first );
}
void print_array_reverse( int *first, int *last ){
    int i, size = last-first+1;
    for( i = 0; i < size; i++ ) printf( "%d\n", *(last-i) );
}
#include <stdio.h>
int main(){
    int A[ 5 ] = { 1, 2, 3, 4, 5 }, i;
    // what happens actualy in the background when you declare an array:
    // a block of memory is allocated for you (of enough size to hold all elements)
    // a constant pointer (in the name of your array) is declared holding the
    // address of the first element of that block
    // const int *A = [address of first cell - &A[0] ]
    int a = 10, b = 20, *p, *q, *s1, *s2;
    double x = 3.5, *r;
    int **pp;
   
    p = &a; q = &b; r = &x;
   
    pp = &q;
   
    // A = &A[ 2 ]; - A is constant, not allowed
    s1 = A; // s1 = &A[ 0 ];
    s2 = A + 2;// s2 = s1 + 2;    s2 = &A[ 2 ];
    p = s1 + *s2;
    printf( "p[ 1 ]: %d\n", p[ 1 ] );
   
    //printf( "Enter a new value for a: " ); scanf( "%d", p );
    printf( "a: %d, b: %d, x: %f, p: %p, r: %p\n", *p, *q, *r, p, r );
   
    *q = 25; // b = 25;
    *r = 3.6;
   
    *pp = p; //q = p; // q = &a;
    *q = 25; // a = 25;
   
    printf( "a: %d, b: %d, x: %f, p: %p, r: %p\n", a, b, *r, p, r );
   
    for( i = 0; i < 5; i++ ) printf( "%d\n", s1[ i ] );
    printf( "Difference s2(%p)-s1(%p): %ld\n", s2, s1, s2-s1 );
   
    printf( "a: %d, b: %d\n", a, b );
    foo( &a, &b );
    printf( "a: %d, b: %d\n", a, b );
   
    print_array( A, A + 4 );
    printf( "\n\n" );
    print_array( A + 2, A + 4 );
    printf( "\n\n" );
    print_array( A, A + 2 );
   
    print_array_reverse( A, A + 4 );
}
void foo( int* a, int* b ){
    // *a + 1 is totally different than *(a+1)
    // *a + 1 gets the value pointed by a and adds 1 to that
    // *(a+1) - a+1 is a new pointer, pointing to the next integer pointed by a
   
    *a = *a + 1; *b = *b + 1;
}










// 11.17 Wednesday

// Functions can return pointers also
// Write a function which returns a pointer to the first occurence of n in A[]
#include <stdio.h>
// {  5    10   10   30   }
//                   q      p
int* f( int *p, int *q, int n ){
    while( p <= q ){
        if( *p == n ) return p;
        p++;
    }
    return 0;
}
// count n in A, using function f
int count_with_f( int *p, int *q, int n ){
    int count = 0, *found;
    found = f( p, q, n );
    while( found ){
        count++;
        found = f( found + 1, q, n );
    }
    return count;
}
// count n in A
int count_normal( int A[], int size, int n ){
    int *p = A + size - 1, count = 0;
    while( p >= A ){
        if( *p == n ) count++;
        p--;
    }
    return count;
}

int main(){
    int A[ 5 ] = { 10, 10, 10, 10, 10 }, n = 10;
    printf( "The index of the first occurence of %d is: %ld\n",
        n, f( A, A + 4, n ) - A );
    printf( "%d appears %d times in A\n", n, count_with_f( A, A + 4, n ) );
    printf( "%d appears %d times in first half of A\n",
        n, count_with_f( A, A + 1, n ) );
    printf( "%d appears %d times in second half of A\n",
        n, count_with_f( A + 3, A + 4, n ) );
    printf( "%d appears %d times in A\n", n, count_normal( A, 5, n ) );
}








// 11.22 Monday
#include <stdio.h>
int main(){
    char month[12][10] = { "January", "February", "March", "April", "May",
        "June", "July", "August", "September", "October", "November", "December" };
    int i, j;
    /*
    for( i = 0; i < 12; i++ ){
        //for( j = 0; month[ i ][ j ]; j++ )
        //for( j = 0; month[ i ][ j ] != 0; j++ )
        for( j = 0; month[ i ][ j ] != '\0'; j++ ){
            printf( "%c", month[ i ][ j ] );
        }
        printf( "\n" );
    }
    */
   
    for( i = 0; i < 12; i++ ){
        month[ i ][ 2 ] = 0;
    }
   
    for( i = 0; i < 12; i++ ){
        printf( "%s*\n", month[ i ] );
    }
}


#include <stdio.h>
// strlen in string.h
/*
int string_length( char str[] ){
    int i = 0;
    while( str[ i ] ) i++;
    return i;
}
*/
int string_length( char *p ){
    char *q = p;
    while( *q ) q++;
    return q - p;
}
// strcpy in string.h
void string_copy( char *dest, char *source ){
    while( *source != 0 ){
        //dest[ 0 ] = source[ 0 ];
        *dest++ = *source++;
    }
    *dest = 0;
}
int main(){
    char str[ 50 ] = "C course";
    char str2[ 50 ];
    char *p;
    p = str;
    printf( "Length of \"%s\" is: %d.\nEnter new: ", str, string_length( str ) );
    scanf( "%s", str );
    printf( "Length of \"%s\" is: %d.\n", str, string_length( str ) );
   
    string_copy( str2, str + 2 );
    printf( "str2: \"%s\"\n", str2 );
}