#include <stdio.h>

// declare structure called Student with 3 fields
struct Student
{
	char name[100];
	int marks;
	int year;
};

void writeStudentToFile(struct Student student) // sub is passed params, creates a struct of type Student called student
{
	//Get a pointer to the opened file
	// w   1 = 1
	// r
	// a - 5 + 1 = 6

	FILE *fp = fopen("Student.dat","w"); // create file handle named fp to write to

	//Write to the file
	fprintf(fp,"%s %d %d\n",student.name,student.marks,student.year); // struct student values used with file printf

	//Close the file
	fclose(fp); // must close a file handle if you open it
}

int main()
{           // name used here does not have to match name in parameters to sub call, it does have to be right type
	struct Student idiot =
		{"in28Minutes",100,4};

	writeStudentToFile(idiot);
}
