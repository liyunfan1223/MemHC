#ifndef HASH_H
#define    HASH_H

typedef uint32_t (*hash_func)(const void *key, size_t length);
extern hash_func hash;
extern hash_func hash2;

enum hashfunc_type {
    JENKINS_HASH=0, MURMUR3_HASH, XXH3_HASH
};

int hash_init(enum hashfunc_type type);

#endif    /* HASH_H */

