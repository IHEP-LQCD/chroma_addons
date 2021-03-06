// -*- C++ -*-
/*! \file
 *  \brief Read object function std::map
 */

#ifndef __uky_read_obj_funcmap_h__
#define __uky_read_obj_funcmap_h__

#include "singleton.h"
#include "funcmap.h"
#include "chromabase.h"

namespace Chroma {

//! Read object function std::map
/*! \ingroup inlineio */
namespace UKYReadObjCallMapEnv {
struct DumbDisambiguator {};

//! Read object function std::map
/*! \ingroup inlineio */
typedef SingletonHolder<FunctionMap<
    DumbDisambiguator, void, std::string,
    TYPELIST_2(const std::string &, const std::string &),
    void (*)(const std::string &buffer_id, const std::string &filename),
    StringFunctionMapError> > TheUKYReadObjFuncMap;

bool registerAll();
}

} // end namespace Chroma

#endif
