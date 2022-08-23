#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(int argc, char*argv[])
{
    int tieptucgame;
    printf("TRO CHOI DOAN SO.\n\n");
    do
    {
        int modechoi=0;
        printf("Lua chon choi.\n");
        printf("1. 1 Nguoi       2. 2 Nguoi.\n");
        scanf("%d",&modechoi);
        while((modechoi!=1)&&(modechoi!=2))
        {
            printf("Nhap sai.\n");
            scanf("%d", &modechoi);
        }
        if (modechoi==1)
        {
            long MAX=10, MIN=1; int sobimat,so,solandoan=0;
            srand(time(NULL));
            sobimat=(rand()%(MAX-MIN+1))+MIN;
            printf("Chon 1 so tu 1 den 10 nao.\n");
            while (so!=sobimat)
            {
                solandoan++;
                scanf("%d",&so);
                if (so<sobimat)
                    printf("Nho hon\n");
                else if (so>sobimat)
                    printf("Lon hon\n");
                else
                    printf("Dung roi, ban da doan dung sau %d lan doan\n\n\n",solandoan);
            }
        }
        else
        {
            int so, sobimat, solandoan=0;
            printf("Nguoi 1 nhap 1 so bat ky\n");
            scanf("%d",&sobimat);
            printf("Nguoi 2 hay doan nguoi 1 chon so gi.\n");
            while (so!=sobimat)
            {
                solandoan++;
                scanf("%d",&so);
                if (so<sobimat)
                    printf("Nho hon\n");
                else if (so>sobimat)
                    printf("Lon hon\n");
                else
                    printf("Dung roi, ban da doan dung sau %d lan doan\n\n\n",solandoan);
            }
        }
        printf("CHOI TIEP?\n");
        printf("1.Co     2.Khong.\n");
        scanf("%d",&tieptucgame);
        while ((tieptucgame!=1)&&(tieptucgame!=2))
        {
            if ((tieptucgame!=1)&&(tieptucgame!=2))
                printf("Nhap sai\n");
                scanf("%d", &tieptucgame);
        }
        if (tieptucgame == 2) break;
        printf("\n");
    }while (tieptucgame==1);
    return 0;
}

