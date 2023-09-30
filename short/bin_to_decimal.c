int bin_to_decimal(int bin_num){
     int i, decimal_num = 0, rem;    
    for (i = 0; bin_num != 0; ++i)  
    {  
        rem = bin_num % 10;  
        bin_num = bin_num / 10;  
        decimal_num = decimal_num + (rem) * ( pow (2, i));  
          
    }  return decimal_num;
}