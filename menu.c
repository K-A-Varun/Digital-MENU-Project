#include <stdio.h>
int main()
{
    int option;
    int cost,i,idly,dosa,vada,poori,south,chic_biryani,mutt_biryani,chicken_curry,chicken_kabab,fish_kabab;
    int option2;
    printf("<--------WELCOME TO THE VARUN'S RESTAURANT----------->\n");

    do
    {
        printf("1 : Vegetarian\n2 : Non Vegetarian\n3 : Exit from menu to billing\n");
        printf("choose your option \n");
        scanf("%d",&option);
        

        switch(option)
        {
            case 1:
            do
            {
                printf("1 : Idly = 50/-\n2 : Dosa = 60/-\n3 : vada = 20/-\n4 : Poori sagu =70/-\n5 : South Indian Meals = 100/-\n6 : Exit from veg menu\n");
                printf("choose your option\n");
                scanf("%d",&option2);
        
           
            
                switch(option2)
                {
                    
                
                    case 1:
                    printf("you ordered Idly\n");
                    idly++;
                    break;

                    case 2:
                    printf("you ordered Dosa\n");
                    dosa++;
                    break;

                    case 3:            
                    printf("you ordered Vada\n");
                    vada++;
                    break;

                    case 4:
                    printf("you ordered Poori sagu\n");
                    poori++;
                    break;

                    case 5:
                    printf("you ordered South Indian Meals\n");
                    south++;
                    break;

                    case 6:
                    printf("exit from veg menu\n");
                    break;

                    default:
                    printf("item is not present\n");
                    break;
                }

            }while(option2>0&&option2<=5);

            break;

            case 2:
            do
            {
                printf("1 :Chicken Biryani = 150/-\n2 : mutton Biryani = 300/-\n3 : Chicken Curry = 200/-\n4 : Chicken Kabab = 100/-\n5 : Fish Kabab = 250/-\n6 : exit from nonveg menu\n");
                printf("choose your option\n");
                scanf("%d",&option2);
                
                switch(option2)
                {
                    
                
                    case 1:  
                    printf("you ordered Chicken Biryani\n");
                    chic_biryani++;
                    break;
                    

                    case 2:
                    printf("you ordered  mutton Biryani\n");
                    mutt_biryani++;
                    break;

                    case 3:
                    printf("you ordered Chicken Curry\n");
                    chicken_curry++;
                    break;

                    case 4:
                    printf("you ordered Chicken Kabab\n");
                    chicken_kabab++;
                    break;

                    case 5:
                    printf("you ordered Fish Kabab\n");
                    fish_kabab++;
                    break;

                    case 6:
                    printf("exit from nonveg menu\n");
                    break;

                    default:
                    printf("item is not present\n");
                    break;
                }


            }while(option2>0&&option2<=5);
            break;
         
        
        
            default :
            printf("Exit from menu for billing\n");
            break;
        }

    }while(option>=1&&option<=2);


        if(idly>0)
        printf("%d quantities * idly(50/-)= %d \n ",idly,idly*50);
        if(dosa>0)
        printf("%d quantities * dosa(60/-)= %d\n  ",dosa,dosa*60);
        if(vada>0)
        printf("%d quantities * vada(20/-)= %d \n ",vada,vada*20);
        if(poori>0)
        printf("%d quantities * poori(70/-)= %d \n ",poori,poori*70);
        if(south>0)
        printf("%d quantities * south(100/-)= %d\n  ",south,south*100);
        if(chic_biryani>0)
        printf("%d quantities * chicken biryani(150/-)= %d \n ",chic_biryani,chic_biryani*150);
        if(mutt_biryani>0)
        printf("%d quantities * mutton biryani(300/-)= %d \n ",mutt_biryani,mutt_biryani*300);
        if(chicken_curry>0)
        printf("%d quantities * chicken curry(200/-)= %d \n ",chicken_curry,chicken_curry*200);
        if(chicken_kabab>0)
        printf("%d quantities * chicken kabab(100/-)= %d \n ",chicken_kabab,chicken_kabab*100);
        if(fish_kabab>0)
        printf("%d quantities * fish kabab(250/-)= %d \n ",fish_kabab,fish_kabab*250);

        cost=(idly*50+
            dosa*60+vada*20+poori*70+south*100+chic_biryani*150+mutt_biryani*300+chicken_curry*200+chicken_kabab*100+fish_kabab*250);

        printf("the total cost of all items is %d/-\n",cost);
       

    
        

 //         printf("the cost of items is = %d/- \n",cost);
        printf("the GST is 18%% = %d/-\n",(18*cost)/100);
        printf("the total cost of items is = %d/-\n",cost+(18*cost)/100);
         return 0;
}