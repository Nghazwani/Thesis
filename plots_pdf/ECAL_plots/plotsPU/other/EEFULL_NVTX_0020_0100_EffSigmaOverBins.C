void EEFULL_NVTX_0020_0100_EffSigmaOverBins()
{
//=========Macro generated from canvas: c/c
//=========  (Sat Feb 10 01:47:37 2024) by ROOT version 6.12/07
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
   sigma_rawformula__81->SetBinContent(1,0.06864654);
   sigma_rawformula__81->SetBinContent(2,0.06727124);
   sigma_rawformula__81->SetBinContent(3,0.07211086);
   sigma_rawformula__81->SetBinContent(4,0.06863756);
   sigma_rawformula__81->SetBinContent(5,0.06997926);
   sigma_rawformula__81->SetBinContent(6,0.06776637);
   sigma_rawformula__81->SetBinContent(7,0.06797474);
   sigma_rawformula__81->SetBinContent(8,0.06429277);
   sigma_rawformula__81->SetBinContent(9,0.06270654);
   sigma_rawformula__81->SetBinContent(10,0.06391554);
   sigma_rawformula__81->SetBinContent(11,0.06211728);
   sigma_rawformula__81->SetBinContent(12,0.06459557);
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
   sigma_ecor74formula__82->SetBinContent(1,0.04631653);
   sigma_ecor74formula__82->SetBinContent(2,0.04597092);
   sigma_ecor74formula__82->SetBinContent(3,0.04784209);
   sigma_ecor74formula__82->SetBinContent(4,0.04640257);
   sigma_ecor74formula__82->SetBinContent(5,0.04819561);
   sigma_ecor74formula__82->SetBinContent(6,0.04575497);
   sigma_ecor74formula__82->SetBinContent(7,0.04605466);
   sigma_ecor74formula__82->SetBinContent(8,0.04472094);
   sigma_ecor74formula__82->SetBinContent(9,0.04603725);
   sigma_ecor74formula__82->SetBinContent(10,0.04825644);
   sigma_ecor74formula__82->SetBinContent(11,0.04934201);
   sigma_ecor74formula__82->SetBinContent(12,0.04757489);
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
   sigma_ecor91formula__83->SetBinContent(1,0.0465007);
   sigma_ecor91formula__83->SetBinContent(2,0.045676);
   sigma_ecor91formula__83->SetBinContent(3,0.04775233);
   sigma_ecor91formula__83->SetBinContent(4,0.04612067);
   sigma_ecor91formula__83->SetBinContent(5,0.0488644);
   sigma_ecor91formula__83->SetBinContent(6,0.04586042);
   sigma_ecor91formula__83->SetBinContent(7,0.04602168);
   sigma_ecor91formula__83->SetBinContent(8,0.04427573);
   sigma_ecor91formula__83->SetBinContent(9,0.04694048);
   sigma_ecor91formula__83->SetBinContent(10,0.04877708);
   sigma_ecor91formula__83->SetBinContent(11,0.04877435);
   sigma_ecor91formula__83->SetBinContent(12,0.04759459);
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
