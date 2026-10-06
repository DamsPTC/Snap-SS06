/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104473110; end: 10447316f; -[SCAppLaunchSignaler init] */

void FUN_104473110(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("AppLaunchSignaler.AppLaunchSignaler",0x23,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10447313c);
  (*pcVar1)();
}



/* Entry: 104473170; end: 1044731eb; -[SCAppLaunchSignaler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104473170(long param_1)

{
  undefined8 *puVar1;
  
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307c850));
  puVar1 = (undefined8 *)(param_1 + _DAT_11307c860);
  func_0x000104473278(*puVar1,puVar1[1],puVar1[2],puVar1[3],puVar1[4],puVar1[5],puVar1[6],puVar1[7],
                      puVar1[8],puVar1[9],puVar1[10],*(undefined4 *)(puVar1 + 0xb));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11307c878 + 8))
  ;
  return;
}



/* Entry: 1044731ec; end: 104473227;  */

void FUN_1044731ec(void)

{
  if ((bRam0000000113813678 & 1) == 0) {
    uRam00000001138136c0 = 1;
  }
  return;
}



/* Entry: 104473228; end: 1044732a7;  */

undefined8 FUN_104473228(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x11307c888;
  func_0x0001000285a8(0x11307c888,&UNK_10dd04b58);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1044732a8; end: 1044732df;  */

void FUN_1044732a8(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_80 [16];
  long lStack_70;
  char *pcStack_68;
  undefined1 auStack_60 [16];
  char *pcStack_50;
  long lStack_48;
  char cStack_39;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    cStack_39 = '\0';
    pcStack_68 = &cStack_39;
    lStack_70 = lVar1;
    pcStack_50 = pcStack_68;
    lStack_48 = lVar1;
    func_0x000100c7bb9c(0x1044732c4,auStack_60,0x1044732b0,auStack_80,FUN_104473068,0);
    if (cStack_39 == '\x01') {
      func_0x000100c7be28(1);
    }
    _objc_release(lVar1);
  }
  return;
}



/* Entry: 1044732e0; end: 10447338b;  */

void FUN_1044732e0(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10447338c; end: 10447338f;  */

void FUN_10447338c(void)

{
  undefined *puVar1;
  
  if (puRam000000011307c8c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd04b80;
  _swift_getWitnessTable(&UNK_10dd04b80,&UNK_1107753f8);
  puRam000000011307c8c0 = puVar1;
  return;
}



/* Entry: 104473390; end: 1044733cf;  */

void FUN_104473390(void)

{
  undefined *puVar1;
  
  if (puRam000000011307c8c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd04b80;
  _swift_getWitnessTable(&UNK_10dd04b80,&UNK_1107753f8);
  puRam000000011307c8c0 = puVar1;
  return;
}



/* Entry: 1044733d0; end: 104473533;  */

int FUN_1044733d0(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfb < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 4) {
      iVar2 = 4;
    }
    if (param_2 + 4 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10447344c;
        goto LAB_104473430;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_104473430:
      return ((uint)*param_1 | uVar1 << 8) - 4;
    }
  }
LAB_10447344c:
  iVar2 = *param_1 - 5;
  if (*param_1 < 5) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 104473534; end: 104473543; -[_TtC17AppLaunchSignaler24ForegroundLaunchDetector taskRoleReadFailed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104473534(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11307c8d8);
}



/* Entry: 104473544; end: 104473577;  */

void FUN_104473544(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104473578; end: 10447369b; -[_TtC17AppLaunchSignaler24ForegroundLaunchDetector .cxx_destruct] */

void FUN_104473578(void)

{
  return;
}



/* Entry: 10447369c; end: 1044736ab;  */

undefined1  [16] FUN_10447369c(void)

{
  return ZEXT816(0x110775688);
}



/* Entry: 1044736ac; end: 1044736b7; +[_TtC26SCFrameRateMonitorServices36SCBadFrameRateStatsTrackingConstants kSCJankTimestampTolerance] */

undefined8 FUN_1044736ac(void)

{
  return 0x3eb0c6f7a0b5ed8d;
}



/* Entry: 1044736b8; end: 1044736d7; +[_TtC26SCFrameRateMonitorServices36SCBadFrameRateStatsTrackingConstants JankAsyncTraceName] */

void FUN_1044736b8(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6b6e616a,0xe400000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044736d8; end: 1044736fb; +[_TtC26SCFrameRateMonitorServices36SCBadFrameRateStatsTrackingConstants FrameAsyncTraceName] */

void FUN_1044736d8(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x656d617266,0xe500000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044736fc; end: 104473737; -[_TtC26SCFrameRateMonitorServices36SCBadFrameRateStatsTrackingConstants init] */

void FUN_1044736fc(undefined8 param_1)

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



/* Entry: 104473738; end: 10447376b;  */

void FUN_104473738(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10447376c; end: 10447376f; -[_TtC26SCFrameRateMonitorServices36SCBadFrameRateStatsTrackingConstants .cxx_destruct] */

void FUN_10447376c(void)

{
  return;
}



/* Entry: 104473770; end: 10447378f;  */

void FUN_104473770(void)

{
  _objc_opt_self(&PTR_PTR_1129bb488);
  return;
}



/* Entry: 104473790; end: 1044737a7;  */

bool FUN_104473790(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1044737a8; end: 1044737e7;  */

void FUN_1044737a8(void)

{
  undefined *puVar1;
  
  if (puRam000000011307cc90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd05120;
  _swift_getWitnessTable(&UNK_10dd05120,&UNK_110775728);
  puRam000000011307cc90 = puVar1;
  return;
}



/* Entry: 1044737e8; end: 104473893;  */

void FUN_1044737e8(void)

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



/* Entry: 104473894; end: 1044738cb;  */

void FUN_104473894(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 2) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 1 < uVar2;
  return;
}



/* Entry: 1044738cc; end: 1044739db;  */

int FUN_1044738cc(int *param_1,uint param_2)

{
  uint uVar1;
  ushort uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x3ffd < param_2) && (*(char *)((long)param_1 + 0x12) != '\0')) {
    return *param_1 + 0x3ffe;
  }
  uVar2 = *(ushort *)(param_1 + 4);
  uVar1 = (uVar2 & 0x3e00 | (uint)(uVar2 >> 0xe) | (uVar2 >> 1 & 0x7f) << 2) ^ 0x3fff;
  if (0x3ffc < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1044739dc; end: 104473a9f; +[_TtC26SCFrameRateMonitorServices26SCFrameRateMonitorServices setSharedInstance:] */

void FUN_1044739dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(0x113813758,auStack_48,1,0);
  uVar1 = uRam0000000113813758;
  uRam0000000113813758 = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  return;
}



/* Entry: 104473aa0; end: 104473b17; -[_TtC26SCFrameRateMonitorServices26SCFrameRateMonitorServices initWithFrameRateMonitor:badFrameRateStatsTracker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104473aa0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  *(undefined8 *)(param_1 + _DAT_11307cc98) = param_3;
  *(undefined8 *)(param_1 + _DAT_11307cca0) = param_4;
  lVar2 = param_1;
  func_0x0001000a0ea8();
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _swift_unknownObjectRetain(param_3);
  _swift_unknownObjectRetain(param_4);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 104473b18; end: 104473b73; -[_TtC26SCFrameRateMonitorServices26SCFrameRateMonitorServices init] */

void FUN_104473b18(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCFrameRateMonitorServices.SCFrameRateMonitorServices",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104473b44);
  (*pcVar1)();
}



/* Entry: 104473b74; end: 104473c57; -[_TtC26SCFrameRateMonitorServices26SCFrameRateMonitorServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104473b74(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11307cc98));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_11307cca0));
  return;
}



/* Entry: 104473c58; end: 104473c8f;  */

void FUN_104473c58(undefined1 *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (2 < uVar1) {
    uVar1 = 3;
  }
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 104473c90; end: 104473cb3; -[SCFrameInfo description] */

void FUN_104473c90(void)

{
  _objc_retain();
  func_0x000100c7c5a8();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104473cb4; end: 104473cfb; -[SCFrameInfo init] */

void FUN_104473cb4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCFrameRateMonitorServices/FrameInfoWrapper.swift",0x31,2,0x4d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104473cfc);
  (*pcVar1)();
}



/* Entry: 104473cfc; end: 104473cff; -[SCFrameInfo copyWithZone:] */

void FUN_104473cfc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104473d00; end: 104473d1f; +[SCFrameInfo didDisplayNewFrameWithState:timestamp:wasFrameLate:hasUIStabilized:] */

void FUN_104473d00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_104473db8(param_3,param_4,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104473d20; end: 104473d83; -[SCFrameInfo matchDidDisplayFirstFrame:didDisplayNewFrame:didChangeDisplayState:] */

void FUN_104473d20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  _objc_retain();
  func_0x000100c7bb9c(FUN_10447405c,auStack_40,0x104474074,auStack_60,0x104474094,auStack_80);
  _objc_release(param_1);
  return;
}



/* Entry: 104473d84; end: 104473db7;  */

void FUN_104473d84(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104473db8; end: 104473eb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104473db8(undefined8 param_1,long param_2,undefined1 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lStack_50;
  long lStack_48;
  
  lVar3 = param_2;
  func_0x0001000b5fdc();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_11307ccd0) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11307ccd8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11307cce0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined1 *)(lVar4 + _DAT_11307cce8) = 2;
  plVar2 = (long *)(lVar4 + _DAT_11307ccf0);
  *plVar2 = param_2;
  *(undefined1 *)(plVar2 + 1) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11307ccf8);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
  *(undefined1 *)(lVar4 + _DAT_11307cd00) = param_3;
  *(undefined1 *)(lVar4 + _DAT_11307cd08) = param_4;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11307cd10);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_50 = lVar4;
  lStack_48 = lVar3;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104473eb4; end: 10447401b;  */

int FUN_104473eb4(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_104473f30;
        goto LAB_104473f14;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_104473f14:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_104473f30:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10447401c; end: 10447405b;  */

void FUN_10447401c(void)

{
  undefined *puVar1;
  
  if (puRam000000011307cd40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd05244;
  _swift_getWitnessTable(&UNK_10dd05244,&UNK_1107758a0);
  puRam000000011307cd40 = puVar1;
  return;
}



/* Entry: 10447405c; end: 1044740b3;  */

void FUN_10447405c(undefined8 param_1,uint param_2)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000104474070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1,param_2 & 1)
  ;
  return;
}



/* Entry: 1044740b4; end: 1044740d7;  */

void FUN_1044740b4(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1);
  return;
}



/* Entry: 1044740d8; end: 10447410b;  */

void FUN_1044740d8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10447410c; end: 104474153; -[_TtC30AppStartupStateServiceProvider36AppStartupStateServiceImplementation .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10447410c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307cd58));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307cd60));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11307cd48));
  return;
}



/* Entry: 104474154; end: 104474283;  */

undefined * FUN_104474154(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104474284);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = (undefined *)0x11307cd90;
    func_0x0001000285a8(0x11307cd90,&UNK_10dd05358);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112d3a690;
    func_0x0001000285a8(0x112d3a690,&UNK_10d93eac0);
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 0x10 <= puVar1) {
      _memmove(puVar1,puVar4,uVar7 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Entry: 104474284; end: 104474297;  */

void FUN_104474284(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000104474290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 104474298; end: 104474303; -[_TtC30AppStartupStateServiceProvider46ProtectedDataAvailabilityServiceImplementation didLaunchWhenProtectedDataUnavailable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104474298(undefined8 param_1)

{
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined1 uStack_31;
  
  uStack_40 = param_1;
  _objc_retain();
  func_0x000100087bd4(&uStack_31,FUN_104474370,auStack_50,PTR___sSbN_11034dd40);
  _objc_release(param_1);
  return uStack_31;
}



/* Entry: 104474304; end: 10447431b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104474304(undefined1 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined1 *)(*(long *)(unaff_x20 + 0x10) + _DAT_11307cda8);
  return;
}



/* Entry: 10447431c; end: 10447434f;  */

void FUN_10447431c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104474350; end: 10447435f;  */

undefined1  [16] FUN_104474350(void)

{
  return ZEXT816(0x110775a40);
}



/* Entry: 104474360; end: 10447436f; -[_TtC30AppStartupStateServiceProvider46ProtectedDataAvailabilityServiceImplementation .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104474360(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11307cda0));
  return;
}



/* Entry: 104474370; end: 104474383;  */

void FUN_104474370(void)

{
  FUN_104474304();
  return;
}



/* Entry: 104474384; end: 10447447b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104474384(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  puVar3 = auStack_50;
  _objc_allocWithZone();
  func_0x00010c171b20(param_1);
  lVar2 = param_1;
  func_0x00010c18cd60();
  func_0x0001000c5b98();
  _swift_allocObject();
  *(undefined8 *)(lVar2 + 0x18) = 5;
  *(undefined8 *)(lVar2 + 0x10) = 2;
  *(long *)(lVar2 + 0x20) = param_1;
  *(undefined8 *)(lVar2 + 0x28) = param_2;
  *(long *)(unaff_x20 + _DAT_11307cde0) = lVar2;
  puVar1 = PTR_s_init_1125d9248;
  _swift_unknownObjectRetain(param_1);
  _objc_retain(param_2);
  _objc_msgSendSuper2(auStack_50,puVar1);
  _swift_unknownObjectRelease(param_1);
  _objc_release(param_2);
  _swift_unknownObjectRelease(param_3);
  _swift_unknownObjectRelease(param_4);
  return puVar3;
}



/* Entry: 10447447c; end: 104474563; -[_TtC34AppStartupViolationMonitorProvider26AppStartupViolationMonitor setStartupAborted] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10447447c(long param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar2 = *(ulong *)(param_1 + _DAT_11307cde0);
  if (uVar2 >> 0x3e == 0) {
    uVar3 = *(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = uVar2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar2) {
      uVar3 = uVar2;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (uVar3 != 0) {
    if ((long)uVar3 < 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104474564);
      (*pcVar1)();
    }
    _objc_retain(param_1);
    uVar4 = 0;
    do {
      if ((uVar2 & 0xc000000000000001) == 0) {
        uVar5 = *(ulong *)(uVar2 + uVar4 * 8 + 0x20);
        _swift_unknownObjectRetain(uVar5);
      }
      else {
        uVar5 = uVar4;
        FUN_1044745d4(uVar4,uVar2);
      }
      uVar4 = uVar4 + 1;
      func_0x00010c209dc0(uVar5);
      _swift_unknownObjectRelease(uVar5);
    } while (uVar3 != uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 104474564; end: 1044745c3; -[_TtC34AppStartupViolationMonitorProvider26AppStartupViolationMonitor init] */

void FUN_104474564(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("AppStartupViolationMonitorProvider.AppStartupViolationMonitor",0x3d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104474590);
  (*pcVar1)();
}



/* Entry: 1044745c4; end: 1044745d3; -[_TtC34AppStartupViolationMonitorProvider26AppStartupViolationMonitor .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044745c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11307cde0));
  return;
}



/* Entry: 1044745d4; end: 104474777;  */

ulong FUN_1044745d4(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1044746ac);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1044746b0);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    uVar3 = param_1;
    _swift_unknownObjectRetain();
    _swift_dynamicCastObjCProtocolConditional();
    if (uVar3 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar4 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    __ss18_CocoaArrayWrapperVyyXlSicig(param_1,uVar3);
    uVar3 = param_1;
    _swift_dynamicCastObjCProtocolConditional();
    if (uVar3 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  __sSS6appendyySSF(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  __sSS6appendyySSF(0xd00000000000001d,0x800000010f201100);
  __sSS6appendyySSF(0x756f662074756220,0xeb0000000020646e);
  _swift_getObjectType(param_1);
  uVar4 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar4);
  __ss17_assertionFailure__5flagss5NeverOs12StaticStringV_SSs6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x104474778);
  (*pcVar2)();
}



/* Entry: 104474778; end: 104474787;  */

undefined1  [16] FUN_104474778(void)

{
  return ZEXT816(0x110775b08);
}



/* Entry: 104474788; end: 1044747f7;  */

undefined1 * FUN_104474788(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_40 [8];
  
  puVar1 = auStack_40;
  _objc_allocWithZone();
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  _swift_unknownObjectRelease(param_1);
  _swift_release(param_3);
  func_0x0001000834e4(param_2);
  return puVar1;
}



/* Entry: 1044747f8; end: 1044747fb; -[_TtC34AppStartupViolationMonitorProvider33COFAppStartupViolationMonitorImpl checkCofMainThreadConfigReadAppStartupViolationWithConfigKey:valueType:allowListed:] */

void FUN_1044747f8(void)

{
  return;
}



/* Entry: 1044747fc; end: 1044747ff; -[_TtC34AppStartupViolationMonitorProvider33COFAppStartupViolationMonitorImpl checkCofBulkLoadAppStartupViolationWithNamespace:mainThread:allowListed:] */

void FUN_1044747fc(void)

{
  return;
}



/* Entry: 104474800; end: 104474803; -[_TtC34AppStartupViolationMonitorProvider33COFAppStartupViolationMonitorImpl checkCofBulkLoadAppStartupViolationWithNamespace:mainThread:allowListed:completion:] */

void FUN_104474800(void)

{
  return;
}



/* Entry: 104474804; end: 104474807; -[_TtC34AppStartupViolationMonitorProvider33COFAppStartupViolationMonitorImpl setStartupAborted] */

void FUN_104474804(void)

{
  return;
}



/* Entry: 104474808; end: 104474867; -[_TtC34AppStartupViolationMonitorProvider33COFAppStartupViolationMonitorImpl init] */

void FUN_104474808(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("AppStartupViolationMonitorProvider.COFAppStartupViolationMonitorImpl",0x44,"init()",6,
             0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104474834);
  (*pcVar1)();
}



/* Entry: 104474868; end: 10447489b;  */

undefined1  [16] FUN_104474868(void)

{
  return ZEXT816(0x110775b50);
}



/* Entry: 10447489c; end: 104474993;  */

void FUN_10447489c(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104474994; end: 1044749c7;  */

void FUN_104474994(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1044749c8; end: 1044749cb;  */

void FUN_1044749c8(void)

{
  undefined *puVar1;
  
  if (puRam000000011307ce58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd05530;
  _swift_getWitnessTable(&UNK_10dd05530,&UNK_110775d38);
  puRam000000011307ce58 = puVar1;
  return;
}



/* Entry: 1044749cc; end: 104474a0b;  */

void FUN_1044749cc(void)

{
  undefined *puVar1;
  
  if (puRam000000011307ce58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd05530;
  _swift_getWitnessTable(&UNK_10dd05530,&UNK_110775d38);
  puRam000000011307ce58 = puVar1;
  return;
}



/* Entry: 104474a0c; end: 104474b6f;  */

int FUN_104474a0c(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfc < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 3) {
      iVar2 = 4;
    }
    if (param_2 + 3 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_104474a88;
        goto LAB_104474a6c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_104474a6c:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_104474a88:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 104474b70; end: 104474ba3; +[SCStoriesMediaPrefetchDebuggingStoryInfo identifier] */

void FUN_104474b70(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4843544546455250,0xee0059524f54535f);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104474ba4; end: 104474bd3; +[SCStoriesMediaPrefetchDebuggingStoryInfo sectionType] */

void FUN_104474ba4(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f6e6f6974636573,0xec00000065707974);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104474bd4; end: 104474bff; +[SCStoriesMediaPrefetchDebuggingStoryInfo storyType] */

void FUN_104474bd4(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x79745f79726f7473,0xea00000000006570);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104474c00; end: 104474c0b;  */

undefined * FUN_104474c00(void)

{
  return &UNK_10dd055e0;
}



/* Entry: 104474c0c; end: 104474c3f; +[SCStoriesMediaPrefetchDebuggingStoryInfo prefetchType] */

void FUN_104474c0c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6863746566657270,0xed0000657079745f);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104474c40; end: 104474c93; +[SCStoriesMediaPrefetchDebuggingStoryInfo snaps] */

void FUN_104474c40(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6f745f7370616e73,0xee0068637465665f);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104474c94; end: 104474cab; -[SCStoriesMediaPrefetchDebuggingStoryInfo init] */

void FUN_104474c94(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  (*(code *)0x104474c74)();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104474cac; end: 104474cbb; -[SCStoriesMediaPrefetchDebuggingStoryInfo .cxx_destruct] */

void FUN_104474cac(void)

{
  return;
}



/* Entry: 104474cbc; end: 104474ce7; +[SCStoriesMediaPrefetchType foreground] */

void FUN_104474cbc(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x756f726765726f66,0xea0000000000646e);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104474ce8; end: 104474d33; +[SCStoriesMediaPrefetchType background] */

void FUN_104474ce8(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x756f72676b636162,0xea0000000000646e);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104474d34; end: 104474d4b; -[SCStoriesMediaPrefetchType init] */

void FUN_104474d34(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  (*(code *)0x104474d14)();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104474d4c; end: 104474d4f; -[SCStoriesMediaPrefetchType .cxx_destruct] */

void FUN_104474d4c(void)

{
  return;
}



/* Entry: 104474d50; end: 104474d7b; +[SCStoriesMediaLoadStateInfo identifier] */

void FUN_104474d50(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f2011b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104474d7c; end: 104474d9b; +[SCStoriesMediaLoadStateInfo snap] */

void FUN_104474d7c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x70616e73,0xe400000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104474d9c; end: 104474de7; +[SCStoriesMediaLoadStateInfo isLoaded] */

void FUN_104474d9c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6564616f6c5f7369,0xe900000000000064);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104474de8; end: 104474df3; -[SCStoriesMediaLoadStateInfo init] */

void FUN_104474de8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  (*(code *)0x104474dc8)();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104474df4; end: 104474e2f;  */

void FUN_104474df4(undefined8 param_1,undefined8 param_2,code *param_3)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  (*param_3)();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104474e30; end: 104474e3b;  */

void FUN_104474e30(void)

{
  (*(code *)0x104474dc8)();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104474e3c; end: 104474e6b;  */

void FUN_104474e3c(code *param_1)

{
  (*param_1)();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104474e6c; end: 104474e6f; -[SCStoriesMediaLoadStateInfo .cxx_destruct] */

void FUN_104474e6c(void)

{
  return;
}



/* Entry: 104474e70; end: 104474e73; +[SCStoriesMediaLoadStateInfo storyId] */

void FUN_104474e70(void)

{
  func_0x000107c5fadc(0x64695f79726f7473,0xe800000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104474e74; end: 104474e77; +[SCStoriesMediaPrefetchDebuggingStoryInfo storyId] */

void FUN_104474e74(void)

{
  func_0x000107c5fadc(0x64695f79726f7473,0xe800000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104474e78; end: 104474ec3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104474e78(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11307cf00) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104474ec4; end: 104474f1b; -[_TtC26SCStoriesDebuggingServices26SCStoriesDebuggingServices initWithDebugViewer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104474ec4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11307cf00) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 104474f1c; end: 104474f7b; -[_TtC26SCStoriesDebuggingServices26SCStoriesDebuggingServices init] */

void FUN_104474f1c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCStoriesDebuggingServices.SCStoriesDebuggingServices",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104474f48);
  (*pcVar1)();
}



/* Entry: 104474f7c; end: 104474fa3; -[_TtC26SCStoriesDebuggingServices26SCStoriesDebuggingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104474f7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11307cf00));
  return;
}



/* Entry: 104474fa4; end: 104474fe3;  */

void FUN_104474fa4(void)

{
  undefined *puVar1;
  
  if (puRam000000011307cf48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd056e0;
  _swift_getWitnessTable(&UNK_10dd056e0,&UNK_110775ee0);
  puRam000000011307cf48 = puVar1;
  return;
}



/* Entry: 104474fe4; end: 10447508f;  */

void FUN_104474fe4(void)

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



/* Entry: 104475090; end: 1044750df;  */

void FUN_104475090(ulong *param_1,ulong *param_2)

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



/* Entry: 1044750e0; end: 10447510b; -[_TtC21SCLensDataProviderAPI51SCCaaSCameraScopedLensCarouselDataProvidingServices init] */

void FUN_1044750e0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCLensDataProviderAPI.SCCaaSCameraScopedLensCarouselDataProvidingServices",0x49,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10447510c);
  (*pcVar1)();
}



/* Entry: 10447510c; end: 10447510f;  */

void FUN_10447510c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}


