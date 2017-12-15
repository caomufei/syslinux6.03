unsigned char syslinux_bootsect[] = {
	0xeb, 0x58, 0x90, 0x53, 0x59, 0x53, 0x4c, 0x49,
	0x4e, 0x55, 0x58, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0xfa, 0xfc, 0x31, 0xc9, 0x8e, 0xd1,
	0xbc, 0x76, 0x7b, 0x52, 0x06, 0x57, 0x1e, 0x56,
	0x8e, 0xc1, 0xb1, 0x26, 0xbf, 0x78, 0x7b, 0xf3,
	0xa5, 0x8e, 0xd9, 0xbb, 0x78, 0x00, 0x0f, 0xb4,
	0x37, 0x0f, 0xa0, 0x56, 0x20, 0xd2, 0x78, 0x1b,
	0x31, 0xc0, 0xb1, 0x06, 0x89, 0x3f, 0x89, 0x47,
	0x02, 0xf3, 0x64, 0xa5, 0x8a, 0x0e, 0x18, 0x7c,
	0x88, 0x4d, 0xf8, 0x50, 0x50, 0x50, 0x50, 0xcd,
	0x13, 0xeb, 0x62, 0x8b, 0x55, 0xaa, 0x8b, 0x75,
	0xa8, 0xc1, 0xee, 0x04, 0x01, 0xf2, 0x83, 0xfa,
	0x4f, 0x76, 0x31, 0x81, 0xfa, 0xb2, 0x07, 0x73,
	0x2b, 0xf6, 0x45, 0xb4, 0x7f, 0x75, 0x25, 0x38,
	0x4d, 0xb8, 0x74, 0x20, 0x66, 0x3d, 0x21, 0x47,
	0x50, 0x54, 0x75, 0x10, 0x80, 0x7d, 0xb8, 0xed,
	0x75, 0x0a, 0x66, 0xff, 0x75, 0xec, 0x66, 0xff,
	0x75, 0xe8, 0xeb, 0x0f, 0x51, 0x51, 0x66, 0xff,
	0x75, 0xbc, 0xeb, 0x07, 0x51, 0x51, 0x66, 0xff,
	0x36, 0x1c, 0x7c, 0xb4, 0x08, 0xe8, 0xe9, 0x00,
	0x72, 0x13, 0x20, 0xe4, 0x75, 0x0f, 0xc1, 0xea,
	0x08, 0x42, 0x89, 0x16, 0x1a, 0x7c, 0x83, 0xe1,
	0x3f, 0x89, 0x0e, 0x18, 0x7c, 0xfb, 0xbb, 0xaa,
	0x55, 0xb4, 0x41, 0xe8, 0xcb, 0x00, 0x72, 0x10,
	0x81, 0xfb, 0x55, 0xaa, 0x75, 0x0a, 0xf6, 0xc1,
	0x01, 0x74, 0x05, 0xc6, 0x06, 0x46, 0x7d, 0x00,
	0x66, 0xb8, 0xef, 0xbe, 0xad, 0xde, 0x66, 0xba,
	0xce, 0xfa, 0xed, 0xfe, 0xbb, 0x00, 0x80, 0xe8,
	0x0e, 0x00, 0x66, 0x81, 0x3e, 0x1c, 0x80, 0xf0,
	0x31, 0x81, 0x64, 0x75, 0x74, 0xe9, 0xf8, 0x02,
	0x66, 0x03, 0x06, 0x60, 0x7b, 0x66, 0x13, 0x16,
	0x64, 0x7b, 0xb9, 0x10, 0x00, 0xeb, 0x2b, 0x66,
	0x52, 0x66, 0x50, 0x06, 0x53, 0x6a, 0x01, 0x6a,
	0x10, 0x89, 0xe6, 0x66, 0x60, 0xb4, 0x42, 0xe8,
	0x77, 0x00, 0x66, 0x61, 0x8d, 0x64, 0x10, 0x72,
	0x01, 0xc3, 0x66, 0x60, 0x31, 0xc0, 0xe8, 0x68,
	0x00, 0x66, 0x61, 0xe2, 0xda, 0xc6, 0x06, 0x46,
	0x7d, 0x2b, 0x66, 0x60, 0x66, 0x0f, 0xb7, 0x36,
	0x18, 0x7c, 0x66, 0x0f, 0xb7, 0x3e, 0x1a, 0x7c,
	0x66, 0xf7, 0xf6, 0x31, 0xc9, 0x87, 0xca, 0x66,
	0xf7, 0xf7, 0x66, 0x3d, 0xff, 0x03, 0x00, 0x00,
	0x77, 0x17, 0xc0, 0xe4, 0x06, 0x41, 0x08, 0xe1,
	0x88, 0xc5, 0x88, 0xd6, 0xb8, 0x01, 0x02, 0xe8,
	0x2f, 0x00, 0x66, 0x61, 0x72, 0x01, 0xc3, 0xe2,
	0xc9, 0x31, 0xf6, 0x8e, 0xd6, 0xbc, 0x68, 0x7b,
	0x8e, 0xde, 0x66, 0x8f, 0x06, 0x78, 0x00, 0xbe,
	0xda, 0x7d, 0xac, 0x20, 0xc0, 0x74, 0x09, 0xb4,
	0x0e, 0xbb, 0x07, 0x00, 0xcd, 0x10, 0xeb, 0xf2,
	0x31, 0xc0, 0xcd, 0x16, 0xcd, 0x19, 0xf4, 0xeb,
	0xfd, 0x8a, 0x16, 0x74, 0x7b, 0x06, 0xcd, 0x13,
	0x07, 0xc3, 0x42, 0x6f, 0x6f, 0x74, 0x20, 0x65,
	0x72, 0x72, 0x6f, 0x72, 0x0d, 0x0a, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0xfe, 0x02, 0xb2, 0x3e, 0x18, 0x37, 0x55, 0xaa
};

const unsigned int syslinux_bootsect_len = 512;

const int syslinux_bootsect_mtime = 1513304847;