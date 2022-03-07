# include <stdio.h>
int main()
{
		int i=1,j;//j=1
		
		
		while(i++<=100) // 2, 3, 4, ...... 100
			{
				j=1;
				while(j++<=200) // 2, 3, 4.....149
				{
					if(j==150)
						break;
					else
						printf ( "%d %d\n", i, j ) ;
				}
			}
		return 0 ;
		
		/*
			2 2
			2 3
			2 4
			....
			2 149
			
			3 151
			3 201
			
			
		*/
}
