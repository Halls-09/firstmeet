#include <stdio.h>
int main(){
    int choice;
    float radius,cir,rec,tri,width,height,base;
    printf("1. Rectangle\n2. Triangle\n3. Circle\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    if(choice==1){
        printf("Enter the width: ");
        scanf("%f",&width);
        printf("Enter the height: ");
        scanf("%f",&height);
        if(width<0 || height<0){
            printf("The area of the rectangle is: Error");
        }
        
        else{
            rec = width*height;
             printf("The area of the rectangle is: %.2f",rec);
        }

    }
    else if(choice==2){

        printf("Enter the base: ");
        scanf("%f",&base);
        printf("Enter the height: ");
        scanf("%f",&height);
        if(base<0 || height<0){
           printf("The area of the rectangle is: Error");
        }

        else{
            tri = 0.5*(base*height);
            printf("The area of the triangle is: %.2f",tri);
        }

    }
    else if(choice==3){

        printf("Enter the radius: ");
        scanf("%f",&radius);
        if(radius<0){
            printf("The area of the rectangle is: Error");
        }

        else{
            cir = 3.14*(radius*radius);
            printf("The area of the circle is: %.2f",cir);
            }
    }
    else{
        printf("Invalid choice");
    }
}
