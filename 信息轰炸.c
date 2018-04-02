/*
			2016年12月21日12:34:21
			本程序模拟了键盘的输出，（粘贴和发送）		
*/

#include <Windows.h>
#include <stdio.h>
int main()
{
	int i = 0,count;		//count存放想要发的消息条数
	while(1)		
	{
		printf("将要发送的信息复制好，打开程序输入想要发送的条数，并在2秒以内点进QQ聊天窗口即可.\n\n");
		printf("请输入您想发送的消息条数：");
		scanf("%d",&count);
		Sleep(2000);	//停顿两秒，方便切换界面
		for(i = 0;i < count;i++)
		{
			keybd_event(0x11,0,0,0);			//0x11是ctrl键  0x0D是enter键		0x56是 V 键。  必须用16进制表示。	第三个参数：0表示按下，2表示松开。
			keybd_event(0x56,0,0,0);			
			keybd_event(0x11,0,2,0);
			keybd_event(0x56,0,2,0);
			keybd_event(0x11,0,0,0);
			keybd_event(0x0D,0,0,0);
			keybd_event(0x11,0,2,0);
			keybd_event(0x0D,0,2,0);
		//	Sleep(1000);		//可以设置这里发送消息的间隙。
		}
		printf("%d条信息已顺利发出\n",count);
		Sleep(3000);		
		system("cls");	//清屏
	}
}