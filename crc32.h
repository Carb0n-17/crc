#ifndef CRC32_H
#define CRC32_H

/**
 *Name   : "CRC-32"
 *Width  : 32
 *Poly   : 04C11DB7
 *Init   : FFFFFFFF
 *RefIn  : True
 *RefOut : True
 *XorOut : FFFFFFFF
 *Check  : CBF43926
 */

#include <stdint.h>

uint32_t crc_init(void);
uint32_t crc_update(uint32_t crc, uint8_t *buffer, uint32_t length);
uint32_t crc_final(uint32_t crc);

#endif /* CRC32_H */
