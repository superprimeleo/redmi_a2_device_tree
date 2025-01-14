# Inherit from base AOSP product.
$(call inherit-product, $(SRC_TARGET_DIR)/product/aosp_base.mk)


# Inherit from the water device configuration
$(call inherit-product, device/xiaomi/water/device.mk)

# Device specific details
PRODUCT_DEVICE := water
PRODUCT_NAME := ofrp_water
PRODUCT_BRAND := Redmi
PRODUCT_MODEL := Redmi A2
PRODUCT_MANUFACTURER := Xiaomi
