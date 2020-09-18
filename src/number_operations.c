#include "number_operations.h"
int main()
{
    int num1=101;
    int num2=-18;
    int result=is_power_of_two(num2);
    printf("%d",result);
    return 0;
}
int is_even(int num)
{
    if(num<0)
    {
        return -1;
    }
    if(num%2==0)
        return 1;
    else
        return 0;
}
int is_odd(int num)
{
    if(num<0)
    {
        return -1;
    }
    if(num%2!=0)
        return 1;
    else
        return 0; 
}

int is_positive(int num)
{
    if(num>0)
        return 1;
    else if(num==0)
        return -1;
    else
        return 0;
      
}
int is_negative(int num)
{
  if(num<0)
        return 1;
    else if(num==0)
        return -1;
    else
        return 0;  
}
int is_divisible_by(int num1,int num2 )
{
    if(num1<0||num2<0)
    {
        return -1;
    }
    if(num1 % num2 == 0)
        return 1;
    else
        return 0; 
}
int calculate_sum_of_digits(int num)
{
    if(num<0)
    {
        num=-num;
    }
    int sum=0;
    while(num!=0)
    {
        sum+= num % 10;
        num/=10;
    }
    return sum;
}

int is_prime(int num)
{
    if(num<0)
    {
        return -1;
    }
    int count=0;
    for(int i=2;i<num;i++)
    {
        if(num%i==0)
            {
                count++;
                break;
            }

    }
    if (count == 0)
        return 1;
    else
        return 0;
    
}
int isPerfectSquare(int num) 
{ 
    if(num<0)
    {
        return -1;
    }
    for (int i = 1; i * i <= num; i++) { 
  
        // If (i * i = num) 
        if ((num % i == 0) && (num / i == i)) { 
            return 1; 
        } 
    } 
    return 0; 
} 
int is_armstrong(int num)
{
    if(num<0)
    {
        return -1;
    }
    int copy=num;
    int digit,sum=0,count=0;
    while(num!=0)
    {
        count++;
        num=num/=10;
        
    }
    num=copy;
    while(num!=0)
    {
        digit=num%10;
        sum+=pow(digit,count);
        num=num/10;
    }
    if(sum==copy)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int find_lcm(int num1,int num2)
{
    if(num1<0||num2<0)
    {
        return -1;
    }
int max = (num1 > num2) ? num1 : num2;

    while (1) {
        if (max % num1 == 0 && max % num2 == 0) {
            break;
        }
        ++max;
    }
    return max;
}
int find_hcf(int num1,int num2)
{
    if(num1<0||num2<0)
    {
        return -1;
    }
    int gcd;
    for(int i=1; i <= num1 && i <= num2; ++i)
    {
        // Checks if i is factor of both integers
        if(num1%i==0 && num2%i==0)
            gcd = i;
    }
    return gcd;
}

int is_palindrome(int num)
{
    if(num<0)
    {
        return -1;
    }
    int temp=num,remainder,reverse_num;
    while(temp!=0)
    {
      remainder=temp%10;
      reverse_num=reverse_num*10+remainder;
      temp/=10;
    } 
    if(reverse_num==num) 
      return 1;
    else
      return 0;
}
int is_power_of_two(int num)
{ 
   if(num<=0) 
    return -1; 
  
   if (ceil(log2(num)) == floor(log2(num)))
   {
       return 1;
   } 
   else
   {
       return 0;
   }
   
} 