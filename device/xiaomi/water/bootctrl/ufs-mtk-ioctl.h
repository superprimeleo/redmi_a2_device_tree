#ifndef UFS_MTK_IOCTL_H
#define UFS_MTK_IOCTL_H

#include <linux/ioctl.h>

#define UFS_IOCTL_MAGIC 'u'

struct ufs_slot_info {
    uint32_t current_slot;  // Active boot slot
};

#endif  // UFS_MTK_IOCTL_H
