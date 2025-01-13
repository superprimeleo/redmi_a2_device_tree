#include <iostream>
#include <fstream>
#include <string>
#include <unistd.h>

class MtkPlpathUtils {
public:
    // Constructor
    MtkPlpathUtils() {}

    // Sets the CPU governor for power management
    void setCpuGovernor(const std::string& governor) {
        const std::string cpu_path = "/sys/devices/system/cpu/";
        for (int i = 0; i < 4; ++i) {
            std::string cpu_governor_path = cpu_path + "cpu" + std::to_string(i) + "/cpufreq/scaling_governor";
            setSysfsValue(cpu_governor_path, governor);
        }
    }

    // Sets the CPU frequency limits for power efficiency
    void setCpuFrequencies(int min_freq, int max_freq) {
        const std::string cpu_path = "/sys/devices/system/cpu/";
        for (int i = 0; i < 4; ++i) {
            std::string min_freq_path = cpu_path + "cpu" + std::to_string(i) + "/cpufreq/scaling_min_freq";
            std::string max_freq_path = cpu_path + "cpu" + std::to_string(i) + "/cpufreq/scaling_max_freq";
            setSysfsValue(min_freq_path, std::to_string(min_freq));
            setSy
