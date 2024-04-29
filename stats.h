#ifndef _STATS_H_
#define _STATS_H_

/*Libraries*/
#include <math.h>
#include <string.h>

/*Prototypes*/
float mean(int *lst, int len);
int mode(int *lst, int len);
float median(int *lst, int len);

#endif /*stats.h*/