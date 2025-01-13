#include "boot_region_control_private.h"
#include "boot_control_definition.h"

namespace android {
namespace boot_control {

bool SetBootSlot(unsigned int slot) {
    // Exampe: Device and chipset specific command
    int ioctl_fd = open("/dev/block/platform/mtk-mmc/boot", O_RDWR);
    if (ioctl_fd < 0) {
        return false;
    }
    
    struct boot_slot_info info;
    info.slot = slot;

    if (ioctl(ioctl_fd, MTK_BOOT_SLOT_SET, &info) < 0) {
        close(ioctl_fd);
        return false;
    }

    close(ioctl_fd);
    return true;
}

}  // namespace boot_control
}  // namespace android
