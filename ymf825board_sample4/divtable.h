

/* dev 12 and mod table */
/*
const char div12mod[128] PROGMEM = {
0x00,0x01,0x02,0x03,0x04,0x05,0x06,0x07,0x08,0x09,0x0a,0x0b,0x10,0x11,0x12,0x13,
0x14,0x15,0x16,0x17,0x18,0x19,0x1a,0x1b,0x20,0x21,0x22,0x23,0x24,0x25,0x26,0x27,
0x28,0x29,0x2a,0x2b,0x30,0x31,0x32,0x33,0x34,0x35,0x36,0x37,0x38,0x39,0x3a,0x3b,
0x40,0x41,0x42,0x43,0x44,0x45,0x46,0x47,0x48,0x49,0x4a,0x4b,0x50,0x51,0x52,0x53,
0x54,0x55,0x56,0x57,0x58,0x59,0x5a,0x5b,0x60,0x61,0x62,0x63,0x64,0x65,0x66,0x67,
0x68,0x69,0x6a,0x6b,0x70,0x71,0x72,0x73,0x74,0x75,0x76,0x77,0x78,0x79,0x7a,0x7b,
0x80,0x81,0x82,0x83,0x84,0x85,0x86,0x87,0x88,0x89,0x8a,0x8b,0x90,0x91,0x92,0x93,
0x94,0x95,0x96,0x97,0x98,0x99,0x9a,0x9b,0xa0,0xa1,0xa2,0xa3,0xa4,0xa5,0xa6	
};
*/

const char divtbl[32][32] PROGMEM = {
	{ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 },
	{ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 },
	{ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2 },
	{ 0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,2,2,2,2,2,2,2,2,2,2,3 },
	{ 0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,2,2,2,2,2,2,2,2,3,3,3,3,3,3,3,4 },
	{ 0,0,0,0,0,0,0,1,1,1,1,1,1,2,2,2,2,2,2,3,3,3,3,3,3,4,4,4,4,4,4,5 },
	{ 0,0,0,0,0,0,1,1,1,1,1,2,2,2,2,2,3,3,3,3,3,4,4,4,4,4,5,5,5,5,5,6 },
	{ 0,0,0,0,0,1,1,1,1,2,2,2,2,2,3,3,3,3,4,4,4,4,4,5,5,5,5,6,6,6,6,7 },
	{ 0,0,0,0,1,1,1,1,2,2,2,2,3,3,3,3,4,4,4,4,5,5,5,5,6,6,6,6,7,7,7,8 },
	{ 0,0,0,0,1,1,1,2,2,2,2,3,3,3,4,4,4,4,5,5,5,6,6,6,6,7,7,7,8,8,8,9 },
	{ 0,0,0,0,1,1,1,2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,9,9,9,10 },
	{ 0,0,0,1,1,1,2,2,2,3,3,3,4,4,4,5,5,6,6,6,7,7,7,8,8,8,9,9,9,10,10,11 },
	{ 0,0,0,1,1,1,2,2,3,3,3,4,4,5,5,5,6,6,6,7,7,8,8,8,9,9,10,10,10,11,11,12 },
	{ 0,0,0,1,1,2,2,2,3,3,4,4,5,5,5,6,6,7,7,7,8,8,9,9,10,10,10,11,11,12,12,13 },
	{ 0,0,0,1,1,2,2,3,3,4,4,4,5,5,6,6,7,7,8,8,9,9,9,10,10,11,11,12,12,13,13,14 },
	{ 0,0,0,1,1,2,2,3,3,4,4,5,5,6,6,7,7,8,8,9,9,10,10,11,11,12,12,13,13,14,14,15 },
	{ 0,0,1,1,2,2,3,3,4,4,5,5,6,6,7,7,8,8,9,9,10,10,11,11,12,12,13,13,14,14,15,16 },
	{ 0,0,1,1,2,2,3,3,4,4,5,6,6,7,7,8,8,9,9,10,10,11,12,12,13,13,14,14,15,15,16,17 },
	{ 0,0,1,1,2,2,3,4,4,5,5,6,6,7,8,8,9,9,10,11,11,12,12,13,13,14,15,15,16,16,17,18 },
	{ 0,0,1,1,2,3,3,4,4,5,6,6,7,7,8,9,9,10,11,11,12,12,13,14,14,15,15,16,17,17,18,19 },
	{ 0,0,1,1,2,3,3,4,5,5,6,7,7,8,9,9,10,10,11,12,12,13,14,14,15,16,16,17,18,18,19,20 },
	{ 0,0,1,2,2,3,4,4,5,6,6,7,8,8,9,10,10,11,12,12,13,14,14,15,16,16,17,18,18,19,20,21 },
	{ 0,0,1,2,2,3,4,4,5,6,7,7,8,9,9,10,11,12,12,13,14,14,15,16,17,17,18,19,19,20,21,22 },
	{ 0,0,1,2,2,3,4,5,5,6,7,8,8,9,10,11,11,12,13,14,14,15,16,17,17,18,19,20,20,21,22,23 },
	{ 0,0,1,2,3,3,4,5,6,6,7,8,9,10,10,11,12,13,13,14,15,16,17,17,18,19,20,20,21,22,23,24 },
	{ 0,0,1,2,3,4,4,5,6,7,8,8,9,10,11,12,12,13,14,15,16,16,17,18,19,20,20,21,22,23,24,25 },
	{ 0,0,1,2,3,4,5,5,6,7,8,9,10,10,11,12,13,14,15,15,16,17,18,19,20,20,21,22,23,24,25,26 },
	{ 0,0,1,2,3,4,5,6,6,7,8,9,10,11,12,13,13,14,15,16,17,18,19,20,20,21,22,23,24,25,26,27 },
	{ 0,0,1,2,3,4,5,6,7,8,9,9,10,11,12,13,14,15,16,17,18,18,19,20,21,22,23,24,25,26,27,28 },
	{ 0,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29 },
	{ 0,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30 },
	{ 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31 },
};




