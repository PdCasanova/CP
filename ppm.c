/* ---------------------------- */
/* Jorge Filipe Custodio        */
/* jorge.custodio@di.fct.unl.pt */
/* DI-FCT-UNL 2011              */
/* ---------------------------- */

#include "ppm.h"

void output_ppm(char *filename, char *file_colormap, unsigned char *buffer, int width, int height, int max)
{
  	int i;
  	FILE *f;
  	FILE *f2;
  	f = fopen(filename,"w");
  	assert(f);
  	f2 = fopen(file_colormap,"r");
  	assert(f2);
  	for (i=0; i<SOURCE_COLORS; i++)
    	fscanf(f2,"%d %d %d\n",&r[i],&g[i],&b[i]);
  	fprintf(f,"P6\n");
  	fprintf(f,"%d %d\n",width,height);
  	fprintf(f,"%d\n",max);
  	for(i=0; i<width*height; i++)
   	{
    	fputc(r[(int)buffer[i]],f);
		fputc(g[(int)buffer[i]],f);
		fputc(b[(int)buffer[i]],f);
    }
  	fclose(f);
  	fclose(f2);
}
