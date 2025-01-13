#ifndef UFS_MTK_IOCTL_PRIVATE_H
#define UFS_MTK_IOCTL_PRIVATE_H

#include <linux/ioctl.h>

#define UFS_IOC_MAGIC 'u'
#define UFS_IOC_SET_BOOT_SLOT _IOW(UFS_IOC_MAGIC, 1, struct ufs_boot_slot)

struct ufs_boot_slot {
    uint32_t slot;  // Boot slot
};

#endif  // UFS_MTK_IOCTL_PRIVATE_H
