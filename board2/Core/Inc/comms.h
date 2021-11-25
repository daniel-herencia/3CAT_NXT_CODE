/*
 * comms.h
 *
 *  Created on: Nov 17, 2021
 *      Author: Daniel Herencia Ruiz
 */

#ifndef INC_COMMS_H_
#define INC_COMMS_H_

/*This are COMMS definitions*/
#define RF_FREQUENCY 868000000             // 868 MHz
#define TX_OUTPUT_POWER 22                 // 22 dBm
#define LORA_SPREADING_FACTOR 9            // [0x09 --> SF9]
#define LORA_BANDWIDTH 4                   // [0x04 --> 125 kHz]
#define LORA_CODING_RATE 1                 // [0x01 --> CR=4/5]
#define LORA_LOW_DATA_RATE_OPTIMIZE 0      // [0x00 --> LowDataRateOptimize OFF]
#define PREAMBLE LENGTH 8                  // CSS modulations usually have 8 preamble symbols
#define HEADER_TYPE 0                      // [0 --> Explicit header]
#define PAYLOAD_LENGTH 38                  // [38 bytes of payload information]
#define CRC_TYPE 0                         // [0 --> CRC OFF]
#define INVERT_IQ 0                        // [0 --> Standard IQ setup]
// Check CAD
// BufferBaseAddress
// LoRaSymbNumTimeout
#define TX_TIMEOUT_VALUE 13900             // In ms, maximum total time to send 40 packets and receive the ACK
#define BUFFER_SIZE 59                     //Payload size, in bytes.
/*End COMMS definitions*/





void configuration(void);

void tx_function(void);

void rx_function(void);

void packaging(void);



#endif /* INC_COMMS_H_ */
