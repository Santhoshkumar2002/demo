#include <stdio.h>
int main()
{
    int row, col;
    printf("Enter number of rows: ");
    scanf("%d",&row);
    printf("Enter number of columns: ");
    scanf("%d", &col);

    int arr[row][col];
    printf("Enter the array elements: ");
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            scanf("%d", arr[i]+j);
        }
    }

    int count = 0, total = row*col, i = 0, r_min = 0, r_max = row-1, c_min = 0, c_max = col-1;
    while(count < total)
    {
        for( i = c_min; i <= c_max && count < total; i++)
        {
            printf("%d ", arr[r_min][i]);
            count++;
        }
        r_min++;
        for(i = r_min; i <= r_max && count < total; i++)
        {
            printf("%d ", arr[i][c_max]);
            count++;
        }
        c_max--;
        for(i = c_max; i >= c_min && count < total; i--)
        {
            printf("%d ", arr[r_max][i]);
            count++;
        }
        r_max--;
        for(i = r_max; i >= r_min && count < total; i--)
        {
            printf("%d ", arr[i][c_min]);
            count++;
        }
        c_min++;
        
    }
}
