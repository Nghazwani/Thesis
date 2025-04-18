void EEZS_GENPT_0006_0025_PerBinFitEcor74formula()
{
//=========Macro generated from canvas: c/c
//=========  (Sat Feb 10 01:16:15 2024) by ROOT version 6.12/07
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
   c_1->Range(0.3468354,-51.21398,1.612658,314.6001);
   c_1->SetFillColor(0);
   c_1->SetBorderMode(0);
   c_1->SetBorderSize(2);
   c_1->SetLeftMargin(0.2);
   c_1->SetRightMargin(0.01);
   c_1->SetBottomMargin(0.14);
   c_1->SetFrameBorderMode(0);
   
   TH1F *Object665__ecor74formula__2 = new TH1F("Object665__ecor74formula__2","E_{corr. (current)}/E_{true} ( 6 <= genPt < 25.0 )",50,0,2);
   Object665__ecor74formula__2->SetBinContent(21,1);
   Object665__ecor74formula__2->SetBinContent(22,148);
   Object665__ecor74formula__2->SetBinContent(23,192);
   Object665__ecor74formula__2->SetBinContent(24,191);
   Object665__ecor74formula__2->SetBinContent(25,209);
   Object665__ecor74formula__2->SetBinContent(26,200);
   Object665__ecor74formula__2->SetBinContent(27,198);
   Object665__ecor74formula__2->SetBinContent(28,149);
   Object665__ecor74formula__2->SetBinContent(29,83);
   Object665__ecor74formula__2->SetBinContent(30,40);
   Object665__ecor74formula__2->SetBinContent(31,10);
   Object665__ecor74formula__2->SetBinContent(32,2);
   Object665__ecor74formula__2->SetBinContent(33,1);
   Object665__ecor74formula__2->SetBinError(21,1);
   Object665__ecor74formula__2->SetBinError(22,12.16553);
   Object665__ecor74formula__2->SetBinError(23,13.85641);
   Object665__ecor74formula__2->SetBinError(24,13.82027);
   Object665__ecor74formula__2->SetBinError(25,14.45683);
   Object665__ecor74formula__2->SetBinError(26,14.14214);
   Object665__ecor74formula__2->SetBinError(27,14.07125);
   Object665__ecor74formula__2->SetBinError(28,12.20656);
   Object665__ecor74formula__2->SetBinError(29,9.110434);
   Object665__ecor74formula__2->SetBinError(30,6.324555);
   Object665__ecor74formula__2->SetBinError(31,3.162278);
   Object665__ecor74formula__2->SetBinError(32,1.414214);
   Object665__ecor74formula__2->SetBinError(33,1);
   Object665__ecor74formula__2->SetEntries(1424);
   Object665__ecor74formula__2->SetDirectory(0);
   Object665__ecor74formula__2->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Object665__ecor74formula__2->SetLineColor(ci);
   Object665__ecor74formula__2->GetXaxis()->SetTitle("E_{corr. (current)}/E_{true}");
   Object665__ecor74formula__2->GetXaxis()->SetRange(16,40);
   Object665__ecor74formula__2->GetXaxis()->SetLabelFont(42);
   Object665__ecor74formula__2->GetXaxis()->SetLabelSize(0.05);
   Object665__ecor74formula__2->GetXaxis()->SetTitleSize(0.06);
   Object665__ecor74formula__2->GetXaxis()->SetTitleFont(42);
   Object665__ecor74formula__2->GetYaxis()->SetTitle("Events / ( 0.04 )");
   Object665__ecor74formula__2->GetYaxis()->SetLabelFont(42);
   Object665__ecor74formula__2->GetYaxis()->SetLabelSize(0.05);
   Object665__ecor74formula__2->GetYaxis()->SetTitleSize(0.06);
   Object665__ecor74formula__2->GetYaxis()->SetTitleOffset(0);
   Object665__ecor74formula__2->GetYaxis()->SetTitleFont(42);
   Object665__ecor74formula__2->GetZaxis()->SetLabelFont(42);
   Object665__ecor74formula__2->GetZaxis()->SetLabelSize(0.035);
   Object665__ecor74formula__2->GetZaxis()->SetTitleSize(0.035);
   Object665__ecor74formula__2->GetZaxis()->SetTitleFont(42);
   Object665__ecor74formula__2->Draw("");
   
   TF1 *Object6622 = new TF1("Object662","gaus",0.9261555,1.033844, TF1::EAddToList::kDefault);
   Object6622->SetFillColor(19);
   Object6622->SetFillStyle(0);
   Object6622->SetLineColor(2);
   Object6622->SetLineWidth(2);
   Object6622->SetChisquare(2.172951e-08);
   Object6622->SetNDF(0);
   Object6622->GetXaxis()->SetLabelFont(42);
   Object6622->GetXaxis()->SetLabelSize(0.035);
   Object6622->GetXaxis()->SetTitleSize(0.035);
   Object6622->GetXaxis()->SetTitleFont(42);
   Object6622->GetYaxis()->SetLabelFont(42);
   Object6622->GetYaxis()->SetLabelSize(0.035);
   Object6622->GetYaxis()->SetTitleSize(0.035);
   Object6622->GetYaxis()->SetTitleOffset(0);
   Object6622->GetYaxis()->SetTitleFont(42);
   Object6622->SetParameter(0,209.4131);
   Object6622->SetParError(0,14.17244);
   Object6622->SetParLimits(0,0,0);
   Object6622->SetParameter(1,0.9868663);
   Object6622->SetParError(1,0.01735271);
   Object6622->SetParLimits(1,0,0);
   Object6622->SetParameter(2,0.1092361);
   Object6622->SetParError(2,0.06738152);
   Object6622->SetParLimits(2,0,0.3228477);
   Object6622->Draw("SAME");
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
      tex = new TLatex(0.34,0.79,"0.9869");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.24,0.72,"#sigma");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.34,0.72,"0.1092");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.24,0.635,"#sigma_{eff}");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.34,0.635,"0.0981");
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
