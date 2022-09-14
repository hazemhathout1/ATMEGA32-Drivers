#ifndef HSSD_CONFIG_H
#define HSSD_CONFIG_H

//FOR Seg 0
/*Please select the port*/
/*
 * 01-PORT_A
 * 02-PORT_B
 * 03-PORT_C
 * 04-PORT_D
 * */
#define SSD0_PORT    PORT_A


/*
 * Please Select
 * 01-COM_CATHODE
 * 02-COM_ANODE
 *
 * */
#define SSD0_TYPE	COM_CATHODE
/*
 * Please Select:
01-Pin_0
02-Pin_1
03-Pin_2
04-Pin_3
05-Pin_4
06-Pin_5
07-Pin_6
08-Pin_7
*/
#define SSD0_SEG_A_PIN      Pin_0
#define SSD0_SEG_B_PIN      Pin_1
#define SSD0_SEG_C_PIN      Pin_2
#define SSD0_SEG_D_PIN      Pin_3
#define SSD0_SEG_E_PIN      Pin_4
#define SSD0_SEG_F_PIN      Pin_5
#define SSD0_SEG_G_PIN      Pin_6
#define SSD0_SEG_DOT_PIN    Pin_7


/*Please select the port*/
/*
 * 01-PORT_A
 * 02-PORT_B
 * 03-PORT_C
 * 04-PORT_D
 * */


//FOR Seg 0
#define SSD1_PORT    PORT_B
#define SSD1_TYPE	COM_CATHODE
/*
 * Please Select:
01-Pin_0
02-Pin_1
03-Pin_2
04-Pin_3
05-Pin_4
06-Pin_5
07-Pin_6
08-Pin_7
*/
#define SSD1_SEG_A_PIN      Pin_0
#define SSD1_SEG_B_PIN      Pin_1
#define SSD1_SEG_C_PIN      Pin_2
#define SSD1_SEG_D_PIN      Pin_3
#define SSD1_SEG_E_PIN      Pin_4
#define SSD1_SEG_F_PIN      Pin_5
#define SSD1_SEG_G_PIN      Pin_6
#define SSD1_SEG_DOT_PIN    Pin_7








#endif
