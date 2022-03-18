void ex5_1(){
    std::unique_ptr<TFile> myFile( TFile::Open("file.root", "RECREATE") );
    // for the random numbers
    std::default_random_engine generator;
    std::normal_distribution<double> distribution(0.,1.);

    auto tree = std::make_unique<TTree>("tree", "TreeEx5");

    float var;
    tree->Branch("branch0", &var);

    for (int iEntry = 0; iEntry < 1000; ++iEntry) {
        var = distribution(generator);
        // Fill the current value of 'var' into 'branch0'
        tree->Fill();
    }

    // Now write the header
    tree->Write();
}