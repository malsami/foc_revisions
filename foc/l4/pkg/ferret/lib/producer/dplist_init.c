/**
 * \file   ferret/lib/sensor/dplist_init.c
 * \brief  dplist init functions.
 *
 * \date   2007-06-12
 * \author Martin Pohlack  <mp26@os.inf.tu-dresden.de>
 */
/*
 * (c) 2007-2009 Technische Universität Dresden
 * This file is part of TUD:OS and distributed under the terms of the
 * GNU General Public License 2.
 * Please see the COPYING-GPL-2 file for details.
 */

#include <l4/ferret/sensors/dplist.h>
#include <l4/ferret/sensors/dplist_init.h>

#include <l4/ferret/sensors/__dplist_magic.h>
#define FERRET_LLIST_MAGIC ahK6eeNa
#include "__llist_init.c"
