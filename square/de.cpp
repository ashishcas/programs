
class base
{
	public:
		int x=10;
	protected:
		int y=100;
	private:
		int z=100;
};

class publicDerived: public base
{
	// x is public
	// y is protected
	// z is not accessible from publicDerived
};

class protectedDerived: protected base
{
	// x is protected
	// y is protected
	// z is not accessible from protectedDerived
};

class privateDerived: private base
{
	// x is private
	// y is private
	// z is not accessible from privateDerived
}
