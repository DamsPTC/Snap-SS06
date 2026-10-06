/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101435084; end: 101435097; -[_TtC22SCCrashLoggerThreadsV227SCEventDelayMonitorThreadV2 init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101435084(double param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [24];
  
  FUN_101434f44();
  uVar2 = *(undefined8 *)(param_2 + _DAT_112d9d500);
  func_0x000107c4b940(uVar2);
  if (*(char *)(param_2 + _DAT_112d9d520) == '\x01') {
    lVar3 = *(long *)(param_2 + _DAT_112d9d510);
    func_0x000107c61428(lVar3 + 0x10,auStack_78,0x21,0);
    iVar1 = 0;
    func_0x000107c60b28(0,lVar3 + 0x10);
    func_0x000107c614a8(auStack_78);
    if (iVar1 != 0) {
      if (param_1 - *(double *)(param_2 + _DAT_112d9d518) < *(double *)(param_2 + _DAT_112d9d530)) {
        uVar4 = 1;
        goto LAB_1014351f4;
      }
      func_0x000107c61428(lVar3 + 0x10,auStack_78,0x21,0);
      func_0x000107c60b2c(0,lVar3 + 0x10);
      func_0x000107c614a8(auStack_78);
      lVar3 = *(long *)(param_2 + _DAT_112d9d540);
      func_0x000107c61428(lVar3 + 0x10,auStack_78,0x21,0);
      iVar1 = 0;
      func_0x000107c60b2c(0,lVar3 + 0x10);
      func_0x000107c614a8(auStack_78);
      if (iVar1 != 0) {
        func_0x000107c60060(*(undefined8 *)(param_2 + _DAT_112d9d4f8));
      }
    }
  }
  uVar4 = 0;
LAB_1014351f4:
  func_0x000107c5d278(uVar2);
  return uVar4;
}



/* Entry: 101435098; end: 101435227;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101435098(double param_1)

{
  int iVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [24];
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112d9d500);
  func_0x000107c4b940(uVar2);
  if (*(char *)(unaff_x20 + _DAT_112d9d520) == '\x01') {
    lVar3 = *(long *)(unaff_x20 + _DAT_112d9d510);
    func_0x000107c61428(lVar3 + 0x10,auStack_58,0x21,0);
    iVar1 = 0;
    func_0x000107c60b28(0,lVar3 + 0x10);
    func_0x000107c614a8(auStack_58);
    if (iVar1 != 0) {
      if (param_1 - *(double *)(unaff_x20 + _DAT_112d9d518) <
          *(double *)(unaff_x20 + _DAT_112d9d530)) {
        uVar4 = 1;
        goto LAB_1014351f4;
      }
      func_0x000107c61428(lVar3 + 0x10,auStack_58,0x21,0);
      func_0x000107c60b2c(0,lVar3 + 0x10);
      func_0x000107c614a8(auStack_58);
      lVar3 = *(long *)(unaff_x20 + _DAT_112d9d540);
      func_0x000107c61428(lVar3 + 0x10,auStack_58,0x21,0);
      iVar1 = 0;
      func_0x000107c60b2c(0,lVar3 + 0x10);
      func_0x000107c614a8(auStack_58);
      if (iVar1 != 0) {
        func_0x000107c60060(*(undefined8 *)(unaff_x20 + _DAT_112d9d4f8));
      }
    }
  }
  uVar4 = 0;
LAB_1014351f4:
  func_0x000107c5d278(uVar2);
  return uVar4;
}



/* Entry: 101435228; end: 1014355cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101435228(double param_1,ulong param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  long lVar8;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  uStack_68 = 0;
  uStack_60 = 0xe000000000000000;
  func_0x000107c602fc(0x33);
  func_0x000107c5fb78(0xd000000000000029,0x800000010ef7f920);
  func_0x000107c5fddc(param_1,&uStack_68,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c5fb78(0x73646e6f63657320,0xe800000000000000);
  uVar2 = uStack_60;
  uVar6 = uStack_68;
  if (param_3 != 0) {
    uVar1 = param_2 & 0xffffffffffff;
    if ((param_3 & 0x2000000000000000) != 0) {
      uVar1 = param_3 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      uStack_68 = 0;
      uStack_60 = 0xe000000000000000;
      func_0x000107c602fc(0x28);
      func_0x000107c6142c(uStack_60);
      uStack_68 = 0xd000000000000026;
      uStack_60 = 0x800000010ef7f970;
      func_0x000107c5fb78(param_2,param_3);
      uVar7 = uStack_60;
      func_0x000107c5fb78(uStack_68,uStack_60);
      func_0x000107c6142c(uVar7);
    }
  }
  if ((param_4 & 1) == 0) {
    if ((param_1 < 10.0) || (*(char *)(unaff_x20 + _DAT_112d9d578) != '\x01')) goto LAB_1014355a8;
    lVar8 = *(long *)(unaff_x20 + _DAT_112d9d548);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar8 != 0) {
      uVar7 = 0x6873617243707061;
      func_0x000107c5fadc(0x6873617243707061,0xed0000524e416465);
      func_0x000107c52de0(lVar8);
      func_0x000107c61170(lVar8);
      func_0x000107c61170(uVar7);
    }
    uVar7 = 0xd000000000000013;
    func_0x000107c5fadc(0xd000000000000013,0x800000010ef7f950);
    puVar5 = PTR__OBJC_CLASS___NSException_1126af520;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSException_1126af520);
    func_0x000107c5fadc(uVar6,uVar2);
    func_0x000107c478fc(puVar5);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar6);
    func_0x000107c4f878(puVar5);
  }
  else {
    if (*(char *)(unaff_x20 + _DAT_112d9d538) == '\x01') {
      uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d9d500);
      func_0x000107c4b940(uVar7);
      lVar8 = *(long *)(unaff_x20 + _DAT_112d9d510);
      func_0x000107c61428(lVar8 + 0x10,&uStack_68,0x21,0);
      iVar3 = 0;
      func_0x000107c60b28(0,lVar8 + 0x10);
      func_0x000107c614a8(&uStack_68);
      if (iVar3 != 0) {
        lVar8 = *(long *)(unaff_x20 + _DAT_112d9d548);
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar8 != 0) {
          uVar4 = 0x6873617243707061;
          func_0x000107c5fadc(0x6873617243707061,0xed0000524e416465);
          func_0x000107c52de0(lVar8);
          func_0x000107c61170(uVar4);
          func_0x000107c61170(lVar8);
        }
      }
      func_0x000107c5d278(uVar7);
    }
    puVar5 = PTR_PTR_1126b3e90;
    func_0x000107c610f8(PTR_PTR_1126b3e90);
    func_0x000107c453e4();
    func_0x000107c53a40();
    lVar8 = *(long *)(unaff_x20 + _DAT_112d9d560);
    if (lVar8 != 0) {
      func_0x000107c5fadc(uVar6,uVar2);
      uVar7 = 0;
      func_0x0001044db3fc(0);
      func_0x0001044dac34();
      func_0x000107c5027c(lVar8);
      func_0x000107c61170(uVar7);
      func_0x000107c61170(uVar6);
    }
  }
  func_0x000107c61170(puVar5);
LAB_1014355a8:
  func_0x000107c6142c(uVar2);
  return;
}



/* Entry: 1014355cc; end: 10143564f; -[_TtC22SCCrashLoggerThreadsV227SCEventDelayMonitorThreadV2 pause] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014355cc(long param_1)

{
  int iVar1;
  long lVar2;
  undefined1 auStack_38 [24];
  
  lVar2 = *(long *)(param_1 + _DAT_112d9d540);
  func_0x000107c61428(lVar2 + 0x10,auStack_38,0x21,0);
  func_0x000107c61174();
  iVar1 = 0;
  func_0x000107c60b2c(0,lVar2 + 0x10);
  func_0x000107c614a8(auStack_38);
  if (iVar1 != 0) {
    func_0x000107c60060();
  }
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 101435650; end: 1014356d3; -[_TtC22SCCrashLoggerThreadsV227SCEventDelayMonitorThreadV2 resume] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101435650(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined1 auStack_38 [24];
  
  lVar2 = *(long *)(param_1 + _DAT_112d9d540);
  func_0x000107c61428(lVar2 + 0x10,auStack_38,0x21,0);
  func_0x000107c61174();
  uVar1 = 0;
  func_0x000107c60b30(0,lVar2 + 0x10);
  func_0x000107c614a8(auStack_38);
  if ((uVar1 & 1) == 0) {
    func_0x000107c60060();
  }
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1014356d4; end: 10143576b; -[_TtC22SCCrashLoggerThreadsV227SCEventDelayMonitorThreadV2 cancel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014356d4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_cancel_1125a9090;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_30,puVar1);
  lVar2 = *(long *)(param_1 + _DAT_112d9d540);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0x21,0);
  func_0x000107c60b2c(0,lVar2 + 0x10);
  func_0x000107c614a8(auStack_48);
  func_0x000107c60060();
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10143576c; end: 101435793; -[_TtC22SCCrashLoggerThreadsV227SCEventDelayMonitorThreadV2 updateANRThreshold] */

void FUN_10143576c(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x0001001b9f24();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101435794; end: 1014357bb; -[_TtC22SCCrashLoggerThreadsV227SCEventDelayMonitorThreadV2 didBecomeActive] */

void FUN_101435794(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100c78138();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1014357bc; end: 1014357e3; -[_TtC22SCCrashLoggerThreadsV227SCEventDelayMonitorThreadV2 didEnterBackground] */

void FUN_1014357bc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101434dcc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1014357e4; end: 101435817;  */

void FUN_1014357e4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101435818; end: 1014358c7; -[_TtC22SCCrashLoggerThreadsV227SCEventDelayMonitorThreadV2 .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010143584c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101435850) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101435818(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112d9d4e8);
  func_0x0001005789c0(*puVar1,puVar1[1],puVar1[2],puVar1[3]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d9d540));
  return;
}



/* Entry: 1014358c8; end: 1014358d3;  */

void FUN_1014358c8(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_101434dcc();
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1014358d4; end: 10143593f;  */

long FUN_1014358d4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101435940; end: 10143594f;  */

/* WARNING: Possible PIC construction at 0x0001005789ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001005789f0) */
/* WARNING: Removing unreachable block (ram,0x000107c6142c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0014) */

ulong FUN_101435940(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar1 = param_1[1];
  uVar3 = (uint)(uVar1 >> 0x3e);
  if (uVar3 == 1) {
    uVar2 = uVar1 & 0x3fffffffffffffff;
  }
  else {
    uVar2 = uVar1;
    if (uVar3 != 0) {
      return *param_1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2,uVar1,param_1[2],param_1[3]);
  return uVar2;
}



/* Entry: 101435950; end: 101435a03;  */

undefined8 * FUN_101435950(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar2 = param_2[2];
  uVar4 = param_2[3];
  func_0x000101435900(uVar1,uVar3,uVar2,uVar4);
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = uVar4;
  return param_1;
}



/* Entry: 101435a04; end: 101435a3f;  */

undefined8 * FUN_101435a04(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar3 = *param_1;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar4 = param_1[3];
  uVar5 = *param_2;
  uVar7 = param_2[3];
  uVar6 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  param_1[3] = uVar7;
  param_1[2] = uVar6;
  func_0x0001005789c0(uVar3,uVar1,uVar2,uVar4);
  return param_1;
}



/* Entry: 101435a40; end: 101435b5f;  */

int FUN_101435a40(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7d < param_2) && ((char)param_1[8] != '\0')) {
    return *param_1 + 0x7e;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x19 & 0x18 | (uint)*(undefined8 *)(param_1 + 2) & 7) << 2) ^
          0x7f;
  if (0x7c < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 101435b60; end: 101435b6f; -[_TtC24SCCrashMetricLoggingImpl19SCCrashMetricLogger grapheneRegistry] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101435b60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112d9d658));
  return;
}



/* Entry: 101435b70; end: 101435b7f; -[_TtC24SCCrashMetricLoggingImpl19SCCrashMetricLogger platformGrapheneRegistry] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101435b70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112d9d660));
  return;
}



/* Entry: 101435b80; end: 101435cbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101435b80(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long unaff_x20;
  undefined8 uVar8;
  
  func_0x000107c42a38();
  puVar2 = PTR___ss5Int32VN_11034ee20;
  puVar6 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30;
  func_0x000107c6057c(PTR___ss5Int32VN_11034ee20,
                      PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30);
  lVar3 = param_1;
  func_0x000107c41800();
  func_0x000107c61180();
  lVar4 = param_1;
  func_0x000107c42a38();
  if (-1 < (int)lVar4) {
    lVar4 = lVar3;
    func_0x000107c433e4();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar4 == 0) {
      func_0x000107c6142c(puVar6);
    }
    else {
      func_0x000107c318b0(param_1,lVar4);
      puVar5 = PTR___ss5Int32VN_11034ee20;
      puVar7 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30;
      func_0x000107c6057c(PTR___ss5Int32VN_11034ee20,
                          PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30);
      uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112d9d658);
      func_0x000107c5fadc();
      func_0x000107c6142c(puVar7);
      func_0x000107c5fadc(puVar2,puVar6);
      func_0x000107c6142c(puVar6);
      func_0x00010526a72c(uVar8,puVar5,puVar2,1);
      func_0x000107c61170(lVar4);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar2);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101435cc0);
  (*pcVar1)();
}



/* Entry: 101435cc0; end: 101435d0f; -[_TtC24SCCrashMetricLoggingImpl19SCCrashMetricLogger trackReportNonfatalV2WithErrorCode:] */

/* WARNING: Possible PIC construction at 0x000101435cf8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101435cfc) */

void FUN_101435cc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_101435b80(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 101435d10; end: 101435db3;  */

/* WARNING: Possible PIC construction at 0x000101435d90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101435d94) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101435d10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112d9d660);
  func_0x000107c5fadc(param_3,param_4);
  uVar2 = 0;
  if (param_6 != 0) {
    func_0x000107c5fadc(param_5,param_6);
    uVar2 = param_5;
  }
  func_0x000107c5fadc(param_1,param_2);
  func_0x000100213594(uVar1,param_3,uVar2,param_1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 101435db4; end: 101435e27;  */

/* WARNING: Possible PIC construction at 0x000101435e10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101435e14) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101435db4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112d9d660);
  func_0x000107c5fadc(param_3,param_4);
  func_0x000107c5fadc(param_1,param_2);
  func_0x0001002b3edc(uVar1,param_3,param_1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 101435e28; end: 101435ec7;  */

/* WARNING: Possible PIC construction at 0x000101435ea4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101435ea8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101435e28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112d9d660);
  func_0x000107c5fadc(param_3,param_4);
  func_0x000107c5fadc(param_5,param_6);
  func_0x000107c5fadc(param_1,param_2);
  func_0x00010526a46c(uVar1,param_3,param_5,param_1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 101435ec8; end: 101435ee7; -[_TtC24SCCrashMetricLoggingImpl19SCCrashMetricLogger trackSnapAirFailureWithStage:reason:reportType:] */

/* WARNING: Removing unreachable block (ram,0x00010526a6f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101435ec8(long param_1,undefined8 param_2,char *param_3,char *param_4,char *param_5)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  undefined8 uVar7;
  long *plVar8;
  char *unaff_x24;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  undefined8 auStack_138 [2];
  char cStack_121;
  undefined8 auStack_120 [2];
  char cStack_109;
  long lStack_108;
  undefined1 *puStack_100;
  undefined1 *puStack_f8;
  char *pcStack_f0;
  char *pcStack_e8;
  char *pcStack_e0;
  char *pcStack_d8;
  undefined1 *puStack_d0;
  undefined *puStack_c8;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lVar1 = *(long *)(param_1 + _DAT_112d9d660);
  pcVar3 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = param_4;
  pcVar5 = param_5;
  pcVar6 = param_3;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_3);
  if (lVar1 != 0) {
    plVar8 = *(long **)(lVar1 + 8);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = param_4;
      _objc_retainAutorelease(param_4);
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_a0,pcVar2);
    _objc_retain(param_5);
    if (param_5 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(param_5);
      pcVar2 = param_5;
      func_0x00010bdc3520(param_5);
    }
    _objc_release(param_5);
    func_0x00010002b838(auStack_88,pcVar2);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_70,pcVar2);
    acStack_c0[0] = '\0';
    acStack_c0[1] = '\0';
    acStack_c0[2] = '\0';
    acStack_c0[3] = '\0';
    acStack_c0[4] = '\0';
    acStack_c0[5] = '\0';
    acStack_c0[6] = '\0';
    acStack_c0[7] = '\0';
    acStack_c0[8] = '\0';
    acStack_c0[9] = '\0';
    acStack_c0[10] = '\0';
    acStack_c0[0xb] = '\0';
    acStack_c0[0xc] = '\0';
    acStack_c0[0xd] = '\0';
    acStack_c0[0xe] = '\0';
    acStack_c0[0xf] = '\0';
    acStack_c0[0x10] = '\0';
    acStack_c0[0x11] = '\0';
    acStack_c0[0x12] = '\0';
    acStack_c0[0x13] = '\0';
    acStack_c0[0x14] = '\0';
    acStack_c0[0x15] = '\0';
    acStack_c0[0x16] = '\0';
    acStack_c0[0x17] = '\0';
    func_0x00010007e1e8(acStack_c0,auStack_a0,&lStack_58,3);
    pcVar2 = "";
    pcVar6 = (char *)0x1;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110872680,acStack_c0,1);
    puStack_a8 = acStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar1 = 0;
    pcVar5 = pcVar3;
    do {
      if ((&cStack_59)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
      unaff_x24 = acStack_c0;
    } while (lVar1 != -0x48);
  }
  _objc_release(param_3);
  _objc_release(param_5);
  pcVar3 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  puStack_f8 = auStack_a0;
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != puStack_f8);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(param_4);
  pcVar4 = pcVar3;
  __Unwind_Resume();
  puStack_c8 = &SUB_10526a72c;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_100 = unaff_x24;
  pcStack_f0 = pcVar3;
  pcStack_e8 = param_3;
  pcStack_e0 = param_5;
  pcStack_d8 = param_4;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar2);
  _objc_retain(pcVar5);
  if (pcVar4 != (char *)0x0) {
    plVar8 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = pcVar2;
      _objc_retainAutorelease(pcVar2);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar2);
    func_0x00010002b838(auStack_138,pcVar3);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      _objc_retainAutorelease(pcVar5);
      pcVar3 = pcVar5;
      func_0x00010bdc3520(pcVar5);
    }
    _objc_release(pcVar5);
    func_0x00010002b838(auStack_120,pcVar3);
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    func_0x00010007e1e8(&uStack_158,auStack_138,&lStack_108,2);
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_1108727d0,&uStack_158,pcVar6);
    puStack_140 = &uStack_158;
    func_0x00010007e5dc(&puStack_140);
    lVar1 = 0;
    do {
      if ((&cStack_109)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_120 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(pcVar5);
  pcVar6 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_108) {
    ___stack_chk_fail();
    _objc_release(pcVar5);
    if (cStack_121 < '\0') {
      __ZdlPv(auStack_138[0]);
    }
    _objc_release(pcVar5);
    _objc_release(pcVar2);
    __Unwind_Resume();
    uVar7 = *(undefined8 *)(pcVar6 + 0x20);
    _objc_retain(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
    return;
  }
  return;
}



/* Entry: 101435ee8; end: 101435f27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101435ee8(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112d9d660);
  func_0x000107c5fadc();
  func_0x00010526a2f8(uVar1,param_1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101435f28; end: 101435f63; -[_TtC24SCCrashMetricLoggingImpl19SCCrashMetricLogger trackNonFatalStackTraceMissingWithCaptureOption:] */

/* WARNING: Removing unreachable block (ram,0x00010526a6f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101435f28(long param_1,undefined8 param_2,char *param_3,char *param_4,char *param_5)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  undefined8 uVar9;
  long *plVar10;
  char *unaff_x24;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined1 *puStack_180;
  undefined1 *puStack_178;
  char *pcStack_170;
  char *pcStack_168;
  char *pcStack_160;
  char *pcStack_158;
  undefined1 **ppuStack_150;
  undefined *puStack_148;
  char acStack_140 [24];
  undefined1 *puStack_128;
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined8 auStack_f0 [2];
  char cStack_d9;
  long lStack_d8;
  undefined1 *puStack_90;
  undefined *puStack_88;
  char acStack_80 [24];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar1 = *(long *)(param_1 + _DAT_112d9d660);
  pcVar6 = (char *)0x1;
  pcVar3 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = param_3;
  _objc_retain(param_3);
  if (lVar1 != 0) {
    plVar10 = *(long **)(lVar1 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar2);
    acStack_80[0] = '\0';
    acStack_80[1] = '\0';
    acStack_80[2] = '\0';
    acStack_80[3] = '\0';
    acStack_80[4] = '\0';
    acStack_80[5] = '\0';
    acStack_80[6] = '\0';
    acStack_80[7] = '\0';
    acStack_80[8] = '\0';
    acStack_80[9] = '\0';
    acStack_80[10] = '\0';
    acStack_80[0xb] = '\0';
    acStack_80[0xc] = '\0';
    acStack_80[0xd] = '\0';
    acStack_80[0xe] = '\0';
    acStack_80[0xf] = '\0';
    acStack_80[0x10] = '\0';
    acStack_80[0x11] = '\0';
    acStack_80[0x12] = '\0';
    acStack_80[0x13] = '\0';
    acStack_80[0x14] = '\0';
    acStack_80[0x15] = '\0';
    acStack_80[0x16] = '\0';
    acStack_80[0x17] = '\0';
    func_0x00010007e1e8(acStack_80,auStack_60,&lStack_48,1);
    pcVar2 = "";
    param_4 = (char *)0x1;
    (**(code **)(*plVar10 + 0x18))(plVar10);
    puStack_68 = acStack_80;
    func_0x00010007e5dc(&puStack_68);
    pcVar6 = pcVar3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      pcVar6 = pcVar3;
    }
  }
  pcVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  pcVar4 = acStack_140;
  puStack_88 = &SUB_10526a46c;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar2;
  pcVar7 = pcVar6;
  pcVar8 = param_4;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar2);
  _objc_retain(pcVar6);
  _objc_retain(param_4);
  if (pcVar3 != (char *)0x0) {
    plVar10 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = pcVar2;
      _objc_retainAutorelease(pcVar2);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar2);
    func_0x00010002b838(auStack_120,pcVar3);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      _objc_retainAutorelease(pcVar6);
      pcVar3 = pcVar6;
      func_0x00010bdc3520(pcVar6);
    }
    _objc_release(pcVar6);
    func_0x00010002b838(auStack_108,pcVar3);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar3 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_f0,pcVar3);
    acStack_140[0] = '\0';
    acStack_140[1] = '\0';
    acStack_140[2] = '\0';
    acStack_140[3] = '\0';
    acStack_140[4] = '\0';
    acStack_140[5] = '\0';
    acStack_140[6] = '\0';
    acStack_140[7] = '\0';
    acStack_140[8] = '\0';
    acStack_140[9] = '\0';
    acStack_140[10] = '\0';
    acStack_140[0xb] = '\0';
    acStack_140[0xc] = '\0';
    acStack_140[0xd] = '\0';
    acStack_140[0xe] = '\0';
    acStack_140[0xf] = '\0';
    acStack_140[0x10] = '\0';
    acStack_140[0x11] = '\0';
    acStack_140[0x12] = '\0';
    acStack_140[0x13] = '\0';
    acStack_140[0x14] = '\0';
    acStack_140[0x15] = '\0';
    acStack_140[0x16] = '\0';
    acStack_140[0x17] = '\0';
    func_0x00010007e1e8(acStack_140,auStack_120,&lStack_d8,3);
    pcVar5 = "";
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110872680,acStack_140,param_5);
    puStack_128 = acStack_140;
    func_0x00010007e5dc(&puStack_128);
    lVar1 = 0;
    pcVar7 = pcVar4;
    pcVar8 = param_5;
    do {
      if ((&cStack_d9)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_f0 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
      unaff_x24 = acStack_140;
    } while (lVar1 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(pcVar6);
  pcVar3 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_d8) {
    ___stack_chk_fail();
    _objc_release(param_4);
    puStack_178 = auStack_120;
    do {
      unaff_x24 = unaff_x24 + -0x18;
    } while (unaff_x24 != puStack_178);
    _objc_release(param_4);
    _objc_release(pcVar6);
    _objc_release(pcVar2);
    pcVar4 = pcVar3;
    __Unwind_Resume();
    puStack_148 = &SUB_10526a72c;
    lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_180 = unaff_x24;
    pcStack_170 = pcVar3;
    pcStack_168 = param_4;
    pcStack_160 = pcVar6;
    pcStack_158 = pcVar2;
    ppuStack_150 = &puStack_90;
    _objc_retain(pcVar5);
    _objc_retain(pcVar7);
    if (pcVar4 != (char *)0x0) {
      plVar10 = *(long **)(pcVar4 + 8);
      _objc_retain(pcVar5);
      if (pcVar5 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = pcVar5;
        _objc_retainAutorelease(pcVar5);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar5);
      func_0x00010002b838(auStack_1b8,pcVar2);
      _objc_retain(pcVar7);
      if (pcVar7 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(pcVar7);
        pcVar2 = pcVar7;
        func_0x00010bdc3520(pcVar7);
      }
      _objc_release(pcVar7);
      func_0x00010002b838(auStack_1a0,pcVar2);
      uStack_1d8 = 0;
      uStack_1d0 = 0;
      uStack_1c8 = 0;
      func_0x00010007e1e8(&uStack_1d8,auStack_1b8,&lStack_188,2);
      (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_1108727d0,&uStack_1d8,pcVar8);
      puStack_1c0 = &uStack_1d8;
      func_0x00010007e5dc(&puStack_1c0);
      lVar1 = 0;
      do {
        if ((&cStack_189)[lVar1] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar1));
        }
        lVar1 = lVar1 + -0x18;
      } while (lVar1 != -0x30);
    }
    _objc_release(pcVar7);
    pcVar2 = pcVar5;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_188) {
      ___stack_chk_fail();
      _objc_release(pcVar7);
      if (cStack_1a1 < '\0') {
        __ZdlPv(auStack_1b8[0]);
      }
      _objc_release(pcVar7);
      _objc_release(pcVar5);
      __Unwind_Resume();
      uVar9 = *(undefined8 *)(pcVar2 + 0x20);
      _objc_retain(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar9);
      return;
    }
    return;
  }
  return;
}



/* Entry: 101435f64; end: 101435fab; -[_TtC24SCCrashMetricLoggingImpl19SCCrashMetricLogger trackMetricKitDiagnosticsCollectionDelay] */

/* WARNING: Possible PIC construction at 0x000101436184: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101436188) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101435f64(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar4 = 0x696b63697274656d;
  func_0x000107c61174();
  lVar2 = param_1;
  func_0x000107c6106c();
  if (lVar2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1014361a4);
    (*pcVar1)();
  }
  func_0x000107c2ba80();
  lVar3 = lVar2;
  func_0x000107c2ba8c();
  if (!SBORROW8(lVar2,lVar3)) {
    uVar5 = *(undefined8 *)(param_1 + _DAT_112d9d660);
    func_0x000107c5fadc(0x696b63697274656d,0xe900000000000074);
    (*(code *)&UNK_10526a010)(uVar5,uVar4,(lVar2 - lVar3) / 1000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1014361a8);
  (*pcVar1)();
}



/* Entry: 101435fac; end: 101435fef; -[_TtC24SCCrashMetricLoggingImpl19SCCrashMetricLogger trackMetricKitDiagnosticsToAirReportDelay] */

/* WARNING: Possible PIC construction at 0x000101436184: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101436188) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101435fac(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar4 = 0x696b63697274656d;
  func_0x000107c61174();
  lVar2 = param_1;
  func_0x000107c6106c();
  if (lVar2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1014361a4);
    (*pcVar1)();
  }
  func_0x000107c2ba80();
  lVar3 = lVar2;
  func_0x000107c2ba8c();
  if (!SBORROW8(lVar2,lVar3)) {
    uVar5 = *(undefined8 *)(param_1 + _DAT_112d9d660);
    func_0x000107c5fadc(0x696b63697274656d,0xe900000000000074);
    (*(code *)&UNK_10526a184)(uVar5,uVar4,(lVar2 - lVar3) / 1000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1014361a8);
  (*pcVar1)();
}



/* Entry: 101435ff0; end: 10143602f; -[_TtC24SCCrashMetricLoggingImpl19SCCrashMetricLogger trackKSCrashCollectionDelay] */

/* WARNING: Possible PIC construction at 0x000101436184: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101436188) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101435ff0(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar4 = 0x6873617263736b;
  func_0x000107c61174();
  lVar2 = param_1;
  func_0x000107c6106c();
  if (lVar2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1014361a4);
    (*pcVar1)();
  }
  func_0x000107c2ba80();
  lVar3 = lVar2;
  func_0x000107c2ba8c();
  if (!SBORROW8(lVar2,lVar3)) {
    uVar5 = *(undefined8 *)(param_1 + _DAT_112d9d660);
    func_0x000107c5fadc(0x6873617263736b,0xe700000000000000);
    (*(code *)&UNK_10526a010)(uVar5,uVar4,(lVar2 - lVar3) / 1000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1014361a8);
  (*pcVar1)();
}



/* Entry: 101436030; end: 1014360d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101436030(long param_1,undefined8 param_2,code *param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar2 = param_1;
  func_0x000107c6106c();
  if (lVar2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1014360d0);
    (*pcVar1)();
  }
  func_0x000107c2ba80();
  lVar3 = lVar2;
  func_0x000107c2ba8c();
  if (!SBORROW8(lVar2,lVar3)) {
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112d9d660);
    func_0x000107c5fadc(param_1,param_2);
    (*param_3)(uVar4,param_1,(lVar2 - lVar3) / 1000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1014360d4);
  (*pcVar1)();
}



/* Entry: 1014360d4; end: 1014360f3; -[_TtC24SCCrashMetricLoggingImpl19SCCrashMetricLogger trackKSCrashToAirReportDelay] */

/* WARNING: Possible PIC construction at 0x000101436184: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101436188) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014360d4(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar4 = 0x6873617263736b;
  func_0x000107c61174();
  lVar2 = param_1;
  func_0x000107c6106c();
  if (lVar2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1014361a4);
    (*pcVar1)();
  }
  func_0x000107c2ba80();
  lVar3 = lVar2;
  func_0x000107c2ba8c();
  if (!SBORROW8(lVar2,lVar3)) {
    uVar5 = *(undefined8 *)(param_1 + _DAT_112d9d660);
    func_0x000107c5fadc(0x6873617263736b,0xe700000000000000);
    (*(code *)&UNK_10526a184)(uVar5,uVar4,(lVar2 - lVar3) / 1000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1014361a8);
  (*pcVar1)();
}



/* Entry: 1014360f4; end: 1014361a7;  */

/* WARNING: Possible PIC construction at 0x000101436184: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101436188) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014360f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  func_0x000107c61174();
  lVar2 = param_1;
  func_0x000107c6106c();
  if (lVar2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1014361a4);
    (*pcVar1)();
  }
  func_0x000107c2ba80();
  lVar3 = lVar2;
  func_0x000107c2ba8c();
  if (!SBORROW8(lVar2,lVar3)) {
    uVar4 = *(undefined8 *)(param_1 + _DAT_112d9d660);
    func_0x000107c5fadc(param_3,param_4);
    (*param_5)(uVar4,param_3,(lVar2 - lVar3) / 1000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1014361a8);
  (*pcVar1)();
}



/* Entry: 1014361a8; end: 1014361d7;  */

void FUN_1014361a8(void)

{
  func_0x000100093514();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1014361d8; end: 10143627f; -[_TtC24SCCrashMetricLoggingImpl19SCCrashMetricLogger .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001014361f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014361f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014361d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d9d658));
  return;
}



/* Entry: 101436280; end: 10143628f;  */

undefined1  [16] FUN_101436280(void)

{
  return ZEXT816(0x1103b8100);
}



/* Entry: 101436290; end: 10143629f; -[_TtC39ThirdPartyLoginUnauthDeepLinkEntryPoint38ThirdPartyLoginUnauthDeepLinkProcessor identifier] */

void FUN_101436290(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (&PTR____CFConstantStringClassReference_110f83e98);
  return;
}



/* Entry: 1014362a0; end: 1014362a7; -[_TtC39ThirdPartyLoginUnauthDeepLinkEntryPoint38ThirdPartyLoginUnauthDeepLinkProcessor priority] */

undefined8 FUN_1014362a0(void)

{
  return 1000;
}



/* Entry: 1014362a8; end: 10143632f; -[_TtC39ThirdPartyLoginUnauthDeepLinkEntryPoint38ThirdPartyLoginUnauthDeepLinkProcessor canProvideProcessorForFeature:] */

uint FUN_1014362a8(undefined8 param_1,long param_2,undefined **param_3)

{
  uint uVar1;
  undefined **ppuVar2;
  long lVar3;
  
  func_0x000107c5faec();
  ppuVar2 = &PTR____CFConstantStringClassReference_110f83e98;
  lVar3 = param_2;
  func_0x000107c5faec();
  if (param_3 == ppuVar2 && param_2 == lVar3) {
    uVar1 = 1;
  }
  else {
    func_0x000107c605b8(param_3,param_2,ppuVar2,lVar3,0);
    uVar1 = (uint)param_3;
  }
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(lVar3);
  return uVar1 & 1;
}



/* Entry: 101436330; end: 10143638b; -[_TtC39ThirdPartyLoginUnauthDeepLinkEntryPoint38ThirdPartyLoginUnauthDeepLinkProcessor isValidDeepLink:] */

uint FUN_101436330(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_101436464(param_3);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 10143638c; end: 10143638f; -[_TtC39ThirdPartyLoginUnauthDeepLinkEntryPoint38ThirdPartyLoginUnauthDeepLinkProcessor makeDeepLinkProcessor] */

void FUN_10143638c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 101436390; end: 1014363cb; -[_TtC39ThirdPartyLoginUnauthDeepLinkEntryPoint38ThirdPartyLoginUnauthDeepLinkProcessor init] */

void FUN_101436390(undefined8 param_1)

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



/* Entry: 1014363cc; end: 10143641f;  */

void FUN_1014363cc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101436420; end: 101436457; -[_TtC39ThirdPartyLoginUnauthDeepLinkEntryPoint38ThirdPartyLoginUnauthDeepLinkProcessor processDeepLinkURL:additionalInfo:delegate:] */

void FUN_101436420(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126a6be8;
  func_0x000107c610f8(PTR_PTR_1126a6be8);
  func_0x000107c453e4();
  func_0x000106a5a148();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 101436458; end: 10143645f; -[_TtC39ThirdPartyLoginUnauthDeepLinkEntryPoint38ThirdPartyLoginUnauthDeepLinkProcessor shouldForceNavigation] */

undefined8 FUN_101436458(void)

{
  return 1;
}



/* Entry: 101436460; end: 101436463; -[_TtC39ThirdPartyLoginUnauthDeepLinkEntryPoint38ThirdPartyLoginUnauthDeepLinkProcessor processDeepLinkResolutionResult:additionalInfo:delegate:] */

void FUN_101436460(void)

{
  return;
}



/* Entry: 101436464; end: 10143652b;  */

uint FUN_101436464(undefined **param_1,long param_2)

{
  uint uVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long lVar4;
  
  func_0x000107c42e38();
  func_0x000107c61180();
  if (param_1 == (undefined **)0x0) {
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f83e98);
    lVar4 = param_2;
  }
  else {
    ppuVar2 = param_1;
    func_0x000107c5faec();
    lVar4 = param_2;
    func_0x000107c61170(param_1);
    ppuVar3 = &PTR____CFConstantStringClassReference_110f83e98;
    func_0x000107c5faec();
    if (param_2 != 0) {
      if (ppuVar2 == ppuVar3 && param_2 == lVar4) {
        func_0x000107c6142c(param_2);
        uVar1 = 1;
      }
      else {
        func_0x000107c605b8(ppuVar2,param_2,ppuVar3,lVar4,0);
        uVar1 = (uint)ppuVar2;
        func_0x000107c6142c(param_2);
      }
      goto LAB_101436510;
    }
  }
  uVar1 = 0;
LAB_101436510:
  func_0x000107c6142c(lVar4);
  return uVar1 & 1;
}



/* Entry: 10143652c; end: 1014365bf;  */

void FUN_10143652c(undefined8 *param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170();
  func_0x0001000965cc();
  func_0x000107c613fc();
  *param_1 = uStack_58;
  return;
}



/* Entry: 1014365c0; end: 101436617;  */

undefined8 FUN_1014365c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c61170(param_3);
  func_0x000107c613fc();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  return unaff_x20;
}



/* Entry: 101436618; end: 101436637;  */

void FUN_101436618(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101436638; end: 101436697;  */

void FUN_101436638(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  puVar1 = PTR_PTR_1126a6df0;
  func_0x000107c610f8();
  func_0x000107c46ef8();
  func_0x000107c61170(uStack_38);
  *param_1 = puVar1;
  return;
}



/* Entry: 101436698; end: 10143670f;  */

void FUN_101436698(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  puVar1 = PTR_PTR_1126a6df0;
  func_0x000107c610f8();
  func_0x000107c46ef8();
  func_0x000107c61170(uStack_38);
  *param_1 = puVar1;
  return;
}



/* Entry: 101436710; end: 101436787;  */

void FUN_101436710(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100615644();
  func_0x000107c61574(uStack_38);
  puVar2 = PTR_PTR_1126b8280;
  func_0x000107c610f8();
  func_0x000107c46280();
  func_0x000107c61170(param_2);
  if (puVar2 != (undefined *)0x0) {
    *param_1 = puVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101436788);
  (*pcVar1)();
}



/* Entry: 101436788; end: 10143678f;  */

void FUN_101436788(undefined8 *param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100615644();
  func_0x000107c61574(uStack_38);
  puVar2 = PTR_PTR_1126b8280;
  func_0x000107c610f8();
  func_0x000107c46280();
  func_0x000107c61170(unaff_x20);
  if (puVar2 != (undefined *)0x0) {
    *param_1 = puVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101436788);
  (*pcVar1)();
}



/* Entry: 101436790; end: 10143680b;  */

void FUN_101436790(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uStack_38;
  
  func_0x0001000ad7c4();
  func_0x000100083b20(&uStack_38);
  puVar1 = PTR_PTR_1126a6df8;
  func_0x000107c610f8();
  func_0x000107c46ab8();
  func_0x000107c61170(param_2);
  func_0x000107c61170(uStack_38);
  *param_1 = puVar1;
  return;
}



/* Entry: 10143680c; end: 101436853;  */

void FUN_10143680c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x0001000ad7c4(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100083b20(&uStack_38);
  puVar2 = PTR_PTR_1126a6df8;
  func_0x000107c610f8();
  func_0x000107c46ab8();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uStack_38);
  *param_1 = puVar2;
  return;
}



/* Entry: 101436854; end: 10143687f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101436854(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [16];
  
  func_0x000107c614f0();
  func_0x000107c610f8();
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112d9d868) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101436880; end: 1014368d7; -[SCAppBackgroundNetworkStats initWithRequestStatsSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101436880(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112d9d868) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c615f0(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 1014368d8; end: 1014368e7; -[SCAppBackgroundNetworkStats httpRTT] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014368d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe4cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112d9d868),PTR_s_httpRTT_1125d6cf8);
  return;
}



/* Entry: 1014368e8; end: 1014368fb; -[SCAppBackgroundNetworkStats takeNetworkRequestCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014368e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d7e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112d9d868),PTR_s_networkRequestCount__1126139a8,1);
  return;
}



/* Entry: 1014368fc; end: 10143690f; -[SCAppBackgroundNetworkStats takeNetworkRequestErrorCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014368fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d7e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112d9d868),PTR_s_networkRequestErrorCount__1126139b0,1);
  return;
}



/* Entry: 101436910; end: 10143696f; -[SCAppBackgroundNetworkStats init] */

void FUN_101436910(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SystemNetworkProvider.SCAppBackgroundNetworkStats",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10143693c);
  (*pcVar1)();
}



/* Entry: 101436970; end: 10143697f; -[SCAppBackgroundNetworkStats .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101436970(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112d9d868));
  return;
}



/* Entry: 101436980; end: 1014369d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101436980(undefined8 param_1,long param_2)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c610f8();
  lVar1 = param_2;
  func_0x000107c614f0();
  *(undefined8 *)(param_2 + _DAT_112d9d868) = param_1;
  lStack_30 = param_2;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1014369d4; end: 101436a1b;  */

void FUN_1014369d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101436a1c; end: 10143724f;  */

undefined1 *
FUN_101436a1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  code *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined1 *puVar17;
  undefined1 auStack_b8 [16];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  
  func_0x000107c610f8();
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar15 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_88 = (code *)&UNK_1006753c4;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_1006753bc;
  puStack_90 = &UNK_1103b85a0;
  ppuVar3 = &puStack_a8;
  uStack_80 = param_2;
  func_0x000107c60bc4(ppuVar3);
  uVar16 = uStack_80;
  func_0x000107c6157c(param_2);
  func_0x000107c61574(uVar16);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  puVar4 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  pcStack_88 = FUN_1014372a0;
  uStack_80 = param_13;
  puStack_a8 = puVar15;
  uStack_a0 = 0x42000000;
  puStack_98 = (undefined *)0x1014373cc;
  puStack_90 = &UNK_1103b85c8;
  ppuVar5 = &puStack_a8;
  func_0x000107c60bc4();
  uVar16 = uStack_80;
  func_0x000107c6157c(param_13);
  func_0x000107c61574(uVar16);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0();
  func_0x0001000ad7c4();
  puVar6 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  pcStack_88 = (code *)&UNK_10059f08c;
  puStack_a8 = puVar15;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_100289fb8;
  puStack_90 = &UNK_1103b85f0;
  ppuVar3 = &puStack_a8;
  uStack_80 = param_1;
  func_0x000107c60bc4(ppuVar3);
  uVar16 = uStack_80;
  func_0x000107c6157c(param_1);
  func_0x000107c61574(uVar16);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  puVar7 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  pcStack_88 = FUN_101437314;
  uStack_80 = param_9;
  puStack_a8 = puVar15;
  uStack_a0 = 0x42000000;
  puStack_98 = (undefined *)0x1014373d0;
  puStack_90 = &UNK_1103b8618;
  ppuVar3 = &puStack_a8;
  func_0x000107c60bc4(ppuVar3);
  uVar16 = uStack_80;
  func_0x000107c6157c(param_9);
  func_0x000107c61574(uVar16);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  puVar8 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  pcStack_88 = (code *)&UNK_10067517c;
  puStack_a8 = puVar15;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_100675174;
  puStack_90 = &UNK_1103b8640;
  ppuVar3 = &puStack_a8;
  uStack_80 = param_4;
  func_0x000107c60bc4(ppuVar3);
  uVar16 = uStack_80;
  func_0x000107c6157c(param_4);
  func_0x000107c61574(uVar16);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  puVar9 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  pcStack_88 = (code *)&UNK_100672258;
  puStack_a8 = puVar15;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_100672250;
  puStack_90 = &UNK_1103b8668;
  ppuVar3 = &puStack_a8;
  uStack_80 = param_8;
  func_0x000107c60bc4(ppuVar3);
  uVar16 = uStack_80;
  func_0x000107c6157c(param_8);
  func_0x000107c61574(uVar16);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  puVar10 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  pcStack_88 = (code *)&UNK_10010a5fc;
  puStack_a8 = puVar15;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_10010a5b8;
  puStack_90 = &UNK_1103b8690;
  ppuVar11 = &puStack_a8;
  uStack_80 = param_5;
  func_0x000107c60bc4();
  uVar16 = uStack_80;
  func_0x000107c6157c(param_5);
  func_0x000107c61574(uVar16);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0();
  func_0x0001000ad7c4();
  ppuVar3 = ppuVar11;
  func_0x0001000ad7c4();
  ppuVar12 = ppuVar3;
  func_0x0001000ad7c4();
  ppuVar13 = ppuVar12;
  func_0x0001000ad7c4();
  puVar14 = PTR_PTR_1126a6e00;
  func_0x000107c610f8();
  func_0x000107c45b08();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(ppuVar5);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(ppuVar11);
  func_0x000107c61170(ppuVar3);
  func_0x000107c61170(ppuVar12);
  func_0x000107c61170(ppuVar13);
  func_0x000100083b20(&puStack_a8);
  func_0x000107c61170(puStack_a8);
  func_0x000100083b20(&puStack_a8);
  func_0x000107c61170(puStack_a8);
  puVar15 = PTR_PTR_1126b7f68;
  func_0x000107c61168(PTR_PTR_1126b7f68);
  func_0x000107c5a9bc();
  func_0x000107c61180();
  func_0x000107c56a48();
  func_0x000107c61170(puVar15);
  func_0x000100083b20(&puStack_a8);
  puVar15 = puStack_a8;
  puVar2 = puStack_a8;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(puVar15);
  puVar15 = PTR_PTR_1126a6e08;
  func_0x000107c610f8(PTR_PTR_1126a6e08);
  func_0x000107c453e4();
  func_0x000107c53544();
  puVar4 = PTR_PTR_1126dfea8;
  func_0x000107c61168();
  puVar6 = puVar4;
  func_0x000107c5a9bc();
  func_0x000107c61180();
  if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10143724c);
    (*pcVar1)();
  }
  func_0x000107c5c334();
  func_0x000107c61170(puVar6);
  func_0x000107c5a9bc();
  func_0x000107c61180();
  if (puVar4 != (undefined *)0x0) {
    func_0x000107c5329c();
    func_0x000107c61170(puVar4);
    puVar6 = PTR_PTR_1126a6e10;
    func_0x000107c610f8(PTR_PTR_1126a6e10);
    func_0x000107c47a4c();
    func_0x000107c61168(PTR_PTR_1126dfd80);
    func_0x000107c53778();
    puVar7 = PTR_PTR_1126ae720;
    func_0x000107c61168(PTR_PTR_1126ae720);
    pcStack_88 = (code *)&UNK_1003e7b98;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_1003e7a18;
    puStack_90 = &UNK_1103b86b8;
    ppuVar3 = &puStack_a8;
    uStack_80 = param_5;
    func_0x000107c60bc4(ppuVar3);
    uVar16 = uStack_80;
    func_0x000107c6157c(param_5);
    func_0x000107c61574(uVar16);
    func_0x000107c3e4fc(puVar7);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar3);
    func_0x0001000cad14();
    uVar16 = 0x112d9d978;
    func_0x0001000285a8(0x112d9d978,&UNK_10dd00290);
    puVar4 = &UNK_10036b380;
    func_0x0001000cb480(&UNK_10036b380,0,uVar16);
    func_0x000107c61574(ppuVar3);
    func_0x0001000bf56c();
    func_0x000107c61574(puVar4);
    puVar8 = PTR_PTR_1126b6b50;
    func_0x000107c61168(PTR_PTR_1126b6b50);
    func_0x000100083b20(&puStack_a8);
    puVar4 = puStack_a8;
    func_0x000107c61174(puVar7);
    func_0x000107c56a74(puVar8);
    func_0x000107c61170(puVar4);
    func_0x000107c61168(PTR_PTR_1126bb598);
    func_0x000107c53780();
    func_0x000107c61170(puVar14);
    func_0x000107c615e8(puVar2);
    func_0x000107c61170(puVar15);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(ppuVar3);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar7);
    puVar17 = auStack_b8;
    func_0x000107c61154(puVar17,PTR_s_init_1125d9248);
    func_0x000107c61574(param_1);
    func_0x000107c61574(param_2);
    func_0x000107c61574(param_3);
    func_0x000107c61574(param_4);
    func_0x000107c61574(param_5);
    func_0x000107c61574(param_6);
    func_0x000107c61574(param_7);
    func_0x000107c61574(param_8);
    func_0x000107c61574(param_9);
    func_0x000107c61574(param_10);
    func_0x000107c61574(param_11);
    func_0x000107c61574(param_12);
    func_0x000107c61574(param_13);
    func_0x000107c61574(param_14);
    func_0x000107c61574(param_15);
    func_0x000107c61574(param_16);
    return puVar17;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101437250);
  (*pcVar1)();
}



/* Entry: 101437250; end: 10143729f;  */

undefined8 FUN_101437250(void)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  uVar1 = uStack_28;
  func_0x000107c40128(uStack_28);
  func_0x000107c61180();
  func_0x000107c615e8(uStack_28);
  return uVar1;
}



/* Entry: 1014372a0; end: 1014372a7;  */

undefined8 FUN_1014372a0(void)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  uVar1 = uStack_28;
  func_0x000107c40128(uStack_28);
  func_0x000107c61180();
  func_0x000107c615e8(uStack_28);
  return uVar1;
}



/* Entry: 1014372a8; end: 101437313;  */

undefined8 FUN_1014372a8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  uVar1 = uStack_28;
  func_0x000107c444a4(uStack_28);
  func_0x000107c61180();
  func_0x000107c61170(uStack_28);
  uVar2 = uVar1;
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 101437314; end: 10143731b;  */

undefined8 FUN_101437314(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  uVar1 = uStack_28;
  func_0x000107c444a4(uStack_28);
  func_0x000107c61180();
  func_0x000107c61170(uStack_28);
  uVar2 = uVar1;
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 10143731c; end: 10143737b; -[_TtC21SystemNetworkProvider25SystemNetworkServicesDeps init] */

void FUN_10143731c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SystemNetworkProvider.SystemNetworkServicesDeps",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101437348);
  (*pcVar1)();
}



/* Entry: 10143737c; end: 10143740b;  */

undefined1  [16] FUN_10143737c(void)

{
  return ZEXT816(0x1103b86f0);
}



/* Entry: 10143740c; end: 10143744b;  */

long FUN_10143740c(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  FUN_101437468(param_1,unaff_x20 + 0x10);
  return unaff_x20;
}



/* Entry: 10143744c; end: 101437467;  */

void FUN_10143744c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101437468(param_1,unaff_x20 + 0x10);
  return;
}



/* Entry: 101437468; end: 10143747f;  */

undefined8 * FUN_101437468(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 101437480; end: 1014377b3;  */

void FUN_101437480(undefined8 *param_1,undefined8 param_2,ulong param_3,code *param_4)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puVar5;
  
  puVar3 = param_1;
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar4 = *puVar3;
  uStack_98 = 0x614c3a7265626153;
  uStack_90 = 0xeb000000003a797a;
  func_0x000107c61174(uVar4);
  uVar6 = param_2;
  func_0x000107c6030c(param_1,param_2,param_3);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar6);
  uVar6 = uStack_90;
  uVar8 = uStack_98;
  func_0x0001000a9a18(uStack_98,uStack_90);
  func_0x000107c61170(uVar4);
  func_0x000107c6142c(uVar6);
  func_0x000107c61428(puVar3,&uStack_98,0,0);
  uVar4 = *puVar3;
  func_0x000107c61174();
  uVar6 = uVar4;
  func_0x000100086a0c();
  func_0x000107c61170(uVar4);
  puVar5 = (undefined8 *)PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x000107c61168();
  iVar2 = (int)puVar5;
  func_0x000107c4a02c();
  if ((int)puVar5 != 0) {
    uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
    lVar1 = *(long *)(unaff_x20 + 0x30);
    func_0x0001000a8868(unaff_x20 + 0x10,uVar4);
    puVar5 = param_1;
    (**(code **)(lVar1 + 8))(param_1,param_2,param_3 & 0xffffffff,uVar4,lVar1);
  }
  (*param_4)();
  func_0x000107c4a02c();
  if (((ulong)puVar5 & 1) == 0) {
    if (iVar2 != 0) {
      uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
      lVar1 = *(long *)(unaff_x20 + 0x30);
      func_0x0001000a8868(unaff_x20 + 0x10,uVar4);
      (**(code **)(lVar1 + 0x10))(param_1,param_2,param_3 & 0xffffffff,1,uVar4,lVar1);
    }
    func_0x000107c61428(puVar3,auStack_b0,0,0);
    uVar7 = *puVar3;
    func_0x000107c61174(uVar7);
    uVar4 = uVar7;
    func_0x000100086a0c();
    func_0x000107c61170(uVar7);
    func_0x000107c61428(puVar3,auStack_c8,0,0);
    uVar7 = *puVar3;
    func_0x000107c61174(uVar7);
    func_0x0001048d8524(uVar8);
    func_0x000107c61170(uVar7);
    func_0x000107c61428(puVar3,auStack_e0,0,0);
    uVar8 = *puVar3;
    func_0x000107c61174(uVar8);
    func_0x000107c602fc(0x15);
    func_0x000107c6142c(0xe000000000000000);
    func_0x000107c6030c(param_1,param_2,param_3 & 0xffffffff);
    func_0x000107c5fb78();
    func_0x000107c6142c(param_2);
    func_0x0001048d8428(uVar6,uVar4,0xd000000000000013,0x800000010ef7fa50);
    func_0x000107c61170(uVar8);
    func_0x000107c6142c(0x800000010ef7fa50);
  }
  else {
    if (iVar2 != 0) {
      uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
      lVar1 = *(long *)(unaff_x20 + 0x30);
      func_0x0001000a8868(unaff_x20 + 0x10,uVar6);
      (**(code **)(lVar1 + 0x10))(param_1,param_2,param_3 & 0xffffffff,0,uVar6,lVar1);
    }
    func_0x000107c61428(puVar3,auStack_b0,0,0);
    uVar6 = *puVar3;
    func_0x000107c61174(uVar6);
    func_0x0001000aa0a8(uVar8);
    func_0x000107c61170(uVar6);
  }
  return;
}



/* Entry: 1014377b4; end: 101437843;  */

void FUN_1014377b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xf0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1014385a8;
                    /* WARNING: Could not recover jumptable at 0x000101437840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_10143822c(param_1,param_2,param_3,param_4,param_5);
  return;
}



/* Entry: 101437844; end: 10143809b;  */

void FUN_101437844(undefined8 *param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  puVar2 = param_1;
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar3 = *puVar2;
  uStack_98 = 0;
  uStack_90 = 0xe000000000000000;
  func_0x000107c61174(uVar3);
  func_0x000107c602fc(0x16);
  func_0x000107c6142c(uStack_90);
  uStack_98 = 0xd000000000000014;
  uStack_90 = 0x800000010ef7fa70;
  uVar4 = param_2;
  func_0x000107c6030c(param_1,param_2,param_3);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  uVar4 = uStack_90;
  uVar7 = uStack_98;
  func_0x0001000a9a18(uStack_98,uStack_90);
  func_0x000107c61170(uVar3);
  func_0x000107c6142c(uVar4);
  func_0x000107c61428(puVar2,&uStack_98,0,0);
  uVar4 = *puVar2;
  func_0x000107c61174();
  uVar3 = uVar4;
  func_0x000100086a0c();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar1 = *(long *)(unaff_x20 + 0x30);
  func_0x0001000a8868(unaff_x20 + 0x10,uVar4);
  puVar5 = param_1;
  (**(code **)(lVar1 + 8))(param_1,param_2,param_3,uVar4,lVar1);
  (*param_4)();
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar1 = *(long *)(unaff_x20 + 0x30);
  func_0x0001000a8868(unaff_x20 + 0x10,uVar4);
  if (((ulong)puVar5 & 1) == 0) {
    (**(code **)(lVar1 + 0x10))(param_1,param_2,param_3,1,uVar4,lVar1);
    func_0x000107c61428(puVar2,auStack_b0,0,0);
    uVar6 = *puVar2;
    func_0x000107c61174(uVar6);
    uVar4 = uVar6;
    func_0x000100086a0c();
    func_0x000107c61170(uVar6);
    func_0x000107c61428(puVar2,auStack_c8,0,0);
    uVar6 = *puVar2;
    func_0x000107c61174(uVar6);
    func_0x0001048d8524(uVar7);
    func_0x000107c61170(uVar6);
    func_0x000107c61428(puVar2,auStack_e0,0,0);
    uVar7 = *puVar2;
    func_0x000107c61174(uVar7);
    func_0x000107c602fc(0x1e);
    func_0x000107c6142c(0xe000000000000000);
    func_0x000107c6030c(param_1,param_2,param_3);
    func_0x000107c5fb78();
    func_0x000107c6142c(param_2);
    func_0x0001048d8428(uVar3,uVar4,0xd00000000000001c,0x800000010ef7fa90);
    func_0x000107c61170(uVar7);
    func_0x000107c6142c(0x800000010ef7fa90);
  }
  else {
    (**(code **)(lVar1 + 0x10))(param_1,param_2,param_3,0,uVar4,lVar1);
    func_0x000107c61428(puVar2,auStack_b0,0,0);
    uVar4 = *puVar2;
    func_0x000107c61174(uVar4);
    func_0x0001000aa0a8(uVar7);
    func_0x000107c61170(uVar4);
  }
  return;
}



/* Entry: 10143809c; end: 1014380bf;  */

void FUN_10143809c(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1014380c0; end: 1014380df;  */

void FUN_1014380c0(void)

{
  FUN_101437480();
  return;
}



/* Entry: 1014380e0; end: 10143816f;  */

void FUN_1014380e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xf0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101438170;
                    /* WARNING: Could not recover jumptable at 0x00010143816c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_10143822c(param_1,param_2,param_3,param_4,param_5);
  return;
}



/* Entry: 101438170; end: 1014381ab;  */

void FUN_101438170(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001014381a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1014381ac; end: 1014381cb;  */

void FUN_1014381ac(void)

{
  FUN_101437844();
  return;
}



/* Entry: 1014381cc; end: 10143822b;  */

void FUN_1014381cc(void)

{
  func_0x000101437b3c();
  return;
}



/* Entry: 10143822c; end: 10143824b;  */

void FUN_10143822c(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xb0) = param_4;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_5;
  *(undefined1 *)(unaff_x22 + 0xe0) = param_3;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_1;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10143824c,0,0);
  return;
}



/* Entry: 10143824c; end: 10143839b;  */

void FUN_10143824c(undefined8 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long unaff_x22;
  undefined8 uVar7;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0xa8);
  piVar2 = *(int **)(unaff_x22 + 0xb0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar3 = *(undefined1 *)(unaff_x22 + 0xe0);
  func_0x0001000298f0();
  *(undefined8 **)(unaff_x22 + 0xc0) = param_1;
  func_0x000107c61428();
  uVar4 = *param_1;
  func_0x000107c61174(uVar4);
  func_0x000107c602fc(0x12);
  func_0x000107c6142c(0xe000000000000000);
  func_0x000107c6030c(uVar7,uVar5,uVar3);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar5);
  uVar5 = 0xd000000000000010;
  func_0x000100029b28(0xd000000000000010,0x800000010ef7fb10);
  *(undefined8 *)(unaff_x22 + 200) = uVar5;
  func_0x000107c6142c(0x800000010ef7fb10);
  func_0x000107c61170(uVar4);
  func_0x000107c61428(param_1,unaff_x22 + 0x28,0,0);
  uVar4 = *param_1;
  func_0x000107c61174();
  uVar5 = uVar4;
  func_0x000100086a0c();
  *(undefined8 *)(unaff_x22 + 0xd0) = uVar5;
  func_0x000107c61170(uVar4);
  iVar1 = *piVar2;
  plVar6 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xd8) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_10143839c;
                    /* WARNING: Could not recover jumptable at 0x000101438398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))();
  return;
}



/* Entry: 10143839c; end: 1014383eb;  */

void FUN_10143839c(undefined1 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined1 *)(lVar1 + 0xe1) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0xd8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1014383ec,0,0);
  return;
}



/* Entry: 1014383ec; end: 101438587;  */

void FUN_1014383ec(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 *puVar8;
  
  if (*(char *)(unaff_x22 + 0xe1) == '\x01') {
    puVar8 = *(undefined8 **)(unaff_x22 + 0xc0);
    uVar1 = *(undefined8 *)(unaff_x22 + 200);
    func_0x000107c61428(puVar8,unaff_x22 + 0x88,0,0);
    uVar4 = *puVar8;
    func_0x000107c61174(uVar4);
    func_0x000100069b5c(uVar1);
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x22 + 200);
    uVar2 = *(undefined8 *)(unaff_x22 + 0xd0);
    puVar8 = *(undefined8 **)(unaff_x22 + 0xc0);
    uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar7 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar3 = *(undefined1 *)(unaff_x22 + 0xe0);
    func_0x000107c61428(puVar8,unaff_x22 + 0x40,0,0);
    uVar5 = *puVar8;
    func_0x000107c61174(uVar5);
    uVar6 = uVar5;
    func_0x000100086a0c();
    func_0x000107c61170(uVar5);
    func_0x000107c61428(puVar8,unaff_x22 + 0x58,0,0);
    uVar5 = *puVar8;
    func_0x000107c61174(uVar5);
    func_0x0001048d8204(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61428(puVar8,unaff_x22 + 0x70,0,0);
    uVar4 = *puVar8;
    func_0x000107c61174(uVar4);
    func_0x000107c602fc(0x1c);
    func_0x000107c6142c(0xe000000000000000);
    func_0x000107c6030c(uVar1,uVar7,uVar3);
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar7);
    FUN_100c95b80(uVar2,uVar6,0xd00000000000001a,0x800000010ef7fb30);
    func_0x000107c6142c(0x800000010ef7fb30);
  }
  func_0x000107c61170(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000101438584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101438588; end: 1014385a7;  */

void FUN_101438588(void)

{
  func_0x000107c61168(&PTR_PTR_112d9da00);
  return;
}



/* Entry: 1014385a8; end: 1014385ab;  */

void FUN_1014385a8(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001014381a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1014385ac; end: 1014386bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1014385ac(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar1 = _DAT_112d9da60;
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_101438b9c();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  func_0x0001000c5d3c(param_1,unaff_x20 + _DAT_112d9da68);
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  func_0x0001000834e4(param_1);
  return puVar3;
}



/* Entry: 1014386bc; end: 101438a8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014386bc(undefined8 *param_1,ulong param_2,code *param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined1 uVar11;
  long unaff_x20;
  undefined8 *puVar12;
  char *pcVar13;
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 uStack_98;
  undefined8 uStack_90;
  char *pcVar6;
  
  puVar12 = *(undefined8 **)(unaff_x20 + _DAT_112d9da60);
  if (puVar12[2] == 0) {
    uVar11 = 2;
    pcVar13 = "Unknown";
    uVar7 = 7;
  }
  else {
    func_0x000107c61434(puVar12);
    func_0x000100029284();
    if ((param_2 & 1) == 0) {
      uVar11 = 2;
      pcVar13 = "Unknown";
      uVar7 = 7;
    }
    else {
      puVar10 = (undefined8 *)(puVar12[7] + (long)param_1 * 0x18);
      pcVar13 = (char *)*puVar10;
      uVar7 = puVar10[1];
      uVar11 = *(undefined1 *)(puVar10 + 2);
    }
    func_0x000107c6142c();
    param_1 = puVar12;
  }
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar4 = *param_1;
  uStack_98 = 0;
  uStack_90 = 0xe000000000000000;
  func_0x000107c61174(uVar4);
  func_0x000107c602fc(0x11);
  func_0x000107c6142c(uStack_90);
  uStack_98 = 0x624f3a7265626153;
  uStack_90 = 0xef3a797a614c636a;
  uVar5 = uVar7;
  func_0x000107c6030c(pcVar13,uVar7,uVar11);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar5);
  uVar5 = uStack_90;
  uVar9 = uStack_98;
  func_0x0001000a9a18(uStack_98,uStack_90);
  func_0x000107c61170(uVar4);
  func_0x000107c6142c(uVar5);
  func_0x000107c61428(param_1,&uStack_98,0,0);
  uVar4 = *param_1;
  func_0x000107c61174();
  uVar5 = uVar4;
  func_0x000100086a0c();
  func_0x000107c61170(uVar4);
  pcVar6 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x000107c61168();
  iVar3 = (int)pcVar6;
  func_0x000107c4a02c();
  if ((int)pcVar6 != 0) {
    lVar1 = unaff_x20 + _DAT_112d9da68;
    uVar4 = *(undefined8 *)(lVar1 + 0x18);
    lVar2 = *(long *)(lVar1 + 0x20);
    func_0x0001000a8868(lVar1,uVar4);
    pcVar6 = pcVar13;
    (**(code **)(lVar2 + 8))(pcVar13,uVar7,uVar11,uVar4,lVar2);
  }
  (*param_3)();
  func_0x000107c4a02c();
  if (((ulong)pcVar6 & 1) == 0) {
    if (iVar3 != 0) {
      lVar1 = unaff_x20 + _DAT_112d9da68;
      uVar4 = *(undefined8 *)(lVar1 + 0x18);
      lVar2 = *(long *)(lVar1 + 0x20);
      func_0x0001000a8868(lVar1,uVar4);
      (**(code **)(lVar2 + 0x10))(pcVar13,uVar7,uVar11,1,uVar4,lVar2);
    }
    func_0x000107c61428(param_1,auStack_b0,0,0);
    uVar8 = *param_1;
    func_0x000107c61174(uVar8);
    uVar4 = uVar8;
    func_0x000100086a0c();
    func_0x000107c61170(uVar8);
    func_0x000107c61428(param_1,auStack_c8,0,0);
    uVar8 = *param_1;
    func_0x000107c61174(uVar8);
    func_0x0001048d8524(uVar9);
    func_0x000107c61170(uVar8);
    func_0x000107c61428(param_1,auStack_e0,0,0);
    uVar9 = *param_1;
    func_0x000107c61174(uVar9);
    func_0x000107c602fc(0x19);
    func_0x000107c6142c(0xe000000000000000);
    func_0x000107c6030c(pcVar13,uVar7,uVar11);
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar7);
    func_0x0001048d8428(uVar5,uVar4,0xd000000000000017,0x800000010ef7fb60);
    func_0x000107c61170(uVar9);
    func_0x000107c6142c(0x800000010ef7fb60);
  }
  else {
    if (iVar3 != 0) {
      lVar1 = unaff_x20 + _DAT_112d9da68;
      uVar5 = *(undefined8 *)(lVar1 + 0x18);
      lVar2 = *(long *)(lVar1 + 0x20);
      func_0x0001000a8868(lVar1,uVar5);
      (**(code **)(lVar2 + 0x10))(pcVar13,uVar7,uVar11,0,uVar5,lVar2);
    }
    func_0x000107c61428(param_1,auStack_b0,0,0);
    uVar7 = *param_1;
    func_0x000107c61174(uVar7);
    func_0x0001000aa0a8(uVar9);
    func_0x000107c61170(uVar7);
  }
  return;
}



/* Entry: 101438a8c; end: 101438b03; -[_TtC30SaberInterceptorImplementation34SaberObjcInterceptorImplementation interceptObjcLazyWithProviderType:closure:] */

void FUN_101438a8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  
  func_0x000107c5faec(param_3);
  uStack_40 = param_4;
  func_0x000107c61174(param_1);
  FUN_1014386bc(param_3,param_2,0x101438cc8,auStack_50);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  return;
}



/* Entry: 101438b04; end: 101438b63; -[_TtC30SaberInterceptorImplementation34SaberObjcInterceptorImplementation init] */

void FUN_101438b04(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SaberInterceptorImplementation.SaberObjcInterceptorImplementation",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101438b30);
  (*pcVar1)();
}



/* Entry: 101438b64; end: 101438b9b; -[_TtC30SaberInterceptorImplementation34SaberObjcInterceptorImplementation .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101438b64(long param_1)

{
  func_0x0001000834e4(param_1 + _DAT_112d9da68);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112d9da60));
  return;
}



/* Entry: 101438b9c; end: 101438ca7;  */

undefined * FUN_101438b9c(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  code *pcVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  undefined1 *puVar13;
  
  puVar12 = *(undefined **)(param_1 + 0x10);
  puVar8 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar12 != (undefined *)0x0) {
    func_0x0001000285a8(0x112d9daa0,&UNK_10d93e7b0);
    puVar8 = puVar12;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar13 = (undefined1 *)(param_1 + 0x40);
    do {
      uVar2 = *(ulong *)(puVar13 + -0x20);
      uVar4 = *(ulong *)(puVar13 + -0x18);
      uVar3 = *(undefined8 *)(puVar13 + -0x10);
      uVar5 = *(undefined8 *)(puVar13 + -8);
      uVar6 = *puVar13;
      func_0x000107c61434(uVar4);
      uVar9 = uVar2;
      uVar10 = uVar4;
      func_0x000100029284();
      if ((uVar10 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x101438ca4);
        (*pcVar7)();
      }
      uVar10 = uVar9 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar8 + uVar10 + 0x40) = *(ulong *)(puVar8 + uVar10 + 0x40) | 1L << (uVar9 & 0x3f)
      ;
      puVar1 = (ulong *)(*(long *)(puVar8 + 0x30) + uVar9 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar4;
      puVar11 = (undefined8 *)(*(long *)(puVar8 + 0x38) + uVar9 * 0x18);
      *puVar11 = uVar3;
      puVar11[1] = uVar5;
      *(undefined1 *)(puVar11 + 2) = uVar6;
      if (SCARRY8(*(long *)(puVar8 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x101438ca8);
        (*pcVar7)();
      }
      *(long *)(puVar8 + 0x10) = *(long *)(puVar8 + 0x10) + 1;
      puVar12 = puVar12 + -1;
      puVar13 = puVar13 + 0x28;
    } while (puVar12 != (undefined *)0x0);
    func_0x000107c61574(puVar8);
  }
  return puVar8;
}



/* Entry: 101438ca8; end: 101438ce3;  */

void FUN_101438ca8(void)

{
  func_0x000107c61168(&PTR_PTR_1127d6188);
  return;
}



/* Entry: 101438ce4; end: 101438dd7;  */

undefined * FUN_101438ce4(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(0x112d9da98,&UNK_10d93e820);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar9 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar9[-2];
      uVar3 = puVar9[-1];
      uVar10 = *puVar9;
      func_0x000107c61434(uVar3);
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101438dd4);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar10;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101438dd8);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar9 = puVar9 + 3;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 101438dd8; end: 101438ddb;  */

void FUN_101438dd8(void)

{
  return;
}



/* Entry: 101438ddc; end: 101438e53;  */

void FUN_101438ddc(undefined8 param_1,long param_2,undefined8 param_3,code *param_4)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_101438e54(param_3);
    func_0x000107c61170(param_2);
  }
  (*param_4)();
  return;
}


