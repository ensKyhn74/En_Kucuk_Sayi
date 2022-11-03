#include <stdio.h>
// klavyeden girilen 3 sayıdan en küçüğünü bul,ekrana yazdır

int main() 

{
 
  int x,y,z;
 
  printf("sırayla 3 tane tamsayi girin: ");
  scanf("%d %d %d",&x,&y,&z);
 
  if(x < y && x < z)
  {
   printf("%d minimum sayidir",x);
  }
 
  else if(y < x && y < z)
  {
   printf("%d minimum sayidir",y);
  }
  
  else if(z < y && z < x)
  {
   printf("%d minimum sayidir",z);
  }
  
  return 0;

}