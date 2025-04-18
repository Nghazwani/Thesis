void EBZS_CLUSSIZE_0000_0006_PerBinFitEcor74formula()
{
//=========Macro generated from canvas: c/c
//=========  (Sat Feb 10 01:15:23 2024) by ROOT version 6.12/07
   TCanvas *c = new TCanvas("c", "c",1,1,887,685);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: c_1
   TPad *c_1 = new TPad("c_1", "c_1",0.01,0.51,0.49,0.99);
   c_1->Draw();
   c_1->cd();
   c_1->Range(0.3468354,-0.1934211,1.612658,1.188158);
   c_1->SetFillColor(0);
   c_1->SetBorderMode(0);
   c_1->SetBorderSize(2);
   c_1->SetLeftMargin(0.2);
   c_1->SetRightMargin(0.01);
   c_1->SetBottomMargin(0.14);
   c_1->SetFrameBorderMode(0);
   
   TH1F *Object665__ecor74formula__4 = new TH1F("Object665__ecor74formula__4","E_{corr. (current)}/E_{true} ( 1.0 <= clusSize < 2.0 )",50,0,2);
   Object665__ecor74formula__4->SetDirectory(0);
   Object665__ecor74formula__4->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Object665__ecor74formula__4->SetLineColor(ci);
   Object665__ecor74formula__4->GetXaxis()->SetTitle("E_{corr. (current)}/E_{true}");
   Object665__ecor74formula__4->GetXaxis()->SetRange(16,40);
   Object665__ecor74formula__4->GetXaxis()->SetLabelFont(42);
   Object665__ecor74formula__4->GetXaxis()->SetLabelSize(0.05);
   Object665__ecor74formula__4->GetXaxis()->SetTitleSize(0.06);
   Object665__ecor74formula__4->GetXaxis()->SetTitleFont(42);
   Object665__ecor74formula__4->GetYaxis()->SetTitle("Events / ( 0.04 )");
   Object665__ecor74formula__4->GetYaxis()->SetLabelFont(42);
   Object665__ecor74formula__4->GetYaxis()->SetLabelSize(0.05);
   Object665__ecor74formula__4->GetYaxis()->SetTitleSize(0.06);
   Object665__ecor74formula__4->GetYaxis()->SetTitleOffset(0);
   Object665__ecor74formula__4->GetYaxis()->SetTitleFont(42);
   Object665__ecor74formula__4->GetZaxis()->SetLabelFont(42);
   Object665__ecor74formula__4->GetZaxis()->SetLabelSize(0.035);
   Object665__ecor74formula__4->GetZaxis()->SetTitleSize(0.035);
   Object665__ecor74formula__4->GetZaxis()->SetTitleFont(42);
   Object665__ecor74formula__4->Draw("");
   
   TF1 *Object6624 = new TF1("Object662","gaus",0.02,0.02, TF1::EAddToList::kDefault);
   Object6624->SetFillColor(19);
   Object6624->SetFillStyle(0);
   Object6624->SetLineColor(2);
   Object6624->SetLineWidth(2);
   Object6624->GetXaxis()->SetLabelFont(42);
   Object6624->GetXaxis()->SetLabelSize(0.035);
   Object6624->GetXaxis()->SetTitleSize(0.035);
   Object6624->GetXaxis()->SetTitleFont(42);
   Object6624->GetYaxis()->SetLabelFont(42);
   Object6624->GetYaxis()->SetLabelSize(0.035);
   Object6624->GetYaxis()->SetTitleSize(0.035);
   Object6624->GetYaxis()->SetTitleOffset(0);
   Object6624->GetYaxis()->SetTitleFont(42);
   Object6624->SetParameter(0,0);
   Object6624->SetParError(0,0);
   Object6624->SetParLimits(0,0,0);
   Object6624->SetParameter(1,0);
   Object6624->SetParError(1,0);
   Object6624->SetParLimits(1,0,0);
   Object6624->SetParameter(2,0);
   Object6624->SetParError(2,0);
   Object6624->SetParLimits(2,0,0);
   Object6624->Draw("SAME");
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
      tex = new TLatex(0.34,0.79,"0.0000");
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
      tex = new TLatex(0.34,0.635,"9999999.0000");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetLineWidth(2);
   tex->Draw();
   c_1->Modified();
   c->cd();
  
// ------------>Primitives in pad: c_2
   TPad *c_2 = new TPad("c_2", "c_2",0.51,0.51,0.99,0.99);
   c_2->Draw();
   c_2->cd();
   c_2->Range(0.3468354,-0.1934211,1.612658,1.188158);
   c_2->SetFillColor(0);
   c_2->SetBorderMode(0);
   c_2->SetBorderSize(2);
   c_2->SetLeftMargin(0.2);
   c_2->SetRightMargin(0.01);
   c_2->SetBottomMargin(0.14);
   c_2->SetFrameBorderMode(0);
   
   TH1F *Object692__ecor74formula__5 = new TH1F("Object692__ecor74formula__5","E_{corr. (current)}/E_{true} ( 2.0 <= clusSize < 3.0 )",50,0,2);
   Object692__ecor74formula__5->SetDirectory(0);
   Object692__ecor74formula__5->SetStats(0);

   ci = TColor::GetColor("#000099");
   Object692__ecor74formula__5->SetLineColor(ci);
   Object692__ecor74formula__5->GetXaxis()->SetTitle("E_{corr. (current)}/E_{true}");
   Object692__ecor74formula__5->GetXaxis()->SetRange(16,40);
   Object692__ecor74formula__5->GetXaxis()->SetLabelFont(42);
   Object692__ecor74formula__5->GetXaxis()->SetLabelSize(0.05);
   Object692__ecor74formula__5->GetXaxis()->SetTitleSize(0.06);
   Object692__ecor74formula__5->GetXaxis()->SetTitleFont(42);
   Object692__ecor74formula__5->GetYaxis()->SetTitle("Events / ( 0.04 )");
   Object692__ecor74formula__5->GetYaxis()->SetLabelFont(42);
   Object692__ecor74formula__5->GetYaxis()->SetLabelSize(0.05);
   Object692__ecor74formula__5->GetYaxis()->SetTitleSize(0.06);
   Object692__ecor74formula__5->GetYaxis()->SetTitleOffset(0);
   Object692__ecor74formula__5->GetYaxis()->SetTitleFont(42);
   Object692__ecor74formula__5->GetZaxis()->SetLabelFont(42);
   Object692__ecor74formula__5->GetZaxis()->SetLabelSize(0.035);
   Object692__ecor74formula__5->GetZaxis()->SetTitleSize(0.035);
   Object692__ecor74formula__5->GetZaxis()->SetTitleFont(42);
   Object692__ecor74formula__5->Draw("");
   
   TF1 *Object6895 = new TF1("Object689","gaus",0.02,0.02, TF1::EAddToList::kDefault);
   Object6895->SetFillColor(19);
   Object6895->SetFillStyle(0);
   Object6895->SetLineColor(2);
   Object6895->SetLineWidth(2);
   Object6895->GetXaxis()->SetLabelFont(42);
   Object6895->GetXaxis()->SetLabelSize(0.035);
   Object6895->GetXaxis()->SetTitleSize(0.035);
   Object6895->GetXaxis()->SetTitleFont(42);
   Object6895->GetYaxis()->SetLabelFont(42);
   Object6895->GetYaxis()->SetLabelSize(0.035);
   Object6895->GetYaxis()->SetTitleSize(0.035);
   Object6895->GetYaxis()->SetTitleOffset(0);
   Object6895->GetYaxis()->SetTitleFont(42);
   Object6895->SetParameter(0,0);
   Object6895->SetParError(0,0);
   Object6895->SetParLimits(0,0,0);
   Object6895->SetParameter(1,0);
   Object6895->SetParError(1,0);
   Object6895->SetParLimits(1,0,0);
   Object6895->SetParameter(2,0);
   Object6895->SetParError(2,0);
   Object6895->SetParLimits(2,0,0);
   Object6895->Draw("SAME");
      tex = new TLatex(0.24,0.88,"Gaus parameters");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.24,0.79,"#mu");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.34,0.79,"0.0000");
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
      tex = new TLatex(0.34,0.635,"9999999.0000");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetLineWidth(2);
   tex->Draw();
   c_2->Modified();
   c->cd();
  
// ------------>Primitives in pad: c_3
   TPad *c_3 = new TPad("c_3", "c_3",0.01,0.01,0.49,0.49);
   c_3->Draw();
   c_3->cd();
   c_3->Range(0.3468354,-0.1934211,1.612658,1.188158);
   c_3->SetFillColor(0);
   c_3->SetBorderMode(0);
   c_3->SetBorderSize(2);
   c_3->SetLeftMargin(0.2);
   c_3->SetRightMargin(0.01);
   c_3->SetBottomMargin(0.14);
   c_3->SetFrameBorderMode(0);
   
   TH1F *Object719__ecor74formula__6 = new TH1F("Object719__ecor74formula__6","E_{corr. (current)}/E_{true} ( 3.0 <= clusSize < 6 )",50,0,2);
   Object719__ecor74formula__6->SetDirectory(0);
   Object719__ecor74formula__6->SetStats(0);

   ci = TColor::GetColor("#000099");
   Object719__ecor74formula__6->SetLineColor(ci);
   Object719__ecor74formula__6->GetXaxis()->SetTitle("E_{corr. (current)}/E_{true}");
   Object719__ecor74formula__6->GetXaxis()->SetRange(16,40);
   Object719__ecor74formula__6->GetXaxis()->SetLabelFont(42);
   Object719__ecor74formula__6->GetXaxis()->SetLabelSize(0.05);
   Object719__ecor74formula__6->GetXaxis()->SetTitleSize(0.06);
   Object719__ecor74formula__6->GetXaxis()->SetTitleFont(42);
   Object719__ecor74formula__6->GetYaxis()->SetTitle("Events / ( 0.04 )");
   Object719__ecor74formula__6->GetYaxis()->SetLabelFont(42);
   Object719__ecor74formula__6->GetYaxis()->SetLabelSize(0.05);
   Object719__ecor74formula__6->GetYaxis()->SetTitleSize(0.06);
   Object719__ecor74formula__6->GetYaxis()->SetTitleOffset(0);
   Object719__ecor74formula__6->GetYaxis()->SetTitleFont(42);
   Object719__ecor74formula__6->GetZaxis()->SetLabelFont(42);
   Object719__ecor74formula__6->GetZaxis()->SetLabelSize(0.035);
   Object719__ecor74formula__6->GetZaxis()->SetTitleSize(0.035);
   Object719__ecor74formula__6->GetZaxis()->SetTitleFont(42);
   Object719__ecor74formula__6->Draw("");
   
   TF1 *Object7166 = new TF1("Object716","gaus",0.02,0.02, TF1::EAddToList::kDefault);
   Object7166->SetFillColor(19);
   Object7166->SetFillStyle(0);
   Object7166->SetLineColor(2);
   Object7166->SetLineWidth(2);
   Object7166->GetXaxis()->SetLabelFont(42);
   Object7166->GetXaxis()->SetLabelSize(0.035);
   Object7166->GetXaxis()->SetTitleSize(0.035);
   Object7166->GetXaxis()->SetTitleFont(42);
   Object7166->GetYaxis()->SetLabelFont(42);
   Object7166->GetYaxis()->SetLabelSize(0.035);
   Object7166->GetYaxis()->SetTitleSize(0.035);
   Object7166->GetYaxis()->SetTitleOffset(0);
   Object7166->GetYaxis()->SetTitleFont(42);
   Object7166->SetParameter(0,0);
   Object7166->SetParError(0,0);
   Object7166->SetParLimits(0,0,0);
   Object7166->SetParameter(1,0);
   Object7166->SetParError(1,0);
   Object7166->SetParLimits(1,0,0);
   Object7166->SetParameter(2,0);
   Object7166->SetParError(2,0);
   Object7166->SetParLimits(2,0,0);
   Object7166->Draw("SAME");
      tex = new TLatex(0.24,0.88,"Gaus parameters");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.24,0.79,"#mu");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.34,0.79,"0.0000");
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
      tex = new TLatex(0.34,0.635,"9999999.0000");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetLineWidth(2);
   tex->Draw();
   c_3->Modified();
   c->cd();
  
// ------------>Primitives in pad: c_4
   TPad *c_4 = new TPad("c_4", "c_4",0.51,0.01,0.99,0.49);
   c_4->Draw();
   c_4->cd();
   c_4->Range(0,0,1,1);
   c_4->SetFillColor(0);
   c_4->SetBorderMode(0);
   c_4->SetBorderSize(2);
   c_4->SetFrameBorderMode(0);
   c_4->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
