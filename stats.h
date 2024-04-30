#ifndef _STATS_H_
#define _STATS_H_

/*Libraries*/
#include <math.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*Prototypes*/
float mean(int *lst, int len);
int mode(int *lst, int len);
float median(int *lst, int len);
float weightedmean(int *lst1, int *lst2,int len);

#endif /*stats.h*/