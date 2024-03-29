/*
 * Code modified from original to work with Python 3
 * Alex Skinner
 * alex@lx.lc
 * 12/28/2012
 *
 * convert.h
 * Functions for converting to/from Python _ped types and C libparted types
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
 *                    Chris Lumens <clumens@redhat.com>
 */

#ifndef CONVERT_H_INCLUDED
#define CONVERT_H_INCLUDED

#include <parted/parted.h>

#include "pyconstraint.h"
#include "pydevice.h"
#include "pydisk.h"
#include "pyfilesys.h"
#include "pygeom.h"
#include "pynatmath.h"
#include "pytimer.h"

PedAlignment *_ped_Alignment2PedAlignment(PyObject *);
_ped_Alignment *PedAlignment2_ped_Alignment(PedAlignment *);

PedConstraint *_ped_Constraint2PedConstraint(PyObject *);
_ped_Constraint *PedConstraint2_ped_Constraint(PedConstraint *);

PedDevice *_ped_Device2PedDevice(PyObject *);
_ped_Device *PedDevice2_ped_Device(PedDevice *);

PedDisk *_ped_Disk2PedDisk(PyObject *);
_ped_Disk *PedDisk2_ped_Disk(PedDisk *);

PedDiskType *_ped_DiskType2PedDiskType(PyObject *);
_ped_DiskType *PedDiskType2_ped_DiskType(const PedDiskType *);

PedFileSystem *_ped_FileSystem2PedFileSystem(PyObject *);
_ped_FileSystem *PedFileSystem2_ped_FileSystem(PedFileSystem *);

PedFileSystemType *_ped_FileSystemType2PedFileSystemType(PyObject *);
_ped_FileSystemType *PedFileSystemType2_ped_FileSystemType(const PedFileSystemType *);

PedGeometry *_ped_Geometry2PedGeometry(PyObject *);
_ped_Geometry *PedGeometry2_ped_Geometry(PedGeometry *);

PedCHSGeometry *_ped_CHSGeometry2PedCHSGeometry(PyObject *);
_ped_CHSGeometry *PedCHSGeometry2_ped_CHSGeometry(PedCHSGeometry *);

PedPartition *_ped_Partition2PedPartition(_ped_Partition *);
_ped_Partition *PedPartition2_ped_Partition(PedPartition *, _ped_Disk *);

PedTimer *_ped_Timer2PedTimer(PyObject *);
_ped_Timer *PedTimer2_ped_Timer(PedTimer *);

#endif /* CONVERT_H_INCLUDED */

/* vim:tw=78:ts=4:et:sw=4
 */
