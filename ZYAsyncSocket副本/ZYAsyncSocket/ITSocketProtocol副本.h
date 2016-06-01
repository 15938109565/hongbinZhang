//
//  ITSocketProtocol.h
//  IT0506SocketDemo
//
//  Created by student on 16/5/31.
//  Copyright © 2016年 zhanghongbin. All rights reserved.
//




//1.2因为socket 通讯需要通讯双发，即C/S C只要知道了S的IP和端口号就能通讯
#define HOST_IP @"127.0.0.1"
#define HOST_POST 8888

//统一数据类型
typedef int ITInt;
typedef double ITDouble;
typedef char ITChar;

#pragma pack(1)

typedef struct student{
    ITChar name[20];
    ITInt age;
    ITDouble money;
}STU;



#pragma options align=reset









