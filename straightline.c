#include<stdio.h>
int main(){
    double x1, y1 ,x2,y2,x3,y3 ;
    printf("Enter the coordinates of the first point (x1,y1) : ");
    scanf("%lf %lf",&x1,&y1);
    printf("Enter the coordinates of the second point (x2,y2) : "); 
    scanf("%lf %lf",&x2,&y2);
    printf("Enter the coordinates of the third point (x3,y3) : ");
    scanf("%lf %lf",&x3,&y3);   
    double m1 = (y2-y1)/(x2-x1);
    double m2 = (y3-y2)/(x3-x2);
    if(m1==m2){
        printf("the lines are collinear");
    }
    else{
        printf("the lines are not collinear");
    }
    return 0;

}