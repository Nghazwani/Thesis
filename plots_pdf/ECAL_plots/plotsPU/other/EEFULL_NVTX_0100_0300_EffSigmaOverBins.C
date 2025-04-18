void EEFULL_NVTX_0100_0300_EffSigmaOverBins()
{
//=========Macro generated from canvas: c/c
//=========  (Sat Feb 10 01:47:39 2024) by ROOT version 6.12/07
   TCanvas *c = new TCanvas("c", "c",1,1,887,685);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-9.243903,0.4849315,63.92683,1.306849);
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
   
   TH1F *__80 = new TH1F("__80","",1,1,61);
   __80->SetMinimum(0.0005);
   __80->SetMaximum(0.2);
   __80->SetDirectory(0);
   __80->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   __80->SetLineColor(ci);
   __80->GetXaxis()->SetTitle("n_{vtx}");
   __80->GetXaxis()->SetNdivisions(505);
   __80->GetXaxis()->SetLabelFont(42);
   __80->GetXaxis()->SetLabelSize(0.05);
   __80->GetXaxis()->SetTitleSize(0.06);
   __80->GetXaxis()->SetTitleFont(42);
   __80->GetYaxis()->SetTitle("#sigma_{eff}/#mu");
   __80->GetYaxis()->SetLabelFont(42);
   __80->GetYaxis()->SetLabelSize(0.05);
   __80->GetYaxis()->SetTitleSize(0.06);
   __80->GetYaxis()->SetTitleOffset(1.1);
   __80->GetYaxis()->SetTitleFont(42);
   __80->GetZaxis()->SetLabelFont(42);
   __80->GetZaxis()->SetLabelSize(0.035);
   __80->GetZaxis()->SetTitleSize(0.035);
   __80->GetZaxis()->SetTitleFont(42);
   __80->Draw("");
   Double_t xAxis7[13] = {1, 6, 11, 16, 21, 26, 31, 36, 41, 46, 51, 56, 61}; 
   
   TH1F *sigma_rawformula__81 = new TH1F("sigma_rawformula__81","",12, xAxis7);
   sigma_rawformula__81->SetBinContent(1,0.05775541);
   sigma_rawformula__81->SetBinContent(2,0.05704258);
   sigma_rawformula__81->SetBinContent(3,0.0576424);
   sigma_rawformula__81->SetBinContent(4,0.05697737);
   sigma_rawformula__81->SetBinContent(5,0.05678725);
   sigma_rawformula__81->SetBinContent(6,0.0564278);
   sigma_rawformula__81->SetBinContent(7,0.05517094);
   sigma_rawformula__81->SetBinContent(8,0.05545905);
   sigma_rawformula__81->SetBinContent(9,0.05540854);
   sigma_rawformula__81->SetBinContent(10,0.05627939);
   sigma_rawformula__81->SetBinContent(11,0.0548487);
   sigma_rawformula__81->SetBinContent(12,0.05476562);
   sigma_rawformula__81->SetEntries(12);
   sigma_rawformula__81->SetStats(0);
   sigma_rawformula__81->SetLineColor(2);
   sigma_rawformula__81->SetLineWidth(2);
   sigma_rawformula__81->SetMarkerSize(0);
   sigma_rawformula__81->GetXaxis()->SetLabelFont(42);
   sigma_rawformula__81->GetXaxis()->SetLabelSize(0.035);
   sigma_rawformula__81->GetXaxis()->SetTitleSize(0.035);
   sigma_rawformula__81->GetXaxis()->SetTitleFont(42);
   sigma_rawformula__81->GetYaxis()->SetLabelFont(42);
   sigma_rawformula__81->GetYaxis()->SetLabelSize(0.035);
   sigma_rawformula__81->GetYaxis()->SetTitleSize(0.035);
   sigma_rawformula__81->GetYaxis()->SetTitleOffset(0);
   sigma_rawformula__81->GetYaxis()->SetTitleFont(42);
   sigma_rawformula__81->GetZaxis()->SetLabelFont(42);
   sigma_rawformula__81->GetZaxis()->SetLabelSize(0.035);
   sigma_rawformula__81->GetZaxis()->SetTitleSize(0.035);
   sigma_rawformula__81->GetZaxis()->SetTitleFont(42);
   sigma_rawformula__81->Draw("HISTSAME");
   Double_t xAxis8[13] = {1, 6, 11, 16, 21, 26, 31, 36, 41, 46, 51, 56, 61}; 
   
   TH1F *sigma_ecor74formula__82 = new TH1F("sigma_ecor74formula__82","",12, xAxis8);
   sigma_ecor74formula__82->SetBinContent(1,0.04240362);
   sigma_ecor74formula__82->SetBinContent(2,0.0430782);
   sigma_ecor74formula__82->SetBinContent(3,0.04264401);
   sigma_ecor74formula__82->SetBinContent(4,0.04315433);
   sigma_ecor74formula__82->SetBinContent(5,0.04312152);
   sigma_ecor74formula__82->SetBinContent(6,0.04269918);
   sigma_ecor74formula__82->SetBinContent(7,0.04331687);
   sigma_ecor74formula__82->SetBinContent(8,0.04331673);
   sigma_ecor74formula__82->SetBinContent(9,0.0434435);
   sigma_ecor74formula__82->SetBinContent(10,0.04427962);
   sigma_ecor74formula__82->SetBinContent(11,0.04313925);
   sigma_ecor74formula__82->SetBinContent(12,0.04340451);
   sigma_ecor74formula__82->SetEntries(12);
   sigma_ecor74formula__82->SetStats(0);
   sigma_ecor74formula__82->SetLineColor(3);
   sigma_ecor74formula__82->SetLineWidth(2);
   sigma_ecor74formula__82->SetMarkerSize(0);
   sigma_ecor74formula__82->GetXaxis()->SetLabelFont(42);
   sigma_ecor74formula__82->GetXaxis()->SetLabelSize(0.035);
   sigma_ecor74formula__82->GetXaxis()->SetTitleSize(0.035);
   sigma_ecor74formula__82->GetXaxis()->SetTitleFont(42);
   sigma_ecor74formula__82->GetYaxis()->SetLabelFont(42);
   sigma_ecor74formula__82->GetYaxis()->SetLabelSize(0.035);
   sigma_ecor74formula__82->GetYaxis()->SetTitleSize(0.035);
   sigma_ecor74formula__82->GetYaxis()->SetTitleOffset(0);
   sigma_ecor74formula__82->GetYaxis()->SetTitleFont(42);
   sigma_ecor74formula__82->GetZaxis()->SetLabelFont(42);
   sigma_ecor74formula__82->GetZaxis()->SetLabelSize(0.035);
   sigma_ecor74formula__82->GetZaxis()->SetTitleSize(0.035);
   sigma_ecor74formula__82->GetZaxis()->SetTitleFont(42);
   sigma_ecor74formula__82->Draw("HISTSAME");
   Double_t xAxis9[13] = {1, 6, 11, 16, 21, 26, 31, 36, 41, 46, 51, 56, 61}; 
   
   TH1F *sigma_ecor91formula__83 = new TH1F("sigma_ecor91formula__83","",12, xAxis9);
   sigma_ecor91formula__83->SetBinContent(1,0.04206678);
   sigma_ecor91formula__83->SetBinContent(2,0.04303234);
   sigma_ecor91formula__83->SetBinContent(3,0.04262205);
   sigma_ecor91formula__83->SetBinContent(4,0.0420789);
   sigma_ecor91formula__83->SetBinContent(5,0.04267385);
   sigma_ecor91formula__83->SetBinContent(6,0.04252067);
   sigma_ecor91formula__83->SetBinContent(7,0.04272091);
   sigma_ecor91formula__83->SetBinContent(8,0.04294584);
   sigma_ecor91formula__83->SetBinContent(9,0.04319943);
   sigma_ecor91formula__83->SetBinContent(10,0.04399062);
   sigma_ecor91formula__83->SetBinContent(11,0.04283179);
   sigma_ecor91formula__83->SetBinContent(12,0.04304784);
   sigma_ecor91formula__83->SetEntries(12);
   sigma_ecor91formula__83->SetStats(0);
   sigma_ecor91formula__83->SetLineColor(4);
   sigma_ecor91formula__83->SetLineWidth(2);
   sigma_ecor91formula__83->SetMarkerSize(0);
   sigma_ecor91formula__83->GetXaxis()->SetLabelFont(42);
   sigma_ecor91formula__83->GetXaxis()->SetLabelSize(0.035);
   sigma_ecor91formula__83->GetXaxis()->SetTitleSize(0.035);
   sigma_ecor91formula__83->GetXaxis()->SetTitleFont(42);
   sigma_ecor91formula__83->GetYaxis()->SetLabelFont(42);
   sigma_ecor91formula__83->GetYaxis()->SetLabelSize(0.035);
   sigma_ecor91formula__83->GetYaxis()->SetTitleSize(0.035);
   sigma_ecor91formula__83->GetYaxis()->SetTitleOffset(0);
   sigma_ecor91formula__83->GetYaxis()->SetTitleFont(42);
   sigma_ecor91formula__83->GetZaxis()->SetLabelFont(42);
   sigma_ecor91formula__83->GetZaxis()->SetLabelSize(0.035);
   sigma_ecor91formula__83->GetZaxis()->SetTitleSize(0.035);
   sigma_ecor91formula__83->GetZaxis()->SetTitleFont(42);
   sigma_ecor91formula__83->Draw("HISTSAME");
   
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
