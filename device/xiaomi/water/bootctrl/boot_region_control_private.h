#ifndef BOOT_REGION_CONTROL_PRIVATE_H
#define BOOT_REGION_CONTROL_PRIVATE_H

#include <stdint.h>
#include <sys/ioctl.h>

#define MTK_BOOT_SLOT_SET _IOW('B', 0x01, struct boot_slot_info)

struct boot_slot_info {
    uint32_t slot;  // Boot slot: 0 või 1
};

#endif  // BOOT_REGION_CONTROL_PRIVATE_H
