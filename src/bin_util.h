#ifndef BIN_WRITER_H
#define BIN_WRITER_H
#include <stdio.h>
#include <stdint.h>

typedef enum { SUCCESSFUL_WRITE, FAILED_WRITE, SUCCESSFUL_READ, FAILED_READ, NULL_FILE, NULL_BUFFER } Result;

Result bin_write_struct(FILE*, size_t, void*);
Result bin_read_struct(FILE*, size_t, void*);

Result bin_write_str(FILE*, size_t, char*);
Result bin_read_str(FILE*, size_t, char*);

Result bin_write_u8_array(FILE*, size_t, uint8_t*);
Result bin_read_u8_array(FILE*, size_t, uint8_t*);

Result bin_write_u8 (FILE*, uint8_t);
Result bin_write_u16(FILE*, uint16_t);
Result bin_write_u32(FILE*, uint32_t);
Result bin_write_u64(FILE*, uint64_t);
Result bin_read_u8  (FILE*, uint8_t*);
Result bin_read_u16 (FILE*, uint16_t*);
Result bin_read_u32 (FILE*, uint32_t*);
Result bin_read_u64 (FILE*, uint64_t*);

Result bin_write_s8 (FILE*, int8_t);
Result bin_write_s16(FILE*, int16_t);
Result bin_write_s32(FILE*, int32_t);
Result bin_write_s64(FILE*, int64_t);
Result bin_read_s8  (FILE*, int8_t*);
Result bin_read_s16 (FILE*, int16_t*);
Result bin_read_s32 (FILE*, int32_t*);
Result bin_read_s64 (FILE*, int64_t*);

#endif