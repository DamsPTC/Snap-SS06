/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 000869c4; end: 00086a73;  */

void FUN_000869c4(void)

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



/* Entry: 00086a74; end: 00086a9b;  */

undefined1  [16] FUN_00086a74(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 4) {
    uVar1 = param_1;
  }
  auVar2[8] = 3 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 00086a9c; end: 00086adb;  */

void FUN_00086a9c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae9688 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d3890;
  _swift_getWitnessTable(&UNK_007d3890,&UNK_009a3e80);
  puRam0000000000ae9688 = puVar1;
  return;
}



/* Entry: 00086adc; end: 00086adf;  */

void FUN_00086adc(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae9690 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d3930;
  _swift_getWitnessTable(&UNK_007d3930,&UNK_009a3ea0);
  puRam0000000000ae9690 = puVar1;
  return;
}



/* Entry: 00086ae0; end: 00086b1f;  */

void FUN_00086ae0(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae9690 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d3930;
  _swift_getWitnessTable(&UNK_007d3930,&UNK_009a3ea0);
  puRam0000000000ae9690 = puVar1;
  return;
}



/* Entry: 00086b20; end: 00086b67;  */

undefined1  [16] FUN_00086b20(void)

{
  return ZEXT816(0x9a3e80);
}



/* Entry: 00086b68; end: 00086b77; -[_TtC24SCTaskManagementServices24SCTaskManagementServices appLifecycleManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00086b68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_0099adb8)
            (*(undefined8 *)(param_1 + _DAT_00ae9698));
  return;
}



/* Entry: 00086b78; end: 00086b87; -[_TtC24SCTaskManagementServices24SCTaskManagementServices performerProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00086b78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_0099adb8)
            (*(undefined8 *)(param_1 + _DAT_00ae96a0));
  return;
}



/* Entry: 00086b88; end: 00086b97; -[_TtC24SCTaskManagementServices24SCTaskManagementServices performerThrottler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00086b88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_0099adb8)
            (*(undefined8 *)(param_1 + _DAT_00ae96a8));
  return;
}



/* Entry: 00086b98; end: 00086c0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00086b98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_00ae9698) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_00ae96a0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_00ae96a8) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_00abbf70);
  return;
}



/* Entry: 00086c0c; end: 00086c9b; -[_TtC24SCTaskManagementServices24SCTaskManagementServices initWithPerformerProvider:performerThrottler:appLifecycleManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00086c0c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_00ae9698) = param_5;
  *(undefined8 *)(param_1 + _DAT_00ae96a0) = param_3;
  *(undefined8 *)(param_1 + _DAT_00ae96a8) = param_4;
  puVar1 = PTR_s_init_00abbf70;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 00086c9c; end: 00086cfb; -[_TtC24SCTaskManagementServices24SCTaskManagementServices init] */

void FUN_00086c9c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCTaskManagementServices.SCTaskManagementServices",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x86cc8);
  (*pcVar1)();
}



/* Entry: 00086cfc; end: 00086d43; -[_TtC24SCTaskManagementServices24SCTaskManagementServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00086cfc(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_00ae9698));
  _objc_release(*(undefined8 *)(param_1 + _DAT_00ae96a0));
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(*(undefined8 *)(param_1 + _DAT_00ae96a8));
  return;
}



/* Entry: 00086d44; end: 00086d63;  */

void FUN_00086d44(void)

{
  _objc_opt_self(&PTR_PTR_00aca118);
  return;
}



/* Entry: 00086d64; end: 00086d83; -[SCMainActorThrottlerServices mainActorThrottler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00086d64(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_00ae96d8));
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00086d84; end: 00086dcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00086d84(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_00ae96d8) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_00abbf70);
  return;
}



/* Entry: 00086dd0; end: 00086e2f; -[SCMainActorThrottlerServices init] */

void FUN_00086dd0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("MainActorThrottlerServices.MainActorThrottlerServices",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x86dfc);
  (*pcVar1)();
}



/* Entry: 00086e30; end: 00086e3f; -[SCMainActorThrottlerServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00086e30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077b62c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_0099bb78)(*(undefined8 *)(param_1 + _DAT_00ae96d8));
  return;
}



/* Entry: 00086e40; end: 00086e5f;  */

void FUN_00086e40(void)

{
  _objc_opt_self(&PTR_PTR_00aca1e8);
  return;
}



/* Entry: 00086e60; end: 00086f07;  */

int FUN_00086e60(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && ((char)param_1[6] != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = 0xffffffff;
  if (1 < *(byte *)(param_1 + 2)) {
    uVar1 = *(byte *)(param_1 + 2) + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Entry: 00086f08; end: 00086f17; -[_TtC34SCCriticalSectionObservableService34SCCriticalSectionObservableService criticalSectionObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00086f08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_0099adb8)
            (*(undefined8 *)(param_1 + _DAT_00ae9710));
  return;
}



/* Entry: 00086f18; end: 00086fdf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00086f18(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  func_0x000115a8(0xae9718,&UNK_007d3a90);
  uVar1 = param_1;
  FUN_000876b8(param_1);
  uVar2 = 0xae9720;
  func_0x000115a8(0xae9720,&UNK_007d3a98);
  pcVar3 = FUN_00086fe0;
  FUN_000877a8(FUN_00086fe0,0,uVar2);
  _swift_release(uVar1);
  *(code **)(unaff_x20 + _DAT_00ae9708) = pcVar3;
  *(undefined8 *)(unaff_x20 + _DAT_00ae9710) = param_1;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_00abbf70);
  return;
}



/* Entry: 00086fe0; end: 0008705f;  */

void FUN_00086fe0(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  
  lVar3 = *param_2;
  pcVar2 = (code *)0x0;
  if (lVar3 != 0) {
    uVar1 = 0xae9750;
    func_0x000115a8(0xae9750,&UNK_007d3ac8);
    FUN_00088ed4(lVar3,uVar1);
    pcVar2 = FUN_00087080;
    FUN_000950e0(FUN_00087080,0,&UNK_009a4070);
    _swift_release(lVar3);
  }
  *param_1 = pcVar2;
  return;
}



/* Entry: 00087060; end: 0008707f;  */

void FUN_00087060(void)

{
  _objc_opt_self(&PTR_PTR_00aca2a8);
  return;
}



/* Entry: 00087080; end: 000870c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00087080(undefined8 *param_1,long *param_2)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *param_2;
  uVar1 = *(undefined1 *)(lVar2 + _DAT_00ae9760);
  uVar3 = *(undefined8 *)(lVar2 + _DAT_00ae9768);
  *param_1 = *(undefined8 *)(lVar2 + _DAT_00ae9758);
  *(undefined1 *)(param_1 + 1) = uVar1;
  param_1[2] = uVar3;
  return;
}



/* Entry: 000870c4; end: 00087183; -[_TtC34SCCriticalSectionObservableService34SCCriticalSectionObservableService initWithObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000870c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000115a8(0xae9718,&UNK_007d3a90);
  _objc_retain();
  uVar1 = param_3;
  FUN_000876b8();
  uVar2 = 0xae9720;
  func_0x000115a8(0xae9720,&UNK_007d3a98);
  pcVar3 = FUN_00086fe0;
  FUN_000877a8(FUN_00086fe0,0,uVar2);
  _swift_release();
  *(code **)(param_1 + _DAT_00ae9708) = pcVar3;
  *(undefined8 *)(param_1 + _DAT_00ae9710) = param_3;
  FUN_00087060();
  lStack_40 = param_1;
  uStack_38 = uVar1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_00abbf70);
  return;
}



/* Entry: 00087184; end: 000871df; -[_TtC34SCCriticalSectionObservableService34SCCriticalSectionObservableService init] */

void FUN_00087184(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCCriticalSectionObservableService.SCCriticalSectionObservableService",0x45,"init()",6
             ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x871b0);
  (*pcVar1)();
}



/* Entry: 000871e0; end: 00087217; -[_TtC34SCCriticalSectionObservableService34SCCriticalSectionObservableService .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000871e0(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_00ae9708));
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(*(undefined8 *)(param_1 + _DAT_00ae9710));
  return;
}



/* Entry: 00087218; end: 00087227; -[SCCriticalSection reason] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00087218(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_00ae9758);
}



/* Entry: 00087228; end: 00087237; -[SCCriticalSection enabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_00087228(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_00ae9760);
}



/* Entry: 00087238; end: 0008724b; -[SCCriticalSection ongoingCriticalSectionCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00087238(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_00ae9768);
}



/* Entry: 0008724c; end: 00087333; -[SCCriticalSection initWithReason:enabled:ongoingCriticalSectionCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0008724c(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                 undefined8 param_5)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_00ae9758) = param_3;
  *(undefined1 *)(param_1 + _DAT_00ae9760) = param_4;
  *(undefined8 *)(param_1 + _DAT_00ae9768) = param_5;
  lStack_40 = param_1;
  lStack_38 = lVar1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_00abbf70);
  return;
}



/* Entry: 00087334; end: 00087337; -[SCCriticalSection copyWithZone:] */

void FUN_00087334(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)();
  return;
}



/* Entry: 00087338; end: 00087353; -[SCCriticalSection description] */

void FUN_00087338(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00087354; end: 000873ef; -[SCCriticalSection init] */

void FUN_00087354(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCCriticalSectionObservableService/SCCriticalSectionWrapper.swift",0x41,2,0x2c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x8739c);
  (*pcVar1)();
}



/* Entry: 000873f0; end: 00087407;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000873f0(undefined8 param_1,undefined1 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_00ae9758) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_00ae9760) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_00ae9768) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_00abbf70);
  return;
}



/* Entry: 00087408; end: 00087503;  */

void FUN_00087408(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  long extraout_x8;
  undefined8 *puVar4;
  long lVar5;
  
  lVar2 = 0;
  FUN_00087574();
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = (undefined8 *)(&stack0xffffffffffffffc0 + -extraout_x8);
  (**(code **)(lVar5 + 0x10))(puVar4,param_2,lVar2);
  puVar3 = puVar4;
  _swift_getEnumCaseMultiPayload(puVar4,lVar2);
  if ((int)puVar3 == 1) {
    (**(code **)(*(long *)(param_3 + -8) + 0x20))(param_1,puVar4,param_3);
  }
  else {
    (**(code **)(lVar5 + 8))(param_2,lVar2);
    uVar1 = *(undefined8 *)(&stack0xffffffffffffffc8 + -extraout_x8);
    (*(code *)*puVar4)(param_1);
    _swift_release(uVar1);
    (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
    _swift_storeEnumTagMultiPayload(param_2,lVar2,1);
  }
  return;
}



/* Entry: 00087504; end: 0008752b;  */

void FUN_00087504(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_00087408(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 0008752c; end: 00087573;  */

void FUN_0008752c(undefined8 param_1,code *param_2)

{
  long *unaff_x20;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  
  uStack_40 = *(undefined8 *)(*unaff_x20 + 0x50);
  (*param_2)(param_1,auStack_50);
  return;
}



/* Entry: 00087574; end: 0008757f;  */

void FUN_00087574(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&UNK_00840e30);
  return;
}



/* Entry: 00087580; end: 000875cb;  */

undefined8 FUN_00087580(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  
  _swift_allocObject();
  FUN_000875cc(param_1,param_2);
  return unaff_x20;
}



/* Entry: 000875cc; end: 00087677;  */

void FUN_000875cc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long extraout_x8;
  long *unaff_x20;
  
  lVar1 = 0;
  FUN_00087574(0,*(undefined8 *)(*unaff_x20 + 0x50));
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = (undefined8 *)(&stack0xffffffffffffffc0 + -extraout_x8);
  FUN_001d4b9c(0,lVar1);
  *puVar2 = param_1;
  *(undefined8 *)(&stack0xffffffffffffffc8 + -extraout_x8) = param_2;
  _swift_storeEnumTagMultiPayload(puVar2,lVar1,0);
  FUN_001d4828();
  unaff_x20[2] = (long)puVar2;
  return;
}



/* Entry: 00087678; end: 0008769b;  */

void FUN_00087678(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)();
  return;
}



/* Entry: 0008769c; end: 000876b7;  */

void FUN_0008769c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x0077b53c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_0099bb30)(uVar1);
  return;
}



/* Entry: 000876b8; end: 00087747;  */

undefined8 FUN_000876b8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar1 = 0xff;
  __sSqMa(0xff,uVar4);
  uVar2 = 0;
  FUN_00087748(0,uVar1);
  puVar3 = &UNK_009a4120;
  _swift_allocObject(&UNK_009a4120,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar4;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  _swift_allocObject(uVar2,0x18,7);
  _objc_retain(param_1);
  FUN_000875cc(FUN_00087778,puVar3);
  return uVar2;
}



/* Entry: 00087748; end: 00087753;  */

void FUN_00087748(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&DAT_00840dc4);
  return;
}



/* Entry: 00087754; end: 00087777;  */

void FUN_00087754(void)

{
  long unaff_x20;
  
  _objc_release(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 00087778; end: 000877a7;  */

void FUN_00087778(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x00792720();
  _objc_retainAutoreleasedReturnValue();
  *param_1 = uVar1;
  return;
}



/* Entry: 000877a8; end: 00087847;  */

undefined8 FUN_000877a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 unaff_x20;
  
  uVar1 = 0;
  FUN_00087748(0,param_3);
  puVar2 = &UNK_009a4148;
  _swift_allocObject(&UNK_009a4148,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  *(undefined8 *)(puVar2 + 0x28) = unaff_x20;
  _swift_allocObject(uVar1,0x18,7);
  _swift_retain(param_2);
  _swift_retain();
  FUN_000875cc(FUN_00087930,puVar2);
  return uVar1;
}



/* Entry: 00087848; end: 00087903;  */

void FUN_00087848(undefined8 param_1,code *param_2,undefined8 param_3,long *param_4)

{
  long extraout_x8;
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  long lStack_60;
  
  lVar1 = *(long *)(*param_4 + 0x50);
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar3 + 0x40));
  puVar2 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_60 = lVar1;
  FUN_001d496c(puVar2,FUN_00087504,auStack_70,lVar1);
  (*param_2)(param_1,puVar2);
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
  return;
}



/* Entry: 00087904; end: 0008792f;  */

void FUN_00087904(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 00087930; end: 0008793b;  */

void FUN_00087930(undefined8 param_1)

{
  code *pcVar1;
  long extraout_x8;
  long unaff_x20;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  long lStack_60;
  
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  lVar2 = *(long *)(**(long **)(unaff_x20 + 0x28) + 0x50);
  lVar4 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(undefined8 *)(lVar4 + 0x40),pcVar1,*(undefined8 *)(unaff_x20 + 0x20));
  puVar3 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_60 = lVar2;
  FUN_001d496c(puVar3,FUN_00087504,auStack_70,lVar2);
  (*pcVar1)(param_1,puVar3);
  (**(code **)(lVar4 + 8))(puVar3,lVar2);
  return;
}



/* Entry: 0008793c; end: 000879c7;  */

void FUN_0008793c(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long *unaff_x20;
  long lVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(long **)(unaff_x22 + 0x30) = unaff_x20;
  lVar3 = *(long *)(*unaff_x20 + 0x50);
  *(long *)(unaff_x22 + 0x38) = lVar3;
  lVar1 = 0;
  __sSqMa(0,lVar3);
  *(long *)(unaff_x22 + 0x40) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x48) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x50) = uVar2;
  lVar1 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x58) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x60) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_000879c8,0,0);
  return;
}



/* Entry: 000879c8; end: 00087b0f;  */

void FUN_000879c8(void)

{
  long lVar1;
  segment_command *psVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  code *pcVar7;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar1 = *(long *)(unaff_x22 + 0x58);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x38);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar5;
  FUN_001d4a04(uVar6,FUN_00087c40,unaff_x22 + 0x10,uVar5);
  (**(code **)(lVar1 + 0x30))(uVar6,1,uVar5);
  if ((int)uVar6 == 1) {
    (**(code **)(*(long *)(unaff_x22 + 0x48) + 8))
              (*(undefined8 *)(unaff_x22 + 0x50),*(undefined8 *)(unaff_x22 + 0x40));
    psVar2 = &segment_command_00000020;
    _swift_task_alloc();
    *(segment_command **)(unaff_x22 + 0x68) = psVar2;
    psVar2->cmd = (int)unaff_x22;
    psVar2->cmdsize = (int)((ulong)unaff_x22 >> 0x20);
    *(code **)psVar2->segname = FUN_00087b10;
    uVar6 = *(undefined8 *)(unaff_x22 + 0x30);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x38);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
    pcVar4 = section_00000068.sectname + 8;
    _swift_task_alloc();
    *(char **)(psVar2->segname + 8) = pcVar4;
    *(segment_command **)pcVar4 = psVar2;
    *(code **)(pcVar4 + 8) = FUN_001d4208;
                    /* WARNING: Could not recover jumptable at 0x001d4204. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    FUN_001d4244(pcVar4,uVar3,0,0,FUN_00087ec0,uVar6,uVar5);
    return;
  }
  uVar6 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
  pcVar7 = *(code **)(*(long *)(unaff_x22 + 0x58) + 0x20);
  (*pcVar7)(uVar6,*(undefined8 *)(unaff_x22 + 0x50),uVar5);
  (*pcVar7)(uVar3,uVar6,uVar5);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x50);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x60));
  _swift_task_dealloc(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00087b0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 00087b10; end: 00087b5f;  */

void FUN_00087b10(void)

{
  long lVar1;
  undefined8 uVar2;
  long *unaff_x22;
  long lVar3;
  
  lVar1 = *unaff_x22;
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x68));
  uVar2 = *(undefined8 *)(lVar1 + 0x50);
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x60));
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00087b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))();
  return;
}



/* Entry: 00087b60; end: 00087c3f;  */

void FUN_00087b60(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  lVar2 = 0;
  FUN_00087574();
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffc0 + -extraout_x8;
  (**(code **)(lVar5 + 0x10))(puVar4,param_2,lVar2);
  puVar3 = puVar4;
  _swift_getEnumCaseMultiPayload(puVar4,lVar2);
  bVar1 = (int)puVar3 != 1;
  if (bVar1) {
    (**(code **)(lVar5 + 8))(puVar4,lVar2);
    lVar2 = *(long *)(param_3 + -8);
  }
  else {
    lVar2 = *(long *)(param_3 + -8);
    (**(code **)(lVar2 + 0x20))(param_1,puVar4,param_3);
  }
  (**(code **)(lVar2 + 0x38))(param_1,bVar1,1,param_3);
  return;
}



/* Entry: 00087c40; end: 00087c67;  */

void FUN_00087c40(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_00087b60(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 00087c68; end: 00087ebf;  */

void FUN_00087c68(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar1 = 0;
  uStack_b0 = param_1;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lStack_a0 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lStack_a0 + 0x40));
  lVar9 = (long)&uStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar10 = *(long *)(lVar2 + -8);
  lStack_a8 = lVar2;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar10 + 0x40));
  lVar11 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar3 = 0;
  __s8Dispatch0A3QoSV0B6SClassOMa();
  lVar12 = *(long *)(uVar3 - 8);
  uVar4 = uVar3;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar12 + 0x40));
  lVar13 = lVar11 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  FUN_001cd45c();
  (**(code **)(lVar12 + 0x68))
            (lVar13,*(undefined4 *)
                     (&PTR___s8Dispatch0A3QoSV0B6SClassO7utilityyA2EmFWC_009a4390)[uVar4 & 0xff],
             uVar3);
  FUN_00088dc4(0);
  lVar2 = lVar13;
  __sSo17OS_dispatch_queueC8DispatchE6global3qosAbC0D3QoSV0G6SClassO_tFZ(lVar13);
  (**(code **)(lVar12 + 8))(lVar13,uVar3);
  puVar5 = &UNK_009a4350;
  _swift_allocObject(&UNK_009a4350,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = param_2;
  *(undefined8 *)(puVar5 + 0x18) = uStack_b0;
  pcStack_70 = FUN_00088e2c;
  puStack_90 = PTR___NSConcreteStackBlock_00999f30;
  uStack_88 = 0x42000000;
  uStack_80 = 0x563e4;
  puStack_78 = &UNK_009a4368;
  ppuVar6 = &puStack_90;
  puStack_68 = puVar5;
  __Block_copy(ppuVar6);
  _swift_retain(param_2);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar11);
  puStack_98 = PTR___swiftEmptyArrayStorage_0099b8f0;
  FUN_00088e34();
  uVar7 = 0xae97a8;
  func_0x000115a8(0xae97a8,&UNK_007d4680);
  uVar8 = uVar7;
  func_0x00088e78();
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (lVar9,&puStack_98,uVar7,uVar8,lVar1,param_2);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar11,lVar9,ppuVar6);
  __Block_release(ppuVar6);
  _objc_release(lVar2);
  (**(code **)(lStack_a0 + 8))(lVar9,lVar1);
  (**(code **)(lVar10 + 8))(lVar11,lStack_a8);
  _swift_release(puStack_68);
  return;
}



/* Entry: 00087ec0; end: 00087ec7;  */

void FUN_00087ec0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 unaff_x20;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar1 = 0;
  uStack_b0 = param_1;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lStack_a0 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lStack_a0 + 0x40));
  lVar9 = (long)&uStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar10 = *(long *)(lVar2 + -8);
  lStack_a8 = lVar2;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar10 + 0x40));
  lVar11 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar3 = 0;
  __s8Dispatch0A3QoSV0B6SClassOMa();
  lVar12 = *(long *)(uVar3 - 8);
  uVar4 = uVar3;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar12 + 0x40));
  lVar13 = lVar11 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  FUN_001cd45c();
  (**(code **)(lVar12 + 0x68))
            (lVar13,*(undefined4 *)
                     (&PTR___s8Dispatch0A3QoSV0B6SClassO7utilityyA2EmFWC_009a4390)[uVar4 & 0xff],
             uVar3);
  FUN_00088dc4(0);
  lVar2 = lVar13;
  __sSo17OS_dispatch_queueC8DispatchE6global3qosAbC0D3QoSV0G6SClassO_tFZ(lVar13);
  (**(code **)(lVar12 + 8))(lVar13,uVar3);
  puVar5 = &UNK_009a4350;
  _swift_allocObject(&UNK_009a4350,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar5 + 0x18) = uStack_b0;
  pcStack_70 = FUN_00088e2c;
  puStack_90 = PTR___NSConcreteStackBlock_00999f30;
  uStack_88 = 0x42000000;
  uStack_80 = 0x563e4;
  puStack_78 = &UNK_009a4368;
  ppuVar6 = &puStack_90;
  puStack_68 = puVar5;
  __Block_copy(ppuVar6);
  _swift_retain();
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar11);
  puStack_98 = PTR___swiftEmptyArrayStorage_0099b8f0;
  FUN_00088e34();
  uVar7 = 0xae97a8;
  func_0x000115a8(0xae97a8,&UNK_007d4680);
  uVar8 = uVar7;
  func_0x00088e78();
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (lVar9,&puStack_98,uVar7,uVar8,lVar1,unaff_x20);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar11,lVar9,ppuVar6);
  __Block_release(ppuVar6);
  _objc_release(lVar2);
  (**(code **)(lStack_a0 + 8))(lVar9,lVar1);
  (**(code **)(lVar10 + 8))(lVar11,lStack_a8);
  _swift_release(puStack_68);
  return;
}



/* Entry: 00087ec8; end: 00087fab;  */

void FUN_00087ec8(long *param_1,undefined8 param_2)

{
  long extraout_x8;
  long extraout_x12;
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  long lStack_60;
  
  lVar1 = *(long *)(*param_1 + 0x50);
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar4 + 0x40));
  puVar2 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar3 = (long)puVar2 - extraout_x12;
  lStack_60 = lVar1;
  FUN_001d496c(lVar3,FUN_00087504,auStack_70,lVar1);
  (**(code **)(lVar4 + 0x10))(puVar2,lVar3,lVar1);
  FUN_00087fac(puVar2,param_2,lVar1);
  (**(code **)(lVar4 + 8))(lVar3,lVar1);
  return;
}



/* Entry: 00087fac; end: 0008802f;  */

void FUN_00087fac(undefined8 param_1,long param_2,long param_3)

{
  long extraout_x8;
  long extraout_x12;
  code *pcVar1;
  
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(undefined8 *)(*(long *)(param_3 + -8) + 0x40),param_1,param_1);
  pcVar1 = *(code **)(extraout_x12 + 0x20);
  (*pcVar1)(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (*pcVar1)(*(undefined8 *)(*(long *)(param_2 + 0x40) + 0x28),
            &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_3);
  _swift_continuation_resume(param_2);
  return;
}



/* Entry: 00088030; end: 000880cf;  */

void FUN_00088030(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                 undefined8 param_5)

{
  ulong uVar1;
  char *pcVar2;
  long lVar3;
  long lVar4;
  long *unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_4;
  *(undefined8 *)(unaff_x22 + 0x60) = param_5;
  *(undefined8 *)(unaff_x22 + 0x48) = param_2;
  *(long *)(unaff_x22 + 0x50) = param_3;
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  lVar4 = *unaff_x20;
  lVar3 = *(long *)(param_3 + -8);
  *(long *)(unaff_x22 + 0x68) = lVar3;
  uVar1 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x70) = uVar1;
  lVar3 = *(long *)(lVar4 + 0x50);
  *(long *)(unaff_x22 + 0x78) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x80) = lVar3;
  uVar1 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x88) = uVar1;
  pcVar2 = section_00000068.sectname + 8;
  _swift_task_alloc();
  *(char **)(unaff_x22 + 0x90) = pcVar2;
  *(long *)pcVar2 = unaff_x22;
  *(code **)(pcVar2 + 8) = FUN_000880d0;
  *(ulong *)(pcVar2 + 0x28) = uVar1;
  *(long **)(pcVar2 + 0x30) = unaff_x20;
  lVar4 = *(long *)(*unaff_x20 + 0x50);
  *(long *)(pcVar2 + 0x38) = lVar4;
  lVar3 = 0;
  __sSqMa(0,lVar4);
  *(long *)(pcVar2 + 0x40) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(pcVar2 + 0x48) = lVar3;
  uVar1 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(pcVar2 + 0x50) = uVar1;
  lVar3 = *(long *)(lVar4 + -8);
  *(long *)(pcVar2 + 0x58) = lVar3;
  uVar1 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(pcVar2 + 0x60) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_000879c8,0,0);
  return;
}



/* Entry: 000880d0; end: 00088117;  */

void FUN_000880d0(void)

{
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x90));
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_00088118,0,0);
  return;
}



/* Entry: 00088118; end: 000881e3;  */

/* WARNING: Removing unreachable block (ram,0x00088184) */

void FUN_00088118(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x80);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x88);
  lVar2 = *(long *)(unaff_x22 + 0x78);
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(lVar2 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x50);
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x48);
  FUN_0021e5fc(*(undefined8 *)(unaff_x22 + 0x40),0x88ed0,unaff_x22 + 0x10,lVar2,
               *(undefined8 *)(unaff_x22 + 0x50),*(undefined8 *)(unaff_x22 + 0x58),
               *(undefined8 *)(unaff_x22 + 0x70));
  (**(code **)(lVar1 + 8))(uVar3,lVar2);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x70);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x88));
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000881e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 000881e4; end: 0008820f;  */

void FUN_000881e4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00779040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_0099b708)();
  return;
}



/* Entry: 00088210; end: 00088253;  */

void FUN_00088210(long param_1)

{
  undefined *puStack_18;
  
  puStack_18 = PTR___sBoWV_0099ae88 + 0x40;
  _swift_initClassMetadata2(param_1,0,1,&puStack_18,param_1 + 0x58);
  return;
}



/* Entry: 00088254; end: 000882ff;  */

int FUN_00088254(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[1] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 00088300; end: 00088433;  */

void FUN_00088300(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_30 = PTR___syycWV_0099b8e8 + 0x40;
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initEnumMetadataMultiPayload(param_1,0,2,&puStack_30);
  }
  return;
}



/* Entry: 00088434; end: 000884d7;  */

void FUN_00088434(uint *param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  
  lVar2 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  uVar4 = *(ulong *)(lVar2 + 0x40);
  if (uVar4 < 0x11) {
    uVar4 = 0x10;
  }
  bVar1 = *(byte *)((long)param_1 + uVar4);
  uVar5 = (uint)bVar1;
  if (1 < bVar1) {
    uVar3 = (uint)uVar4;
    uVar6 = 4;
    if (uVar3 < 4) {
      uVar6 = uVar3;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_000884c0;
      uVar6 = (uint)(byte)*param_1;
    }
    else if (uVar6 == 2) {
      uVar6 = (uint)(ushort)*param_1;
    }
    else if (uVar6 == 3) {
      uVar6 = (uint)(uint3)*param_1;
    }
    else {
      uVar6 = *param_1;
    }
    uVar5 = uVar6 | bVar1 - 2 << (ulong)((uVar3 & 3) << 3);
    if (3 < uVar3) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 2;
  }
LAB_000884c0:
  if (uVar5 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000884cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(*(undefined8 *)(param_1 + 2));
  return;
}



/* Entry: 000884d8; end: 000885b7;  */

undefined8 * FUN_000884d8(undefined8 *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  
  lVar3 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar4 = *(ulong *)(lVar3 + 0x40);
  if (uVar4 < 0x11) {
    uVar4 = 0x10;
  }
  bVar1 = *(byte *)((long)param_2 + uVar4);
  uVar5 = (uint)bVar1;
  if (1 < bVar1) {
    uVar7 = (uint)uVar4;
    uVar6 = 4;
    if (uVar7 < 4) {
      uVar6 = uVar7;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_00088574;
      uVar6 = (uint)(byte)*param_2;
    }
    else if (uVar6 == 2) {
      uVar6 = (uint)(ushort)*param_2;
    }
    else if (uVar6 == 3) {
      uVar6 = (uint)(uint3)*param_2;
    }
    else {
      uVar6 = *param_2;
    }
    uVar5 = uVar6 | bVar1 - 2 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 2;
  }
LAB_00088574:
  if (uVar5 != 1) {
    uVar2 = *(undefined8 *)(param_2 + 2);
    uVar8 = *(undefined8 *)param_2;
    param_1[1] = *(undefined8 *)(param_2 + 2);
    *param_1 = uVar8;
    _swift_retain(uVar2);
  }
  else {
    (**(code **)(lVar3 + 0x10))(param_1);
  }
  *(bool *)((long)param_1 + uVar4) = uVar5 == 1;
  return param_1;
}



/* Entry: 000885b8; end: 00088753;  */

uint * FUN_000885b8(uint *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar6 = *(long *)(param_3 + 0x10);
  lVar8 = *(long *)(lVar6 + -8);
  uVar3 = *(ulong *)(lVar8 + 0x40);
  if (uVar3 < 0x11) {
    uVar3 = 0x10;
  }
  bVar1 = *(byte *)((long)param_1 + uVar3);
  uVar4 = (uint)bVar1;
  uVar7 = (uint)uVar3;
  if (1 < bVar1) {
    uVar5 = 4;
    if (uVar7 < 4) {
      uVar5 = uVar7;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_00088668;
      uVar5 = (uint)(byte)*param_1;
    }
    else if (uVar5 == 2) {
      uVar5 = (uint)(ushort)*param_1;
    }
    else if (uVar5 == 3) {
      uVar5 = (uint)(uint3)*param_1;
    }
    else {
      uVar5 = *param_1;
    }
    uVar4 = uVar5 | bVar1 - 2 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 2;
  }
LAB_00088668:
  if (uVar4 == 1) {
    (**(code **)(lVar8 + 8))(param_1,lVar6);
  }
  else {
    _swift_release(*(undefined8 *)(param_1 + 2));
  }
  bVar1 = *(byte *)((long)param_2 + uVar3);
  uVar4 = (uint)bVar1;
  if (1 < bVar1) {
    uVar5 = 4;
    if (uVar7 < 4) {
      uVar5 = uVar7;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_00088700;
      uVar5 = (uint)(byte)*param_2;
    }
    else if (uVar5 == 2) {
      uVar5 = (uint)(ushort)*param_2;
    }
    else if (uVar5 == 3) {
      uVar5 = (uint)(uint3)*param_2;
    }
    else {
      uVar5 = *param_2;
    }
    uVar4 = uVar5 | bVar1 - 2 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 2;
  }
LAB_00088700:
  if (uVar4 == 1) {
    (**(code **)(lVar8 + 0x10))(param_1,param_2,lVar6);
    *(byte *)((long)param_1 + uVar3) = 1;
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 2);
    uVar9 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)param_1 = uVar9;
    *(byte *)((long)param_1 + uVar3) = 0;
    _swift_retain(uVar2);
  }
  return param_1;
}



/* Entry: 00088754; end: 00088827;  */

void FUN_00088754(undefined8 *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  
  lVar2 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar3 = *(ulong *)(lVar2 + 0x40);
  if (uVar3 < 0x11) {
    uVar3 = 0x10;
  }
  bVar1 = *(byte *)((long)param_2 + uVar3);
  uVar4 = (uint)bVar1;
  if (1 < bVar1) {
    uVar6 = (uint)uVar3;
    uVar5 = 4;
    if (uVar6 < 4) {
      uVar5 = uVar6;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_000887ec;
      uVar5 = (uint)(byte)*param_2;
    }
    else if (uVar5 == 2) {
      uVar5 = (uint)(ushort)*param_2;
    }
    else if (uVar5 == 3) {
      uVar5 = (uint)(uint3)*param_2;
    }
    else {
      uVar5 = *param_2;
    }
    uVar4 = uVar5 | bVar1 - 2 << (ulong)((uVar6 & 3) << 3);
    if (3 < uVar6) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 2;
  }
LAB_000887ec:
  if (uVar4 != 1) {
    uVar7 = *(undefined8 *)param_2;
    param_1[1] = *(undefined8 *)(param_2 + 2);
    *param_1 = uVar7;
  }
  else {
    (**(code **)(lVar2 + 0x20))();
  }
  *(bool *)((long)param_1 + uVar3) = uVar4 == 1;
  return;
}



/* Entry: 00088828; end: 000889bb;  */

uint * FUN_00088828(uint *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar5 = *(long *)(param_3 + 0x10);
  lVar7 = *(long *)(lVar5 + -8);
  uVar2 = *(ulong *)(lVar7 + 0x40);
  if (uVar2 < 0x11) {
    uVar2 = 0x10;
  }
  bVar1 = *(byte *)((long)param_1 + uVar2);
  uVar3 = (uint)bVar1;
  uVar6 = (uint)uVar2;
  if (1 < bVar1) {
    uVar4 = 4;
    if (uVar6 < 4) {
      uVar4 = uVar6;
    }
    if ((int)uVar4 < 2) {
      if (uVar4 == 0) goto LAB_000888d8;
      uVar4 = (uint)(byte)*param_1;
    }
    else if (uVar4 == 2) {
      uVar4 = (uint)(ushort)*param_1;
    }
    else if (uVar4 == 3) {
      uVar4 = (uint)(uint3)*param_1;
    }
    else {
      uVar4 = *param_1;
    }
    uVar3 = uVar4 | bVar1 - 2 << (ulong)((uVar6 & 3) << 3);
    if (3 < uVar6) {
      uVar3 = uVar4;
    }
    uVar3 = uVar3 + 2;
  }
LAB_000888d8:
  if (uVar3 == 1) {
    (**(code **)(lVar7 + 8))(param_1,lVar5);
  }
  else {
    _swift_release(*(undefined8 *)(param_1 + 2));
  }
  bVar1 = *(byte *)((long)param_2 + uVar2);
  uVar3 = (uint)bVar1;
  if (1 < bVar1) {
    uVar4 = 4;
    if (uVar6 < 4) {
      uVar4 = uVar6;
    }
    if ((int)uVar4 < 2) {
      if (uVar4 == 0) goto LAB_00088970;
      uVar4 = (uint)(byte)*param_2;
    }
    else if (uVar4 == 2) {
      uVar4 = (uint)(ushort)*param_2;
    }
    else if (uVar4 == 3) {
      uVar4 = (uint)(uint3)*param_2;
    }
    else {
      uVar4 = *param_2;
    }
    uVar3 = uVar4 | bVar1 - 2 << (ulong)((uVar6 & 3) << 3);
    if (3 < uVar6) {
      uVar3 = uVar4;
    }
    uVar3 = uVar3 + 2;
  }
LAB_00088970:
  if (uVar3 != 1) {
    uVar8 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)param_1 = uVar8;
  }
  else {
    (**(code **)(lVar7 + 0x20))(param_1,param_2,lVar5);
  }
  *(bool *)((long)param_1 + uVar2) = uVar3 == 1;
  return param_1;
}



/* Entry: 000889bc; end: 00088abf;  */

int FUN_000889bc(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  
  uVar5 = *(ulong *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40);
  if (uVar5 < 0x11) {
    uVar5 = 0x10;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < 0xff) goto LAB_00088a64;
  uVar6 = uVar5 + 1;
  uVar4 = (uint)uVar6;
  uVar3 = uVar4 << 3;
  if (uVar4 < 4) {
    uVar7 = ((param_2 + ~(-1 << (ulong)(uVar3 & 0x1f))) - 0xfe >> (ulong)(uVar3 & 0x1f)) + 1;
    if (uVar7 < 0x100) {
      if (uVar7 < 2) goto LAB_00088a64;
      goto LAB_000889f0;
    }
    if (uVar7 >> 0x10 == 0) {
      uVar7 = (uint)*(ushort *)((long)param_1 + uVar6);
    }
    else {
      uVar7 = *(uint *)((long)param_1 + uVar6);
    }
  }
  else {
LAB_000889f0:
    uVar7 = (uint)*(byte *)((long)param_1 + uVar6);
  }
  if (uVar7 != 0) {
    uVar1 = 0;
    if (uVar4 < 4) {
      uVar1 = uVar7 - 1 << (ulong)(uVar3 & 0x1f);
    }
    if (uVar4 != 0) {
      uVar3 = 4;
      if (uVar4 < 4) {
        uVar3 = uVar4;
      }
      if ((int)uVar3 < 3) {
        if (uVar3 == 1) {
          uVar6 = (ulong)(byte)*param_1;
        }
        else {
          uVar6 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar3 == 3) {
        uVar6 = (ulong)(uint3)*param_1;
      }
      else {
        uVar6 = (ulong)*param_1;
      }
    }
    return ((uint)uVar6 | uVar1) + 0xff;
  }
LAB_00088a64:
  iVar2 = 0;
  if (1 < *(byte *)((long)param_1 + uVar5)) {
    iVar2 = (*(byte *)((long)param_1 + uVar5) ^ 0xff) + 1;
  }
  return iVar2;
}



/* Entry: 00088ac0; end: 00088c63;  */

void FUN_00088ac0(uint *param_1,uint param_2,uint param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  undefined2 uVar3;
  ulong uVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  
  uVar4 = *(ulong *)(*(long *)(*(long *)(param_4 + 0x10) + -8) + 0x40);
  if (uVar4 < 0x11) {
    uVar4 = 0x10;
  }
  lVar1 = uVar4 + 1;
  uVar5 = (uint)lVar1;
  if (param_3 < 0xff) {
    bVar6 = 0;
  }
  else if (uVar5 < 4) {
    uVar2 = ((param_3 + ~(-1 << (ulong)(uVar5 << 3 & 0x1f))) - 0xfe >> (ulong)(uVar5 << 3 & 0x1f)) +
            1;
    bVar6 = 2;
    if (0xffff < uVar2) {
      bVar6 = 4;
    }
    if (uVar2 < 0x100) {
      bVar6 = 1 < uVar2;
    }
  }
  else {
    bVar6 = 1;
  }
  if (param_2 < 0xff) {
    if (bVar6 < 2) {
      if (bVar6 != 0) {
        *(undefined1 *)((long)param_1 + lVar1) = 0;
      }
    }
    else if (bVar6 == 2) {
      *(undefined2 *)((long)param_1 + lVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + lVar1) = 0;
    }
    if (param_2 != 0) {
      *(char *)((long)param_1 + uVar4) = -(char)param_2;
    }
  }
  else {
    param_2 = param_2 - 0xff;
    if (uVar5 < 4) {
      iVar7 = (param_2 >> (ulong)(uVar5 << 3 & 0x1f)) + 1;
      if (uVar5 != 0) {
        uVar2 = param_2 & (-1 << (ulong)(uVar5 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,lVar1);
        uVar3 = (undefined2)uVar2;
        if (uVar5 == 3) {
          *(undefined2 *)param_1 = uVar3;
          *(char *)((long)param_1 + 2) = (char)(uVar2 >> 0x10);
        }
        else if (uVar5 == 2) {
          *(undefined2 *)param_1 = uVar3;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,lVar1);
      *param_1 = param_2;
      iVar7 = 1;
    }
    if (bVar6 < 2) {
      if (bVar6 != 0) {
        *(char *)((long)param_1 + lVar1) = (char)iVar7;
      }
    }
    else if (bVar6 == 2) {
      *(short *)((long)param_1 + lVar1) = (short)iVar7;
    }
    else {
      *(int *)((long)param_1 + lVar1) = iVar7;
    }
  }
  return;
}



/* Entry: 00088c64; end: 00088cfb;  */

uint FUN_00088c64(uint *param_1,long param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  
  uVar4 = *(ulong *)(*(long *)(*(long *)(param_2 + 0x10) + -8) + 0x40);
  if (uVar4 < 0x11) {
    uVar4 = 0x10;
  }
  bVar1 = *(byte *)((long)param_1 + uVar4);
  uVar2 = (uint)bVar1;
  if (1 < bVar1) {
    uVar5 = (uint)uVar4;
    uVar3 = 4;
    if (uVar5 < 4) {
      uVar3 = uVar5;
    }
    if ((int)uVar3 < 2) {
      if (uVar3 == 0) {
        return uVar2;
      }
      uVar3 = (uint)(byte)*param_1;
    }
    else if (uVar3 == 2) {
      uVar3 = (uint)(ushort)*param_1;
    }
    else if (uVar3 == 3) {
      uVar3 = (uint)(uint3)*param_1;
    }
    else {
      uVar3 = *param_1;
    }
    uVar2 = uVar3 | bVar1 - 2 << (ulong)((uVar5 & 3) << 3);
    if (3 < uVar5) {
      uVar2 = uVar3;
    }
    uVar2 = uVar2 + 2;
  }
  return uVar2;
}



/* Entry: 00088cfc; end: 00088dc3;  */

void FUN_00088cfc(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  undefined2 uVar2;
  ulong uVar3;
  uint uVar4;
  
  uVar3 = *(ulong *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40);
  if (uVar3 < 0x11) {
    uVar3 = 0x10;
  }
  if (param_2 < 2) {
    *(char *)((long)param_1 + uVar3) = (char)param_2;
  }
  else {
    param_2 = param_2 - 2;
    uVar4 = (uint)uVar3;
    if (uVar4 < 4) {
      *(char *)((long)param_1 + uVar3) = (char)(param_2 >> (ulong)(uVar4 << 3 & 0x1f)) + '\x02';
      if (uVar4 != 0) {
        uVar1 = param_2 & (-1 << (ulong)(uVar4 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,uVar3);
        uVar2 = (undefined2)uVar1;
        if (uVar4 == 3) {
          *(undefined2 *)param_1 = uVar2;
          *(char *)((long)param_1 + 2) = (char)(uVar1 >> 0x10);
        }
        else if (uVar4 == 2) {
          *(undefined2 *)param_1 = uVar2;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      *(undefined1 *)((long)param_1 + uVar3) = 2;
      _bzero(param_1,uVar3);
      *param_1 = param_2;
    }
  }
  return;
}



/* Entry: 00088dc4; end: 00088e2b;  */

void FUN_00088dc4(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae9798 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___OS_dispatch_queue_00ac28f8;
  _objc_opt_self();
  _swift_getObjCClassMetadata();
  puRam0000000000ae9798 = puVar1;
  return;
}



/* Entry: 00088e2c; end: 00088e33;  */

void FUN_00088e2c(void)

{
  undefined8 uVar1;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  long lStack_60;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(**(long **)(unaff_x20 + 0x10) + 0x50);
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar5 + 0x40));
  puVar3 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar4 = (long)puVar3 - extraout_x12;
  lStack_60 = lVar2;
  FUN_001d496c(lVar4,FUN_00087504,auStack_70,lVar2);
  (**(code **)(lVar5 + 0x10))(puVar3,lVar4,lVar2);
  FUN_00087fac(puVar3,uVar1,lVar2);
  (**(code **)(lVar5 + 8))(lVar4,lVar2);
  return;
}



/* Entry: 00088e34; end: 00088ec7;  */

void FUN_00088e34(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000000ae97a0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  __s8Dispatch0A13WorkItemFlagsVMa(0xff);
  puVar2 = PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_0099bc80;
  _swift_getWitnessTable(PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_0099bc80,uVar1);
  puRam0000000000ae97a0 = puVar2;
  return;
}



/* Entry: 00088ec8; end: 00088ed3;  */

void FUN_00088ec8(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x0077b53c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_0099bb30)(uVar1);
  return;
}



/* Entry: 00088ed4; end: 00088f4b;  */

code * FUN_00088ed4(undefined8 param_1)

{
  undefined *puVar1;
  code *pcVar2;
  long unaff_x20;
  
  FUN_0009eb08(0,*(undefined8 *)(unaff_x20 + 0x50));
  puVar1 = &UNK_009a4468;
  _swift_allocObject(&UNK_009a4468,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  _objc_retain(param_1);
  pcVar2 = FUN_00088f70;
  FUN_0009ed04(FUN_00088f70,puVar1);
  _swift_release(puVar1);
  return pcVar2;
}



/* Entry: 00088f4c; end: 00088f6f;  */

void FUN_00088f4c(void)

{
  long unaff_x20;
  
  _objc_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 00088f70; end: 000890df;  */

undefined1  [16] FUN_00088f70(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  code *pcVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined8 uStack_58;
  
  ppuVar4 = &puStack_80;
  ppuVar5 = &puStack_80;
  uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar3 = &UNK_009a4490;
  _swift_allocObject(&UNK_009a4490,0x18,7);
  puVar1 = PTR___NSConcreteStackBlock_00999f30;
  pcStack_60 = FUN_00089144;
  puStack_80 = PTR___NSConcreteStackBlock_00999f30;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_000890e0;
  puStack_68 = &UNK_009a44a8;
  uStack_58 = param_1;
  __Block_copy(&puStack_80);
  uVar2 = uStack_58;
  _swift_retain(param_1);
  _swift_release(uVar2);
  pcStack_60 = FUN_00089168;
  puStack_80 = puVar1;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_0001d1e4;
  puStack_68 = &UNK_009a44d0;
  uStack_58 = param_1;
  __Block_copy(&puStack_80);
  uVar2 = uStack_58;
  _swift_retain(param_1);
  _swift_release(uVar2);
  func_0x00792400();
  _objc_retainAutoreleasedReturnValue();
  __Block_release(ppuVar5);
  __Block_release(ppuVar4);
  *(undefined8 *)(puVar3 + 0x10) = uVar7;
  FUN_0009d91c(0);
  _swift_allocObject();
  _swift_retain(puVar3);
  pcVar6 = FUN_0008916c;
  FUN_0009d89c(FUN_0008916c,puVar3);
  _swift_release(puVar3);
  auVar8._8_8_ = &PTR_DAT_009a7c40;
  auVar8._0_8_ = pcVar6;
  return auVar8;
}



/* Entry: 000890e0; end: 00089127;  */

void FUN_000890e0(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _swift_retain(uVar2);
  _swift_unknownObjectRetain(param_2);
  (*pcVar1)();
  _swift_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0077b62c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_0099bb78)(param_2);
  return;
}



/* Entry: 00089128; end: 00089143;  */

void FUN_00089128(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x0077b53c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_0099bb30)(uVar1);
  return;
}



/* Entry: 00089144; end: 00089167;  */

void FUN_00089144(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  FUN_000a08b0(&uStack_18);
  return;
}



/* Entry: 00089168; end: 0008916b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00089168(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + _DAT_00aec550);
  uVar2 = ((undefined8 *)(unaff_x20 + _DAT_00aec550))[1];
  _swift_retain(uVar2);
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(uVar2);
  return;
}



/* Entry: 0008916c; end: 000891c3;  */

void FUN_0008916c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_40 [24];
  undefined1 auStack_28 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_28,0,0);
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    func_0x007822e0();
  }
  _swift_beginAccess(unaff_x20 + 0x10,auStack_40,1,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  _objc_release(uVar1);
  return;
}



/* Entry: 000891c4; end: 000891d7;  */

void FUN_000891c4(void)

{
  long unaff_x20;
  
  _objc_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 000891d8; end: 0008924f;  */

void FUN_000891d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                 undefined1 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x30) = param_6;
  *(undefined8 *)(unaff_x20 + 0x38) = param_7;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined1 *)(unaff_x20 + 0x28) = param_4;
  *(undefined1 *)(unaff_x20 + 0x29) = param_5;
  FUN_00092368(param_1);
  return;
}



/* Entry: 00089250; end: 0008952f;  */

void FUN_00089250(undefined8 param_1,long param_2,undefined8 param_3)

{
  byte bVar1;
  byte bVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x13;
  long *unaff_x20;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  ulong uVar16;
  long alStack_e0 [2];
  undefined1 auStack_d0 [8];
  long lStack_c8;
  long lStack_c0;
  undefined1 *puStack_b8;
  long lStack_b0;
  uint uStack_a8;
  uint uStack_a4;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_80 = *unaff_x20;
  lStack_68 = *(long *)(param_2 + -8);
  lStack_88 = *(long *)(lStack_68 + 0x40);
  lStack_b0 = param_2;
  uStack_90 = param_1;
  uStack_70 = param_3;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  uVar15 = *(undefined8 *)(extraout_x12 + 0xa8);
  lVar4 = 0;
  puStack_b8 = auStack_d0 + -(extraout_x13 + 0xfU & 0xfffffffffffffff0);
  __sScS12ContinuationV15BufferingPolicyOMa(0,uVar15);
  lVar14 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = (long)(auStack_d0 + -(extraout_x13 + 0xfU & 0xfffffffffffffff0)) - extraout_x8;
  lVar5 = 0;
  __sScSMa(0,uVar15);
  lVar10 = *(long *)(lVar5 + -8);
  lVar8 = *(long *)(lVar10 + 0x40);
  lStack_c0 = lVar5;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar5 = lVar12 - (lVar8 + 0xfU & 0xfffffffffffffff0);
  lStack_c8 = lVar5;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar11 = lVar5 - extraout_x12_00;
  FUN_00089d20(lVar12,uVar15);
  lStack_78 = lVar11;
  FUN_0009f6e4(lVar11,lVar12);
  (**(code **)(lVar14 + 8))(lVar12,lVar4);
  lVar4 = lStack_c0;
  lStack_98 = unaff_x20[3];
  lStack_a0 = unaff_x20[4];
  uStack_a8 = (uint)*(byte *)(unaff_x20 + 5);
  uStack_a4 = (uint)*(byte *)((long)unaff_x20 + 0x29);
  (**(code **)(lVar10 + 0x10))(lVar5,lVar11,lStack_c0);
  lVar12 = lStack_68;
  lVar5 = lStack_b0;
  puVar3 = puStack_b8;
  (**(code **)(lStack_68 + 0x10))(puStack_b8,uStack_90,lStack_b0);
  bVar1 = *(byte *)(lVar10 + 0x50);
  uVar13 = (ulong)bVar1 + 0x30 & ((ulong)bVar1 ^ 0xffffffffffffffff);
  uVar9 = lVar8 + uVar13 + 7 & 0xfffffffffffffff8;
  bVar2 = *(byte *)(lVar12 + 0x50);
  uVar16 = bVar2 + uVar9 + 8 & ((ulong)bVar2 ^ 0xffffffffffffffff);
  puVar6 = &UNK_009a4640;
  _swift_allocObject(&UNK_009a4640,uVar16 + lStack_88,bVar1 | bVar2 | 7);
  *(undefined8 *)(puVar6 + 0x10) = uVar15;
  *(undefined8 *)(puVar6 + 0x18) = *(undefined8 *)(lStack_80 + 0xb0);
  *(long *)(puVar6 + 0x20) = lVar5;
  *(undefined8 *)(puVar6 + 0x28) = uStack_70;
  (**(code **)(lVar10 + 0x20))(puVar6 + uVar13,lStack_c8,lVar4);
  *(long **)(puVar6 + uVar9) = unaff_x20;
  (**(code **)(lStack_68 + 0x20))(puVar6 + uVar16,puVar3,lVar5);
  puVar7 = &UNK_009a4668;
  _swift_allocObject(&UNK_009a4668,0x20,7);
  *(undefined **)(puVar7 + 0x10) = &UNK_007d3c30;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  _swift_retain();
  _swift_retain(puVar6);
  *(undefined **)(lVar11 + -0x10) = PTR___sytN_0099b8e0 + 8;
  lVar5 = lStack_98;
  __s15SnapConcurrency12AttachedTask_8priority19asyncSpanNameSuffix9operationScTyxs5NeverOG0A11Attribution010AttributedD0O_AA0aD8PriorityOSgSSSgxyYaYbcts8SendableRzlF
            (lStack_98,lStack_a0,uStack_a8,uStack_a4,0,0,&UNK_007d3c38,puVar7);
  _swift_release(puVar6);
  _swift_release(puVar7);
  (**(code **)(lVar10 + 8))(lStack_78,lVar4);
  lVar4 = 0xae9838;
  func_0x000115a8(0xae9838,&UNK_007d3c40);
  _swift_allocObject();
  *(long *)(lVar4 + 0x10) = lVar5;
  return;
}



/* Entry: 00089530; end: 00089637;  */

void FUN_00089530(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x30) = param_5;
  *(long **)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  lVar3 = *param_2;
  lVar4 = *(long *)(lVar3 + 0xb0);
  *(long *)(unaff_x22 + 0x38) = lVar4;
  lVar1 = 0;
  __sSqMa(0,lVar4);
  *(long *)(unaff_x22 + 0x40) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x48) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x50) = uVar2;
  lVar1 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0x58) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x60) = uVar2;
  lVar3 = *(long *)(lVar3 + 0xa8);
  *(long *)(unaff_x22 + 0x68) = lVar3;
  lVar1 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x70) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x78) = uVar2;
  lVar1 = 0;
  __sSqMa(0,lVar3);
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x80) = uVar2;
  lVar1 = 0;
  __sScS8IteratorVMa(0,lVar3);
  *(long *)(unaff_x22 + 0x88) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x90) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x98) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_00089638,0,0);
  return;
}



/* Entry: 00089638; end: 000896bf;  */

void FUN_00089638(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x98);
  lVar1 = *(long *)(unaff_x22 + 0x18);
  __sScSMa(0,*(undefined8 *)(unaff_x22 + 0x68));
  __sScS17makeAsyncIteratorScS0C0Vyx_GyF(uVar3);
  *(undefined8 *)(unaff_x22 + 0xa0) = *(undefined8 *)(lVar1 + 0x30);
  *(undefined8 *)(unaff_x22 + 0xa8) = *(undefined8 *)(lVar1 + 0x38);
  plVar2 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_0099bf28 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xb0) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_000896c0;
                    /* WARNING: Could not recover jumptable at 0x007788a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_0099bf20)
            (plVar2,*(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(unaff_x22 + 0x88));
  return;
}



/* Entry: 000896c0; end: 00089707;  */

void FUN_000896c0(void)

{
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0xb0));
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_00089708,0,0);
  return;
}



/* Entry: 00089708; end: 00089843;  */

void FUN_00089708(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  lVar3 = *(long *)(unaff_x22 + 0x70);
  uVar4 = uVar6;
  (**(code **)(lVar3 + 0x30))(uVar6,1,uVar2);
  if ((int)uVar4 == 1) {
    uVar4 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
    lVar3 = *(long *)(unaff_x22 + 0x30);
    (**(code **)(*(long *)(unaff_x22 + 0x90) + 8))(uVar4,*(undefined8 *)(unaff_x22 + 0x88));
    (**(code **)(lVar3 + 0x20))(uVar2,lVar3);
    _swift_task_dealloc(uVar4);
    _swift_task_dealloc(uVar6);
    _swift_task_dealloc(uVar7);
    _swift_task_dealloc(uVar9);
    _swift_task_dealloc(uVar10);
                    /* WARNING: Could not recover jumptable at 0x000897d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  piVar8 = *(int **)(unaff_x22 + 0xa0);
  (**(code **)(lVar3 + 0x20))(*(undefined8 *)(unaff_x22 + 0x78),uVar6,uVar2);
  iVar1 = *piVar8;
  plVar5 = (long *)(ulong)(uint)piVar8[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xb8) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_00089844;
                    /* WARNING: Could not recover jumptable at 0x00089840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar8))
            (plVar5,*(undefined8 *)(unaff_x22 + 0x50),*(undefined8 *)(unaff_x22 + 0x78));
  return;
}



/* Entry: 00089844; end: 0008988b;  */

void FUN_00089844(void)

{
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0xb8));
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_0008988c,0,0);
  return;
}



/* Entry: 0008988c; end: 000899a7;  */

void FUN_0008988c(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  code *pcVar8;
  undefined8 uVar9;
  long unaff_x22;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar3 = *(long *)(unaff_x22 + 0x58);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar5 = uVar1;
  (**(code **)(lVar3 + 0x30))(uVar1,1,uVar9);
  lVar2 = *(long *)(unaff_x22 + 0x70);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x68);
  if ((int)uVar5 == 1) {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x40);
    lVar3 = *(long *)(unaff_x22 + 0x48);
    (**(code **)(lVar2 + 8))(uVar6,uVar10);
    pcVar8 = *(code **)(lVar3 + 8);
    uVar6 = uVar1;
    uVar10 = uVar5;
  }
  else {
    uVar11 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x28);
    lVar4 = *(long *)(unaff_x22 + 0x30);
    (**(code **)(lVar3 + 0x20))(uVar11,uVar1,uVar9);
    (**(code **)(lVar4 + 0x18))(uVar11,uVar5,lVar4);
    (**(code **)(lVar3 + 8))(uVar11,uVar9);
    pcVar8 = *(code **)(lVar2 + 8);
  }
  (*pcVar8)(uVar6,uVar10);
  plVar7 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_0099bf28 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xb0) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_000896c0;
                    /* WARNING: Could not recover jumptable at 0x007788a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_0099bf20)
            (plVar7,*(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(unaff_x22 + 0x88));
  return;
}



/* Entry: 000899a8; end: 000899c7;  */

void FUN_000899a8(void)

{
  long unaff_x20;
  
  FUN_00089cec(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
               *(undefined1 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(*(undefined8 *)(unaff_x20 + 0x38));
  return;
}



/* Entry: 000899c8; end: 00089a03;  */

long FUN_000899c8(long param_1)

{
  FUN_00092370();
  FUN_00089cec(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
               *(undefined1 *)(param_1 + 0x28));
  _swift_release(*(undefined8 *)(param_1 + 0x38));
  return param_1;
}


