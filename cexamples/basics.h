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
#endif
