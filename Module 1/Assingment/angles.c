// importing header file
#include <stdio.h>


// main function
int main()
{
    // declaring floating variables
    float angle1, angle2, angle3;
    
    // assinging values to variables
    printf("Enter two angles of the triangle: ");
    scanf("%f %f", &angle1, &angle2);

    // working on exceptions
    // if one variable is greater or equal to 180-next variable
    if (angle1 >= (180-angle2) || angle2 >= (180-angle1))
    {

        // if one variable is equal to 180-next variable
        if (angle1 == (180-angle2) || angle2 == (180-angle1))
        {
            printf("The sum of only two angles of a triangle cannot be 180.\n");
        }

        // if one variable is greater than 180-next variable.
        else
        {
        printf("The sum of all angles of trianlge should not be more than 180.\n");
        }
    }

    // if any variable is equal to 0 or 180
    else
    {
        if (angle1 == 0 || angle2 == 0 || angle1 == 180 || angle2 == 180)
        {

            // if any variable is equal to 180
            if (angle1 == 180 || angle2 == 180)
            {
                printf("Any one angle of triangle cannot be 180.\n");        
            }

            // if any variable is equal to 0
            else 
            {
            printf("The angle of triangle cannot be 0(zero).\n");
            }
        }

        // if none of above conditions satisfy
        else
        {
            
            // calculating the third variable and displaying the value
            angle3 = 180-angle1-angle2;
            printf("The third angle of the tirangle is %.2f\n", angle3);
        }
        
    }
    return 0;
}