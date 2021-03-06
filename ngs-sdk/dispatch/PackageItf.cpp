/*===========================================================================
*
*                            PUBLIC DOMAIN NOTICE
*               National Center for Biotechnology Information
*
*  This software/database is a "United States Government Work" under the
*  terms of the United States Copyright Act.  It was written as part of
*  the author's official duties as a United States Government employee and
*  thus cannot be copyrighted.  This software/database is freely available
*  to the public for use. The National Library of Medicine and the U.S.
*  Government have not placed any restriction on its use or reproduction.
*
*  Although all reasonable efforts have been taken to ensure the accuracy
*  and reliability of the software and data, the NLM and the U.S.
*  Government do not and cannot warrant the performance or results that
*  may be obtained by using this software or data. The NLM and the U.S.
*  Government disclaim all warranties, express or implied, including
*  warranties of performance, merchantability or fitness for any particular
*  purpose.
*
*  Please cite the author in any work or product based on this material.
*
* ===========================================================================
*
*/

#include <ngs/itf/PackageItf.hpp>
#include <ngs/itf/StringItf.hpp>

#include "version.h" // NGS_SDK_VERSION

namespace ngs
{

    /*----------------------------------------------------------------------
     * PackageItf
     */

    String PackageItf :: getPackageVersion ()
        NGS_THROWS ( ErrorMsg )
    {
        return String ( NGS_SDK_VERSION );
    }

} // namespace ngs

extern "C" {
    const char * ngs_PackageItf_getPackageVersion () {
        static const ngs::String version (ngs::PackageItf::getPackageVersion());
        return version . data ();
    }
}
