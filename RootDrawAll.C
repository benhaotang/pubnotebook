// RootDrawAll Function by BenhaoTang at 2021
// - Test OK with Root>6.0 and OS!=Windows
// - Export All Canvas in One ROOT File to Certain Type
// - Export File Type can be pdf,png,jpg,tex,tiff...
void RootDrawAll(char const *ofn/*original root file path*/,char const *type = "pdf"/*export type*/){
    TFile *file = new TFile(ofn,"read");
    for (auto&& keyAsObj : *file->GetListOfKeys()){
        auto key = (TKey*) keyAsObj;
        TTree *newtree=file->Get<TTree>(key->GetName());
        TObjArray* leaves  = newtree->GetListOfLeaves();
        Int_t nleaves = leaves->GetEntriesFast();
        for (Int_t i = 0; i < nleaves; i++) {
            TLeaf* leaf = (TLeaf*) leaves->UncheckedAt(i);
            cout<<leaf->GetName();
            auto canvas= new TCanvas();
            char *fn;/*naming the file*/
            fn=new char[1];
            strcpy(fn,key->GetName());
            strcat(fn,"_");
            strcat(fn,leaf->GetName());
            strcat(fn,".");
            strcat(fn,type);
            newtree->Draw(leaf->GetName());
            canvas->Print(fn);
        }
    }
}