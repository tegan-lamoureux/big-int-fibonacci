// Extremely large integer type for holding results of fibonacci calculation.
// Tegan - 8/1/2017

#ifndef BIG_INT
#define BIG_INT

#define BIG_INT_SIZE 1024 // how many bytes will the thing be

class big_int
{
  private:
    unsigned char data[BIG_INT_SIZE];
    

  public:

    big_int& operator=(const big_int& other)
    {
	if(this != &other)
	{
	    for(int i = 0; i < BIG_INT_SIZE; ++i)
		this->data[i] = other.data[i];
	}

	return *this;
    }

    friend std::ostream& operator<<(std::ostream& os, const big_int& obj)
    {
	for(int i = BIG_INT_SIZE; i >= 0; --i)
	    os << (int)obj.data[i];

	return os;
    }    	

    
};

#endif
