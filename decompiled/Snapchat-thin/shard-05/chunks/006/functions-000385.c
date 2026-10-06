/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103f27d68; end: 103f27e1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f27d68(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  uVar1 = uStack_48;
  uVar2 = uStack_48;
  func_0x000107c509b4(uStack_48);
  _objc_retainAutoreleasedReturnValue();
  _swift_unknownObjectRelease(uVar1);
  _swift_bridgeObjectRetain(param_2);
  func_0x000100083b20(&uStack_48);
  FUN_103f26754(0);
  _objc_allocWithZone();
  FUN_103f2337c(uVar2,param_1,param_2,uStack_48);
  return;
}



/* Entry: 103f27e1c; end: 103f27e93; -[_TtC18UnifiedToolbarImpl22UnifiedToolbarProvider createToolbarWithSnapSessionId:] */

void FUN_103f27e1c(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  }
  _objc_retain(param_1);
  FUN_103f27d68(param_3,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103f27e94; end: 103f27ef3; -[_TtC18UnifiedToolbarImpl22UnifiedToolbarProvider init] */

void FUN_103f27e94(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("UnifiedToolbarImpl.UnifiedToolbarProvider",0x29,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f27ec0);
  (*pcVar1)();
}



/* Entry: 103f27ef4; end: 103f27f03;  */

undefined1  [16] FUN_103f27ef4(void)

{
  return ZEXT816(0x110722808);
}



/* Entry: 103f27f04; end: 103f27f3b; -[_TtC18UnifiedToolbarImpl22UnifiedToolbarProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f27f04(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_11302eca0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11302ec98));
  return;
}



/* Entry: 103f27f3c; end: 103f27f5b;  */

void FUN_103f27f3c(void)

{
  _objc_opt_self(&PTR_PTR_1129671f8);
  return;
}



/* Entry: 103f27f5c; end: 103f2802f; -[Value lapsedCaptionUsageConfig] */

/* WARNING: Removing unreachable block (ram,0x000103f27ff8) */

void FUN_103f27f5c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain();
  lVar2 = param_1;
  func_0x00010bf04a80();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103f2802c);
    (*pcVar1)();
  }
  lVar3 = lVar2;
  func_0x000107c5dc0c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103f28030);
    (*pcVar1)();
  }
  lVar2 = lVar3;
  __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ(lVar3);
  _objc_release(lVar3);
  _objc_allocWithZone(PTR_PTR_1126adb28);
  lVar3 = lVar2;
  FUN_103f28030(lVar2,param_2);
  func_0x00010006c090(lVar2,param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 103f28030; end: 103f280ef;  */

long FUN_103f28030(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF();
  func_0x000107c4636c();
  _objc_release(param_1);
  uVar2 = 0;
  if (unaff_x20 == 0) {
    _objc_retain();
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(0);
    _objc_release(uVar2);
    _swift_willThrow();
  }
  else {
    _objc_retain();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return unaff_x20;
  }
  ___stack_chk_fail();
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd000000000000042,0x800000010f1cfe60,
             "SCCreativeToolsABServices/SCCreativeToolsABServices.swift",0x39,2,0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f28148);
  (*pcVar1)();
}



/* Entry: 103f280f0; end: 103f28147; -[SCCreativeToolsABServices init] */

void FUN_103f280f0(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd000000000000042,0x800000010f1cfe60,
             "SCCreativeToolsABServices/SCCreativeToolsABServices.swift",0x39,2,0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f28148);
  (*pcVar1)();
}



/* Entry: 103f28148; end: 103f28193;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f28148(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11302ecd0) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f28194; end: 103f281eb; -[SCCreativeToolsABServices initWithCreativeToolsABProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f28194(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11302ecd0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _swift_unknownObjectRetain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 103f281ec; end: 103f2821f;  */

void FUN_103f281ec(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103f28220; end: 103f2822f; -[SCCreativeToolsABServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f28220(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_11302ecd0));
  return;
}



/* Entry: 103f28230; end: 103f2829b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f28230(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  func_0x0001002ac414();
  lVar3 = lVar2;
  _objc_allocWithZone();
  *(long *)(lVar3 + _DAT_11302ed08) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  _swift_retain(param_2);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 103f2829c; end: 103f282a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f2829c(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  func_0x0001002ac414();
  _objc_allocWithZone();
  *(long *)(lVar2 + _DAT_11302ed08) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  _swift_retain();
  _objc_msgSendSuper2(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 103f282a4; end: 103f282ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f282a4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11302ed08) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f282f0; end: 103f28337; -[_TtC22UnifiedToolbarServices22UnifiedToolbarServices toolbarProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f282f0(undefined8 param_1)

{
  undefined8 uStack_28;
  
  _objc_retain();
  func_0x000100083b20(&uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_28);
  return;
}



/* Entry: 103f28338; end: 103f28397; -[_TtC22UnifiedToolbarServices22UnifiedToolbarServices init] */

void FUN_103f28338(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("UnifiedToolbarServices.UnifiedToolbarServices",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f28364);
  (*pcVar1)();
}



/* Entry: 103f28398; end: 103f283a7;  */

undefined1  [16] FUN_103f28398(void)

{
  return ZEXT816(0x110722928);
}



/* Entry: 103f283a8; end: 103f283b7; -[_TtC22UnifiedToolbarServices22UnifiedToolbarServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f283a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11302ed08));
  return;
}



/* Entry: 103f283b8; end: 103f28433; -[_TtC30SCCaptureDeviceManagerInternal25CaptureDeviceManagerUtils init] */

void FUN_103f283b8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCCaptureDeviceManagerInternal/SCCaptureDeviceManagerUtils.swift",0x40,2,0x20,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f28400);
  (*pcVar1)();
}



/* Entry: 103f28434; end: 103f28443; -[SCExtractedImageColors topColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f28434(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302ed60));
  return;
}



/* Entry: 103f28444; end: 103f28453; -[SCExtractedImageColors bottomColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f28444(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302ed68));
  return;
}



/* Entry: 103f28454; end: 103f284b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f28454(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11302ed60) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11302ed68) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f284b8; end: 103f2852f; -[SCExtractedImageColors initWithTopColor:bottomColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f284b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11302ed60) = param_3;
  *(undefined8 *)(param_1 + _DAT_11302ed68) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 103f28530; end: 103f2858f; -[SCExtractedImageColors init] */

void FUN_103f28530(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCMediaEngineImageServices.ExtractedImageColors",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f2855c);
  (*pcVar1)();
}



/* Entry: 103f28590; end: 103f285c7; -[SCExtractedImageColors .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f28590(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302ed60));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11302ed68));
  return;
}



/* Entry: 103f285c8; end: 103f285e7;  */

void FUN_103f285c8(void)

{
  _objc_opt_self(&PTR_PTR_1129674f0);
  return;
}



/* Entry: 103f285e8; end: 103f28633;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f285e8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11302ed98) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f28634; end: 103f28693; -[_TtC26SCMediaEngineImageServices24MediaEngineImageServices init] */

void FUN_103f28634(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCMediaEngineImageServices.MediaEngineImageServices",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f28660);
  (*pcVar1)();
}



/* Entry: 103f28694; end: 103f286a3; -[_TtC26SCMediaEngineImageServices24MediaEngineImageServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f28694(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11302ed98));
  return;
}



/* Entry: 103f286a4; end: 103f286e3;  */

undefined8 FUN_103f286a4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_103f2903c(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 103f286e4; end: 103f2871f; -[SCMicFallbackStateStore initWithPreferences:] */

undefined8 FUN_103f286e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_103f2903c();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 103f28720; end: 103f2878b; -[SCMicFallbackStateStore consecutiveSilentRecordingCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f28720(undefined8 param_1)

{
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_1;
  _objc_retain();
  func_0x000100087bd4(&uStack_38,0x103f29638,auStack_50,PTR___sSiN_11034deb0);
  _objc_release(param_1);
  return uStack_38;
}



/* Entry: 103f2878c; end: 103f2879f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f2878c(undefined8 *param_1,long param_2)

{
  *param_1 = *(undefined8 *)(param_2 + _DAT_11302ede0);
  return;
}



/* Entry: 103f287a0; end: 103f287e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f287a0(long param_1)

{
  code *pcVar1;
  
  if (!SCARRY8(*(long *)(param_1 + _DAT_11302ede0),1)) {
    *(long *)(param_1 + _DAT_11302ede0) = *(long *)(param_1 + _DAT_11302ede0) + 1;
    FUN_103f287e4();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f287e4);
  (*pcVar1)();
}



/* Entry: 103f287e4; end: 103f28b43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f287e4(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  undefined1 auStack_148 [32];
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined1 auStack_108 [152];
  long lStack_70;
  
  lVar2 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = (long)&lStack_170 - extraout_x8;
  lVar3 = 0;
  __s10Foundation4DateVMa();
  lVar9 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar7 = lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  _swift_initStackObject();
  *(undefined8 *)(lVar2 + 0x18) = 4;
  *(undefined8 *)(lVar2 + 0x10) = 2;
  *(undefined8 *)(lVar2 + 0x20) = 0x6e6f6973726576;
  puVar1 = PTR___sSiN_11034deb0;
  *(undefined8 *)(lVar2 + 0x28) = 0xe700000000000000;
  *(undefined8 *)(lVar2 + 0x30) = 1;
  *(undefined **)(lVar2 + 0x48) = puVar1;
  *(undefined8 *)(lVar2 + 0x50) = 0xd00000000000001f;
  *(undefined8 *)(lVar2 + 0x58) = 0x800000010f1cffd0;
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_11302ede0);
  *(undefined **)(lVar2 + 0x78) = puVar1;
  *(undefined8 *)(lVar2 + 0x60) = uVar5;
  lVar4 = lVar2;
  func_0x000100214a84();
  _swift_setDeallocating(lVar2);
  uVar5 = 0x112d4b5f0;
  func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
  _swift_arrayDestroy((undefined8 *)(lVar2 + 0x20),2,uVar5);
  lVar2 = _DAT_11302edd8;
  lStack_70 = lVar4;
  _swift_beginAccess(unaff_x20 + _DAT_11302edd8,auStack_108,0,0);
  func_0x000103f295b4(unaff_x20 + lVar2,lVar8,0x112d373d8,&UNK_10d9014c0);
  lVar2 = lVar8;
  (**(code **)(lVar9 + 0x30))(lVar8,1,lVar3);
  if ((int)lVar2 == 1) {
    func_0x000103f29574(lVar8,0x112d373d8,&UNK_10d9014c0);
  }
  else {
    (**(code **)(lVar9 + 0x20))(lVar7,lVar8,lVar3);
    lStack_110 = lVar3;
    func_0x0001000a9d90(&lStack_128);
    (**(code **)(lVar9 + 0x10))();
    uStack_168 = uStack_120;
    lStack_170 = lStack_128;
    lStack_158 = lStack_110;
    uStack_160 = uStack_118;
    if (lStack_110 == 0) {
      func_0x000103f29574(&lStack_170,0x112d387f8,&UNK_10d902650);
      func_0x000100216878(auStack_148,0xd000000000000013,0x800000010f1d0020);
      func_0x000103f29574(auStack_148,0x112d387f8,&UNK_10d902650);
    }
    else {
      func_0x000100102924(&lStack_170,auStack_148);
      lVar2 = lVar4;
      _swift_isUniquelyReferenced_nonNull_native(lVar4);
      lStack_170 = lVar4;
      func_0x0001001029e8(auStack_148,0xd000000000000013,0x800000010f1d0020,lVar2);
      lStack_70 = lStack_170;
    }
    lVar4 = lStack_70;
    (**(code **)(lVar9 + 8))(lVar7,lVar3);
  }
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_11302edd0);
  lVar2 = lVar4;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (lVar4,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  uVar5 = 0xd000000000000026;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000026,0x800000010f1cfff0);
  func_0x000107c56bcc(uVar6);
  _swift_bridgeObjectRelease(lVar4);
  _objc_release(lVar2);
  _objc_release(uVar5);
  return;
}



/* Entry: 103f28b44; end: 103f28b4f; -[SCMicFallbackStateStore incrementConsecutiveSilentRecordingCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f28b44(undefined8 param_1)

{
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  
  uStack_40 = param_1;
  _objc_retain();
  func_0x000100087bd4(0x103f29624,auStack_50,PTR___sytN_11034f1b0 + 8);
  _objc_release(param_1);
  return;
}



/* Entry: 103f28b50; end: 103f28b8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f28b50(long param_1)

{
  if (*(long *)(param_1 + _DAT_11302ede0) != 0) {
    *(undefined8 *)(param_1 + _DAT_11302ede0) = 0;
    FUN_103f287e4();
  }
  return;
}



/* Entry: 103f28b8c; end: 103f28b97; -[SCMicFallbackStateStore resetConsecutiveSilentRecordingCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f28b8c(undefined8 param_1)

{
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  
  uStack_40 = param_1;
  _objc_retain();
  func_0x000100087bd4(0x103f29610,auStack_50,PTR___sytN_11034f1b0 + 8);
  _objc_release(param_1);
  return;
}



/* Entry: 103f28b98; end: 103f28bff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f28b98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  
  uStack_40 = param_1;
  _objc_retain();
  func_0x000100087bd4(param_3,auStack_50,PTR___sytN_11034f1b0 + 8);
  _objc_release(param_1);
  return;
}



/* Entry: 103f28c00; end: 103f28f73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f28c00(long param_1)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar6;
  ulong uVar7;
  long extraout_x12;
  long extraout_x12_00;
  code *pcVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_c0 [8];
  undefined1 *puStack_b8;
  code *pcStack_b0;
  long lStack_a8;
  long lStack_a0;
  ulong uStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar12 = 0x112d373d0;
  puStack_b8 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000285a8(0x112d373d0,&UNK_10d90f8f0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = (long)(auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  lVar6 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  lVar6 = lVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_a8 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar7 = lVar6 - extraout_x12;
  uStack_98 = uVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = _DAT_11302edd8;
  lVar11 = uVar7 - extraout_x12_00;
  _swift_beginAccess(param_1 + _DAT_11302edd8,auStack_78,0,0);
  pcStack_b0 = *(code **)(lVar10 + 0x38);
  (*pcStack_b0)(lVar11,1,1,lVar2);
  lVar12 = (long)*(int *)(lVar12 + 0x30);
  lStack_a0 = param_1;
  func_0x000103f295b4(param_1 + lVar6,lVar9,0x112d373d8,&UNK_10d9014c0);
  func_0x000103f295b4(lVar11,lVar9 + lVar12,0x112d373d8,&UNK_10d9014c0);
  pcVar8 = *(code **)(lVar10 + 0x30);
  lVar3 = lVar9;
  (*pcVar8)(lVar9,1,lVar2);
  uVar7 = uStack_98;
  if ((int)lVar3 == 1) {
    func_0x000103f29574(lVar11,0x112d373d8,&UNK_10d9014c0);
    lVar12 = lVar9 + lVar12;
    (*pcVar8)(lVar12,1,lVar2);
    if ((int)lVar12 != 1) {
LAB_103f28e5c:
      func_0x000103f29574(lVar9,0x112d373d0,&UNK_10d90f8f0);
      return;
    }
    func_0x000103f29574(lVar9,0x112d373d8,&UNK_10d9014c0);
  }
  else {
    func_0x000103f295b4(lVar9,uStack_98,0x112d373d8,&UNK_10d9014c0);
    lVar3 = lVar9 + lVar12;
    (*pcVar8)(lVar3,1,lVar2);
    puVar1 = puStack_b8;
    if ((int)lVar3 == 1) {
      func_0x000103f29574(lVar11,0x112d373d8,&UNK_10d9014c0);
      (**(code **)(lVar10 + 8))(uVar7,lVar2);
      goto LAB_103f28e5c;
    }
    puVar4 = puStack_b8;
    (**(code **)(lVar10 + 0x20))(puStack_b8,lVar9 + lVar12,lVar2);
    func_0x000100df4c40();
    uVar5 = uVar7;
    __sSQ2eeoiySbx_xtFZTj(uVar7,puVar1,lVar2,puVar4);
    pcVar8 = *(code **)(lVar10 + 8);
    (*pcVar8)(puVar1,lVar2);
    func_0x000103f29574(lVar11,0x112d373d8,&UNK_10d9014c0);
    (*pcVar8)(uVar7,lVar2);
    func_0x000103f29574(lVar9,0x112d373d8,&UNK_10d9014c0);
    if ((uVar5 & 1) == 0) {
      return;
    }
  }
  lVar12 = lStack_a8;
  __s10Foundation4DateVACycfC(lStack_a8);
  (*pcStack_b0)(lVar12,0,1,lVar2);
  lVar3 = lStack_a0;
  _swift_beginAccess(lStack_a0 + lVar6,auStack_90,0x21,0);
  func_0x000100ed9cbc(lVar12,lVar3 + lVar6);
  _swift_endAccess(auStack_90);
  FUN_103f287e4();
  return;
}



/* Entry: 103f28f74; end: 103f28f7f; -[SCMicFallbackStateStore markFallbackActivated] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f28f74(undefined8 param_1)

{
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  
  uStack_40 = param_1;
  _objc_retain();
  func_0x000100087bd4(FUN_103f295fc,auStack_50,PTR___sytN_11034f1b0 + 8);
  _objc_release(param_1);
  return;
}



/* Entry: 103f28f80; end: 103f28fdf; -[SCMicFallbackStateStore init] */

void FUN_103f28f80(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCCameraAudioUtilities.MicFallbackStateStore",0x2c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f28fac);
  (*pcVar1)();
}



/* Entry: 103f28fe0; end: 103f2903b; -[SCMicFallbackStateStore .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f28fe0(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302edd0));
  _swift_release(*(undefined8 *)(param_1 + _DAT_11302edc8));
  func_0x000103f29574(param_1 + _DAT_11302edd8,0x112d373d8,&UNK_10d9014c0);
  return;
}



/* Entry: 103f2903c; end: 103f293c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f2903c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  undefined1 *puVar9;
  uint uVar10;
  ulong uVar11;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar12;
  code *pcVar13;
  undefined1 auStack_a0 [8];
  long lStack_98;
  long alStack_80 [4];
  
  _swift_getObjectType();
  lVar3 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = _DAT_11302edc8;
  puVar12 = auStack_a0 + -extraout_x8;
  uVar4 = 0;
  func_0x00010006a340();
  _swift_allocObject();
  func_0x00010006a360();
  *(undefined8 *)(unaff_x20 + lVar3) = uVar4;
  lVar3 = _DAT_11302edd8;
  lVar5 = 0;
  __s10Foundation4DateVMa();
  pcVar13 = *(code **)(*(long *)(lVar5 + -8) + 0x38);
  (*pcVar13)(unaff_x20 + lVar3,1,1,lVar5);
  *(long *)(unaff_x20 + _DAT_11302edd0) = param_1;
  _objc_retain();
  uVar4 = 0xd000000000000026;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000026,0x800000010f1cfff0);
  func_0x000107c4d9c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  if (param_1 == 0) {
LAB_103f29200:
    alStack_80[1] = 0;
    alStack_80[0] = 0;
    alStack_80[3] = 0;
    alStack_80[2] = 0;
    func_0x000103f29574(alStack_80,0x112d387f8,&UNK_10d902650);
    *(undefined8 *)(unaff_x20 + _DAT_11302ede0) = 0;
    alStack_80[1] = 0;
    alStack_80[0] = 0;
    alStack_80[3] = 0;
    alStack_80[2] = 0;
  }
  else {
    uVar4 = 0x112d373e8;
    alStack_80[0] = param_1;
    func_0x0001000285a8(0x112d373e8,&UNK_10d97fd10);
    uVar6 = 0x112d472a8;
    func_0x0001000285a8(0x112d472a8,&UNK_10d90e490);
    plVar7 = &lStack_98;
    _swift_dynamicCast(plVar7,alStack_80,uVar4,uVar6,6);
    lVar2 = lStack_98;
    puVar1 = PTR___sypN_11034f1a8;
    if ((((ulong)plVar7 & 1) == 0) || (lStack_98 == 0)) goto LAB_103f29200;
    if (*(long *)(lStack_98 + 0x10) == 0) {
      alStack_80[1] = 0;
      alStack_80[0] = 0;
      alStack_80[3] = 0;
      alStack_80[2] = 0;
LAB_103f2930c:
      func_0x000103f29574(alStack_80,0x112d387f8,&UNK_10d902650);
      lStack_98 = 0;
    }
    else {
      _swift_bridgeObjectRetain(lStack_98);
      lVar8 = -0x2fffffffffffffe1;
      uVar11 = 0;
      func_0x000100029284(0xd00000000000001f);
      if ((uVar11 & 1) == 0) {
        alStack_80[1] = 0;
        alStack_80[0] = 0;
        alStack_80[3] = 0;
        alStack_80[2] = 0;
      }
      else {
        func_0x0001000bb420(*(long *)(lVar2 + 0x38) + lVar8 * 0x20,alStack_80);
      }
      _swift_bridgeObjectRelease(lVar2);
      if (alStack_80[3] == 0) goto LAB_103f2930c;
      plVar7 = &lStack_98;
      _swift_dynamicCast(plVar7,alStack_80,puVar1 + 8,PTR___sSiN_11034deb0,6);
      if ((int)plVar7 == 0) {
        lStack_98 = 0;
      }
    }
    *(long *)(unaff_x20 + _DAT_11302ede0) = lStack_98;
    if (*(long *)(lVar2 + 0x10) == 0) {
LAB_103f29388:
      alStack_80[1] = 0;
      alStack_80[0] = 0;
      alStack_80[3] = 0;
      alStack_80[2] = 0;
    }
    else {
      _swift_bridgeObjectRetain(lVar2);
      uVar11 = 0;
      lVar8 = -0x2fffffffffffffed;
      func_0x000100029284(0xd000000000000013);
      if ((uVar11 & 1) == 0) {
        _swift_bridgeObjectRelease(lVar2);
        goto LAB_103f29388;
      }
      func_0x0001000bb420(*(long *)(lVar2 + 0x38) + lVar8 * 0x20,alStack_80);
      _swift_bridgeObjectRelease(lVar2);
    }
    _swift_bridgeObjectRelease(lVar2);
    if (alStack_80[3] != 0) {
      puVar9 = puVar12;
      _swift_dynamicCast(puVar12,alStack_80,puVar1 + 8,lVar5,6);
      uVar10 = (uint)puVar9 ^ 1;
      goto LAB_103f29254;
    }
  }
  func_0x000103f29574(alStack_80,0x112d387f8,&UNK_10d902650);
  uVar10 = 1;
LAB_103f29254:
  (*pcVar13)(puVar12,uVar10,1,lVar5);
  _swift_beginAccess(unaff_x20 + lVar3,alStack_80,0x21,0);
  func_0x000100ed9cbc(puVar12,unaff_x20 + lVar3);
  _swift_endAccess(alStack_80);
  _objc_msgSendSuper2(&stack0xffffffffffffff70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f293c4; end: 103f293db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f293c4(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_11302ede0);
  return;
}



/* Entry: 103f293dc; end: 103f2941b;  */

void FUN_103f293dc(void)

{
  func_0x000103f29530();
  return;
}



/* Entry: 103f2941c; end: 103f29423;  */

void FUN_103f2941c(void)

{
  if (lRam000000011302ee10 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_10e7d59b4);
  return;
}



/* Entry: 103f29424; end: 103f2945b;  */

void FUN_103f29424(undefined8 param_1)

{
  if (lRam000000011302ee10 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e7d59b4);
  return;
}



/* Entry: 103f2945c; end: 103f295fb;  */

void FUN_103f2945c(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_40 = PTR___sBOWV_11034d658 + 0x40;
  puStack_38 = PTR___sBoWV_11034d678 + 0x40;
  puStack_30 = PTR___sBi64_WV_11034d670 + 0x40;
  lVar1 = 0x13f;
  func_0x0001000776dc();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_updateClassMetadata2(param_1,0x100,4,&puStack_40,param_1 + 0x50);
  }
  return;
}



/* Entry: 103f295fc; end: 103f2964b;  */

void FUN_103f295fc(void)

{
  func_0x000103f29404();
  return;
}



/* Entry: 103f2964c; end: 103f29707;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103f2964c(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  
  lVar1 = _DAT_11302ee20;
  lVar4 = *(long *)(unaff_x20 + _DAT_11302ee20);
  lVar5 = lVar4;
  if (lVar4 == 1) {
    lVar2 = *(long *)(unaff_x20 + _DAT_11302ee28);
    func_0x000107c5c734();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      lVar5 = 0;
    }
    else {
      uVar3 = 0;
      FUN_103f29424(0);
      _objc_allocWithZone();
      lVar5 = lVar2;
      FUN_103f2903c(lVar2,uVar3);
      _objc_release(lVar2);
    }
    uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar5;
    _objc_retain(lVar5);
    FUN_103f2a180(uVar3);
  }
  FUN_103f2a1b0(lVar4);
  return lVar5;
}



/* Entry: 103f29708; end: 103f2977b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f29708(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11302ee20) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_11302ee28) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11302ee30) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f2977c; end: 103f297af; -[SCMicFallbackTracker consecutiveSilentRecordingCount] */

undefined8 FUN_103f2977c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103f297b0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 103f297b0; end: 103f2987f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f297b0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_50 [16];
  long lStack_40;
  undefined1 auStack_38 [8];
  
  lVar1 = *(long *)(unaff_x20 + _DAT_11302ee30);
  func_0x000107c5c734();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    FUN_103f2964c();
    if (lVar2 == 0) {
      _swift_unknownObjectRelease(lVar1);
    }
    else {
      lVar3 = lVar1;
      func_0x000107c4ce90();
      if (lVar3 < 0) {
        lStack_40 = lVar2;
        func_0x000100087bd4(auStack_38,FUN_103f29880,auStack_50,PTR___sSiN_11034deb0);
        _objc_release(lVar2);
        _swift_unknownObjectRelease(lVar1);
      }
      else {
        _swift_unknownObjectRelease(lVar1);
        _objc_release(lVar2);
      }
    }
  }
  return;
}



/* Entry: 103f29880; end: 103f29897;  */

void FUN_103f29880(void)

{
  long unaff_x20;
  
  FUN_103f2878c(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103f29898; end: 103f2991f; -[SCMicFallbackTracker activationThresholdReached] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_103f29898(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + _DAT_11302ee30);
  _objc_retain();
  func_0x000107c5c734();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    _objc_release(param_1);
    bVar1 = false;
  }
  else {
    lVar2 = lVar4;
    FUN_103f297b0();
    lVar3 = lVar4;
    func_0x000107c4ce94(lVar4);
    _swift_unknownObjectRelease(lVar4);
    _objc_release(param_1);
    bVar1 = lVar3 <= lVar2;
  }
  return bVar1;
}



/* Entry: 103f29920; end: 103f29953; -[SCMicFallbackTracker shouldPinFallbackMic] */

uint FUN_103f29920(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103f29954();
  _objc_release(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 103f29954; end: 103f299f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f29954(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  
  lVar3 = *(long *)(unaff_x20 + _DAT_11302ee30);
  lVar1 = lVar3;
  func_0x000107c5c734();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c4ce9c();
    if ((int)lVar2 != 0) {
      func_0x000107c5c734();
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 != 0) {
        FUN_103f297b0();
        func_0x000107c4ce94(lVar3);
        _swift_unknownObjectRelease(lVar3);
        _swift_unknownObjectRelease(lVar1);
        return;
      }
    }
    _swift_unknownObjectRelease(lVar1);
  }
  return;
}



/* Entry: 103f299f4; end: 103f29fa7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f299f4(double param_1,ulong param_2,ulong param_3,long param_4,long param_5,
                  ulong param_6,ulong param_7,uint param_8,ulong param_9)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  ulong uVar11;
  long unaff_x20;
  long lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  long lStack_c0;
  long lStack_b0;
  undefined1 auStack_90 [16];
  long lStack_80;
  
  lVar12 = *(long *)(unaff_x20 + _DAT_11302ee30);
  lVar2 = lVar12;
  uVar11 = param_3;
  func_0x000107c5c734();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    return;
  }
  lVar3 = lVar2;
  FUN_103f2964c();
  if (lVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
    return;
  }
  if ((param_9 & 1) != 0) {
    _swift_unknownObjectRelease(lVar2);
    lStack_b0 = lVar3;
    goto LAB_103f29e50;
  }
  if ((param_5 == 0) || (*(long *)(param_5 + 0x10) == 0)) {
    lStack_c0 = 0;
    lVar5 = 0;
    lVar4 = 0;
    lStack_b0 = 0;
  }
  else {
    _swift_bridgeObjectRetain(param_5);
    uVar11 = 0x800000010f1d0040;
    lVar4 = -0x2fffffffffffffeb;
    func_0x000100029284();
    if ((uVar11 & 1) == 0) {
      lStack_b0 = 0;
    }
    else {
      lStack_b0 = *(long *)(*(long *)(param_5 + 0x38) + lVar4 * 8);
      _objc_retain();
    }
    _swift_bridgeObjectRelease(param_5);
    if (*(long *)(param_5 + 0x10) == 0) {
      lVar5 = 0;
      lStack_c0 = 0;
      lVar4 = 0;
    }
    else {
      _swift_bridgeObjectRetain(param_5);
      lVar4 = 0x73666244736d72;
      uVar11 = 0xe700000000000000;
      func_0x000100029284();
      if ((uVar11 & 1) == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = *(long *)(*(long *)(param_5 + 0x38) + lVar4 * 8);
        _objc_retain();
      }
      _swift_bridgeObjectRelease(param_5);
      if (*(long *)(param_5 + 0x10) == 0) {
        lVar5 = 0;
        lStack_c0 = 0;
      }
      else {
        _swift_bridgeObjectRetain(param_5);
        lVar5 = 0x736662446b616570;
        uVar11 = 0xe800000000000000;
        func_0x000100029284();
        if ((uVar11 & 1) == 0) {
          lStack_c0 = 0;
        }
        else {
          lStack_c0 = *(long *)(*(long *)(param_5 + 0x38) + lVar5 * 8);
          _objc_retain();
        }
        _swift_bridgeObjectRelease(param_5);
        if (*(long *)(param_5 + 0x10) == 0) {
          lVar5 = 0;
        }
        else {
          _swift_bridgeObjectRetain(param_5);
          uVar11 = 0x800000010f1d0060;
          lVar5 = -0x2fffffffffffffeb;
          func_0x000100029284();
          if ((uVar11 & 1) == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = *(long *)(*(long *)(param_5 + 0x38) + lVar5 * 8);
            _objc_retain(lVar5);
          }
          _swift_bridgeObjectRelease(param_5);
        }
      }
    }
  }
  if ((((param_2 & 1) == 0) || ((param_3 & 1) == 0)) || (param_4 < 1)) {
LAB_103f29e24:
    _swift_unknownObjectRelease(lVar2);
    _objc_release(lVar3);
    _objc_release(lVar5);
    _objc_release(lStack_c0);
  }
  else {
    uVar6 = *(ulong *)PTR__AVAudioSessionPortBuiltInMic_11034cec8;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    if (param_7 == 0) {
      _swift_bridgeObjectRelease(uVar11);
      goto LAB_103f29e24;
    }
    if ((param_6 == uVar6) && (param_7 == uVar11)) {
      _swift_bridgeObjectRelease(uVar11);
    }
    else {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (param_6,param_7,uVar6,uVar11,0);
      _swift_bridgeObjectRelease(uVar11);
      if ((param_6 & 1) == 0) goto LAB_103f29e24;
    }
    if (lVar4 != 0) {
      _objc_retain(lVar4);
      func_0x000107c4223c();
      dVar15 = param_1;
      if (((lStack_b0 == 0) || (lStack_c0 == 0)) || (lVar5 == 0)) {
LAB_103f29d80:
        func_0x000107c4cea0(lVar2);
        _objc_release(lStack_b0);
        _objc_release(lVar4);
        _objc_release(lVar4);
        _objc_release(lVar5);
        _objc_release(lStack_c0);
        if (dVar15 < param_1) {
          pcVar10 = FUN_103f29fa8;
          puVar1 = PTR___sytN_11034f1b0;
LAB_103f29dec:
          lStack_80 = lVar3;
          func_0x000100087bd4(pcVar10,auStack_90,puVar1 + 8);
          _objc_release(lVar3);
          _swift_unknownObjectRelease(lVar2);
          return;
        }
      }
      else {
        lVar7 = lStack_b0;
        dVar13 = param_1;
        _objc_retain(lStack_b0);
        lVar8 = lStack_c0;
        _objc_retain(lStack_c0);
        lVar9 = lVar5;
        _objc_retain(lVar5);
        func_0x000107c4223c(lVar7);
        dVar14 = dVar13;
        func_0x000107c4cea4(lVar2);
        dVar15 = dVar14;
        if ((dVar13 < dVar14) || (func_0x000107c4ceac(lVar2), dVar15 = dVar14, dVar14 < param_1)) {
LAB_103f29d68:
          _objc_release(lVar7);
          _objc_release(lVar8);
          _objc_release(lVar9);
          goto LAB_103f29d80;
        }
        func_0x000107c4223c(lVar8);
        dVar13 = dVar14;
        func_0x000107c4cea8(lVar2);
        dVar15 = dVar13;
        if (dVar13 < dVar14) goto LAB_103f29d68;
        func_0x000107c4223c(lVar9);
        dVar14 = dVar13;
        func_0x000107c4ceb0(lVar2);
        dVar15 = dVar14;
        if (dVar13 < dVar14) goto LAB_103f29d68;
        func_0x000107c4ce98(lVar2);
        dVar15 = dVar14;
        _objc_release(lVar9);
        _objc_release(lVar8);
        _objc_release(lVar7);
        if (param_1 <= dVar14) goto LAB_103f29d80;
        _objc_release(lVar7);
        _objc_release(lVar4);
        _objc_release(lVar4);
        _objc_release(lVar8);
        _objc_release(lVar9);
        puVar1 = PTR___sytN_11034f1b0;
        if ((param_8 & 1) == 0) {
          lStack_80 = lVar3;
          func_0x000100087bd4(0x103f29fc0,auStack_90,PTR___sytN_11034f1b0 + 8);
          func_0x000107c5c734();
          _objc_retainAutoreleasedReturnValue();
          if (lVar12 == 0) {
LAB_103f29f74:
            _swift_unknownObjectRelease(lVar2);
            _objc_release(lVar3);
            return;
          }
          lVar4 = lVar12;
          FUN_103f297b0();
          lVar5 = lVar12;
          func_0x000107c4ce94();
          _swift_unknownObjectRelease(lVar12);
          if (lVar4 < lVar5) goto LAB_103f29f74;
          pcVar10 = (code *)0x103f29fd8;
          goto LAB_103f29dec;
        }
      }
      _swift_unknownObjectRelease(lVar2);
      lStack_b0 = lVar3;
      goto LAB_103f29e50;
    }
    _swift_unknownObjectRelease(lVar2);
    _objc_release(lVar3);
    _objc_release(lVar5);
    lVar4 = lStack_c0;
  }
  _objc_release(lVar4);
LAB_103f29e50:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lStack_b0);
  return;
}



/* Entry: 103f29fa8; end: 103f29fef;  */

void FUN_103f29fa8(void)

{
  long unaff_x20;
  
  FUN_103f28b50(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103f29ff0; end: 103f2a0d7; -[SCMicFallbackTracker recordCompletedRecordingWithAudioCaptureEnabled:audioQueueStarted:audioSamplesAppended:audioSignalMetrics:routeInputPortTypeAtEnd:voiceIsolationActive:recordedOnFallbackMic:] */

void FUN_103f29ff0(undefined8 param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7,undefined8 param_8,undefined1 param_9
                  )

{
  undefined8 uVar1;
  
  if (param_6 != 0) {
    uVar1 = 0;
    func_0x0001002ed07c(0);
    param_2 = PTR___sSSN_11034da80;
    __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
              (param_6,PTR___sSSN_11034da80,uVar1,PTR___sSSSHsWP_11034da90);
  }
  if (param_7 == 0) {
    param_7 = 0;
    param_2 = (undefined *)0x0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_7);
  }
  _objc_retain(param_1);
  FUN_103f299f4(param_3,param_4,param_5,param_6,param_7,param_2,param_8,param_9);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_6);
  return;
}



/* Entry: 103f2a0d8; end: 103f2a137; -[SCMicFallbackTracker init] */

void FUN_103f2a0d8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCCameraAudioUtilities.MicFallbackTracker",0x29,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f2a104);
  (*pcVar1)();
}



/* Entry: 103f2a138; end: 103f2a17f; -[SCMicFallbackTracker .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f2a138(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302ee28));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302ee30));
  if (*(long *)(param_1 + _DAT_11302ee20) == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 103f2a180; end: 103f2a18f;  */

void FUN_103f2a180(long param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 103f2a190; end: 103f2a1af;  */

void FUN_103f2a190(void)

{
  _objc_opt_self(&PTR_PTR_112967758);
  return;
}



/* Entry: 103f2a1b0; end: 103f2a1d3;  */

void FUN_103f2a1b0(long param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103f2a1d4; end: 103f2a27f;  */

void FUN_103f2a1d4(void)

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



/* Entry: 103f2a280; end: 103f2a2a7;  */

void FUN_103f2a280(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 103f2a2a8; end: 103f2a3b7; +[SCSilentRecordingCheck verdictWithAudioCaptureEnabled:audioQueueStarted:audioSamplesAppended:routeInputPortTypeAtEnd:voiceIsolationActive:analyzedPcmDurationMs:rmsDbfs:peakDbfs:nearSilentBufferRatio:configuration:] */

ulong FUN_103f2a2a8(undefined8 param_1,undefined8 param_2,uint param_3,undefined4 param_4,
                   undefined8 param_5,long param_6,undefined4 param_7,undefined8 param_8,
                   undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uStack_80;
  
  if (param_6 == 0) {
    uStack_80 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_80 = param_6;
  }
  uVar1 = param_8;
  _objc_retain(param_8);
  uVar2 = param_9;
  _objc_retain(param_9);
  uVar3 = param_10;
  _objc_retain(param_10);
  uVar4 = param_11;
  _objc_retain(param_11);
  _swift_unknownObjectRetain(param_12);
  uVar5 = (ulong)param_3;
  FUN_103f2a428(uVar5,param_4,param_5,uStack_80,param_2,param_7,param_8,param_9,param_10,param_11,
                param_12);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _swift_unknownObjectRelease(param_12);
  _swift_bridgeObjectRelease(param_2);
  return uVar5;
}



/* Entry: 103f2a3b8; end: 103f2a3f3; -[SCSilentRecordingCheck init] */

void FUN_103f2a3b8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f2a3f4; end: 103f2a427;  */

void FUN_103f2a3f4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103f2a428; end: 103f2a627;  */

uint FUN_103f2a428(double param_1,ulong param_2,ulong param_3,long param_4,ulong param_5,
                  ulong param_6,uint param_7,long param_8,long param_9,long param_10,long param_11,
                  undefined8 param_12)

{
  uint uVar1;
  ulong uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  if ((param_2 & 1) == 0) {
    return 0;
  }
  if ((param_3 & 1) == 0) {
    return 0;
  }
  if (param_4 < 1) {
    return 0;
  }
  uVar2 = *(ulong *)PTR__AVAudioSessionPortBuiltInMic_11034cec8;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  if (param_6 == 0) {
    _swift_bridgeObjectRelease(param_3);
    return 0;
  }
  if (param_5 == uVar2 && param_6 == param_3) {
    _swift_bridgeObjectRelease(param_3);
    if (param_9 == 0) {
      return 0;
    }
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (param_5,param_6,uVar2,param_3,0);
    _swift_bridgeObjectRelease(param_3);
    if ((param_5 & 1) == 0) {
      return 0;
    }
    if (param_9 == 0) {
      return 0;
    }
  }
  _objc_retain(param_9);
  func_0x000107c4223c();
  dVar5 = param_1;
  if (((param_8 != 0) && (param_10 != 0)) && (param_11 != 0)) {
    dVar3 = param_1;
    _objc_retain(param_8);
    _objc_retain(param_10);
    _objc_retain(param_11);
    func_0x000107c4223c(param_8);
    dVar4 = dVar3;
    func_0x000107c4cea4(param_12);
    dVar5 = dVar4;
    if ((dVar4 <= dVar3) && (func_0x000107c4ceac(param_12), dVar5 = dVar4, param_1 <= dVar4)) {
      func_0x000107c4223c(param_10);
      dVar3 = dVar4;
      func_0x000107c4cea8(param_12);
      dVar5 = dVar3;
      if (dVar4 <= dVar3) {
        func_0x000107c4223c(param_11);
        dVar4 = dVar3;
        func_0x000107c4ceb0(param_12);
        dVar5 = dVar4;
        if (dVar4 <= dVar3) {
          func_0x000107c4ce98(param_12);
          dVar5 = dVar4;
          _objc_release(param_11);
          _objc_release(param_10);
          _objc_release(param_8);
          if (dVar4 < param_1) {
            _objc_release(param_9);
            return ~param_7 & 1;
          }
          goto LAB_103f2a5a8;
        }
      }
    }
    _objc_release(param_8);
    _objc_release(param_10);
    _objc_release(param_11);
  }
LAB_103f2a5a8:
  func_0x000107c4cea0(param_12);
  _objc_release(param_9);
  uVar1 = 2;
  if (param_1 <= dVar5) {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 103f2a628; end: 103f2a62b;  */

void FUN_103f2a628(void)

{
  undefined *puVar1;
  
  if (puRam000000011302ee60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcac060;
  _swift_getWitnessTable(&UNK_10dcac060,&UNK_110723328);
  puRam000000011302ee60 = puVar1;
  return;
}



/* Entry: 103f2a62c; end: 103f2a66b;  */

void FUN_103f2a62c(void)

{
  undefined *puVar1;
  
  if (puRam000000011302ee60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcac060;
  _swift_getWitnessTable(&UNK_10dcac060,&UNK_110723328);
  puRam000000011302ee60 = puVar1;
  return;
}



/* Entry: 103f2a66c; end: 103f2a67b;  */

undefined1  [16] FUN_103f2a66c(void)

{
  return ZEXT816(0x110723328);
}



/* Entry: 103f2a67c; end: 103f2a69b;  */

void FUN_103f2a67c(void)

{
  _objc_opt_self(&PTR_PTR_112967828);
  return;
}



/* Entry: 103f2a69c; end: 103f2a6af;  */

bool FUN_103f2a69c(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103f2a6b0; end: 103f2a787;  */

void FUN_103f2a6b0(void)

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



/* Entry: 103f2a788; end: 103f2a793;  */

void FUN_103f2a788(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 103f2a794; end: 103f2a903;  */

undefined1  [16] FUN_103f2a794(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 uStack_18;
  
  uVar3 = 0xe700000000000000;
  uVar2 = 0x6e776f6e6b6e55;
  switch(param_1) {
  case 0:
    goto code_r0x000103f2a7e8;
  case 1:
    uVar3 = 0xeb00000000746867;
    uVar2 = 0x694e207261656c43;
code_r0x000103f2a7e8:
    auVar4._8_8_ = uVar3;
    auVar4._0_8_ = uVar2;
    return auVar4;
  case 2:
    auVar8._8_8_ = 0xe600000000000000;
    auVar8._0_8_ = 0x7964756f6c43;
    return auVar8;
  case 3:
    auVar9._8_8_ = 0xe400000000000000;
    auVar9._0_8_ = 0x6c696148;
    return auVar9;
  case 4:
    auVar6._8_8_ = 0xe900000000000067;
    auVar6._0_8_ = 0x6e696e746867694c;
    return auVar6;
  case 5:
    auVar11._8_8_ = 0xee007974696c6962;
    auVar11._0_8_ = 0x6973695620776f4c;
    return auVar11;
  case 6:
    auVar12._8_8_ = 0x800000010f1d00d0;
    auVar12._0_8_ = 0xd000000000000010;
    return auVar12;
  case 7:
    auVar10._8_8_ = 0x800000010f1d00b0;
    auVar10._0_8_ = 0xd000000000000016;
    return auVar10;
  case 8:
    auVar14._8_8_ = 0xe400000000000000;
    auVar14._0_8_ = 0x6e696152;
    return auVar14;
  case 9:
    auVar7._8_8_ = 0xe400000000000000;
    auVar7._0_8_ = 0x776f6e53;
    return auVar7;
  case 10:
    auVar13._8_8_ = 0xe500000000000000;
    auVar13._0_8_ = 0x796e6e7553;
    return auVar13;
  case 0xb:
    auVar5._8_8_ = 0xe500000000000000;
    auVar5._0_8_ = 0x79646e6957;
    return auVar5;
  default:
    uStack_18 = param_1;
    __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
              (&UNK_110723428,&uStack_18,&UNK_110723428,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103f2a904);
    (*pcVar1)();
  }
}



/* Entry: 103f2a904; end: 103f2a91f;  */

undefined1  [16] FUN_103f2a904(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 uStack_18;
  
  uStack_18 = *unaff_x20;
  uVar3 = 0xe700000000000000;
  uVar2 = 0x6e776f6e6b6e55;
  switch(uStack_18) {
  case 0:
    goto code_r0x000103f2a7e8;
  case 1:
    uVar3 = 0xeb00000000746867;
    uVar2 = 0x694e207261656c43;
code_r0x000103f2a7e8:
    auVar4._8_8_ = uVar3;
    auVar4._0_8_ = uVar2;
    return auVar4;
  case 2:
    auVar8._8_8_ = 0xe600000000000000;
    auVar8._0_8_ = 0x7964756f6c43;
    return auVar8;
  case 3:
    auVar9._8_8_ = 0xe400000000000000;
    auVar9._0_8_ = 0x6c696148;
    return auVar9;
  case 4:
    auVar6._8_8_ = 0xe900000000000067;
    auVar6._0_8_ = 0x6e696e746867694c;
    return auVar6;
  case 5:
    auVar11._8_8_ = 0xee007974696c6962;
    auVar11._0_8_ = 0x6973695620776f4c;
    return auVar11;
  case 6:
    auVar12._8_8_ = 0x800000010f1d00d0;
    auVar12._0_8_ = 0xd000000000000010;
    return auVar12;
  case 7:
    auVar10._8_8_ = 0x800000010f1d00b0;
    auVar10._0_8_ = 0xd000000000000016;
    return auVar10;
  case 8:
    auVar14._8_8_ = 0xe400000000000000;
    auVar14._0_8_ = 0x6e696152;
    return auVar14;
  case 9:
    auVar7._8_8_ = 0xe400000000000000;
    auVar7._0_8_ = 0x776f6e53;
    return auVar7;
  case 10:
    auVar13._8_8_ = 0xe500000000000000;
    auVar13._0_8_ = 0x796e6e7553;
    return auVar13;
  case 0xb:
    auVar5._8_8_ = 0xe500000000000000;
    auVar5._0_8_ = 0x79646e6957;
    return auVar5;
  default:
    __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
              (&UNK_110723428,&uStack_18,&UNK_110723428,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103f2a904);
    (*pcVar1)();
  }
}



/* Entry: 103f2a920; end: 103f2a95f;  */

void FUN_103f2a920(void)

{
  undefined *puVar1;
  
  if (puRam000000011302ee90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcac14c;
  _swift_getWitnessTable(&UNK_10dcac14c,&UNK_110723428);
  puRam000000011302ee90 = puVar1;
  return;
}



/* Entry: 103f2a960; end: 103f2a96f;  */

undefined1  [16] FUN_103f2a960(void)

{
  return ZEXT816(0x110723428);
}



/* Entry: 103f2a970; end: 103f2a9a7;  */

void FUN_103f2a970(undefined8 param_1)

{
  if (lRam000000011302eef0 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e7d5aa8);
  return;
}



/* Entry: 103f2a9a8; end: 103f2aa9b;  */

long * FUN_103f2a9a8(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    lVar5 = (long)*(int *)(param_3 + 0x1c);
    lVar2 = 0;
    __s10Foundation4DateVMa();
    lVar6 = *(long *)(lVar2 + -8);
    lVar3 = (long)param_2 + lVar5;
    (**(code **)(lVar6 + 0x30))(lVar3,1,lVar2);
    if ((int)lVar3 == 0) {
      (**(code **)(lVar6 + 0x10))((long)param_1 + lVar5,(long)param_2 + lVar5,lVar2);
      (**(code **)(lVar6 + 0x38))((long)param_1 + lVar5,0,1,lVar2);
    }
    else {
      lVar3 = 0x112d373d8;
      func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
      _memcpy((long)param_1 + lVar5,(long)param_2 + lVar5,
              *(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
    }
  }
  else {
    lVar3 = *param_2;
    *param_1 = lVar3;
    uVar4 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar3 + (uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 103f2aa9c; end: 103f2ab07;  */

void FUN_103f2aa9c(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  iVar1 = *(int *)(param_2 + 0x1c);
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar4 = *(long *)(lVar2 + -8);
  lVar3 = param_1 + iVar1;
  (**(code **)(lVar4 + 0x30))(lVar3,1,lVar2);
  if ((int)lVar3 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000103f2ab04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))(param_1 + iVar1,lVar2);
  return;
}



/* Entry: 103f2ab08; end: 103f2abcf;  */

undefined8 * FUN_103f2ab08(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  lVar3 = (long)*(int *)(param_3 + 0x1c);
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar4 = *(long *)(lVar1 + -8);
  lVar2 = (long)param_2 + lVar3;
  (**(code **)(lVar4 + 0x30))(lVar2,1,lVar1);
  if ((int)lVar2 == 0) {
    (**(code **)(lVar4 + 0x10))((long)param_1 + lVar3,(long)param_2 + lVar3,lVar1);
    (**(code **)(lVar4 + 0x38))((long)param_1 + lVar3,0,1,lVar1);
  }
  else {
    lVar2 = 0x112d373d8;
    func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
    _memcpy((long)param_1 + lVar3,(long)param_2 + lVar3,
            *(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  }
  return param_1;
}



/* Entry: 103f2abd0; end: 103f2aceb;  */

undefined4 * FUN_103f2abd0(undefined4 *param_1,undefined4 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  lVar4 = (long)*(int *)(param_3 + 0x1c);
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar5 = *(long *)(lVar1 + -8);
  pcVar6 = *(code **)(lVar5 + 0x30);
  lVar2 = (long)param_1 + lVar4;
  (*pcVar6)(lVar2,1,lVar1);
  lVar3 = (long)param_2 + lVar4;
  (*pcVar6)(lVar3,1,lVar1);
  if ((int)lVar2 == 0) {
    if ((int)lVar3 == 0) {
      (**(code **)(lVar5 + 0x18))((long)param_1 + lVar4,(long)param_2 + lVar4,lVar1);
      return param_1;
    }
    (**(code **)(lVar5 + 8))((long)param_1 + lVar4,lVar1);
  }
  else if ((int)lVar3 == 0) {
    (**(code **)(lVar5 + 0x10))((long)param_1 + lVar4,(long)param_2 + lVar4,lVar1);
    (**(code **)(lVar5 + 0x38))((long)param_1 + lVar4,0,1,lVar1);
    return param_1;
  }
  lVar2 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  _memcpy((long)param_1 + lVar4,(long)param_2 + lVar4,*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40))
  ;
  return param_1;
}



/* Entry: 103f2acec; end: 103f2adb3;  */

undefined8 * FUN_103f2acec(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  lVar3 = (long)*(int *)(param_3 + 0x1c);
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar4 = *(long *)(lVar1 + -8);
  lVar2 = (long)param_2 + lVar3;
  (**(code **)(lVar4 + 0x30))(lVar2,1,lVar1);
  if ((int)lVar2 == 0) {
    (**(code **)(lVar4 + 0x20))((long)param_1 + lVar3,(long)param_2 + lVar3,lVar1);
    (**(code **)(lVar4 + 0x38))((long)param_1 + lVar3,0,1,lVar1);
  }
  else {
    lVar2 = 0x112d373d8;
    func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
    _memcpy((long)param_1 + lVar3,(long)param_2 + lVar3,
            *(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  }
  return param_1;
}



/* Entry: 103f2adb4; end: 103f2aec7;  */

undefined8 * FUN_103f2adb4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  lVar4 = (long)*(int *)(param_3 + 0x1c);
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar5 = *(long *)(lVar1 + -8);
  pcVar6 = *(code **)(lVar5 + 0x30);
  lVar2 = (long)param_1 + lVar4;
  (*pcVar6)(lVar2,1,lVar1);
  lVar3 = (long)param_2 + lVar4;
  (*pcVar6)(lVar3,1,lVar1);
  if ((int)lVar2 == 0) {
    if ((int)lVar3 == 0) {
      (**(code **)(lVar5 + 0x28))((long)param_1 + lVar4,(long)param_2 + lVar4,lVar1);
      return param_1;
    }
    (**(code **)(lVar5 + 8))((long)param_1 + lVar4,lVar1);
  }
  else if ((int)lVar3 == 0) {
    (**(code **)(lVar5 + 0x20))((long)param_1 + lVar4,(long)param_2 + lVar4,lVar1);
    (**(code **)(lVar5 + 0x38))((long)param_1 + lVar4,0,1,lVar1);
    return param_1;
  }
  lVar2 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  _memcpy((long)param_1 + lVar4,(long)param_2 + lVar4,*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40))
  ;
  return param_1;
}



/* Entry: 103f2aec8; end: 103f2aedf;  */

void FUN_103f2aec8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 103f2aee0; end: 103f2af67;  */

void FUN_103f2aee0(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_40 = PTR___sBi32_WV_11034d668 + 0x40;
  puStack_30 = PTR___sBi64_WV_11034d670 + 0x40;
  lVar1 = 0x13f;
  puStack_38 = puStack_40;
  func_0x0001000776dc();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0x100,4,&puStack_40,param_1 + 0x10);
  }
  return;
}



/* Entry: 103f2af68; end: 103f2af9f;  */

void FUN_103f2af68(undefined8 param_1)

{
  if (lRam000000011302ef88 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e7d5ad0);
  return;
}



/* Entry: 103f2afa0; end: 103f2b0cf;  */

long * FUN_103f2afa0(long *param_1,long *param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  
  uVar2 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar2 >> 0x11 & 1) == 0) {
    *(int *)param_1 = (int)*param_2;
    lVar4 = param_2[1];
    param_1[2] = param_2[2];
    param_1[1] = lVar4;
    lVar4 = param_2[4];
    param_1[3] = param_2[3];
    param_1[4] = lVar4;
    lVar7 = (long)*(int *)(param_3 + 0x20);
    lVar3 = 0;
    __s10Foundation4DateVMa();
    lVar8 = *(long *)(lVar3 + -8);
    pcVar9 = *(code **)(lVar8 + 0x30);
    _swift_bridgeObjectRetain(lVar4);
    lVar4 = (long)param_2 + lVar7;
    (*pcVar9)(lVar4,1,lVar3);
    if ((int)lVar4 == 0) {
      (**(code **)(lVar8 + 0x10))((long)param_1 + lVar7,(long)param_2 + lVar7,lVar3);
      (**(code **)(lVar8 + 0x38))((long)param_1 + lVar7,0,1,lVar3);
    }
    else {
      lVar4 = 0x112d373d8;
      func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
      _memcpy((long)param_1 + lVar7,(long)param_2 + lVar7,
              *(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
    }
    iVar1 = *(int *)(param_3 + 0x28);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
    uVar6 = *(undefined8 *)((long)param_2 + (long)iVar1);
    *(undefined8 *)((long)param_1 + (long)iVar1) = uVar6;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar6);
  }
  else {
    lVar4 = *param_2;
    *param_1 = lVar4;
    uVar5 = (ulong)uVar2 & 0xff;
    param_1 = (long *)(lVar4 + (uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 103f2b0d0; end: 103f2b157;  */

void FUN_103f2b0d0(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x20));
  iVar1 = *(int *)(param_2 + 0x20);
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar4 = *(long *)(lVar2 + -8);
  lVar3 = param_1 + iVar1;
  (**(code **)(lVar4 + 0x30))(lVar3,1,lVar2);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar4 + 8))(param_1 + iVar1,lVar2);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x24)));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)
            (*(undefined8 *)(param_1 + *(int *)(param_2 + 0x28)));
  return;
}



/* Entry: 103f2b158; end: 103f2b3d3;  */

undefined4 * FUN_103f2b158(undefined4 *param_1,undefined4 *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  
  *param_1 = *param_2;
  uVar4 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 2) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 8) = uVar4;
  lVar5 = (long)*(int *)(param_3 + 0x20);
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar6 = *(long *)(lVar2 + -8);
  pcVar7 = *(code **)(lVar6 + 0x30);
  _swift_bridgeObjectRetain(uVar4);
  lVar3 = (long)param_2 + lVar5;
  (*pcVar7)(lVar3,1,lVar2);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar6 + 0x10))((long)param_1 + lVar5,(long)param_2 + lVar5,lVar2);
    (**(code **)(lVar6 + 0x38))((long)param_1 + lVar5,0,1,lVar2);
  }
  else {
    lVar3 = 0x112d373d8;
    func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
    _memcpy((long)param_1 + lVar5,(long)param_2 + lVar5,
            *(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  }
  iVar1 = *(int *)(param_3 + 0x28);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  uVar4 = *(undefined8 *)((long)param_2 + (long)iVar1);
  *(undefined8 *)((long)param_1 + (long)iVar1) = uVar4;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar4);
  return param_1;
}



/* Entry: 103f2b3d4; end: 103f2b4bb;  */

undefined4 * FUN_103f2b3d4(undefined4 *param_1,undefined4 *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  *param_1 = *param_2;
  uVar6 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 2) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 6) = uVar6;
  lVar4 = (long)*(int *)(param_3 + 0x20);
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar5 = *(long *)(lVar2 + -8);
  lVar3 = (long)param_2 + lVar4;
  (**(code **)(lVar5 + 0x30))(lVar3,1,lVar2);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar5 + 0x20))((long)param_1 + lVar4,(long)param_2 + lVar4,lVar2);
    (**(code **)(lVar5 + 0x38))((long)param_1 + lVar4,0,1,lVar2);
  }
  else {
    lVar3 = 0x112d373d8;
    func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
    _memcpy((long)param_1 + lVar4,(long)param_2 + lVar4,
            *(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  }
  iVar1 = *(int *)(param_3 + 0x28);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  *(undefined8 *)((long)param_1 + (long)iVar1) = *(undefined8 *)((long)param_2 + (long)iVar1);
  return param_1;
}



/* Entry: 103f2b4bc; end: 103f2b60b;  */

undefined4 * FUN_103f2b4bc(undefined4 *param_1,undefined4 *param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  
  *param_1 = *param_2;
  uVar4 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 2) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 8) = uVar4;
  _swift_bridgeObjectRelease(uVar1);
  lVar6 = (long)*(int *)(param_3 + 0x20);
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar7 = *(long *)(lVar2 + -8);
  pcVar8 = *(code **)(lVar7 + 0x30);
  lVar5 = (long)param_1 + lVar6;
  (*pcVar8)(lVar5,1,lVar2);
  lVar3 = (long)param_2 + lVar6;
  (*pcVar8)(lVar3,1,lVar2);
  if ((int)lVar5 == 0) {
    if ((int)lVar3 == 0) {
      (**(code **)(lVar7 + 0x28))((long)param_1 + lVar6,(long)param_2 + lVar6,lVar2);
      goto LAB_103f2b5b0;
    }
    (**(code **)(lVar7 + 8))((long)param_1 + lVar6,lVar2);
  }
  else if ((int)lVar3 == 0) {
    (**(code **)(lVar7 + 0x20))((long)param_1 + lVar6,(long)param_2 + lVar6,lVar2);
    (**(code **)(lVar7 + 0x38))((long)param_1 + lVar6,0,1,lVar2);
    goto LAB_103f2b5b0;
  }
  lVar5 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  _memcpy((long)param_1 + lVar6,(long)param_2 + lVar6,*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40))
  ;
LAB_103f2b5b0:
  lVar5 = (long)*(int *)(param_3 + 0x24);
  uVar4 = *(undefined8 *)((long)param_1 + lVar5);
  *(undefined8 *)((long)param_1 + lVar5) = *(undefined8 *)((long)param_2 + lVar5);
  _swift_bridgeObjectRelease(uVar4);
  lVar5 = (long)*(int *)(param_3 + 0x28);
  uVar4 = *(undefined8 *)((long)param_1 + lVar5);
  *(undefined8 *)((long)param_1 + lVar5) = *(undefined8 *)((long)param_2 + lVar5);
  _swift_bridgeObjectRelease(uVar4);
  return param_1;
}


