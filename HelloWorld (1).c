/**
 * Helloworld.c is a file used to complie a linux kernel module
 *
 * 
 * To compile, run makefile by entering "make" in command prompt
 *make file is used to build kernel module
 *The below libraries are required for compiling the linux module
 *
 */

#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

/* This function is called to load the module. */
static int simple_init(void)
{
       printk(KERN_INFO "Hello World, Linux kernel project1: loading the module\n");

       return 0;
}

/* This function is called to remove the module */
static void simple_exit(void) {
	printk(KERN_INFO "Hello World,Linux kernel project1: Exiting the module\n");
}

/* Macros are used to register the module entry and exit points. */
module_init( simple_init );
module_exit( simple_exit );

/* The MODULE LICENSE is under GPL license */
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("LINUX KERNEL Project1, Team4");
MODULE_AUTHOR("SGCOM562-10082021");
