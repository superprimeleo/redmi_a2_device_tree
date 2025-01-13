#ifndef MMC_MTK_IOCTL_H
#define MMC_MTK_IOCTL_H

#include <linux/ioctl.h>

#define MMC_IOC_MAGIC 'm'
#define MMC_IOC_SET_BOOT_SLOT _IOW(MMC_IOC_MAGIC, 1, struct mmc_boot_slot)

struct mmc_boot_slot {
    uint32_t slot;  // Boot slot
};

#endif  // MMC_MTK_IOCTL_H
