//
//  image_editor.c
//  lab5
//
//  Created by Alyona Borushnova on 27.05.2021.
//

#include "prog5.h"
#include <math.h>

float max_of_two(float x, float y)
{
   return (x > y) ? x : y;
}

float max_of_three(float m, float n, float p)
{
   return max_of_two(max_of_two(m, n), p);
}

float min_of_two(float x, float y)
{
   return (x < y) ? x : y;
}

float min_of_three(float m, float n, float p)
{
   return max_of_two(min_of_two(m, n), p);
}

unsigned char* dim(unsigned char* img, unsigned char* gray_img, int width, int height, int channels)
{
    int img_size = width * height * channels;
    int gray_channels = channels == 4 ? 2 : 1;
    for(unsigned char *p = img, *pg = gray_img; p != img + img_size; p += channels, pg += gray_channels) {
        *pg = (*p*0.3 + *(p + 1)*0.59 + *(p + 2)*0.11);
        *pg = (max_of_three(*p, *(p+1), *(p + 2)) - min_of_three(*p, *(p+1), *(p + 2))) / 2;
        if(channels == 4) {
            *(pg + 1) = *(p + 3);
        }
    }
    return(gray_img);
}
