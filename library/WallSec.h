/*
 * WallSec.h
 *
 *  Created on: 14 Oct 2016
 *      Author: osboxes
 */

#ifndef _LIBRARY_WALLSEC_H_
#define _LIBRARY_WALLSEC_H_
#include <sys/time.h>
#include <time.h>

// 得到挂钟时间
static double getWallSec(){
	struct timeval tv;
	gettimeofday(&tv,NULL);
	return (tv.tv_sec + (double)tv.tv_usec/1000000);
}



#endif /* LIBRARY_WALLSEC_H_ */
