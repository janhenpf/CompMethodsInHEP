from array import array
import ROOT
import random

myFile = ROOT.TFile.Open("file.root", "RECREATE")
tree = ROOT.TTree("tree", "TreeEx6")

# Provide a one-element array, so ROOT can read data from this memory.
var = array('f', [ 0 ])
tree.Branch("branch0", var, "leafname/F")

for iEntry in range(1000):
   var[0] = random.gauss(0,1)
   # Fill the current value of `var` into `branch0`
   tree.Fill()

# Now write the header
tree.Write()