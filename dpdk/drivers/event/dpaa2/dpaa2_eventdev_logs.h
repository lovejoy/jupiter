/*-
 * SPDX-License-Identifier: BSD-3-Clause
 * Copyright 2018 NXP
 */

#ifndef _DPAA2_EVENTDEV_LOGS_H_
#define _DPAA2_EVENTDEV_LOGS_H_

extern int dpaa2_logtype_event;

#define DPAA2_EVENTDEV_LOG(level, fmt, args...) \
	rte_log(RTE_LOG_ ## level, dpaa2_logtype_event, "%s(): " fmt "\n", \
		__func__, ##args)

#define EVENTDEV_INIT_FUNC_TRACE() DPAA2_EVENTDEV_LOG(DEBUG, " >>")

#define DPAA2_EVENTDEV_DEBUG(fmt, args...) \
	DPAA2_EVENTDEV_LOG(DEBUG, fmt, ## args)
#define DPAA2_EVENTDEV_INFO(fmt, args...) \
	DPAA2_EVENTDEV_LOG(INFO, fmt, ## args)
#define DPAA2_EVENTDEV_ERR(fmt, args...) \
	DPAA2_EVENTDEV_LOG(ERR, fmt, ## args)
#define DPAA2_EVENTDEV_WARN(fmt, args...) \
	DPAA2_EVENTDEV_LOG(WARNING, fmt, ## args)

/* DP Logs, toggled out at compile time if level lower than current level */
#define DPAA2_EVENTDEV_DP_LOG(level, fmt, args...) \
	RTE_LOG_DP(level, PMD, fmt, ## args)

#define DPAA2_EVENTDEV_DP_DEBUG(fmt, args...) \
	DPAA2_EVENTDEV_DP_LOG(DEBUG, fmt, ## args)
#define DPAA2_EVENTDEV_DP_INFO(fmt, args...) \
	DPAA2_EVENTDEV_DP_LOG(INFO, fmt, ## args)
#define DPAA2_EVENTDEV_DP_WARN(fmt, args...) \
	DPAA2_EVENTDEV_DP_LOG(WARNING, fmt, ## args)

#endif /* _DPAA2_EVENTDEV_LOGS_H_ */
