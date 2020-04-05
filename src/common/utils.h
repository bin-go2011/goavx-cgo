#pragma once

#ifdef __cplusplus
extern "C" {
#endif        
 
void print_payload(const unsigned char *payload, int len);                                     /* Prints the TCP payload. */
void print_hex_ascii_line(const unsigned char *payload, int len, int offset);                  /* Prints in HEX. */

#ifdef __cplusplus
}
#endif