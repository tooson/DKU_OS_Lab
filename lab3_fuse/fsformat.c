/*
*	Operating System Lab
*	    Lab4 (File System in Userspace)
*	   	Copyright (C) data/name/email
*	    First Writing: date
*
*   fsformat.c :
*       - the main source file for the file system formatting utility.
*       - format device to user defined super block,inode, directory entries.
*       - make ondisk layout of fuse file system. 
*       - ondisk layout.
*         |------------|---------|---------|-------------|-------------|
*         | super block| ibitmap | dbitmap | inode table | data blocks |
*         |------------|---------|---------|-------------|-------------|
*           + super block ( e.g. lab4_super_block )
*           + inode       ( e.g. lab4_inode ) 
*           + direntry    ( e.g. lab4_dir_entry )
*
* This program is free software; you can redistribute it and/or modify it
* under the terms and conditions of the GNU General Public License,
* version 2, as published by the Free Software Foundation.
*
* This program is distributed in the hope it will be useful, but WITHOUT
* ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
* FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
* more details.
*/
