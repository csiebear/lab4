//Function overloading
//Overloaded funcitons are distinguished by their signatures
//(function's name,number,types,and order of its parameter)

double average(double* n1,double &n2)
{
	return ((*n1+n2)/2.0);
}
int average(int n1,float n2)
{
	return ((n1 + n2)/2);
}
//average are overloaded functions

int main()
{
	return 0;
}
