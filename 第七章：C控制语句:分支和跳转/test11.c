/*
ABC Mail Order Groceryc朝鲜蓟的售价1.25美元/磅，甜菜的售价是0.65美元/磅，胡萝卜的售价是0.89美元/磅。
在添加运输费用之前，他们为100美元的订单提供5%的打折优惠。对5磅或以下的定单收取3.50美元的运输和装卸费用；
超过5磅而不足20的定单收取10.00美元的运输和装卸费用；20磅或以上的运输，在8美元基础上每磅加收0.1美元。编写程序，
在循环中使用switch语句，以便对输入a的响应是让用户输入所需的朝鲜蓟磅数，b为甜菜的磅数，c为胡萝卜的磅数，而q允许
用户退出订购过程。然后程序计算总费用、折扣和运输费用（如果有运输费的话），以及总数。随后程序应该显示所有的购买信息：
每磅的费用、订购的磅数、该订单每种蔬菜的费用、订单的总费用、折扣，如果有的话加上运输费用，以及所有费用的总数。
*/
#include <stdio.h>
#define ARTICHOKE	1.25
#define BEET		0.65
#define CARROT 		0.89
#define DISCOUNT_LIMIT 	100
#define DISCOUNT_RATE 	0.05
#define FREIGHT_LIMIT1 	5
#define FREIGHT_FEE1 	3.5
#define FREIGHT_LIMIT2 	20
#define FREIGHT_FEE2 	10
#define FREIGHT_FEE3	8
#define FREIGHT_RATE	0.1

int main(){
	char ch;
	double artichoke, beet, carrot;
	double sum;
	double discount;
	double freight;

	printf("Please select your vegetables:\n");
	printf("a)artichoke:$1.25/p	b)beet:$0.65/p	    c)carrot:$0.89/p	  q)to quit\n");
	while((ch = getchar()) != 'q'){
		switch(ch){
			case 'a':
				printf("How many pounds do you want?\n");
				scanf("%lf", &artichoke);
				printf("Please select your vegetables:\n");
				printf("a)artichoke:$1.25/p     b)beet:$0.65/p      c)carrot:$0.89/p      q)to quit\n");
				continue;
			case 'b':
				printf("How many pounds do you want?\n");
				scanf("%lf", &beet);
				printf("Please select your vegetables:\n");
				printf("a)artichoke:$1.25/p     b)beet:$0.65/p      c)carrot:$0.89/p      q)to quit\n");
				continue;
			case 'c':
				printf("How many pounds do you want?\n");
				scanf("%lf", &carrot);
				printf("Please select your vegetables:\n");
				printf("a)artichoke:$1.25/p     b)beet:$0.65/p      c)carrot:$0.89/p      q)to quit\n");
				continue;
			default:
				break;
		}
	}
	
	printf("%10s%10s%10s%10s\n"," ", "artichoke", "beet", "carrot");
	printf("%10s%10.2lf%10.2lf%10.2lf\n", "price", ARTICHOKE, BEET, CARROT);
	printf("%10s%10.2lf%10.2lf%10.2lf\n", "pound", artichoke, beet, carrot);
	printf("%10s%10.2lf%10.2lf%10.2lf\n", "charge", ARTICHOKE*artichoke, BEET*beet, CARROT*carrot);
	
	sum = ARTICHOKE*artichoke + BEET*beet + CARROT*carrot;
	if(sum > DISCOUNT_LIMIT)
		discount = sum * DISCOUNT_RATE;
	else
		discount = 0;
	printf("Discount is %.2lf.\n", discount);
	
	if(artichoke + beet + carrot <= FREIGHT_LIMIT1)
		freight = FREIGHT_FEE1;
	else if (artichoke + beet + carrot < FREIGHT_LIMIT2)
		freight = FREIGHT_FEE2;
	else
		freight = FREIGHT_FEE3 + (artichoke + beet + carrot)*FREIGHT_RATE;
	
	printf("Freight is %.2lf.\n", freight);
	sum = sum - discount + freight;
	printf("Sum is %.2lf.\n", sum);
	return 0;
}
