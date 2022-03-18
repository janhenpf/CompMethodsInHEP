void ex5_2(){
    std::unique_ptr<TFile> myFile( TFile::Open("file.root") );
    auto tree = myFile->Get<TTree>("TreeEx5");

    float variable;
    tree->SetBranchAddress("branch0", &variable);

    TH1F* histo = new TH1F("histo","",100,-3,3);
    histo->SetTitle("Histogram;x;y");
    
    for (int iEntry = 0; tree->LoadTree(iEntry) >= 0; ++iEntry) {
        // Load the data for the given tree entry
        tree->GetEntry(iEntry);
        
        // Now, 'variable' is set to the value of the branch
        // "branch0" in tree entry 'iEntry'
        histo->Fill(variable);
    }
    histo->Draw();
    histo->Fit("gaus");
}