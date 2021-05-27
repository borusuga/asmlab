//
//  prog5.h
//  lab5
//
//  Created by Alyona Borushnova on 27.05.2021.
//

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#ifndef prog5_h
#define prog5_h

unsigned char* dim(unsigned char * img, unsigned char * gray_img, int width, int height, int channels);
unsigned char* dim_asm(unsigned char * img, unsigned char * gray_img, int width, int height, int channels);

#endif /* prog5_h */
