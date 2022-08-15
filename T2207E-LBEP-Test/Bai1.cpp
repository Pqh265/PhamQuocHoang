#include <stdio.h>
#include <string.h>

int main () {
   int x;
   printf (" chieu dai chuoi 1 S1: \n");  //gia tri chieu dai chuoi 1
   do {                                             // kiem tra chieu dai chuoi 1 co <0 ko
   	scanf("%d", &x);
   	if ( x <=0 ) { printf (" x > 0 \n ");
	   } 
   } while ( x <=0);
   char s1[x];
   printf (" nhap chuoi 1 S1: \n");
   scanf("%s", s1);                                  
    int y;
   printf (" gia tri chieu dai chuoi 2 S2: \n");   
   do {                                                             
   	scanf("%d", &y);
   	if ( y <=0 ) { printf (" y  > 0 \n ");
	   } 
   } while ( y <=0);
   char s2[y];
   printf (" nhap chuoi 2 S2: \n");
   scanf("%s",s2);                                 
   
   if ( strlen(s1) > strlen(s2)) {                                   
   	    char stemp[x];
   	    strcpy(stemp,s2);
   	    strcpy(s2,s1);
   	    strcpy(s1,stemp);
   }
   bool  T = false;
	int i = 0;
		while ( s2[i] != 0){                     
			if ( s2[i] == s1[0]) {
				int j = 0;
				while( s1[j] != 0 && s2[i] != 0 && s1[j] == s2[i]){
					i++;
					j++;
				}
				if( s1[j] == 0) {
					T = true;
					break;
				}
			} else { 
				i++;}
		}
   if (T) { 
   printf ("YES");
   } else { 
   	printf ("NO");
   }	
}
