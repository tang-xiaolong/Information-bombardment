/*
			2016��12��21��12:34:21
			������ģ���˼��̵��������ճ���ͷ��ͣ�		
*/

#include <Windows.h>
#include <stdio.h>
int main()
{
	int i = 0,count;		//count�����Ҫ������Ϣ����
	while(1)		
	{
		printf("��Ҫ���͵���Ϣ���ƺã��򿪳���������Ҫ���͵�����������2�����ڵ��QQ���촰�ڼ���.\n\n");
		printf("���������뷢�͵���Ϣ������");
		scanf("%d",&count);
		Sleep(2000);	//ͣ�����룬�����л�����
		for(i = 0;i < count;i++)
		{
			keybd_event(0x11,0,0,0);			//0x11��ctrl��  0x0D��enter��		0x56�� V ����  ������16���Ʊ�ʾ��	������������0��ʾ���£�2��ʾ�ɿ���
			keybd_event(0x56,0,0,0);			
			keybd_event(0x11,0,2,0);
			keybd_event(0x56,0,2,0);
			keybd_event(0x11,0,0,0);
			keybd_event(0x0D,0,0,0);
			keybd_event(0x11,0,2,0);
			keybd_event(0x0D,0,2,0);
		//	Sleep(1000);		//�����������﷢����Ϣ�ļ�϶��
		}
		printf("%d����Ϣ��˳������\n",count);
		Sleep(3000);		
		system("cls");	//����
	}
}