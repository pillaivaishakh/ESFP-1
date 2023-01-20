#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int module1();
int module1()
{
    FILE* ptr;
    char ch;
 
   
    ptr = fopen("info.txt", "r");
 
    if (NULL == ptr) {
        printf("file can't be opened \n");
    }
 
    printf("Services in india \n");
 
    
   
    do {
        ch = fgetc(ptr);
        printf("%c", ch);
 
        
        
    } while (ch != EOF);
 
    
    fclose(ptr);
    return 0;
}
int module2();
int module2()
{
FILE* ptr;
    char ch;
 
   
    ptr = fopen("hch.txt", "r");
 
    if (NULL == ptr) {
        printf("file can't be opened \n");
    }
 
    printf("Crime rate in India \n");
 
    
   
    do {
        ch = fgetc(ptr);
        printf("%c", ch);
 
        
        
    } while (ch != EOF);
 
    
    fclose(ptr);
    return 0;	

}
int module3();
int module3()
{
FILE* ptr;
    char ch;
 
   
    ptr = fopen("Causes.txt", "r");
 
    if (NULL == ptr) {
        printf("file can't be opened \n");
    }
 
    printf("Crime rate in India \n");
 
    
   
    do {
        ch = fgetc(ptr);
        printf("%c", ch);
 
        
        
    } while (ch != EOF);
 
    
    fclose(ptr);
    return 0;	

}
int module4();
int module4()
{
FILE* ptr;
    char ch;
 
   
    ptr = fopen("Measures.txt", "r");
 
    if (NULL == ptr) {
        printf("file can't be opened \n");
    }
 
    printf("Crime rate in India \n");
 
    
   
    do {
        ch = fgetc(ptr);
        printf("%c", ch);
 
        
        
    } while (ch != EOF);
 
    
    fclose(ptr);
    return 0;	

}

int module5();
int module5()
{
FILE* ptr;
    char ch;
 
   
    ptr = fopen("Conclusions.txt", "r");
 
    if (NULL == ptr) {
        printf("file can't be opened \n");
    }
 
    printf("Crime rate in India \n");
 
    
   
    do {
        ch = fgetc(ptr);
        printf("%c", ch);
 
        
        
    } while (ch != EOF);
 
    
    fclose(ptr);
    return 0;	

}
int main()
{

module1();
printf("--------------------------------------------------------------------\n");
module2();
printf("--------------------------------------------------------------------\n");
module3();
printf("--------------------------------------------------------------------\n");
module4();
printf("--------------------------------------------------------------------\n");
module5();


      
	

return 0;
}


