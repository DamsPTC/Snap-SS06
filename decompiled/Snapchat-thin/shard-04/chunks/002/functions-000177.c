/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103289f40; end: 103289fcb; -[SCSpotlightEndOfSubsInterstitialItem playlistItemModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103289f40(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  
  ppuVar3 = &PTR____CFConstantStringClassReference_110ed3ab8;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110ed3ab8);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112f50938);
  uVar2 = ((undefined8 *)(param_1 + _DAT_112f50938))[1];
  func_0x0001044443ac(0);
  func_0x000107c610f8();
  func_0x000107c61434(uVar2);
  func_0x00010444388c(ppuVar3,param_2,uVar1,uVar2,PTR___swiftEmptyArrayStorage_11034f1c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103289fcc; end: 10328a1b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103289fcc(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  long *plVar7;
  long *plVar8;
  undefined *puVar9;
  long unaff_x20;
  long alStack_70 [3];
  undefined8 uStack_58;
  
  plVar7 = alStack_70;
  plVar8 = alStack_70;
  uVar2 = 0;
  func_0x0001044410f4(0);
  uVar3 = uVar2;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c610f8(uVar2);
  func_0x000107c453e4();
  func_0x000104440658(*(undefined8 *)(unaff_x20 + _DAT_112f50938),
                      ((undefined8 *)(unaff_x20 + _DAT_112f50938))[1]);
  func_0x000107c61170();
  lVar4 = 0x112f509c0;
  FUN_10328a3a0(0x112f509c0,&UNK_10dba5ab8,0x112f509b8,&UNK_10dba5ab0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x18) = 2;
  *(undefined8 *)(lVar4 + 0x10) = 1;
  uVar5 = 0;
  FUN_10328a96c();
  *(undefined8 *)(lVar4 + 0x20) = uVar5;
  uVar5 = 0x112f50940;
  puVar9 = &UNK_10dba5a10;
  func_0x0001000285a8(0x112f50940,&UNK_10dba5a10);
  ppuVar6 = &PTR____CFConstantStringClassReference_110f0e2b8;
  alStack_70[0] = lVar4;
  uStack_58 = uVar5;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0e2b8);
  func_0x000104440854(alStack_70,ppuVar6,puVar9);
  func_0x000107c6142c(puVar9);
  func_0x000107c61170(plVar7);
  func_0x00010006e7f4(alStack_70);
  func_0x000104440b54();
  alStack_70[0] = 0;
  func_0x000107c5f9e4();
  func_0x000107c61170(plVar8);
  lVar4 = alStack_70[0];
  func_0x000104440b54();
  alStack_70[0] = 0;
  func_0x000107c5f9e4();
  func_0x000107c61170(plVar8);
  lVar1 = alStack_70[0];
  uVar5 = 0;
  func_0x000104445474(0);
  func_0x000107c610f8();
  func_0x000104445210(lVar4,lVar1,uVar5);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  return lVar4;
}



/* Entry: 10328a1b8; end: 10328a1eb; -[SCSpotlightEndOfSubsInterstitialItem pageData] */

void FUN_10328a1b8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103289fcc();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10328a1ec; end: 10328a24b; -[SCSpotlightEndOfSubsInterstitialItem init] */

void FUN_10328a1ec(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpotlightCustomInterstitials.SpotlightEndOfSubsInterstitialItem",0x3f,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10328a218);
  (*pcVar1)();
}



/* Entry: 10328a24c; end: 10328a27b; -[SCSpotlightEndOfSubsInterstitialItem .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10328a24c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f50938 + 8))
  ;
  return;
}



/* Entry: 10328a27c; end: 10328a35f;  */

void FUN_10328a27c(code *param_1,ulong *param_2,long *param_3)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    (*param_1)();
    if (lVar3 != 0) {
      param_2 = (ulong *)0x112d36e60;
      param_3 = (long *)&UNK_10d901170;
    }
  }
  if (*param_2 == 0 || (*param_2 & 1) != 0) {
    puVar2 = (undefined *)((long)param_3 + (long)(int)*param_3);
    func_0x000107c61518(puVar2,*param_3 >> 0x20,0,0);
    *param_2 = (ulong)puVar2;
  }
  return;
}



/* Entry: 10328a360; end: 10328a39f;  */

void FUN_10328a360(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112f50990;
  plVar5 = (long *)&UNK_10dba5a88;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_10329a964();
    if (lVar3 != 0) {
      puVar4 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
    }
  }
  if (*puVar4 == 0 || (*puVar4 & 1) != 0) {
    puVar2 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar2,*plVar5 >> 0x20,0,0);
    *puVar4 = (ulong)puVar2;
  }
  return;
}



/* Entry: 10328a3a0; end: 10328a41f;  */

/* WARNING: Possible PIC construction at 0x00010328a3e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010328a3e4) */
/* WARNING: Removing unreachable block (ram,0x00010328a3f0) */
/* WARNING: Removing unreachable block (ram,0x00010328a3f4) */

void FUN_10328a3a0(ulong *param_1,long *param_2,ulong *param_3,long *param_4)

{
  undefined1 *puVar1;
  int iVar2;
  ulong *puVar3;
  ulong uVar4;
  long *plVar5;
  long *unaff_x19;
  ulong *unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  iVar2 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  puVar3 = param_3;
  plVar5 = param_4;
  if (iVar2 != 0) {
    unaff_x30 = 0x10328a3e4;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    puVar3 = param_1;
    plVar5 = param_2;
    unaff_x19 = param_4;
    unaff_x20 = param_3;
    unaff_x29 = puVar1;
  }
  *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (*puVar3 == 0 || (*puVar3 & 1) != 0) {
    uVar4 = (long)plVar5 + (long)(int)*plVar5;
    func_0x000107c61518(uVar4,*plVar5 >> 0x20,0,0);
    *puVar3 = uVar4;
  }
  return;
}



/* Entry: 10328a420; end: 10328a443;  */

void FUN_10328a420(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112f50970;
  plVar5 = (long *)&UNK_10dba5a68;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_10328a768(0,0x112f50978,&PTR__OBJC_CLASS___NSCollectionLayoutGroupCustomItem_1126acf88);
    if (lVar3 != 0) {
      puVar4 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
    }
  }
  if (*puVar4 == 0 || (*puVar4 & 1) != 0) {
    puVar2 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar2,*plVar5 >> 0x20,0,0);
    *puVar4 = (ulong)puVar2;
  }
  return;
}



/* Entry: 10328a444; end: 10328a747;  */

undefined * FUN_10328a444(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  if (puVar8 == (undefined *)0x0) {
    return PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  uVar5 = 0;
  func_0x0001000285a8(0x112f509b0);
  puVar2 = puVar8;
  func_0x000107c60498();
  uVar9 = *(ulong *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar9;
  func_0x00010035a314();
  if ((uVar5 & 1) == 0) {
    puVar6 = (undefined8 *)(param_1 + 0x38);
    do {
      uVar7 = uVar3 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar2 + uVar7 + 0x40) = *(ulong *)(puVar2 + uVar7 + 0x40) | 1L << (uVar3 & 0x3f);
      *(ulong *)(*(long *)(puVar2 + 0x30) + uVar3 * 8) = uVar9;
      *(undefined8 *)(*(long *)(puVar2 + 0x38) + uVar3 * 8) = uVar4;
      if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10328a548);
        (*pcVar1)();
      }
      *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      if (puVar8 == (undefined *)0x0) {
        func_0x000107c6157c();
        return puVar2;
      }
      uVar9 = puVar6[-1];
      uVar4 = *puVar6;
      func_0x000107c6157c();
      uVar3 = uVar9;
      func_0x00010035a314();
      puVar6 = puVar6 + 2;
    } while ((uVar5 & 1) == 0);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10328a518);
  (*pcVar1)();
}



/* Entry: 10328a748; end: 10328a767;  */

void FUN_10328a748(void)

{
  func_0x000107c61168(&PTR_PTR_1128c5ba0);
  return;
}



/* Entry: 10328a768; end: 10328a7a7;  */

void FUN_10328a768(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10328a7a8; end: 10328a847;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10328a7a8(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  
  puVar3 = auStack_50;
  func_0x000107c610f8();
  if (param_1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + _DAT_11307abc8);
    uVar2 = uVar4;
    func_0x000107c61434();
    func_0x00010018cc3c();
    func_0x000107c6142c(uVar4);
    *(undefined8 *)(unaff_x20 + _DAT_112f509c8) = uVar2;
    func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10328a848);
  (*pcVar1)();
}



/* Entry: 10328a848; end: 10328a8f3; -[_TtC28SpotlightCustomInterstitials35SpotlightEndOfSubsInterstitialLayer initWithPage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10328a848(long param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lStack_50;
  long lStack_48;
  
  if (param_3 != 0) {
    plVar4 = &lStack_50;
    lVar2 = param_1;
    func_0x000107c614f0();
    uVar5 = *(undefined8 *)(param_3 + _DAT_11307abc8);
    func_0x000107c61174(param_3);
    uVar3 = uVar5;
    func_0x000107c61434();
    func_0x00010018cc3c();
    func_0x000107c6142c(uVar5);
    *(undefined8 *)(param_1 + _DAT_112f509c8) = uVar3;
    lStack_50 = param_1;
    lStack_48 = lVar2;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(param_3);
    return (undefined1 *)plVar4;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10328a8f4);
  (*pcVar1)();
}



/* Entry: 10328a8f4; end: 10328a8fb; -[_TtC28SpotlightCustomInterstitials35SpotlightEndOfSubsInterstitialLayer type] */

undefined8 FUN_10328a8f4(void)

{
  return 0x19;
}



/* Entry: 10328a8fc; end: 10328a95b; -[_TtC28SpotlightCustomInterstitials35SpotlightEndOfSubsInterstitialLayer init] */

void FUN_10328a8fc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpotlightCustomInterstitials.SpotlightEndOfSubsInterstitialLayer",0x40,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10328a928);
  (*pcVar1)();
}



/* Entry: 10328a95c; end: 10328a96b; -[_TtC28SpotlightCustomInterstitials35SpotlightEndOfSubsInterstitialLayer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10328a95c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f509c8));
  return;
}



/* Entry: 10328a96c; end: 10328a98b;  */

void FUN_10328a96c(void)

{
  func_0x000107c61168(&PTR_PTR_1128c5c60);
  return;
}



/* Entry: 10328a98c; end: 10328a9f7; -[_TtC28SpotlightCustomInterstitials39SpotlightEndOfSubsInterstitialLayerView initWithFrame:] */

void FUN_10328a98c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = param_5;
  func_0x000107c614f0();
  uStack_50 = param_5;
  uStack_48 = uVar1;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&uStack_50,PTR_s_initWithFrame__1125e2948);
  return;
}



/* Entry: 10328a9f8; end: 10328aa73; -[_TtC28SpotlightCustomInterstitials39SpotlightEndOfSubsInterstitialLayerView initWithCoder:] */

undefined1 * FUN_10328a9f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = &uStack_40;
  uVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_initWithCoder__1125dd730;
  uStack_40 = param_1;
  uStack_38 = uVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&uStack_40,puVar1,param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  if (puVar3 != (undefined8 *)0x0) {
    func_0x000107c61170(puVar3);
  }
  return (undefined1 *)puVar3;
}



/* Entry: 10328aa74; end: 10328aac7;  */

void FUN_10328aa74(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10328aac8; end: 10328abc3; -[_TtC28SpotlightCustomInterstitials49SpotlightEndOfSubsInterstitialLayerViewController initWithConfiguration:layerViewControllerConfiguration:operaDependencies:eventAnnouncer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10328aac8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lStack_60;
  long lStack_58;
  
  plVar4 = &lStack_60;
  lVar2 = param_1;
  func_0x000107c614f0();
  uVar3 = 0;
  func_0x00010328aaa8();
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c615f0(param_6);
  func_0x000107c453e4();
  *(undefined8 *)(param_1 + _DAT_112f50a20) = uVar3;
  lStack_60 = param_1;
  lStack_58 = lVar2;
  func_0x000107c61154(&lStack_60,PTR_s_initWithConfiguration_layerViewC_1125de030,param_3,param_4,
                      param_5,param_6);
  if (plVar4 != (long *)0x0) {
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c615e8(param_6);
    return (undefined1 *)plVar4;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10328abc4);
  (*pcVar1)();
}



/* Entry: 10328abc4; end: 10328ac1b; -[_TtC28SpotlightCustomInterstitials49SpotlightEndOfSubsInterstitialLayerViewController initWithCoder:] */

void FUN_10328abc4(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SpotlightCustomInterstitials/SpotlightEndOfSubsInterstitialLayerViewController.swift"
                      ,0x54,2,0x1a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10328ac1c);
  (*pcVar1)();
}



/* Entry: 10328ac1c; end: 10328ac2b; -[_TtC28SpotlightCustomInterstitials49SpotlightEndOfSubsInterstitialLayerViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10328ac1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c222390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setView__112666308,*(undefined8 *)(param_1 + _DAT_112f50a20));
  return;
}



/* Entry: 10328ac2c; end: 10328aca7; -[_TtC28SpotlightCustomInterstitials49SpotlightEndOfSubsInterstitialLayerViewController viewDidLoad] */

/* WARNING: Possible PIC construction at 0x00010328ac84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010328ac88) */

void FUN_10328ac2c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  
  func_0x000107c61174();
  func_0x000107c5de64();
  func_0x000107c61180();
  if (param_1 != 0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c4faf8();
    func_0x000107c61180();
    func_0x000107c52b50(param_1,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10328aca8);
  (*pcVar1)();
}



/* Entry: 10328aca8; end: 10328ad07; -[_TtC28SpotlightCustomInterstitials49SpotlightEndOfSubsInterstitialLayerViewController initWithNibName:bundle:] */

void FUN_10328aca8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpotlightCustomInterstitials.SpotlightEndOfSubsInterstitialLayerViewController"
                      ,0x4e,"init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10328acd4);
  (*pcVar1)();
}



/* Entry: 10328ad08; end: 10328ad17; -[_TtC28SpotlightCustomInterstitials49SpotlightEndOfSubsInterstitialLayerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10328ad08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f50a20));
  return;
}



/* Entry: 10328ad18; end: 10328ad37;  */

void FUN_10328ad18(void)

{
  func_0x000107c61168(&PTR_PTR_112f50a68);
  return;
}



/* Entry: 10328ad38; end: 10328ad8b; -[SCSpotlightCustomInterstitialsOperaPlugin navigation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10328ad38(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_112f50ac0;
  func_0x000107c61618();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x000107c4d4b8();
    func_0x000107c61180();
    func_0x000107c615e8(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10328ad8c; end: 10328add3; -[SCSpotlightCustomInterstitialsOperaPlugin delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10328ad8c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1138071a8;
  func_0x000107c61428(param_1 + _DAT_1138071a8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10328add4; end: 10328ae2b; -[SCSpotlightCustomInterstitialsOperaPlugin setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10328add4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1138071a8;
  func_0x000107c61428(param_1 + _DAT_1138071a8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10328ae2c; end: 10328ae73; -[SCSpotlightCustomInterstitialsOperaPlugin feedType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10328ae2c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1138071b0;
  func_0x000107c61428(param_1 + _DAT_1138071b0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10328ae74; end: 10328aed7; -[SCSpotlightCustomInterstitialsOperaPlugin setFeedType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10328ae74(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1138071b0;
  func_0x000107c61428(param_1 + _DAT_1138071b0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10328aed8; end: 10328af07;  */

void FUN_10328aed8(undefined8 param_1)

{
  func_0x000107c610f8();
  FUN_10328af08(param_1);
  return;
}



/* Entry: 10328af08; end: 10328b017;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10328af08(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112f50ac8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f50ad0) = 0;
  func_0x000107c61614(unaff_x20 + _DAT_112f50ac0,0);
  lVar1 = _DAT_112f50ad8;
  lVar2 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(unaff_x20 + lVar1,1,1,lVar2);
  lVar1 = _DAT_112f50ae0;
  lVar2 = 0;
  func_0x000103299ab0();
  func_0x000107c613fc();
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_10328a444();
  *(undefined **)(lVar2 + 0x10) = puVar3;
  *(undefined1 *)(lVar2 + 0x18) = 0;
  *(long *)(unaff_x20 + lVar1) = lVar2;
  func_0x000107c61614(unaff_x20 + _DAT_1138071a8,0);
  *(undefined8 *)(unaff_x20 + _DAT_1138071b0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_1138071a0) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10328b018; end: 10328b03f; -[SCSpotlightCustomInterstitialsOperaPlugin initWithDataSource:] */

void FUN_10328b018(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_10328af08();
  return;
}



/* Entry: 10328b040; end: 10328b10b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10328b040(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112f50ac8);
  *(undefined8 **)(unaff_x20 + _DAT_112f50ac8) = param_1;
  func_0x000107c615e8(uVar1);
  lVar2 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = 4;
  *(undefined8 *)(lVar2 + 0x10) = 2;
  *(undefined8 *)(lVar2 + 0x20) = 0xd000000000000025;
  *(undefined8 *)(lVar2 + 0x28) = 0x800000010f134cd0;
  puVar3 = param_1;
  func_0x000107c615f0();
  func_0x000103bb9c70();
  uVar1 = puVar3[1];
  *(undefined8 *)(lVar2 + 0x30) = *puVar3;
  *(undefined8 *)(lVar2 + 0x38) = uVar1;
  func_0x000107c61434();
  lVar4 = lVar2;
  func_0x000107c5fc48(lVar2,PTR___sSSN_11034da80);
  func_0x000107c61574(lVar2);
  func_0x000107c3d744(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 10328b10c; end: 10328b153; -[SCSpotlightCustomInterstitialsOperaPlugin addEventListenersWithEventAnnouncing:] */

void FUN_10328b10c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_10328b040(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10328b154; end: 10328b187; -[SCSpotlightCustomInterstitialsOperaPlugin setPlaylistItemController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10328b154(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112f50ad0);
  *(undefined8 *)(param_1 + _DAT_112f50ad0) = param_3;
  func_0x000107c615f0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 10328b188; end: 10328b19b; -[SCSpotlightCustomInterstitialsOperaPlugin setOperaControlling:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10328b188(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112f50ac0,param_3);
  return;
}



/* Entry: 10328b19c; end: 10328b1ab; -[SCSpotlightCustomInterstitialsOperaPlugin type] */

void FUN_10328b19c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (&PTR____CFConstantStringClassReference_110ed3ab8);
  return;
}



/* Entry: 10328b1ac; end: 10328ba67;  */

/* WARNING: Removing unreachable block (ram,0x00010328ba40) */
/* WARNING: Removing unreachable block (ram,0x00010328ba34) */
/* WARNING: Removing unreachable block (ram,0x00010328ba4c) */
/* WARNING: Removing unreachable block (ram,0x00010328ba30) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10328b1ac(void)

{
  ulong uVar1;
  ulong *puVar2;
  byte bVar3;
  undefined1 *puVar4;
  code *pcVar5;
  long lVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  long extraout_x8;
  ulong uVar15;
  ulong uVar16;
  long unaff_x20;
  long lVar17;
  undefined **ppuVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  undefined1 auStack_200 [8];
  long lStack_1f8;
  undefined1 *puStack_1f0;
  undefined **ppuStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  undefined **ppuStack_1b8;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  undefined1 *puStack_1a0;
  undefined1 *puStack_198;
  undefined1 *puStack_190;
  ulong auStack_180 [3];
  long lStack_168;
  ulong uStack_160;
  ulong uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined **ppuStack_110;
  undefined1 *puStack_108;
  ulong uStack_100;
  undefined8 uStack_e8;
  undefined **ppuStack_e0;
  undefined1 *puStack_d8;
  ulong uStack_d0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  lVar11 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = _DAT_112f50b30;
  lVar17 = *(long *)(unaff_x20 + _DAT_1138071a0);
  func_0x000107c61428(lVar17 + _DAT_112f50b30,auStack_80,0,0);
  lVar17 = *(long *)(lVar17 + lVar11);
  bVar3 = *(byte *)(lVar17 + 0x20);
  func_0x000107c61434(lVar17);
  lVar11 = lVar17 + 0x40;
  func_0x000107c60268(lVar11,~(-1L << ((ulong)bVar3 & 0x3f)));
  if (lVar11 == 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f)) {
    func_0x000107c6142c(lVar17);
  }
  else {
    FUN_10328fa58();
    func_0x000107c61180();
    func_0x000107c6142c(lVar17);
    lVar6 = *(long *)(lVar11 + _DAT_112f50b78);
    func_0x000107c61174();
    func_0x000107c61170(lVar11);
    uVar7 = 0;
    func_0x000103295c88(0);
    lVar17 = lVar6;
    func_0x000107c61480(lVar6,uVar7);
    lVar11 = _DAT_1138071a8;
    if (lVar17 == 0) {
      func_0x000107c61170(lVar6);
    }
    else {
      puVar13 = auStack_98;
      func_0x000107c61428(unaff_x20 + _DAT_1138071a8,puVar13,0,0);
      lVar11 = unaff_x20 + lVar11;
      func_0x000107c61618();
      if (lVar11 != 0) {
        func_0x000107c5c9b0();
        func_0x000107c615e8(lVar11);
      }
      ppuVar8 = &PTR____CFConstantStringClassReference_110ebecf8;
      ppuVar18 = &PTR____CFConstantStringClassReference_110f43ab8;
      func_0x000107c61174();
      ppuVar9 = ppuVar18;
      ppuStack_1e8 = ppuVar8;
      func_0x000107c61174(&PTR____CFConstantStringClassReference_110f43ab8);
      func_0x000107c5faec();
      ppuStack_1b0 = ppuVar18;
      puStack_198 = puVar13;
      func_0x000107c61170(ppuVar9);
      ppuVar8 = &PTR____CFConstantStringClassReference_110f43ad8;
      ppuVar9 = ppuVar8;
      func_0x000107c61174(&PTR____CFConstantStringClassReference_110f43ad8);
      func_0x000107c5faec();
      ppuStack_1b8 = ppuVar8;
      puStack_1a0 = puVar13;
      func_0x000107c61170(ppuVar9);
      ppuVar8 = &PTR____CFConstantStringClassReference_110f41c38;
      ppuVar9 = ppuVar8;
      lStack_1f8 = lVar6;
      puStack_1f0 = auStack_200 + -extraout_x8;
      func_0x000107c61174(&PTR____CFConstantStringClassReference_110f41c38);
      func_0x000107c5faec();
      ppuStack_1a8 = ppuVar8;
      puStack_190 = puVar13;
      func_0x000107c61170(ppuVar9);
      uVar21 = *(ulong *)(lVar17 + _DAT_112f50c88);
      if (uVar21 >> 0x3e == 0) {
        uVar20 = *(ulong *)((uVar21 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar20 = uVar21 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar21) {
          uVar20 = uVar21;
        }
        func_0x000107c60480();
      }
      lVar11 = _DAT_1138071b0;
      lStack_1c8 = _DAT_112f50ac8;
      func_0x000107c61434(uVar21);
      lStack_1c0 = lVar11;
      func_0x000107c61428(unaff_x20 + lVar11,auStack_b0,0,0);
      if (uVar20 != 0) {
        uVar22 = 0;
        uStack_1d0 = uVar21 & 0xc000000000000001;
        uStack_1d8 = uVar21 & 0xffffffffffffff8;
        uStack_1e0 = uVar20;
        do {
          if (uStack_1d0 == 0) {
            if (*(ulong *)(uStack_1d8 + 0x10) <= uVar22) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x10328ba00);
              (*pcVar5)();
            }
            uVar20 = *(ulong *)(uVar21 + uVar22 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            uVar20 = uVar22;
            FUN_10328edd8(uVar22,uVar21,&PTR_PTR_1126c2098,0x112e0fd70);
          }
          puVar13 = puStack_198;
          uVar1 = uVar22 + 1;
          if (SCARRY8(uVar22,1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10328b9fc);
            (*pcVar5)();
          }
          ppuStack_110 = ppuStack_1b0;
          puStack_108 = puStack_198;
          uVar7 = 0;
          FUN_10328ff98(0,0x112e0fd70,&PTR_PTR_1126c2098);
          puVar4 = puStack_1a0;
          ppuStack_e0 = ppuStack_1b8;
          puStack_d8 = puStack_1a0;
          puStack_b8 = PTR___sSiN_11034deb0;
          uStack_100 = uVar20;
          uStack_e8 = uVar7;
          uStack_d0 = uVar22;
          func_0x0001000285a8(0x112d4b5f8,&UNK_10d9121b0);
          uVar10 = 2;
          func_0x000107c60498();
          FUN_10328faa0(&ppuStack_110,&uStack_160,0x112d4b5f0,&UNK_10d9127d0);
          uVar12 = uStack_158;
          uVar19 = uStack_160;
          func_0x000107c61434(puVar13);
          func_0x000107c61174(uVar20);
          func_0x000107c61434(puVar4);
          func_0x000107c6157c(uVar10);
          uVar16 = uVar19;
          uVar15 = uVar12;
          func_0x000100029284();
          if ((uVar15 & 1) != 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10328ba04);
            (*pcVar5)();
          }
          lVar11 = uVar10 + 0x40;
          uVar15 = uVar16 >> 3 & 0x1ffffffffffffff8;
          *(ulong *)(lVar11 + uVar15) = *(ulong *)(lVar11 + uVar15) | 1L << (uVar16 & 0x3f);
          puVar2 = (ulong *)(*(long *)(uVar10 + 0x30) + uVar16 * 0x10);
          *puVar2 = uVar19;
          puVar2[1] = uVar12;
          func_0x000100102924(&uStack_150,*(long *)(uVar10 + 0x38) + uVar16 * 0x20);
          if (SCARRY8(*(long *)(uVar10 + 0x10),1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10328ba08);
            (*pcVar5)();
          }
          *(long *)(uVar10 + 0x10) = *(long *)(uVar10 + 0x10) + 1;
          FUN_10328faa0(&ppuStack_e0,&uStack_160,0x112d4b5f0,&UNK_10d9127d0);
          uVar12 = uStack_158;
          uVar19 = uStack_160;
          uVar16 = uStack_160;
          uVar15 = uStack_158;
          func_0x000100029284();
          if ((uVar15 & 1) != 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10328ba0c);
            (*pcVar5)();
          }
          uVar15 = uVar16 >> 3 & 0x1ffffffffffffff8;
          *(ulong *)(lVar11 + uVar15) = *(ulong *)(lVar11 + uVar15) | 1L << (uVar16 & 0x3f);
          puVar2 = (ulong *)(*(long *)(uVar10 + 0x30) + uVar16 * 0x10);
          *puVar2 = uVar19;
          puVar2[1] = uVar12;
          func_0x000100102924(&uStack_150,*(long *)(uVar10 + 0x38) + uVar16 * 0x20);
          if (SCARRY8(*(long *)(uVar10 + 0x10),1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10328ba10);
            (*pcVar5)();
          }
          *(long *)(uVar10 + 0x10) = *(long *)(uVar10 + 0x10) + 1;
          func_0x000107c61574(uVar10);
          uVar7 = 0x112d4b5f0;
          func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
          func_0x000107c61408(&ppuStack_110,2,uVar7);
          uVar19 = *(ulong *)(unaff_x20 + lStack_1c0);
          if (uVar19 != 0) {
            lVar11 = 0;
            FUN_10328ff98(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
            auStack_180[0] = uVar19;
            lStack_168 = lVar11;
            if (lVar11 == 0) {
              func_0x000107c61174(uVar19);
              func_0x000107c61174();
              func_0x00010328fae8(auStack_180,0x112d387f8,&UNK_10d902650);
              func_0x000107c6157c(uVar10);
              ppuVar9 = ppuStack_1a8;
              puVar13 = puStack_190;
              func_0x000100029284();
              func_0x000107c61574(uVar10);
              if (((ulong)puVar13 & 1) == 0) {
                func_0x000107c61170(uVar19);
                uStack_158 = 0;
                uStack_160 = 0;
                uStack_148 = 0;
                uStack_150 = 0;
              }
              else {
                uVar12 = uVar10;
                func_0x000107c61558();
                auStack_180[0] = uVar10;
                if ((int)uVar12 == 0) {
                  func_0x0001010fc388();
                }
                uVar10 = auStack_180[0];
                func_0x000107c6142c(*(undefined8 *)
                                     (*(long *)(auStack_180[0] + 0x30) + (long)ppuVar9 * 0x10 + 8));
                func_0x000100102924(*(long *)(uVar10 + 0x38) + (long)ppuVar9 * 0x20,&uStack_160);
                func_0x0001010f6278(ppuVar9,uVar10);
                func_0x000107c61170(uVar19);
              }
              func_0x00010328fae8(&uStack_160,0x112d387f8,&UNK_10d902650);
            }
            else {
              func_0x000100102924(auStack_180,&uStack_160);
              func_0x000107c61174(uVar19);
              func_0x000107c61174();
              uVar12 = uVar10;
              func_0x000107c61558();
              ppuVar9 = ppuStack_1a8;
              puVar13 = puStack_190;
              auStack_180[0] = uVar10;
              func_0x000100029284();
              uVar16 = (ulong)~(uint)puVar13 & 1;
              lVar11 = *(long *)(uVar10 + 0x10) + uVar16;
              if (SCARRY8(*(long *)(uVar10 + 0x10),uVar16)) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x10328ba14);
                (*pcVar5)();
              }
              if (*(long *)(uVar10 + 0x18) < lVar11) {
                func_0x000100102b0c(lVar11,uVar12);
                ppuVar9 = ppuStack_1a8;
                puVar14 = puStack_190;
                func_0x000100029284();
                puVar4 = puStack_190;
                uVar10 = auStack_180[0];
                if (((uint)puVar13 & 1) != ((uint)puVar14 & 1)) {
                  func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x10328ba68);
                  (*pcVar5)();
                }
              }
              else {
                puVar4 = puStack_190;
                uVar10 = auStack_180[0];
                if ((uVar12 & 1) == 0) {
                  func_0x0001010fc388();
                  puVar4 = puStack_190;
                  uVar10 = auStack_180[0];
                }
              }
              puStack_190 = puVar4;
              auStack_180[0] = uVar10;
              if (((ulong)puVar13 & 1) == 0) {
                lVar11 = uVar10 + ((ulong)ppuVar9 >> 6) * 8;
                *(ulong *)(lVar11 + 0x40) =
                     *(ulong *)(lVar11 + 0x40) | 1L << ((ulong)ppuVar9 & 0x3f);
                puVar2 = (ulong *)(*(long *)(uVar10 + 0x30) + (long)ppuVar9 * 0x10);
                *puVar2 = (ulong)ppuStack_1a8;
                puVar2[1] = (ulong)puVar4;
                func_0x000100102924(&uStack_160,*(long *)(uVar10 + 0x38) + (long)ppuVar9 * 0x20);
                func_0x000107c61434(puVar4);
                func_0x000107c61170(uVar19);
                if (SCARRY8(*(long *)(uVar10 + 0x10),1)) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x10328ba18);
                  (*pcVar5)();
                }
                *(long *)(uVar10 + 0x10) = *(long *)(uVar10 + 0x10) + 1;
              }
              else {
                lVar11 = *(long *)(uVar10 + 0x38) + (long)ppuVar9 * 0x20;
                func_0x000100183ab8(lVar11);
                func_0x000100102924(&uStack_160,lVar11);
                func_0x000107c61170(uVar19);
              }
            }
          }
          uVar19 = uStack_1e0;
          lVar11 = *(long *)(unaff_x20 + lStack_1c8);
          if (lVar11 == 0) {
            func_0x000107c61170(uVar20);
            func_0x000107c6142c(uVar10);
          }
          else {
            func_0x000107c615f0(lVar11);
            uVar12 = uVar10;
            func_0x000107c5f9dc(uVar10,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                                PTR___sSSSHsWP_11034da90);
            func_0x000107c4df80(lVar11);
            func_0x000107c6142c(uVar10);
            func_0x000107c615e8(lVar11);
            func_0x000107c61170(uVar12);
            func_0x000107c61170(uVar20);
          }
          uVar22 = uVar22 + 1;
        } while (uVar1 != uVar19);
      }
      func_0x000107c6142c(puStack_198);
      func_0x000107c6142c(puStack_1a0);
      func_0x000107c6142c(puStack_190);
      func_0x000107c61170(ppuStack_1e8);
      func_0x000107c6142c(uVar21);
      puVar13 = puStack_1f0;
      func_0x000107c5eea0(puStack_1f0);
      func_0x000107c61170(lStack_1f8);
      lVar11 = 0;
      func_0x000107c5eea4();
      (**(code **)(*(long *)(lVar11 + -8) + 0x38))(puVar13,0,1,lVar11);
      lVar11 = _DAT_112f50ad8;
      func_0x000107c61428(unaff_x20 + _DAT_112f50ad8,&uStack_160,0x21,0);
      func_0x000100ed9cbc(puVar13,unaff_x20 + lVar11);
      func_0x000107c614a8(&uStack_160);
    }
  }
  return;
}



/* Entry: 10328ba68; end: 10328ba8f; -[SCSpotlightCustomInterstitialsOperaPlugin interstitialDidBecomeVisible] */

void FUN_10328ba68(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10328b1ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10328ba90; end: 10328c607;  */

/* WARNING: Removing unreachable block (ram,0x00010328c5e0) */
/* WARNING: Removing unreachable block (ram,0x00010328c5c8) */
/* WARNING: Removing unreachable block (ram,0x00010328c5d4) */
/* WARNING: Removing unreachable block (ram,0x00010328c5ec) */
/* WARNING: Removing unreachable block (ram,0x00010328c5c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10328ba90(double param_1)

{
  ulong uVar1;
  ulong *puVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar14;
  ulong uVar15;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  long lVar16;
  long lVar17;
  long lVar18;
  code *pcVar19;
  undefined **ppuVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  long lStack_280;
  long lStack_278;
  long lStack_270;
  code *pcStack_268;
  long lStack_260;
  long lStack_258;
  undefined **ppuStack_250;
  long lStack_248;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  long lStack_228;
  long lStack_220;
  undefined **ppuStack_218;
  undefined **ppuStack_210;
  undefined **ppuStack_208;
  undefined **ppuStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong auStack_1c0 [3];
  long lStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined **ppuStack_150;
  ulong uStack_148;
  ulong uStack_140;
  undefined8 uStack_128;
  undefined **ppuStack_120;
  ulong uStack_118;
  ulong uStack_110;
  undefined *puStack_f8;
  undefined **ppuStack_f0;
  ulong uStack_e8;
  double dStack_e0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [32];
  
  lVar13 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar13 + -8) + 0x40));
  lVar16 = (long)&lStack_280 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar18 = lVar16 - extraout_x12;
  lVar5 = 0;
  func_0x000107c5eea4();
  lVar25 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar25 + 0x40));
  lVar23 = lVar18 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar21 = lVar23 - extraout_x12_00;
  FUN_10328c608();
  lVar13 = _DAT_112f50ad8;
  func_0x000107c61428(unaff_x20 + _DAT_112f50ad8,auStack_90,0,0);
  FUN_10328faa0(unaff_x20 + lVar13,lVar18,0x112d373d8,&UNK_10d9014c0);
  lVar17 = lVar18;
  (**(code **)(lVar25 + 0x30))(lVar18,1,lVar5);
  if ((int)lVar17 == 1) {
    func_0x00010328fae8(lVar18,0x112d373d8,&UNK_10d9014c0);
    (**(code **)(lVar25 + 0x38))(lVar16,1,1,lVar5);
    func_0x000107c61428(unaff_x20 + lVar13,&uStack_1a0,0x21,0);
    lVar13 = unaff_x20 + lVar13;
    goto LAB_10328c554;
  }
  lStack_258 = lVar13;
  lStack_248 = lVar16;
  (**(code **)(lVar25 + 0x20))(lVar21,lVar18,lVar5);
  func_0x000107c5eea0(lVar23);
  func_0x000107c5ee68(lVar21);
  pcVar19 = *(code **)(lVar25 + 8);
  (*pcVar19)(lVar23,lVar5);
  lVar13 = _DAT_112f50b30;
  if (1.2 <= param_1) {
    lVar16 = *(long *)(unaff_x20 + _DAT_1138071a0);
    func_0x000107c61428(lVar16 + _DAT_112f50b30,auStack_a8,0,0);
    lVar17 = *(long *)(lVar16 + lVar13);
    bVar3 = *(byte *)(lVar17 + 0x20);
    func_0x000107c61434(lVar17);
    lVar13 = lVar17 + 0x40;
    func_0x000107c60268(lVar13,~(-1L << ((ulong)bVar3 & 0x3f)));
    lVar16 = lStack_248;
    if (lVar13 == 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f)) {
      func_0x000107c6142c(lVar17);
    }
    else {
      pcStack_268 = pcVar19;
      lStack_260 = lVar25;
      FUN_10328fa58();
      func_0x000107c61180();
      func_0x000107c6142c(lVar17);
      lVar17 = *(long *)(lVar13 + _DAT_112f50b78);
      func_0x000107c61174();
      func_0x000107c61170(lVar13);
      uVar6 = 0;
      func_0x000103295c88();
      lVar13 = lVar17;
      func_0x000107c61480();
      if (lVar13 != 0) {
        ppuVar7 = &PTR____CFConstantStringClassReference_110ebed18;
        ppuVar20 = &PTR____CFConstantStringClassReference_110f43ab8;
        func_0x000107c61174();
        ppuVar8 = ppuVar20;
        ppuStack_250 = ppuVar7;
        func_0x000107c61174(&PTR____CFConstantStringClassReference_110f43ab8);
        func_0x000107c5faec();
        ppuStack_208 = ppuVar20;
        uStack_1e8 = uVar6;
        func_0x000107c61170(ppuVar8);
        ppuVar7 = &PTR____CFConstantStringClassReference_110f43ad8;
        ppuVar8 = ppuVar7;
        func_0x000107c61174(&PTR____CFConstantStringClassReference_110f43ad8);
        func_0x000107c5faec();
        ppuStack_210 = ppuVar7;
        uStack_1f0 = uVar6;
        func_0x000107c61170(ppuVar8);
        ppuVar7 = &PTR____CFConstantStringClassReference_110e72498;
        ppuVar8 = ppuVar7;
        func_0x000107c61174(&PTR____CFConstantStringClassReference_110e72498);
        func_0x000107c5faec();
        ppuStack_218 = ppuVar7;
        uStack_1f8 = uVar6;
        func_0x000107c61170(ppuVar8);
        ppuVar7 = &PTR____CFConstantStringClassReference_110f41c38;
        ppuVar8 = ppuVar7;
        lStack_280 = lVar17;
        lStack_278 = lVar21;
        lStack_270 = lVar5;
        func_0x000107c61174(&PTR____CFConstantStringClassReference_110f41c38);
        func_0x000107c5faec();
        ppuStack_200 = ppuVar7;
        uStack_1e0 = uVar6;
        func_0x000107c61170(ppuVar8);
        uVar6 = *(ulong *)(lVar13 + _DAT_112f50c88);
        if (uVar6 >> 0x3e == 0) {
          uVar22 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar22 = uVar6 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar6) {
            uVar22 = uVar6;
          }
          func_0x000107c60480();
        }
        lVar13 = _DAT_1138071b0;
        lStack_228 = _DAT_112f50ac8;
        func_0x000107c61434(uVar6);
        lStack_220 = lVar13;
        func_0x000107c61428(unaff_x20 + lVar13,auStack_c0,0,0);
        if (uVar22 != 0) {
          uVar24 = 0;
          uStack_230 = uVar6 & 0xc000000000000001;
          uStack_238 = uVar6 & 0xffffffffffffff8;
          uStack_240 = uVar22;
          do {
            if (uStack_230 == 0) {
              if (*(ulong *)(uStack_238 + 0x10) <= uVar24) {
                    /* WARNING: Does not return */
                pcVar19 = (code *)SoftwareBreakpoint(1,0x10328c58c);
                (*pcVar19)();
              }
              uVar22 = *(ulong *)(uVar6 + uVar24 * 8 + 0x20);
              func_0x000107c61174();
            }
            else {
              uVar22 = uVar24;
              FUN_10328edd8(uVar24,uVar6,&PTR_PTR_1126c2098,0x112e0fd70);
            }
            uVar11 = uStack_1e8;
            uVar1 = uVar24 + 1;
            if (SCARRY8(uVar24,1)) {
                    /* WARNING: Does not return */
              pcVar19 = (code *)SoftwareBreakpoint(1,0x10328c588);
              (*pcVar19)();
            }
            ppuStack_150 = ppuStack_208;
            uStack_148 = uStack_1e8;
            uVar9 = 0;
            FUN_10328ff98(0,0x112e0fd70,&PTR_PTR_1126c2098);
            uVar12 = uStack_1f0;
            uVar14 = uStack_1f8;
            ppuStack_120 = ppuStack_210;
            uStack_118 = uStack_1f0;
            puStack_f8 = PTR___sSiN_11034deb0;
            ppuStack_f0 = ppuStack_218;
            uStack_e8 = uStack_1f8;
            puStack_c8 = PTR___sSdN_11034dd90;
            uStack_140 = uVar22;
            uStack_128 = uVar9;
            uStack_110 = uVar24;
            dStack_e0 = param_1;
            func_0x0001000285a8(0x112d4b5f8,&UNK_10d9121b0);
            uVar10 = 3;
            func_0x000107c60498();
            FUN_10328faa0(&ppuStack_150,&uStack_1a0,0x112d4b5f0,&UNK_10d9127d0);
            uVar4 = uStack_198;
            uVar15 = uStack_1a0;
            func_0x000107c61434(uVar11);
            func_0x000107c61174();
            func_0x000107c61434(uVar12);
            func_0x000107c61434(uVar14);
            func_0x000107c6157c(uVar10);
            uVar11 = uVar15;
            uVar14 = uVar4;
            func_0x000100029284();
            if ((uVar14 & 1) != 0) {
                    /* WARNING: Does not return */
              pcVar19 = (code *)SoftwareBreakpoint(1,0x10328c590);
              (*pcVar19)();
            }
            lVar13 = uVar10 + 0x40;
            uVar14 = uVar11 >> 3 & 0x1ffffffffffffff8;
            *(ulong *)(lVar13 + uVar14) = *(ulong *)(lVar13 + uVar14) | 1L << (uVar11 & 0x3f);
            puVar2 = (ulong *)(*(long *)(uVar10 + 0x30) + uVar11 * 0x10);
            *puVar2 = uVar15;
            puVar2[1] = uVar4;
            func_0x000100102924(&uStack_190,*(long *)(uVar10 + 0x38) + uVar11 * 0x20);
            if (SCARRY8(*(long *)(uVar10 + 0x10),1)) {
                    /* WARNING: Does not return */
              pcVar19 = (code *)SoftwareBreakpoint(1,0x10328c594);
              (*pcVar19)();
            }
            *(long *)(uVar10 + 0x10) = *(long *)(uVar10 + 0x10) + 1;
            FUN_10328faa0(&ppuStack_120,&uStack_1a0,0x112d4b5f0,&UNK_10d9127d0);
            uVar14 = uStack_198;
            uVar11 = uStack_1a0;
            uVar12 = uStack_1a0;
            uVar15 = uStack_198;
            func_0x000100029284();
            if ((uVar15 & 1) != 0) {
                    /* WARNING: Does not return */
              pcVar19 = (code *)SoftwareBreakpoint(1,0x10328c598);
              (*pcVar19)();
            }
            uVar15 = uVar12 >> 3 & 0x1ffffffffffffff8;
            *(ulong *)(lVar13 + uVar15) = *(ulong *)(lVar13 + uVar15) | 1L << (uVar12 & 0x3f);
            puVar2 = (ulong *)(*(long *)(uVar10 + 0x30) + uVar12 * 0x10);
            *puVar2 = uVar11;
            puVar2[1] = uVar14;
            func_0x000100102924(&uStack_190,*(long *)(uVar10 + 0x38) + uVar12 * 0x20);
            if (SCARRY8(*(long *)(uVar10 + 0x10),1)) {
                    /* WARNING: Does not return */
              pcVar19 = (code *)SoftwareBreakpoint(1,0x10328c59c);
              (*pcVar19)();
            }
            *(long *)(uVar10 + 0x10) = *(long *)(uVar10 + 0x10) + 1;
            FUN_10328faa0(&ppuStack_f0,&uStack_1a0,0x112d4b5f0,&UNK_10d9127d0);
            uVar14 = uStack_198;
            uVar11 = uStack_1a0;
            uVar12 = uStack_1a0;
            uVar15 = uStack_198;
            func_0x000100029284();
            if ((uVar15 & 1) != 0) {
                    /* WARNING: Does not return */
              pcVar19 = (code *)SoftwareBreakpoint(1,0x10328c5a0);
              (*pcVar19)();
            }
            uVar15 = uVar12 >> 3 & 0x1ffffffffffffff8;
            *(ulong *)(lVar13 + uVar15) = *(ulong *)(lVar13 + uVar15) | 1L << (uVar12 & 0x3f);
            puVar2 = (ulong *)(*(long *)(uVar10 + 0x30) + uVar12 * 0x10);
            *puVar2 = uVar11;
            puVar2[1] = uVar14;
            func_0x000100102924(&uStack_190,*(long *)(uVar10 + 0x38) + uVar12 * 0x20);
            if (SCARRY8(*(long *)(uVar10 + 0x10),1)) {
                    /* WARNING: Does not return */
              pcVar19 = (code *)SoftwareBreakpoint(1,0x10328c5a4);
              (*pcVar19)();
            }
            *(long *)(uVar10 + 0x10) = *(long *)(uVar10 + 0x10) + 1;
            func_0x000107c61574(uVar10);
            uVar9 = 0x112d4b5f0;
            func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
            func_0x000107c61408(&ppuStack_150,3,uVar9);
            uVar14 = *(ulong *)(unaff_x20 + lStack_220);
            uVar11 = uStack_240;
            if (uVar14 != 0) {
              lVar13 = 0;
              FUN_10328ff98(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
              auStack_1c0[0] = uVar14;
              lStack_1a8 = lVar13;
              if (lVar13 == 0) {
                func_0x000107c61174(uVar14);
                func_0x000107c61174();
                func_0x00010328fae8(auStack_1c0,0x112d387f8,&UNK_10d902650);
                func_0x000107c6157c(uVar10);
                ppuVar8 = ppuStack_200;
                uVar11 = uStack_1e0;
                func_0x000100029284();
                func_0x000107c61574(uVar10);
                if ((uVar11 & 1) == 0) {
                  func_0x000107c61170(uVar14);
                  uStack_198 = 0;
                  uStack_1a0 = 0;
                  uStack_188 = 0;
                  uStack_190 = 0;
                }
                else {
                  uVar11 = uVar10;
                  func_0x000107c61558();
                  auStack_1c0[0] = uVar10;
                  if ((int)uVar11 == 0) {
                    func_0x0001010fc388();
                  }
                  uVar10 = auStack_1c0[0];
                  func_0x000107c6142c(*(undefined8 *)
                                       (*(long *)(auStack_1c0[0] + 0x30) + (long)ppuVar8 * 0x10 + 8)
                                     );
                  func_0x000100102924(*(long *)(uVar10 + 0x38) + (long)ppuVar8 * 0x20,&uStack_1a0);
                  func_0x0001010f6278(ppuVar8,uVar10);
                  func_0x000107c61170(uVar14);
                }
                uVar11 = uStack_240;
                func_0x00010328fae8(&uStack_1a0,0x112d387f8,&UNK_10d902650);
              }
              else {
                func_0x000100102924(auStack_1c0,&uStack_1a0);
                func_0x000107c61174(uVar14);
                func_0x000107c61174();
                uVar11 = uVar10;
                func_0x000107c61558();
                ppuVar8 = ppuStack_200;
                uVar12 = uStack_1e0;
                auStack_1c0[0] = uVar10;
                func_0x000100029284();
                uVar15 = (ulong)~(uint)uVar12 & 1;
                lVar13 = *(long *)(uVar10 + 0x10) + uVar15;
                if (SCARRY8(*(long *)(uVar10 + 0x10),uVar15)) {
                    /* WARNING: Does not return */
                  pcVar19 = (code *)SoftwareBreakpoint(1,0x10328c5a8);
                  (*pcVar19)();
                }
                if (*(long *)(uVar10 + 0x18) < lVar13) {
                  func_0x000100102b0c(lVar13,uVar11);
                  ppuVar8 = ppuStack_200;
                  uVar11 = uStack_1e0;
                  func_0x000100029284();
                  uVar15 = uStack_1e0;
                  uVar10 = auStack_1c0[0];
                  if (((uint)uVar12 & 1) != ((uint)uVar11 & 1)) {
                    func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
                    pcVar19 = (code *)SoftwareBreakpoint(1,0x10328c608);
                    (*pcVar19)();
                  }
                }
                else {
                  uVar15 = uStack_1e0;
                  uVar10 = auStack_1c0[0];
                  if ((uVar11 & 1) == 0) {
                    func_0x0001010fc388();
                    uVar15 = uStack_1e0;
                    uVar10 = auStack_1c0[0];
                  }
                }
                uStack_1e0 = uVar15;
                auStack_1c0[0] = uVar10;
                if ((uVar12 & 1) == 0) {
                  lVar13 = uVar10 + ((ulong)ppuVar8 >> 6) * 8;
                  *(ulong *)(lVar13 + 0x40) =
                       *(ulong *)(lVar13 + 0x40) | 1L << ((ulong)ppuVar8 & 0x3f);
                  puVar2 = (ulong *)(*(long *)(uVar10 + 0x30) + (long)ppuVar8 * 0x10);
                  *puVar2 = (ulong)ppuStack_200;
                  puVar2[1] = uVar15;
                  func_0x000100102924(&uStack_1a0,*(long *)(uVar10 + 0x38) + (long)ppuVar8 * 0x20);
                  func_0x000107c61434(uVar15);
                  func_0x000107c61170(uVar14);
                  if (SCARRY8(*(long *)(uVar10 + 0x10),1)) {
                    /* WARNING: Does not return */
                    pcVar19 = (code *)SoftwareBreakpoint(1,0x10328c5ac);
                    (*pcVar19)();
                  }
                  *(long *)(uVar10 + 0x10) = *(long *)(uVar10 + 0x10) + 1;
                  uVar11 = uStack_240;
                }
                else {
                  lVar13 = *(long *)(uVar10 + 0x38) + (long)ppuVar8 * 0x20;
                  func_0x000100183ab8(lVar13);
                  func_0x000100102924(&uStack_1a0,lVar13);
                  func_0x000107c61170(uVar14);
                  uVar11 = uStack_240;
                }
              }
            }
            lVar13 = *(long *)(unaff_x20 + lStack_228);
            if (lVar13 == 0) {
              func_0x000107c61170(uVar22);
              func_0x000107c6142c(uVar10);
            }
            else {
              func_0x000107c615f0(lVar13);
              uVar14 = uVar10;
              func_0x000107c5f9dc(uVar10,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                                  PTR___sSSSHsWP_11034da90);
              func_0x000107c4df80(lVar13);
              func_0x000107c6142c(uVar10);
              func_0x000107c615e8(lVar13);
              func_0x000107c61170(uVar14);
              func_0x000107c61170(uVar22);
            }
            uVar24 = uVar24 + 1;
          } while (uVar1 != uVar11);
        }
        func_0x000107c6142c(uVar6);
        func_0x000107c61170(lStack_280);
        func_0x000107c6142c(uStack_1e0);
        func_0x000107c6142c(uStack_1f8);
        func_0x000107c6142c(uStack_1f0);
        func_0x000107c6142c(uStack_1e8);
        func_0x000107c61170(ppuStack_250);
        lVar5 = lStack_270;
        (*pcStack_268)(lStack_278,lStack_270);
        pcVar19 = *(code **)(lStack_260 + 0x38);
        goto LAB_10328c4d8;
      }
      func_0x000107c61170(lVar17);
      pcVar19 = pcStack_268;
      lVar25 = lStack_260;
    }
    (*pcVar19)(lVar21,lVar5);
    (**(code **)(lVar25 + 0x38))(lVar16,1,1,lVar5);
    lVar13 = lStack_258;
    func_0x000107c61428(unaff_x20 + lStack_258,&uStack_1a0,0x21,0);
    lVar13 = unaff_x20 + lVar13;
  }
  else {
    (*pcVar19)(lVar21,lVar5);
    pcVar19 = *(code **)(lVar25 + 0x38);
LAB_10328c4d8:
    lVar16 = lStack_248;
    (*pcVar19)(lStack_248,1,1,lVar5);
    lVar13 = lStack_258;
    func_0x000107c61428(unaff_x20 + lStack_258,&uStack_1a0,0x21,0);
    lVar13 = unaff_x20 + lVar13;
  }
LAB_10328c554:
  func_0x000100ed9cbc(lVar16,lVar13);
  func_0x000107c614a8(&uStack_1a0);
  return;
}



/* Entry: 10328c608; end: 10328d14f;  */

/* WARNING: Removing unreachable block (ram,0x00010328d144) */
/* WARNING: Removing unreachable block (ram,0x00010328d11c) */
/* WARNING: Removing unreachable block (ram,0x00010328d104) */
/* WARNING: Removing unreachable block (ram,0x00010328d0ec) */
/* WARNING: Removing unreachable block (ram,0x00010328d0e0) */
/* WARNING: Removing unreachable block (ram,0x00010328d0f8) */
/* WARNING: Removing unreachable block (ram,0x00010328d110) */
/* WARNING: Removing unreachable block (ram,0x00010328d128) */
/* WARNING: Removing unreachable block (ram,0x00010328d0dc) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10328c608(void)

{
  undefined8 *puVar1;
  ulong *puVar2;
  undefined8 ******ppppppuVar3;
  undefined8 ******ppppppuVar4;
  undefined8 ******ppppppuVar5;
  undefined8 ******ppppppuVar6;
  byte bVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  undefined8 *******pppppppuVar13;
  ulong uVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 *******pppppppuVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  long lVar30;
  undefined8 *******pppppppuVar31;
  long lVar32;
  undefined8 *******pppppppuVar33;
  undefined **ppuVar34;
  undefined **ppuVar35;
  undefined **ppuVar36;
  undefined **ppuVar37;
  undefined **ppuVar38;
  undefined **ppuVar39;
  undefined **ppuVar40;
  long unaff_x20;
  undefined8 *******pppppppuVar41;
  undefined8 ******ppppppuVar42;
  undefined8 ******ppppppuVar43;
  undefined8 ******ppppppuVar44;
  long lVar45;
  undefined8 ******ppppppuVar46;
  ulong auStack_250 [3];
  long lStack_238;
  undefined8 *******pppppppuStack_230;
  ulong uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 auStack_1f8 [32];
  undefined **ppuStack_1d8;
  ulong uStack_1d0;
  undefined8 ******ppppppuStack_1c8;
  undefined8 uStack_1b0;
  undefined **ppuStack_1a8;
  ulong uStack_1a0;
  undefined8 ******ppppppuStack_198;
  undefined *puStack_180;
  undefined **ppuStack_178;
  ulong uStack_170;
  undefined8 ******ppppppuStack_168;
  undefined8 ******ppppppuStack_160;
  undefined *puStack_150;
  undefined **ppuStack_148;
  ulong uStack_140;
  undefined8 ******ppppppuStack_138;
  undefined *puStack_120;
  undefined **ppuStack_118;
  ulong uStack_110;
  undefined8 uStack_108;
  undefined *puStack_f0;
  undefined **ppuStack_e8;
  ulong uStack_e0;
  undefined8 ******ppppppuStack_d8;
  undefined *puStack_c0;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [32];
  
  lVar30 = *(long *)(unaff_x20 + _DAT_112f50ae0);
  if ((*(byte *)(lVar30 + 0x18) & 1) == 0) {
    *(undefined1 *)(lVar30 + 0x18) = 1;
    func_0x000107c61428(lVar30 + 0x10,auStack_80,0,0);
    lVar30 = *(long *)(lVar30 + 0x10);
    pppppppuVar33 = *(undefined8 ********)(lVar30 + 0x10);
    func_0x000107c61434(lVar30);
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    pppppppuVar13 = (undefined8 *******)PTR___swiftEmptyArrayStorage_11034f1c8;
    if (pppppppuVar33 != (undefined8 *******)0x0) {
      func_0x000107c61434(lVar30);
      pppppppuVar13 = pppppppuVar33;
      FUN_103299218(pppppppuVar33,0);
      pppppppuVar31 = &pppppppuStack_230;
      FUN_10328f90c(pppppppuVar31,pppppppuVar13 + 4,pppppppuVar33,lVar30);
      func_0x00010329001c(pppppppuStack_230,uStack_228,uStack_220,uStack_218,uStack_210);
      if (pppppppuVar31 != pppppppuVar33) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x10328c6cc);
        (*pcVar12)();
      }
    }
    pppppppuStack_230 = pppppppuVar13;
    FUN_10328efa8(&pppppppuStack_230);
    func_0x000107c6142c(lVar30);
    pppppppuVar13 = pppppppuStack_230;
    if (((long)pppppppuStack_230 < 0) || (((ulong)pppppppuStack_230 >> 0x3e & 1) != 0)) {
      pppppppuVar33 = pppppppuStack_230;
      func_0x000107c60480();
    }
    else {
      pppppppuVar33 = (undefined8 *******)pppppppuStack_230[2];
    }
    if (pppppppuVar33 != (undefined8 *******)0x0) {
      pppppppuStack_230 = (undefined8 *******)puVar8;
      func_0x000103295c08(0,(ulong)pppppppuVar33 &
                            ((long)pppppppuVar33 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)pppppppuVar33 < 0) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x10328d0dc);
        (*pcVar12)();
      }
      pppppppuVar31 = (undefined8 *******)0x0;
      do {
        pppppppuVar19 = pppppppuStack_230;
        if (((ulong)pppppppuVar13 & 0xc000000000000001) == 0) {
          pppppppuVar41 = (undefined8 *******)pppppppuVar13[(long)((long)pppppppuVar31 + 4)];
          func_0x000107c6157c(pppppppuVar41);
        }
        else {
          pppppppuVar41 = pppppppuVar31;
          FUN_10328e870();
        }
        ppppppuVar44 = pppppppuVar41[2];
        ppppppuVar5 = pppppppuVar41[3];
        ppppppuVar43 = pppppppuVar41[4];
        ppppppuVar6 = pppppppuVar41[5];
        ppppppuVar3 = pppppppuVar41[6];
        ppppppuVar46 = pppppppuVar41[7];
        func_0x000107c61434(ppppppuVar43);
        func_0x000107c61434(ppppppuVar3);
        func_0x000107c61574(pppppppuVar41);
        ppppppuVar4 = pppppppuVar19[2];
        pppppppuStack_230 = pppppppuVar19;
        if ((undefined8 ******)((ulong)pppppppuVar19[3] >> 1) <= ppppppuVar4) {
          func_0x000103295c08((undefined8 ******)0x1 < pppppppuVar19[3],
                              (undefined8 ******)((long)ppppppuVar4 + 1U),1);
        }
        pppppppuVar19 = pppppppuStack_230;
        pppppppuVar31 = (undefined8 *******)((long)pppppppuVar31 + 1);
        pppppppuStack_230[2] = (undefined8 ******)((long)ppppppuVar4 + 1U);
        pppppppuStack_230[(long)ppppppuVar4 * 6 + 4] = ppppppuVar44;
        pppppppuStack_230[(long)ppppppuVar4 * 6 + 5] = ppppppuVar5;
        pppppppuStack_230[(long)ppppppuVar4 * 6 + 6] = ppppppuVar43;
        pppppppuStack_230[(long)ppppppuVar4 * 6 + 7] = ppppppuVar6;
        pppppppuStack_230[(long)ppppppuVar4 * 6 + 8] = ppppppuVar3;
        pppppppuStack_230[(long)ppppppuVar4 * 6 + 9] = ppppppuVar46;
      } while (pppppppuVar33 != pppppppuVar31);
      func_0x000107c61574(pppppppuVar13);
      ppppppuVar44 = pppppppuVar19[2];
      lVar30 = _DAT_112f50b30;
      goto joined_r0x00010328c804;
    }
    func_0x000107c61574();
  }
  ppppppuVar44 = *(undefined8 *******)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
  lVar30 = _DAT_112f50b30;
  pppppppuVar19 = (undefined8 *******)PTR___swiftEmptyArrayStorage_11034f1c8;
joined_r0x00010328c804:
  _DAT_112f50b30 = lVar30;
  if (ppppppuVar44 != (undefined8 ******)0x0) {
    lVar32 = *(long *)(unaff_x20 + _DAT_1138071a0);
    func_0x000107c61428(lVar32 + lVar30,auStack_a0,0,0);
    pppppppuVar33 = *(undefined8 ********)(lVar32 + lVar30);
    bVar7 = *(byte *)(pppppppuVar33 + 4);
    func_0x000107c61434(pppppppuVar33);
    pppppppuVar13 = pppppppuVar33 + 8;
    func_0x000107c60268(pppppppuVar13,~(-1L << ((ulong)bVar7 & 0x3f)));
    if (pppppppuVar13 == (undefined8 *******)(1L << ((ulong)*(byte *)(pppppppuVar33 + 4) & 0x3f))) {
      func_0x000107c6142c(pppppppuVar19);
      pppppppuVar19 = pppppppuVar33;
    }
    else {
      FUN_10328fa58();
      func_0x000107c61180();
      func_0x000107c6142c(pppppppuVar33);
      lVar32 = *(long *)((long)pppppppuVar13 + _DAT_112f50b78);
      func_0x000107c61174();
      func_0x000107c61170(pppppppuVar13);
      uVar14 = 0;
      func_0x000103295c88();
      lVar30 = lVar32;
      func_0x000107c61480();
      if (lVar30 == 0) {
        func_0x000107c6142c(pppppppuVar19);
        func_0x000107c61170(lVar32);
        return;
      }
      ppuVar15 = &PTR____CFConstantStringClassReference_110ebed38;
      ppuVar34 = &PTR____CFConstantStringClassReference_110f43ab8;
      func_0x000107c61174();
      ppuVar16 = ppuVar34;
      func_0x000107c61174(&PTR____CFConstantStringClassReference_110f43ab8);
      func_0x000107c5faec();
      uVar20 = uVar14;
      func_0x000107c61170(ppuVar16);
      ppuVar35 = &PTR____CFConstantStringClassReference_110f43ad8;
      ppuVar16 = ppuVar35;
      func_0x000107c61174(&PTR____CFConstantStringClassReference_110f43ad8);
      func_0x000107c5faec();
      uVar21 = uVar20;
      func_0x000107c61170(ppuVar16);
      ppuVar36 = &PTR____CFConstantStringClassReference_110f41c38;
      ppuVar16 = ppuVar36;
      func_0x000107c61174(&PTR____CFConstantStringClassReference_110f41c38);
      func_0x000107c5faec();
      uVar22 = uVar21;
      func_0x000107c61170(ppuVar16);
      ppuVar37 = &PTR____CFConstantStringClassReference_110f41ed8;
      ppuVar16 = ppuVar37;
      func_0x000107c61174(&PTR____CFConstantStringClassReference_110f41ed8);
      func_0x000107c5faec();
      uVar23 = uVar22;
      func_0x000107c61170(ppuVar16);
      ppuVar38 = &PTR____CFConstantStringClassReference_110f41fb8;
      ppuVar16 = ppuVar38;
      func_0x000107c61174(&PTR____CFConstantStringClassReference_110f41fb8);
      func_0x000107c5faec();
      uVar24 = uVar23;
      func_0x000107c61170(ppuVar16);
      ppuVar39 = &PTR____CFConstantStringClassReference_110f41f78;
      ppuVar16 = ppuVar39;
      func_0x000107c61174(&PTR____CFConstantStringClassReference_110f41f78);
      func_0x000107c5faec();
      uVar25 = uVar24;
      func_0x000107c61170(ppuVar16);
      ppuVar40 = &PTR____CFConstantStringClassReference_110f41f98;
      ppuVar16 = ppuVar40;
      func_0x000107c61174(&PTR____CFConstantStringClassReference_110f41f98);
      func_0x000107c5faec();
      func_0x000107c61170(ppuVar16);
      lVar11 = _DAT_1138071b0;
      lVar10 = _DAT_112f50c88;
      lVar9 = _DAT_112f50ac8;
      func_0x000107c61428(unaff_x20 + _DAT_1138071b0,auStack_b8,0,0);
      ppppppuVar43 = (undefined8 ******)0x0;
      do {
        if (pppppppuVar19[2] <= ppppppuVar43) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x10328d0c8);
          (*pcVar12)();
        }
        pppppppuVar13 = pppppppuVar19 + (long)ppppppuVar43 * 6 + 4;
        ppppppuVar46 = *pppppppuVar13;
        ppppppuVar3 = pppppppuVar13[2];
        ppppppuVar5 = pppppppuVar13[3];
        ppppppuVar4 = pppppppuVar13[4];
        ppppppuVar6 = pppppppuVar13[5];
        uVar27 = *(ulong *)(lVar30 + lVar10);
        if (uVar27 >> 0x3e == 0) {
          uVar17 = *(ulong *)((uVar27 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar17 = uVar27 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar27) {
            uVar17 = uVar27;
          }
          func_0x000107c60480();
        }
        if ((long)ppppppuVar46 < (long)uVar17) {
          uVar27 = *(ulong *)(lVar30 + lVar10);
          uVar18 = 0;
          ppuStack_1d8 = ppuVar34;
          uStack_1d0 = uVar14;
          FUN_10328ff98(0,0x112e0fd70,&PTR_PTR_1126c2098);
          uStack_1b0 = uVar18;
          if ((uVar27 & 0xc000000000000001) == 0) {
            if ((long)ppppppuVar46 < 0) {
                    /* WARNING: Does not return */
              pcVar12 = (code *)SoftwareBreakpoint(1,0x10328d0cc);
              (*pcVar12)();
            }
            if (*(undefined8 *******)((uVar27 & 0xffffffffffffff8) + 0x10) <= ppppppuVar46) {
                    /* WARNING: Does not return */
              pcVar12 = (code *)SoftwareBreakpoint(1,0x10328d0d0);
              (*pcVar12)();
            }
            ppppppuVar42 = *(undefined8 *******)(uVar27 + (long)ppppppuVar46 * 8 + 0x20);
            func_0x000107c61434(ppppppuVar3);
            func_0x000107c61434(ppppppuVar4);
            func_0x000107c61434(uVar14);
            func_0x000107c61174();
          }
          else {
            func_0x000107c61434(ppppppuVar3);
            func_0x000107c61434(ppppppuVar4);
            func_0x000107c61434(uVar14);
            ppppppuVar42 = ppppppuVar46;
            FUN_10328edd8(ppppppuVar46,uVar27,&PTR_PTR_1126c2098,0x112e0fd70);
          }
          puStack_180 = PTR___sSiN_11034deb0;
          puStack_150 = PTR___sSSN_11034da80;
          puStack_120 = PTR___sSiN_11034deb0;
          puStack_f0 = PTR___sSiN_11034deb0;
          uStack_108 = 0;
          puStack_c0 = PTR___sSiN_11034deb0;
          ppppppuStack_1c8 = ppppppuVar42;
          ppuStack_1a8 = ppuVar35;
          uStack_1a0 = uVar20;
          ppppppuStack_198 = ppppppuVar46;
          ppuStack_178 = ppuVar37;
          uStack_170 = uVar22;
          ppppppuStack_168 = ppppppuVar5;
          ppppppuStack_160 = ppppppuVar4;
          ppuStack_148 = ppuVar38;
          uStack_140 = uVar23;
          ppppppuStack_138 = ppppppuVar6;
          ppuStack_118 = ppuVar39;
          uStack_110 = uVar24;
          ppuStack_e8 = ppuVar40;
          uStack_e0 = uVar25;
          func_0x000107c61434();
          func_0x000107c61434(uVar22);
          func_0x000107c61434(uVar23);
          func_0x000107c61434(uVar24);
          func_0x000107c61434(uVar25);
          func_0x000107c6142c(ppppppuVar3);
          ppppppuStack_d8 = ppppppuVar6;
          func_0x0001000285a8(0x112d4b5f8,&UNK_10d9121b0);
          uVar27 = 6;
          func_0x000107c60498();
          func_0x000107c6157c();
          lVar45 = 0x20;
          do {
            FUN_10328faa0(auStack_1f8 + lVar45,&pppppppuStack_230,0x112d4b5f0,&UNK_10d9127d0);
            uVar17 = uStack_228;
            pppppppuVar13 = pppppppuStack_230;
            pppppppuVar33 = pppppppuStack_230;
            uVar28 = uStack_228;
            func_0x000100029284();
            if ((uVar28 & 1) != 0) {
                    /* WARNING: Does not return */
              pcVar12 = (code *)SoftwareBreakpoint(1,0x10328d0c0);
              (*pcVar12)();
            }
            uVar28 = (ulong)pppppppuVar33 >> 3 & 0x1ffffffffffffff8;
            *(ulong *)(uVar27 + 0x40 + uVar28) =
                 *(ulong *)(uVar27 + 0x40 + uVar28) | 1L << ((ulong)pppppppuVar33 & 0x3f);
            puVar1 = (undefined8 *)(*(long *)(uVar27 + 0x30) + (long)pppppppuVar33 * 0x10);
            *puVar1 = pppppppuVar13;
            puVar1[1] = uVar17;
            func_0x000100102924(&uStack_220,*(long *)(uVar27 + 0x38) + (long)pppppppuVar33 * 0x20);
            if (SCARRY8(*(long *)(uVar27 + 0x10),1)) {
                    /* WARNING: Does not return */
              pcVar12 = (code *)SoftwareBreakpoint(1,0x10328d0c4);
              (*pcVar12)();
            }
            *(long *)(uVar27 + 0x10) = *(long *)(uVar27 + 0x10) + 1;
            lVar45 = lVar45 + 0x30;
          } while (lVar45 != 0x140);
          func_0x000107c61574(uVar27);
          uVar18 = 0x112d4b5f0;
          func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
          func_0x000107c61408(&ppuStack_1d8,6,uVar18);
          uVar17 = *(ulong *)(unaff_x20 + lVar11);
          if (uVar17 != 0) {
            lVar45 = 0;
            FUN_10328ff98(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
            auStack_250[0] = uVar17;
            lStack_238 = lVar45;
            if (lVar45 == 0) {
              func_0x000107c61174(uVar17);
              func_0x000107c61174();
              func_0x00010328fae8(auStack_250,0x112d387f8,&UNK_10d902650);
              func_0x000107c61434(uVar27);
              ppuVar16 = ppuVar36;
              uVar28 = uVar21;
              func_0x000100029284();
              func_0x000107c61574(uVar27);
              if ((uVar28 & 1) == 0) {
                func_0x000107c61170(uVar17);
                uStack_228 = 0;
                pppppppuStack_230 = (undefined8 *******)0x0;
                uStack_218 = 0;
                uStack_220 = 0;
              }
              else {
                uVar28 = uVar27;
                func_0x000107c61558();
                auStack_250[0] = uVar27;
                if ((int)uVar28 == 0) {
                  func_0x0001010fc388();
                }
                uVar27 = auStack_250[0];
                func_0x000107c6142c(*(undefined8 *)
                                     (*(long *)(auStack_250[0] + 0x30) + (long)ppuVar16 * 0x10 + 8))
                ;
                func_0x000100102924(*(long *)(uVar27 + 0x38) + (long)ppuVar16 * 0x20,
                                    &pppppppuStack_230);
                func_0x0001010f6278(ppuVar16,uVar27);
                func_0x000107c61170(uVar17);
              }
              func_0x00010328fae8(&pppppppuStack_230,0x112d387f8,&UNK_10d902650);
            }
            else {
              func_0x000100102924(auStack_250,&pppppppuStack_230);
              func_0x000107c61174(uVar17);
              func_0x000107c61174();
              uVar28 = uVar27;
              func_0x000107c61558();
              ppuVar16 = ppuVar36;
              uVar26 = uVar21;
              auStack_250[0] = uVar27;
              func_0x000100029284();
              uVar29 = (ulong)~(uint)uVar26 & 1;
              lVar45 = *(long *)(uVar27 + 0x10) + uVar29;
              if (SCARRY8(*(long *)(uVar27 + 0x10),uVar29)) {
                    /* WARNING: Does not return */
                pcVar12 = (code *)SoftwareBreakpoint(1,0x10328d0d4);
                (*pcVar12)();
              }
              if (*(long *)(uVar27 + 0x18) < lVar45) {
                func_0x000100102b0c(lVar45,uVar28);
                ppuVar16 = ppuVar36;
                uVar28 = uVar21;
                func_0x000100029284();
                uVar27 = auStack_250[0];
                if (((uint)uVar26 & 1) != ((uint)uVar28 & 1)) {
                  func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
                  pcVar12 = (code *)SoftwareBreakpoint(1,0x10328d144);
                  (*pcVar12)();
                }
              }
              else {
                uVar27 = auStack_250[0];
                if ((uVar28 & 1) == 0) {
                  func_0x0001010fc388();
                  uVar27 = auStack_250[0];
                }
              }
              auStack_250[0] = uVar27;
              if ((uVar26 & 1) == 0) {
                lVar45 = uVar27 + ((ulong)ppuVar16 >> 6) * 8;
                *(ulong *)(lVar45 + 0x40) =
                     *(ulong *)(lVar45 + 0x40) | 1L << ((ulong)ppuVar16 & 0x3f);
                puVar2 = (ulong *)(*(long *)(uVar27 + 0x30) + (long)ppuVar16 * 0x10);
                *puVar2 = (ulong)ppuVar36;
                puVar2[1] = uVar21;
                func_0x000100102924(&pppppppuStack_230,
                                    *(long *)(uVar27 + 0x38) + (long)ppuVar16 * 0x20);
                func_0x000107c61434(uVar21);
                func_0x000107c61170(uVar17);
                if (SCARRY8(*(long *)(uVar27 + 0x10),1)) {
                    /* WARNING: Does not return */
                  pcVar12 = (code *)SoftwareBreakpoint(1,0x10328d0d8);
                  (*pcVar12)();
                }
                *(long *)(uVar27 + 0x10) = *(long *)(uVar27 + 0x10) + 1;
              }
              else {
                lVar45 = *(long *)(uVar27 + 0x38) + (long)ppuVar16 * 0x20;
                func_0x000100183ab8(lVar45);
                func_0x000100102924(&pppppppuStack_230,lVar45);
                func_0x000107c61170(uVar17);
              }
            }
          }
          lVar45 = *(long *)(unaff_x20 + lVar9);
          if (lVar45 == 0) {
            func_0x000107c6142c(uVar27);
          }
          else {
            func_0x000107c615f0(lVar45);
            uVar17 = uVar27;
            func_0x000107c5f9dc(uVar27,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                                PTR___sSSSHsWP_11034da90);
            func_0x000107c4df80(lVar45);
            func_0x000107c6142c(uVar27);
            func_0x000107c615e8(lVar45);
            func_0x000107c61170(uVar17);
          }
        }
        ppppppuVar43 = (undefined8 ******)((long)ppppppuVar43 + 1);
      } while (ppppppuVar43 != ppppppuVar44);
      func_0x000107c6142c(uVar14);
      func_0x000107c6142c(uVar20);
      func_0x000107c6142c(uVar22);
      func_0x000107c6142c(uVar23);
      func_0x000107c6142c(uVar24);
      func_0x000107c6142c(uVar25);
      func_0x000107c6142c(uVar21);
      func_0x000107c61170(lVar32);
      func_0x000107c61170(ppuVar15);
    }
  }
  func_0x000107c6142c(pppppppuVar19);
  return;
}



/* Entry: 10328d150; end: 10328d177; -[SCSpotlightCustomInterstitialsOperaPlugin interstitialDidBecomeHidden] */

void FUN_10328d150(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10328ba90();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10328d178; end: 10328d1f7;  */

void FUN_10328d178(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = param_2;
  func_0x000107c5c94c();
  func_0x000107c61180();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x000107c5b2d0();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x000107c5faec();
      func_0x000107c61170(lVar1);
      goto LAB_10328d1e0;
    }
  }
  lVar2 = 0;
  plVar3 = (long *)0x0;
LAB_10328d1e0:
  lVar1 = param_2[1];
  *param_2 = lVar2;
  param_2[1] = (long)plVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar1);
  return;
}



/* Entry: 10328d1f8; end: 10328d257; -[SCSpotlightCustomInterstitialsOperaPlugin init] */

void FUN_10328d1f8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpotlightCustomInterstitials.SpotlightCustomInterstitalsOperaPlugin",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10328d224);
  (*pcVar1)();
}



/* Entry: 10328d258; end: 10328d2ff; -[SCSpotlightCustomInterstitialsOperaPlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010328d2d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010328d2d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10328d258(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f50ac8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f50ad0));
  func_0x000100d3fde0(param_1 + _DAT_112f50ac0);
  func_0x00010328fae8(param_1 + _DAT_112f50ad8,0x112d373d8,&UNK_10d9014c0);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f50ae0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1138071a0));
  return;
}



/* Entry: 10328d300; end: 10328d93b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10328d300(long *param_1,long param_2,long param_3,undefined *param_4)

{
  byte bVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined *puVar10;
  long unaff_x20;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined1 auStack_b8 [24];
  undefined8 uStack_a0;
  undefined *apuStack_98 [3];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  plVar2 = param_1;
  func_0x000103bb9c70();
  if ((((param_1 == (long *)*plVar2 && param_2 == plVar2[1]) ||
       (func_0x000107c605b8(param_1,param_2,(long *)*plVar2,plVar2[1],0), ((ulong)param_1 & 1) != 0)
       ) && (param_3 != 0)) &&
     (lVar11 = *(long *)(param_3 + _DAT_11307abc8), *(long *)(lVar11 + 0x10) != 0)) {
    func_0x000107c61434(lVar11);
    lVar12 = -0x2fffffffffffffd9;
    uVar9 = 0;
    func_0x000100029284(0xd000000000000027);
    if ((uVar9 & 1) == 0) {
      func_0x000107c6142c(lVar11);
    }
    else {
      func_0x0001000bb420(*(long *)(lVar11 + 0x38) + lVar12 * 0x20,&uStack_80);
      func_0x000107c6142c(lVar11);
      uVar3 = 0;
      FUN_10328ff98(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      puVar14 = PTR___sypN_11034f1a8;
      ppuVar4 = apuStack_98;
      func_0x000107c6147c(ppuVar4,&uStack_80,PTR___sypN_11034f1a8 + 8,uVar3,6);
      if (((ulong)ppuVar4 & 1) != 0) {
        puVar5 = apuStack_98[0];
        func_0x000107c49820(apuStack_98[0]);
        func_0x000107c61170(apuStack_98[0]);
        lVar11 = _DAT_112f50b30;
        lVar12 = *(long *)(unaff_x20 + _DAT_1138071a0);
        func_0x000107c61428(lVar12 + _DAT_112f50b30,apuStack_98,0,0);
        plVar13 = *(long **)(lVar12 + lVar11);
        bVar1 = *(byte *)(plVar13 + 4);
        func_0x000107c61434(plVar13);
        plVar2 = plVar13 + 8;
        func_0x000107c60268(plVar2,~(-1L << ((ulong)bVar1 & 0x3f)));
        if (plVar2 == (long *)(1L << ((ulong)*(byte *)(plVar13 + 4) & 0x3f))) {
LAB_10328d82c:
          func_0x000107c6142c();
          plVar6 = plVar13;
          if (param_4 == (undefined *)0x0) goto LAB_10328d904;
LAB_10328d834:
          func_0x000103bb6e38();
          if (*(long *)(param_4 + 0x10) == 0) goto LAB_10328d904;
          lVar11 = *plVar6;
          puVar15 = (undefined *)plVar6[1];
          func_0x000107c61434(puVar15);
          func_0x000107c61434(param_4);
          puVar10 = puVar15;
          func_0x000100029284(lVar11);
          if (((ulong)puVar10 & 1) == 0) {
            func_0x000107c6142c(param_4);
            uStack_78 = 0;
            uStack_80 = 0;
            lStack_68 = 0;
            uStack_70 = 0;
          }
          else {
            func_0x0001000bb420(*(long *)(param_4 + 0x38) + lVar11 * 0x20,&uStack_80);
            func_0x000107c6142c(puVar15);
            puVar15 = param_4;
          }
          func_0x000107c6142c(puVar15);
          if (lStack_68 == 0) goto LAB_10328d90c;
          puVar8 = &uStack_a0;
          func_0x000107c6147c(puVar8,&uStack_80,puVar14 + 8,uVar3,6);
          if (((ulong)puVar8 & 1) != 0) {
            uVar3 = uStack_a0;
            func_0x000107c49820(uStack_a0);
            func_0x000107c61170(uStack_a0);
            goto LAB_10328d928;
          }
        }
        else {
          FUN_10328fa58();
          func_0x000107c61180();
          func_0x000107c6142c(plVar13);
          plVar6 = *(long **)((long)plVar2 + _DAT_112f50b78);
          func_0x000107c61174();
          func_0x000107c61170(plVar2);
          uVar7 = 0;
          func_0x000103295c88(0);
          plVar13 = plVar6;
          func_0x000107c61480(plVar6,uVar7);
          if (plVar13 != (long *)0x0) {
            lVar11 = *(long *)(unaff_x20 + _DAT_112f50ae0);
            FUN_10328fb28();
            if (((*(byte *)(lVar11 + 0x18) & 1) != 0) ||
               (func_0x000107c61428(lVar11 + 0x10,auStack_b8,0,0),
               *(long *)(*(long *)(lVar11 + 0x10) + 0x10) == 0)) {
              FUN_1032998c4(plVar13);
            }
            func_0x000107c61170(plVar6);
            goto LAB_10328d82c;
          }
          func_0x000107c61170();
          if (param_4 != (undefined *)0x0) goto LAB_10328d834;
LAB_10328d904:
          uStack_78 = 0;
          uStack_80 = 0;
          lStack_68 = 0;
          uStack_70 = 0;
LAB_10328d90c:
          func_0x00010328fae8(&uStack_80,0x112d387f8,&UNK_10d902650);
        }
        uVar3 = 0;
LAB_10328d928:
        FUN_1032997f0(puVar5,uVar3);
        return;
      }
    }
  }
  puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_4 == (undefined *)0x0) goto LAB_10328d75c;
  if (*(long *)(param_4 + 0x10) == 0) {
LAB_10328d538:
    lVar11 = *(long *)(param_4 + 0x10);
    puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    func_0x000107c61434(param_4);
    uVar9 = 0;
    lVar11 = -0x2fffffffffffffef;
    func_0x000100029284(0xd000000000000011);
    if ((uVar9 & 1) == 0) {
      func_0x000107c6142c(param_4);
      goto LAB_10328d538;
    }
    func_0x0001000bb420(*(long *)(param_4 + 0x38) + lVar11 * 0x20,&uStack_80);
    func_0x000107c6142c(param_4);
    uVar3 = 0x112da1fa0;
    func_0x0001000285a8(0x112da1fa0,&UNK_10d945e90);
    ppuVar4 = apuStack_98;
    func_0x000107c6147c(ppuVar4,&uStack_80,PTR___sypN_11034f1a8 + 8,uVar3,6);
    if (((ulong)ppuVar4 & 1) == 0) goto LAB_10328d538;
    lVar11 = *(long *)(param_4 + 0x10);
    puVar14 = apuStack_98[0];
  }
  if (lVar11 != 0) {
    func_0x000107c61434(param_4);
    lVar11 = 0x74616469646e6163;
    uVar9 = 0xe900000000000065;
    func_0x000100029284(0x74616469646e6163);
    if ((uVar9 & 1) == 0) {
      func_0x000107c6142c(param_4);
    }
    else {
      func_0x0001000bb420(*(long *)(param_4 + 0x38) + lVar11 * 0x20,&uStack_80);
      func_0x000107c6142c(param_4);
      uVar3 = 0;
      FUN_10329b290(0);
      ppuVar4 = apuStack_98;
      func_0x000107c6147c(ppuVar4,&uStack_80,PTR___sypN_11034f1a8 + 8,uVar3,6);
      lVar11 = _DAT_1138071a8;
      if (((ulong)ppuVar4 & 1) != 0) {
        func_0x000107c61428(unaff_x20 + _DAT_1138071a8,&uStack_80,0,0);
        lVar11 = unaff_x20 + lVar11;
        func_0x000107c61618();
        if (lVar11 == 0) {
          func_0x000107c6142c(puVar14);
        }
        else {
          uVar3 = 0;
          FUN_10328ff98(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
          puVar5 = puVar14;
          func_0x000107c5fc48(puVar14,uVar3);
          func_0x000107c6142c(puVar14);
          func_0x000107c5c9b4(lVar11);
          func_0x000107c615e8(lVar11);
          func_0x000107c61170(puVar5);
        }
        goto LAB_10328d890;
      }
    }
  }
  if (*(long *)(param_4 + 0x10) != 0) {
    func_0x000107c61434(param_4);
    lVar11 = 0x64654479726f7473;
    uVar9 = 0xed00007046657075;
    func_0x000100029284(0x64654479726f7473);
    if ((uVar9 & 1) == 0) {
      func_0x000107c6142c(puVar14);
      puVar14 = param_4;
    }
    else {
      func_0x0001000bb420(*(long *)(param_4 + 0x38) + lVar11 * 0x20,&uStack_80);
      func_0x000107c6142c(param_4);
      uVar3 = 0;
      FUN_10328ff98(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      ppuVar4 = apuStack_98;
      func_0x000107c6147c(ppuVar4,&uStack_80,PTR___sypN_11034f1a8 + 8,uVar3,6);
      if (((ulong)ppuVar4 & 1) != 0) {
        func_0x000107c5d38c(apuStack_98[0]);
        func_0x000107c61170(apuStack_98[0]);
        lVar11 = _DAT_1138071a8;
        func_0x000107c61428(unaff_x20 + _DAT_1138071a8,&uStack_80,0,0);
        lVar11 = unaff_x20 + lVar11;
        func_0x000107c61618();
        if (lVar11 != 0) {
          puVar5 = puVar14;
          func_0x000107c5fc48(puVar14,uVar3);
          func_0x000107c6142c(puVar14);
          func_0x000107c5c9b8(lVar11);
          func_0x000107c615e8(lVar11);
          apuStack_98[0] = puVar5;
LAB_10328d890:
          func_0x000107c61170(apuStack_98[0]);
          return;
        }
      }
    }
  }
LAB_10328d75c:
  func_0x000107c6142c(puVar14);
  return;
}



/* Entry: 10328d93c; end: 10328d9f7; -[SCSpotlightCustomInterstitialsOperaPlugin operaViewDidSendEvent:page:params:] */

/* WARNING: Possible PIC construction at 0x00010328d9dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010328d9e0) */

void FUN_10328d93c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  if (param_5 != 0) {
    func_0x000107c5f9e8(param_5,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                        PTR___sSSSHsWP_11034da90);
  }
  uVar1 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_10328d300(param_3,param_2,param_4,param_5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 10328d9f8; end: 10328e0d3;  */

void FUN_10328d9f8(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  uVar3 = param_2;
  uVar4 = param_3;
  func_0x000100029284();
  lVar5 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar8;
  if (SCARRY8(lVar5,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10328dad0);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    func_0x00010328e338(lVar6,param_4 & 1);
    uVar3 = param_2;
    uVar8 = param_3;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10328da98);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    func_0x00010328ddf4();
    lVar6 = *unaff_x20;
    goto joined_r0x00010328dae4;
  }
  lVar6 = *unaff_x20;
joined_r0x00010328dae4:
  if ((uVar4 & 1) != 0) {
    uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8);
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar7);
    return;
  }
  lVar5 = lVar6 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar3 & 0x3f);
  puVar1 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar3 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10328db48);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 10328e0d4; end: 10328e86f;  */

void FUN_10328e0d4(long param_1,ulong param_2)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  ulong *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  
  lVar11 = *unaff_x20;
  lVar1 = *(long *)(lVar11 + 0x18);
  if (*(long *)(lVar11 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar13 = 0x112f509b0;
  func_0x0001000285a8(0x112f509b0,&UNK_10dba5bd0);
  lVar4 = lVar11;
  func_0x000107c60490(lVar11,lVar1,param_2,uVar13);
  if (*(long *)(lVar11 + 0x10) == 0) {
LAB_10328e304:
    func_0x000107c61574(lVar11);
    *unaff_x20 = lVar4;
    return;
  }
  puVar12 = (ulong *)(lVar11 + 0x40);
  uVar9 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
  uVar16 = 0xffffffffffffffff;
  if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
    uVar16 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar16 = uVar16 & *puVar12;
  lVar1 = lVar4 + 0x40;
  lVar7 = 0;
  do {
    if (uVar16 == 0) {
      do {
        lVar15 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10328e334);
          (*pcVar3)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar15) {
          if ((param_2 & 1) != 0) {
            uVar16 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
            if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
              *puVar12 = -1L << (uVar16 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar12,uVar16 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar11 + 0x10) = 0;
          }
          goto LAB_10328e304;
        }
        uVar16 = puVar12[lVar15];
        lVar7 = lVar7 + 1;
      } while (uVar16 == 0);
      uVar6 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
    }
    else {
      uVar6 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
      lVar15 = lVar7;
    }
    uVar6 = LZCOUNT(uVar6) | lVar15 << 6;
    uVar14 = *(undefined8 *)(*(long *)(lVar11 + 0x30) + uVar6 * 8);
    uVar13 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar6 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c6157c(uVar13);
    }
    uVar5 = *(ulong *)(lVar4 + 0x28);
    func_0x000107c60688(uVar5,uVar14);
    uVar10 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
    uVar5 = uVar5 & (uVar10 ^ 0xffffffffffffffff);
    uVar8 = uVar5 >> 6;
    uVar6 = -1L << (uVar5 & 0x3f) & (*(ulong *)(lVar1 + uVar8 * 8) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar2 = false;
      uVar6 = 0x3f - uVar10 >> 6;
      do {
        uVar5 = uVar8 + 1;
        if ((uVar5 == uVar6) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10328e338);
          (*pcVar3)();
        }
        uVar8 = 0;
        if (uVar5 != uVar6) {
          uVar8 = uVar5;
        }
        bVar2 = (bool)(uVar5 == uVar6 | bVar2);
        uVar5 = *(ulong *)(lVar1 + uVar8 * 8);
      } while (uVar5 == 0xffffffffffffffff);
      uVar5 = ~uVar5;
      uVar6 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar8 << 6;
    }
    else {
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar5 & 0x7fffffffffffffc0;
    }
    uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar8) = 1L << (uVar6 & 0x3f) | *(ulong *)(lVar1 + uVar8);
    *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar6 * 8) = uVar14;
    *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar6 * 8) = uVar13;
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
    lVar7 = lVar15;
  } while( true );
}



/* Entry: 10328e870; end: 10328ea0b;  */

ulong FUN_10328e870(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10328e940);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10328e944);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000103299ad0(0);
    uVar3 = param_1;
    func_0x000107c615f0();
    func_0x000107c61480();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar4 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    func_0x000107c60488(param_1,uVar3);
    uVar4 = 0;
    func_0x000103299ad0(0);
    uVar3 = param_1;
    func_0x000107c61480(param_1,uVar4);
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd000000000000030,0x800000010f134dc0);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10328ea0c);
  (*pcVar2)();
}



/* Entry: 10328ea0c; end: 10328ec33;  */

ulong FUN_10328ea0c(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10328eb58);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10328eb5c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    uVar4 = param_1;
    func_0x000107c615f0();
    func_0x000107c61494();
    if (uVar4 != 0) {
      uVar4 = param_1;
      func_0x000107c614f0();
      uVar3 = 0;
      FUN_10328ff98(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
      func_0x000107c61488(uVar4,uVar3);
      if (uVar4 != 0) {
        return param_1;
      }
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
    uVar4 = param_1;
    func_0x000107c61494();
    if (uVar4 != 0) {
      uVar4 = param_1;
      func_0x000107c614f0();
      uVar3 = 0;
      FUN_10328ff98(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
      func_0x000107c61488(uVar4,uVar3);
      if (uVar4 != 0) {
        return param_1;
      }
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x0001000285a8(0x112f50b20,&UNK_10dba5bc0);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10328ec34);
  (*pcVar2)();
}



/* Entry: 10328ec34; end: 10328edd7;  */

ulong FUN_10328ec34(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10328ed0c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10328ed10);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    uVar3 = param_1;
    func_0x000107c615f0();
    func_0x000107c61494();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar4 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    func_0x000107c60488(param_1,uVar3);
    uVar3 = param_1;
    func_0x000107c61494();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd000000000000019,0x800000010f134da0);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10328edd8);
  (*pcVar2)();
}



/* Entry: 10328edd8; end: 10328ef93;  */

ulong FUN_10328edd8(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10328eebc);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10328eec0);
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
  FUN_10328ff98(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10328ef94);
  (*pcVar2)();
}



/* Entry: 10328ef94; end: 10328efa7;  */

ulong FUN_10328ef94(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10328eebc);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10328eec0);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126d9770;
    func_0x000107c61168(PTR_PTR_1126d9770);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126d9770;
    func_0x000107c61168(PTR_PTR_1126d9770);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_10328ff98(0,0x112e0fd90,&PTR_PTR_1126d9770);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10328ef94);
  (*pcVar2)();
}



/* Entry: 10328efa8; end: 10328f0e7;  */

void FUN_10328efa8(ulong *param_1)

{
  long *plVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  long *plStack_50;
  ulong uStack_48;
  
  uVar12 = *param_1;
  uVar6 = uVar12;
  func_0x000107c61558();
  if ((uVar6 & 1) == 0) {
    FUN_10328f8f8();
  }
  uVar13 = *(ulong *)(uVar12 + 0x10);
  plVar1 = (long *)(uVar12 + 0x20);
  uVar6 = uVar13;
  plStack_50 = plVar1;
  uStack_48 = uVar13;
  func_0x000107c60574();
  if ((long)uVar6 < (long)uVar13) {
    puVar14 = (undefined *)(uVar13 >> 1);
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (1 < uVar13) {
      uVar3 = 0;
      func_0x000103299ad0(0);
      puVar4 = puVar14;
      func_0x000107c60380(puVar14,uVar3);
      *(undefined **)(puVar4 + 0x10) = puVar14;
    }
    puStack_68 = puVar4 + 0x20;
    puStack_60 = puVar14;
    FUN_10328f0e8(&puStack_68,auStack_58,&plStack_50,uVar6);
    *(undefined8 *)(puVar4 + 0x10) = 0;
    func_0x000107c61574(puVar4);
  }
  else if ((uVar13 != 0) && (uVar13 != 1)) {
    lVar5 = -1;
    uVar6 = 1;
    plVar7 = plVar1;
    do {
      lVar8 = plVar1[uVar6];
      lVar9 = lVar5;
      plVar10 = plVar7;
      do {
        lVar11 = *plVar10;
        if (*(long *)(lVar11 + 0x10) <= *(long *)(lVar8 + 0x10)) break;
        *plVar10 = lVar8;
        plVar10[1] = lVar11;
        bVar2 = lVar9 != -1;
        lVar9 = lVar9 + 1;
        plVar10 = plVar10 + -1;
      } while (bVar2);
      uVar6 = uVar6 + 1;
      plVar7 = plVar7 + 1;
      lVar5 = lVar5 + -1;
    } while (uVar6 != uVar13);
  }
  *param_1 = uVar12;
  return;
}



/* Entry: 10328f0e8; end: 10328f477;  */

void FUN_10328f0e8(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  ulong *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  long *plVar20;
  long lVar21;
  long unaff_x21;
  ulong *puVar22;
  ulong uVar23;
  undefined *puStack_58;
  
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar7 = param_3[1];
  if (0 < lVar7) {
    lVar9 = 0;
    do {
      puVar6 = puStack_58;
      lVar21 = lVar9 + 1;
      if (lVar21 < lVar7) {
        lVar10 = *param_3;
        lVar12 = *(long *)(*(long *)(lVar10 + lVar21 * 8) + 0x10);
        lVar15 = *(long *)(*(long *)(lVar10 + lVar9 * 8) + 0x10);
        lVar16 = lVar9 + 2;
        lVar18 = lVar12;
        do {
          lVar17 = lVar16;
          lVar21 = lVar7;
          if (lVar7 == lVar17) break;
          lVar21 = *(long *)(*(long *)(lVar10 + lVar17 * 8) + 0x10);
          bVar3 = lVar18 <= lVar21;
          lVar16 = lVar17 + 1;
          lVar18 = lVar21;
          lVar21 = lVar17;
        } while (lVar12 < lVar15 != bVar3);
        if (lVar12 < lVar15) {
          if (lVar21 < lVar9) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10328f44c);
            (*pcVar2)();
          }
          if (lVar9 < lVar21) {
            puVar8 = (undefined8 *)(lVar10 + lVar21 * 8);
            puVar13 = (undefined8 *)(lVar10 + lVar9 * 8);
            lVar16 = lVar21;
            lVar7 = lVar9;
            do {
              puVar8 = puVar8 + -1;
              lVar16 = lVar16 + -1;
              if (lVar7 != lVar16) {
                if (lVar10 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x10328f46c);
                  (*pcVar2)();
                }
                uVar19 = *puVar13;
                *puVar13 = *puVar8;
                *puVar8 = uVar19;
              }
              lVar7 = lVar7 + 1;
              puVar13 = puVar13 + 1;
            } while (lVar7 < lVar16);
            lVar7 = param_3[1];
          }
        }
      }
      lVar16 = lVar21;
      if (lVar21 < lVar7) {
        if (SBORROW8(lVar21,lVar9)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10328f448);
          (*pcVar2)();
        }
        if (lVar21 - lVar9 < param_4) {
          if (SCARRY8(lVar9,param_4)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10328f450);
            (*pcVar2)();
          }
          lVar18 = lVar9 + param_4;
          if (lVar7 <= lVar9 + param_4) {
            lVar18 = lVar7;
          }
          if (lVar18 < lVar9) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10328f454);
            (*pcVar2)();
          }
          if (lVar21 != lVar18) {
            lVar7 = *param_3;
            plVar14 = (long *)(lVar7 + lVar21 * 8 + -8);
            lVar10 = lVar9 - lVar21;
            do {
              lVar12 = *(long *)(lVar7 + lVar21 * 8);
              lVar16 = lVar10;
              plVar20 = plVar14;
              do {
                lVar15 = *plVar20;
                if (*(long *)(lVar15 + 0x10) <= *(long *)(lVar12 + 0x10)) break;
                if (lVar7 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x10328f458);
                  (*pcVar2)();
                }
                *plVar20 = lVar12;
                plVar20[1] = lVar15;
                bVar3 = lVar16 != -1;
                lVar16 = lVar16 + 1;
                plVar20 = plVar20 + -1;
              } while (bVar3);
              lVar21 = lVar21 + 1;
              plVar14 = plVar14 + 1;
              lVar10 = lVar10 + -1;
              lVar16 = lVar18;
            } while (lVar21 != lVar18);
          }
        }
      }
      if (lVar16 < lVar9) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10328f438);
        (*pcVar2)();
      }
      puVar4 = puStack_58;
      func_0x000107c61558();
      puVar5 = puVar6;
      if (((ulong)puVar4 & 1) == 0) {
        puVar5 = (undefined *)0x0;
        func_0x0001000a91e0(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
      }
      uVar23 = *(ulong *)(puVar5 + 0x10);
      puVar6 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar23) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
        func_0x0001000a91e0(puVar6,uVar23 + 1,1,puVar5);
      }
      *(ulong *)(puVar6 + 0x10) = uVar23 + 1;
      *(long *)(puVar6 + uVar23 * 0x10 + 0x20) = lVar9;
      *(long *)(puVar6 + uVar23 * 0x10 + 0x28) = lVar16;
      puStack_58 = puVar6;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10328f470);
        (*pcVar2)();
      }
      FUN_10328f478(&puStack_58,*param_1,param_3);
      puVar6 = puStack_58;
      if (unaff_x21 != 0) goto LAB_10328f408;
      lVar7 = param_3[1];
      lVar9 = lVar16;
    } while (lVar16 < lVar7);
  }
  puVar6 = puStack_58;
  lVar7 = *param_1;
  if (lVar7 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10328f478);
    (*pcVar2)();
  }
  puVar4 = puStack_58;
  func_0x000107c61558();
  if (((ulong)puVar4 & 1) == 0) {
    func_0x000100e06d54();
  }
  puVar22 = (ulong *)(puVar6 + 0x10);
  uVar23 = *puVar22;
  while (1 < uVar23) {
    lVar9 = *param_3;
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10328f474);
      (*pcVar2)();
    }
    plVar14 = (long *)(puVar6 + uVar23 * 0x10);
    lVar21 = *plVar14;
    puVar1 = puVar22 + uVar23 * 2;
    uVar11 = puVar1[1];
    FUN_10328f6e0(lVar9 + lVar21 * 8,lVar9 + *puVar1 * 8,lVar9 + uVar11 * 8,lVar7);
    if (unaff_x21 != 0) break;
    if ((long)uVar11 < lVar21) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10328f43c);
      (*pcVar2)();
    }
    if (*puVar22 <= uVar23 - 2) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10328f440);
      (*pcVar2)();
    }
    *plVar14 = lVar21;
    plVar14[1] = uVar11;
    uVar11 = *puVar22;
    lVar9 = uVar11 - uVar23;
    if (uVar11 < uVar23) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10328f444);
      (*pcVar2)();
    }
    uVar23 = uVar11 - 1;
    func_0x000107c610b8(puVar1,puVar1 + 2,lVar9 * 0x10);
    *puVar22 = uVar23;
  }
LAB_10328f408:
  func_0x000107c6142c(puVar6);
  return;
}



/* Entry: 10328f478; end: 10328f6df;  */

undefined8 FUN_10328f478(ulong *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x21;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  uVar8 = *param_1;
  if (1 < *(ulong *)(uVar8 + 0x10)) {
    uVar6 = uVar8;
    func_0x000107c61558();
    if ((uVar6 & 1) == 0) {
      func_0x000100e06d54();
    }
    *param_1 = uVar8;
    uVar6 = *(ulong *)(uVar8 + 0x10);
    do {
      lVar9 = uVar6 - 1;
      if (uVar6 < 4) {
        if (uVar6 == 3) {
          bVar5 = SBORROW8(*(long *)(uVar8 + 0x28),*(long *)(uVar8 + 0x20));
          lVar7 = *(long *)(uVar8 + 0x28) - *(long *)(uVar8 + 0x20);
          goto LAB_10328f54c;
        }
        if (uVar6 < 2) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10328f6c8);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar7 = *plVar1;
        lVar12 = plVar1[1];
        bVar5 = SBORROW8(lVar12,lVar7);
        lVar12 = lVar12 - lVar7;
LAB_10328f5b0:
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10328f6b8);
          (*pcVar4)();
        }
        lVar7 = uVar8 + lVar9 * 0x10;
        lVar2 = *(long *)(lVar7 + 0x20);
        lVar7 = *(long *)(lVar7 + 0x28);
        if (SBORROW8(lVar7,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10328f6c0);
          (*pcVar4)();
        }
        lVar10 = lVar9;
        if (lVar7 - lVar2 < lVar12) {
          return 1;
        }
      }
      else {
        lVar12 = uVar8 + 0x20 + uVar6 * 0x10;
        if (SBORROW8(*(long *)(lVar12 + -0x38),*(long *)(lVar12 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10328f6a0);
          (*pcVar4)();
        }
        lVar7 = *(long *)(lVar12 + -0x28) - *(long *)(lVar12 + -0x30);
        if (SBORROW8(*(long *)(lVar12 + -0x28),*(long *)(lVar12 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10328f6a4);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar2 = *plVar1;
        lVar10 = plVar1[1];
        lVar3 = lVar10 - lVar2;
        if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10328f6ac);
          (*pcVar4)();
        }
        if (SCARRY8(lVar7,lVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10328f6b4);
          (*pcVar4)();
        }
        bVar5 = false;
        if (lVar7 + lVar3 < *(long *)(lVar12 + -0x38) - *(long *)(lVar12 + -0x40)) {
LAB_10328f54c:
          if (bVar5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10328f6a8);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + uVar6 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar12 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10328f6b0);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar3 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10328f6bc);
            (*pcVar4)();
          }
          if (SCARRY8(lVar12,lVar3)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10328f6c4);
            (*pcVar4)();
          }
          bVar5 = false;
          if (lVar12 + lVar3 < lVar7) goto LAB_10328f5b0;
          lVar10 = uVar6 - 2;
          if (lVar3 <= lVar7) {
            lVar10 = lVar9;
          }
        }
        else {
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar12 = *plVar1;
          lVar2 = plVar1[1];
          if (SBORROW8(lVar2,lVar12)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10328f6cc);
            (*pcVar4)();
          }
          lVar10 = uVar6 - 2;
          if (lVar2 - lVar12 <= lVar7) {
            lVar10 = lVar9;
          }
        }
      }
      uVar11 = lVar10 - 1;
      if (uVar6 <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10328f694);
        (*pcVar4)();
      }
      lVar9 = *param_3;
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10328f6e0);
        (*pcVar4)();
      }
      lVar12 = *(long *)(uVar8 + 0x20 + uVar11 * 0x10);
      plVar1 = (long *)(uVar8 + 0x20 + lVar10 * 0x10);
      lVar7 = plVar1[1];
      FUN_10328f6e0(lVar9 + lVar12 * 8,lVar9 + *plVar1 * 8,lVar9 + lVar7 * 8,param_2);
      if (unaff_x21 != 0) {
        return 1;
      }
      if (lVar7 < lVar12) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10328f698);
        (*pcVar4)();
      }
      uVar6 = uVar8;
      func_0x000107c61558();
      if ((uVar6 & 1) == 0) {
        func_0x000100e06d54();
      }
      if (*(ulong *)(uVar8 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10328f69c);
        (*pcVar4)();
      }
      lVar9 = uVar8 + uVar11 * 0x10;
      *(long *)(lVar9 + 0x20) = lVar12;
      *(long *)(lVar9 + 0x28) = lVar7;
      *param_1 = uVar8;
      func_0x0001000a97cc(lVar10);
      uVar8 = *param_1;
      uVar6 = *(ulong *)(uVar8 + 0x10);
    } while (1 < uVar6);
  }
  return 1;
}



/* Entry: 10328f6e0; end: 10328f8f7;  */

undefined8 FUN_10328f6e0(long *param_1,long *param_2,long *param_3,long *param_4)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar5;
  
  lVar10 = (long)param_2 - (long)param_1;
  lVar2 = lVar10 + 7;
  if (-1 < lVar10) {
    lVar2 = lVar10;
  }
  lVar2 = lVar2 >> 3;
  lVar11 = (long)param_3 - (long)param_2;
  lVar6 = lVar11 + 7;
  if (-1 < lVar11) {
    lVar6 = lVar11;
  }
  lVar6 = lVar6 >> 3;
  if (lVar2 < lVar6) {
    if (((param_4 < param_1) || (param_1 + lVar2 <= param_4)) || (param_4 != param_1)) {
      func_0x000107c610b8(param_4,param_1,lVar2 << 3);
    }
    plVar5 = param_4 + lVar2;
    plVar8 = param_1;
    if (7 < lVar10) {
      do {
        if (param_3 <= param_2) break;
        lVar2 = *param_2;
        if (*(long *)(lVar2 + 0x10) < *(long *)(*param_4 + 0x10)) {
          plVar9 = param_4;
          plVar7 = param_2 + 1;
          plVar3 = param_2;
        }
        else {
          lVar2 = *param_4;
          plVar9 = param_4 + 1;
          plVar7 = param_2;
          plVar3 = param_4;
        }
        param_2 = plVar7;
        param_4 = plVar9;
        if (plVar8 != plVar3) {
          *plVar8 = lVar2;
        }
        plVar8 = plVar8 + 1;
      } while (param_4 < plVar5);
    }
  }
  else {
    if (((param_4 < param_2) || (param_2 + lVar6 <= param_4)) || (param_4 != param_2)) {
      func_0x000107c610b8(param_4,param_2,lVar6 << 3);
    }
    plVar3 = param_4 + lVar6;
    plVar5 = plVar3;
    plVar8 = param_2;
    if ((param_1 < param_2) && (7 < lVar11)) {
      do {
        plVar7 = param_2 + -1;
        plVar9 = param_3;
        while( true ) {
          param_3 = plVar9 + -1;
          plVar5 = plVar3 + -1;
          if (*(long *)(*plVar5 + 0x10) < *(long *)(*plVar7 + 0x10)) break;
          if (plVar9 != plVar3) {
            *param_3 = *plVar5;
          }
          plVar3 = plVar5;
          plVar8 = param_2;
          plVar9 = param_3;
          if (plVar5 <= param_4) goto LAB_10328f89c;
        }
        if (plVar9 != param_2) {
          *param_3 = *plVar7;
        }
        plVar5 = plVar3;
        plVar8 = plVar7;
      } while ((param_1 < plVar7) && (param_2 = plVar7, param_4 < plVar3));
    }
  }
LAB_10328f89c:
  uVar4 = (long)plVar5 - (long)param_4;
  uVar1 = uVar4 + 7;
  if (-1 < (long)uVar4) {
    uVar1 = uVar4;
  }
  if ((plVar8 != param_4) || ((long *)((long)param_4 + (uVar1 & 0xfffffffffffffff8)) <= plVar8)) {
    func_0x000107c610b8(plVar8,param_4,((long)uVar1 >> 3) << 3);
  }
  return 1;
}



/* Entry: 10328f8f8; end: 10328f90b;  */

/* WARNING: Removing unreachable block (ram,0x00010329604c) */
/* WARNING: Removing unreachable block (ram,0x00010329605c) */
/* WARNING: Removing unreachable block (ram,0x000103296150) */
/* WARNING: Removing unreachable block (ram,0x000103296068) */
/* WARNING: Removing unreachable block (ram,0x000103296070) */
/* WARNING: Removing unreachable block (ram,0x0001032960e8) */
/* WARNING: Removing unreachable block (ram,0x0001032960f0) */
/* WARNING: Removing unreachable block (ram,0x0001032960f4) */
/* WARNING: Removing unreachable block (ram,0x0001032960f8) */
/* WARNING: Removing unreachable block (ram,0x000103296108) */

undefined * FUN_10328f8f8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  
  puVar2 = (undefined *)0x0;
  lVar5 = *(long *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(long *)(param_1 + 0x10) <= lVar5) {
    lVar1 = lVar5;
  }
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar1 != 0) {
    (*(code *)0x10328a260)();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar6 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar6 = puVar3 + -0x20;
    }
    *(long *)(puVar2 + 0x10) = lVar5;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar6 >> 3) << 1 | 1;
    puVar6 = puVar2;
  }
  uVar4 = 0;
  (*(code *)0x103299ad0)(0);
  func_0x000107c6140c(puVar6 + 0x20,param_1 + 0x20,lVar5,uVar4);
  func_0x000107c61574(param_1);
  return puVar6;
}



/* Entry: 10328f90c; end: 10328fa57;  */

long FUN_10328f90c(long *param_1,undefined8 *param_2,long param_3,long param_4)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  
  puVar5 = (ulong *)(param_4 + 0x40);
  uVar6 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
  uVar7 = 0xffffffffffffffff;
  if (-uVar6 < 0x40) {
    uVar7 = ~(-1L << (-uVar6 & 0x3f));
  }
  uVar7 = uVar7 & *puVar5;
  if (param_2 == (undefined8 *)0x0) {
    lVar9 = 0;
    param_3 = 0;
  }
  else if (param_3 == 0) {
    lVar9 = 0;
  }
  else {
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10328fa58);
      (*pcVar2)();
    }
    lVar4 = 0;
    lVar8 = 0;
    uVar10 = 0x3f - uVar6 >> 6;
    lVar9 = lVar4;
    while( true ) {
      while (uVar7 == 0) {
        bVar3 = SCARRY8(lVar9,1);
        lVar9 = lVar9 + 1;
        if (bVar3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10328fa54);
          (*pcVar2)();
        }
        if ((long)uVar10 <= lVar9) {
          uVar7 = 0;
          if ((long)uVar10 <= lVar4 + 1) {
            uVar10 = lVar4 + 1;
          }
          lVar9 = uVar10 - 1;
          param_3 = lVar8;
          goto LAB_10328fa18;
        }
        uVar7 = puVar5[lVar9];
      }
      lVar8 = lVar8 + 1;
      uVar1 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 - 1 & uVar7;
      *param_2 = *(undefined8 *)
                  (*(long *)(param_4 + 0x38) + LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) * 8 +
                  lVar9 * 0x200);
      if (lVar8 == param_3) break;
      func_0x000107c6157c();
      lVar4 = lVar9;
      param_2 = param_2 + 1;
    }
    func_0x000107c6157c();
  }
LAB_10328fa18:
  *param_1 = param_4;
  param_1[1] = (long)puVar5;
  param_1[2] = ~uVar6;
  param_1[3] = lVar9;
  param_1[4] = uVar7;
  return param_3;
}



/* Entry: 10328fa58; end: 10328fa9f;  */

undefined8 FUN_10328fa58(ulong param_1,int param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  
  if (param_1 >> ((ulong)*(byte *)(param_4 + 0x20) & 0x3f) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10328fa98);
    (*pcVar1)();
  }
  if ((*(ulong *)(param_4 + (param_1 >> 3 & 0xffffffffffffff8) + 0x40) >> (param_1 & 0x3f) & 1) != 0
     ) {
    if (*(int *)(param_4 + 0x24) == param_2) {
      return *(undefined8 *)(*(long *)(param_4 + 0x38) + param_1 * 8);
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10328faa0);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10328fa9c);
  (*pcVar1)();
}



/* Entry: 10328faa0; end: 10328fb27;  */

undefined8 FUN_10328faa0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10328fb28; end: 10328feab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10328fb28(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  ulong uVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined *puStack_80;
  
  uVar11 = *(ulong *)(param_1 + _DAT_112f50c88);
  puStack_80 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000103295c24(0,0,0);
  puVar12 = puStack_80;
  if (uVar11 >> 0x3e == 0) {
    uVar17 = *(ulong *)((uVar11 & 0xffffffffffffff8) + 0x10);
    puVar6 = puStack_80;
  }
  else {
    uVar17 = uVar11 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar11) {
      uVar17 = uVar11;
    }
    func_0x000107c60480();
    puVar6 = puStack_80;
  }
  puStack_80 = puVar12;
  if (uVar17 != 0) {
    uVar15 = 0;
    puStack_80 = puVar6;
    do {
      if ((uVar11 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar11 & 0xffffffffffffff8) + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10328fe68);
          (*pcVar3)();
        }
        uVar4 = *(ulong *)(uVar11 + uVar15 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar4 = uVar15;
        FUN_10328edd8(uVar15,uVar11,&PTR_PTR_1126c2098,0x112e0fd70);
      }
      uVar1 = uVar15 + 1;
      if (SCARRY8(uVar15,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10328fe64);
        (*pcVar3)();
      }
      uVar5 = uVar4;
      func_0x000107c4004c();
      func_0x000107c61180();
      if (uVar5 == 0) {
LAB_10328fc30:
        uVar18 = 0;
        lVar13 = -0x2000000000000000;
      }
      else {
        uVar18 = *(undefined8 *)(uVar5 + _DAT_11307fe98);
        lVar13 = ((undefined8 *)(uVar5 + _DAT_11307fe98))[1];
        func_0x000107c61434(lVar13);
        func_0x000107c61170(uVar5);
        if (lVar13 == 0) goto LAB_10328fc30;
      }
      uStack_90 = 0;
      lStack_88 = 0;
      uVar5 = uVar4;
      func_0x000107c5bfc4();
      func_0x000107c61180();
      if (uVar5 == 0) {
        lVar14 = lStack_88;
        uVar16 = uStack_90;
        if (lStack_88 != 0) goto LAB_10328fdc4;
LAB_10328fdd0:
        func_0x000107c61170(uVar4);
        uVar16 = 0;
        lVar14 = -0x2000000000000000;
      }
      else {
        puVar6 = &UNK_1106315a8;
        func_0x000107c613fc(&UNK_1106315a8,0x18,7);
        *(undefined8 **)(puVar6 + 0x10) = &uStack_90;
        puVar7 = &UNK_1106315d0;
        func_0x000107c613fc(&UNK_1106315d0,0x20,7);
        *(code **)(puVar7 + 0x10) = FUN_10328ffd8;
        *(undefined **)(puVar7 + 0x18) = puVar6;
        puVar2 = PTR___NSConcreteStackBlock_11034bd00;
        pcStack_a0 = FUN_10328fff0;
        puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_b8 = 0x42000000;
        puStack_b0 = &UNK_101f02948;
        puStack_a8 = &UNK_1106315e8;
        ppuVar8 = &puStack_c0;
        puStack_98 = puVar7;
        func_0x000107c60bc4(ppuVar8);
        func_0x000107c61574(puStack_98);
        puVar7 = &UNK_110631620;
        func_0x000107c613fc(&UNK_110631620,0x18,7);
        *(undefined8 **)(puVar7 + 0x10) = &uStack_90;
        puVar9 = &UNK_110631648;
        func_0x000107c613fc(&UNK_110631648,0x20,7);
        *(undefined8 *)(puVar9 + 0x10) = 0x103290034;
        *(undefined **)(puVar9 + 0x18) = puVar7;
        pcStack_a0 = (code *)0x103290014;
        puStack_c0 = puVar2;
        uStack_b8 = 0x42000000;
        puStack_b0 = &UNK_101f02944;
        puStack_a8 = &UNK_110631660;
        ppuVar10 = &puStack_c0;
        puStack_98 = puVar9;
        func_0x000107c60bc4(ppuVar10);
        func_0x000107c61574(puStack_98);
        func_0x000107c4c6e0(uVar5);
        func_0x000107c60bd0(ppuVar10);
        func_0x000107c60bd0(ppuVar8);
        func_0x000107c61170(uVar5);
        lVar14 = lStack_88;
        uVar16 = uStack_90;
        func_0x000107c61574(puVar7);
        func_0x000107c61574(puVar6);
        if (lVar14 == 0) goto LAB_10328fdd0;
LAB_10328fdc4:
        func_0x000107c61170(uVar4);
      }
      uVar4 = *(ulong *)(puVar12 + 0x10);
      puStack_80 = puVar12;
      if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar4) {
        func_0x000103295c24(1 < *(ulong *)(puVar12 + 0x18),uVar4 + 1,1);
      }
      *(ulong *)(puStack_80 + 0x10) = uVar4 + 1;
      *(ulong *)(puStack_80 + uVar4 * 0x28 + 0x20) = uVar15;
      *(undefined8 *)(puStack_80 + uVar4 * 0x28 + 0x28) = uVar18;
      *(long *)(puStack_80 + uVar4 * 0x28 + 0x30) = lVar13;
      *(undefined8 *)(puStack_80 + uVar4 * 0x28 + 0x38) = uVar16;
      *(long *)(puStack_80 + uVar4 * 0x28 + 0x40) = lVar14;
      uVar15 = uVar15 + 1;
      puVar12 = puStack_80;
    } while (uVar1 != uVar17);
  }
  return puStack_80;
}



/* Entry: 10328feac; end: 10328feb3;  */

void FUN_10328feac(void)

{
  if (lRam0000000112f50b10 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e75423c);
  return;
}



/* Entry: 10328feb4; end: 10328feeb;  */

void FUN_10328feb4(undefined8 param_1)

{
  if (lRam0000000112f50b10 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e75423c);
  return;
}



/* Entry: 10328feec; end: 10328ff97;  */

void FUN_10328feec(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puStack_70 = &UNK_10dba5b88;
  puStack_68 = &UNK_10dba5b88;
  puStack_60 = &UNK_10dba5ba0;
  lVar1 = 0x13f;
  func_0x0001000776dc();
  if (param_2 < 0x40) {
    lStack_58 = *(long *)(lVar1 + -8) + 0x40;
    puStack_50 = PTR___sBoWV_11034d678 + 0x40;
    puStack_48 = PTR___sBOWV_11034d658 + 0x40;
    puStack_40 = &UNK_10dba5ba0;
    puStack_38 = &UNK_10dba5b88;
    func_0x000107c61630(param_1,0x100,8,&puStack_70,param_1 + 0x50);
  }
  return;
}



/* Entry: 10328ff98; end: 10328ffd7;  */

void FUN_10328ff98(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10328ffd8; end: 10328ffef;  */

void FUN_10328ffd8(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10328d178(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10328fff0; end: 10329002b;  */

void FUN_10328fff0(undefined8 param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))
            (param_1,*(code **)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 10329002c; end: 10329002f; -[SCSpotlightCustomInterstitialsOperaPlugin playlistDataSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329002c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1138071a0));
  return;
}



/* Entry: 103290030; end: 103290037; -[SCSpotlightCustomInterstitialsOperaPlugin dataSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103290030(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1138071a0));
  return;
}



/* Entry: 103290038; end: 10329042f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103290038(long param_1)

{
  long lVar1;
  ulong *puVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  long unaff_x20;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  undefined1 auStack_78 [24];
  
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f50b28);
  func_0x000107c4b940();
  lVar3 = _DAT_112f50b30;
  uVar9 = *(undefined8 *)(param_1 + _DAT_112f50b68);
  uVar8 = ((undefined8 *)(param_1 + _DAT_112f50b68))[1];
  func_0x000107c61428(unaff_x20 + _DAT_112f50b30,auStack_78,0x21,0);
  func_0x000107c61434(uVar8);
  func_0x000107c61174();
  uVar6 = *(undefined8 *)(unaff_x20 + lVar3);
  func_0x000107c61558(uVar6);
  uVar15 = *(undefined8 *)(unaff_x20 + lVar3);
  *(undefined8 *)(unaff_x20 + lVar3) = 0x8000000000000000;
  func_0x00010328db48(param_1,uVar9,uVar8,uVar6);
  func_0x000107c6142c(uVar8);
  *(undefined8 *)(unaff_x20 + lVar3) = uVar15;
  func_0x000107c614a8(auStack_78);
  uVar18 = *(ulong *)(param_1 + _DAT_112f50b78);
  uVar7 = uVar18;
  func_0x000107c614f0();
  uVar20 = uVar18;
  func_0x000107c4a77c();
  func_0x000107c61180();
  uVar17 = uVar20;
  func_0x000107c5faec();
  func_0x000107c61170(uVar20);
  lVar3 = _DAT_112f50b38;
  func_0x000107c61428(unaff_x20 + _DAT_112f50b38,auStack_78,0x21,0);
  func_0x000107c61174(uVar18);
  uVar8 = *(undefined8 *)(unaff_x20 + lVar3);
  func_0x000107c61558(uVar8);
  uVar6 = *(undefined8 *)(unaff_x20 + lVar3);
  *(undefined8 *)(unaff_x20 + lVar3) = 0x8000000000000000;
  func_0x00010328d9f8(uVar18,uVar17,uVar9,uVar8);
  func_0x000107c6142c(uVar9);
  *(undefined8 *)(unaff_x20 + lVar3) = uVar6;
  func_0x000107c614a8(auStack_78);
  FUN_1032922b4();
  if (uVar7 >> 0x3e == 0) {
    uVar20 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar20 = uVar7 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar7) {
      uVar20 = uVar7;
    }
    func_0x000107c60480();
  }
  if (uVar20 != 0) {
    lVar21 = 4;
    do {
      uVar18 = lVar21 - 4;
      if ((uVar7 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1032903d8);
          (*pcVar4)();
        }
        uVar10 = *(ulong *)(uVar7 + lVar21 * 8);
        func_0x000107c61174();
        uVar13 = uVar17;
      }
      else {
        uVar10 = uVar18;
        uVar13 = uVar7;
        FUN_10328ea0c();
      }
      if (SCARRY8(uVar18,1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1032903cc);
        (*pcVar4)();
      }
      uVar16 = lVar21 - 3;
      uVar17 = uVar10;
      func_0x000107c4a77c();
      func_0x000107c61180();
      uVar18 = uVar17;
      func_0x000107c5faec();
      func_0x000107c61170(uVar17);
      func_0x000107c61428(unaff_x20 + lVar3,auStack_78,0x21,0);
      func_0x000107c61174();
      uVar11 = *(ulong *)(unaff_x20 + lVar3);
      func_0x000107c61558();
      lVar19 = *(long *)(unaff_x20 + lVar3);
      *(undefined8 *)(unaff_x20 + lVar3) = 0x8000000000000000;
      uVar12 = uVar18;
      uVar14 = uVar13;
      func_0x000100029284();
      uVar17 = (ulong)~(uint)uVar14 & 1;
      lVar1 = *(long *)(lVar19 + 0x10) + uVar17;
      if (SCARRY8(*(long *)(lVar19 + 0x10),uVar17)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1032903d0);
        (*pcVar4)();
      }
      if (*(long *)(lVar19 + 0x18) < lVar1) {
        func_0x00010328e338(lVar1,uVar11);
        uVar12 = uVar18;
        uVar17 = uVar13;
        func_0x000100029284();
        if (((uint)uVar14 & 1) != ((uint)uVar17 & 1)) {
          func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x103290430);
          (*pcVar4)();
        }
LAB_103290360:
        if ((uVar14 & 1) != 0) goto LAB_1032901f0;
LAB_103290368:
        lVar1 = lVar19 + (uVar12 >> 6) * 8;
        *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (uVar12 & 0x3f);
        puVar2 = (ulong *)(*(long *)(lVar19 + 0x30) + uVar12 * 0x10);
        *puVar2 = uVar18;
        puVar2[1] = uVar13;
        *(ulong *)(*(long *)(lVar19 + 0x38) + uVar12 * 8) = uVar10;
        if (SCARRY8(*(long *)(lVar19 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1032903d4);
          (*pcVar4)();
        }
        *(long *)(lVar19 + 0x10) = *(long *)(lVar19 + 0x10) + 1;
      }
      else {
        uVar17 = uVar14;
        if ((uVar11 & 1) != 0) goto LAB_103290360;
        func_0x00010328ddf4();
        if ((uVar14 & 1) == 0) goto LAB_103290368;
LAB_1032901f0:
        uVar9 = *(undefined8 *)(*(long *)(lVar19 + 0x38) + uVar12 * 8);
        *(ulong *)(*(long *)(lVar19 + 0x38) + uVar12 * 8) = uVar10;
        func_0x000107c6142c(uVar13);
        func_0x000107c61170(uVar9);
      }
      uVar9 = *(undefined8 *)(unaff_x20 + lVar3);
      *(long *)(unaff_x20 + lVar3) = lVar19;
      func_0x000107c6142c(uVar9);
      func_0x000107c614a8(auStack_78);
      func_0x000107c61170(uVar10);
      lVar21 = lVar21 + 1;
    } while (uVar16 != uVar20);
  }
  func_0x000107c6142c(uVar7);
  func_0x000107c5d278(uVar5);
  return;
}



/* Entry: 103290430; end: 10329047f; -[SCSpotlightCustomInterstitialOperaDataSource registerGroup:] */

/* WARNING: Possible PIC construction at 0x000103290468: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010329046c) */

void FUN_103290430(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_103290038(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 103290480; end: 103290487; -[SCSpotlightCustomInterstitialOperaDataSource needToPrepareMediaBeforeDisplay] */

undefined8 FUN_103290480(void)

{
  return 0;
}



/* Entry: 103290488; end: 1032905a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103290488(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long unaff_x20;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [24];
  
  if (param_1 == 0) {
    return 0;
  }
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112f50b28);
  func_0x000107c615f0();
  func_0x000107c4b940(uVar6);
  lVar1 = param_1;
  func_0x000107c3b9ac();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5faec();
  func_0x000107c61170(lVar1);
  lVar1 = _DAT_112f50b38;
  func_0x000107c61428(unaff_x20 + _DAT_112f50b38,auStack_58,0x20,0);
  uVar5 = *(ulong *)(unaff_x20 + lVar1);
  if (*(long *)(uVar5 + 0x10) != 0) {
    func_0x000107c61434(uVar5);
    uVar4 = param_2;
    func_0x000100029284();
    if ((uVar4 & 1) != 0) {
      uVar3 = *(undefined8 *)(*(long *)(uVar5 + 0x38) + lVar2 * 8);
      func_0x000107c61174(uVar3);
      func_0x000107c6142c(param_2);
      func_0x000107c6142c(uVar5);
      goto LAB_103290570;
    }
    func_0x000107c6142c(param_2);
    param_2 = uVar5;
  }
  func_0x000107c6142c(param_2);
  uVar3 = 0;
LAB_103290570:
  func_0x000107c614a8(auStack_58);
  func_0x000107c5d278(uVar6);
  func_0x000107c615e8(param_1);
  return uVar3;
}



/* Entry: 1032905a4; end: 1032905af; -[SCSpotlightCustomInterstitialOperaDataSource dataModelFor:] */

void FUN_1032905a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_103290488(param_3);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1032905b0; end: 1032906cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1032905b0(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long unaff_x20;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [24];
  
  if (param_1 == 0) {
    return 0;
  }
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112f50b28);
  func_0x000107c615f0();
  func_0x000107c4b940(uVar6);
  lVar1 = param_1;
  func_0x000107c3b9ac();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5faec();
  func_0x000107c61170(lVar1);
  lVar1 = _DAT_112f50b30;
  func_0x000107c61428(unaff_x20 + _DAT_112f50b30,auStack_58,0x20,0);
  uVar5 = *(ulong *)(unaff_x20 + lVar1);
  if (*(long *)(uVar5 + 0x10) != 0) {
    func_0x000107c61434(uVar5);
    uVar4 = param_2;
    func_0x000100029284();
    if ((uVar4 & 1) != 0) {
      uVar3 = *(undefined8 *)(*(long *)(uVar5 + 0x38) + lVar2 * 8);
      func_0x000107c61174(uVar3);
      func_0x000107c6142c(param_2);
      func_0x000107c6142c(uVar5);
      goto LAB_103290698;
    }
    func_0x000107c6142c(param_2);
    param_2 = uVar5;
  }
  func_0x000107c6142c(param_2);
  uVar3 = 0;
LAB_103290698:
  func_0x000107c614a8(auStack_58);
  func_0x000107c5d278(uVar6);
  func_0x000107c615e8(param_1);
  return uVar3;
}



/* Entry: 1032906cc; end: 1032906d7; -[SCSpotlightCustomInterstitialOperaDataSource dataModelForGroup:] */

void FUN_1032906cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1032905b0(param_3);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1032906d8; end: 103290737;  */

void FUN_1032906d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  (*param_4)(param_3);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103290738; end: 1032908c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103290738(long param_1,undefined *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined *puVar8;
  undefined1 auStack_58 [24];
  
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112f50b28);
  func_0x000107c4b940(uVar7);
  lVar1 = param_1;
  func_0x000107c444d0();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c3b9ac();
  func_0x000107c61180();
  func_0x000107c615e8(lVar1);
  lVar3 = lVar2;
  func_0x000107c5faec();
  func_0x000107c61170(lVar2);
  lVar1 = _DAT_112f50b30;
  func_0x000107c61428(unaff_x20 + _DAT_112f50b30,auStack_58,0x20,0);
  puVar8 = *(undefined **)(unaff_x20 + lVar1);
  if (*(long *)(puVar8 + 0x10) != 0) {
    func_0x000107c61434(puVar8);
    puVar6 = param_2;
    func_0x000100029284();
    if (((ulong)puVar6 & 1) != 0) {
      uVar4 = *(undefined8 *)(*(long *)(puVar8 + 0x38) + lVar3 * 8);
      func_0x000107c61174(uVar4);
      func_0x000107c614a8(auStack_58);
      func_0x000107c6142c(param_2);
      func_0x000107c6142c(puVar8);
      FUN_103291638();
      uVar5 = 0;
      func_0x0001044443ac(0);
      puVar6 = puVar8;
      func_0x000107c5fc48(puVar8,uVar5);
      func_0x000107c6142c(puVar8);
      func_0x000107c505d4(param_1);
      func_0x000107c61170(uVar4);
      goto LAB_1032908a0;
    }
    func_0x000107c6142c(param_2);
    param_2 = puVar8;
  }
  func_0x000107c6142c(param_2);
  func_0x000107c614a8(auStack_58);
  uVar4 = 0;
  func_0x0001044443ac(0);
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,uVar4);
  func_0x000107c505d4(param_1);
LAB_1032908a0:
  func_0x000107c61170(puVar6);
  func_0x000107c5d278(uVar7);
  return;
}



/* Entry: 1032908c8; end: 10329090f; -[SCSpotlightCustomInterstitialOperaDataSource resolvePlaylistItemGroupWithMutator:] */

void FUN_1032908c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_103290738(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103290910; end: 1032909bb; -[SCSpotlightCustomInterstitialOperaDataSource pageDataForDataModel:completion:] */

void FUN_103290910(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puStack_38;
  
  if (param_3 != 0) {
    puStack_38 = PTR_DAT_1126a2b80;
    lVar1 = param_3;
    func_0x000107c61494(param_3,1,&puStack_38);
    if (lVar1 != 0) {
      func_0x000107c61174(param_3);
      func_0x000107c4e234(lVar1);
      func_0x000107c61180();
      (**(code **)(param_4 + 0x10))(param_4,lVar1);
      func_0x000107c61170(param_3);
      func_0x000107c61170(lVar1);
      return;
    }
  }
  (**(code **)(param_4 + 0x10))(param_4,0);
  return;
}



/* Entry: 1032909bc; end: 103290a07; -[SCSpotlightCustomInterstitialOperaDataSource prepareMediaForItem:startWaitingForDownloadCallback:completion:] */

void FUN_1032909bc(void)

{
  long in_x4;
  
  func_0x000107c60bc4();
  if (in_x4 != 0) {
    (**(code **)(in_x4 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Block_release_11034bcf0)(in_x4);
    return;
  }
  return;
}



/* Entry: 103290a08; end: 103290a0b; -[SCSpotlightCustomInterstitialOperaDataSource removeMediaForItem:] */

void FUN_103290a08(void)

{
  return;
}



/* Entry: 103290a0c; end: 103290a0f; -[SCSpotlightCustomInterstitialOperaDataSource operaMediaBundleProvider] */

void FUN_103290a0c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 103290a10; end: 103290a8f; -[SCSpotlightCustomInterstitialOperaDataSource canResolvePlaylistItemGroupDataModel:] */

uint FUN_103290a10(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_40);
    func_0x000107c615e8(param_3);
  }
  FUN_103291108(&uStack_40);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 103290a90; end: 103290b0f; -[SCSpotlightCustomInterstitialOperaDataSource playlistItemGroupModelForDataModel:] */

void FUN_103290a90(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_40);
    func_0x000107c615e8(param_3);
  }
  FUN_103291188(&uStack_40);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 103290b10; end: 103290ba3; -[SCSpotlightCustomInterstitialOperaDataSource init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103290b10(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  lVar1 = _DAT_112f50b30;
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x00010328a548();
  *(undefined **)(param_1 + lVar1) = puVar3;
  lVar1 = _DAT_112f50b38;
  func_0x00010328a648();
  *(undefined **)(param_1 + lVar1) = puVar4;
  lVar1 = _DAT_112f50b28;
  puVar4 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_1 + lVar1) = puVar4;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103290ba4; end: 103290bd7;  */

void FUN_103290ba4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103290bd8; end: 103290c1f; -[SCSpotlightCustomInterstitialOperaDataSource .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103290bd8(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f50b30));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f50b38));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f50b28));
  return;
}



/* Entry: 103290c20; end: 103290d5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103290c20(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long unaff_x20;
  ulong uVar6;
  undefined1 auStack_58 [24];
  
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f50b28);
  func_0x000107c4b940(uVar5);
  func_0x000107c3b9ac();
  func_0x000107c61180();
  lVar1 = param_1;
  func_0x000107c5faec();
  func_0x000107c61170(param_1);
  lVar3 = _DAT_112f50b38;
  func_0x000107c61428(unaff_x20 + _DAT_112f50b38,auStack_58,0x20,0);
  uVar6 = *(ulong *)(unaff_x20 + lVar3);
  if (*(long *)(uVar6 + 0x10) == 0) {
    func_0x000107c614a8(auStack_58);
LAB_103290d2c:
    func_0x000107c6142c(param_2);
  }
  else {
    func_0x000107c61434(uVar6);
    uVar4 = param_2;
    func_0x000100029284();
    if ((uVar4 & 1) == 0) {
      func_0x000107c614a8(auStack_58);
      func_0x000107c6142c(param_2);
      param_2 = uVar6;
      goto LAB_103290d2c;
    }
    lVar1 = *(long *)(*(long *)(uVar6 + 0x38) + lVar1 * 8);
    func_0x000107c61174();
    func_0x000107c614a8(auStack_58);
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(uVar6);
    uVar2 = 0;
    FUN_10329a964(0);
    lVar3 = lVar1;
    func_0x000107c61480(lVar1,uVar2);
    func_0x000107c61170(lVar1);
    if (lVar3 != 0) {
      uVar2 = 1;
      goto LAB_103290d38;
    }
  }
  uVar2 = 0;
LAB_103290d38:
  func_0x000107c5d278(uVar5);
  return uVar2;
}



/* Entry: 103290d5c; end: 103290db7; -[SCSpotlightCustomInterstitialOperaDataSource canProvideMediaBundleForPlaylistItem:] */

uint FUN_103290d5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_103290c20(param_3);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 103290db8; end: 103290f07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103290db8(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long unaff_x20;
  ulong uVar6;
  undefined1 auStack_58 [24];
  
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f50b28);
  func_0x000107c4b940(uVar5);
  func_0x000107c3b9ac();
  func_0x000107c61180();
  lVar1 = param_1;
  func_0x000107c5faec();
  func_0x000107c61170(param_1);
  lVar3 = _DAT_112f50b38;
  func_0x000107c61428(unaff_x20 + _DAT_112f50b38,auStack_58,0x20,0);
  uVar6 = *(ulong *)(unaff_x20 + lVar3);
  if (*(long *)(uVar6 + 0x10) != 0) {
    func_0x000107c61434(uVar6);
    uVar4 = param_2;
    func_0x000100029284();
    if ((uVar4 & 1) != 0) {
      lVar1 = *(long *)(*(long *)(uVar6 + 0x38) + lVar1 * 8);
      func_0x000107c61174();
      func_0x000107c614a8(auStack_58);
      func_0x000107c6142c(param_2);
      func_0x000107c6142c(uVar6);
      uVar2 = 0;
      FUN_10329a964(0);
      lVar3 = lVar1;
      func_0x000107c61480(lVar1,uVar2);
      if (lVar3 != 0) {
        func_0x000107c5d278(uVar5);
        lVar1 = lVar3;
        FUN_103291450(lVar3);
        func_0x000107c61170(lVar3);
        return lVar1;
      }
      func_0x000107c61170(lVar1);
      goto LAB_103290ed8;
    }
    func_0x000107c6142c(param_2);
    param_2 = uVar6;
  }
  func_0x000107c6142c(param_2);
  func_0x000107c614a8(auStack_58);
LAB_103290ed8:
  func_0x000107c5d278(uVar5);
  return 0;
}



/* Entry: 103290f08; end: 103291107; -[SCSpotlightCustomInterstitialOperaDataSource mediaBundleFromPlaylistItem:] */

void FUN_103290f08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_103290db8(param_3);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103291108; end: 103291187;  */

bool FUN_103291108(undefined8 param_1)

{
  undefined8 uVar1;
  long *plVar2;
  long lStack_48;
  undefined1 auStack_40 [24];
  long lStack_28;
  
  func_0x000100672b50(param_1,auStack_40);
  if (lStack_28 == 0) {
    func_0x00010006e7f4(auStack_40);
  }
  else {
    uVar1 = 0;
    FUN_103291b10(0);
    plVar2 = &lStack_48;
    func_0x000107c6147c(plVar2,auStack_40,PTR___sypN_11034f1a8 + 8,uVar1,6);
    if ((int)plVar2 != 0) goto LAB_103291168;
  }
  lStack_48 = 0;
LAB_103291168:
  func_0x000107c61170();
  return lStack_48 != 0;
}



/* Entry: 103291188; end: 10329127f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103291188(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined **ppuVar4;
  undefined1 *puVar5;
  long lStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  func_0x000100672b50(param_1,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
  }
  else {
    uVar2 = 0;
    FUN_103291b10(0);
    plVar3 = &lStack_68;
    puVar5 = auStack_60;
    func_0x000107c6147c(plVar3,puVar5,PTR___sypN_11034f1a8 + 8,uVar2,6);
    if (((ulong)plVar3 & 1) != 0) {
      uVar2 = *(undefined8 *)(lStack_68 + _DAT_112f50b68);
      uVar1 = ((undefined8 *)(lStack_68 + _DAT_112f50b68))[1];
      ppuVar4 = &PTR____CFConstantStringClassReference_110ed3ab8;
      func_0x000107c5faec(&PTR____CFConstantStringClassReference_110ed3ab8);
      func_0x000104445170(0);
      func_0x000107c610f8();
      func_0x000107c61434(uVar1);
      func_0x000104444a48(uVar2,uVar1,ppuVar4,puVar5,0,1,1);
      func_0x000107c61170(lStack_68);
      return uVar2;
    }
  }
  return 0;
}


