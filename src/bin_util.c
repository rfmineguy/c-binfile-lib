#include "bin_util.h"
#include <assert.h>

//
// STRUCT FUNCTIONS
//

Result bin_write_struct(FILE* fPtr, size_t size, void* structPtr) {
  assert(fPtr != NULL && "File pointer null");
  assert(structPtr != NULL && "Struct pointer null");
  size_t bytes_written = fwrite(structPtr, size, 1, fPtr);
  return bytes_written == size ? SUCCESSFUL_WRITE : FAILED_WRITE;
}

Result bin_read_struct(FILE* fPtr, size_t size, void* structPtr) {
  assert(fPtr != NULL && "File pointer null");
  assert(structPtr != NULL && "Bytes array null");
  size_t bytes_read = fread(structPtr, sizeof(uint8_t), size, fPtr);
  return bytes_read == size ? SUCCESSFUL_READ : FAILED_READ;
}


//
// BYTE ARRAY FUNCTIONS
//

Result bin_write_str(FILE* fPtr, size_t length, char* str) {
  assert(fPtr != NULL && "File pointer null");
  assert(str != NULL && "String null");
  size_t bytes_written = fwrite(str, sizeof(char), length, fPtr);
  return bytes_written == length ? SUCCESSFUL_WRITE : FAILED_WRITE;
}

Result bin_read_str(FILE* fPtr, size_t length, char* str) {
  assert(fPtr != NULL && "File pointer null");
  size_t bytes_read = fread(str, sizeof(uint8_t), length, fPtr);
  return bytes_read == length ? SUCCESSFUL_READ : FAILED_READ;
}

Result bin_write_u8_array(FILE* fPtr, size_t size, uint8_t* bytes) {
  assert(fPtr != NULL && "File pointer null");
  assert(bytes != NULL && "Bytes array null");
  size_t bytes_written = fwrite(bytes, sizeof(uint8_t), size, fPtr);
  return bytes_written == size ? SUCCESSFUL_WRITE : FAILED_WRITE;
}

Result bin_read_u8_array(FILE* fPtr, size_t size, uint8_t* bytes) {
  assert(fPtr != NULL && "File pointer null");
  size_t bytes_read = fread(bytes, sizeof(uint8_t), size, fPtr);
  return bytes_read == size ? SUCCESSFUL_READ : FAILED_READ;
}

//
// UNSIGNED WRITE FUNCTIONS
//

Result bin_write_u8(FILE *fPtr, uint8_t v) {
  assert(fPtr != NULL && "File pointer null");
  size_t bytes_written = fwrite(&v, sizeof(uint8_t), 1, fPtr);
  return bytes_written == sizeof(uint8_t) ? SUCCESSFUL_WRITE : FAILED_WRITE;
}

Result bin_write_u16(FILE *fPtr, uint16_t v) {
  assert(fPtr != NULL && "File pointer null");
  size_t bytes_written = fwrite(&v, sizeof(uint16_t), 1, fPtr);
  return bytes_written == sizeof(uint16_t) ? SUCCESSFUL_WRITE : FAILED_WRITE;
}

Result bin_write_u32(FILE *fPtr, uint32_t v) {
  assert(fPtr != NULL && "File pointer null");
  size_t bytes_written = fwrite(&v, sizeof(uint32_t), 1, fPtr);
  return bytes_written == sizeof(uint32_t) ? SUCCESSFUL_WRITE : FAILED_WRITE;
}

Result bin_write_u64(FILE *fPtr, uint64_t v) {
  assert(fPtr != NULL && "File pointer null");
  size_t bytes_written = fwrite(&v, sizeof(uint64_t), 1, fPtr);
  return bytes_written == sizeof(uint64_t) ? SUCCESSFUL_WRITE : FAILED_WRITE;
}

//
// UNSIGNED READ FUNCTIONS
//
Result bin_read_u8  (FILE *fPtr, uint8_t* v) {
  assert(fPtr != NULL && "File pointer null");
  size_t bytes_read = fread(v, sizeof(uint8_t), 1, fPtr);
  return bytes_read == sizeof(uint8_t) ? SUCCESSFUL_READ : FAILED_READ;
}

Result bin_read_u16 (FILE* fPtr, uint16_t* v) {
  assert(fPtr != NULL && "File pointer null");
  size_t bytes_read = fread(v, sizeof(uint16_t), 1, fPtr);
  return bytes_read == sizeof(uint16_t) ? SUCCESSFUL_READ : FAILED_READ;
}

Result bin_read_u32 (FILE* fPtr, uint32_t* v) {
  assert(fPtr != NULL && "File pointer null");
  size_t bytes_read = fread(v, sizeof(uint32_t), 1, fPtr);
  return bytes_read == sizeof(uint32_t) ? SUCCESSFUL_READ : FAILED_READ;
}

Result bin_read_u64 (FILE* fPtr, uint64_t* v) {
  assert(fPtr != NULL && "File pointer null");
  size_t bytes_read = fread(v, sizeof(uint64_t), 1, fPtr);
  return bytes_read == sizeof(uint64_t) ? SUCCESSFUL_READ : FAILED_READ;
}

//
// SIGNED WRITE FUNCTIONS
//

Result bin_write_s8(FILE *fPtr, int8_t v) {
  assert(fPtr != NULL && "File pointer null");
  size_t bytes_written = fwrite(&v, sizeof(int8_t), 1, fPtr);
  return bytes_written == sizeof(int8_t) ? SUCCESSFUL_WRITE : FAILED_WRITE;
}

Result bin_write_s16(FILE *fPtr, int16_t v) {
  assert(fPtr != NULL && "File pointer null");
  size_t bytes_written = fwrite(&v, sizeof(int16_t), 1, fPtr);
  return bytes_written == sizeof(int16_t) ? SUCCESSFUL_WRITE : FAILED_WRITE;
}

Result bin_write_s32(FILE *fPtr, int32_t v) {
  assert(fPtr != NULL && "File pointer null");
  size_t bytes_written = fwrite(&v, sizeof(int32_t), 1, fPtr);
  return bytes_written == sizeof(int32_t) ? SUCCESSFUL_WRITE : FAILED_WRITE;
}

Result bin_write_s64(FILE *fPtr, int64_t v) {
  assert(fPtr != NULL && "File pointer null");
  size_t bytes_written = fwrite(&v, sizeof(int64_t), 1, fPtr);
  return bytes_written == sizeof(int64_t) ? SUCCESSFUL_WRITE : FAILED_WRITE;
}

//
// SIGNED READ FUNCTIONS
//
Result bin_read_s8  (FILE *fPtr, int8_t* v) {
  assert(fPtr != NULL && "File pointer null");
  size_t bytes_read = fread(v, sizeof(uint8_t), 1, fPtr);
  return bytes_read == sizeof(uint8_t) ? SUCCESSFUL_READ : FAILED_READ;
}

Result bin_read_s16 (FILE* fPtr, int16_t* v) {
  assert(fPtr != NULL && "File pointer null");
  size_t bytes_read = fread(v, sizeof(int16_t), 1, fPtr);
  return bytes_read == sizeof(int16_t) ? SUCCESSFUL_READ : FAILED_READ;
}

Result bin_read_s32 (FILE* fPtr, int32_t* v) {
  assert(fPtr != NULL && "File pointer null");
  size_t bytes_read = fread(v, sizeof(int32_t), 1, fPtr);
  return bytes_read == sizeof(int32_t) ? SUCCESSFUL_READ : FAILED_READ;
}

Result bin_read_s64 (FILE* fPtr, int64_t* v) {
  assert(fPtr != NULL && "File pointer null");
  size_t bytes_read = fread(v, sizeof(int64_t), 1, fPtr);
  return bytes_read == sizeof(int64_t) ? SUCCESSFUL_READ : FAILED_READ;
}
