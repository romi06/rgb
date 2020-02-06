/* MIT License
 *
 * Copyright (c) 2019 - 2020 Andreas Merkle <web@blue-andi.de>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

/*******************************************************************************
    DESCRIPTION
*******************************************************************************/
/**
 * @brief  Utilitiy
 * @author Yann Le Glaz <yann_le@web.de>
 * 
 * @addtogroup utilities
 *
 * @{
 */

#ifndef __UTILITY_H__
#define __UTILITY_H__

/******************************************************************************
 * Compile Switches
 *****************************************************************************/

/******************************************************************************
 * Includes
 *****************************************************************************/
#include <stdint.h>
#include <WString.h>
#include <cerrno>

/******************************************************************************
 * Macros
 *****************************************************************************/

/** Get number of array elements. */
#define UTIL_ARRAY_NUM(__arr)   (sizeof(__arr) / sizeof((__arr)[0]))

/** Use it to mark not used function parameters. */
#define UTIL_NOT_USED(__var)    (void)(__var)

/******************************************************************************
 * Types and Classes
 *****************************************************************************/

/** Utilitiy functions */
namespace Util
{

/******************************************************************************
 * Functions
 *****************************************************************************/

/**
 * Convert a string to uint8_t. String can contain integer number in decimal
 * or hexadecimal format.
 * 
 * @param[in]   str     String
 * @param[out]  value   Converted value
 * 
 * @return If conversion fails, it will return false otherwise true.
 */
extern bool strToUInt8(const String& str, uint8_t& value);

/**
 * Convert a string to uint16_t. String can contain integer number in decimal
 * or hexadecimal format.
 * 
 * @param[in]   str     String
 * @param[out]  value   Converted value
 * 
 * @return If conversion fails, it will return false otherwise true.
 */
extern bool strToUInt16(const String& str, uint16_t& value);

/**
 * Convert a string to uint32_t. String can contain integer number in decimal
 * or hexadecimal format.
 * 
 * @param[in]   str     String
 * @param[out]  value   Converted value
 * 
 * @return If conversion fails, it will return false otherwise true.
 */
extern bool strToUInt32(const String& str, uint32_t& value);

}

#endif  /* __UTILITY_H__ */

/** @} */