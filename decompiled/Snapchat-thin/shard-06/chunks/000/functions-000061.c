/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104455f54; end: 104455f77;  */

undefined1  [16] FUN_104455f54(void)

{
  return ZEXT816(0x1107711d0);
}



/* Entry: 104455f78; end: 10445604f;  */

void FUN_104455f78(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104456050; end: 10445606f;  */

void FUN_104456050(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 104456070; end: 1044560af;  */

void FUN_104456070(void)

{
  undefined *puVar1;
  
  if (puRam000000011307ac68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd01750;
  _swift_getWitnessTable(&UNK_10dd01750,&UNK_110771248);
  puRam000000011307ac68 = puVar1;
  return;
}



/* Entry: 1044560b0; end: 1044560bf;  */

undefined1  [16] FUN_1044560b0(void)

{
  return ZEXT816(0x110771248);
}



/* Entry: 1044560c0; end: 10445646f;  */

long FUN_1044560c0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 104456470; end: 10445650f;  */

void FUN_104456470(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104456510; end: 104456533;  */

void FUN_104456510(undefined8 param_1,long *param_2)

{
  *(bool *)param_1 = *param_2 != 0;
  return;
}



/* Entry: 104456534; end: 104456553; -[SCOperaVideoControlsAdvancedConfig description] */

void FUN_104456534(void)

{
  FUN_1044568b8();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104456554; end: 10445659b; -[SCOperaVideoControlsAdvancedConfig init] */

void FUN_104456554(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCOperaVideoControlsAPI/SCOperaVideoControlsAdvancedConfigWrapper.swift",0x47,2,0x42,0
            );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10445659c);
  (*pcVar1)();
}



/* Entry: 10445659c; end: 10445659f; -[SCOperaVideoControlsAdvancedConfig copyWithZone:] */

void FUN_10445659c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1044565a0; end: 104456627; +[SCOperaVideoControlsAdvancedConfig longformWithSliderBreaks:hiddenUponStart:showSeekableRange:showBufferdRange:shouldShowLongformSendButton:isOneTapAdvanceEnabled:] */

void FUN_1044565a0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_3 != 0) {
    uVar1 = 0;
    func_0x0001002ed07c(0);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_3,uVar1);
  }
  lVar2 = param_3;
  FUN_104456960(param_3,param_4,param_5,param_6,param_7,param_8);
  _swift_bridgeObjectRelease(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 104456628; end: 1044566e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104456628(code *param_1)

{
  code *pcVar1;
  long unaff_x20;
  
  if (*(byte *)(unaff_x20 + _DAT_11307ac70) == 2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1044566d8);
    (*pcVar1)();
  }
  if (*(byte *)(unaff_x20 + _DAT_11307ac78) == 2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1044566dc);
    (*pcVar1)();
  }
  if (*(byte *)(unaff_x20 + _DAT_11307ac80) == 2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1044566e0);
    (*pcVar1)();
  }
  if (*(byte *)(unaff_x20 + _DAT_11307ac88) != 2) {
    if (*(byte *)(unaff_x20 + _DAT_11307ac90) != 2) {
      (*param_1)(*(undefined8 *)(unaff_x20 + _DAT_11307ac98),
                 *(byte *)(unaff_x20 + _DAT_11307ac70) & 1,*(byte *)(unaff_x20 + _DAT_11307ac78) & 1
                 ,*(byte *)(unaff_x20 + _DAT_11307ac80) & 1,
                 *(byte *)(unaff_x20 + _DAT_11307ac88) & 1,*(byte *)(unaff_x20 + _DAT_11307ac90) & 1
                );
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1044566e8);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044566e4);
  (*pcVar1)();
}



/* Entry: 1044566e8; end: 10445672b; -[SCOperaVideoControlsAdvancedConfig matchLongform:] */

void FUN_1044566e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_30 = param_3;
  _objc_retain();
  FUN_104456628(FUN_104456b74,auStack_40);
  _objc_release(param_1);
  return;
}



/* Entry: 10445672c; end: 1044567bb;  */

void FUN_10445672c(long param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                  long param_7)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = 0;
    func_0x0001002ed07c(0);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(param_1,uVar1);
  }
  (**(code **)(param_7 + 0x10))
            (param_7,param_1,param_2 & 1,param_3 & 1,param_4 & 1,param_5 & 1,param_6 & 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1044567bc; end: 1044567ef;  */

void FUN_1044567bc(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1044567f0; end: 1044567ff; -[SCOperaVideoControlsAdvancedConfig .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044567f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11307ac98));
  return;
}



/* Entry: 104456800; end: 1044568b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104456800(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lStack_60;
  long lStack_58;
  
  lVar1 = param_1;
  FUN_104456a24();
  lVar2 = lVar1;
  _objc_allocWithZone();
  *(long *)(lVar2 + _DAT_11307ac98) = param_1;
  *(byte *)(lVar2 + _DAT_11307ac70) = (byte)param_2 & 1;
  *(byte *)(lVar2 + _DAT_11307ac78) = (byte)((ulong)param_2 >> 8) & 1;
  *(byte *)(lVar2 + _DAT_11307ac80) = (byte)((ulong)param_2 >> 0x10) & 1;
  *(byte *)(lVar2 + _DAT_11307ac88) = (byte)((ulong)param_2 >> 0x18) & 1;
  *(byte *)(lVar2 + _DAT_11307ac90) = (byte)((ulong)param_2 >> 0x20) & 1;
  lStack_60 = lVar2;
  lStack_58 = lVar1;
  _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044568b8; end: 10445695f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1044568b8(long param_1)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  
  if (*(char *)(param_1 + _DAT_11307ac70) == '\x02') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104456950);
    (*pcVar1)();
  }
  if (*(char *)(param_1 + _DAT_11307ac78) == '\x02') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104456954);
    (*pcVar1)();
  }
  if (*(byte *)(param_1 + _DAT_11307ac80) == 2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104456958);
    (*pcVar1)();
  }
  if (*(byte *)(param_1 + _DAT_11307ac88) != 2) {
    if (*(byte *)(param_1 + _DAT_11307ac90) != 2) {
      auVar2._0_8_ = *(undefined8 *)(param_1 + _DAT_11307ac98);
      auVar2._8_8_ = ((ulong)*(byte *)(param_1 + _DAT_11307ac88) & 1) << 0x18 |
                     ((ulong)*(byte *)(param_1 + _DAT_11307ac80) & 1) << 0x10 |
                     (ulong)CONCAT11(*(char *)(param_1 + _DAT_11307ac78),
                                     *(char *)(param_1 + _DAT_11307ac70)) & 0x101010101010101 |
                     (ulong)(*(byte *)(param_1 + _DAT_11307ac90) & 1) << 0x20;
      return auVar2;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104456960);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10445695c);
  (*pcVar1)();
}



/* Entry: 104456960; end: 104456a23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104456960(long param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
                  undefined1 param_5,undefined1 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_1;
  FUN_104456a24();
  lVar3 = lVar2;
  _objc_allocWithZone();
  *(long *)(lVar3 + _DAT_11307ac98) = param_1;
  *(undefined1 *)(lVar3 + _DAT_11307ac70) = param_2;
  *(undefined1 *)(lVar3 + _DAT_11307ac78) = param_3;
  *(undefined1 *)(lVar3 + _DAT_11307ac80) = param_4;
  *(undefined1 *)(lVar3 + _DAT_11307ac88) = param_5;
  *(undefined1 *)(lVar3 + _DAT_11307ac90) = param_6;
  puVar1 = PTR_s_init_1125d9248;
  lStack_60 = lVar3;
  lStack_58 = lVar2;
  _swift_bridgeObjectRetain(param_1);
  _objc_msgSendSuper2(&lStack_60,puVar1);
  return;
}



/* Entry: 104456a24; end: 104456a43;  */

void FUN_104456a24(void)

{
  _objc_opt_self(&PTR_PTR_1129b6e70);
  return;
}



/* Entry: 104456a44; end: 104456b33;  */

uint FUN_104456a44(uint *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = 2;
  if (0xffff < param_2 + 1U) {
    iVar1 = 4;
  }
  if (param_2 + 1U < 0x100) {
    iVar1 = 1;
  }
  if (iVar1 != 4) {
    if (iVar1 == 2) {
      return (uint)(ushort)*param_1;
    }
    return (uint)(byte)*param_1;
  }
  return *param_1;
}



/* Entry: 104456b34; end: 104456b73;  */

void FUN_104456b34(void)

{
  undefined *puVar1;
  
  if (puRam000000011307acd0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd01888;
  _swift_getWitnessTable(&UNK_10dd01888,&UNK_1107713c0);
  puRam000000011307acd0 = puVar1;
  return;
}



/* Entry: 104456b74; end: 104456b7b;  */

void FUN_104456b74(long param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if (param_1 != 0) {
    uVar1 = 0;
    func_0x0001002ed07c(0);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(param_1,uVar1);
  }
  (**(code **)(lVar2 + 0x10))
            (lVar2,param_1,param_2 & 1,param_3 & 1,param_4 & 1,param_5 & 1,param_6 & 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104456b7c; end: 104456b8b; -[SCOperaVideoControlsViewModel controlsType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104456b7c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11307acd8);
}



/* Entry: 104456b8c; end: 104456b9b; -[SCOperaVideoControlsViewModel shouldBeHiddenWhenEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104456b8c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11307ace0);
}



/* Entry: 104456b9c; end: 104456bab; -[SCOperaVideoControlsViewModel minimumDuration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104456b9c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11307ace8);
}



/* Entry: 104456bac; end: 104456bbb; -[SCOperaVideoControlsViewModel pauseOnSeek] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104456bac(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11307acf0);
}



/* Entry: 104456bbc; end: 104456bcb; -[SCOperaVideoControlsViewModel advancedVideoControlsInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104456bbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11307acf8));
  return;
}



/* Entry: 104456bcc; end: 104456c6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104456bcc(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11307acd8) = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_11307ace0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11307ace8) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_11307acf0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11307acf8) = param_5;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104456c70; end: 104456d1f; -[SCOperaVideoControlsViewModel initWithControlsType:shouldBeHiddenWhenEnabled:minimumDuration:pauseOnSeek:advancedVideoControlsInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104456c70(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_2;
  _swift_getObjectType();
  *(undefined8 *)(param_2 + _DAT_11307acd8) = param_4;
  *(undefined1 *)(param_2 + _DAT_11307ace0) = param_5;
  *(undefined8 *)(param_2 + _DAT_11307ace8) = param_1;
  *(undefined1 *)(param_2 + _DAT_11307acf0) = param_6;
  *(undefined8 *)(param_2 + _DAT_11307acf8) = param_7;
  puVar1 = PTR_s_init_1125d9248;
  lStack_60 = param_2;
  lStack_58 = lVar2;
  _objc_retain(param_7);
  _objc_msgSendSuper2(&lStack_60,puVar1);
  return;
}



/* Entry: 104456d20; end: 104456ddf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104456d20(undefined8 *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11307acd8) = *param_1;
  *(undefined1 *)(unaff_x20 + _DAT_11307ace0) = *(undefined1 *)(param_1 + 1);
  *(undefined8 *)(unaff_x20 + _DAT_11307ace8) = param_1[2];
  *(undefined1 *)(unaff_x20 + _DAT_11307acf0) = *(undefined1 *)(param_1 + 3);
  lVar1 = param_1[4];
  if (lVar1 == 1) {
    lVar1 = 0;
  }
  else {
    FUN_104456800(lVar1,(ulong)*(uint5 *)(param_1 + 5) & 0x101010101010101);
  }
  *(long *)(unaff_x20 + _DAT_11307acf8) = lVar1;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104456de0; end: 104456de3; -[SCOperaVideoControlsViewModel copyWithZone:] */

void FUN_104456de0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104456de4; end: 104456e17; -[SCOperaVideoControlsViewModel description] */

void FUN_104456de4(void)

{
  undefined1 auStack_40 [48];
  
  FUN_104457220(auStack_40);
  FUN_1044572d4(auStack_40);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104456e18; end: 104456e5f; -[SCOperaVideoControlsViewModel init] */

void FUN_104456e18(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCOperaVideoControlsAPI/SCOperaVideoControlsViewModelWrapper.swift",0x42,2,0x38,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104456e60);
  (*pcVar1)();
}



/* Entry: 104456e60; end: 104456e7b; +[SCOperaVideoControlsViewModelBuilder operaVideoControlsViewModel] */

void FUN_104456e60(void)

{
  _swift_getObjCClassMetadata();
  _objc_allocWithZone();
  func_0x00010bfee200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104456e7c; end: 104456ebb; +[SCOperaVideoControlsViewModelBuilder operaVideoControlsViewModelWithExistingOperaVideoControlsViewModel:] */

void FUN_104456e7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  FUN_104457308(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 104456ebc; end: 104456ed3; -[SCOperaVideoControlsViewModelBuilder withControlsType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104456ebc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_11307ad00);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 104456ed4; end: 104456ee3; -[SCOperaVideoControlsViewModelBuilder withShouldBeHiddenWhenEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104456ed4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11307ad08) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 104456ee4; end: 104456efb; -[SCOperaVideoControlsViewModelBuilder withMinimumDuration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104456ee4(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_11307ad10);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 104456efc; end: 104456f0b; -[SCOperaVideoControlsViewModelBuilder withPauseOnSeek:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104456efc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11307ad18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 104456f0c; end: 104456f6b; -[SCOperaVideoControlsViewModelBuilder withAdvancedVideoControlsInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104456f0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11307ad20);
  *(undefined8 *)(param_1 + _DAT_11307ad20) = param_3;
  _objc_retain(param_3);
  _objc_retain();
  _objc_retainAutoreleaseReturnValue(param_1);
  _objc_release(param_3);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 104456f6c; end: 1044570af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104456f6c(long param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  byte bVar3;
  undefined *puVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lStack_60;
  long lStack_58;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307ad00);
  if (*(char *)(puVar1 + 1) == '\x01') {
    uVar7 = 0;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  else {
    uVar7 = *puVar1;
  }
  bVar2 = *(byte *)(unaff_x20 + _DAT_11307ad08);
  if (bVar2 == 2) {
    *(undefined1 *)(unaff_x20 + _DAT_11307ad08) = 0;
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307ad10);
  if (*(char *)(puVar1 + 1) == '\x01') {
    uVar8 = 0;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  else {
    uVar8 = *puVar1;
  }
  bVar3 = *(byte *)(unaff_x20 + _DAT_11307ad18);
  if (bVar3 == 2) {
    *(undefined1 *)(unaff_x20 + _DAT_11307ad18) = 0;
  }
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_11307ad20);
  FUN_104457410();
  lVar5 = param_1;
  _objc_allocWithZone();
  *(undefined8 *)(lVar5 + _DAT_11307acd8) = uVar7;
  *(byte *)(lVar5 + _DAT_11307ace0) = bVar2 & 1;
  *(undefined8 *)(lVar5 + _DAT_11307ace8) = uVar8;
  *(byte *)(lVar5 + _DAT_11307acf0) = bVar3 & 1;
  *(undefined8 *)(lVar5 + _DAT_11307acf8) = uVar6;
  puVar4 = PTR_s_init_1125d9248;
  lStack_60 = lVar5;
  lStack_58 = param_1;
  _objc_retain(uVar6);
  _objc_msgSendSuper2(&lStack_60,puVar4);
  return;
}



/* Entry: 1044570b0; end: 1044570f3; -[SCOperaVideoControlsViewModelBuilder build] */

void FUN_1044570b0(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104456f6c();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1044570f4; end: 104457137; -[SCOperaVideoControlsViewModelBuilder safeBuildAndReturnError:] */

void FUN_1044570f4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104456f6c();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104457138; end: 1044571c7; -[SCOperaVideoControlsViewModelBuilder init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104457138(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  puVar1 = (undefined8 *)(param_1 + _DAT_11307ad00);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined1 *)(param_1 + _DAT_11307ad08) = 2;
  puVar1 = (undefined8 *)(param_1 + _DAT_11307ad10);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined1 *)(param_1 + _DAT_11307ad18) = 2;
  *(undefined8 *)(param_1 + _DAT_11307ad20) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044571c8; end: 1044571cb;  */

void FUN_1044571c8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1044571cc; end: 1044571db; -[SCOperaVideoControlsViewModelBuilder .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044571cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11307ad20));
  return;
}



/* Entry: 1044571dc; end: 10445720f;  */

void FUN_1044571dc(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104457210; end: 10445721f; -[SCOperaVideoControlsViewModel .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104457210(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11307acf8));
  return;
}



/* Entry: 104457220; end: 1044572d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104457220(undefined8 *param_1,long param_2,ulong param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar4 = *(undefined8 *)(param_2 + _DAT_11307acd8);
  uVar1 = *(undefined1 *)(param_2 + _DAT_11307ace0);
  uVar5 = *(undefined8 *)(param_2 + _DAT_11307ace8);
  uVar2 = *(undefined1 *)(param_2 + _DAT_11307acf0);
  lVar3 = *(long *)(param_2 + _DAT_11307acf8);
  if (lVar3 == 0) {
    param_3 = 0;
    lVar3 = 1;
  }
  else {
    FUN_1044568b8();
    param_3 = param_3 & 0x101010101;
    _swift_bridgeObjectRetain();
  }
  *param_1 = uVar4;
  *(undefined1 *)(param_1 + 1) = uVar1;
  param_1[2] = uVar5;
  *(undefined1 *)(param_1 + 3) = uVar2;
  param_1[4] = lVar3;
  *(int *)(param_1 + 5) = (int)param_3;
  *(char *)((long)param_1 + 0x2c) = (char)(param_3 >> 0x20);
  return;
}



/* Entry: 1044572d4; end: 104457307;  */

undefined8 FUN_1044572d4(undefined8 param_1)

{
  (*(code *)(undefined *)0x1044560ec)();
  return param_1;
}



/* Entry: 104457308; end: 10445740f;  */

/* WARNING: Possible PIC construction at 0x00010445733c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104457340) */

void FUN_104457308(long param_1)

{
  if (param_1 == 0) {
    func_0x000104457430();
    _objc_allocWithZone();
  }
  else {
    func_0x000104457430();
    _objc_allocWithZone();
    _objc_retain(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 104457410; end: 10445744f;  */

void FUN_104457410(void)

{
  _objc_opt_self(&PTR_PTR_1129b6f60);
  return;
}



/* Entry: 104457450; end: 104457453;  */

void FUN_104457450(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104457454; end: 104457473; -[_TtC16SCMapSearchScope16SCMapSearchScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104457454(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11307ad78));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104457474; end: 104457483; -[_TtC16SCMapSearchScope16SCMapSearchScope flavor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104457474(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11307ad80);
}



/* Entry: 104457484; end: 104457493; -[_TtC16SCMapSearchScope16SCMapSearchScope metricsContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104457484(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11307ad88);
}



/* Entry: 104457494; end: 10445749f; -[_TtC16SCMapSearchScope16SCMapSearchScope workflowDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104457494(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11307ad90;
  _swift_beginAccess(param_1 + _DAT_11307ad90,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044574a0; end: 1044574ab; -[_TtC16SCMapSearchScope16SCMapSearchScope setWorkflowDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044574a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11307ad90;
  _swift_beginAccess(param_1 + _DAT_11307ad90,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1044574ac; end: 1044574b7; -[_TtC16SCMapSearchScope16SCMapSearchScope mapDestinationSubject] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044574ac(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11307ad98;
  _swift_beginAccess(param_1 + _DAT_11307ad98,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044574b8; end: 1044574fb;  */

void FUN_1044574b8(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  _swift_beginAccess(param_1 + lVar1,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044574fc; end: 104457507; -[_TtC16SCMapSearchScope16SCMapSearchScope setMapDestinationSubject:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044574fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11307ad98;
  _swift_beginAccess(param_1 + _DAT_11307ad98,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 104457508; end: 10445755b;  */

void FUN_104457508(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10445755c; end: 104457613; -[_TtC16SCMapSearchScope16SCMapSearchScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10445755c(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11307ad78));
  func_0x0001044575a4(param_1 + _DAT_11307ad90);
                    /* WARNING: Could not recover jumptable at 0x00010bdc05f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakDestroy_11034f580)(param_1 + _DAT_11307ad98);
  return;
}



/* Entry: 104457614; end: 104457763;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_104457614(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *aplStack_b8 [2];
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar4 = param_1;
  func_0x000100349fe0();
  lVar5 = lVar4;
  _objc_allocWithZone();
  lVar2 = _DAT_11307ad90;
  _swift_unknownObjectWeakInit(lVar5 + _DAT_11307ad90,0);
  lVar3 = _DAT_11307ad98;
  _swift_unknownObjectWeakInit(lVar5 + _DAT_11307ad98,0);
  *(long *)(lVar5 + _DAT_11307ad78) = param_1;
  _swift_beginAccess(lVar5 + lVar3,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(lVar5 + lVar3,param_2);
  *(undefined8 *)(lVar5 + _DAT_11307ad80) = param_3;
  *(undefined8 *)(lVar5 + _DAT_11307ad88) = param_4;
  _swift_beginAccess(lVar5 + lVar2,auStack_90,1,0);
  _swift_unknownObjectWeakAssign(lVar5 + lVar2,param_5);
  puVar1 = PTR_s_init_1125d9248;
  lStack_a0 = lVar5;
  lStack_98 = lVar4;
  _swift_unknownObjectRetain(param_1);
  plVar6 = &lStack_a0;
  _objc_msgSendSuper2(plVar6,puVar1);
  aplStack_b8[0] = plVar6;
  func_0x00010008a7c8(&uStack_a8,aplStack_b8);
  func_0x000100083b20(aplStack_b8);
  _swift_release(uStack_a8);
  _swift_unknownObjectRelease(aplStack_b8[0]);
  return plVar6;
}



/* Entry: 104457764; end: 10445780f; -[_TtC16SCMapSearchScope24SCMapSearchScopeServices buildWithUIContainer:mapDestinationSubject:flavor:metricsContext:delegate:] */

void FUN_104457764(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_4);
  _swift_unknownObjectRetain(param_7);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_104457614(param_3,param_4,param_5,param_6,param_7);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_4);
  _swift_unknownObjectRelease(param_7);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104457810; end: 104457813;  */

void FUN_104457810(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104457814; end: 104457847;  */

void FUN_104457814(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104457848; end: 10445788f; -[_TtC16SCMapSearchScope24SCMapSearchScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104457848(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11307ada8));
  return;
}



/* Entry: 104457890; end: 1044578d3;  */

void FUN_104457890(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  _swift_getForeignTypeMetadata();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 1044578d4; end: 1044578d7;  */

void FUN_1044578d4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1044578d8; end: 1044578f7; -[_TtC24SCSearchSuggestionsScope24SCSearchSuggestionsScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044578d8(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11307ae10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044578f8; end: 104457907; -[_TtC24SCSearchSuggestionsScope24SCSearchSuggestionsScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044578f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_11307ae10));
  return;
}



/* Entry: 104457908; end: 10445796f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104457908(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010034f704();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_11307ae20) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 104457970; end: 1044579bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104457970(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11307ae20) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044579bc; end: 104457a5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1044579bc(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *aplStack_58 [2];
  undefined8 uStack_48;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x00010034a160();
  lVar3 = lVar2;
  _objc_allocWithZone();
  *(long *)(lVar3 + _DAT_11307ae10) = param_1;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  _swift_unknownObjectRetain(param_1);
  plVar4 = &lStack_40;
  _objc_msgSendSuper2(plVar4,puVar1);
  aplStack_58[0] = plVar4;
  func_0x00010008a7c8(&uStack_48,aplStack_58);
  func_0x000100083b20(aplStack_58);
  _swift_release(uStack_48);
  _swift_unknownObjectRelease(aplStack_58[0]);
  return plVar4;
}



/* Entry: 104457a60; end: 104457abb; -[_TtC24SCSearchSuggestionsScope32SCSearchSuggestionsScopeServices buildWithUIContainer:] */

void FUN_104457a60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_1044579bc(param_3);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104457abc; end: 104457abf;  */

void FUN_104457abc(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104457ac0; end: 104457af3;  */

void FUN_104457ac0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104457af4; end: 104457b17; -[_TtC24SCSearchSuggestionsScope32SCSearchSuggestionsScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104457af4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11307ae20));
  return;
}



/* Entry: 104457b18; end: 104457b37; -[_TtC37SCSpectaclesFlightImuCalibrationScope37SCSpectaclesFlightImuCalibrationScope currentDevice] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104457b18(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11307ae78));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104457b38; end: 104457b57; -[_TtC37SCSpectaclesFlightImuCalibrationScope37SCSpectaclesFlightImuCalibrationScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104457b38(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11307ae80));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104457b58; end: 104457b9f; -[_TtC37SCSpectaclesFlightImuCalibrationScope37SCSpectaclesFlightImuCalibrationScope scopeDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104457b58(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11307ae88;
  _swift_beginAccess(param_1 + _DAT_11307ae88,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104457ba0; end: 104457bf7; -[_TtC37SCSpectaclesFlightImuCalibrationScope37SCSpectaclesFlightImuCalibrationScope setScopeDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104457ba0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11307ae88;
  _swift_beginAccess(param_1 + _DAT_11307ae88,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 104457bf8; end: 104457caf; -[_TtC37SCSpectaclesFlightImuCalibrationScope37SCSpectaclesFlightImuCalibrationScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104457bf8(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11307ae78));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11307ae80));
  param_1 = param_1 + _DAT_11307ae88;
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 104457cb0; end: 104457d17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104457cb0(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_104457f78();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_11307ae98) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 104457d18; end: 104457d63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104457d18(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11307ae98) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104457d64; end: 104457e6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_104457d64(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *aplStack_90 [2];
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  lVar3 = param_1;
  FUN_104457f00();
  lVar4 = lVar3;
  _objc_allocWithZone();
  lVar2 = _DAT_11307ae88;
  _swift_unknownObjectWeakInit(lVar4 + _DAT_11307ae88,0);
  *(long *)(lVar4 + _DAT_11307ae78) = param_1;
  *(undefined8 *)(lVar4 + _DAT_11307ae80) = param_2;
  _swift_beginAccess(lVar4 + lVar2,auStack_68,1,0);
  _swift_unknownObjectWeakAssign(lVar4 + lVar2,param_3);
  puVar1 = PTR_s_init_1125d9248;
  lStack_78 = lVar4;
  lStack_70 = lVar3;
  _swift_unknownObjectRetain(param_1);
  _swift_unknownObjectRetain(param_2);
  plVar5 = &lStack_78;
  _objc_msgSendSuper2(plVar5,puVar1);
  aplStack_90[0] = plVar5;
  func_0x00010008a7c8(&uStack_80,aplStack_90);
  func_0x000100083b20(aplStack_90);
  _swift_release(uStack_80);
  _swift_unknownObjectRelease(aplStack_90[0]);
  return plVar5;
}



/* Entry: 104457e6c; end: 104457eff; -[_TtC37SCSpectaclesFlightImuCalibrationScope45SCSpectaclesFlightImuCalibrationScopeServices buildWithCurrentDevice:uiContainer:scopeDelegate:] */

void FUN_104457e6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _swift_unknownObjectRetain(param_3);
  _swift_unknownObjectRetain(param_4);
  _swift_unknownObjectRetain(param_5);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_104457d64(param_3,param_4,param_5);
  _swift_unknownObjectRelease(param_3);
  _swift_unknownObjectRelease(param_4);
  _swift_unknownObjectRelease(param_5);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104457f00; end: 104457f1f;  */

void FUN_104457f00(void)

{
  _objc_opt_self(&PTR_PTR_1129b7440);
  return;
}



/* Entry: 104457f20; end: 104457f23;  */

void FUN_104457f20(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104457f24; end: 104457f57;  */

void FUN_104457f24(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104457f58; end: 104457f77; -[_TtC37SCSpectaclesFlightImuCalibrationScope45SCSpectaclesFlightImuCalibrationScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104457f58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11307ae98));
  return;
}



/* Entry: 104457f78; end: 104457f97;  */

void FUN_104457f78(void)

{
  _objc_opt_self(&PTR_PTR_1129b7510);
  return;
}



/* Entry: 104457f98; end: 104457f9b;  */

void FUN_104457f98(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104457f9c; end: 104457fbb; -[_TtC31SCSpectaclesFlightSettingsScope31SCSpectaclesFlightSettingsScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104457f9c(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11307aef0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104457fbc; end: 104458003; -[_TtC31SCSpectaclesFlightSettingsScope31SCSpectaclesFlightSettingsScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104457fbc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11307aef8;
  _swift_beginAccess(param_1 + _DAT_11307aef8,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104458004; end: 10445805b; -[_TtC31SCSpectaclesFlightSettingsScope31SCSpectaclesFlightSettingsScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104458004(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11307aef8;
  _swift_beginAccess(param_1 + _DAT_11307aef8,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10445805c; end: 10445806b; -[_TtC31SCSpectaclesFlightSettingsScope31SCSpectaclesFlightSettingsScope flightMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10445805c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11307af00);
}


