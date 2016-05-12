/*************************************************************************
 > File Name: EmbGW.h
 > Author: Hac
 > Mail: hac@zju.edu.cn
 > Created Time: Thu 12 May 2016 09:26:50 AM CST
 ************************************************************************/

/*
 * Macros
 */
#define MAXSERVERNUM 16
#define MAXSENSORNUM 4

#define BT          1
#define R430        2
#define BIN         3
#define HTTP        4


/*
 * Configuration
 */
unsigned int server_num = 0;
char server_name[MAXSERVERNUM][16];
char server_addr[MAXSERVERNUM][64]; // ip address or domain name of web server
unsigned int server_type[MAXSERVERNUM]; // BIN or HTTP

unsigned int sensor_num = 0;
char sensor_name[MAXSENSORNUM][16];
char sensor_dev[MAXSENSORNUM][32]; // path of serial devices
unsigned int sensor_type[MAXSENSORNUM]; // BlueTooth or Radio430
