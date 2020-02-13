/*******************************************************************************
* Copyright 2014-2019 Intel Corporation
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*******************************************************************************/

// Definitions/declarations, mapping cython names/types to DAAL's actual types

#ifndef _MODELBUILDER_INCLUDED_
#define _MODELBUILDER_INCLUDED_

#include <daal.h>

typedef daal::algorithms::decision_forest::classification::ModelBuilder c_decision_forest_classification_ModelBuilder;
typedef c_decision_forest_classification_ModelBuilder::NodeId c_NodeId;
typedef c_decision_forest_classification_ModelBuilder::TreeId c_TreeId;

#define c_noParent c_decision_forest_classification_ModelBuilder::noParent

static daal::algorithms::decision_forest::classification::ModelPtr *
get_decision_forest_classification_modelbuilder_Model(daal::algorithms::decision_forest::classification::ModelBuilder * obj_)
{
    return RAW< daal::algorithms::decision_forest::classification::ModelPtr >()(obj_->getModel());
}

#endif // _MODELBUILDER_INCLUDED_