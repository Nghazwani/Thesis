void EBZS_GENPT_0000_0006_PerBinFitEcor74formula()
{
//=========Macro generated from canvas: c/c
//=========  (Sat Feb 10 01:15:37 2024) by ROOT version 6.12/07
   TCanvas *c = new TCanvas("c", "c",1,1,887,685);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: c_1
   TPad *c_1 = new TPad("c_1", "c_1",0.01,0.01,0.49,0.99);
   c_1->Draw();
   c_1->cd();
   c_1->Range(0.3468354,-2299.493,1.612658,14125.46);
   c_1->SetFillColor(0);
   c_1->SetBorderMode(0);
   c_1->SetBorderSize(2);
   c_1->SetLeftMargin(0.2);
   c_1->SetRightMargin(0.01);
   c_1->SetBottomMargin(0.14);
   c_1->SetFrameBorderMode(0);
   
   TH1F *Object17__ecor74formula__3 = new TH1F("Object17__ecor74formula__3","E_{corr. (current)}/E_{true} ( 0.25 <= genPt < 1.4 )",50,0,2);
   Object17__ecor74formula__3->SetBinContent(21,1292);
   Object17__ecor74formula__3->SetBinContent(22,8441);
   Object17__ecor74formula__3->SetBinContent(23,9236);
   Object17__ecor74formula__3->SetBinContent(24,9379);
   Object17__ecor74formula__3->SetBinContent(25,8813);
   Object17__ecor74formula__3->SetBinContent(26,7532);
   Object17__ecor74formula__3->SetBinContent(27,6001);
   Object17__ecor74formula__3->SetBinContent(28,4383);
   Object17__ecor74formula__3->SetBinContent(29,3163);
   Object17__ecor74formula__3->SetBinContent(30,2062);
   Object17__ecor74formula__3->SetBinContent(31,1439);
   Object17__ecor74formula__3->SetBinContent(32,965);
   Object17__ecor74formula__3->SetBinContent(33,667);
   Object17__ecor74formula__3->SetBinContent(34,442);
   Object17__ecor74formula__3->SetBinContent(35,325);
   Object17__ecor74formula__3->SetBinContent(36,244);
   Object17__ecor74formula__3->SetBinContent(37,164);
   Object17__ecor74formula__3->SetBinContent(38,105);
   Object17__ecor74formula__3->SetBinContent(39,90);
   Object17__ecor74formula__3->SetBinContent(40,64);
   Object17__ecor74formula__3->SetBinContent(41,53);
   Object17__ecor74formula__3->SetBinContent(42,40);
   Object17__ecor74formula__3->SetBinContent(43,32);
   Object17__ecor74formula__3->SetBinContent(44,26);
   Object17__ecor74formula__3->SetBinContent(45,16);
   Object17__ecor74formula__3->SetBinContent(46,11);
   Object17__ecor74formula__3->SetBinContent(47,8);
   Object17__ecor74formula__3->SetBinContent(48,4);
   Object17__ecor74formula__3->SetBinContent(49,3);
   Object17__ecor74formula__3->SetBinContent(50,1);
   Object17__ecor74formula__3->SetBinError(21,35.9444);
   Object17__ecor74formula__3->SetBinError(22,91.87491);
   Object17__ecor74formula__3->SetBinError(23,96.10411);
   Object17__ecor74formula__3->SetBinError(24,96.84524);
   Object17__ecor74formula__3->SetBinError(25,93.87758);
   Object17__ecor74formula__3->SetBinError(26,86.7871);
   Object17__ecor74formula__3->SetBinError(27,77.46612);
   Object17__ecor74formula__3->SetBinError(28,66.20423);
   Object17__ecor74formula__3->SetBinError(29,56.24055);
   Object17__ecor74formula__3->SetBinError(30,45.40925);
   Object17__ecor74formula__3->SetBinError(31,37.93415);
   Object17__ecor74formula__3->SetBinError(32,31.06445);
   Object17__ecor74formula__3->SetBinError(33,25.82634);
   Object17__ecor74formula__3->SetBinError(34,21.0238);
   Object17__ecor74formula__3->SetBinError(35,18.02776);
   Object17__ecor74formula__3->SetBinError(36,15.6205);
   Object17__ecor74formula__3->SetBinError(37,12.80625);
   Object17__ecor74formula__3->SetBinError(38,10.24695);
   Object17__ecor74formula__3->SetBinError(39,9.486833);
   Object17__ecor74formula__3->SetBinError(40,8);
   Object17__ecor74formula__3->SetBinError(41,7.28011);
   Object17__ecor74formula__3->SetBinError(42,6.324555);
   Object17__ecor74formula__3->SetBinError(43,5.656854);
   Object17__ecor74formula__3->SetBinError(44,5.09902);
   Object17__ecor74formula__3->SetBinError(45,4);
   Object17__ecor74formula__3->SetBinError(46,3.316625);
   Object17__ecor74formula__3->SetBinError(47,2.828427);
   Object17__ecor74formula__3->SetBinError(48,2);
   Object17__ecor74formula__3->SetBinError(49,1.732051);
   Object17__ecor74formula__3->SetBinError(50,1);
   Object17__ecor74formula__3->SetEntries(65001);
   Object17__ecor74formula__3->SetDirectory(0);
   Object17__ecor74formula__3->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Object17__ecor74formula__3->SetLineColor(ci);
   Object17__ecor74formula__3->GetXaxis()->SetTitle("E_{corr. (current)}/E_{true}");
   Object17__ecor74formula__3->GetXaxis()->SetRange(16,40);
   Object17__ecor74formula__3->GetXaxis()->SetLabelFont(42);
   Object17__ecor74formula__3->GetXaxis()->SetLabelSize(0.05);
   Object17__ecor74formula__3->GetXaxis()->SetTitleSize(0.06);
   Object17__ecor74formula__3->GetXaxis()->SetTitleFont(42);
   Object17__ecor74formula__3->GetYaxis()->SetTitle("Events / ( 0.04 )");
   Object17__ecor74formula__3->GetYaxis()->SetLabelFont(42);
   Object17__ecor74formula__3->GetYaxis()->SetLabelSize(0.05);
   Object17__ecor74formula__3->GetYaxis()->SetTitleSize(0.06);
   Object17__ecor74formula__3->GetYaxis()->SetTitleOffset(0);
   Object17__ecor74formula__3->GetYaxis()->SetTitleFont(42);
   Object17__ecor74formula__3->GetZaxis()->SetLabelFont(42);
   Object17__ecor74formula__3->GetZaxis()->SetLabelSize(0.035);
   Object17__ecor74formula__3->GetZaxis()->SetTitleSize(0.035);
   Object17__ecor74formula__3->GetZaxis()->SetTitleFont(42);
   Object17__ecor74formula__3->Draw("");
   
   TF1 *Object143 = new TF1("Object14","gaus",0.8630723,1.016928, TF1::EAddToList::kDefault);
   Object143->SetFillColor(19);
   Object143->SetFillStyle(0);
   Object143->SetLineColor(2);
   Object143->SetLineWidth(2);
   Object143->SetChisquare(3.666612e-07);
   Object143->SetNDF(0);
   Object143->GetXaxis()->SetLabelFont(42);
   Object143->GetXaxis()->SetLabelSize(0.035);
   Object143->GetXaxis()->SetTitleSize(0.035);
   Object143->GetXaxis()->SetTitleFont(42);
   Object143->GetYaxis()->SetLabelFont(42);
   Object143->GetYaxis()->SetLabelSize(0.035);
   Object143->GetYaxis()->SetTitleSize(0.035);
   Object143->GetYaxis()->SetTitleOffset(0);
   Object143->GetYaxis()->SetTitleFont(42);
   Object143->SetParameter(0,9412.214);
   Object143->SetParError(0,90.98526);
   Object143->SetParLimits(0,0,0);
   Object143->SetParameter(1,0.9279187);
   Object143->SetParError(1,0.005476136);
   Object143->SetParLimits(1,0,0);
   Object143->SetParameter(2,0.1435863);
   Object143->SetParError(2,0.02345529);
   Object143->SetParLimits(2,0,0.3244225);
   Object143->Draw("SAME");
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
      tex = new TLatex(0.34,0.79,"0.9279");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.24,0.72,"#sigma");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.34,0.72,"0.1436");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.24,0.635,"#sigma_{eff}");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.34,0.635,"0.1027");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetLineWidth(2);
   tex->Draw();
   c_1->Modified();
   c->cd();
  
// ------------>Primitives in pad: c_2
   TPad *c_2 = new TPad("c_2", "c_2",0.51,0.01,0.99,0.99);
   c_2->Draw();
   c_2->cd();
   c_2->Range(0.3468354,-3919.262,1.612658,24075.46);
   c_2->SetFillColor(0);
   c_2->SetBorderMode(0);
   c_2->SetBorderSize(2);
   c_2->SetLeftMargin(0.2);
   c_2->SetRightMargin(0.01);
   c_2->SetBottomMargin(0.14);
   c_2->SetFrameBorderMode(0);
   
   TH1F *Object44__ecor74formula__4 = new TH1F("Object44__ecor74formula__4","E_{corr. (current)}/E_{true} ( 1.4 <= genPt < 6 )",50,0,2);
   Object44__ecor74formula__4->SetBinContent(19,3);
   Object44__ecor74formula__4->SetBinContent(20,52);
   Object44__ecor74formula__4->SetBinContent(21,1987);
   Object44__ecor74formula__4->SetBinContent(22,9956);
   Object44__ecor74formula__4->SetBinContent(23,14095);
   Object44__ecor74formula__4->SetBinContent(24,17406);
   Object44__ecor74formula__4->SetBinContent(25,17345);
   Object44__ecor74formula__4->SetBinContent(26,14062);
   Object44__ecor74formula__4->SetBinContent(27,9247);
   Object44__ecor74formula__4->SetBinContent(28,5185);
   Object44__ecor74formula__4->SetBinContent(29,2524);
   Object44__ecor74formula__4->SetBinContent(30,1113);
   Object44__ecor74formula__4->SetBinContent(31,473);
   Object44__ecor74formula__4->SetBinContent(32,163);
   Object44__ecor74formula__4->SetBinContent(33,68);
   Object44__ecor74formula__4->SetBinContent(34,32);
   Object44__ecor74formula__4->SetBinContent(35,18);
   Object44__ecor74formula__4->SetBinContent(36,6);
   Object44__ecor74formula__4->SetBinContent(37,3);
   Object44__ecor74formula__4->SetBinError(19,1.732051);
   Object44__ecor74formula__4->SetBinError(20,7.211103);
   Object44__ecor74formula__4->SetBinError(21,44.57578);
   Object44__ecor74formula__4->SetBinError(22,99.77976);
   Object44__ecor74formula__4->SetBinError(23,118.7224);
   Object44__ecor74formula__4->SetBinError(24,131.9318);
   Object44__ecor74formula__4->SetBinError(25,131.7004);
   Object44__ecor74formula__4->SetBinError(26,118.5833);
   Object44__ecor74formula__4->SetBinError(27,96.16132);
   Object44__ecor74formula__4->SetBinError(28,72.00694);
   Object44__ecor74formula__4->SetBinError(29,50.23943);
   Object44__ecor74formula__4->SetBinError(30,33.36165);
   Object44__ecor74formula__4->SetBinError(31,21.74856);
   Object44__ecor74formula__4->SetBinError(32,12.76715);
   Object44__ecor74formula__4->SetBinError(33,8.246211);
   Object44__ecor74formula__4->SetBinError(34,5.656854);
   Object44__ecor74formula__4->SetBinError(35,4.242641);
   Object44__ecor74formula__4->SetBinError(36,2.44949);
   Object44__ecor74formula__4->SetBinError(37,1.732051);
   Object44__ecor74formula__4->SetEntries(93738);
   Object44__ecor74formula__4->SetDirectory(0);
   Object44__ecor74formula__4->SetStats(0);

   ci = TColor::GetColor("#000099");
   Object44__ecor74formula__4->SetLineColor(ci);
   Object44__ecor74formula__4->GetXaxis()->SetTitle("E_{corr. (current)}/E_{true}");
   Object44__ecor74formula__4->GetXaxis()->SetRange(16,40);
   Object44__ecor74formula__4->GetXaxis()->SetLabelFont(42);
   Object44__ecor74formula__4->GetXaxis()->SetLabelSize(0.05);
   Object44__ecor74formula__4->GetXaxis()->SetTitleSize(0.06);
   Object44__ecor74formula__4->GetXaxis()->SetTitleFont(42);
   Object44__ecor74formula__4->GetYaxis()->SetTitle("Events / ( 0.04 )");
   Object44__ecor74formula__4->GetYaxis()->SetLabelFont(42);
   Object44__ecor74formula__4->GetYaxis()->SetLabelSize(0.05);
   Object44__ecor74formula__4->GetYaxis()->SetTitleSize(0.06);
   Object44__ecor74formula__4->GetYaxis()->SetTitleOffset(0);
   Object44__ecor74formula__4->GetYaxis()->SetTitleFont(42);
   Object44__ecor74formula__4->GetZaxis()->SetLabelFont(42);
   Object44__ecor74formula__4->GetZaxis()->SetLabelSize(0.035);
   Object44__ecor74formula__4->GetZaxis()->SetTitleSize(0.035);
   Object44__ecor74formula__4->GetZaxis()->SetTitleFont(42);
   Object44__ecor74formula__4->Draw("");
   
   TF1 *Object414 = new TF1("Object41","gaus",0.8912016,0.9887984, TF1::EAddToList::kDefault);
   Object414->SetFillColor(19);
   Object414->SetFillStyle(0);
   Object414->SetLineColor(2);
   Object414->SetLineWidth(2);
   Object414->SetChisquare(3.502052e-08);
   Object414->SetNDF(0);
   Object414->GetXaxis()->SetLabelFont(42);
   Object414->GetXaxis()->SetLabelSize(0.035);
   Object414->GetXaxis()->SetTitleSize(0.035);
   Object414->GetXaxis()->SetTitleFont(42);
   Object414->GetYaxis()->SetLabelFont(42);
   Object414->GetYaxis()->SetLabelSize(0.035);
   Object414->GetYaxis()->SetTitleSize(0.035);
   Object414->GetYaxis()->SetTitleOffset(0);
   Object414->GetYaxis()->SetTitleFont(42);
   Object414->SetParameter(0,17848.17);
   Object414->SetParError(0,116.0053);
   Object414->SetParLimits(0,0,0);
   Object414->SetParameter(1,0.9593451);
   Object414->SetParError(1,0.001951693);
   Object414->SetParLimits(1,0,0);
   Object414->SetParameter(2,0.08636537);
   Object414->SetParError(2,0.003810535);
   Object414->SetParLimits(2,0,0.3198071);
   Object414->Draw("SAME");
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
      tex = new TLatex(0.34,0.79,"0.9593");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.24,0.72,"#sigma");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.34,0.72,"0.0864");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.24,0.635,"#sigma_{eff}");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.34,0.635,"0.0819");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetLineWidth(2);
   tex->Draw();
   c_2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
