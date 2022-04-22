#include<stdio.h>
#include<stdlib.h>
#define CLOCKWISE 0				//车辆行驶的方向，0为顺时针 
#define ANTICLOKWISE 1			//车辆行驶的方向，1为逆时针
#define SPEED 1					//车辆行驶速度，默认为1
#define waitingTime 1			//到站的停止时间 
typedef int direction;			//车辆行驶方向
typedef int position;			//站点的位置
 
typedef struct {
	direction dir;				//当前车辆行驶方向
	position pos;				//当前车辆的位置（对应轨道位置的下标） 
//	int state;					//当前车辆的行驶状态（运行或定于） 
}Bus, *PtrBus;

typedef struct {				//命令队列 
	char* cmdtype;				//指令类型（顺时针，逆时针，车上指令）
	position pos;				//命令指向的站点
}Queue, *PtrQueue;
typedef struct {				//记录队列的状态 
	PtrQueue head;				//命令队列头指针 
	PtrQueue rear;				//命令队列尾指针
//	int wcmd_num;				//等待执行命令的数量
//	int acmd_num;				//已经完成的命令的数量
//  int wtime;					//最大等待时间 
}QueueList, *PtrQueueList;

/*读完初始化数据文件后创建三个数组，分别存放clockwise命令， counterclockwise命令，
target命令 
