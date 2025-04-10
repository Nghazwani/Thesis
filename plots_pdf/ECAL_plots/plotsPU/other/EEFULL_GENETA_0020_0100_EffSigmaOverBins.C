void EEFULL_GENETA_0020_0100_EffSigmaOverBins()
{
//=========Macro generated from canvas: c/c
//=========  (Sat Feb 10 01:47:20 2024) by ROOT version 6.12/07
   TCanvas *c = new TCanvas("c", "c",1,1,887,685);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(1.126829,0.8616438,3.078049,1.135616);
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
   
   TH1F *__50 = new TH1F("__50","",1,1.4,3);
   __50->SetMinimum(0.0005);
   __50->SetMaximum(0.1);
   __50->SetDirectory(0);
   __50->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   __50->SetLineColor(ci);
   __50->GetXaxis()->SetTitle("#eta_{gen}");
   __50->GetXaxis()->SetNdivisions(505);
   __50->GetXaxis()->SetLabelFont(42);
   __50->GetXaxis()->SetLabelSize(0.05);
   __50->GetXaxis()->SetTitleSize(0.06);
   __50->GetXaxis()->SetTitleFont(42);
   __50->GetYaxis()->SetTitle("#sigma_{eff}/#mu");
   __50->GetYaxis()->SetLabelFont(42);
   __50->GetYaxis()->SetLabelSize(0.05);
   __50->GetYaxis()->SetTitleSize(0.06);
   __50->GetYaxis()->SetTitleOffset(1.1);
   __50->GetYaxis()->SetTitleFont(42);
   __50->GetZaxis()->SetLabelFont(42);
   __50->GetZaxis()->SetLabelSize(0.035);
   __50->GetZaxis()->SetTitleSize(0.035);
   __50->GetZaxis()->SetTitleFont(42);
   __50->Draw("");
   Double_t xAxis7[8] = {1.4, 1.565, 1.6, 1.8, 2, 2.2, 2.5, 3}; 
   
   TH1F *sigma_rawformula__51 = new TH1F("sigma_rawformula__51","",7, xAxis7);
   sigma_rawformula__51->SetBinContent(1,0.0511467);
   sigma_rawformula__51->SetBinContent(2,0.02413293);
   sigma_rawformula__51->SetBinContent(3,0.02464633);
   sigma_rawformula__51->SetBinContent(4,0.02746367);
   sigma_rawformula__51->SetBinContent(5,0.03173008);
   sigma_rawformula__51->SetBinContent(6,0.04503274);
   sigma_rawformula__51->SetBinContent(7,0.08125757);
   sigma_rawformula__51->SetEntries(7);
   sigma_rawformula__51->SetStats(0);
   sigma_rawformula__51->SetLineColor(2);
   sigma_rawformula__51->SetLineWidth(2);
   sigma_rawformula__51->SetMarkerSize(0);
   sigma_rawformula__51->GetXaxis()->SetLabelFont(42);
   sigma_rawformula__51->GetXaxis()->SetLabelSize(0.035);
   sigma_rawformula__51->GetXaxis()->SetTitleSize(0.035);
   sigma_rawformula__51->GetXaxis()->SetTitleFont(42);
   sigma_rawformula__51->GetYaxis()->SetLabelFont(42);
   sigma_rawformula__51->GetYaxis()->SetLabelSize(0.035);
   sigma_rawformula__51->GetYaxis()->SetTitleSize(0.035);
   sigma_rawformula__51->GetYaxis()->SetTitleOffset(0);
   sigma_rawformula__51->GetYaxis()->SetTitleFont(42);
   sigma_rawformula__51->GetZaxis()->SetLabelFont(42);
   sigma_rawformula__51->GetZaxis()->SetLabelSize(0.035);
   sigma_rawformula__51->GetZaxis()->SetTitleSize(0.035);
   sigma_rawformula__51->GetZaxis()->SetTitleFont(42);
   sigma_rawformula__51->Draw("HISTSAME");
   Double_t xAxis8[8] = {1.4, 1.565, 1.6, 1.8, 2, 2.2, 2.5, 3}; 
   
   TH1F *sigma_ecor74formula__52 = new TH1F("sigma_ecor74formula__52","",7, xAxis8);
   sigma_ecor74formula__52->SetBinContent(1,0.0425579);
   sigma_ecor74formula__52->SetBinContent(2,0.02061699);
   sigma_ecor74formula__52->SetBinContent(3,0.02211472);
   sigma_ecor74formula__52->SetBinContent(4,0.02466496);
   sigma_ecor74formula__52->SetBinContent(5,0.02874267);
   sigma_ecor74formula__52->SetBinContent(6,0.03892924);
   sigma_ecor74formula__52->SetBinContent(7,0.06808618);
   sigma_ecor74formula__52->SetEntries(7);
   sigma_ecor74formula__52->SetStats(0);
   sigma_ecor74formula__52->SetLineColor(3);
   sigma_ecor74formula__52->SetLineWidth(2);
   sigma_ecor74formula__52->SetMarkerSize(0);
   sigma_ecor74formula__52->GetXaxis()->SetLabelFont(42);
   sigma_ecor74formula__52->GetXaxis()->SetLabelSize(0.035);
   sigma_ecor74formula__52->GetXaxis()->SetTitleSize(0.035);
   sigma_ecor74formula__52->GetXaxis()->SetTitleFont(42);
   sigma_ecor74formula__52->GetYaxis()->SetLabelFont(42);
   sigma_ecor74formula__52->GetYaxis()->SetLabelSize(0.035);
   sigma_ecor74formula__52->GetYaxis()->SetTitleSize(0.035);
   sigma_ecor74formula__52->GetYaxis()->SetTitleOffset(0);
   sigma_ecor74formula__52->GetYaxis()->SetTitleFont(42);
   sigma_ecor74formula__52->GetZaxis()->SetLabelFont(42);
   sigma_ecor74formula__52->GetZaxis()->SetLabelSize(0.035);
   sigma_ecor74formula__52->GetZaxis()->SetTitleSize(0.035);
   sigma_ecor74formula__52->GetZaxis()->SetTitleFont(42);
   sigma_ecor74formula__52->Draw("HISTSAME");
   Double_t xAxis9[8] = {1.4, 1.565, 1.6, 1.8, 2, 2.2, 2.5, 3}; 
   
   TH1F *sigma_ecor91formula__53 = new TH1F("sigma_ecor91formula__53","",7, xAxis9);
   sigma_ecor91formula__53->SetBinContent(1,0.04182586);
   sigma_ecor91formula__53->SetBinContent(2,0.02066305);
   sigma_ecor91formula__53->SetBinContent(3,0.02204635);
   sigma_ecor91formula__53->SetBinContent(4,0.02419847);
   sigma_ecor91formula__53->SetBinContent(5,0.02827997);
   sigma_ecor91formula__53->SetBinContent(6,0.038804);
   sigma_ecor91formula__53->SetBinContent(7,0.06860066);
   sigma_ecor91formula__53->SetEntries(7);
   sigma_ecor91formula__53->SetStats(0);
   sigma_ecor91formula__53->SetLineColor(4);
   sigma_ecor91formula__53->SetLineWidth(2);
   sigma_ecor91formula__53->SetMarkerSize(0);
   sigma_ecor91formula__53->GetXaxis()->SetLabelFont(42);
   sigma_ecor91formula__53->GetXaxis()->SetLabelSize(0.035);
   sigma_ecor91formula__53->GetXaxis()->SetTitleSize(0.035);
   sigma_ecor91formula__53->GetXaxis()->SetTitleFont(42);
   sigma_ecor91formula__53->GetYaxis()->SetLabelFont(42);
   sigma_ecor91formula__53->GetYaxis()->SetLabelSize(0.035);
   sigma_ecor91formula__53->GetYaxis()->SetTitleSize(0.035);
   sigma_ecor91formula__53->GetYaxis()->SetTitleOffset(0);
   sigma_ecor91formula__53->GetYaxis()->SetTitleFont(42);
   sigma_ecor91formula__53->GetZaxis()->SetLabelFont(42);
   sigma_ecor91formula__53->GetZaxis()->SetLabelSize(0.035);
   sigma_ecor91formula__53->GetZaxis()->SetTitleSize(0.035);
   sigma_ecor91formula__53->GetZaxis()->SetTitleFont(42);
   sigma_ecor91formula__53->Draw("HISTSAME");
   
   TLegend *leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("sigma_rawformula","#sigma_{CB, raw}","lf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("sigma_ecor74formula","#sigma_{CB, corr. (current)}","lf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("sigma_ecor91formula","#sigma_{CB, corr. (new)}","lf");
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
