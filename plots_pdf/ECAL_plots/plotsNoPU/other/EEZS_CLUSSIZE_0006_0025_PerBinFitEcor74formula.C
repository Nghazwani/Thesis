void EEZS_CLUSSIZE_0006_0025_PerBinFitEcor74formula()
{
//=========Macro generated from canvas: c/c
//=========  (Sat Feb 10 01:16:01 2024) by ROOT version 6.12/07
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
   c_1->Range(0.3468354,-1.634309,1.612658,10.03933);
   c_1->SetFillColor(0);
   c_1->SetBorderMode(0);
   c_1->SetBorderSize(2);
   c_1->SetLeftMargin(0.2);
   c_1->SetRightMargin(0.01);
   c_1->SetBottomMargin(0.14);
   c_1->SetFrameBorderMode(0);
   
   TH1F *Object1205__ecor74formula__4 = new TH1F("Object1205__ecor74formula__4","E_{corr. (current)}/E_{true} ( 1.0 <= clusSize < 2.0 )",50,0,2);
   Object1205__ecor74formula__4->SetBinContent(22,1);
   Object1205__ecor74formula__4->SetBinContent(23,2);
   Object1205__ecor74formula__4->SetBinContent(24,5);
   Object1205__ecor74formula__4->SetBinContent(25,1);
   Object1205__ecor74formula__4->SetBinContent(26,4);
   Object1205__ecor74formula__4->SetBinContent(27,3);
   Object1205__ecor74formula__4->SetBinContent(28,2);
   Object1205__ecor74formula__4->SetBinContent(30,1);
   Object1205__ecor74formula__4->SetBinError(22,1);
   Object1205__ecor74formula__4->SetBinError(23,1.414214);
   Object1205__ecor74formula__4->SetBinError(24,2.236068);
   Object1205__ecor74formula__4->SetBinError(25,1);
   Object1205__ecor74formula__4->SetBinError(26,2);
   Object1205__ecor74formula__4->SetBinError(27,1.732051);
   Object1205__ecor74formula__4->SetBinError(28,1.414214);
   Object1205__ecor74formula__4->SetBinError(30,1);
   Object1205__ecor74formula__4->SetEntries(19);
   Object1205__ecor74formula__4->SetDirectory(0);
   Object1205__ecor74formula__4->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Object1205__ecor74formula__4->SetLineColor(ci);
   Object1205__ecor74formula__4->GetXaxis()->SetTitle("E_{corr. (current)}/E_{true}");
   Object1205__ecor74formula__4->GetXaxis()->SetRange(16,40);
   Object1205__ecor74formula__4->GetXaxis()->SetLabelFont(42);
   Object1205__ecor74formula__4->GetXaxis()->SetLabelSize(0.05);
   Object1205__ecor74formula__4->GetXaxis()->SetTitleSize(0.06);
   Object1205__ecor74formula__4->GetXaxis()->SetTitleFont(42);
   Object1205__ecor74formula__4->GetYaxis()->SetTitle("Events / ( 0.04 )");
   Object1205__ecor74formula__4->GetYaxis()->SetLabelFont(42);
   Object1205__ecor74formula__4->GetYaxis()->SetLabelSize(0.05);
   Object1205__ecor74formula__4->GetYaxis()->SetTitleSize(0.06);
   Object1205__ecor74formula__4->GetYaxis()->SetTitleOffset(0);
   Object1205__ecor74formula__4->GetYaxis()->SetTitleFont(42);
   Object1205__ecor74formula__4->GetZaxis()->SetLabelFont(42);
   Object1205__ecor74formula__4->GetZaxis()->SetLabelSize(0.035);
   Object1205__ecor74formula__4->GetZaxis()->SetTitleSize(0.035);
   Object1205__ecor74formula__4->GetZaxis()->SetTitleFont(42);
   Object1205__ecor74formula__4->Draw("");
   
   TF1 *Object12024 = new TF1("Object1202","gaus",0.8936915,0.9863085, TF1::EAddToList::kDefault);
   Object12024->SetFillColor(19);
   Object12024->SetFillStyle(0);
   Object12024->SetLineColor(2);
   Object12024->SetLineWidth(2);
   Object12024->SetChisquare(1.364671e-09);
   Object12024->SetNDF(0);
   Object12024->GetXaxis()->SetLabelFont(42);
   Object12024->GetXaxis()->SetLabelSize(0.035);
   Object12024->GetXaxis()->SetTitleSize(0.035);
   Object12024->GetXaxis()->SetTitleFont(42);
   Object12024->GetYaxis()->SetLabelFont(42);
   Object12024->GetYaxis()->SetLabelSize(0.035);
   Object12024->GetYaxis()->SetTitleSize(0.035);
   Object12024->GetYaxis()->SetTitleOffset(0);
   Object12024->GetYaxis()->SetTitleFont(42);
   Object12024->SetParameter(0,5.120385);
   Object12024->SetParError(0,2.285257);
   Object12024->SetParLimits(0,0,0);
   Object12024->SetParameter(1,0.9345115);
   Object12024->SetParError(1,0.009365325);
   Object12024->SetParLimits(1,0,0);
   Object12024->SetParameter(2,0.02516896);
   Object12024->SetParError(2,0.00754505);
   Object12024->SetParLimits(2,0,0.2397916);
   Object12024->Draw("SAME");
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
      tex = new TLatex(0.34,0.79,"0.9345");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.24,0.72,"#sigma");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.34,0.72,"0.0252");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.24,0.635,"#sigma_{eff}");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.34,0.635,"0.0720");
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
   c_2->Range(0.3468354,-3.211863,1.612658,19.73002);
   c_2->SetFillColor(0);
   c_2->SetBorderMode(0);
   c_2->SetBorderSize(2);
   c_2->SetLeftMargin(0.2);
   c_2->SetRightMargin(0.01);
   c_2->SetBottomMargin(0.14);
   c_2->SetFrameBorderMode(0);
   
   TH1F *Object1232__ecor74formula__5 = new TH1F("Object1232__ecor74formula__5","E_{corr. (current)}/E_{true} ( 2.0 <= clusSize < 3.0 )",50,0,2);
   Object1232__ecor74formula__5->SetBinContent(23,1);
   Object1232__ecor74formula__5->SetBinContent(24,5);
   Object1232__ecor74formula__5->SetBinContent(25,4);
   Object1232__ecor74formula__5->SetBinContent(26,3);
   Object1232__ecor74formula__5->SetBinContent(27,8);
   Object1232__ecor74formula__5->SetBinContent(28,11);
   Object1232__ecor74formula__5->SetBinContent(29,6);
   Object1232__ecor74formula__5->SetBinContent(30,1);
   Object1232__ecor74formula__5->SetBinContent(31,1);
   Object1232__ecor74formula__5->SetBinContent(33,1);
   Object1232__ecor74formula__5->SetBinError(23,1);
   Object1232__ecor74formula__5->SetBinError(24,2.236068);
   Object1232__ecor74formula__5->SetBinError(25,2);
   Object1232__ecor74formula__5->SetBinError(26,1.732051);
   Object1232__ecor74formula__5->SetBinError(27,2.828427);
   Object1232__ecor74formula__5->SetBinError(28,3.316625);
   Object1232__ecor74formula__5->SetBinError(29,2.44949);
   Object1232__ecor74formula__5->SetBinError(30,1);
   Object1232__ecor74formula__5->SetBinError(31,1);
   Object1232__ecor74formula__5->SetBinError(33,1);
   Object1232__ecor74formula__5->SetEntries(41);
   Object1232__ecor74formula__5->SetDirectory(0);
   Object1232__ecor74formula__5->SetStats(0);

   ci = TColor::GetColor("#000099");
   Object1232__ecor74formula__5->SetLineColor(ci);
   Object1232__ecor74formula__5->GetXaxis()->SetTitle("E_{corr. (current)}/E_{true}");
   Object1232__ecor74formula__5->GetXaxis()->SetRange(16,40);
   Object1232__ecor74formula__5->GetXaxis()->SetLabelFont(42);
   Object1232__ecor74formula__5->GetXaxis()->SetLabelSize(0.05);
   Object1232__ecor74formula__5->GetXaxis()->SetTitleSize(0.06);
   Object1232__ecor74formula__5->GetXaxis()->SetTitleFont(42);
   Object1232__ecor74formula__5->GetYaxis()->SetTitle("Events / ( 0.04 )");
   Object1232__ecor74formula__5->GetYaxis()->SetLabelFont(42);
   Object1232__ecor74formula__5->GetYaxis()->SetLabelSize(0.05);
   Object1232__ecor74formula__5->GetYaxis()->SetTitleSize(0.06);
   Object1232__ecor74formula__5->GetYaxis()->SetTitleOffset(0);
   Object1232__ecor74formula__5->GetYaxis()->SetTitleFont(42);
   Object1232__ecor74formula__5->GetZaxis()->SetLabelFont(42);
   Object1232__ecor74formula__5->GetZaxis()->SetLabelSize(0.035);
   Object1232__ecor74formula__5->GetZaxis()->SetTitleSize(0.035);
   Object1232__ecor74formula__5->GetZaxis()->SetTitleFont(42);
   Object1232__ecor74formula__5->Draw("");
   
   TF1 *Object12295 = new TF1("Object1229","gaus",1.048982,1.151018, TF1::EAddToList::kDefault);
   Object12295->SetFillColor(19);
   Object12295->SetFillStyle(0);
   Object12295->SetLineColor(2);
   Object12295->SetLineWidth(2);
   Object12295->SetChisquare(3.319593e-08);
   Object12295->SetNDF(0);
   Object12295->GetXaxis()->SetLabelFont(42);
   Object12295->GetXaxis()->SetLabelSize(0.035);
   Object12295->GetXaxis()->SetTitleSize(0.035);
   Object12295->GetXaxis()->SetTitleFont(42);
   Object12295->GetYaxis()->SetLabelFont(42);
   Object12295->GetYaxis()->SetLabelSize(0.035);
   Object12295->GetYaxis()->SetTitleSize(0.035);
   Object12295->GetYaxis()->SetTitleOffset(0);
   Object12295->GetYaxis()->SetTitleFont(42);
   Object12295->SetParameter(0,11.12364);
   Object12295->SetParError(0,3.305533);
   Object12295->SetParLimits(0,0,0);
   Object12295->SetParameter(1,1.093775);
   Object12295->SetParError(1,0.0124106);
   Object12295->SetParLimits(1,0,0);
   Object12295->SetParameter(2,0.04159952);
   Object12295->SetParError(2,0.01811746);
   Object12295->SetParLimits(2,0,0.2976172);
   Object12295->Draw("SAME");
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
      tex = new TLatex(0.34,0.79,"1.0938");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.24,0.72,"#sigma");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.34,0.72,"0.0416");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.24,0.635,"#sigma_{eff}");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.34,0.635,"0.0790");
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
   c_3->Range(0.3468354,-1.399608,1.612658,8.597591);
   c_3->SetFillColor(0);
   c_3->SetBorderMode(0);
   c_3->SetBorderSize(2);
   c_3->SetLeftMargin(0.2);
   c_3->SetRightMargin(0.01);
   c_3->SetBottomMargin(0.14);
   c_3->SetFrameBorderMode(0);
   
   TH1F *Object1259__ecor74formula__6 = new TH1F("Object1259__ecor74formula__6","E_{corr. (current)}/E_{true} ( 3.0 <= clusSize < 6 )",50,0,2);
   Object1259__ecor74formula__6->SetBinContent(25,2);
   Object1259__ecor74formula__6->SetBinContent(28,2);
   Object1259__ecor74formula__6->SetBinContent(29,4);
   Object1259__ecor74formula__6->SetBinContent(30,5);
   Object1259__ecor74formula__6->SetBinError(25,1.414214);
   Object1259__ecor74formula__6->SetBinError(28,1.414214);
   Object1259__ecor74formula__6->SetBinError(29,2);
   Object1259__ecor74formula__6->SetBinError(30,2.236068);
   Object1259__ecor74formula__6->SetEntries(13);
   Object1259__ecor74formula__6->SetDirectory(0);
   Object1259__ecor74formula__6->SetStats(0);

   ci = TColor::GetColor("#000099");
   Object1259__ecor74formula__6->SetLineColor(ci);
   Object1259__ecor74formula__6->GetXaxis()->SetTitle("E_{corr. (current)}/E_{true}");
   Object1259__ecor74formula__6->GetXaxis()->SetRange(16,40);
   Object1259__ecor74formula__6->GetXaxis()->SetLabelFont(42);
   Object1259__ecor74formula__6->GetXaxis()->SetLabelSize(0.05);
   Object1259__ecor74formula__6->GetXaxis()->SetTitleSize(0.06);
   Object1259__ecor74formula__6->GetXaxis()->SetTitleFont(42);
   Object1259__ecor74formula__6->GetYaxis()->SetTitle("Events / ( 0.04 )");
   Object1259__ecor74formula__6->GetYaxis()->SetLabelFont(42);
   Object1259__ecor74formula__6->GetYaxis()->SetLabelSize(0.05);
   Object1259__ecor74formula__6->GetYaxis()->SetTitleSize(0.06);
   Object1259__ecor74formula__6->GetYaxis()->SetTitleOffset(0);
   Object1259__ecor74formula__6->GetYaxis()->SetTitleFont(42);
   Object1259__ecor74formula__6->GetZaxis()->SetLabelFont(42);
   Object1259__ecor74formula__6->GetZaxis()->SetLabelSize(0.035);
   Object1259__ecor74formula__6->GetZaxis()->SetTitleSize(0.035);
   Object1259__ecor74formula__6->GetZaxis()->SetTitleFont(42);
   Object1259__ecor74formula__6->Draw("");
   
   TF1 *Object12566 = new TF1("Object1256","gaus",1.142009,1.217991, TF1::EAddToList::kDefault);
   Object12566->SetFillColor(19);
   Object12566->SetFillStyle(0);
   Object12566->SetLineColor(2);
   Object12566->SetLineWidth(2);
   Object12566->SetChisquare(5.600413e-11);
   Object12566->SetNDF(0);
   Object12566->GetXaxis()->SetLabelFont(42);
   Object12566->GetXaxis()->SetLabelSize(0.035);
   Object12566->GetXaxis()->SetTitleSize(0.035);
   Object12566->GetXaxis()->SetTitleFont(42);
   Object12566->GetYaxis()->SetLabelFont(42);
   Object12566->GetYaxis()->SetLabelSize(0.035);
   Object12566->GetYaxis()->SetTitleSize(0.035);
   Object12566->GetYaxis()->SetTitleOffset(0);
   Object12566->GetYaxis()->SetTitleFont(42);
   Object12566->SetParameter(0,6.465305);
   Object12566->SetParError(0,43.09713);
   Object12566->SetParLimits(0,0,0);
   Object12566->SetParameter(1,1.357852);
   Object12566->SetParError(1,2.285675);
   Object12566->SetParLimits(1,0,0);
   Object12566->SetParameter(2,0.2480644);
   Object12566->SetParError(2,2.309542);
   Object12566->SetParLimits(2,0,2.5);
   Object12566->Draw("SAME");
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
      tex = new TLatex(0.34,0.79,"1.3579");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.24,0.72,"#sigma");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.34,0.72,"0.2481");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.24,0.635,"#sigma_{eff}");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.34,0.635,"0.0279");
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
