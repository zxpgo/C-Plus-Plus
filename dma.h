#ifndef DMA_H_
#define DMA_H_
#include <iostream>

class baseDMA
{
private:
	char * label;
	int rating;
public:
	baseDMA(const char * l = "null", int r = 0);
	baseDMA(const baseDMA & rs);
	virtual ~baseDMA();
	baseDMA & operator=(const baseDMA & rs);
	friend std::ostream & operator<<(std::ostream & os, const baseDMA & rs);
};


class lackDMA : public baseDMA
{
private:
	enum {COL_LEN = 40};
	char color[COL_LEN];
public:
	lackDMA(const char * c = "blank", const char * l = "null",
		 	int r = 0);
	lackDMA(const char * c, const baseDMA & rs);
	friend std::ostream & operator<<(std::ostream & os, const lackDMA & rs);
};

class hasDMA : public baseDMA
{
private:
	char * style;
public:
	hasDMA(const char * c = "none", const char * l = "null",
			int r = 0);
	hasDMA(const char * c, const baseDMA & rs);
	hasDMA(const hasDMA & hs);
	hasDMA & operator=(const hasDMA & hs);
	~hasDMA();
	friend std::ostream & operator<<(std::ostream & os, const hasDMA & rs);
};

#endif
