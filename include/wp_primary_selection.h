#ifndef WP_PRIMARY_SELECTION_UNSTABLE_V1_CLIENT_PROTOCOL_H
#define WP_PRIMARY_SELECTION_UNSTABLE_V1_CLIENT_PROTOCOL_H

#include <stdint.h>
#include <stddef.h>
#include "wayland-client.h"

#ifdef  __cplusplus
extern "C" {
#endif

struct wl_seat;
struct zwp_primary_selection_device_manager_v1;
struct zwp_primary_selection_device_v1;
struct zwp_primary_selection_offer_v1;
struct zwp_primary_selection_source_v1;

/**
 * @page page_iface_zwp_primary_selection_device_manager_v1 zwp_primary_selection_device_manager_v1
 * @section page_iface_zwp_primary_selection_device_manager_v1_desc Description
 *
 * The primary selection device manager is a singleton global object that
 * provides access to the primary selection. It allows to create
 * wp_primary_selection_source objects, as well as retrieving the per-seat
 * wp_primary_selection_device objects.
 * @section page_iface_zwp_primary_selection_device_manager_v1_api API
 * See @ref iface_zwp_primary_selection_device_manager_v1.
 */
/**
 * @defgroup iface_zwp_primary_selection_device_manager_v1 The zwp_primary_selection_device_manager_v1 interface
 *
 * The primary selection device manager is a singleton global object that
 * provides access to the primary selection. It allows to create
 * wp_primary_selection_source objects, as well as retrieving the per-seat
 * wp_primary_selection_device objects.
 */
extern const struct wl_interface zwp_primary_selection_device_manager_v1_interface;
/**
 * @page page_iface_zwp_primary_selection_device_v1 zwp_primary_selection_device_v1
 * @section page_iface_zwp_primary_selection_device_v1_api API
 * See @ref iface_zwp_primary_selection_device_v1.
 */
/**
 * @defgroup iface_zwp_primary_selection_device_v1 The zwp_primary_selection_device_v1 interface
 */
extern const struct wl_interface zwp_primary_selection_device_v1_interface;
/**
 * @page page_iface_zwp_primary_selection_offer_v1 zwp_primary_selection_offer_v1
 * @section page_iface_zwp_primary_selection_offer_v1_desc Description
 *
 * A wp_primary_selection_offer represents an offer to transfer the contents
 * of the primary selection clipboard to the client. Similar to
 * wl_data_offer, the offer also describes the mime types that the data can
 * be converted to and provides the mechanisms for transferring the data
 * directly to the client.
 * @section page_iface_zwp_primary_selection_offer_v1_api API
 * See @ref iface_zwp_primary_selection_offer_v1.
 */
/**
 * @defgroup iface_zwp_primary_selection_offer_v1 The zwp_primary_selection_offer_v1 interface
 *
 * A wp_primary_selection_offer represents an offer to transfer the contents
 * of the primary selection clipboard to the client. Similar to
 * wl_data_offer, the offer also describes the mime types that the data can
 * be converted to and provides the mechanisms for transferring the data
 * directly to the client.
 */
extern const struct wl_interface zwp_primary_selection_offer_v1_interface;
/**
 * @page page_iface_zwp_primary_selection_source_v1 zwp_primary_selection_source_v1
 * @section page_iface_zwp_primary_selection_source_v1_desc Description
 *
 * The source side of a wp_primary_selection_offer, it provides a way to
 * describe the offered data and respond to requests to transfer the
 * requested contents of the primary selection clipboard.
 * @section page_iface_zwp_primary_selection_source_v1_api API
 * See @ref iface_zwp_primary_selection_source_v1.
 */
/**
 * @defgroup iface_zwp_primary_selection_source_v1 The zwp_primary_selection_source_v1 interface
 *
 * The source side of a wp_primary_selection_offer, it provides a way to
 * describe the offered data and respond to requests to transfer the
 * requested contents of the primary selection clipboard.
 */
extern const struct wl_interface zwp_primary_selection_source_v1_interface;

#define ZWP_PRIMARY_SELECTION_DEVICE_MANAGER_V1_CREATE_SOURCE 0
#define ZWP_PRIMARY_SELECTION_DEVICE_MANAGER_V1_GET_DEVICE 1
#define ZWP_PRIMARY_SELECTION_DEVICE_MANAGER_V1_DESTROY 2


/**
 * @ingroup iface_zwp_primary_selection_device_manager_v1
 */
#define ZWP_PRIMARY_SELECTION_DEVICE_MANAGER_V1_CREATE_SOURCE_SINCE_VERSION 1
/**
 * @ingroup iface_zwp_primary_selection_device_manager_v1
 */
#define ZWP_PRIMARY_SELECTION_DEVICE_MANAGER_V1_GET_DEVICE_SINCE_VERSION 1
/**
 * @ingroup iface_zwp_primary_selection_device_manager_v1
 */
#define ZWP_PRIMARY_SELECTION_DEVICE_MANAGER_V1_DESTROY_SINCE_VERSION 1

/** @ingroup iface_zwp_primary_selection_device_manager_v1 */
static inline void
zwp_primary_selection_device_manager_v1_set_user_data(struct zwp_primary_selection_device_manager_v1 *zwp_primary_selection_device_manager_v1, void *user_data)
{
	wl_proxy_set_user_data((struct wl_proxy *) zwp_primary_selection_device_manager_v1, user_data);
}

/** @ingroup iface_zwp_primary_selection_device_manager_v1 */
static inline void *
zwp_primary_selection_device_manager_v1_get_user_data(struct zwp_primary_selection_device_manager_v1 *zwp_primary_selection_device_manager_v1)
{
	return wl_proxy_get_user_data((struct wl_proxy *) zwp_primary_selection_device_manager_v1);
}

static inline uint32_t
zwp_primary_selection_device_manager_v1_get_version(struct zwp_primary_selection_device_manager_v1 *zwp_primary_selection_device_manager_v1)
{
	return wl_proxy_get_version((struct wl_proxy *) zwp_primary_selection_device_manager_v1);
}

/**
 * @ingroup iface_zwp_primary_selection_device_manager_v1
 *
 * Create a new primary selection source.
 */
static inline struct zwp_primary_selection_source_v1 *
zwp_primary_selection_device_manager_v1_create_source(struct zwp_primary_selection_device_manager_v1 *zwp_primary_selection_device_manager_v1)
{
	struct wl_proxy *id;

	id = wl_proxy_marshal_constructor((struct wl_proxy *) zwp_primary_selection_device_manager_v1,
			 ZWP_PRIMARY_SELECTION_DEVICE_MANAGER_V1_CREATE_SOURCE, &zwp_primary_selection_source_v1_interface, NULL);

	return (struct zwp_primary_selection_source_v1 *) id;
}

/**
 * @ingroup iface_zwp_primary_selection_device_manager_v1
 *
 * Create a new data device for a given seat.
 */
static inline struct zwp_primary_selection_device_v1 *
zwp_primary_selection_device_manager_v1_get_device(struct zwp_primary_selection_device_manager_v1 *zwp_primary_selection_device_manager_v1, struct wl_seat *seat)
{
	struct wl_proxy *id;

	id = wl_proxy_marshal_constructor((struct wl_proxy *) zwp_primary_selection_device_manager_v1,
			 ZWP_PRIMARY_SELECTION_DEVICE_MANAGER_V1_GET_DEVICE, &zwp_primary_selection_device_v1_interface, NULL, seat);

	return (struct zwp_primary_selection_device_v1 *) id;
}

/**
 * @ingroup iface_zwp_primary_selection_device_manager_v1
 *
 * Destroy the primary selection device manager.
 */
static inline void
zwp_primary_selection_device_manager_v1_destroy(struct zwp_primary_selection_device_manager_v1 *zwp_primary_selection_device_manager_v1)
{
	wl_proxy_marshal((struct wl_proxy *) zwp_primary_selection_device_manager_v1,
			 ZWP_PRIMARY_SELECTION_DEVICE_MANAGER_V1_DESTROY);

	wl_proxy_destroy((struct wl_proxy *) zwp_primary_selection_device_manager_v1);
}

/**
 * @ingroup iface_zwp_primary_selection_device_v1
 * @struct zwp_primary_selection_device_v1_listener
 */
struct zwp_primary_selection_device_v1_listener {
	/**
	 * introduce a new wp_primary_selection_offer
	 *
	 * Introduces a new wp_primary_selection_offer object that may be
	 * used to receive the current primary selection. Immediately
	 * following this event, the new wp_primary_selection_offer object
	 * will send wp_primary_selection_offer.offer events to describe
	 * the offered mime types.
	 */
	void (*data_offer)(void *data,
			   struct zwp_primary_selection_device_v1 *zwp_primary_selection_device_v1,
			   struct zwp_primary_selection_offer_v1 *offer);
	/**
	 * advertise a new primary selection
	 *
	 * The wp_primary_selection_device.selection event is sent to
	 * notify the client of a new primary selection. This event is sent
	 * after the wp_primary_selection.data_offer event introducing this
	 * object, and after the offer has announced its mimetypes through
	 * wp_primary_selection_offer.offer.
	 *
	 * The data_offer is valid until a new offer or NULL is received or
	 * until the client loses keyboard focus. The client must destroy
	 * the previous selection data_offer, if any, upon receiving this
	 * event.
	 */
	void (*selection)(void *data,
			  struct zwp_primary_selection_device_v1 *zwp_primary_selection_device_v1,
			  struct zwp_primary_selection_offer_v1 *id);
};

/**
 * @ingroup iface_zwp_primary_selection_device_v1
 */
static inline int
zwp_primary_selection_device_v1_add_listener(struct zwp_primary_selection_device_v1 *zwp_primary_selection_device_v1,
					     const struct zwp_primary_selection_device_v1_listener *listener, void *data)
{
	return wl_proxy_add_listener((struct wl_proxy *) zwp_primary_selection_device_v1,
				     (void (**)(void)) listener, data);
}

#define ZWP_PRIMARY_SELECTION_DEVICE_V1_SET_SELECTION 0
#define ZWP_PRIMARY_SELECTION_DEVICE_V1_DESTROY 1

/**
 * @ingroup iface_zwp_primary_selection_device_v1
 */
#define ZWP_PRIMARY_SELECTION_DEVICE_V1_DATA_OFFER_SINCE_VERSION 1
/**
 * @ingroup iface_zwp_primary_selection_device_v1
 */
#define ZWP_PRIMARY_SELECTION_DEVICE_V1_SELECTION_SINCE_VERSION 1

/**
 * @ingroup iface_zwp_primary_selection_device_v1
 */
#define ZWP_PRIMARY_SELECTION_DEVICE_V1_SET_SELECTION_SINCE_VERSION 1
/**
 * @ingroup iface_zwp_primary_selection_device_v1
 */
#define ZWP_PRIMARY_SELECTION_DEVICE_V1_DESTROY_SINCE_VERSION 1

/** @ingroup iface_zwp_primary_selection_device_v1 */
static inline void
zwp_primary_selection_device_v1_set_user_data(struct zwp_primary_selection_device_v1 *zwp_primary_selection_device_v1, void *user_data)
{
	wl_proxy_set_user_data((struct wl_proxy *) zwp_primary_selection_device_v1, user_data);
}

/** @ingroup iface_zwp_primary_selection_device_v1 */
static inline void *
zwp_primary_selection_device_v1_get_user_data(struct zwp_primary_selection_device_v1 *zwp_primary_selection_device_v1)
{
	return wl_proxy_get_user_data((struct wl_proxy *) zwp_primary_selection_device_v1);
}

static inline uint32_t
zwp_primary_selection_device_v1_get_version(struct zwp_primary_selection_device_v1 *zwp_primary_selection_device_v1)
{
	return wl_proxy_get_version((struct wl_proxy *) zwp_primary_selection_device_v1);
}

/**
 * @ingroup iface_zwp_primary_selection_device_v1
 *
 * Replaces the current selection. The previous owner of the primary
 * selection will receive a wp_primary_selection_source.cancelled event.
 *
 * To unset the selection, set the source to NULL.
 */
static inline void
zwp_primary_selection_device_v1_set_selection(struct zwp_primary_selection_device_v1 *zwp_primary_selection_device_v1, struct zwp_primary_selection_source_v1 *source, uint32_t serial)
{
	wl_proxy_marshal((struct wl_proxy *) zwp_primary_selection_device_v1,
			 ZWP_PRIMARY_SELECTION_DEVICE_V1_SET_SELECTION, source, serial);
}

/**
 * @ingroup iface_zwp_primary_selection_device_v1
 *
 * Destroy the primary selection device.
 */
static inline void
zwp_primary_selection_device_v1_destroy(struct zwp_primary_selection_device_v1 *zwp_primary_selection_device_v1)
{
	wl_proxy_marshal((struct wl_proxy *) zwp_primary_selection_device_v1,
			 ZWP_PRIMARY_SELECTION_DEVICE_V1_DESTROY);

	wl_proxy_destroy((struct wl_proxy *) zwp_primary_selection_device_v1);
}

/**
 * @ingroup iface_zwp_primary_selection_offer_v1
 * @struct zwp_primary_selection_offer_v1_listener
 */
struct zwp_primary_selection_offer_v1_listener {
	/**
	 * advertise offered mime type
	 *
	 * Sent immediately after creating announcing the
	 * wp_primary_selection_offer through
	 * wp_primary_selection_device.data_offer. One event is sent per
	 * offered mime type.
	 */
	void (*offer)(void *data,
		      struct zwp_primary_selection_offer_v1 *zwp_primary_selection_offer_v1,
		      const char *mime_type);
};

/**
 * @ingroup iface_zwp_primary_selection_offer_v1
 */
static inline int
zwp_primary_selection_offer_v1_add_listener(struct zwp_primary_selection_offer_v1 *zwp_primary_selection_offer_v1,
					    const struct zwp_primary_selection_offer_v1_listener *listener, void *data)
{
	return wl_proxy_add_listener((struct wl_proxy *) zwp_primary_selection_offer_v1,
				     (void (**)(void)) listener, data);
}

#define ZWP_PRIMARY_SELECTION_OFFER_V1_RECEIVE 0
#define ZWP_PRIMARY_SELECTION_OFFER_V1_DESTROY 1

/**
 * @ingroup iface_zwp_primary_selection_offer_v1
 */
#define ZWP_PRIMARY_SELECTION_OFFER_V1_OFFER_SINCE_VERSION 1

/**
 * @ingroup iface_zwp_primary_selection_offer_v1
 */
#define ZWP_PRIMARY_SELECTION_OFFER_V1_RECEIVE_SINCE_VERSION 1
/**
 * @ingroup iface_zwp_primary_selection_offer_v1
 */
#define ZWP_PRIMARY_SELECTION_OFFER_V1_DESTROY_SINCE_VERSION 1

/** @ingroup iface_zwp_primary_selection_offer_v1 */
static inline void
zwp_primary_selection_offer_v1_set_user_data(struct zwp_primary_selection_offer_v1 *zwp_primary_selection_offer_v1, void *user_data)
{
	wl_proxy_set_user_data((struct wl_proxy *) zwp_primary_selection_offer_v1, user_data);
}

/** @ingroup iface_zwp_primary_selection_offer_v1 */
static inline void *
zwp_primary_selection_offer_v1_get_user_data(struct zwp_primary_selection_offer_v1 *zwp_primary_selection_offer_v1)
{
	return wl_proxy_get_user_data((struct wl_proxy *) zwp_primary_selection_offer_v1);
}

static inline uint32_t
zwp_primary_selection_offer_v1_get_version(struct zwp_primary_selection_offer_v1 *zwp_primary_selection_offer_v1)
{
	return wl_proxy_get_version((struct wl_proxy *) zwp_primary_selection_offer_v1);
}

/**
 * @ingroup iface_zwp_primary_selection_offer_v1
 *
 * To transfer the contents of the primary selection clipboard, the client
 * issues this request and indicates the mime type that it wants to
 * receive. The transfer happens through the passed file descriptor
 * (typically created with the pipe system call). The source client writes
 * the data in the mime type representation requested and then closes the
 * file descriptor.
 *
 * The receiving client reads from the read end of the pipe until EOF and
 * closes its end, at which point the transfer is complete.
 */
static inline void
zwp_primary_selection_offer_v1_receive(struct zwp_primary_selection_offer_v1 *zwp_primary_selection_offer_v1, const char *mime_type, int32_t fd)
{
	wl_proxy_marshal((struct wl_proxy *) zwp_primary_selection_offer_v1,
			 ZWP_PRIMARY_SELECTION_OFFER_V1_RECEIVE, mime_type, fd);
}

/**
 * @ingroup iface_zwp_primary_selection_offer_v1
 *
 * Destroy the primary selection offer.
 */
static inline void
zwp_primary_selection_offer_v1_destroy(struct zwp_primary_selection_offer_v1 *zwp_primary_selection_offer_v1)
{
	wl_proxy_marshal((struct wl_proxy *) zwp_primary_selection_offer_v1,
			 ZWP_PRIMARY_SELECTION_OFFER_V1_DESTROY);

	wl_proxy_destroy((struct wl_proxy *) zwp_primary_selection_offer_v1);
}

/**
 * @ingroup iface_zwp_primary_selection_source_v1
 * @struct zwp_primary_selection_source_v1_listener
 */
struct zwp_primary_selection_source_v1_listener {
	/**
	 * send the primary selection contents
	 *
	 * Request for the current primary selection contents from the
	 * client. Send the specified mime type over the passed file
	 * descriptor, then close it.
	 */
	void (*send)(void *data,
		     struct zwp_primary_selection_source_v1 *zwp_primary_selection_source_v1,
		     const char *mime_type,
		     int32_t fd);
	/**
	 * request for primary selection contents was canceled
	 *
	 * This primary selection source is no longer valid. The client
	 * should clean up and destroy this primary selection source.
	 */
	void (*cancelled)(void *data,
			  struct zwp_primary_selection_source_v1 *zwp_primary_selection_source_v1);
};

/**
 * @ingroup iface_zwp_primary_selection_source_v1
 */
static inline int
zwp_primary_selection_source_v1_add_listener(struct zwp_primary_selection_source_v1 *zwp_primary_selection_source_v1,
					     const struct zwp_primary_selection_source_v1_listener *listener, void *data)
{
	return wl_proxy_add_listener((struct wl_proxy *) zwp_primary_selection_source_v1,
				     (void (**)(void)) listener, data);
}

#define ZWP_PRIMARY_SELECTION_SOURCE_V1_OFFER 0
#define ZWP_PRIMARY_SELECTION_SOURCE_V1_DESTROY 1

/**
 * @ingroup iface_zwp_primary_selection_source_v1
 */
#define ZWP_PRIMARY_SELECTION_SOURCE_V1_SEND_SINCE_VERSION 1
/**
 * @ingroup iface_zwp_primary_selection_source_v1
 */
#define ZWP_PRIMARY_SELECTION_SOURCE_V1_CANCELLED_SINCE_VERSION 1

/**
 * @ingroup iface_zwp_primary_selection_source_v1
 */
#define ZWP_PRIMARY_SELECTION_SOURCE_V1_OFFER_SINCE_VERSION 1
/**
 * @ingroup iface_zwp_primary_selection_source_v1
 */
#define ZWP_PRIMARY_SELECTION_SOURCE_V1_DESTROY_SINCE_VERSION 1

/** @ingroup iface_zwp_primary_selection_source_v1 */
static inline void
zwp_primary_selection_source_v1_set_user_data(struct zwp_primary_selection_source_v1 *zwp_primary_selection_source_v1, void *user_data)
{
	wl_proxy_set_user_data((struct wl_proxy *) zwp_primary_selection_source_v1, user_data);
}

/** @ingroup iface_zwp_primary_selection_source_v1 */
static inline void *
zwp_primary_selection_source_v1_get_user_data(struct zwp_primary_selection_source_v1 *zwp_primary_selection_source_v1)
{
	return wl_proxy_get_user_data((struct wl_proxy *) zwp_primary_selection_source_v1);
}

static inline uint32_t
zwp_primary_selection_source_v1_get_version(struct zwp_primary_selection_source_v1 *zwp_primary_selection_source_v1)
{
	return wl_proxy_get_version((struct wl_proxy *) zwp_primary_selection_source_v1);
}

/**
 * @ingroup iface_zwp_primary_selection_source_v1
 *
 * This request adds a mime type to the set of mime types advertised to
 * targets. Can be called several times to offer multiple types.
 */
static inline void
zwp_primary_selection_source_v1_offer(struct zwp_primary_selection_source_v1 *zwp_primary_selection_source_v1, const char *mime_type)
{
	wl_proxy_marshal((struct wl_proxy *) zwp_primary_selection_source_v1,
			 ZWP_PRIMARY_SELECTION_SOURCE_V1_OFFER, mime_type);
}

/**
 * @ingroup iface_zwp_primary_selection_source_v1
 *
 * Destroy the primary selection source.
 */
static inline void
zwp_primary_selection_source_v1_destroy(struct zwp_primary_selection_source_v1 *zwp_primary_selection_source_v1)
{
	wl_proxy_marshal((struct wl_proxy *) zwp_primary_selection_source_v1,
			 ZWP_PRIMARY_SELECTION_SOURCE_V1_DESTROY);

	wl_proxy_destroy((struct wl_proxy *) zwp_primary_selection_source_v1);
}

#ifdef  __cplusplus
}
#endif

#endif
