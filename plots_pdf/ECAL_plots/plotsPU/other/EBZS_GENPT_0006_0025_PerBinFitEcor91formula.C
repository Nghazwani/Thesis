void EBZS_GENPT_0006_0025_PerBinFitEcor91formula()
{
//=========Macro generated from canvas: c/c
//=========  (Sat Feb 10 01:48:34 2024) by ROOT version 6.12/07
   TCanvas *c = new TCanvas("c", "c",1,1,887,685);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: c_1
   TPad *c_1 = new TPad("c_1", "c_1",0.01,0.01,0.99,0.99);
   c_1->Draw();
   c_1->cd();
   c_1->Range(0.3468354,-389.2332,1.612658,2391.004);
   c_1->SetFillColor(0);
   c_1->SetBorderMode(0);
   c_1->SetBorderSize(2);
   c_1->SetLeftMargin(0.2);
   c_1->SetRightMargin(0.01);
   c_1->SetBottomMargin(0.14);
   c_1->SetFrameBorderMode(0);
   
   TH1F *Object21635__ecor91formula__3 = new TH1F("Object21635__ecor91formula__3","E_{corr. (new)}/E_{true} ( 6 <= genPt < 25.0 )",50,0,2);
   Object21635__ecor91formula__3->SetBinContent(19,2);
   Object21635__ecor91formula__3->SetBinContent(20,15);
   Object21635__ecor91formula__3->SetBinContent(21,30);
   Object21635__ecor91formula__3->SetBinContent(22,55);
   Object21635__ecor91formula__3->SetBinContent(23,174);
   Object21635__ecor91formula__3->SetBinContent(24,630);
   Object21635__ecor91formula__3->SetBinContent(25,2101);
   Object21635__ecor91formula__3->SetBinContent(26,1262);
   Object21635__ecor91formula__3->SetBinContent(27,160);
   Object21635__ecor91formula__3->SetBinContent(28,31);
   Object21635__ecor91formula__3->SetBinContent(29,8);
   Object21635__ecor91formula__3->SetBinContent(30,2);
   Object21635__ecor91formula__3->SetBinContent(32,1);
   Object21635__ecor91formula__3->SetBinError(19,1.414214);
   Object21635__ecor91formula__3->SetBinError(20,3.872983);
   Object21635__ecor91formula__3->SetBinError(21,5.477226);
   Object21635__ecor91formula__3->SetBinError(22,7.416198);
   Object21635__ecor91formula__3->SetBinError(23,13.19091);
   Object21635__ecor91formula__3->SetBinError(24,25.0998);
   Object21635__ecor91formula__3->SetBinError(25,45.83667);
   Object21635__ecor91formula__3->SetBinError(26,35.52464);
   Object21635__ecor91formula__3->SetBinError(27,12.64911);
   Object21635__ecor91formula__3->SetBinError(28,5.567764);
   Object21635__ecor91formula__3->SetBinError(29,2.828427);
   Object21635__ecor91formula__3->SetBinError(30,1.414214);
   Object21635__ecor91formula__3->SetBinError(32,1);
   Object21635__ecor91formula__3->SetEntries(4471);
   Object21635__ecor91formula__3->SetDirectory(0);
   Object21635__ecor91formula__3->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Object21635__ecor91formula__3->SetLineColor(ci);
   Object21635__ecor91formula__3->GetXaxis()->SetTitle("E_{corr. (new)}/E_{true}");
   Object21635__ecor91formula__3->GetXaxis()->SetRange(16,40);
   Object21635__ecor91formula__3->GetXaxis()->SetLabelFont(42);
   Object21635__ecor91formula__3->GetXaxis()->SetLabelSize(0.05);
   Object21635__ecor91formula__3->GetXaxis()->SetTitleSize(0.06);
   Object21635__ecor91formula__3->GetXaxis()->SetTitleFont(42);
   Object21635__ecor91formula__3->GetYaxis()->SetTitle("Events / ( 0.04 )");
   Object21635__ecor91formula__3->GetYaxis()->SetLabelFont(42);
   Object21635__ecor91formula__3->GetYaxis()->SetLabelSize(0.05);
   Object21635__ecor91formula__3->GetYaxis()->SetTitleSize(0.06);
   Object21635__ecor91formula__3->GetYaxis()->SetTitleOffset(0);
   Object21635__ecor91formula__3->GetYaxis()->SetTitleFont(42);
   Object21635__ecor91formula__3->GetZaxis()->SetLabelFont(42);
   Object21635__ecor91formula__3->GetZaxis()->SetLabelSize(0.035);
   Object21635__ecor91formula__3->GetZaxis()->SetTitleSize(0.035);
   Object21635__ecor91formula__3->GetZaxis()->SetTitleFont(42);
   Object21635__ecor91formula__3->Draw("");
   
   TF1 *Object216323 = new TF1("Object21632","gaus",0.9553251,1.004675, TF1::EAddToList::kDefault);
   Object216323->SetFillColor(19);
   Object216323->SetFillStyle(0);
   Object216323->SetLineColor(2);
   Object216323->SetLineWidth(2);
   Object216323->SetChisquare(2101);
   Object216323->SetNDF(0);
   Object216323->GetXaxis()->SetLabelFont(42);
   Object216323->GetXaxis()->SetLabelSize(0.035);
   Object216323->GetXaxis()->SetTitleSize(0.035);
   Object216323->GetXaxis()->SetTitleFont(42);
   Object216323->GetYaxis()->SetLabelFont(42);
   Object216323->GetYaxis()->SetLabelSize(0.035);
   Object216323->GetYaxis()->SetTitleSize(0.035);
   Object216323->GetYaxis()->SetTitleOffset(0);
   Object216323->GetYaxis()->SetTitleFont(42);
   Object216323->SetParameter(0,3.958451e+10);
   Object216323->SetParError(0,1.414214);
   Object216323->SetParLimits(0,0,0);
   Object216323->SetParameter(1,0.9800047);
   Object216323->SetParError(1,1.414214);
   Object216323->SetParLimits(1,0,0);
   Object216323->SetParameter(2,1.053671e-08);
   Object216323->SetParError(2,5.485901e-08);
   Object216323->SetParLimits(2,0,1.053671e-07);
   Object216323->Draw("SAME");
   TLatex *   tex = new TLatex(0.24,0.88,"Gaus parameters");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.24,0.79,"#mu");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.34,0.79,"0.9800");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.24,0.72,"#sigma");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.34,0.72,"0.0000");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.24,0.635,"#sigma_{eff}");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.34,0.635,"0.0310");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetLineWidth(2);
   tex->Draw();
   c_1->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
