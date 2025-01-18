LOCAL_PATH := device/xiaomi/water
# Dynamic Partitions
PRODUCT_USE_DYNAMIC_PARTITIONS := true

# Virtual A/B
ENABLE_VIRTUAL_AB := true
$(call inherit-product, $(SRC_TARGET_DIR)/product/virtual_ab_ota.mk)


PRODUCT_DEVICE := water
PRODUCT_NAME := twrp_water
PRODUCT_BRAND := Redmi
PRODUCT_MODEL := Redmi A2
PRODUCT_MANUFACTURER := Xiaomi
