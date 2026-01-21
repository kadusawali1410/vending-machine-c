#include<stdio.h>
/* INITIAL STOCK
  SUGAR=500 UNIT
  MILK=1200 UNIT
  TEA POWDER=400 UNIT
  COFFEE POWDER=200 UNIT
  WATER=2500 UNIT*/
int main(){
   rerun_section:
    int choice,sug,n,k,amt;
    float sugar,milk,tea_powder,coffee_powder,water,rs;
    printf("\033[1;36m");
    printf("==VENDING MACHINE==");
     printf("\033[0m\n");
     printf("\033[1;35m");
    printf("\nMENU\n\n");
    printf("1.Strong Coffee (Rs. 17.50)\n2.Light Coffee (Rs. 16.00)\n3.Strong Tea (Rs. 15.50)\n4.Light Tea (Rs. 15.00)\n5.Refill stock\n");
    printf("\033[0m");
    printf("\nEnter choice: ");
    scanf("%d",&choice);
    if((choice<=4)&&(choice>0)){
        printf("Serve with Sugar (yes=1 no=0): ");
        scanf("%d",&sug);
        printf("Number of Cups to Serve: ");
        scanf("%d",&n);
        if((sug==1)&&(choice<=4)){
         printf("\n\033[1;33;44m serve %d cups(sugar=yes) \033[0m",n);
         }
        else if(((sug!=1)||(sug!=0))&&(choice<=4)){
            printf("\n\033[1;33;44m NOT A VALID CHOICE \033[0m");
        }
        else {
        printf("Serve %d cups(sugar=no)",n);
        }
        if((sug==1)||(sug==0)){
            printf("\033[1;33;44m");
        switch(choice){
        case 1: 
          rs=17.50*n;
          printf("\n Rs. to pay = %g",rs);
          break;
        case 2: 
          rs=16.00*n;
          printf("\n Rs. to pay = %g",rs);
          break;
        case 3: 
          rs=15.50*n;
          printf("\n Rs. to pay = %g",rs);
          break;
        case 4: 
          rs=15.00*n;
          printf("\n Rs. to pay = %g",rs);
           break;
        }
    
    printf("\033[0m");
        }
   else("not a Valid choice");
 /*
Each drink uses different quantities of ingredients:

Item        	Sugar	Milk	Coffee Powder	Tea Leaves	Water	Selling Price
Strong Coffee	2      	50	     4	              0	         100	Rs 17.50
Light Coffee	1.5  	60	     2                0	        100  	Rs 16.50
Strong Tea    	2   	30	     0	              4      	150  	Rs 15.50
Light Tea   	1.5 	40   	0	             3	        150 	Rs 15.00
*/
  printf("\n\n==CURRENT STOCK==");
  if((choice==1) && (sug==1)){
      sugar=500-(n*2);
      milk=1200-(n*50);
      coffee_powder=200-(n*4);
      tea_powder=400-(n*0);
      water=2500-(n*100);
      
      printf("\nsugar=%g unit\nmilk=%g unit\ncoffee powder=%g unit\ntea powder=%g unit\nwater=%g unit",sugar,milk,coffee_powder,tea_powder,water);
  }
   else if((choice==1) && (sug==0)){
      sugar=500;
      milk=1200-(n*50);
      coffee_powder=200-(n*4);
      tea_powder=400-(n*0);
      water=2500-(n*100);
      
      printf("\nsugar=%g unit\nmilk=%g unit\ncoffee powder=%g unit\ntea powder=%g unit\nwater=%g unit",sugar,milk,coffee_powder,tea_powder,water);
  }
   else if((choice==2) && (sug==1)){
      sugar=500-(n*1.5);
      milk=1200-(n*60);
      coffee_powder=200-(n*2);
      tea_powder=400-(n*0);
      water=2500-(n*100);
      
      printf("\nsugar=%g unit\nmilk=%g unit\ncoffee powder=%g unit\ntea powder=%g unit\nwater=%g unit",sugar,milk,coffee_powder,tea_powder,water);
  }
  else if((choice==2) && (sug==0)){
      sugar=500;
      milk=1200-(n*60);
      coffee_powder=200-(n*2);
      tea_powder=400-(n*0);
      water=2500-(n*100);
      
      printf("\nsugar=%g unit\nmilk=%g unit\ncoffee powder=%g unit\ntea powder=%g unit\nwater=%g unit",sugar,milk,coffee_powder,tea_powder,water);
  }
  else if((choice==3) && (sug==1)){
      sugar=500-(n*2);
      milk=1200-(n*30);
      coffee_powder=200-(n*0);
      tea_powder=400-(n*4);
      water=2500-(n*150);
      
      printf("\nsugar=%g unit\nmilk=%g unit\ncoffee powder=%g unit\ntea powder=%g unit\nwater=%g unit",sugar,milk,coffee_powder,tea_powder,water);
  }
   else if((choice==3) && (sug==0)){
      sugar=500;
      milk=1200-(n*30);
      coffee_powder=200-(n*0);
      tea_powder=400-(n*4);
      water=2500-(n*150);
      
      printf("\nsugar=%g unit\nmilk=%g unit\ncoffee powder=%g unit\ntea powder=%g unit\nwater=%g unit",sugar,milk,coffee_powder,tea_powder,water);
  }
   else if((choice==4) && (sug==1)){
      sugar=500-(n*1.5);
      milk=1200-(n*40);
      coffee_powder=200-(n*0);
      tea_powder=400-(n*3);
      water=2500-(n*150);
      
      printf("\nsugar=%g unit\nmilk=%g unit\ncoffee powder=%g unit\ntea powder=%g unit\nwater=%g unit",sugar,milk,coffee_powder,tea_powder,water);
  }
  else if((choice==4) && (sug==0)){
      sugar=500;
      milk=1200-(n*40);
      coffee_powder=200-(n*0);
      tea_powder=400-(n*3);
      water=2500-(n*150);
      
      printf("\nsugar=%g unit\nmilk=%g unit\ncoffee powder=%g unit\ntea powder=%g unit\nwater=%g unit",sugar,milk,coffee_powder,tea_powder,water);
  }
  else{
      printf("Not a Valid Choice");
  }
  printf("\n\n");
    }
    if(choice==5){
        printf("\n\n\033[1;34m==Select Element to Refill==\033[0m \n\n\033[1;32m 1.Sugar \033[0m (curr=%g unit: max=500 unit)\n\033[1;32m 2.Milk  \033[0m (curr=%g unit: max=1200 unit)\n\033[1;32m 3.Coffee Powder  \033[0m (curr=%g unit: max=200 unit)\n\033[1;32m 4.Tea Leaves  \033[0m (curr=%g unit : max=400 unit)\n\033[1;32m 5.Water \033[0m (curr=%g unit: max=2500 unit)\n",sugar,milk,coffee_powder,tea_powder,water);
        printf("\nEnter Choice: ");
        scanf("%d",&k);
        printf("Enter Amount to Add (in unit) : ");
        scanf("%d",&amt);
        printf("\n \033[1;33;44m");
        switch(k){
            case 1:
                  if(sugar==500){
                      printf("The stock is already full... \n");
                  }
                  else{
                  sugar+=amt;
                  printf("%d unit added to sugar\n\n",amt);
                  }
                  break;
            case 2:
                  if(milk==1200){
                      printf("The stock is already full... \n");
                  }
                  else{
                  milk+=amt;
                  printf("%d unit added to milk\n\n",amt);
                  }
                  break;
            case 3:
                  if(coffee_powder==200){
                      printf("The stock is already full... \n");
                  }
                  else{
                  coffee_powder+=amt;
                  printf("%d unit added to coffee_powder\n\n",amt);
                  }
                  break;
            case 4:
                  if(tea_powder==400){
                      printf("The stock is already full... \n ");
                  }
                  else{
                  tea_powder+=amt;
                  printf("%d unit added to tea_powder\n\n",amt);
                  }
                  break;
            case 5:
                  if(water==2500){
                      printf("The stock is already full... \n");
                  }
                  else{
                  water+=amt;
                  printf("%d unit added to water\n\n",amt);  
                  }
                  break;
        }printf("\033[0m");
        
    }
     goto rerun_section; 
 return 0;
}