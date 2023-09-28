// * ===========================================================================
// *                      Author      : Mohamed Reda Mohamed
// *                      Date        : 7/9/2023
// *                      Version     : 0.1
// *                      File name   : BIT_MATH.h
// * ===========================================================================

#ifndef BIT_MATH_H_                     // *BIT_MATH_H_

    #define BIT_MATH_H_

    #define SET_BIT(REG, BIT_NUM)       (REG |= (1 << BIT_NUM))
    #define CLR_BIT(REG, BIT_NUM)       (REG &= ~(1 << BIT_NUM))
    #define TGL_BIT(REG, BIT_NUM)       (REG ^= (1 << BIT_NUM))
    #define GET_BIT(REG, BIT_NUM)       ((REG & (1 << BIT_NUM)) >> BIT_NUM)

#endif    