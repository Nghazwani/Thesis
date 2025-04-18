void EBZS_CLUSSIZE_0006_0025_MuOverBins()
{
//=========Macro generated from canvas: c/c
//=========  (Sat Feb 10 01:48:20 2024) by ROOT version 6.12/07
   TCanvas *c = new TCanvas("c", "c",1,1,887,685);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetLeftMargin(0.14);
   c->SetRightMargin(0.04);
   c->SetTopMargin(0.13);
   c->SetBottomMargin(0.14);
   c->SetFrameBorderMode(0);
   
   TH1F *__10 = new TH1F("__10","",1,1,6);
   __10->SetMinimum(0.6);
   __10->SetMaximum(1.2);
   __10->SetDirectory(0);
   __10->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   __10->SetLineColor(ci);
   __10->GetXaxis()->SetTitle("size");
   __10->GetXaxis()->SetNdivisions(505);
   __10->GetXaxis()->SetLabelFont(42);
   __10->GetXaxis()->SetLabelSize(0.05);
   __10->GetXaxis()->SetTitleSize(0.06);
   __10->GetXaxis()->SetTitleFont(42);
   __10->GetYaxis()->SetTitle("#mu");
   __10->GetYaxis()->SetLabelFont(42);
   __10->GetYaxis()->SetLabelSize(0.05);
   __10->GetYaxis()->SetTitleSize(0.06);
   __10->GetYaxis()->SetTitleOffset(1.1);
   __10->GetYaxis()->SetTitleFont(42);
   __10->GetZaxis()->SetLabelFont(42);
   __10->GetZaxis()->SetLabelSize(0.035);
   __10->GetZaxis()->SetTitleSize(0.035);
   __10->GetZaxis()->SetTitleFont(42);
   __10->Draw("");
   Double_t xAxis1[4] = {1, 2, 3, 6}; 
   
   TH1F *mu_rawformula_clone__11 = new TH1F("mu_rawformula_clone__11","",3, xAxis1);
   mu_rawformula_clone__11->SetBinContent(1,1.000338);
   mu_rawformula_clone__11->SetBinContent(2,1.041057);
   mu_rawformula_clone__11->SetBinContent(3,1.088213);
   mu_rawformula_clone__11->SetBinError(1,5.010128);
   mu_rawformula_clone__11->SetBinError(2,1.108196);
   mu_rawformula_clone__11->SetBinError(3,0.1896032);
   mu_rawformula_clone__11->SetEntries(3);
   mu_rawformula_clone__11->SetStats(0);

   ci = 1179;
   color = new TColor(ci, 1, 0, 0, " ", 0.3);
   mu_rawformula_clone__11->SetFillColor(ci);
   mu_rawformula_clone__11->SetLineColor(2);
   mu_rawformula_clone__11->SetLineWidth(2);
   mu_rawformula_clone__11->SetMarkerSize(0);
   mu_rawformula_clone__11->GetXaxis()->SetLabelFont(42);
   mu_rawformula_clone__11->GetXaxis()->SetLabelSize(0.035);
   mu_rawformula_clone__11->GetXaxis()->SetTitleSize(0.035);
   mu_rawformula_clone__11->GetXaxis()->SetTitleFont(42);
   mu_rawformula_clone__11->GetYaxis()->SetLabelFont(42);
   mu_rawformula_clone__11->GetYaxis()->SetLabelSize(0.035);
   mu_rawformula_clone__11->GetYaxis()->SetTitleSize(0.035);
   mu_rawformula_clone__11->GetYaxis()->SetTitleOffset(0);
   mu_rawformula_clone__11->GetYaxis()->SetTitleFont(42);
   mu_rawformula_clone__11->GetZaxis()->SetLabelFont(42);
   mu_rawformula_clone__11->GetZaxis()->SetLabelSize(0.035);
   mu_rawformula_clone__11->GetZaxis()->SetTitleSize(0.035);
   mu_rawformula_clone__11->GetZaxis()->SetTitleFont(42);
   mu_rawformula_clone__11->Draw("SAMEE2");
   Double_t xAxis2[4] = {1, 2, 3, 6}; 
   
   TH1F *mu_rawformula__12 = new TH1F("mu_rawformula__12","",3, xAxis2);
   mu_rawformula__12->SetBinContent(1,1.000338);
   mu_rawformula__12->SetBinContent(2,1.041057);
   mu_rawformula__12->SetBinContent(3,1.088213);
   mu_rawformula__12->SetBinError(1,5.010128);
   mu_rawformula__12->SetBinError(2,1.108196);
   mu_rawformula__12->SetBinError(3,0.1896032);
   mu_rawformula__12->SetEntries(3);
   mu_rawformula__12->SetStats(0);
   mu_rawformula__12->SetLineColor(2);
   mu_rawformula__12->SetLineWidth(2);
   mu_rawformula__12->SetMarkerSize(0);
   mu_rawformula__12->GetXaxis()->SetLabelFont(42);
   mu_rawformula__12->GetXaxis()->SetLabelSize(0.035);
   mu_rawformula__12->GetXaxis()->SetTitleSize(0.035);
   mu_rawformula__12->GetXaxis()->SetTitleFont(42);
   mu_rawformula__12->GetYaxis()->SetLabelFont(42);
   mu_rawformula__12->GetYaxis()->SetLabelSize(0.035);
   mu_rawformula__12->GetYaxis()->SetTitleSize(0.035);
   mu_rawformula__12->GetYaxis()->SetTitleOffset(0);
   mu_rawformula__12->GetYaxis()->SetTitleFont(42);
   mu_rawformula__12->GetZaxis()->SetLabelFont(42);
   mu_rawformula__12->GetZaxis()->SetLabelSize(0.035);
   mu_rawformula__12->GetZaxis()->SetTitleSize(0.035);
   mu_rawformula__12->GetZaxis()->SetTitleFont(42);
   mu_rawformula__12->Draw("HISTSAMEE");
   Double_t xAxis3[4] = {1, 2, 3, 6}; 
   
   TH1F *mu_ecor74formula_clone__13 = new TH1F("mu_ecor74formula_clone__13","",3, xAxis3);
   mu_ecor74formula_clone__13->SetBinContent(1,1.069118);
   mu_ecor74formula_clone__13->SetBinContent(2,1.113128);
   mu_ecor74formula_clone__13->SetBinContent(3,1.159053);
   mu_ecor74formula_clone__13->SetBinError(1,5.007479);
   mu_ecor74formula_clone__13->SetBinError(2,1.043401);
   mu_ecor74formula_clone__13->SetBinError(3,0.1783075);
   mu_ecor74formula_clone__13->SetEntries(3);
   mu_ecor74formula_clone__13->SetStats(0);

   ci = 1180;
   color = new TColor(ci, 0, 1, 0, " ", 0.3);
   mu_ecor74formula_clone__13->SetFillColor(ci);
   mu_ecor74formula_clone__13->SetLineColor(3);
   mu_ecor74formula_clone__13->SetLineWidth(2);
   mu_ecor74formula_clone__13->SetMarkerSize(0);
   mu_ecor74formula_clone__13->GetXaxis()->SetLabelFont(42);
   mu_ecor74formula_clone__13->GetXaxis()->SetLabelSize(0.035);
   mu_ecor74formula_clone__13->GetXaxis()->SetTitleSize(0.035);
   mu_ecor74formula_clone__13->GetXaxis()->SetTitleFont(42);
   mu_ecor74formula_clone__13->GetYaxis()->SetLabelFont(42);
   mu_ecor74formula_clone__13->GetYaxis()->SetLabelSize(0.035);
   mu_ecor74formula_clone__13->GetYaxis()->SetTitleSize(0.035);
   mu_ecor74formula_clone__13->GetYaxis()->SetTitleOffset(0);
   mu_ecor74formula_clone__13->GetYaxis()->SetTitleFont(42);
   mu_ecor74formula_clone__13->GetZaxis()->SetLabelFont(42);
   mu_ecor74formula_clone__13->GetZaxis()->SetLabelSize(0.035);
   mu_ecor74formula_clone__13->GetZaxis()->SetTitleSize(0.035);
   mu_ecor74formula_clone__13->GetZaxis()->SetTitleFont(42);
   mu_ecor74formula_clone__13->Draw("SAMEE2");
   Double_t xAxis4[4] = {1, 2, 3, 6}; 
   
   TH1F *mu_ecor74formula__14 = new TH1F("mu_ecor74formula__14","",3, xAxis4);
   mu_ecor74formula__14->SetBinContent(1,1.069118);
   mu_ecor74formula__14->SetBinContent(2,1.113128);
   mu_ecor74formula__14->SetBinContent(3,1.159053);
   mu_ecor74formula__14->SetBinError(1,5.007479);
   mu_ecor74formula__14->SetBinError(2,1.043401);
   mu_ecor74formula__14->SetBinError(3,0.1783075);
   mu_ecor74formula__14->SetEntries(3);
   mu_ecor74formula__14->SetStats(0);
   mu_ecor74formula__14->SetLineColor(3);
   mu_ecor74formula__14->SetLineWidth(2);
   mu_ecor74formula__14->SetMarkerSize(0);
   mu_ecor74formula__14->GetXaxis()->SetLabelFont(42);
   mu_ecor74formula__14->GetXaxis()->SetLabelSize(0.035);
   mu_ecor74formula__14->GetXaxis()->SetTitleSize(0.035);
   mu_ecor74formula__14->GetXaxis()->SetTitleFont(42);
   mu_ecor74formula__14->GetYaxis()->SetLabelFont(42);
   mu_ecor74formula__14->GetYaxis()->SetLabelSize(0.035);
   mu_ecor74formula__14->GetYaxis()->SetTitleSize(0.035);
   mu_ecor74formula__14->GetYaxis()->SetTitleOffset(0);
   mu_ecor74formula__14->GetYaxis()->SetTitleFont(42);
   mu_ecor74formula__14->GetZaxis()->SetLabelFont(42);
   mu_ecor74formula__14->GetZaxis()->SetLabelSize(0.035);
   mu_ecor74formula__14->GetZaxis()->SetTitleSize(0.035);
   mu_ecor74formula__14->GetZaxis()->SetTitleFont(42);
   mu_ecor74formula__14->Draw("HISTSAMEE");
   Double_t xAxis5[4] = {1, 2, 3, 6}; 
   
   TH1F *mu_ecor91formula_clone__15 = new TH1F("mu_ecor91formula_clone__15","",3, xAxis5);
   mu_ecor91formula_clone__15->SetBinContent(1,1.069118);
   mu_ecor91formula_clone__15->SetBinContent(2,1.118215);
   mu_ecor91formula_clone__15->SetBinContent(3,1.159124);
   mu_ecor91formula_clone__15->SetBinError(1,5.007479);
   mu_ecor91formula_clone__15->SetBinError(2,1.095524);
   mu_ecor91formula_clone__15->SetBinError(3,0.1784119);
   mu_ecor91formula_clone__15->SetEntries(3);
   mu_ecor91formula_clone__15->SetStats(0);

   ci = 1181;
   color = new TColor(ci, 0, 0, 1, " ", 0.3);
   mu_ecor91formula_clone__15->SetFillColor(ci);
   mu_ecor91formula_clone__15->SetLineColor(4);
   mu_ecor91formula_clone__15->SetLineWidth(2);
   mu_ecor91formula_clone__15->SetMarkerSize(0);
   mu_ecor91formula_clone__15->GetXaxis()->SetLabelFont(42);
   mu_ecor91formula_clone__15->GetXaxis()->SetLabelSize(0.035);
   mu_ecor91formula_clone__15->GetXaxis()->SetTitleSize(0.035);
   mu_ecor91formula_clone__15->GetXaxis()->SetTitleFont(42);
   mu_ecor91formula_clone__15->GetYaxis()->SetLabelFont(42);
   mu_ecor91formula_clone__15->GetYaxis()->SetLabelSize(0.035);
   mu_ecor91formula_clone__15->GetYaxis()->SetTitleSize(0.035);
   mu_ecor91formula_clone__15->GetYaxis()->SetTitleOffset(0);
   mu_ecor91formula_clone__15->GetYaxis()->SetTitleFont(42);
   mu_ecor91formula_clone__15->GetZaxis()->SetLabelFont(42);
   mu_ecor91formula_clone__15->GetZaxis()->SetLabelSize(0.035);
   mu_ecor91formula_clone__15->GetZaxis()->SetTitleSize(0.035);
   mu_ecor91formula_clone__15->GetZaxis()->SetTitleFont(42);
   mu_ecor91formula_clone__15->Draw("SAMEE2");
   Double_t xAxis6[4] = {1, 2, 3, 6}; 
   
   TH1F *mu_ecor91formula__16 = new TH1F("mu_ecor91formula__16","",3, xAxis6);
   mu_ecor91formula__16->SetBinContent(1,1.069118);
   mu_ecor91formula__16->SetBinContent(2,1.118215);
   mu_ecor91formula__16->SetBinContent(3,1.159124);
   mu_ecor91formula__16->SetBinError(1,5.007479);
   mu_ecor91formula__16->SetBinError(2,1.095524);
   mu_ecor91formula__16->SetBinError(3,0.1784119);
   mu_ecor91formula__16->SetEntries(3);
   mu_ecor91formula__16->SetStats(0);
   mu_ecor91formula__16->SetLineColor(4);
   mu_ecor91formula__16->SetLineWidth(2);
   mu_ecor91formula__16->SetMarkerSize(0);
   mu_ecor91formula__16->GetXaxis()->SetLabelFont(42);
   mu_ecor91formula__16->GetXaxis()->SetLabelSize(0.035);
   mu_ecor91formula__16->GetXaxis()->SetTitleSize(0.035);
   mu_ecor91formula__16->GetXaxis()->SetTitleFont(42);
   mu_ecor91formula__16->GetYaxis()->SetLabelFont(42);
   mu_ecor91formula__16->GetYaxis()->SetLabelSize(0.035);
   mu_ecor91formula__16->GetYaxis()->SetTitleSize(0.035);
   mu_ecor91formula__16->GetYaxis()->SetTitleOffset(0);
   mu_ecor91formula__16->GetYaxis()->SetTitleFont(42);
   mu_ecor91formula__16->GetZaxis()->SetLabelFont(42);
   mu_ecor91formula__16->GetZaxis()->SetLabelSize(0.035);
   mu_ecor91formula__16->GetZaxis()->SetTitleSize(0.035);
   mu_ecor91formula__16->GetZaxis()->SetTitleFont(42);
   mu_ecor91formula__16->Draw("HISTSAMEE");
   
   TLegend *leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("mu_rawformula","#mu_{Gaus, raw}  ","lf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("mu_ecor74formula","#mu_{Gaus, corr. (current)}  ","lf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("mu_ecor91formula","#mu_{Gaus, corr. (new)}  ","lf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
