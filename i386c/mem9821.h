
#if defined(SUPPORT_PC9821)

#ifdef __cplusplus
extern "C" {
#endif

void MEMCALL mem9821_w(UINT32 addr, REG8 value);
REG8 MEMCALL mem9821_r(UINT32 addr);
void MEMCALL mem9821_ww(UINT32 addr, REG16 value);
REG16 MEMCALL mem9821_rw(UINT32 addr);

void MEMCALL mem9821_b0w(UINT32 address, REG8 value);
REG8 MEMCALL mem9821_b0r(UINT32 address);
void MEMCALL mem9821_b0ww(UINT32 address, REG16 value);
REG16 MEMCALL mem9821_b0rw(UINT32 address);

void MEMCALL mem9821_b2w(UINT32 address, REG8 value);
REG8 MEMCALL mem9821_b2r(UINT32 address);
void MEMCALL mem9821_b2ww(UINT32 address, REG16 value);
REG16 MEMCALL mem9821_b2rw(UINT32 address);

#ifdef __cplusplus
}
#endif

#endif

