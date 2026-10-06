/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1025ecbd0; end: 1025ecc03;  */

void FUN_1025ecbd0(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1025ecc04; end: 1025ed8ab;  */

void FUN_1025ecc04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eadcb0,&UNK_10dac2550);
  puVar1 = &UNK_110528440;
  func_0x000107c613fc(&UNK_110528440,0xa8,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_5;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_10;
  *(undefined8 *)(puVar1 + 0x48) = param_12;
  *(undefined8 *)(puVar1 + 0x50) = param_19;
  *(undefined8 *)(puVar1 + 0x58) = param_8;
  *(undefined8 *)(puVar1 + 0x60) = param_9;
  *(undefined8 *)(puVar1 + 0x68) = param_11;
  *(undefined8 *)(puVar1 + 0x70) = param_13;
  *(undefined8 *)(puVar1 + 0x78) = param_16;
  *(undefined8 *)(puVar1 + 0x80) = param_17;
  *(undefined8 *)(puVar1 + 0x88) = param_18;
  *(undefined8 *)(puVar1 + 0x90) = param_14;
  *(undefined8 *)(puVar1 + 0x98) = param_15;
  *(undefined8 *)(puVar1 + 0xa0) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1025ed8ac,puVar1);
  return;
}



/* Entry: 1025ed8ac; end: 1025ed8f7;  */

void FUN_1025ed8ac(void)

{
  long unaff_x20;
  
  func_0x0001025ecdc0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                      *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                      *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                      *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                      *(undefined8 *)(unaff_x20 + 0xa0));
  return;
}



/* Entry: 1025ed8f8; end: 1025ed907;  */

undefined1  [16] FUN_1025ed8f8(void)

{
  return ZEXT816(0x110528468);
}



/* Entry: 1025ed908; end: 1025ed99b;  */

void FUN_1025ed908(undefined8 param_1)

{
  func_0x0001000285a8(0x112eadcb8,&UNK_10dac2590);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1025ed99c,param_1);
  return;
}



/* Entry: 1025ed99c; end: 1025ed9b3;  */

void FUN_1025ed99c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 unaff_x20;
  
  func_0x0001000cad14();
  uVar1 = 0;
  FUN_10268e008(0);
  func_0x000107c610f8();
  func_0x00010268df04(unaff_x20,uVar1);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1025ed9b4; end: 1025ed9bf; -[SCMapAdsPromotedPlaceBannerEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025ed9b4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eadcc0;
  func_0x000107c61428(param_1 + _DAT_112eadcc0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1025ed9c0; end: 1025ed9cb; -[SCMapAdsPromotedPlaceBannerEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025ed9c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eadcc0;
  func_0x000107c61428(param_1 + _DAT_112eadcc0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1025ed9cc; end: 1025ed9d7; -[SCMapAdsPromotedPlaceBannerEntryPoint mapLoggingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025ed9cc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eadcc8;
  func_0x000107c61428(param_1 + _DAT_112eadcc8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1025ed9d8; end: 1025ed9e3; -[SCMapAdsPromotedPlaceBannerEntryPoint setMapLoggingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025ed9d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eadcc8;
  func_0x000107c61428(param_1 + _DAT_112eadcc8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1025ed9e4; end: 1025ed9ef; -[SCMapAdsPromotedPlaceBannerEntryPoint mapAdsConfigServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025ed9e4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eadcd0;
  func_0x000107c61428(param_1 + _DAT_112eadcd0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1025ed9f0; end: 1025ed9fb; -[SCMapAdsPromotedPlaceBannerEntryPoint setMapAdsConfigServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025ed9f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eadcd0;
  func_0x000107c61428(param_1 + _DAT_112eadcd0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1025ed9fc; end: 1025eda07; -[SCMapAdsPromotedPlaceBannerEntryPoint sponsoredAttachmentServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025ed9fc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eadcd8;
  func_0x000107c61428(param_1 + _DAT_112eadcd8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1025eda08; end: 1025eda13; -[SCMapAdsPromotedPlaceBannerEntryPoint setSponsoredAttachmentServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025eda08(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eadcd8;
  func_0x000107c61428(param_1 + _DAT_112eadcd8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1025eda14; end: 1025eda1f; -[SCMapAdsPromotedPlaceBannerEntryPoint composerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025eda14(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eadce0;
  func_0x000107c61428(param_1 + _DAT_112eadce0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1025eda20; end: 1025eda2b; -[SCMapAdsPromotedPlaceBannerEntryPoint setComposerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025eda20(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eadce0;
  func_0x000107c61428(param_1 + _DAT_112eadce0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1025eda2c; end: 1025eda37; -[SCMapAdsPromotedPlaceBannerEntryPoint adAttachmentHandlerScopeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025eda2c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eadce8;
  func_0x000107c61428(param_1 + _DAT_112eadce8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1025eda38; end: 1025eda43; -[SCMapAdsPromotedPlaceBannerEntryPoint setAdAttachmentHandlerScopeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025eda38(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eadce8;
  func_0x000107c61428(param_1 + _DAT_112eadce8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1025eda44; end: 1025eda4f; -[SCMapAdsPromotedPlaceBannerEntryPoint adOperaSessionScopeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025eda44(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eadcf0;
  func_0x000107c61428(param_1 + _DAT_112eadcf0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1025eda50; end: 1025eda5b; -[SCMapAdsPromotedPlaceBannerEntryPoint setAdOperaSessionScopeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025eda50(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eadcf0;
  func_0x000107c61428(param_1 + _DAT_112eadcf0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1025eda5c; end: 1025eda67; -[SCMapAdsPromotedPlaceBannerEntryPoint immediateUserFeatureLaunchServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025eda5c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eadcf8;
  func_0x000107c61428(param_1 + _DAT_112eadcf8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1025eda68; end: 1025eda73; -[SCMapAdsPromotedPlaceBannerEntryPoint setImmediateUserFeatureLaunchServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025eda68(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eadcf8;
  func_0x000107c61428(param_1 + _DAT_112eadcf8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1025eda74; end: 1025eda7f; -[SCMapAdsPromotedPlaceBannerEntryPoint mapAdsPromotedPlaceDataRepositoryServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025eda74(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eadd00;
  func_0x000107c61428(param_1 + _DAT_112eadd00,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1025eda80; end: 1025eda8b; -[SCMapAdsPromotedPlaceBannerEntryPoint setMapAdsPromotedPlaceDataRepositoryServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025eda80(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eadd00;
  func_0x000107c61428(param_1 + _DAT_112eadd00,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1025eda8c; end: 1025eda97; -[SCMapAdsPromotedPlaceBannerEntryPoint adReportServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025eda8c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eadd08;
  func_0x000107c61428(param_1 + _DAT_112eadd08,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1025eda98; end: 1025edaa3; -[SCMapAdsPromotedPlaceBannerEntryPoint setAdReportServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025eda98(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eadd08;
  func_0x000107c61428(param_1 + _DAT_112eadd08,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1025edaa4; end: 1025edaaf; -[SCMapAdsPromotedPlaceBannerEntryPoint adInfoScopeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025edaa4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eadd10;
  func_0x000107c61428(param_1 + _DAT_112eadd10,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1025edab0; end: 1025edabb; -[SCMapAdsPromotedPlaceBannerEntryPoint setAdInfoScopeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025edab0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eadd10;
  func_0x000107c61428(param_1 + _DAT_112eadd10,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1025edabc; end: 1025edac7; -[SCMapAdsPromotedPlaceBannerEntryPoint hideAdScopeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025edabc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eadd18;
  func_0x000107c61428(param_1 + _DAT_112eadd18,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1025edac8; end: 1025edad3; -[SCMapAdsPromotedPlaceBannerEntryPoint setHideAdScopeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025edac8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eadd18;
  func_0x000107c61428(param_1 + _DAT_112eadd18,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1025edad4; end: 1025edadf; -[SCMapAdsPromotedPlaceBannerEntryPoint promotedPlaceTrackerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025edad4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eadd20;
  func_0x000107c61428(param_1 + _DAT_112eadd20,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1025edae0; end: 1025edaeb; -[SCMapAdsPromotedPlaceBannerEntryPoint setPromotedPlaceTrackerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025edae0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eadd20;
  func_0x000107c61428(param_1 + _DAT_112eadd20,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1025edaec; end: 1025edaf7; -[SCMapAdsPromotedPlaceBannerEntryPoint promotedPlaceLoggerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025edaec(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eadd28;
  func_0x000107c61428(param_1 + _DAT_112eadd28,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1025edaf8; end: 1025edb03; -[SCMapAdsPromotedPlaceBannerEntryPoint setPromotedPlaceLoggerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025edaf8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eadd28;
  func_0x000107c61428(param_1 + _DAT_112eadd28,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1025edb04; end: 1025edb0f; -[SCMapAdsPromotedPlaceBannerEntryPoint plusServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025edb04(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eadd30;
  func_0x000107c61428(param_1 + _DAT_112eadd30,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1025edb10; end: 1025edb1b; -[SCMapAdsPromotedPlaceBannerEntryPoint setPlusServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025edb10(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eadd30;
  func_0x000107c61428(param_1 + _DAT_112eadd30,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1025edb1c; end: 1025edb27; -[SCMapAdsPromotedPlaceBannerEntryPoint plusSyncServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025edb1c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eadd38;
  func_0x000107c61428(param_1 + _DAT_112eadd38,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1025edb28; end: 1025edb33; -[SCMapAdsPromotedPlaceBannerEntryPoint setPlusSyncServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025edb28(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eadd38;
  func_0x000107c61428(param_1 + _DAT_112eadd38,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1025edb34; end: 1025edb3f; -[SCMapAdsPromotedPlaceBannerEntryPoint plusSubscribeScopeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025edb34(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eadd40;
  func_0x000107c61428(param_1 + _DAT_112eadd40,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1025edb40; end: 1025edb83;  */

void FUN_1025edb40(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1025edb84; end: 1025edb8f; -[SCMapAdsPromotedPlaceBannerEntryPoint setPlusSubscribeScopeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025edb84(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eadd40;
  func_0x000107c61428(param_1 + _DAT_112eadd40,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1025edb90; end: 1025edbe3;  */

void FUN_1025edb90(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1025edbe4; end: 1025edc2b; -[SCMapAdsPromotedPlaceBannerEntryPoint adOperaSessionScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025edbe4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eadd48;
  func_0x000107c61428(param_1 + _DAT_112eadd48,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1025edc2c; end: 1025edc37; -[SCMapAdsPromotedPlaceBannerEntryPoint setAdOperaSessionScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025edc2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eadd48;
  func_0x000107c61428(param_1 + _DAT_112eadd48,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1025edc38; end: 1025edc7f; -[SCMapAdsPromotedPlaceBannerEntryPoint sponsoredBannerServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025edc38(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eadd50;
  func_0x000107c61428(param_1 + _DAT_112eadd50,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1025edc80; end: 1025edc8b; -[SCMapAdsPromotedPlaceBannerEntryPoint setSponsoredBannerServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025edc80(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eadd50;
  func_0x000107c61428(param_1 + _DAT_112eadd50,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1025edc8c; end: 1025edcd3; -[SCMapAdsPromotedPlaceBannerEntryPoint adAttachmentHandlerScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025edc8c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eadd58;
  func_0x000107c61428(param_1 + _DAT_112eadd58,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1025edcd4; end: 1025edcdf; -[SCMapAdsPromotedPlaceBannerEntryPoint setAdAttachmentHandlerScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025edcd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eadd58;
  func_0x000107c61428(param_1 + _DAT_112eadd58,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1025edce0; end: 1025edd27; -[SCMapAdsPromotedPlaceBannerEntryPoint hideAdScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025edce0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eadd60;
  func_0x000107c61428(param_1 + _DAT_112eadd60,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1025edd28; end: 1025edd33; -[SCMapAdsPromotedPlaceBannerEntryPoint setHideAdScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025edd28(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eadd60;
  func_0x000107c61428(param_1 + _DAT_112eadd60,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1025edd34; end: 1025edd7b; -[SCMapAdsPromotedPlaceBannerEntryPoint adInfoScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025edd34(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eadd68;
  func_0x000107c61428(param_1 + _DAT_112eadd68,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1025edd7c; end: 1025edd87; -[SCMapAdsPromotedPlaceBannerEntryPoint setAdInfoScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025edd7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eadd68;
  func_0x000107c61428(param_1 + _DAT_112eadd68,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1025edd88; end: 1025eddcf; -[SCMapAdsPromotedPlaceBannerEntryPoint plusSubscribeScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025edd88(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eadd70;
  func_0x000107c61428(param_1 + _DAT_112eadd70,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1025eddd0; end: 1025edddb; -[SCMapAdsPromotedPlaceBannerEntryPoint setPlusSubscribeScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025eddd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eadd70;
  func_0x000107c61428(param_1 + _DAT_112eadd70,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1025edddc; end: 1025ede3b;  */

void FUN_1025edddc(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_4;
  func_0x000107c61428(param_1 + lVar2,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 1025ede3c; end: 1025ef223;  */

/* WARNING: Possible PIC construction at 0x0001025ee7e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025ee7f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025ee808: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025ee820: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025ee830: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025ee840: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025ee850: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025ee860: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025ee878: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025ee88c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025ee8a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025ee8b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025ee8c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025ee92c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025ee938: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025ee948: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025ee958: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025ee968: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025ee978: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025ee988: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025ee998: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025ee9a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025ee9b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025ee9c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025ee9d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025ee9e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025ef15c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025ef16c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025ef17c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025ef18c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025ef19c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025ef1ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025ef1bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025ef1cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025ef1dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025ef1ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025ef1fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025ef0bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025ef0cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025ef0dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025ef0ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025ef0fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025ef10c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025ef11c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025ef12c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025ef13c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025ef14c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025ef01c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025ef02c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025ef03c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025ef04c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025ef05c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025ef06c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025ef07c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025ef08c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025ef09c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025eef7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025eef8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025eef9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025eefac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025eefbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025eefcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025eefdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025eefec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025eeffc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025eeeec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025eeefc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025eef0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025eef1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025eef2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025eef3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025eef4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025eef5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025eef6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025eee6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025eee7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025eee8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025eee9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025eeeac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025eeebc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025eeecc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025eeedc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025eedec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025eedfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025eee0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025eee1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025eee2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025eee3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025eee4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025eed6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025eed7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025eed8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025eed9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025eedac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025eedbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025eedcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025eecfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025eed0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025eed1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025eed2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025eed3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025eed4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025eed5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025eec9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025eecac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025eecbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025eeccc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025eecdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025eecec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025eec3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025eec4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025eec5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025eec6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025eec7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025eebdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025eebec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025eebfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025eec0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025eec1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025eeb8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025eeb9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025eebac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025eebbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025eebcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025eeb4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025eeb5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025eeb6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025eeb7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025eeb0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025eeb1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025eeb2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025eeacc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025eeadc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025eeaec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025eea9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025eeaac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025eeabc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025eea7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025eea8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025eea5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025eea3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025eea2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001025eea40) */
/* WARNING: Removing unreachable block (ram,0x0001025eea60) */
/* WARNING: Removing unreachable block (ram,0x0001025eea90) */
/* WARNING: Removing unreachable block (ram,0x0001025eea80) */
/* WARNING: Removing unreachable block (ram,0x0001025eeac0) */
/* WARNING: Removing unreachable block (ram,0x0001025eeab0) */
/* WARNING: Removing unreachable block (ram,0x0001025eeaa0) */
/* WARNING: Removing unreachable block (ram,0x0001025eeaf0) */
/* WARNING: Removing unreachable block (ram,0x0001025eeae0) */
/* WARNING: Removing unreachable block (ram,0x0001025eead0) */
/* WARNING: Removing unreachable block (ram,0x0001025eeb30) */
/* WARNING: Removing unreachable block (ram,0x0001025eeb20) */
/* WARNING: Removing unreachable block (ram,0x0001025eeb10) */
/* WARNING: Removing unreachable block (ram,0x0001025eeb80) */
/* WARNING: Removing unreachable block (ram,0x0001025eeb70) */
/* WARNING: Removing unreachable block (ram,0x0001025eeb60) */
/* WARNING: Removing unreachable block (ram,0x0001025eeb50) */
/* WARNING: Removing unreachable block (ram,0x0001025eebd0) */
/* WARNING: Removing unreachable block (ram,0x0001025eebc0) */
/* WARNING: Removing unreachable block (ram,0x0001025eebb0) */
/* WARNING: Removing unreachable block (ram,0x0001025eeba0) */
/* WARNING: Removing unreachable block (ram,0x0001025eeb90) */
/* WARNING: Removing unreachable block (ram,0x0001025eec20) */
/* WARNING: Removing unreachable block (ram,0x0001025eec10) */
/* WARNING: Removing unreachable block (ram,0x0001025eec00) */
/* WARNING: Removing unreachable block (ram,0x0001025eebf0) */
/* WARNING: Removing unreachable block (ram,0x0001025eebe0) */
/* WARNING: Removing unreachable block (ram,0x0001025eec80) */
/* WARNING: Removing unreachable block (ram,0x0001025eec70) */
/* WARNING: Removing unreachable block (ram,0x0001025eec60) */
/* WARNING: Removing unreachable block (ram,0x0001025eec50) */
/* WARNING: Removing unreachable block (ram,0x0001025eec40) */
/* WARNING: Removing unreachable block (ram,0x0001025eecf0) */
/* WARNING: Removing unreachable block (ram,0x0001025eece0) */
/* WARNING: Removing unreachable block (ram,0x0001025eecd0) */
/* WARNING: Removing unreachable block (ram,0x0001025eecc0) */
/* WARNING: Removing unreachable block (ram,0x0001025eecb0) */
/* WARNING: Removing unreachable block (ram,0x0001025eeca0) */
/* WARNING: Removing unreachable block (ram,0x0001025eed60) */
/* WARNING: Removing unreachable block (ram,0x0001025eed50) */
/* WARNING: Removing unreachable block (ram,0x0001025eed40) */
/* WARNING: Removing unreachable block (ram,0x0001025eed30) */
/* WARNING: Removing unreachable block (ram,0x0001025eed20) */
/* WARNING: Removing unreachable block (ram,0x0001025eed10) */
/* WARNING: Removing unreachable block (ram,0x0001025eed00) */
/* WARNING: Removing unreachable block (ram,0x0001025eedd0) */
/* WARNING: Removing unreachable block (ram,0x0001025eedc0) */
/* WARNING: Removing unreachable block (ram,0x0001025eedb0) */
/* WARNING: Removing unreachable block (ram,0x0001025eeda0) */
/* WARNING: Removing unreachable block (ram,0x0001025eed90) */
/* WARNING: Removing unreachable block (ram,0x0001025eed80) */
/* WARNING: Removing unreachable block (ram,0x0001025eed70) */
/* WARNING: Removing unreachable block (ram,0x0001025eee50) */
/* WARNING: Removing unreachable block (ram,0x0001025eee40) */
/* WARNING: Removing unreachable block (ram,0x0001025eee30) */
/* WARNING: Removing unreachable block (ram,0x0001025eee20) */
/* WARNING: Removing unreachable block (ram,0x0001025eee10) */
/* WARNING: Removing unreachable block (ram,0x0001025eee00) */
/* WARNING: Removing unreachable block (ram,0x0001025eedf0) */
/* WARNING: Removing unreachable block (ram,0x0001025eeee0) */
/* WARNING: Removing unreachable block (ram,0x0001025eeed0) */
/* WARNING: Removing unreachable block (ram,0x0001025eeec0) */
/* WARNING: Removing unreachable block (ram,0x0001025eeeb0) */
/* WARNING: Removing unreachable block (ram,0x0001025eeea0) */
/* WARNING: Removing unreachable block (ram,0x0001025eee90) */
/* WARNING: Removing unreachable block (ram,0x0001025eee80) */
/* WARNING: Removing unreachable block (ram,0x0001025eee70) */
/* WARNING: Removing unreachable block (ram,0x0001025eef70) */
/* WARNING: Removing unreachable block (ram,0x0001025eef60) */
/* WARNING: Removing unreachable block (ram,0x0001025eef50) */
/* WARNING: Removing unreachable block (ram,0x0001025eef40) */
/* WARNING: Removing unreachable block (ram,0x0001025eef30) */
/* WARNING: Removing unreachable block (ram,0x0001025eef20) */
/* WARNING: Removing unreachable block (ram,0x0001025eef10) */
/* WARNING: Removing unreachable block (ram,0x0001025eef00) */
/* WARNING: Removing unreachable block (ram,0x0001025eeef0) */
/* WARNING: Removing unreachable block (ram,0x0001025ef000) */
/* WARNING: Removing unreachable block (ram,0x0001025eeff0) */
/* WARNING: Removing unreachable block (ram,0x0001025eefe0) */
/* WARNING: Removing unreachable block (ram,0x0001025eefd0) */
/* WARNING: Removing unreachable block (ram,0x0001025eefc0) */
/* WARNING: Removing unreachable block (ram,0x0001025eefb0) */
/* WARNING: Removing unreachable block (ram,0x0001025eefa0) */
/* WARNING: Removing unreachable block (ram,0x0001025eef90) */
/* WARNING: Removing unreachable block (ram,0x0001025eef80) */
/* WARNING: Removing unreachable block (ram,0x0001025ef0a0) */
/* WARNING: Removing unreachable block (ram,0x0001025ef090) */
/* WARNING: Removing unreachable block (ram,0x0001025ef080) */
/* WARNING: Removing unreachable block (ram,0x0001025ef070) */
/* WARNING: Removing unreachable block (ram,0x0001025ef060) */
/* WARNING: Removing unreachable block (ram,0x0001025ef050) */
/* WARNING: Removing unreachable block (ram,0x0001025ef040) */
/* WARNING: Removing unreachable block (ram,0x0001025ef030) */
/* WARNING: Removing unreachable block (ram,0x0001025ef020) */
/* WARNING: Removing unreachable block (ram,0x0001025ef150) */
/* WARNING: Removing unreachable block (ram,0x0001025ef140) */
/* WARNING: Removing unreachable block (ram,0x0001025ef130) */
/* WARNING: Removing unreachable block (ram,0x0001025ef120) */
/* WARNING: Removing unreachable block (ram,0x0001025ef110) */
/* WARNING: Removing unreachable block (ram,0x0001025ef100) */
/* WARNING: Removing unreachable block (ram,0x0001025ef0f0) */
/* WARNING: Removing unreachable block (ram,0x0001025ef0e0) */
/* WARNING: Removing unreachable block (ram,0x0001025ef0d0) */
/* WARNING: Removing unreachable block (ram,0x0001025ef0c0) */
/* WARNING: Removing unreachable block (ram,0x0001025ef200) */
/* WARNING: Removing unreachable block (ram,0x0001025ef1f0) */
/* WARNING: Removing unreachable block (ram,0x0001025ef1e0) */
/* WARNING: Removing unreachable block (ram,0x0001025ef1d0) */
/* WARNING: Removing unreachable block (ram,0x0001025ef1c0) */
/* WARNING: Removing unreachable block (ram,0x0001025ef1b0) */
/* WARNING: Removing unreachable block (ram,0x0001025ef1a0) */
/* WARNING: Removing unreachable block (ram,0x0001025ef190) */
/* WARNING: Removing unreachable block (ram,0x0001025ef180) */
/* WARNING: Removing unreachable block (ram,0x0001025ef170) */
/* WARNING: Removing unreachable block (ram,0x0001025ef160) */
/* WARNING: Removing unreachable block (ram,0x0001025ee9ec) */
/* WARNING: Removing unreachable block (ram,0x0001025ee9dc) */
/* WARNING: Removing unreachable block (ram,0x0001025ee9cc) */
/* WARNING: Removing unreachable block (ram,0x0001025ee9bc) */
/* WARNING: Removing unreachable block (ram,0x0001025ee9ac) */
/* WARNING: Removing unreachable block (ram,0x0001025ee99c) */
/* WARNING: Removing unreachable block (ram,0x0001025ee98c) */
/* WARNING: Removing unreachable block (ram,0x0001025ee97c) */
/* WARNING: Removing unreachable block (ram,0x0001025ee96c) */
/* WARNING: Removing unreachable block (ram,0x0001025ee95c) */
/* WARNING: Removing unreachable block (ram,0x0001025ee94c) */
/* WARNING: Removing unreachable block (ram,0x0001025ee93c) */
/* WARNING: Removing unreachable block (ram,0x0001025ee930) */
/* WARNING: Removing unreachable block (ram,0x0001025ee8cc) */
/* WARNING: Removing unreachable block (ram,0x0001025ee8b8) */
/* WARNING: Removing unreachable block (ram,0x0001025ee8a8) */
/* WARNING: Removing unreachable block (ram,0x0001025ee890) */
/* WARNING: Removing unreachable block (ram,0x0001025ee87c) */
/* WARNING: Removing unreachable block (ram,0x0001025ee864) */
/* WARNING: Removing unreachable block (ram,0x0001025ee854) */
/* WARNING: Removing unreachable block (ram,0x0001025ee844) */
/* WARNING: Removing unreachable block (ram,0x0001025ee834) */
/* WARNING: Removing unreachable block (ram,0x0001025ee824) */
/* WARNING: Removing unreachable block (ram,0x0001025ee80c) */
/* WARNING: Removing unreachable block (ram,0x0001025ee7fc) */
/* WARNING: Removing unreachable block (ram,0x0001025ee7ec) */
/* WARNING: Removing unreachable block (ram,0x0001025eea30) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025ede3c(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long *unaff_x20;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  long lStack_158;
  long lStack_150;
  long *aplStack_148 [3];
  long lStack_130;
  undefined **ppuStack_128;
  long *aplStack_120 [3];
  long lStack_108;
  undefined **ppuStack_100;
  long *aplStack_f8 [3];
  long lStack_e0;
  undefined **ppuStack_d8;
  long *aplStack_d0 [3];
  long lStack_b8;
  undefined **ppuStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  plVar3 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (plVar3 == (long *)0x0) {
    return;
  }
  plVar4 = unaff_x20;
  func_0x000107c4c374();
  func_0x000107c61180();
  if (plVar4 != (long *)0x0) {
    plVar5 = unaff_x20;
    func_0x000107c4c298();
    func_0x000107c61180();
    if (plVar5 != (long *)0x0) {
      plVar6 = unaff_x20;
      func_0x000107c5b7a4();
      func_0x000107c61180();
      if (plVar6 != (long *)0x0) {
        plVar6 = unaff_x20;
        func_0x000107c40014();
        func_0x000107c61180();
        if (plVar6 == (long *)0x0) {
          func_0x000107c61170(plVar3);
          plVar3 = plVar4;
        }
        else {
          plVar7 = unaff_x20;
          func_0x000107c3d230();
          func_0x000107c61180();
          if (plVar7 == (long *)0x0) {
            func_0x000107c61170(plVar3);
            plVar3 = plVar4;
          }
          else {
            plVar8 = unaff_x20;
            func_0x000107c3d380();
            func_0x000107c61180();
            if (plVar8 != (long *)0x0) {
              plVar9 = unaff_x20;
              func_0x000107c3d384();
              func_0x000107c61180();
              if (plVar9 != (long *)0x0) {
                plVar10 = unaff_x20;
                func_0x000107c451b8();
                func_0x000107c61180();
                if (plVar10 == (long *)0x0) {
                  func_0x000107c61170(plVar3);
                  plVar3 = plVar4;
                }
                else {
                  plVar11 = unaff_x20;
                  func_0x000107c5b7ac();
                  func_0x000107c61180();
                  if (plVar11 == (long *)0x0) {
                    func_0x000107c61170(plVar3);
                    plVar3 = plVar4;
                  }
                  else {
                    plVar12 = unaff_x20;
                    func_0x000107c3d228();
                    func_0x000107c61180();
                    if (plVar12 != (long *)0x0) {
                      plVar13 = unaff_x20;
                      func_0x000107c4c29c();
                      func_0x000107c61180();
                      if (plVar13 != (long *)0x0) {
                        plVar14 = unaff_x20;
                        func_0x000107c3d44c();
                        func_0x000107c61180();
                        if (plVar14 == (long *)0x0) {
                          func_0x000107c61170(plVar3);
                          plVar3 = plVar4;
                        }
                        else {
                          plVar15 = unaff_x20;
                          func_0x000107c3d2f0();
                          func_0x000107c61180();
                          if (plVar15 == (long *)0x0) {
                            func_0x000107c61170(plVar3);
                            plVar3 = plVar4;
                          }
                          else {
                            plVar16 = unaff_x20;
                            func_0x000107c44dec();
                            func_0x000107c61180();
                            if (plVar16 != (long *)0x0) {
                              plVar17 = unaff_x20;
                              func_0x000107c44de8();
                              func_0x000107c61180();
                              if (plVar17 != (long *)0x0) {
                                plVar18 = unaff_x20;
                                func_0x000107c3d2ec();
                                func_0x000107c61180();
                                if (plVar18 == (long *)0x0) {
                                  func_0x000107c61170(plVar3);
                                  plVar3 = plVar4;
                                }
                                else {
                                  plVar19 = unaff_x20;
                                  func_0x000107c4f440();
                                  func_0x000107c61180();
                                  if (plVar19 == (long *)0x0) {
                                    func_0x000107c61170(plVar3);
                                    plVar3 = plVar4;
                                  }
                                  else {
                                    plVar20 = unaff_x20;
                                    func_0x000107c4f430();
                                    func_0x000107c61180();
                                    if (plVar20 != (long *)0x0) {
                                      plVar21 = unaff_x20;
                                      func_0x000107c4ea90();
                                      func_0x000107c61180();
                                      if (plVar21 != (long *)0x0) {
                                        plVar22 = unaff_x20;
                                        func_0x000107c4eab8();
                                        func_0x000107c61180();
                                        if (plVar22 == (long *)0x0) {
                                          func_0x000107c61170(plVar3);
                                          plVar3 = plVar4;
                                        }
                                        else {
                                          plVar23 = unaff_x20;
                                          func_0x000107c4eab0();
                                          func_0x000107c61180();
                                          if (plVar23 == (long *)0x0) {
                                            func_0x000107c61170(plVar3);
                                            plVar3 = plVar4;
                                          }
                                          else {
                                            func_0x000107c4eaa8();
                                            func_0x000107c61180();
                                            if (unaff_x20 != (long *)0x0) {
                                              lVar24 = 0;
                                              FUN_1025ec344();
                                              func_0x000107c613fc();
                                              *(long **)(lVar24 + 0x18) = plVar5;
                                              *(long **)(lVar24 + 0x20) = plVar6;
                                              *(long **)(lVar24 + 0x28) = plVar11;
                                              *(long **)(lVar24 + 0x30) = plVar13;
                                              func_0x000107c61174();
                                              func_0x000107c61174();
                                              func_0x000107c61174();
                                              func_0x000107c61174();
                                              func_0x000107c61174();
                                              func_0x000107c61174();
                                              func_0x000107c61174();
                                              func_0x000107c61174();
                                              func_0x000107c61174();
                                              func_0x000107c61174();
                                              func_0x000107c61174();
                                              func_0x000107c61174();
                                              func_0x000107c61174();
                                              func_0x000107c61174();
                                              func_0x000107c61174();
                                              func_0x000107c61174();
                                              func_0x000107c61174();
                                              func_0x000107c61174();
                                              func_0x000107c61174();
                                              func_0x000107c61174();
                                              func_0x000107c61174();
                                              func_0x000107c61174();
                                              func_0x000107c61174();
                                              func_0x000107c61174();
                                              func_0x000107c61174();
                                              func_0x000107c61174();
                                              func_0x000107c61174();
                                              func_0x000107c5d17c(plVar3);
                                              func_0x000107c61180();
                                              lVar25 = 0;
                                              func_0x0001025ec388();
                                              func_0x000107c613fc();
                                              func_0x000107c61614(lVar25 + 0x10,0);
                                              func_0x000107c61604(lVar25 + 0x10,plVar3);
                                              func_0x000107c615e8(plVar3);
                                              func_0x000107c6157c(lVar25);
                                              func_0x000107c5d254();
                                              func_0x000107c61180();
                                              lVar26 = 0;
                                              FUN_1025e771c();
                                              lVar24 = lVar26;
                                              func_0x000107c610f8();
                                              *(undefined8 *)(lVar24 + _DAT_112ead7a0) = 0;
                                              *(long *)(lVar24 + _DAT_112ead790) = lVar25;
                                              *(long **)(lVar24 + _DAT_112ead798) = plVar10;
                                              plVar3 = &lStack_78;
                                              lStack_78 = lVar24;
                                              lStack_70 = lVar26;
                                              func_0x000107c61154(plVar3,PTR_s_init_1125d9248);
                                              lVar27 = 0;
                                              FUN_1025eb578();
                                              lVar24 = lVar27;
                                              func_0x000107c610f8();
                                              *(undefined8 *)(lVar24 + _DAT_112eada98) = 0;
                                              func_0x000107c61614(lVar24 + _DAT_112eadaa0,0);
                                              puVar1 = (undefined8 *)(lVar24 + _DAT_112eadaa8);
                                              *puVar1 = 0;
                                              puVar1[1] = 0;
                                              puVar1 = (undefined8 *)(lVar24 + _DAT_112eadab0);
                                              *puVar1 = 0;
                                              puVar1[1] = 0;
                                              *(long *)(lVar24 + _DAT_112eada80) = lVar25;
                                              *(long **)(lVar24 + _DAT_112eada88) = plVar8;
                                              *(long **)(lVar24 + _DAT_112eada90) = plVar9;
                                              puVar2 = PTR_s_init_1125d9248;
                                              lStack_88 = lVar24;
                                              lStack_80 = lVar27;
                                              func_0x000107c61174();
                                              func_0x000107c61174();
                                              func_0x000107c6157c(lVar25);
                                              plVar4 = &lStack_88;
                                              func_0x000107c61154(plVar4,puVar2);
                                              lVar28 = 0;
                                              FUN_1025ea9d8();
                                              lVar29 = lVar28;
                                              func_0x000107c610f8();
                                              func_0x000107c61614(lVar29 + _DAT_112ead9d0,0);
                                              lVar24 = lVar29 + _DAT_112ead9d8;
                                              *(undefined8 *)(lVar24 + 8) = 0;
                                              func_0x000107c61614(lVar24,0);
                                              *(long *)(lVar29 + _DAT_112ead9b8) = lVar25;
                                              *(long **)(lVar29 + _DAT_112ead9c0) = plVar12;
                                              *(long **)(lVar29 + _DAT_112ead9c8) = plVar7;
                                              puVar2 = PTR_s_init_1125d9248;
                                              lStack_98 = lVar29;
                                              lStack_90 = lVar28;
                                              func_0x000107c61174();
                                              func_0x000107c61174();
                                              func_0x000107c6157c(lVar25);
                                              plVar5 = &lStack_98;
                                              func_0x000107c61154(plVar5,puVar2);
                                              lVar24 = _DAT_112eb3830;
                                              uVar31 = *(undefined8 *)
                                                        ((long)plVar13 + _DAT_112eb3830);
                                              func_0x000107c61174();
                                              func_0x000107c61174();
                                              func_0x000107c61174();
                                              func_0x000107c61174();
                                              func_0x000107c61174();
                                              func_0x000107c6157c(lVar25);
                                              func_0x000107c615f0(uVar31);
                                              func_0x000107c42e5c();
                                              func_0x000107c61180();
                                              uVar32 = *(undefined8 *)
                                                        ((long)plVar22 + _DAT_1130366d0);
                                              lVar30 = 0;
                                              FUN_1025e88fc();
                                              lVar29 = lVar30;
                                              func_0x000107c610f8();
                                              *(undefined8 *)(lVar29 + _DAT_112ead7e0) = 0;
                                              puVar1 = (undefined8 *)(lVar29 + _DAT_112ead830);
                                              puVar1[1] = 0;
                                              *puVar1 = 0;
                                              puVar1[3] = 0;
                                              puVar1[2] = 0;
                                              puVar1[4] = 0;
                                              puVar1 = (undefined8 *)(lVar29 + _DAT_112ead838);
                                              puVar1[1] = 0;
                                              *puVar1 = 0;
                                              puVar1[3] = 0;
                                              puVar1[2] = 0;
                                              puVar1[4] = 0;
                                              puVar1 = (undefined8 *)(lVar29 + _DAT_112ead840);
                                              puVar1[1] = 0;
                                              *puVar1 = 0;
                                              puVar1[3] = 0;
                                              puVar1[2] = 0;
                                              puVar1[4] = 0;
                                              puVar1 = (undefined8 *)(lVar29 + _DAT_112ead848);
                                              puVar1[1] = 0;
                                              *puVar1 = 0;
                                              puVar1[3] = 0;
                                              puVar1[2] = 0;
                                              puVar1[4] = 0;
                                              func_0x000107c61614(lVar29 + _DAT_112ead850,0);
                                              *(long *)(lVar29 + _DAT_112ead7d0) = lVar25;
                                              *(undefined8 *)(lVar29 + _DAT_112ead7d8) = uVar31;
                                              *(long **)(lVar29 + _DAT_112ead7e8) = plVar14;
                                              *(long **)(lVar29 + _DAT_112ead7f0) = plVar17;
                                              *(long **)(lVar29 + _DAT_112ead7f8) = plVar16;
                                              *(long **)(lVar29 + _DAT_112ead800) = plVar18;
                                              *(long **)(lVar29 + _DAT_112ead808) = plVar15;
                                              *(long **)(lVar29 + _DAT_112ead810) = plVar21;
                                              *(undefined8 *)(lVar29 + _DAT_112ead818) = uVar32;
                                              *(long **)(lVar29 + _DAT_112ead820) = plVar23;
                                              *(long **)(lVar29 + _DAT_112ead828) = unaff_x20;
                                              puVar2 = PTR_s_init_1125d9248;
                                              lStack_a8 = lVar29;
                                              lStack_a0 = lVar30;
                                              func_0x000107c61174();
                                              func_0x000107c61174();
                                              func_0x000107c6157c(uVar32);
                                              plVar6 = &lStack_a8;
                                              func_0x000107c61154(plVar6,puVar2);
                                              uVar32 = *(undefined8 *)((long)plVar13 + lVar24);
                                              uVar33 = *(undefined8 *)
                                                        ((long)plVar19 + _DAT_11306c648);
                                              uVar31 = *(undefined8 *)
                                                        ((long)plVar20 + _DAT_112eae7c0);
                                              ppuStack_b0 = &PTR_DAT_110527d08;
                                              ppuStack_d8 = &PTR_DAT_110528288;
                                              ppuStack_100 = &PTR_DAT_110528100;
                                              ppuStack_128 = &PTR_DAT_110527d98;
                                              lVar25 = 0;
                                              aplStack_148[0] = plVar6;
                                              lStack_130 = lVar30;
                                              aplStack_120[0] = plVar5;
                                              lStack_108 = lVar28;
                                              aplStack_f8[0] = plVar4;
                                              lStack_e0 = lVar27;
                                              aplStack_d0[0] = plVar3;
                                              lStack_b8 = lVar26;
                                              FUN_1025eaf48();
                                              lVar29 = lVar25;
                                              func_0x000107c610f8();
                                              lVar24 = _DAT_112eada48;
                                              func_0x0001000c6560(0);
                                              func_0x000107c613fc();
                                              func_0x000107c61174();
                                              func_0x000107c615f0(uVar32);
                                              func_0x000107c6157c(uVar33);
                                              func_0x000107c6157c(uVar31);
                                              func_0x000107c61174();
                                              func_0x000107c61174(plVar4);
                                              func_0x000107c61174();
                                              func_0x0001000c6580();
                                              *(long **)(lVar29 + lVar24) = plVar6;
                                              puVar1 = (undefined8 *)(lVar29 + _DAT_112eada50);
                                              *puVar1 = 0;
                                              puVar1[1] = 0;
                                              FUN_1025ec0b8(aplStack_d0,lVar29 + _DAT_112eada10);
                                              FUN_1025ec0b8(aplStack_f8,lVar29 + _DAT_112eada18);
                                              FUN_1025ec0b8(aplStack_120,lVar29 + _DAT_112eada20);
                                              FUN_1025ec0b8(aplStack_148,lVar29 + _DAT_112eada28);
                                              *(undefined8 *)(lVar29 + _DAT_112eada30) = uVar32;
                                              *(undefined8 *)(lVar29 + _DAT_112eada38) = uVar33;
                                              *(undefined8 *)(lVar29 + _DAT_112eada40) = uVar31;
                                              puVar2 = PTR_s_init_1125d9248;
                                              lStack_158 = lVar29;
                                              lStack_150 = lVar25;
                                              func_0x000107c615f0(uVar32);
                                              func_0x000107c6157c(uVar33);
                                              func_0x000107c6157c(uVar31);
                                              func_0x000107c61154(&lStack_158,puVar2);
                                              func_0x000107c615e8(uVar32);
                                              func_0x000107c61574(uVar33);
                                              func_0x000107c61574(uVar31);
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(plVar3);
  return;
}



/* Entry: 1025ef224; end: 1025ef24b; -[SCMapAdsPromotedPlaceBannerEntryPoint begin] */

void FUN_1025ef224(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1025ede3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1025ef24c; end: 1025ef28f; -[SCMapAdsPromotedPlaceBannerEntryPoint end] */

void FUN_1025ef24c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1025ef290; end: 1025efca7;  */

void FUN_1025ef290(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
    goto LAB_1025ef320;
  }
  if ((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef10d7fc0)) {
    uVar2 = 0;
    func_0x000107c605b8(0xd000000000000012,0x800000010ef28040,param_2,param_3,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = 0;
      if (((param_2 == -0x2fffffffffffffec) && (param_3 == -0x7ffffffef0f4cfa0)) ||
         (func_0x000107c605b8(0xd000000000000014,0x800000010f0b3060,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c561e4();
      }
      else {
        uVar2 = 0xd00000000000001b;
        if (((param_2 == -0x2fffffffffffffe5) && (param_3 == -0x7ffffffef10ed0a0)) ||
           (func_0x000107c605b8(0xd00000000000001b,0x800000010ef12f60,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c59640();
        }
        else {
          if ((param_2 != -0x2ffffffffffffff0) || (param_3 != -0x7ffffffef10ed9b0)) {
            uVar2 = 0;
            func_0x000107c605b8(0xd000000000000010,0x800000010ef12650,param_2,param_3,0);
            if ((uVar2 & 1) == 0) {
              uVar2 = 0;
              if (((param_2 == -0x2fffffffffffffe0) && (param_3 == -0x7ffffffef0fa3c10)) ||
                 (func_0x000107c605b8(0xd000000000000020,0x800000010f05c3f0,param_2,param_3,0),
                 (uVar2 & 1) != 0)) {
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c5226c();
                goto LAB_1025ef320;
              }
              if ((param_2 != -0x2fffffffffffffe5) || (param_3 != -0x7ffffffef10e5220)) {
                uVar2 = 0xd00000000000001b;
                func_0x000107c605b8(0xd00000000000001b,0x800000010ef1ade0,param_2,param_3,0);
                if ((uVar2 & 1) == 0) {
                  uVar2 = 0;
                  if (((param_2 == -0x2fffffffffffffde) && (param_3 == -0x7ffffffef10d5ad0)) ||
                     (func_0x000107c605b8(0xd000000000000022,0x800000010ef2a530,param_2,param_3,0),
                     (uVar2 & 1) != 0)) {
                    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                    func_0x000107c605b0();
                    func_0x000107c552e4();
                  }
                  else {
                    uVar2 = 0xd000000000000029;
                    if (((param_2 == -0x2fffffffffffffd7) && (param_3 == -0x7ffffffef0f4cf80)) ||
                       (func_0x000107c605b8(0xd000000000000029,0x800000010f0b3080,param_2,param_3,0)
                       , (uVar2 & 1) != 0)) {
                      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                      func_0x000107c605b0();
                      func_0x000107c561e8();
                    }
                    else {
                      if ((param_2 != -0x2ffffffffffffff0) || (param_3 != -0x7ffffffef10ecae0)) {
                        uVar2 = 0;
                        func_0x000107c605b8(0xd000000000000010,0x800000010ef13520,param_2,param_3,0)
                        ;
                        if ((uVar2 & 1) == 0) {
                          uVar2 = 0xd000000000000013;
                          if (((param_2 == -0x2fffffffffffffed) && (param_3 == -0x7ffffffef0f63720))
                             || (func_0x000107c605b8(0xd000000000000013,0x800000010f09c8e0,param_2,
                                                     param_3,0), (uVar2 & 1) != 0)) {
                            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                            func_0x000107c605b0();
                            func_0x000107c522fc();
                            goto LAB_1025ef320;
                          }
                          if ((param_2 != -0x2fffffffffffffed) || (param_3 != -0x7ffffffef0f4cf50))
                          {
                            uVar2 = 0xd000000000000013;
                            func_0x000107c605b8(0xd000000000000013,0x800000010f0b30b0,param_2,
                                                param_3,0);
                            if ((uVar2 & 1) == 0) {
                              uVar2 = 0;
                              if (((param_2 == -0x2fffffffffffffe4) &&
                                  (param_3 == -0x7ffffffef0f4cf30)) ||
                                 (func_0x000107c605b8(0xd00000000000001c,0x800000010f0b30d0,param_2,
                                                      param_3,0), (uVar2 & 1) != 0)) {
                                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                                func_0x000107c605b0();
                                func_0x000107c57948();
                                goto LAB_1025ef320;
                              }
                              if ((param_2 != -0x2fffffffffffffe5) ||
                                 (param_3 != -0x7ffffffef0f4cf10)) {
                                uVar2 = 0xd00000000000001b;
                                func_0x000107c605b8(0xd00000000000001b,0x800000010f0b30f0,param_2,
                                                    param_3,0);
                                if ((uVar2 & 1) == 0) {
                                  uVar2 = 0;
                                  if (((param_2 == 0x7672655373756c70) &&
                                      (param_3 == -0x13ffffff8c9a9c97)) ||
                                     (func_0x000107c605b8(0x7672655373756c70,0xec00000073656369,
                                                          param_2,param_3,0), (uVar2 & 1) != 0)) {
                                    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                                    func_0x000107c605b0();
                                    func_0x000107c57584();
                                    goto LAB_1025ef320;
                                  }
                                  if ((param_2 != -0x2ffffffffffffff0) ||
                                     (param_3 != -0x7ffffffef10d7fa0)) {
                                    uVar2 = 0;
                                    func_0x000107c605b8(0xd000000000000010,0x800000010ef28060,
                                                        param_2,param_3,0);
                                    if ((uVar2 & 1) == 0) {
                                      uVar2 = 0;
                                      if (((param_2 == -0x2fffffffffffffe6) &&
                                          (param_3 == -0x7ffffffef10dfca0)) ||
                                         (func_0x000107c605b8(0xd00000000000001a,0x800000010ef20360,
                                                              param_2,param_3,0), (uVar2 & 1) != 0))
                                      {
                                        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18))
                                        ;
                                        func_0x000107c605b0();
                                        func_0x000107c575a0();
                                        goto LAB_1025ef320;
                                      }
                                      if ((param_2 != -0x2fffffffffffffe6) ||
                                         (param_3 != -0x7ffffffef10e51e0)) {
                                        uVar2 = 0;
                                        func_0x000107c605b8(0xd00000000000001a,0x800000010ef1ae20,
                                                            param_2,param_3,0);
                                        if ((uVar2 & 1) == 0) {
                                          uVar2 = 0;
                                          if (((param_2 == -0x2fffffffffffffe2) &&
                                              (param_3 == -0x7ffffffef0f4cef0)) ||
                                             (func_0x000107c605b8(0xd00000000000001e,
                                                                  0x800000010f0b3110,param_2,param_3
                                                                  ,0), (uVar2 & 1) != 0)) {
                                            func_0x0001006732c8(param_1,*(undefined8 *)
                                                                         (param_1 + 0x18));
                                            func_0x000107c605b0();
                                            func_0x000107c59644();
                                          }
                                          else {
                                            uVar2 = 0xd00000000000001f;
                                            if (((param_2 == -0x2fffffffffffffe1) &&
                                                (param_3 == -0x7ffffffef0fa3950)) ||
                                               (func_0x000107c605b8(0xd00000000000001f,
                                                                    0x800000010f05c6b0,param_2,
                                                                    param_3,0), (uVar2 & 1) != 0)) {
                                              func_0x0001006732c8(param_1,*(undefined8 *)
                                                                           (param_1 + 0x18));
                                              func_0x000107c605b0();
                                              func_0x000107c52264();
                                            }
                                            else {
                                              if ((param_2 != -0x2fffffffffffffee) ||
                                                 (param_3 != -0x7ffffffef0f4ced0)) {
                                                uVar2 = 0;
                                                func_0x000107c605b8(0xd000000000000012,
                                                                    0x800000010f0b3130,param_2,
                                                                    param_3,0);
                                                if ((uVar2 & 1) == 0) {
                                                  if ((param_2 != -0x2fffffffffffffee) ||
                                                     (param_3 != -0x7ffffffef0f636e0)) {
                                                    uVar2 = 0;
                                                    func_0x000107c605b8(0xd000000000000012,
                                                                        0x800000010f09c920,param_2,
                                                                        param_3,0);
                                                    if ((uVar2 & 1) == 0) {
                                                      uVar2 = 0xd000000000000019;
                                                      if (((param_2 != -0x2fffffffffffffe7) ||
                                                          (param_3 != -0x7ffffffef10dfbf0)) &&
                                                         (func_0x000107c605b8(0xd000000000000019,
                                                                              0x800000010ef20410,
                                                                              param_2,param_3,0),
                                                         (uVar2 & 1) == 0)) {
                                                        func_0x000107c602fc(0x15);
                                                        func_0x000107c6142c(0xe000000000000000);
                                                        func_0x000107c5fb78(param_2,param_3);
                                                        func_0x000107c60450("Fatal error",0xb,2,
                                                                            0xd000000000000013,
                                                                            0x800000010ef0fc20,
                                                                                                                                                        
                                                  "MapAdsPromotedPlaceWorkflowImpl/SCMapAdsPromotedPlaceBannerEntryPoint.swift"
                                                  ,0x4b,2,0x8f,0);
                    /* WARNING: Does not return */
                                                  pcVar1 = (code *)SoftwareBreakpoint(1,0x1025efca8)
                                                  ;
                                                  (*pcVar1)();
                                                  }
                                                  func_0x0001006732c8(param_1,*(undefined8 *)
                                                                               (param_1 + 0x18));
                                                  func_0x000107c605b0();
                                                  func_0x000107c57598();
                                                  goto LAB_1025ef320;
                                                  }
                                                  }
                                                  func_0x0001006732c8(param_1,*(undefined8 *)
                                                                               (param_1 + 0x18));
                                                  func_0x000107c605b0();
                                                  func_0x000107c522f8();
                                                  goto LAB_1025ef320;
                                                }
                                              }
                                              func_0x0001006732c8(param_1,*(undefined8 *)
                                                                           (param_1 + 0x18));
                                              func_0x000107c605b0();
                                              func_0x000107c550ec();
                                            }
                                          }
                                          goto LAB_1025ef320;
                                        }
                                      }
                                      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                                      func_0x000107c605b0();
                                      func_0x000107c5233c();
                                      goto LAB_1025ef320;
                                    }
                                  }
                                  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                                  func_0x000107c605b0();
                                  func_0x000107c575a4();
                                  goto LAB_1025ef320;
                                }
                              }
                              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                              func_0x000107c605b0();
                              func_0x000107c57940();
                              goto LAB_1025ef320;
                            }
                          }
                          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                          func_0x000107c605b0();
                          func_0x000107c550f0();
                          goto LAB_1025ef320;
                        }
                      }
                      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                      func_0x000107c605b0();
                      func_0x000107c523c0();
                    }
                  }
                  goto LAB_1025ef320;
                }
              }
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c52340();
              goto LAB_1025ef320;
            }
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c536e0();
        }
      }
      goto LAB_1025ef320;
    }
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c56240();
LAB_1025ef320:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1025efca8; end: 1025efd53; -[SCMapAdsPromotedPlaceBannerEntryPoint setValue:forIvarName:] */

void FUN_1025efca8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_1025ef290(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_1025f0148(auStack_50);
  return;
}



/* Entry: 1025efd54; end: 1025eff3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025efd54(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112eadcc0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112eadcc8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112eadcd0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112eadcd8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112eadce0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112eadce8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112eadcf0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112eadcf8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112eadd00,0);
  func_0x000107c61614(unaff_x20 + _DAT_112eadd08,0);
  func_0x000107c61614(unaff_x20 + _DAT_112eadd10,0);
  func_0x000107c61614(unaff_x20 + _DAT_112eadd18,0);
  func_0x000107c61614(unaff_x20 + _DAT_112eadd20,0);
  func_0x000107c61614(unaff_x20 + _DAT_112eadd28,0);
  func_0x000107c61614(unaff_x20 + _DAT_112eadd30,0);
  func_0x000107c61614(unaff_x20 + _DAT_112eadd38,0);
  func_0x000107c61614(unaff_x20 + _DAT_112eadd40,0);
  *(undefined8 *)(unaff_x20 + _DAT_112eadd48) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112eadd50) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112eadd58) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112eadd60) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112eadd68) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112eadd70) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112eadd78) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1025eff3c; end: 1025eff5b; -[SCMapAdsPromotedPlaceBannerEntryPoint init] */

void FUN_1025eff3c(void)

{
  FUN_1025efd54();
  return;
}



/* Entry: 1025eff5c; end: 1025eff8f;  */

void FUN_1025eff5c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1025eff90; end: 1025f0127; -[SCMapAdsPromotedPlaceBannerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025eff90(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112eadcc0);
  func_0x000107c61610(param_1 + _DAT_112eadcc8);
  func_0x000107c61610(param_1 + _DAT_112eadcd0);
  func_0x000107c61610(param_1 + _DAT_112eadcd8);
  func_0x000107c61610(param_1 + _DAT_112eadce0);
  func_0x000107c61610(param_1 + _DAT_112eadce8);
  func_0x000107c61610(param_1 + _DAT_112eadcf0);
  func_0x000107c61610(param_1 + _DAT_112eadcf8);
  func_0x000107c61610(param_1 + _DAT_112eadd00);
  func_0x000107c61610(param_1 + _DAT_112eadd08);
  func_0x000107c61610(param_1 + _DAT_112eadd10);
  func_0x000107c61610(param_1 + _DAT_112eadd18);
  func_0x000107c61610(param_1 + _DAT_112eadd20);
  func_0x000107c61610(param_1 + _DAT_112eadd28);
  func_0x000107c61610(param_1 + _DAT_112eadd30);
  func_0x000107c61610(param_1 + _DAT_112eadd38);
  func_0x000107c61610(param_1 + _DAT_112eadd40);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112eadd48));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112eadd50));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112eadd58));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112eadd60));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112eadd68));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112eadd70));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112eadd78));
  return;
}



/* Entry: 1025f0128; end: 1025f0147;  */

void FUN_1025f0128(void)

{
  func_0x000107c61168(&PTR_PTR_112853858);
  return;
}



/* Entry: 1025f0148; end: 1025f0167;  */

void FUN_1025f0148(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001025f015c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 1025f0168; end: 1025f0243;  */

void FUN_1025f0168(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  *(undefined8 *)(unaff_x20 + 0x10) = param_3;
  *(undefined8 *)(unaff_x20 + 0x18) = param_6;
  *(undefined8 *)(unaff_x20 + 0x30) = param_7;
  *(undefined8 *)(unaff_x20 + 0x38) = param_5;
  return;
}



/* Entry: 1025f0244; end: 1025f04bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025f0244(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 *puVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [40];
  undefined1 auStack_d0 [96];
  undefined8 auStack_70 [2];
  
  func_0x000107c61644(auStack_d0);
  func_0x000107c61640(auStack_d0);
  func_0x0001000285a8(0x112eadda8,&UNK_10dac2610);
  func_0x000107c613fc();
  uVar1 = 0x1025f04c0;
  func_0x0001000bdd8c(0x1025f04c0,0);
  func_0x000107c61644(auStack_d0);
  func_0x000107c61640(auStack_d0);
  func_0x0001000285a8(0x112eaddb0,&UNK_10dac2618);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar1);
  uVar2 = 0x1025f04fc;
  func_0x0001000bdd8c(0x1025f04fc,uVar1);
  func_0x0001042f5f3c(0);
  func_0x000107c610f8();
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  func_0x0001042f5e80();
  func_0x0001000285a8(0x112eaddb8,&UNK_10dac2620);
  uVar4 = *(undefined8 *)(*(long *)(unaff_x20 + 0x28) + _DAT_113010c10);
  func_0x000107c61174();
  uVar5 = uVar4;
  func_0x0001000bda74();
  func_0x000107c61170(uVar4);
  uVar9 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + _DAT_112eae810);
  func_0x000107c6157c(uVar9);
  func_0x0001000d224c(auStack_70);
  uVar10 = *(undefined8 *)(*(long *)(unaff_x20 + 0x20) + _DAT_112eae790);
  uVar8 = *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + _DAT_112eae7c0);
  lVar6 = 0;
  func_0x0001025f4c24();
  func_0x000107c61534();
  *(undefined8 *)(lVar6 + 0x20) = uVar10;
  *(undefined8 *)(lVar6 + 0x28) = uVar8;
  *(undefined8 *)(lVar6 + 0x10) = uVar9;
  *(undefined8 *)(lVar6 + 0x18) = auStack_70[0];
  *(undefined8 *)(lVar6 + 0x30) = uVar5;
  func_0x000107c615f0(uVar10);
  func_0x000107c6157c(uVar8);
  FUN_1025f490c(auStack_d0);
  func_0x0001025f0530(auStack_d0,auStack_f8);
  func_0x000107c61428(unaff_x20 + 0x40,auStack_110,0x21,0);
  func_0x0001025f0574(auStack_f8,unaff_x20 + 0x40);
  func_0x000107c614a8(auStack_110);
  puVar7 = auStack_d0;
  func_0x0001025f4a34();
  uVar4 = *(undefined8 *)(unaff_x20 + 0x68);
  *(undefined1 **)(unaff_x20 + 0x68) = puVar7;
  func_0x000107c61574(uVar4);
  func_0x000107c42c20(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c615e8(uVar10);
  func_0x000107c61574(auStack_70[0]);
  func_0x000107c61574(uVar9);
  func_0x000107c61170(uVar3);
  func_0x000107c61588(lVar6);
  func_0x000107c61574(uVar1);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar8);
  func_0x0001000834e4(auStack_d0);
  return;
}



/* Entry: 1025f04c0; end: 1025f05c3;  */

void FUN_1025f04c0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x0001025f075c();
  func_0x000107c613fc();
  FUN_1025f077c();
  *param_1 = uVar1;
  return;
}



/* Entry: 1025f05c4; end: 1025f0637;  */

void FUN_1025f05c4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  FUN_1025f0660(unaff_x20 + 0x40);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  return;
}



/* Entry: 1025f0638; end: 1025f0657;  */

void FUN_1025f0638(void)

{
  FUN_1025f0244();
  return;
}



/* Entry: 1025f0658; end: 1025f065f;  */

undefined8 FUN_1025f0658(void)

{
  return 0;
}



/* Entry: 1025f0660; end: 1025f06a7;  */

undefined8 FUN_1025f0660(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112eaddc0;
  func_0x0001000285a8(0x112eaddc0,&UNK_10dac2628);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1025f06a8; end: 1025f077b;  */

void FUN_1025f06a8(void)

{
  func_0x000107c61168(&PTR_PTR_112eade08);
  return;
}



/* Entry: 1025f077c; end: 1025f09c7;  */

void FUN_1025f077c(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined2 uStack_30;
  
  puVar2 = &uStack_40;
  uVar1 = 0x112eae118;
  func_0x0001000285a8(0x112eae118,&UNK_10dac2768);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar1 = 0x112eae120;
  func_0x0001000285a8(0x112eae120,&UNK_10dac2770);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + 0x18) = uVar1;
  uVar1 = 0x112eae128;
  func_0x0001000285a8(0x112eae128,&UNK_10dac2778);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + 0x20) = uVar1;
  uVar1 = 0x112eae130;
  func_0x0001000285a8(0x112eae130,&UNK_10dac2780);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + 0x28) = uVar1;
  uVar1 = 0x112eae138;
  func_0x0001000285a8(0x112eae138,&UNK_10dac2788);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + 0x30) = uVar1;
  uVar1 = 0x112eae140;
  func_0x0001000285a8(0x112eae140,&UNK_10dac2790);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + 0x38) = uVar1;
  uVar1 = 0x112eae148;
  func_0x0001000285a8(0x112eae148,&UNK_10dac2798);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + 0x40) = uVar1;
  uVar1 = 0x112eae150;
  func_0x0001000285a8(0x112eae150,&UNK_10dac27a0);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + 0x48) = uVar1;
  uVar1 = 0x112eae158;
  func_0x0001000285a8(0x112eae158,&UNK_10dac27a8);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + 0x50) = uVar1;
  uVar1 = 0x112eae160;
  func_0x0001000285a8(0x112eae160,&UNK_10dac27b0);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + 0x58) = uVar1;
  uVar1 = 0x112eae168;
  func_0x0001000285a8(0x112eae168,&UNK_10dac27b8);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + 0x60) = uVar1;
  uStack_38 = 1;
  uStack_40 = 0;
  uStack_30 = 0;
  func_0x0001000285a8(0x112eae170,&UNK_10dac27c0);
  func_0x000107c613fc();
  func_0x00010042e6a0();
  *(undefined8 **)(unaff_x20 + 0x68) = puVar2;
  return;
}



/* Entry: 1025f09c8; end: 1025f0a27;  */

void FUN_1025f09c8(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(*(undefined8 *)(*unaff_x20 + 0x10));
  return;
}



/* Entry: 1025f0a28; end: 1025f0a83;  */

void FUN_1025f0a28(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_1025f0a84(param_1);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 1025f0a84; end: 1025f0e33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025f0a84(ulong *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined **ppuVar10;
  long extraout_x8;
  long unaff_x20;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  long lStack_b8;
  long alStack_b0 [3];
  long lStack_98;
  undefined **ppuStack_90;
  undefined8 auStack_88 [3];
  ulong uStack_70;
  undefined **ppuStack_68;
  
  lVar3 = 0;
  func_0x0001042e769c();
  lVar3 = (long)param_1 + (long)*(int *)(lVar3 + 0x24);
  lVar4 = 0;
  func_0x0001042e75b8();
  if (*(char *)(lVar3 + *(int *)(lVar4 + 0x1c)) == '\x01') {
    uVar5 = *(ulong *)(unaff_x20 + 0x50);
    func_0x000107c41f08();
    if ((uVar5 & 1) != 0) {
      return;
    }
  }
  lVar4 = *(long *)(unaff_x20 + 0x38);
  lVar9 = *(long *)(unaff_x20 + 0x40);
  lStack_b8 = lVar3;
  func_0x0001000a8868(unaff_x20 + 0x20,lVar4);
  lVar11 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar3 = (long)&uStack_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar11 + 0x10))(lVar3);
  lVar6 = lVar4;
  (**(code **)(lVar9 + 8))(lVar4,lVar9);
  (**(code **)(lVar11 + 8))(lVar3,lVar4);
  lVar4 = *(long *)(lVar6 + 0x10);
  lVar3 = lVar6 + 0x20;
  uVar5 = 0xffffffffffffffff;
  while( true ) {
    if (uVar5 - lVar4 == -1) {
      func_0x000107c6142c(lVar6);
      uStack_c0 = *param_1;
      uVar5 = param_1[1];
      uVar13 = *(undefined8 *)(unaff_x20 + 0x10);
      uStack_d0 = *(undefined8 *)(unaff_x20 + 0x48);
      uVar1 = *(undefined8 *)(unaff_x20 + 0x50);
      uVar12 = *(undefined8 *)(unaff_x20 + 0x58);
      uVar8 = 0;
      uStack_c8 = uVar5;
      func_0x0001025f075c();
      ppuStack_68 = &PTR_DAT_110528560;
      lVar9 = 0;
      auStack_88[0] = uVar13;
      uStack_70 = uVar8;
      FUN_1025f425c();
      lVar4 = lVar9;
      func_0x000107c613fc();
      lVar3 = _DAT_112eae2d0;
      func_0x0001000c6560(0);
      func_0x000107c613fc();
      func_0x000107c61434(uVar5);
      func_0x000107c6157c(uVar13);
      uVar13 = uStack_d0;
      func_0x000107c61174();
      func_0x000107c615f0(uVar1);
      uVar8 = uVar12;
      func_0x000107c6157c();
      func_0x0001000c6580();
      *(undefined8 *)(lVar4 + lVar3) = uVar8;
      *(undefined1 *)(lVar4 + _DAT_112eae2d8) = 0;
      *(undefined **)(lVar4 + _DAT_112eae2e0) = PTR___swiftEmptyArrayStorage_11034f1c8;
      lVar3 = _DAT_112eae2e8;
      uVar8 = 0x112eae2c8;
      func_0x0001000285a8(0x112eae2c8,&UNK_10dac2820);
      func_0x000107c613fc();
      func_0x0001000c2754();
      *(undefined8 *)(lVar4 + lVar3) = uVar8;
      *(ulong *)(lVar4 + 0x10) = uStack_c0;
      *(ulong *)(lVar4 + 0x18) = uStack_c8;
      func_0x0001025f0ea0(lStack_b8,lVar4 + _DAT_113804740);
      *(undefined8 *)(lVar4 + _DAT_112eae300) = uVar13;
      func_0x0001025f0ee4(auStack_88,lVar4 + _DAT_112eae308);
      *(undefined8 *)(lVar4 + _DAT_112eae2f0) = uVar1;
      *(undefined8 *)(lVar4 + _DAT_112eae2f8) = uVar12;
      func_0x000107c61174(uVar13);
      func_0x000107c615f0(uVar1);
      func_0x000107c6157c(uVar12);
      FUN_1025f16d0(param_1);
      func_0x0001025f1a20();
      func_0x000107c61170(uVar13);
      func_0x000107c615e8(uVar1);
      func_0x000107c61574(uVar12);
      func_0x0001000834e4(auStack_88);
      func_0x0001025f0ee4(unaff_x20 + 0x20,auStack_88);
      ppuVar10 = ppuStack_68;
      uVar5 = uStack_70;
      func_0x0001000a8868(auStack_88,uStack_70);
      ppuStack_90 = &PTR_DAT_110528640;
      alStack_b0[0] = lVar4;
      lStack_98 = lVar9;
      (*(code *)ppuVar10[2])(alStack_b0,uVar5,ppuVar10);
      func_0x0001000834e4(alStack_b0);
      func_0x0001000834e4(auStack_88);
      return;
    }
    uVar5 = uVar5 + 1;
    if (*(ulong *)(lVar6 + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1025f0e34);
      (*pcVar2)();
    }
    func_0x0001025f0ee4(lVar3,auStack_88);
    ppuVar10 = ppuStack_68;
    uVar7 = uStack_70;
    func_0x0001000a8868(auStack_88,uStack_70);
    (**(code **)((long)ppuVar10 + 8))();
    if (uVar7 == *param_1 && ppuVar10 == (undefined **)param_1[1]) break;
    lVar3 = lVar3 + 0x28;
    func_0x000107c605b8();
    func_0x000107c6142c(ppuVar10);
    func_0x0001000834e4(auStack_88);
    if ((uVar7 & 1) != 0) {
LAB_1025f0e04:
      func_0x000107c6142c(lVar6);
      return;
    }
  }
  func_0x000107c6142c(ppuVar10);
  func_0x0001000834e4(auStack_88);
  goto LAB_1025f0e04;
}



/* Entry: 1025f0e34; end: 1025f0e9f;  */

void FUN_1025f0e34(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x0001000834e4(unaff_x20 + 0x20);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1025f0ea0; end: 1025f0f27;  */

undefined8 FUN_1025f0ea0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x0001042e75b8();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1025f0f28; end: 1025f163b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025f0f28(undefined8 *param_1)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  undefined8 *extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar4;
  long lVar5;
  long extraout_x12;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_2860;
  undefined8 uStack_2858;
  uint uStack_2848;
  uint uStack_2844;
  undefined8 uStack_2840;
  undefined8 uStack_2838;
  undefined8 uStack_2830;
  undefined8 uStack_2828;
  undefined8 uStack_2818;
  long lStack_2810;
  undefined8 uStack_2808;
  long lStack_27f8;
  undefined1 auStack_27f0 [2744];
  undefined6 uStack_1d38;
  undefined2 uStack_1d32;
  undefined6 uStack_1d30;
  undefined2 uStack_1d2a;
  undefined6 uStack_1d28;
  undefined2 uStack_1d22;
  undefined6 uStack_1d20;
  undefined2 uStack_1d1a;
  undefined6 uStack_1d18;
  undefined2 uStack_1d12;
  undefined6 uStack_1d10;
  undefined2 uStack_1d0a;
  undefined6 uStack_1d08;
  undefined2 uStack_1d02;
  undefined6 uStack_1d00;
  undefined2 uStack_1cfa;
  undefined6 uStack_1cf8;
  undefined2 uStack_1cf2;
  undefined6 uStack_1cf0;
  undefined2 uStack_1cea;
  undefined6 uStack_1ce8;
  undefined2 uStack_1ce2;
  undefined6 uStack_1ce0;
  undefined2 uStack_1cda;
  undefined6 uStack_1cd8;
  undefined8 uStack_1788;
  undefined8 uStack_1780;
  undefined8 uStack_1778;
  undefined8 uStack_1770;
  undefined8 uStack_1768;
  undefined8 uStack_1760;
  undefined8 uStack_1758;
  undefined8 uStack_1750;
  undefined8 uStack_1748;
  undefined8 uStack_1740;
  undefined8 uStack_1738;
  undefined1 uStack_1730;
  undefined7 uStack_172f;
  undefined1 uStack_1728;
  undefined8 uStack_1727;
  undefined1 auStack_1718 [776];
  undefined8 uStack_1410;
  undefined8 uStack_1408;
  undefined8 uStack_1400;
  undefined8 uStack_13f8;
  undefined1 uStack_13f0;
  byte bStack_13ef;
  undefined8 uStack_13e8;
  undefined8 uStack_13e0;
  undefined8 uStack_13d8;
  undefined8 uStack_13d0;
  undefined8 uStack_13c8;
  undefined8 uStack_13c0;
  undefined8 uStack_13b8;
  undefined8 uStack_13b0;
  undefined8 uStack_13a8;
  undefined8 uStack_13a0;
  undefined8 uStack_1398;
  undefined8 uStack_1390;
  undefined8 uStack_1388;
  undefined8 uStack_1380;
  undefined8 uStack_1378;
  undefined8 uStack_1370;
  undefined8 uStack_1368;
  undefined8 uStack_1360;
  undefined8 uStack_1358;
  undefined8 uStack_1350;
  undefined8 uStack_1348;
  undefined8 uStack_1340;
  undefined8 uStack_1338;
  undefined8 uStack_1330;
  undefined8 uStack_1328;
  undefined8 uStack_1320;
  undefined8 uStack_1318;
  undefined8 uStack_1310;
  undefined8 uStack_1308;
  undefined8 uStack_1300;
  undefined8 uStack_12f8;
  undefined8 uStack_12f0;
  undefined8 uStack_12e8;
  undefined1 uStack_12e0;
  undefined7 uStack_12df;
  undefined1 uStack_12d8;
  undefined8 uStack_12d7;
  undefined8 uStack_12c8;
  undefined8 uStack_12c0;
  byte bStack_12b8;
  undefined8 uStack_12b0;
  undefined8 uStack_12a8;
  undefined8 uStack_12a0;
  undefined8 uStack_1298;
  undefined8 uStack_1290;
  ushort uStack_1288;
  undefined1 auStack_1280 [2720];
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined2 uStack_7d0;
  undefined1 auStack_7c8 [24];
  undefined8 uStack_7b0;
  undefined1 auStack_7a8 [1448];
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 uStack_1a8;
  undefined7 uStack_1a7;
  undefined1 uStack_1a0;
  undefined8 uStack_19f;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined8 uStack_7f;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar2 = 0;
  func_0x0001042dddf8();
  lStack_27f8 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar9 = (long)&uStack_2860 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x0001042dde50();
  lVar8 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar4 = lVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_2810 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar2 = _DAT_112eae2e0;
  lVar4 = lVar4 - extraout_x12;
  func_0x000107c61428(unaff_x20 + _DAT_112eae2e0,auStack_7c8,0,0);
  lVar5 = *(long *)(*(long *)(unaff_x20 + lVar2) + 0x10);
  if (lVar5 != 0) {
    FUN_1025f4828(*(long *)(unaff_x20 + lVar2) +
                  ((ulong)*(byte *)(lVar8 + 0x50) + 0x20 &
                  ((ulong)*(byte *)(lVar8 + 0x50) ^ 0xffffffffffffffff)) +
                  *(long *)(lVar8 + 0x48) * (lVar5 + -1),lVar4,&SUB_1042dde50);
    FUN_1025f4828(lVar4 + *(int *)(lVar3 + 0x14),lVar9,&SUB_1042dddf8);
    lVar3 = lVar9;
    func_0x000107c614c4(lVar9,lStack_27f8);
    if ((int)lVar3 == 10) {
      FUN_1025f48c8(lVar9,&SUB_1042dddf8);
      func_0x000107c61428(unaff_x20 + lVar2,auStack_1280,0x21,0);
      lVar2 = lStack_2810;
      FUN_1025f163c(lStack_2810);
      func_0x000107c614a8(auStack_1280);
      FUN_1025f48c8(lVar2,&SUB_1042dde50);
      FUN_1025f48c8(lVar4,&SUB_1042dde50);
      lStack_27f8 = CONCAT44(lStack_27f8._4_4_,(uint)*(ushort *)(param_1 + 0x156));
      uStack_2808 = param_1[0x155];
      lStack_2810 = param_1[0x154];
      uStack_2818 = param_1[0x151];
      uStack_2828 = param_1[0x153];
      uStack_2830 = param_1[0x152];
      uStack_2838 = param_1[0x14f];
      uStack_2840 = param_1[0x14e];
      uStack_2844 = (uint)*(byte *)(param_1 + 0x150);
      uStack_a8 = param_1[0x147];
      uStack_b0 = param_1[0x146];
      uStack_98 = param_1[0x149];
      uStack_a0 = param_1[0x148];
      uStack_90 = param_1[0x14a];
      uStack_88 = (undefined1)param_1[0x14b];
      uStack_7f = *(undefined8 *)((long)param_1 + 0xa61);
      uStack_87 = (undefined7)*(undefined8 *)((long)param_1 + 0xa59);
      uStack_80 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xa59) >> 0x38);
      uStack_e8 = param_1[0x13f];
      uStack_f0 = param_1[0x13e];
      uStack_d8 = param_1[0x141];
      uStack_e0 = param_1[0x140];
      uStack_c8 = param_1[0x143];
      uStack_d0 = param_1[0x142];
      uStack_b8 = param_1[0x145];
      uStack_c0 = param_1[0x144];
      uStack_128 = param_1[0x137];
      uStack_130 = param_1[0x136];
      uStack_118 = param_1[0x139];
      uStack_120 = param_1[0x138];
      uStack_108 = param_1[0x13b];
      uStack_110 = param_1[0x13a];
      uStack_f8 = param_1[0x13d];
      uStack_100 = param_1[0x13c];
      uStack_168 = param_1[0x12f];
      uStack_170 = param_1[0x12e];
      uStack_158 = param_1[0x131];
      uStack_160 = param_1[0x130];
      uStack_148 = param_1[0x133];
      uStack_150 = param_1[0x132];
      uStack_138 = param_1[0x135];
      uStack_140 = param_1[0x134];
      uStack_188 = param_1[299];
      uStack_190 = param_1[0x12a];
      uStack_178 = param_1[0x12d];
      uStack_180 = param_1[300];
      uStack_2848 = (uint)*(byte *)((long)param_1 + 0x949);
      uVar1 = *(undefined1 *)(param_1 + 0x129);
      uVar11 = param_1[0x128];
      uVar6 = param_1[0x125];
      uStack_2858 = param_1[0x127];
      uStack_2860 = param_1[0x126];
      func_0x000107c610b4(auStack_27f0,param_1 + 0xc4,0x301);
      uStack_1c8 = param_1[0xbd];
      uStack_1d0 = param_1[0xbc];
      uStack_1b8 = param_1[0xbf];
      uStack_1c0 = param_1[0xbe];
      uStack_1b0 = param_1[0xc0];
      uStack_1a8 = (undefined1)param_1[0xc1];
      uStack_19f = *(undefined8 *)((long)param_1 + 0x611);
      uStack_1a7 = (undefined7)*(undefined8 *)((long)param_1 + 0x609);
      uStack_1a0 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x609) >> 0x38);
      uStack_1f8 = param_1[0xb7];
      uStack_200 = param_1[0xb6];
      uStack_1e8 = param_1[0xb9];
      uStack_1f0 = param_1[0xb8];
      uStack_1d8 = param_1[0xbb];
      uStack_1e0 = param_1[0xba];
      func_0x000107c610b4(auStack_7a8,param_1 + 1,0x5a8);
      uVar7 = *param_1;
      func_0x000101795250(param_1,auStack_1280);
      goto LAB_1025f149c;
    }
    FUN_1025f48c8(lVar4,&SUB_1042dde50);
    FUN_1025f48c8(lVar9,&SUB_1042dddf8);
  }
  uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar3 = unaff_x20 + _DAT_113804740;
  lVar4 = 0;
  func_0x0001042e75b8();
  uVar10 = *(undefined8 *)(lVar3 + *(int *)(lVar4 + 0x20));
  uVar11 = *(undefined8 *)(unaff_x20 + lVar2);
  func_0x0001042f4c7c(0);
  func_0x000107c610f8();
  func_0x000107c61434(uVar6);
  func_0x000107c61434(uVar11);
  func_0x0001042f4c10(uVar7,uVar6,uVar10,uVar11);
  uStack_7b0 = param_1[0x154];
  func_0x000101795250(param_1,auStack_1280);
  func_0x0001025f486c(&uStack_7b0);
  func_0x000107c610b4(auStack_1280,param_1,0xaa0);
  uStack_7d8 = param_1[0x155];
  uStack_7d0 = *(undefined2 *)(param_1 + 0x156);
  func_0x000107c610b4(&uStack_1d38,param_1,0xaa0);
  uStack_1290 = param_1[0x155];
  uStack_1288 = *(ushort *)(param_1 + 0x156);
  uStack_1298 = uVar7;
  uStack_7e0 = uVar7;
  func_0x000101795250(&uStack_1d38,auStack_27f0);
  func_0x00010179528c(auStack_1280);
  lStack_27f8 = CONCAT44(lStack_27f8._4_4_,(uint)uStack_1288);
  uStack_2808 = uStack_1290;
  lStack_2810 = uStack_1298;
  uStack_2818 = uStack_12b0;
  uStack_2838 = uStack_12c0;
  uStack_2840 = uStack_12c8;
  uStack_2828 = uStack_12a0;
  uStack_2830 = uStack_12a8;
  uStack_2848 = (uint)bStack_13ef;
  uStack_2844 = (uint)bStack_12b8;
  uStack_2858 = uStack_1400;
  uStack_2860 = uStack_1408;
  uVar7 = CONCAT26(uStack_1d32,uStack_1d38);
  func_0x000107c610b4(auStack_7a8,&uStack_1d30,0x5a8);
  uStack_1b8 = uStack_1740;
  uStack_1c0 = uStack_1748;
  uStack_1a8 = uStack_1730;
  uStack_1b0 = uStack_1738;
  uStack_19f = uStack_1727;
  uStack_1a7 = uStack_172f;
  uStack_1a0 = uStack_1728;
  uStack_1f8 = uStack_1780;
  uStack_200 = uStack_1788;
  uStack_1e8 = uStack_1770;
  uStack_1f0 = uStack_1778;
  uStack_1c8 = uStack_1750;
  uStack_1d0 = uStack_1758;
  uStack_1d8 = uStack_1760;
  uStack_1e0 = uStack_1768;
  func_0x000107c610b4(auStack_27f0,auStack_1718,0x301);
  uStack_168 = uStack_13c0;
  uStack_170 = uStack_13c8;
  uStack_158 = uStack_13b0;
  uStack_160 = uStack_13b8;
  uStack_148 = uStack_13a0;
  uStack_150 = uStack_13a8;
  uStack_138 = uStack_1390;
  uStack_140 = uStack_1398;
  uStack_188 = uStack_13e0;
  uStack_190 = uStack_13e8;
  uStack_178 = uStack_13d0;
  uStack_180 = uStack_13d8;
  uStack_7f = uStack_12d7;
  uStack_80 = uStack_12d8;
  uStack_88 = uStack_12e0;
  uStack_87 = uStack_12df;
  uStack_90 = uStack_12e8;
  uStack_98 = uStack_12f0;
  uStack_a0 = uStack_12f8;
  uStack_a8 = uStack_1300;
  uStack_b0 = uStack_1308;
  uStack_b8 = uStack_1310;
  uStack_c0 = uStack_1318;
  uStack_c8 = uStack_1320;
  uStack_d0 = uStack_1328;
  uStack_d8 = uStack_1330;
  uStack_e0 = uStack_1338;
  uStack_e8 = uStack_1340;
  uStack_f0 = uStack_1348;
  uStack_f8 = uStack_1350;
  uStack_100 = uStack_1358;
  uStack_108 = uStack_1360;
  uStack_110 = uStack_1368;
  uStack_118 = uStack_1370;
  uStack_120 = uStack_1378;
  uStack_128 = uStack_1380;
  uStack_130 = uStack_1388;
  uVar6 = uStack_1410;
  uVar11 = uStack_13f8;
  uVar1 = uStack_13f0;
LAB_1025f149c:
  func_0x000107c610b4((ulong)auStack_1280 | 7,auStack_27f0,0x301);
  uStack_1d0a = (undefined2)uStack_168;
  uStack_1d08 = (undefined6)((ulong)uStack_168 >> 0x10);
  uStack_1d12 = (undefined2)uStack_170;
  uStack_1d10 = (undefined6)((ulong)uStack_170 >> 0x10);
  uStack_1cfa = (undefined2)uStack_158;
  uStack_1cf8 = (undefined6)((ulong)uStack_158 >> 0x10);
  uStack_1d02 = (undefined2)uStack_160;
  uStack_1d00 = (undefined6)((ulong)uStack_160 >> 0x10);
  uStack_1cea = (undefined2)uStack_148;
  uStack_1ce8 = (undefined6)((ulong)uStack_148 >> 0x10);
  uStack_1cf2 = (undefined2)uStack_150;
  uStack_1cf0 = (undefined6)((ulong)uStack_150 >> 0x10);
  uStack_1cda = (undefined2)uStack_138;
  uStack_1cd8 = (undefined6)((ulong)uStack_138 >> 0x10);
  uStack_1ce2 = (undefined2)uStack_140;
  uStack_1ce0 = (undefined6)((ulong)uStack_140 >> 0x10);
  uStack_1d2a = (undefined2)uStack_188;
  uStack_1d28 = (undefined6)((ulong)uStack_188 >> 0x10);
  uStack_1d32 = (undefined2)uStack_190;
  uStack_1d30 = (undefined6)((ulong)uStack_190 >> 0x10);
  uStack_1d1a = (undefined2)uStack_178;
  uStack_1d18 = (undefined6)((ulong)uStack_178 >> 0x10);
  uStack_1d22 = (undefined2)uStack_180;
  uStack_1d20 = (undefined6)((ulong)uStack_180 >> 0x10);
  *extraout_x8 = uVar7;
  func_0x000107c610b4(extraout_x8 + 1,auStack_7a8,0x5a8);
  extraout_x8[0xbd] = uStack_1c8;
  extraout_x8[0xbc] = uStack_1d0;
  extraout_x8[0xbf] = uStack_1b8;
  extraout_x8[0xbe] = uStack_1c0;
  extraout_x8[0xc1] = CONCAT71(uStack_1a7,uStack_1a8);
  extraout_x8[0xc0] = uStack_1b0;
  *(undefined8 *)((long)extraout_x8 + 0x611) = uStack_19f;
  *(ulong *)((long)extraout_x8 + 0x609) = CONCAT17(uStack_1a0,uStack_1a7);
  extraout_x8[0xb7] = uStack_1f8;
  extraout_x8[0xb6] = uStack_200;
  extraout_x8[0xb9] = uStack_1e8;
  extraout_x8[0xb8] = uStack_1f0;
  extraout_x8[0xbb] = uStack_1d8;
  extraout_x8[0xba] = uStack_1e0;
  func_0x000107c610b4((long)extraout_x8 + 0x619,auStack_1280,0x308);
  *(ulong *)((long)extraout_x8 + 0x992) = CONCAT26(uStack_1cea,uStack_1cf0);
  *(ulong *)((long)extraout_x8 + 0x98a) = CONCAT26(uStack_1cf2,uStack_1cf8);
  *(ulong *)((long)extraout_x8 + 0x9a2) = CONCAT26(uStack_1cda,uStack_1ce0);
  *(ulong *)((long)extraout_x8 + 0x99a) = CONCAT26(uStack_1ce2,uStack_1ce8);
  *(ulong *)((long)extraout_x8 + 0x952) = CONCAT26(uStack_1d2a,uStack_1d30);
  *(ulong *)((long)extraout_x8 + 0x94a) = CONCAT26(uStack_1d32,uStack_1d38);
  *(ulong *)((long)extraout_x8 + 0x962) = CONCAT26(uStack_1d1a,uStack_1d20);
  *(ulong *)((long)extraout_x8 + 0x95a) = CONCAT26(uStack_1d22,uStack_1d28);
  *(ulong *)((long)extraout_x8 + 0x972) = CONCAT26(uStack_1d0a,uStack_1d10);
  *(ulong *)((long)extraout_x8 + 0x96a) = CONCAT26(uStack_1d12,uStack_1d18);
  *(ulong *)((long)extraout_x8 + 0x982) = CONCAT26(uStack_1cfa,uStack_1d00);
  *(ulong *)((long)extraout_x8 + 0x97a) = CONCAT26(uStack_1d02,uStack_1d08);
  extraout_x8[0x127] = uStack_2858;
  extraout_x8[0x126] = uStack_2860;
  *(undefined8 *)((long)extraout_x8 + 0xa61) = uStack_7f;
  *(ulong *)((long)extraout_x8 + 0xa59) = CONCAT17(uStack_80,uStack_87);
  extraout_x8[0x14b] = CONCAT71(uStack_87,uStack_88);
  extraout_x8[0x14a] = uStack_90;
  extraout_x8[0x149] = uStack_98;
  extraout_x8[0x148] = uStack_a0;
  extraout_x8[0x147] = uStack_a8;
  extraout_x8[0x146] = uStack_b0;
  extraout_x8[0x145] = uStack_b8;
  extraout_x8[0x144] = uStack_c0;
  extraout_x8[0x143] = uStack_c8;
  extraout_x8[0x142] = uStack_d0;
  extraout_x8[0x141] = uStack_d8;
  extraout_x8[0x140] = uStack_e0;
  extraout_x8[0x13f] = uStack_e8;
  extraout_x8[0x13e] = uStack_f0;
  extraout_x8[0x13d] = uStack_f8;
  extraout_x8[0x13c] = uStack_100;
  extraout_x8[0x13b] = uStack_108;
  extraout_x8[0x13a] = uStack_110;
  extraout_x8[0x139] = uStack_118;
  extraout_x8[0x138] = uStack_120;
  extraout_x8[0x125] = uVar6;
  extraout_x8[0x128] = uVar11;
  *(undefined1 *)(extraout_x8 + 0x129) = uVar1;
  *(char *)((long)extraout_x8 + 0x949) = (char)uStack_2848;
  extraout_x8[0x135] = CONCAT62(uStack_1cd8,uStack_1cda);
  extraout_x8[0x137] = uStack_128;
  extraout_x8[0x136] = uStack_130;
  extraout_x8[0x14f] = uStack_2838;
  extraout_x8[0x14e] = uStack_2840;
  *(char *)(extraout_x8 + 0x150) = (char)uStack_2844;
  extraout_x8[0x151] = uStack_2818;
  extraout_x8[0x153] = uStack_2828;
  extraout_x8[0x152] = uStack_2830;
  extraout_x8[0x155] = uStack_2808;
  extraout_x8[0x154] = lStack_2810;
  *(short *)(extraout_x8 + 0x156) = (short)lStack_27f8;
  return;
}



/* Entry: 1025f163c; end: 1025f16cf;  */

undefined8 FUN_1025f163c(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong *unaff_x20;
  ulong uVar6;
  
  uVar6 = *unaff_x20;
  if (*(long *)(uVar6 + 0x10) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1025f16b8);
    (*pcVar1)();
  }
  uVar5 = uVar6;
  func_0x000107c61558();
  if ((uVar5 & 1) == 0) {
    FUN_1025f48b4();
    lVar3 = *(long *)(uVar6 + 0x10);
  }
  else {
    lVar3 = *(long *)(uVar6 + 0x10);
  }
  if (lVar3 != 0) {
    lVar2 = 0;
    func_0x0001042dde50();
    uVar5 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
    lVar4 = *(long *)(*(long *)(lVar2 + -8) + 0x48);
    *(long *)(uVar6 + 0x10) = lVar3 + -1;
    *unaff_x20 = uVar6;
    lVar2 = 0;
    func_0x0001042dde50();
    (**(code **)(*(long *)(lVar2 + -8) + 0x20))
              (param_1,uVar6 + (uVar5 + 0x20 & (uVar5 ^ 0xffffffffffffffff)) + lVar4 * (lVar3 + -1),
               lVar2);
    return param_1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1025f16d0);
  (*pcVar1)();
}



/* Entry: 1025f16d0; end: 1025f2a63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025f16d0(double param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  ulong uVar11;
  long extraout_x8;
  long extraout_x12;
  undefined8 *puVar12;
  long unaff_x20;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong uVar17;
  long lStack_a0;
  undefined *apuStack_98 [2];
  long lStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar7 = 0;
  func_0x0001042dde50();
  lVar14 = *(long *)(lVar7 + -8);
  lVar8 = lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar5 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar12 = (undefined8 *)((long)&lStack_a0 + lVar5);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar15 = (undefined8 *)((long)puVar12 - extraout_x12);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar1 = (undefined1 *)((long)puVar15 + (long)*(int *)(lVar8 + 0x14));
  *puVar1 = 0;
  *(undefined8 *)(puVar1 + 8) = uVar2;
  *(undefined8 *)(puVar1 + 0x10) = uVar3;
  uVar9 = 0;
  func_0x0001042dddf8();
  uStack_80 = uVar9;
  func_0x000107c6159c(puVar1,uVar9,0xb);
  puVar10 = PTR_PTR_1126afec0;
  func_0x000107c61168();
  lStack_88 = _DAT_112eae300;
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112eae300);
  func_0x000107c61438(uVar3,2);
  func_0x000107c3ceac(uVar9);
  func_0x000107c51b38(puVar10);
  lVar8 = _DAT_112eae2e0;
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1025f1984);
    (*pcVar6)();
  }
  if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1025f1988);
    (*pcVar6)();
  }
  if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1025f198c);
    (*pcVar6)();
  }
  apuStack_98[1] = (undefined *)param_2;
  *puVar15 = uVar2;
  puVar15[1] = uVar3;
  *(long *)((long)puVar15 + (long)*(int *)(lVar7 + 0x18)) = (long)param_1;
  func_0x000107c61428(unaff_x20 + _DAT_112eae2e0,auStack_78,0x21,0);
  uVar16 = *(ulong *)(unaff_x20 + lVar8);
  uVar11 = uVar16;
  func_0x000107c61558();
  *(ulong *)(unaff_x20 + lVar8) = uVar16;
  uVar17 = uVar16;
  apuStack_98[0] = puVar10;
  if ((uVar11 & 1) == 0) {
    uVar17 = 0;
    FUN_1025f4460(0,*(long *)(uVar16 + 0x10) + 1,1,uVar16);
    *(ulong *)(unaff_x20 + lVar8) = uVar17;
  }
  uVar11 = *(ulong *)(uVar17 + 0x10);
  uVar16 = uVar17;
  if (*(ulong *)(uVar17 + 0x18) >> 1 <= uVar11) {
    uVar16 = (ulong)(1 < *(ulong *)(uVar17 + 0x18));
    FUN_1025f4460(uVar16,uVar11 + 1,1,uVar17);
  }
  *(ulong *)(uVar16 + 0x10) = uVar11 + 1;
  uVar17 = (ulong)*(byte *)(lVar14 + 0x50) + 0x20 &
           ((ulong)*(byte *)(lVar14 + 0x50) ^ 0xffffffffffffffff);
  lVar14 = *(long *)(lVar14 + 0x48);
  FUN_1025f45dc(puVar15,uVar16 + uVar17 + lVar14 * uVar11);
  *(ulong *)(unaff_x20 + lVar8) = uVar16;
  func_0x000107c614a8(auStack_78);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  iVar4 = *(int *)(lVar7 + 0x14);
  FUN_1025f4828(apuStack_98[1],(long)puVar12 + (long)iVar4,&SUB_1042e769c);
  func_0x000107c6159c((long)puVar12 + (long)iVar4,uStack_80,4);
  uVar9 = *(undefined8 *)(unaff_x20 + lStack_88);
  func_0x000107c61434(uVar3);
  func_0x000107c3ceac(uVar9);
  func_0x000107c51b38(apuStack_98[0]);
  if ((ulong)ABS(param_1) < 0x7ff0000000000000) {
    if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1025f19d8);
      (*pcVar6)();
    }
    if (param_1 < 9.223372036854776e+18) {
      *puVar12 = uVar2;
      *(undefined8 *)((long)apuStack_98 + lVar5) = uVar3;
      *(long *)((long)puVar12 + (long)*(int *)(lVar7 + 0x18)) = (long)param_1;
      func_0x000107c61428(unaff_x20 + lVar8,auStack_78,0x21,0);
      uVar13 = *(ulong *)(unaff_x20 + lVar8);
      uVar11 = uVar13;
      func_0x000107c61558();
      *(ulong *)(unaff_x20 + lVar8) = uVar13;
      uVar16 = uVar13;
      if ((uVar11 & 1) == 0) {
        uVar16 = 0;
        FUN_1025f4460(0,*(long *)(uVar13 + 0x10) + 1,1,uVar13);
        *(ulong *)(unaff_x20 + lVar8) = uVar16;
      }
      uVar11 = *(ulong *)(uVar16 + 0x10);
      uVar13 = uVar16;
      if (*(ulong *)(uVar16 + 0x18) >> 1 <= uVar11) {
        uVar13 = (ulong)(1 < *(ulong *)(uVar16 + 0x18));
        FUN_1025f4460(uVar13,uVar11 + 1,1,uVar16);
      }
      *(ulong *)(uVar13 + 0x10) = uVar11 + 1;
      FUN_1025f45dc(puVar12,uVar13 + uVar17 + uVar11 * lVar14);
      *(ulong *)(unaff_x20 + lVar8) = uVar13;
      func_0x000107c614a8(auStack_78);
      return;
    }
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1025f19dc);
    (*pcVar6)();
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1025f19d4);
  (*pcVar6)();
}



/* Entry: 1025f2a64; end: 1025f2b37;  */

void FUN_1025f2a64(undefined8 param_1,long param_2)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [24];
  
  lVar1 = 0;
  func_0x0001042dddf8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar2 = auStack_50 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_1025f4828(param_1,puVar2,&SUB_1042e769c);
    func_0x000107c6159c(puVar2,lVar1,4);
    FUN_1025f33c8(puVar2);
    func_0x000107c61574(param_2);
    FUN_1025f48c8(puVar2,&SUB_1042dddf8);
  }
  return;
}



/* Entry: 1025f2b38; end: 1025f2b6f;  */

long FUN_1025f2b38(long *param_1,long param_2,long param_3)

{
  long lVar1;
  
  if (param_1[1] == 0) {
    return 0;
  }
  lVar1 = *param_1;
  if (lVar1 != param_2 || param_1[1] != param_3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )();
    return lVar1;
  }
  return 1;
}



/* Entry: 1025f2b70; end: 1025f2c5f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1025f2b70(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  long lVar5;
  long lVar6;
  long extraout_x8;
  undefined8 *puVar7;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [16];
  
  lVar6 = 0;
  func_0x0001042dddf8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  lVar5 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar7 = (undefined8 *)((long)&uStack_70 + lVar5);
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *(undefined1 *)(param_1 + 2);
  uVar4 = *(undefined1 *)((long)param_1 + 0x11);
  func_0x000107c61428(param_2 + 0x10,&uStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    *puVar7 = uVar1;
    *(undefined8 *)(auStack_60 + lVar5 + -8) = uVar2;
    auStack_60[lVar5] = uVar3;
    auStack_60[lVar5 + 1] = uVar4;
    func_0x000107c6159c(puVar7,lVar6,6);
    func_0x000107c61434(uVar2);
    FUN_1025f33c8(puVar7);
    func_0x000107c61574(param_2);
    FUN_1025f48c8(puVar7,&SUB_1042dddf8);
  }
  return;
}



/* Entry: 1025f2c60; end: 1025f2d53;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1025f2c60(undefined8 *param_1,long param_2)

{
  undefined2 uVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uStack_60;
  long lStack_58;
  undefined1 auStack_50 [16];
  
  lVar3 = 0;
  func_0x0001042dddf8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar2 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar4 = (undefined8 *)((long)&uStack_60 + lVar2);
  lVar5 = param_1[1];
  if (lVar5 != 1) {
    uVar6 = *param_1;
    uVar1 = *(undefined2 *)(param_1 + 2);
    func_0x000107c61428(param_2 + 0x10,&lStack_58,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61648();
    if (param_2 != 0) {
      *puVar4 = uVar6;
      *(long *)(auStack_50 + lVar2 + -8) = lVar5;
      auStack_50[lVar2] = (char)uVar1;
      auStack_50[lVar2 + 1] = (char)((ushort)uVar1 >> 8);
      func_0x000107c6159c(puVar4,lVar3,6);
      func_0x000107c61434(lVar5);
      FUN_1025f33c8(puVar4);
      func_0x000107c61574(param_2);
      FUN_1025f48c8(puVar4,&SUB_1042dddf8);
    }
  }
  return;
}



/* Entry: 1025f2d54; end: 1025f2e1b;  */

void FUN_1025f2d54(undefined8 *param_1,long param_2)

{
  long lVar1;
  long extraout_x8;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  lVar1 = 0;
  func_0x0001042dddf8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar2 = (undefined8 *)((long)&uStack_50 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  uVar3 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    *puVar2 = uVar3;
    func_0x000107c6159c(puVar2,lVar1,0);
    FUN_1025f33c8(puVar2);
    func_0x000107c61574(param_2);
    FUN_1025f48c8(puVar2,&SUB_1042dddf8);
  }
  return;
}



/* Entry: 1025f2e1c; end: 1025f2f23;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1025f2e1c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  long lVar7;
  long lVar8;
  long extraout_x8;
  undefined8 *puVar9;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar8 = 0;
  func_0x0001042dddf8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  lVar7 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar9 = (undefined8 *)((long)&uStack_80 + lVar7);
  uVar1 = *param_1;
  uVar3 = param_1[1];
  uVar5 = *(undefined1 *)(param_1 + 2);
  uVar6 = *(undefined1 *)((long)param_1 + 0x11);
  uVar2 = param_1[3];
  uVar4 = param_1[4];
  func_0x000107c61428(param_2 + 0x10,&uStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    *puVar9 = uVar1;
    *(undefined8 *)(auStack_70 + lVar7 + -8) = uVar3;
    auStack_70[lVar7] = uVar5;
    auStack_70[lVar7 + 1] = uVar6;
    *(undefined8 *)((long)&uStack_68 + lVar7) = uVar2;
    *(undefined8 *)(&stack0xffffffffffffffa0 + lVar7) = uVar4;
    func_0x000107c6159c(puVar9,lVar8,1);
    func_0x000107c61434(uVar3);
    func_0x000107c61434(uVar2);
    FUN_1025f33c8(puVar9);
    func_0x000107c61574(param_2);
    FUN_1025f48c8(puVar9,&SUB_1042dddf8);
  }
  return;
}



/* Entry: 1025f2f24; end: 1025f300f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1025f2f24(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long lVar4;
  long lVar5;
  long extraout_x8;
  undefined8 *puVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [16];
  
  lVar5 = 0;
  func_0x0001042dddf8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar4 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar6 = (undefined8 *)((long)&uStack_70 + lVar4);
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *(undefined1 *)(param_1 + 2);
  func_0x000107c61428(param_2 + 0x10,&uStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    *puVar6 = uVar1;
    *(undefined8 *)(auStack_60 + lVar4 + -8) = uVar2;
    auStack_60[lVar4] = uVar3;
    func_0x000107c6159c(puVar6,lVar5,param_3);
    func_0x000107c61434(uVar2);
    FUN_1025f33c8(puVar6);
    func_0x000107c61574(param_2);
    FUN_1025f48c8(puVar6,&SUB_1042dddf8);
  }
  return;
}



/* Entry: 1025f3010; end: 1025f30e7;  */

void FUN_1025f3010(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  undefined1 *puVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  lVar4 = 0;
  func_0x0001042dddf8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar3 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar5 = auStack_60 + lVar3;
  uVar1 = *param_1;
  uVar2 = param_1[1];
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    *puVar5 = uVar1;
    auStack_60[lVar3 + 1] = uVar2;
    func_0x000107c6159c(puVar5,lVar4,7);
    FUN_1025f33c8(puVar5);
    func_0x000107c61574(param_2);
    FUN_1025f48c8(puVar5,&SUB_1042dddf8);
  }
  return;
}



/* Entry: 1025f30e8; end: 1025f31af;  */

void FUN_1025f30e8(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  long lVar2;
  long extraout_x8;
  undefined1 *puVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [24];
  
  lVar2 = 0;
  func_0x0001042dddf8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar3 = auStack_50 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    *puVar3 = uVar1;
    func_0x000107c6159c(puVar3,lVar2,9);
    FUN_1025f33c8(puVar3);
    func_0x000107c61574(param_2);
    FUN_1025f48c8(puVar3,&SUB_1042dddf8);
  }
  return;
}



/* Entry: 1025f31b0; end: 1025f328f;  */

void FUN_1025f31b0(undefined1 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long lVar4;
  long lVar5;
  long extraout_x8;
  undefined1 *puVar6;
  undefined1 auStack_60 [8];
  undefined8 auStack_58 [3];
  
  lVar5 = 0;
  func_0x0001042dddf8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar4 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_60 + lVar4;
  uVar3 = *param_1;
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    *puVar6 = uVar3;
    *(undefined8 *)((long)auStack_58 + lVar4) = uVar1;
    *(undefined8 *)((long)auStack_58 + lVar4 + 8) = uVar2;
    func_0x000107c6159c(puVar6,lVar5,10);
    func_0x000107c61434(uVar2);
    FUN_1025f33c8(puVar6);
    func_0x000107c61574(param_2);
    FUN_1025f48c8(puVar6,&SUB_1042dddf8);
  }
  return;
}



/* Entry: 1025f3290; end: 1025f33c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025f3290(undefined1 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long extraout_x8;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined1 auStack_80 [8];
  undefined8 auStack_78 [2];
  undefined1 auStack_68 [24];
  
  lVar6 = 0;
  func_0x0001042dddf8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  lVar5 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar8 = auStack_80 + lVar5;
  uVar4 = *param_1;
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  lVar7 = param_2 + 0x10;
  func_0x000107c61648();
  if (lVar7 != 0) {
    lVar1 = lVar7 + _DAT_113804740;
    uVar9 = *(undefined8 *)(lVar1 + 0x18);
    *(undefined8 *)(lVar1 + 0x10) = uVar2;
    *(undefined8 *)(lVar1 + 0x18) = uVar3;
    func_0x000107c61434(uVar3);
    func_0x000107c61574(lVar7);
    func_0x000107c6142c(uVar9);
  }
  func_0x000107c61428(param_2 + 0x10,auStack_80,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    *puVar8 = uVar4;
    *(undefined8 *)((long)auStack_78 + lVar5) = uVar2;
    *(undefined8 *)((long)auStack_78 + lVar5 + 8) = uVar3;
    func_0x000107c6159c(puVar8,lVar6,0xb);
    func_0x000107c61434(uVar3);
    FUN_1025f33c8(puVar8);
    func_0x000107c61574(param_2);
    FUN_1025f48c8(puVar8,&SUB_1042dddf8);
  }
  return;
}



/* Entry: 1025f33c8; end: 1025f3803;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025f33c8(double param_1,undefined8 param_2)

{
  byte bVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long lVar8;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long unaff_x20;
  ulong *puVar9;
  ulong uVar10;
  ulong *puVar11;
  undefined8 uVar12;
  long lVar13;
  ulong auStack_d0 [2];
  ulong uStack_c0;
  long alStack_b8 [3];
  double dStack_a0;
  undefined1 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [24];
  
  lVar3 = 0;
  func_0x0001042dddf8();
  alStack_b8[2] = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  uVar10 = (long)auStack_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uStack_c0 = uVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = uVar10 - extraout_x12;
  auStack_d0[1] = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar8 - extraout_x12_00;
  lVar4 = 0;
  func_0x0001042dde50();
  lVar13 = *(long *)(lVar4 + -8);
  lVar3 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  puVar9 = (ulong *)(lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar11 = (ulong *)((long)puVar9 - extraout_x12_01);
  uVar10 = *(ulong *)(unaff_x20 + 0x10);
  uVar7 = *(ulong *)(unaff_x20 + 0x18);
  alStack_b8[0] = (long)*(int *)(lVar3 + 0x14);
  alStack_b8[1] = param_2;
  FUN_1025f4828(param_2,(long)puVar11 + alStack_b8[0],&SUB_1042dddf8);
  puVar5 = PTR_PTR_1126afec0;
  func_0x000107c61168(PTR_PTR_1126afec0);
  uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112eae300);
  func_0x000107c61434(uVar7);
  func_0x000107c3ceac(uVar12);
  func_0x000107c51b38(puVar5);
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1025f37fc);
    (*pcVar2)();
  }
  if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1025f3800);
    (*pcVar2)();
  }
  if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1025f3804);
    (*pcVar2)();
  }
  *puVar11 = uVar10;
  puVar11[1] = uVar7;
  *(long *)((long)puVar11 + (long)*(int *)(lVar4 + 0x18)) = (long)param_1;
  FUN_1025f4828(alStack_b8[1],lVar8,&SUB_1042dddf8);
  lVar3 = lVar8;
  func_0x000107c614c4(lVar8,alStack_b8[2]);
  if ((int)lVar3 == 2) {
    FUN_1025f48c8(lVar8,&SUB_1042dddf8);
LAB_1025f35c0:
    *(undefined1 *)(unaff_x20 + _DAT_112eae2d8) = 1;
  }
  else if ((int)lVar3 == 1) {
    uVar12 = *(undefined8 *)(lVar8 + 8);
    bVar1 = *(byte *)(lVar8 + 0x10);
    func_0x000107c6142c(*(undefined8 *)(lVar8 + 0x18));
    func_0x000107c6142c(uVar12);
    if ((bVar1 & 1) != 0) goto LAB_1025f35c0;
  }
  else {
    FUN_1025f48c8(lVar8,&SUB_1042dddf8);
  }
  lVar3 = _DAT_112eae2e0;
  func_0x000107c61428(unaff_x20 + _DAT_112eae2e0,auStack_88,1,0);
  lVar8 = *(long *)(*(long *)(unaff_x20 + lVar3) + 0x10);
  if (lVar8 != 0) {
    FUN_1025f4828(*(long *)(unaff_x20 + lVar3) +
                  ((ulong)*(byte *)(lVar13 + 0x50) + 0x20 &
                  ((ulong)*(byte *)(lVar13 + 0x50) ^ 0xffffffffffffffff)) +
                  *(long *)(lVar13 + 0x48) * (lVar8 + -1),puVar9,&SUB_1042dde50);
    uVar6 = *puVar9;
    if (((uVar6 == uVar10) && (puVar9[1] == uVar7)) ||
       (func_0x000107c605b8(uVar6,puVar9[1],uVar10,uVar7,0), (uVar6 & 1) != 0)) {
      uVar10 = (long)puVar9 + (long)*(int *)(lVar4 + 0x14);
      func_0x0001042dd028(uVar10,(long)puVar11 + alStack_b8[0]);
      if ((uVar10 & 1) != 0) {
        FUN_1025f48c8(puVar9,&SUB_1042dde50);
        goto LAB_1025f37c4;
      }
    }
    FUN_1025f48c8(puVar9,&SUB_1042dde50);
  }
  puVar9 = puVar11;
  func_0x0001025f3d3c();
  if ((((ulong)puVar9 & 1) != 0) &&
     ((FUN_1025f3804(), ((ulong)puVar9 & 1) != 0 || (FUN_1025f3a38(), ((ulong)puVar9 & 1) != 0)))) {
    FUN_1025f3fd8();
    uVar10 = auStack_d0[1];
    FUN_1025f4828(alStack_b8[1],auStack_d0[1],&SUB_1042dddf8);
    uVar7 = uVar10;
    func_0x000107c614c4(uVar10,alStack_b8[2]);
    if ((int)uVar7 != 9) {
      FUN_1025f48c8(uVar10,&SUB_1042dddf8);
    }
    uVar10 = uStack_c0;
    FUN_1025f4828(alStack_b8[1],uStack_c0,&SUB_1042dddf8);
    uVar6 = uVar10;
    func_0x000107c614c4(uVar10,alStack_b8[2]);
    if ((int)uVar6 == 9) {
      uStack_90 = 0xd;
    }
    else {
      FUN_1025f48c8(uVar10,&SUB_1042dddf8);
      func_0x0001025f3ba8();
      uStack_90 = 0xe;
      if ((uVar10 & 1) == 0) {
        uStack_90 = 0xc;
      }
    }
    uStack_98 = (int)uVar7 == 9;
    uVar10 = *(ulong *)(unaff_x20 + _DAT_112eae2e8);
    dStack_a0 = param_1;
    func_0x000107c6157c(uVar10);
    func_0x0001002a64a8(&dStack_a0);
    func_0x000107c61574();
    func_0x0001025f3ba8();
    if ((uVar10 & 1) != 0) {
      uVar12 = *(undefined8 *)(unaff_x20 + lVar3);
      *(undefined **)(unaff_x20 + lVar3) = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000107c6142c(uVar12);
    }
  }
LAB_1025f37c4:
  FUN_1025f48c8(puVar11,&SUB_1042dde50);
  return;
}



/* Entry: 1025f3804; end: 1025f3a37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1025f3804(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long lVar7;
  uint uVar8;
  long unaff_x20;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  ulong uVar13;
  long lVar14;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  lVar2 = 0;
  func_0x0001042dddf8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar12 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x0001042dde50();
  lVar14 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar1 = _DAT_112eae2e0;
  lVar7 = (long)puVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(unaff_x20 + _DAT_112eae2e0,auStack_68,0,0);
  lVar10 = *(long *)(unaff_x20 + lVar1);
  if (*(long *)(lVar10 + 0x10) == 0) {
    uVar8 = 0;
  }
  else {
    FUN_1025f4828(lVar10 + ((ulong)*(byte *)(lVar14 + 0x50) + 0x20 &
                           ((ulong)*(byte *)(lVar14 + 0x50) ^ 0xffffffffffffffff)) +
                  *(long *)(lVar14 + 0x48) * (*(long *)(lVar10 + 0x10) + -1),lVar7,&SUB_1042dde50);
    FUN_1025f4828(lVar7 + *(int *)(lVar3 + 0x14),puVar12,&SUB_1042dddf8);
    puVar4 = puVar12;
    func_0x000107c614c4(puVar12,lVar2);
    lVar2 = _DAT_112eae2f0;
    if ((int)puVar4 == 9) {
      uVar13 = *(ulong *)(unaff_x20 + _DAT_112eae2f0);
      func_0x000107c61434(lVar10);
      func_0x000107c5b0f0();
      func_0x000107c61180();
      uVar5 = uVar13;
      func_0x000107c5fc54();
      func_0x000107c61170(uVar13);
      uVar13 = uVar5;
      FUN_1025f5064(uVar5,lVar10);
      func_0x000107c6142c(lVar10);
      func_0x000107c6142c(uVar5);
      if (((uVar13 & 1) == 0) && ((*(byte *)(unaff_x20 + _DAT_112eae2d8) & 1) == 0)) {
        uVar11 = *(undefined8 *)(unaff_x20 + lVar1);
        uVar9 = *(undefined8 *)(unaff_x20 + lVar2);
        func_0x000107c61434(uVar11);
        func_0x000107c43544(uVar9);
        func_0x000107c61180();
        uVar6 = uVar9;
        func_0x000107c5fc54();
        func_0x000107c61170(uVar9);
        uVar9 = uVar6;
        FUN_1025f53f8(uVar6,uVar11);
        uVar8 = (uint)uVar9;
        func_0x000107c6142c(uVar11);
        func_0x000107c6142c(uVar6);
      }
      else {
        uVar8 = 1;
      }
    }
    else {
      FUN_1025f48c8(puVar12,&SUB_1042dddf8);
      uVar8 = 0;
    }
    FUN_1025f48c8(lVar7,&SUB_1042dde50);
  }
  return uVar8 & 1;
}



/* Entry: 1025f3a38; end: 1025f3ba7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1025f3a38(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  uint uVar7;
  long extraout_x8;
  long lVar8;
  long unaff_x20;
  long lVar9;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  lVar2 = 0;
  func_0x0001042dde50();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  if (*(char *)(unaff_x20 + _DAT_112eae2d8) == '\x01') {
    lVar8 = unaff_x20 + _DAT_113804740;
    lVar3 = 0;
    func_0x0001042e75b8();
    lVar1 = _DAT_112eae2e0;
    if ((*(byte *)(lVar8 + *(int *)(lVar3 + 0x1c)) & 1) == 0) {
      func_0x000107c61428(unaff_x20 + _DAT_112eae2e0,auStack_58,0,0);
      lVar8 = *(long *)(*(long *)(unaff_x20 + lVar1) + 0x10);
      if (lVar8 != 0) {
        FUN_1025f4828(*(long *)(unaff_x20 + lVar1) +
                      ((ulong)*(byte *)(lVar9 + 0x50) + 0x20 &
                      ((ulong)*(byte *)(lVar9 + 0x50) ^ 0xffffffffffffffff)) +
                      *(long *)(lVar9 + 0x48) * (lVar8 + -1),
                      auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),&SUB_1042dde50);
        uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112eae2f0);
        func_0x000107c5b0f4(uVar4);
        func_0x000107c61180();
        uVar5 = uVar4;
        puVar6 = PTR___sSSN_11034da80;
        func_0x000107c5fc54();
        func_0x000107c61170(uVar4);
        uVar7 = (uint)uVar4;
        func_0x0001042dd02c((long)*(int *)(lVar2 + 0x14));
        func_0x000100077018();
        func_0x000107c6142c(uVar5);
        func_0x000107c6142c(puVar6);
        FUN_1025f48c8(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),&SUB_1042dde50);
        uVar7 = uVar7 ^ 1;
        goto LAB_1025f3b8c;
      }
    }
  }
  uVar7 = 0;
LAB_1025f3b8c:
  return uVar7 & 1;
}



/* Entry: 1025f3ba8; end: 1025f3fd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1025f3ba8(void)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long lVar5;
  long lVar6;
  long lVar7;
  long unaff_x20;
  undefined1 *puVar8;
  long lVar9;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  lVar1 = 0;
  func_0x0001042dddf8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar8 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x0001042dde50();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar4 = _DAT_112eae2e0;
  lVar7 = (long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(unaff_x20 + _DAT_112eae2e0,auStack_68,0,0);
  lVar5 = *(long *)(unaff_x20 + lVar4);
  lVar6 = *(long *)(lVar5 + 0x10);
  if (lVar6 != 0) {
    FUN_1025f4828(lVar5 + ((ulong)*(byte *)(lVar9 + 0x50) + 0x20 &
                          ((ulong)*(byte *)(lVar9 + 0x50) ^ 0xffffffffffffffff)) +
                  *(long *)(lVar9 + 0x48) * (lVar6 + -1),lVar7,&SUB_1042dde50);
    FUN_1025f4828(lVar7 + *(int *)(lVar2 + 0x14),puVar8,&SUB_1042dddf8);
    puVar3 = puVar8;
    func_0x000107c614c4(puVar8,lVar1);
    if ((int)puVar3 != 9) {
      FUN_1025f48c8(puVar8,&SUB_1042dddf8);
      lVar1 = _DAT_112eae2f0;
      lVar2 = *(long *)(unaff_x20 + _DAT_112eae2f0);
      func_0x000107c502d8();
      if (0 < lVar2) {
        lVar2 = *(long *)(*(long *)(unaff_x20 + lVar4) + 0x10);
        lVar4 = *(long *)(unaff_x20 + lVar1);
        func_0x000107c502d8(lVar4);
        FUN_1025f48c8(lVar7,&SUB_1042dde50);
        return lVar4 <= lVar2;
      }
    }
    FUN_1025f48c8(lVar7,&SUB_1042dde50);
  }
  return false;
}



/* Entry: 1025f3fd8; end: 1025f418b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1025f3fd8(double param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined1 *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long lVar8;
  long lVar9;
  long unaff_x20;
  undefined1 *puVar10;
  long lVar11;
  double dVar12;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  
  lVar4 = 0;
  func_0x0001042dddf8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  puVar10 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  func_0x0001042dde50();
  lVar11 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar2 = _DAT_112eae2f0;
  lVar9 = (long)puVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar6 = *(ulong *)(unaff_x20 + _DAT_112eae2f0);
  func_0x000107c502dc();
  dVar12 = 0.0;
  if (param_1 <= 0.0) {
    return 0.0;
  }
  FUN_1025f3ba8();
  lVar1 = _DAT_112eae2e0;
  if ((uVar6 & 1) != 0) {
    return 0.0;
  }
  func_0x000107c61428(unaff_x20 + _DAT_112eae2e0,auStack_78,0,0);
  lVar8 = *(long *)(*(long *)(unaff_x20 + lVar1) + 0x10);
  if (lVar8 == 0) {
    return 0.0;
  }
  FUN_1025f4828(*(long *)(unaff_x20 + lVar1) +
                ((ulong)*(byte *)(lVar11 + 0x50) + 0x20 &
                ((ulong)*(byte *)(lVar11 + 0x50) ^ 0xffffffffffffffff)) +
                *(long *)(lVar11 + 0x48) * (lVar8 + -1),lVar9,&SUB_1042dde50);
  FUN_1025f4828(lVar9 + *(int *)(lVar5 + 0x14),puVar10,&SUB_1042dddf8);
  puVar7 = puVar10;
  func_0x000107c614c4(puVar10,lVar4);
  iVar3 = (int)puVar7;
  if (iVar3 < 9) {
    if (iVar3 != 1 && iVar3 != 3) {
LAB_1025f413c:
      FUN_1025f48c8(puVar10,&SUB_1042dddf8);
      func_0x000107c502dc(*(undefined8 *)(unaff_x20 + lVar2));
      dVar12 = param_1;
      goto LAB_1025f4158;
    }
  }
  else {
    if (iVar3 == 9) goto LAB_1025f4158;
    if (iVar3 != 10) goto LAB_1025f413c;
  }
  FUN_1025f48c8(puVar10,&SUB_1042dddf8);
LAB_1025f4158:
  FUN_1025f48c8(lVar9,&SUB_1042dde50);
  return dVar12;
}



/* Entry: 1025f418c; end: 1025f4253;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025f418c(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  FUN_1025f48c8(unaff_x20 + _DAT_113804740,&SUB_1042e75b8);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + _DAT_112eae2d0));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + _DAT_112eae2e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + _DAT_112eae2e8));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + _DAT_112eae2f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + _DAT_112eae2f8));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + _DAT_112eae300));
  func_0x0001000834e4(unaff_x20 + _DAT_112eae308);
  return;
}


