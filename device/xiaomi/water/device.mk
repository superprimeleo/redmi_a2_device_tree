# Device basic information
PRODUCT_DEVICE := water
PRODUCT_NAME := water
PRODUCT_MODEL := Redmi A2
PRODUCT_BRAND := Xiaomi
PRODUCT_MANUFACTURER := Xiaomi

# TWRP or OrangeFox specific configurations (if needed)
PRODUCT_RESELLER := OrangeFox
PRODUCT_VERSION := R11.1_2

# Build.prop overrides
PRODUCT_BUILD_PROP_OVERRIDES += \
    ro.product.device=$(PRODUCT_DEVICE) \
    ro.product.name=$(PRODUCT_NAME) \
    ro.product.model=$(PRODUCT_MODEL) \
    ro.product.brand=$(PRODUCT_BRAND) \
    ro.product.manufacturer=$(PRODUCT_MANUFACTURER)

# Additional tools and binaries for recovery
PRODUCT_PACKAGES += \
    libbootloader_message \
    parted \
    sgdisk \
    resize2fs \
    e2fsck

