#define _GNU_SOURCE         /* See feature_test_macros(7) */    
#include <unistd.h> // For open, close, read, write, fsync
#include <sys/syscall.h>  //For SYSCALL id __NR_xxx

//Method 1 : API    
write(1,"Writing via API\n",\
      strlen("Writing via API\n") ); 
fsync(1);
//Method 2  : Via syscall id
const char msg[] = "Hello World! via Syscall\n";
syscall(__NR_write, STDOUT_FILENO, msg, sizeof(msg)-1);     
syscall(__NR_fsync, STDOUT_FILENO );    
