#include<stdio.h>
int main(){
    double calculate_gross_pay(int hours_worked,double hourly_wage){
        double gross_pay;
        if(hours_worked<=40){
            gross_pay=hours_worked*hourly_wage;
        }else{
            gross_pay=(40*hourly_wage)+(hours_worked-40)*hourly_wage*1.5;
        }
        return gross_pay;
        }
        double calculate_taxes(double gross_pay){
            double taxes;
            if(gross_pay<=600){
                taxes=gross_pay*0.15;
            }else{
                taxes=(600*0.15)+(gross_pay-600)*0.20;
            }
            return taxes;
            }
            int main(){
                int hours_worked;
                double hourly_wage,gross_pay,taxes,net_pay;
                printf("enter hours worked in a week:");
                scanf("%d",&hours_worked);
                printf("enter hourly wage:");
                scanf("%lf",&hourly_wage);
                gross_pay=calculate_gross_pay(hours_worked,hourly_wage);
                taxes=calculate_taxes(gross_pay);
                printf("gross pay:$%.2lf\n",gross_pay);
                printf("taxes:$%.2lf\n",taxes);
                printf("net pay:$%.2lf\n",net_pay);
                
                return 0;
            }
            
        
    
}