/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 8; tab-width: 8-*- */
/*
 * freetuxtv
 * Copyright (C) FreetuxTV Team's 2008
 * Project homepage : http://code.google.com/p/freetuxtv/
 * 
 * freetuxtv is free software.
 * 
 */

#ifndef FREETUXTV_CHANNELS_LIST_H
#define FREETUXTV_CHANNELS_LIST_H

#include <gtk/gtk.h>

#include "freetuxtv-app.h"
#include "freetuxtv-channels-group-infos.h"

void
channels_list_init (FreetuxTVApp *app);

void
channels_list_apply_filter (FreetuxTVApp *app);

void
channels_list_load_channels (FreetuxTVApp *app);

void
channels_list_load_channels_group (FreetuxTVApp *app, GtkTreePath *path_group);

void
channels_list_add_channels_group (FreetuxTVApp *app, 
				  FreetuxTVChannelsGroupInfos* channels_group_infos);

void
channels_list_update_channels_group (FreetuxTVApp *app, GtkTreePath *path_group);

void
channels_list_delete_channels_channels_group (FreetuxTVApp *app, GtkTreePath *path_group);

void
channels_list_delete_channels_group (FreetuxTVApp *app, GtkTreePath *path_group);

gboolean
channels_list_get_prev_channel (FreetuxTVApp *app,
				GtkTreePath **path_prev_channel);

gboolean
channels_list_get_next_channel (FreetuxTVApp *app,
				GtkTreePath ** path_next_channel);

void
channels_list_set_playing(FreetuxTVApp *app, GtkTreePath *path_channel);

FreetuxTVChannelInfos*
channels_list_get_channel(FreetuxTVApp *app, GtkTreePath* path_channel);

FreetuxTVChannelsGroupInfos*
channels_list_get_group(FreetuxTVApp *app, GtkTreePath* path_group);

#endif /* FREETUXTV_CHANNELS_LIST_H */