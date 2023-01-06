/* $Id: AbstractProjectItem.hpp 410943 2013-08-22 20:54:31Z rafanovi $
 * ===========================================================================
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

/// @file AbstractProjectItem.hpp
/// User-defined methods of the data storage class.
///
/// This file was originally generated by application DATATOOL
/// using the following specifications:
/// 'gbproj.asn'.
///
/// New methods or data members can be added to it if needed.
/// See also: AbstractProjectItem_.hpp


#ifndef OBJECTS_GBPROJ_ABSTRACTPROJECTITEM_HPP
#define OBJECTS_GBPROJ_ABSTRACTPROJECTITEM_HPP


// generated includes
#include <objects/gbproj/AbstractProjectItem_.hpp>

// generated classes

BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::

/////////////////////////////////////////////////////////////////////////////
class NCBI_GBPROJ_EXPORT CAbstractProjectItem : public CAbstractProjectItem_Base
                                              , public CSerialUserOp
{
    typedef CAbstractProjectItem_Base Tparent;
public:
    // constructor
    CAbstractProjectItem(void);
    // destructor
    ~CAbstractProjectItem(void);

    void Set(CSerialObject& object);
    const CSerialObject& Get(void) const;
    const CSerialObject* GetObject(void) const;

    /// PreWrite() / PostRead to trap read/write conversion
    void PreWrite() const;
    void PostRead();

protected:
    virtual void UserOp_Assign(const CSerialUserOp& source);
    virtual bool UserOp_Equals(const CSerialUserOp& object) const;

private:
    // Prohibit copy constructor and assignment operator
    CAbstractProjectItem(const CAbstractProjectItem& value);
    CAbstractProjectItem& operator=(const CAbstractProjectItem& value);

    /// fall-back: non-serialized core object
    CRef<CSerialObject> m_OtherObject;
};

/////////////////// CAbstractProjectItem inline methods

// constructor
inline
CAbstractProjectItem::CAbstractProjectItem(void)
{
}


/////////////////// end of CAbstractProjectItem inline methods


NCBISER_HAVE_PRE_WRITE(CAbstractProjectItem)
NCBISER_HAVE_POST_READ(CAbstractProjectItem)

END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_GBPROJ_ABSTRACTPROJECTITEM_HPP
/* Original file checksum: lines: 86, chars: 2600, CRC32: 134ee6e6 */
