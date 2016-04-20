Program: this program finds the number of true fields there are in a m x n matrix.
Key Assumptions: -the input matrix will be provide, although for the sake of easy testing, I have created the matrix within
		my program.
		-value of cells will be a boolean
		-(0> m,n <= 1000)
		
Time&space Complexity: assuming the matrix is provided, to calculate the number of true fields, 
		       this is an O(m x n) time complexity.
		       O(m x n) space complexity.

Test Cases: 
	input: 
		m=1000, n=1000
		cell(0,0) = true
		cell(0, n-1) = true
		cell(m-1,0) = true
		cell(m-1, n-1) = true
	output:
		 4
	
	input: 
		m=1000, n=1000
		cell(0,0) = true
		cell(0,1) = true
		cell(m-1,0) = true
		cell(m-1,1) = true
	output:
		 2

	input: 
		m=4, n=4
		cell(0,0) = true
		cell(1,1) = true
		cell(2,2) = true
		cell(m-1,n-1) = true
	output:
		4

	input: 
		m=4, n=4
		cell(0,0) = true
		cell(1,1) = true
		cell(2,2) = true
		cell(2,n-1) = true
	output:
		3