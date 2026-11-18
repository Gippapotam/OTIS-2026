#pragma once
#include "InputSignals.h"
#include "Model.h"
#include <iosfwd>

void simulate(Model& model, const InputSignal& signal, int steps,
              std::ostream& csv, std::ostream& console);
