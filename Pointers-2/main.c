//
//  main.c
//  Pointers-2
//
//  Created by Kris Evans on 13/08/2012.
//  Copyright (c) 2012 Kris Evans. All rights reserved.
//  Shamelessly copied from code at http://theocacao.com/document.page/234 and then modified
//  with extra commenting for my own re-education
//
//  Output (on OS X Mountain Lion) should be:
//
//  value of number:  5
//  value of &number: 0x7fff5fbff84c
//  value of pointer: 0x7fff5fbff84c
//  value of pointer's _target_: 5

#include <stdio.h>

int main(int argc, const char * argv[])
{

    // declare an int variable and an int pointer variable
    int  number;
    int* pointer;
    
    // set a value for 'number'
    number = 5;
    
    // now link 'pointer' to 'number' by putting the 'addressof'
    // operator (&) in front of the number variable
    pointer = &number;
    
    // print values of number and pointer
    // note the %p marker is used for pointer and &number
    
    // Print the value of number
    printf( "value of number:  %i\n", number );
    
    // Print the address that number is stored at
    printf( "value of &number: %p\n", &number );
    
    // Print the address that number is stored at by way of the pointer
    printf( "value of pointer: %p\n", pointer );
    
    // print value of pointer's target (number) using
    // the asterisk (*) operator
    printf( "value of pointer's _target_: %i\n", *pointer );
    
}


