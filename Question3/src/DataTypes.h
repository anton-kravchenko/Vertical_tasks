#ifndef DataTypes
#define DataTypes

	typedef struct{
		char var1;
		float var2;
		long long int var3;
	} my1_type;

	typedef struct{
		float var2;
		long var3;
		char var1;
	}my2_type;

	typedef struct{
		char var1[3];
		float var2;
		long var3;
	}my3_type;

	typedef struct{
		char *var1;
		float var2;long
		var3;
	}my4_type;

	typedef struct{
		char *var1[3];
		float var2;
		long var3;
	}my5_type;

	typedef struct{
		char var1[4];
		long long var3;
		float var2;
	}my6_type;

	typedef struct{
		char
		var1[4];
		int var3;
		float var2;
	}my7_type;

#endif
