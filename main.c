#include <stdio.h>
#include <stdlib.h>

const int MAX_CASH = 10000;
const int MAX_NUMBER = 10;
const int COKE = 1500;
const int CIDER = 1400;
const int FANTA = 1300;

//���Ǳ� ���� ����ü ����
struct machine_info{

    int coke; int cider; int panta; int cash;
    int number; int total; int change;
};

typedef struct machine_info MACHINE;

void input_price(MACHINE *machine);

int total_cash = 0;

int main()
{
    int flag = 0;
    printf("���� �� �ݾ� : ");
    scanf("%d", &total_cash);

    //�ִ� �Է� �ݾ�
    MACHINE machine(MAX_CASH);

    while(!flag){

        printf("1.�޴�����       \t");
        switch(select){
        case 1:
            printf("�ݶ� �����߽��ϴ�.\n");
            getchar();
            getchar();
            system("cls");
            break;
        case 2:
            printf("���̴ٸ� �����߽��ϴ�.\n");
            getchar();
            getchar();
            system("cls");
            break;
        case 3:
            printf("ȯŸ�� �����߽��ϴ�.\n");
            getchar();
            getchar();
            system("cls");
            break;
            default:printf("�ٽ� ���ּ���.\n");
       }//end of while
    }
    printf("�޴����� ���� �Ǿ���\n.");
    return 0;
}
        printf("2.��������       \t");
        printf("3.�� �ݾ����    \n");
        printf("4.�Ž����� ���  \t");
        printf("5.ȭ���ʱ�ȭ     \t");
        printf("6.������         \n");

        switch(menu){
    case 1:
        select_number(machine);
        printf("���� �Է� �Ϸ��߽��ϴ�.");
        getchar();
        getchar();
        system("cls");
        break;
    case 2:
        total_money(machine);
        getchar();
        getchar();
        system("cls");
        break;
    case 3:
        change_money(machine);
        getchar();
        getchar();
        system("cls");
        break;
    case 4:
        system("cls");
        break;
    case 5:
        flag =1; printf("���� ������.\n");
        break;
        default: printf("�ٽ� �Է����ּ���.\n");
        }//end of while
    }
    printf("���Ǳ� ���� �Ǿ���.");
    return 0;
}
void input_price(MACHINE *machine){
    int price = 0;
        printf("�ݾ��� �Է����ּ��� : ");
        scanf("%d", &price);

	if(price<MAX_CASH){
        printf("�Է¿Ϸ�.");
	}else{ ("�ٽ��Է����ּ���");
	}
	return 0;
}
void choice_menu(MACHINE *machine){

	int choice_flag = 0;
	int i = 0;
	int coke = 1500;
	int cider = 1400;
	int fanta = 1300;

        printf("���� �� �޴� : ");
        scanf("%s", &menu[i]);

	//ã�� �޴��� ���� ��� find_flag :0
	if(!choice_flag)
        printf("ã�� �޴��� �����ϴ�.\n")
		return;
}
void input_number(MACHINE *machine){
	int choice_number = 0;
	int number = 0;
	int i = 0;

        printf("���� �� ���� : ");
        scanf("%d", &number[i]);

	for(i=0;i<MAX_NUMBER;i++){
	if(i >  MAX_NUMBER){
        printf("�����Է¿Ϸ�");
        break;
	}else{
        printf("�ٽ��Է����ּ���.");
        continue;
	}
	return;
}
void print_total(MACINE *machine, int result){
	int result = 0;
    int i = 0;
	result[i] = menu[i]*number[i];
	printf("�� �ݾ��� : %d",result[i]);
	return;
}
void print_change(MACHINE *machine){
    int i = 0;

    for(i=0;i<total_cash;i++){
        printf("%d\n",total_cash);
    }
    return;
}
