#include<stdio.h>
#include<stdlib.h>
#define CLOCKWISE 0				//������ʻ�ķ���0Ϊ˳ʱ�� 
#define ANTICLOKWISE 1			//������ʻ�ķ���1Ϊ��ʱ��
#define SPEED 1					//������ʻ�ٶȣ�Ĭ��Ϊ1
#define waitingTime 1			//��վ��ֹͣʱ�� 
typedef int direction;			//������ʻ����
typedef int position;			//վ���λ��
 
typedef struct {
	direction dir;				//��ǰ������ʻ����
	position pos;				//��ǰ������λ�ã���Ӧ���λ�õ��±꣩ 
//	int state;					//��ǰ��������ʻ״̬�����л��ڣ� 
}Bus, *PtrBus;

typedef struct {				//������� 
	char* cmdtype;				//ָ�����ͣ�˳ʱ�룬��ʱ�룬����ָ�
	position pos;				//����ָ���վ��
}Queue, *PtrQueue;
typedef struct {				//��¼���е�״̬ 
	PtrQueue head;				//�������ͷָ�� 
	PtrQueue rear;				//�������βָ��
//	int wcmd_num;				//�ȴ�ִ�����������
//	int acmd_num;				//�Ѿ���ɵ����������
//  int wtime;					//���ȴ�ʱ�� 
}QueueList, *PtrQueueList;

/*�����ʼ�������ļ��󴴽��������飬�ֱ���clockwise��� counterclockwise���
target���� 
