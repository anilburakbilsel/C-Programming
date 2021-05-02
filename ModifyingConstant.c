void const_problem() {
	int i;
	int *pi;
	const int ci = 100;
	const int *cpi = &ci;
	i = 5; // ok
	pi = &i; // ok (normal)
	cpi = &i; // re-assign but no warning
	cpi = &ci; // ok - but no warning
	pi = cpi; // warning: "'=': different 'const' qualifiers"
	*pi = 30; // ok but ci is now 30!
	pi = (int*)cpi; // no warning: the cast tells the compiler to shut up
	//ci = 200; // error - compiler does not allow this to be performed
	printf("ci = %d", ci);
}

int main() {
	const_problem();
	return 0;
}