#ifndef HLTrigger_HLTfilters_TriggerExpressionParser_h
#define HLTrigger_HLTfilters_TriggerExpressionParser_h

#include "HLTrigger/HLTcore/interface/TriggerExpressionPathReader.h"
#include "HLTrigger/HLTcore/interface/TriggerExpressionL1uGTReader.h"
#include "HLTrigger/HLTcore/interface/TriggerExpressionOperators.h"
#include "HLTrigger/HLTcore/interface/TriggerExpressionPrescaler.h"
#include "HLTrigger/HLTcore/interface/TriggerExpressionConstant.h"

namespace triggerExpression {

  Evaluator *parse(const std::string &text);
  // overloaded interface for null-terminated strings
  inline Evaluator *parse(const char *text);

}  // namespace triggerExpression

#endif  // HLTrigger_HLTfilters_TriggerExpressionParser_h
