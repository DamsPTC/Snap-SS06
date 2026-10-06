/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103b12fe0; end: 103b1301f;  */

undefined8 FUN_103b12fe0(void)

{
  if (lRam000000011358adc0 != -1) {
    func_0x000107c61568(0x11358adc0,FUN_103b12f90);
  }
  return 0x11380cd40;
}



/* Entry: 103b13020; end: 103b1306f;  */

void FUN_103b13020(void)

{
  undefined8 uVar1;
  
  func_0x000100bd658c(0);
  func_0x000107c610f8();
  uVar1 = 0xd00000000000001c;
  func_0x000100bd65fc(0xd00000000000001c,0x800000010f19ef40,0);
  uRam000000011380cd48 = uVar1;
  return;
}



/* Entry: 103b13070; end: 103b130af;  */

undefined8 FUN_103b13070(void)

{
  if (lRam000000011358adc8 != -1) {
    func_0x000107c61568(0x11358adc8,FUN_103b13020);
  }
  return 0x11380cd48;
}



/* Entry: 103b130b0; end: 103b130ff;  */

void FUN_103b130b0(void)

{
  undefined8 uVar1;
  
  func_0x000100bd658c(0);
  func_0x000107c610f8();
  uVar1 = 0xd000000000000027;
  func_0x000100bd65fc(0xd000000000000027,0x800000010f19ef10,0);
  uRam000000011380cd50 = uVar1;
  return;
}



/* Entry: 103b13100; end: 103b1311b; +[_TtC32ContentSDNPrefetchExperimentKeys32ContentSDNPrefetchExperimentKeys fsBypassMetadataFetchOnTapTTL] */

void FUN_103b13100(void)

{
  if (lRam000000011358add0 != -1) {
    func_0x000107c61568(0x11358add0,FUN_103b130b0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011380cd50);
  return;
}



/* Entry: 103b1311c; end: 103b1316b;  */

void FUN_103b1311c(void)

{
  undefined8 uVar1;
  
  func_0x000100bd658c(0);
  func_0x000107c610f8();
  uVar1 = 0xd00000000000002c;
  func_0x000100bd65fc(0xd00000000000002c,0x800000010f19eee0,0);
  uRam000000011380cd58 = uVar1;
  return;
}



/* Entry: 103b1316c; end: 103b13187; +[_TtC32ContentSDNPrefetchExperimentKeys32ContentSDNPrefetchExperimentKeys nfsUGCBypassMetadataFetchOnTapTTL] */

void FUN_103b1316c(void)

{
  if (lRam000000011358add8 != -1) {
    func_0x000107c61568(0x11358add8,FUN_103b1311c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011380cd58);
  return;
}



/* Entry: 103b13188; end: 103b131d7;  */

void FUN_103b13188(void)

{
  undefined8 uVar1;
  
  func_0x000100bd658c(0);
  func_0x000107c610f8();
  uVar1 = 0xd00000000000002c;
  func_0x000100bd65fc(0xd00000000000002c,0x800000010f19eeb0,0);
  uRam000000011380cd60 = uVar1;
  return;
}



/* Entry: 103b131d8; end: 103b131f3; +[_TtC32ContentSDNPrefetchExperimentKeys32ContentSDNPrefetchExperimentKeys nfsPGCBypassMetadataFetchOnTapTTL] */

void FUN_103b131d8(void)

{
  if (lRam000000011358ade0 != -1) {
    func_0x000107c61568(0x11358ade0,FUN_103b13188);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011380cd60);
  return;
}



/* Entry: 103b131f4; end: 103b13237;  */

void FUN_103b131f4(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  if (*param_3 == -1) {
    uVar1 = *param_4;
  }
  else {
    func_0x000107c61568(param_3,param_5);
    uVar1 = *param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uVar1);
  return;
}



/* Entry: 103b13238; end: 103b13273; -[_TtC32ContentSDNPrefetchExperimentKeys32ContentSDNPrefetchExperimentKeys init] */

void FUN_103b13238(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b13274; end: 103b132a7;  */

void FUN_103b13274(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b132a8; end: 103b132ab; -[_TtC32ContentSDNPrefetchExperimentKeys32ContentSDNPrefetchExperimentKeys .cxx_destruct] */

void FUN_103b132a8(void)

{
  return;
}



/* Entry: 103b132ac; end: 103b132cb;  */

void FUN_103b132ac(void)

{
  func_0x000107c61168(&PTR_PTR_112929798);
  return;
}



/* Entry: 103b132cc; end: 103b132d7; -[_TtC30SCOurStoryDeepLinkHandlerScope30SCOurStoryDeepLinkHandlerScope deepLinkURL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b132cc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112fec110);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112fec110))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b132d8; end: 103b132e3; -[_TtC30SCOurStoryDeepLinkHandlerScope30SCOurStoryDeepLinkHandlerScope snapId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b132d8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112fec118);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112fec118))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b132e4; end: 103b1332b;  */

void FUN_103b132e4(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b1332c; end: 103b13387; -[_TtC30SCOurStoryDeepLinkHandlerScope30SCOurStoryDeepLinkHandlerScope additionalInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b1332c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112fec120);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5f9dc();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103b13388; end: 103b13397; -[_TtC30SCOurStoryDeepLinkHandlerScope30SCOurStoryDeepLinkHandlerScope isSingleSpotlightSnap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103b13388(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112fec128);
}



/* Entry: 103b13398; end: 103b133a7; -[_TtC30SCOurStoryDeepLinkHandlerScope30SCOurStoryDeepLinkHandlerScope pageType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103b13398(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112fec130);
}



/* Entry: 103b133a8; end: 103b133ef; -[_TtC30SCOurStoryDeepLinkHandlerScope30SCOurStoryDeepLinkHandlerScope scopeDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b133a8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fec138;
  func_0x000107c61428(param_1 + _DAT_112fec138,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b133f0; end: 103b13447; -[_TtC30SCOurStoryDeepLinkHandlerScope30SCOurStoryDeepLinkHandlerScope setScopeDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b133f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fec138;
  func_0x000107c61428(param_1 + _DAT_112fec138,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103b13448; end: 103b13457; -[_TtC30SCOurStoryDeepLinkHandlerScope30SCOurStoryDeepLinkHandlerScope commentsDefaultTab] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_103b13448(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_112fec140);
}



/* Entry: 103b13458; end: 103b13467; -[_TtC30SCOurStoryDeepLinkHandlerScope30SCOurStoryDeepLinkHandlerScope baseView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b13458(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fec148));
  return;
}



/* Entry: 103b13468; end: 103b13477; -[_TtC30SCOurStoryDeepLinkHandlerScope30SCOurStoryDeepLinkHandlerScope storyPlayerModerationData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b13468(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fec150));
  return;
}



/* Entry: 103b13478; end: 103b134cb; -[_TtC30SCOurStoryDeepLinkHandlerScope30SCOurStoryDeepLinkHandlerScope prependedCommentIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b13478(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_112fec158);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c61434(lVar1);
    func_0x000107c5fc48();
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 103b134cc; end: 103b134d7; -[_TtC30SCOurStoryDeepLinkHandlerScope30SCOurStoryDeepLinkHandlerScope hashtag] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b134cc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112fec160))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112fec160);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b134d8; end: 103b134e3; -[_TtC30SCOurStoryDeepLinkHandlerScope30SCOurStoryDeepLinkHandlerScope musicId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b134d8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112fec168))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112fec168);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b134e4; end: 103b1353b;  */

void FUN_103b134e4(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b1353c; end: 103b136ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103b1353c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
             undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_90 [8];
  undefined1 auStack_80 [32];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112fec138;
  func_0x000107c61614(unaff_x20 + _DAT_112fec138,0);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fec110);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fec118);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112fec120) = param_5;
  *(undefined1 *)(unaff_x20 + _DAT_112fec128) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112fec130) = param_7;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_80,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_8);
  *(undefined4 *)(unaff_x20 + _DAT_112fec140) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112fec148) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_112fec150) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_112fec158) = param_13;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fec160);
  *puVar1 = param_14;
  puVar1[1] = param_15;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fec168);
  *puVar1 = param_16;
  puVar1[1] = param_17;
  puVar3 = auStack_90;
  func_0x000107c61154(puVar3,PTR_s_init_1125d9248);
  func_0x000107c615e8(param_8);
  return puVar3;
}



/* Entry: 103b136f0; end: 103b1374f;  */

undefined8 FUN_103b136f0(undefined8 param_1)

{
  undefined8 in_x7;
  
  FUN_103b139cc();
  func_0x000107c615e8(in_x7);
  return param_1;
}



/* Entry: 103b13750; end: 103b138b3; -[_TtC30SCOurStoryDeepLinkHandlerScope30SCOurStoryDeepLinkHandlerScope initWithDeepLinkURL:snapId:additionalInfo:isSingleSpotlightSnap:pageType:scopeDelegate:commentsDefaultTab:baseView:storyPlayerModerationData:prependedCommentIds:hashtag:musicId:] */

undefined8
FUN_103b13750(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
             undefined4 param_9)

{
  undefined8 uVar1;
  long in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  
  func_0x000107c5faec();
  uVar1 = param_2;
  func_0x000107c5faec();
  func_0x000107c5f9e8(param_5,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  if (in_stack_00000018 != 0) {
    func_0x000107c5fc54();
  }
  if (in_stack_00000020 != 0) {
    func_0x000107c5faec();
  }
  if (in_stack_00000028 != 0) {
    func_0x000107c5faec();
  }
  func_0x000107c615f0(param_8);
  func_0x000107c61174();
  func_0x000107c61174();
  FUN_103b139cc(param_3,param_2,param_4,uVar1,param_5,param_6,param_7,param_8,param_9);
  func_0x000107c615e8(param_8);
  return param_3;
}



/* Entry: 103b138b4; end: 103b13913; -[_TtC30SCOurStoryDeepLinkHandlerScope30SCOurStoryDeepLinkHandlerScope init] */

void FUN_103b138b4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCOurStoryDeepLinkHandlerScope.SCOurStoryDeepLinkHandlerScope",0x3d,"init()",
                      6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b138e0);
  (*pcVar1)();
}



/* Entry: 103b13914; end: 103b139cb; -[_TtC30SCOurStoryDeepLinkHandlerScope30SCOurStoryDeepLinkHandlerScope .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103b13934: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b13958: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b13998: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b1395c) */
/* WARNING: Removing unreachable block (ram,0x000103b13938) */
/* WARNING: Removing unreachable block (ram,0x000103b1399c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b13914(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112fec110 + 8))
  ;
  return;
}



/* Entry: 103b139cc; end: 103b13b63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b139cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17)

{
  undefined8 *puVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_80 [32];
  
  func_0x000107c614f0();
  lVar2 = _DAT_112fec138;
  func_0x000107c61614(unaff_x20 + _DAT_112fec138,0);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fec110);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fec118);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112fec120) = param_5;
  *(undefined1 *)(unaff_x20 + _DAT_112fec128) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112fec130) = param_7;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_80,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_8);
  *(undefined4 *)(unaff_x20 + _DAT_112fec140) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112fec148) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_112fec150) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_112fec158) = param_13;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fec160);
  *puVar1 = param_14;
  puVar1[1] = param_15;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fec168);
  *puVar1 = param_16;
  puVar1[1] = param_17;
  func_0x000107c61154(&stack0xffffffffffffff70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b13b64; end: 103b13b87;  */

undefined8 FUN_103b13b64(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 103b13b88; end: 103b13ba7;  */

void FUN_103b13b88(void)

{
  func_0x000107c61168(&PTR_PTR_112929848);
  return;
}



/* Entry: 103b13ba8; end: 103b13bbb;  */

void FUN_103b13ba8(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1106d3698;
  if (lRam0000000112fec198 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112fec198 = param_1;
  }
  return;
}



/* Entry: 103b13bbc; end: 103b13bff;  */

void FUN_103b13bbc(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 103b13c00; end: 103b13c0b;  */

undefined * FUN_103b13c00(void)

{
  return &UNK_1106d3768;
}



/* Entry: 103b13c0c; end: 103b13c37; +[SCSpotlightWidgetPluginEvents preloadSpotlightPreview] */

void FUN_103b13c0c(void)

{
  func_0x000107c5fadc(0xd000000000000038,0x800000010f19efc0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b13c38; end: 103b13c3b; -[SCSpotlightWidgetPluginEvents .cxx_destruct] */

void FUN_103b13c38(void)

{
  return;
}



/* Entry: 103b13c3c; end: 103b13c67; +[SCSpotlightWidgetPluginEventDictKeys snapPreview] */

void FUN_103b13c3c(void)

{
  func_0x000107c5fadc(0xd00000000000002f,0x800000010f19f000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b13c68; end: 103b13c73;  */

undefined * FUN_103b13c68(void)

{
  return &UNK_1106d3778;
}



/* Entry: 103b13c74; end: 103b13c9f; +[SCSpotlightWidgetPluginEventDictKeys spotlightPreviewData] */

void FUN_103b13c74(void)

{
  func_0x000107c5fadc(0xd000000000000038,0x800000010f19f030);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b13ca0; end: 103b13ca3; -[SCSpotlightWidgetPluginEventDictKeys init] */

void FUN_103b13ca0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b13ca4; end: 103b13cdf;  */

void FUN_103b13ca4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b13ce0; end: 103b13ce3;  */

void FUN_103b13ce0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b13ce4; end: 103b13d17;  */

void FUN_103b13ce4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b13d18; end: 103b13d1b; -[SCSpotlightWidgetPluginEventDictKeys .cxx_destruct] */

void FUN_103b13d18(void)

{
  return;
}



/* Entry: 103b13d1c; end: 103b13d5b;  */

void FUN_103b13d1c(void)

{
  func_0x000107c61168(&PTR_PTR_112929960);
  return;
}



/* Entry: 103b13d5c; end: 103b13d63; -[SCSpotlightWidgetPluginEvents init] */

void FUN_103b13d5c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b13d64; end: 103b13d87;  */

void FUN_103b13d64(undefined8 *param_1,undefined8 param_2)

{
  FUN_103ee3c34();
  *param_1 = param_2;
  return;
}



/* Entry: 103b13d88; end: 103b13d9f;  */

undefined1  [16] FUN_103b13d88(ulong param_1,long param_2)

{
  long *plVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined2 uVar9;
  code *pcVar10;
  long *plVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong *puVar14;
  long *plVar15;
  ulong *puVar16;
  long extraout_x8;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long *plVar22;
  long *plVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  ulong auStack_110 [6];
  undefined8 uStack_e0;
  long alStack_d8 [2];
  uint uStack_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  ulong *puStack_b0;
  long *plStack_a8;
  ulong *puStack_a0;
  long *plStack_98;
  ulong *puStack_90;
  long lStack_88;
  ulong *puStack_80;
  ulong uStack_78;
  ulong uStack_70;
  long lStack_68;
  
  uVar17 = param_1;
  (**(code **)(param_2 + 0x18))();
  (**(code **)(param_2 + 0x30))(param_1,param_2);
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar11 = (long *)0x0;
  __s10Foundation4UUIDVMa();
  lVar21 = plVar11[-1];
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar21 + 0x40));
  lVar20 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  plVar22 = (long *)((long)alStack_d8 + lVar20 + 8);
  uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
  uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
  uStack_70 = uVar17 >> 0x20 | uVar17 << 0x20;
  uVar17 = (param_1 & 0xff00ff00ff00ff00) >> 8 | (param_1 & 0xff00ff00ff00ff) << 8;
  uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
  uStack_78 = uVar17 >> 0x20 | uVar17 << 0x20;
  puVar12 = &uStack_70;
  plVar15 = &lStack_68;
  func_0x000100e36f4c();
  puVar13 = &uStack_78;
  puVar16 = &uStack_70;
  func_0x000100e36f4c();
  func_0x00010006c00c(puVar12,(ulong)plVar15 & 0xffffffffffffff);
  puVar14 = puVar12;
  func_0x0001018e4e30(puVar12,(ulong)plVar15 & 0xffffffffffffff);
  func_0x00010006c00c(puVar13,(ulong)puVar16 & 0xffffffffffffff);
  func_0x0001018e4e30(puVar13,(ulong)puVar16 & 0xffffffffffffff);
  puStack_80 = puVar14;
  FUN_103ee3b44();
  uVar17 = puStack_80[2];
  if (uVar17 == 0) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x103ee3b04);
    (*pcVar10)();
  }
  if (uVar17 == 1) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x103ee3b08);
    (*pcVar10)();
  }
  if (uVar17 < 3) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x103ee3b0c);
    (*pcVar10)();
  }
  if (uVar17 == 3) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x103ee3b10);
    (*pcVar10)();
  }
  if (uVar17 < 5) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x103ee3b14);
    (*pcVar10)();
  }
  if (uVar17 == 5) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x103ee3b18);
    (*pcVar10)();
  }
  if (uVar17 < 7) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x103ee3b1c);
    (*pcVar10)();
  }
  if (uVar17 == 7) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x103ee3b20);
    (*pcVar10)();
  }
  if (uVar17 < 9) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x103ee3b24);
    (*pcVar10)();
  }
  if (uVar17 == 9) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x103ee3b28);
    (*pcVar10)();
  }
  if (uVar17 < 0xb) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x103ee3b2c);
    (*pcVar10)();
  }
  if (uVar17 == 0xb) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x103ee3b30);
    (*pcVar10)();
  }
  if (uVar17 < 0xd) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x103ee3b34);
    (*pcVar10)();
  }
  if (uVar17 == 0xd) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x103ee3b38);
    (*pcVar10)();
  }
  if (uVar17 < 0xf) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x103ee3b3c);
    (*pcVar10)();
  }
  if (uVar17 != 0xf) {
    uStack_b8 = (uint)*(byte *)((long)puStack_80 + 0x21);
    uStack_b4 = (uint)(byte)puStack_80[4];
    uStack_c0 = (uint)*(byte *)((long)puStack_80 + 0x23);
    uStack_bc = (uint)*(byte *)((long)puStack_80 + 0x22);
    uStack_c8 = (uint)*(byte *)((long)puStack_80 + 0x25);
    uStack_c4 = (uint)*(byte *)((long)puStack_80 + 0x24);
    bVar2 = *(byte *)((long)puStack_80 + 0x26);
    bVar3 = *(byte *)((long)puStack_80 + 0x27);
    uVar17 = puStack_80[5];
    bVar4 = *(byte *)((long)puStack_80 + 0x29);
    bVar5 = *(byte *)((long)puStack_80 + 0x2a);
    uVar6 = *(undefined1 *)((long)puStack_80 + 0x2b);
    uVar7 = *(undefined1 *)((long)puStack_80 + 0x2c);
    uVar8 = *(undefined1 *)((long)puStack_80 + 0x2d);
    uVar9 = *(undefined2 *)((long)puStack_80 + 0x2e);
    puStack_b0 = puVar12;
    plStack_a8 = plVar15;
    puStack_a0 = puVar16;
    plStack_98 = plVar11;
    puStack_90 = puVar13;
    lStack_88 = lVar21;
    _swift_bridgeObjectRelease();
    *(undefined2 *)((long)&uStack_e0 + lVar20 + 6) = uVar9;
    *(undefined1 *)((long)&uStack_e0 + lVar20 + 5) = uVar8;
    *(undefined1 *)((long)&uStack_e0 + lVar20 + 4) = uVar7;
    *(undefined1 *)((long)&uStack_e0 + lVar20 + 3) = uVar6;
    *(byte *)((long)&uStack_e0 + lVar20 + 2) = bVar5;
    *(byte *)((long)&uStack_e0 + lVar20 + 1) = bVar4;
    *(char *)((long)&uStack_e0 + lVar20) = (char)uVar17;
    uVar17 = (ulong)uStack_b8;
    uVar18 = (ulong)uStack_b4;
    __s10Foundation4UUIDV4uuidACs5UInt8V_A15Ft_tcfC
              (plVar22,uVar18,uVar17,uStack_bc,uStack_c0,uStack_c4,uStack_c8,(ulong)bVar2,
               (ulong)bVar3);
    __s10Foundation4UUIDV10uuidStringSSvg();
    func_0x00010006c090(puStack_b0,(ulong)plStack_a8 & 0xffffffffffffff);
    func_0x00010006c090(puStack_90,(ulong)puStack_a0 & 0xffffffffffffff);
    plVar11 = plVar22;
    plVar15 = plStack_98;
    (**(code **)(lStack_88 + 8))(plVar22,plStack_98);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      auVar24._8_8_ = uVar17;
      auVar24._0_8_ = uVar18;
      return auVar24;
    }
    ___stack_chk_fail();
    *(ulong *)((long)auStack_110 + lVar20) = (ulong)bVar3;
    *(ulong *)((long)auStack_110 + lVar20 + 8) = (ulong)bVar2;
    *(ulong *)((long)auStack_110 + lVar20 + 0x10) = (ulong)bVar5;
    *(ulong *)((long)auStack_110 + lVar20 + 0x18) = (ulong)bVar4;
    *(long **)((long)auStack_110 + lVar20 + 0x20) = plVar22;
    *(ulong *)((long)auStack_110 + lVar20 + 0x28) = uVar18;
    *(undefined1 **)((long)&uStack_e0 + lVar20) = &stack0xfffffffffffffff0;
    *(code **)((long)alStack_d8 + lVar20) = FUN_103ee3b44;
    uVar17 = plVar11[2];
    lVar20 = *plVar22;
    plVar23 = *(long **)(lVar20 + 0x10);
    plVar1 = (long *)((long)plVar23 + uVar17);
    if (!SCARRY8((long)plVar23,uVar17)) {
      lVar21 = lVar20;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((int)lVar21 == 0) ||
         (uVar18 = *(ulong *)(lVar20 + 0x18) >> 1, (long)uVar18 < (long)plVar1)) {
        plVar15 = plVar23;
        if ((long)plVar23 <= (long)plVar1) {
          plVar15 = plVar1;
        }
        func_0x0001014d97ac();
        uVar18 = *(ulong *)(lVar21 + 0x18) >> 1;
        lVar19 = plVar11[2];
        lVar20 = lVar21;
      }
      else {
        lVar19 = plVar11[2];
      }
      if (lVar19 == 0) {
        _swift_bridgeObjectRelease(plVar11);
        if (uVar17 != 0) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x103ee3c2c);
          (*pcVar10)();
        }
      }
      else {
        if (uVar18 - *(long *)(lVar20 + 0x10) < uVar17) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x103ee3c30);
          (*pcVar10)();
        }
        plVar15 = plVar11 + 4;
        _memcpy(lVar20 + *(long *)(lVar20 + 0x10) + 0x20,plVar15,uVar17);
        _swift_bridgeObjectRelease(plVar11);
        if (uVar17 != 0) {
          if (SCARRY8(*(long *)(lVar20 + 0x10),uVar17)) {
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x103ee3c34);
            (*pcVar10)();
          }
          *(ulong *)(lVar20 + 0x10) = *(long *)(lVar20 + 0x10) + uVar17;
        }
      }
      *plVar22 = lVar20;
      auVar25._8_8_ = plVar15;
      auVar25._0_8_ = plVar11;
      return auVar25;
    }
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x103ee3c28);
    (*pcVar10)();
  }
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x103ee3b40);
  (*pcVar10)();
}



/* Entry: 103b13da0; end: 103b13dd7;  */

undefined1  [16] FUN_103b13da0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auVar2 [16];
  
  uVar1 = *unaff_x20;
  param_1[1] = uVar1;
  func_0x000107c44e64();
  *param_1 = uVar1;
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = FUN_103b13dd8;
  return auVar2;
}



/* Entry: 103b13dd8; end: 103b13df7;  */

void FUN_103b13dd8(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a85b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1[1],PTR_s_setHighBits__112647b88,*param_1);
  return;
}



/* Entry: 103b13df8; end: 103b13e2f;  */

undefined1  [16] FUN_103b13df8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auVar2 [16];
  
  uVar1 = *unaff_x20;
  param_1[1] = uVar1;
  func_0x000107c4c0fc();
  *param_1 = uVar1;
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = FUN_103b13e30;
  return auVar2;
}



/* Entry: 103b13e30; end: 103b13e3b;  */

void FUN_103b13e30(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1c0ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1[1],PTR_s_setLowBits__11264de20,*param_1);
  return;
}



/* Entry: 103b13e3c; end: 103b13f43;  */

uint FUN_103b13e3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  long unaff_x20;
  long lStack_48;
  
  func_0x000107c4cd38();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lStack_48 = 0;
    uVar2 = 0;
    FUN_103b14b58(0,0x112dc0130,&PTR_PTR_1126afad0);
    func_0x000107c5fc50(unaff_x20,&lStack_48,uVar2);
    func_0x000107c61170(unaff_x20);
    lVar1 = lStack_48;
    if (lStack_48 != 0) {
      func_0x000107c61434(param_2);
      FUN_103ee3c34(param_1,param_2,uVar2,&PTR_DAT_1106d3830);
      if (param_1 == 0) {
        uVar4 = 0;
      }
      else {
        lVar3 = param_1;
        FUN_103b14430();
        uVar4 = (uint)lVar3;
        func_0x000107c61170(param_1);
      }
      FUN_103b1476c(param_3,lVar1);
      func_0x000107c6142c(lVar1);
      uVar4 = uVar4 | (uint)param_3;
      goto LAB_103b13f28;
    }
  }
  uVar4 = 0;
LAB_103b13f28:
  return uVar4 & 1;
}



/* Entry: 103b13f44; end: 103b13fcb; -[SCCTXContextClientInfo canRepostSnapForUserId:profilesProvider:] */

uint FUN_103b13f44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  uVar1 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_103b13e3c(param_3,param_2,param_4);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  return (uint)param_3 & 1;
}



/* Entry: 103b13fcc; end: 103b1417b;  */

undefined8 FUN_103b13fcc(void)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long extraout_x8;
  long unaff_x20;
  long lVar9;
  undefined1 auStack_80 [8];
  long lStack_78;
  undefined1 auStack_70 [24];
  long lStack_58;
  
  lVar4 = 0;
  func_0x000107c5ed50();
  lVar9 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  func_0x000107c40dcc();
  func_0x000107c61180();
  if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103b1417c);
    (*pcVar3)();
  }
  func_0x000107c600f4(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c61170(unaff_x20);
  func_0x000107c5ed4c(auStack_70);
  if (lStack_58 != 0) {
    uVar5 = 0;
    FUN_103b14b58(0,0x112df90e8,&PTR_PTR_1126b0cc0);
    puVar1 = PTR___sypN_11034f1a8;
    do {
      plVar6 = &lStack_78;
      func_0x000107c6147c(plVar6,auStack_70,puVar1 + 8,uVar5,6);
      lVar2 = lStack_78;
      if (((ulong)plVar6 & 1) != 0) {
        lVar7 = lStack_78;
        func_0x000107c4ce20();
        func_0x000107c61180();
        if (lVar7 == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103b14178);
          (*pcVar3)();
        }
        lVar8 = lVar7;
        func_0x000107c453bc();
        func_0x000107c61180();
        func_0x000107c61170(lVar7);
        if (lVar8 != 0) {
          lVar7 = lVar8;
          func_0x000107c43e54();
          func_0x000107c61180();
          func_0x000107c61170(lVar8);
          if (lVar7 != 0) {
            lVar8 = lVar7;
            func_0x000107c5d0f0();
            func_0x000107c61170(lVar7);
            func_0x000107c61170(lVar2);
            if ((int)lVar8 != 5) goto LAB_103b1408c;
            uVar5 = 1;
            goto LAB_103b14144;
          }
        }
        func_0x000107c61170(lVar2);
      }
LAB_103b1408c:
      func_0x000107c5ed4c(auStack_70);
    } while (lStack_58 != 0);
  }
  uVar5 = 0;
LAB_103b14144:
  (**(code **)(lVar9 + 8))(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar4);
  return uVar5;
}



/* Entry: 103b1417c; end: 103b14283;  */

uint FUN_103b1417c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long lStack_38;
  
  func_0x000107c5d20c();
  func_0x000107c61180();
  if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103b14284);
    (*pcVar1)();
  }
  lVar2 = unaff_x20;
  func_0x000107c4cd38();
  func_0x000107c61180();
  func_0x000107c61170(unaff_x20);
  if (lVar2 != 0) {
    lStack_38 = 0;
    uVar3 = 0;
    FUN_103b14b58(0,0x112dc0130,&PTR_PTR_1126afad0);
    func_0x000107c5fc50(lVar2,&lStack_38,uVar3);
    func_0x000107c61170(lVar2);
    lVar2 = lStack_38;
    if (lStack_38 != 0) {
      func_0x000107c61434(param_2);
      FUN_103ee3c34(param_1,param_2,uVar3,&PTR_DAT_1106d3830);
      if (param_1 != 0) {
        lVar4 = param_1;
        FUN_103b14430();
        func_0x000107c61170(param_1);
        func_0x000107c6142c(lVar2);
        return (uint)lVar4 & 1;
      }
      func_0x000107c6142c(lVar2);
    }
  }
  return 0;
}



/* Entry: 103b14284; end: 103b142eb; -[SCContextContextHint canRepostSnapForUserId:] */

uint FUN_103b14284(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_103b1417c(param_3,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  return (uint)param_3 & 1;
}



/* Entry: 103b142ec; end: 103b142ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b142ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = ((undefined8 *)(param_1 + _DAT_11307f580))[1];
  if (uVar6 >> 0x3c < 0xf) {
    uVar7 = *(undefined8 *)(param_1 + _DAT_11307f580);
    lVar1 = 0;
    FUN_103b14b58(0,0x112f49118,&PTR_PTR_1126b2378);
    func_0x000107c614e8();
    func_0x00010006c00c(uVar7,uVar6);
    uVar2 = uVar7;
    func_0x000107c5ee20(uVar7,uVar6);
    func_0x000107c4e380();
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    uVar2 = 0;
    if (lVar1 != 0) {
      func_0x000107c61174();
      func_0x000107c5fadc(param_2,param_3);
      lVar4 = lVar1;
      func_0x000107c3f41c(lVar1);
      func_0x0001000b44c0(uVar7,uVar6);
      func_0x000107c61170(param_2);
      func_0x000107c61170(lVar1);
      goto LAB_103b14b04;
    }
    uVar3 = uVar2;
    func_0x000107c61174();
    func_0x000107c5ed30(0);
    func_0x000107c61170(uVar3);
    func_0x000107c61654();
    func_0x0001000b44c0(uVar7,uVar6);
    func_0x000107c614ac(uVar2);
  }
  lVar4 = 0;
LAB_103b14b04:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  func_0x000107c60e78(lVar4);
  func_0x000107c61168(&PTR_PTR_112929ac0);
  return;
}



/* Entry: 103b142f0; end: 103b14353; +[SCRepostHelpers canRepostWithSnap:userId:] */

uint FUN_103b142f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  FUN_103b149bc();
  func_0x000107c61170(param_3);
  func_0x000107c6142c(param_2);
  return (uint)uVar1 & 1;
}



/* Entry: 103b14354; end: 103b143b3;  */

undefined8 FUN_103b14354(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f19f070);
  func_0x000107c3ebd4(param_1);
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 103b143b4; end: 103b1442b; +[SCRepostHelpers isRepostInContextMenuKillSwitchEnabledWithCircumstanceEngine:] */

undefined8 FUN_103b143b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c615f0(param_3);
  uVar1 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f19f070);
  uVar2 = param_3;
  func_0x000107c3ebd4(param_3);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 103b1442c; end: 103b1442f;  */

undefined8 FUN_103b1442c(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  
  if (param_1 != (undefined *)0x0) {
    puVar3 = param_2;
    func_0x000107c5c734();
    func_0x000107c61180();
    if (param_1 != (undefined *)0x0) {
      puVar10 = param_1;
      func_0x000107c4c244();
      func_0x000107c61180();
      puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (puVar10 != (undefined *)0x0) {
        puVar3 = (undefined *)0x0;
        FUN_103b14b58(0,0x112d4c900,&PTR_PTR_1126d4dd8);
        puVar4 = puVar10;
        func_0x000107c5fc54(puVar10,puVar3);
        func_0x000107c61170(puVar10);
      }
      if ((ulong)puVar4 >> 0x3e == 0) {
        puVar10 = *(undefined **)(((ulong)puVar4 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar10 = (undefined *)((ulong)puVar4 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar4) {
          puVar10 = puVar4;
        }
        func_0x000107c60480();
      }
      if (puVar10 == (undefined *)0x0) {
        uVar8 = 0;
      }
      else {
        uVar11 = 0;
        do {
          if (((ulong)puVar4 & 0xc000000000000001) == 0) {
            if (*(ulong *)(((ulong)puVar4 & 0xffffffffffffff8) + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x103b149bc);
              (*pcVar2)();
            }
            uVar5 = *(ulong *)(puVar4 + uVar11 * 8 + 0x20);
            func_0x000107c61174();
            puVar9 = puVar3;
          }
          else {
            uVar5 = uVar11;
            puVar9 = puVar4;
            FUN_103b145b0(uVar11,puVar4,&PTR_PTR_1126d4dd8,0x112d4c900);
          }
          puVar1 = (undefined *)(uVar11 + 1);
          if (SCARRY8(uVar11,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x103b149b8);
            (*pcVar2)();
          }
          uVar6 = uVar5;
          func_0x000107c3f408();
          puVar3 = puVar9;
          if ((int)uVar6 == 0) {
LAB_103b1481c:
            func_0x000107c61170(uVar5);
          }
          else {
            uVar6 = uVar5;
            func_0x000107c4f348();
            func_0x000107c61180();
            uVar7 = uVar6;
            func_0x000107c44f0c();
            func_0x000107c61180();
            func_0x000107c61170(uVar6);
            uVar6 = uVar7;
            func_0x000107c5faec();
            func_0x000107c61170(uVar7);
            uVar8 = 0;
            FUN_103b14b58(0,0x112dc0130,&PTR_PTR_1126afad0);
            func_0x000107c61434(puVar9);
            puVar3 = puVar9;
            FUN_103ee3c34(uVar6,puVar9,uVar8,&PTR_DAT_1106d3830);
            if (uVar6 == 0) {
              func_0x000107c6142c(puVar9);
              goto LAB_103b1481c;
            }
            uVar7 = uVar6;
            puVar3 = param_2;
            FUN_103b14430();
            func_0x000107c61170(uVar6);
            func_0x000107c6142c(puVar9);
            func_0x000107c61170(uVar5);
            if ((uVar7 & 1) != 0) {
              uVar8 = 1;
              goto LAB_103b14980;
            }
          }
          uVar11 = uVar11 + 1;
        } while (puVar1 != puVar10);
        uVar8 = 0;
      }
LAB_103b14980:
      func_0x000107c615e8(param_1);
      func_0x000107c6142c(puVar4);
      return uVar8;
    }
  }
  return 0;
}



/* Entry: 103b14430; end: 103b1453f;  */

bool FUN_103b14430(undefined8 param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar6 = param_2 & 0xffffffffffffff8;
  if (param_2 >> 0x3e == 0) {
    uVar5 = *(ulong *)(uVar6 + 0x10);
  }
  else {
    uVar5 = uVar6;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60480();
  }
  uVar2 = 0;
  do {
    uVar4 = uVar2;
    if (uVar5 == uVar4) break;
    if ((param_2 & 0xc000000000000001) == 0) {
      if (*(ulong *)(uVar6 + 0x10) <= uVar4) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103b1452c);
        (*pcVar1)();
      }
      uVar2 = *(ulong *)(param_2 + uVar4 * 8 + 0x20);
      func_0x000107c61174();
    }
    else {
      uVar2 = uVar4;
      FUN_103b145b0(uVar4,param_2,&PTR_PTR_1126afad0,0x112dc0130);
    }
    if (SCARRY8(uVar4,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103b14528);
      (*pcVar1)();
    }
    FUN_103b14b58(0,0x112dc0130,&PTR_PTR_1126afad0);
    uVar3 = uVar2;
    func_0x000107c60118(uVar2,param_1);
    func_0x000107c61170(uVar2);
    uVar2 = uVar4 + 1;
  } while ((uVar3 & 1) == 0);
  return uVar5 != uVar4;
}



/* Entry: 103b14540; end: 103b1457b; -[SCRepostHelpers init] */

void FUN_103b14540(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  FUN_103b14b38();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b1457c; end: 103b145ab;  */

void FUN_103b1457c(void)

{
  FUN_103b14b38();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b145ac; end: 103b145af; -[SCRepostHelpers .cxx_destruct] */

void FUN_103b145ac(void)

{
  return;
}



/* Entry: 103b145b0; end: 103b1476b;  */

ulong FUN_103b145b0(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103b14694);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103b14698);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_103b14b58(0,param_4,param_3);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103b1476c);
  (*pcVar2)();
}



/* Entry: 103b1476c; end: 103b149bb;  */

undefined8 FUN_103b1476c(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  
  if (param_1 != (undefined *)0x0) {
    puVar3 = param_2;
    func_0x000107c5c734();
    func_0x000107c61180();
    if (param_1 != (undefined *)0x0) {
      puVar10 = param_1;
      func_0x000107c4c244();
      func_0x000107c61180();
      puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (puVar10 != (undefined *)0x0) {
        puVar3 = (undefined *)0x0;
        FUN_103b14b58(0,0x112d4c900,&PTR_PTR_1126d4dd8);
        puVar4 = puVar10;
        func_0x000107c5fc54(puVar10,puVar3);
        func_0x000107c61170(puVar10);
      }
      if ((ulong)puVar4 >> 0x3e == 0) {
        puVar10 = *(undefined **)(((ulong)puVar4 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar10 = (undefined *)((ulong)puVar4 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar4) {
          puVar10 = puVar4;
        }
        func_0x000107c60480();
      }
      if (puVar10 == (undefined *)0x0) {
        uVar8 = 0;
      }
      else {
        uVar11 = 0;
        do {
          if (((ulong)puVar4 & 0xc000000000000001) == 0) {
            if (*(ulong *)(((ulong)puVar4 & 0xffffffffffffff8) + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x103b149bc);
              (*pcVar2)();
            }
            uVar5 = *(ulong *)(puVar4 + uVar11 * 8 + 0x20);
            func_0x000107c61174();
            puVar9 = puVar3;
          }
          else {
            uVar5 = uVar11;
            puVar9 = puVar4;
            FUN_103b145b0(uVar11,puVar4,&PTR_PTR_1126d4dd8,0x112d4c900);
          }
          puVar1 = (undefined *)(uVar11 + 1);
          if (SCARRY8(uVar11,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x103b149b8);
            (*pcVar2)();
          }
          uVar6 = uVar5;
          func_0x000107c3f408();
          puVar3 = puVar9;
          if ((int)uVar6 == 0) {
LAB_103b1481c:
            func_0x000107c61170(uVar5);
          }
          else {
            uVar6 = uVar5;
            func_0x000107c4f348();
            func_0x000107c61180();
            uVar7 = uVar6;
            func_0x000107c44f0c();
            func_0x000107c61180();
            func_0x000107c61170(uVar6);
            uVar6 = uVar7;
            func_0x000107c5faec();
            func_0x000107c61170(uVar7);
            uVar8 = 0;
            FUN_103b14b58(0,0x112dc0130,&PTR_PTR_1126afad0);
            func_0x000107c61434(puVar9);
            puVar3 = puVar9;
            FUN_103ee3c34(uVar6,puVar9,uVar8,&PTR_DAT_1106d3830);
            if (uVar6 == 0) {
              func_0x000107c6142c(puVar9);
              goto LAB_103b1481c;
            }
            uVar7 = uVar6;
            puVar3 = param_2;
            FUN_103b14430();
            func_0x000107c61170(uVar6);
            func_0x000107c6142c(puVar9);
            func_0x000107c61170(uVar5);
            if ((uVar7 & 1) != 0) {
              uVar8 = 1;
              goto LAB_103b14980;
            }
          }
          uVar11 = uVar11 + 1;
        } while (puVar1 != puVar10);
        uVar8 = 0;
      }
LAB_103b14980:
      func_0x000107c615e8(param_1);
      func_0x000107c6142c(puVar4);
      return uVar8;
    }
  }
  return 0;
}



/* Entry: 103b149bc; end: 103b14b37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b149bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = ((undefined8 *)(param_1 + _DAT_11307f580))[1];
  if (uVar6 >> 0x3c < 0xf) {
    uVar7 = *(undefined8 *)(param_1 + _DAT_11307f580);
    lVar1 = 0;
    FUN_103b14b58(0,0x112f49118,&PTR_PTR_1126b2378);
    func_0x000107c614e8();
    func_0x00010006c00c(uVar7,uVar6);
    uVar2 = uVar7;
    func_0x000107c5ee20(uVar7,uVar6);
    func_0x000107c4e380();
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    uVar2 = 0;
    if (lVar1 != 0) {
      func_0x000107c61174();
      func_0x000107c5fadc(param_2,param_3);
      lVar4 = lVar1;
      func_0x000107c3f41c(lVar1);
      func_0x0001000b44c0(uVar7,uVar6);
      func_0x000107c61170(param_2);
      func_0x000107c61170(lVar1);
      goto LAB_103b14b04;
    }
    uVar3 = uVar2;
    func_0x000107c61174();
    func_0x000107c5ed30(0);
    func_0x000107c61170(uVar3);
    func_0x000107c61654();
    func_0x0001000b44c0(uVar7,uVar6);
    func_0x000107c614ac(uVar2);
  }
  lVar4 = 0;
LAB_103b14b04:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  func_0x000107c60e78(lVar4);
  func_0x000107c61168(&PTR_PTR_112929ac0);
  return;
}



/* Entry: 103b14b38; end: 103b14b57;  */

void FUN_103b14b38(void)

{
  func_0x000107c61168(&PTR_PTR_112929ac0);
  return;
}



/* Entry: 103b14b58; end: 103b14b97;  */

void FUN_103b14b58(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 103b14b98; end: 103b14d13;  */

void FUN_103b14b98(undefined8 param_1,char param_2)

{
  if (param_2 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRetain_11034f540)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103b14d14; end: 103b14d23; -[_TtC27SCOperaMediaResolverService27SCOperaMediaResolverService mediaResolverFactory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b14d14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fec218));
  return;
}



/* Entry: 103b14d24; end: 103b14d33; -[_TtC27SCOperaMediaResolverService27SCOperaMediaResolverService mediaAssetManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b14d24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fec220));
  return;
}



/* Entry: 103b14d34; end: 103b14d97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b14d34(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fec218) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fec220) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b14d98; end: 103b14e0f; -[_TtC27SCOperaMediaResolverService27SCOperaMediaResolverService initWithMediaResolverFactory:mediaAssetManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b14d98(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112fec218) = param_3;
  *(undefined8 *)(param_1 + _DAT_112fec220) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 103b14e10; end: 103b14e6f; -[_TtC27SCOperaMediaResolverService27SCOperaMediaResolverService init] */

void FUN_103b14e10(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCOperaMediaResolverService.SCOperaMediaResolverService",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b14e3c);
  (*pcVar1)();
}



/* Entry: 103b14e70; end: 103b14ea7; -[_TtC27SCOperaMediaResolverService27SCOperaMediaResolverService .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103b14e8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b14e90) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b14e70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fec218));
  return;
}



/* Entry: 103b14ea8; end: 103b14ec7;  */

void FUN_103b14ea8(void)

{
  func_0x000107c61168(&PTR_PTR_112929b90);
  return;
}



/* Entry: 103b14ec8; end: 103b14f73;  */

void FUN_103b14ec8(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103b14f74; end: 103b14fb3;  */

void FUN_103b14f74(undefined1 *param_1,long *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar2 = 1;
  if (*param_2 != 1) {
    uVar2 = 2;
  }
  uVar1 = 0;
  if (*param_2 != 0) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 103b14fb4; end: 103b1500b; -[SCOperaMediaAsset description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b14fb4(long param_1)

{
  code *pcVar1;
  
  if (*(char *)(param_1 + _DAT_112fec250) == '\x01') {
    if (*(long *)(param_1 + _DAT_112fec260) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103b14fdc);
      (*pcVar1)();
    }
  }
  else if (*(long *)(param_1 + _DAT_112fec258) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103b1500c);
    (*pcVar1)();
  }
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b1500c; end: 103b15053; -[SCOperaMediaAsset init] */

void FUN_103b1500c(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCOperaMediaResolverService/SCOperaMediaAssetWrapper.swift",0x3a,2,0x30,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b15054);
  (*pcVar1)();
}



/* Entry: 103b15054; end: 103b15057; -[SCOperaMediaAsset copyWithZone:] */

void FUN_103b15054(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103b15058; end: 103b150cb; +[SCOperaMediaAsset imageWithImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b15058(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_112fec250) = 0;
  *(undefined8 *)(lVar2 + _DAT_112fec258) = param_3;
  *(undefined8 *)(lVar2 + _DAT_112fec260) = 0;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b150cc; end: 103b15143; +[SCOperaMediaAsset videoWithAsset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b150cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_112fec250) = 1;
  *(undefined8 *)(lVar2 + _DAT_112fec258) = 0;
  *(undefined8 *)(lVar2 + _DAT_112fec260) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c615f0(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b15144; end: 103b1518f; -[SCOperaMediaAsset matchImage:video:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b15144(long param_1,undefined8 param_2,long param_3,long param_4)

{
  code *pcVar1;
  
  if (*(char *)(param_1 + _DAT_112fec250) == '\x01') {
    param_3 = param_4;
    if (*(long *)(param_1 + _DAT_112fec260) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103b15170);
      (*pcVar1)();
    }
  }
  else if (*(long *)(param_1 + _DAT_112fec258) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103b15190);
    (*pcVar1)();
  }
                    /* WARNING: Could not recover jumptable at 0x000103b15188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_3);
  return;
}



/* Entry: 103b15190; end: 103b151c3;  */

void FUN_103b15190(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b151c4; end: 103b151fb; -[SCOperaMediaAsset .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b151c4(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fec258));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112fec260));
  return;
}



/* Entry: 103b151fc; end: 103b1521b;  */

void FUN_103b151fc(void)

{
  func_0x000107c61168(&PTR_PTR_112929c58);
  return;
}



/* Entry: 103b1521c; end: 103b15383;  */

int FUN_103b1521c(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103b15298;
        goto LAB_103b1527c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103b1527c:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_103b15298:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103b15384; end: 103b153c3;  */

void FUN_103b15384(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fec290 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc55238;
  func_0x000107c61520(&UNK_10dc55238,&UNK_1106d3a38);
  puRam0000000112fec290 = puVar1;
  return;
}



/* Entry: 103b153c4; end: 103b153d7;  */

void FUN_103b153c4(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1106d3b58;
  if (lRam0000000112fec298 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112fec298 = param_1;
  }
  return;
}



/* Entry: 103b153d8; end: 103b1541b;  */

void FUN_103b153d8(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}


