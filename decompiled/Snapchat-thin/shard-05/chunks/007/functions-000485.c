/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10407084c; end: 104070887; -[SCShakeProjectNames init] */

void FUN_10407084c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x00010407082c();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104070888; end: 1040708b7;  */

void FUN_104070888(void)

{
  func_0x00010407082c();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1040708b8; end: 1040708bb; -[SCShakeProjectNames .cxx_destruct] */

void FUN_1040708b8(void)

{
  return;
}



/* Entry: 1040708bc; end: 1040708db; -[_TtC31SCInternalShakeToReportServices31SCInternalShakeToReportServices internalShakeLogWriter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040708bc(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_113053858));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1040708dc; end: 104070927;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040708dc(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113053858) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104070928; end: 104070963;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104070928(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_113053858) = param_1;
  func_0x000100093d28();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104070964; end: 1040709bb; -[_TtC31SCInternalShakeToReportServices31SCInternalShakeToReportServices initWithInternalShakeLogWriter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104070964(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  *(undefined8 *)(param_1 + _DAT_113053858) = param_3;
  lVar2 = param_1;
  func_0x000100093d28();
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _swift_unknownObjectRetain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 1040709bc; end: 104070a17; -[_TtC31SCInternalShakeToReportServices31SCInternalShakeToReportServices init] */

void FUN_1040709bc(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCInternalShakeToReportServices.SCInternalShakeToReportServices",0x3f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1040709e8);
  (*pcVar1)();
}



/* Entry: 104070a18; end: 104070a27; -[_TtC31SCInternalShakeToReportServices31SCInternalShakeToReportServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104070a18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_113053858));
  return;
}



/* Entry: 104070a28; end: 104070c07;  */

long FUN_104070a28(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 104070c08; end: 104070c53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104070c08(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113053888) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104070c54; end: 104070cab; -[_TtC34SCShakeToReportInfoProviderService34SCShakeToReportInfoProviderService initWithInfoProviderRegistry:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104070c54(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  *(undefined8 *)(param_1 + _DAT_113053888) = param_3;
  lVar2 = param_1;
  func_0x0001000970a4();
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 104070cac; end: 104070d07; -[_TtC34SCShakeToReportInfoProviderService34SCShakeToReportInfoProviderService init] */

void FUN_104070cac(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCShakeToReportInfoProviderService.SCShakeToReportInfoProviderService",0x45,"init()",6
             ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104070cd8);
  (*pcVar1)();
}



/* Entry: 104070d08; end: 104070d17; -[_TtC34SCShakeToReportInfoProviderService34SCShakeToReportInfoProviderService .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104070d08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113053888));
  return;
}



/* Entry: 104070d18; end: 104070d63; -[SCShakeLogData logFileName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104070d18(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1130538b8);
  uVar1 = ((undefined8 *)(param_1 + _DAT_1130538b8))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104070d64; end: 104070dbf; -[SCShakeLogData logData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104070d64(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1130538c0);
  uVar2 = ((undefined8 *)(param_1 + _DAT_1130538c0))[1];
  func_0x00010006c00c(uVar1,uVar2);
  uVar3 = uVar1;
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar1,uVar2);
  func_0x00010006c090(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104070dc0; end: 104070eb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104070dc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130538b8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130538c0);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104070eb8; end: 104070f6b; -[SCShakeLogData initWithLogFileName:logData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104070eb8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uVar3 = param_4;
  uVar4 = param_2;
  _objc_retain(param_4);
  __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
  _objc_release(uVar3);
  puVar1 = (undefined8 *)(param_1 + _DAT_1130538b8);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(param_1 + _DAT_1130538c0);
  *puVar1 = param_4;
  puVar1[1] = uVar4;
  lStack_60 = param_1;
  lStack_58 = lVar2;
  _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104070f6c; end: 10407101b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104070f6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  puVar2 = auStack_50;
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130538b8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130538c0);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  _swift_bridgeObjectRetain(param_2);
  func_0x00010006c00c(param_3,param_4);
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  _swift_bridgeObjectRelease(param_2);
  func_0x00010006c090(param_3,param_4);
  return puVar2;
}



/* Entry: 10407101c; end: 10407101f; -[SCShakeLogData copyWithZone:] */

void FUN_10407101c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104071020; end: 104071093; -[SCShakeLogData description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104071020(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_1130538b8 + 8);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1130538c0);
  uVar2 = ((undefined8 *)(param_1 + _DAT_1130538c0))[1];
  _swift_bridgeObjectRetain(uVar3);
  func_0x00010006c00c(uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar3);
  func_0x00010006c090(uVar1,uVar2);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104071094; end: 10407110f; -[SCShakeLogData init] */

void FUN_104071094(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCShakeToReportInfoProviderService/SCShakeLogDataWrapper.swift",0x3e,2,0x26,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1040710dc);
  (*pcVar1)();
}



/* Entry: 104071110; end: 10407114f; -[SCShakeLogData .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104071110(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130538b8 + 8));
  uVar2 = *(ulong *)(param_1 + _DAT_1130538c0);
  uVar1 = ((ulong *)(param_1 + _DAT_1130538c0))[1];
  uVar3 = (uint)(uVar1 >> 0x3e);
  if (uVar3 == 1) {
    uVar2 = uVar1 & 0x3fffffffffffffff;
  }
  else if (uVar3 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 104071150; end: 10407116f;  */

void FUN_104071150(void)

{
  _objc_opt_self(&PTR_PTR_112983810);
  return;
}



/* Entry: 104071170; end: 10407131b;  */

uint FUN_104071170(byte *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    param_2 = param_2 + 2;
    uVar2 = 2;
    if (0xfffeff < param_2) {
      uVar2 = 4;
    }
    if (param_2 >> 8 < 0xff) {
      uVar2 = 1;
    }
    uVar1 = 0;
    if (0xff < param_2) {
      uVar1 = uVar2;
    }
    if (uVar1 < 2) {
      if ((uVar1 != 0) && (uVar2 = (uint)param_1[1], param_1[1] != 0)) goto LAB_1040711d8;
    }
    else if (uVar1 == 2) {
      uVar2 = (uint)*(ushort *)(param_1 + 1);
      if (*(ushort *)(param_1 + 1) != 0) {
LAB_1040711d8:
        return ((uint)*param_1 | uVar2 << 8) - 2;
      }
    }
    else {
      uVar2 = *(uint *)(param_1 + 1);
      if (uVar2 != 0) goto LAB_1040711d8;
    }
  }
  uVar2 = 0xffffffff;
  if (1 < *param_1) {
    uVar2 = *param_1 + 0x7ffffffe & 0x7fffffff;
  }
  uVar1 = 0;
  if (1 < uVar2 + 1) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Entry: 10407131c; end: 10407135b;  */

undefined8 FUN_10407131c(void)

{
  if (lRam00000001130538f0 != -1) {
    _swift_once(0x1130538f0,&UNK_1004ecdf8);
  }
  return 0x1138130c8;
}



/* Entry: 10407135c; end: 1040713bf; -[_TtC24SCAppTerminationServices23ActiveCallStateRegistry unregisterCallStateGetter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10407135c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar3 = _DAT_1130538f8;
  uVar5 = *(undefined8 *)(param_1 + _DAT_1130538f8);
  lVar4 = param_1;
  _objc_retain();
  func_0x000107c4b940(uVar5);
  puVar1 = (undefined8 *)(lVar4 + _DAT_113053900);
  uVar5 = *puVar1;
  uVar2 = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x0001004ecf54(uVar5,uVar2);
  func_0x000107c5d278(*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 1040713c0; end: 1040713f3; -[_TtC24SCAppTerminationServices23ActiveCallStateRegistry hasActiveCall] */

uint FUN_1040713c0(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1040713f4();
  _objc_release(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 1040713f4; end: 104071483;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1040713f4(void)

{
  code *pcVar1;
  undefined8 uVar2;
  uint uVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_1130538f8);
  func_0x000107c4b940(uVar4);
  pcVar1 = *(code **)(unaff_x20 + _DAT_113053900);
  uVar2 = ((undefined8 *)(unaff_x20 + _DAT_113053900))[1];
  func_0x000100f7d350(pcVar1,uVar2);
  func_0x000107c5d278(uVar4);
  if (pcVar1 == (code *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar4 = uVar2;
    _swift_retain(uVar2);
    uVar3 = (uint)uVar4;
    (*pcVar1)();
    func_0x0001004ecf54(pcVar1,uVar2);
    func_0x0001004ecf54(pcVar1,uVar2);
    uVar3 = uVar3 & 1;
  }
  return uVar3;
}



/* Entry: 104071484; end: 1040714b7;  */

void FUN_104071484(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1040714b8; end: 1040714f3; -[_TtC24SCAppTerminationServices23ActiveCallStateRegistry .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040714b8(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130538f8));
  if (*(long *)(param_1 + _DAT_113053900) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_113053900))[1]);
    return;
  }
  return;
}



/* Entry: 1040714f4; end: 10407150f;  */

void FUN_1040714f4(void)

{
  long unaff_x20;
  
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 104071510; end: 104071527;  */

bool FUN_104071510(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 104071528; end: 104071567;  */

void FUN_104071528(void)

{
  undefined *puVar1;
  
  if (puRam0000000113053930 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dccbe70;
  _swift_getWitnessTable(&UNK_10dccbe70,&UNK_11073d818);
  puRam0000000113053930 = puVar1;
  return;
}



/* Entry: 104071568; end: 104071613;  */

void FUN_104071568(void)

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



/* Entry: 104071614; end: 10407164b;  */

void FUN_104071614(ulong *param_1,ulong *param_2)

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



/* Entry: 10407164c; end: 10407165b; -[_TtC24SCAppTerminationServices24SCAppTerminationServices appTerminator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10407164c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113053940));
  return;
}



/* Entry: 10407165c; end: 10407166b; -[_TtC24SCAppTerminationServices24SCAppTerminationServices gracefulAppTerminating] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10407165c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113053948));
  return;
}



/* Entry: 10407166c; end: 1040716df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10407166c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113053938) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113053940) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113053948) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1040716e0; end: 10407176f; -[_TtC24SCAppTerminationServices24SCAppTerminationServices initWithAppTerminationProvider:appTerminator:gracefulAppTerminating:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040716e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  *(undefined8 *)(param_1 + _DAT_113053938) = param_3;
  *(undefined8 *)(param_1 + _DAT_113053940) = param_4;
  *(undefined8 *)(param_1 + _DAT_113053948) = param_5;
  lVar2 = param_1;
  func_0x0001000a0294();
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 104071770; end: 1040717cb; -[_TtC24SCAppTerminationServices24SCAppTerminationServices init] */

void FUN_104071770(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCAppTerminationServices.SCAppTerminationServices",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10407179c);
  (*pcVar1)();
}



/* Entry: 1040717cc; end: 1040718bf; -[_TtC24SCAppTerminationServices24SCAppTerminationServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040717cc(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113053938));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113053940));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113053948));
  return;
}



/* Entry: 1040718c0; end: 1040718ff;  */

void FUN_1040718c0(undefined1 *param_1,long *param_2)

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



/* Entry: 104071900; end: 104071947; -[SCAppTerminationType description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104071900(long param_1)

{
  code *pcVar1;
  
  if ((*(char *)(param_1 + _DAT_113053978) == '\x01') &&
     (*(char *)(param_1 + _DAT_113053980) == '\x02')) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104071948);
    (*pcVar1)();
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104071948; end: 10407198f; -[SCAppTerminationType init] */

void FUN_104071948(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCAppTerminationServices/SCAppTerminationTypeWrapper.swift",0x3a,2,0x2b,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104071990);
  (*pcVar1)();
}



/* Entry: 104071990; end: 104071993; -[SCAppTerminationType copyWithZone:] */

void FUN_104071990(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104071994; end: 1040719ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104071994(undefined1 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_113053978) = 1;
  *(undefined1 *)(unaff_x20 + _DAT_113053980) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1040719f0; end: 104071a4f; +[SCAppTerminationType expectedByUser:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040719f0(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113053978) = 1;
  *(undefined1 *)(lVar1 + _DAT_113053980) = param_3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104071a50; end: 104071a83;  */

void FUN_104071a50(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104071a84; end: 104071beb;  */

int FUN_104071a84(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_104071b00;
        goto LAB_104071ae4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_104071ae4:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_104071b00:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 104071bec; end: 104071c2b;  */

void FUN_104071bec(void)

{
  undefined *puVar1;
  
  if (puRam00000001130539b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dccbf8c;
  _swift_getWitnessTable(&UNK_10dccbf8c,&UNK_11073d900);
  puRam00000001130539b0 = puVar1;
  return;
}



/* Entry: 104071c2c; end: 104071cb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104071c2c(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  _objc_allocWithZone();
  lVar2 = unaff_x20;
  func_0x000100a1c758();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_1130539b8) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_1130539c0) = param_2;
    _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
    _objc_release(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104071cb4);
  (*pcVar1)();
}



/* Entry: 104071cb4; end: 104071d13; -[_TtC28CameraSystemScopeGraphBridge43CameraSystemScopeGraphBridgeSaberEntryPoint init] */

void FUN_104071cb4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("CameraSystemScopeGraphBridge.CameraSystemScopeGraphBridgeSaberEntryPoint",0x48,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104071ce0);
  (*pcVar1)();
}



/* Entry: 104071d14; end: 104071d4b; -[_TtC28CameraSystemScopeGraphBridge43CameraSystemScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104071d14(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130539b8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130539c0));
  return;
}



/* Entry: 104071d4c; end: 104071d73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104071d4c(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_1130539c0),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_1130539b8));
  return;
}



/* Entry: 104071d74; end: 104071e0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104071d74(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  _objc_allocWithZone();
  uVar3 = *(undefined8 *)(param_2 + _DAT_113054010);
  *(undefined8 *)(unaff_x20 + _DAT_1130539f0) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_1130539f8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  _swift_retain(uVar3);
  _objc_msgSendSuper2(auStack_40,puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  return puVar2;
}



/* Entry: 104071e10; end: 104071e6f; -[_TtC28CameraSystemScopeGraphBridge52SCLegacyCameraStartupCommandsServicesSaberEntryPoint init] */

void FUN_104071e10(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("CameraSystemScopeGraphBridge.SCLegacyCameraStartupCommandsServicesSaberEntryPoint",
             0x51,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104071e3c);
  (*pcVar1)();
}



/* Entry: 104071e70; end: 104071f03; -[_TtC28CameraSystemScopeGraphBridge52SCLegacyCameraStartupCommandsServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104071e70(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_1130539f0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130539f8));
  return;
}



/* Entry: 104071f04; end: 104071f0b;  */

undefined8 FUN_104071f04(void)

{
  return 0;
}



/* Entry: 104071f0c; end: 104071f6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104071f0c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113053fe8);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 104071f70; end: 104071f77;  */

void FUN_104071f70(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 104071f78; end: 104072017;  */

void FUN_104071f78(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 104072018; end: 104072037;  */

void FUN_104072018(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 104072038; end: 10407209b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104072038(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113053ff0);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10407209c; end: 1040720a3;  */

void FUN_10407209c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1040720a4; end: 104072143;  */

void FUN_1040720a4(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 104072144; end: 104072163;  */

void FUN_104072144(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 104072164; end: 1040721c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104072164(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113053ff8);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1040721c8; end: 1040721cf;  */

void FUN_1040721c8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1040721d0; end: 10407226f;  */

void FUN_1040721d0(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 104072270; end: 10407228f;  */

void FUN_104072270(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 104072290; end: 1040722f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104072290(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113054000);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1040722f4; end: 1040722fb;  */

void FUN_1040722f4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1040722fc; end: 10407239b;  */

void FUN_1040722fc(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10407239c; end: 1040723bb;  */

void FUN_10407239c(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1040723bc; end: 10407241f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1040723bc(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113054008);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 104072420; end: 104072427;  */

void FUN_104072420(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 104072428; end: 1040724c7;  */

void FUN_104072428(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1040724c8; end: 1040724e7;  */

void FUN_1040724c8(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1040724e8; end: 10407254b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1040724e8(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113054018);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10407254c; end: 104072553;  */

void FUN_10407254c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 104072554; end: 1040725f3;  */

void FUN_104072554(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1040725f4; end: 104072613;  */

void FUN_1040725f4(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 104072614; end: 104072677;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104072614(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113054020);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 104072678; end: 10407267f;  */

void FUN_104072678(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 104072680; end: 10407271f;  */

void FUN_104072680(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 104072720; end: 10407273f;  */

void FUN_104072720(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 104072740; end: 10407281b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104072740(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113053fe8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113053ff0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113053ff8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113054000) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_113054008) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_113054010) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_113054018) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_113054020) = param_8;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10407281c; end: 10407287b; -[_TtC28CameraSystemScopeGraphBridge36CameraSystemScopeGraphBridgeServices init] */

void FUN_10407281c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("CameraSystemScopeGraphBridge.CameraSystemScopeGraphBridgeServices",0x41,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104072848);
  (*pcVar1)();
}



/* Entry: 10407287c; end: 10407296f; -[_TtC28CameraSystemScopeGraphBridge36CameraSystemScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10407287c(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_113054010));
  _swift_release(*(undefined8 *)(param_1 + _DAT_113053fe8));
  _swift_release(*(undefined8 *)(param_1 + _DAT_113053ff0));
  _swift_release(*(undefined8 *)(param_1 + _DAT_113053ff8));
  _swift_release(*(undefined8 *)(param_1 + _DAT_113054000));
  _swift_release(*(undefined8 *)(param_1 + _DAT_113054008));
  _swift_release(*(undefined8 *)(param_1 + _DAT_113054018));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113054020));
  return;
}



/* Entry: 104072970; end: 1040729a7;  */

undefined1  [16] FUN_104072970(void)

{
  return ZEXT816(0x11073db98);
}



/* Entry: 1040729a8; end: 1040729eb; -[SCCameraSystemScopeGraphBridgeSaberEntryPoint end] */

void FUN_1040729a8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1040729ec; end: 104072a1f;  */

void FUN_1040729ec(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104072a20; end: 104072a67; -[SCCameraSystemScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104072a20(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113054078);
  _objc_release(*(undefined8 *)(param_1 + _DAT_113054080));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113054088));
  return;
}



/* Entry: 104072a68; end: 104072a87;  */

void FUN_104072a68(void)

{
  _objc_opt_self(&PTR_PTR_112983dc0);
  return;
}



/* Entry: 104072a88; end: 104072acb; -[SCSCLegacyCameraStartupCommandsServicesSaberEntryPoint end] */

void FUN_104072a88(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104072acc; end: 104072aff;  */

void FUN_104072acc(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104072b00; end: 104072b57; -[SCSCLegacyCameraStartupCommandsServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104072b00(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_1130540b8);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_1130540c0);
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130540c8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130540d0));
  return;
}



/* Entry: 104072b58; end: 104072b77;  */

void FUN_104072b58(void)

{
  _objc_opt_self(&PTR_PTR_112983e88);
  return;
}



/* Entry: 104072b78; end: 104072b83; -[SCSCCameraHardwareServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104072b78(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113054100;
  _swift_beginAccess(param_1 + _DAT_113054100,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


