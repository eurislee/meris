#include <stdlib.h>
#include <stdint.h>
#include "wayland-util.h"

extern const struct wl_interface wl_seat_interface;
extern const struct wl_interface zwp_primary_selection_device_v1_interface;
extern const struct wl_interface zwp_primary_selection_offer_v1_interface;
extern const struct wl_interface zwp_primary_selection_source_v1_interface;

static const struct wl_interface *wp_primary_selection_unstable_v1_types[] = {
	NULL,
	NULL,
	&zwp_primary_selection_source_v1_interface,
	&zwp_primary_selection_device_v1_interface,
	&wl_seat_interface,
	&zwp_primary_selection_source_v1_interface,
	NULL,
	&zwp_primary_selection_offer_v1_interface,
	&zwp_primary_selection_offer_v1_interface,
};

static const struct wl_message zwp_primary_selection_device_manager_v1_requests[] = {
	{ "create_source", "n", wp_primary_selection_unstable_v1_types + 2 },
	{ "get_device", "no", wp_primary_selection_unstable_v1_types + 3 },
	{ "destroy", "", wp_primary_selection_unstable_v1_types + 0 },
};

WL_EXPORT const struct wl_interface zwp_primary_selection_device_manager_v1_interface = {
	"zwp_primary_selection_device_manager_v1", 1,
	3, zwp_primary_selection_device_manager_v1_requests,
	0, NULL,
};

static const struct wl_message zwp_primary_selection_device_v1_requests[] = {
	{ "set_selection", "?ou", wp_primary_selection_unstable_v1_types + 5 },
	{ "destroy", "", wp_primary_selection_unstable_v1_types + 0 },
};

static const struct wl_message zwp_primary_selection_device_v1_events[] = {
	{ "data_offer", "n", wp_primary_selection_unstable_v1_types + 7 },
	{ "selection", "?o", wp_primary_selection_unstable_v1_types + 8 },
};

WL_EXPORT const struct wl_interface zwp_primary_selection_device_v1_interface = {
	"zwp_primary_selection_device_v1", 1,
	2, zwp_primary_selection_device_v1_requests,
	2, zwp_primary_selection_device_v1_events,
};

static const struct wl_message zwp_primary_selection_offer_v1_requests[] = {
	{ "receive", "sh", wp_primary_selection_unstable_v1_types + 0 },
	{ "destroy", "", wp_primary_selection_unstable_v1_types + 0 },
};

static const struct wl_message zwp_primary_selection_offer_v1_events[] = {
	{ "offer", "s", wp_primary_selection_unstable_v1_types + 0 },
};

WL_EXPORT const struct wl_interface zwp_primary_selection_offer_v1_interface = {
	"zwp_primary_selection_offer_v1", 1,
	2, zwp_primary_selection_offer_v1_requests,
	1, zwp_primary_selection_offer_v1_events,
};

static const struct wl_message zwp_primary_selection_source_v1_requests[] = {
	{ "offer", "s", wp_primary_selection_unstable_v1_types + 0 },
	{ "destroy", "", wp_primary_selection_unstable_v1_types + 0 },
};

static const struct wl_message zwp_primary_selection_source_v1_events[] = {
	{ "send", "sh", wp_primary_selection_unstable_v1_types + 0 },
	{ "cancelled", "", wp_primary_selection_unstable_v1_types + 0 },
};

WL_EXPORT const struct wl_interface zwp_primary_selection_source_v1_interface = {
	"zwp_primary_selection_source_v1", 1,
	2, zwp_primary_selection_source_v1_requests,
	2, zwp_primary_selection_source_v1_events,
};

