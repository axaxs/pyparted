/*
 * Code modified from original to work with Python 3
 * Alex Skinner
 * alex@lx.lc
 * 12/28/2012
 *
 * _pedmodule.h
 *
 * Copyright (C) 2007, 2008, 2009  Red Hat, Inc.
 *
 * This copyrighted material is made available to anyone wishing to use,
 * modify, copy, or redistribute it subject to the terms and conditions of
 * the GNU General Public License v.2, or (at your option) any later version.
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY expressed or implied, including the implied warranties of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General
 * Public License for more details.  You should have received a copy of the
 * GNU General Public License along with this program; if not, write to the
 * Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301, USA.  Any Red Hat trademarks that are incorporated in the
 * source code or documentation are not subject to the GNU General Public
 * License and may only be used or replicated with the express permission of
 * Red Hat, Inc.
 *
 * Red Hat Author(s): David Cantrell <dcantrell@redhat.com>
 */

#ifndef _PARTEDMODULE_H_INCLUDED
#define _PARTEDMODULE_H_INCLUDED

#include <Python.h>

extern PyObject *py_libparted_get_version(PyObject *, PyObject *);
extern PyObject *py_pyparted_version(PyObject *, PyObject *);
extern PyMODINIT_FUNC PyInit__ped(void);

#endif /* _PARTEDMODULE_H_INCLUDED */

/* vim:tw=78:ts=4:et:sw=4
 */
