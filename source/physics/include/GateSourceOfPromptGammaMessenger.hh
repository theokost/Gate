/*----------------------
  GATE version name: gate_v6

  Copyright (C): OpenGATE Collaboration

  This software is distributed under the terms
  of the GNU Lesser General  Public Licence (LGPL)
  See GATE/LICENSE.txt for further details
  ----------------------*/

#ifndef GATESOURCEPROMPTGAMMAEMISSIONMESSENGER_HH
#define GATESOURCEPROMPTGAMMAEMISSIONMESSENGER_HH

#include "G4UImessenger.hh"
#include "G4UIcmdWithAString.hh"
#include "GateConfiguration.h"
#include "GateVSourceMessenger.hh"
#include "GateSourceOfPromptGamma.hh"

class GateSourceOfPromptGamma;

//------------------------------------------------------------------------
class GateSourceOfPromptGammaMessenger: public GateVSourceMessenger
{
public:
  GateSourceOfPromptGammaMessenger(GateSourceOfPromptGamma* source);
  ~GateSourceOfPromptGammaMessenger();
  void SetNewValue(G4UIcommand*, G4String);

private:
  GateSourceOfPromptGamma * pSourceOfPromptGamma;
  G4UIcmdWithAString * pSetFilenameCmd;
};
//------------------------------------------------------------------------

#endif // end GATESOURCEPROMPTGAMMAEMISSIONMESSENGER
