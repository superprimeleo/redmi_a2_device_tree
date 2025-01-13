# Inherit from those products. Most specific first.
$(call inherit-product, $(SRC_TARGET_DIR)/product/aosp_base.mk)

# Inherit some common TWRP stuff.
$(call inherit-product, vendor/twrp/config/common.mk)


# Inherit from water device
$(call inherit-product, device/xiaomi/water/device.mk)

PRODUCT_DEVICE := water
PRODUCT_NAME := twrp_water
PRODUCT_BRAND := redmi
PRODUCT_MODEL := water
PRODUCT_MANUFACTURER := xiaomi
