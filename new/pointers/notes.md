1.	Variable
2.	Used to store Address of another variable
3.	Dynamic Mem allocation

## Use
1.	Two pointers for same variable can be created
2.	Value can be changed in one location can be reflected in another location
3.	Saves space

## Usage

### Declaration
	datatype *pointername;
	
	Ex -> int *integerpointer;

### Assignment
	pointername = &variable name;

	Ex -> 	int variable = 5;
			integerpointer = &variable;
