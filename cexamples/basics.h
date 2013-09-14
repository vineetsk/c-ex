#ifndef BASICS_H_
#define BASICS_H_

typedef struct __attribute__((__packed__)) tag1{
	int i;
	char c;
}PairOfIntAndChar;

typedef struct tag2{
	int i;
	char c;
}PairOfIntAndCharNonPacked;

typedef union tag3{
	unsigned char c;
	unsigned int i;
}UnionOfIntAndChar;

#define external_sizeof(type)	({type t[2]; (int)(t+1)-(int)t;})
#endif
