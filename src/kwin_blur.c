#include <stdlib.h>
#include <stdint.h>
#include "wayland-util.h"

extern const struct wl_interface org_kde_kwin_blur_interface;
extern const struct wl_interface wl_region_interface;
extern const struct wl_interface wl_surface_interface;

static const struct wl_interface *blur_types[] = {
	&org_kde_kwin_blur_interface,
	&wl_surface_interface,
	&wl_surface_interface,
	&wl_region_interface,
};

static const struct wl_message org_kde_kwin_blur_manager_requests[] = {
	{ "create", "no", blur_types + 0 },
	{ "unset", "o", blur_types + 2 },
};

WL_EXPORT const struct wl_interface org_kde_kwin_blur_manager_interface = {
	"org_kde_kwin_blur_manager", 1,
	2, org_kde_kwin_blur_manager_requests,
	0, NULL,
};

static const struct wl_message org_kde_kwin_blur_requests[] = {
	{ "commit", "", blur_types + 0 },
	{ "set_region", "?o", blur_types + 3 },
	{ "release", "", blur_types + 0 },
};

WL_EXPORT const struct wl_interface org_kde_kwin_blur_interface = {
	"org_kde_kwin_blur", 1,
	3, org_kde_kwin_blur_requests,
	0, NULL,
};

