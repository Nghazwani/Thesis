void EEZS_GENETA_0006_0025_PerBinFitEcor91formula()
{
//=========Macro generated from canvas: c/c
//=========  (Sat Feb 10 01:16:08 2024) by ROOT version 6.12/07
   TCanvas *c = new TCanvas("c", "c",1,1,887,685);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: c_1
   TPad *c_1 = new TPad("c_1", "c_1",0.01,0.6766667,0.3233333,0.99);
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
   
   TH1F *Object701__ecor91formula__15 = new TH1F("Object701__ecor91formula__15","E_{corr. (new)}/E_{true} ( 1.4 <= genEta < 1.565 )",50,0,2);
   Object701__ecor91formula__15->SetDirectory(0);
   Object701__ecor91formula__15->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Object701__ecor91formula__15->SetLineColor(ci);
   Object701__ecor91formula__15->GetXaxis()->SetTitle("E_{corr. (new)}/E_{true}");
   Object701__ecor91formula__15->GetXaxis()->SetRange(16,40);
   Object701__ecor91formula__15->GetXaxis()->SetLabelFont(42);
   Object701__ecor91formula__15->GetXaxis()->SetLabelSize(0.05);
   Object701__ecor91formula__15->GetXaxis()->SetTitleSize(0.06);
   Object701__ecor91formula__15->GetXaxis()->SetTitleFont(42);
   Object701__ecor91formula__15->GetYaxis()->SetTitle("Events / ( 0.04 )");
   Object701__ecor91formula__15->GetYaxis()->SetLabelFont(42);
   Object701__ecor91formula__15->GetYaxis()->SetLabelSize(0.05);
   Object701__ecor91formula__15->GetYaxis()->SetTitleSize(0.06);
   Object701__ecor91formula__15->GetYaxis()->SetTitleOffset(0);
   Object701__ecor91formula__15->GetYaxis()->SetTitleFont(42);
   Object701__ecor91formula__15->GetZaxis()->SetLabelFont(42);
   Object701__ecor91formula__15->GetZaxis()->SetLabelSize(0.035);
   Object701__ecor91formula__15->GetZaxis()->SetTitleSize(0.035);
   Object701__ecor91formula__15->GetZaxis()->SetTitleFont(42);
   Object701__ecor91formula__15->Draw("");
   
   TF1 *Object69815 = new TF1("Object698","gaus",0.02,0.02, TF1::EAddToList::kDefault);
   Object69815->SetFillColor(19);
   Object69815->SetFillStyle(0);
   Object69815->SetLineColor(2);
   Object69815->SetLineWidth(2);
   Object69815->GetXaxis()->SetLabelFont(42);
   Object69815->GetXaxis()->SetLabelSize(0.035);
   Object69815->GetXaxis()->SetTitleSize(0.035);
   Object69815->GetXaxis()->SetTitleFont(42);
   Object69815->GetYaxis()->SetLabelFont(42);
   Object69815->GetYaxis()->SetLabelSize(0.035);
   Object69815->GetYaxis()->SetTitleSize(0.035);
   Object69815->GetYaxis()->SetTitleOffset(0);
   Object69815->GetYaxis()->SetTitleFont(42);
   Object69815->SetParameter(0,0);
   Object69815->SetParError(0,0);
   Object69815->SetParLimits(0,0,0);
   Object69815->SetParameter(1,0);
   Object69815->SetParError(1,0);
   Object69815->SetParLimits(1,0,0);
   Object69815->SetParameter(2,0);
   Object69815->SetParError(2,0);
   Object69815->SetParLimits(2,0,0);
   Object69815->Draw("SAME");
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
   TPad *c_2 = new TPad("c_2", "c_2",0.3433333,0.6766667,0.6566667,0.99);
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
   
   TH1F *Object728__ecor91formula__16 = new TH1F("Object728__ecor91formula__16","E_{corr. (new)}/E_{true} ( 1.565 <= genEta < 1.6 )",50,0,2);
   Object728__ecor91formula__16->SetDirectory(0);
   Object728__ecor91formula__16->SetStats(0);

   ci = TColor::GetColor("#000099");
   Object728__ecor91formula__16->SetLineColor(ci);
   Object728__ecor91formula__16->GetXaxis()->SetTitle("E_{corr. (new)}/E_{true}");
   Object728__ecor91formula__16->GetXaxis()->SetRange(16,40);
   Object728__ecor91formula__16->GetXaxis()->SetLabelFont(42);
   Object728__ecor91formula__16->GetXaxis()->SetLabelSize(0.05);
   Object728__ecor91formula__16->GetXaxis()->SetTitleSize(0.06);
   Object728__ecor91formula__16->GetXaxis()->SetTitleFont(42);
   Object728__ecor91formula__16->GetYaxis()->SetTitle("Events / ( 0.04 )");
   Object728__ecor91formula__16->GetYaxis()->SetLabelFont(42);
   Object728__ecor91formula__16->GetYaxis()->SetLabelSize(0.05);
   Object728__ecor91formula__16->GetYaxis()->SetTitleSize(0.06);
   Object728__ecor91formula__16->GetYaxis()->SetTitleOffset(0);
   Object728__ecor91formula__16->GetYaxis()->SetTitleFont(42);
   Object728__ecor91formula__16->GetZaxis()->SetLabelFont(42);
   Object728__ecor91formula__16->GetZaxis()->SetLabelSize(0.035);
   Object728__ecor91formula__16->GetZaxis()->SetTitleSize(0.035);
   Object728__ecor91formula__16->GetZaxis()->SetTitleFont(42);
   Object728__ecor91formula__16->Draw("");
   
   TF1 *Object72516 = new TF1("Object725","gaus",0.02,0.02, TF1::EAddToList::kDefault);
   Object72516->SetFillColor(19);
   Object72516->SetFillStyle(0);
   Object72516->SetLineColor(2);
   Object72516->SetLineWidth(2);
   Object72516->GetXaxis()->SetLabelFont(42);
   Object72516->GetXaxis()->SetLabelSize(0.035);
   Object72516->GetXaxis()->SetTitleSize(0.035);
   Object72516->GetXaxis()->SetTitleFont(42);
   Object72516->GetYaxis()->SetLabelFont(42);
   Object72516->GetYaxis()->SetLabelSize(0.035);
   Object72516->GetYaxis()->SetTitleSize(0.035);
   Object72516->GetYaxis()->SetTitleOffset(0);
   Object72516->GetYaxis()->SetTitleFont(42);
   Object72516->SetParameter(0,0);
   Object72516->SetParError(0,0);
   Object72516->SetParLimits(0,0,0);
   Object72516->SetParameter(1,0);
   Object72516->SetParError(1,0);
   Object72516->SetParLimits(1,0,0);
   Object72516->SetParameter(2,0);
   Object72516->SetParError(2,0);
   Object72516->SetParLimits(2,0,0);
   Object72516->Draw("SAME");
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
   TPad *c_3 = new TPad("c_3", "c_3",0.6766667,0.6766667,0.99,0.99);
   c_3->Draw();
   c_3->cd();
   c_3->Range(0.3468354,-2.094446,1.612658,12.86588);
   c_3->SetFillColor(0);
   c_3->SetBorderMode(0);
   c_3->SetBorderSize(2);
   c_3->SetLeftMargin(0.2);
   c_3->SetRightMargin(0.01);
   c_3->SetBottomMargin(0.14);
   c_3->SetFrameBorderMode(0);
   
   TH1F *Object755__ecor91formula__17 = new TH1F("Object755__ecor91formula__17","E_{corr. (new)}/E_{true} ( 1.6 <= genEta < 1.8 )",50,0,2);
   Object755__ecor91formula__17->SetBinContent(25,1);
   Object755__ecor91formula__17->SetBinContent(27,5);
   Object755__ecor91formula__17->SetBinContent(28,7);
   Object755__ecor91formula__17->SetBinContent(29,1);
   Object755__ecor91formula__17->SetBinError(25,1);
   Object755__ecor91formula__17->SetBinError(27,2.236068);
   Object755__ecor91formula__17->SetBinError(28,2.645751);
   Object755__ecor91formula__17->SetBinError(29,1);
   Object755__ecor91formula__17->SetEntries(14);
   Object755__ecor91formula__17->SetDirectory(0);
   Object755__ecor91formula__17->SetStats(0);

   ci = TColor::GetColor("#000099");
   Object755__ecor91formula__17->SetLineColor(ci);
   Object755__ecor91formula__17->GetXaxis()->SetTitle("E_{corr. (new)}/E_{true}");
   Object755__ecor91formula__17->GetXaxis()->SetRange(16,40);
   Object755__ecor91formula__17->GetXaxis()->SetLabelFont(42);
   Object755__ecor91formula__17->GetXaxis()->SetLabelSize(0.05);
   Object755__ecor91formula__17->GetXaxis()->SetTitleSize(0.06);
   Object755__ecor91formula__17->GetXaxis()->SetTitleFont(42);
   Object755__ecor91formula__17->GetYaxis()->SetTitle("Events / ( 0.04 )");
   Object755__ecor91formula__17->GetYaxis()->SetLabelFont(42);
   Object755__ecor91formula__17->GetYaxis()->SetLabelSize(0.05);
   Object755__ecor91formula__17->GetYaxis()->SetTitleSize(0.06);
   Object755__ecor91formula__17->GetYaxis()->SetTitleOffset(0);
   Object755__ecor91formula__17->GetYaxis()->SetTitleFont(42);
   Object755__ecor91formula__17->GetZaxis()->SetLabelFont(42);
   Object755__ecor91formula__17->GetZaxis()->SetLabelSize(0.035);
   Object755__ecor91formula__17->GetZaxis()->SetTitleSize(0.035);
   Object755__ecor91formula__17->GetZaxis()->SetTitleFont(42);
   Object755__ecor91formula__17->Draw("");
   
   TF1 *Object75217 = new TF1("Object752","gaus",1.076315,1.123685, TF1::EAddToList::kDefault);
   Object75217->SetFillColor(19);
   Object75217->SetFillStyle(0);
   Object75217->SetLineColor(2);
   Object75217->SetLineWidth(2);
   Object75217->SetChisquare(7);
   Object75217->SetNDF(0);
   Object75217->GetXaxis()->SetLabelFont(42);
   Object75217->GetXaxis()->SetLabelSize(0.035);
   Object75217->GetXaxis()->SetTitleSize(0.035);
   Object75217->GetXaxis()->SetTitleFont(42);
   Object75217->GetYaxis()->SetLabelFont(42);
   Object75217->GetYaxis()->SetLabelSize(0.035);
   Object75217->GetYaxis()->SetTitleSize(0.035);
   Object75217->GetYaxis()->SetTitleOffset(0);
   Object75217->GetYaxis()->SetTitleFont(42);
   Object75217->SetParameter(0,9.325717e+07);
   Object75217->SetParError(0,1.414214);
   Object75217->SetParLimits(0,0,0);
   Object75217->SetParameter(1,1.100005);
   Object75217->SetParError(1,1.414214);
   Object75217->SetParLimits(1,0,0);
   Object75217->SetParameter(2,1.490116e-08);
   Object75217->SetParError(2,7.758235e-08);
   Object75217->SetParLimits(2,0,1.490116e-07);
   Object75217->Draw("SAME");
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
      tex = new TLatex(0.34,0.79,"1.1000");
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
      tex = new TLatex(0.34,0.635,"0.0266");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetLineWidth(2);
   tex->Draw();
   c_3->Modified();
   c->cd();
  
// ------------>Primitives in pad: c_4
   TPad *c_4 = new TPad("c_4", "c_4",0.01,0.3433333,0.3233333,0.6566667);
   c_4->Draw();
   c_4->cd();
   c_4->Range(0.3468354,-2.094446,1.612658,12.86588);
   c_4->SetFillColor(0);
   c_4->SetBorderMode(0);
   c_4->SetBorderSize(2);
   c_4->SetLeftMargin(0.2);
   c_4->SetRightMargin(0.01);
   c_4->SetBottomMargin(0.14);
   c_4->SetFrameBorderMode(0);
   
   TH1F *Object782__ecor91formula__18 = new TH1F("Object782__ecor91formula__18","E_{corr. (new)}/E_{true} ( 1.8 <= genEta < 2.0 )",50,0,2);
   Object782__ecor91formula__18->SetBinContent(25,3);
   Object782__ecor91formula__18->SetBinContent(26,4);
   Object782__ecor91formula__18->SetBinContent(27,7);
   Object782__ecor91formula__18->SetBinContent(28,2);
   Object782__ecor91formula__18->SetBinContent(29,2);
   Object782__ecor91formula__18->SetBinError(25,1.732051);
   Object782__ecor91formula__18->SetBinError(26,2);
   Object782__ecor91formula__18->SetBinError(27,2.645751);
   Object782__ecor91formula__18->SetBinError(28,1.414214);
   Object782__ecor91formula__18->SetBinError(29,1.414214);
   Object782__ecor91formula__18->SetEntries(18);
   Object782__ecor91formula__18->SetDirectory(0);
   Object782__ecor91formula__18->SetStats(0);

   ci = TColor::GetColor("#000099");
   Object782__ecor91formula__18->SetLineColor(ci);
   Object782__ecor91formula__18->GetXaxis()->SetTitle("E_{corr. (new)}/E_{true}");
   Object782__ecor91formula__18->GetXaxis()->SetRange(16,40);
   Object782__ecor91formula__18->GetXaxis()->SetLabelFont(42);
   Object782__ecor91formula__18->GetXaxis()->SetLabelSize(0.05);
   Object782__ecor91formula__18->GetXaxis()->SetTitleSize(0.06);
   Object782__ecor91formula__18->GetXaxis()->SetTitleFont(42);
   Object782__ecor91formula__18->GetYaxis()->SetTitle("Events / ( 0.04 )");
   Object782__ecor91formula__18->GetYaxis()->SetLabelFont(42);
   Object782__ecor91formula__18->GetYaxis()->SetLabelSize(0.05);
   Object782__ecor91formula__18->GetYaxis()->SetTitleSize(0.06);
   Object782__ecor91formula__18->GetYaxis()->SetTitleOffset(0);
   Object782__ecor91formula__18->GetYaxis()->SetTitleFont(42);
   Object782__ecor91formula__18->GetZaxis()->SetLabelFont(42);
   Object782__ecor91formula__18->GetZaxis()->SetLabelSize(0.035);
   Object782__ecor91formula__18->GetZaxis()->SetTitleSize(0.035);
   Object782__ecor91formula__18->GetZaxis()->SetTitleFont(42);
   Object782__ecor91formula__18->Draw("");
   
   TF1 *Object77918 = new TF1("Object779","gaus",1.03386,1.08614, TF1::EAddToList::kDefault);
   Object77918->SetFillColor(19);
   Object77918->SetFillStyle(0);
   Object77918->SetLineColor(2);
   Object77918->SetLineWidth(2);
   Object77918->SetChisquare(3.298363e-09);
   Object77918->SetNDF(0);
   Object77918->GetXaxis()->SetLabelFont(42);
   Object77918->GetXaxis()->SetLabelSize(0.035);
   Object77918->GetXaxis()->SetTitleSize(0.035);
   Object77918->GetXaxis()->SetTitleFont(42);
   Object77918->GetYaxis()->SetLabelFont(42);
   Object77918->GetYaxis()->SetLabelSize(0.035);
   Object77918->GetYaxis()->SetTitleSize(0.035);
   Object77918->GetYaxis()->SetTitleOffset(0);
   Object77918->GetYaxis()->SetTitleFont(42);
   Object77918->SetParameter(0,9.026439);
   Object77918->SetParError(0,637.7999);
   Object77918->SetParLimits(0,0,0);
   Object77918->SetParameter(1,1.235655);
   Object77918->SetParError(1,28.81707);
   Object77918->SetParLimits(1,0,0);
   Object77918->SetParameter(2,0.2463193);
   Object77918->SetParError(2,1.317611);
   Object77918->SetParLimits(2,0,2.5);
   Object77918->Draw("SAME");
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
      tex = new TLatex(0.34,0.79,"1.2357");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.24,0.72,"#sigma");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.34,0.72,"0.2463");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.24,0.635,"#sigma_{eff}");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.34,0.635,"0.0423");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetLineWidth(2);
   tex->Draw();
   c_4->Modified();
   c->cd();
  
// ------------>Primitives in pad: c_5
   TPad *c_5 = new TPad("c_5", "c_5",0.3433333,0.3433333,0.6566667,0.6566667);
   c_5->Draw();
   c_5->cd();
   c_5->Range(0.3468354,-2.094446,1.612658,12.86588);
   c_5->SetFillColor(0);
   c_5->SetBorderMode(0);
   c_5->SetBorderSize(2);
   c_5->SetLeftMargin(0.2);
   c_5->SetRightMargin(0.01);
   c_5->SetBottomMargin(0.14);
   c_5->SetFrameBorderMode(0);
   
   TH1F *Object809__ecor91formula__19 = new TH1F("Object809__ecor91formula__19","E_{corr. (new)}/E_{true} ( 2.0 <= genEta < 2.2 )",50,0,2);
   Object809__ecor91formula__19->SetBinContent(22,1);
   Object809__ecor91formula__19->SetBinContent(26,2);
   Object809__ecor91formula__19->SetBinContent(27,4);
   Object809__ecor91formula__19->SetBinContent(28,9);
   Object809__ecor91formula__19->SetBinContent(29,6);
   Object809__ecor91formula__19->SetBinContent(30,2);
   Object809__ecor91formula__19->SetBinError(22,1);
   Object809__ecor91formula__19->SetBinError(26,1.414214);
   Object809__ecor91formula__19->SetBinError(27,2);
   Object809__ecor91formula__19->SetBinError(28,3);
   Object809__ecor91formula__19->SetBinError(29,2.44949);
   Object809__ecor91formula__19->SetBinError(30,1.414214);
   Object809__ecor91formula__19->SetEntries(24);
   Object809__ecor91formula__19->SetDirectory(0);
   Object809__ecor91formula__19->SetStats(0);

   ci = TColor::GetColor("#000099");
   Object809__ecor91formula__19->SetLineColor(ci);
   Object809__ecor91formula__19->GetXaxis()->SetTitle("E_{corr. (new)}/E_{true}");
   Object809__ecor91formula__19->GetXaxis()->SetRange(16,40);
   Object809__ecor91formula__19->GetXaxis()->SetLabelFont(42);
   Object809__ecor91formula__19->GetXaxis()->SetLabelSize(0.05);
   Object809__ecor91formula__19->GetXaxis()->SetTitleSize(0.06);
   Object809__ecor91formula__19->GetXaxis()->SetTitleFont(42);
   Object809__ecor91formula__19->GetYaxis()->SetTitle("Events / ( 0.04 )");
   Object809__ecor91formula__19->GetYaxis()->SetLabelFont(42);
   Object809__ecor91formula__19->GetYaxis()->SetLabelSize(0.05);
   Object809__ecor91formula__19->GetYaxis()->SetTitleSize(0.06);
   Object809__ecor91formula__19->GetYaxis()->SetTitleOffset(0);
   Object809__ecor91formula__19->GetYaxis()->SetTitleFont(42);
   Object809__ecor91formula__19->GetZaxis()->SetLabelFont(42);
   Object809__ecor91formula__19->GetZaxis()->SetLabelSize(0.035);
   Object809__ecor91formula__19->GetZaxis()->SetTitleSize(0.035);
   Object809__ecor91formula__19->GetZaxis()->SetTitleFont(42);
   Object809__ecor91formula__19->Draw("");
   
   TF1 *Object80619 = new TF1("Object806","gaus",1.061378,1.138622, TF1::EAddToList::kDefault);
   Object80619->SetFillColor(19);
   Object80619->SetFillStyle(0);
   Object80619->SetLineColor(2);
   Object80619->SetLineWidth(2);
   Object80619->SetChisquare(5.792552e-10);
   Object80619->SetNDF(0);
   Object80619->GetXaxis()->SetLabelFont(42);
   Object80619->GetXaxis()->SetLabelSize(0.035);
   Object80619->GetXaxis()->SetTitleSize(0.035);
   Object80619->GetXaxis()->SetTitleFont(42);
   Object80619->GetYaxis()->SetLabelFont(42);
   Object80619->GetYaxis()->SetLabelSize(0.035);
   Object80619->GetYaxis()->SetTitleSize(0.035);
   Object80619->GetYaxis()->SetTitleOffset(0);
   Object80619->GetYaxis()->SetTitleFont(42);
   Object80619->SetParameter(0,11.62375);
   Object80619->SetParError(0,57.72835);
   Object80619->SetParLimits(0,0,0);
   Object80619->SetParameter(1,1.276935);
   Object80619->SetParError(1,1.711145);
   Object80619->SetParLimits(1,0,0);
   Object80619->SetParameter(2,0.2473538);
   Object80619->SetParError(2,2.270127);
   Object80619->SetParLimits(2,0,2.5);
   Object80619->Draw("SAME");
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
      tex = new TLatex(0.34,0.79,"1.2769");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.24,0.72,"#sigma");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.34,0.72,"0.2474");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.24,0.635,"#sigma_{eff}");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.34,0.635,"0.0414");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetLineWidth(2);
   tex->Draw();
   c_5->Modified();
   c->cd();
  
// ------------>Primitives in pad: c_6
   TPad *c_6 = new TPad("c_6", "c_6",0.6766667,0.3433333,0.99,0.6566667);
   c_6->Draw();
   c_6->cd();
   c_6->Range(0.3468354,-4.733426,1.612658,29.07676);
   c_6->SetFillColor(0);
   c_6->SetBorderMode(0);
   c_6->SetBorderSize(2);
   c_6->SetLeftMargin(0.2);
   c_6->SetRightMargin(0.01);
   c_6->SetBottomMargin(0.14);
   c_6->SetFrameBorderMode(0);
   
   TH1F *Object836__ecor91formula__20 = new TH1F("Object836__ecor91formula__20","E_{corr. (new)}/E_{true} ( 2.2 <= genEta < 2.5 )",50,0,2);
   Object836__ecor91formula__20->SetBinContent(22,3);
   Object836__ecor91formula__20->SetBinContent(23,2);
   Object836__ecor91formula__20->SetBinContent(24,3);
   Object836__ecor91formula__20->SetBinContent(25,4);
   Object836__ecor91formula__20->SetBinContent(26,17);
   Object836__ecor91formula__20->SetBinContent(27,19);
   Object836__ecor91formula__20->SetBinContent(28,17);
   Object836__ecor91formula__20->SetBinContent(29,5);
   Object836__ecor91formula__20->SetBinError(22,1.732051);
   Object836__ecor91formula__20->SetBinError(23,1.414214);
   Object836__ecor91formula__20->SetBinError(24,1.732051);
   Object836__ecor91formula__20->SetBinError(25,2);
   Object836__ecor91formula__20->SetBinError(26,4.123106);
   Object836__ecor91formula__20->SetBinError(27,4.358899);
   Object836__ecor91formula__20->SetBinError(28,4.123106);
   Object836__ecor91formula__20->SetBinError(29,2.236068);
   Object836__ecor91formula__20->SetEntries(70);
   Object836__ecor91formula__20->SetDirectory(0);
   Object836__ecor91formula__20->SetStats(0);

   ci = TColor::GetColor("#000099");
   Object836__ecor91formula__20->SetLineColor(ci);
   Object836__ecor91formula__20->GetXaxis()->SetTitle("E_{corr. (new)}/E_{true}");
   Object836__ecor91formula__20->GetXaxis()->SetRange(16,40);
   Object836__ecor91formula__20->GetXaxis()->SetLabelFont(42);
   Object836__ecor91formula__20->GetXaxis()->SetLabelSize(0.05);
   Object836__ecor91formula__20->GetXaxis()->SetTitleSize(0.06);
   Object836__ecor91formula__20->GetXaxis()->SetTitleFont(42);
   Object836__ecor91formula__20->GetYaxis()->SetTitle("Events / ( 0.04 )");
   Object836__ecor91formula__20->GetYaxis()->SetLabelFont(42);
   Object836__ecor91formula__20->GetYaxis()->SetLabelSize(0.05);
   Object836__ecor91formula__20->GetYaxis()->SetTitleSize(0.06);
   Object836__ecor91formula__20->GetYaxis()->SetTitleOffset(0);
   Object836__ecor91formula__20->GetYaxis()->SetTitleFont(42);
   Object836__ecor91formula__20->GetZaxis()->SetLabelFont(42);
   Object836__ecor91formula__20->GetZaxis()->SetLabelSize(0.035);
   Object836__ecor91formula__20->GetZaxis()->SetTitleSize(0.035);
   Object836__ecor91formula__20->GetZaxis()->SetTitleFont(42);
   Object836__ecor91formula__20->Draw("");
   
   TF1 *Object83320 = new TF1("Object833","gaus",1.021223,1.098777, TF1::EAddToList::kDefault);
   Object83320->SetFillColor(19);
   Object83320->SetFillStyle(0);
   Object83320->SetLineColor(2);
   Object83320->SetLineWidth(2);
   Object83320->SetChisquare(2.823748e-10);
   Object83320->SetNDF(0);
   Object83320->GetXaxis()->SetLabelFont(42);
   Object83320->GetXaxis()->SetLabelSize(0.035);
   Object83320->GetXaxis()->SetTitleSize(0.035);
   Object83320->GetXaxis()->SetTitleFont(42);
   Object83320->GetYaxis()->SetLabelFont(42);
   Object83320->GetYaxis()->SetLabelSize(0.035);
   Object83320->GetYaxis()->SetTitleSize(0.035);
   Object83320->GetYaxis()->SetTitleOffset(0);
   Object83320->GetYaxis()->SetTitleFont(42);
   Object83320->SetParameter(0,24.79881);
   Object83320->SetParError(0,84.83031);
   Object83320->SetParLimits(0,0,0);
   Object83320->SetParameter(1,1.244238);
   Object83320->SetParError(1,1.17383);
   Object83320->SetParLimits(1,0,0);
   Object83320->SetParameter(2,0.2524273);
   Object83320->SetParError(2,1.696961);
   Object83320->SetParLimits(2,0,2.5);
   Object83320->Draw("SAME");
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
      tex = new TLatex(0.34,0.79,"1.2442");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.24,0.72,"#sigma");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.34,0.72,"0.2524");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.24,0.635,"#sigma_{eff}");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.34,0.635,"0.0469");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetLineWidth(2);
   tex->Draw();
   c_6->Modified();
   c->cd();
  
// ------------>Primitives in pad: c_7
   TPad *c_7 = new TPad("c_7", "c_7",0.01,0.01,0.3233333,0.3233333);
   c_7->Draw();
   c_7->cd();
   c_7->Range(0.3468354,-22.08831,1.612658,135.6853);
   c_7->SetFillColor(0);
   c_7->SetBorderMode(0);
   c_7->SetBorderSize(2);
   c_7->SetLeftMargin(0.2);
   c_7->SetRightMargin(0.01);
   c_7->SetBottomMargin(0.14);
   c_7->SetFrameBorderMode(0);
   
   TH1F *Object863__ecor91formula__21 = new TH1F("Object863__ecor91formula__21","E_{corr. (new)}/E_{true} ( 2.5 <= genEta < 3.0 )",50,0,2);
   Object863__ecor91formula__21->SetBinContent(21,2);
   Object863__ecor91formula__21->SetBinContent(22,72);
   Object863__ecor91formula__21->SetBinContent(23,108);
   Object863__ecor91formula__21->SetBinContent(24,99);
   Object863__ecor91formula__21->SetBinContent(25,105);
   Object863__ecor91formula__21->SetBinContent(26,86);
   Object863__ecor91formula__21->SetBinContent(27,82);
   Object863__ecor91formula__21->SetBinContent(28,53);
   Object863__ecor91formula__21->SetBinContent(29,19);
   Object863__ecor91formula__21->SetBinContent(30,8);
   Object863__ecor91formula__21->SetBinContent(31,4);
   Object863__ecor91formula__21->SetBinContent(32,2);
   Object863__ecor91formula__21->SetBinError(21,1.414214);
   Object863__ecor91formula__21->SetBinError(22,8.485281);
   Object863__ecor91formula__21->SetBinError(23,10.3923);
   Object863__ecor91formula__21->SetBinError(24,9.949874);
   Object863__ecor91formula__21->SetBinError(25,10.24695);
   Object863__ecor91formula__21->SetBinError(26,9.273618);
   Object863__ecor91formula__21->SetBinError(27,9.055385);
   Object863__ecor91formula__21->SetBinError(28,7.28011);
   Object863__ecor91formula__21->SetBinError(29,4.358899);
   Object863__ecor91formula__21->SetBinError(30,2.828427);
   Object863__ecor91formula__21->SetBinError(31,2);
   Object863__ecor91formula__21->SetBinError(32,1.414214);
   Object863__ecor91formula__21->SetEntries(640);
   Object863__ecor91formula__21->SetDirectory(0);
   Object863__ecor91formula__21->SetStats(0);

   ci = TColor::GetColor("#000099");
   Object863__ecor91formula__21->SetLineColor(ci);
   Object863__ecor91formula__21->GetXaxis()->SetTitle("E_{corr. (new)}/E_{true}");
   Object863__ecor91formula__21->GetXaxis()->SetRange(16,40);
   Object863__ecor91formula__21->GetXaxis()->SetLabelFont(42);
   Object863__ecor91formula__21->GetXaxis()->SetLabelSize(0.05);
   Object863__ecor91formula__21->GetXaxis()->SetTitleSize(0.06);
   Object863__ecor91formula__21->GetXaxis()->SetTitleFont(42);
   Object863__ecor91formula__21->GetYaxis()->SetTitle("Events / ( 0.04 )");
   Object863__ecor91formula__21->GetYaxis()->SetLabelFont(42);
   Object863__ecor91formula__21->GetYaxis()->SetLabelSize(0.05);
   Object863__ecor91formula__21->GetYaxis()->SetTitleSize(0.06);
   Object863__ecor91formula__21->GetYaxis()->SetTitleOffset(0);
   Object863__ecor91formula__21->GetYaxis()->SetTitleFont(42);
   Object863__ecor91formula__21->GetZaxis()->SetLabelFont(42);
   Object863__ecor91formula__21->GetZaxis()->SetLabelSize(0.035);
   Object863__ecor91formula__21->GetZaxis()->SetTitleSize(0.035);
   Object863__ecor91formula__21->GetZaxis()->SetTitleFont(42);
   Object863__ecor91formula__21->Draw("");
   
   TF1 *Object86021 = new TF1("Object860","gaus",0.8499421,0.9500579, TF1::EAddToList::kDefault);
   Object86021->SetFillColor(19);
   Object86021->SetFillStyle(0);
   Object86021->SetLineColor(2);
   Object86021->SetLineWidth(2);
   Object86021->SetChisquare(1.897429e-07);
   Object86021->SetNDF(0);
   Object86021->GetXaxis()->SetLabelFont(42);
   Object86021->GetXaxis()->SetLabelSize(0.035);
   Object86021->GetXaxis()->SetTitleSize(0.035);
   Object86021->GetXaxis()->SetTitleFont(42);
   Object86021->GetYaxis()->SetLabelFont(42);
   Object86021->GetYaxis()->SetLabelSize(0.035);
   Object86021->GetYaxis()->SetTitleSize(0.035);
   Object86021->GetYaxis()->SetTitleOffset(0);
   Object86021->GetYaxis()->SetTitleFont(42);
   Object86021->SetParameter(0,110.8123);
   Object86021->SetParError(0,9.944837);
   Object86021->SetParLimits(0,0,0);
   Object86021->SetParameter(1,0.9129355);
   Object86021->SetParError(1,0.008580747);
   Object86021->SetParLimits(1,0,0);
   Object86021->SetParameter(2,0.05700463);
   Object86021->SetParError(2,0.01426847);
   Object86021->SetParLimits(2,0,0.3107508);
   Object86021->Draw("SAME");
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
      tex = new TLatex(0.34,0.79,"0.9129");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.24,0.72,"#sigma");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.34,0.72,"0.0570");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.24,0.635,"#sigma_{eff}");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.34,0.635,"0.0857");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetLineWidth(2);
   tex->Draw();
   c_7->Modified();
   c->cd();
  
// ------------>Primitives in pad: c_8
   TPad *c_8 = new TPad("c_8", "c_8",0.3433333,0.01,0.6566667,0.3233333);
   c_8->Draw();
   c_8->cd();
   c_8->Range(0,0,1,1);
   c_8->SetFillColor(0);
   c_8->SetBorderMode(0);
   c_8->SetBorderSize(2);
   c_8->SetFrameBorderMode(0);
   c_8->Modified();
   c->cd();
  
// ------------>Primitives in pad: c_9
   TPad *c_9 = new TPad("c_9", "c_9",0.6766667,0.01,0.99,0.3233333);
   c_9->Draw();
   c_9->cd();
   c_9->Range(0,0,1,1);
   c_9->SetFillColor(0);
   c_9->SetBorderMode(0);
   c_9->SetBorderSize(2);
   c_9->SetFrameBorderMode(0);
   c_9->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
