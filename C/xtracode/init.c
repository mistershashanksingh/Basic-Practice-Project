#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

char *argv[] = { "sh", 0 };

int main(void)
{
  int pid, wpid;

if (open("console", O_RDWR) < 0)
{
  /* code */
  mknod("console", 1, 1);
  open("console", O_RDWR);

}
dup(0);
dup(0);

for (; ;)
{
  /* code */
  printf(1, "init: starting sh\n");
  pid = fork();
  if (pid < 0)
  {
    /* code */
    printf(1, "init: fork failed\n");
    exit();
  }
  if (pid == 0)
  {
    /* code */
    exec("sh", argv)
    printf(1, "init: exec sh failed\n", );
    exit();
  }
  while ((wpid = wait()) >= 0 && wpid != pid)
  {
    /* code */
    printf(1, "Zombies!\n");
  }
}
}
