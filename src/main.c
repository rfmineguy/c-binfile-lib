#include "bin_util.h"
#include <string.h>

typedef struct {
  int a;
  char name[20];
} struct_t;

void struct_test();
void random_data_test();

int main() {
  random_data_test();
}

void random_data_test() {
  FILE* f = fopen("test_bin.bin", "wb");
  
  struct_t t = {0};
  t.a = 4;
  strncpy(t.name, "Hello World", 20);
  char header[5] = ".PNG";
  
  bin_write_str(f, 4, "good");
  bin_write_s32(f, 24);
  bin_write_u16(f, 3);
  bin_write_struct(f, sizeof(t), &t);
  fclose(f);
  
  f = fopen("test_bin.bin", "rb");
  
  int32_t c;
  uint16_t a;
  struct_t t2 = {0};
  bin_read_str(f, 4, header);
  bin_read_s32(f, &c);
  bin_read_u16(f, &a);
  bin_read_struct(f, sizeof(t2), &t2);
  printf("%s, %d, %d\n", header, c, a);
  printf("%d, %s\n", t2.a, t2.name);
}