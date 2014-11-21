/*
 * rc.h
 *
 *  Created on: Mar 5, 2009
 *      Author: rikki
 */

#ifndef RC_H_
#define RC_H_

/* Max .dodsrc line size */
#define MAXRCLINESIZE 2048

/* Max number of triples in a .dodsrc */
#define MAXRCLINES 2048

/* Create a triple store for (url,key,value) and sorted by url */

/* Actual triple store */
extern struct OCTriplestore {
    int ntriples;
    struct OCTriple {
        char url[MAXRCLINESIZE];
        char key[MAXRCLINESIZE];
        char value[MAXRCLINESIZE];
   } triples[MAXRCLINES];
} *ocdodsrc;

extern int ocdodsrc_read(const char* path);
extern int ocdodsrc_process(OCstate* state);
extern char* ocdodsrc_lookup(char* key, char* url);

#endif /* RC_H_ */
