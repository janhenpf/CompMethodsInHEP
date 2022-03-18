from array import array
import ROOT

myFile = ROOT.TFile.Open("file.root")
myTree = myFile.TreeEx6
histo = ROOT.TH1F("histo","Histogram",100,-3.,3.)
for entry in myTree:
    histo.Fill(entry.branch0)