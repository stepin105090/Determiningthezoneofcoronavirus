
/**
* @file covid.h
* Determining the zone of a given area
*
*/


#ifndef __COVID_H__
#define __COVID_H__


#include <stdio.h>
#include <stdlib.h>
#include<string.h>


/**
*  writes the given data into a file
* @param[in] name of a person
* @param[in] district name
* @param[in] state name
*/

 char *write( char *name,char *district,char *state);


/**
*  reads the given data from the file
*/
 char *read(char *value, int index);



 #endif // COVID_H





