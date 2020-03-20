/*
 * sintbl.h
 *
 * Created: 2017/03/20 23:16:24
 *  Author: Keiji
 */ 


#ifndef SINTBL_H_
#define SINTBL_H_

const signed char sin_tbl[64] PROGMEM ={  
   30,30,31,30,30,29,28,27,25,23,21,19,17,14,11,8,6,3,0,-3,-6,-8,-11,-14,-17,-19,-21,-23,-25,-27,-28,-29,-30,-30,-31,-30,-30,-29,-28,-27,-25,-23,-21,-19,-17,-14,-11,-8,-6,-3, 0,3,6,8,11,14,17,19,21,23,25,27,28,29, 
 };

// tri table
const signed char tri_tbl[64] PROGMEM ={  
           27, 29, 31, 29, 27, 25, 23, 21, 19, 17, 15, 14, 12, 10,  8,  6,  4,  2,  0, -2, -4, -6, -8,-10,-12,-14,-16,-17,-19,-21,-23,-25,-27,-29,-31,-29,-27,-25,-23,-21,-19,-17,-15,-14,-12,-10, -8, -6, -4, -2, 0,  2,  4,  6,  8, 10, 12, 14, 16, 17, 19, 21, 23, 25, 
   };

// saw table
const signed char saw_tbl[64] PROGMEM ={  
            0,  1,  2,  3,  4,  5,  6,  7,  8,  9, 10, 11, 12, 13, 14, 15, 16, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30,-31,-30,-29,-28,-27,-26,-25,-24,-23,-22,-21,-20,-19,-18,-17,-16,-15,-15,-14,-13,-12,-11,-10, -9, -8, -7, -6, -5, -4, -3, -2, -1,
 };

#endif /* SINTBL_H_ */





