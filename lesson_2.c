#include <reg52.h>

typedef unsigned int u16;

sbit bizz = P2^5;

//延时函数 branch 测试

void delay(u16 time)
{
    while(time--){}
}

//炸弹声音函数
void boom()
{   
    unsigned int boomtime = 250;
    while(boomtime)
    {
        bizz = 0;
        delay(20);
        bizz = 1;
        delay(20);
        boomtime = boomtime - 1;
    }
}

void main()
{
    unsigned int boomtimea = 15;
    unsigned int boomtimeb = 25;
    unsigned int boomtimec = 35;
	unsigned int boomtime0 = 10;
    while (1)
    {
        while (boomtime0 > 0)
		{
			boom();
			delay(60000);
			delay(60000);
			boomtime0 = boomtime0 - 1;
		}
        while (boomtimea > 0)
        {
            boom();
            delay(60000);
            boomtimea = boomtimea - 1;
        }
        
        while (boomtimeb > 0)
        {
            boom();
            delay(25000);
            boomtimeb = boomtimeb - 1;
        }
        
        while (boomtimec > 0)
        {
            boom();
            delay(10000);
            boomtimec = boomtimec - 1;
        }

        while (1)
        {
            boom();
        }
        
    }
}
