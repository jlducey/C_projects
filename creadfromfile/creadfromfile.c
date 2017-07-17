#include <stdio.h>

struct Student
{
	char name[100];
	int marks;
	int year;
};

struct Student readStudentFromFile()
{
	//Get a pointer to the opened file
	FILE *fp = fopen("Student.dat","r"); // must exist in local directory with exact name and read ability
	struct Student student;

	//Read from the file ... fscanf  passed file handle, and fscanf field data types, space delimiters matching file
	fscanf(fp,"%s %d %d\n",student.name,&student.marks,&student.year);

	//Close the file
	fclose(fp); // always close the file handle

	return student; // its a struct with 3 fields, so struct must be parsed to print values
}

void printStudent(struct Student student) // passed an initialized struct with values
{
	printf("%s %d %d\n",student.name,student.marks,student.year);
}

int main()
{
	struct Student student = readStudentFromFile(); //getting fields from file to create a student struct
	printStudent(student);
}
