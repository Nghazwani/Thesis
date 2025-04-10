void EBFULL_iETA_0020_0100_EffSigmaOverBins()
{
//=========Macro generated from canvas: c/c
//=========  (Sat Feb 10 01:13:00 2024) by ROOT version 6.12/07
   TCanvas *c = new TCanvas("c", "c",1,1,887,685);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-113.8537,0.4849315,92.2439,1.306849);
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
   
   TH1F *__1022 = new TH1F("__1022","",1,-85,84);
   __1022->SetMinimum(0.0005);
   __1022->SetMaximum(0.2);
   __1022->SetDirectory(0);
   __1022->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   __1022->SetLineColor(ci);
   __1022->GetXaxis()->SetTitle("i#eta");
   __1022->GetXaxis()->SetNdivisions(505);
   __1022->GetXaxis()->SetLabelFont(42);
   __1022->GetXaxis()->SetLabelSize(0.05);
   __1022->GetXaxis()->SetTitleSize(0.06);
   __1022->GetXaxis()->SetTitleFont(42);
   __1022->GetYaxis()->SetTitle("#sigma_{eff}/#mu");
   __1022->GetYaxis()->SetLabelFont(42);
   __1022->GetYaxis()->SetLabelSize(0.05);
   __1022->GetYaxis()->SetTitleSize(0.06);
   __1022->GetYaxis()->SetTitleOffset(1.1);
   __1022->GetYaxis()->SetTitleFont(42);
   __1022->GetZaxis()->SetLabelFont(42);
   __1022->GetZaxis()->SetLabelSize(0.035);
   __1022->GetZaxis()->SetTitleSize(0.035);
   __1022->GetZaxis()->SetTitleFont(42);
   __1022->Draw("");
   Double_t xAxis7[170] = {-85, -84, -83, -82, -81, -80, -79, -78, -77, -76, -75, -74, -73, -72, -71, -70, -69, -68, -67, -66, -65, -64, -63, -62, -61, -60, -59, -58, -57, -56, -55, -54, -53, -52, -51, -50, -49, -48, -47, -46, -45, -44, -43, -42, -41, -40, -39, -38, -37, -36, -35, -34, -33, -32, -31, -30, -29, -28, -27, -26, -25, -24, -23, -22, -21, -20, -19, -18, -17, -16, -15, -14, -13, -12, -11, -10, -9, -8, -7, -6, -5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84}; 
   
   TH1F *sigma_rawformula__1023 = new TH1F("sigma_rawformula__1023","",169, xAxis7);
   sigma_rawformula__1023->SetBinContent(1,0.05137085);
   sigma_rawformula__1023->SetBinContent(2,0.01533087);
   sigma_rawformula__1023->SetBinContent(3,0.0154026);
   sigma_rawformula__1023->SetBinContent(4,0.01554979);
   sigma_rawformula__1023->SetBinContent(5,0.01512367);
   sigma_rawformula__1023->SetBinContent(6,0.01481416);
   sigma_rawformula__1023->SetBinContent(7,0.01462358);
   sigma_rawformula__1023->SetBinContent(8,0.01587051);
   sigma_rawformula__1023->SetBinContent(9,0.01533816);
   sigma_rawformula__1023->SetBinContent(10,0.01492784);
   sigma_rawformula__1023->SetBinContent(11,0.01616715);
   sigma_rawformula__1023->SetBinContent(12,0.01583896);
   sigma_rawformula__1023->SetBinContent(13,0.01505767);
   sigma_rawformula__1023->SetBinContent(14,0.01585142);
   sigma_rawformula__1023->SetBinContent(15,0.0162752);
   sigma_rawformula__1023->SetBinContent(16,0.01611303);
   sigma_rawformula__1023->SetBinContent(17,0.01675386);
   sigma_rawformula__1023->SetBinContent(18,0.01558822);
   sigma_rawformula__1023->SetBinContent(19,0.01609202);
   sigma_rawformula__1023->SetBinContent(20,0.03026146);
   sigma_rawformula__1023->SetBinContent(21,0.02613411);
   sigma_rawformula__1023->SetBinContent(22,0.01510576);
   sigma_rawformula__1023->SetBinContent(23,0.01578686);
   sigma_rawformula__1023->SetBinContent(24,0.0159736);
   sigma_rawformula__1023->SetBinContent(25,0.01622224);
   sigma_rawformula__1023->SetBinContent(26,0.01544493);
   sigma_rawformula__1023->SetBinContent(27,0.01578402);
   sigma_rawformula__1023->SetBinContent(28,0.01585841);
   sigma_rawformula__1023->SetBinContent(29,0.01691667);
   sigma_rawformula__1023->SetBinContent(30,0.01645395);
   sigma_rawformula__1023->SetBinContent(31,0.01640116);
   sigma_rawformula__1023->SetBinContent(32,0.01615359);
   sigma_rawformula__1023->SetBinContent(33,0.01593374);
   sigma_rawformula__1023->SetBinContent(34,0.01661033);
   sigma_rawformula__1023->SetBinContent(35,0.01622521);
   sigma_rawformula__1023->SetBinContent(36,0.01626172);
   sigma_rawformula__1023->SetBinContent(37,0.01486624);
   sigma_rawformula__1023->SetBinContent(38,0.01640506);
   sigma_rawformula__1023->SetBinContent(39,0.01675585);
   sigma_rawformula__1023->SetBinContent(40,0.03137703);
   sigma_rawformula__1023->SetBinContent(41,0.02780949);
   sigma_rawformula__1023->SetBinContent(42,0.01585187);
   sigma_rawformula__1023->SetBinContent(43,0.01732287);
   sigma_rawformula__1023->SetBinContent(44,0.01695279);
   sigma_rawformula__1023->SetBinContent(45,0.01616809);
   sigma_rawformula__1023->SetBinContent(46,0.01706963);
   sigma_rawformula__1023->SetBinContent(47,0.01680525);
   sigma_rawformula__1023->SetBinContent(48,0.01722155);
   sigma_rawformula__1023->SetBinContent(49,0.01690858);
   sigma_rawformula__1023->SetBinContent(50,0.01617792);
   sigma_rawformula__1023->SetBinContent(51,0.01671624);
   sigma_rawformula__1023->SetBinContent(52,0.01670483);
   sigma_rawformula__1023->SetBinContent(53,0.01621983);
   sigma_rawformula__1023->SetBinContent(54,0.01685101);
   sigma_rawformula__1023->SetBinContent(55,0.01666919);
   sigma_rawformula__1023->SetBinContent(56,0.01702997);
   sigma_rawformula__1023->SetBinContent(57,0.01618378);
   sigma_rawformula__1023->SetBinContent(58,0.01665633);
   sigma_rawformula__1023->SetBinContent(59,0.01546808);
   sigma_rawformula__1023->SetBinContent(60,0.02893265);
   sigma_rawformula__1023->SetBinContent(61,0.02850138);
   sigma_rawformula__1023->SetBinContent(62,0.0168757);
   sigma_rawformula__1023->SetBinContent(63,0.01741702);
   sigma_rawformula__1023->SetBinContent(64,0.01777445);
   sigma_rawformula__1023->SetBinContent(65,0.01897721);
   sigma_rawformula__1023->SetBinContent(66,0.01847428);
   sigma_rawformula__1023->SetBinContent(67,0.01750669);
   sigma_rawformula__1023->SetBinContent(68,0.01670826);
   sigma_rawformula__1023->SetBinContent(69,0.01747321);
   sigma_rawformula__1023->SetBinContent(70,0.01839755);
   sigma_rawformula__1023->SetBinContent(71,0.01817377);
   sigma_rawformula__1023->SetBinContent(72,0.01750997);
   sigma_rawformula__1023->SetBinContent(73,0.01905474);
   sigma_rawformula__1023->SetBinContent(74,0.01898957);
   sigma_rawformula__1023->SetBinContent(75,0.01851094);
   sigma_rawformula__1023->SetBinContent(76,0.01923312);
   sigma_rawformula__1023->SetBinContent(77,0.01903563);
   sigma_rawformula__1023->SetBinContent(78,0.0179132);
   sigma_rawformula__1023->SetBinContent(79,0.01938198);
   sigma_rawformula__1023->SetBinContent(80,0.01917908);
   sigma_rawformula__1023->SetBinContent(81,0.02010954);
   sigma_rawformula__1023->SetBinContent(82,0.01821673);
   sigma_rawformula__1023->SetBinContent(83,0.01891682);
   sigma_rawformula__1023->SetBinContent(84,0.01990352);
   sigma_rawformula__1023->SetBinContent(85,0.02744093);
   sigma_rawformula__1023->SetBinContent(86,1.209832e+07);
   sigma_rawformula__1023->SetBinContent(87,0.02634517);
   sigma_rawformula__1023->SetBinContent(88,0.01798616);
   sigma_rawformula__1023->SetBinContent(89,0.01848215);
   sigma_rawformula__1023->SetBinContent(90,0.01827917);
   sigma_rawformula__1023->SetBinContent(91,0.01991858);
   sigma_rawformula__1023->SetBinContent(92,0.01856271);
   sigma_rawformula__1023->SetBinContent(93,0.01772786);
   sigma_rawformula__1023->SetBinContent(94,0.01774978);
   sigma_rawformula__1023->SetBinContent(95,0.0163953);
   sigma_rawformula__1023->SetBinContent(96,0.01695454);
   sigma_rawformula__1023->SetBinContent(97,0.01705928);
   sigma_rawformula__1023->SetBinContent(98,0.01902399);
   sigma_rawformula__1023->SetBinContent(99,0.01775186);
   sigma_rawformula__1023->SetBinContent(100,0.01716435);
   sigma_rawformula__1023->SetBinContent(101,0.01682817);
   sigma_rawformula__1023->SetBinContent(102,0.01731267);
   sigma_rawformula__1023->SetBinContent(103,0.01847793);
   sigma_rawformula__1023->SetBinContent(104,0.01718251);
   sigma_rawformula__1023->SetBinContent(105,0.01833538);
   sigma_rawformula__1023->SetBinContent(106,0.01874559);
   sigma_rawformula__1023->SetBinContent(107,0.01736052);
   sigma_rawformula__1023->SetBinContent(108,0.01692817);
   sigma_rawformula__1023->SetBinContent(109,0.01714948);
   sigma_rawformula__1023->SetBinContent(110,0.01689853);
   sigma_rawformula__1023->SetBinContent(111,0.02695362);
   sigma_rawformula__1023->SetBinContent(112,0.03007774);
   sigma_rawformula__1023->SetBinContent(113,0.01737897);
   sigma_rawformula__1023->SetBinContent(114,0.01693543);
   sigma_rawformula__1023->SetBinContent(115,0.01593942);
   sigma_rawformula__1023->SetBinContent(116,0.01650617);
   sigma_rawformula__1023->SetBinContent(117,0.01789056);
   sigma_rawformula__1023->SetBinContent(118,0.01635425);
   sigma_rawformula__1023->SetBinContent(119,0.01732721);
   sigma_rawformula__1023->SetBinContent(120,0.01671334);
   sigma_rawformula__1023->SetBinContent(121,0.01662074);
   sigma_rawformula__1023->SetBinContent(122,0.01625603);
   sigma_rawformula__1023->SetBinContent(123,0.01678653);
   sigma_rawformula__1023->SetBinContent(124,0.01675859);
   sigma_rawformula__1023->SetBinContent(125,0.01578939);
   sigma_rawformula__1023->SetBinContent(126,0.01581631);
   sigma_rawformula__1023->SetBinContent(127,0.01682678);
   sigma_rawformula__1023->SetBinContent(128,0.01641067);
   sigma_rawformula__1023->SetBinContent(129,0.01550035);
   sigma_rawformula__1023->SetBinContent(130,0.01604138);
   sigma_rawformula__1023->SetBinContent(131,0.02748813);
   sigma_rawformula__1023->SetBinContent(132,0.02833664);
   sigma_rawformula__1023->SetBinContent(133,0.0153821);
   sigma_rawformula__1023->SetBinContent(134,0.01647637);
   sigma_rawformula__1023->SetBinContent(135,0.01535708);
   sigma_rawformula__1023->SetBinContent(136,0.0171731);
   sigma_rawformula__1023->SetBinContent(137,0.01631634);
   sigma_rawformula__1023->SetBinContent(138,0.01660931);
   sigma_rawformula__1023->SetBinContent(139,0.01642186);
   sigma_rawformula__1023->SetBinContent(140,0.01601928);
   sigma_rawformula__1023->SetBinContent(141,0.01512844);
   sigma_rawformula__1023->SetBinContent(142,0.01656258);
   sigma_rawformula__1023->SetBinContent(143,0.01529292);
   sigma_rawformula__1023->SetBinContent(144,0.01528571);
   sigma_rawformula__1023->SetBinContent(145,0.01550688);
   sigma_rawformula__1023->SetBinContent(146,0.01582928);
   sigma_rawformula__1023->SetBinContent(147,0.01625109);
   sigma_rawformula__1023->SetBinContent(148,0.01545813);
   sigma_rawformula__1023->SetBinContent(149,0.01678308);
   sigma_rawformula__1023->SetBinContent(150,0.01501643);
   sigma_rawformula__1023->SetBinContent(151,0.02975782);
   sigma_rawformula__1023->SetBinContent(152,0.0338739);
   sigma_rawformula__1023->SetBinContent(153,0.01685204);
   sigma_rawformula__1023->SetBinContent(154,0.01588716);
   sigma_rawformula__1023->SetBinContent(155,0.01629787);
   sigma_rawformula__1023->SetBinContent(156,0.01638892);
   sigma_rawformula__1023->SetBinContent(157,0.01672257);
   sigma_rawformula__1023->SetBinContent(158,0.01637939);
   sigma_rawformula__1023->SetBinContent(159,0.01502449);
   sigma_rawformula__1023->SetBinContent(160,0.01545772);
   sigma_rawformula__1023->SetBinContent(161,0.01658424);
   sigma_rawformula__1023->SetBinContent(162,0.01588806);
   sigma_rawformula__1023->SetBinContent(163,0.01554857);
   sigma_rawformula__1023->SetBinContent(164,0.01480991);
   sigma_rawformula__1023->SetBinContent(165,0.01587656);
   sigma_rawformula__1023->SetBinContent(166,0.0168736);
   sigma_rawformula__1023->SetBinContent(167,0.01590557);
   sigma_rawformula__1023->SetBinContent(168,0.01552303);
   sigma_rawformula__1023->SetBinContent(169,0.0156406);
   sigma_rawformula__1023->SetEntries(169);
   sigma_rawformula__1023->SetStats(0);
   sigma_rawformula__1023->SetLineColor(2);
   sigma_rawformula__1023->SetLineWidth(2);
   sigma_rawformula__1023->SetMarkerSize(0);
   sigma_rawformula__1023->GetXaxis()->SetLabelFont(42);
   sigma_rawformula__1023->GetXaxis()->SetLabelSize(0.035);
   sigma_rawformula__1023->GetXaxis()->SetTitleSize(0.035);
   sigma_rawformula__1023->GetXaxis()->SetTitleFont(42);
   sigma_rawformula__1023->GetYaxis()->SetLabelFont(42);
   sigma_rawformula__1023->GetYaxis()->SetLabelSize(0.035);
   sigma_rawformula__1023->GetYaxis()->SetTitleSize(0.035);
   sigma_rawformula__1023->GetYaxis()->SetTitleOffset(0);
   sigma_rawformula__1023->GetYaxis()->SetTitleFont(42);
   sigma_rawformula__1023->GetZaxis()->SetLabelFont(42);
   sigma_rawformula__1023->GetZaxis()->SetLabelSize(0.035);
   sigma_rawformula__1023->GetZaxis()->SetTitleSize(0.035);
   sigma_rawformula__1023->GetZaxis()->SetTitleFont(42);
   sigma_rawformula__1023->Draw("HISTSAME");
   Double_t xAxis8[170] = {-85, -84, -83, -82, -81, -80, -79, -78, -77, -76, -75, -74, -73, -72, -71, -70, -69, -68, -67, -66, -65, -64, -63, -62, -61, -60, -59, -58, -57, -56, -55, -54, -53, -52, -51, -50, -49, -48, -47, -46, -45, -44, -43, -42, -41, -40, -39, -38, -37, -36, -35, -34, -33, -32, -31, -30, -29, -28, -27, -26, -25, -24, -23, -22, -21, -20, -19, -18, -17, -16, -15, -14, -13, -12, -11, -10, -9, -8, -7, -6, -5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84}; 
   
   TH1F *sigma_ecor74formula__1024 = new TH1F("sigma_ecor74formula__1024","",169, xAxis8);
   sigma_ecor74formula__1024->SetBinContent(1,0.05031219);
   sigma_ecor74formula__1024->SetBinContent(2,0.01365842);
   sigma_ecor74formula__1024->SetBinContent(3,0.01181029);
   sigma_ecor74formula__1024->SetBinContent(4,0.01257012);
   sigma_ecor74formula__1024->SetBinContent(5,0.01177178);
   sigma_ecor74formula__1024->SetBinContent(6,0.011475);
   sigma_ecor74formula__1024->SetBinContent(7,0.011467);
   sigma_ecor74formula__1024->SetBinContent(8,0.01197102);
   sigma_ecor74formula__1024->SetBinContent(9,0.01131361);
   sigma_ecor74formula__1024->SetBinContent(10,0.01181294);
   sigma_ecor74formula__1024->SetBinContent(11,0.01178538);
   sigma_ecor74formula__1024->SetBinContent(12,0.01181554);
   sigma_ecor74formula__1024->SetBinContent(13,0.01220184);
   sigma_ecor74formula__1024->SetBinContent(14,0.01197382);
   sigma_ecor74formula__1024->SetBinContent(15,0.01274252);
   sigma_ecor74formula__1024->SetBinContent(16,0.01200306);
   sigma_ecor74formula__1024->SetBinContent(17,0.01296909);
   sigma_ecor74formula__1024->SetBinContent(18,0.0119388);
   sigma_ecor74formula__1024->SetBinContent(19,0.01188791);
   sigma_ecor74formula__1024->SetBinContent(20,0.02733254);
   sigma_ecor74formula__1024->SetBinContent(21,0.02282256);
   sigma_ecor74formula__1024->SetBinContent(22,0.01158421);
   sigma_ecor74formula__1024->SetBinContent(23,0.01175666);
   sigma_ecor74formula__1024->SetBinContent(24,0.0113253);
   sigma_ecor74formula__1024->SetBinContent(25,0.01138407);
   sigma_ecor74formula__1024->SetBinContent(26,0.01094969);
   sigma_ecor74formula__1024->SetBinContent(27,0.01134621);
   sigma_ecor74formula__1024->SetBinContent(28,0.01102076);
   sigma_ecor74formula__1024->SetBinContent(29,0.01174894);
   sigma_ecor74formula__1024->SetBinContent(30,0.01147457);
   sigma_ecor74formula__1024->SetBinContent(31,0.01185822);
   sigma_ecor74formula__1024->SetBinContent(32,0.01122438);
   sigma_ecor74formula__1024->SetBinContent(33,0.01139646);
   sigma_ecor74formula__1024->SetBinContent(34,0.01196601);
   sigma_ecor74formula__1024->SetBinContent(35,0.01163183);
   sigma_ecor74formula__1024->SetBinContent(36,0.01132758);
   sigma_ecor74formula__1024->SetBinContent(37,0.01052019);
   sigma_ecor74formula__1024->SetBinContent(38,0.01204836);
   sigma_ecor74formula__1024->SetBinContent(39,0.01191038);
   sigma_ecor74formula__1024->SetBinContent(40,0.02654552);
   sigma_ecor74formula__1024->SetBinContent(41,0.02235621);
   sigma_ecor74formula__1024->SetBinContent(42,0.01165301);
   sigma_ecor74formula__1024->SetBinContent(43,0.01141985);
   sigma_ecor74formula__1024->SetBinContent(44,0.01116503);
   sigma_ecor74formula__1024->SetBinContent(45,0.01117695);
   sigma_ecor74formula__1024->SetBinContent(46,0.01191856);
   sigma_ecor74formula__1024->SetBinContent(47,0.01171831);
   sigma_ecor74formula__1024->SetBinContent(48,0.01190674);
   sigma_ecor74formula__1024->SetBinContent(49,0.01133921);
   sigma_ecor74formula__1024->SetBinContent(50,0.01139171);
   sigma_ecor74formula__1024->SetBinContent(51,0.01157698);
   sigma_ecor74formula__1024->SetBinContent(52,0.01177662);
   sigma_ecor74formula__1024->SetBinContent(53,0.01174885);
   sigma_ecor74formula__1024->SetBinContent(54,0.01157815);
   sigma_ecor74formula__1024->SetBinContent(55,0.01158132);
   sigma_ecor74formula__1024->SetBinContent(56,0.01232418);
   sigma_ecor74formula__1024->SetBinContent(57,0.01158528);
   sigma_ecor74formula__1024->SetBinContent(58,0.01079182);
   sigma_ecor74formula__1024->SetBinContent(59,0.01107676);
   sigma_ecor74formula__1024->SetBinContent(60,0.02327423);
   sigma_ecor74formula__1024->SetBinContent(61,0.02304591);
   sigma_ecor74formula__1024->SetBinContent(62,0.01249705);
   sigma_ecor74formula__1024->SetBinContent(63,0.01275419);
   sigma_ecor74formula__1024->SetBinContent(64,0.01241782);
   sigma_ecor74formula__1024->SetBinContent(65,0.01167328);
   sigma_ecor74formula__1024->SetBinContent(66,0.01163954);
   sigma_ecor74formula__1024->SetBinContent(67,0.01217332);
   sigma_ecor74formula__1024->SetBinContent(68,0.01250132);
   sigma_ecor74formula__1024->SetBinContent(69,0.01226339);
   sigma_ecor74formula__1024->SetBinContent(70,0.01300918);
   sigma_ecor74formula__1024->SetBinContent(71,0.01220118);
   sigma_ecor74formula__1024->SetBinContent(72,0.01177831);
   sigma_ecor74formula__1024->SetBinContent(73,0.01298955);
   sigma_ecor74formula__1024->SetBinContent(74,0.01188226);
   sigma_ecor74formula__1024->SetBinContent(75,0.01231001);
   sigma_ecor74formula__1024->SetBinContent(76,0.01320474);
   sigma_ecor74formula__1024->SetBinContent(77,0.01192038);
   sigma_ecor74formula__1024->SetBinContent(78,0.01228475);
   sigma_ecor74formula__1024->SetBinContent(79,0.01313646);
   sigma_ecor74formula__1024->SetBinContent(80,0.01350924);
   sigma_ecor74formula__1024->SetBinContent(81,0.01324535);
   sigma_ecor74formula__1024->SetBinContent(82,0.0130245);
   sigma_ecor74formula__1024->SetBinContent(83,0.01376583);
   sigma_ecor74formula__1024->SetBinContent(84,0.01283152);
   sigma_ecor74formula__1024->SetBinContent(85,0.0209029);
   sigma_ecor74formula__1024->SetBinContent(86,1.209832e+07);
   sigma_ecor74formula__1024->SetBinContent(87,0.0198524);
   sigma_ecor74formula__1024->SetBinContent(88,0.01380971);
   sigma_ecor74formula__1024->SetBinContent(89,0.01298973);
   sigma_ecor74formula__1024->SetBinContent(90,0.01278827);
   sigma_ecor74formula__1024->SetBinContent(91,0.013732);
   sigma_ecor74formula__1024->SetBinContent(92,0.01270723);
   sigma_ecor74formula__1024->SetBinContent(93,0.01294197);
   sigma_ecor74formula__1024->SetBinContent(94,0.01230224);
   sigma_ecor74formula__1024->SetBinContent(95,0.01172158);
   sigma_ecor74formula__1024->SetBinContent(96,0.01276903);
   sigma_ecor74formula__1024->SetBinContent(97,0.01195858);
   sigma_ecor74formula__1024->SetBinContent(98,0.0122369);
   sigma_ecor74formula__1024->SetBinContent(99,0.01210584);
   sigma_ecor74formula__1024->SetBinContent(100,0.01171822);
   sigma_ecor74formula__1024->SetBinContent(101,0.01193809);
   sigma_ecor74formula__1024->SetBinContent(102,0.01149057);
   sigma_ecor74formula__1024->SetBinContent(103,0.01258756);
   sigma_ecor74formula__1024->SetBinContent(104,0.01195495);
   sigma_ecor74formula__1024->SetBinContent(105,0.01241321);
   sigma_ecor74formula__1024->SetBinContent(106,0.01199051);
   sigma_ecor74formula__1024->SetBinContent(107,0.01193379);
   sigma_ecor74formula__1024->SetBinContent(108,0.01177128);
   sigma_ecor74formula__1024->SetBinContent(109,0.01171824);
   sigma_ecor74formula__1024->SetBinContent(110,0.01230603);
   sigma_ecor74formula__1024->SetBinContent(111,0.02081372);
   sigma_ecor74formula__1024->SetBinContent(112,0.02363255);
   sigma_ecor74formula__1024->SetBinContent(113,0.01210685);
   sigma_ecor74formula__1024->SetBinContent(114,0.01151434);
   sigma_ecor74formula__1024->SetBinContent(115,0.01191005);
   sigma_ecor74formula__1024->SetBinContent(116,0.01175339);
   sigma_ecor74formula__1024->SetBinContent(117,0.01157036);
   sigma_ecor74formula__1024->SetBinContent(118,0.01109061);
   sigma_ecor74formula__1024->SetBinContent(119,0.01269731);
   sigma_ecor74formula__1024->SetBinContent(120,0.01177803);
   sigma_ecor74formula__1024->SetBinContent(121,0.01110606);
   sigma_ecor74formula__1024->SetBinContent(122,0.01142983);
   sigma_ecor74formula__1024->SetBinContent(123,0.01129604);
   sigma_ecor74formula__1024->SetBinContent(124,0.01088595);
   sigma_ecor74formula__1024->SetBinContent(125,0.011125);
   sigma_ecor74formula__1024->SetBinContent(126,0.01086906);
   sigma_ecor74formula__1024->SetBinContent(127,0.0113152);
   sigma_ecor74formula__1024->SetBinContent(128,0.01163981);
   sigma_ecor74formula__1024->SetBinContent(129,0.0107222);
   sigma_ecor74formula__1024->SetBinContent(130,0.01183577);
   sigma_ecor74formula__1024->SetBinContent(131,0.02125775);
   sigma_ecor74formula__1024->SetBinContent(132,0.02365868);
   sigma_ecor74formula__1024->SetBinContent(133,0.01114281);
   sigma_ecor74formula__1024->SetBinContent(134,0.01126493);
   sigma_ecor74formula__1024->SetBinContent(135,0.01068496);
   sigma_ecor74formula__1024->SetBinContent(136,0.0110401);
   sigma_ecor74formula__1024->SetBinContent(137,0.01116835);
   sigma_ecor74formula__1024->SetBinContent(138,0.01113835);
   sigma_ecor74formula__1024->SetBinContent(139,0.01149153);
   sigma_ecor74formula__1024->SetBinContent(140,0.01094872);
   sigma_ecor74formula__1024->SetBinContent(141,0.01066118);
   sigma_ecor74formula__1024->SetBinContent(142,0.01174956);
   sigma_ecor74formula__1024->SetBinContent(143,0.01090268);
   sigma_ecor74formula__1024->SetBinContent(144,0.0106512);
   sigma_ecor74formula__1024->SetBinContent(145,0.01107143);
   sigma_ecor74formula__1024->SetBinContent(146,0.0100847);
   sigma_ecor74formula__1024->SetBinContent(147,0.01202103);
   sigma_ecor74formula__1024->SetBinContent(148,0.01123339);
   sigma_ecor74formula__1024->SetBinContent(149,0.01196772);
   sigma_ecor74formula__1024->SetBinContent(150,0.01168557);
   sigma_ecor74formula__1024->SetBinContent(151,0.02377145);
   sigma_ecor74formula__1024->SetBinContent(152,0.02958296);
   sigma_ecor74formula__1024->SetBinContent(153,0.01266713);
   sigma_ecor74formula__1024->SetBinContent(154,0.01215359);
   sigma_ecor74formula__1024->SetBinContent(155,0.01252559);
   sigma_ecor74formula__1024->SetBinContent(156,0.01186555);
   sigma_ecor74formula__1024->SetBinContent(157,0.01283373);
   sigma_ecor74formula__1024->SetBinContent(158,0.01270709);
   sigma_ecor74formula__1024->SetBinContent(159,0.01181927);
   sigma_ecor74formula__1024->SetBinContent(160,0.01144718);
   sigma_ecor74formula__1024->SetBinContent(161,0.01166968);
   sigma_ecor74formula__1024->SetBinContent(162,0.01152979);
   sigma_ecor74formula__1024->SetBinContent(163,0.01202642);
   sigma_ecor74formula__1024->SetBinContent(164,0.01141205);
   sigma_ecor74formula__1024->SetBinContent(165,0.0114269);
   sigma_ecor74formula__1024->SetBinContent(166,0.01292361);
   sigma_ecor74formula__1024->SetBinContent(167,0.01227312);
   sigma_ecor74formula__1024->SetBinContent(168,0.012464);
   sigma_ecor74formula__1024->SetBinContent(169,0.01245139);
   sigma_ecor74formula__1024->SetEntries(169);
   sigma_ecor74formula__1024->SetStats(0);
   sigma_ecor74formula__1024->SetLineColor(3);
   sigma_ecor74formula__1024->SetLineWidth(2);
   sigma_ecor74formula__1024->SetMarkerSize(0);
   sigma_ecor74formula__1024->GetXaxis()->SetLabelFont(42);
   sigma_ecor74formula__1024->GetXaxis()->SetLabelSize(0.035);
   sigma_ecor74formula__1024->GetXaxis()->SetTitleSize(0.035);
   sigma_ecor74formula__1024->GetXaxis()->SetTitleFont(42);
   sigma_ecor74formula__1024->GetYaxis()->SetLabelFont(42);
   sigma_ecor74formula__1024->GetYaxis()->SetLabelSize(0.035);
   sigma_ecor74formula__1024->GetYaxis()->SetTitleSize(0.035);
   sigma_ecor74formula__1024->GetYaxis()->SetTitleOffset(0);
   sigma_ecor74formula__1024->GetYaxis()->SetTitleFont(42);
   sigma_ecor74formula__1024->GetZaxis()->SetLabelFont(42);
   sigma_ecor74formula__1024->GetZaxis()->SetLabelSize(0.035);
   sigma_ecor74formula__1024->GetZaxis()->SetTitleSize(0.035);
   sigma_ecor74formula__1024->GetZaxis()->SetTitleFont(42);
   sigma_ecor74formula__1024->Draw("HISTSAME");
   Double_t xAxis9[170] = {-85, -84, -83, -82, -81, -80, -79, -78, -77, -76, -75, -74, -73, -72, -71, -70, -69, -68, -67, -66, -65, -64, -63, -62, -61, -60, -59, -58, -57, -56, -55, -54, -53, -52, -51, -50, -49, -48, -47, -46, -45, -44, -43, -42, -41, -40, -39, -38, -37, -36, -35, -34, -33, -32, -31, -30, -29, -28, -27, -26, -25, -24, -23, -22, -21, -20, -19, -18, -17, -16, -15, -14, -13, -12, -11, -10, -9, -8, -7, -6, -5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84}; 
   
   TH1F *sigma_ecor91formula__1025 = new TH1F("sigma_ecor91formula__1025","",169, xAxis9);
   sigma_ecor91formula__1025->SetBinContent(1,0.05221612);
   sigma_ecor91formula__1025->SetBinContent(2,0.01363563);
   sigma_ecor91formula__1025->SetBinContent(3,0.01175027);
   sigma_ecor91formula__1025->SetBinContent(4,0.01255032);
   sigma_ecor91formula__1025->SetBinContent(5,0.01169189);
   sigma_ecor91formula__1025->SetBinContent(6,0.01142921);
   sigma_ecor91formula__1025->SetBinContent(7,0.01142818);
   sigma_ecor91formula__1025->SetBinContent(8,0.01194998);
   sigma_ecor91formula__1025->SetBinContent(9,0.01134307);
   sigma_ecor91formula__1025->SetBinContent(10,0.0118537);
   sigma_ecor91formula__1025->SetBinContent(11,0.01173583);
   sigma_ecor91formula__1025->SetBinContent(12,0.01181891);
   sigma_ecor91formula__1025->SetBinContent(13,0.01223938);
   sigma_ecor91formula__1025->SetBinContent(14,0.01193136);
   sigma_ecor91formula__1025->SetBinContent(15,0.01288587);
   sigma_ecor91formula__1025->SetBinContent(16,0.01203313);
   sigma_ecor91formula__1025->SetBinContent(17,0.01315567);
   sigma_ecor91formula__1025->SetBinContent(18,0.01200418);
   sigma_ecor91formula__1025->SetBinContent(19,0.01187028);
   sigma_ecor91formula__1025->SetBinContent(20,0.02643297);
   sigma_ecor91formula__1025->SetBinContent(21,0.02283163);
   sigma_ecor91formula__1025->SetBinContent(22,0.01183148);
   sigma_ecor91formula__1025->SetBinContent(23,0.0118127);
   sigma_ecor91formula__1025->SetBinContent(24,0.01140036);
   sigma_ecor91formula__1025->SetBinContent(25,0.01142021);
   sigma_ecor91formula__1025->SetBinContent(26,0.01094004);
   sigma_ecor91formula__1025->SetBinContent(27,0.01123791);
   sigma_ecor91formula__1025->SetBinContent(28,0.01093202);
   sigma_ecor91formula__1025->SetBinContent(29,0.01195512);
   sigma_ecor91formula__1025->SetBinContent(30,0.01156715);
   sigma_ecor91formula__1025->SetBinContent(31,0.01194113);
   sigma_ecor91formula__1025->SetBinContent(32,0.01136548);
   sigma_ecor91formula__1025->SetBinContent(33,0.01139697);
   sigma_ecor91formula__1025->SetBinContent(34,0.01192032);
   sigma_ecor91formula__1025->SetBinContent(35,0.01162183);
   sigma_ecor91formula__1025->SetBinContent(36,0.01148743);
   sigma_ecor91formula__1025->SetBinContent(37,0.01038288);
   sigma_ecor91formula__1025->SetBinContent(38,0.01223987);
   sigma_ecor91formula__1025->SetBinContent(39,0.01186456);
   sigma_ecor91formula__1025->SetBinContent(40,0.02567581);
   sigma_ecor91formula__1025->SetBinContent(41,0.02288247);
   sigma_ecor91formula__1025->SetBinContent(42,0.01166347);
   sigma_ecor91formula__1025->SetBinContent(43,0.01126063);
   sigma_ecor91formula__1025->SetBinContent(44,0.01114476);
   sigma_ecor91formula__1025->SetBinContent(45,0.01119137);
   sigma_ecor91formula__1025->SetBinContent(46,0.01160166);
   sigma_ecor91formula__1025->SetBinContent(47,0.01170105);
   sigma_ecor91formula__1025->SetBinContent(48,0.01195973);
   sigma_ecor91formula__1025->SetBinContent(49,0.01114555);
   sigma_ecor91formula__1025->SetBinContent(50,0.01152258);
   sigma_ecor91formula__1025->SetBinContent(51,0.01162403);
   sigma_ecor91formula__1025->SetBinContent(52,0.01179358);
   sigma_ecor91formula__1025->SetBinContent(53,0.01184559);
   sigma_ecor91formula__1025->SetBinContent(54,0.01167778);
   sigma_ecor91formula__1025->SetBinContent(55,0.01172568);
   sigma_ecor91formula__1025->SetBinContent(56,0.01216929);
   sigma_ecor91formula__1025->SetBinContent(57,0.01153872);
   sigma_ecor91formula__1025->SetBinContent(58,0.01098754);
   sigma_ecor91formula__1025->SetBinContent(59,0.01113889);
   sigma_ecor91formula__1025->SetBinContent(60,0.02274235);
   sigma_ecor91formula__1025->SetBinContent(61,0.02283394);
   sigma_ecor91formula__1025->SetBinContent(62,0.01267285);
   sigma_ecor91formula__1025->SetBinContent(63,0.01265013);
   sigma_ecor91formula__1025->SetBinContent(64,0.0125143);
   sigma_ecor91formula__1025->SetBinContent(65,0.01172356);
   sigma_ecor91formula__1025->SetBinContent(66,0.01163241);
   sigma_ecor91formula__1025->SetBinContent(67,0.01212124);
   sigma_ecor91formula__1025->SetBinContent(68,0.01248923);
   sigma_ecor91formula__1025->SetBinContent(69,0.01223713);
   sigma_ecor91formula__1025->SetBinContent(70,0.01311724);
   sigma_ecor91formula__1025->SetBinContent(71,0.01217581);
   sigma_ecor91formula__1025->SetBinContent(72,0.01189008);
   sigma_ecor91formula__1025->SetBinContent(73,0.01316812);
   sigma_ecor91formula__1025->SetBinContent(74,0.0118431);
   sigma_ecor91formula__1025->SetBinContent(75,0.01238205);
   sigma_ecor91formula__1025->SetBinContent(76,0.01304525);
   sigma_ecor91formula__1025->SetBinContent(77,0.0118554);
   sigma_ecor91formula__1025->SetBinContent(78,0.01236224);
   sigma_ecor91formula__1025->SetBinContent(79,0.01323872);
   sigma_ecor91formula__1025->SetBinContent(80,0.01360867);
   sigma_ecor91formula__1025->SetBinContent(81,0.01348461);
   sigma_ecor91formula__1025->SetBinContent(82,0.01293942);
   sigma_ecor91formula__1025->SetBinContent(83,0.01372108);
   sigma_ecor91formula__1025->SetBinContent(84,0.01288763);
   sigma_ecor91formula__1025->SetBinContent(85,0.02074414);
   sigma_ecor91formula__1025->SetBinContent(86,1.209832e+07);
   sigma_ecor91formula__1025->SetBinContent(87,0.0199998);
   sigma_ecor91formula__1025->SetBinContent(88,0.013813);
   sigma_ecor91formula__1025->SetBinContent(89,0.01299501);
   sigma_ecor91formula__1025->SetBinContent(90,0.01295291);
   sigma_ecor91formula__1025->SetBinContent(91,0.01375941);
   sigma_ecor91formula__1025->SetBinContent(92,0.01278249);
   sigma_ecor91formula__1025->SetBinContent(93,0.01283579);
   sigma_ecor91formula__1025->SetBinContent(94,0.01235354);
   sigma_ecor91formula__1025->SetBinContent(95,0.01183164);
   sigma_ecor91formula__1025->SetBinContent(96,0.01282418);
   sigma_ecor91formula__1025->SetBinContent(97,0.01217734);
   sigma_ecor91formula__1025->SetBinContent(98,0.01247297);
   sigma_ecor91formula__1025->SetBinContent(99,0.01216065);
   sigma_ecor91formula__1025->SetBinContent(100,0.01188851);
   sigma_ecor91formula__1025->SetBinContent(101,0.01210407);
   sigma_ecor91formula__1025->SetBinContent(102,0.01168318);
   sigma_ecor91formula__1025->SetBinContent(103,0.01276029);
   sigma_ecor91formula__1025->SetBinContent(104,0.01188027);
   sigma_ecor91formula__1025->SetBinContent(105,0.01239466);
   sigma_ecor91formula__1025->SetBinContent(106,0.01191995);
   sigma_ecor91formula__1025->SetBinContent(107,0.01210907);
   sigma_ecor91formula__1025->SetBinContent(108,0.01177312);
   sigma_ecor91formula__1025->SetBinContent(109,0.011861);
   sigma_ecor91formula__1025->SetBinContent(110,0.01220583);
   sigma_ecor91formula__1025->SetBinContent(111,0.02083292);
   sigma_ecor91formula__1025->SetBinContent(112,0.02368174);
   sigma_ecor91formula__1025->SetBinContent(113,0.01240692);
   sigma_ecor91formula__1025->SetBinContent(114,0.01156171);
   sigma_ecor91formula__1025->SetBinContent(115,0.01182497);
   sigma_ecor91formula__1025->SetBinContent(116,0.0118376);
   sigma_ecor91formula__1025->SetBinContent(117,0.01162706);
   sigma_ecor91formula__1025->SetBinContent(118,0.01099773);
   sigma_ecor91formula__1025->SetBinContent(119,0.01269425);
   sigma_ecor91formula__1025->SetBinContent(120,0.01187127);
   sigma_ecor91formula__1025->SetBinContent(121,0.01115067);
   sigma_ecor91formula__1025->SetBinContent(122,0.01134874);
   sigma_ecor91formula__1025->SetBinContent(123,0.01146926);
   sigma_ecor91formula__1025->SetBinContent(124,0.01086045);
   sigma_ecor91formula__1025->SetBinContent(125,0.01115532);
   sigma_ecor91formula__1025->SetBinContent(126,0.0110304);
   sigma_ecor91formula__1025->SetBinContent(127,0.01143724);
   sigma_ecor91formula__1025->SetBinContent(128,0.01172145);
   sigma_ecor91formula__1025->SetBinContent(129,0.01079173);
   sigma_ecor91formula__1025->SetBinContent(130,0.01181592);
   sigma_ecor91formula__1025->SetBinContent(131,0.02091228);
   sigma_ecor91formula__1025->SetBinContent(132,0.02303306);
   sigma_ecor91formula__1025->SetBinContent(133,0.01129683);
   sigma_ecor91formula__1025->SetBinContent(134,0.01139609);
   sigma_ecor91formula__1025->SetBinContent(135,0.01079028);
   sigma_ecor91formula__1025->SetBinContent(136,0.01091864);
   sigma_ecor91formula__1025->SetBinContent(137,0.01134309);
   sigma_ecor91formula__1025->SetBinContent(138,0.01096995);
   sigma_ecor91formula__1025->SetBinContent(139,0.01172854);
   sigma_ecor91formula__1025->SetBinContent(140,0.01097751);
   sigma_ecor91formula__1025->SetBinContent(141,0.01081913);
   sigma_ecor91formula__1025->SetBinContent(142,0.01184438);
   sigma_ecor91formula__1025->SetBinContent(143,0.01109666);
   sigma_ecor91formula__1025->SetBinContent(144,0.01045979);
   sigma_ecor91formula__1025->SetBinContent(145,0.01106245);
   sigma_ecor91formula__1025->SetBinContent(146,0.01049276);
   sigma_ecor91formula__1025->SetBinContent(147,0.01183521);
   sigma_ecor91formula__1025->SetBinContent(148,0.01102635);
   sigma_ecor91formula__1025->SetBinContent(149,0.01200299);
   sigma_ecor91formula__1025->SetBinContent(150,0.01174849);
   sigma_ecor91formula__1025->SetBinContent(151,0.02380058);
   sigma_ecor91formula__1025->SetBinContent(152,0.03027748);
   sigma_ecor91formula__1025->SetBinContent(153,0.01271759);
   sigma_ecor91formula__1025->SetBinContent(154,0.01230512);
   sigma_ecor91formula__1025->SetBinContent(155,0.01257269);
   sigma_ecor91formula__1025->SetBinContent(156,0.0118781);
   sigma_ecor91formula__1025->SetBinContent(157,0.01277787);
   sigma_ecor91formula__1025->SetBinContent(158,0.01269402);
   sigma_ecor91formula__1025->SetBinContent(159,0.01170242);
   sigma_ecor91formula__1025->SetBinContent(160,0.011459);
   sigma_ecor91formula__1025->SetBinContent(161,0.01181673);
   sigma_ecor91formula__1025->SetBinContent(162,0.01159496);
   sigma_ecor91formula__1025->SetBinContent(163,0.01197132);
   sigma_ecor91formula__1025->SetBinContent(164,0.01137478);
   sigma_ecor91formula__1025->SetBinContent(165,0.0113209);
   sigma_ecor91formula__1025->SetBinContent(166,0.01301504);
   sigma_ecor91formula__1025->SetBinContent(167,0.01199882);
   sigma_ecor91formula__1025->SetBinContent(168,0.01248872);
   sigma_ecor91formula__1025->SetBinContent(169,0.01236437);
   sigma_ecor91formula__1025->SetEntries(169);
   sigma_ecor91formula__1025->SetStats(0);
   sigma_ecor91formula__1025->SetLineColor(4);
   sigma_ecor91formula__1025->SetLineWidth(2);
   sigma_ecor91formula__1025->SetMarkerSize(0);
   sigma_ecor91formula__1025->GetXaxis()->SetLabelFont(42);
   sigma_ecor91formula__1025->GetXaxis()->SetLabelSize(0.035);
   sigma_ecor91formula__1025->GetXaxis()->SetTitleSize(0.035);
   sigma_ecor91formula__1025->GetXaxis()->SetTitleFont(42);
   sigma_ecor91formula__1025->GetYaxis()->SetLabelFont(42);
   sigma_ecor91formula__1025->GetYaxis()->SetLabelSize(0.035);
   sigma_ecor91formula__1025->GetYaxis()->SetTitleSize(0.035);
   sigma_ecor91formula__1025->GetYaxis()->SetTitleOffset(0);
   sigma_ecor91formula__1025->GetYaxis()->SetTitleFont(42);
   sigma_ecor91formula__1025->GetZaxis()->SetLabelFont(42);
   sigma_ecor91formula__1025->GetZaxis()->SetLabelSize(0.035);
   sigma_ecor91formula__1025->GetZaxis()->SetTitleSize(0.035);
   sigma_ecor91formula__1025->GetZaxis()->SetTitleFont(42);
   sigma_ecor91formula__1025->Draw("HISTSAME");
   
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
