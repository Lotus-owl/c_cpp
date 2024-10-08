#include <stdio.h>
#define BOLD		(0x01 << 0	)	// 0x01
#define ITALIC	(0x01 << 1)	// 0x02
#define SHADOW	(0x01 << 2)	// 0x04
#define UL			(0x01 << 3)	// 0x08
int main(void)
{
	unsigned char attr;
	
	attr = attr ^ attr;		// attr = 0;
	attr = attr | BOLD;
	attr = attr | (ITALIC + SHADOW);
	attr = attr & ~ BOLD;
	
	printf("attr: 0x%02x\n", attr);		// (int)attr;
	return 0;
}
