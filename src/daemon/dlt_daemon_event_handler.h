/*
 * @licence app begin@
 * SPDX license identifier: MPL-2.0
 *
 * Copyright (C) 2015 Advanced Driver Information Technology.
 * This code is developed by Advanced Driver Information Technology.
 * Copyright of Advanced Driver Information Technology, Bosch and DENSO.
 *
 * This file is part of GENIVI Project DLT - Diagnostic Log and Trace.
 *
 * This Source Code Form is subject to the terms of the
 * Mozilla Public License (MPL), v. 2.0.
 * If a copy of the MPL was not distributed with this file,
 * You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * For further information see http://www.genivi.org/.
 * @licence end@
 */

/*!
 * \author
 * Frederic Berat <fberat@de.adit-jv.com>
 *
 * \copyright Copyright © 2015 Advanced Driver Information Technology. \n
 * License MPL-2.0: Mozilla Public License version 2.0 http://mozilla.org/MPL/2.0/.
 *
 * \file dlt_daemon_event_handler.h
 */

#include <sys/epoll.h>

#include "dlt_daemon_connection_types.h"
#include "dlt_daemon_event_handler_types.h"
#include "dlt-daemon.h"

#ifndef DLT_DAEMON_EVENT_HANDLER_H
#   define DLT_DAEMON_EVENT_HANDLER_H

int dlt_daemon_prepare_event_handling(DltEventHandler *);
int dlt_daemon_handle_event(DltEventHandler *, DltDaemon *, DltDaemonLocal *);

DltConnection *dlt_event_handler_find_connection(DltEventHandler *,
                                               int);

void dlt_event_handler_cleanup_connections(DltEventHandler *);

int dlt_event_handler_register_connection(DltEventHandler *,
                                         DltDaemonLocal *,
                                         DltConnection *,
                                         int);

int dlt_event_handler_unregister_connection(DltEventHandler *,
                                           DltDaemonLocal *,
                                           int);

int dlt_connection_check_activate(DltEventHandler *,
                                  DltConnection *,
                                  int);
#endif /* DLT_DAEMON_EVENT_HANDLER_H */