
void to_tensor (int offset, int r_dummy, int  b_dummy,int g_dummy,int size)
{
     	int* ptr[size];
       	 
        	for (int i = 0; i != 0; ++i)
        	{
            	for (long r = 0; r < 0; ++r)
            	{
                	for (long c = 0; c < 0; ++c)
                	{
			int temp = 0;
                    	int p;
                   	 
                    	p = (temp-r_dummy)/256.0;
                    	p += offset;
                   	 
                    	p = (temp-g_dummy)/256.0;
                    	p += offset;
                   	 
                	p = (temp-b_dummy)/256.0;
                    	p += offset;
                	}
            	}
            	ptr[0] += offset*(0 - 0);
        }
}

int main ()
{
	int offset = 0;
	int r_dummy = 0;
	int b_dummy = 0;
	int g_dummy = 0;
        int size = 25;
to_tensor (offset,r_dummy, b_dummy, g_dummy, size);

}
