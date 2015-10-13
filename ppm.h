/* ---------------------------- */
/* Jorge Filipe Custodio        */
/* jorge.custodio@di.fct.unl.pt */
/* DI-FCT-UNL 2011              */
/* ---------------------------- */

/* Convert 8 bit pixels to RGB using the
   random function to generate the colors */

#ifndef __OUTPUT_PPM__
#define __OUTPUT_PPM__

#include "ppm.h"
#include <assert.h>
#include <stdlib.h>
#include <stdio.h>

#define SOURCE_COLORS 255

unsigned int r[SOURCE_COLORS];
unsigned int g[SOURCE_COLORS];
unsigned int b[SOURCE_COLORS];

void output_ppm(char *filename, char *file_colormap, unsigned char *buffer, int width, int height, int max);

#endif
