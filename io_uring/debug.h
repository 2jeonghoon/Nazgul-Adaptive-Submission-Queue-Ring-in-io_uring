#ifndef _IOURING_DEBUG_H
#define _IOURING_DEBUG_H

#include <linux/kernel.h>

#define PRINTK(fmt, args...) printk(KERN_INFO fmt, ##args)

#endif
