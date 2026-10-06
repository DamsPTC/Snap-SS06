/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10008a5d0; end: 10008a7c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10008a5d0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 auStack_80 [5];
  long alStack_58 [3];
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112d7f118);
  *(long *)(unaff_x20 + _DAT_112d7f118) = param_1;
  func_0x000107c61170(uVar2);
  alStack_58[0] = param_1;
  func_0x000107c61174(param_1);
  FUN_10008a7c8(auStack_80,alStack_58);
  uVar2 = auStack_80[0];
  FUN_100083b20(alStack_58);
  func_0x000107c61574(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112d7f128);
  *(long *)(unaff_x20 + _DAT_112d7f128) = alStack_58[0];
  lVar3 = alStack_58[0];
  func_0x000107c61174();
  func_0x000107c61170(uVar2);
  uVar6 = *(undefined8 *)(lVar3 + _DAT_112d9d150);
  func_0x000107c61580(uVar6,2);
  FUN_100a13d04(&UNK_10142e1cc,uVar6);
  func_0x000107c61574(uVar6);
  FUN_100083b20(auStack_80);
  uVar2 = auStack_80[0];
  uVar4 = 0;
  FUN_100a13d8c(0);
  func_0x000107c610f8();
  FUN_100a14104(uVar2,&PTR_DAT_1104e42f0,uVar4);
  lVar1 = _DAT_112d7f110;
  func_0x000107c61428(unaff_x20 + _DAT_112d7f110,alStack_58,1,0);
  uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = uVar2;
  func_0x000107c61170(uVar4);
  FUN_100083b20(auStack_80);
  func_0x000107c61170(auStack_80[0]);
  FUN_100083b20(auStack_80);
  func_0x0001000834e4(auStack_80);
  puVar5 = PTR_PTR_1126b6ae8;
  func_0x000107c61168(PTR_PTR_1126b6ae8);
  func_0x000107c5a9f0();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(lVar3 + _DAT_112d9d1c8);
  uVar2 = uVar4;
  func_0x000107c6157c(uVar4);
  func_0x0001000ad7c4();
  func_0x000107c61574(uVar4);
  func_0x000107c401a0(puVar5);
  func_0x000107c61170(lVar3);
  func_0x000107c61574(uVar6);
  func_0x000107c615e8(puVar5);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10008a7c8; end: 10008a8e7;  */

void FUN_10008a7c8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *unaff_x20;
  long lVar4;
  undefined1 auStack_e0 [16];
  long lStack_c8;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined8 uStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar4 = *unaff_x20;
  func_0x000107c61428(unaff_x20 + 4,auStack_78,0,0);
  if (*(char *)((long)unaff_x20 + 0x31) != '\x01') {
    lVar1 = unaff_x20[4];
    lVar2 = unaff_x20[5];
    lVar3 = unaff_x20[6];
    func_0x000107c61428(0x1138153c0,auStack_b8,0,0);
    FUN_10008a8e8(0x1138153c0,auStack_e0);
    if (lStack_c8 != 0) {
      func_0x000104857124(auStack_e0,auStack_a0);
      FUN_1000a8868(auStack_a0,uStack_88);
      (**(code **)(lStack_80 + 0x20))
                (param_1,lVar1,lVar2,(char)lVar3,&UNK_1048573a8,auStack_e0,
                 *(undefined8 *)(lVar4 + 0x58),uStack_88,lStack_80);
      func_0x0001000834e4(auStack_a0);
      return;
    }
    func_0x00010008a938(auStack_e0);
  }
  (*(code *)unaff_x20[2])(param_1,param_2);
  return;
}



/* Entry: 10008a8e8; end: 10008a97f;  */

undefined8 FUN_10008a8e8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x113092810;
  FUN_1000285a8(0x113092810,&UNK_10dd38530);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10008a980; end: 10008a98f;  */

void FUN_10008a980(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 *puVar5;
  char *pcVar6;
  undefined8 *puVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  char *pcVar13;
  undefined8 *puVar14;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  char *pcVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  char *pcVar22;
  char *pcVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  char *pcVar27;
  char *pcVar28;
  char *pcVar29;
  char *pcVar30;
  char *pcVar31;
  char *pcVar32;
  char *pcVar33;
  char *pcVar34;
  char *pcVar35;
  char *pcVar36;
  char *pcVar37;
  char *pcVar38;
  char *pcVar39;
  char *pcVar40;
  char *pcVar41;
  char *pcVar42;
  char *pcVar43;
  char *pcVar44;
  char *pcVar45;
  char *pcVar46;
  undefined8 *puVar47;
  char *pcVar48;
  char *pcVar49;
  undefined8 *puVar50;
  char *pcVar51;
  char *pcVar52;
  char *pcVar53;
  char *pcVar54;
  char *pcVar55;
  char *pcVar56;
  undefined8 *puVar57;
  char *pcVar58;
  char *pcVar59;
  undefined8 *puVar60;
  char *pcVar61;
  char *pcVar62;
  char *pcVar63;
  char *pcVar64;
  char *pcVar65;
  char *pcVar66;
  undefined8 *puVar67;
  undefined8 *puVar68;
  char *pcVar69;
  char *pcVar70;
  char *pcVar71;
  char *pcVar72;
  char *pcVar73;
  undefined8 *puVar74;
  undefined8 *puVar75;
  undefined8 *puVar76;
  undefined8 *puVar77;
  char *pcVar78;
  char *pcVar79;
  char *pcVar80;
  char *pcVar81;
  char *pcVar82;
  char *pcVar83;
  char *pcVar84;
  char *pcVar85;
  char *pcVar86;
  char *pcVar87;
  char *pcVar88;
  char *pcVar89;
  char *pcVar90;
  undefined8 *puVar91;
  undefined8 *puVar92;
  char *pcVar93;
  char *pcVar94;
  undefined8 *puVar95;
  undefined8 *puVar96;
  char *pcVar97;
  undefined8 *puVar98;
  char *pcVar99;
  char *pcVar100;
  char *pcVar101;
  char *pcVar102;
  char *pcVar103;
  char *pcVar104;
  char *pcVar105;
  char *pcVar106;
  char *pcVar107;
  char *pcVar108;
  char *pcVar109;
  char *pcVar110;
  undefined8 *puVar111;
  undefined8 *puVar112;
  char *pcVar113;
  char *pcVar114;
  char *pcVar115;
  char *pcVar116;
  char *pcVar117;
  char *pcVar118;
  char *pcVar119;
  char *pcVar120;
  undefined8 *puVar121;
  char *pcVar122;
  char *pcVar123;
  undefined8 *puVar124;
  undefined8 *puVar125;
  char *pcVar126;
  undefined8 *puVar127;
  undefined8 *puVar128;
  char *pcVar129;
  char *pcVar130;
  char *pcVar131;
  undefined *puVar132;
  undefined *puVar133;
  undefined *puVar134;
  undefined8 *puVar135;
  undefined8 uVar136;
  char *pcVar137;
  char *pcVar138;
  char *pcVar139;
  char *pcVar140;
  char *pcVar141;
  char *pcVar142;
  char *pcVar143;
  char *pcVar144;
  undefined8 uVar145;
  code *pcVar146;
  char *pcVar147;
  char *pcVar148;
  char *pcVar149;
  char *pcVar150;
  undefined8 *puVar151;
  undefined8 *puVar152;
  char *pcVar153;
  char *pcVar154;
  char *pcVar155;
  char *pcVar156;
  char *pcVar157;
  char *pcVar158;
  char *pcVar159;
  char *pcVar160;
  undefined8 *puVar161;
  undefined8 *puVar162;
  char *pcVar163;
  undefined8 *puVar164;
  char *pcVar165;
  char *pcVar166;
  undefined8 *puVar167;
  undefined8 *puVar168;
  undefined8 *puVar169;
  char *pcVar170;
  char *pcVar171;
  char *pcVar172;
  char *pcVar173;
  char *pcVar174;
  char *pcVar175;
  undefined *puVar176;
  char *pcVar177;
  char *pcVar178;
  undefined8 *puVar179;
  char *pcVar180;
  char *pcVar181;
  char *pcVar182;
  char *pcVar183;
  char *pcVar184;
  undefined8 uVar185;
  char *pcVar186;
  char *pcVar187;
  char *pcVar188;
  char *pcVar189;
  char *pcVar190;
  char *pcVar191;
  char *pcVar192;
  char *pcVar193;
  char *pcVar194;
  char *pcVar195;
  char *pcVar196;
  char *pcVar197;
  undefined *puVar198;
  undefined8 *puVar199;
  char *pcVar200;
  char *pcVar201;
  undefined *puVar202;
  char *pcVar203;
  undefined8 *puVar204;
  char *pcVar205;
  char *pcVar206;
  char *pcVar207;
  char *pcVar208;
  char *pcVar209;
  undefined8 *puVar210;
  undefined8 *puVar211;
  undefined8 *puVar212;
  char *pcVar213;
  undefined8 *puVar214;
  undefined8 *puVar215;
  char *pcVar216;
  char *pcVar217;
  char *pcVar218;
  char *pcVar219;
  char *pcVar220;
  char *pcVar221;
  char *pcVar222;
  char *pcVar223;
  char *pcVar224;
  char *pcVar225;
  char *pcVar226;
  undefined8 *puVar227;
  undefined8 uVar228;
  undefined8 *puVar229;
  char *pcVar230;
  undefined8 *puVar231;
  char *pcVar232;
  char *pcVar233;
  char *pcVar234;
  undefined8 *puVar235;
  undefined8 *puVar236;
  undefined8 *puVar237;
  char *pcVar238;
  undefined8 uVar239;
  char *pcVar240;
  undefined8 *puVar241;
  undefined8 *puVar242;
  char *pcVar243;
  char *pcVar244;
  char *pcVar245;
  char *pcVar246;
  char *pcVar247;
  undefined8 *puVar248;
  undefined8 *puVar249;
  char *pcVar250;
  undefined8 *puVar251;
  char *pcVar252;
  char *pcVar253;
  undefined8 *puVar254;
  undefined8 *puVar255;
  undefined8 *puVar256;
  undefined8 *puVar257;
  char *pcVar258;
  undefined8 *puVar259;
  undefined8 *puVar260;
  undefined8 *puVar261;
  undefined8 *puVar262;
  undefined8 *puVar263;
  undefined8 *puVar264;
  char *pcVar265;
  undefined8 *puVar266;
  undefined8 *puVar267;
  undefined8 *puVar268;
  undefined8 *puVar269;
  undefined8 *puVar270;
  undefined8 *puVar271;
  undefined8 *puVar272;
  char *pcVar273;
  undefined8 *puVar274;
  undefined8 *puVar275;
  char *pcVar276;
  undefined8 *puVar277;
  undefined8 *puVar278;
  undefined8 *puVar279;
  char *pcVar280;
  char *pcVar281;
  undefined8 *puVar282;
  undefined8 *puVar283;
  undefined8 *puVar284;
  undefined8 *puVar285;
  undefined8 *puVar286;
  undefined8 *puVar287;
  char *pcVar288;
  undefined8 *puVar289;
  undefined8 *puVar290;
  undefined8 *puVar291;
  undefined8 *puVar292;
  undefined8 *puVar293;
  undefined8 *puVar294;
  undefined8 *puVar295;
  undefined8 *puVar296;
  undefined8 *puVar297;
  char *pcVar298;
  undefined8 *puVar299;
  undefined8 *puVar300;
  undefined8 *puVar301;
  char *pcVar302;
  undefined8 *puVar303;
  undefined8 *puVar304;
  undefined8 *puVar305;
  undefined8 *puVar306;
  undefined8 *puVar307;
  undefined8 *puVar308;
  undefined8 *puVar309;
  undefined *puVar310;
  undefined *puVar311;
  undefined8 *puVar312;
  char *pcVar313;
  undefined8 *puVar314;
  undefined8 *puVar315;
  undefined8 *puVar316;
  undefined8 *puVar317;
  char *pcVar318;
  char *pcVar319;
  undefined8 *puVar320;
  undefined8 *puVar321;
  undefined8 *puVar322;
  undefined8 *puVar323;
  undefined8 *puVar324;
  undefined8 *puVar325;
  char *pcVar326;
  char *pcVar327;
  char *pcVar328;
  undefined8 *puVar329;
  char *pcVar330;
  char *pcVar331;
  undefined8 *puVar332;
  char *pcVar333;
  char *pcVar334;
  char *pcVar335;
  undefined8 *puVar336;
  undefined8 *puVar337;
  char *pcVar338;
  char *pcVar339;
  char *pcVar340;
  undefined8 *puVar341;
  undefined8 *puVar342;
  char *pcVar343;
  undefined8 *puVar344;
  undefined8 *puVar345;
  char *pcVar346;
  undefined8 *puVar347;
  char *pcVar348;
  undefined8 *puVar349;
  undefined8 *puVar350;
  undefined8 *puVar351;
  char *pcVar352;
  char *pcVar353;
  char *pcVar354;
  undefined8 *puVar355;
  undefined8 *puVar356;
  char *pcVar357;
  char *pcVar358;
  char *pcVar359;
  undefined8 *puVar360;
  undefined8 *puVar361;
  undefined8 *puVar362;
  undefined8 *puVar363;
  undefined8 *puVar364;
  undefined8 *puVar365;
  undefined8 *puVar366;
  undefined8 *puVar367;
  undefined8 *puVar368;
  undefined8 *puVar369;
  undefined8 *puVar370;
  undefined8 *puVar371;
  undefined8 *puVar372;
  char *pcVar373;
  char *pcVar374;
  undefined8 *puVar375;
  undefined8 *puVar376;
  undefined *puVar377;
  undefined8 *puVar378;
  undefined8 *puVar379;
  undefined8 *puVar380;
  undefined8 *puVar381;
  undefined8 *puVar382;
  undefined8 *puVar383;
  char *pcVar384;
  undefined8 uVar385;
  undefined8 uVar386;
  undefined8 *puVar387;
  undefined8 *puVar388;
  char *pcVar389;
  undefined8 *puVar390;
  undefined8 *puVar391;
  char *pcVar392;
  char *pcVar393;
  char *pcVar394;
  char *pcVar395;
  undefined8 uVar396;
  undefined8 uVar397;
  undefined8 *puVar398;
  undefined8 *puVar399;
  undefined8 *puVar400;
  undefined8 *puVar401;
  char *pcVar402;
  undefined8 *puVar403;
  char *pcVar404;
  undefined8 *puVar405;
  undefined8 *puVar406;
  char *pcVar407;
  undefined8 *puVar408;
  undefined8 *puVar409;
  undefined8 *puVar410;
  undefined8 *puVar411;
  undefined8 *puVar412;
  undefined8 *puVar413;
  undefined8 *puVar414;
  undefined8 *puVar415;
  undefined8 *puVar416;
  undefined8 *puVar417;
  undefined8 *puVar418;
  undefined8 *puVar419;
  undefined8 *puVar420;
  undefined8 *puVar421;
  undefined8 *puVar422;
  undefined8 *puVar423;
  undefined8 *puVar424;
  undefined8 *puVar425;
  char *pcVar426;
  undefined8 *puVar427;
  char *pcVar428;
  undefined8 *puVar429;
  undefined8 *puVar430;
  undefined8 *puVar431;
  undefined8 *puVar432;
  undefined8 *puVar433;
  undefined8 *puVar434;
  char *pcVar435;
  undefined8 *puVar436;
  undefined8 *puVar437;
  char *pcVar438;
  char *pcVar439;
  undefined8 *puVar440;
  undefined8 *puVar441;
  undefined8 *puVar442;
  undefined8 *puVar443;
  char *pcVar444;
  char *pcVar445;
  undefined8 *puVar446;
  undefined8 *puVar447;
  undefined8 *puVar448;
  undefined8 *puVar449;
  undefined8 *puVar450;
  char *pcVar451;
  char *pcVar452;
  char *pcVar453;
  char *pcVar454;
  undefined8 *puVar455;
  undefined8 *puVar456;
  char *pcVar457;
  undefined8 *puVar458;
  undefined8 *puVar459;
  undefined8 *puVar460;
  undefined8 *puVar461;
  code *pcVar462;
  undefined8 *puVar463;
  undefined8 *puVar464;
  undefined8 *puVar465;
  char *pcVar466;
  undefined8 *puVar467;
  undefined8 *puVar468;
  undefined8 *puVar469;
  char *pcVar470;
  undefined8 uVar471;
  undefined8 uVar472;
  char *pcVar473;
  undefined8 *puVar474;
  undefined8 *puVar475;
  undefined8 *puVar476;
  char *pcVar477;
  undefined8 *puVar478;
  undefined8 *puVar479;
  undefined8 *puVar480;
  undefined8 *puVar481;
  char *pcVar482;
  undefined8 *puVar483;
  undefined8 *puVar484;
  undefined8 *puVar485;
  undefined8 *puVar486;
  char *pcVar487;
  char *pcVar488;
  undefined8 *puVar489;
  undefined8 *puVar490;
  undefined8 *puVar491;
  char *pcVar492;
  char *pcVar493;
  char *pcVar494;
  undefined8 *puVar495;
  undefined8 *puVar496;
  undefined8 *puVar497;
  char *pcVar498;
  char *pcVar499;
  char *pcVar500;
  undefined8 *puVar501;
  undefined8 *puVar502;
  char *pcVar503;
  code *pcVar504;
  code *pcVar505;
  undefined *puVar506;
  code *pcVar507;
  undefined8 uVar508;
  undefined8 uVar509;
  undefined8 uVar510;
  undefined8 *extraout_x8;
  long unaff_x20;
  undefined8 uVar511;
  undefined8 auStack_70 [2];
  
  uVar508 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar509 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar136 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar471 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar510 = *(undefined8 *)(unaff_x20 + 0x30);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar511 = *param_1;
  FUN_1000285a8(0x112d9d2c8,&UNK_10d93da40);
  puVar1 = auStack_70;
  auStack_70[0] = uVar511;
  FUN_1000838ec();
  puVar2 = puVar1;
  FUN_100092298();
  pcVar3 = "AppStartExperimentReaderProtocolServiceProvider";
  FUN_100082720("AppStartExperimentReaderProtocolServiceProvider",0x2f,2);
  func_0x0001000922d8();
  FUN_100082720("AppStoreReceiptURLImplementationServiceProvider",0x2f,2);
  uVar511 = uVar508;
  func_0x000100092318();
  pcVar4 = "ApplicationConfigurationServicesServiceProvider";
  FUN_100082720("ApplicationConfigurationServicesServiceProvider",0x2f,2);
  FUN_100092384();
  FUN_100082720("AutoOneTapLoginEventServiceProvider",0x23,2);
  puVar5 = puVar1;
  FUN_1000923e4();
  pcVar6 = "CameraApplicationStateServiceProvider";
  FUN_100082720("CameraApplicationStateServiceProvider",0x25,2);
  func_0x000100092430();
  FUN_100082720("CameraHardwareOwnershipRequesterServiceProvider",0x2f,2);
  puVar7 = puVar2;
  func_0x000100092470();
  pcVar8 = "CaptureDeviceAuthorizationCheckerServiceProvider";
  FUN_100082720("CaptureDeviceAuthorizationCheckerServiceProvider",0x30,2);
  func_0x0001000924bc();
  pcVar9 = "CircumstanceGrapheneContextManagerServiceProvider";
  FUN_100082720("CircumstanceGrapheneContextManagerServiceProvider",0x31,2);
  func_0x0001000924fc();
  pcVar10 = "CompositeConfigValueProviderParamsProviderSaberServiceProvider";
  FUN_100082720("CompositeConfigValueProviderParamsProviderSaberServiceProvider",0x3e,2);
  func_0x00010009253c();
  FUN_100082720("ConfigRegistryServiceImplementationServiceProvider",0x32,2);
  puVar11 = puVar2;
  FUN_10009257c();
  FUN_100082720("CppAppStartExperimentReaderProviderServiceProvider",0x32,2);
  puVar12 = puVar11;
  FUN_1000925e8();
  pcVar13 = "CppAppStartExperimentReaderProviderServicesServiceProvider";
  FUN_100082720("CppAppStartExperimentReaderProviderServicesServiceProvider",0x3a,2);
  FUN_100092624();
  FUN_100082720("CriticalSectionRegistrarServiceProvider",0x27,2);
  puVar14 = puVar1;
  func_0x000100092664();
  pcVar15 = "CurrentPageTrackerSaberServiceProvider";
  FUN_100082720("CurrentPageTrackerSaberServiceProvider",0x26,2);
  func_0x0001000926b0();
  pcVar16 = "DiskCacheLoggingImplementationServiceProvider";
  FUN_100082720("DiskCacheLoggingImplementationServiceProvider",0x2d,2);
  func_0x0001000926f0();
  pcVar17 = "FeatureStartupSignalerSaberServiceProvider";
  FUN_100082720("FeatureStartupSignalerSaberServiceProvider",0x2a,2);
  func_0x000100092730();
  pcVar18 = "FlipperServiceProvider";
  FUN_100082720("FlipperServiceProvider",0x16,2);
  func_0x000100092770();
  FUN_100082720("GhostImageServiceImplServiceProvider",0x24,2);
  puVar19 = puVar1;
  FUN_1000927b0();
  FUN_100082720("GoogleContactBookStoreImplServiceProviderWrapperServiceProvider",0x3f,2);
  puVar20 = puVar19;
  FUN_10009283c();
  FUN_100082720("GoogleContactBookStoreServicesServiceProvider",0x2d,2);
  puVar21 = puVar1;
  FUN_100092878();
  pcVar22 = "GoogleSignInServiceProviderWrapperServiceProvider";
  FUN_100082720("GoogleSignInServiceProviderWrapperServiceProvider",0x31,2);
  FUN_100092904();
  pcVar23 = "LegacyInternalKeychainServiceProvider";
  FUN_100082720("LegacyInternalKeychainServiceProvider",0x25,2);
  func_0x000100092944();
  FUN_100082720("LegacyNavigationControllerPrewarmerImplementationServiceProvider",0x40,2);
  puVar24 = puVar1;
  FUN_100092984();
  FUN_100082720("LocalNotificationSchedulingServiceProviderWrapperServiceProvider",0x40,2);
  puVar25 = puVar2;
  FUN_100092a10();
  FUN_100082720("MainActorThrottlerServiceProvider",0x21,2);
  puVar26 = puVar25;
  func_0x000100092a5c();
  pcVar27 = "MainActorThrottlerServicesLazySaberServiceProvider";
  FUN_100082720("MainActorThrottlerServicesLazySaberServiceProvider",0x32,2);
  FUN_100092ac8();
  pcVar28 = "ManagedCapturerStateCoordinatorServiceProvider";
  FUN_100082720("ManagedCapturerStateCoordinatorServiceProvider",0x2e,2);
  func_0x000100092b08();
  pcVar29 = "NetworkConnectivityMonitorFactoryImplServiceProvider";
  FUN_100082720("NetworkConnectivityMonitorFactoryImplServiceProvider",0x34,2);
  func_0x000100092b48();
  pcVar30 = "NetworkConnectivityMonitoringServiceProvider";
  FUN_100082720("NetworkConnectivityMonitoringServiceProvider",0x2c,2);
  func_0x000100092b88();
  pcVar31 = "NoDepBlizzardSaberServiceProvider";
  FUN_100082720("NoDepBlizzardSaberServiceProvider",0x21,2);
  func_0x000100092bc8();
  FUN_100082720("PendingAppNotificationStorageServiceProvider",0x2c,2);
  pcVar32 = pcVar31;
  func_0x000100092c08();
  pcVar33 = "PendingAppNotificationStorageSaberServiceProvider";
  FUN_100082720("PendingAppNotificationStorageSaberServiceProvider",0x31,2);
  FUN_100092c74();
  pcVar34 = "QueuePerformerServiceProvider";
  FUN_100082720("QueuePerformerServiceProvider",0x1d,2);
  func_0x000100092cb4();
  pcVar35 = "ContextAwareQueuePerformerThrottlerServiceProvider";
  FUN_100082720("ContextAwareQueuePerformerThrottlerServiceProvider",0x32,2);
  func_0x000100092cf4();
  pcVar36 = "SCCountryCodePickerScopeExposerSubjectServiceProvider";
  FUN_100082720("SCCountryCodePickerScopeExposerSubjectServiceProvider",0x35,2);
  func_0x000100092d34();
  pcVar37 = "SCDataUnavailableScopeExposerSubjectServiceProvider";
  FUN_100082720("SCDataUnavailableScopeExposerSubjectServiceProvider",0x33,2);
  func_0x000100092d74();
  pcVar38 = "SCEmergencyModeScopeExposerSubjectServiceProvider";
  FUN_100082720("SCEmergencyModeScopeExposerSubjectServiceProvider",0x31,2);
  func_0x000100092db4();
  pcVar39 = "SCLegacyNonCriticalStartupCommandsStartupCompleteScopeExposerSubjectServiceProvider";
  FUN_100082720("SCLegacyNonCriticalStartupCommandsStartupCompleteScopeExposerSubjectServiceProvider"
                ,0x53,2);
  func_0x000100092df4();
  pcVar40 = "SCLegacyWarmStartupScopeExposerSubjectServiceProvider";
  FUN_100082720("SCLegacyWarmStartupScopeExposerSubjectServiceProvider",0x35,2);
  func_0x000100092e34();
  pcVar41 = "SCNGOCodeVerificationScopeExposerSubjectServiceProvider";
  FUN_100082720("SCNGOCodeVerificationScopeExposerSubjectServiceProvider",0x37,2);
  func_0x000100092e74();
  pcVar42 = "SCUnauthenticatedScopeExposerSubjectServiceProvider";
  FUN_100082720("SCUnauthenticatedScopeExposerSubjectServiceProvider",0x33,2);
  func_0x000100092eb4();
  pcVar43 = "SCUserSessionScopeExposerSubjectServiceProvider";
  FUN_100082720("SCUserSessionScopeExposerSubjectServiceProvider",0x2f,2);
  func_0x000100092ef4();
  pcVar44 = "SCComposerSystemSessionImageLoadersRegistryScopeExposerSubjectServiceProvider";
  FUN_100082720("SCComposerSystemSessionImageLoadersRegistryScopeExposerSubjectServiceProvider",0x4d
                ,2);
  func_0x000100092f34();
  FUN_100082720("ActivationDeepLinkInfoServiceProvider",0x25,2);
  pcVar45 = pcVar44;
  func_0x000100092f74();
  pcVar46 = "ActivationDeepLinkInfoServicesServiceProvider";
  FUN_100082720("ActivationDeepLinkInfoServicesServiceProvider",0x2d,2);
  FUN_100092fe0();
  FUN_100082720("AppExtensionStorageServiceProvider",0x22,2);
  puVar47 = puVar2;
  func_0x000100093020();
  pcVar48 = "AppStartExperimentReaderServicesServiceProvider";
  FUN_100082720("AppStartExperimentReaderServicesServiceProvider",0x2f,2);
  FUN_10009308c();
  FUN_100082720("AsyncQueueServiceProvider",0x19,2);
  pcVar49 = pcVar48;
  func_0x0001000930cc();
  FUN_100082720("AsyncQueueServicesServiceProvider",0x21,2);
  puVar50 = puVar14;
  func_0x000100093118();
  pcVar51 = "AttributionServicesServiceProvider";
  FUN_100082720("AttributionServicesServiceProvider",0x22,2);
  FUN_100093184();
  pcVar52 = "BlizzardEventObserverServicesServiceProvider";
  FUN_100082720("BlizzardEventObserverServicesServiceProvider",0x2c,2);
  FUN_1000931e4();
  FUN_100082720("BlizzardGeoSignalManagerSaberServiceProvider",0x2c,2);
  pcVar53 = pcVar29;
  func_0x000100093224();
  pcVar54 = "ValdiNetworkStatusProviderServiceProvider";
  FUN_100082720("ValdiNetworkStatusProviderServiceProvider",0x29,2);
  func_0x000100093270();
  FUN_100082720("CameraLoggingQueueServiceProvider",0x21,2);
  pcVar55 = pcVar54;
  func_0x0001000932b0();
  pcVar56 = "CameraPerfLoggingSaberServiceProvider";
  FUN_100082720("CameraPerfLoggingSaberServiceProvider",0x25,2);
  func_0x0001000932fc();
  FUN_100082720("AuthContextDelegateProxyServiceProvider",0x27,2);
  puVar57 = puVar1;
  func_0x00010009333c();
  FUN_100082720("ComposerUICoverageServiceProvider",0x21,2);
  pcVar58 = pcVar33;
  func_0x000100093388();
  pcVar59 = "ConfigUtilServicesServiceProvider";
  FUN_100082720("ConfigUtilServicesServiceProvider",0x21,2);
  FUN_1000933f4();
  FUN_100082720("ConfigVersionProvidingServiceProvider",0x25,2);
  puVar60 = puVar1;
  FUN_100093434(puVar1,uVar509);
  pcVar61 = "SCContextAwareTaskManagementSetupEntryPointWrapperServiceProvider";
  FUN_100082720("SCContextAwareTaskManagementSetupEntryPointWrapperServiceProvider",0x41,2);
  FUN_1000934d4();
  pcVar62 = "CrashMetricLoggerServiceProvider";
  FUN_100082720("CrashMetricLoggerServiceProvider",0x20,2);
  FUN_100093534();
  pcVar63 = "CremaLegacyBackdoorServicesServiceProvider";
  FUN_100082720("CremaLegacyBackdoorServicesServiceProvider",0x2a,2);
  func_0x000100093574();
  pcVar64 = "CremaLegacyBackdoorServicesWrapperServiceProvider";
  FUN_100082720("CremaLegacyBackdoorServicesWrapperServiceProvider",0x31,2);
  FUN_1000935d4();
  pcVar65 = "CremaServicesServiceProvider";
  FUN_100082720("CremaServicesServiceProvider",0x1c,2);
  FUN_100093634();
  FUN_100082720("CremaServicesWrapperServiceProvider",0x23,2);
  pcVar66 = pcVar48;
  FUN_100093694();
  FUN_100082720("CriticalSectionImplementationServiceProvider",0x2c,2);
  puVar67 = puVar1;
  FUN_1000936e0();
  FUN_100082720("SCDeferredDeepLinkStorageServiceProviderWrapperServiceProvider",0x3e,2);
  puVar68 = puVar67;
  FUN_10009376c();
  pcVar69 = "SCDeferredDeepLinkStorageServicesServiceProvider";
  FUN_100082720("SCDeferredDeepLinkStorageServicesServiceProvider",0x30,2);
  FUN_100093788();
  pcVar70 = "DeviceIdentifierServiceProvider";
  FUN_100082720("DeviceIdentifierServiceProvider",0x1f,2);
  func_0x0001000937c8();
  FUN_100082720("DeviceMotionManagerServiceProvider",0x22,2);
  pcVar71 = pcVar70;
  func_0x000100093808();
  pcVar72 = "DeviceMotionServicesServiceProvider";
  FUN_100082720("DeviceMotionServicesServiceProvider",0x23,2);
  func_0x000100093854();
  pcVar73 = "DeviceSamplingServiceProvider";
  FUN_100082720("DeviceSamplingServiceProvider",0x1d,2);
  func_0x000100093894();
  FUN_100082720("SystemScopedDirectoriesServiceProvider",0x26,2);
  puVar74 = puVar1;
  FUN_1000938d4();
  FUN_100082720("SCDiscoverFeedCardConversionServiceProviderWrapperServiceProvider",0x41,2);
  puVar75 = puVar74;
  FUN_100093960();
  FUN_100082720("SCDiscoverFeedCardConversionServicesServiceProvider",0x33,2);
  puVar76 = puVar1;
  FUN_10009399c();
  FUN_100082720("SCDynamicCdnServiceProviderWrapperServiceProvider",0x31,2);
  puVar77 = puVar76;
  FUN_100093a28();
  pcVar78 = "SCDynamicCdnServicesServiceProvider";
  FUN_100082720("SCDynamicCdnServicesServiceProvider",0x23,2);
  FUN_100093a44();
  pcVar79 = "FileBasedApplicationDataCheckerServiceProvider";
  FUN_100082720("FileBasedApplicationDataCheckerServiceProvider",0x2e,2);
  func_0x000100093a84();
  FUN_100082720("FlipperServicesServiceProvider",0x1e,2);
  pcVar80 = pcVar33;
  FUN_100093ae4(pcVar33,pcVar17);
  FUN_100082720("GrapheneManagerServiceProvider",0x1e,2);
  pcVar81 = pcVar80;
  FUN_100093b64();
  pcVar82 = "GrapheneRegistryServiceProvider";
  FUN_100082720("GrapheneRegistryServiceProvider",0x1f,2);
  func_0x000100093bb0();
  pcVar83 = "HTTPRequestModifierServiceProvider";
  FUN_100082720("HTTPRequestModifierServiceProvider",0x22,2);
  func_0x000100093bf0();
  FUN_100082720("InternalDistributeServiceProvider",0x21,2);
  pcVar84 = pcVar83;
  func_0x000100093c30();
  pcVar85 = "SCInternalDistributeServiceWrapperServiceProvider";
  FUN_100082720("SCInternalDistributeServiceWrapperServiceProvider",0x31,2);
  func_0x000100093c7c();
  FUN_100082720("SCInternalLogWriterServiceProvider",0x22,2);
  pcVar86 = pcVar85;
  FUN_100093cbc();
  pcVar87 = "SCInternalShakeToReportServicesServiceProvider";
  FUN_100082720("SCInternalShakeToReportServicesServiceProvider",0x2e,2);
  FUN_100093d48();
  FUN_100082720("LensCollectionsMockServiceProvider",0x22,2);
  pcVar88 = pcVar87;
  func_0x000100093d88();
  pcVar89 = "SCLensCollectionsMockServicesWrapperServiceProvider";
  FUN_100082720("SCLensCollectionsMockServicesWrapperServiceProvider",0x33,2);
  FUN_100093df4();
  FUN_100082720("LensFavoritesMockedServicesServiceProvider",0x2a,2);
  pcVar90 = pcVar89;
  func_0x000100093e34();
  FUN_100082720("SCLensFavoritesMockedServicesWrapperServiceProvider",0x33,2);
  puVar91 = puVar1;
  FUN_100093ea0();
  FUN_100082720("SCLensPreferencesStorageServiceProviderWrapperServiceProvider",0x3d,2);
  puVar92 = puVar91;
  FUN_100093f2c();
  pcVar93 = "SCLensPreferencesStorageServicesServiceProvider";
  FUN_100082720("SCLensPreferencesStorageServicesServiceProvider",0x2f,2);
  FUN_100093f48();
  pcVar94 = "LensUnlockerMockServicesServiceProvider";
  FUN_100082720("LensUnlockerMockServicesServiceProvider",0x27,2);
  func_0x000100093f88();
  FUN_100082720("LensUnlockerMockUpdaterServicesServiceProvider",0x2e,2);
  puVar95 = puVar24;
  FUN_100093fc8();
  FUN_100082720("SCLocalNotificationSchedulingServicesServiceProvider",0x34,2);
  puVar96 = puVar1;
  FUN_100094004();
  pcVar97 = "SCLogSessionStartEntryPointWrapperServiceProvider";
  FUN_100082720("SCLogSessionStartEntryPointWrapperServiceProvider",0x31,2);
  FUN_100094090();
  FUN_100082720("MainThreadIdentificationServiceProvider",0x27,2);
  puVar98 = puVar1;
  func_0x0001000940d0();
  pcVar99 = "ManagerApplicationDataCheckerServiceProvider";
  FUN_100082720("ManagerApplicationDataCheckerServiceProvider",0x2c,2);
  func_0x00010009411c();
  pcVar100 = "MemoryUsageInfoProviderImplementationServiceProvider";
  FUN_100082720("MemoryUsageInfoProviderImplementationServiceProvider",0x34,2);
  func_0x00010009415c();
  FUN_100082720("MemoryUsageMetadataStoreServiceProvider",0x27,2);
  pcVar101 = pcVar99;
  func_0x00010009419c();
  pcVar102 = "MemoryUsageServicesServiceProvider";
  FUN_100082720("MemoryUsageServicesServiceProvider",0x22,2);
  func_0x0001000941e8();
  pcVar103 = "ClientSwitchboardConfigFetcherServiceProvider";
  FUN_100082720("ClientSwitchboardConfigFetcherServiceProvider",0x2d,2);
  func_0x000100094228();
  pcVar104 = "ContentManagerNetworkMappingProviderImplServiceProvider";
  FUN_100082720("ContentManagerNetworkMappingProviderImplServiceProvider",0x37,2);
  func_0x000100094268();
  FUN_100082720("NSDataWriterServiceProvider",0x1b,2);
  pcVar105 = pcVar104;
  func_0x0001000942a8();
  FUN_100082720("NSDataWriterServicesServiceProvider",0x23,2);
  pcVar106 = pcVar103;
  func_0x0001000942f4();
  FUN_100082720("NetworkMappingProviderServicesServiceProvider",0x2d,2);
  pcVar107 = pcVar30;
  func_0x000100094340();
  pcVar108 = "NoDepBlizzardServicesServiceProvider";
  FUN_100082720("NoDepBlizzardServicesServiceProvider",0x24,2);
  FUN_1000943ac();
  pcVar109 = "NoDepSpectrumImplServiceProvider";
  FUN_100082720("NoDepSpectrumImplServiceProvider",0x20,2);
  func_0x0001000943ec();
  FUN_100082720("SCNormalizedSpamCheckURLFinderSaberServiceProvider",0x32,2);
  pcVar110 = pcVar66;
  func_0x00010009442c();
  FUN_100082720("CriticalSectionObservableServiceProvider",0x28,2);
  puVar111 = puVar1;
  FUN_100094478(puVar1,pcVar107,puVar50);
  FUN_100082720("SCPagePageViewReporterServiceProviderWrapperServiceProvider",0x3b,2);
  puVar112 = puVar111;
  FUN_100094530();
  pcVar113 = "SCPagePageViewReporterServicesServiceProvider";
  FUN_100082720("SCPagePageViewReporterServicesServiceProvider",0x2d,2);
  FUN_10009459c();
  FUN_100082720("PropertyHandlerRegistrySaberServiceProvider",0x2b,2);
  pcVar114 = pcVar113;
  func_0x0001000945dc();
  pcVar115 = "PropertyHandlerRegistryServicesServiceProvider";
  FUN_100082720("PropertyHandlerRegistryServicesServiceProvider",0x2e,2);
  func_0x000100094628();
  pcVar116 = "ProtectedDataAvailabilityServiceImplementationServiceProvider";
  FUN_100082720("ProtectedDataAvailabilityServiceImplementationServiceProvider",0x3d,2);
  func_0x000100094668();
  pcVar117 = "RegistrationSourceSaberServiceProvider";
  FUN_100082720("RegistrationSourceSaberServiceProvider",0x26,2);
  func_0x0001000946a8();
  FUN_100082720("SQLiteLoggerServiceProvider",0x1b,2);
  pcVar118 = pcVar33;
  func_0x0001000946e8();
  FUN_100082720("SecretFeatureCheckingCheckerAndUpdaterServiceProvider",0x35,2);
  pcVar119 = pcVar118;
  func_0x000100094734();
  FUN_100082720("SecretFeatureCheckingSaberServiceProvider",0x29,2);
  pcVar120 = pcVar30;
  FUN_1000947a0();
  FUN_100082720("SettingsEventLoggerServicesServiceProvider",0x2a,2);
  puVar121 = puVar1;
  FUN_1000947ec(puVar1,uVar509);
  pcVar122 = "SCStartupNotificationHandlerEntryPointWrapperServiceProvider";
  FUN_100082720("SCStartupNotificationHandlerEntryPointWrapperServiceProvider",0x3c,2);
  FUN_10009488c();
  FUN_100082720("SystemInstallSaberServiceProvider",0x21,2);
  pcVar123 = pcVar73;
  func_0x0001000948cc();
  FUN_100082720("SystemScopedDirectoriesServicesServiceProvider",0x2e,2);
  puVar124 = puVar1;
  FUN_100094918(puVar1,pcVar105);
  FUN_100082720("SCTemporaryFileWriterServiceProviderWrapperServiceProvider",0x3a,2);
  puVar125 = puVar124;
  FUN_1000949b8();
  pcVar126 = "SCTemporaryFileWriterServicesServiceProvider";
  FUN_100082720("SCTemporaryFileWriterServicesServiceProvider",0x2c,2);
  FUN_100094a24();
  FUN_100082720("UncompressedLocalizedStringLookupSaberServiceProvider",0x35,2);
  puVar127 = puVar1;
  FUN_100094a64(puVar1,puVar2);
  FUN_100082720("UpdatesFrequencyServiceProvider",0x1f,2);
  puVar128 = puVar127;
  FUN_100094ae4();
  pcVar129 = "UpdatesFrequencyServicesServiceProvider";
  FUN_100082720("UpdatesFrequencyServicesServiceProvider",0x27,2);
  func_0x000100094b30();
  pcVar130 = "ZstdLocalizedStringLookupSaberServiceProvider";
  FUN_100082720("ZstdLocalizedStringLookupSaberServiceProvider",0x2d,2);
  func_0x000100094b70();
  FUN_100082720("SIGFIFONotificationPoolServiceProvider",0x26,2);
  pcVar131 = pcVar130;
  func_0x000100094bb0();
  FUN_100082720("SIGNotificationServicesServiceProvider",0x26,2);
  FUN_1000285a8(0x112d9d2d0,&UNK_10d93da48);
  puVar132 = &UNK_10143475c;
  FUN_1000823a8(&UNK_10143475c,0);
  FUN_100082720("DeepLinkTransformerSaberPluginRegistryServiceProvider",0x35,2);
  FUN_1000285a8(0x112d9d2d8,&UNK_10d93da50);
  func_0x000107c6157c(pcVar51);
  puVar133 = &UNK_101434320;
  FUN_1000823a8(&UNK_101434320,pcVar51);
  FUN_100082720("SCCremaLegacyBackdoorPluginRegistryServiceProvider",0x32,2);
  FUN_1000285a8(0x112d9d2e0,&UNK_10d93da58);
  puVar134 = &UNK_1014348e4;
  FUN_1000823a8(&UNK_1014348e4,0);
  FUN_100082720("SCDeepLinkUnauthProcessorPluginRegistryServiceProvider",0x36,2);
  puVar135 = puVar50;
  FUN_100094c2c();
  FUN_100082720("SCNGOCodeVerificationScopedFactoryServiceProvider",0x31,2);
  FUN_100094c98(uVar136,pcVar30,pcVar72);
  FUN_100082720("SaberStartupMetricsReporterServiceProvider",0x2a,2);
  pcVar137 = pcVar35;
  FUN_100094d30();
  FUN_100082720("SCCountryCodePickerScopeExposerObservableServiceProvider",0x38,2);
  pcVar138 = pcVar36;
  FUN_100094d9c();
  FUN_100082720("SCDataUnavailableScopeExposerObservableServiceProvider",0x36,2);
  pcVar139 = pcVar37;
  func_0x000100094db8();
  FUN_100082720("SCEmergencyModeScopeExposerObservableServiceProvider",0x34,2);
  pcVar140 = pcVar38;
  func_0x000100094dd4();
  FUN_100082720("SCLegacyNonCriticalStartupCommandsStartupCompleteScopeExposerObservableServiceProvider"
                ,0x56,2);
  pcVar141 = pcVar39;
  func_0x000100094df0();
  FUN_100082720("SCLegacyWarmStartupScopeExposerObservableServiceProvider",0x38,2);
  pcVar142 = pcVar40;
  func_0x000100094e0c();
  FUN_100082720("SCNGOCodeVerificationScopeExposerObservableServiceProvider",0x3a,2);
  pcVar143 = pcVar41;
  func_0x000100094e28();
  FUN_100082720("SCUnauthenticatedScopeExposerObservableServiceProvider",0x36,2);
  pcVar144 = pcVar42;
  func_0x000100094e44();
  FUN_100082720("SCUserSessionScopeExposerObservableServiceProvider",0x32,2);
  uVar145 = uVar508;
  FUN_100094e60(uVar508,puVar1,uVar471,puVar2);
  FUN_100082720("ScopeGraphLauncherServiceImplementationServiceProvider",0x36,2);
  FUN_1000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar146 = FUN_100a0f52c;
  FUN_1000823a8(FUN_100a0f52c,0);
  pcVar147 = "SCSystemScopedServicesCleanupRelayServiceProvider";
  FUN_100082720("SCSystemScopedServicesCleanupRelayServiceProvider",0x31,2);
  FUN_100094f44();
  pcVar148 = "ServerNetworkClockProvidingServiceProvider";
  FUN_100082720("ServerNetworkClockProvidingServiceProvider",0x2a,2);
  func_0x000100094f84();
  FUN_100082720("ShakeToReportInfoProviderRegistryServiceProvider",0x30,2);
  pcVar149 = pcVar72;
  FUN_100094fc4();
  pcVar150 = "ShouldReportUserTraceServiceProvider";
  FUN_100082720("ShouldReportUserTraceServiceProvider",0x24,2);
  FUN_100095030();
  FUN_100082720("LegacySnapchatAPIHostServiceProvider",0x24,2);
  puVar151 = puVar1;
  FUN_100095070();
  FUN_100082720("SnapchatWatchServiceProviderWrapperServiceProvider",0x32,2);
  puVar152 = puVar151;
  FUN_1000950fc();
  FUN_100082720("SnapchatWatchServicesServiceProvider",0x24,2);
  pcVar153 = pcVar108;
  FUN_100095138();
  FUN_100082720("NoDepSpectrumServiceProvider",0x1c,2);
  pcVar154 = pcVar13;
  func_0x000100095184();
  FUN_100082720("StartupCompleteTrackerImplementationServiceProvider",0x33,2);
  pcVar155 = pcVar18;
  FUN_1000951d0(pcVar18,puVar75);
  pcVar156 = "StrSystemScopeGraphBridgeServicesServiceProvider";
  FUN_100082720("StrSystemScopeGraphBridgeServicesServiceProvider",0x30,2);
  FUN_100095294();
  pcVar157 = "SystemApplicationLifeCycleListenerServiceProvider";
  FUN_100082720("SystemApplicationLifeCycleListenerServiceProvider",0x31,2);
  FUN_100095340();
  FUN_100082720("SystemCronetServicesSaberServiceProvider",0x28,2);
  pcVar158 = pcVar73;
  FUN_1000953a0();
  FUN_100082720("SystemDocObjectContextServiceProvider",0x25,2);
  pcVar159 = pcVar73;
  func_0x0001000953ec();
  FUN_100082720("SystemPreferencesServiceProvider",0x20,2);
  pcVar160 = pcVar157;
  func_0x000100095438();
  FUN_100082720("UnifiedGRPCClientFactoryServiceProvider",0x27,2);
  puVar161 = puVar1;
  FUN_100095484();
  FUN_100082720("TranscoderServiceProviderWrapperServiceProvider",0x2f,2);
  puVar162 = puVar161;
  FUN_100095510();
  FUN_100082720("TranscoderServicesServiceProvider",0x21,2);
  pcVar163 = pcVar63;
  FUN_10009554c(pcVar63,pcVar65);
  FUN_100082720("TstSystemScopeGraphBridgeServicesServiceProvider",0x30,2);
  puVar164 = puVar1;
  FUN_100095610(puVar1,puVar152);
  pcVar165 = "WatchDetectorServiceProviderWrapperServiceProvider";
  FUN_100082720("WatchDetectorServiceProviderWrapperServiceProvider",0x32,2);
  FUN_1000956b0();
  pcVar166 = "WebBrowsingScopeServicesServiceProvider";
  FUN_100082720("WebBrowsingScopeServicesServiceProvider",0x27,2);
  FUN_100095710();
  FUN_100082720("LegacyWorkServiceImplementationServiceProvider",0x2e,2);
  puVar167 = puVar1;
  FUN_100095750(puVar1,pcVar110,puVar25);
  FUN_100082720("AppLifeCycleManagerServiceProvider",0x22,2);
  puVar168 = puVar1;
  func_0x0001000957d0(puVar1,pcVar49);
  FUN_100082720("AsyncQueueServicesProviderWrapperServiceProvider",0x30,2);
  puVar169 = puVar1;
  FUN_100095870(puVar1,pcVar52);
  FUN_100082720("BlizzardGeoSignalReceiverPublisherEntryPointWrapperServiceProvider",0x42,2);
  pcVar170 = pcVar51;
  FUN_100095910();
  FUN_100082720("BlizzardInspectorEventCollectorServiceProvider",0x2e,2);
  pcVar171 = pcVar33;
  FUN_10009595c(pcVar33,pcVar13,pcVar159);
  FUN_100082720("COFAppStartupViolationMonitorImplServiceProvider",0x30,2);
  pcVar172 = pcVar171;
  FUN_100095a14();
  FUN_100082720("COFAppStartupViolationMonitorServiceProvider",0x2c,2);
  pcVar173 = pcVar159;
  func_0x000100095a60();
  FUN_100082720("CarrierNetworkInfoServiceProvider",0x21,2);
  pcVar174 = pcVar102;
  func_0x000100095aac();
  FUN_100082720("ClientSwitchboardServicesServiceProvider",0x28,2);
  pcVar175 = pcVar66;
  FUN_100095b18();
  FUN_100082720("CriticalSectionRegistryServiceProvider",0x26,2);
  puVar176 = puVar132;
  func_0x000100095b64();
  FUN_100082720("DeepLinkTransformerPluginSaberServiceServiceProvider",0x34,2);
  pcVar177 = pcVar16;
  FUN_100095bd0();
  FUN_100082720("FeatureStartupSignalServicesServiceProvider",0x2b,2);
  pcVar178 = pcVar79;
  FUN_100095c3c();
  FUN_100082720("FlipperServicesWrapperServiceProvider",0x25,2);
  puVar179 = puVar21;
  FUN_100095ca8();
  FUN_100082720("GoogleSignInServiceServiceProvider",0x22,2);
  pcVar180 = pcVar30;
  FUN_100095ce4();
  FUN_100082720("NetworkBandwidthEstimatorServiceProvider",0x28,2);
  pcVar181 = pcVar43;
  FUN_100095d30();
  FUN_100082720("SCComposerSystemSessionImageLoadersRegistryScopeExposerObservableServiceProvider",
                0x50,2);
  pcVar182 = pcVar84;
  FUN_100095d4c();
  FUN_100082720("RlsSystemScopeGraphBridgeServicesServiceProvider",0x30,2);
  pcVar183 = pcVar159;
  FUN_100095db8();
  FUN_100082720("AppInsightsMetadataStorageSaberServiceProvider",0x2e,2);
  pcVar184 = pcVar73;
  FUN_100095e04(pcVar73,pcVar159,pcVar104,puVar1);
  FUN_100082720("AppTerminationShimServiceProvider",0x21,2);
  uVar185 = uVar508;
  func_0x000100095ea8(uVar508,puVar98,pcVar78);
  FUN_100082720("ApplicationDataCheckerServiceProvider",0x25,2);
  pcVar186 = pcVar158;
  FUN_100095f40(pcVar158,pcVar159);
  FUN_100082720("ApplicationStorageServicesServiceProvider",0x29,2);
  pcVar187 = pcVar159;
  FUN_100095fc0();
  FUN_100082720("AuthenticationSessionInfoProviderSaberServiceProvider",0x35,2);
  pcVar188 = pcVar159;
  FUN_10009602c();
  FUN_100082720("AuthenticationSessionPayloadProviderSaberServiceProvider",0x38,2);
  pcVar189 = pcVar187;
  FUN_100096048(pcVar187,pcVar188);
  FUN_100082720("AuthenticationSessionSaberServiceProvider",0x29,2);
  pcVar190 = pcVar81;
  FUN_1000960f4(pcVar81,pcVar33);
  FUN_100082720("CircumstanceEngineReadinessMetricEmitterServiceProvider",0x37,2);
  pcVar191 = pcVar190;
  FUN_100096174();
  FUN_100082720("CircumstanceEngineReadinessMetricServicesServiceProvider",0x38,2);
  pcVar192 = pcVar130;
  FUN_1000961c0();
  FUN_100082720("ComposerNotificationPresenterFactoryServiceProvider",0x33,2);
  pcVar193 = pcVar81;
  FUN_10009622c();
  FUN_100082720("ConfigMetricServiceProvider",0x1b,2);
  pcVar194 = pcVar193;
  FUN_100096278(pcVar193,pcVar13,pcVar154);
  FUN_100082720("ConfigMetricLoggerServiceProvider",0x21,2);
  pcVar195 = pcVar193;
  func_0x0001000962f8(pcVar193,pcVar194);
  FUN_100082720("ConfigMetricServicesServiceProvider",0x23,2);
  pcVar196 = pcVar190;
  FUN_1000963a4(pcVar190,pcVar193,pcVar153,pcVar58);
  FUN_100082720("ConfigRepositoryNetworkServiceProvider",0x26,2);
  pcVar197 = pcVar159;
  FUN_100096448(pcVar159,puVar1);
  FUN_100082720("CrashAppStateTrackerServiceProvider",0x23,2);
  puVar198 = puVar133;
  FUN_1000964c8();
  FUN_100082720("SCCremaLegacyBackdoorPluginSaberServiceServiceProvider",0x36,2);
  puVar199 = puVar1;
  FUN_100096534(puVar1,pcVar62,puVar198);
  FUN_100082720("SCCremaLegacyServerLauncherServiceProvider",0x2a,2);
  pcVar200 = pcVar110;
  FUN_1000965ec();
  FUN_100082720("CriticalSectionObservableServiceProvider",0x28,2);
  pcVar201 = pcVar175;
  FUN_100096658();
  FUN_100082720("CriticalSectionRegistryServiceProvider",0x26,2);
  puVar202 = puVar134;
  FUN_1000966c4();
  FUN_100082720("SCDeepLinkUnauthProcessorPluginSaberServiceServiceProvider",0x3a,2);
  pcVar203 = pcVar69;
  FUN_100096730(pcVar69,pcVar72);
  FUN_100082720("DeviceInfoServicesServiceProvider",0x21,2);
  puVar204 = puVar2;
  FUN_1000967b0(puVar2,pcVar126,pcVar129);
  FUN_100082720("DynamicLocalizedStringLookupServiceProvider",0x2b,2);
  pcVar205 = pcVar30;
  func_0x000100096848(pcVar30,pcVar69,pcVar193,puVar2);
  FUN_100082720("ExperimentStoreSaberServiceProvider",0x23,2);
  pcVar206 = pcVar205;
  FUN_1000968ec();
  FUN_100082720("ExperimentStoringSaberServiceProvider",0x25,2);
  pcVar207 = pcVar80;
  func_0x000100096938();
  FUN_100082720("GrapheneFlusherServiceProvider",0x1e,2);
  pcVar208 = pcVar207;
  FUN_100096984(pcVar207,pcVar81);
  FUN_100082720("GrapheneServiceProvider",0x17,2);
  pcVar209 = pcVar174;
  FUN_100096a04();
  FUN_100082720("HTTPMetadataServiceProvider",0x1b,2);
  puVar210 = puVar2;
  FUN_100096a50(puVar2,puVar204);
  FUN_100082720("LazyLocalizedStringLookupSaberServiceProvider",0x2d,2);
  puVar211 = puVar1;
  func_0x000100096ad0(puVar1,pcVar140);
  FUN_100082720("SCLegacyCriticalStartupCommandsEntryPointWrapperServiceProvider",0x3f,2);
  puVar212 = puVar1;
  FUN_100096b70(puVar1,pcVar115,pcVar141);
  FUN_100082720("SCLegacyWarmStartupServicesEntryPointWrapperServiceProvider",0x3b,2);
  pcVar213 = pcVar93;
  FUN_100096c28(pcVar93,pcVar94);
  FUN_100082720("SCLensUnlockerMockServicesWrapperServiceProvider",0x30,2);
  puVar214 = puVar210;
  FUN_100096cf4();
  FUN_100082720("LocalizationServicesServiceProvider",0x23,2);
  puVar215 = puVar135;
  FUN_100096d60();
  FUN_100082720("SCNGOCodeVerificationScopeServicesServiceProvider",0x31,2);
  pcVar216 = pcVar180;
  FUN_100096dcc();
  FUN_100082720("NetworkBandwidthEstimatorServicesServiceProvider",0x30,2);
  pcVar217 = pcVar29;
  FUN_100096e38(pcVar29,pcVar28,pcVar173,pcVar147);
  FUN_100082720("NetworkConnectivityMonitorServicesServiceProvider",0x31,2);
  pcVar218 = pcVar153;
  FUN_100096efc();
  FUN_100082720("NoDepSpectrumServicesServiceProvider",0x24,2);
  pcVar219 = pcVar186;
  FUN_100096f68();
  FUN_100082720("RegistrationFlowUUIDSaberServiceProvider",0x28,2);
  pcVar220 = pcVar186;
  FUN_100096fd4();
  FUN_100082720("RegistrationLastPageSaberServiceProvider",0x28,2);
  pcVar221 = pcVar219;
  FUN_100096ff0(pcVar219,pcVar220,pcVar116);
  FUN_100082720("RegistrationSessionSaberServiceProvider",0x27,2);
  pcVar222 = pcVar148;
  FUN_100097088();
  FUN_100082720("SCShakeToReportInfoProviderServiceServiceProvider",0x31,2);
  pcVar223 = pcVar209;
  FUN_1000970c4(pcVar209,pcVar82);
  FUN_100082720("SystemNetworkServiceProvider",0x1c,2);
  pcVar224 = pcVar33;
  FUN_100097144(pcVar33,pcVar34,puVar167);
  FUN_100082720("TaskManagementServicesServiceProvider",0x25,2);
  pcVar225 = pcVar159;
  FUN_1000971fc();
  FUN_100082720("UserIPInferredLocationServiceProvider",0x25,2);
  pcVar226 = pcVar225;
  func_0x000100097248();
  FUN_100082720("UserIPInferredLocationServicesServiceProvider",0x2d,2);
  puVar227 = puVar164;
  FUN_100097294();
  FUN_100082720("SCWatchDetectorServicesServiceProvider",0x26,2);
  uVar228 = uVar145;
  FUN_100097300();
  FUN_100082720("ScopeGraphLauncherServiceProvider",0x21,2);
  puVar229 = puVar1;
  func_0x00010009736c(puVar1,pcVar208);
  FUN_100082720("SnapchatAppShortcutDependencyEntryPointWrapperServiceProvider",0x3d,2);
  pcVar230 = pcVar223;
  FUN_10009740c();
  FUN_100082720("SpeedTestServiceProvider",0x18,2);
  puVar231 = puVar168;
  FUN_100097478();
  FUN_100082720("SwiftAsyncQueueServicesServiceProvider",0x26,2);
  FUN_100097504(uVar510,pcVar171,pcVar30,pcVar72);
  FUN_100082720("AppStartupViolationMonitorServiceProvider",0x29,2);
  pcVar232 = pcVar184;
  FUN_1000975a8();
  FUN_100082720("AppTerminationProviderServiceProvider",0x25,2);
  pcVar233 = pcVar184;
  func_0x0001000975f4();
  FUN_100082720("AppTerminatorServiceProvider",0x1c,2);
  pcVar234 = pcVar196;
  FUN_100097640(pcVar196,puVar2,pcVar153);
  FUN_100082720("CofSyncEventLoggerServiceProvider",0x21,2);
  puVar235 = puVar1;
  func_0x0001000976d8(puVar1,pcVar217,pcVar195,puVar47);
  FUN_100082720("ConfigRecoveryHelpersEntryPointWrapperServiceProvider",0x35,2);
  puVar236 = puVar227;
  FUN_1000977d8();
  FUN_100082720("ConvoSystemScopeGraphBridgeServicesServiceProvider",0x32,2);
  puVar237 = puVar1;
  FUN_100097844(puVar1,puVar179);
  FUN_100082720("GoogleContactPermissionInfoServicesProviderWrapperServiceProvider",0x41,2);
  pcVar238 = pcVar80;
  FUN_1000978e4(pcVar80,pcVar223);
  FUN_100082720("PlatformGrapheneServiceImplementationServiceProvider",0x34,2);
  uVar239 = uVar511;
  FUN_100097964(uVar511,pcVar203);
  FUN_100082720("MchSystemScopeGraphBridgeServicesServiceProvider",0x30,2);
  pcVar240 = pcVar46;
  FUN_100097a28(pcVar46,pcVar186);
  FUN_100082720("MmSystemScopeGraphBridgeServicesServiceProvider",0x2f,2);
  puVar241 = puVar1;
  FUN_100097aec(puVar1,pcVar223,pcVar217);
  FUN_100082720("NetworkRegulationEntryPointWrapperServiceProvider",0x31,2);
  puVar242 = puVar1;
  FUN_100097ba4(puVar1,pcVar222);
  FUN_100082720("PlayerServicesEntryPointWrapperServiceProvider",0x2e,2);
  pcVar243 = pcVar186;
  FUN_100097c44();
  FUN_100082720("RegistrationDeviceInfoServiceProvider",0x25,2);
  pcVar244 = pcVar183;
  FUN_100097cb0();
  FUN_100082720("AppInsightsMetadataServicesServiceProvider",0x2a,2);
  pcVar245 = pcVar196;
  FUN_100097d1c();
  FUN_100082720("ConfigNetworkServicesServiceProvider",0x24,2);
  pcVar246 = pcVar244;
  FUN_100097d68(pcVar244,pcVar30);
  FUN_100082720("BlizzardCrashLoggerServiceProvider",0x22,2);
  pcVar247 = pcVar244;
  func_0x000100097de8(pcVar244,puVar14);
  FUN_100082720("LastPageViewPersistenceServiceProvider",0x26,2);
  puVar248 = puVar1;
  FUN_100097e68(puVar1,pcVar186,pcVar208);
  FUN_100082720("SCDeviceCheckServiceProviderWrapperServiceProvider",0x32,2);
  puVar249 = puVar248;
  FUN_100097f54();
  FUN_100082720("SCDeviceCheckServicesServiceProvider",0x24,2);
  pcVar250 = pcVar206;
  FUN_100097fc0();
  FUN_100082720("ExperimentLoggerSaberServiceProvider",0x24,2);
  puVar251 = puVar1;
  FUN_10009802c(puVar1,pcVar222);
  FUN_100082720("SCExtensionShakeToReportInfoProviderEntryPointWrapperServiceProvider",0x44,2);
  pcVar252 = pcVar208;
  FUN_1000980f8(pcVar208,pcVar186);
  FUN_100082720("ForcedLogoutAuthenticationStateTrackerServiceProvider",0x35,2);
  pcVar253 = pcVar208;
  func_0x000100098178(pcVar208,pcVar159);
  FUN_100082720("ForcedLogoutLegacyUserStateLoggerServiceProvider",0x30,2);
  puVar254 = puVar1;
  FUN_100098224(puVar1,pcVar208,pcVar223);
  FUN_100082720("SCGrapheneNetworkEntryPointWrapperServiceProvider",0x31,2);
  puVar255 = puVar1;
  FUN_1000982dc(puVar1,pcVar224);
  FUN_100082720("SCGraphenePerformanceLoggerEntryPointWrapperServiceProvider",0x3b,2);
  puVar256 = puVar255;
  FUN_10009837c();
  FUN_100082720("SCGraphenePerformanceLoggerServicesServiceProvider",0x32,2);
  puVar257 = puVar212;
  FUN_1000983e8();
  FUN_100082720("SCLegacyWarmStartupInitiatorServicesServiceProvider",0x33,2);
  pcVar258 = pcVar244;
  FUN_100098454(pcVar244,pcVar99,pcVar100,puVar47,puVar1);
  FUN_100082720("MemoryUsageMetadataServiceProvider",0x22,2);
  puVar259 = puVar1;
  FUN_100098510(puVar1,pcVar217,pcVar226);
  FUN_100082720("SCMultiSourceCountryServiceProviderWrapperServiceProvider",0x39,2);
  puVar260 = puVar1;
  FUN_1000985fc(puVar1,pcVar223);
  FUN_100082720("SCNativeWarmupManagerServiceProviderWrapperServiceProvider",0x3a,2);
  puVar261 = puVar260;
  FUN_10009869c();
  FUN_100082720("SCNativeWarmupManagerServicesServiceProvider",0x2c,2);
  puVar262 = puVar1;
  func_0x000100098708(puVar1,pcVar217);
  FUN_100082720("SCNetworkConnectivityAnnouncerServiceProviderWrapperServiceProvider",0x43,2);
  puVar263 = puVar262;
  FUN_1000987a8();
  FUN_100082720("SCNetworkConnectivityAnnouncerServicesServiceProvider",0x35,2);
  puVar264 = puVar242;
  FUN_100098814();
  FUN_100082720("SCPlayerServicesServiceProvider",0x1f,2);
  pcVar265 = pcVar243;
  FUN_1000988a0();
  FUN_100082720("UnauthenticatedRegistrationDeviceInfoServicesServiceProvider",0x3c,2);
  puVar266 = puVar167;
  FUN_1000988dc(puVar167,puVar2,uVar511,pcVar172,pcVar173,pcVar8,pcVar234,pcVar29,pcVar183,pcVar190,
                pcVar193,pcVar194,pcVar196,pcVar58,pcVar59,pcVar69,pcVar205,pcVar206,pcVar113,
                pcVar225,pcVar159);
  FUN_100082720("ConfigurationScopedFactoryServiceProvider",0x29,2);
  puVar267 = puVar257;
  FUN_100098adc(puVar257,pcVar224);
  FUN_100082720("StartSystemScopeGraphBridgeServicesServiceProvider",0x32,2);
  puVar268 = puVar266;
  FUN_100098ba0();
  FUN_100082720("ConfigurationServicesImplementationServiceProvider",0x32,2);
  puVar269 = puVar237;
  FUN_100098c0c();
  FUN_100082720("GoogleContactPermissionInfoServicesServiceProvider",0x32,2);
  puVar270 = puVar256;
  FUN_100098c98(puVar256,pcVar208);
  FUN_100082720("MetricSystemScopeGraphBridgeServicesServiceProvider",0x33,2);
  puVar271 = puVar1;
  FUN_100098d5c(puVar1,pcVar250,pcVar195,puVar47);
  FUN_100082720("SCAppStartExperimentReaderExperimentLoggerEntryPointWrapperServiceProvider",0x4a,2)
  ;
  puVar272 = puVar268;
  FUN_100098e5c();
  FUN_100082720("SystemScopeCircumstanceEngineServiceProvider",0x2c,2);
  pcVar273 = pcVar250;
  FUN_100098e78(pcVar250,pcVar69,puVar272,pcVar81);
  FUN_100082720("ClientFeatureGatingValueRetrieverServiceProvider",0x30,2);
  puVar274 = puVar268;
  FUN_100098f58();
  FUN_100082720("SystemScopeConfigManagerServiceProvider",0x27,2);
  puVar275 = puVar274;
  func_0x000100098f74(puVar274,pcVar8);
  FUN_100082720("ConfigManagerServicesServiceProvider",0x24,2);
  pcVar276 = pcVar159;
  FUN_100099018(pcVar159,puVar272);
  FUN_100082720("LastLoginInfoRepositorySaberServiceProvider",0x2b,2);
  puVar277 = puVar272;
  FUN_1000990bc();
  FUN_100082720("LazyCircumstanceEngineProxyServiceProvider",0x2a,2);
  puVar278 = puVar1;
  FUN_100099108(puVar1,puVar47,pcVar114,puVar263);
  FUN_100082720("SCLegacyPropertyHandlerEntryPointWrapperServiceProvider",0x37,2);
  puVar279 = puVar278;
  FUN_1000991cc();
  FUN_100082720("SCLegacyPropertyHandlerServicesServiceProvider",0x2e,2);
  pcVar280 = pcVar159;
  func_0x000100099238(pcVar159,puVar272);
  FUN_100082720("LogInSessionServiceProvider",0x1b,2);
  pcVar281 = pcVar276;
  FUN_1000992b8(pcVar276,pcVar280);
  FUN_100082720("LogInSessionSaberServiceProvider",0x20,2);
  puVar282 = puVar272;
  FUN_1000992e0();
  FUN_100082720("ManifestRewriterServiceProvider",0x1f,2);
  puVar283 = puVar259;
  FUN_10009932c();
  FUN_100082720("SCMultiSourceCountryProviderServicesServiceProvider",0x33,2);
  puVar284 = puVar272;
  func_0x000100099398(puVar272,puVar47);
  FUN_100082720("ContentManagerCacheControllerServiceProvider",0x2c,2);
  puVar285 = puVar282;
  FUN_100099444();
  FUN_100082720("StreamingServiceProvider",0x18,2);
  puVar286 = puVar275;
  FUN_1000994b0();
  FUN_100082720("SCShakeToReportScopedFactoryServiceProvider",0x2b,2);
  puVar287 = puVar2;
  FUN_10009951c(puVar2,puVar272);
  FUN_100082720("SystemConfigurationServiceProvider",0x22,2);
  pcVar288 = pcVar186;
  FUN_10009959c(pcVar186,puVar287,puVar47);
  FUN_100082720("SystemLaunchTabCacheServiceProvider",0x23,2);
  puVar289 = puVar2;
  FUN_100099634(puVar2,puVar272);
  FUN_100082720("BlizzardClientIdProviderSaberServiceProvider",0x2c,2);
  puVar290 = puVar14;
  func_0x0001000996b4(puVar14,puVar272);
  FUN_100082720("DeckServiceImplementationServiceProvider",0x28,2);
  puVar291 = puVar285;
  FUN_100099734();
  FUN_100082720("PlaybackSystemScopeGraphBridgeServicesServiceProvider",0x35,2);
  puVar292 = puVar272;
  FUN_1000997a0(puVar272,puVar2);
  FUN_100082720("RTUSConfigServiceImplementationServiceProvider",0x2e,2);
  puVar293 = puVar272;
  FUN_100099820();
  FUN_100082720("ApplicationCircumstanceEngineServicesServiceProvider",0x34,2);
  puVar294 = puVar272;
  func_0x00010009986c();
  FUN_100082720("AudioSessionConfigurationFactorySaberServiceProvider",0x34,2);
  puVar295 = puVar1;
  FUN_1000998b8(puVar1,puVar293);
  FUN_100082720("SCAuthenticationWatchdogFactoryServiceProviderWrapperServiceProvider",0x44,2);
  puVar296 = puVar295;
  FUN_100099958();
  FUN_100082720("SCAuthenticationWatchdogFactoryServicesServiceProvider",0x36,2);
  puVar297 = puVar289;
  FUN_1000999c4();
  FUN_100082720("BlizzardClientIdProviderServicesServiceProvider",0x2f,2);
  pcVar298 = pcVar273;
  FUN_100099a30();
  FUN_100082720("ClientFeatureGatingServicesServiceProvider",0x2a,2);
  puVar299 = puVar290;
  FUN_100099a7c();
  FUN_100082720("ValdiActionSheetPresenterFactoryServiceProvider",0x2f,2);
  puVar300 = puVar290;
  func_0x000100099a98();
  FUN_100082720("ComposerAlertPresenterFactoryServiceProvider",0x2c,2);
  puVar301 = puVar300;
  FUN_100099ab4(puVar300,puVar299,pcVar192);
  FUN_100082720("ValdiCoreUIServicesServiceProvider",0x22,2);
  pcVar302 = pcVar194;
  FUN_100099b4c(pcVar194,puVar272,puVar277,pcVar9,puVar2);
  FUN_100082720("CompositeConfigSaberServiceProvider",0x23,2);
  puVar303 = puVar284;
  FUN_100099c28();
  FUN_100082720("ContentDeliveryCacheControllerServicesServiceProvider",0x35,2);
  puVar304 = puVar290;
  func_0x000100099c74();
  FUN_100082720("DeckRootContainerServicesServiceProvider",0x28,2);
  puVar305 = puVar290;
  func_0x000100099cc0();
  FUN_100082720("DeckServicesServiceProvider",0x1b,2);
  puVar306 = puVar1;
  FUN_100099d0c(puVar1,pcVar208,puVar293);
  FUN_100082720("SCLensDataLoggerServiceProviderWrapperServiceProvider",0x35,2);
  puVar307 = puVar306;
  FUN_100099dc4();
  FUN_100082720("SCLensDataLoggerServicesServiceProvider",0x27,2);
  puVar308 = puVar292;
  FUN_100099e30();
  FUN_100082720("RTUSConfigServiceProvider",0x19,2);
  puVar309 = puVar286;
  func_0x000100099e7c();
  FUN_100082720("SCShakeToReportScopeServicesServiceProvider",0x2b,2);
  FUN_1000285a8(0x112d9d2e8,&UNK_10d93daa0);
  puVar311 = &UNK_1103b7058;
  func_0x000107c613fc(&UNK_1103b7058,0x28,7);
  *(undefined8 **)(puVar311 + 0x10) = puVar1;
  *(char **)(puVar311 + 0x18) = pcVar217;
  *(undefined8 **)(puVar311 + 0x20) = puVar293;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(pcVar217);
  func_0x000107c6157c(puVar293);
  puVar310 = &UNK_101434328;
  FUN_1000823a8(&UNK_101434328,puVar311);
  FUN_100082720("SCSpectaclesWiFiNetworksControllerServiceProviderWrapperServiceProvider",0x47,2);
  FUN_1000285a8(0x112d9d2f0,&UNK_10d93da70);
  func_0x000107c6157c(puVar310);
  puVar311 = &UNK_101434334;
  FUN_1000823a8(&UNK_101434334,puVar310);
  FUN_100082720("SCSpectaclesWiFiNetworksServicesServiceProvider",0x2f,2);
  puVar312 = puVar287;
  FUN_100099f08();
  FUN_100082720("SystemConfigurationServicesServiceProvider",0x2a,2);
  pcVar313 = pcVar288;
  FUN_100099f74();
  FUN_100082720("SystemLaunchTabSaberServiceProvider",0x23,2);
  puVar314 = puVar1;
  FUN_100099fe0(puVar1,puVar293);
  FUN_100082720("SCTopLevelFeatureScopeConfigLoaderServiceProviderWrapperServiceProvider",0x47,2);
  puVar315 = puVar314;
  FUN_10009a080();
  FUN_100082720("SCTopLevelFeatureScopeConfigProviderServicesServiceProvider",0x3b,2);
  puVar316 = puVar293;
  func_0x00010009a0ec(puVar293,puVar283);
  FUN_100082720("SCCountryCodePickerScopedFactoryServiceProvider",0x2f,2);
  puVar317 = puVar304;
  FUN_10009a190(puVar304,puVar305,puVar68,puVar112);
  FUN_100082720("ShuSystemScopeGraphBridgeServicesServiceProvider",0x30,2);
  pcVar318 = pcVar16;
  FUN_10009a254(pcVar16,pcVar13,uVar510,uVar136,puVar2,puVar290,puVar14,pcVar30,uVar228,pcVar238);
  FUN_100082720("StartupInfoServiceImplementationServiceProvider",0x2f,2);
  pcVar319 = pcVar318;
  FUN_10009a36c();
  FUN_100082720("StartupServicesServiceProvider",0x1e,2);
  puVar320 = puVar1;
  FUN_10009a3d8(puVar1,pcVar298,puVar293);
  FUN_100082720("AuthenticationExperimentServiceProviderWrapperServiceProvider",0x3d,2);
  puVar321 = puVar320;
  FUN_10009a4c4();
  FUN_100082720("AuthenticationExperimentServicesServiceProvider",0x2f,2);
  puVar322 = puVar312;
  FUN_10009a550(puVar312,puVar7);
  FUN_100082720("CameraHardwareServicesExperimentsServiceProvider",0x30,2);
  puVar323 = puVar47;
  FUN_10009a5f0(puVar47,puVar293,pcVar191,pcVar298,pcVar302,puVar275,pcVar195,pcVar245,pcVar250,
                puVar279,pcVar114);
  FUN_100082720("CofSystemScopeGraphBridgeServicesServiceProvider",0x30,2);
  puVar324 = puVar1;
  FUN_10009a738(puVar1,pcVar186,puVar322);
  FUN_100082720("DiscoverySessionDevicesServiceProvider",0x26,2);
  puVar325 = puVar1;
  func_0x00010009a7b8(puVar1,puVar293);
  FUN_100082720("HeliosFeatureGateEntryPointWrapperServiceProvider",0x31,2);
  pcVar326 = pcVar88;
  FUN_10009a858(pcVar88,puVar307,pcVar90,puVar92,pcVar213);
  FUN_100082720("LensSystemScopeGraphBridgeServicesServiceProvider",0x31,2);
  pcVar327 = pcVar313;
  FUN_10009a934();
  FUN_100082720("MauSystemScopeGraphBridgeServicesServiceProvider",0x30,2);
  pcVar328 = pcVar298;
  FUN_10009a9a0();
  FUN_100082720("ActivationDeviceIdHoldoutStateProviderSaberServiceProvider",0x3a,2);
  puVar329 = puVar316;
  func_0x00010009a9ec();
  FUN_100082720("SCCountryCodePickerScopeServicesServiceProvider",0x2f,2);
  pcVar330 = pcVar108;
  FUN_10009aa58(pcVar108,pcVar30,pcVar318,puVar2,pcVar72,puVar272,puVar289,puVar292,pcVar104,pcVar17
                ,pcVar244,pcVar52);
  FUN_100082720("LegacyBlizzardSaberServiceProvider",0x22,2);
  pcVar331 = pcVar330;
  FUN_10009ab84();
  FUN_100082720("LegacyBlizzardServicesServiceProvider",0x25,2);
  puVar332 = puVar312;
  FUN_10009abd0(puVar312,pcVar318);
  FUN_100082720("ManagedCaptureSessionImplServiceProvider",0x28,2);
  pcVar333 = pcVar330;
  FUN_10009ac74();
  FUN_100082720("SystemBlizzardSaberServiceProvider",0x22,2);
  pcVar334 = pcVar33;
  FUN_10009acc0(pcVar33,pcVar187,pcVar276,pcVar280,pcVar219,pcVar122,pcVar333);
  FUN_100082720("ActivationNetworkLoggingImplSaberServiceProvider",0x30,2);
  pcVar335 = pcVar334;
  FUN_10009adf4();
  FUN_100082720("ActivationNetworkLoggingServicesServiceProvider",0x2f,2);
  puVar336 = puVar272;
  FUN_10009ae60(puVar272,pcVar333);
  FUN_100082720("InputValidationServiceProvider",0x1e,2);
  puVar337 = puVar332;
  FUN_10009af2c(puVar332,puVar322);
  FUN_100082720("ManagedCaptureSessionServiceProvider",0x24,2);
  pcVar338 = pcVar328;
  FUN_10009af50();
  FUN_100082720("ActivationDeviceIdHoldoutServicesServiceProvider",0x30,2);
  pcVar339 = pcVar208;
  FUN_10009af9c(pcVar208,puVar47,pcVar265,pcVar45,pcVar331,puVar272);
  FUN_100082720("ApplicationLoggerServiceProvider",0x20,2);
  pcVar340 = pcVar333;
  FUN_10009b064(pcVar333,pcVar54);
  FUN_100082720("CameraSystemBlizzardLoggingServiceProvider",0x2a,2);
  puVar341 = puVar1;
  FUN_10009b0e4(puVar1,puVar272,pcVar333,pcVar81,puVar284,pcVar103,puVar282,puVar2,pcVar48);
  FUN_100082720("ContentDeliveryServiceProvider",0x1e,2);
  puVar342 = puVar272;
  FUN_10009b24c(puVar272,pcVar333,pcVar103);
  FUN_100082720("ContentObjectResolverServiceProvider",0x24,2);
  pcVar343 = pcVar33;
  FUN_10009b318(pcVar33,puVar47,pcVar333);
  FUN_100082720("AudioSessionServiceProvider",0x1b,2);
  puVar344 = puVar272;
  func_0x00010009b3b0(puVar272,puVar282,puVar284,puVar342);
  FUN_100082720("ContentFetcherServiceProvider",0x1d,2);
  puVar345 = puVar341;
  FUN_10009b490(puVar341,pcVar48);
  FUN_100082720("SimpleContentFetcherServiceProvider",0x23,2);
  pcVar346 = pcVar333;
  FUN_10009b53c();
  FUN_100082720("SystemBlizzardServicesServiceProvider",0x25,2);
  puVar347 = puVar1;
  FUN_10009b5a8(puVar1,pcVar333,puVar47);
  FUN_100082720("SnapTokenStorageServiceProvider",0x1f,2);
  pcVar348 = pcVar339;
  FUN_10009b660();
  FUN_100082720("SystemApplicationLoggerServiceProvider",0x26,2);
  puVar349 = puVar1;
  FUN_10009b6cc(puVar1,pcVar346,puVar293);
  FUN_100082720("CAIDNotificationEntryPointWrapperServiceProvider",0x30,2);
  puVar350 = puVar1;
  FUN_10009b7b8(puVar1,pcVar346,puVar293);
  FUN_100082720("CAIDServiceProviderWrapperServiceProvider",0x29,2);
  puVar351 = puVar350;
  FUN_10009b8a4();
  FUN_100082720("CloudAccountIdServicesServiceProvider",0x25,2);
  pcVar352 = pcVar346;
  FUN_10009b930();
  FUN_100082720("GracefulTerminationMetricsLoggerServiceProvider",0x2f,2);
  pcVar353 = pcVar159;
  FUN_10009b97c(pcVar159,pcVar253,puVar347);
  FUN_100082720("LegacyUserSessionRepositoryServiceProvider",0x2a,2);
  pcVar354 = pcVar208;
  func_0x00010009ba14(pcVar208,pcVar159,puVar347);
  FUN_100082720("PreferencesBasedUserSessionRepositoryServiceProvider",0x34,2);
  puVar355 = puVar1;
  func_0x00010009baac(puVar1,pcVar208,pcVar346);
  FUN_100082720("SCApplicationInstallLoggerServiceProviderWrapperServiceProvider",0x3f,2);
  puVar356 = puVar355;
  FUN_10009bb98();
  FUN_100082720("SCApplicationInstallLoggerServicesServiceProvider",0x31,2);
  pcVar357 = pcVar343;
  func_0x00010009bc04(pcVar343,puVar294);
  FUN_100082720("AudioSessionServicesServiceProvider",0x23,2);
  pcVar358 = pcVar54;
  FUN_10009bc84(pcVar54,pcVar340,pcVar55);
  FUN_100082720("CameraLoggingServicesServiceProvider",0x24,2);
  pcVar359 = pcVar358;
  func_0x00010009bd1c(pcVar358,pcVar159,puVar167,puVar322);
  FUN_100082720("ManagedCaptureDeviceLoggerServiceProvider",0x29,2);
  puVar360 = puVar1;
  func_0x00010009bdc0(puVar1,pcVar346,pcVar189,pcVar203);
  FUN_100082720("SCDurableDeviceIDLoggerServiceProviderWrapperServiceProvider",0x3c,2);
  puVar361 = puVar360;
  FUN_10009bec0();
  FUN_100082720("SCDurableDeviceIDLoggerServicesServiceProvider",0x2e,2);
  puVar362 = puVar1;
  FUN_10009bf2c(puVar1,pcVar208,pcVar346,puVar293,puVar47);
  FUN_100082720("SCFideliusClientInitEntryPointWrapperServiceProvider",0x34,2);
  puVar363 = puVar362;
  FUN_10009c008();
  FUN_100082720("SCFideliusClientInitServicesServiceProvider",0x2b,2);
  puVar364 = puVar362;
  FUN_10009c094();
  FUN_100082720("SCFideliusLoggingServicesServiceProvider",0x28,2);
  puVar365 = puVar362;
  func_0x00010009c0b0();
  FUN_100082720("SCFideliusStorageServicesServiceProvider",0x28,2);
  puVar366 = puVar1;
  FUN_10009c0cc(puVar1,pcVar265,pcVar208,pcVar281,pcVar221,pcVar346,pcVar189);
  FUN_100082720("SCIdentityLoggerServiceProviderWrapperServiceProvider",0x35,2);
  puVar367 = puVar366;
  FUN_10009c220();
  FUN_100082720("SCIdentityLoggerServicesServiceProvider",0x27,2);
  puVar368 = puVar342;
  func_0x00010009c28c(puVar342,puVar344);
  FUN_100082720("BufferedContentFetcherServiceProvider",0x25,2);
  puVar369 = puVar1;
  FUN_10009c338(puVar1,pcVar177,pcVar346,pcVar208,pcVar49,puVar50,puVar305);
  FUN_100082720("SCPageLoadMetricServiceProviderWrapperServiceProvider",0x35,2);
  puVar370 = puVar369;
  FUN_10009c438();
  FUN_100082720("SCPageLoadMetricServicesServiceProvider",0x27,2);
  puVar371 = puVar1;
  FUN_10009c4a4(puVar1,puVar293,pcVar186,pcVar208,pcVar346);
  FUN_100082720("SCPasswordHashRepositoryImplServiceProviderWrapperServiceProvider",0x41,2);
  puVar372 = puVar371;
  FUN_10009c5c4();
  FUN_100082720("SCPasswordHashStorageServicesServiceProvider",0x2c,2);
  pcVar373 = pcVar346;
  FUN_10009c630();
  FUN_100082720("QuickPerfLoggerServiceProvider",0x1e,2);
  pcVar374 = pcVar348;
  FUN_10009c67c();
  FUN_100082720("SystemApplicationLoggerServicesServiceProvider",0x2e,2);
  puVar375 = puVar272;
  FUN_10009c6b8(puVar272,pcVar103,puVar282,puVar341,puVar345,puVar284,puVar368,puVar342,puVar47);
  FUN_100082720("SystemContentDeliveryServicesServiceProvider",0x2c,2);
  puVar376 = puVar351;
  FUN_10009c7bc(puVar351,puVar372,puVar347);
  FUN_100082720("SemcSystemScopeGraphBridgeServicesServiceProvider",0x31,2);
  puVar377 = puVar176;
  FUN_10009c874(puVar176,uVar509,pcVar51,pcVar43,pcVar35,puVar329,puVar198,pcVar36,puVar202,puVar361
                ,pcVar37,pcVar38,pcVar39,pcVar40,puVar215,pcVar115,puVar311,pcVar41,pcVar42,pcVar165
               );
  FUN_100082720("SystemScopeGraphBridgeServicesServiceProvider",0x2d,2);
  puVar378 = puVar1;
  FUN_10009ca58(puVar1,pcVar81,pcVar207,puVar293,pcVar373);
  FUN_100082720("BackgroundTaskRegistrationServiceProvider",0x29,2);
  puVar379 = puVar378;
  FUN_10009cb14();
  FUN_100082720("BackgroundTaskRegistrationServicesNativeSaberServiceProvider",0x3c,2);
  puVar380 = puVar332;
  FUN_10009cb80(puVar332,pcVar71,pcVar358,pcVar27);
  FUN_100082720("CameraHardwareResourceServiceProvider",0x25,2);
  puVar381 = puVar332;
  FUN_10009cc24(puVar332,puVar322,pcVar27,puVar337,puVar7,pcVar359,puVar324,pcVar319,puVar2);
  FUN_100082720("CaptureDeviceManagerImplServiceProvider",0x27,2);
  puVar382 = puVar303;
  FUN_10009cd30(puVar303,pcVar105,pcVar106,puVar375,pcVar123,puVar125);
  FUN_100082720("CmSystemScopeGraphBridgeServicesServiceProvider",0x2f,2);
  puVar383 = puVar50;
  FUN_10009ce18(puVar50,puVar297,pcVar331,pcVar107,pcVar218,puVar308,pcVar374,pcVar346);
  FUN_100082720("DatpSystemScopeGraphBridgeServicesServiceProvider",0x31,2);
  pcVar384 = pcVar353;
  FUN_10009cf24(pcVar353,pcVar354,pcVar208);
  FUN_100082720("MigrationUserSessionRepositoryServiceProvider",0x2d,2);
  uVar385 = uVar508;
  func_0x00010009cfbc(uVar508,puVar2,pcVar354,pcVar384);
  FUN_100082720("MutableUserSessionRepositoryServiceProvider",0x2b,2);
  uVar386 = uVar385;
  FUN_10009d060();
  FUN_100082720("MutableUserSessionRepositoryServicesServiceProvider",0x33,2);
  puVar387 = puVar363;
  FUN_10009d0cc(puVar363,puVar364,puVar365);
  FUN_100082720("PrivengSystemScopeGraphBridgeServicesServiceProvider",0x34,2);
  puVar388 = puVar1;
  FUN_10009d184(puVar1,pcVar374);
  FUN_100082720("SCApplicationLoggerEventObserverEntryPointWrapperServiceProvider",0x40,2);
  pcVar389 = pcVar357;
  FUN_10009d224();
  FUN_100082720("AudioCaptureSessionProvidingServiceProvider",0x2b,2);
  puVar390 = puVar1;
  FUN_10009d270(puVar1,pcVar357);
  FUN_100082720("SCAudioSessionConfiguratorEntryPointWrapperServiceProvider",0x3a,2);
  puVar391 = puVar380;
  FUN_10009d33c(puVar380,puVar337);
  FUN_100082720("CameraViewfinderRenderTargetImplServiceProvider",0x2f,2);
  pcVar392 = pcVar56;
  FUN_10009d3bc(pcVar56,puVar2,puVar375,pcVar223,pcVar186);
  FUN_100082720("ComposerFrameworkProviderServiceProvider",0x28,2);
  pcVar393 = pcVar392;
  FUN_10009d478();
  FUN_100082720("ValdiImageLoaderRegistryServiceProvider",0x27,2);
  pcVar394 = pcVar392;
  func_0x00010009d4c4();
  FUN_100082720("ValdiVideoLoaderRegistryServiceProvider",0x27,2);
  pcVar395 = pcVar186;
  FUN_10009d510(pcVar186,puVar372,pcVar346,pcVar208,pcVar122,pcVar195,pcVar203,puVar1);
  FUN_100082720("OneTapLoginMultiAccountRepositoriesServiceProvider",0x32,2);
  uVar396 = uVar385;
  FUN_10009d620();
  FUN_100082720("UserSessionRepositoryServiceProvider",0x24,2);
  uVar397 = uVar396;
  FUN_10009d68c();
  FUN_100082720("UserSessionRepositoryServicesServiceProvider",0x2c,2);
  puVar398 = puVar391;
  FUN_10009d6c8();
  FUN_100082720("CameraViewfinderRenderTargetServiceProvider",0x2b,2);
  puVar399 = puVar381;
  func_0x00010009d714();
  FUN_100082720("CaptureDeviceManagerServiceProvider",0x23,2);
  puVar400 = puVar380;
  FUN_10009d760(puVar380,puVar399);
  FUN_100082720("DeviceSubjectAreaHandlerServiceProvider",0x27,2);
  puVar401 = puVar380;
  func_0x00010009d7e0(puVar380,puVar399);
  FUN_100082720("ManagedDeviceCapacityAnalyzerServiceProvider",0x2c,2);
  pcVar402 = pcVar389;
  FUN_10009d860();
  FUN_100082720("AudioCaptureServicesServiceProvider",0x23,2);
  puVar403 = puVar380;
  FUN_10009d8ac(puVar380,puVar47,pcVar177,puVar391);
  FUN_100082720("CameraViewfinderRenderAgentImplServiceProvider",0x2e,2);
  pcVar404 = pcVar392;
  FUN_10009d950(pcVar392,pcVar393,pcVar394,pcVar56,puVar57);
  FUN_100082720("ComposerFrameworkServicesServiceProvider",0x28,2);
  puVar405 = puVar403;
  FUN_10009da0c();
  FUN_100082720("CameraViewfinderRenderAgentServiceProvider",0x2a,2);
  puVar406 = puVar1;
  FUN_10009da58(puVar1,pcVar404,pcVar181);
  FUN_100082720("ComposerSystemSessionImageLoadersRegistryEntryPointWrapperServiceProvider",0x49,2);
  pcVar407 = pcVar402;
  FUN_10009db10(pcVar402,pcVar357,pcVar71,puVar264);
  FUN_100082720("MeSystemScopeGraphBridgeServicesServiceProvider",0x2f,2);
  puVar408 = puVar380;
  FUN_10009dbd4(puVar380,puVar337,puVar401,puVar400,puVar7,puVar381,puVar322,puVar332,pcVar159,
                pcVar16,puVar2,puVar312,puVar5,puVar405);
  FUN_100082720("CameraRequestHandlerServiceProvider",0x23,2);
  puVar409 = puVar408;
  FUN_10009dd20();
  FUN_100082720("CameraRequestHandlerServicesImplementationServiceProvider",0x39,2);
  puVar410 = puVar405;
  FUN_10009dd6c(puVar405,puVar398);
  FUN_100082720("CameraViewfinderServicesServiceProvider",0x27,2);
  puVar411 = puVar409;
  FUN_10009de0c(puVar409,puVar380,puVar337,puVar401,pcVar357,pcVar402,pcVar159,puVar312,pcVar16,
                puVar2,puVar399,puVar5,pcVar313);
  FUN_100082720("CameraHardwareServicesAPIImplServiceProvider",0x2c,2);
  puVar412 = puVar411;
  FUN_10009df48();
  FUN_100082720("CameraHardwareServicesAPIServiceProvider",0x28,2);
  puVar413 = puVar412;
  FUN_10009df94(puVar412,puVar380,puVar337,puVar7,pcVar6,pcVar27,puVar399,puVar401,puVar400);
  FUN_100082720("CameraHardwareServicesServiceProvider",0x25,2);
  puVar414 = puVar1;
  FUN_10009e0b8(puVar1,puVar413,pcVar222);
  FUN_100082720("SCCameraS2REntryPointWrapperServiceProvider",0x2b,2);
  puVar415 = puVar1;
  FUN_10009e170(puVar1,puVar409,puVar413,puVar312,puVar370,pcVar177);
  FUN_100082720("SCCameraStabilityServiceProviderWrapperServiceProvider",0x36,2);
  puVar416 = puVar415;
  FUN_10009e258();
  FUN_100082720("SCCameraStabilityServicesServiceProvider",0x28,2);
  puVar417 = puVar1;
  FUN_10009e2c4(puVar1,puVar413,puVar416,pcVar358,pcVar177,pcVar186,puVar312,pcVar313,puVar47,
                puVar347,pcVar319,uVar509);
  FUN_100082720("SCLegacyCameraStartupCommandsEntryPointWrapperServiceProvider",0x3d,2);
  puVar418 = puVar417;
  FUN_10009e418();
  FUN_100082720("SCLegacyCameraStartupCommandsServicesServiceProvider",0x34,2);
  puVar419 = puVar1;
  FUN_10009e484(puVar1,pcVar357,puVar413,pcVar346);
  FUN_100082720("SCLegacyPermissionRequestEntryPointWrapperServiceProvider",0x39,2);
  puVar420 = puVar419;
  FUN_10009e548();
  FUN_100082720("SCLegacyPermissionRequestServicesServiceProvider",0x30,2);
  puVar421 = puVar1;
  FUN_10009e5b4(puVar1,pcVar122,pcVar208,puVar418,puVar293,pcVar319);
  FUN_100082720("SCMarkAppLaunchStartEntryPointWrapperServiceProvider",0x34,2);
  puVar422 = puVar1;
  FUN_10009e69c(puVar1,pcVar122,pcVar208,puVar418,puVar293,pcVar319);
  FUN_100082720("SCTweakFunctionalitySetupEntryPointWrapperServiceProvider",0x39,2);
  puVar423 = puVar1;
  FUN_10009e784(puVar1,pcVar122,pcVar208,puVar418,puVar293,pcVar319);
  FUN_100082720("SCUserTraceLaunchLogEntryPointWrapperServiceProvider",0x34,2);
  puVar424 = puVar413;
  FUN_10009e86c(puVar413,pcVar358,puVar409,puVar416,puVar410,puVar418,pcVar119,puVar312);
  FUN_100082720("CameraSystemScopeGraphBridgeServicesServiceProvider",0x33,2);
  puVar425 = puVar1;
  FUN_10009e978(puVar1,puVar420);
  FUN_100082720("NotificationPermissionServicesImplEntryPointWrapperServiceProvider",0x42,2);
  pcVar426 = pcVar29;
  FUN_10009ea18(pcVar29,pcVar333,puVar167,puVar413,puVar380,puVar1);
  FUN_100082720("BatteryLoggingServicesImplementationServiceProvider",0x33,2);
  puVar427 = puVar1;
  FUN_10009eb00(puVar1,pcVar122,pcVar208,pcVar319,puVar418,puVar293);
  FUN_100082720("SCFinishLaunchLoggingEntryPointWrapperServiceProvider",0x35,2);
  pcVar428 = pcVar346;
  FUN_10009ebe8(pcVar346,pcVar174,pcVar426,pcVar217);
  FUN_100082720("GRPCEventLoggerServiceProvider",0x1e,2);
  puVar429 = puVar1;
  FUN_10009ec80(puVar1,pcVar122,pcVar208,uVar509,puVar418,puVar293,uVar397,pcVar115);
  FUN_100082720("SCHandleProtectedDataLaunchEntryPointWrapperServiceProvider",0x3b,2);
  puVar430 = puVar1;
  FUN_10009ed8c(puVar1,pcVar122,pcVar208,pcVar319,puVar418,puVar293);
  FUN_100082720("SCHeadlessLaunchCompletedEntryPointWrapperServiceProvider",0x39,2);
  puVar431 = puVar1;
  FUN_10009ee74(puVar1,pcVar122,pcVar208,puVar418,puVar293);
  FUN_100082720("SCInitializeAppStateEntryPointWrapperServiceProvider",0x34,2);
  puVar432 = puVar1;
  FUN_10009ef50(puVar1,pcVar122,pcVar208,puVar418,puVar293);
  FUN_100082720("SCInitializeAuthTokenManagerEntryPointWrapperServiceProvider",0x3c,2);
  puVar433 = puVar1;
  FUN_10009f02c(puVar1,pcVar122,pcVar208,puVar418,puVar293);
  FUN_100082720("SCInitializeNativeClientPlatformEntryPointWrapperServiceProvider",0x40,2);
  puVar434 = puVar425;
  FUN_10009f108();
  FUN_100082720("SCNotificationPermissionServicesServiceProvider",0x2f,2);
  pcVar435 = pcVar160;
  func_0x00010009f174(pcVar160,pcVar428);
  FUN_100082720("SystemUnifiedGRPCSaberServiceProvider",0x25,2);
  puVar436 = puVar2;
  FUN_10009f220(puVar2,pcVar426);
  FUN_100082720("CoreLocationSaberServiceProvider",0x20,2);
  puVar437 = puVar436;
  func_0x00010009f2a0(puVar436,pcVar159);
  FUN_100082720("NextGenLocationSystemServicesServiceProvider",0x2c,2);
  pcVar438 = pcVar29;
  FUN_10009f340(pcVar29,pcVar333,pcVar46,pcVar426,puVar1);
  FUN_100082720("BackgroundTaskWrapperServiceProvider",0x24,2);
  pcVar439 = pcVar438;
  FUN_10009f3fc();
  FUN_100082720("BackgroundExecutionServicesServiceProvider",0x2a,2);
  puVar440 = puVar1;
  FUN_10009f448(puVar1,pcVar158,pcVar29,pcVar207,pcVar81,pcVar439,puVar272,pcVar110,pcVar373);
  FUN_100082720("JobSchedulerServiceProvider",0x1b,2);
  puVar441 = puVar437;
  FUN_10009f54c(puVar437,pcVar426,puVar272,pcVar159,puVar1,puVar2);
  FUN_100082720("SystemLocationServicesServiceProvider",0x25,2);
  puVar442 = puVar1;
  FUN_10009f614(puVar1,pcVar439);
  FUN_100082720("SCSystemNetworkTraceServiceProviderWrapperServiceProvider",0x39,2);
  puVar443 = puVar440;
  FUN_10009f6b4();
  FUN_100082720("SystemJobSchedulerServiceProvider",0x21,2);
  pcVar444 = pcVar174;
  FUN_10009f720(pcVar174,puVar293,pcVar216,pcVar426,pcVar217,pcVar173,pcVar346,pcVar439,pcVar208,
                puVar441,puVar290,pcVar318,pcVar10,pcVar223,pcVar230,pcVar302);
  FUN_100082720("SystemNetworkServicesDepsServiceProvider",0x28,2);
  pcVar445 = pcVar177;
  FUN_10009f8b4(pcVar177,pcVar439,pcVar426,pcVar101,pcVar319);
  FUN_100082720("ClientresSystemScopeGraphBridgeServicesServiceProvider",0x36,2);
  puVar446 = puVar437;
  FUN_10009f990(puVar437,puVar441);
  FUN_100082720("MapsSystemScopeGraphBridgeServicesServiceProvider",0x31,2);
  puVar447 = puVar2;
  FUN_10009fa54(puVar2,pcVar244,pcVar153,pcVar223,puVar272,pcVar180,pcVar29,pcVar99,pcVar86,pcVar61,
                pcVar97,pcVar444);
  FUN_100082720("CrashLoggerServiceProvider",0x1a,2);
  puVar448 = puVar447;
  FUN_10009fba0(puVar447,pcVar30,puVar2,pcVar61);
  FUN_100082720("MetricKitServiceProvider",0x18,2);
  puVar449 = puVar442;
  FUN_10009fc64();
  FUN_100082720("SCNetworkTraceServicesServiceProvider",0x25,2);
  puVar450 = puVar443;
  FUN_10009fcd0();
  FUN_100082720("SystemJobSchedulerServicesServiceProvider",0x29,2);
  pcVar451 = pcVar159;
  FUN_10009fd0c(pcVar159,puVar447,puVar2,puVar1,pcVar97);
  FUN_100082720("AnrThreadMonitoringServiceProvider",0x22,2);
  pcVar452 = pcVar451;
  FUN_10009fdc8();
  FUN_100082720("ThreadMonitoringServicesServiceProvider",0x27,2);
  pcVar453 = pcVar174;
  FUN_10009fe14(pcVar174,puVar77,puVar261,pcVar216,puVar263,pcVar217,puVar449,pcVar223,pcVar435);
  FUN_100082720("CntSystemScopeGraphBridgeServicesServiceProvider",0x30,2);
  pcVar454 = pcVar233;
  FUN_10009ff38(pcVar233,puVar450,puVar1,puVar293,pcVar352);
  FUN_100082720("GracefulAppTerminatingServiceProvider",0x25,2);
  puVar455 = puVar1;
  FUN_1000a0038(puVar1,pcVar122,puVar450);
  FUN_100082720("SCAppInstallAttributionEntryPointWrapperServiceProvider",0x37,2);
  puVar456 = puVar1;
  FUN_1000a00f0(puVar1,pcVar122,puVar450);
  FUN_100082720("SCAppInstallUpdateConversionValueJobProviderEntryPointWrapperServiceProvider",0x4c,
                2);
  pcVar457 = pcVar232;
  FUN_1000a01a8(pcVar232,pcVar233,pcVar454,puVar1,pcVar352,puVar2,puVar293,pcVar159);
  FUN_100082720("SCAppTerminationServicesServiceProvider",0x27,2);
  puVar458 = puVar1;
  FUN_1000a02b4(puVar1,puVar450,pcVar331);
  FUN_100082720("SCBlizzardBackgroundUploadEntryPointWrapperServiceProvider",0x3a,2);
  puVar459 = puVar1;
  FUN_1000a036c(puVar1,puVar450,puVar293);
  FUN_100082720("SCConfigManagerBackgroundSyncEntryPointWrapperServiceProvider",0x3d,2);
  puVar460 = puVar447;
  FUN_1000a0424(puVar447,pcVar246,pcVar61,pcVar159);
  FUN_100082720("CrashToReportTweaksServiceProvider",0x22,2);
  puVar461 = puVar1;
  FUN_1000a04c8(puVar1,puVar450);
  FUN_100082720("SCRetryJobProviderServicesEntryPointWrapperServiceProvider",0x3a,2);
  FUN_1000285a8(0x112d9d2f8,&UNK_10d93da78);
  puVar506 = &UNK_1103b7080;
  func_0x000107c613fc(&UNK_1103b7080,0x68,7);
  *(char **)(puVar506 + 0x10) = pcVar373;
  *(undefined8 **)(puVar506 + 0x18) = puVar436;
  *(char **)(puVar506 + 0x20) = pcVar190;
  *(undefined8 **)(puVar506 + 0x28) = puVar274;
  *(char **)(puVar506 + 0x30) = pcVar457;
  *(undefined8 **)(puVar506 + 0x38) = puVar411;
  *(char **)(puVar506 + 0x40) = pcVar343;
  *(char **)(puVar506 + 0x48) = pcVar80;
  *(undefined8 **)(puVar506 + 0x50) = puVar403;
  *(char **)(puVar506 + 0x58) = pcVar298;
  *(undefined8 *)(puVar506 + 0x60) = uVar145;
  func_0x000107c6157c();
  func_0x000107c6157c(puVar436);
  func_0x000107c6157c(pcVar190);
  func_0x000107c6157c(puVar274);
  func_0x000107c6157c(pcVar457);
  func_0x000107c6157c(puVar411);
  func_0x000107c6157c(pcVar343);
  func_0x000107c6157c(pcVar80);
  func_0x000107c6157c(puVar403);
  func_0x000107c6157c(pcVar298);
  func_0x000107c6157c(uVar145);
  pcVar462 = FUN_100a12284;
  FUN_1000823a8(FUN_100a12284,puVar506);
  FUN_100082720("SCSystemScopeApplicationLifeCycleListenerPluginRegistryServiceProvider",0x46,2);
  puVar463 = puVar447;
  FUN_1000a0568(puVar447,pcVar246,pcVar61,puVar448,pcVar197,pcVar247,pcVar258,pcVar100,pcVar244,
                pcVar451,pcVar457,pcVar159,puVar460,puVar47);
  FUN_100082720("CrashServicesServiceProvider",0x1c,2);
  puVar464 = puVar2;
  FUN_1000a06dc(puVar2,puVar463);
  FUN_100082720("FrameRateMonitorServiceProvider",0x1f,2);
  puVar465 = puVar461;
  FUN_1000a075c();
  FUN_100082720("SCInAppSessionJobSchedulerServicesServiceProvider",0x31,2);
  pcVar466 = pcVar149;
  func_0x0001000a07c8(pcVar149,puVar463);
  FUN_100082720("MatchaUserTraceLoggerServiceProvider",0x24,2);
  puVar467 = puVar1;
  FUN_1000a0848(puVar1,pcVar46,pcVar224,puVar293,pcVar208,puVar463,puVar227,puVar434);
  FUN_100082720("SCNotificationsEntryPointWrapperServiceProvider",0x2f,2);
  puVar468 = puVar467;
  FUN_1000a0954();
  FUN_100082720("SCNotificationsServicesServiceProvider",0x26,2);
  puVar469 = puVar1;
  func_0x0001000a09c0(puVar1,puVar463);
  FUN_100082720("SCScopeGraphC2RExceptionReporterEntryPointWrapperServiceProvider",0x40,2);
  pcVar470 = pcVar466;
  FUN_1000a0a60();
  FUN_100082720("UserTraceLoggerServicesServiceProvider",0x26,2);
  FUN_1000285a8(0x112d9d300,&UNK_10d93da80);
  puVar506 = &UNK_1103b70a8;
  func_0x000107c613fc(&UNK_1103b70a8,0x80,7);
  *(undefined8 **)(puVar506 + 0x10) = puVar293;
  *(undefined8 **)(puVar506 + 0x18) = puVar261;
  *(char **)(puVar506 + 0x20) = pcVar223;
  *(undefined8 **)(puVar506 + 0x28) = puVar450;
  *(char **)(puVar506 + 0x30) = pcVar49;
  *(undefined8 **)(puVar506 + 0x38) = puVar465;
  *(undefined8 **)(puVar506 + 0x40) = puVar275;
  *(char **)(puVar506 + 0x48) = pcVar224;
  *(char **)(puVar506 + 0x50) = pcVar435;
  *(char **)(puVar506 + 0x58) = pcVar208;
  *(char **)(puVar506 + 0x60) = pcVar346;
  *(char **)(puVar506 + 0x68) = pcVar122;
  *(undefined8 **)(puVar506 + 0x70) = puVar356;
  *(char **)(puVar506 + 0x78) = pcVar186;
  func_0x000107c6157c(puVar293);
  func_0x000107c6157c(puVar261);
  func_0x000107c6157c(pcVar223);
  func_0x000107c6157c(puVar450);
  func_0x000107c6157c(pcVar49);
  func_0x000107c6157c(puVar465);
  func_0x000107c6157c(puVar275);
  func_0x000107c6157c(pcVar224);
  func_0x000107c6157c(pcVar435);
  func_0x000107c6157c(pcVar208);
  func_0x000107c6157c(pcVar346);
  func_0x000107c6157c(pcVar122);
  func_0x000107c6157c(puVar356);
  func_0x000107c6157c(pcVar186);
  uVar471 = 0x100a0c304;
  FUN_1000823a8(0x100a0c304,puVar506);
  FUN_100082720("SystemJobSchedulerPluginRegistryServiceProvider",0x2f,2);
  uVar472 = uVar471;
  FUN_1000a0aac();
  FUN_100082720("SystemJobSchedulerPluginServicesServiceProvider",0x2f,2);
  pcVar473 = pcVar244;
  FUN_1000a0b18(pcVar244,pcVar457,puVar463,pcVar86,pcVar222,puVar309,pcVar452,pcVar470);
  FUN_100082720("AppinsSystemScopeGraphBridgeServicesServiceProvider",0x33,2);
  puVar474 = puVar463;
  FUN_1000a0c24();
  FUN_100082720("CrashServicesWrapperServiceProvider",0x23,2);
  puVar475 = puVar464;
  FUN_1000a0c90();
  FUN_100082720("BadFrameRateStatsTrackerServiceProvider",0x27,2);
  puVar476 = puVar1;
  FUN_1000a0cdc(puVar1,puVar463);
  FUN_100082720("SCBlizzardCrashToReportProviderEntryPointWrapperServiceProvider",0x3f,2);
  pcVar477 = pcVar392;
  FUN_1000a0d7c(pcVar392,puVar463);
  FUN_100082720("ComposerPlatformNonFatalErrorReporterServiceProvider",0x34,2);
  puVar478 = puVar464;
  FUN_1000a0e28(puVar464,puVar475);
  FUN_100082720("FrameRateMonitorServicesServiceProvider",0x27,2);
  puVar479 = puVar1;
  FUN_1000a0ec8(puVar1,puVar468,pcVar122,pcVar208,puVar418,puVar293,uVar397,uVar511,uVar509);
  FUN_100082720("SCInitializeNotificationProcessorsEntryPointWrapperServiceProvider",0x42,2);
  puVar480 = puVar1;
  FUN_1000a0fec(puVar1,puVar468,puVar293,puVar434,puVar463);
  FUN_100082720("SCNotificationDisplayServicesEntryPointWrapperServiceProvider",0x3d,2);
  puVar481 = puVar1;
  FUN_1000a10c8(puVar1,pcVar186,pcVar208,pcVar439,pcVar217,pcVar373,puVar47,puVar379,pcVar200,
                pcVar49,puVar450,uVar472,pcVar319);
  FUN_100082720("SCSystemJobSchedulerEntryPointWrapperServiceProvider",0x34,2);
  pcVar482 = pcVar244;
  FUN_1000a122c(pcVar244,pcVar477);
  FUN_100082720("ValdiApplicationScopedServiceMarshallerServiceProvider",0x36,2);
  puVar483 = puVar1;
  FUN_1000a12ac(puVar1,puVar50,puVar305,puVar478,puVar2,pcVar244);
  FUN_100082720("WorkSchedulerServiceProvider",0x1c,2);
  puVar484 = puVar478;
  FUN_1000a1374();
  FUN_100082720("PerfSystemScopeGraphBridgeServicesServiceProvider",0x31,2);
  puVar485 = puVar480;
  FUN_1000a13e0();
  FUN_100082720("SCNotificationDisplayServicesServiceProvider",0x2c,2);
  puVar486 = puVar1;
  FUN_1000a144c(puVar1,puVar47,pcVar208,puVar485,puVar434,pcVar223,puVar227);
  FUN_100082720("SCNotificationReportingServicesSystemScopedServiceProviderWrapperServiceProvider",
                0x50,2);
  pcVar487 = pcVar482;
  FUN_1000a154c();
  FUN_100082720("ValdiGlobalServiceMarshallerServiceProvider",0x2b,2);
  pcVar488 = pcVar392;
  FUN_1000a15b8(pcVar392,pcVar487);
  FUN_100082720("ValdiServiceRegistryModuleFactoryProviderServiceProvider",0x38,2);
  puVar489 = puVar483;
  FUN_1000a1684(puVar483,pcVar13);
  FUN_100082720("WorkSchedulerServicesServiceProvider",0x24,2);
  puVar490 = puVar379;
  FUN_1000a1724(puVar379,pcVar178,pcVar49,pcVar200,pcVar201,puVar465,puVar370,pcVar373,puVar450,
                puVar231,uVar472,puVar489);
  FUN_100082720("WschedSystemScopeGraphBridgeServicesServiceProvider",0x33,2);
  puVar491 = puVar486;
  FUN_1000a1878();
  FUN_100082720("SCNotificationReportingServicesServiceProvider",0x2e,2);
  pcVar492 = pcVar392;
  FUN_1000a18e4(pcVar392,pcVar488);
  FUN_100082720("SystemValdiRuntimeServicesServiceProvider",0x29,2);
  pcVar493 = pcVar335;
  FUN_1000a19ac(pcVar335,pcVar4,puVar351,pcVar32,pcVar338,puVar293,pcVar49,puVar50,pcVar189,puVar297
                ,pcVar298,pcVar392,pcVar245,pcVar59,puVar249,pcVar203,puVar363,pcVar208,puVar367,
                puVar95,pcVar281,puVar283,pcVar217,pcVar265,pcVar221,pcVar346,puVar375,pcVar122,
                puVar450,pcVar223,puVar1,pcVar123,pcVar435,pcVar224,pcVar131,pcVar319,pcVar488);
  FUN_100082720("SCUnauthenticatedScopedFactoryServiceProvider",0x2d,2);
  pcVar494 = pcVar335;
  FUN_1000a1cec(pcVar335,puVar2,uVar508,uVar511,puVar380,puVar412,puVar398,puVar399,pcVar174,
                puVar351,puVar436,puVar14,puVar290,pcVar177,pcVar17,pcVar18,puVar20,puVar269,
                pcVar238,pcVar22,pcVar23,puVar437,pcVar30,pcVar32,pcVar33,pcVar338,pcVar46,pcVar244,
                pcVar183,puVar47,uVar509,pcVar457,puVar293,pcVar186,pcVar48,pcVar49,puVar50,pcVar402
                ,pcVar357,pcVar189,puVar296,pcVar438,pcVar439,pcVar426,puVar297,pcVar52,pcVar53,
                puVar408,puVar413,pcVar358,puVar409,puVar416,puVar410,puVar272,puVar299,puVar300,
                pcVar56,puVar301,pcVar392,pcVar404,pcVar192,pcVar302,puVar275,pcVar196,pcVar59,
                puVar303,puVar463,pcVar201,puVar304,puVar305);
  FUN_100082720("SCUserSessionScopedFactoryServiceProvider",0x29,2);
  puVar495 = puVar1;
  FUN_1000a2be4(puVar1,pcVar222,pcVar492);
  FUN_100082720("ComposerShakeLogProviderEntryPointWrapperServiceProvider",0x38,2);
  puVar496 = puVar301;
  FUN_1000a2cd0(puVar301,pcVar404,pcVar492);
  FUN_100082720("ComposerSystemScopeGraphBridgeServicesServiceProvider",0x35,2);
  puVar497 = puVar95;
  FUN_1000a2d88(puVar95,puVar485,puVar434,puVar491,puVar468,pcVar131);
  FUN_100082720("PushSystemScopeGraphBridgeServicesServiceProvider",0x31,2);
  pcVar498 = pcVar493;
  FUN_1000a2e70();
  FUN_100082720("SCUnauthenticatedScopeServicesServiceProvider",0x2d,2);
  pcVar499 = pcVar494;
  FUN_1000a2edc();
  FUN_100082720("SCUserSessionScopeServicesServiceProvider",0x29,2);
  pcVar500 = pcVar144;
  FUN_1000a2f48(pcVar144,pcVar143,pcVar138,pcVar139,pcVar499,pcVar498);
  FUN_100082720("AuthenticationSubScopesRouterServiceProvider",0x2c,2);
  puVar501 = puVar1;
  FUN_1000a3010(puVar1,uVar508,uVar185,uVar385,puVar2,pcVar374,pcVar500,pcVar252,pcVar208,pcVar470,
                puVar347,puVar296);
  FUN_100082720("AuthenticationWorkflowServiceProvider",0x25,2);
  puVar502 = puVar501;
  FUN_1000a3144();
  FUN_100082720("AuthenticationWorkflowServicesServiceProvider",0x2d,2);
  pcVar503 = pcVar335;
  FUN_1000a31b0(pcVar335,puVar321,puVar502,pcVar4,puVar269,puVar179,puVar336,uVar386,pcVar45,
                pcVar338,pcVar189,pcVar59,puVar249,puVar367,puVar420,pcVar281,puVar283,pcVar395,
                pcVar265,pcVar221,pcVar120,pcVar122,pcVar498,puVar128,pcVar226,pcVar499,uVar397);
  FUN_100082720("ActivSystemScopeGraphBridgeServicesServiceProvider",0x32,2);
  FUN_1000285a8(0x112d9d308,&UNK_10d93da88);
  puVar506 = &UNK_1103b70d0;
  func_0x000107c613fc(&UNK_1103b70d0,0x448,7);
  *(undefined8 **)(puVar506 + 0x10) = puVar1;
  *(char **)(puVar506 + 0x18) = pcVar503;
  *(char **)(puVar506 + 0x20) = pcVar473;
  *(undefined8 **)(puVar506 + 0x28) = puVar168;
  *(undefined8 **)(puVar506 + 0x30) = puVar320;
  *(undefined8 **)(puVar506 + 0x38) = puVar501;
  *(undefined8 **)(puVar506 + 0x40) = puVar378;
  *(undefined8 **)(puVar506 + 0x48) = puVar169;
  *(undefined8 **)(puVar506 + 0x50) = puVar349;
  *(undefined8 **)(puVar506 + 0x58) = puVar350;
  *(undefined8 **)(puVar506 + 0x60) = puVar47;
  *(undefined8 **)(puVar506 + 0x68) = puVar398;
  *(undefined8 **)(puVar506 + 0x70) = puVar413;
  *(undefined8 **)(puVar506 + 0x78) = puVar324;
  *(undefined8 **)(puVar506 + 0x80) = puVar418;
  *(undefined8 **)(puVar506 + 0x88) = puVar424;
  *(char **)(puVar506 + 0x90) = pcVar445;
  *(undefined8 **)(puVar506 + 0x98) = puVar382;
  *(char **)(puVar506 + 0xa0) = pcVar453;
  *(undefined8 **)(puVar506 + 0xa8) = puVar323;
  *(undefined8 **)(puVar506 + 0xb0) = puVar495;
  *(undefined8 **)(puVar506 + 0xb8) = puVar496;
  *(undefined8 **)(puVar506 + 0xc0) = puVar406;
  *(undefined8 **)(puVar506 + 200) = puVar235;
  *(undefined8 **)(puVar506 + 0xd0) = puVar236;
  *(undefined8 **)(puVar506 + 0xd8) = puVar383;
  *(char **)(puVar506 + 0xe0) = pcVar428;
  *(undefined8 **)(puVar506 + 0xe8) = puVar19;
  *(undefined8 **)(puVar506 + 0xf0) = puVar237;
  *(undefined8 **)(puVar506 + 0xf8) = puVar21;
  *(undefined8 **)(puVar506 + 0x100) = puVar325;
  *(char **)(puVar506 + 0x108) = pcVar326;
  *(undefined8 **)(puVar506 + 0x110) = puVar24;
  *(undefined8 **)(puVar506 + 0x118) = puVar446;
  *(char **)(puVar506 + 0x120) = pcVar327;
  *(undefined8 *)(puVar506 + 0x128) = uVar239;
  *(char **)(puVar506 + 0x130) = pcVar407;
  *(undefined8 **)(puVar506 + 0x138) = puVar463;
  *(char **)(puVar506 + 0x140) = pcVar131;
  *(undefined8 **)(puVar506 + 0x148) = puVar270;
  *(char **)(puVar506 + 0x150) = pcVar240;
  *(undefined8 **)(puVar506 + 0x158) = puVar241;
  *(undefined8 **)(puVar506 + 0x160) = puVar425;
  *(undefined8 **)(puVar506 + 0x168) = puVar484;
  *(undefined8 **)(puVar506 + 0x170) = puVar291;
  *(undefined8 **)(puVar506 + 0x178) = puVar242;
  *(undefined8 **)(puVar506 + 0x180) = puVar387;
  *(undefined8 **)(puVar506 + 0x188) = puVar497;
  *(char **)(puVar506 + 400) = pcVar182;
  *(undefined8 **)(puVar506 + 0x198) = puVar455;
  *(undefined8 **)(puVar506 + 0x1a0) = puVar456;
  *(undefined8 **)(puVar506 + 0x1a8) = puVar271;
  *(undefined8 **)(puVar506 + 0x1b0) = puVar355;
  *(undefined8 **)(puVar506 + 0x1b8) = puVar388;
  *(undefined8 **)(puVar506 + 0x1c0) = puVar390;
  *(undefined8 **)(puVar506 + 0x1c8) = puVar295;
  *(undefined8 **)(puVar506 + 0x1d0) = puVar458;
  *(undefined8 **)(puVar506 + 0x1d8) = puVar476;
  *(undefined8 **)(puVar506 + 0x1e0) = puVar414;
  *(undefined8 **)(puVar506 + 0x1e8) = puVar415;
  *(undefined8 **)(puVar506 + 0x1f0) = puVar459;
  *(undefined8 **)(puVar506 + 0x1f8) = puVar60;
  *(undefined8 **)(puVar506 + 0x200) = puVar67;
  *(undefined8 **)(puVar506 + 0x208) = puVar248;
  *(undefined8 **)(puVar506 + 0x210) = puVar74;
  *(undefined8 **)(puVar506 + 0x218) = puVar360;
  *(undefined8 **)(puVar506 + 0x220) = puVar76;
  *(undefined8 **)(puVar506 + 0x228) = puVar251;
  *(undefined8 **)(puVar506 + 0x230) = puVar362;
  *(undefined8 **)(puVar506 + 0x238) = puVar427;
  *(undefined8 **)(puVar506 + 0x240) = puVar254;
  *(undefined8 **)(puVar506 + 0x248) = puVar255;
  *(undefined8 **)(puVar506 + 0x250) = puVar429;
  *(undefined8 **)(puVar506 + 600) = puVar430;
  *(undefined8 **)(puVar506 + 0x260) = puVar366;
  *(undefined8 **)(puVar506 + 0x268) = puVar431;
  *(undefined8 **)(puVar506 + 0x270) = puVar432;
  *(undefined8 **)(puVar506 + 0x278) = puVar433;
  *(undefined8 **)(puVar506 + 0x280) = puVar479;
  *(undefined8 **)(puVar506 + 0x288) = puVar417;
  *(undefined8 **)(puVar506 + 0x290) = puVar211;
  *(undefined8 **)(puVar506 + 0x298) = puVar419;
  *(undefined8 **)(puVar506 + 0x2a0) = puVar278;
  *(undefined8 **)(puVar506 + 0x2a8) = puVar212;
  *(undefined8 **)(puVar506 + 0x2b0) = puVar306;
  *(undefined8 **)(puVar506 + 0x2b8) = puVar91;
  *(undefined8 **)(puVar506 + 0x2c0) = puVar96;
  *(undefined8 **)(puVar506 + 0x2c8) = puVar421;
  *(undefined8 **)(puVar506 + 0x2d0) = puVar259;
  *(undefined8 **)(puVar506 + 0x2d8) = puVar260;
  *(undefined8 **)(puVar506 + 0x2e0) = puVar262;
  *(undefined8 **)(puVar506 + 0x2e8) = puVar480;
  *(undefined8 **)(puVar506 + 0x2f0) = puVar486;
  *(undefined8 **)(puVar506 + 0x2f8) = puVar467;
  *(undefined8 **)(puVar506 + 0x300) = puVar369;
  *(undefined8 **)(puVar506 + 0x308) = puVar111;
  *(undefined8 **)(puVar506 + 0x310) = puVar371;
  *(undefined8 **)(puVar506 + 0x318) = puVar461;
  *(undefined8 **)(puVar506 + 800) = puVar469;
  *(undefined **)(puVar506 + 0x328) = puVar310;
  *(undefined8 **)(puVar506 + 0x330) = puVar121;
  *(undefined8 **)(puVar506 + 0x338) = puVar481;
  *(undefined8 **)(puVar506 + 0x340) = puVar442;
  *(undefined8 *)(puVar506 + 0x348) = uVar508;
  *(undefined8 **)(puVar506 + 0x350) = puVar50;
  *(code **)(puVar506 + 0x358) = pcVar146;
  *(undefined8 **)(puVar506 + 0x360) = puVar124;
  *(undefined8 **)(puVar506 + 0x368) = puVar314;
  *(undefined8 **)(puVar506 + 0x370) = puVar422;
  *(undefined8 **)(puVar506 + 0x378) = puVar423;
  *(undefined8 **)(puVar506 + 0x380) = puVar376;
  *(undefined8 **)(puVar506 + 0x388) = puVar317;
  *(undefined8 **)(puVar506 + 0x390) = puVar229;
  *(undefined8 **)(puVar506 + 0x398) = puVar151;
  *(undefined8 **)(puVar506 + 0x3a0) = puVar267;
  *(char **)(puVar506 + 0x3a8) = pcVar155;
  *(char **)(puVar506 + 0x3b0) = pcVar156;
  *(code **)(puVar506 + 0x3b8) = pcVar462;
  *(char **)(puVar506 + 0x3c0) = pcVar444;
  *(undefined **)(puVar506 + 0x3c8) = puVar377;
  *(undefined8 **)(puVar506 + 0x3d0) = puVar293;
  *(undefined8 *)(puVar506 + 0x3d8) = uVar397;
  *(undefined8 **)(puVar506 + 0x3e0) = puVar210;
  *(char **)(puVar506 + 1000) = pcVar319;
  *(char **)(puVar506 + 0x3f0) = pcVar346;
  *(char **)(puVar506 + 0x3f8) = pcVar3;
  *(char **)(puVar506 + 0x400) = pcVar357;
  *(undefined8 **)(puVar506 + 0x408) = puVar489;
  *(char **)(puVar506 + 0x410) = pcVar97;
  *(undefined8 **)(puVar506 + 0x418) = puVar478;
  *(undefined8 **)(puVar506 + 0x420) = puVar161;
  *(char **)(puVar506 + 0x428) = pcVar163;
  *(char **)(puVar506 + 0x430) = pcVar23;
  *(undefined8 **)(puVar506 + 0x438) = puVar164;
  *(undefined8 **)(puVar506 + 0x440) = puVar490;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar293);
  func_0x000107c6157c(puVar310);
  func_0x000107c6157c(pcVar346);
  func_0x000107c6157c(pcVar503);
  func_0x000107c6157c(pcVar473);
  func_0x000107c6157c(puVar168);
  func_0x000107c6157c(puVar320);
  func_0x000107c6157c(puVar501);
  func_0x000107c6157c(puVar378);
  func_0x000107c6157c(puVar169);
  func_0x000107c6157c(puVar349);
  func_0x000107c6157c(puVar350);
  func_0x000107c6157c(puVar47);
  func_0x000107c6157c(puVar398);
  func_0x000107c6157c(puVar413);
  func_0x000107c6157c(puVar324);
  func_0x000107c6157c(puVar418);
  func_0x000107c6157c(puVar424);
  func_0x000107c6157c(pcVar445);
  func_0x000107c6157c(puVar382);
  func_0x000107c6157c(pcVar453);
  func_0x000107c6157c(puVar323);
  func_0x000107c6157c(puVar495);
  func_0x000107c6157c(puVar496);
  func_0x000107c6157c(puVar406);
  func_0x000107c6157c(puVar235);
  func_0x000107c6157c(puVar236);
  func_0x000107c6157c(puVar383);
  func_0x000107c6157c(pcVar428);
  func_0x000107c6157c(puVar19);
  func_0x000107c6157c(puVar237);
  func_0x000107c6157c(puVar21);
  func_0x000107c6157c(puVar325);
  func_0x000107c6157c(pcVar326);
  func_0x000107c6157c(puVar24);
  func_0x000107c6157c(puVar446);
  func_0x000107c6157c(pcVar327);
  func_0x000107c6157c(uVar239);
  func_0x000107c6157c(pcVar407);
  func_0x000107c6157c(puVar463);
  func_0x000107c6157c(pcVar131);
  func_0x000107c6157c(puVar270);
  func_0x000107c6157c(pcVar240);
  func_0x000107c6157c(puVar241);
  func_0x000107c6157c(puVar425);
  func_0x000107c6157c(puVar484);
  func_0x000107c6157c(puVar291);
  func_0x000107c6157c(puVar242);
  func_0x000107c6157c(puVar387);
  func_0x000107c6157c(puVar497);
  func_0x000107c6157c(pcVar182);
  func_0x000107c6157c(puVar455);
  func_0x000107c6157c(puVar456);
  func_0x000107c6157c(puVar271);
  func_0x000107c6157c(puVar355);
  func_0x000107c6157c(puVar388);
  func_0x000107c6157c(puVar390);
  func_0x000107c6157c(puVar295);
  func_0x000107c6157c(puVar458);
  func_0x000107c6157c(puVar476);
  func_0x000107c6157c(puVar414);
  func_0x000107c6157c(puVar415);
  func_0x000107c6157c(puVar459);
  func_0x000107c6157c(puVar60);
  func_0x000107c6157c(puVar67);
  func_0x000107c6157c(puVar248);
  func_0x000107c6157c(puVar74);
  func_0x000107c6157c(puVar360);
  func_0x000107c6157c(puVar76);
  func_0x000107c6157c(puVar251);
  func_0x000107c6157c(puVar362);
  func_0x000107c6157c(puVar427);
  func_0x000107c6157c(puVar254);
  func_0x000107c6157c(puVar255);
  func_0x000107c6157c(puVar429);
  func_0x000107c6157c(puVar430);
  func_0x000107c6157c(puVar366);
  func_0x000107c6157c(puVar431);
  func_0x000107c6157c(puVar432);
  func_0x000107c6157c(puVar433);
  func_0x000107c6157c(puVar479);
  func_0x000107c6157c(puVar417);
  func_0x000107c6157c(puVar211);
  func_0x000107c6157c(puVar419);
  func_0x000107c6157c(puVar278);
  func_0x000107c6157c(puVar212);
  func_0x000107c6157c(puVar306);
  func_0x000107c6157c(puVar91);
  func_0x000107c6157c(puVar96);
  func_0x000107c6157c(puVar421);
  func_0x000107c6157c(puVar259);
  func_0x000107c6157c(puVar260);
  func_0x000107c6157c(puVar262);
  func_0x000107c6157c(puVar480);
  func_0x000107c6157c(puVar486);
  func_0x000107c6157c(puVar467);
  func_0x000107c6157c(puVar369);
  func_0x000107c6157c(puVar111);
  func_0x000107c6157c(puVar371);
  func_0x000107c6157c(puVar461);
  func_0x000107c6157c(puVar469);
  func_0x000107c6157c(puVar121);
  func_0x000107c6157c(puVar481);
  func_0x000107c6157c(puVar442);
  func_0x000107c6157c(uVar508);
  func_0x000107c6157c(puVar50);
  func_0x000107c6157c(pcVar146);
  func_0x000107c6157c(puVar124);
  func_0x000107c6157c(puVar314);
  func_0x000107c6157c(puVar422);
  func_0x000107c6157c(puVar423);
  func_0x000107c6157c(puVar376);
  func_0x000107c6157c(puVar317);
  func_0x000107c6157c(puVar229);
  func_0x000107c6157c(puVar151);
  func_0x000107c6157c(puVar267);
  func_0x000107c6157c(pcVar155);
  func_0x000107c6157c(pcVar156);
  func_0x000107c6157c(pcVar462);
  func_0x000107c6157c(pcVar444);
  func_0x000107c6157c(puVar377);
  func_0x000107c6157c(uVar397);
  func_0x000107c6157c(puVar210);
  func_0x000107c6157c(pcVar319);
  func_0x000107c6157c(pcVar3);
  func_0x000107c6157c(pcVar357);
  func_0x000107c6157c(puVar489);
  func_0x000107c6157c(pcVar97);
  func_0x000107c6157c(puVar478);
  func_0x000107c6157c(puVar161);
  func_0x000107c6157c(pcVar163);
  func_0x000107c6157c(pcVar23);
  func_0x000107c6157c(puVar164);
  func_0x000107c6157c(puVar490);
  pcVar504 = FUN_1000a6c7c;
  FUN_1000823a8(FUN_1000a6c7c,puVar506);
  FUN_100082720("SCSystemScopeInitializationPluginRegistryServiceProvider",0x38,2);
  FUN_1000285a8(0x112d9d258,&UNK_10d93da90);
  func_0x000107c6157c(pcVar504);
  pcVar505 = FUN_1000a3a2c;
  FUN_1000823a8(FUN_1000a3a2c,pcVar504);
  FUN_100082720("SCSystemScopeInitializationServiceProvider",0x2a,2);
  FUN_1000285a8(0x112d9d138,&UNK_10d93d810);
  puVar506 = &UNK_1103b70f8;
  func_0x000107c613fc(&UNK_1103b70f8,0x118,7);
  *(undefined8 **)(puVar506 + 0x10) = puVar47;
  *(undefined8 *)(puVar506 + 0x18) = uVar509;
  *(char **)(puVar506 + 0x20) = pcVar3;
  *(undefined8 **)(puVar506 + 0x28) = puVar293;
  *(char **)(puVar506 + 0x30) = pcVar186;
  *(char **)(puVar506 + 0x38) = pcVar49;
  *(char **)(puVar506 + 0x40) = pcVar357;
  *(undefined8 **)(puVar506 + 0x48) = puVar379;
  *(char **)(puVar506 + 0x50) = pcVar51;
  *(undefined8 **)(puVar506 + 0x58) = puVar413;
  *(undefined8 **)(puVar506 + 0x60) = puVar409;
  *(undefined8 **)(puVar506 + 0x68) = puVar398;
  *(char **)(puVar506 + 0x70) = pcVar197;
  *(char **)(puVar506 + 0x78) = pcVar247;
  *(undefined8 **)(puVar506 + 0x80) = puVar463;
  *(undefined8 **)(puVar506 + 0x88) = puVar324;
  *(undefined8 **)(puVar506 + 0x90) = puVar210;
  *(undefined8 **)(puVar506 + 0x98) = puVar26;
  *(char **)(puVar506 + 0xa0) = pcVar97;
  *(undefined8 **)(puVar506 + 0xa8) = puVar448;
  *(undefined8 **)(puVar506 + 0xb0) = puVar261;
  *(code **)(puVar506 + 0xb8) = pcVar505;
  *(char **)(puVar506 + 0xc0) = pcVar117;
  *(undefined8 *)(puVar506 + 200) = uVar228;
  *(char **)(puVar506 + 0xd0) = pcVar230;
  *(char **)(puVar506 + 0xd8) = pcVar319;
  *(char **)(puVar506 + 0xe0) = pcVar156;
  *(char **)(puVar506 + 0xe8) = pcVar374;
  *(char **)(puVar506 + 0xf0) = pcVar346;
  *(char **)(puVar506 + 0xf8) = pcVar444;
  *(undefined8 *)(puVar506 + 0x100) = uVar397;
  *(undefined8 **)(puVar506 + 0x108) = puVar489;
  *(char **)(puVar506 + 0x110) = pcVar166;
  func_0x000107c6157c();
  func_0x000107c6157c(puVar293);
  func_0x000107c6157c(puVar261);
  func_0x000107c6157c(pcVar49);
  func_0x000107c6157c(pcVar346);
  func_0x000107c6157c(pcVar186);
  func_0x000107c6157c(puVar47);
  func_0x000107c6157c(puVar398);
  func_0x000107c6157c(puVar413);
  func_0x000107c6157c(puVar324);
  func_0x000107c6157c(puVar463);
  func_0x000107c6157c(pcVar156);
  func_0x000107c6157c(pcVar444);
  func_0x000107c6157c(uVar397);
  func_0x000107c6157c(puVar210);
  func_0x000107c6157c(pcVar319);
  func_0x000107c6157c(pcVar3);
  func_0x000107c6157c(pcVar357);
  func_0x000107c6157c(puVar489);
  func_0x000107c6157c(pcVar97);
  func_0x000107c6157c(uVar509);
  func_0x000107c6157c(puVar379);
  func_0x000107c6157c(puVar409);
  func_0x000107c6157c(pcVar197);
  func_0x000107c6157c(pcVar247);
  func_0x000107c6157c(puVar26);
  func_0x000107c6157c(puVar448);
  func_0x000107c6157c(pcVar505);
  func_0x000107c6157c(pcVar117);
  func_0x000107c6157c(uVar228);
  func_0x000107c6157c(pcVar230);
  func_0x000107c6157c(pcVar374);
  func_0x000107c6157c(pcVar166);
  pcVar507 = FUN_1000a39c8;
  FUN_1000823a8(FUN_1000a39c8,puVar506);
  FUN_100082720("SCSystemScopedServicesServiceProvider",0x25,2);
  puVar506 = &UNK_1103b7120;
  func_0x000107c613fc(&UNK_1103b7120,0x20,7);
  *(code **)(puVar506 + 0x10) = pcVar507;
  *(code **)(puVar506 + 0x18) = pcVar146;
  func_0x000107c6157c();
  pcVar507 = FUN_1000a3514;
  FUN_1000823a8(FUN_1000a3514,puVar506);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(uVar511);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(puVar7);
  func_0x000107c61574(pcVar8);
  func_0x000107c61574(pcVar9);
  func_0x000107c61574(pcVar10);
  func_0x000107c61574(puVar11);
  func_0x000107c61574(puVar12);
  func_0x000107c61574(pcVar13);
  func_0x000107c61574(puVar14);
  func_0x000107c61574(pcVar15);
  func_0x000107c61574(pcVar16);
  func_0x000107c61574(pcVar17);
  func_0x000107c61574(pcVar18);
  func_0x000107c61574(puVar19);
  func_0x000107c61574(puVar20);
  func_0x000107c61574(puVar21);
  func_0x000107c61574(pcVar22);
  func_0x000107c61574(pcVar23);
  func_0x000107c61574(puVar24);
  func_0x000107c61574(puVar25);
  func_0x000107c61574(puVar26);
  func_0x000107c61574(pcVar27);
  func_0x000107c61574(pcVar28);
  func_0x000107c61574(pcVar29);
  func_0x000107c61574(pcVar30);
  func_0x000107c61574(pcVar31);
  func_0x000107c61574(pcVar32);
  func_0x000107c61574(pcVar33);
  func_0x000107c61574(pcVar34);
  func_0x000107c61574(pcVar35);
  func_0x000107c61574(pcVar36);
  func_0x000107c61574(pcVar37);
  func_0x000107c61574(pcVar38);
  func_0x000107c61574(pcVar39);
  func_0x000107c61574(pcVar40);
  func_0x000107c61574(pcVar41);
  func_0x000107c61574(pcVar42);
  func_0x000107c61574(pcVar43);
  func_0x000107c61574(pcVar44);
  func_0x000107c61574(pcVar45);
  func_0x000107c61574(pcVar46);
  func_0x000107c61574(puVar47);
  func_0x000107c61574(pcVar48);
  func_0x000107c61574(pcVar49);
  func_0x000107c61574(puVar50);
  func_0x000107c61574(pcVar51);
  func_0x000107c61574(pcVar52);
  func_0x000107c61574(pcVar53);
  func_0x000107c61574(pcVar54);
  func_0x000107c61574(pcVar55);
  func_0x000107c61574(pcVar56);
  func_0x000107c61574(puVar57);
  func_0x000107c61574(pcVar58);
  func_0x000107c61574(pcVar59);
  func_0x000107c61574(puVar60);
  func_0x000107c61574(pcVar61);
  func_0x000107c61574(pcVar62);
  func_0x000107c61574(pcVar63);
  func_0x000107c61574(pcVar64);
  func_0x000107c61574(pcVar65);
  func_0x000107c61574(pcVar66);
  func_0x000107c61574(puVar67);
  func_0x000107c61574(puVar68);
  func_0x000107c61574(pcVar69);
  func_0x000107c61574(pcVar70);
  func_0x000107c61574(pcVar71);
  func_0x000107c61574(pcVar72);
  func_0x000107c61574(pcVar73);
  func_0x000107c61574(puVar74);
  func_0x000107c61574(puVar75);
  func_0x000107c61574(puVar76);
  func_0x000107c61574(puVar77);
  func_0x000107c61574(pcVar78);
  func_0x000107c61574(pcVar79);
  func_0x000107c61574(pcVar80);
  func_0x000107c61574(pcVar81);
  func_0x000107c61574(pcVar82);
  func_0x000107c61574(pcVar83);
  func_0x000107c61574(pcVar84);
  func_0x000107c61574(pcVar85);
  func_0x000107c61574(pcVar86);
  func_0x000107c61574(pcVar87);
  func_0x000107c61574(pcVar88);
  func_0x000107c61574(pcVar89);
  func_0x000107c61574(pcVar90);
  func_0x000107c61574(puVar91);
  func_0x000107c61574(puVar92);
  func_0x000107c61574(pcVar93);
  func_0x000107c61574(pcVar94);
  func_0x000107c61574(puVar95);
  func_0x000107c61574(puVar96);
  func_0x000107c61574(pcVar97);
  func_0x000107c61574(puVar98);
  func_0x000107c61574(pcVar99);
  func_0x000107c61574(pcVar100);
  func_0x000107c61574(pcVar101);
  func_0x000107c61574(pcVar102);
  func_0x000107c61574(pcVar103);
  func_0x000107c61574(pcVar104);
  func_0x000107c61574(pcVar105);
  func_0x000107c61574(pcVar106);
  func_0x000107c61574(pcVar107);
  func_0x000107c61574(pcVar108);
  func_0x000107c61574(pcVar109);
  func_0x000107c61574(pcVar110);
  func_0x000107c61574(puVar111);
  func_0x000107c61574(puVar112);
  func_0x000107c61574(pcVar113);
  func_0x000107c61574(pcVar114);
  func_0x000107c61574(pcVar115);
  func_0x000107c61574(pcVar116);
  func_0x000107c61574(pcVar117);
  func_0x000107c61574(pcVar118);
  func_0x000107c61574(pcVar119);
  func_0x000107c61574(pcVar120);
  func_0x000107c61574(puVar121);
  func_0x000107c61574(pcVar122);
  func_0x000107c61574(pcVar123);
  func_0x000107c61574(puVar124);
  func_0x000107c61574(puVar125);
  func_0x000107c61574(pcVar126);
  func_0x000107c61574(puVar127);
  func_0x000107c61574(puVar128);
  func_0x000107c61574(pcVar129);
  func_0x000107c61574(pcVar130);
  func_0x000107c61574(pcVar131);
  func_0x000107c61574(puVar132);
  func_0x000107c61574(puVar133);
  func_0x000107c61574(puVar134);
  func_0x000107c61574(puVar135);
  func_0x000107c61574(uVar136);
  func_0x000107c61574(pcVar137);
  func_0x000107c61574(pcVar138);
  func_0x000107c61574(pcVar139);
  func_0x000107c61574(pcVar140);
  func_0x000107c61574(pcVar141);
  func_0x000107c61574(pcVar142);
  func_0x000107c61574(pcVar143);
  func_0x000107c61574(pcVar144);
  func_0x000107c61574(uVar145);
  func_0x000107c61574(pcVar146);
  func_0x000107c61574(pcVar147);
  func_0x000107c61574(pcVar148);
  func_0x000107c61574(pcVar149);
  func_0x000107c61574(pcVar150);
  func_0x000107c61574(puVar151);
  func_0x000107c61574(puVar152);
  func_0x000107c61574(pcVar153);
  func_0x000107c61574(pcVar154);
  func_0x000107c61574(pcVar155);
  func_0x000107c61574(pcVar156);
  func_0x000107c61574(pcVar157);
  func_0x000107c61574(pcVar158);
  func_0x000107c61574(pcVar159);
  func_0x000107c61574(pcVar160);
  func_0x000107c61574(puVar161);
  func_0x000107c61574(puVar162);
  func_0x000107c61574(pcVar163);
  func_0x000107c61574(puVar164);
  func_0x000107c61574(pcVar165);
  func_0x000107c61574(pcVar166);
  func_0x000107c61574(puVar167);
  func_0x000107c61574(puVar168);
  func_0x000107c61574(puVar169);
  func_0x000107c61574(pcVar170);
  func_0x000107c61574(pcVar171);
  func_0x000107c61574(pcVar172);
  func_0x000107c61574(pcVar173);
  func_0x000107c61574(pcVar174);
  func_0x000107c61574(pcVar175);
  func_0x000107c61574(puVar176);
  func_0x000107c61574(pcVar177);
  func_0x000107c61574(pcVar178);
  func_0x000107c61574(puVar179);
  func_0x000107c61574(pcVar180);
  func_0x000107c61574(pcVar181);
  func_0x000107c61574(pcVar182);
  func_0x000107c61574(pcVar183);
  func_0x000107c61574(pcVar184);
  func_0x000107c61574(uVar185);
  func_0x000107c61574(pcVar186);
  func_0x000107c61574(pcVar187);
  func_0x000107c61574(pcVar188);
  func_0x000107c61574(pcVar189);
  func_0x000107c61574(pcVar190);
  func_0x000107c61574(pcVar191);
  func_0x000107c61574(pcVar192);
  func_0x000107c61574(pcVar193);
  func_0x000107c61574(pcVar194);
  func_0x000107c61574(pcVar195);
  func_0x000107c61574(pcVar196);
  func_0x000107c61574(pcVar197);
  func_0x000107c61574(puVar198);
  func_0x000107c61574(puVar199);
  func_0x000107c61574(pcVar200);
  func_0x000107c61574(pcVar201);
  func_0x000107c61574(puVar202);
  func_0x000107c61574(pcVar203);
  func_0x000107c61574(puVar204);
  func_0x000107c61574(pcVar205);
  func_0x000107c61574(pcVar206);
  func_0x000107c61574(pcVar207);
  func_0x000107c61574(pcVar208);
  func_0x000107c61574(pcVar209);
  func_0x000107c61574(puVar210);
  func_0x000107c61574(puVar211);
  func_0x000107c61574(puVar212);
  func_0x000107c61574(pcVar213);
  func_0x000107c61574(puVar214);
  func_0x000107c61574(puVar215);
  func_0x000107c61574(pcVar216);
  func_0x000107c61574(pcVar217);
  func_0x000107c61574(pcVar218);
  func_0x000107c61574(pcVar219);
  func_0x000107c61574(pcVar220);
  func_0x000107c61574(pcVar221);
  func_0x000107c61574(pcVar222);
  func_0x000107c61574(pcVar223);
  func_0x000107c61574(pcVar224);
  func_0x000107c61574(pcVar225);
  func_0x000107c61574(pcVar226);
  func_0x000107c61574(puVar227);
  func_0x000107c61574(uVar228);
  func_0x000107c61574(puVar229);
  func_0x000107c61574(pcVar230);
  func_0x000107c61574(puVar231);
  func_0x000107c61574(uVar510);
  func_0x000107c61574(pcVar232);
  func_0x000107c61574(pcVar233);
  func_0x000107c61574(pcVar234);
  func_0x000107c61574(puVar235);
  func_0x000107c61574(puVar236);
  func_0x000107c61574(puVar237);
  func_0x000107c61574(pcVar238);
  func_0x000107c61574(uVar239);
  func_0x000107c61574(pcVar240);
  func_0x000107c61574(puVar241);
  func_0x000107c61574(puVar242);
  func_0x000107c61574(pcVar243);
  func_0x000107c61574(pcVar244);
  func_0x000107c61574(pcVar245);
  func_0x000107c61574(pcVar246);
  func_0x000107c61574(pcVar247);
  func_0x000107c61574(puVar248);
  func_0x000107c61574(puVar249);
  func_0x000107c61574(pcVar250);
  func_0x000107c61574(puVar251);
  func_0x000107c61574(pcVar252);
  func_0x000107c61574(pcVar253);
  func_0x000107c61574(puVar254);
  func_0x000107c61574(puVar255);
  func_0x000107c61574(puVar256);
  func_0x000107c61574(puVar257);
  func_0x000107c61574(pcVar258);
  func_0x000107c61574(puVar259);
  func_0x000107c61574(puVar260);
  func_0x000107c61574(puVar261);
  func_0x000107c61574(puVar262);
  func_0x000107c61574(puVar263);
  func_0x000107c61574(puVar264);
  func_0x000107c61574(pcVar265);
  func_0x000107c61574(puVar266);
  func_0x000107c61574(puVar267);
  func_0x000107c61574(puVar268);
  func_0x000107c61574(puVar269);
  func_0x000107c61574(puVar270);
  func_0x000107c61574(puVar271);
  func_0x000107c61574(puVar272);
  func_0x000107c61574(pcVar273);
  func_0x000107c61574(puVar274);
  func_0x000107c61574(puVar275);
  func_0x000107c61574(pcVar276);
  func_0x000107c61574(puVar277);
  func_0x000107c61574(puVar278);
  func_0x000107c61574(puVar279);
  func_0x000107c61574(pcVar280);
  func_0x000107c61574(pcVar281);
  func_0x000107c61574(puVar282);
  func_0x000107c61574(puVar283);
  func_0x000107c61574(puVar284);
  func_0x000107c61574(puVar285);
  func_0x000107c61574(puVar286);
  func_0x000107c61574(puVar287);
  func_0x000107c61574(pcVar288);
  func_0x000107c61574(puVar289);
  func_0x000107c61574(puVar290);
  func_0x000107c61574(puVar291);
  func_0x000107c61574(puVar292);
  func_0x000107c61574(puVar293);
  func_0x000107c61574(puVar294);
  func_0x000107c61574(puVar295);
  func_0x000107c61574(puVar296);
  func_0x000107c61574(puVar297);
  func_0x000107c61574(pcVar298);
  func_0x000107c61574(puVar299);
  func_0x000107c61574(puVar300);
  func_0x000107c61574(puVar301);
  func_0x000107c61574(pcVar302);
  func_0x000107c61574(puVar303);
  func_0x000107c61574(puVar304);
  func_0x000107c61574(puVar305);
  func_0x000107c61574(puVar306);
  func_0x000107c61574(puVar307);
  func_0x000107c61574(puVar308);
  func_0x000107c61574(puVar309);
  func_0x000107c61574(puVar310);
  func_0x000107c61574(puVar311);
  func_0x000107c61574(puVar312);
  func_0x000107c61574(pcVar313);
  func_0x000107c61574(puVar314);
  func_0x000107c61574(puVar315);
  func_0x000107c61574(puVar316);
  func_0x000107c61574(puVar317);
  func_0x000107c61574(pcVar318);
  func_0x000107c61574(pcVar319);
  func_0x000107c61574(puVar320);
  func_0x000107c61574(puVar321);
  func_0x000107c61574(puVar322);
  func_0x000107c61574(puVar323);
  func_0x000107c61574(puVar324);
  func_0x000107c61574(puVar325);
  func_0x000107c61574(pcVar326);
  func_0x000107c61574(pcVar327);
  func_0x000107c61574(pcVar328);
  func_0x000107c61574(puVar329);
  func_0x000107c61574(pcVar330);
  func_0x000107c61574(pcVar331);
  func_0x000107c61574(puVar332);
  func_0x000107c61574(pcVar333);
  func_0x000107c61574(pcVar334);
  func_0x000107c61574(pcVar335);
  func_0x000107c61574(puVar336);
  func_0x000107c61574(puVar337);
  func_0x000107c61574(pcVar338);
  func_0x000107c61574(pcVar339);
  func_0x000107c61574(pcVar340);
  func_0x000107c61574(puVar341);
  func_0x000107c61574(puVar342);
  func_0x000107c61574(pcVar343);
  func_0x000107c61574(puVar344);
  func_0x000107c61574(puVar345);
  func_0x000107c61574(pcVar346);
  func_0x000107c61574(puVar347);
  func_0x000107c61574(pcVar348);
  func_0x000107c61574(puVar349);
  func_0x000107c61574(puVar350);
  func_0x000107c61574(puVar351);
  func_0x000107c61574(pcVar352);
  func_0x000107c61574(pcVar353);
  func_0x000107c61574(pcVar354);
  func_0x000107c61574(puVar355);
  func_0x000107c61574(puVar356);
  func_0x000107c61574(pcVar357);
  func_0x000107c61574(pcVar358);
  func_0x000107c61574(pcVar359);
  func_0x000107c61574(puVar360);
  func_0x000107c61574(puVar361);
  func_0x000107c61574(puVar362);
  func_0x000107c61574(puVar363);
  func_0x000107c61574(puVar364);
  func_0x000107c61574(puVar365);
  func_0x000107c61574(puVar366);
  func_0x000107c61574(puVar367);
  func_0x000107c61574(puVar368);
  func_0x000107c61574(puVar369);
  func_0x000107c61574(puVar370);
  func_0x000107c61574(puVar371);
  func_0x000107c61574(puVar372);
  func_0x000107c61574(pcVar373);
  func_0x000107c61574(pcVar374);
  func_0x000107c61574(puVar375);
  func_0x000107c61574(puVar376);
  func_0x000107c61574(puVar377);
  func_0x000107c61574(puVar378);
  func_0x000107c61574(puVar379);
  func_0x000107c61574(puVar380);
  func_0x000107c61574(puVar381);
  func_0x000107c61574(puVar382);
  func_0x000107c61574(puVar383);
  func_0x000107c61574(pcVar384);
  func_0x000107c61574(uVar385);
  func_0x000107c61574(uVar386);
  func_0x000107c61574(puVar387);
  func_0x000107c61574(puVar388);
  func_0x000107c61574(pcVar389);
  func_0x000107c61574(puVar390);
  func_0x000107c61574(puVar391);
  func_0x000107c61574(pcVar392);
  func_0x000107c61574(pcVar393);
  func_0x000107c61574(pcVar394);
  func_0x000107c61574(pcVar395);
  func_0x000107c61574(uVar396);
  func_0x000107c61574(uVar397);
  func_0x000107c61574(puVar398);
  func_0x000107c61574(puVar399);
  func_0x000107c61574(puVar400);
  func_0x000107c61574(puVar401);
  func_0x000107c61574(pcVar402);
  func_0x000107c61574(puVar403);
  func_0x000107c61574(pcVar404);
  func_0x000107c61574(puVar405);
  func_0x000107c61574(puVar406);
  func_0x000107c61574(pcVar407);
  func_0x000107c61574(puVar408);
  func_0x000107c61574(puVar409);
  func_0x000107c61574(puVar410);
  func_0x000107c61574(puVar411);
  func_0x000107c61574(puVar412);
  func_0x000107c61574(puVar413);
  func_0x000107c61574(puVar414);
  func_0x000107c61574(puVar415);
  func_0x000107c61574(puVar416);
  func_0x000107c61574(puVar417);
  func_0x000107c61574(puVar418);
  func_0x000107c61574(puVar419);
  func_0x000107c61574(puVar420);
  func_0x000107c61574(puVar421);
  func_0x000107c61574(puVar422);
  func_0x000107c61574(puVar423);
  func_0x000107c61574(puVar424);
  func_0x000107c61574(puVar425);
  func_0x000107c61574(pcVar426);
  func_0x000107c61574(puVar427);
  func_0x000107c61574(pcVar428);
  func_0x000107c61574(puVar429);
  func_0x000107c61574(puVar430);
  func_0x000107c61574(puVar431);
  func_0x000107c61574(puVar432);
  func_0x000107c61574(puVar433);
  func_0x000107c61574(puVar434);
  func_0x000107c61574(pcVar435);
  func_0x000107c61574(puVar436);
  func_0x000107c61574(puVar437);
  func_0x000107c61574(pcVar438);
  func_0x000107c61574(pcVar439);
  func_0x000107c61574(puVar440);
  func_0x000107c61574(puVar441);
  func_0x000107c61574(puVar442);
  func_0x000107c61574(puVar443);
  func_0x000107c61574(pcVar444);
  func_0x000107c61574(pcVar445);
  func_0x000107c61574(puVar446);
  func_0x000107c61574(puVar447);
  func_0x000107c61574(puVar448);
  func_0x000107c61574(puVar449);
  func_0x000107c61574(puVar450);
  func_0x000107c61574(pcVar451);
  func_0x000107c61574(pcVar452);
  func_0x000107c61574(pcVar453);
  func_0x000107c61574(pcVar454);
  func_0x000107c61574(puVar455);
  func_0x000107c61574(puVar456);
  func_0x000107c61574(pcVar457);
  func_0x000107c61574(puVar458);
  func_0x000107c61574(puVar459);
  func_0x000107c61574(puVar460);
  func_0x000107c61574(puVar461);
  func_0x000107c61574(pcVar462);
  func_0x000107c61574(puVar463);
  func_0x000107c61574(puVar464);
  func_0x000107c61574(puVar465);
  func_0x000107c61574(pcVar466);
  func_0x000107c61574(puVar467);
  func_0x000107c61574(puVar468);
  func_0x000107c61574(puVar469);
  func_0x000107c61574(pcVar470);
  func_0x000107c61574(uVar471);
  func_0x000107c61574(uVar472);
  func_0x000107c61574(pcVar473);
  func_0x000107c61574(puVar474);
  func_0x000107c61574(puVar475);
  func_0x000107c61574(puVar476);
  func_0x000107c61574(pcVar477);
  func_0x000107c61574(puVar478);
  func_0x000107c61574(puVar479);
  func_0x000107c61574(puVar480);
  func_0x000107c61574(puVar481);
  func_0x000107c61574(pcVar482);
  func_0x000107c61574(puVar483);
  func_0x000107c61574(puVar484);
  func_0x000107c61574(puVar485);
  func_0x000107c61574(puVar486);
  func_0x000107c61574(pcVar487);
  func_0x000107c61574(pcVar488);
  func_0x000107c61574(puVar489);
  func_0x000107c61574(puVar490);
  func_0x000107c61574(puVar491);
  func_0x000107c61574(pcVar492);
  func_0x000107c61574(pcVar493);
  func_0x000107c61574(pcVar494);
  func_0x000107c61574(puVar495);
  func_0x000107c61574(puVar496);
  func_0x000107c61574(puVar497);
  func_0x000107c61574(pcVar498);
  func_0x000107c61574(pcVar499);
  func_0x000107c61574(pcVar500);
  func_0x000107c61574(puVar501);
  func_0x000107c61574(puVar502);
  func_0x000107c61574(pcVar503);
  func_0x000107c61574(pcVar504);
  func_0x000107c61574(pcVar505);
  FUN_100082720("SCSystemScopeEntryPointProvider",0x1f,2);
  *extraout_x8 = pcVar507;
  return;
}



/* Entry: 10008a990; end: 100092263;  */

void FUN_10008a990(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 *puVar6;
  char *pcVar7;
  undefined8 *puVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  char *pcVar14;
  undefined8 *puVar15;
  char *pcVar16;
  char *pcVar17;
  char *pcVar18;
  char *pcVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  char *pcVar23;
  char *pcVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  char *pcVar28;
  char *pcVar29;
  char *pcVar30;
  char *pcVar31;
  char *pcVar32;
  char *pcVar33;
  char *pcVar34;
  char *pcVar35;
  char *pcVar36;
  char *pcVar37;
  char *pcVar38;
  char *pcVar39;
  char *pcVar40;
  char *pcVar41;
  char *pcVar42;
  char *pcVar43;
  char *pcVar44;
  char *pcVar45;
  char *pcVar46;
  char *pcVar47;
  undefined8 *puVar48;
  char *pcVar49;
  char *pcVar50;
  undefined8 *puVar51;
  char *pcVar52;
  char *pcVar53;
  char *pcVar54;
  char *pcVar55;
  char *pcVar56;
  char *pcVar57;
  undefined8 *puVar58;
  char *pcVar59;
  char *pcVar60;
  undefined8 *puVar61;
  char *pcVar62;
  char *pcVar63;
  char *pcVar64;
  char *pcVar65;
  char *pcVar66;
  char *pcVar67;
  undefined8 *puVar68;
  undefined8 *puVar69;
  char *pcVar70;
  char *pcVar71;
  char *pcVar72;
  char *pcVar73;
  char *pcVar74;
  undefined8 *puVar75;
  undefined8 *puVar76;
  undefined8 *puVar77;
  undefined8 *puVar78;
  char *pcVar79;
  char *pcVar80;
  char *pcVar81;
  char *pcVar82;
  char *pcVar83;
  char *pcVar84;
  char *pcVar85;
  char *pcVar86;
  char *pcVar87;
  char *pcVar88;
  char *pcVar89;
  char *pcVar90;
  char *pcVar91;
  undefined8 *puVar92;
  undefined8 *puVar93;
  char *pcVar94;
  char *pcVar95;
  undefined8 *puVar96;
  undefined8 *puVar97;
  char *pcVar98;
  undefined8 *puVar99;
  char *pcVar100;
  char *pcVar101;
  char *pcVar102;
  char *pcVar103;
  char *pcVar104;
  char *pcVar105;
  char *pcVar106;
  char *pcVar107;
  char *pcVar108;
  char *pcVar109;
  char *pcVar110;
  char *pcVar111;
  undefined8 *puVar112;
  undefined8 *puVar113;
  char *pcVar114;
  char *pcVar115;
  char *pcVar116;
  char *pcVar117;
  char *pcVar118;
  char *pcVar119;
  char *pcVar120;
  char *pcVar121;
  undefined8 *puVar122;
  char *pcVar123;
  char *pcVar124;
  undefined8 *puVar125;
  undefined8 *puVar126;
  char *pcVar127;
  undefined8 *puVar128;
  undefined8 *puVar129;
  char *pcVar130;
  char *pcVar131;
  char *pcVar132;
  undefined *puVar133;
  undefined *puVar134;
  undefined *puVar135;
  undefined8 *puVar136;
  char *pcVar137;
  char *pcVar138;
  char *pcVar139;
  char *pcVar140;
  char *pcVar141;
  char *pcVar142;
  char *pcVar143;
  char *pcVar144;
  undefined8 uVar145;
  code *pcVar146;
  char *pcVar147;
  char *pcVar148;
  char *pcVar149;
  char *pcVar150;
  undefined8 *puVar151;
  undefined8 *puVar152;
  char *pcVar153;
  char *pcVar154;
  char *pcVar155;
  char *pcVar156;
  char *pcVar157;
  char *pcVar158;
  char *pcVar159;
  char *pcVar160;
  undefined8 *puVar161;
  undefined8 *puVar162;
  char *pcVar163;
  undefined8 *puVar164;
  char *pcVar165;
  char *pcVar166;
  undefined8 *puVar167;
  undefined8 *puVar168;
  undefined8 *puVar169;
  char *pcVar170;
  char *pcVar171;
  char *pcVar172;
  char *pcVar173;
  char *pcVar174;
  char *pcVar175;
  undefined *puVar176;
  char *pcVar177;
  char *pcVar178;
  undefined8 *puVar179;
  char *pcVar180;
  char *pcVar181;
  char *pcVar182;
  char *pcVar183;
  char *pcVar184;
  undefined8 uVar185;
  char *pcVar186;
  char *pcVar187;
  char *pcVar188;
  char *pcVar189;
  char *pcVar190;
  char *pcVar191;
  char *pcVar192;
  char *pcVar193;
  char *pcVar194;
  char *pcVar195;
  char *pcVar196;
  char *pcVar197;
  undefined *puVar198;
  undefined8 *puVar199;
  char *pcVar200;
  char *pcVar201;
  undefined *puVar202;
  char *pcVar203;
  undefined8 *puVar204;
  char *pcVar205;
  char *pcVar206;
  char *pcVar207;
  char *pcVar208;
  char *pcVar209;
  undefined8 *puVar210;
  undefined8 *puVar211;
  undefined8 *puVar212;
  char *pcVar213;
  undefined8 *puVar214;
  undefined8 *puVar215;
  char *pcVar216;
  char *pcVar217;
  char *pcVar218;
  char *pcVar219;
  char *pcVar220;
  char *pcVar221;
  char *pcVar222;
  char *pcVar223;
  char *pcVar224;
  char *pcVar225;
  char *pcVar226;
  undefined8 *puVar227;
  undefined8 uVar228;
  undefined8 *puVar229;
  char *pcVar230;
  undefined8 *puVar231;
  char *pcVar232;
  char *pcVar233;
  char *pcVar234;
  undefined8 *puVar235;
  undefined8 *puVar236;
  undefined8 *puVar237;
  char *pcVar238;
  undefined8 uVar239;
  char *pcVar240;
  undefined8 *puVar241;
  undefined8 *puVar242;
  char *pcVar243;
  char *pcVar244;
  char *pcVar245;
  char *pcVar246;
  char *pcVar247;
  undefined8 *puVar248;
  undefined8 *puVar249;
  char *pcVar250;
  undefined8 *puVar251;
  char *pcVar252;
  char *pcVar253;
  undefined8 *puVar254;
  undefined8 *puVar255;
  undefined8 *puVar256;
  undefined8 *puVar257;
  char *pcVar258;
  undefined8 *puVar259;
  undefined8 *puVar260;
  undefined8 *puVar261;
  undefined8 *puVar262;
  undefined8 *puVar263;
  undefined8 *puVar264;
  char *pcVar265;
  undefined8 *puVar266;
  undefined8 *puVar267;
  undefined8 *puVar268;
  undefined8 *puVar269;
  undefined8 *puVar270;
  undefined8 *puVar271;
  undefined8 *puVar272;
  char *pcVar273;
  undefined8 *puVar274;
  undefined8 *puVar275;
  char *pcVar276;
  undefined8 *puVar277;
  undefined8 *puVar278;
  undefined8 *puVar279;
  char *pcVar280;
  char *pcVar281;
  undefined8 *puVar282;
  undefined8 *puVar283;
  undefined8 *puVar284;
  undefined8 *puVar285;
  undefined8 *puVar286;
  undefined8 *puVar287;
  char *pcVar288;
  undefined8 *puVar289;
  undefined8 *puVar290;
  undefined8 *puVar291;
  undefined8 *puVar292;
  undefined8 *puVar293;
  undefined8 *puVar294;
  undefined8 *puVar295;
  undefined8 *puVar296;
  undefined8 *puVar297;
  char *pcVar298;
  undefined8 *puVar299;
  undefined8 *puVar300;
  undefined8 *puVar301;
  char *pcVar302;
  undefined8 *puVar303;
  undefined8 *puVar304;
  undefined8 *puVar305;
  undefined8 *puVar306;
  undefined8 *puVar307;
  undefined8 *puVar308;
  undefined8 *puVar309;
  undefined *puVar310;
  undefined *puVar311;
  undefined8 *puVar312;
  char *pcVar313;
  undefined8 *puVar314;
  undefined8 *puVar315;
  undefined8 *puVar316;
  undefined8 *puVar317;
  char *pcVar318;
  char *pcVar319;
  undefined8 *puVar320;
  undefined8 *puVar321;
  undefined8 *puVar322;
  undefined8 *puVar323;
  undefined8 *puVar324;
  undefined8 *puVar325;
  char *pcVar326;
  char *pcVar327;
  char *pcVar328;
  undefined8 *puVar329;
  char *pcVar330;
  char *pcVar331;
  undefined8 *puVar332;
  char *pcVar333;
  char *pcVar334;
  char *pcVar335;
  undefined8 *puVar336;
  undefined8 *puVar337;
  char *pcVar338;
  char *pcVar339;
  char *pcVar340;
  undefined8 *puVar341;
  undefined8 *puVar342;
  char *pcVar343;
  undefined8 *puVar344;
  undefined8 *puVar345;
  char *pcVar346;
  undefined8 *puVar347;
  char *pcVar348;
  undefined8 *puVar349;
  undefined8 *puVar350;
  undefined8 *puVar351;
  char *pcVar352;
  char *pcVar353;
  char *pcVar354;
  undefined8 *puVar355;
  undefined8 *puVar356;
  char *pcVar357;
  char *pcVar358;
  char *pcVar359;
  undefined8 *puVar360;
  undefined8 *puVar361;
  undefined8 *puVar362;
  undefined8 *puVar363;
  undefined8 *puVar364;
  undefined8 *puVar365;
  undefined8 *puVar366;
  undefined8 *puVar367;
  undefined8 *puVar368;
  undefined8 *puVar369;
  undefined8 *puVar370;
  undefined8 *puVar371;
  undefined8 *puVar372;
  char *pcVar373;
  char *pcVar374;
  undefined8 *puVar375;
  undefined8 *puVar376;
  undefined *puVar377;
  undefined8 *puVar378;
  undefined8 *puVar379;
  undefined8 *puVar380;
  undefined8 *puVar381;
  undefined8 *puVar382;
  undefined8 *puVar383;
  char *pcVar384;
  undefined8 uVar385;
  undefined8 uVar386;
  undefined8 *puVar387;
  undefined8 *puVar388;
  char *pcVar389;
  undefined8 *puVar390;
  undefined8 *puVar391;
  char *pcVar392;
  char *pcVar393;
  char *pcVar394;
  char *pcVar395;
  undefined8 uVar396;
  undefined8 uVar397;
  undefined8 *puVar398;
  undefined8 *puVar399;
  undefined8 *puVar400;
  undefined8 *puVar401;
  char *pcVar402;
  undefined8 *puVar403;
  char *pcVar404;
  undefined8 *puVar405;
  undefined8 *puVar406;
  char *pcVar407;
  undefined8 *puVar408;
  undefined8 *puVar409;
  undefined8 *puVar410;
  undefined8 *puVar411;
  undefined8 *puVar412;
  undefined8 *puVar413;
  undefined8 *puVar414;
  undefined8 *puVar415;
  undefined8 *puVar416;
  undefined8 *puVar417;
  undefined8 *puVar418;
  undefined8 *puVar419;
  undefined8 *puVar420;
  undefined8 *puVar421;
  undefined8 *puVar422;
  undefined8 *puVar423;
  undefined8 *puVar424;
  undefined8 *puVar425;
  char *pcVar426;
  undefined8 *puVar427;
  char *pcVar428;
  undefined8 *puVar429;
  undefined8 *puVar430;
  undefined8 *puVar431;
  undefined8 *puVar432;
  undefined8 *puVar433;
  undefined8 *puVar434;
  char *pcVar435;
  undefined8 *puVar436;
  undefined8 *puVar437;
  char *pcVar438;
  char *pcVar439;
  undefined8 *puVar440;
  undefined8 *puVar441;
  undefined8 *puVar442;
  undefined8 *puVar443;
  char *pcVar444;
  char *pcVar445;
  undefined8 *puVar446;
  undefined8 *puVar447;
  undefined8 *puVar448;
  undefined8 *puVar449;
  undefined8 *puVar450;
  char *pcVar451;
  char *pcVar452;
  char *pcVar453;
  char *pcVar454;
  undefined8 *puVar455;
  undefined8 *puVar456;
  char *pcVar457;
  undefined8 *puVar458;
  undefined8 *puVar459;
  undefined8 *puVar460;
  undefined8 *puVar461;
  code *pcVar462;
  undefined8 *puVar463;
  undefined8 *puVar464;
  undefined8 *puVar465;
  char *pcVar466;
  undefined8 *puVar467;
  undefined8 *puVar468;
  undefined8 *puVar469;
  char *pcVar470;
  undefined8 uVar471;
  char *pcVar472;
  undefined8 *puVar473;
  undefined8 *puVar474;
  undefined8 *puVar475;
  char *pcVar476;
  undefined8 *puVar477;
  undefined8 *puVar478;
  undefined8 *puVar479;
  undefined8 *puVar480;
  char *pcVar481;
  undefined8 *puVar482;
  undefined8 *puVar483;
  undefined8 *puVar484;
  undefined8 *puVar485;
  char *pcVar486;
  char *pcVar487;
  undefined8 *puVar488;
  undefined8 *puVar489;
  undefined8 *puVar490;
  char *pcVar491;
  char *pcVar492;
  char *pcVar493;
  undefined8 *puVar494;
  undefined8 *puVar495;
  undefined8 *puVar496;
  char *pcVar497;
  char *pcVar498;
  char *pcVar499;
  undefined8 *puVar500;
  undefined8 *puVar501;
  char *pcVar502;
  code *pcVar503;
  code *pcVar504;
  undefined *puVar505;
  code *pcVar506;
  undefined8 *extraout_x8;
  undefined8 uVar507;
  undefined8 auStack_70 [2];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar507 = *param_1;
  FUN_1000285a8(0x112d9d2c8,&UNK_10d93da40);
  puVar1 = auStack_70;
  auStack_70[0] = uVar507;
  FUN_1000838ec();
  puVar2 = puVar1;
  FUN_100092298();
  pcVar3 = "AppStartExperimentReaderProtocolServiceProvider";
  FUN_100082720("AppStartExperimentReaderProtocolServiceProvider",0x2f,2);
  func_0x0001000922d8();
  FUN_100082720("AppStoreReceiptURLImplementationServiceProvider",0x2f,2);
  uVar4 = param_2;
  func_0x000100092318();
  pcVar5 = "ApplicationConfigurationServicesServiceProvider";
  FUN_100082720("ApplicationConfigurationServicesServiceProvider",0x2f,2);
  FUN_100092384();
  FUN_100082720("AutoOneTapLoginEventServiceProvider",0x23,2);
  puVar6 = puVar1;
  FUN_1000923e4();
  pcVar7 = "CameraApplicationStateServiceProvider";
  FUN_100082720("CameraApplicationStateServiceProvider",0x25,2);
  func_0x000100092430();
  FUN_100082720("CameraHardwareOwnershipRequesterServiceProvider",0x2f,2);
  puVar8 = puVar2;
  func_0x000100092470();
  pcVar9 = "CaptureDeviceAuthorizationCheckerServiceProvider";
  FUN_100082720("CaptureDeviceAuthorizationCheckerServiceProvider",0x30,2);
  func_0x0001000924bc();
  pcVar10 = "CircumstanceGrapheneContextManagerServiceProvider";
  FUN_100082720("CircumstanceGrapheneContextManagerServiceProvider",0x31,2);
  func_0x0001000924fc();
  pcVar11 = "CompositeConfigValueProviderParamsProviderSaberServiceProvider";
  FUN_100082720("CompositeConfigValueProviderParamsProviderSaberServiceProvider",0x3e,2);
  func_0x00010009253c();
  FUN_100082720("ConfigRegistryServiceImplementationServiceProvider",0x32,2);
  puVar12 = puVar2;
  FUN_10009257c();
  FUN_100082720("CppAppStartExperimentReaderProviderServiceProvider",0x32,2);
  puVar13 = puVar12;
  FUN_1000925e8();
  pcVar14 = "CppAppStartExperimentReaderProviderServicesServiceProvider";
  FUN_100082720("CppAppStartExperimentReaderProviderServicesServiceProvider",0x3a,2);
  FUN_100092624();
  FUN_100082720("CriticalSectionRegistrarServiceProvider",0x27,2);
  puVar15 = puVar1;
  func_0x000100092664();
  pcVar16 = "CurrentPageTrackerSaberServiceProvider";
  FUN_100082720("CurrentPageTrackerSaberServiceProvider",0x26,2);
  func_0x0001000926b0();
  pcVar17 = "DiskCacheLoggingImplementationServiceProvider";
  FUN_100082720("DiskCacheLoggingImplementationServiceProvider",0x2d,2);
  func_0x0001000926f0();
  pcVar18 = "FeatureStartupSignalerSaberServiceProvider";
  FUN_100082720("FeatureStartupSignalerSaberServiceProvider",0x2a,2);
  func_0x000100092730();
  pcVar19 = "FlipperServiceProvider";
  FUN_100082720("FlipperServiceProvider",0x16,2);
  func_0x000100092770();
  FUN_100082720("GhostImageServiceImplServiceProvider",0x24,2);
  puVar20 = puVar1;
  FUN_1000927b0();
  FUN_100082720("GoogleContactBookStoreImplServiceProviderWrapperServiceProvider",0x3f,2);
  puVar21 = puVar20;
  FUN_10009283c();
  FUN_100082720("GoogleContactBookStoreServicesServiceProvider",0x2d,2);
  puVar22 = puVar1;
  FUN_100092878();
  pcVar23 = "GoogleSignInServiceProviderWrapperServiceProvider";
  FUN_100082720("GoogleSignInServiceProviderWrapperServiceProvider",0x31,2);
  FUN_100092904();
  pcVar24 = "LegacyInternalKeychainServiceProvider";
  FUN_100082720("LegacyInternalKeychainServiceProvider",0x25,2);
  func_0x000100092944();
  FUN_100082720("LegacyNavigationControllerPrewarmerImplementationServiceProvider",0x40,2);
  puVar25 = puVar1;
  FUN_100092984();
  FUN_100082720("LocalNotificationSchedulingServiceProviderWrapperServiceProvider",0x40,2);
  puVar26 = puVar2;
  FUN_100092a10();
  FUN_100082720("MainActorThrottlerServiceProvider",0x21,2);
  puVar27 = puVar26;
  func_0x000100092a5c();
  pcVar28 = "MainActorThrottlerServicesLazySaberServiceProvider";
  FUN_100082720("MainActorThrottlerServicesLazySaberServiceProvider",0x32,2);
  FUN_100092ac8();
  pcVar29 = "ManagedCapturerStateCoordinatorServiceProvider";
  FUN_100082720("ManagedCapturerStateCoordinatorServiceProvider",0x2e,2);
  func_0x000100092b08();
  pcVar30 = "NetworkConnectivityMonitorFactoryImplServiceProvider";
  FUN_100082720("NetworkConnectivityMonitorFactoryImplServiceProvider",0x34,2);
  func_0x000100092b48();
  pcVar31 = "NetworkConnectivityMonitoringServiceProvider";
  FUN_100082720("NetworkConnectivityMonitoringServiceProvider",0x2c,2);
  func_0x000100092b88();
  pcVar32 = "NoDepBlizzardSaberServiceProvider";
  FUN_100082720("NoDepBlizzardSaberServiceProvider",0x21,2);
  func_0x000100092bc8();
  FUN_100082720("PendingAppNotificationStorageServiceProvider",0x2c,2);
  pcVar33 = pcVar32;
  func_0x000100092c08();
  pcVar34 = "PendingAppNotificationStorageSaberServiceProvider";
  FUN_100082720("PendingAppNotificationStorageSaberServiceProvider",0x31,2);
  FUN_100092c74();
  pcVar35 = "QueuePerformerServiceProvider";
  FUN_100082720("QueuePerformerServiceProvider",0x1d,2);
  func_0x000100092cb4();
  pcVar36 = "ContextAwareQueuePerformerThrottlerServiceProvider";
  FUN_100082720("ContextAwareQueuePerformerThrottlerServiceProvider",0x32,2);
  func_0x000100092cf4();
  pcVar37 = "SCCountryCodePickerScopeExposerSubjectServiceProvider";
  FUN_100082720("SCCountryCodePickerScopeExposerSubjectServiceProvider",0x35,2);
  func_0x000100092d34();
  pcVar38 = "SCDataUnavailableScopeExposerSubjectServiceProvider";
  FUN_100082720("SCDataUnavailableScopeExposerSubjectServiceProvider",0x33,2);
  func_0x000100092d74();
  pcVar39 = "SCEmergencyModeScopeExposerSubjectServiceProvider";
  FUN_100082720("SCEmergencyModeScopeExposerSubjectServiceProvider",0x31,2);
  func_0x000100092db4();
  pcVar40 = "SCLegacyNonCriticalStartupCommandsStartupCompleteScopeExposerSubjectServiceProvider";
  FUN_100082720("SCLegacyNonCriticalStartupCommandsStartupCompleteScopeExposerSubjectServiceProvider"
                ,0x53,2);
  func_0x000100092df4();
  pcVar41 = "SCLegacyWarmStartupScopeExposerSubjectServiceProvider";
  FUN_100082720("SCLegacyWarmStartupScopeExposerSubjectServiceProvider",0x35,2);
  func_0x000100092e34();
  pcVar42 = "SCNGOCodeVerificationScopeExposerSubjectServiceProvider";
  FUN_100082720("SCNGOCodeVerificationScopeExposerSubjectServiceProvider",0x37,2);
  func_0x000100092e74();
  pcVar43 = "SCUnauthenticatedScopeExposerSubjectServiceProvider";
  FUN_100082720("SCUnauthenticatedScopeExposerSubjectServiceProvider",0x33,2);
  func_0x000100092eb4();
  pcVar44 = "SCUserSessionScopeExposerSubjectServiceProvider";
  FUN_100082720("SCUserSessionScopeExposerSubjectServiceProvider",0x2f,2);
  func_0x000100092ef4();
  pcVar45 = "SCComposerSystemSessionImageLoadersRegistryScopeExposerSubjectServiceProvider";
  FUN_100082720("SCComposerSystemSessionImageLoadersRegistryScopeExposerSubjectServiceProvider",0x4d
                ,2);
  func_0x000100092f34();
  FUN_100082720("ActivationDeepLinkInfoServiceProvider",0x25,2);
  pcVar46 = pcVar45;
  func_0x000100092f74();
  pcVar47 = "ActivationDeepLinkInfoServicesServiceProvider";
  FUN_100082720("ActivationDeepLinkInfoServicesServiceProvider",0x2d,2);
  FUN_100092fe0();
  FUN_100082720("AppExtensionStorageServiceProvider",0x22,2);
  puVar48 = puVar2;
  func_0x000100093020();
  pcVar49 = "AppStartExperimentReaderServicesServiceProvider";
  FUN_100082720("AppStartExperimentReaderServicesServiceProvider",0x2f,2);
  FUN_10009308c();
  FUN_100082720("AsyncQueueServiceProvider",0x19,2);
  pcVar50 = pcVar49;
  func_0x0001000930cc();
  FUN_100082720("AsyncQueueServicesServiceProvider",0x21,2);
  puVar51 = puVar15;
  func_0x000100093118();
  pcVar52 = "AttributionServicesServiceProvider";
  FUN_100082720("AttributionServicesServiceProvider",0x22,2);
  FUN_100093184();
  pcVar53 = "BlizzardEventObserverServicesServiceProvider";
  FUN_100082720("BlizzardEventObserverServicesServiceProvider",0x2c,2);
  FUN_1000931e4();
  FUN_100082720("BlizzardGeoSignalManagerSaberServiceProvider",0x2c,2);
  pcVar54 = pcVar30;
  func_0x000100093224();
  pcVar55 = "ValdiNetworkStatusProviderServiceProvider";
  FUN_100082720("ValdiNetworkStatusProviderServiceProvider",0x29,2);
  func_0x000100093270();
  FUN_100082720("CameraLoggingQueueServiceProvider",0x21,2);
  pcVar56 = pcVar55;
  func_0x0001000932b0();
  pcVar57 = "CameraPerfLoggingSaberServiceProvider";
  FUN_100082720("CameraPerfLoggingSaberServiceProvider",0x25,2);
  func_0x0001000932fc();
  FUN_100082720("AuthContextDelegateProxyServiceProvider",0x27,2);
  puVar58 = puVar1;
  func_0x00010009333c();
  FUN_100082720("ComposerUICoverageServiceProvider",0x21,2);
  pcVar59 = pcVar34;
  func_0x000100093388();
  pcVar60 = "ConfigUtilServicesServiceProvider";
  FUN_100082720("ConfigUtilServicesServiceProvider",0x21,2);
  FUN_1000933f4();
  FUN_100082720("ConfigVersionProvidingServiceProvider",0x25,2);
  puVar61 = puVar1;
  FUN_100093434(puVar1,param_3);
  pcVar62 = "SCContextAwareTaskManagementSetupEntryPointWrapperServiceProvider";
  FUN_100082720("SCContextAwareTaskManagementSetupEntryPointWrapperServiceProvider",0x41,2);
  FUN_1000934d4();
  pcVar63 = "CrashMetricLoggerServiceProvider";
  FUN_100082720("CrashMetricLoggerServiceProvider",0x20,2);
  FUN_100093534();
  pcVar64 = "CremaLegacyBackdoorServicesServiceProvider";
  FUN_100082720("CremaLegacyBackdoorServicesServiceProvider",0x2a,2);
  func_0x000100093574();
  pcVar65 = "CremaLegacyBackdoorServicesWrapperServiceProvider";
  FUN_100082720("CremaLegacyBackdoorServicesWrapperServiceProvider",0x31,2);
  FUN_1000935d4();
  pcVar66 = "CremaServicesServiceProvider";
  FUN_100082720("CremaServicesServiceProvider",0x1c,2);
  FUN_100093634();
  FUN_100082720("CremaServicesWrapperServiceProvider",0x23,2);
  pcVar67 = pcVar49;
  FUN_100093694();
  FUN_100082720("CriticalSectionImplementationServiceProvider",0x2c,2);
  puVar68 = puVar1;
  FUN_1000936e0();
  FUN_100082720("SCDeferredDeepLinkStorageServiceProviderWrapperServiceProvider",0x3e,2);
  puVar69 = puVar68;
  FUN_10009376c();
  pcVar70 = "SCDeferredDeepLinkStorageServicesServiceProvider";
  FUN_100082720("SCDeferredDeepLinkStorageServicesServiceProvider",0x30,2);
  FUN_100093788();
  pcVar71 = "DeviceIdentifierServiceProvider";
  FUN_100082720("DeviceIdentifierServiceProvider",0x1f,2);
  func_0x0001000937c8();
  FUN_100082720("DeviceMotionManagerServiceProvider",0x22,2);
  pcVar72 = pcVar71;
  func_0x000100093808();
  pcVar73 = "DeviceMotionServicesServiceProvider";
  FUN_100082720("DeviceMotionServicesServiceProvider",0x23,2);
  func_0x000100093854();
  pcVar74 = "DeviceSamplingServiceProvider";
  FUN_100082720("DeviceSamplingServiceProvider",0x1d,2);
  func_0x000100093894();
  FUN_100082720("SystemScopedDirectoriesServiceProvider",0x26,2);
  puVar75 = puVar1;
  FUN_1000938d4();
  FUN_100082720("SCDiscoverFeedCardConversionServiceProviderWrapperServiceProvider",0x41,2);
  puVar76 = puVar75;
  FUN_100093960();
  FUN_100082720("SCDiscoverFeedCardConversionServicesServiceProvider",0x33,2);
  puVar77 = puVar1;
  FUN_10009399c();
  FUN_100082720("SCDynamicCdnServiceProviderWrapperServiceProvider",0x31,2);
  puVar78 = puVar77;
  FUN_100093a28();
  pcVar79 = "SCDynamicCdnServicesServiceProvider";
  FUN_100082720("SCDynamicCdnServicesServiceProvider",0x23,2);
  FUN_100093a44();
  pcVar80 = "FileBasedApplicationDataCheckerServiceProvider";
  FUN_100082720("FileBasedApplicationDataCheckerServiceProvider",0x2e,2);
  func_0x000100093a84();
  FUN_100082720("FlipperServicesServiceProvider",0x1e,2);
  pcVar81 = pcVar34;
  FUN_100093ae4(pcVar34,pcVar18);
  FUN_100082720("GrapheneManagerServiceProvider",0x1e,2);
  pcVar82 = pcVar81;
  FUN_100093b64();
  pcVar83 = "GrapheneRegistryServiceProvider";
  FUN_100082720("GrapheneRegistryServiceProvider",0x1f,2);
  func_0x000100093bb0();
  pcVar84 = "HTTPRequestModifierServiceProvider";
  FUN_100082720("HTTPRequestModifierServiceProvider",0x22,2);
  func_0x000100093bf0();
  FUN_100082720("InternalDistributeServiceProvider",0x21,2);
  pcVar85 = pcVar84;
  func_0x000100093c30();
  pcVar86 = "SCInternalDistributeServiceWrapperServiceProvider";
  FUN_100082720("SCInternalDistributeServiceWrapperServiceProvider",0x31,2);
  func_0x000100093c7c();
  FUN_100082720("SCInternalLogWriterServiceProvider",0x22,2);
  pcVar87 = pcVar86;
  FUN_100093cbc();
  pcVar88 = "SCInternalShakeToReportServicesServiceProvider";
  FUN_100082720("SCInternalShakeToReportServicesServiceProvider",0x2e,2);
  FUN_100093d48();
  FUN_100082720("LensCollectionsMockServiceProvider",0x22,2);
  pcVar89 = pcVar88;
  func_0x000100093d88();
  pcVar90 = "SCLensCollectionsMockServicesWrapperServiceProvider";
  FUN_100082720("SCLensCollectionsMockServicesWrapperServiceProvider",0x33,2);
  FUN_100093df4();
  FUN_100082720("LensFavoritesMockedServicesServiceProvider",0x2a,2);
  pcVar91 = pcVar90;
  func_0x000100093e34();
  FUN_100082720("SCLensFavoritesMockedServicesWrapperServiceProvider",0x33,2);
  puVar92 = puVar1;
  FUN_100093ea0();
  FUN_100082720("SCLensPreferencesStorageServiceProviderWrapperServiceProvider",0x3d,2);
  puVar93 = puVar92;
  FUN_100093f2c();
  pcVar94 = "SCLensPreferencesStorageServicesServiceProvider";
  FUN_100082720("SCLensPreferencesStorageServicesServiceProvider",0x2f,2);
  FUN_100093f48();
  pcVar95 = "LensUnlockerMockServicesServiceProvider";
  FUN_100082720("LensUnlockerMockServicesServiceProvider",0x27,2);
  func_0x000100093f88();
  FUN_100082720("LensUnlockerMockUpdaterServicesServiceProvider",0x2e,2);
  puVar96 = puVar25;
  FUN_100093fc8();
  FUN_100082720("SCLocalNotificationSchedulingServicesServiceProvider",0x34,2);
  puVar97 = puVar1;
  FUN_100094004();
  pcVar98 = "SCLogSessionStartEntryPointWrapperServiceProvider";
  FUN_100082720("SCLogSessionStartEntryPointWrapperServiceProvider",0x31,2);
  FUN_100094090();
  FUN_100082720("MainThreadIdentificationServiceProvider",0x27,2);
  puVar99 = puVar1;
  func_0x0001000940d0();
  pcVar100 = "ManagerApplicationDataCheckerServiceProvider";
  FUN_100082720("ManagerApplicationDataCheckerServiceProvider",0x2c,2);
  func_0x00010009411c();
  pcVar101 = "MemoryUsageInfoProviderImplementationServiceProvider";
  FUN_100082720("MemoryUsageInfoProviderImplementationServiceProvider",0x34,2);
  func_0x00010009415c();
  FUN_100082720("MemoryUsageMetadataStoreServiceProvider",0x27,2);
  pcVar102 = pcVar100;
  func_0x00010009419c();
  pcVar103 = "MemoryUsageServicesServiceProvider";
  FUN_100082720("MemoryUsageServicesServiceProvider",0x22,2);
  func_0x0001000941e8();
  pcVar104 = "ClientSwitchboardConfigFetcherServiceProvider";
  FUN_100082720("ClientSwitchboardConfigFetcherServiceProvider",0x2d,2);
  func_0x000100094228();
  pcVar105 = "ContentManagerNetworkMappingProviderImplServiceProvider";
  FUN_100082720("ContentManagerNetworkMappingProviderImplServiceProvider",0x37,2);
  func_0x000100094268();
  FUN_100082720("NSDataWriterServiceProvider",0x1b,2);
  pcVar106 = pcVar105;
  func_0x0001000942a8();
  FUN_100082720("NSDataWriterServicesServiceProvider",0x23,2);
  pcVar107 = pcVar104;
  func_0x0001000942f4();
  FUN_100082720("NetworkMappingProviderServicesServiceProvider",0x2d,2);
  pcVar108 = pcVar31;
  func_0x000100094340();
  pcVar109 = "NoDepBlizzardServicesServiceProvider";
  FUN_100082720("NoDepBlizzardServicesServiceProvider",0x24,2);
  FUN_1000943ac();
  pcVar110 = "NoDepSpectrumImplServiceProvider";
  FUN_100082720("NoDepSpectrumImplServiceProvider",0x20,2);
  func_0x0001000943ec();
  FUN_100082720("SCNormalizedSpamCheckURLFinderSaberServiceProvider",0x32,2);
  pcVar111 = pcVar67;
  func_0x00010009442c();
  FUN_100082720("CriticalSectionObservableServiceProvider",0x28,2);
  puVar112 = puVar1;
  FUN_100094478(puVar1,pcVar108,puVar51);
  FUN_100082720("SCPagePageViewReporterServiceProviderWrapperServiceProvider",0x3b,2);
  puVar113 = puVar112;
  FUN_100094530();
  pcVar114 = "SCPagePageViewReporterServicesServiceProvider";
  FUN_100082720("SCPagePageViewReporterServicesServiceProvider",0x2d,2);
  FUN_10009459c();
  FUN_100082720("PropertyHandlerRegistrySaberServiceProvider",0x2b,2);
  pcVar115 = pcVar114;
  func_0x0001000945dc();
  pcVar116 = "PropertyHandlerRegistryServicesServiceProvider";
  FUN_100082720("PropertyHandlerRegistryServicesServiceProvider",0x2e,2);
  func_0x000100094628();
  pcVar117 = "ProtectedDataAvailabilityServiceImplementationServiceProvider";
  FUN_100082720("ProtectedDataAvailabilityServiceImplementationServiceProvider",0x3d,2);
  func_0x000100094668();
  pcVar118 = "RegistrationSourceSaberServiceProvider";
  FUN_100082720("RegistrationSourceSaberServiceProvider",0x26,2);
  func_0x0001000946a8();
  FUN_100082720("SQLiteLoggerServiceProvider",0x1b,2);
  pcVar119 = pcVar34;
  func_0x0001000946e8();
  FUN_100082720("SecretFeatureCheckingCheckerAndUpdaterServiceProvider",0x35,2);
  pcVar120 = pcVar119;
  func_0x000100094734();
  FUN_100082720("SecretFeatureCheckingSaberServiceProvider",0x29,2);
  pcVar121 = pcVar31;
  FUN_1000947a0();
  FUN_100082720("SettingsEventLoggerServicesServiceProvider",0x2a,2);
  puVar122 = puVar1;
  FUN_1000947ec(puVar1,param_3);
  pcVar123 = "SCStartupNotificationHandlerEntryPointWrapperServiceProvider";
  FUN_100082720("SCStartupNotificationHandlerEntryPointWrapperServiceProvider",0x3c,2);
  FUN_10009488c();
  FUN_100082720("SystemInstallSaberServiceProvider",0x21,2);
  pcVar124 = pcVar74;
  func_0x0001000948cc();
  FUN_100082720("SystemScopedDirectoriesServicesServiceProvider",0x2e,2);
  puVar125 = puVar1;
  FUN_100094918(puVar1,pcVar106);
  FUN_100082720("SCTemporaryFileWriterServiceProviderWrapperServiceProvider",0x3a,2);
  puVar126 = puVar125;
  FUN_1000949b8();
  pcVar127 = "SCTemporaryFileWriterServicesServiceProvider";
  FUN_100082720("SCTemporaryFileWriterServicesServiceProvider",0x2c,2);
  FUN_100094a24();
  FUN_100082720("UncompressedLocalizedStringLookupSaberServiceProvider",0x35,2);
  puVar128 = puVar1;
  FUN_100094a64(puVar1,puVar2);
  FUN_100082720("UpdatesFrequencyServiceProvider",0x1f,2);
  puVar129 = puVar128;
  FUN_100094ae4();
  pcVar130 = "UpdatesFrequencyServicesServiceProvider";
  FUN_100082720("UpdatesFrequencyServicesServiceProvider",0x27,2);
  func_0x000100094b30();
  pcVar131 = "ZstdLocalizedStringLookupSaberServiceProvider";
  FUN_100082720("ZstdLocalizedStringLookupSaberServiceProvider",0x2d,2);
  func_0x000100094b70();
  FUN_100082720("SIGFIFONotificationPoolServiceProvider",0x26,2);
  pcVar132 = pcVar131;
  func_0x000100094bb0();
  FUN_100082720("SIGNotificationServicesServiceProvider",0x26,2);
  FUN_1000285a8(0x112d9d2d0,&UNK_10d93da48);
  puVar133 = &UNK_10143475c;
  FUN_1000823a8(&UNK_10143475c,0);
  FUN_100082720("DeepLinkTransformerSaberPluginRegistryServiceProvider",0x35,2);
  FUN_1000285a8(0x112d9d2d8,&UNK_10d93da50);
  func_0x000107c6157c(pcVar52);
  puVar134 = &UNK_101434320;
  FUN_1000823a8(&UNK_101434320,pcVar52);
  FUN_100082720("SCCremaLegacyBackdoorPluginRegistryServiceProvider",0x32,2);
  FUN_1000285a8(0x112d9d2e0,&UNK_10d93da58);
  puVar135 = &UNK_1014348e4;
  FUN_1000823a8(&UNK_1014348e4,0);
  FUN_100082720("SCDeepLinkUnauthProcessorPluginRegistryServiceProvider",0x36,2);
  puVar136 = puVar51;
  FUN_100094c2c();
  FUN_100082720("SCNGOCodeVerificationScopedFactoryServiceProvider",0x31,2);
  FUN_100094c98(param_4,pcVar31,pcVar73);
  FUN_100082720("SaberStartupMetricsReporterServiceProvider",0x2a,2);
  pcVar137 = pcVar36;
  FUN_100094d30();
  FUN_100082720("SCCountryCodePickerScopeExposerObservableServiceProvider",0x38,2);
  pcVar138 = pcVar37;
  FUN_100094d9c();
  FUN_100082720("SCDataUnavailableScopeExposerObservableServiceProvider",0x36,2);
  pcVar139 = pcVar38;
  func_0x000100094db8();
  FUN_100082720("SCEmergencyModeScopeExposerObservableServiceProvider",0x34,2);
  pcVar140 = pcVar39;
  func_0x000100094dd4();
  FUN_100082720("SCLegacyNonCriticalStartupCommandsStartupCompleteScopeExposerObservableServiceProvider"
                ,0x56,2);
  pcVar141 = pcVar40;
  func_0x000100094df0();
  FUN_100082720("SCLegacyWarmStartupScopeExposerObservableServiceProvider",0x38,2);
  pcVar142 = pcVar41;
  func_0x000100094e0c();
  FUN_100082720("SCNGOCodeVerificationScopeExposerObservableServiceProvider",0x3a,2);
  pcVar143 = pcVar42;
  func_0x000100094e28();
  FUN_100082720("SCUnauthenticatedScopeExposerObservableServiceProvider",0x36,2);
  pcVar144 = pcVar43;
  func_0x000100094e44();
  FUN_100082720("SCUserSessionScopeExposerObservableServiceProvider",0x32,2);
  uVar145 = param_2;
  FUN_100094e60(param_2,puVar1,param_5,puVar2);
  FUN_100082720("ScopeGraphLauncherServiceImplementationServiceProvider",0x36,2);
  FUN_1000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar146 = FUN_100a0f52c;
  FUN_1000823a8(FUN_100a0f52c,0);
  pcVar147 = "SCSystemScopedServicesCleanupRelayServiceProvider";
  FUN_100082720("SCSystemScopedServicesCleanupRelayServiceProvider",0x31,2);
  FUN_100094f44();
  pcVar148 = "ServerNetworkClockProvidingServiceProvider";
  FUN_100082720("ServerNetworkClockProvidingServiceProvider",0x2a,2);
  func_0x000100094f84();
  FUN_100082720("ShakeToReportInfoProviderRegistryServiceProvider",0x30,2);
  pcVar149 = pcVar73;
  FUN_100094fc4();
  pcVar150 = "ShouldReportUserTraceServiceProvider";
  FUN_100082720("ShouldReportUserTraceServiceProvider",0x24,2);
  FUN_100095030();
  FUN_100082720("LegacySnapchatAPIHostServiceProvider",0x24,2);
  puVar151 = puVar1;
  FUN_100095070();
  FUN_100082720("SnapchatWatchServiceProviderWrapperServiceProvider",0x32,2);
  puVar152 = puVar151;
  FUN_1000950fc();
  FUN_100082720("SnapchatWatchServicesServiceProvider",0x24,2);
  pcVar153 = pcVar109;
  FUN_100095138();
  FUN_100082720("NoDepSpectrumServiceProvider",0x1c,2);
  pcVar154 = pcVar14;
  func_0x000100095184();
  FUN_100082720("StartupCompleteTrackerImplementationServiceProvider",0x33,2);
  pcVar155 = pcVar19;
  FUN_1000951d0(pcVar19,puVar76);
  pcVar156 = "StrSystemScopeGraphBridgeServicesServiceProvider";
  FUN_100082720("StrSystemScopeGraphBridgeServicesServiceProvider",0x30,2);
  FUN_100095294();
  pcVar157 = "SystemApplicationLifeCycleListenerServiceProvider";
  FUN_100082720("SystemApplicationLifeCycleListenerServiceProvider",0x31,2);
  FUN_100095340();
  FUN_100082720("SystemCronetServicesSaberServiceProvider",0x28,2);
  pcVar158 = pcVar74;
  FUN_1000953a0();
  FUN_100082720("SystemDocObjectContextServiceProvider",0x25,2);
  pcVar159 = pcVar74;
  func_0x0001000953ec();
  FUN_100082720("SystemPreferencesServiceProvider",0x20,2);
  pcVar160 = pcVar157;
  func_0x000100095438();
  FUN_100082720("UnifiedGRPCClientFactoryServiceProvider",0x27,2);
  puVar161 = puVar1;
  FUN_100095484();
  FUN_100082720("TranscoderServiceProviderWrapperServiceProvider",0x2f,2);
  puVar162 = puVar161;
  FUN_100095510();
  FUN_100082720("TranscoderServicesServiceProvider",0x21,2);
  pcVar163 = pcVar64;
  FUN_10009554c(pcVar64,pcVar66);
  FUN_100082720("TstSystemScopeGraphBridgeServicesServiceProvider",0x30,2);
  puVar164 = puVar1;
  FUN_100095610(puVar1,puVar152);
  pcVar165 = "WatchDetectorServiceProviderWrapperServiceProvider";
  FUN_100082720("WatchDetectorServiceProviderWrapperServiceProvider",0x32,2);
  FUN_1000956b0();
  pcVar166 = "WebBrowsingScopeServicesServiceProvider";
  FUN_100082720("WebBrowsingScopeServicesServiceProvider",0x27,2);
  FUN_100095710();
  FUN_100082720("LegacyWorkServiceImplementationServiceProvider",0x2e,2);
  puVar167 = puVar1;
  FUN_100095750(puVar1,pcVar111,puVar26);
  FUN_100082720("AppLifeCycleManagerServiceProvider",0x22,2);
  puVar168 = puVar1;
  func_0x0001000957d0(puVar1,pcVar50);
  FUN_100082720("AsyncQueueServicesProviderWrapperServiceProvider",0x30,2);
  puVar169 = puVar1;
  FUN_100095870(puVar1,pcVar53);
  FUN_100082720("BlizzardGeoSignalReceiverPublisherEntryPointWrapperServiceProvider",0x42,2);
  pcVar170 = pcVar52;
  FUN_100095910();
  FUN_100082720("BlizzardInspectorEventCollectorServiceProvider",0x2e,2);
  pcVar171 = pcVar34;
  FUN_10009595c(pcVar34,pcVar14,pcVar159);
  FUN_100082720("COFAppStartupViolationMonitorImplServiceProvider",0x30,2);
  pcVar172 = pcVar171;
  FUN_100095a14();
  FUN_100082720("COFAppStartupViolationMonitorServiceProvider",0x2c,2);
  pcVar173 = pcVar159;
  func_0x000100095a60();
  FUN_100082720("CarrierNetworkInfoServiceProvider",0x21,2);
  pcVar174 = pcVar103;
  func_0x000100095aac();
  FUN_100082720("ClientSwitchboardServicesServiceProvider",0x28,2);
  pcVar175 = pcVar67;
  FUN_100095b18();
  FUN_100082720("CriticalSectionRegistryServiceProvider",0x26,2);
  puVar176 = puVar133;
  func_0x000100095b64();
  FUN_100082720("DeepLinkTransformerPluginSaberServiceServiceProvider",0x34,2);
  pcVar177 = pcVar17;
  FUN_100095bd0();
  FUN_100082720("FeatureStartupSignalServicesServiceProvider",0x2b,2);
  pcVar178 = pcVar80;
  FUN_100095c3c();
  FUN_100082720("FlipperServicesWrapperServiceProvider",0x25,2);
  puVar179 = puVar22;
  FUN_100095ca8();
  FUN_100082720("GoogleSignInServiceServiceProvider",0x22,2);
  pcVar180 = pcVar31;
  FUN_100095ce4();
  FUN_100082720("NetworkBandwidthEstimatorServiceProvider",0x28,2);
  pcVar181 = pcVar44;
  FUN_100095d30();
  FUN_100082720("SCComposerSystemSessionImageLoadersRegistryScopeExposerObservableServiceProvider",
                0x50,2);
  pcVar182 = pcVar85;
  FUN_100095d4c();
  FUN_100082720("RlsSystemScopeGraphBridgeServicesServiceProvider",0x30,2);
  pcVar183 = pcVar159;
  FUN_100095db8();
  FUN_100082720("AppInsightsMetadataStorageSaberServiceProvider",0x2e,2);
  pcVar184 = pcVar74;
  FUN_100095e04(pcVar74,pcVar159,pcVar105,puVar1);
  FUN_100082720("AppTerminationShimServiceProvider",0x21,2);
  uVar185 = param_2;
  func_0x000100095ea8(param_2,puVar99,pcVar79);
  FUN_100082720("ApplicationDataCheckerServiceProvider",0x25,2);
  pcVar186 = pcVar158;
  FUN_100095f40(pcVar158,pcVar159);
  FUN_100082720("ApplicationStorageServicesServiceProvider",0x29,2);
  pcVar187 = pcVar159;
  FUN_100095fc0();
  FUN_100082720("AuthenticationSessionInfoProviderSaberServiceProvider",0x35,2);
  pcVar188 = pcVar159;
  FUN_10009602c();
  FUN_100082720("AuthenticationSessionPayloadProviderSaberServiceProvider",0x38,2);
  pcVar189 = pcVar187;
  FUN_100096048(pcVar187,pcVar188);
  FUN_100082720("AuthenticationSessionSaberServiceProvider",0x29,2);
  pcVar190 = pcVar82;
  FUN_1000960f4(pcVar82,pcVar34);
  FUN_100082720("CircumstanceEngineReadinessMetricEmitterServiceProvider",0x37,2);
  pcVar191 = pcVar190;
  FUN_100096174();
  FUN_100082720("CircumstanceEngineReadinessMetricServicesServiceProvider",0x38,2);
  pcVar192 = pcVar131;
  FUN_1000961c0();
  FUN_100082720("ComposerNotificationPresenterFactoryServiceProvider",0x33,2);
  pcVar193 = pcVar82;
  FUN_10009622c();
  FUN_100082720("ConfigMetricServiceProvider",0x1b,2);
  pcVar194 = pcVar193;
  FUN_100096278(pcVar193,pcVar14,pcVar154);
  FUN_100082720("ConfigMetricLoggerServiceProvider",0x21,2);
  pcVar195 = pcVar193;
  func_0x0001000962f8(pcVar193,pcVar194);
  FUN_100082720("ConfigMetricServicesServiceProvider",0x23,2);
  pcVar196 = pcVar190;
  FUN_1000963a4(pcVar190,pcVar193,pcVar153,pcVar59);
  FUN_100082720("ConfigRepositoryNetworkServiceProvider",0x26,2);
  pcVar197 = pcVar159;
  FUN_100096448(pcVar159,puVar1);
  FUN_100082720("CrashAppStateTrackerServiceProvider",0x23,2);
  puVar198 = puVar134;
  FUN_1000964c8();
  FUN_100082720("SCCremaLegacyBackdoorPluginSaberServiceServiceProvider",0x36,2);
  puVar199 = puVar1;
  FUN_100096534(puVar1,pcVar63,puVar198);
  FUN_100082720("SCCremaLegacyServerLauncherServiceProvider",0x2a,2);
  pcVar200 = pcVar111;
  FUN_1000965ec();
  FUN_100082720("CriticalSectionObservableServiceProvider",0x28,2);
  pcVar201 = pcVar175;
  FUN_100096658();
  FUN_100082720("CriticalSectionRegistryServiceProvider",0x26,2);
  puVar202 = puVar135;
  FUN_1000966c4();
  FUN_100082720("SCDeepLinkUnauthProcessorPluginSaberServiceServiceProvider",0x3a,2);
  pcVar203 = pcVar70;
  FUN_100096730(pcVar70,pcVar73);
  FUN_100082720("DeviceInfoServicesServiceProvider",0x21,2);
  puVar204 = puVar2;
  FUN_1000967b0(puVar2,pcVar127,pcVar130);
  FUN_100082720("DynamicLocalizedStringLookupServiceProvider",0x2b,2);
  pcVar205 = pcVar31;
  func_0x000100096848(pcVar31,pcVar70,pcVar193,puVar2);
  FUN_100082720("ExperimentStoreSaberServiceProvider",0x23,2);
  pcVar206 = pcVar205;
  FUN_1000968ec();
  FUN_100082720("ExperimentStoringSaberServiceProvider",0x25,2);
  pcVar207 = pcVar81;
  func_0x000100096938();
  FUN_100082720("GrapheneFlusherServiceProvider",0x1e,2);
  pcVar208 = pcVar207;
  FUN_100096984(pcVar207,pcVar82);
  FUN_100082720("GrapheneServiceProvider",0x17,2);
  pcVar209 = pcVar174;
  FUN_100096a04();
  FUN_100082720("HTTPMetadataServiceProvider",0x1b,2);
  puVar210 = puVar2;
  FUN_100096a50(puVar2,puVar204);
  FUN_100082720("LazyLocalizedStringLookupSaberServiceProvider",0x2d,2);
  puVar211 = puVar1;
  func_0x000100096ad0(puVar1,pcVar140);
  FUN_100082720("SCLegacyCriticalStartupCommandsEntryPointWrapperServiceProvider",0x3f,2);
  puVar212 = puVar1;
  FUN_100096b70(puVar1,pcVar116,pcVar141);
  FUN_100082720("SCLegacyWarmStartupServicesEntryPointWrapperServiceProvider",0x3b,2);
  pcVar213 = pcVar94;
  FUN_100096c28(pcVar94,pcVar95);
  FUN_100082720("SCLensUnlockerMockServicesWrapperServiceProvider",0x30,2);
  puVar214 = puVar210;
  FUN_100096cf4();
  FUN_100082720("LocalizationServicesServiceProvider",0x23,2);
  puVar215 = puVar136;
  FUN_100096d60();
  FUN_100082720("SCNGOCodeVerificationScopeServicesServiceProvider",0x31,2);
  pcVar216 = pcVar180;
  FUN_100096dcc();
  FUN_100082720("NetworkBandwidthEstimatorServicesServiceProvider",0x30,2);
  pcVar217 = pcVar30;
  FUN_100096e38(pcVar30,pcVar29,pcVar173,pcVar147);
  FUN_100082720("NetworkConnectivityMonitorServicesServiceProvider",0x31,2);
  pcVar218 = pcVar153;
  FUN_100096efc();
  FUN_100082720("NoDepSpectrumServicesServiceProvider",0x24,2);
  pcVar219 = pcVar186;
  FUN_100096f68();
  FUN_100082720("RegistrationFlowUUIDSaberServiceProvider",0x28,2);
  pcVar220 = pcVar186;
  FUN_100096fd4();
  FUN_100082720("RegistrationLastPageSaberServiceProvider",0x28,2);
  pcVar221 = pcVar219;
  FUN_100096ff0(pcVar219,pcVar220,pcVar117);
  FUN_100082720("RegistrationSessionSaberServiceProvider",0x27,2);
  pcVar222 = pcVar148;
  FUN_100097088();
  FUN_100082720("SCShakeToReportInfoProviderServiceServiceProvider",0x31,2);
  pcVar223 = pcVar209;
  FUN_1000970c4(pcVar209,pcVar83);
  FUN_100082720("SystemNetworkServiceProvider",0x1c,2);
  pcVar224 = pcVar34;
  FUN_100097144(pcVar34,pcVar35,puVar167);
  FUN_100082720("TaskManagementServicesServiceProvider",0x25,2);
  pcVar225 = pcVar159;
  FUN_1000971fc();
  FUN_100082720("UserIPInferredLocationServiceProvider",0x25,2);
  pcVar226 = pcVar225;
  func_0x000100097248();
  FUN_100082720("UserIPInferredLocationServicesServiceProvider",0x2d,2);
  puVar227 = puVar164;
  FUN_100097294();
  FUN_100082720("SCWatchDetectorServicesServiceProvider",0x26,2);
  uVar228 = uVar145;
  FUN_100097300();
  FUN_100082720("ScopeGraphLauncherServiceProvider",0x21,2);
  puVar229 = puVar1;
  func_0x00010009736c(puVar1,pcVar208);
  FUN_100082720("SnapchatAppShortcutDependencyEntryPointWrapperServiceProvider",0x3d,2);
  pcVar230 = pcVar223;
  FUN_10009740c();
  FUN_100082720("SpeedTestServiceProvider",0x18,2);
  puVar231 = puVar168;
  FUN_100097478();
  FUN_100082720("SwiftAsyncQueueServicesServiceProvider",0x26,2);
  FUN_100097504(param_6,pcVar171,pcVar31,pcVar73);
  FUN_100082720("AppStartupViolationMonitorServiceProvider",0x29,2);
  pcVar232 = pcVar184;
  FUN_1000975a8();
  FUN_100082720("AppTerminationProviderServiceProvider",0x25,2);
  pcVar233 = pcVar184;
  func_0x0001000975f4();
  FUN_100082720("AppTerminatorServiceProvider",0x1c,2);
  pcVar234 = pcVar196;
  FUN_100097640(pcVar196,puVar2,pcVar153);
  FUN_100082720("CofSyncEventLoggerServiceProvider",0x21,2);
  puVar235 = puVar1;
  func_0x0001000976d8(puVar1,pcVar217,pcVar195,puVar48);
  FUN_100082720("ConfigRecoveryHelpersEntryPointWrapperServiceProvider",0x35,2);
  puVar236 = puVar227;
  FUN_1000977d8();
  FUN_100082720("ConvoSystemScopeGraphBridgeServicesServiceProvider",0x32,2);
  puVar237 = puVar1;
  FUN_100097844(puVar1,puVar179);
  FUN_100082720("GoogleContactPermissionInfoServicesProviderWrapperServiceProvider",0x41,2);
  pcVar238 = pcVar81;
  FUN_1000978e4(pcVar81,pcVar223);
  FUN_100082720("PlatformGrapheneServiceImplementationServiceProvider",0x34,2);
  uVar239 = uVar4;
  FUN_100097964(uVar4,pcVar203);
  FUN_100082720("MchSystemScopeGraphBridgeServicesServiceProvider",0x30,2);
  pcVar240 = pcVar47;
  FUN_100097a28(pcVar47,pcVar186);
  FUN_100082720("MmSystemScopeGraphBridgeServicesServiceProvider",0x2f,2);
  puVar241 = puVar1;
  FUN_100097aec(puVar1,pcVar223,pcVar217);
  FUN_100082720("NetworkRegulationEntryPointWrapperServiceProvider",0x31,2);
  puVar242 = puVar1;
  FUN_100097ba4(puVar1,pcVar222);
  FUN_100082720("PlayerServicesEntryPointWrapperServiceProvider",0x2e,2);
  pcVar243 = pcVar186;
  FUN_100097c44();
  FUN_100082720("RegistrationDeviceInfoServiceProvider",0x25,2);
  pcVar244 = pcVar183;
  FUN_100097cb0();
  FUN_100082720("AppInsightsMetadataServicesServiceProvider",0x2a,2);
  pcVar245 = pcVar196;
  FUN_100097d1c();
  FUN_100082720("ConfigNetworkServicesServiceProvider",0x24,2);
  pcVar246 = pcVar244;
  FUN_100097d68(pcVar244,pcVar31);
  FUN_100082720("BlizzardCrashLoggerServiceProvider",0x22,2);
  pcVar247 = pcVar244;
  func_0x000100097de8(pcVar244,puVar15);
  FUN_100082720("LastPageViewPersistenceServiceProvider",0x26,2);
  puVar248 = puVar1;
  FUN_100097e68(puVar1,pcVar186,pcVar208);
  FUN_100082720("SCDeviceCheckServiceProviderWrapperServiceProvider",0x32,2);
  puVar249 = puVar248;
  FUN_100097f54();
  FUN_100082720("SCDeviceCheckServicesServiceProvider",0x24,2);
  pcVar250 = pcVar206;
  FUN_100097fc0();
  FUN_100082720("ExperimentLoggerSaberServiceProvider",0x24,2);
  puVar251 = puVar1;
  FUN_10009802c(puVar1,pcVar222);
  FUN_100082720("SCExtensionShakeToReportInfoProviderEntryPointWrapperServiceProvider",0x44,2);
  pcVar252 = pcVar208;
  FUN_1000980f8(pcVar208,pcVar186);
  FUN_100082720("ForcedLogoutAuthenticationStateTrackerServiceProvider",0x35,2);
  pcVar253 = pcVar208;
  func_0x000100098178(pcVar208,pcVar159);
  FUN_100082720("ForcedLogoutLegacyUserStateLoggerServiceProvider",0x30,2);
  puVar254 = puVar1;
  FUN_100098224(puVar1,pcVar208,pcVar223);
  FUN_100082720("SCGrapheneNetworkEntryPointWrapperServiceProvider",0x31,2);
  puVar255 = puVar1;
  FUN_1000982dc(puVar1,pcVar224);
  FUN_100082720("SCGraphenePerformanceLoggerEntryPointWrapperServiceProvider",0x3b,2);
  puVar256 = puVar255;
  FUN_10009837c();
  FUN_100082720("SCGraphenePerformanceLoggerServicesServiceProvider",0x32,2);
  puVar257 = puVar212;
  FUN_1000983e8();
  FUN_100082720("SCLegacyWarmStartupInitiatorServicesServiceProvider",0x33,2);
  pcVar258 = pcVar244;
  FUN_100098454(pcVar244,pcVar100,pcVar101,puVar48,puVar1);
  FUN_100082720("MemoryUsageMetadataServiceProvider",0x22,2);
  puVar259 = puVar1;
  FUN_100098510(puVar1,pcVar217,pcVar226);
  FUN_100082720("SCMultiSourceCountryServiceProviderWrapperServiceProvider",0x39,2);
  puVar260 = puVar1;
  FUN_1000985fc(puVar1,pcVar223);
  FUN_100082720("SCNativeWarmupManagerServiceProviderWrapperServiceProvider",0x3a,2);
  puVar261 = puVar260;
  FUN_10009869c();
  FUN_100082720("SCNativeWarmupManagerServicesServiceProvider",0x2c,2);
  puVar262 = puVar1;
  func_0x000100098708(puVar1,pcVar217);
  FUN_100082720("SCNetworkConnectivityAnnouncerServiceProviderWrapperServiceProvider",0x43,2);
  puVar263 = puVar262;
  FUN_1000987a8();
  FUN_100082720("SCNetworkConnectivityAnnouncerServicesServiceProvider",0x35,2);
  puVar264 = puVar242;
  FUN_100098814();
  FUN_100082720("SCPlayerServicesServiceProvider",0x1f,2);
  pcVar265 = pcVar243;
  FUN_1000988a0();
  FUN_100082720("UnauthenticatedRegistrationDeviceInfoServicesServiceProvider",0x3c,2);
  puVar266 = puVar167;
  FUN_1000988dc(puVar167,puVar2,uVar4,pcVar172,pcVar173,pcVar9,pcVar234,pcVar30,pcVar183,pcVar190,
                pcVar193,pcVar194,pcVar196,pcVar59,pcVar60,pcVar70,pcVar205,pcVar206,pcVar114,
                pcVar225,pcVar159);
  FUN_100082720("ConfigurationScopedFactoryServiceProvider",0x29,2);
  puVar267 = puVar257;
  FUN_100098adc(puVar257,pcVar224);
  FUN_100082720("StartSystemScopeGraphBridgeServicesServiceProvider",0x32,2);
  puVar268 = puVar266;
  FUN_100098ba0();
  FUN_100082720("ConfigurationServicesImplementationServiceProvider",0x32,2);
  puVar269 = puVar237;
  FUN_100098c0c();
  FUN_100082720("GoogleContactPermissionInfoServicesServiceProvider",0x32,2);
  puVar270 = puVar256;
  FUN_100098c98(puVar256,pcVar208);
  FUN_100082720("MetricSystemScopeGraphBridgeServicesServiceProvider",0x33,2);
  puVar271 = puVar1;
  FUN_100098d5c(puVar1,pcVar250,pcVar195,puVar48);
  FUN_100082720("SCAppStartExperimentReaderExperimentLoggerEntryPointWrapperServiceProvider",0x4a,2)
  ;
  puVar272 = puVar268;
  FUN_100098e5c();
  FUN_100082720("SystemScopeCircumstanceEngineServiceProvider",0x2c,2);
  pcVar273 = pcVar250;
  FUN_100098e78(pcVar250,pcVar70,puVar272,pcVar82);
  FUN_100082720("ClientFeatureGatingValueRetrieverServiceProvider",0x30,2);
  puVar274 = puVar268;
  FUN_100098f58();
  FUN_100082720("SystemScopeConfigManagerServiceProvider",0x27,2);
  puVar275 = puVar274;
  func_0x000100098f74(puVar274,pcVar9);
  FUN_100082720("ConfigManagerServicesServiceProvider",0x24,2);
  pcVar276 = pcVar159;
  FUN_100099018(pcVar159,puVar272);
  FUN_100082720("LastLoginInfoRepositorySaberServiceProvider",0x2b,2);
  puVar277 = puVar272;
  FUN_1000990bc();
  FUN_100082720("LazyCircumstanceEngineProxyServiceProvider",0x2a,2);
  puVar278 = puVar1;
  FUN_100099108(puVar1,puVar48,pcVar115,puVar263);
  FUN_100082720("SCLegacyPropertyHandlerEntryPointWrapperServiceProvider",0x37,2);
  puVar279 = puVar278;
  FUN_1000991cc();
  FUN_100082720("SCLegacyPropertyHandlerServicesServiceProvider",0x2e,2);
  pcVar280 = pcVar159;
  func_0x000100099238(pcVar159,puVar272);
  FUN_100082720("LogInSessionServiceProvider",0x1b,2);
  pcVar281 = pcVar276;
  FUN_1000992b8(pcVar276,pcVar280);
  FUN_100082720("LogInSessionSaberServiceProvider",0x20,2);
  puVar282 = puVar272;
  FUN_1000992e0();
  FUN_100082720("ManifestRewriterServiceProvider",0x1f,2);
  puVar283 = puVar259;
  FUN_10009932c();
  FUN_100082720("SCMultiSourceCountryProviderServicesServiceProvider",0x33,2);
  puVar284 = puVar272;
  func_0x000100099398(puVar272,puVar48);
  FUN_100082720("ContentManagerCacheControllerServiceProvider",0x2c,2);
  puVar285 = puVar282;
  FUN_100099444();
  FUN_100082720("StreamingServiceProvider",0x18,2);
  puVar286 = puVar275;
  FUN_1000994b0();
  FUN_100082720("SCShakeToReportScopedFactoryServiceProvider",0x2b,2);
  puVar287 = puVar2;
  FUN_10009951c(puVar2,puVar272);
  FUN_100082720("SystemConfigurationServiceProvider",0x22,2);
  pcVar288 = pcVar186;
  FUN_10009959c(pcVar186,puVar287,puVar48);
  FUN_100082720("SystemLaunchTabCacheServiceProvider",0x23,2);
  puVar289 = puVar2;
  FUN_100099634(puVar2,puVar272);
  FUN_100082720("BlizzardClientIdProviderSaberServiceProvider",0x2c,2);
  puVar290 = puVar15;
  func_0x0001000996b4(puVar15,puVar272);
  FUN_100082720("DeckServiceImplementationServiceProvider",0x28,2);
  puVar291 = puVar285;
  FUN_100099734();
  FUN_100082720("PlaybackSystemScopeGraphBridgeServicesServiceProvider",0x35,2);
  puVar292 = puVar272;
  FUN_1000997a0(puVar272,puVar2);
  FUN_100082720("RTUSConfigServiceImplementationServiceProvider",0x2e,2);
  puVar293 = puVar272;
  FUN_100099820();
  FUN_100082720("ApplicationCircumstanceEngineServicesServiceProvider",0x34,2);
  puVar294 = puVar272;
  func_0x00010009986c();
  FUN_100082720("AudioSessionConfigurationFactorySaberServiceProvider",0x34,2);
  puVar295 = puVar1;
  FUN_1000998b8(puVar1,puVar293);
  FUN_100082720("SCAuthenticationWatchdogFactoryServiceProviderWrapperServiceProvider",0x44,2);
  puVar296 = puVar295;
  FUN_100099958();
  FUN_100082720("SCAuthenticationWatchdogFactoryServicesServiceProvider",0x36,2);
  puVar297 = puVar289;
  FUN_1000999c4();
  FUN_100082720("BlizzardClientIdProviderServicesServiceProvider",0x2f,2);
  pcVar298 = pcVar273;
  FUN_100099a30();
  FUN_100082720("ClientFeatureGatingServicesServiceProvider",0x2a,2);
  puVar299 = puVar290;
  FUN_100099a7c();
  FUN_100082720("ValdiActionSheetPresenterFactoryServiceProvider",0x2f,2);
  puVar300 = puVar290;
  func_0x000100099a98();
  FUN_100082720("ComposerAlertPresenterFactoryServiceProvider",0x2c,2);
  puVar301 = puVar300;
  FUN_100099ab4(puVar300,puVar299,pcVar192);
  FUN_100082720("ValdiCoreUIServicesServiceProvider",0x22,2);
  pcVar302 = pcVar194;
  FUN_100099b4c(pcVar194,puVar272,puVar277,pcVar10,puVar2);
  FUN_100082720("CompositeConfigSaberServiceProvider",0x23,2);
  puVar303 = puVar284;
  FUN_100099c28();
  FUN_100082720("ContentDeliveryCacheControllerServicesServiceProvider",0x35,2);
  puVar304 = puVar290;
  func_0x000100099c74();
  FUN_100082720("DeckRootContainerServicesServiceProvider",0x28,2);
  puVar305 = puVar290;
  func_0x000100099cc0();
  FUN_100082720("DeckServicesServiceProvider",0x1b,2);
  puVar306 = puVar1;
  FUN_100099d0c(puVar1,pcVar208,puVar293);
  FUN_100082720("SCLensDataLoggerServiceProviderWrapperServiceProvider",0x35,2);
  puVar307 = puVar306;
  FUN_100099dc4();
  FUN_100082720("SCLensDataLoggerServicesServiceProvider",0x27,2);
  puVar308 = puVar292;
  FUN_100099e30();
  FUN_100082720("RTUSConfigServiceProvider",0x19,2);
  puVar309 = puVar286;
  func_0x000100099e7c();
  FUN_100082720("SCShakeToReportScopeServicesServiceProvider",0x2b,2);
  FUN_1000285a8(0x112d9d2e8,&UNK_10d93daa0);
  puVar311 = &UNK_1103b7058;
  func_0x000107c613fc(&UNK_1103b7058,0x28,7);
  *(undefined8 **)(puVar311 + 0x10) = puVar1;
  *(char **)(puVar311 + 0x18) = pcVar217;
  *(undefined8 **)(puVar311 + 0x20) = puVar293;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(pcVar217);
  func_0x000107c6157c(puVar293);
  puVar310 = &UNK_101434328;
  FUN_1000823a8(&UNK_101434328,puVar311);
  FUN_100082720("SCSpectaclesWiFiNetworksControllerServiceProviderWrapperServiceProvider",0x47,2);
  FUN_1000285a8(0x112d9d2f0,&UNK_10d93da70);
  func_0x000107c6157c(puVar310);
  puVar311 = &UNK_101434334;
  FUN_1000823a8(&UNK_101434334,puVar310);
  FUN_100082720("SCSpectaclesWiFiNetworksServicesServiceProvider",0x2f,2);
  puVar312 = puVar287;
  FUN_100099f08();
  FUN_100082720("SystemConfigurationServicesServiceProvider",0x2a,2);
  pcVar313 = pcVar288;
  FUN_100099f74();
  FUN_100082720("SystemLaunchTabSaberServiceProvider",0x23,2);
  puVar314 = puVar1;
  FUN_100099fe0(puVar1,puVar293);
  FUN_100082720("SCTopLevelFeatureScopeConfigLoaderServiceProviderWrapperServiceProvider",0x47,2);
  puVar315 = puVar314;
  FUN_10009a080();
  FUN_100082720("SCTopLevelFeatureScopeConfigProviderServicesServiceProvider",0x3b,2);
  puVar316 = puVar293;
  func_0x00010009a0ec(puVar293,puVar283);
  FUN_100082720("SCCountryCodePickerScopedFactoryServiceProvider",0x2f,2);
  puVar317 = puVar304;
  FUN_10009a190(puVar304,puVar305,puVar69,puVar113);
  FUN_100082720("ShuSystemScopeGraphBridgeServicesServiceProvider",0x30,2);
  pcVar318 = pcVar17;
  FUN_10009a254(pcVar17,pcVar14,param_6,param_4,puVar2,puVar290,puVar15,pcVar31,uVar228,pcVar238);
  FUN_100082720("StartupInfoServiceImplementationServiceProvider",0x2f,2);
  pcVar319 = pcVar318;
  FUN_10009a36c();
  FUN_100082720("StartupServicesServiceProvider",0x1e,2);
  puVar320 = puVar1;
  FUN_10009a3d8(puVar1,pcVar298,puVar293);
  FUN_100082720("AuthenticationExperimentServiceProviderWrapperServiceProvider",0x3d,2);
  puVar321 = puVar320;
  FUN_10009a4c4();
  FUN_100082720("AuthenticationExperimentServicesServiceProvider",0x2f,2);
  puVar322 = puVar312;
  FUN_10009a550(puVar312,puVar8);
  FUN_100082720("CameraHardwareServicesExperimentsServiceProvider",0x30,2);
  puVar323 = puVar48;
  FUN_10009a5f0(puVar48,puVar293,pcVar191,pcVar298,pcVar302,puVar275,pcVar195,pcVar245,pcVar250,
                puVar279,pcVar115);
  FUN_100082720("CofSystemScopeGraphBridgeServicesServiceProvider",0x30,2);
  puVar324 = puVar1;
  FUN_10009a738(puVar1,pcVar186,puVar322);
  FUN_100082720("DiscoverySessionDevicesServiceProvider",0x26,2);
  puVar325 = puVar1;
  func_0x00010009a7b8(puVar1,puVar293);
  FUN_100082720("HeliosFeatureGateEntryPointWrapperServiceProvider",0x31,2);
  pcVar326 = pcVar89;
  FUN_10009a858(pcVar89,puVar307,pcVar91,puVar93,pcVar213);
  FUN_100082720("LensSystemScopeGraphBridgeServicesServiceProvider",0x31,2);
  pcVar327 = pcVar313;
  FUN_10009a934();
  FUN_100082720("MauSystemScopeGraphBridgeServicesServiceProvider",0x30,2);
  pcVar328 = pcVar298;
  FUN_10009a9a0();
  FUN_100082720("ActivationDeviceIdHoldoutStateProviderSaberServiceProvider",0x3a,2);
  puVar329 = puVar316;
  func_0x00010009a9ec();
  FUN_100082720("SCCountryCodePickerScopeServicesServiceProvider",0x2f,2);
  pcVar330 = pcVar109;
  FUN_10009aa58(pcVar109,pcVar31,pcVar318,puVar2,pcVar73,puVar272,puVar289,puVar292,pcVar105,pcVar18
                ,pcVar244,pcVar53);
  FUN_100082720("LegacyBlizzardSaberServiceProvider",0x22,2);
  pcVar331 = pcVar330;
  FUN_10009ab84();
  FUN_100082720("LegacyBlizzardServicesServiceProvider",0x25,2);
  puVar332 = puVar312;
  FUN_10009abd0(puVar312,pcVar318);
  FUN_100082720("ManagedCaptureSessionImplServiceProvider",0x28,2);
  pcVar333 = pcVar330;
  FUN_10009ac74();
  FUN_100082720("SystemBlizzardSaberServiceProvider",0x22,2);
  pcVar334 = pcVar34;
  FUN_10009acc0(pcVar34,pcVar187,pcVar276,pcVar280,pcVar219,pcVar123,pcVar333);
  FUN_100082720("ActivationNetworkLoggingImplSaberServiceProvider",0x30,2);
  pcVar335 = pcVar334;
  FUN_10009adf4();
  FUN_100082720("ActivationNetworkLoggingServicesServiceProvider",0x2f,2);
  puVar336 = puVar272;
  FUN_10009ae60(puVar272,pcVar333);
  FUN_100082720("InputValidationServiceProvider",0x1e,2);
  puVar337 = puVar332;
  FUN_10009af2c(puVar332,puVar322);
  FUN_100082720("ManagedCaptureSessionServiceProvider",0x24,2);
  pcVar338 = pcVar328;
  FUN_10009af50();
  FUN_100082720("ActivationDeviceIdHoldoutServicesServiceProvider",0x30,2);
  pcVar339 = pcVar208;
  FUN_10009af9c(pcVar208,puVar48,pcVar265,pcVar46,pcVar331,puVar272);
  FUN_100082720("ApplicationLoggerServiceProvider",0x20,2);
  pcVar340 = pcVar333;
  FUN_10009b064(pcVar333,pcVar55);
  FUN_100082720("CameraSystemBlizzardLoggingServiceProvider",0x2a,2);
  puVar341 = puVar1;
  FUN_10009b0e4(puVar1,puVar272,pcVar333,pcVar82,puVar284,pcVar104,puVar282,puVar2,pcVar49);
  FUN_100082720("ContentDeliveryServiceProvider",0x1e,2);
  puVar342 = puVar272;
  FUN_10009b24c(puVar272,pcVar333,pcVar104);
  FUN_100082720("ContentObjectResolverServiceProvider",0x24,2);
  pcVar343 = pcVar34;
  FUN_10009b318(pcVar34,puVar48,pcVar333);
  FUN_100082720("AudioSessionServiceProvider",0x1b,2);
  puVar344 = puVar272;
  func_0x00010009b3b0(puVar272,puVar282,puVar284,puVar342);
  FUN_100082720("ContentFetcherServiceProvider",0x1d,2);
  puVar345 = puVar341;
  FUN_10009b490(puVar341,pcVar49);
  FUN_100082720("SimpleContentFetcherServiceProvider",0x23,2);
  pcVar346 = pcVar333;
  FUN_10009b53c();
  FUN_100082720("SystemBlizzardServicesServiceProvider",0x25,2);
  puVar347 = puVar1;
  FUN_10009b5a8(puVar1,pcVar333,puVar48);
  FUN_100082720("SnapTokenStorageServiceProvider",0x1f,2);
  pcVar348 = pcVar339;
  FUN_10009b660();
  FUN_100082720("SystemApplicationLoggerServiceProvider",0x26,2);
  puVar349 = puVar1;
  FUN_10009b6cc(puVar1,pcVar346,puVar293);
  FUN_100082720("CAIDNotificationEntryPointWrapperServiceProvider",0x30,2);
  puVar350 = puVar1;
  FUN_10009b7b8(puVar1,pcVar346,puVar293);
  FUN_100082720("CAIDServiceProviderWrapperServiceProvider",0x29,2);
  puVar351 = puVar350;
  FUN_10009b8a4();
  FUN_100082720("CloudAccountIdServicesServiceProvider",0x25,2);
  pcVar352 = pcVar346;
  FUN_10009b930();
  FUN_100082720("GracefulTerminationMetricsLoggerServiceProvider",0x2f,2);
  pcVar353 = pcVar159;
  FUN_10009b97c(pcVar159,pcVar253,puVar347);
  FUN_100082720("LegacyUserSessionRepositoryServiceProvider",0x2a,2);
  pcVar354 = pcVar208;
  func_0x00010009ba14(pcVar208,pcVar159,puVar347);
  FUN_100082720("PreferencesBasedUserSessionRepositoryServiceProvider",0x34,2);
  puVar355 = puVar1;
  func_0x00010009baac(puVar1,pcVar208,pcVar346);
  FUN_100082720("SCApplicationInstallLoggerServiceProviderWrapperServiceProvider",0x3f,2);
  puVar356 = puVar355;
  FUN_10009bb98();
  FUN_100082720("SCApplicationInstallLoggerServicesServiceProvider",0x31,2);
  pcVar357 = pcVar343;
  func_0x00010009bc04(pcVar343,puVar294);
  FUN_100082720("AudioSessionServicesServiceProvider",0x23,2);
  pcVar358 = pcVar55;
  FUN_10009bc84(pcVar55,pcVar340,pcVar56);
  FUN_100082720("CameraLoggingServicesServiceProvider",0x24,2);
  pcVar359 = pcVar358;
  func_0x00010009bd1c(pcVar358,pcVar159,puVar167,puVar322);
  FUN_100082720("ManagedCaptureDeviceLoggerServiceProvider",0x29,2);
  puVar360 = puVar1;
  func_0x00010009bdc0(puVar1,pcVar346,pcVar189,pcVar203);
  FUN_100082720("SCDurableDeviceIDLoggerServiceProviderWrapperServiceProvider",0x3c,2);
  puVar361 = puVar360;
  FUN_10009bec0();
  FUN_100082720("SCDurableDeviceIDLoggerServicesServiceProvider",0x2e,2);
  puVar362 = puVar1;
  FUN_10009bf2c(puVar1,pcVar208,pcVar346,puVar293,puVar48);
  FUN_100082720("SCFideliusClientInitEntryPointWrapperServiceProvider",0x34,2);
  puVar363 = puVar362;
  FUN_10009c008();
  FUN_100082720("SCFideliusClientInitServicesServiceProvider",0x2b,2);
  puVar364 = puVar362;
  FUN_10009c094();
  FUN_100082720("SCFideliusLoggingServicesServiceProvider",0x28,2);
  puVar365 = puVar362;
  func_0x00010009c0b0();
  FUN_100082720("SCFideliusStorageServicesServiceProvider",0x28,2);
  puVar366 = puVar1;
  FUN_10009c0cc(puVar1,pcVar265,pcVar208,pcVar281,pcVar221,pcVar346,pcVar189);
  FUN_100082720("SCIdentityLoggerServiceProviderWrapperServiceProvider",0x35,2);
  puVar367 = puVar366;
  FUN_10009c220();
  FUN_100082720("SCIdentityLoggerServicesServiceProvider",0x27,2);
  puVar368 = puVar342;
  func_0x00010009c28c(puVar342,puVar344);
  FUN_100082720("BufferedContentFetcherServiceProvider",0x25,2);
  puVar369 = puVar1;
  FUN_10009c338(puVar1,pcVar177,pcVar346,pcVar208,pcVar50,puVar51,puVar305);
  FUN_100082720("SCPageLoadMetricServiceProviderWrapperServiceProvider",0x35,2);
  puVar370 = puVar369;
  FUN_10009c438();
  FUN_100082720("SCPageLoadMetricServicesServiceProvider",0x27,2);
  puVar371 = puVar1;
  FUN_10009c4a4(puVar1,puVar293,pcVar186,pcVar208,pcVar346);
  FUN_100082720("SCPasswordHashRepositoryImplServiceProviderWrapperServiceProvider",0x41,2);
  puVar372 = puVar371;
  FUN_10009c5c4();
  FUN_100082720("SCPasswordHashStorageServicesServiceProvider",0x2c,2);
  pcVar373 = pcVar346;
  FUN_10009c630();
  FUN_100082720("QuickPerfLoggerServiceProvider",0x1e,2);
  pcVar374 = pcVar348;
  FUN_10009c67c();
  FUN_100082720("SystemApplicationLoggerServicesServiceProvider",0x2e,2);
  puVar375 = puVar272;
  FUN_10009c6b8(puVar272,pcVar104,puVar282,puVar341,puVar345,puVar284,puVar368,puVar342,puVar48);
  FUN_100082720("SystemContentDeliveryServicesServiceProvider",0x2c,2);
  puVar376 = puVar351;
  FUN_10009c7bc(puVar351,puVar372,puVar347);
  FUN_100082720("SemcSystemScopeGraphBridgeServicesServiceProvider",0x31,2);
  puVar377 = puVar176;
  FUN_10009c874(puVar176,param_3,pcVar52,pcVar44,pcVar36,puVar329,puVar198,pcVar37,puVar202,puVar361
                ,pcVar38,pcVar39,pcVar40,pcVar41,puVar215,pcVar116,puVar311,pcVar42,pcVar43,pcVar165
               );
  FUN_100082720("SystemScopeGraphBridgeServicesServiceProvider",0x2d,2);
  puVar378 = puVar1;
  FUN_10009ca58(puVar1,pcVar82,pcVar207,puVar293,pcVar373);
  FUN_100082720("BackgroundTaskRegistrationServiceProvider",0x29,2);
  puVar379 = puVar378;
  FUN_10009cb14();
  FUN_100082720("BackgroundTaskRegistrationServicesNativeSaberServiceProvider",0x3c,2);
  puVar380 = puVar332;
  FUN_10009cb80(puVar332,pcVar72,pcVar358,pcVar28);
  FUN_100082720("CameraHardwareResourceServiceProvider",0x25,2);
  puVar381 = puVar332;
  FUN_10009cc24(puVar332,puVar322,pcVar28,puVar337,puVar8,pcVar359,puVar324,pcVar319,puVar2);
  FUN_100082720("CaptureDeviceManagerImplServiceProvider",0x27,2);
  puVar382 = puVar303;
  FUN_10009cd30(puVar303,pcVar106,pcVar107,puVar375,pcVar124,puVar126);
  FUN_100082720("CmSystemScopeGraphBridgeServicesServiceProvider",0x2f,2);
  puVar383 = puVar51;
  FUN_10009ce18(puVar51,puVar297,pcVar331,pcVar108,pcVar218,puVar308,pcVar374,pcVar346);
  FUN_100082720("DatpSystemScopeGraphBridgeServicesServiceProvider",0x31,2);
  pcVar384 = pcVar353;
  FUN_10009cf24(pcVar353,pcVar354,pcVar208);
  FUN_100082720("MigrationUserSessionRepositoryServiceProvider",0x2d,2);
  uVar385 = param_2;
  func_0x00010009cfbc(param_2,puVar2,pcVar354,pcVar384);
  FUN_100082720("MutableUserSessionRepositoryServiceProvider",0x2b,2);
  uVar386 = uVar385;
  FUN_10009d060();
  FUN_100082720("MutableUserSessionRepositoryServicesServiceProvider",0x33,2);
  puVar387 = puVar363;
  FUN_10009d0cc(puVar363,puVar364,puVar365);
  FUN_100082720("PrivengSystemScopeGraphBridgeServicesServiceProvider",0x34,2);
  puVar388 = puVar1;
  FUN_10009d184(puVar1,pcVar374);
  FUN_100082720("SCApplicationLoggerEventObserverEntryPointWrapperServiceProvider",0x40,2);
  pcVar389 = pcVar357;
  FUN_10009d224();
  FUN_100082720("AudioCaptureSessionProvidingServiceProvider",0x2b,2);
  puVar390 = puVar1;
  FUN_10009d270(puVar1,pcVar357);
  FUN_100082720("SCAudioSessionConfiguratorEntryPointWrapperServiceProvider",0x3a,2);
  puVar391 = puVar380;
  FUN_10009d33c(puVar380,puVar337);
  FUN_100082720("CameraViewfinderRenderTargetImplServiceProvider",0x2f,2);
  pcVar392 = pcVar57;
  FUN_10009d3bc(pcVar57,puVar2,puVar375,pcVar223,pcVar186);
  FUN_100082720("ComposerFrameworkProviderServiceProvider",0x28,2);
  pcVar393 = pcVar392;
  FUN_10009d478();
  FUN_100082720("ValdiImageLoaderRegistryServiceProvider",0x27,2);
  pcVar394 = pcVar392;
  func_0x00010009d4c4();
  FUN_100082720("ValdiVideoLoaderRegistryServiceProvider",0x27,2);
  pcVar395 = pcVar186;
  FUN_10009d510(pcVar186,puVar372,pcVar346,pcVar208,pcVar123,pcVar195,pcVar203,puVar1);
  FUN_100082720("OneTapLoginMultiAccountRepositoriesServiceProvider",0x32,2);
  uVar396 = uVar385;
  FUN_10009d620();
  FUN_100082720("UserSessionRepositoryServiceProvider",0x24,2);
  uVar397 = uVar396;
  FUN_10009d68c();
  FUN_100082720("UserSessionRepositoryServicesServiceProvider",0x2c,2);
  puVar398 = puVar391;
  FUN_10009d6c8();
  FUN_100082720("CameraViewfinderRenderTargetServiceProvider",0x2b,2);
  puVar399 = puVar381;
  func_0x00010009d714();
  FUN_100082720("CaptureDeviceManagerServiceProvider",0x23,2);
  puVar400 = puVar380;
  FUN_10009d760(puVar380,puVar399);
  FUN_100082720("DeviceSubjectAreaHandlerServiceProvider",0x27,2);
  puVar401 = puVar380;
  func_0x00010009d7e0(puVar380,puVar399);
  FUN_100082720("ManagedDeviceCapacityAnalyzerServiceProvider",0x2c,2);
  pcVar402 = pcVar389;
  FUN_10009d860();
  FUN_100082720("AudioCaptureServicesServiceProvider",0x23,2);
  puVar403 = puVar380;
  FUN_10009d8ac(puVar380,puVar48,pcVar177,puVar391);
  FUN_100082720("CameraViewfinderRenderAgentImplServiceProvider",0x2e,2);
  pcVar404 = pcVar392;
  FUN_10009d950(pcVar392,pcVar393,pcVar394,pcVar57,puVar58);
  FUN_100082720("ComposerFrameworkServicesServiceProvider",0x28,2);
  puVar405 = puVar403;
  FUN_10009da0c();
  FUN_100082720("CameraViewfinderRenderAgentServiceProvider",0x2a,2);
  puVar406 = puVar1;
  FUN_10009da58(puVar1,pcVar404,pcVar181);
  FUN_100082720("ComposerSystemSessionImageLoadersRegistryEntryPointWrapperServiceProvider",0x49,2);
  pcVar407 = pcVar402;
  FUN_10009db10(pcVar402,pcVar357,pcVar72,puVar264);
  FUN_100082720("MeSystemScopeGraphBridgeServicesServiceProvider",0x2f,2);
  puVar408 = puVar380;
  FUN_10009dbd4(puVar380,puVar337,puVar401,puVar400,puVar8,puVar381,puVar322,puVar332,pcVar159,
                pcVar17,puVar2,puVar312,puVar6,puVar405);
  FUN_100082720("CameraRequestHandlerServiceProvider",0x23,2);
  puVar409 = puVar408;
  FUN_10009dd20();
  FUN_100082720("CameraRequestHandlerServicesImplementationServiceProvider",0x39,2);
  puVar410 = puVar405;
  FUN_10009dd6c(puVar405,puVar398);
  FUN_100082720("CameraViewfinderServicesServiceProvider",0x27,2);
  puVar411 = puVar409;
  FUN_10009de0c(puVar409,puVar380,puVar337,puVar401,pcVar357,pcVar402,pcVar159,puVar312,pcVar17,
                puVar2,puVar399,puVar6,pcVar313);
  FUN_100082720("CameraHardwareServicesAPIImplServiceProvider",0x2c,2);
  puVar412 = puVar411;
  FUN_10009df48();
  FUN_100082720("CameraHardwareServicesAPIServiceProvider",0x28,2);
  puVar413 = puVar412;
  FUN_10009df94(puVar412,puVar380,puVar337,puVar8,pcVar7,pcVar28,puVar399,puVar401,puVar400);
  FUN_100082720("CameraHardwareServicesServiceProvider",0x25,2);
  puVar414 = puVar1;
  FUN_10009e0b8(puVar1,puVar413,pcVar222);
  FUN_100082720("SCCameraS2REntryPointWrapperServiceProvider",0x2b,2);
  puVar415 = puVar1;
  FUN_10009e170(puVar1,puVar409,puVar413,puVar312,puVar370,pcVar177);
  FUN_100082720("SCCameraStabilityServiceProviderWrapperServiceProvider",0x36,2);
  puVar416 = puVar415;
  FUN_10009e258();
  FUN_100082720("SCCameraStabilityServicesServiceProvider",0x28,2);
  puVar417 = puVar1;
  FUN_10009e2c4(puVar1,puVar413,puVar416,pcVar358,pcVar177,pcVar186,puVar312,pcVar313,puVar48,
                puVar347,pcVar319,param_3);
  FUN_100082720("SCLegacyCameraStartupCommandsEntryPointWrapperServiceProvider",0x3d,2);
  puVar418 = puVar417;
  FUN_10009e418();
  FUN_100082720("SCLegacyCameraStartupCommandsServicesServiceProvider",0x34,2);
  puVar419 = puVar1;
  FUN_10009e484(puVar1,pcVar357,puVar413,pcVar346);
  FUN_100082720("SCLegacyPermissionRequestEntryPointWrapperServiceProvider",0x39,2);
  puVar420 = puVar419;
  FUN_10009e548();
  FUN_100082720("SCLegacyPermissionRequestServicesServiceProvider",0x30,2);
  puVar421 = puVar1;
  FUN_10009e5b4(puVar1,pcVar123,pcVar208,puVar418,puVar293,pcVar319);
  FUN_100082720("SCMarkAppLaunchStartEntryPointWrapperServiceProvider",0x34,2);
  puVar422 = puVar1;
  FUN_10009e69c(puVar1,pcVar123,pcVar208,puVar418,puVar293,pcVar319);
  FUN_100082720("SCTweakFunctionalitySetupEntryPointWrapperServiceProvider",0x39,2);
  puVar423 = puVar1;
  FUN_10009e784(puVar1,pcVar123,pcVar208,puVar418,puVar293,pcVar319);
  FUN_100082720("SCUserTraceLaunchLogEntryPointWrapperServiceProvider",0x34,2);
  puVar424 = puVar413;
  FUN_10009e86c(puVar413,pcVar358,puVar409,puVar416,puVar410,puVar418,pcVar120,puVar312);
  FUN_100082720("CameraSystemScopeGraphBridgeServicesServiceProvider",0x33,2);
  puVar425 = puVar1;
  FUN_10009e978(puVar1,puVar420);
  FUN_100082720("NotificationPermissionServicesImplEntryPointWrapperServiceProvider",0x42,2);
  pcVar426 = pcVar30;
  FUN_10009ea18(pcVar30,pcVar333,puVar167,puVar413,puVar380,puVar1);
  FUN_100082720("BatteryLoggingServicesImplementationServiceProvider",0x33,2);
  puVar427 = puVar1;
  FUN_10009eb00(puVar1,pcVar123,pcVar208,pcVar319,puVar418,puVar293);
  FUN_100082720("SCFinishLaunchLoggingEntryPointWrapperServiceProvider",0x35,2);
  pcVar428 = pcVar346;
  FUN_10009ebe8(pcVar346,pcVar174,pcVar426,pcVar217);
  FUN_100082720("GRPCEventLoggerServiceProvider",0x1e,2);
  puVar429 = puVar1;
  FUN_10009ec80(puVar1,pcVar123,pcVar208,param_3,puVar418,puVar293,uVar397,pcVar116);
  FUN_100082720("SCHandleProtectedDataLaunchEntryPointWrapperServiceProvider",0x3b,2);
  puVar430 = puVar1;
  FUN_10009ed8c(puVar1,pcVar123,pcVar208,pcVar319,puVar418,puVar293);
  FUN_100082720("SCHeadlessLaunchCompletedEntryPointWrapperServiceProvider",0x39,2);
  puVar431 = puVar1;
  FUN_10009ee74(puVar1,pcVar123,pcVar208,puVar418,puVar293);
  FUN_100082720("SCInitializeAppStateEntryPointWrapperServiceProvider",0x34,2);
  puVar432 = puVar1;
  FUN_10009ef50(puVar1,pcVar123,pcVar208,puVar418,puVar293);
  FUN_100082720("SCInitializeAuthTokenManagerEntryPointWrapperServiceProvider",0x3c,2);
  puVar433 = puVar1;
  FUN_10009f02c(puVar1,pcVar123,pcVar208,puVar418,puVar293);
  FUN_100082720("SCInitializeNativeClientPlatformEntryPointWrapperServiceProvider",0x40,2);
  puVar434 = puVar425;
  FUN_10009f108();
  FUN_100082720("SCNotificationPermissionServicesServiceProvider",0x2f,2);
  pcVar435 = pcVar160;
  func_0x00010009f174(pcVar160,pcVar428);
  FUN_100082720("SystemUnifiedGRPCSaberServiceProvider",0x25,2);
  puVar436 = puVar2;
  FUN_10009f220(puVar2,pcVar426);
  FUN_100082720("CoreLocationSaberServiceProvider",0x20,2);
  puVar437 = puVar436;
  func_0x00010009f2a0(puVar436,pcVar159);
  FUN_100082720("NextGenLocationSystemServicesServiceProvider",0x2c,2);
  pcVar438 = pcVar30;
  FUN_10009f340(pcVar30,pcVar333,pcVar47,pcVar426,puVar1);
  FUN_100082720("BackgroundTaskWrapperServiceProvider",0x24,2);
  pcVar439 = pcVar438;
  FUN_10009f3fc();
  FUN_100082720("BackgroundExecutionServicesServiceProvider",0x2a,2);
  puVar440 = puVar1;
  FUN_10009f448(puVar1,pcVar158,pcVar30,pcVar207,pcVar82,pcVar439,puVar272,pcVar111,pcVar373);
  FUN_100082720("JobSchedulerServiceProvider",0x1b,2);
  puVar441 = puVar437;
  FUN_10009f54c(puVar437,pcVar426,puVar272,pcVar159,puVar1,puVar2);
  FUN_100082720("SystemLocationServicesServiceProvider",0x25,2);
  puVar442 = puVar1;
  FUN_10009f614(puVar1,pcVar439);
  FUN_100082720("SCSystemNetworkTraceServiceProviderWrapperServiceProvider",0x39,2);
  puVar443 = puVar440;
  FUN_10009f6b4();
  FUN_100082720("SystemJobSchedulerServiceProvider",0x21,2);
  pcVar444 = pcVar174;
  FUN_10009f720(pcVar174,puVar293,pcVar216,pcVar426,pcVar217,pcVar173,pcVar346,pcVar439,pcVar208,
                puVar441,puVar290,pcVar318,pcVar11,pcVar223,pcVar230,pcVar302);
  FUN_100082720("SystemNetworkServicesDepsServiceProvider",0x28,2);
  pcVar445 = pcVar177;
  FUN_10009f8b4(pcVar177,pcVar439,pcVar426,pcVar102,pcVar319);
  FUN_100082720("ClientresSystemScopeGraphBridgeServicesServiceProvider",0x36,2);
  puVar446 = puVar437;
  FUN_10009f990(puVar437,puVar441);
  FUN_100082720("MapsSystemScopeGraphBridgeServicesServiceProvider",0x31,2);
  puVar447 = puVar2;
  FUN_10009fa54(puVar2,pcVar244,pcVar153,pcVar223,puVar272,pcVar180,pcVar30,pcVar100,pcVar87,pcVar62
                ,pcVar98,pcVar444);
  FUN_100082720("CrashLoggerServiceProvider",0x1a,2);
  puVar448 = puVar447;
  FUN_10009fba0(puVar447,pcVar31,puVar2,pcVar62);
  FUN_100082720("MetricKitServiceProvider",0x18,2);
  puVar449 = puVar442;
  FUN_10009fc64();
  FUN_100082720("SCNetworkTraceServicesServiceProvider",0x25,2);
  puVar450 = puVar443;
  FUN_10009fcd0();
  FUN_100082720("SystemJobSchedulerServicesServiceProvider",0x29,2);
  pcVar451 = pcVar159;
  FUN_10009fd0c(pcVar159,puVar447,puVar2,puVar1,pcVar98);
  FUN_100082720("AnrThreadMonitoringServiceProvider",0x22,2);
  pcVar452 = pcVar451;
  FUN_10009fdc8();
  FUN_100082720("ThreadMonitoringServicesServiceProvider",0x27,2);
  pcVar453 = pcVar174;
  FUN_10009fe14(pcVar174,puVar78,puVar261,pcVar216,puVar263,pcVar217,puVar449,pcVar223,pcVar435);
  FUN_100082720("CntSystemScopeGraphBridgeServicesServiceProvider",0x30,2);
  pcVar454 = pcVar233;
  FUN_10009ff38(pcVar233,puVar450,puVar1,puVar293,pcVar352);
  FUN_100082720("GracefulAppTerminatingServiceProvider",0x25,2);
  puVar455 = puVar1;
  FUN_1000a0038(puVar1,pcVar123,puVar450);
  FUN_100082720("SCAppInstallAttributionEntryPointWrapperServiceProvider",0x37,2);
  puVar456 = puVar1;
  FUN_1000a00f0(puVar1,pcVar123,puVar450);
  FUN_100082720("SCAppInstallUpdateConversionValueJobProviderEntryPointWrapperServiceProvider",0x4c,
                2);
  pcVar457 = pcVar232;
  FUN_1000a01a8(pcVar232,pcVar233,pcVar454,puVar1,pcVar352,puVar2,puVar293,pcVar159);
  FUN_100082720("SCAppTerminationServicesServiceProvider",0x27,2);
  puVar458 = puVar1;
  FUN_1000a02b4(puVar1,puVar450,pcVar331);
  FUN_100082720("SCBlizzardBackgroundUploadEntryPointWrapperServiceProvider",0x3a,2);
  puVar459 = puVar1;
  FUN_1000a036c(puVar1,puVar450,puVar293);
  FUN_100082720("SCConfigManagerBackgroundSyncEntryPointWrapperServiceProvider",0x3d,2);
  puVar460 = puVar447;
  FUN_1000a0424(puVar447,pcVar246,pcVar62,pcVar159);
  FUN_100082720("CrashToReportTweaksServiceProvider",0x22,2);
  puVar461 = puVar1;
  FUN_1000a04c8(puVar1,puVar450);
  FUN_100082720("SCRetryJobProviderServicesEntryPointWrapperServiceProvider",0x3a,2);
  FUN_1000285a8(0x112d9d2f8,&UNK_10d93da78);
  puVar505 = &UNK_1103b7080;
  func_0x000107c613fc(&UNK_1103b7080,0x68,7);
  *(char **)(puVar505 + 0x10) = pcVar373;
  *(undefined8 **)(puVar505 + 0x18) = puVar436;
  *(char **)(puVar505 + 0x20) = pcVar190;
  *(undefined8 **)(puVar505 + 0x28) = puVar274;
  *(char **)(puVar505 + 0x30) = pcVar457;
  *(undefined8 **)(puVar505 + 0x38) = puVar411;
  *(char **)(puVar505 + 0x40) = pcVar343;
  *(char **)(puVar505 + 0x48) = pcVar81;
  *(undefined8 **)(puVar505 + 0x50) = puVar403;
  *(char **)(puVar505 + 0x58) = pcVar298;
  *(undefined8 *)(puVar505 + 0x60) = uVar145;
  func_0x000107c6157c();
  func_0x000107c6157c(puVar436);
  func_0x000107c6157c(pcVar190);
  func_0x000107c6157c(puVar274);
  func_0x000107c6157c(pcVar457);
  func_0x000107c6157c(puVar411);
  func_0x000107c6157c(pcVar343);
  func_0x000107c6157c(pcVar81);
  func_0x000107c6157c(puVar403);
  func_0x000107c6157c(pcVar298);
  func_0x000107c6157c(uVar145);
  pcVar462 = FUN_100a12284;
  FUN_1000823a8(FUN_100a12284,puVar505);
  FUN_100082720("SCSystemScopeApplicationLifeCycleListenerPluginRegistryServiceProvider",0x46,2);
  puVar463 = puVar447;
  FUN_1000a0568(puVar447,pcVar246,pcVar62,puVar448,pcVar197,pcVar247,pcVar258,pcVar101,pcVar244,
                pcVar451,pcVar457,pcVar159,puVar460,puVar48);
  FUN_100082720("CrashServicesServiceProvider",0x1c,2);
  puVar464 = puVar2;
  FUN_1000a06dc(puVar2,puVar463);
  FUN_100082720("FrameRateMonitorServiceProvider",0x1f,2);
  puVar465 = puVar461;
  FUN_1000a075c();
  FUN_100082720("SCInAppSessionJobSchedulerServicesServiceProvider",0x31,2);
  pcVar466 = pcVar149;
  func_0x0001000a07c8(pcVar149,puVar463);
  FUN_100082720("MatchaUserTraceLoggerServiceProvider",0x24,2);
  puVar467 = puVar1;
  FUN_1000a0848(puVar1,pcVar47,pcVar224,puVar293,pcVar208,puVar463,puVar227,puVar434);
  FUN_100082720("SCNotificationsEntryPointWrapperServiceProvider",0x2f,2);
  puVar468 = puVar467;
  FUN_1000a0954();
  FUN_100082720("SCNotificationsServicesServiceProvider",0x26,2);
  puVar469 = puVar1;
  func_0x0001000a09c0(puVar1,puVar463);
  FUN_100082720("SCScopeGraphC2RExceptionReporterEntryPointWrapperServiceProvider",0x40,2);
  pcVar470 = pcVar466;
  FUN_1000a0a60();
  FUN_100082720("UserTraceLoggerServicesServiceProvider",0x26,2);
  FUN_1000285a8(0x112d9d300,&UNK_10d93da80);
  puVar505 = &UNK_1103b70a8;
  func_0x000107c613fc(&UNK_1103b70a8,0x80,7);
  *(undefined8 **)(puVar505 + 0x10) = puVar293;
  *(undefined8 **)(puVar505 + 0x18) = puVar261;
  *(char **)(puVar505 + 0x20) = pcVar223;
  *(undefined8 **)(puVar505 + 0x28) = puVar450;
  *(char **)(puVar505 + 0x30) = pcVar50;
  *(undefined8 **)(puVar505 + 0x38) = puVar465;
  *(undefined8 **)(puVar505 + 0x40) = puVar275;
  *(char **)(puVar505 + 0x48) = pcVar224;
  *(char **)(puVar505 + 0x50) = pcVar435;
  *(char **)(puVar505 + 0x58) = pcVar208;
  *(char **)(puVar505 + 0x60) = pcVar346;
  *(char **)(puVar505 + 0x68) = pcVar123;
  *(undefined8 **)(puVar505 + 0x70) = puVar356;
  *(char **)(puVar505 + 0x78) = pcVar186;
  func_0x000107c6157c(puVar293);
  func_0x000107c6157c(puVar261);
  func_0x000107c6157c(pcVar223);
  func_0x000107c6157c(puVar450);
  func_0x000107c6157c(pcVar50);
  func_0x000107c6157c(puVar465);
  func_0x000107c6157c(puVar275);
  func_0x000107c6157c(pcVar224);
  func_0x000107c6157c(pcVar435);
  func_0x000107c6157c(pcVar208);
  func_0x000107c6157c(pcVar346);
  func_0x000107c6157c(pcVar123);
  func_0x000107c6157c(puVar356);
  func_0x000107c6157c(pcVar186);
  uVar507 = 0x100a0c304;
  FUN_1000823a8(0x100a0c304,puVar505);
  FUN_100082720("SystemJobSchedulerPluginRegistryServiceProvider",0x2f,2);
  uVar471 = uVar507;
  FUN_1000a0aac();
  FUN_100082720("SystemJobSchedulerPluginServicesServiceProvider",0x2f,2);
  pcVar472 = pcVar244;
  FUN_1000a0b18(pcVar244,pcVar457,puVar463,pcVar87,pcVar222,puVar309,pcVar452,pcVar470);
  FUN_100082720("AppinsSystemScopeGraphBridgeServicesServiceProvider",0x33,2);
  puVar473 = puVar463;
  FUN_1000a0c24();
  FUN_100082720("CrashServicesWrapperServiceProvider",0x23,2);
  puVar474 = puVar464;
  FUN_1000a0c90();
  FUN_100082720("BadFrameRateStatsTrackerServiceProvider",0x27,2);
  puVar475 = puVar1;
  FUN_1000a0cdc(puVar1,puVar463);
  FUN_100082720("SCBlizzardCrashToReportProviderEntryPointWrapperServiceProvider",0x3f,2);
  pcVar476 = pcVar392;
  FUN_1000a0d7c(pcVar392,puVar463);
  FUN_100082720("ComposerPlatformNonFatalErrorReporterServiceProvider",0x34,2);
  puVar477 = puVar464;
  FUN_1000a0e28(puVar464,puVar474);
  FUN_100082720("FrameRateMonitorServicesServiceProvider",0x27,2);
  puVar478 = puVar1;
  FUN_1000a0ec8(puVar1,puVar468,pcVar123,pcVar208,puVar418,puVar293,uVar397,uVar4,param_3);
  FUN_100082720("SCInitializeNotificationProcessorsEntryPointWrapperServiceProvider",0x42,2);
  puVar479 = puVar1;
  FUN_1000a0fec(puVar1,puVar468,puVar293,puVar434,puVar463);
  FUN_100082720("SCNotificationDisplayServicesEntryPointWrapperServiceProvider",0x3d,2);
  puVar480 = puVar1;
  FUN_1000a10c8(puVar1,pcVar186,pcVar208,pcVar439,pcVar217,pcVar373,puVar48,puVar379,pcVar200,
                pcVar50,puVar450,uVar471,pcVar319);
  FUN_100082720("SCSystemJobSchedulerEntryPointWrapperServiceProvider",0x34,2);
  pcVar481 = pcVar244;
  FUN_1000a122c(pcVar244,pcVar476);
  FUN_100082720("ValdiApplicationScopedServiceMarshallerServiceProvider",0x36,2);
  puVar482 = puVar1;
  FUN_1000a12ac(puVar1,puVar51,puVar305,puVar477,puVar2,pcVar244);
  FUN_100082720("WorkSchedulerServiceProvider",0x1c,2);
  puVar483 = puVar477;
  FUN_1000a1374();
  FUN_100082720("PerfSystemScopeGraphBridgeServicesServiceProvider",0x31,2);
  puVar484 = puVar479;
  FUN_1000a13e0();
  FUN_100082720("SCNotificationDisplayServicesServiceProvider",0x2c,2);
  puVar485 = puVar1;
  FUN_1000a144c(puVar1,puVar48,pcVar208,puVar484,puVar434,pcVar223,puVar227);
  FUN_100082720("SCNotificationReportingServicesSystemScopedServiceProviderWrapperServiceProvider",
                0x50,2);
  pcVar486 = pcVar481;
  FUN_1000a154c();
  FUN_100082720("ValdiGlobalServiceMarshallerServiceProvider",0x2b,2);
  pcVar487 = pcVar392;
  FUN_1000a15b8(pcVar392,pcVar486);
  FUN_100082720("ValdiServiceRegistryModuleFactoryProviderServiceProvider",0x38,2);
  puVar488 = puVar482;
  FUN_1000a1684(puVar482,pcVar14);
  FUN_100082720("WorkSchedulerServicesServiceProvider",0x24,2);
  puVar489 = puVar379;
  FUN_1000a1724(puVar379,pcVar178,pcVar50,pcVar200,pcVar201,puVar465,puVar370,pcVar373,puVar450,
                puVar231,uVar471,puVar488);
  FUN_100082720("WschedSystemScopeGraphBridgeServicesServiceProvider",0x33,2);
  puVar490 = puVar485;
  FUN_1000a1878();
  FUN_100082720("SCNotificationReportingServicesServiceProvider",0x2e,2);
  pcVar491 = pcVar392;
  FUN_1000a18e4(pcVar392,pcVar487);
  FUN_100082720("SystemValdiRuntimeServicesServiceProvider",0x29,2);
  pcVar492 = pcVar335;
  FUN_1000a19ac(pcVar335,pcVar5,puVar351,pcVar33,pcVar338,puVar293,pcVar50,puVar51,pcVar189,puVar297
                ,pcVar298,pcVar392,pcVar245,pcVar60,puVar249,pcVar203,puVar363,pcVar208,puVar367,
                puVar96,pcVar281,puVar283,pcVar217,pcVar265,pcVar221,pcVar346,puVar375,pcVar123,
                puVar450,pcVar223,puVar1,pcVar124,pcVar435,pcVar224,pcVar132,pcVar319,pcVar487);
  FUN_100082720("SCUnauthenticatedScopedFactoryServiceProvider",0x2d,2);
  pcVar493 = pcVar335;
  FUN_1000a1cec(pcVar335,puVar2,param_2,uVar4,puVar380,puVar412,puVar398,puVar399,pcVar174,puVar351,
                puVar436,puVar15,puVar290,pcVar177,pcVar18,pcVar19,puVar21,puVar269,pcVar238,pcVar23
                ,pcVar24,puVar437,pcVar31,pcVar33,pcVar34,pcVar338,pcVar47,pcVar244,pcVar183,puVar48
                ,param_3,pcVar457,puVar293,pcVar186,pcVar49,pcVar50,puVar51,pcVar402,pcVar357,
                pcVar189,puVar296,pcVar438,pcVar439,pcVar426,puVar297,pcVar53,pcVar54,puVar408,
                puVar413,pcVar358,puVar409,puVar416,puVar410,puVar272,puVar299,puVar300,pcVar57,
                puVar301,pcVar392,pcVar404,pcVar192,pcVar302,puVar275,pcVar196,pcVar60,puVar303,
                puVar463,pcVar201,puVar304,puVar305);
  FUN_100082720("SCUserSessionScopedFactoryServiceProvider",0x29,2);
  puVar494 = puVar1;
  FUN_1000a2be4(puVar1,pcVar222,pcVar491);
  FUN_100082720("ComposerShakeLogProviderEntryPointWrapperServiceProvider",0x38,2);
  puVar495 = puVar301;
  FUN_1000a2cd0(puVar301,pcVar404,pcVar491);
  FUN_100082720("ComposerSystemScopeGraphBridgeServicesServiceProvider",0x35,2);
  puVar496 = puVar96;
  FUN_1000a2d88(puVar96,puVar484,puVar434,puVar490,puVar468,pcVar132);
  FUN_100082720("PushSystemScopeGraphBridgeServicesServiceProvider",0x31,2);
  pcVar497 = pcVar492;
  FUN_1000a2e70();
  FUN_100082720("SCUnauthenticatedScopeServicesServiceProvider",0x2d,2);
  pcVar498 = pcVar493;
  FUN_1000a2edc();
  FUN_100082720("SCUserSessionScopeServicesServiceProvider",0x29,2);
  pcVar499 = pcVar144;
  FUN_1000a2f48(pcVar144,pcVar143,pcVar138,pcVar139,pcVar498,pcVar497);
  FUN_100082720("AuthenticationSubScopesRouterServiceProvider",0x2c,2);
  puVar500 = puVar1;
  FUN_1000a3010(puVar1,param_2,uVar185,uVar385,puVar2,pcVar374,pcVar499,pcVar252,pcVar208,pcVar470,
                puVar347,puVar296);
  FUN_100082720("AuthenticationWorkflowServiceProvider",0x25,2);
  puVar501 = puVar500;
  FUN_1000a3144();
  FUN_100082720("AuthenticationWorkflowServicesServiceProvider",0x2d,2);
  pcVar502 = pcVar335;
  FUN_1000a31b0(pcVar335,puVar321,puVar501,pcVar5,puVar269,puVar179,puVar336,uVar386,pcVar46,
                pcVar338,pcVar189,pcVar60,puVar249,puVar367,puVar420,pcVar281,puVar283,pcVar395,
                pcVar265,pcVar221,pcVar121,pcVar123,pcVar497,puVar129,pcVar226,pcVar498,uVar397);
  FUN_100082720("ActivSystemScopeGraphBridgeServicesServiceProvider",0x32,2);
  FUN_1000285a8(0x112d9d308,&UNK_10d93da88);
  puVar505 = &UNK_1103b70d0;
  func_0x000107c613fc(&UNK_1103b70d0,0x448,7);
  *(undefined8 **)(puVar505 + 0x10) = puVar1;
  *(char **)(puVar505 + 0x18) = pcVar502;
  *(char **)(puVar505 + 0x20) = pcVar472;
  *(undefined8 **)(puVar505 + 0x28) = puVar168;
  *(undefined8 **)(puVar505 + 0x30) = puVar320;
  *(undefined8 **)(puVar505 + 0x38) = puVar500;
  *(undefined8 **)(puVar505 + 0x40) = puVar378;
  *(undefined8 **)(puVar505 + 0x48) = puVar169;
  *(undefined8 **)(puVar505 + 0x50) = puVar349;
  *(undefined8 **)(puVar505 + 0x58) = puVar350;
  *(undefined8 **)(puVar505 + 0x60) = puVar48;
  *(undefined8 **)(puVar505 + 0x68) = puVar398;
  *(undefined8 **)(puVar505 + 0x70) = puVar413;
  *(undefined8 **)(puVar505 + 0x78) = puVar324;
  *(undefined8 **)(puVar505 + 0x80) = puVar418;
  *(undefined8 **)(puVar505 + 0x88) = puVar424;
  *(char **)(puVar505 + 0x90) = pcVar445;
  *(undefined8 **)(puVar505 + 0x98) = puVar382;
  *(char **)(puVar505 + 0xa0) = pcVar453;
  *(undefined8 **)(puVar505 + 0xa8) = puVar323;
  *(undefined8 **)(puVar505 + 0xb0) = puVar494;
  *(undefined8 **)(puVar505 + 0xb8) = puVar495;
  *(undefined8 **)(puVar505 + 0xc0) = puVar406;
  *(undefined8 **)(puVar505 + 200) = puVar235;
  *(undefined8 **)(puVar505 + 0xd0) = puVar236;
  *(undefined8 **)(puVar505 + 0xd8) = puVar383;
  *(char **)(puVar505 + 0xe0) = pcVar428;
  *(undefined8 **)(puVar505 + 0xe8) = puVar20;
  *(undefined8 **)(puVar505 + 0xf0) = puVar237;
  *(undefined8 **)(puVar505 + 0xf8) = puVar22;
  *(undefined8 **)(puVar505 + 0x100) = puVar325;
  *(char **)(puVar505 + 0x108) = pcVar326;
  *(undefined8 **)(puVar505 + 0x110) = puVar25;
  *(undefined8 **)(puVar505 + 0x118) = puVar446;
  *(char **)(puVar505 + 0x120) = pcVar327;
  *(undefined8 *)(puVar505 + 0x128) = uVar239;
  *(char **)(puVar505 + 0x130) = pcVar407;
  *(undefined8 **)(puVar505 + 0x138) = puVar463;
  *(char **)(puVar505 + 0x140) = pcVar132;
  *(undefined8 **)(puVar505 + 0x148) = puVar270;
  *(char **)(puVar505 + 0x150) = pcVar240;
  *(undefined8 **)(puVar505 + 0x158) = puVar241;
  *(undefined8 **)(puVar505 + 0x160) = puVar425;
  *(undefined8 **)(puVar505 + 0x168) = puVar483;
  *(undefined8 **)(puVar505 + 0x170) = puVar291;
  *(undefined8 **)(puVar505 + 0x178) = puVar242;
  *(undefined8 **)(puVar505 + 0x180) = puVar387;
  *(undefined8 **)(puVar505 + 0x188) = puVar496;
  *(char **)(puVar505 + 400) = pcVar182;
  *(undefined8 **)(puVar505 + 0x198) = puVar455;
  *(undefined8 **)(puVar505 + 0x1a0) = puVar456;
  *(undefined8 **)(puVar505 + 0x1a8) = puVar271;
  *(undefined8 **)(puVar505 + 0x1b0) = puVar355;
  *(undefined8 **)(puVar505 + 0x1b8) = puVar388;
  *(undefined8 **)(puVar505 + 0x1c0) = puVar390;
  *(undefined8 **)(puVar505 + 0x1c8) = puVar295;
  *(undefined8 **)(puVar505 + 0x1d0) = puVar458;
  *(undefined8 **)(puVar505 + 0x1d8) = puVar475;
  *(undefined8 **)(puVar505 + 0x1e0) = puVar414;
  *(undefined8 **)(puVar505 + 0x1e8) = puVar415;
  *(undefined8 **)(puVar505 + 0x1f0) = puVar459;
  *(undefined8 **)(puVar505 + 0x1f8) = puVar61;
  *(undefined8 **)(puVar505 + 0x200) = puVar68;
  *(undefined8 **)(puVar505 + 0x208) = puVar248;
  *(undefined8 **)(puVar505 + 0x210) = puVar75;
  *(undefined8 **)(puVar505 + 0x218) = puVar360;
  *(undefined8 **)(puVar505 + 0x220) = puVar77;
  *(undefined8 **)(puVar505 + 0x228) = puVar251;
  *(undefined8 **)(puVar505 + 0x230) = puVar362;
  *(undefined8 **)(puVar505 + 0x238) = puVar427;
  *(undefined8 **)(puVar505 + 0x240) = puVar254;
  *(undefined8 **)(puVar505 + 0x248) = puVar255;
  *(undefined8 **)(puVar505 + 0x250) = puVar429;
  *(undefined8 **)(puVar505 + 600) = puVar430;
  *(undefined8 **)(puVar505 + 0x260) = puVar366;
  *(undefined8 **)(puVar505 + 0x268) = puVar431;
  *(undefined8 **)(puVar505 + 0x270) = puVar432;
  *(undefined8 **)(puVar505 + 0x278) = puVar433;
  *(undefined8 **)(puVar505 + 0x280) = puVar478;
  *(undefined8 **)(puVar505 + 0x288) = puVar417;
  *(undefined8 **)(puVar505 + 0x290) = puVar211;
  *(undefined8 **)(puVar505 + 0x298) = puVar419;
  *(undefined8 **)(puVar505 + 0x2a0) = puVar278;
  *(undefined8 **)(puVar505 + 0x2a8) = puVar212;
  *(undefined8 **)(puVar505 + 0x2b0) = puVar306;
  *(undefined8 **)(puVar505 + 0x2b8) = puVar92;
  *(undefined8 **)(puVar505 + 0x2c0) = puVar97;
  *(undefined8 **)(puVar505 + 0x2c8) = puVar421;
  *(undefined8 **)(puVar505 + 0x2d0) = puVar259;
  *(undefined8 **)(puVar505 + 0x2d8) = puVar260;
  *(undefined8 **)(puVar505 + 0x2e0) = puVar262;
  *(undefined8 **)(puVar505 + 0x2e8) = puVar479;
  *(undefined8 **)(puVar505 + 0x2f0) = puVar485;
  *(undefined8 **)(puVar505 + 0x2f8) = puVar467;
  *(undefined8 **)(puVar505 + 0x300) = puVar369;
  *(undefined8 **)(puVar505 + 0x308) = puVar112;
  *(undefined8 **)(puVar505 + 0x310) = puVar371;
  *(undefined8 **)(puVar505 + 0x318) = puVar461;
  *(undefined8 **)(puVar505 + 800) = puVar469;
  *(undefined **)(puVar505 + 0x328) = puVar310;
  *(undefined8 **)(puVar505 + 0x330) = puVar122;
  *(undefined8 **)(puVar505 + 0x338) = puVar480;
  *(undefined8 **)(puVar505 + 0x340) = puVar442;
  *(undefined8 *)(puVar505 + 0x348) = param_2;
  *(undefined8 **)(puVar505 + 0x350) = puVar51;
  *(code **)(puVar505 + 0x358) = pcVar146;
  *(undefined8 **)(puVar505 + 0x360) = puVar125;
  *(undefined8 **)(puVar505 + 0x368) = puVar314;
  *(undefined8 **)(puVar505 + 0x370) = puVar422;
  *(undefined8 **)(puVar505 + 0x378) = puVar423;
  *(undefined8 **)(puVar505 + 0x380) = puVar376;
  *(undefined8 **)(puVar505 + 0x388) = puVar317;
  *(undefined8 **)(puVar505 + 0x390) = puVar229;
  *(undefined8 **)(puVar505 + 0x398) = puVar151;
  *(undefined8 **)(puVar505 + 0x3a0) = puVar267;
  *(char **)(puVar505 + 0x3a8) = pcVar155;
  *(char **)(puVar505 + 0x3b0) = pcVar156;
  *(code **)(puVar505 + 0x3b8) = pcVar462;
  *(char **)(puVar505 + 0x3c0) = pcVar444;
  *(undefined **)(puVar505 + 0x3c8) = puVar377;
  *(undefined8 **)(puVar505 + 0x3d0) = puVar293;
  *(undefined8 *)(puVar505 + 0x3d8) = uVar397;
  *(undefined8 **)(puVar505 + 0x3e0) = puVar210;
  *(char **)(puVar505 + 1000) = pcVar319;
  *(char **)(puVar505 + 0x3f0) = pcVar346;
  *(char **)(puVar505 + 0x3f8) = pcVar3;
  *(char **)(puVar505 + 0x400) = pcVar357;
  *(undefined8 **)(puVar505 + 0x408) = puVar488;
  *(char **)(puVar505 + 0x410) = pcVar98;
  *(undefined8 **)(puVar505 + 0x418) = puVar477;
  *(undefined8 **)(puVar505 + 0x420) = puVar161;
  *(char **)(puVar505 + 0x428) = pcVar163;
  *(char **)(puVar505 + 0x430) = pcVar24;
  *(undefined8 **)(puVar505 + 0x438) = puVar164;
  *(undefined8 **)(puVar505 + 0x440) = puVar489;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar293);
  func_0x000107c6157c(puVar310);
  func_0x000107c6157c(pcVar346);
  func_0x000107c6157c(pcVar502);
  func_0x000107c6157c(pcVar472);
  func_0x000107c6157c(puVar168);
  func_0x000107c6157c(puVar320);
  func_0x000107c6157c(puVar500);
  func_0x000107c6157c(puVar378);
  func_0x000107c6157c(puVar169);
  func_0x000107c6157c(puVar349);
  func_0x000107c6157c(puVar350);
  func_0x000107c6157c(puVar48);
  func_0x000107c6157c(puVar398);
  func_0x000107c6157c(puVar413);
  func_0x000107c6157c(puVar324);
  func_0x000107c6157c(puVar418);
  func_0x000107c6157c(puVar424);
  func_0x000107c6157c(pcVar445);
  func_0x000107c6157c(puVar382);
  func_0x000107c6157c(pcVar453);
  func_0x000107c6157c(puVar323);
  func_0x000107c6157c(puVar494);
  func_0x000107c6157c(puVar495);
  func_0x000107c6157c(puVar406);
  func_0x000107c6157c(puVar235);
  func_0x000107c6157c(puVar236);
  func_0x000107c6157c(puVar383);
  func_0x000107c6157c(pcVar428);
  func_0x000107c6157c(puVar20);
  func_0x000107c6157c(puVar237);
  func_0x000107c6157c(puVar22);
  func_0x000107c6157c(puVar325);
  func_0x000107c6157c(pcVar326);
  func_0x000107c6157c(puVar25);
  func_0x000107c6157c(puVar446);
  func_0x000107c6157c(pcVar327);
  func_0x000107c6157c(uVar239);
  func_0x000107c6157c(pcVar407);
  func_0x000107c6157c(puVar463);
  func_0x000107c6157c(pcVar132);
  func_0x000107c6157c(puVar270);
  func_0x000107c6157c(pcVar240);
  func_0x000107c6157c(puVar241);
  func_0x000107c6157c(puVar425);
  func_0x000107c6157c(puVar483);
  func_0x000107c6157c(puVar291);
  func_0x000107c6157c(puVar242);
  func_0x000107c6157c(puVar387);
  func_0x000107c6157c(puVar496);
  func_0x000107c6157c(pcVar182);
  func_0x000107c6157c(puVar455);
  func_0x000107c6157c(puVar456);
  func_0x000107c6157c(puVar271);
  func_0x000107c6157c(puVar355);
  func_0x000107c6157c(puVar388);
  func_0x000107c6157c(puVar390);
  func_0x000107c6157c(puVar295);
  func_0x000107c6157c(puVar458);
  func_0x000107c6157c(puVar475);
  func_0x000107c6157c(puVar414);
  func_0x000107c6157c(puVar415);
  func_0x000107c6157c(puVar459);
  func_0x000107c6157c(puVar61);
  func_0x000107c6157c(puVar68);
  func_0x000107c6157c(puVar248);
  func_0x000107c6157c(puVar75);
  func_0x000107c6157c(puVar360);
  func_0x000107c6157c(puVar77);
  func_0x000107c6157c(puVar251);
  func_0x000107c6157c(puVar362);
  func_0x000107c6157c(puVar427);
  func_0x000107c6157c(puVar254);
  func_0x000107c6157c(puVar255);
  func_0x000107c6157c(puVar429);
  func_0x000107c6157c(puVar430);
  func_0x000107c6157c(puVar366);
  func_0x000107c6157c(puVar431);
  func_0x000107c6157c(puVar432);
  func_0x000107c6157c(puVar433);
  func_0x000107c6157c(puVar478);
  func_0x000107c6157c(puVar417);
  func_0x000107c6157c(puVar211);
  func_0x000107c6157c(puVar419);
  func_0x000107c6157c(puVar278);
  func_0x000107c6157c(puVar212);
  func_0x000107c6157c(puVar306);
  func_0x000107c6157c(puVar92);
  func_0x000107c6157c(puVar97);
  func_0x000107c6157c(puVar421);
  func_0x000107c6157c(puVar259);
  func_0x000107c6157c(puVar260);
  func_0x000107c6157c(puVar262);
  func_0x000107c6157c(puVar479);
  func_0x000107c6157c(puVar485);
  func_0x000107c6157c(puVar467);
  func_0x000107c6157c(puVar369);
  func_0x000107c6157c(puVar112);
  func_0x000107c6157c(puVar371);
  func_0x000107c6157c(puVar461);
  func_0x000107c6157c(puVar469);
  func_0x000107c6157c(puVar122);
  func_0x000107c6157c(puVar480);
  func_0x000107c6157c(puVar442);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(puVar51);
  func_0x000107c6157c(pcVar146);
  func_0x000107c6157c(puVar125);
  func_0x000107c6157c(puVar314);
  func_0x000107c6157c(puVar422);
  func_0x000107c6157c(puVar423);
  func_0x000107c6157c(puVar376);
  func_0x000107c6157c(puVar317);
  func_0x000107c6157c(puVar229);
  func_0x000107c6157c(puVar151);
  func_0x000107c6157c(puVar267);
  func_0x000107c6157c(pcVar155);
  func_0x000107c6157c(pcVar156);
  func_0x000107c6157c(pcVar462);
  func_0x000107c6157c(pcVar444);
  func_0x000107c6157c(puVar377);
  func_0x000107c6157c(uVar397);
  func_0x000107c6157c(puVar210);
  func_0x000107c6157c(pcVar319);
  func_0x000107c6157c(pcVar3);
  func_0x000107c6157c(pcVar357);
  func_0x000107c6157c(puVar488);
  func_0x000107c6157c(pcVar98);
  func_0x000107c6157c(puVar477);
  func_0x000107c6157c(puVar161);
  func_0x000107c6157c(pcVar163);
  func_0x000107c6157c(pcVar24);
  func_0x000107c6157c(puVar164);
  func_0x000107c6157c(puVar489);
  pcVar503 = FUN_1000a6c7c;
  FUN_1000823a8(FUN_1000a6c7c,puVar505);
  FUN_100082720("SCSystemScopeInitializationPluginRegistryServiceProvider",0x38,2);
  FUN_1000285a8(0x112d9d258,&UNK_10d93da90);
  func_0x000107c6157c(pcVar503);
  pcVar504 = FUN_1000a3a2c;
  FUN_1000823a8(FUN_1000a3a2c,pcVar503);
  FUN_100082720("SCSystemScopeInitializationServiceProvider",0x2a,2);
  FUN_1000285a8(0x112d9d138,&UNK_10d93d810);
  puVar505 = &UNK_1103b70f8;
  func_0x000107c613fc(&UNK_1103b70f8,0x118,7);
  *(undefined8 **)(puVar505 + 0x10) = puVar48;
  *(undefined8 *)(puVar505 + 0x18) = param_3;
  *(char **)(puVar505 + 0x20) = pcVar3;
  *(undefined8 **)(puVar505 + 0x28) = puVar293;
  *(char **)(puVar505 + 0x30) = pcVar186;
  *(char **)(puVar505 + 0x38) = pcVar50;
  *(char **)(puVar505 + 0x40) = pcVar357;
  *(undefined8 **)(puVar505 + 0x48) = puVar379;
  *(char **)(puVar505 + 0x50) = pcVar52;
  *(undefined8 **)(puVar505 + 0x58) = puVar413;
  *(undefined8 **)(puVar505 + 0x60) = puVar409;
  *(undefined8 **)(puVar505 + 0x68) = puVar398;
  *(char **)(puVar505 + 0x70) = pcVar197;
  *(char **)(puVar505 + 0x78) = pcVar247;
  *(undefined8 **)(puVar505 + 0x80) = puVar463;
  *(undefined8 **)(puVar505 + 0x88) = puVar324;
  *(undefined8 **)(puVar505 + 0x90) = puVar210;
  *(undefined8 **)(puVar505 + 0x98) = puVar27;
  *(char **)(puVar505 + 0xa0) = pcVar98;
  *(undefined8 **)(puVar505 + 0xa8) = puVar448;
  *(undefined8 **)(puVar505 + 0xb0) = puVar261;
  *(code **)(puVar505 + 0xb8) = pcVar504;
  *(char **)(puVar505 + 0xc0) = pcVar118;
  *(undefined8 *)(puVar505 + 200) = uVar228;
  *(char **)(puVar505 + 0xd0) = pcVar230;
  *(char **)(puVar505 + 0xd8) = pcVar319;
  *(char **)(puVar505 + 0xe0) = pcVar156;
  *(char **)(puVar505 + 0xe8) = pcVar374;
  *(char **)(puVar505 + 0xf0) = pcVar346;
  *(char **)(puVar505 + 0xf8) = pcVar444;
  *(undefined8 *)(puVar505 + 0x100) = uVar397;
  *(undefined8 **)(puVar505 + 0x108) = puVar488;
  *(char **)(puVar505 + 0x110) = pcVar166;
  func_0x000107c6157c();
  func_0x000107c6157c(puVar293);
  func_0x000107c6157c(puVar261);
  func_0x000107c6157c(pcVar50);
  func_0x000107c6157c(pcVar346);
  func_0x000107c6157c(pcVar186);
  func_0x000107c6157c(puVar48);
  func_0x000107c6157c(puVar398);
  func_0x000107c6157c(puVar413);
  func_0x000107c6157c(puVar324);
  func_0x000107c6157c(puVar463);
  func_0x000107c6157c(pcVar156);
  func_0x000107c6157c(pcVar444);
  func_0x000107c6157c(uVar397);
  func_0x000107c6157c(puVar210);
  func_0x000107c6157c(pcVar319);
  func_0x000107c6157c(pcVar3);
  func_0x000107c6157c(pcVar357);
  func_0x000107c6157c(puVar488);
  func_0x000107c6157c(pcVar98);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(puVar379);
  func_0x000107c6157c(puVar409);
  func_0x000107c6157c(pcVar197);
  func_0x000107c6157c(pcVar247);
  func_0x000107c6157c(puVar27);
  func_0x000107c6157c(puVar448);
  func_0x000107c6157c(pcVar504);
  func_0x000107c6157c(pcVar118);
  func_0x000107c6157c(uVar228);
  func_0x000107c6157c(pcVar230);
  func_0x000107c6157c(pcVar374);
  func_0x000107c6157c(pcVar166);
  pcVar506 = FUN_1000a39c8;
  FUN_1000823a8(FUN_1000a39c8,puVar505);
  FUN_100082720("SCSystemScopedServicesServiceProvider",0x25,2);
  puVar505 = &UNK_1103b7120;
  func_0x000107c613fc(&UNK_1103b7120,0x20,7);
  *(code **)(puVar505 + 0x10) = pcVar506;
  *(code **)(puVar505 + 0x18) = pcVar146;
  func_0x000107c6157c();
  pcVar506 = FUN_1000a3514;
  FUN_1000823a8(FUN_1000a3514,puVar505);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(puVar8);
  func_0x000107c61574(pcVar9);
  func_0x000107c61574(pcVar10);
  func_0x000107c61574(pcVar11);
  func_0x000107c61574(puVar12);
  func_0x000107c61574(puVar13);
  func_0x000107c61574(pcVar14);
  func_0x000107c61574(puVar15);
  func_0x000107c61574(pcVar16);
  func_0x000107c61574(pcVar17);
  func_0x000107c61574(pcVar18);
  func_0x000107c61574(pcVar19);
  func_0x000107c61574(puVar20);
  func_0x000107c61574(puVar21);
  func_0x000107c61574(puVar22);
  func_0x000107c61574(pcVar23);
  func_0x000107c61574(pcVar24);
  func_0x000107c61574(puVar25);
  func_0x000107c61574(puVar26);
  func_0x000107c61574(puVar27);
  func_0x000107c61574(pcVar28);
  func_0x000107c61574(pcVar29);
  func_0x000107c61574(pcVar30);
  func_0x000107c61574(pcVar31);
  func_0x000107c61574(pcVar32);
  func_0x000107c61574(pcVar33);
  func_0x000107c61574(pcVar34);
  func_0x000107c61574(pcVar35);
  func_0x000107c61574(pcVar36);
  func_0x000107c61574(pcVar37);
  func_0x000107c61574(pcVar38);
  func_0x000107c61574(pcVar39);
  func_0x000107c61574(pcVar40);
  func_0x000107c61574(pcVar41);
  func_0x000107c61574(pcVar42);
  func_0x000107c61574(pcVar43);
  func_0x000107c61574(pcVar44);
  func_0x000107c61574(pcVar45);
  func_0x000107c61574(pcVar46);
  func_0x000107c61574(pcVar47);
  func_0x000107c61574(puVar48);
  func_0x000107c61574(pcVar49);
  func_0x000107c61574(pcVar50);
  func_0x000107c61574(puVar51);
  func_0x000107c61574(pcVar52);
  func_0x000107c61574(pcVar53);
  func_0x000107c61574(pcVar54);
  func_0x000107c61574(pcVar55);
  func_0x000107c61574(pcVar56);
  func_0x000107c61574(pcVar57);
  func_0x000107c61574(puVar58);
  func_0x000107c61574(pcVar59);
  func_0x000107c61574(pcVar60);
  func_0x000107c61574(puVar61);
  func_0x000107c61574(pcVar62);
  func_0x000107c61574(pcVar63);
  func_0x000107c61574(pcVar64);
  func_0x000107c61574(pcVar65);
  func_0x000107c61574(pcVar66);
  func_0x000107c61574(pcVar67);
  func_0x000107c61574(puVar68);
  func_0x000107c61574(puVar69);
  func_0x000107c61574(pcVar70);
  func_0x000107c61574(pcVar71);
  func_0x000107c61574(pcVar72);
  func_0x000107c61574(pcVar73);
  func_0x000107c61574(pcVar74);
  func_0x000107c61574(puVar75);
  func_0x000107c61574(puVar76);
  func_0x000107c61574(puVar77);
  func_0x000107c61574(puVar78);
  func_0x000107c61574(pcVar79);
  func_0x000107c61574(pcVar80);
  func_0x000107c61574(pcVar81);
  func_0x000107c61574(pcVar82);
  func_0x000107c61574(pcVar83);
  func_0x000107c61574(pcVar84);
  func_0x000107c61574(pcVar85);
  func_0x000107c61574(pcVar86);
  func_0x000107c61574(pcVar87);
  func_0x000107c61574(pcVar88);
  func_0x000107c61574(pcVar89);
  func_0x000107c61574(pcVar90);
  func_0x000107c61574(pcVar91);
  func_0x000107c61574(puVar92);
  func_0x000107c61574(puVar93);
  func_0x000107c61574(pcVar94);
  func_0x000107c61574(pcVar95);
  func_0x000107c61574(puVar96);
  func_0x000107c61574(puVar97);
  func_0x000107c61574(pcVar98);
  func_0x000107c61574(puVar99);
  func_0x000107c61574(pcVar100);
  func_0x000107c61574(pcVar101);
  func_0x000107c61574(pcVar102);
  func_0x000107c61574(pcVar103);
  func_0x000107c61574(pcVar104);
  func_0x000107c61574(pcVar105);
  func_0x000107c61574(pcVar106);
  func_0x000107c61574(pcVar107);
  func_0x000107c61574(pcVar108);
  func_0x000107c61574(pcVar109);
  func_0x000107c61574(pcVar110);
  func_0x000107c61574(pcVar111);
  func_0x000107c61574(puVar112);
  func_0x000107c61574(puVar113);
  func_0x000107c61574(pcVar114);
  func_0x000107c61574(pcVar115);
  func_0x000107c61574(pcVar116);
  func_0x000107c61574(pcVar117);
  func_0x000107c61574(pcVar118);
  func_0x000107c61574(pcVar119);
  func_0x000107c61574(pcVar120);
  func_0x000107c61574(pcVar121);
  func_0x000107c61574(puVar122);
  func_0x000107c61574(pcVar123);
  func_0x000107c61574(pcVar124);
  func_0x000107c61574(puVar125);
  func_0x000107c61574(puVar126);
  func_0x000107c61574(pcVar127);
  func_0x000107c61574(puVar128);
  func_0x000107c61574(puVar129);
  func_0x000107c61574(pcVar130);
  func_0x000107c61574(pcVar131);
  func_0x000107c61574(pcVar132);
  func_0x000107c61574(puVar133);
  func_0x000107c61574(puVar134);
  func_0x000107c61574(puVar135);
  func_0x000107c61574(puVar136);
  func_0x000107c61574(param_4);
  func_0x000107c61574(pcVar137);
  func_0x000107c61574(pcVar138);
  func_0x000107c61574(pcVar139);
  func_0x000107c61574(pcVar140);
  func_0x000107c61574(pcVar141);
  func_0x000107c61574(pcVar142);
  func_0x000107c61574(pcVar143);
  func_0x000107c61574(pcVar144);
  func_0x000107c61574(uVar145);
  func_0x000107c61574(pcVar146);
  func_0x000107c61574(pcVar147);
  func_0x000107c61574(pcVar148);
  func_0x000107c61574(pcVar149);
  func_0x000107c61574(pcVar150);
  func_0x000107c61574(puVar151);
  func_0x000107c61574(puVar152);
  func_0x000107c61574(pcVar153);
  func_0x000107c61574(pcVar154);
  func_0x000107c61574(pcVar155);
  func_0x000107c61574(pcVar156);
  func_0x000107c61574(pcVar157);
  func_0x000107c61574(pcVar158);
  func_0x000107c61574(pcVar159);
  func_0x000107c61574(pcVar160);
  func_0x000107c61574(puVar161);
  func_0x000107c61574(puVar162);
  func_0x000107c61574(pcVar163);
  func_0x000107c61574(puVar164);
  func_0x000107c61574(pcVar165);
  func_0x000107c61574(pcVar166);
  func_0x000107c61574(puVar167);
  func_0x000107c61574(puVar168);
  func_0x000107c61574(puVar169);
  func_0x000107c61574(pcVar170);
  func_0x000107c61574(pcVar171);
  func_0x000107c61574(pcVar172);
  func_0x000107c61574(pcVar173);
  func_0x000107c61574(pcVar174);
  func_0x000107c61574(pcVar175);
  func_0x000107c61574(puVar176);
  func_0x000107c61574(pcVar177);
  func_0x000107c61574(pcVar178);
  func_0x000107c61574(puVar179);
  func_0x000107c61574(pcVar180);
  func_0x000107c61574(pcVar181);
  func_0x000107c61574(pcVar182);
  func_0x000107c61574(pcVar183);
  func_0x000107c61574(pcVar184);
  func_0x000107c61574(uVar185);
  func_0x000107c61574(pcVar186);
  func_0x000107c61574(pcVar187);
  func_0x000107c61574(pcVar188);
  func_0x000107c61574(pcVar189);
  func_0x000107c61574(pcVar190);
  func_0x000107c61574(pcVar191);
  func_0x000107c61574(pcVar192);
  func_0x000107c61574(pcVar193);
  func_0x000107c61574(pcVar194);
  func_0x000107c61574(pcVar195);
  func_0x000107c61574(pcVar196);
  func_0x000107c61574(pcVar197);
  func_0x000107c61574(puVar198);
  func_0x000107c61574(puVar199);
  func_0x000107c61574(pcVar200);
  func_0x000107c61574(pcVar201);
  func_0x000107c61574(puVar202);
  func_0x000107c61574(pcVar203);
  func_0x000107c61574(puVar204);
  func_0x000107c61574(pcVar205);
  func_0x000107c61574(pcVar206);
  func_0x000107c61574(pcVar207);
  func_0x000107c61574(pcVar208);
  func_0x000107c61574(pcVar209);
  func_0x000107c61574(puVar210);
  func_0x000107c61574(puVar211);
  func_0x000107c61574(puVar212);
  func_0x000107c61574(pcVar213);
  func_0x000107c61574(puVar214);
  func_0x000107c61574(puVar215);
  func_0x000107c61574(pcVar216);
  func_0x000107c61574(pcVar217);
  func_0x000107c61574(pcVar218);
  func_0x000107c61574(pcVar219);
  func_0x000107c61574(pcVar220);
  func_0x000107c61574(pcVar221);
  func_0x000107c61574(pcVar222);
  func_0x000107c61574(pcVar223);
  func_0x000107c61574(pcVar224);
  func_0x000107c61574(pcVar225);
  func_0x000107c61574(pcVar226);
  func_0x000107c61574(puVar227);
  func_0x000107c61574(uVar228);
  func_0x000107c61574(puVar229);
  func_0x000107c61574(pcVar230);
  func_0x000107c61574(puVar231);
  func_0x000107c61574(param_6);
  func_0x000107c61574(pcVar232);
  func_0x000107c61574(pcVar233);
  func_0x000107c61574(pcVar234);
  func_0x000107c61574(puVar235);
  func_0x000107c61574(puVar236);
  func_0x000107c61574(puVar237);
  func_0x000107c61574(pcVar238);
  func_0x000107c61574(uVar239);
  func_0x000107c61574(pcVar240);
  func_0x000107c61574(puVar241);
  func_0x000107c61574(puVar242);
  func_0x000107c61574(pcVar243);
  func_0x000107c61574(pcVar244);
  func_0x000107c61574(pcVar245);
  func_0x000107c61574(pcVar246);
  func_0x000107c61574(pcVar247);
  func_0x000107c61574(puVar248);
  func_0x000107c61574(puVar249);
  func_0x000107c61574(pcVar250);
  func_0x000107c61574(puVar251);
  func_0x000107c61574(pcVar252);
  func_0x000107c61574(pcVar253);
  func_0x000107c61574(puVar254);
  func_0x000107c61574(puVar255);
  func_0x000107c61574(puVar256);
  func_0x000107c61574(puVar257);
  func_0x000107c61574(pcVar258);
  func_0x000107c61574(puVar259);
  func_0x000107c61574(puVar260);
  func_0x000107c61574(puVar261);
  func_0x000107c61574(puVar262);
  func_0x000107c61574(puVar263);
  func_0x000107c61574(puVar264);
  func_0x000107c61574(pcVar265);
  func_0x000107c61574(puVar266);
  func_0x000107c61574(puVar267);
  func_0x000107c61574(puVar268);
  func_0x000107c61574(puVar269);
  func_0x000107c61574(puVar270);
  func_0x000107c61574(puVar271);
  func_0x000107c61574(puVar272);
  func_0x000107c61574(pcVar273);
  func_0x000107c61574(puVar274);
  func_0x000107c61574(puVar275);
  func_0x000107c61574(pcVar276);
  func_0x000107c61574(puVar277);
  func_0x000107c61574(puVar278);
  func_0x000107c61574(puVar279);
  func_0x000107c61574(pcVar280);
  func_0x000107c61574(pcVar281);
  func_0x000107c61574(puVar282);
  func_0x000107c61574(puVar283);
  func_0x000107c61574(puVar284);
  func_0x000107c61574(puVar285);
  func_0x000107c61574(puVar286);
  func_0x000107c61574(puVar287);
  func_0x000107c61574(pcVar288);
  func_0x000107c61574(puVar289);
  func_0x000107c61574(puVar290);
  func_0x000107c61574(puVar291);
  func_0x000107c61574(puVar292);
  func_0x000107c61574(puVar293);
  func_0x000107c61574(puVar294);
  func_0x000107c61574(puVar295);
  func_0x000107c61574(puVar296);
  func_0x000107c61574(puVar297);
  func_0x000107c61574(pcVar298);
  func_0x000107c61574(puVar299);
  func_0x000107c61574(puVar300);
  func_0x000107c61574(puVar301);
  func_0x000107c61574(pcVar302);
  func_0x000107c61574(puVar303);
  func_0x000107c61574(puVar304);
  func_0x000107c61574(puVar305);
  func_0x000107c61574(puVar306);
  func_0x000107c61574(puVar307);
  func_0x000107c61574(puVar308);
  func_0x000107c61574(puVar309);
  func_0x000107c61574(puVar310);
  func_0x000107c61574(puVar311);
  func_0x000107c61574(puVar312);
  func_0x000107c61574(pcVar313);
  func_0x000107c61574(puVar314);
  func_0x000107c61574(puVar315);
  func_0x000107c61574(puVar316);
  func_0x000107c61574(puVar317);
  func_0x000107c61574(pcVar318);
  func_0x000107c61574(pcVar319);
  func_0x000107c61574(puVar320);
  func_0x000107c61574(puVar321);
  func_0x000107c61574(puVar322);
  func_0x000107c61574(puVar323);
  func_0x000107c61574(puVar324);
  func_0x000107c61574(puVar325);
  func_0x000107c61574(pcVar326);
  func_0x000107c61574(pcVar327);
  func_0x000107c61574(pcVar328);
  func_0x000107c61574(puVar329);
  func_0x000107c61574(pcVar330);
  func_0x000107c61574(pcVar331);
  func_0x000107c61574(puVar332);
  func_0x000107c61574(pcVar333);
  func_0x000107c61574(pcVar334);
  func_0x000107c61574(pcVar335);
  func_0x000107c61574(puVar336);
  func_0x000107c61574(puVar337);
  func_0x000107c61574(pcVar338);
  func_0x000107c61574(pcVar339);
  func_0x000107c61574(pcVar340);
  func_0x000107c61574(puVar341);
  func_0x000107c61574(puVar342);
  func_0x000107c61574(pcVar343);
  func_0x000107c61574(puVar344);
  func_0x000107c61574(puVar345);
  func_0x000107c61574(pcVar346);
  func_0x000107c61574(puVar347);
  func_0x000107c61574(pcVar348);
  func_0x000107c61574(puVar349);
  func_0x000107c61574(puVar350);
  func_0x000107c61574(puVar351);
  func_0x000107c61574(pcVar352);
  func_0x000107c61574(pcVar353);
  func_0x000107c61574(pcVar354);
  func_0x000107c61574(puVar355);
  func_0x000107c61574(puVar356);
  func_0x000107c61574(pcVar357);
  func_0x000107c61574(pcVar358);
  func_0x000107c61574(pcVar359);
  func_0x000107c61574(puVar360);
  func_0x000107c61574(puVar361);
  func_0x000107c61574(puVar362);
  func_0x000107c61574(puVar363);
  func_0x000107c61574(puVar364);
  func_0x000107c61574(puVar365);
  func_0x000107c61574(puVar366);
  func_0x000107c61574(puVar367);
  func_0x000107c61574(puVar368);
  func_0x000107c61574(puVar369);
  func_0x000107c61574(puVar370);
  func_0x000107c61574(puVar371);
  func_0x000107c61574(puVar372);
  func_0x000107c61574(pcVar373);
  func_0x000107c61574(pcVar374);
  func_0x000107c61574(puVar375);
  func_0x000107c61574(puVar376);
  func_0x000107c61574(puVar377);
  func_0x000107c61574(puVar378);
  func_0x000107c61574(puVar379);
  func_0x000107c61574(puVar380);
  func_0x000107c61574(puVar381);
  func_0x000107c61574(puVar382);
  func_0x000107c61574(puVar383);
  func_0x000107c61574(pcVar384);
  func_0x000107c61574(uVar385);
  func_0x000107c61574(uVar386);
  func_0x000107c61574(puVar387);
  func_0x000107c61574(puVar388);
  func_0x000107c61574(pcVar389);
  func_0x000107c61574(puVar390);
  func_0x000107c61574(puVar391);
  func_0x000107c61574(pcVar392);
  func_0x000107c61574(pcVar393);
  func_0x000107c61574(pcVar394);
  func_0x000107c61574(pcVar395);
  func_0x000107c61574(uVar396);
  func_0x000107c61574(uVar397);
  func_0x000107c61574(puVar398);
  func_0x000107c61574(puVar399);
  func_0x000107c61574(puVar400);
  func_0x000107c61574(puVar401);
  func_0x000107c61574(pcVar402);
  func_0x000107c61574(puVar403);
  func_0x000107c61574(pcVar404);
  func_0x000107c61574(puVar405);
  func_0x000107c61574(puVar406);
  func_0x000107c61574(pcVar407);
  func_0x000107c61574(puVar408);
  func_0x000107c61574(puVar409);
  func_0x000107c61574(puVar410);
  func_0x000107c61574(puVar411);
  func_0x000107c61574(puVar412);
  func_0x000107c61574(puVar413);
  func_0x000107c61574(puVar414);
  func_0x000107c61574(puVar415);
  func_0x000107c61574(puVar416);
  func_0x000107c61574(puVar417);
  func_0x000107c61574(puVar418);
  func_0x000107c61574(puVar419);
  func_0x000107c61574(puVar420);
  func_0x000107c61574(puVar421);
  func_0x000107c61574(puVar422);
  func_0x000107c61574(puVar423);
  func_0x000107c61574(puVar424);
  func_0x000107c61574(puVar425);
  func_0x000107c61574(pcVar426);
  func_0x000107c61574(puVar427);
  func_0x000107c61574(pcVar428);
  func_0x000107c61574(puVar429);
  func_0x000107c61574(puVar430);
  func_0x000107c61574(puVar431);
  func_0x000107c61574(puVar432);
  func_0x000107c61574(puVar433);
  func_0x000107c61574(puVar434);
  func_0x000107c61574(pcVar435);
  func_0x000107c61574(puVar436);
  func_0x000107c61574(puVar437);
  func_0x000107c61574(pcVar438);
  func_0x000107c61574(pcVar439);
  func_0x000107c61574(puVar440);
  func_0x000107c61574(puVar441);
  func_0x000107c61574(puVar442);
  func_0x000107c61574(puVar443);
  func_0x000107c61574(pcVar444);
  func_0x000107c61574(pcVar445);
  func_0x000107c61574(puVar446);
  func_0x000107c61574(puVar447);
  func_0x000107c61574(puVar448);
  func_0x000107c61574(puVar449);
  func_0x000107c61574(puVar450);
  func_0x000107c61574(pcVar451);
  func_0x000107c61574(pcVar452);
  func_0x000107c61574(pcVar453);
  func_0x000107c61574(pcVar454);
  func_0x000107c61574(puVar455);
  func_0x000107c61574(puVar456);
  func_0x000107c61574(pcVar457);
  func_0x000107c61574(puVar458);
  func_0x000107c61574(puVar459);
  func_0x000107c61574(puVar460);
  func_0x000107c61574(puVar461);
  func_0x000107c61574(pcVar462);
  func_0x000107c61574(puVar463);
  func_0x000107c61574(puVar464);
  func_0x000107c61574(puVar465);
  func_0x000107c61574(pcVar466);
  func_0x000107c61574(puVar467);
  func_0x000107c61574(puVar468);
  func_0x000107c61574(puVar469);
  func_0x000107c61574(pcVar470);
  func_0x000107c61574(uVar507);
  func_0x000107c61574(uVar471);
  func_0x000107c61574(pcVar472);
  func_0x000107c61574(puVar473);
  func_0x000107c61574(puVar474);
  func_0x000107c61574(puVar475);
  func_0x000107c61574(pcVar476);
  func_0x000107c61574(puVar477);
  func_0x000107c61574(puVar478);
  func_0x000107c61574(puVar479);
  func_0x000107c61574(puVar480);
  func_0x000107c61574(pcVar481);
  func_0x000107c61574(puVar482);
  func_0x000107c61574(puVar483);
  func_0x000107c61574(puVar484);
  func_0x000107c61574(puVar485);
  func_0x000107c61574(pcVar486);
  func_0x000107c61574(pcVar487);
  func_0x000107c61574(puVar488);
  func_0x000107c61574(puVar489);
  func_0x000107c61574(puVar490);
  func_0x000107c61574(pcVar491);
  func_0x000107c61574(pcVar492);
  func_0x000107c61574(pcVar493);
  func_0x000107c61574(puVar494);
  func_0x000107c61574(puVar495);
  func_0x000107c61574(puVar496);
  func_0x000107c61574(pcVar497);
  func_0x000107c61574(pcVar498);
  func_0x000107c61574(pcVar499);
  func_0x000107c61574(puVar500);
  func_0x000107c61574(puVar501);
  func_0x000107c61574(pcVar502);
  func_0x000107c61574(pcVar503);
  func_0x000107c61574(pcVar504);
  FUN_100082720("SCSystemScopeEntryPointProvider",0x1f,2);
  *extraout_x8 = pcVar506;
  return;
}



/* Entry: 100092264; end: 100092297;  */

void FUN_100092264(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100092298; end: 100092363;  */

void FUN_100092298(void)

{
  FUN_1000285a8(0x112daa170,&UNK_10d951590);
  FUN_1000823a8(FUN_1000aa648,0);
  return;
}



/* Entry: 100092364; end: 100092383;  */

void FUN_100092364(void)

{
  func_0x000107c61168(&PTR_PTR_112987e48);
  return;
}



/* Entry: 100092384; end: 1000923c3;  */

void FUN_100092384(void)

{
  FUN_1000285a8(0x112d9f628,&UNK_10d9405a0);
  FUN_1000823a8(&UNK_10144a354,0);
  return;
}



/* Entry: 1000923c4; end: 1000923e3;  */

void FUN_1000923c4(void)

{
  func_0x000107c61168(&PTR_PTR_112982ad0);
  return;
}



/* Entry: 1000923e4; end: 10009257b;  */

void FUN_1000923e4(undefined8 param_1)

{
  FUN_1000285a8(0x112da03d0,&UNK_10d942ee0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1000d2770,param_1);
  return;
}



/* Entry: 10009257c; end: 100092597;  */

void FUN_10009257c(undefined8 param_1)

{
  FUN_1000285a8(0x112da1c20,&UNK_10d9454f0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_10147dc3c,param_1);
  return;
}



/* Entry: 100092598; end: 1000925e7;  */

void FUN_100092598(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1000925e8; end: 100092603;  */

void FUN_1000925e8(undefined8 param_1)

{
  FUN_1000285a8(0x112da1c28,&UNK_10d9454f8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_10147df98,param_1);
  return;
}



/* Entry: 100092604; end: 100092623;  */

void FUN_100092604(void)

{
  func_0x000107c61168(&PTR_PTR_1127d9858);
  return;
}



/* Entry: 100092624; end: 1000927af;  */

void FUN_100092624(void)

{
  FUN_1000285a8(0x113060100,&UNK_10dcd5710);
  FUN_1000823a8(FUN_1000c2a7c,0);
  return;
}



/* Entry: 1000927b0; end: 1000927cb;  */

void FUN_1000927b0(undefined8 param_1)

{
  FUN_1000285a8(0x112da5b30,&UNK_10d94b3e0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_10097ac94,param_1);
  return;
}



/* Entry: 1000927cc; end: 10009281b;  */

void FUN_1000927cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10009281c; end: 10009283b;  */

void FUN_10009281c(void)

{
  func_0x000107c61168(&PTR_PTR_112da5ba8);
  return;
}



/* Entry: 10009283c; end: 100092857;  */

void FUN_10009283c(undefined8 param_1)

{
  FUN_1000285a8(0x112da5b38,&UNK_10d94b3e8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_10097ac38,param_1);
  return;
}



/* Entry: 100092858; end: 100092877;  */

void FUN_100092858(void)

{
  func_0x000107c61168(&PTR_PTR_1127ef328);
  return;
}



/* Entry: 100092878; end: 100092893;  */

void FUN_100092878(undefined8 param_1)

{
  FUN_1000285a8(0x112da34b8,&UNK_10d947d80);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100979aa4,param_1);
  return;
}



/* Entry: 100092894; end: 1000928e3;  */

void FUN_100092894(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1000928e4; end: 100092903;  */

void FUN_1000928e4(void)

{
  func_0x000107c61168(&PTR_PTR_112da3530);
  return;
}



/* Entry: 100092904; end: 100092983;  */

void FUN_100092904(void)

{
  FUN_1000285a8(0x112da8f78,&UNK_10d950370);
  FUN_1000823a8(&UNK_1014bed70,0);
  return;
}



/* Entry: 100092984; end: 10009299f;  */

void FUN_100092984(undefined8 param_1)

{
  FUN_1000285a8(0x112da6858,&UNK_10d94c640);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1004ec074,param_1);
  return;
}



/* Entry: 1000929a0; end: 1000929ef;  */

void FUN_1000929a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1000929f0; end: 100092a0f;  */

void FUN_1000929f0(void)

{
  func_0x000107c61168(&PTR_PTR_112da68d0);
  return;
}



/* Entry: 100092a10; end: 100092aa7;  */

void FUN_100092a10(undefined8 param_1)

{
  FUN_1000285a8(0x112da1388,&UNK_10d9445f0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101474db0,param_1);
  return;
}



/* Entry: 100092aa8; end: 100092ac7;  */

void FUN_100092aa8(void)

{
  func_0x000107c61168(&PTR_PTR_1129def80);
  return;
}



/* Entry: 100092ac8; end: 100092c53;  */

void FUN_100092ac8(void)

{
  FUN_1000285a8(0x112da0618,&UNK_10d943580);
  FUN_1000823a8(FUN_1000c0f50,0);
  return;
}



/* Entry: 100092c54; end: 100092c73;  */

void FUN_100092c54(void)

{
  func_0x000107c61168(&PTR_PTR_11289e958);
  return;
}



/* Entry: 100092c74; end: 100092fbf;  */

void FUN_100092c74(void)

{
  FUN_1000285a8(0x11307c478,&UNK_10dd04490);
  FUN_1000823a8(FUN_1000b5518,0);
  return;
}



/* Entry: 100092fc0; end: 100092fdf;  */

void FUN_100092fc0(void)

{
  func_0x000107c61168(&PTR_PTR_112981d20);
  return;
}



/* Entry: 100092fe0; end: 10009306b;  */

void FUN_100092fe0(void)

{
  FUN_1000285a8(0x112da1c10,&UNK_10d9453a0);
  FUN_1000823a8(FUN_100455e10,0);
  return;
}



/* Entry: 10009306c; end: 10009308b;  */

void FUN_10009306c(void)

{
  func_0x000107c61168(&PTR_PTR_1129dcf98);
  return;
}



/* Entry: 10009308c; end: 100093163;  */

void FUN_10009308c(void)

{
  FUN_1000285a8(0x112da1378,&UNK_10d944560);
  FUN_1000823a8(0x100113654,0);
  return;
}



/* Entry: 100093164; end: 100093183;  */

void FUN_100093164(void)

{
  func_0x000107c61168(&PTR_PTR_1129df5b0);
  return;
}



/* Entry: 100093184; end: 1000931c3;  */

void FUN_100093184(void)

{
  FUN_1000285a8(0x112d9fd28,&UNK_10d942130);
  FUN_1000823a8(&UNK_101452e98,0);
  return;
}



/* Entry: 1000931c4; end: 1000931e3;  */

void FUN_1000931c4(void)

{
  func_0x000107c61168(&PTR_PTR_1128c9c10);
  return;
}



/* Entry: 1000931e4; end: 1000933d3;  */

void FUN_1000931e4(void)

{
  FUN_1000285a8(0x112d9fba8,&UNK_10d941b80);
  FUN_1000823a8(0x100263888,0);
  return;
}



/* Entry: 1000933d4; end: 1000933f3;  */

void FUN_1000933d4(void)

{
  func_0x000107c61168(&PTR_PTR_1127db7f8);
  return;
}



/* Entry: 1000933f4; end: 100093433;  */

void FUN_1000933f4(void)

{
  FUN_1000285a8(0x112daa180,&UNK_10d951690);
  FUN_1000823a8(FUN_1000f9ad8,0);
  return;
}



/* Entry: 100093434; end: 1000934b3;  */

void FUN_100093434(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112da7730,&UNK_10d94ddf0);
  puVar1 = &UNK_1103cbfb0;
  func_0x000107c613fc(&UNK_1103cbfb0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_100a01200,puVar1);
  return;
}



/* Entry: 1000934b4; end: 1000934d3;  */

void FUN_1000934b4(void)

{
  func_0x000107c61168(&PTR_PTR_112da77a0);
  return;
}



/* Entry: 1000934d4; end: 100093513;  */

void FUN_1000934d4(void)

{
  FUN_1000285a8(0x112d9d448,&UNK_10d93ddd0);
  FUN_1000823a8(FUN_1001ad634,0);
  return;
}



/* Entry: 100093514; end: 100093533;  */

void FUN_100093514(void)

{
  func_0x000107c61168(&PTR_PTR_1127d5e50);
  return;
}



/* Entry: 100093534; end: 1000935b3;  */

void FUN_100093534(void)

{
  FUN_1000285a8(0x112da0388,&UNK_10d942bd0);
  FUN_1000823a8(&UNK_101454778,0);
  return;
}



/* Entry: 1000935b4; end: 1000935d3;  */

void FUN_1000935b4(void)

{
  func_0x000107c61168(&PTR_PTR_11298bb88);
  return;
}



/* Entry: 1000935d4; end: 100093613;  */

void FUN_1000935d4(void)

{
  FUN_1000285a8(0x112da0378,&UNK_10d942b60);
  FUN_1000823a8(&UNK_101454718,0);
  return;
}



/* Entry: 100093614; end: 100093633;  */

void FUN_100093614(void)

{
  func_0x000107c61168(&PTR_PTR_11298b918);
  return;
}



/* Entry: 100093634; end: 100093673;  */

void FUN_100093634(void)

{
  FUN_1000285a8(0x112da0380,&UNK_10d942b90);
  FUN_1000823a8(&UNK_101454730,0);
  return;
}



/* Entry: 100093674; end: 100093693;  */

void FUN_100093674(void)

{
  func_0x000107c61168(&PTR_PTR_11298b9d8);
  return;
}



/* Entry: 100093694; end: 1000936df;  */

void FUN_100093694(undefined8 param_1)

{
  FUN_1000285a8(0x112da20e8,&UNK_10d9463d0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1001135e8,param_1);
  return;
}



/* Entry: 1000936e0; end: 1000936fb;  */

void FUN_1000936e0(undefined8 param_1)

{
  FUN_1000285a8(0x112da7300,&UNK_10d94d6e0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100b46548,param_1);
  return;
}



/* Entry: 1000936fc; end: 10009374b;  */

void FUN_1000936fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10009374c; end: 10009376b;  */

void FUN_10009374c(void)

{
  func_0x000107c61168(&PTR_PTR_112da7378);
  return;
}



/* Entry: 10009376c; end: 100093787;  */

void FUN_10009376c(undefined8 param_1)

{
  FUN_1000285a8(0x112da7308,&UNK_10d94d6e8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100b464ec,param_1);
  return;
}



/* Entry: 100093788; end: 1000938d3;  */

void FUN_100093788(void)

{
  FUN_1000285a8(0x112da16a8,&UNK_10d944c80);
  FUN_1000823a8(FUN_100116278,0);
  return;
}



/* Entry: 1000938d4; end: 1000938ef;  */

void FUN_1000938d4(undefined8 param_1)

{
  FUN_1000285a8(0x112da8550,&UNK_10d94f410);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(0x10043203c,param_1);
  return;
}



/* Entry: 1000938f0; end: 10009393f;  */

void FUN_1000938f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 100093940; end: 10009395f;  */

void FUN_100093940(void)

{
  func_0x000107c61168(&PTR_PTR_112da85c8);
  return;
}



/* Entry: 100093960; end: 10009397b;  */

void FUN_100093960(undefined8 param_1)

{
  FUN_1000285a8(0x112da8558,&UNK_10d94f418);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100431fec,param_1);
  return;
}



/* Entry: 10009397c; end: 10009399b;  */

void FUN_10009397c(void)

{
  func_0x000107c61168(&PTR_PTR_11298b570);
  return;
}



/* Entry: 10009399c; end: 1000939b7;  */

void FUN_10009399c(undefined8 param_1)

{
  FUN_1000285a8(0x112da4670,&UNK_10d9494d0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_1014ac284,param_1);
  return;
}



/* Entry: 1000939b8; end: 100093a07;  */

void FUN_1000939b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 100093a08; end: 100093a27;  */

void FUN_100093a08(void)

{
  func_0x000107c61168(&PTR_PTR_112da46e8);
  return;
}



/* Entry: 100093a28; end: 100093a43;  */

void FUN_100093a28(undefined8 param_1)

{
  FUN_1000285a8(0x112da4678,&UNK_10d9494d8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_1014ac414,param_1);
  return;
}



/* Entry: 100093a44; end: 100093ac3;  */

void FUN_100093a44(void)

{
  FUN_1000285a8(0x112e014f8,&UNK_10d9d2470);
  FUN_1000823a8(&UNK_101b2524c,0);
  return;
}



/* Entry: 100093ac4; end: 100093ae3;  */

void FUN_100093ac4(void)

{
  func_0x000107c61168(&PTR_PTR_1129e39c8);
  return;
}



/* Entry: 100093ae4; end: 100093b63;  */

void FUN_100093ae4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9fdf8,&UNK_10d942330);
  puVar1 = &UNK_1103bc930;
  func_0x000107c613fc(&UNK_1103bc930,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_10014f8d8,puVar1);
  return;
}



/* Entry: 100093b64; end: 100093cbb;  */

void FUN_100093b64(undefined8 param_1)

{
  FUN_1000285a8(0x112d9fe00,&UNK_10d942360);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_10014f8a4,param_1);
  return;
}



/* Entry: 100093cbc; end: 100093cd7;  */

void FUN_100093cbc(undefined8 param_1)

{
  FUN_1000285a8(0x112d9fb78,&UNK_10d941980);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101452388,param_1);
  return;
}



/* Entry: 100093cd8; end: 100093d27;  */

void FUN_100093cd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 100093d28; end: 100093d47;  */

void FUN_100093d28(void)

{
  func_0x000107c61168(&PTR_PTR_112983690);
  return;
}



/* Entry: 100093d48; end: 100093dd3;  */

void FUN_100093d48(void)

{
  FUN_1000285a8(0x113059118,&UNK_10dccef60);
  FUN_1000823a8(FUN_100762c3c,0);
  return;
}



/* Entry: 100093dd4; end: 100093df3;  */

void FUN_100093dd4(void)

{
  func_0x000107c61168(&PTR_PTR_1129870a0);
  return;
}



/* Entry: 100093df4; end: 100093e7f;  */

void FUN_100093df4(void)

{
  FUN_1000285a8(0x113059158,&UNK_10dccf050);
  FUN_1000823a8(FUN_100428ab0,0);
  return;
}



/* Entry: 100093e80; end: 100093e9f;  */

void FUN_100093e80(void)

{
  func_0x000107c61168(&PTR_PTR_112987220);
  return;
}



/* Entry: 100093ea0; end: 100093ebb;  */

void FUN_100093ea0(undefined8 param_1)

{
  FUN_1000285a8(0x112da5fd8,&UNK_10d94b940);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1003c607c,param_1);
  return;
}



/* Entry: 100093ebc; end: 100093f0b;  */

void FUN_100093ebc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 100093f0c; end: 100093f2b;  */

void FUN_100093f0c(void)

{
  func_0x000107c61168(&PTR_PTR_112da6050);
  return;
}



/* Entry: 100093f2c; end: 100093f47;  */

void FUN_100093f2c(undefined8 param_1)

{
  FUN_1000285a8(0x112da5fe0,&UNK_10d94b948);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1003c6020,param_1);
  return;
}



/* Entry: 100093f48; end: 100093fc7;  */

void FUN_100093f48(void)

{
  FUN_1000285a8(0x1130591a8,&UNK_10dccf148);
  FUN_1000823a8(FUN_100427c0c,0);
  return;
}



/* Entry: 100093fc8; end: 100093fe3;  */

void FUN_100093fc8(undefined8 param_1)

{
  FUN_1000285a8(0x112da6860,&UNK_10d94c648);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1004ec018,param_1);
  return;
}



/* Entry: 100093fe4; end: 100094003;  */

void FUN_100093fe4(void)

{
  func_0x000107c61168(&PTR_PTR_11298a2b0);
  return;
}



/* Entry: 100094004; end: 10009401f;  */

void FUN_100094004(undefined8 param_1)

{
  FUN_1000285a8(0x112da80c0,&UNK_10d94ed40);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100a099d4,param_1);
  return;
}



/* Entry: 100094020; end: 10009406f;  */

void FUN_100094020(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 100094070; end: 10009408f;  */

void FUN_100094070(void)

{
  func_0x000107c61168(&PTR_PTR_112da8130);
  return;
}



/* Entry: 100094090; end: 10009438b;  */

void FUN_100094090(void)

{
  FUN_1000285a8(0x112d9d498,&UNK_10d93df10);
  FUN_1000823a8(FUN_1000aafbc,0);
  return;
}



/* Entry: 10009438c; end: 1000943ab;  */

void FUN_10009438c(void)

{
  func_0x000107c61168(&PTR_PTR_1129cb468);
  return;
}



/* Entry: 1000943ac; end: 100094477;  */

void FUN_1000943ac(void)

{
  FUN_1000285a8(0x112d9fbd0,&UNK_10d941d00);
  FUN_1000823a8(FUN_1002632a0,0);
  return;
}



/* Entry: 100094478; end: 10009450f;  */

void FUN_100094478(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112da73e0,&UNK_10d94d8b0);
  puVar1 = &UNK_1103cbba8;
  func_0x000107c613fc(&UNK_1103cbba8,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(FUN_10044f640,puVar1);
  return;
}



/* Entry: 100094510; end: 10009452f;  */

void FUN_100094510(void)

{
  func_0x000107c61168(&PTR_PTR_112da7458);
  return;
}



/* Entry: 100094530; end: 10009454b;  */

void FUN_100094530(undefined8 param_1)

{
  FUN_1000285a8(0x112da73e8,&UNK_10d94d8b8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_10044f5e4,param_1);
  return;
}



/* Entry: 10009454c; end: 10009459b;  */

void FUN_10009454c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10009459c; end: 10009477f;  */

void FUN_10009459c(void)

{
  FUN_1000285a8(0x112daa438,&UNK_10d951d50);
  FUN_1000823a8(FUN_1000f757c,0);
  return;
}



/* Entry: 100094780; end: 10009479f;  */

void FUN_100094780(void)

{
  func_0x000107c61168(&PTR_PTR_112984150);
  return;
}



/* Entry: 1000947a0; end: 1000947eb;  */

void FUN_1000947a0(undefined8 param_1)

{
  FUN_1000285a8(0x112d9f550,&UNK_10d940170);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1002570a0,param_1);
  return;
}



/* Entry: 1000947ec; end: 10009486b;  */

void FUN_1000947ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112da8288,&UNK_10d94efe0);
  puVar1 = &UNK_1103cc788;
  func_0x000107c613fc(&UNK_1103cc788,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_100a0b204,puVar1);
  return;
}


