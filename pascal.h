#ifndef PASCAL_H
#define PASCAL_H

#ifdef __cplusplus
extern "C" {
#endif


/*int pascal_test(unsigned char *pdata, const unsigned char *ptarget, uint32_t nonce);
void pascal_prepare_work(dev_blk_ctx *blk, uint32_t *state, uint32_t *pdata); 
void pascal_midstate(struct work *work);
void pascal_regenhash(struct work *work);
*/

void pascal_hash(const char* input, char* output);

#ifdef __cplusplus
}
#endif

#endif /* PASCAL_H */