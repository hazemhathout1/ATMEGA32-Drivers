#ifndef HSSD_PRIVATE_H
#define HSSD_PRIVATE_H

#define COM_CATHODE		1
#define COM_ANODE		2

u8 SSD_CommCathArr[10]={
		0b00111111, //Zero
		0b00000110, //One
		0b01011011, //Two
		0b01001111, //Three
		0b01100110, //Four
		0b01101101, //Five
		0b01111101, //Six
		0b00000111, //Seven
		0b11111111, //Eight
		0b01101111  //Nine
};

u8 SSD_CommAnodeArr[10]={
		~0b00111111, //Zero
		~0b00000110, //One
		~0b01011011, //Two
		~0b01001111, //Three
		~0b01100110, //Four
		~0b01101101, //Five
		~0b01111101, //Six
		~0b00000111, //Seven
		~0b11111111, //Eight
		~0b01101111  //Nine
};






#endif
