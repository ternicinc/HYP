#ifndef _SYS_ACL_H_
#define _SYS_ACL_H_

#include <sys/types.h> // TODO: Make the system types.
#include <sys/_null.h> // TODO: Figure this out.

#ifdef _KERNEL
#include <sys/malloc.h> // TODO; Get a little more information.
#endif

/* 

 TODO: We need to find out and study with the ACL is and does 
 in general, currently, at the point of writing this, i have
 almost no knowledge of this.

 FIX: ACL is the security mechansim, which we use to define
 which users or system processes are granted access of objects,
 Objects being files, directories and devices.
 It also checks what operations they are allowed to perform. 

 FIX: ACl is essentially a list of permissions attached to an object,
 each entry in the list specifies a subject, like a user groupp or 
 process, and then there is also an allowed or denied access, like
 read, write, execute, delete and more,

 FIX; When a user tries to access an obkect, the operating system checks 
 the objects ACL to see of the process user or group has the required 
 permissions. Then it gives access or denies access.

*/

typedef __acl_tag_t           acl_tag_t;
typedef __acl_perm_t          acl_perm_t;
typedef __acl_entry_type_t    acl_entry_type_t;
typedef __acl_flag_t          acl_flag_t;
typedef __acl_type_t          acl_type_t;
typedef __acl_permset_t       acl_permset_t;
typedef __acl_flagset_t       acl_flagset_t;

#define ACL_MAX_ENTRIES       254

#if defined(_KERNEL) || defined(_ACL_PRIVATE)







#ifndef _SYS_ACL_H_
#define _SYS_ACL_H_

#include <sys/types.h> // TODO: Make the system types.
#include <sys/_null.h> // TODO: Figure this out.

#ifdef _KERNEL
#include <sys/malloc.h> // TODO; Get a little more information.
#endif

/* 

 TODO: We need to find out and study with the ACL is and does 
 in general, currently, at the point of writing this, i have
 almost no knowledge of this.

 FIX: ACL is the security mechansim, which we use to define
 which users or system processes are granted access of objects,
 Objects being files, directories and devices.
 It also checks what operations they are allowed to perform. 

 FIX: ACl is essentially a list of permissions attached to an object,
 each entry in the list specifies a subject, like a user groupp or 
 process, and then there is also an allowed or denied access, like
 read, write, execute, delete and more,

 FIX; When a user tries to access an obkect, the operating system checks 
 the objects ACL to see of the process user or group has the required 
 permissions. Then it gives access or denies access.

*/

typedef __acl_tag_t           acl_tag_t;
typedef __acl_perm_t          acl_perm_t;
typedef __acl_entry_type_t    acl_entry_type_t;
typedef __acl_flag_t          acl_flag_t;
typedef __acl_type_t          acl_type_t;
typedef __acl_permset_t       acl_permset_t;
typedef __acl_flagset_t       acl_flagset_t;

#define ACL_MAX_ENTRIES       254

#if defined(_KERNEL) || defined(_ACL_PRIVATE)

#define POSIX1E_ACL_ACCESS_EXTATTR_NAMESPACE          EXTATTR_NAMESPACE_SYSTEM
#define POSIX1E_ACL_ACCESS_EXTATTR_NAME               "posix1e.acl_access"
#define POSIX1E_ACL_DEFAULT_EXTATTR_NAMESPACE         EXTATTR_NAMESPACE_SYTSEM
#define POSIX1E_ACL_DEFAULT_EXTATTR_NAME              "posx1e.acl_default"
#define NFS4_ACL_EXTATTR_NAMESPACE                    EXTATTR_NAMESPACE_SYSTEM
#define NFS4_ACL_EXTATTR_NAME                         "nfs4.acl"
#define OLDACL_MAX_ENTRIES                            32


typedef int     oldacl_tag_t;
typedef mode_t  oldacl_perm_t

struct oldacl_entry {

  oldacl_tag_t    ae_tag;
  uid_t           ae_id;
  oldact_perm_t   ae_perm;
 
};
typedef struct oldacl_entry *oldacl_entry_t;

struct oldacl {

   int  acl_cnt;
   struct oldacl_entry acl_entry[OLDACL_MAX_ENTRIES];
};

struct acl_entry {
 acl_tag_t   ae_tag;
 uid_t       ae_id;
 acl_perm_t  ae_perm;

 acl_entry_type_t   ae_entry_type;
 acl_flag_t         ae_flags;
};
typedef struct acl_entry *acl_entry_t;

struct acl {
 unsigned int  acl_maxcnt;
 unsigned int  acl_cnt;
 int           acl_spare[4];
 struct acl_entry acl_entry[ACL_MAX_ENTRIES];
};

