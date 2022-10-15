/*
n is number of students, m is number of exams/marks

Input (File: std_marks.txt):
n m
name, age, weight, marks-1, marks-2, marks-3, ..., marks-m
... (more n-1 lines go here)

Output (File: std_res.txt):
name, total_marks, marks-1, marks-2, marks-3, ..., marks-m
...(more n-1 lines go here)

Output(stdout):
total_highest_marks, heighest_marks-1, highest_marks-2, highest_marks-3, ..., highest_marks-m

Output (File: std_marks_info.txt):
name, age, total_marks
...(more n-1 lines go here)
*/



#include <stdio.h>
int main()
{
    FILE *input = fopen("std_marks.txt","r+") ,*output = fopen("std_res.txt","w+") , *m_info = fopen("std_marks_info.txt","w+");

    int m,n,i,j   ,mark ,total_marks ,age , mrk[50],max,temp,mr[50];
    char name[30];

    fscanf(input,"%d %d",&n,&m);
    for( i=0 ; i<n ; i++ )
    {
        total_marks = 0;
        fscanf(input," %s %d",name,&age);
        for( j=0 ; j<m ; j++ )
        {
            fscanf(input,"%d",&mark);
            mrk[j] = mark;
            total_marks += mark;
        }
        fprintf(output,"%s %d ",name,total_marks);
        for( j=0 ; j<m ; j++ )
            fprintf(output,"%d ",mrk[j]);
        fprintf(output,"\n");
        fprintf(m_info,"%s %d %d\n",name,age,total_marks);

        mr[i] = total_marks;
    }

    for( i=0 ; i<n ; i++ )
        for( j=i+1 ; j<n ; j++ )
            if( mr[i]< mr[j] )
            {
                temp = mr[i];
                mr[i] = mr[j];
                mr[j] = temp;
            }


    printf("%d ",mr[0]);
    for( i=0 ; i<n; i++ )
        printf("%d ",mr[i] );

    fclose(input);
    fclose(output);

	return 0;
}

