#include <stdio.h>

int main()
{
	//	初始化
	long double price = 0;
	long double bill = 0;
	//	读入金额和票面
	printf("请输入金额：");
	scanf("%Lf", &price);
	printf("请输入票面：");
	scanf("%Lf", &bill);
	//	计算找零
	if ( bill >= price ) {
		printf("应该找您：%Lf\n", bill - price);
	}
	else {printf("再挣点钱吧");
	} 

	return 0;
}
