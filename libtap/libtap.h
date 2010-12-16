#ifndef __LIBTAP_H__
#define __LIBTAP_H__

typedef struct knet_tap *knet_tap_t;

knet_tap_t knet_tap_open(char *dev, size_t dev_size);
void knet_tap_close(knet_tap_t knet_tap);

int knet_tap_get_fd(const knet_tap_t knet_tap);

int knet_tap_get_mtu(const knet_tap_t knet_tap);
int knet_tap_set_mtu(knet_tap_t knet_tap, const int mtu);

int knet_tap_get_mac(const knet_tap_t knet_tap, char **ether_addr);
int knet_tap_set_mac(knet_tap_t knet_tap, const char *ether_addr);

int knet_tap_set_up(knet_tap_t knet_tap);
int knet_tap_set_down(knet_tap_t knet_tap);

int knet_tap_add_ip(knet_tap_t knet_tap, const char *ip_addr, const char *prefix);
int knet_tap_del_ip(knet_tap_t knet_tap, const char *ip_addr, const char *prefix);

#endif