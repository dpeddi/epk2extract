#ifndef __UTIL_H
#define __UTIL_H
#include <stddef.h>
#include <elf.h>

char *my_basename(const char *path);
char *my_dirname(const char *path);
void getch(void);
void hexdump(void *pAddressIn, long lSize);
void rmrf(char *path);
int err_ret(const char *format, ...);
void err_exit(const char *format, ...);
void createFolder(const char *directory);
int is_lz4(const char *lz4file);
int is_nfsb(const char *filename);
void unnfsb(char *filename, char *extractedFile);
void extract_mtk_boot(const char *filename, const char *outname);
void split_mtk_tz(const char *filename, const char *destdir);
int is_mtk_boot(const char *filename);
int is_elf_mem(Elf32_Ehdr * header);
int is_elf(const char *filename);
int is_lzhs(const char *filename);
int is_gzip(const char *filename);
int is_jffs2(const char *filename);
int isSTRfile(const char *filename);
int isdatetime(char *datetime);
int isPartPakfile(const char *filename);
int is_kernel(const char *image_file);
void extract_kernel(const char *image_file, const char *destination_file);

#endif
