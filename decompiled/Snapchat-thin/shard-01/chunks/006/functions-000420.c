/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1012a6da8; end: 1012a6e8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a6da8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d6f2e0);
  *puVar1 = 0x7261646e656c6143;
  puVar1[1] = 0xe800000000000000;
  *(undefined8 *)(unaff_x20 + _DAT_112d6f2e8) = 0;
  lVar3 = _DAT_112d6f310;
  func_0x000107c61614(unaff_x20 + _DAT_112d6f310,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d6f318,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d6f308) = param_1;
  func_0x000107c61604(unaff_x20 + lVar3,param_2);
  *(undefined8 *)(unaff_x20 + _DAT_112d6f320) = param_3;
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&stack0xffffffffffffffb0,puVar2);
  return;
}



/* Entry: 1012a6e8c; end: 1012a730f;  */

/* WARNING: Possible PIC construction at 0x0001012a7020: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012a72e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012a7024) */
/* WARNING: Removing unreachable block (ram,0x0001012a72e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a6e8c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  long unaff_x20;
  undefined1 auStack_108 [80];
  undefined1 auStack_b8 [88];
  
  func_0x000107c61604(unaff_x20 + _DAT_112d6f318);
  uVar1 = unaff_x20 + _DAT_112d6f310;
  func_0x000107c61618();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(uVar1);
    if (uVar2 != 0) {
      uVar1 = uVar2;
      func_0x000107c61150(uVar2,PTR_s_respondsToSelector__11262c7e0,PTR_s_modalContainer__112611880)
      ;
      if ((uVar1 & 1) == 0) {
        lVar4 = 0x112d4b5e8;
        func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
        puVar9 = auStack_108;
        func_0x000107c61534();
        *(undefined8 *)(lVar4 + 0x18) = 2;
        *(undefined8 *)(lVar4 + 0x10) = 1;
        uVar8 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
        func_0x000107c5faec();
        *(undefined8 *)(lVar4 + 0x20) = uVar8;
        puVar7 = PTR___sSSN_11034da80;
        *(undefined **)(lVar4 + 0x48) = PTR___sSSN_11034da80;
        *(undefined1 **)(lVar4 + 0x28) = puVar9;
        *(undefined8 *)(lVar4 + 0x30) = 0xd00000000000001a;
        *(undefined8 *)(lVar4 + 0x38) = 0x800000010ef338f0;
        lVar5 = lVar4;
        func_0x000100214a84(lVar4);
        func_0x000107c61588(lVar4);
        FUN_100f15a0c((undefined8 *)(lVar4 + 0x20));
        puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
        uVar8 = 0xd000000000000019;
        func_0x000107c5fadc(0xd000000000000019,0x800000010d930e60);
        lVar4 = lVar5;
        func_0x000107c5f9dc(lVar5,puVar7,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
        func_0x000107c6142c(lVar5);
        func_0x000107c466bc(puVar6);
        func_0x000107c61170(uVar8);
        func_0x000107c61170(lVar4);
        func_0x000107c5ed2c(puVar6);
        func_0x000107c61170(puVar6);
        func_0x000107c42808(param_2);
      }
      else {
        uVar1 = uVar2;
        func_0x000107c4d040();
        func_0x000107c61180();
        func_0x000107c4bb48(param_2);
        func_0x0001000ab060(0);
        func_0x000100079360(0);
        uVar3 = 0;
        func_0x0001009479b0(0);
        func_0x0001048d1714();
        uVar8 = uVar3;
        func_0x000100947a24();
        func_0x000107c61170(uVar3);
        uVar3 = 0;
        func_0x0001000aad1c(0);
        func_0x0001000fb25c();
        puVar7 = &UNK_11039cb60;
        func_0x000107c613fc(&UNK_11039cb60,0x18,7);
        func_0x000107c61614(puVar7 + 0x10);
        puVar6 = &UNK_11039cb88;
        func_0x000107c613fc(&UNK_11039cb88,0x30,7);
        *(undefined **)(puVar6 + 0x10) = puVar7;
        *(undefined8 *)(puVar6 + 0x18) = param_1;
        *(ulong *)(puVar6 + 0x20) = uVar1;
        *(undefined8 *)(puVar6 + 0x28) = param_2;
        func_0x000107c6157c(puVar7);
        func_0x000107c615f0(param_1);
        func_0x000107c615f0(uVar1);
        func_0x000107c615f0(param_2);
        func_0x0001009107f0(uVar8,uVar3,0,0,FUN_1012a7330,puVar6);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar2);
      return;
    }
  }
  lVar4 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  puVar9 = auStack_b8;
  func_0x000107c61534();
  *(undefined8 *)(lVar4 + 0x18) = 2;
  *(undefined8 *)(lVar4 + 0x10) = 1;
  uVar8 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  func_0x000107c5faec();
  *(undefined8 *)(lVar4 + 0x20) = uVar8;
  puVar7 = PTR___sSSN_11034da80;
  *(undefined **)(lVar4 + 0x48) = PTR___sSSN_11034da80;
  *(undefined1 **)(lVar4 + 0x28) = puVar9;
  *(undefined8 *)(lVar4 + 0x30) = 0xd00000000000001f;
  *(undefined8 *)(lVar4 + 0x38) = 0x800000010ef338d0;
  lVar5 = lVar4;
  func_0x000100214a84(lVar4);
  func_0x000107c61588(lVar4);
  FUN_100f15a0c((undefined8 *)(lVar4 + 0x20));
  puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
  uVar8 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010d930e60);
  lVar4 = lVar5;
  func_0x000107c5f9dc(lVar5,puVar7,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar5);
  func_0x000107c466bc(puVar6);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(lVar4);
  puVar7 = puVar6;
  func_0x000107c5ed2c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c42808(param_2);
  func_0x000107c61170(puVar7);
  return;
}



/* Entry: 1012a7310; end: 1012a732f;  */

void FUN_1012a7310(void)

{
  func_0x000107c61168(&PTR_PTR_1127c2d98);
  return;
}



/* Entry: 1012a7330; end: 1012a7357;  */

void FUN_1012a7330(ulong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar4 + 0x10,auStack_58,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    if ((param_1 & 1) == 0) {
      FUN_1012a63c8(uVar2,uVar1,uVar3);
    }
    func_0x000107c61170(lVar4);
  }
  return;
}



/* Entry: 1012a7358; end: 1012a736f;  */

void FUN_1012a7358(void)

{
  FUN_1012a6d30();
  return;
}



/* Entry: 1012a7370; end: 1012a737f;  */

void FUN_1012a7370(long param_1,long param_2)

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



/* Entry: 1012a7380; end: 1012a738b; -[SCCalendarDeeplinkEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a7380(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6f350;
  func_0x000107c61428(param_1 + _DAT_112d6f350,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012a738c; end: 1012a7397; -[SCCalendarDeeplinkEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a738c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6f350;
  func_0x000107c61428(param_1 + _DAT_112d6f350,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012a7398; end: 1012a73a3; -[SCCalendarDeeplinkEntryPoint calendarServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a7398(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6f358;
  func_0x000107c61428(param_1 + _DAT_112d6f358,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012a73a4; end: 1012a73af; -[SCCalendarDeeplinkEntryPoint setCalendarServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a73a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6f358;
  func_0x000107c61428(param_1 + _DAT_112d6f358,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012a73b0; end: 1012a73bb; -[SCCalendarDeeplinkEntryPoint navigationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a73b0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6f360;
  func_0x000107c61428(param_1 + _DAT_112d6f360,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012a73bc; end: 1012a73c7; -[SCCalendarDeeplinkEntryPoint setNavigationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a73bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6f360;
  func_0x000107c61428(param_1 + _DAT_112d6f360,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012a73c8; end: 1012a73d3; -[SCCalendarDeeplinkEntryPoint taskManagementServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a73c8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6f368;
  func_0x000107c61428(param_1 + _DAT_112d6f368,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012a73d4; end: 1012a7417;  */

void FUN_1012a73d4(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1012a7418; end: 1012a7423; -[SCCalendarDeeplinkEntryPoint setTaskManagementServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a7418(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6f368;
  func_0x000107c61428(param_1 + _DAT_112d6f368,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012a7424; end: 1012a7477;  */

void FUN_1012a7424(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012a7478; end: 1012a7603;  */

/* WARNING: Possible PIC construction at 0x0001012a7554: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012a7570: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012a7580: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012a7590: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012a75dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012a75cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012a75e0) */
/* WARNING: Removing unreachable block (ram,0x0001012a7594) */
/* WARNING: Removing unreachable block (ram,0x0001012a7584) */
/* WARNING: Removing unreachable block (ram,0x0001012a7574) */
/* WARNING: Removing unreachable block (ram,0x0001012a7558) */
/* WARNING: Removing unreachable block (ram,0x0001012a75d0) */

void FUN_1012a7478(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = unaff_x20;
  func_0x000107c3ef90();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c4d52c();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c5c78c();
      func_0x000107c61180();
      if (unaff_x20 != 0) {
        func_0x000107c4e9e4(lVar1);
        func_0x000107c61180();
        func_0x000107c61174(lVar2);
        lVar1 = lVar2;
        func_0x00010451338c();
        FUN_1012a7310(0);
        func_0x000107c610f8();
        func_0x000107c61174(unaff_x20);
        FUN_1012a6da8(lVar2,lVar1,unaff_x20);
        lVar1 = lVar2;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1012a7604; end: 1012a762b; -[SCCalendarDeeplinkEntryPoint begin] */

void FUN_1012a7604(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1012a7478();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1012a762c; end: 1012a766f; -[SCCalendarDeeplinkEntryPoint end] */

void FUN_1012a762c(undefined8 param_1)

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



/* Entry: 1012a7670; end: 1012a78df;  */

void FUN_1012a7670(long param_1,long param_2,long param_3)

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
  }
  else {
    if ((param_2 != -0x2ffffffffffffff0) || (param_3 != -0x7ffffffef10cc690)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000010,0x800000010ef33970,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 == -0x2fffffffffffffee) && (param_3 == -0x7ffffffef10edf60)) ||
           (func_0x000107c605b8(0xd000000000000012,0x800000010ef120a0,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c569f0();
        }
        else {
          uVar2 = 0;
          if (((param_2 != -0x2fffffffffffffea) || (param_3 != -0x7ffffffef10edd20)) &&
             (func_0x000107c605b8(0xd000000000000016,0x800000010ef122e0,param_2,param_3,0),
             (uVar2 & 1) == 0)) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "CalendarDeeplink/SCCalendarDeeplinkEntryPoint.swift",0x33,2,0x31,0)
            ;
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1012a78e0);
            (*pcVar1)();
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c59c2c();
        }
        goto LAB_1012a76fc;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52f2c();
  }
LAB_1012a76fc:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1012a78e0; end: 1012a798b; -[SCCalendarDeeplinkEntryPoint setValue:forIvarName:] */

void FUN_1012a78e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1012a7670(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1012a798c; end: 1012a7a2b; -[SCCalendarDeeplinkEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a798c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d6f350,0);
  func_0x000107c61614(param_1 + _DAT_112d6f358,0);
  func_0x000107c61614(param_1 + _DAT_112d6f360,0);
  func_0x000107c61614(param_1 + _DAT_112d6f368,0);
  *(undefined1 *)(param_1 + _DAT_112d6f370) = 1;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1012a7a2c; end: 1012a7a5f;  */

void FUN_1012a7a2c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1012a7a60; end: 1012a7ab7; -[SCCalendarDeeplinkEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001012a7a7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012a7a9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012a7a80) */
/* WARNING: Removing unreachable block (ram,0x0001012a7aa0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a7a60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakDestroy_11034f580)(param_1 + _DAT_112d6f350);
  return;
}



/* Entry: 1012a7ab8; end: 1012a7ad7;  */

void FUN_1012a7ab8(void)

{
  func_0x000107c61168(&PTR_PTR_1127c2e80);
  return;
}



/* Entry: 1012a7ad8; end: 1012a7af7; -[SCProfileCalendarActionHandler presentingViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a7ad8(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112d6f3a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012a7af8; end: 1012a7b0b; -[SCProfileCalendarActionHandler setPresentingViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a7af8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112d6f3a0,param_3);
  return;
}



/* Entry: 1012a7b0c; end: 1012a7b2b; -[SCProfileCalendarActionHandler containerViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a7b0c(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112d6f3a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012a7b2c; end: 1012a7b3f; -[SCProfileCalendarActionHandler setContainerViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a7b2c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112d6f3a8,param_3);
  return;
}



/* Entry: 1012a7b40; end: 1012a7da3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a7b40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d6f3a0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d6f3a8,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d6f3c8) = 0;
  *(undefined **)(unaff_x20 + _DAT_112d6f3d0) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(unaff_x20 + _DAT_112d6f3d8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d6f3e0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d6f3e8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d6f3f0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d6f3f8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d6f400) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d6f408) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d6f410) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d6f418) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d6f420) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d6f428) = 0;
  func_0x000107c61614(unaff_x20 + _DAT_112d6f430,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d6f438,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d6f3b0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112d6f3b8) = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d6f3c0);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1012a7da4; end: 1012a7ffb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a7da4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar4 = unaff_x20 + _DAT_112d6f3a0;
  func_0x000107c61618();
  if (uVar4 == 0) {
    uVar4 = unaff_x20 + _DAT_112d6f3a8;
    func_0x000107c61618();
    if (uVar4 == 0) {
      FUN_1012ab1f0();
      if (uVar4 == 0) {
        return;
      }
      goto LAB_1012a7e84;
    }
  }
  func_0x000107c61174();
  func_0x000107c61174();
  uVar5 = uVar4;
  func_0x000107c4f078();
  func_0x000107c61180();
  uVar3 = uVar4;
  while (uVar5 != 0) {
    uVar6 = uVar5;
    func_0x000107c49aa0();
    if ((uVar6 & 1) != 0) {
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar4);
      uVar4 = uVar3;
      goto LAB_1012a7e84;
    }
    func_0x000107c61170(uVar3);
    uVar6 = uVar5;
    func_0x000107c4f078();
    func_0x000107c61180();
    uVar3 = uVar5;
    uVar5 = uVar6;
  }
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar4);
  uVar4 = uVar3;
LAB_1012a7e84:
  puVar7 = PTR_PTR_1126aead8;
  func_0x000107c610f8(PTR_PTR_1126aead8);
  func_0x000107c4807c();
  uVar11 = *(undefined8 *)(param_1 + _DAT_112d6f9a0);
  uVar10 = *(undefined8 *)(param_1 + _DAT_112d6f9a8);
  uVar9 = 1;
  if (*(char *)(param_1 + _DAT_112d6f9b0) == '\0') {
    uVar9 = 2;
  }
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112d6f3c0);
  uVar2 = ((undefined8 *)(unaff_x20 + _DAT_112d6f3c0))[1];
  func_0x000103b1157c(0);
  func_0x000107c610f8();
  func_0x000107c61174(uVar11);
  func_0x000107c61174(uVar10);
  func_0x000107c61174(puVar7);
  func_0x000100b64c10(uVar1,uVar2);
  func_0x000103b108f8(uVar11,uVar10,uVar9,puVar7,uVar1,uVar2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  lVar8 = *(long *)(*(long *)(unaff_x20 + _DAT_112d6f3b8) + _DAT_112febe30);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar8 != 0) {
    uVar9 = uVar11;
    func_0x000107c61174(uVar11);
    func_0x000107c4eeb0(lVar8);
    func_0x000107c615e8(lVar8);
    func_0x000107c61170(uVar9);
  }
  func_0x000107c61170(uVar11);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 1012a7ffc; end: 1012a8847;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a7ffc(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  byte bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined **ppuVar18;
  long unaff_x20;
  long lVar19;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  ppuVar15 = &puStack_a0;
  ppuVar18 = &puStack_a0;
  uVar5 = unaff_x20 + _DAT_112d6f3a0;
  func_0x000107c61618();
  if (uVar5 == 0) {
    uVar5 = unaff_x20 + _DAT_112d6f3a8;
    func_0x000107c61618();
    if (uVar5 != 0) goto LAB_1012a8050;
    FUN_1012ab1f0();
    if (uVar5 == 0) {
      return;
    }
  }
  else {
LAB_1012a8050:
    func_0x000107c61174();
    func_0x000107c61174();
    uVar6 = uVar5;
    func_0x000107c4f078();
    func_0x000107c61180();
    uVar4 = uVar5;
    while (uVar6 != 0) {
      uVar7 = uVar6;
      func_0x000107c49aa0();
      if ((uVar7 & 1) != 0) {
        func_0x000107c61170(uVar6);
        func_0x000107c61170(uVar5);
        func_0x000107c61170(uVar5);
        uVar5 = uVar4;
        goto LAB_1012a80e0;
      }
      func_0x000107c61170(uVar4);
      uVar7 = uVar6;
      func_0x000107c4f078();
      func_0x000107c61180();
      uVar4 = uVar6;
      uVar6 = uVar7;
    }
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar5);
    uVar5 = uVar4;
  }
LAB_1012a80e0:
  lVar8 = *(long *)(unaff_x20 + _DAT_112d6f3d8);
  if (lVar8 == 0) {
LAB_1012a8414:
    func_0x000107c61170(uVar5);
    return;
  }
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar8 == 0) goto LAB_1012a8414;
  lVar9 = lVar8;
  func_0x000107c509b4();
  func_0x000107c61180();
  func_0x000107c615e8(lVar8);
  if (lVar9 == 0) goto LAB_1012a8414;
  lVar8 = 0;
  FUN_1012c4e34();
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar10 = &UNK_11039ccc8;
  func_0x000107c613fc(&UNK_11039ccc8,0x18,7);
  func_0x000107c61614(puVar10 + 0x10);
  puVar1 = (undefined8 *)(lVar8 + _DAT_112d6fd28);
  uVar11 = *puVar1;
  uVar2 = puVar1[1];
  *puVar1 = FUN_1012ac3c8;
  puVar1[1] = puVar10;
  func_0x000107c6157c(puVar10);
  func_0x00010058d43c(uVar11,uVar2);
  func_0x000107c61574(puVar10);
  puVar10 = PTR_PTR_1126a68c0;
  func_0x000107c610f8(PTR_PTR_1126a68c0);
  func_0x000107c453e4();
  FUN_1012ac3d0(0,0x112d67d90,&PTR_PTR_1126b1440);
  uVar11 = *(undefined8 *)(param_1 + _DAT_112d6f9a0);
  func_0x000107c61174(uVar11);
  func_0x000102f48440();
  func_0x000107c53cb8(puVar10);
  func_0x000107c61170(uVar11);
  bVar3 = *(byte *)(param_1 + _DAT_112d6f9b0);
  if ((bVar3 & 1) == 0) {
    lVar12 = *(long *)(param_1 + _DAT_112d6f9a8);
    func_0x000107c5d984();
    func_0x000107c61180();
    if (lVar12 == 0) goto LAB_1012a822c;
  }
  else {
LAB_1012a822c:
    lVar12 = 0;
  }
  func_0x000107c54c3c(puVar10);
  func_0x000107c61170(lVar12);
  uVar11 = 0x454c49464f5250;
  if (bVar3 == 0) {
    uVar11 = 0x505f444e45495246;
  }
  uVar2 = 0xe700000000000000;
  if (bVar3 == 0) {
    uVar2 = 0xee00454c49464f52;
  }
  func_0x000107c5fadc(uVar11,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c5a170(puVar10);
  func_0x000107c61170(uVar11);
  puVar13 = PTR_PTR_1126a68c8;
  func_0x000107c610f8(PTR_PTR_1126a68c8);
  func_0x000107c453e4();
  puVar14 = &UNK_11039ccf0;
  func_0x000107c613fc(&UNK_11039ccf0,0x18,7);
  func_0x000107c61614(puVar14 + 0x10,uVar5);
  pcStack_80 = FUN_1012ac410;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)&UNK_1000f6b44;
  puStack_88 = &UNK_11039cd08;
  puStack_78 = puVar14;
  func_0x000107c60bc4(&puStack_a0);
  func_0x000107c61574(puStack_78);
  func_0x000107c57194(puVar13);
  func_0x000107c60bd0(ppuVar15);
  func_0x000107c61174();
  lVar12 = lVar8;
  FUN_1012a8fdc();
  func_0x000107c53e8c(puVar13);
  func_0x000107c615e8(lVar12);
  lVar12 = lVar8;
  FUN_1012a9128(lVar8);
  func_0x000107c52604(puVar13);
  func_0x000107c615e8(lVar12);
  lVar12 = lVar8;
  func_0x0001012a91e4(lVar8);
  func_0x000107c52188(puVar13);
  func_0x000107c615e8(lVar12);
  lVar12 = *(long *)(unaff_x20 + _DAT_112d6f400);
  if (lVar12 == 0) {
LAB_1012a8424:
    lVar12 = 0;
  }
  else {
    func_0x000107c4d814();
    func_0x000107c61180();
    lVar19 = lVar12;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar12);
    if (lVar19 == 0) goto LAB_1012a8424;
    lVar12 = lVar19;
    func_0x000107c4c1dc(lVar19);
    func_0x000107c61180();
    func_0x000107c615e8(lVar19);
  }
  func_0x000107c56b20(puVar13);
  func_0x000107c615e8(lVar12);
  puVar14 = PTR_PTR_1126b0c98;
  func_0x000107c610f8(PTR_PTR_1126b0c98);
  func_0x000107c47f1c();
  lVar12 = *(long *)(unaff_x20 + _DAT_112d6f3e0);
  if (lVar12 == 0) {
    lVar12 = 0;
  }
  else {
    func_0x000107c439dc();
    func_0x000107c61180();
    lVar19 = lVar12;
    (**(code **)(lVar12 + 0x10))();
    func_0x000107c61180();
    func_0x000107c60bd0(lVar12);
    lVar12 = lVar19;
    func_0x000107c5c734(lVar19);
    func_0x000107c61180();
    func_0x000107c61170(lVar19);
  }
  func_0x000107c61170(puVar14);
  func_0x000107c54c28(puVar13);
  func_0x000107c615e8(lVar12);
  lVar12 = *(long *)(unaff_x20 + _DAT_112d6f3e8);
  if (lVar12 == 0) {
    lVar19 = 0;
  }
  else {
    func_0x000107c4453c();
    func_0x000107c61180();
    lVar19 = lVar12;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar12);
  }
  puVar14 = PTR___NSConcreteStackBlock_11034bd00;
  func_0x000107c54f88(puVar13);
  func_0x000107c615e8(lVar19);
  lVar12 = *(long *)(unaff_x20 + _DAT_112d6f3f0);
  if (lVar12 == 0) {
    lVar19 = 0;
  }
  else {
    func_0x000107c51abc();
    func_0x000107c61180();
    lVar19 = lVar12;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar12);
  }
  func_0x000107c569b4(puVar13);
  func_0x000107c61170(lVar19);
  lVar12 = *(long *)(unaff_x20 + _DAT_112d6f408);
  if (lVar12 == 0) {
    lVar19 = 0;
  }
  else {
    func_0x000107c5da38();
    func_0x000107c61180();
    lVar19 = lVar12;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar12);
  }
  func_0x000107c5a3d0(puVar13);
  func_0x000107c615e8(lVar19);
  if (*(long *)(unaff_x20 + _DAT_112d6f410) != 0) {
    lVar12 = *(long *)(*(long *)(unaff_x20 + _DAT_112d6f410) + _DAT_113070f30);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar12 != 0) {
      lVar19 = lVar12;
      func_0x000107c515c4();
      func_0x000107c61180();
      func_0x000107c615e8(lVar12);
      goto LAB_1012a862c;
    }
  }
  lVar19 = 0;
LAB_1012a862c:
  func_0x000107c58b50(puVar13);
  func_0x000107c615e8(lVar19);
  lVar12 = *(long *)(unaff_x20 + _DAT_112d6f418);
  if (lVar12 == 0) {
    lVar19 = 0;
  }
  else {
    func_0x000107c5d8c8();
    func_0x000107c61180();
    lVar19 = lVar12;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar12);
    if (lVar19 != 0) {
      lVar12 = lVar19;
      func_0x000107c40c04(lVar19);
      func_0x000107c61180();
      func_0x000107c615e8(lVar19);
      lVar19 = lVar12;
      func_0x000107c5c734(lVar12);
      func_0x000107c61180();
      func_0x000107c61170(lVar12);
    }
  }
  func_0x000107c5a2d8(puVar13);
  func_0x000107c615e8(lVar19);
  puVar16 = &UNK_11039ccc8;
  func_0x000107c613fc(&UNK_11039ccc8,0x18,7);
  func_0x000107c61614(puVar16 + 0x10);
  puVar17 = &UNK_11039cd40;
  func_0x000107c613fc(&UNK_11039cd40,0x20,7);
  *(undefined **)(puVar17 + 0x10) = puVar16;
  *(long *)(puVar17 + 0x18) = param_1;
  pcStack_80 = (code *)0x1012ac434;
  puStack_a0 = puVar14;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_100ec2630;
  puStack_88 = &UNK_11039cd58;
  puStack_78 = puVar17;
  func_0x000107c60bc4(&puStack_a0);
  puVar14 = puStack_78;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar14);
  func_0x000107c56dd0(puVar13);
  func_0x000107c60bd0(ppuVar18);
  puVar14 = PTR_PTR_1126a68d0;
  func_0x000107c610f8();
  func_0x000107c49520();
  uVar11 = *(undefined8 *)(lVar8 + _DAT_112d6fd08);
  *(undefined **)(lVar8 + _DAT_112d6fd08) = puVar14;
  func_0x000107c61174();
  func_0x000107c61170(uVar11);
  func_0x000107c61604(unaff_x20 + _DAT_112d6f430,lVar8);
  func_0x000107c61170(lVar8);
  func_0x000107c61604(unaff_x20 + _DAT_112d6f438,puVar14);
  func_0x000107c4f018(uVar5);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(puVar14);
  func_0x000107c615e8(lVar9);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uVar5);
  return;
}



/* Entry: 1012a8848; end: 1012a890b; -[SCProfileCalendarActionHandler handleActionWithSender:actionModel:fromSourceView:] */

uint FUN_1012a8848(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  uint uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    func_0x000107c61174(param_4);
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_4);
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_50);
    func_0x000107c615e8(param_3);
  }
  FUN_1012ab2b0(&uStack_50,param_4);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_50);
  return uVar1 & 1;
}



/* Entry: 1012a890c; end: 1012a899b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a890c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_112d6f3a0;
    func_0x000107c61618();
    func_0x000107c61170(param_1);
    if (lVar1 != 0) {
      func_0x000107c5ce94(lVar1);
      func_0x000107c61180();
      func_0x000107c61170(lVar1);
    }
  }
  return;
}



/* Entry: 1012a899c; end: 1012a8c07;  */

ulong FUN_1012a899c(void)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  
  puVar10 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c61168();
  func_0x000107c5a9c4();
  func_0x000107c61180();
  puVar3 = puVar10;
  func_0x000107c40210();
  func_0x000107c61180();
  func_0x000107c61170(puVar10);
  uVar4 = 0;
  FUN_1012ac3d0(0,0x112d36e40,&PTR__OBJC_CLASS___UIScene_1126a5d50);
  uVar7 = uVar4;
  FUN_100deaee4();
  puVar10 = puVar3;
  func_0x000107c5fe10(puVar3,uVar4,uVar7);
  func_0x000107c61170(puVar3);
  puVar3 = puVar10;
  FUN_1012a8c08();
  func_0x000107c6142c(puVar10);
  if ((ulong)puVar3 >> 0x3e == 0) {
    puVar10 = *(undefined **)(((ulong)puVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar10 = (undefined *)((ulong)puVar3 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar3) {
      puVar10 = puVar3;
    }
    func_0x000107c60480();
  }
  if (puVar10 != (undefined *)0x0) {
    puVar11 = (undefined *)0x0;
    do {
      if (((ulong)puVar3 & 0xc000000000000001) == 0) {
        if (*(undefined **)(((ulong)puVar3 & 0xffffffffffffff8) + 0x10) <= puVar11) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1012a8ba0);
          (*pcVar2)();
        }
        puVar5 = *(undefined **)(puVar3 + (long)puVar11 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        puVar5 = puVar11;
        FUN_1012bfb38(puVar11,puVar3);
      }
      puVar1 = puVar11 + 1;
      if (SCARRY8((long)puVar11,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1012a8b9c);
        (*pcVar2)();
      }
      puVar6 = puVar5;
      func_0x000107c3d0e4();
      if (puVar6 == (undefined *)0x0) {
        func_0x000107c6142c(puVar3);
        puVar10 = puVar5;
        func_0x000107c5e408();
        func_0x000107c61180();
        func_0x000107c61170(puVar5);
        uVar7 = 0;
        FUN_1012ac3d0(0,0x112d36e50,&PTR__OBJC_CLASS___UIWindow_1126c3e70);
        puVar3 = puVar10;
        func_0x000107c5fc54(puVar10,uVar7);
        func_0x000107c61170(puVar10);
        if ((ulong)puVar3 >> 0x3e == 0) {
          puVar10 = *(undefined **)(((ulong)puVar3 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar10 = (undefined *)((ulong)puVar3 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar3) {
            puVar10 = puVar3;
          }
          func_0x000107c60480();
        }
        if (puVar10 != (undefined *)0x0) {
          uVar12 = 0;
          do {
            if (((ulong)puVar3 & 0xc000000000000001) == 0) {
              if (*(ulong *)(((ulong)puVar3 & 0xffffffffffffff8) + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1012a8ba8);
                (*pcVar2)();
              }
              uVar8 = *(ulong *)(puVar3 + uVar12 * 8 + 0x20);
              func_0x000107c61174();
            }
            else {
              uVar8 = uVar12;
              FUN_100de9de8(uVar12,puVar3);
            }
            puVar11 = (undefined *)(uVar12 + 1);
            if (SCARRY8(uVar12,1)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1012a8ba4);
              (*pcVar2)();
            }
            uVar9 = uVar8;
            func_0x000107c49f64();
            if ((uVar9 & 1) != 0) {
              func_0x000107c6142c(puVar3);
              return uVar8;
            }
            func_0x000107c61170(uVar8);
            uVar12 = uVar12 + 1;
          } while (puVar11 != puVar10);
        }
        break;
      }
      func_0x000107c61170(puVar5);
      puVar11 = puVar11 + 1;
    } while (puVar1 != puVar10);
  }
  func_0x000107c6142c(puVar3);
  return 0;
}



/* Entry: 1012a8c08; end: 1012a8ecb;  */

undefined * FUN_1012a8c08(undefined *param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong uVar13;
  long lVar14;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  ulong *puStack_80;
  ulong uStack_78;
  long lStack_70;
  ulong uStack_68;
  undefined *puStack_58;
  
  if (((ulong)param_1 & 0xc000000000000001) == 0) {
    uVar13 = -1L << ((ulong)(byte)param_1[0x20] & 0x3f);
    puVar12 = (ulong *)(param_1 + 0x38);
    uVar11 = ~uVar13;
    uVar13 = -uVar13;
    uVar9 = 0xffffffffffffffff;
    if (uVar13 < 0x40) {
      uVar9 = ~(-1L << (uVar13 & 0x3f));
    }
    uVar9 = uVar9 & *puVar12;
    puVar10 = param_1;
    func_0x000107c61434();
    lStack_70 = 0;
  }
  else {
    puVar10 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_1) {
      puVar10 = param_1;
    }
    func_0x000107c61434(param_1);
    func_0x000107c60288();
    uVar4 = 0;
    FUN_1012ac3d0(0,0x112d36e40,&PTR__OBJC_CLASS___UIScene_1126a5d50);
    uVar5 = uVar4;
    FUN_100deaee4();
    func_0x000107c5fe30(&puStack_88,puVar10,uVar4,uVar5);
    uVar11 = uStack_78;
    param_1 = puStack_88;
    puVar12 = puStack_80;
    uVar9 = uStack_68;
  }
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar14 = lStack_70;
  do {
    uVar13 = uVar9;
    lVar2 = lVar14;
    if ((long)param_1 < 0) {
      func_0x000107c602ac();
      if (puVar10 == (undefined *)0x0) {
LAB_1012a8e88:
        puStack_58 = (undefined *)0x0;
LAB_1012a8e8c:
        FUN_100deaf38(param_1,puVar12,uVar11,lVar14,uVar9);
        return puStack_98;
      }
      uVar5 = 0;
      puStack_90 = puVar10;
      FUN_1012ac3d0(0,0x112d36e40,&PTR__OBJC_CLASS___UIScene_1126a5d50);
      func_0x000107c6147c(&puStack_58,&puStack_90,PTR___syXlN_11034f1a0 + 8,uVar5,7);
      puVar7 = PTR__OBJC_CLASS___UIWindowScene_1126b6b80;
      puVar10 = puStack_58;
    }
    else {
      while (uVar13 == 0) {
        lVar1 = lVar2 + 1;
        if (SCARRY8(lVar2,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1012a8ecc);
          (*pcVar3)();
        }
        if ((long)(uVar11 + 0x40 >> 6) <= lVar1) {
          uVar9 = 0;
          goto LAB_1012a8e88;
        }
        lVar2 = lVar1;
        uVar13 = puVar12[lVar1];
      }
      uVar8 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar13 = uVar13 - 1 & uVar13;
      puVar10 = *(undefined **)
                 (*(long *)(param_1 + 0x30) + LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) * 8 +
                 lVar2 * 0x200);
      puStack_58 = puVar10;
      func_0x000107c61174(puVar10);
      puVar7 = PTR__OBJC_CLASS___UIWindowScene_1126b6b80;
    }
    PTR__OBJC_CLASS___UIWindowScene_1126b6b80 = puVar7;
    if (puVar10 == (undefined *)0x0) goto LAB_1012a8e8c;
    func_0x000107c61168(puVar7);
    puVar6 = puVar10;
    func_0x000107c6148c(puVar10,puVar7);
    uVar9 = uVar13;
    lVar14 = lVar2;
    if (puVar6 == (undefined *)0x0) {
      func_0x000107c61170();
    }
    else {
      puVar10 = puStack_98;
      func_0x000107c61550();
      if ((((int)puVar10 == 0) || ((long)puStack_98 < 0)) || (((ulong)puStack_98 >> 0x3e & 1) != 0))
      {
        if ((ulong)puStack_98 >> 0x3e == 0) {
          puVar7 = *(undefined **)(((ulong)puStack_98 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar7 = (undefined *)((ulong)puStack_98 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puStack_98) {
            puVar7 = puStack_98;
          }
          func_0x000107c60480(puVar7);
        }
        puVar10 = (undefined *)0x0;
        FUN_10109b320(0,puVar7 + 1,1,puStack_98);
        puStack_98 = puVar10;
      }
      uVar8 = (ulong)puStack_98 & 0xffffffffffffff8;
      uVar13 = *(ulong *)(uVar8 + 0x10);
      if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar13) {
        puVar10 = (undefined *)(ulong)(1 < *(ulong *)(uVar8 + 0x18));
        FUN_10109b320(puVar10,uVar13 + 1,1,puStack_98);
        uVar8 = (ulong)puVar10 & 0xffffffffffffff8;
        puStack_98 = puVar10;
      }
      *(ulong *)(uVar8 + 0x10) = uVar13 + 1;
      *(undefined **)(uVar8 + uVar13 * 8 + 0x20) = puVar6;
    }
  } while( true );
}



/* Entry: 1012a8ecc; end: 1012a8fdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a8ecc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + _DAT_112d6f3b8);
    func_0x000107c61174();
    func_0x000107c61170(param_1);
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112febe38);
    func_0x000107c6157c(uVar2);
    func_0x000107c61170(lVar1);
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_60 = 0;
    uStack_58 = 0x8000000000000000;
    uStack_50 = 0;
    uStack_48 = 0;
    func_0x000107c5f1ec(&uStack_90);
    func_0x000107c61574(uVar2);
  }
  return;
}



/* Entry: 1012a8fdc; end: 1012a9127;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1012a8fdc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112d6f3f8);
  if (lVar1 == 0) {
    return 0;
  }
  func_0x000107c61174();
  lVar2 = lVar1;
  func_0x000107c4141c();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c41414();
  func_0x000107c61180();
  func_0x000107c615e8(lVar2);
  lVar2 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  if (lVar2 != 0) {
    lVar3 = *(long *)(unaff_x20 + _DAT_112d6f3d8);
    if (lVar3 == 0) {
      func_0x000107c61170(lVar1);
      func_0x000107c615e8(lVar2);
      return 0;
    }
    func_0x000107c61174();
    lVar4 = lVar2;
    func_0x000107c409cc(lVar2,param_2,param_1);
    func_0x000107c61180();
    if (lVar4 != 0) {
      lVar5 = lVar4;
      func_0x000107c40978();
      func_0x000107c61180();
      lVar6 = lVar5;
      func_0x000107c41408();
      func_0x000107c61180();
      func_0x000107c61170(lVar1);
      func_0x000107c615e8(lVar2);
      func_0x000107c61170(lVar3);
      func_0x000107c615e8(lVar4);
      func_0x000107c615e8(lVar5);
      return lVar6;
    }
    func_0x000107c61170(lVar1);
    func_0x000107c615e8(lVar2);
    lVar1 = lVar3;
  }
  func_0x000107c61170(lVar1);
  return 0;
}



/* Entry: 1012a9128; end: 1012a929f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1012a9128(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  puVar1 = PTR_PTR_1126aead8;
  func_0x000107c610f8(PTR_PTR_1126aead8);
  func_0x000107c4807c();
  lVar3 = *(long *)(unaff_x20 + _DAT_112d6f400);
  if (lVar3 != 0) {
    func_0x000107c3dae4();
    func_0x000107c61180();
    lVar2 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar2 != 0) {
      lVar3 = lVar2;
      func_0x000107c4c1e0(lVar2,param_2,puVar1);
      func_0x000107c61180();
      func_0x000107c615e8(lVar2);
      func_0x000107c61170(puVar1);
      return lVar3;
    }
  }
  func_0x000107c61170();
  return 0;
}



/* Entry: 1012a92a0; end: 1012a9327;  */

void FUN_1012a92a0(undefined8 param_1,undefined8 param_2,uint param_3,long param_4,
                  undefined8 param_5)

{
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_4 + 0x10,auStack_58,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61618();
  if (param_4 != 0) {
    FUN_1012a9328(param_1,param_2,param_3 & 1,param_5);
    func_0x000107c61170(param_4);
  }
  return;
}



/* Entry: 1012a9328; end: 1012a9613;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a9328(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  
  uVar3 = unaff_x20 + _DAT_112d6f3a0;
  func_0x000107c61618();
  if (uVar3 == 0) {
    uVar3 = unaff_x20 + _DAT_112d6f3a8;
    func_0x000107c61618();
    if (uVar3 == 0) {
      FUN_1012ab1f0();
      if (uVar3 == 0) {
        return;
      }
      goto LAB_1012a9414;
    }
  }
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = uVar3;
  func_0x000107c4f078();
  func_0x000107c61180();
  uVar1 = uVar3;
  while (uVar4 != 0) {
    uVar5 = uVar4;
    func_0x000107c49aa0();
    if ((uVar5 & 1) != 0) {
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar3);
      func_0x000107c61170(uVar3);
      uVar3 = uVar1;
      goto LAB_1012a9414;
    }
    func_0x000107c61170(uVar1);
    uVar5 = uVar4;
    func_0x000107c4f078();
    func_0x000107c61180();
    uVar1 = uVar4;
    uVar4 = uVar5;
  }
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar3);
  uVar3 = uVar1;
LAB_1012a9414:
  uVar10 = *(undefined8 *)(param_4 + _DAT_112d6f9a0);
  uVar12 = *(undefined8 *)(param_4 + _DAT_112d6f9a8);
  puVar6 = PTR_PTR_1126aead8;
  func_0x000107c610f8(PTR_PTR_1126aead8);
  func_0x000107c61174(uVar10);
  func_0x000107c61174(uVar12);
  func_0x000107c4807c(puVar6);
  lVar8 = *(long *)(unaff_x20 + _DAT_112d6f3c0);
  lVar9 = ((long *)(unaff_x20 + _DAT_112d6f3c0))[1];
  func_0x000107c61434(param_2);
  func_0x000100b64c10(lVar8,lVar9);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c6142c(param_2);
  if (lVar8 == 0) {
    ppuVar11 = (undefined **)0x0;
  }
  else {
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_11039cd80;
    ppuVar11 = &puStack_90;
    lStack_70 = lVar8;
    lStack_68 = lVar9;
    func_0x000107c60bc4();
    func_0x000107c61574(lStack_68);
  }
  puVar7 = PTR_PTR_1126b0b68;
  func_0x000107c610f8(PTR_PTR_1126b0b68);
  func_0x000106e404d0();
  func_0x000107c60bd0(ppuVar11);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(param_1);
  lVar8 = *(long *)(unaff_x20 + _DAT_112d6f3b0);
  func_0x000107c4e2a8();
  func_0x000107c61180();
  if (lVar8 != 0) {
    lVar9 = lVar8;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar8);
    if (lVar9 != 0) {
      puVar6 = puVar7;
      func_0x000107c61174(puVar7);
      func_0x000107c4eee0(lVar9);
      func_0x000107c615e8(lVar9);
      func_0x000107c61170(puVar6);
    }
    func_0x000107c61170(puVar7);
    func_0x000107c61170(uVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1012a9614);
  (*pcVar2)();
}



/* Entry: 1012a9614; end: 1012a9a9b;  */

/* WARNING: Removing unreachable block (ram,0x0001012a9a90) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a9614(double param_1)

{
  ulong uVar1;
  long *plVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long extraout_x8;
  long lVar8;
  long unaff_x20;
  undefined *puVar9;
  ulong uVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined1 auStack_130 [8];
  ulong uStack_120;
  undefined *puStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined *puStack_98;
  undefined1 auStack_90 [32];
  
  lVar4 = 0;
  func_0x000107c5eea4();
  lVar8 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  func_0x000107c5eea0(auStack_130 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5ee8c();
  (**(code **)(lVar8 + 8))(auStack_130 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar4);
  lVar4 = _DAT_112d6f3d0;
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1012a99b4);
    (*pcVar3)();
  }
  if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1012a99b8);
    (*pcVar3)();
  }
  if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1012a99bc);
    (*pcVar3)();
  }
  func_0x000107c61428(unaff_x20 + _DAT_112d6f3d0,auStack_90,0,0);
  uVar10 = *(ulong *)(unaff_x20 + lVar4);
  if (uVar10 >> 0x3e == 0) {
    uVar12 = *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar12 = uVar10 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar10) {
      uVar12 = uVar10;
    }
    func_0x000107c60480();
  }
  uStack_120 = uVar10 & 0xffffffffffffff8;
  func_0x000107c61434(uVar10);
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar12 != 0) {
    uVar14 = 0;
    do {
      while( true ) {
        if ((uVar10 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uStack_120 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1012a99a8);
            (*pcVar3)();
          }
          uVar5 = *(ulong *)(uVar10 + uVar14 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar5 = uVar14;
          FUN_1012bfd08(uVar14,uVar10);
        }
        uVar1 = uVar14 + 1;
        if (SCARRY8(uVar14,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1012a99a4);
          (*pcVar3)();
        }
        plVar2 = (long *)(uVar5 + _DAT_112d6f630);
        lStack_b8 = plVar2[0xb];
        lStack_c0 = plVar2[10];
        lStack_a8 = plVar2[0xd];
        lStack_b0 = plVar2[0xc];
        lVar8 = plVar2[7];
        lStack_e0 = plVar2[6];
        lStack_c8 = plVar2[9];
        lVar4 = plVar2[8];
        lStack_f8 = plVar2[3];
        lStack_100 = plVar2[2];
        lStack_e8 = plVar2[5];
        lStack_f0 = plVar2[4];
        lStack_108 = plVar2[1];
        puVar11 = (undefined *)*plVar2;
        puStack_110 = puVar11;
        lStack_d8 = lVar8;
        lStack_d0 = lVar4;
        if (lStack_c8 < 0) break;
        func_0x000107c61434(lStack_b8);
        func_0x000107c6142c();
        if (lVar4 < 1) {
          lVar4 = 0xe10;
        }
        if (SCARRY8(lVar8,lVar4)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1012a99ac);
          (*pcVar3)();
        }
        if ((long)param_1 <= lVar8 + lVar4) goto LAB_1012a984c;
LAB_1012a9824:
        func_0x000107c61170(uVar5);
        uVar14 = uVar14 + 1;
        if (uVar1 == uVar12) goto LAB_1012a98c8;
      }
      func_0x000107c61174();
      func_0x000107c40834();
      func_0x000107c61180();
      if (puVar11 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1012a9a90);
        (*pcVar3)();
      }
      puVar13 = puVar11;
      func_0x000107c5bbf4();
      func_0x000107c61180();
      func_0x000107c61170(puVar11);
      if (puVar13 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1012a9a8c);
        (*pcVar3)();
      }
      puVar11 = puVar13;
      func_0x000107c51b2c();
      FUN_1012a9dfc(&puStack_110);
      func_0x000107c61170(puVar13);
      if ((long)puVar11 < (long)param_1) goto LAB_1012a9824;
LAB_1012a984c:
      puVar11 = puVar9;
      func_0x000107c61558();
      puStack_98 = puVar9;
      if (((ulong)puVar11 & 1) == 0) {
        FUN_1012b5810(0,*(long *)(puVar9 + 0x10) + 1,1);
      }
      uVar14 = *(ulong *)(puStack_98 + 0x10);
      if (*(ulong *)(puStack_98 + 0x18) >> 1 <= uVar14) {
        FUN_1012b5810(1 < *(ulong *)(puStack_98 + 0x18),uVar14 + 1,1);
      }
      *(ulong *)(puStack_98 + 0x10) = uVar14 + 1;
      *(ulong *)(puStack_98 + uVar14 * 8 + 0x20) = uVar5;
      puVar9 = puStack_98;
      uVar14 = uVar1;
    } while (uVar1 != uVar12);
  }
LAB_1012a98c8:
  func_0x000107c6142c(uVar10);
  if (((long)puVar9 < 0) || (((ulong)puVar9 >> 0x3e & 1) != 0)) {
    puVar11 = puVar9;
    func_0x000107c60480();
    puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar11 != (undefined *)0x0) {
      func_0x000107c6157c(puVar9);
      puVar13 = puVar11;
      FUN_1012bf89c(puVar11,0);
      puVar7 = puVar9;
      FUN_1012b5c6c(puVar13 + 0x20,puVar11);
      func_0x000107c6142c();
      if (puVar7 != puVar11) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1012a9a28);
        (*pcVar3)();
      }
    }
  }
  else {
    func_0x000107c6157c(puVar9);
    puVar13 = puVar9;
  }
  puStack_110 = puVar13;
  FUN_1012a9c7c(&puStack_110);
  func_0x000107c61574(puVar9);
  puVar9 = puStack_110;
  if (((long)puStack_110 < 0) || (((ulong)puStack_110 >> 0x3e & 1) != 0)) {
    puVar11 = puStack_110;
    func_0x000107c60480();
  }
  else {
    puVar11 = *(undefined **)(puStack_110 + 0x10);
  }
  if (puVar11 != (undefined *)0x0) {
    uVar10 = 0;
    do {
      if (((ulong)puVar9 & 0xc000000000000001) == 0) {
        if (*(ulong *)(puVar9 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1012a99b0);
          (*pcVar3)();
        }
        uVar12 = *(ulong *)(puVar9 + uVar10 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar12 = uVar10;
        FUN_1012bfd08(uVar10,puVar9);
      }
      if (SCARRY8(uVar10,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1012a998c);
        (*pcVar3)();
      }
      puVar13 = (undefined *)(uVar10 + 1);
      if (-1 < *(long *)(uVar12 + _DAT_112d6f630 + 0x48)) {
        func_0x000107c61574(puVar9);
        goto LAB_1012a9a44;
      }
      func_0x000107c61170();
      uVar10 = uVar10 + 1;
    } while (puVar13 != puVar11);
  }
  func_0x000107c61574(puVar9);
  uVar12 = 0;
LAB_1012a9a44:
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112d6f428);
  *(ulong *)(unaff_x20 + _DAT_112d6f428) = uVar12;
  func_0x000107c61170(uVar6);
  return;
}



/* Entry: 1012a9a9c; end: 1012a9afb; -[SCProfileCalendarActionHandler init] */

void FUN_1012a9a9c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCProfileCalendarSection.ProfileCalendarActionHandler",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1012a9ac8);
  (*pcVar1)();
}



/* Entry: 1012a9afc; end: 1012a9c7b; -[SCProfileCalendarActionHandler .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001012a9c3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012a9c40) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a9afc(long param_1)

{
  func_0x0001012a9c58(param_1 + _DAT_112d6f3a0);
  func_0x0001012a9c58(param_1 + _DAT_112d6f3a8);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d6f3b0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d6f3b8));
  func_0x00010058d43c(*(undefined8 *)(param_1 + _DAT_112d6f3c0),
                      ((undefined8 *)(param_1 + _DAT_112d6f3c0))[1]);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d6f3c8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d6f3d0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d6f3d8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d6f3e0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d6f3e8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d6f3f0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d6f3f8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d6f400));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d6f408));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d6f410));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d6f418));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d6f420));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d6f428));
                    /* WARNING: Could not recover jumptable at 0x00010bdc05f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakDestroy_11034f580)(param_1 + _DAT_112d6f430);
  return;
}



/* Entry: 1012a9c7c; end: 1012a9d7b;  */

void FUN_1012a9c7c(ulong *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  long lStack_50;
  ulong uStack_48;
  
  uVar4 = *param_1;
  uVar1 = uVar4;
  func_0x000107c61558();
  if ((uVar1 & 1) == 0) {
    FUN_1012b5dc0();
  }
  uVar5 = *(ulong *)(uVar4 + 0x10);
  lStack_50 = uVar4 + 0x20;
  uVar1 = uVar5;
  uStack_48 = uVar5;
  func_0x000107c60574();
  if ((long)uVar1 < (long)uVar5) {
    puVar6 = (undefined *)(uVar5 >> 1);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (1 < uVar5) {
      uVar2 = 0;
      FUN_1012aeb90(0);
      puVar3 = puVar6;
      func_0x000107c60380(puVar6,uVar2);
      *(undefined **)(puVar3 + 0x10) = puVar6;
    }
    puStack_68 = puVar3 + 0x20;
    puStack_60 = puVar6;
    FUN_1012a9e30(&puStack_68,auStack_58,&lStack_50,uVar1);
    *(undefined8 *)(puVar3 + 0x10) = 0;
    func_0x000107c61574(puVar3);
  }
  else if (uVar5 != 0) {
    FUN_1012aa620(0,uVar5,1,&lStack_50);
  }
  *param_1 = uVar4;
  return;
}



/* Entry: 1012a9d7c; end: 1012a9deb;  */

void FUN_1012a9d7c(void)

{
  func_0x000107c61168(&PTR_PTR_1127c2f58);
  return;
}



/* Entry: 1012a9dec; end: 1012a9dfb;  */

void FUN_1012a9dec(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 1012a9dfc; end: 1012a9e2f;  */

undefined8 FUN_1012a9dfc(undefined8 param_1)

{
  FUN_1012b3fdc();
  return param_1;
}



/* Entry: 1012a9e30; end: 1012aa61f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012a9e30(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  long *plVar1;
  code *pcVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  long unaff_x21;
  long lVar14;
  undefined8 uVar15;
  long *plVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined *puStack_58;
  
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar8 = param_3[1];
  if (0 < lVar8) {
    lVar7 = 0;
    do {
      lVar17 = lVar7 + 1;
      lVar14 = lVar17;
      if (lVar17 < lVar8) {
        lVar12 = *param_3;
        uVar3 = *(ulong *)(lVar12 + lVar17 * 8);
        uVar15 = *(undefined8 *)(lVar12 + lVar7 * 8);
        func_0x000107c61174();
        func_0x000107c61174(uVar15);
        uVar13 = uVar3;
        FUN_1012b6010(uVar3,uVar15);
        func_0x000107c61170(uVar3);
        func_0x000107c61170(uVar15);
        lVar14 = lVar7 + 2;
        if (lVar14 < lVar8) {
          plVar16 = (long *)(lVar12 + lVar7 * 8 + 0x10);
          lVar17 = lVar14;
          do {
            lVar14 = plVar16[-1];
            lVar12 = *plVar16;
            plVar18 = (long *)(lVar12 + _DAT_112d6f630);
            lStack_c8 = plVar18[3];
            lStack_d0 = plVar18[2];
            lStack_b8 = plVar18[5];
            lVar10 = plVar18[4];
            lVar19 = plVar18[1];
            lVar24 = *plVar18;
            lVar20 = plVar18[0xb];
            lStack_90 = plVar18[10];
            lVar22 = plVar18[0xd];
            lStack_80 = plVar18[0xc];
            lStack_158 = plVar18[7];
            lVar21 = plVar18[6];
            lStack_98 = plVar18[9];
            lStack_a0 = plVar18[8];
            lStack_e0 = lVar24;
            lStack_d8 = lVar19;
            lStack_c0 = lVar10;
            lStack_b0 = lVar21;
            lStack_a8 = lStack_158;
            lStack_88 = lVar20;
            lStack_78 = lVar22;
            if (lStack_98 < 0) {
              func_0x000107c61174(lVar12);
              func_0x000107c61174(lVar14);
              FUN_1012ac38c(&lStack_e0,&lStack_150);
              func_0x000107c40834();
              func_0x000107c61180();
              if (lVar24 == 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1012aa614);
                (*pcVar2)();
              }
              lVar10 = lVar24;
              func_0x000107c5bbf4();
              func_0x000107c61180();
              func_0x000107c61170(lVar24);
              if (lVar10 == 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1012aa610);
                (*pcVar2)();
              }
              lStack_158 = lVar10;
              func_0x000107c51b2c();
              FUN_1012a9dfc(&lStack_e0);
              func_0x000107c61170(lVar10);
            }
            else {
              func_0x000107c61174(lVar12);
              func_0x000107c61174(lVar14);
              FUN_1012ac38c(&lStack_e0,&lStack_150);
              func_0x000107c6142c(lVar19);
              func_0x000107c6142c(lVar10);
              func_0x000107c6142c(lVar21);
              func_0x000107c6142c(lVar22);
              func_0x000107c6142c(lVar20);
            }
            plVar18 = (long *)(lVar14 + _DAT_112d6f630);
            lVar20 = plVar18[0xb];
            lStack_100 = plVar18[10];
            lStack_e8 = plVar18[0xd];
            lStack_f0 = plVar18[0xc];
            lVar24 = plVar18[7];
            lStack_120 = plVar18[6];
            lStack_108 = plVar18[9];
            lStack_110 = plVar18[8];
            lStack_138 = plVar18[3];
            lStack_140 = plVar18[2];
            lStack_128 = plVar18[5];
            lStack_130 = plVar18[4];
            lStack_148 = plVar18[1];
            lVar10 = *plVar18;
            lStack_150 = lVar10;
            lStack_118 = lVar24;
            lStack_f8 = lVar20;
            if (lStack_108 < 0) {
              func_0x000107c61174();
              func_0x000107c40834();
              func_0x000107c61180();
              if (lVar10 == 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1012aa60c);
                (*pcVar2)();
              }
              lVar20 = lVar10;
              func_0x000107c5bbf4();
              func_0x000107c61180();
              func_0x000107c61170(lVar10);
              if (lVar20 == 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1012aa608);
                (*pcVar2)();
              }
              lVar24 = lVar20;
              func_0x000107c51b2c();
              FUN_1012a9dfc(&lStack_150);
              func_0x000107c61170(lVar12);
              func_0x000107c61170(lVar14);
              func_0x000107c61170(lVar20);
            }
            else {
              func_0x000107c61434(lVar20);
              func_0x000107c61170(lVar12);
              func_0x000107c61170(lVar14);
              func_0x000107c6142c(lVar20);
            }
            lVar14 = lVar17;
            if ((((uint)uVar13 ^ (uint)(lVar24 <= lStack_158)) & 1) == 0) break;
            plVar16 = plVar16 + 1;
            lVar17 = lVar17 + 1;
            lVar14 = lVar8;
          } while (lVar8 != lVar17);
          lVar17 = lVar17 + -1;
        }
        if ((uVar13 & 1) != 0) {
          if (lVar14 < lVar7) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1012aa5d4);
            (*pcVar2)();
          }
          if (lVar7 <= lVar17) {
            lVar12 = *param_3;
            puVar9 = (undefined8 *)(lVar12 + lVar14 * 8);
            puVar11 = (undefined8 *)(lVar12 + lVar7 * 8);
            lVar17 = lVar14;
            lVar8 = lVar7;
            do {
              puVar9 = puVar9 + -1;
              lVar17 = lVar17 + -1;
              if (lVar8 != lVar17) {
                if (lVar12 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1012aa604);
                  (*pcVar2)();
                }
                uVar15 = *puVar11;
                *puVar11 = *puVar9;
                *puVar9 = uVar15;
              }
              lVar8 = lVar8 + 1;
              puVar11 = puVar11 + 1;
            } while (lVar8 < lVar17);
          }
        }
      }
      lVar8 = param_3[1];
      lVar17 = lVar14;
      if (lVar14 < lVar8) {
        if (SBORROW8(lVar14,lVar7)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1012aa5d0);
          (*pcVar2)();
        }
        if (lVar14 - lVar7 < param_4) {
          if (SCARRY8(lVar7,param_4)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1012aa5d8);
            (*pcVar2)();
          }
          lVar12 = lVar7 + param_4;
          if (lVar8 <= lVar7 + param_4) {
            lVar12 = lVar8;
          }
          if (lVar12 < lVar7) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1012aa5dc);
            (*pcVar2)();
          }
          if (lVar14 != lVar12) {
            lVar10 = *param_3;
            plVar16 = (long *)(lVar10 + lVar14 * 8);
            lVar8 = (lVar7 - lVar14) + 1;
            plVar18 = plVar16;
            lVar24 = lVar8;
LAB_1012aa1b4:
            do {
              lVar17 = plVar16[-1];
              lVar20 = *plVar16;
              plVar1 = (long *)(lVar20 + _DAT_112d6f630);
              lStack_c8 = plVar1[3];
              lStack_d0 = plVar1[2];
              lStack_b8 = plVar1[5];
              lVar19 = plVar1[4];
              lVar25 = plVar1[1];
              lVar22 = *plVar1;
              lVar21 = plVar1[0xb];
              lStack_90 = plVar1[10];
              lVar23 = plVar1[0xd];
              lStack_80 = plVar1[0xc];
              lStack_158 = plVar1[7];
              lVar26 = plVar1[6];
              lStack_98 = plVar1[9];
              lStack_a0 = plVar1[8];
              lStack_e0 = lVar22;
              lStack_d8 = lVar25;
              lStack_c0 = lVar19;
              lStack_b0 = lVar26;
              lStack_a8 = lStack_158;
              lStack_88 = lVar21;
              lStack_78 = lVar23;
              if (lStack_98 < 0) {
                func_0x000107c61174(lVar20);
                func_0x000107c61174(lVar17);
                FUN_1012ac38c(&lStack_e0,&lStack_150);
                func_0x000107c40834();
                func_0x000107c61180();
                if (lVar22 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1012aa5f8);
                  (*pcVar2)();
                }
                lVar19 = lVar22;
                func_0x000107c5bbf4();
                func_0x000107c61180();
                func_0x000107c61170(lVar22);
                if (lVar19 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1012aa5f4);
                  (*pcVar2)();
                }
                lStack_158 = lVar19;
                func_0x000107c51b2c();
                FUN_1012a9dfc(&lStack_e0);
                func_0x000107c61170(lVar19);
              }
              else {
                func_0x000107c61174(lVar20);
                func_0x000107c61174(lVar17);
                FUN_1012ac38c(&lStack_e0,&lStack_150);
                func_0x000107c6142c(lVar25);
                func_0x000107c6142c(lVar19);
                func_0x000107c6142c(lVar26);
                func_0x000107c6142c(lVar23);
                func_0x000107c6142c(lVar21);
              }
              plVar1 = (long *)(lVar17 + _DAT_112d6f630);
              lVar21 = plVar1[0xb];
              lStack_100 = plVar1[10];
              lStack_e8 = plVar1[0xd];
              lStack_f0 = plVar1[0xc];
              lVar22 = plVar1[7];
              lStack_120 = plVar1[6];
              lStack_108 = plVar1[9];
              lStack_110 = plVar1[8];
              lStack_138 = plVar1[3];
              lStack_140 = plVar1[2];
              lStack_128 = plVar1[5];
              lStack_130 = plVar1[4];
              lStack_148 = plVar1[1];
              lVar19 = *plVar1;
              lStack_150 = lVar19;
              lStack_118 = lVar22;
              lStack_f8 = lVar21;
              if (lStack_108 < 0) {
                func_0x000107c61174();
                func_0x000107c40834();
                func_0x000107c61180();
                if (lVar19 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1012aa600);
                  (*pcVar2)();
                }
                lVar21 = lVar19;
                func_0x000107c5bbf4();
                func_0x000107c61180();
                func_0x000107c61170(lVar19);
                if (lVar21 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1012aa5fc);
                  (*pcVar2)();
                }
                lVar22 = lVar21;
                func_0x000107c51b2c();
                FUN_1012a9dfc(&lStack_150);
                func_0x000107c61170(lVar20);
                func_0x000107c61170(lVar17);
                func_0x000107c61170(lVar21);
              }
              else {
                func_0x000107c61434(lVar21);
                func_0x000107c61170(lVar20);
                func_0x000107c61170(lVar17);
                func_0x000107c6142c(lVar21);
              }
              if (lStack_158 < lVar22) {
                if (lVar10 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1012aa5e0);
                  (*pcVar2)();
                }
                lVar17 = plVar16[-1];
                plVar16[-1] = *plVar16;
                *plVar16 = lVar17;
                if (lVar8 != 0) {
                  lVar8 = lVar8 + 1;
                  plVar16 = plVar16 + -1;
                  goto LAB_1012aa1b4;
                }
              }
              lVar14 = lVar14 + 1;
              plVar16 = plVar18 + 1;
              lVar8 = lVar24 + -1;
              lVar17 = lVar12;
              plVar18 = plVar16;
              lVar24 = lVar8;
            } while (lVar14 != lVar12);
          }
        }
      }
      puVar6 = puStack_58;
      if (lVar17 < lVar7) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1012aa5c4);
        (*pcVar2)();
      }
      puVar4 = puStack_58;
      func_0x000107c61558();
      puVar5 = puVar6;
      if (((ulong)puVar4 & 1) == 0) {
        puVar5 = (undefined *)0x0;
        func_0x0001000a91e0(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
      }
      uVar13 = *(ulong *)(puVar5 + 0x10);
      puVar6 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar13) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
        func_0x0001000a91e0(puVar6,uVar13 + 1,1,puVar5);
      }
      *(ulong *)(puVar6 + 0x10) = uVar13 + 1;
      *(long *)(puVar6 + uVar13 * 0x10 + 0x20) = lVar7;
      *(long *)(puVar6 + uVar13 * 0x10 + 0x28) = lVar17;
      puStack_58 = puVar6;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1012aa618);
        (*pcVar2)();
      }
      FUN_1012aa8e0(&puStack_58,*param_1,param_3);
      puVar6 = puStack_58;
      if (unaff_x21 != 0) goto LAB_1012aa594;
      lVar8 = param_3[1];
      lVar7 = lVar17;
    } while (lVar17 < lVar8);
  }
  puVar6 = puStack_58;
  lVar8 = *param_1;
  if (lVar8 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1012aa620);
    (*pcVar2)();
  }
  puVar4 = puStack_58;
  func_0x000107c61558();
  if (((ulong)puVar4 & 1) == 0) {
    FUN_100e06d54();
  }
  uVar13 = *(ulong *)(puVar6 + 0x10);
  while (puStack_58 = puVar6, 1 < uVar13) {
    lVar7 = *param_3;
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1012aa61c);
      (*pcVar2)();
    }
    lVar12 = uVar13 - 1;
    lVar14 = *(long *)(puVar6 + uVar13 * 0x10);
    lVar17 = *(long *)(puVar6 + lVar12 * 0x10 + 0x28);
    FUN_1012aab48(lVar7 + lVar14 * 8,lVar7 + *(long *)(puVar6 + lVar12 * 0x10 + 0x20) * 8,
                  lVar7 + lVar17 * 8,lVar8);
    if (unaff_x21 != 0) break;
    if (lVar17 < lVar14) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1012aa5c8);
      (*pcVar2)();
    }
    puVar4 = puVar6;
    func_0x000107c61558();
    if (((ulong)puVar4 & 1) == 0) {
      FUN_100e06d54();
    }
    if (*(ulong *)(puVar6 + 0x10) <= uVar13 - 2) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1012aa5cc);
      (*pcVar2)();
    }
    *(long *)(puVar6 + uVar13 * 0x10) = lVar14;
    *(long *)((long)(puVar6 + uVar13 * 0x10) + 8) = lVar17;
    puStack_58 = puVar6;
    func_0x0001000a97cc(lVar12);
    puVar6 = puStack_58;
    uVar13 = *(ulong *)(puStack_58 + 0x10);
  }
LAB_1012aa594:
  func_0x000107c6142c(puVar6);
  return;
}



/* Entry: 1012aa620; end: 1012aa8df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012aa620(long param_1,long param_2,long param_3,long *param_4)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_58;
  
  if (param_3 != param_2) {
    lVar3 = *param_4;
    plVar5 = (long *)(lVar3 + param_3 * 8 + -8);
    lVar4 = (param_1 - param_3) + 1;
    do {
      lVar7 = *(long *)(lVar3 + param_3 * 8);
      plVar6 = plVar5;
      lVar9 = lVar4;
      while( true ) {
        lVar8 = *plVar6;
        plVar1 = (long *)(lVar7 + _DAT_112d6f630);
        lVar10 = plVar1[0xb];
        lStack_90 = plVar1[10];
        lVar11 = plVar1[0xd];
        lStack_80 = plVar1[0xc];
        lStack_58 = plVar1[7];
        lVar12 = plVar1[6];
        lStack_98 = plVar1[9];
        lStack_a0 = plVar1[8];
        lStack_c8 = plVar1[3];
        lStack_d0 = plVar1[2];
        lStack_b8 = plVar1[5];
        lVar14 = plVar1[4];
        lVar15 = plVar1[1];
        lVar13 = *plVar1;
        lStack_e0 = lVar13;
        lStack_d8 = lVar15;
        lStack_c0 = lVar14;
        lStack_b0 = lVar12;
        lStack_a8 = lStack_58;
        lStack_88 = lVar10;
        lStack_78 = lVar11;
        if (lStack_98 < 0) {
          func_0x000107c61174(lVar7);
          func_0x000107c61174(lVar8);
          FUN_1012ac38c(&lStack_e0,&lStack_150);
          func_0x000107c40834();
          func_0x000107c61180();
          if (lVar13 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1012aa8d8);
            (*pcVar2)();
          }
          lVar10 = lVar13;
          func_0x000107c5bbf4();
          func_0x000107c61180();
          func_0x000107c61170(lVar13);
          if (lVar10 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1012aa8d4);
            (*pcVar2)();
          }
          lStack_58 = lVar10;
          func_0x000107c51b2c();
          FUN_1012a9dfc(&lStack_e0);
          func_0x000107c61170(lVar10);
        }
        else {
          func_0x000107c61174(lVar7);
          func_0x000107c61174(lVar8);
          FUN_1012ac38c(&lStack_e0,&lStack_150);
          func_0x000107c6142c(lVar15);
          func_0x000107c6142c(lVar14);
          func_0x000107c6142c(lVar12);
          func_0x000107c6142c(lVar11);
          func_0x000107c6142c(lVar10);
        }
        plVar1 = (long *)(lVar8 + _DAT_112d6f630);
        lVar11 = plVar1[0xb];
        lStack_100 = plVar1[10];
        lStack_e8 = plVar1[0xd];
        lStack_f0 = plVar1[0xc];
        lVar13 = plVar1[7];
        lStack_120 = plVar1[6];
        lStack_108 = plVar1[9];
        lStack_110 = plVar1[8];
        lStack_138 = plVar1[3];
        lStack_140 = plVar1[2];
        lStack_128 = plVar1[5];
        lStack_130 = plVar1[4];
        lStack_148 = plVar1[1];
        lVar10 = *plVar1;
        lStack_150 = lVar10;
        lStack_118 = lVar13;
        lStack_f8 = lVar11;
        if (lStack_108 < 0) {
          func_0x000107c61174();
          func_0x000107c40834();
          func_0x000107c61180();
          if (lVar10 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1012aa8e0);
            (*pcVar2)();
          }
          lVar11 = lVar10;
          func_0x000107c5bbf4();
          func_0x000107c61180();
          func_0x000107c61170(lVar10);
          if (lVar11 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1012aa8dc);
            (*pcVar2)();
          }
          lVar13 = lVar11;
          func_0x000107c51b2c();
          FUN_1012a9dfc(&lStack_150);
          func_0x000107c61170(lVar7);
          func_0x000107c61170(lVar8);
          func_0x000107c61170(lVar11);
        }
        else {
          func_0x000107c61434(lVar11);
          func_0x000107c61170(lVar7);
          func_0x000107c61170(lVar8);
          func_0x000107c6142c(lVar11);
        }
        if (lVar13 <= lStack_58) break;
        if (lVar3 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1012aa8d0);
          (*pcVar2)();
        }
        lVar13 = *plVar6;
        lVar7 = plVar6[1];
        *plVar6 = lVar7;
        plVar6[1] = lVar13;
        if (lVar9 == 0) break;
        lVar9 = lVar9 + 1;
        plVar6 = plVar6 + -1;
      }
      param_3 = param_3 + 1;
      plVar5 = plVar5 + 1;
      lVar4 = lVar4 + -1;
    } while (param_3 != param_2);
  }
  return;
}



/* Entry: 1012aa8e0; end: 1012aab47;  */

undefined8 FUN_1012aa8e0(ulong *param_1,undefined8 param_2,long *param_3)

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
      FUN_100e06d54();
    }
    *param_1 = uVar8;
    uVar6 = *(ulong *)(uVar8 + 0x10);
    do {
      lVar9 = uVar6 - 1;
      if (uVar6 < 4) {
        if (uVar6 == 3) {
          bVar5 = SBORROW8(*(long *)(uVar8 + 0x28),*(long *)(uVar8 + 0x20));
          lVar7 = *(long *)(uVar8 + 0x28) - *(long *)(uVar8 + 0x20);
          goto LAB_1012aa9b4;
        }
        if (uVar6 < 2) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1012aab30);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar7 = *plVar1;
        lVar12 = plVar1[1];
        bVar5 = SBORROW8(lVar12,lVar7);
        lVar12 = lVar12 - lVar7;
LAB_1012aaa18:
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1012aab20);
          (*pcVar4)();
        }
        lVar7 = uVar8 + lVar9 * 0x10;
        lVar2 = *(long *)(lVar7 + 0x20);
        lVar7 = *(long *)(lVar7 + 0x28);
        if (SBORROW8(lVar7,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1012aab28);
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
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1012aab08);
          (*pcVar4)();
        }
        lVar7 = *(long *)(lVar12 + -0x28) - *(long *)(lVar12 + -0x30);
        if (SBORROW8(*(long *)(lVar12 + -0x28),*(long *)(lVar12 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1012aab0c);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar2 = *plVar1;
        lVar10 = plVar1[1];
        lVar3 = lVar10 - lVar2;
        if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1012aab14);
          (*pcVar4)();
        }
        if (SCARRY8(lVar7,lVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1012aab1c);
          (*pcVar4)();
        }
        bVar5 = false;
        if (lVar7 + lVar3 < *(long *)(lVar12 + -0x38) - *(long *)(lVar12 + -0x40)) {
LAB_1012aa9b4:
          if (bVar5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1012aab10);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + uVar6 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar12 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1012aab18);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar3 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1012aab24);
            (*pcVar4)();
          }
          if (SCARRY8(lVar12,lVar3)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1012aab2c);
            (*pcVar4)();
          }
          bVar5 = false;
          if (lVar12 + lVar3 < lVar7) goto LAB_1012aaa18;
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
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1012aab34);
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
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1012aaafc);
        (*pcVar4)();
      }
      lVar9 = *param_3;
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1012aab48);
        (*pcVar4)();
      }
      lVar12 = *(long *)(uVar8 + 0x20 + uVar11 * 0x10);
      plVar1 = (long *)(uVar8 + 0x20 + lVar10 * 0x10);
      lVar7 = plVar1[1];
      FUN_1012aab48(lVar9 + lVar12 * 8,lVar9 + *plVar1 * 8,lVar9 + lVar7 * 8,param_2);
      if (unaff_x21 != 0) {
        return 1;
      }
      if (lVar7 < lVar12) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1012aab00);
        (*pcVar4)();
      }
      uVar6 = uVar8;
      func_0x000107c61558();
      if ((uVar6 & 1) == 0) {
        FUN_100e06d54();
      }
      if (*(ulong *)(uVar8 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1012aab04);
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



/* Entry: 1012aab48; end: 1012ab1ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1012aab48(long *param_1,long *param_2,long *param_3,long *param_4)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lStack_160;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  
  lVar9 = (long)param_2 - (long)param_1;
  lVar3 = lVar9 + 7;
  if (-1 < lVar9) {
    lVar3 = lVar9;
  }
  lVar3 = lVar3 >> 3;
  lVar10 = (long)param_3 - (long)param_2;
  lVar6 = lVar10 + 7;
  if (-1 < lVar10) {
    lVar6 = lVar10;
  }
  lVar6 = lVar6 >> 3;
  if (lVar3 < lVar6) {
    if (((param_4 < param_1) || (param_1 + lVar3 <= param_4)) || (param_4 != param_1)) {
      func_0x000107c610b8(param_4,param_1,lVar3 << 3);
    }
    plVar4 = param_4 + lVar3;
    plVar11 = param_1;
    if (7 < lVar9) {
      do {
        plVar11 = param_1;
        if (param_3 <= param_2) break;
        lVar6 = *param_2;
        lVar9 = *param_4;
        plVar11 = (long *)(lVar6 + _DAT_112d6f630);
        lStack_c8 = plVar11[3];
        lStack_d0 = plVar11[2];
        lStack_b8 = plVar11[5];
        lVar10 = plVar11[4];
        lVar15 = plVar11[1];
        lVar3 = *plVar11;
        lVar13 = plVar11[0xb];
        lStack_90 = plVar11[10];
        lVar14 = plVar11[0xd];
        lStack_80 = plVar11[0xc];
        lStack_160 = plVar11[7];
        lVar16 = plVar11[6];
        lStack_98 = plVar11[9];
        lStack_a0 = plVar11[8];
        lStack_e0 = lVar3;
        lStack_d8 = lVar15;
        lStack_c0 = lVar10;
        lStack_b0 = lVar16;
        lStack_a8 = lStack_160;
        lStack_88 = lVar13;
        lStack_78 = lVar14;
        if (lStack_98 < 0) {
          func_0x000107c61174(lVar6);
          func_0x000107c61174(lVar9);
          FUN_1012ac38c(&lStack_e0,&lStack_150);
          func_0x000107c40834();
          func_0x000107c61180();
          if (lVar3 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1012ab1ec);
            (*pcVar2)();
          }
          lVar10 = lVar3;
          func_0x000107c5bbf4();
          func_0x000107c61180();
          func_0x000107c61170(lVar3);
          if (lVar10 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1012ab1e4);
            (*pcVar2)();
          }
          lStack_160 = lVar10;
          func_0x000107c51b2c();
          FUN_1012a9dfc(&lStack_e0);
          func_0x000107c61170(lVar10);
        }
        else {
          func_0x000107c61174(lVar6);
          func_0x000107c61174(lVar9);
          FUN_1012ac38c(&lStack_e0,&lStack_150);
          func_0x000107c6142c(lVar15);
          func_0x000107c6142c(lVar10);
          func_0x000107c6142c(lVar16);
          func_0x000107c6142c(lVar14);
          func_0x000107c6142c(lVar13);
        }
        plVar11 = (long *)(lVar9 + _DAT_112d6f630);
        lVar10 = plVar11[0xb];
        lStack_100 = plVar11[10];
        lStack_e8 = plVar11[0xd];
        lStack_f0 = plVar11[0xc];
        lVar13 = plVar11[7];
        lStack_120 = plVar11[6];
        lStack_108 = plVar11[9];
        lStack_110 = plVar11[8];
        lStack_138 = plVar11[3];
        lStack_140 = plVar11[2];
        lStack_128 = plVar11[5];
        lStack_130 = plVar11[4];
        lStack_148 = plVar11[1];
        lVar3 = *plVar11;
        lStack_150 = lVar3;
        lStack_118 = lVar13;
        lStack_f8 = lVar10;
        if (lStack_108 < 0) {
          func_0x000107c61174();
          func_0x000107c40834();
          func_0x000107c61180();
          if (lVar3 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1012ab1dc);
            (*pcVar2)();
          }
          lVar10 = lVar3;
          func_0x000107c5bbf4();
          func_0x000107c61180();
          func_0x000107c61170(lVar3);
          if (lVar10 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1012ab1f0);
            (*pcVar2)();
          }
          lVar3 = lVar10;
          func_0x000107c51b2c();
          FUN_1012a9dfc(&lStack_150);
          func_0x000107c61170(lVar6);
          func_0x000107c61170(lVar9);
          func_0x000107c61170(lVar10);
          if (lVar3 <= lStack_160) goto LAB_1012aae54;
LAB_1012aadc8:
          plVar12 = param_2 + 1;
          plVar11 = param_4;
        }
        else {
          func_0x000107c61434(lVar10);
          func_0x000107c61170(lVar6);
          func_0x000107c61170(lVar9);
          func_0x000107c6142c(lVar10);
          if (lStack_160 < lVar13) goto LAB_1012aadc8;
LAB_1012aae54:
          plVar12 = param_2;
          plVar11 = param_4 + 1;
          param_2 = param_4;
        }
        param_4 = plVar11;
        if (param_1 != param_2) {
          *param_1 = *param_2;
        }
        param_1 = param_1 + 1;
        plVar11 = param_1;
        param_2 = plVar12;
      } while (param_4 < plVar4);
    }
  }
  else {
    if (((param_4 < param_2) || (param_2 + lVar6 <= param_4)) || (param_4 != param_2)) {
      func_0x000107c610b8(param_4,param_2,lVar6 << 3);
    }
    plVar4 = param_4 + lVar6;
    plVar11 = param_2;
    if ((param_1 < param_2) && (7 < lVar10)) {
      do {
        plVar7 = param_2 + -1;
        plVar12 = param_3;
        while( true ) {
          param_3 = plVar12 + -1;
          plVar8 = plVar4 + -1;
          lVar6 = *plVar8;
          lVar9 = *plVar7;
          plVar11 = (long *)(lVar6 + _DAT_112d6f630);
          lStack_c8 = plVar11[3];
          lStack_d0 = plVar11[2];
          lStack_b8 = plVar11[5];
          lVar10 = plVar11[4];
          lVar15 = plVar11[1];
          lVar3 = *plVar11;
          lVar13 = plVar11[0xb];
          lStack_90 = plVar11[10];
          lVar14 = plVar11[0xd];
          lStack_80 = plVar11[0xc];
          lStack_160 = plVar11[7];
          lVar16 = plVar11[6];
          lStack_98 = plVar11[9];
          lStack_a0 = plVar11[8];
          lStack_e0 = lVar3;
          lStack_d8 = lVar15;
          lStack_c0 = lVar10;
          lStack_b0 = lVar16;
          lStack_a8 = lStack_160;
          lStack_88 = lVar13;
          lStack_78 = lVar14;
          if (lStack_98 < 0) {
            func_0x000107c61174(lVar6);
            func_0x000107c61174(lVar9);
            FUN_1012ac38c(&lStack_e0,&lStack_150);
            func_0x000107c40834();
            func_0x000107c61180();
            if (lVar3 == 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1012ab1d4);
              (*pcVar2)();
            }
            lVar10 = lVar3;
            func_0x000107c5bbf4();
            func_0x000107c61180();
            func_0x000107c61170(lVar3);
            if (lVar10 == 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1012ab1e8);
              (*pcVar2)();
            }
            lStack_160 = lVar10;
            func_0x000107c51b2c();
            FUN_1012a9dfc(&lStack_e0);
            func_0x000107c61170(lVar10);
          }
          else {
            func_0x000107c61174(lVar6);
            func_0x000107c61174(lVar9);
            FUN_1012ac38c(&lStack_e0,&lStack_150);
            func_0x000107c6142c(lVar15);
            func_0x000107c6142c(lVar10);
            func_0x000107c6142c(lVar16);
            func_0x000107c6142c(lVar14);
            func_0x000107c6142c(lVar13);
          }
          plVar11 = (long *)(lVar9 + _DAT_112d6f630);
          lVar13 = plVar11[0xb];
          lStack_100 = plVar11[10];
          lStack_e8 = plVar11[0xd];
          lStack_f0 = plVar11[0xc];
          lVar3 = plVar11[7];
          lStack_120 = plVar11[6];
          lStack_108 = plVar11[9];
          lStack_110 = plVar11[8];
          lStack_138 = plVar11[3];
          lStack_140 = plVar11[2];
          lStack_128 = plVar11[5];
          lStack_130 = plVar11[4];
          lStack_148 = plVar11[1];
          lVar10 = *plVar11;
          lStack_150 = lVar10;
          lStack_118 = lVar3;
          lStack_f8 = lVar13;
          if (lStack_108 < 0) {
            func_0x000107c61174();
            func_0x000107c40834();
            func_0x000107c61180();
            if (lVar10 == 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1012ab1e0);
              (*pcVar2)();
            }
            lVar13 = lVar10;
            func_0x000107c5bbf4();
            func_0x000107c61180();
            func_0x000107c61170(lVar10);
            if (lVar13 == 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1012ab1d8);
              (*pcVar2)();
            }
            lVar3 = lVar13;
            func_0x000107c51b2c();
            FUN_1012a9dfc(&lStack_150);
            func_0x000107c61170(lVar6);
            func_0x000107c61170(lVar9);
            func_0x000107c61170(lVar13);
          }
          else {
            func_0x000107c61434(lVar13);
            func_0x000107c61170(lVar6);
            func_0x000107c61170(lVar9);
            func_0x000107c6142c(lVar13);
          }
          if (lStack_160 < lVar3) break;
          if (plVar12 != plVar4) {
            *param_3 = *plVar8;
          }
          plVar4 = plVar8;
          plVar11 = param_2;
          plVar12 = param_3;
          if (plVar8 <= param_4) goto LAB_1012ab160;
        }
        if (plVar12 != param_2) {
          *param_3 = *plVar7;
        }
        plVar11 = plVar7;
      } while ((param_1 < plVar7) && (param_2 = plVar7, param_4 < plVar4));
    }
  }
LAB_1012ab160:
  uVar5 = (long)plVar4 - (long)param_4;
  uVar1 = uVar5 + 7;
  if (-1 < (long)uVar5) {
    uVar1 = uVar5;
  }
  if ((plVar11 != param_4) || ((long *)((long)param_4 + (uVar1 & 0xfffffffffffffff8)) <= plVar11)) {
    func_0x000107c610b8(plVar11,param_4,((long)uVar1 >> 3) << 3);
  }
  return 1;
}



/* Entry: 1012ab1f0; end: 1012ab2af;  */

ulong FUN_1012ab1f0(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  FUN_1012a899c();
  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_1;
    func_0x000107c508f0();
    func_0x000107c61180();
    if (uVar3 == 0) {
      func_0x000107c61170(param_1);
      uVar3 = 0;
    }
    else {
      uVar1 = uVar3;
      func_0x000107c4f078();
      func_0x000107c61180();
      while (uVar1 != 0) {
        uVar2 = uVar1;
        func_0x000107c49aa0();
        if ((uVar2 & 1) != 0) {
          func_0x000107c61170(uVar1);
          func_0x000107c61170(param_1);
          return uVar3;
        }
        func_0x000107c61170(uVar3);
        uVar2 = uVar1;
        func_0x000107c4f078();
        func_0x000107c61180();
        uVar3 = uVar1;
        uVar1 = uVar2;
      }
      func_0x000107c61170(param_1);
    }
  }
  return uVar3;
}



/* Entry: 1012ab2b0; end: 1012ac38b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1012ab2b0(undefined8 param_1,ulong param_2)

{
  ulong *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  code *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  uint uVar15;
  long unaff_x20;
  ulong uVar16;
  undefined8 uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  undefined1 auStack_168 [24];
  undefined1 auStack_150 [112];
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  
  if (param_2 != 0) {
    uVar7 = param_2;
    func_0x000107c61174();
    uVar16 = param_2;
    func_0x000107c44fdc();
    func_0x000107c61180();
    uVar18 = uVar7;
    if (uVar16 == 0) {
LAB_1012ab454:
      uVar16 = param_2;
      func_0x000107c44fdc();
      func_0x000107c61180();
      if (uVar16 == 0) {
LAB_1012ab510:
        uVar16 = param_2;
        func_0x000107c3cfb0();
        func_0x000107c61180();
        if (uVar16 != 0) {
          lVar8 = 0;
          FUN_1012b78a8();
          uVar7 = uVar16;
          func_0x000107c61480();
          if (uVar7 == 0) {
            func_0x000107c61170(param_2);
            func_0x000107c615e8(uVar16);
            goto LAB_1012ac2a0;
          }
          uVar18 = param_2;
          func_0x000107c44fdc();
          func_0x000107c61180();
          if (uVar18 == 0) goto LAB_1012ac290;
          uVar19 = uVar18;
          func_0x000107c5faec();
          func_0x000107c61170(uVar18);
          uVar18 = 0;
          if (((uVar19 == 0xd000000000000038) && (lVar8 == -0x7ffffffef10cc5f0)) ||
             (func_0x000107c605b8(0xd000000000000038,0x800000010ef33a10,uVar19,lVar8,0),
             (uVar18 & 1) != 0)) {
            func_0x000107c6142c(lVar8);
            FUN_1012a7da4(uVar7);
            uVar15 = (uint)uVar7;
LAB_1012ab5bc:
            func_0x000107c61170(param_2);
            func_0x000107c615e8(uVar16);
            goto LAB_1012ac2a4;
          }
          if ((uVar19 != 0xd000000000000035) || (lVar8 != -0x7ffffffef10cc5b0)) {
            uVar18 = 0xd000000000000035;
            func_0x000107c605b8(0xd000000000000035,0x800000010ef33a50,uVar19,lVar8,0);
            if ((uVar18 & 1) == 0) {
              if ((uVar19 != 0xd000000000000038) || (lVar8 != -0x7ffffffef10cc570)) {
                uVar18 = 0;
                func_0x000107c605b8(0xd000000000000038,0x800000010ef33a90,uVar19,lVar8,0);
                if ((uVar18 & 1) == 0) {
                  uVar7 = 0xd000000000000039;
                  if ((uVar19 == 0xd000000000000039) && (lVar8 == -0x7ffffffef10cc530)) {
                    func_0x000107c6142c(0x800000010ef33ad0);
                  }
                  else {
                    func_0x000107c605b8(0xd000000000000039,0x800000010ef33ad0,uVar19,lVar8,0);
                    func_0x000107c6142c(lVar8);
                    if ((uVar7 & 1) == 0) goto LAB_1012ac290;
                  }
                  lVar8 = _DAT_112d6f3d0;
                  func_0x000107c61428(unaff_x20 + _DAT_112d6f3d0,auStack_150,0,0);
                  uVar7 = *(ulong *)(unaff_x20 + lVar8);
                  if (uVar7 >> 0x3e == 0) {
                    uVar18 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
                  }
                  else {
                    uVar18 = uVar7 & 0xffffffffffffff8;
                    if (0x7fffffffffffffff < uVar7) {
                      uVar18 = uVar7;
                    }
                    func_0x000107c60480();
                  }
                  func_0x000107c61434(uVar7);
                  if (uVar18 != 0) {
                    uVar19 = 0;
                    do {
                      if ((uVar7 & 0xc000000000000001) == 0) {
                        if (*(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
                          pcVar5 = (code *)SoftwareBreakpoint(1,0x1012ac370);
                          (*pcVar5)();
                        }
                        uVar22 = *(ulong *)(uVar7 + uVar19 * 8 + 0x20);
                        func_0x000107c61174();
                      }
                      else {
                        uVar22 = uVar19;
                        FUN_1012bfd08(uVar19,uVar7);
                      }
                      if (SCARRY8(uVar19,1)) {
                    /* WARNING: Does not return */
                        pcVar5 = (code *)SoftwareBreakpoint(1,0x1012abf84);
                        (*pcVar5)();
                      }
                      uVar21 = uVar19 + 1;
                      puVar1 = (ulong *)(uVar22 + _DAT_112d6f630);
                      if ((long)puVar1[9] < 0) {
                        func_0x000107c6142c(uVar7);
                        uStack_88 = puVar1[0xb];
                        uStack_90 = puVar1[10];
                        uStack_78 = puVar1[0xd];
                        uStack_80 = puVar1[0xc];
                        uStack_a8 = puVar1[7];
                        uStack_b0 = puVar1[6];
                        uStack_98 = puVar1[9];
                        uStack_a0 = puVar1[8];
                        uStack_d8 = puVar1[1];
                        uVar7 = *puVar1;
                        uStack_c8 = puVar1[3];
                        uStack_d0 = puVar1[2];
                        uStack_b8 = puVar1[5];
                        uStack_c0 = puVar1[4];
                        uStack_e0 = uVar7;
                        if ((long)uStack_98 < 0) {
                          func_0x000107c61174(uVar7);
                          uVar15 = (uint)uVar7;
                          func_0x0001012a7cbc();
                          FUN_1012a9dfc(&uStack_e0);
                          func_0x000107c61170(param_2);
                          func_0x000107c615e8(uVar16);
                          func_0x000107c61170(uVar22);
                          goto LAB_1012ac2a4;
                        }
                        func_0x000107c61170(uVar22);
                        goto LAB_1012ac290;
                      }
                      func_0x000107c61170();
                      uVar19 = uVar19 + 1;
                    } while (uVar21 != uVar18);
                  }
                  func_0x000107c615e8(uVar16);
                  func_0x000107c6142c(uVar7);
                  goto LAB_1012ac29c;
                }
              }
              func_0x000107c6142c(lVar8);
              FUN_1012a7ffc(uVar7);
              uVar15 = (uint)uVar7;
              goto LAB_1012ab5bc;
            }
          }
          func_0x000107c6142c(lVar8);
          lVar8 = *(long *)(unaff_x20 + _DAT_112d6f428);
          if (lVar8 == 0) {
LAB_1012ac290:
            func_0x000107c615e8(uVar16);
            goto LAB_1012ac29c;
          }
          puVar1 = (ulong *)(lVar8 + _DAT_112d6f630);
          uVar23 = puVar1[3];
          uVar22 = puVar1[2];
          uStack_b8 = puVar1[5];
          uVar19 = puVar1[4];
          uVar27 = puVar1[1];
          uVar25 = *puVar1;
          uVar18 = puVar1[0xb];
          uVar26 = puVar1[10];
          uVar24 = puVar1[0xd];
          uVar21 = puVar1[0xc];
          uVar29 = puVar1[7];
          uVar28 = puVar1[6];
          uStack_98 = puVar1[9];
          uStack_a0 = puVar1[8];
          uStack_e0 = uVar25;
          uStack_d8 = uVar27;
          uStack_d0 = uVar22;
          uStack_c8 = uVar23;
          uStack_c0 = uVar19;
          uStack_b0 = uVar28;
          uStack_a8 = uVar29;
          uStack_90 = uVar26;
          uStack_88 = uVar18;
          uStack_80 = uVar21;
          uStack_78 = uVar24;
          if ((long)uStack_98 < 0) goto LAB_1012ac290;
          bVar4 = (byte)uStack_98;
          func_0x000107c61174();
          FUN_1012ac38c(&uStack_e0);
          func_0x000107c6142c(uVar28);
          uVar28 = uVar25 & 0xffffffffffff;
          if ((uVar27 & 0x2000000000000000) != 0) {
            uVar28 = uVar27 >> 0x38 & 0xf;
          }
          if (uVar28 == 0) {
            func_0x000107c61170(lVar8);
            func_0x000107c6142c(uVar27);
            func_0x000107c6142c(uVar19);
            func_0x000107c6142c(uVar24);
            func_0x000107c615e8(uVar16);
            func_0x000107c61170(param_2);
            func_0x000107c6142c(uVar18);
            goto LAB_1012ac2a0;
          }
          uVar28 = unaff_x20 + _DAT_112d6f3a0;
          func_0x000107c61618();
          if (uVar28 == 0) {
            uVar28 = unaff_x20 + _DAT_112d6f3a8;
            func_0x000107c61618();
            if (uVar28 != 0) goto LAB_1012abb0c;
            FUN_1012ab1f0();
            if (uVar28 == 0) {
              func_0x000107c6142c(uVar24);
              func_0x000107c6142c(uVar27);
              func_0x000107c6142c(uVar19);
              func_0x000107c61170(lVar8);
              func_0x000107c615e8(uVar16);
              func_0x000107c61170(param_2);
              goto LAB_1012abe0c;
            }
          }
          else {
LAB_1012abb0c:
            func_0x000107c61174();
            func_0x000107c61174();
            uVar10 = uVar28;
            func_0x000107c4f078();
            func_0x000107c61180();
            uVar9 = uVar28;
            while (uVar10 != 0) {
              uVar11 = uVar10;
              func_0x000107c49aa0();
              if ((uVar11 & 1) != 0) {
                func_0x000107c61170(uVar10);
                func_0x000107c61170(uVar28);
                func_0x000107c61170(uVar28);
                uVar28 = uVar9;
                goto LAB_1012abfa4;
              }
              func_0x000107c61170(uVar9);
              uVar11 = uVar10;
              func_0x000107c4f078();
              func_0x000107c61180();
              uVar9 = uVar10;
              uVar10 = uVar11;
            }
            func_0x000107c61170(uVar28);
            func_0x000107c61170(uVar28);
            uVar28 = uVar9;
          }
LAB_1012abfa4:
          puVar13 = PTR_PTR_1126aead8;
          func_0x000107c610f8(PTR_PTR_1126aead8);
          func_0x000107c4807c();
          uVar6 = 1;
          if (*(char *)(uVar7 + _DAT_112d6f9b0) == '\0') {
            uVar6 = 2;
          }
          uVar21 = uVar21 & 0xffffffffffff;
          if ((uVar24 & 0x2000000000000000) != 0) {
            uVar21 = uVar24 >> 0x38 & 0xf;
          }
          if (uVar21 == 0) {
            lVar12 = *(long *)(uVar7 + _DAT_112d6f9a8);
            func_0x000107c5d984();
            func_0x000107c61180();
            if (lVar12 != 0) {
              func_0x000107c5faec();
              func_0x000107c61170(lVar12);
            }
          }
          else {
            func_0x000107c61434(uVar24);
          }
          if (SUB168(SEXT816((long)uVar29) * SEXT816(1000),8) != (long)(uVar29 * 1000) >> 0x3f) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1012ac374);
            (*pcVar5)();
          }
          uVar20 = *(undefined8 *)(uVar7 + _DAT_112d6f9a8);
          uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112d6f3c0);
          uVar3 = ((undefined8 *)(unaff_x20 + _DAT_112d6f3c0))[1];
          uVar17 = *(undefined8 *)(uVar7 + _DAT_112d6f9a0);
          func_0x000103b12474();
          func_0x000107c610f8();
          func_0x000107c61174(uVar17);
          func_0x000107c61174(uVar20);
          func_0x000107c61174(puVar13);
          func_0x000107c61434(uVar27);
          func_0x000107c61434(uVar19);
          func_0x000100b64c10(uVar2,uVar3);
          uVar7 = uVar18;
          func_0x000107c61434();
          func_0x000103b11a64(uVar17,uVar20,uVar6,puVar13,uVar2,uVar3,uVar25,uVar27,uVar22,uVar23,
                              uVar19,uVar29 * 1000,uVar26,uVar7,bVar4 & 1);
          lVar12 = *(long *)(*(long *)(unaff_x20 + _DAT_112d6f3b8) + _DAT_112febe30);
          func_0x000107c5c734();
          func_0x000107c61180();
          if (lVar12 == 0) {
            func_0x000107c6142c(uVar24);
            func_0x000107c61170(uVar17);
          }
          else {
            func_0x000107c615f0();
            func_0x000107c61174(uVar17);
            puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
            func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sypN_11034f1a8 + 8);
            func_0x000107c4eeb4(lVar12);
            func_0x000107c6142c(uVar24);
            func_0x000107c61170(puVar14);
            func_0x000107c61170(uVar17);
            func_0x000107c61170(uVar17);
            func_0x000107c615ec(lVar12,2);
          }
          func_0x000107c61170(puVar13);
          func_0x000107c61170(uVar28);
          func_0x000107c6142c(uVar27);
          func_0x000107c6142c(uVar19);
          func_0x000107c6142c(uVar18);
          func_0x000107c61170(lVar8);
          func_0x000107c615e8(uVar16);
LAB_1012abd7c:
          func_0x000107c61170(param_2);
          uVar15 = 1;
          goto LAB_1012ac2a4;
        }
LAB_1012ac29c:
        func_0x000107c61170(param_2);
        goto LAB_1012ac2a0;
      }
      uVar7 = uVar16;
      func_0x000107c5faec();
      func_0x000107c61170(uVar16);
      if ((uVar7 == 0xd000000000000039) && (uVar18 == 0x800000010ef33ad0)) {
        func_0x000107c6142c(0x800000010ef33ad0);
      }
      else {
        func_0x000107c605b8(uVar7,uVar18,0xd000000000000039,0x800000010ef33ad0,0);
        func_0x000107c6142c(uVar18);
        if ((uVar7 & 1) == 0) goto LAB_1012ab510;
      }
      uVar16 = param_2;
      func_0x000107c3cfb0();
      func_0x000107c61180();
      if (uVar16 != 0) {
        uVar6 = 0;
        FUN_1012aeb90(0);
        uVar7 = uVar16;
        func_0x000107c61480(uVar16,uVar6);
        if (uVar7 != 0) {
          func_0x000107c615f0(uVar16);
LAB_1012ab830:
          lVar8 = *(long *)(unaff_x20 + _DAT_112d6f3c8);
          if (lVar8 != 0) {
            puVar1 = (ulong *)(uVar7 + _DAT_112d6f630);
            uStack_88 = puVar1[0xb];
            uStack_90 = puVar1[10];
            uStack_78 = puVar1[0xd];
            uStack_80 = puVar1[0xc];
            uStack_a8 = puVar1[7];
            uStack_b0 = puVar1[6];
            uStack_98 = puVar1[9];
            uStack_a0 = puVar1[8];
            uStack_c8 = puVar1[3];
            uStack_d0 = puVar1[2];
            uStack_b8 = puVar1[5];
            uStack_c0 = puVar1[4];
            uStack_d8 = puVar1[1];
            uVar16 = *puVar1;
            uStack_e0 = uVar16;
            if ((long)uStack_98 < 0) {
              func_0x000107c61174();
              FUN_1012ac38c(&uStack_e0,auStack_150);
              func_0x0001012a7cbc(uVar16,lVar8);
              uVar15 = (uint)uVar16;
              FUN_1012a9dfc(&uStack_e0);
              func_0x000107c61170(param_2);
              func_0x000107c61170(uVar7);
              func_0x000107c61170(uVar7);
              func_0x000107c61170(lVar8);
              goto LAB_1012ac2a4;
            }
          }
          func_0x000107c61170(param_2);
          func_0x000107c61170(uVar7);
          param_2 = uVar7;
          goto LAB_1012ac29c;
        }
        func_0x000107c615e8(uVar16);
      }
      lVar8 = _DAT_112d6f3d0;
      func_0x000107c61428(unaff_x20 + _DAT_112d6f3d0,auStack_168,0,0);
      uVar16 = *(ulong *)(unaff_x20 + lVar8);
      if (uVar16 >> 0x3e == 0) {
        uVar18 = *(ulong *)((uVar16 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar18 = uVar16 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar16) {
          uVar18 = uVar16;
        }
        func_0x000107c60480();
      }
      func_0x000107c61434(uVar16);
      if (uVar18 != 0) {
        uVar19 = 0;
        do {
          if ((uVar16 & 0xc000000000000001) == 0) {
            if (*(ulong *)((uVar16 & 0xffffffffffffff8) + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x1012abea8);
              (*pcVar5)();
            }
            uVar7 = *(ulong *)(uVar16 + uVar19 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            uVar7 = uVar19;
            FUN_1012bfd08(uVar19,uVar16);
          }
          if (SCARRY8(uVar19,1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1012ab804);
            (*pcVar5)();
          }
          uVar22 = uVar19 + 1;
          if (*(long *)(uVar7 + _DAT_112d6f630 + 0x48) < 0) {
            func_0x000107c6142c(uVar16);
            func_0x000107c61174();
            goto LAB_1012ab830;
          }
          func_0x000107c61170();
          uVar19 = uVar19 + 1;
        } while (uVar22 != uVar18);
      }
    }
    else {
      uVar19 = uVar16;
      func_0x000107c5faec();
      func_0x000107c61170(uVar16);
      if ((uVar19 == 0xd000000000000035) && (uVar7 == 0x800000010ef33a50)) {
        func_0x000107c6142c(0x800000010ef33a50);
      }
      else {
        uVar18 = uVar7;
        func_0x000107c605b8(uVar19,uVar7,0xd000000000000035,0x800000010ef33a50,0);
        func_0x000107c6142c(uVar7);
        if ((uVar19 & 1) == 0) goto LAB_1012ab454;
      }
      uVar16 = param_2;
      func_0x000107c3cfb0();
      func_0x000107c61180();
      if (uVar16 != 0) {
        uVar6 = 0;
        FUN_1012aeb90(0);
        uVar7 = uVar16;
        func_0x000107c61480(uVar16,uVar6);
        if (uVar7 != 0) {
LAB_1012ab5e4:
          lVar8 = *(long *)(unaff_x20 + _DAT_112d6f3c8);
          if (lVar8 != 0) {
            puVar1 = (ulong *)(uVar7 + _DAT_112d6f630);
            uVar21 = puVar1[3];
            uVar19 = puVar1[2];
            uStack_b8 = puVar1[5];
            uVar16 = puVar1[4];
            uVar26 = puVar1[1];
            uVar24 = *puVar1;
            uVar18 = puVar1[0xb];
            uVar25 = puVar1[10];
            uVar23 = puVar1[0xd];
            uVar22 = puVar1[0xc];
            uVar28 = puVar1[7];
            uVar27 = puVar1[6];
            uStack_98 = puVar1[9];
            uStack_a0 = puVar1[8];
            uStack_e0 = uVar24;
            uStack_d8 = uVar26;
            uStack_d0 = uVar19;
            uStack_c8 = uVar21;
            uStack_c0 = uVar16;
            uStack_b0 = uVar27;
            uStack_a8 = uVar28;
            uStack_90 = uVar25;
            uStack_88 = uVar18;
            uStack_80 = uVar22;
            uStack_78 = uVar23;
            if (-1 < (long)uStack_98) {
              bVar4 = (byte)uStack_98;
              func_0x000107c61174();
              FUN_1012ac38c(&uStack_e0);
              func_0x000107c6142c(uVar27);
              uVar27 = uVar24 & 0xffffffffffff;
              if ((uVar26 & 0x2000000000000000) != 0) {
                uVar27 = uVar26 >> 0x38 & 0xf;
              }
              if (uVar27 == 0) {
                func_0x000107c61170(uVar7);
                func_0x000107c61170(lVar8);
                func_0x000107c6142c(uVar26);
                func_0x000107c6142c(uVar16);
                func_0x000107c6142c(uVar23);
                func_0x000107c61170(param_2);
                func_0x000107c6142c(uVar18);
                goto LAB_1012ac2a0;
              }
              uVar27 = unaff_x20 + _DAT_112d6f3a0;
              func_0x000107c61618();
              if (uVar27 == 0) {
                uVar27 = unaff_x20 + _DAT_112d6f3a8;
                func_0x000107c61618();
                if (uVar27 != 0) goto LAB_1012ab6c4;
                FUN_1012ab1f0();
                if (uVar27 == 0) {
                  func_0x000107c6142c(uVar23);
                  func_0x000107c6142c(uVar26);
                  func_0x000107c6142c(uVar16);
                  func_0x000107c61170(uVar7);
                  func_0x000107c61170(lVar8);
                  func_0x000107c61170(param_2);
LAB_1012abe0c:
                  func_0x000107c6142c(uVar18);
                  uVar15 = 1;
                  goto LAB_1012ac2a4;
                }
              }
              else {
LAB_1012ab6c4:
                func_0x000107c61174();
                func_0x000107c61174();
                uVar9 = uVar27;
                func_0x000107c4f078();
                func_0x000107c61180();
                uVar29 = uVar27;
                while (uVar9 != 0) {
                  uVar10 = uVar9;
                  func_0x000107c49aa0();
                  if ((uVar10 & 1) != 0) {
                    func_0x000107c61170(uVar9);
                    func_0x000107c61170(uVar27);
                    func_0x000107c61170(uVar27);
                    uVar27 = uVar29;
                    goto LAB_1012ab93c;
                  }
                  func_0x000107c61170(uVar29);
                  uVar10 = uVar9;
                  func_0x000107c4f078();
                  func_0x000107c61180();
                  uVar29 = uVar9;
                  uVar9 = uVar10;
                }
                func_0x000107c61170(uVar27);
                func_0x000107c61170(uVar27);
                uVar27 = uVar29;
              }
LAB_1012ab93c:
              puVar13 = PTR_PTR_1126aead8;
              func_0x000107c610f8();
              func_0x000107c4807c();
              uVar6 = 1;
              if (*(char *)(lVar8 + _DAT_112d6f9b0) == '\0') {
                uVar6 = 2;
              }
              uVar22 = uVar22 & 0xffffffffffff;
              if ((uVar23 & 0x2000000000000000) != 0) {
                uVar22 = uVar23 >> 0x38 & 0xf;
              }
              if (uVar22 == 0) {
                lVar12 = *(long *)(lVar8 + _DAT_112d6f9a8);
                func_0x000107c5d984();
                func_0x000107c61180();
                if (lVar12 != 0) {
                  func_0x000107c5faec();
                  func_0x000107c61170(lVar12);
                }
              }
              else {
                func_0x000107c61434();
              }
              if (SUB168(SEXT816((long)uVar28) * SEXT816(1000),8) != (long)(uVar28 * 1000) >> 0x3f)
              {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x1012ac36c);
                (*pcVar5)();
              }
              uVar20 = *(undefined8 *)(lVar8 + _DAT_112d6f9a8);
              uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112d6f3c0);
              uVar3 = ((undefined8 *)(unaff_x20 + _DAT_112d6f3c0))[1];
              uVar17 = *(undefined8 *)(lVar8 + _DAT_112d6f9a0);
              func_0x000103b12474();
              func_0x000107c610f8();
              func_0x000107c61174(uVar17);
              func_0x000107c61174(uVar20);
              func_0x000107c61174(puVar13);
              func_0x000107c61434(uVar26);
              func_0x000107c61434(uVar16);
              func_0x000100b64c10(uVar2,uVar3);
              uVar22 = uVar18;
              func_0x000107c61434();
              func_0x000103b11a64(uVar17,uVar20,uVar6,puVar13,uVar2,uVar3,uVar24,uVar26,uVar19,
                                  uVar21,uVar16,uVar28 * 1000,uVar25,uVar22,bVar4 & 1);
              lVar12 = *(long *)(*(long *)(unaff_x20 + _DAT_112d6f3b8) + _DAT_112febe30);
              func_0x000107c5c734();
              func_0x000107c61180();
              if (lVar12 == 0) {
                func_0x000107c6142c(uVar23);
                func_0x000107c61170(uVar17);
              }
              else {
                func_0x000107c615f0();
                func_0x000107c61174(uVar17);
                puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
                func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sypN_11034f1a8 + 8)
                ;
                func_0x000107c4eeb4(lVar12);
                func_0x000107c6142c(uVar23);
                func_0x000107c61170(puVar14);
                func_0x000107c61170(uVar17);
                func_0x000107c61170(uVar17);
                func_0x000107c615ec(lVar12,2);
              }
              func_0x000107c61170(puVar13);
              func_0x000107c61170(uVar27);
              func_0x000107c6142c(uVar26);
              func_0x000107c6142c(uVar16);
              func_0x000107c6142c(uVar18);
              func_0x000107c61170(uVar7);
              func_0x000107c61170(lVar8);
              goto LAB_1012abd7c;
            }
          }
          func_0x000107c61170(uVar7);
          goto LAB_1012ac29c;
        }
        func_0x000107c615e8(uVar16);
      }
      lVar8 = _DAT_112d6f3d0;
      func_0x000107c61428(unaff_x20 + _DAT_112d6f3d0,auStack_168,0,0);
      uVar16 = *(ulong *)(unaff_x20 + lVar8);
      if (uVar16 >> 0x3e == 0) {
        uVar18 = *(ulong *)((uVar16 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar18 = uVar16 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar16) {
          uVar18 = uVar16;
        }
        func_0x000107c60480();
      }
      func_0x000107c61434(uVar16);
      if (uVar18 != 0) {
        uVar19 = 0;
        do {
          if ((uVar16 & 0xc000000000000001) == 0) {
            if (*(ulong *)((uVar16 & 0xffffffffffffff8) + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x1012abe58);
              (*pcVar5)();
            }
            uVar7 = *(ulong *)(uVar16 + uVar19 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            uVar7 = uVar19;
            FUN_1012bfd08(uVar19,uVar16);
          }
          if (SCARRY8(uVar19,1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1012ab454);
            (*pcVar5)();
          }
          uVar22 = uVar19 + 1;
          if (-1 < *(long *)(uVar7 + _DAT_112d6f630 + 0x48)) {
            func_0x000107c6142c(uVar16);
            goto LAB_1012ab5e4;
          }
          func_0x000107c61170();
          uVar19 = uVar19 + 1;
        } while (uVar22 != uVar18);
      }
    }
    func_0x000107c61170(param_2);
    func_0x000107c6142c(uVar16);
  }
LAB_1012ac2a0:
  uVar15 = 0;
LAB_1012ac2a4:
  return uVar15 & 1;
}



/* Entry: 1012ac38c; end: 1012ac3c7;  */

undefined8 FUN_1012ac38c(undefined8 param_1,undefined8 param_2)

{
  FUN_1012b401c(param_2,param_1);
  return param_2;
}



/* Entry: 1012ac3c8; end: 1012ac3cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012ac3c8(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + _DAT_112d6f3b8);
    func_0x000107c61174();
    func_0x000107c61170(lVar1);
    uVar3 = *(undefined8 *)(lVar2 + _DAT_112febe38);
    func_0x000107c6157c(uVar3);
    func_0x000107c61170(lVar2);
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_60 = 0;
    uStack_58 = 0x8000000000000000;
    uStack_50 = 0;
    uStack_48 = 0;
    func_0x000107c5f1ec(&uStack_90);
    func_0x000107c61574(uVar3);
  }
  return;
}



/* Entry: 1012ac3d0; end: 1012ac40f;  */

void FUN_1012ac3d0(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1012ac410; end: 1012ac44b;  */

void FUN_1012ac410(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c420a8();
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1012ac44c; end: 1012ad30f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012ac44c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

{
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112d6f470) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112d6f478) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112d6f480) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112d6f488) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112d6f490) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112d6f498) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112d6f4a0) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112d6f4a8) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112d6f4b0) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112d6f4b8) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112d6f4c0) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_112d6f4c8) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_112d6f4d0) = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_112d6f4d8) = param_14;
  *(undefined8 *)(unaff_x20 + _DAT_112d6f4e0) = param_15;
  *(undefined8 *)(unaff_x20 + _DAT_112d6f4e8) = param_16;
  *(undefined8 *)(unaff_x20 + _DAT_112d6f4f0) = param_17;
  *(undefined8 *)(unaff_x20 + _DAT_112d6f4f8) = param_18;
  *(undefined8 *)(unaff_x20 + _DAT_112d6f500) = param_19;
  *(undefined8 *)(unaff_x20 + _DAT_112d6f508) = param_20;
  func_0x000107c61154(auStack_78,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1012ad310; end: 1012ad3d3;  */

void FUN_1012ad310(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined1 auStack_58 [24];
  
  if (param_1 != 0) {
    FUN_1012b78a8(0);
    func_0x000107c610f8();
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_1);
    lVar1 = param_1;
    FUN_1012b7744();
    func_0x000107c61170(param_3);
    func_0x000107c61428(param_4 + 0x10,auStack_58,0,0);
    param_4 = param_4 + 0x10;
    func_0x000107c61618();
    if (param_4 != 0) {
      FUN_1012b7eb8(lVar1);
      func_0x000107c61170(param_4);
    }
    func_0x000107c61170(lVar1);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1012ad3d4; end: 1012ad433; -[_TtC24SCProfileCalendarSection45ProfileCalendarFriendProfileSectionEntryPoint init] */

void FUN_1012ad3d4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCProfileCalendarSection.ProfileCalendarFriendProfileSectionEntryPoint",0x46,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1012ad400);
  (*pcVar1)();
}



/* Entry: 1012ad434; end: 1012ad5ab; -[_TtC24SCProfileCalendarSection45ProfileCalendarFriendProfileSectionEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001012ad450: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012ad470: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012ad490: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012ad4b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012ad4d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012ad4f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012ad510: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012ad530: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012ad550: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012ad570: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012ad554) */
/* WARNING: Removing unreachable block (ram,0x0001012ad534) */
/* WARNING: Removing unreachable block (ram,0x0001012ad514) */
/* WARNING: Removing unreachable block (ram,0x0001012ad4f4) */
/* WARNING: Removing unreachable block (ram,0x0001012ad4d4) */
/* WARNING: Removing unreachable block (ram,0x0001012ad4b4) */
/* WARNING: Removing unreachable block (ram,0x0001012ad494) */
/* WARNING: Removing unreachable block (ram,0x0001012ad474) */
/* WARNING: Removing unreachable block (ram,0x0001012ad454) */
/* WARNING: Removing unreachable block (ram,0x0001012ad574) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012ad434(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d6f470));
  return;
}



/* Entry: 1012ad5ac; end: 1012ad5b3;  */

undefined8 FUN_1012ad5ac(void)

{
  return 0;
}



/* Entry: 1012ad5b4; end: 1012ad5fb;  */

undefined8 FUN_1012ad5b4(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112d6f510;
  func_0x0001000285a8(0x112d6f510,&UNK_10d930f80);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1012ad5fc; end: 1012ad603;  */

void FUN_1012ad5fc(undefined8 *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  uStack_38 = param_1[7];
  uStack_40 = param_1[6];
  uStack_28 = param_1[9];
  uStack_30 = param_1[8];
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  func_0x000107c61428(unaff_x20 + 0x10,auStack_88,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_1012b82c4(&uStack_70);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1012ad604; end: 1012ad647;  */

void FUN_1012ad604(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    func_0x000107c61520(param_4,param_2);
    *param_1 = param_4;
  }
  return;
}



/* Entry: 1012ad648; end: 1012ad66b;  */

void FUN_1012ad648(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  if (param_1 != 0) {
    FUN_1012b78a8(0);
    func_0x000107c610f8();
    func_0x000107c61174(uVar1);
    func_0x000107c61174(param_1);
    lVar2 = param_1;
    FUN_1012b7744();
    func_0x000107c61170(uVar1);
    func_0x000107c61428(lVar3 + 0x10,auStack_58,0,0);
    lVar3 = lVar3 + 0x10;
    func_0x000107c61618();
    if (lVar3 != 0) {
      FUN_1012b7eb8(lVar2);
      func_0x000107c61170(lVar3);
    }
    func_0x000107c61170(lVar2);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1012ad66c; end: 1012ad68b;  */

void FUN_1012ad66c(void)

{
  func_0x000107c61168(&PTR_PTR_1127c30b0);
  return;
}



/* Entry: 1012ad68c; end: 1012ae4eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012ad68c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

{
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112d6f568) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112d6f570) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112d6f578) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112d6f580) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112d6f588) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112d6f590) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112d6f598) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112d6f5a0) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112d6f5a8) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112d6f5b0) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112d6f5b8) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_112d6f5c0) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_112d6f5c8) = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_112d6f5d0) = param_14;
  *(undefined8 *)(unaff_x20 + _DAT_112d6f5d8) = param_15;
  *(undefined8 *)(unaff_x20 + _DAT_112d6f5e0) = param_16;
  *(undefined8 *)(unaff_x20 + _DAT_112d6f5e8) = param_17;
  *(undefined8 *)(unaff_x20 + _DAT_112d6f5f0) = param_18;
  *(undefined8 *)(unaff_x20 + _DAT_112d6f5f8) = param_19;
  *(undefined8 *)(unaff_x20 + _DAT_112d6f600) = param_20;
  func_0x000107c61154(auStack_78,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1012ae4ec; end: 1012ae58f;  */

void FUN_1012ae4ec(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  if (param_1 != 0) {
    FUN_1012b78a8(0);
    func_0x000107c610f8();
    func_0x000107c61174(param_1);
    lVar1 = param_1;
    FUN_1012b7744();
    func_0x000107c61170(param_1);
    func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
    param_3 = param_3 + 0x10;
    func_0x000107c61618();
    if (param_3 != 0) {
      FUN_1012b7eb8(lVar1);
      func_0x000107c61170(param_3);
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1012ae590; end: 1012ae5ef; -[_TtC24SCProfileCalendarSection41ProfileCalendarMyProfileSectionEntryPoint init] */

void FUN_1012ae590(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCProfileCalendarSection.ProfileCalendarMyProfileSectionEntryPoint",0x42,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1012ae5bc);
  (*pcVar1)();
}



/* Entry: 1012ae5f0; end: 1012ae767; -[_TtC24SCProfileCalendarSection41ProfileCalendarMyProfileSectionEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001012ae60c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012ae62c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012ae64c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012ae66c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012ae68c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012ae6ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012ae6cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012ae6ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012ae70c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012ae72c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012ae710) */
/* WARNING: Removing unreachable block (ram,0x0001012ae6f0) */
/* WARNING: Removing unreachable block (ram,0x0001012ae6d0) */
/* WARNING: Removing unreachable block (ram,0x0001012ae6b0) */
/* WARNING: Removing unreachable block (ram,0x0001012ae690) */
/* WARNING: Removing unreachable block (ram,0x0001012ae670) */
/* WARNING: Removing unreachable block (ram,0x0001012ae650) */
/* WARNING: Removing unreachable block (ram,0x0001012ae630) */
/* WARNING: Removing unreachable block (ram,0x0001012ae610) */
/* WARNING: Removing unreachable block (ram,0x0001012ae730) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012ae5f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d6f568));
  return;
}



/* Entry: 1012ae768; end: 1012ae777;  */

undefined8 FUN_1012ae768(void)

{
  return 0;
}



/* Entry: 1012ae778; end: 1012ae7bb;  */

void FUN_1012ae778(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    func_0x000107c61520(param_4,param_2);
    *param_1 = param_4;
  }
  return;
}



/* Entry: 1012ae7bc; end: 1012ae7df;  */

void FUN_1012ae7bc(long param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  if (param_1 != 0) {
    FUN_1012b78a8(0);
    func_0x000107c610f8();
    func_0x000107c61174(param_1);
    lVar1 = param_1;
    FUN_1012b7744();
    func_0x000107c61170(param_1);
    func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
    lVar2 = unaff_x20 + 0x10;
    func_0x000107c61618();
    if (lVar2 != 0) {
      FUN_1012b7eb8(lVar1);
      func_0x000107c61170(lVar2);
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1012ae7e0; end: 1012ae7ff;  */

void FUN_1012ae7e0(void)

{
  func_0x000107c61168(&PTR_PTR_1127c3208);
  return;
}



/* Entry: 1012ae800; end: 1012ae9d3;  */

void FUN_1012ae800(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = param_5;
  func_0x000107c5e3f8();
  func_0x000107c61180();
  if (uVar1 != 0) {
    func_0x000107c61170();
    uVar1 = param_5;
    func_0x000107c5c42c();
    func_0x000107c61180();
    puVar2 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
    while (PTR__OBJC_CLASS___UICollectionView_1126afd20 = puVar2, uVar1 != 0) {
      func_0x000107c61168(puVar2);
      uVar3 = uVar1;
      func_0x000107c6148c(uVar1,puVar2);
      if (uVar3 != 0) {
        func_0x000107c61174(uVar1);
        func_0x000107c3ec60(param_5);
        func_0x000107c4073c(param_5);
        uVar4 = param_3;
        uVar5 = param_4;
        func_0x000107c3ec60();
        func_0x000107c609d8(param_1,param_2,param_3,param_4,0,0,uVar4,uVar5);
        func_0x000107c609e8();
        if (((uVar3 & 1) == 0) &&
           (func_0x000107c609e0(param_1,param_2,param_3,param_4), (uVar3 & 1) == 0)) {
          func_0x000107c609cc(param_1,param_2,param_3,param_4);
          func_0x000107c609b0(param_1,param_2,param_3,param_4);
          func_0x000107c3ec60(param_5);
          func_0x000107c609cc();
          func_0x000107c3ec60(param_5);
          func_0x000107c609b0();
          func_0x000107c61170(uVar1);
          func_0x000107c61170(uVar1);
          return;
        }
        func_0x000107c61170(uVar1);
        func_0x000107c61170(uVar1);
        return;
      }
      uVar3 = uVar1;
      func_0x000107c5c42c();
      func_0x000107c61180();
      func_0x000107c61170(uVar1);
      uVar1 = uVar3;
      puVar2 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
    }
  }
  return;
}



/* Entry: 1012ae9d4; end: 1012aea7f; -[SCProfileCalendarItem copyWithZone:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012ae9d4(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_120;
  long lStack_118;
  undefined1 auStack_110 [112];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112d6f630);
  uStack_58 = puVar1[9];
  uStack_60 = puVar1[8];
  uStack_48 = puVar1[0xb];
  uStack_50 = puVar1[10];
  uStack_38 = puVar1[0xd];
  uStack_40 = puVar1[0xc];
  uStack_98 = puVar1[1];
  uStack_a0 = *puVar1;
  uStack_88 = puVar1[3];
  uStack_90 = puVar1[2];
  uStack_78 = puVar1[5];
  uStack_80 = puVar1[4];
  uStack_68 = puVar1[7];
  uStack_70 = puVar1[6];
  FUN_1012aeb90();
  lVar2 = param_1;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar2 + _DAT_112d6f630);
  puVar1[1] = uStack_98;
  *puVar1 = uStack_a0;
  puVar1[3] = uStack_88;
  puVar1[2] = uStack_90;
  puVar1[5] = uStack_78;
  puVar1[4] = uStack_80;
  puVar1[0xb] = uStack_48;
  puVar1[10] = uStack_50;
  puVar1[0xd] = uStack_38;
  puVar1[0xc] = uStack_40;
  puVar1[7] = uStack_68;
  puVar1[6] = uStack_70;
  puVar1[9] = uStack_58;
  puVar1[8] = uStack_60;
  FUN_1012ac38c(&uStack_a0,auStack_110);
  lStack_120 = lVar2;
  lStack_118 = param_1;
  func_0x000107c61154(&lStack_120,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1012aea80; end: 1012aeadb; -[SCProfileCalendarItem init] */

void FUN_1012aea80(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCProfileCalendarSection.ProfileCalendarItem",0x2c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1012aeaac);
  (*pcVar1)();
}



/* Entry: 1012aeadc; end: 1012aeb23; -[SCProfileCalendarItem .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012aeadc(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112d6f630);
  FUN_1012aeb24(*puVar1,puVar1[1],puVar1[2],puVar1[3],puVar1[4],puVar1[5],puVar1[6],puVar1[7],
                puVar1[8],puVar1[9],puVar1[10],puVar1[0xb],puVar1[0xc],puVar1[0xd]);
  return;
}



/* Entry: 1012aeb24; end: 1012aeb8f;  */

/* WARNING: Possible PIC construction at 0x0001012aeb50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012aeb60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012aeb54) */
/* WARNING: Removing unreachable block (ram,0x0001012aeb64) */

void FUN_1012aeb24(undefined8 param_1,undefined8 param_2)

{
  long in_stack_00000008;
  
  if (-1 < in_stack_00000008) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1012aeb90; end: 1012aebff;  */

void FUN_1012aeb90(void)

{
  func_0x000107c61168(&PTR_PTR_1127c3360);
  return;
}



/* Entry: 1012aec00; end: 1012af1cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012aec00(long param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined1 *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  long lVar16;
  undefined1 *puVar17;
  long lStack_100;
  long lStack_e0;
  undefined1 *puStack_d8;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  puVar13 = auStack_80;
  func_0x000107c61428(param_1 + 0x10,puVar13,0,0);
  puVar2 = (undefined *)(param_1 + 0x10);
  func_0x000107c61648();
  if (puVar2 == (undefined *)0x0) {
    return;
  }
  puVar7 = puVar2;
  if ((puVar2[0x38] & 1) != 0) goto LAB_1012af1a8;
  puVar2[0x38] = 1;
  lVar3 = *(long *)(param_2 + _DAT_112d6f9a0);
  func_0x000107c5d984();
  func_0x000107c61180();
  if (lVar3 == 0) {
    lStack_e0 = 0;
    puVar17 = (undefined1 *)0xe000000000000000;
    puStack_d8 = puVar13;
  }
  else {
    lStack_e0 = lVar3;
    func_0x000107c5faec();
    puStack_d8 = puVar13;
    func_0x000107c61170(lVar3);
    puVar17 = puVar13;
  }
  lVar3 = *(long *)(param_2 + _DAT_112d6f9a8);
  func_0x000107c5d984();
  func_0x000107c61180();
  if (lVar3 == 0) {
    lStack_100 = 0;
    puStack_d8 = (undefined1 *)0xe000000000000000;
  }
  else {
    lStack_100 = lVar3;
    func_0x000107c5faec();
    func_0x000107c61170();
  }
  cVar1 = *(char *)(param_2 + _DAT_112d6f9b0);
  func_0x000107c60f34();
  puVar4 = &UNK_11039cf80;
  func_0x000107c613fc(&UNK_11039cf80,0x18,7);
  *(undefined8 *)(puVar4 + 0x10) = 0;
  puVar5 = &UNK_11039cfa8;
  func_0x000107c613fc(&UNK_11039cfa8,0x18,7);
  puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(puVar5 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar6 = &UNK_11039cfd0;
  func_0x000107c613fc(&UNK_11039cfd0,0x18,7);
  *(undefined **)(puVar6 + 0x10) = puVar11;
  func_0x000107c60f38(lVar3);
  puVar7 = &UNK_11039cff8;
  func_0x000107c613fc(&UNK_11039cff8,0x28,7);
  *(undefined **)(puVar7 + 0x10) = puVar4;
  *(undefined **)(puVar7 + 0x18) = puVar5;
  *(long *)(puVar7 + 0x20) = lVar3;
  lVar16 = *(long *)(puVar2 + 0x10);
  if (lVar16 == 0) {
    func_0x000107c61428(puVar4 + 0x10,&puStack_c8,1,0);
    uVar15 = *(undefined8 *)(puVar4 + 0x10);
    *(undefined8 *)(puVar4 + 0x10) = 0;
    func_0x000107c61580(puVar5,2);
    lVar16 = lVar3;
    func_0x000107c61174(lVar3);
    func_0x000107c6157c(puVar4);
    func_0x000107c61170(uVar15);
    func_0x000107c61428(puVar5 + 0x10,auStack_98,1,0);
    uVar15 = *(undefined8 *)(puVar5 + 0x10);
    *(undefined **)(puVar5 + 0x10) = puVar11;
    func_0x000107c6142c(uVar15);
    func_0x000107c60f3c(lVar16);
    func_0x000107c61574(puVar7);
    func_0x000107c61574(puVar5);
    func_0x000107c60f38(lVar16);
    if (cVar1 != '\0') goto LAB_1012aef38;
LAB_1012af078:
    func_0x000107c6142c(puVar17);
    puVar7 = &UNK_11039d020;
    func_0x000107c613fc(&UNK_11039d020,0x20,7);
    *(undefined **)(puVar7 + 0x10) = puVar6;
    *(long *)(puVar7 + 0x18) = lVar3;
    func_0x000107c61174(lVar3);
    func_0x000107c6157c(puVar6);
    uVar15 = 0x1012b6e28;
    puVar11 = &UNK_11039d228;
    puVar14 = &UNK_10d931150;
    lStack_e0 = lStack_100;
  }
  else {
    func_0x000107c61580(puVar5,2);
    lVar8 = lVar3;
    func_0x000107c61174();
    func_0x000107c6157c(puVar4);
    func_0x000107c615f0(lVar16);
    lVar9 = lStack_e0;
    func_0x000107c5fadc(lStack_e0,puVar17);
    if (cVar1 == '\0') {
      lVar10 = lStack_100;
      func_0x000107c5fadc(lStack_100,puStack_d8);
      puVar11 = &UNK_11039d0c0;
      func_0x000107c613fc(&UNK_11039d0c0,0x20,7);
      *(undefined8 *)(puVar11 + 0x10) = 0x1012b436c;
      *(undefined **)(puVar11 + 0x18) = puVar7;
      pcStack_a8 = (code *)0x1012b6e1c;
      puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_c0 = 0x42000000;
      uStack_b8 = 0x1012b6e2c;
      puStack_b0 = &UNK_11039d0d8;
      ppuVar12 = &puStack_c8;
      puStack_a0 = puVar11;
      func_0x000107c60bc4(ppuVar12);
      puVar11 = puStack_a0;
      func_0x000107c6157c(puVar7);
      func_0x000107c61574(puVar11);
      func_0x000107c442c0(lVar16);
      func_0x000107c61574(puVar7);
      func_0x000107c61574(puVar5);
      func_0x000107c60bd0(ppuVar12);
      func_0x000107c615e8(lVar16);
      func_0x000107c61170(lVar9);
      func_0x000107c61170(lVar10);
      func_0x000107c60f38(lVar8);
      goto LAB_1012af078;
    }
    puVar11 = &UNK_11039d110;
    func_0x000107c613fc(&UNK_11039d110,0x20,7);
    *(undefined8 *)(puVar11 + 0x10) = 0x1012b436c;
    *(undefined **)(puVar11 + 0x18) = puVar7;
    pcStack_a8 = FUN_1012b43e8;
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0x42000000;
    uStack_b8 = 0x1012b6e30;
    puStack_b0 = &UNK_11039d128;
    ppuVar12 = &puStack_c8;
    puStack_a0 = puVar11;
    func_0x000107c60bc4(ppuVar12);
    puVar11 = puStack_a0;
    func_0x000107c6157c(puVar7);
    func_0x000107c61574(puVar11);
    func_0x000107c43fc4(lVar16);
    func_0x000107c61574(puVar7);
    func_0x000107c61574(puVar5);
    func_0x000107c60bd0(ppuVar12);
    func_0x000107c615e8(lVar16);
    func_0x000107c61170(lVar9);
    func_0x000107c60f38(lVar8);
LAB_1012aef38:
    func_0x000107c6142c(puStack_d8);
    puVar7 = &UNK_11039d098;
    func_0x000107c613fc(&UNK_11039d098,0x20,7);
    *(undefined **)(puVar7 + 0x10) = puVar6;
    *(long *)(puVar7 + 0x18) = lVar3;
    func_0x000107c61174(lVar3);
    func_0x000107c6157c(puVar6);
    uVar15 = 0x1012b43b4;
    puVar11 = &UNK_11039d160;
    puVar14 = &UNK_10d9310f0;
    puStack_d8 = puVar17;
  }
  FUN_1012af2dc(lStack_e0,puStack_d8,uVar15,puVar7,puVar11,puVar14);
  func_0x000107c6142c(puStack_d8);
  func_0x000107c61574(puVar7);
  puVar11 = &UNK_11039d048;
  func_0x000107c613fc(&UNK_11039d048,0x18,7);
  func_0x000107c61644(puVar11 + 0x10,puVar2);
  puVar7 = &UNK_11039d070;
  func_0x000107c613fc(&UNK_11039d070,0x38,7);
  *(undefined **)(puVar7 + 0x10) = puVar11;
  *(undefined8 *)(puVar7 + 0x18) = param_3;
  *(undefined **)(puVar7 + 0x20) = puVar6;
  *(undefined **)(puVar7 + 0x28) = puVar5;
  *(undefined **)(puVar7 + 0x30) = puVar4;
  func_0x000107c6157c(puVar5);
  func_0x000107c6157c(puVar4);
  func_0x000107c6157c(puVar6);
  func_0x000107c6157c(puVar11);
  func_0x000107c615f0(param_3);
  func_0x00010488b768();
  func_0x000107c61574(puVar2);
  func_0x000107c61170(lVar3);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar11);
LAB_1012af1a8:
  func_0x000107c61574(puVar7);
  return;
}



/* Entry: 1012af1d0; end: 1012af273;  */

void FUN_1012af1d0(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_58,1,0);
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  *(undefined8 *)(param_3 + 0x10) = param_1;
  func_0x000107c61174(param_1);
  func_0x000107c61170(uVar1);
  func_0x000107c61428(param_4 + 0x10,auStack_70,1,0);
  uVar1 = *(undefined8 *)(param_4 + 0x10);
  *(undefined8 *)(param_4 + 0x10) = param_2;
  func_0x000107c61434(param_2);
  func_0x000107c6142c(uVar1);
  func_0x000107c60f3c(param_5);
  return;
}



/* Entry: 1012af274; end: 1012af2db;  */

void FUN_1012af274(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = param_1;
  func_0x000107c61434(param_1);
  func_0x000107c6142c(uVar1);
  func_0x000107c60f3c(param_3);
  return;
}



/* Entry: 1012af2dc; end: 1012af443;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012af2dc(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  long lStack_70;
  undefined8 uStack_68;
  
  if (unaff_x20[3] != 0) {
    uVar3 = *unaff_x20;
    uVar2 = *(undefined8 *)(unaff_x20[3] + _DAT_112ff5e38);
    func_0x000107c6157c(uVar2);
    func_0x0001000d224c(&lStack_70);
    func_0x000107c61574(uVar2);
    if (lStack_70 != 0) {
      puVar1 = &UNK_11039d048;
      func_0x000107c613fc(&UNK_11039d048,0x18,7);
      func_0x000107c61644(puVar1 + 0x10);
      func_0x000107c613fc(param_5,0x50,7);
      *(undefined8 *)(param_5 + 0x18) = uStack_68;
      *(long *)(param_5 + 0x10) = lStack_70;
      *(undefined8 *)(param_5 + 0x20) = param_1;
      *(undefined8 *)(param_5 + 0x28) = param_2;
      *(undefined **)(param_5 + 0x30) = puVar1;
      *(code **)(param_5 + 0x38) = param_3;
      *(undefined8 *)(param_5 + 0x40) = param_4;
      *(undefined8 *)(param_5 + 0x48) = uVar3;
      func_0x000107c615f0(lStack_70);
      func_0x000107c61434(param_2);
      func_0x000107c6157c(param_4);
      uVar2 = 3;
      func_0x0001001ca524(3,0,0x90,4,0,0,param_6,param_5,PTR___sytN_11034f1b0 + 8);
      func_0x000107c615e8(lStack_70);
      func_0x000107c61574(param_5);
      func_0x000107c61574(uVar2);
      return;
    }
  }
  (*param_3)(PTR___swiftEmptyArrayStorage_11034f1c8);
  return;
}



/* Entry: 1012af444; end: 1012af55b;  */

void FUN_1012af444(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    puVar1 = &UNK_11039d1d8;
    func_0x000107c613fc(&UNK_11039d1d8,0x30,7);
    *(long *)(puVar1 + 0x10) = param_1;
    *(undefined8 *)(puVar1 + 0x18) = param_3;
    *(undefined8 *)(puVar1 + 0x20) = param_4;
    *(undefined8 *)(puVar1 + 0x28) = param_5;
    pcStack_78 = FUN_1012b685c;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_1000f6b44;
    puStack_80 = &UNK_11039d1f0;
    ppuVar2 = &puStack_98;
    puStack_70 = puVar1;
    func_0x000107c60bc4(ppuVar2);
    puVar1 = puStack_70;
    func_0x000107c6157c(param_1);
    func_0x000107c6157c(param_3);
    func_0x000107c6157c(param_4);
    func_0x000107c6157c(param_5);
    func_0x000107c61574(puVar1);
    func_0x000107c4e590(param_2);
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 1012af55c; end: 1012af82f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012af55c(long param_1,long param_2,long param_3,long param_4)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong unaff_x27;
  ulong uStack_e8;
  ulong uStack_e0;
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [32];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  ulong auStack_70 [2];
  
  *(undefined1 *)(param_1 + 0x38) = 0;
  func_0x000107c61428(param_2 + 0x10,auStack_88,0,0);
  uVar10 = *(ulong *)(param_2 + 0x10);
  auStack_70[0] = uVar10;
  func_0x000107c61428(param_3 + 0x10,auStack_a0,0,0);
  uVar11 = *(ulong *)(param_3 + 0x10);
  if (uVar11 >> 0x3e == 0) {
    uVar12 = *(ulong *)((uVar11 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar12 = uVar11 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar11) {
      uVar12 = uVar11;
    }
    func_0x000107c60480();
  }
  if (uVar12 == 0) {
    func_0x000107c61434(uVar10);
  }
  else {
    if ((long)uVar12 < 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1012af830);
      (*pcVar2)();
    }
    func_0x000107c61434(uVar10);
    func_0x000107c61434(uVar11);
    uVar13 = 0;
    do {
      if ((uVar11 & 0xc000000000000001) == 0) {
        uVar3 = *(ulong *)(uVar11 + uVar13 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar3 = uVar13;
        FUN_1012bfea4(uVar13,uVar11);
      }
      uVar6 = uVar3;
      func_0x000107c447f0();
      if ((uVar6 & 1) == 0) {
        func_0x000107c61170(uVar3);
      }
      else {
        unaff_x27 = unaff_x27 & 1 | 0x8000000000000000;
        FUN_1012aeb90();
        uVar5 = uVar6;
        func_0x000107c610f8();
        puVar4 = (ulong *)(uVar5 + _DAT_112d6f630);
        *puVar4 = uVar3;
        puVar4[9] = unaff_x27;
        puVar1 = PTR_s_init_1125d9248;
        uStack_e8 = uVar5;
        uStack_e0 = uVar6;
        func_0x000107c61174(uVar3);
        puVar4 = &uStack_e8;
        func_0x000107c61154(puVar4,puVar1);
        uVar6 = uVar10;
        func_0x000107c61550();
        if ((((int)uVar6 == 0) || ((long)uVar10 < 0)) || (uVar6 = uVar10, (uVar10 >> 0x3e & 1) != 0)
           ) {
          if (uVar10 >> 0x3e == 0) {
            uVar5 = *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10);
          }
          else {
            uVar5 = uVar10 & 0xffffffffffffff8;
            if (0x7fffffffffffffff < uVar10) {
              uVar5 = uVar10;
            }
            func_0x000107c60480(uVar5);
          }
          uVar6 = 0;
          FUN_1012bf74c(0,uVar5 + 1,1,uVar10);
        }
        uVar8 = uVar6 & 0xffffffffffffff8;
        uVar5 = *(ulong *)(uVar8 + 0x10);
        uVar10 = uVar6;
        if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar5) {
          uVar10 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
          FUN_1012bf74c(uVar10,uVar5 + 1,1,uVar6);
          uVar8 = uVar10 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar8 + 0x10) = uVar5 + 1;
        *(ulong **)(uVar8 + uVar5 * 8 + 0x20) = puVar4;
        func_0x000107c61170(uVar3);
        auStack_70[0] = uVar10;
      }
      uVar13 = uVar13 + 1;
    } while (uVar12 != uVar13);
    func_0x000107c6142c(uVar11);
  }
  FUN_1012af830(auStack_70);
  func_0x000107c61428(param_3 + 0x10,auStack_c0,0,0);
  uVar10 = *(ulong *)(param_3 + 0x10);
  if (uVar10 >> 0x3e == 0) {
    uVar11 = *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar11 = uVar10 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar10) {
      uVar11 = uVar10;
    }
    func_0x000107c60480(uVar11);
  }
  pcVar2 = *(code **)(param_1 + 0x20);
  func_0x000107c61428(param_4 + 0x10,auStack_d8,0,0);
  uVar10 = auStack_70[0];
  uVar9 = *(undefined8 *)(param_4 + 0x10);
  uVar7 = uVar9;
  func_0x000107c61174(uVar9);
  (*pcVar2)(uVar9,uVar10,uVar11 != 0);
  func_0x000107c6142c(uVar10);
  func_0x000107c61170(uVar7);
  return;
}



/* Entry: 1012af830; end: 1012af937;  */

void FUN_1012af830(ulong *param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  long lStack_50;
  ulong uStack_48;
  
  uVar3 = *param_1;
  uVar1 = uVar3;
  func_0x000107c61550();
  if ((((int)uVar1 == 0) || ((long)uVar3 < 0)) || ((uVar3 >> 0x3e & 1) != 0)) {
    FUN_1012b5df4();
  }
  uVar4 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  lStack_50 = (uVar3 & 0xffffffffffffff8) + 0x20;
  uVar1 = uVar4;
  uStack_48 = uVar4;
  func_0x000107c60574();
  if ((long)uVar1 < (long)uVar4) {
    puVar5 = (undefined *)(uVar4 >> 1);
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (1 < uVar4) {
      uVar4 = uVar1;
      FUN_1012aeb90();
      puVar2 = puVar5;
      func_0x000107c60380(puVar5,uVar4);
      *(undefined **)(puVar2 + 0x10) = puVar5;
    }
    puStack_68 = puVar2 + 0x20;
    puStack_60 = puVar5;
    FUN_1012b4470(&puStack_68,auStack_58,&lStack_50,uVar1);
    *(undefined8 *)(puVar2 + 0x10) = 0;
    func_0x000107c61574(puVar2);
  }
  else if (uVar4 != 0) {
    FUN_1012b4c54(0,uVar4,1,&lStack_50);
  }
  *param_1 = uVar3;
  return;
}



/* Entry: 1012af938; end: 1012afe47;  */

void FUN_1012af938(double param_1,long param_2,long param_3,code *param_4,undefined8 param_5)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long extraout_x8;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined1 auStack_a0 [8];
  code *pcStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  
  lVar3 = 0;
  func_0x000107c5eea4();
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  if (param_3 != 0) {
    func_0x000107c614b0(param_3);
    (*param_4)(0,PTR___swiftEmptyArrayStorage_11034f1c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)(param_3);
    return;
  }
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    func_0x000107c4083c();
    func_0x000107c61180();
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (param_2 != 0) {
      puStack_78 = (undefined *)0x0;
      uVar4 = 0;
      func_0x0001012b586c(0);
      func_0x000107c5fc50(param_2,&puStack_78,uVar4);
      func_0x000107c61170(param_2);
      if (puStack_78 != (undefined *)0x0) {
        puVar8 = puStack_78;
      }
    }
  }
  func_0x000107c5eea0(auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5ee8c();
  (**(code **)(lVar10 + 8))(auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar3);
  puVar11 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
  if ((ulong)puVar8 >> 0x3e == 0) {
    puVar14 = *(undefined **)(puVar11 + 0x10);
  }
  else {
    puVar14 = puVar11;
    if ((undefined *)0x7fffffffffffffff < puVar8) {
      puVar14 = puVar8;
    }
    func_0x000107c60480();
  }
  puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  pcStack_98 = param_4;
  uStack_90 = param_5;
  puStack_80 = puVar8;
  if (puVar14 != (undefined *)0x0) {
    lStack_88 = (long)param_1;
    uVar13 = (ulong)puVar8 & 0xc000000000000001;
    puVar15 = (undefined *)0x0;
    do {
      while( true ) {
        if (uVar13 == 0) {
          if (*(undefined **)(puVar11 + 0x10) <= puVar15) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1012afd8c);
            (*pcVar2)();
          }
          puVar5 = *(undefined **)(puVar8 + (long)puVar15 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          puVar5 = puVar15;
          FUN_1012bfea4(puVar15,puVar8);
        }
        puVar9 = puVar15 + 1;
        if (SCARRY8((long)puVar15,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1012afd88);
          (*pcVar2)();
        }
        puVar6 = puVar5;
        func_0x000107c447f0();
        if ((int)puVar6 != 0) break;
LAB_1012afaa8:
        func_0x000107c61170(puVar5);
        puVar15 = puVar15 + 1;
        if (puVar9 == puVar14) goto joined_r0x0001012afc14;
      }
      puVar8 = puVar5;
      func_0x000107c40834();
      func_0x000107c61180();
      if (puVar8 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1012afe34);
        (*pcVar2)();
      }
      puVar6 = puVar8;
      func_0x000107c5bbf4();
      func_0x000107c61180();
      func_0x000107c61170(puVar8);
      if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1012afe38);
        (*pcVar2)();
      }
      puVar7 = puVar6;
      func_0x000107c51b2c();
      func_0x000107c61170(puVar6);
      if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1012afd90);
        (*pcVar2)();
      }
      if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1012afd94);
        (*pcVar2)();
      }
      if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1012afd98);
        (*pcVar2)();
      }
      puVar8 = puStack_80;
      if ((long)puVar7 < lStack_88) goto LAB_1012afaa8;
      puVar8 = puVar12;
      func_0x000107c61558();
      puStack_78 = puVar12;
      if (((ulong)puVar8 & 1) == 0) {
        func_0x0001012b583c(0,*(long *)(puVar12 + 0x10) + 1,1);
      }
      uVar1 = *(ulong *)(puStack_78 + 0x10);
      if (*(ulong *)(puStack_78 + 0x18) >> 1 <= uVar1) {
        func_0x0001012b583c(1 < *(ulong *)(puStack_78 + 0x18),uVar1 + 1,1);
      }
      *(ulong *)(puStack_78 + 0x10) = uVar1 + 1;
      *(undefined **)(puStack_78 + uVar1 * 8 + 0x20) = puVar5;
      puVar15 = puVar9;
      puVar8 = puStack_80;
      puVar12 = puStack_78;
    } while (puVar9 != puVar14);
  }
joined_r0x0001012afc14:
  if (((long)puVar12 < 0) || (((ulong)puVar12 >> 0x3e & 1) != 0)) {
    puVar11 = puVar12;
    func_0x000107c60480();
  }
  else {
    puVar11 = *(undefined **)(puVar12 + 0x10);
  }
  if (puVar11 == (undefined *)0x0) {
    func_0x000107c61574(puVar12);
    puVar14 = (undefined *)0x0;
  }
  else {
    if (((ulong)puVar12 & 0xc000000000000001) == 0) {
      if (*(long *)(puVar12 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1012afe30);
        (*pcVar2)();
      }
      puVar14 = *(undefined **)(puVar12 + 0x20);
      func_0x000107c61174();
    }
    else {
      puVar14 = (undefined *)0x0;
      FUN_1012bfea4(0,puVar12);
    }
    if (puVar11 != (undefined *)0x1) {
      puVar15 = (undefined *)0x1;
      do {
        while( true ) {
          if (((ulong)puVar12 & 0xc000000000000001) == 0) {
            if ((long)puVar15 < 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1012afda0);
              (*pcVar2)();
            }
            if (*(undefined **)(puVar12 + 0x10) <= puVar15) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1012afda4);
              (*pcVar2)();
            }
            puVar8 = *(undefined **)(puVar12 + (long)puVar15 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            puVar8 = puVar15;
            FUN_1012bfea4(puVar15,puVar12);
          }
          puVar5 = puVar15 + 1;
          if (SCARRY8((long)puVar15,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1012afd9c);
            (*pcVar2)();
          }
          puVar9 = puVar8;
          func_0x000107c40834();
          func_0x000107c61180();
          if (puVar9 == (undefined *)0x0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1012afe44);
            (*pcVar2)();
          }
          puVar6 = puVar9;
          func_0x000107c5bbf4();
          func_0x000107c61180();
          func_0x000107c61170(puVar9);
          if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1012afe40);
            (*pcVar2)();
          }
          puVar9 = puVar6;
          func_0x000107c51b2c();
          func_0x000107c61170(puVar6);
          puVar6 = puVar14;
          func_0x000107c40834();
          func_0x000107c61180();
          if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1012afe3c);
            (*pcVar2)();
          }
          puVar7 = puVar6;
          func_0x000107c5bbf4();
          func_0x000107c61180();
          func_0x000107c61170(puVar6);
          if (puVar7 == (undefined *)0x0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1012afe48);
            (*pcVar2)();
          }
          puVar6 = puVar7;
          func_0x000107c51b2c();
          func_0x000107c61170(puVar7);
          if ((long)puVar9 < (long)puVar6) break;
          func_0x000107c61170(puVar8);
          puVar8 = puStack_80;
          puVar15 = puVar15 + 1;
          if (puVar5 == puVar11) goto LAB_1012afd78;
        }
        func_0x000107c61170(puVar14);
        puVar14 = puVar8;
        puVar8 = puStack_80;
        puVar15 = puVar5;
      } while (puVar5 != puVar11);
    }
LAB_1012afd78:
    func_0x000107c61574(puVar12);
  }
  (*pcStack_98)(puVar14,puVar8);
  func_0x000107c6142c(puVar8);
  func_0x000107c61170(puVar14);
  return;
}



/* Entry: 1012afe48; end: 1012afebf;  */

/* WARNING: Possible PIC construction at 0x0001012afea4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012afea8) */

void FUN_1012afe48(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1012afec0; end: 1012aff73;  */

void FUN_1012afec0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x268) = param_9;
  *(undefined8 *)(unaff_x22 + 0x260) = param_8;
  *(undefined8 *)(unaff_x22 + 600) = param_7;
  *(undefined8 *)(unaff_x22 + 0x250) = param_6;
  *(long *)(unaff_x22 + 0x248) = param_3;
  *(undefined8 *)(unaff_x22 + 0x240) = param_2;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x22 + 0x270) = param_2;
  piVar3 = *(int **)(param_3 + 0x30);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x278) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1012aff74;
                    /* WARNING: Could not recover jumptable at 0x0001012aff70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))(param_4,param_5,param_2,param_3);
  return;
}



/* Entry: 1012aff74; end: 1012affdb;  */

void FUN_1012aff74(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x280) = param_1;
  *(undefined8 *)(lVar2 + 0x288) = param_2;
  *(long *)(lVar2 + 0x290) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x278));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1012affdc;
  }
  else {
    pcVar1 = FUN_1012b0abc;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1012affdc; end: 1012b0317;  */

void FUN_1012affdc(void)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  code *pcVar16;
  int *piVar17;
  undefined8 uVar18;
  long lVar19;
  code *pcVar20;
  long unaff_x22;
  
  uVar18 = *(undefined8 *)(unaff_x22 + 0x288);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x280);
  lVar15 = *(long *)(unaff_x22 + 0x248);
  puVar2 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x22 + 0x298) = puVar2;
  uVar3 = 0x2d4d4d2d79797979;
  func_0x000107c5fadc(0x2d4d4d2d79797979,0xea00000000006464);
  func_0x000107c53e28(puVar2);
  func_0x000107c61170(uVar3);
  lVar4 = 0;
  func_0x000107c5efa8();
  lVar19 = *(long *)(lVar4 + -8);
  uVar11 = *(long *)(lVar19 + 0x40) + 0xf;
  uVar5 = uVar11 & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar5);
  uVar10 = uVar5;
  func_0x000107c5efa4(uVar5);
  func_0x000107c5ef9c();
  pcVar16 = *(code **)(lVar19 + 8);
  (*pcVar16)(uVar5,lVar4);
  func_0x000107c615c0(uVar5);
  func_0x000107c59d94(puVar2);
  func_0x000107c61170(uVar10);
  lVar6 = 0;
  func_0x000107c5eea4();
  lVar19 = *(long *)(lVar6 + -8);
  uVar10 = *(long *)(lVar19 + 0x40) + 0xf;
  uVar5 = uVar10 & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar5);
  uVar7 = uVar10 & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar7);
  func_0x000107c5eea0(uVar7);
  func_0x000107c5ee6c(uVar5,0xc12a5e0000000000);
  pcVar20 = *(code **)(lVar19 + 8);
  (*pcVar20)(uVar7,lVar6);
  func_0x000107c615c0(uVar7);
  func_0x000107c5ee70();
  lVar19 = lVar6;
  (*pcVar20)(uVar5);
  func_0x000107c615c0(uVar5);
  puVar8 = puVar2;
  func_0x000107c5c1b8();
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  puVar9 = puVar8;
  func_0x000107c5faec();
  func_0x000107c61170(puVar8);
  *(undefined **)(unaff_x22 + 0x2a0) = puVar9;
  *(long *)(unaff_x22 + 0x2a8) = lVar19;
  uVar5 = uVar10 & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar5);
  uVar10 = uVar10 & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar10);
  func_0x000107c5eea0(uVar10);
  func_0x000107c5ee6c(uVar5,0x415da9c000000000);
  (*pcVar20)(uVar10,lVar6);
  func_0x000107c615c0(uVar10);
  func_0x000107c5ee70();
  (*pcVar20)(uVar5);
  func_0x000107c615c0(uVar5);
  func_0x000107c5c1b8();
  func_0x000107c61180();
  func_0x000107c61170(uVar10);
  puVar8 = puVar2;
  func_0x000107c5faec();
  lVar13 = lVar6;
  func_0x000107c61170(puVar2);
  *(undefined **)(unaff_x22 + 0x2b0) = puVar8;
  *(long *)(unaff_x22 + 0x2b8) = lVar6;
  uVar11 = uVar11 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  uVar10 = uVar11;
  func_0x000107c5efa4(uVar11);
  func_0x000107c5ef94();
  *(ulong *)(unaff_x22 + 0x2c0) = uVar10;
  *(long *)(unaff_x22 + 0x2c8) = lVar13;
  (*pcVar16)(uVar11,lVar4);
  func_0x000107c615c0(uVar11);
  *(undefined8 *)(unaff_x22 + 0x148) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x150) = uVar18;
  *(undefined **)(unaff_x22 + 0x158) = puVar9;
  *(long *)(unaff_x22 + 0x160) = lVar19;
  *(undefined **)(unaff_x22 + 0x168) = puVar8;
  *(long *)(unaff_x22 + 0x170) = lVar6;
  *(ulong *)(unaff_x22 + 0x178) = uVar10;
  *(long *)(unaff_x22 + 0x180) = lVar13;
  *(undefined8 *)(unaff_x22 + 0x188) = 0;
  *(undefined8 *)(unaff_x22 + 400) = 0;
  piVar17 = *(int **)(lVar15 + 0x40);
  iVar1 = *piVar17;
  plVar12 = (long *)(ulong)(uint)piVar17[1];
  func_0x000107c61434();
  func_0x000107c61434(lVar19);
  func_0x000107c61434(lVar6);
  func_0x000107c61434(lVar13);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x2d0) = plVar12;
  *plVar12 = unaff_x22;
  plVar12[1] = (long)FUN_1012b0318;
                    /* WARNING: Could not recover jumptable at 0x0001012b0314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar17))
            (plVar12,unaff_x22 + 0x148,*(undefined8 *)(unaff_x22 + 0x270),
             *(undefined8 *)(unaff_x22 + 0x248));
  return;
}



/* Entry: 1012b0318; end: 1012b03bf;  */

void FUN_1012b0318(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  *(undefined8 *)(lVar4 + 0x2d8) = param_1;
  *(undefined8 *)(lVar4 + 0x2e0) = param_2;
  *(undefined8 *)(lVar4 + 0x2e8) = param_3;
  *(long *)(lVar4 + 0x2f0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x2d0));
  FUN_1012b5aa0(lVar4 + 0x148);
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1012b03c0;
  }
  else {
    uVar3 = *(undefined8 *)(lVar4 + 0x2b8);
    uVar2 = *(undefined8 *)(lVar4 + 0x2a8);
    uVar5 = *(undefined8 *)(lVar4 + 0x288);
    func_0x000107c6142c(*(undefined8 *)(lVar4 + 0x2c8));
    func_0x000107c6142c(uVar3);
    func_0x000107c6142c(uVar2);
    func_0x000107c6142c(uVar5);
    pcVar1 = FUN_1012b0b04;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1012b03c0; end: 1012b0903;  */

void FUN_1012b03c0(void)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined *puVar16;
  long unaff_x22;
  undefined8 *puVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined *puStack_78;
  undefined8 uStack_70;
  
  lVar14 = *(long *)(unaff_x22 + 0x250);
  func_0x000107c61428(lVar14 + 0x10,unaff_x22 + 0x198,0,0);
  lVar14 = lVar14 + 0x10;
  func_0x000107c61648();
  uVar5 = *(undefined8 *)(unaff_x22 + 0x288);
  uVar15 = uVar5;
  if (lVar14 != 0) {
    uVar15 = *(undefined8 *)(lVar14 + 0x58);
    *(undefined8 *)(lVar14 + 0x50) = *(undefined8 *)(unaff_x22 + 0x280);
    *(undefined8 *)(lVar14 + 0x58) = uVar5;
    func_0x000107c61574(lVar14);
  }
  lVar14 = *(long *)(unaff_x22 + 0x250);
  func_0x000107c6142c(uVar15);
  func_0x000107c61428(lVar14 + 0x10,unaff_x22 + 0x1b0,0,0);
  lVar14 = lVar14 + 0x10;
  func_0x000107c61648();
  uVar5 = *(undefined8 *)(unaff_x22 + 0x2a8);
  uVar15 = uVar5;
  if (lVar14 != 0) {
    uVar15 = *(undefined8 *)(lVar14 + 0x68);
    *(undefined8 *)(lVar14 + 0x60) = *(undefined8 *)(unaff_x22 + 0x2a0);
    *(undefined8 *)(lVar14 + 0x68) = uVar5;
    func_0x000107c61574(lVar14);
  }
  lVar14 = *(long *)(unaff_x22 + 0x250);
  func_0x000107c6142c(uVar15);
  func_0x000107c61428(lVar14 + 0x10,unaff_x22 + 0x1c8,0,0);
  lVar14 = lVar14 + 0x10;
  func_0x000107c61648();
  uVar5 = *(undefined8 *)(unaff_x22 + 0x2b8);
  uVar15 = uVar5;
  if (lVar14 != 0) {
    uVar15 = *(undefined8 *)(lVar14 + 0x78);
    *(undefined8 *)(lVar14 + 0x70) = *(undefined8 *)(unaff_x22 + 0x2b0);
    *(undefined8 *)(lVar14 + 0x78) = uVar5;
    func_0x000107c61574(lVar14);
  }
  lVar14 = *(long *)(unaff_x22 + 0x250);
  func_0x000107c6142c(uVar15);
  func_0x000107c61428(lVar14 + 0x10,unaff_x22 + 0x1e0,0,0);
  lVar14 = lVar14 + 0x10;
  func_0x000107c61648();
  uVar5 = *(undefined8 *)(unaff_x22 + 0x2c8);
  uVar15 = uVar5;
  if (lVar14 != 0) {
    uVar15 = *(undefined8 *)(lVar14 + 0x88);
    *(undefined8 *)(lVar14 + 0x80) = *(undefined8 *)(unaff_x22 + 0x2c0);
    *(undefined8 *)(lVar14 + 0x88) = uVar5;
    func_0x000107c61574(lVar14);
  }
  lVar14 = *(long *)(unaff_x22 + 0x250);
  func_0x000107c6142c(uVar15);
  func_0x000107c61428(lVar14 + 0x10,unaff_x22 + 0x1f8,0,0);
  lVar14 = lVar14 + 0x10;
  func_0x000107c61648();
  if (lVar14 != 0) {
    *(undefined1 *)(lVar14 + 0x90) = 1;
    func_0x000107c61574();
  }
  lVar14 = *(long *)(unaff_x22 + 0x250);
  func_0x000107c61428(lVar14 + 0x10,unaff_x22 + 0x210,0,0);
  lVar14 = lVar14 + 0x10;
  func_0x000107c61648();
  if (lVar14 != 0) {
    uVar15 = *(undefined8 *)(unaff_x22 + 0x2e8);
    uVar5 = *(undefined8 *)(lVar14 + 0x48);
    *(undefined8 *)(lVar14 + 0x40) = *(undefined8 *)(unaff_x22 + 0x2e0);
    *(undefined8 *)(lVar14 + 0x48) = uVar15;
    func_0x000107c61434(uVar15);
    func_0x000107c6142c(uVar5);
    func_0x000107c61574(lVar14);
  }
  uVar12 = 0;
  lVar14 = *(long *)(unaff_x22 + 0x2d8);
  uVar18 = *(ulong *)(lVar14 + 0x10);
  puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
  do {
    puVar17 = (undefined8 *)(lVar14 + uVar12 * 0x20);
    do {
      puVar11 = puVar17;
      if (uVar18 == uVar12) {
        uVar15 = *(undefined8 *)(unaff_x22 + 0x2e8);
        func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x2d8));
        func_0x000107c6142c(uVar15);
        *(undefined **)(unaff_x22 + 0x228) = PTR___swiftEmptySetSingleton_11034f1d8;
        puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
        lVar14 = *(long *)(puVar16 + 0x10);
        if (lVar14 == 0) goto LAB_1012b079c;
        lVar13 = 0;
        goto LAB_1012b069c;
      }
      if (*(ulong *)(lVar14 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1012b0900);
        (*pcVar3)();
      }
      uVar12 = uVar12 + 1;
      puVar17 = puVar11 + 4;
    } while (puVar11[7] != 0);
    uVar15 = puVar11[4];
    uVar5 = puVar11[5];
    uVar19 = puVar11[6];
    func_0x000107c61434(uVar5);
    puVar6 = puVar16;
    func_0x000107c61558();
    puStack_78 = puVar16;
    if (((ulong)puVar6 & 1) == 0) {
      func_0x0001012b58b0(0,*(long *)(puVar16 + 0x10) + 1,1);
    }
    uVar1 = *(ulong *)(puStack_78 + 0x10);
    if (*(ulong *)(puStack_78 + 0x18) >> 1 <= uVar1) {
      func_0x0001012b58b0(1 < *(ulong *)(puStack_78 + 0x18),uVar1 + 1,1);
    }
    *(ulong *)(puStack_78 + 0x10) = uVar1 + 1;
    *(undefined8 *)(puStack_78 + uVar1 * 0x20 + 0x20) = uVar15;
    *(undefined8 *)(puStack_78 + uVar1 * 0x20 + 0x28) = uVar5;
    *(undefined8 *)(puStack_78 + uVar1 * 0x20 + 0x30) = uVar19;
    *(undefined8 *)(puStack_78 + uVar1 * 0x20 + 0x38) = 0;
    puVar16 = puStack_78;
  } while( true );
LAB_1012b069c:
  do {
    puVar17 = (undefined8 *)(puVar16 + lVar13 * 0x20 + 0x38);
    lVar13 = lVar13 + 1;
    while( true ) {
      if (*(ulong *)(puVar16 + 0x10) <= lVar13 - 1U) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1012b0904);
        (*pcVar3)();
      }
      uVar15 = puVar17[-3];
      uVar19 = puVar17[-2];
      uVar5 = puVar17[-1];
      uVar2 = *puVar17;
      func_0x000107c61438(uVar19,2);
      ppuVar7 = &puStack_78;
      func_0x000100403b00(ppuVar7,uVar15,uVar19);
      func_0x000107c6142c(uStack_70);
      if (((ulong)ppuVar7 & 1) != 0) break;
      func_0x000107c6142c(uVar19);
      lVar13 = lVar13 + 1;
      puVar17 = puVar17 + 4;
      if (lVar13 - lVar14 == 1) goto LAB_1012b079c;
    }
    puVar8 = puVar6;
    func_0x000107c61558();
    if (((ulong)puVar8 & 1) == 0) {
      func_0x0001012b58b0(0,*(long *)(puVar6 + 0x10) + 1,1);
    }
    uVar12 = *(ulong *)(puVar6 + 0x10);
    if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar12) {
      func_0x0001012b58b0(1 < *(ulong *)(puVar6 + 0x18),uVar12 + 1,1);
    }
    *(ulong *)(puVar6 + 0x10) = uVar12 + 1;
    *(undefined8 *)(puVar6 + uVar12 * 0x20 + 0x20) = uVar15;
    *(undefined8 *)(puVar6 + uVar12 * 0x20 + 0x28) = uVar19;
    *(undefined8 *)(puVar6 + uVar12 * 0x20 + 0x30) = uVar5;
    *(undefined8 *)(puVar6 + uVar12 * 0x20 + 0x38) = uVar2;
  } while (lVar13 != lVar14);
LAB_1012b079c:
  *(undefined **)(unaff_x22 + 0x2f8) = puVar6;
  uVar15 = *(undefined8 *)(unaff_x22 + 0x268);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x248);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x240);
  func_0x000107c61574(puVar16);
  *(undefined **)(unaff_x22 + 0x230) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(unaff_x22 + 0x120) = puVar6;
  *(undefined8 *)(unaff_x22 + 0x130) = uVar19;
  *(undefined8 *)(unaff_x22 + 0x128) = uVar5;
  *(long *)(unaff_x22 + 0x138) = unaff_x22 + 0x230;
  *(undefined8 *)(unaff_x22 + 0x140) = uVar15;
  iVar4 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar4 == 0) {
    uVar15 = 0x112d6f768;
    func_0x0001000285a8(0x112d6f768,&UNK_10d931108);
    func_0x000107c615ac(unaff_x22 + 0x10,uVar15);
    *(long *)(unaff_x22 + 0x238) = unaff_x22 + 0x10;
    plVar9 = (long *)0xb0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x308) = plVar9;
    *plVar9 = unaff_x22;
    plVar9[1] = (long)FUN_1012b0958;
    lVar10 = *(long *)(unaff_x22 + 0x268);
    lVar13 = *(long *)(unaff_x22 + 0x248);
    lVar14 = *(long *)(unaff_x22 + 0x240);
    plVar9[0xe] = unaff_x22 + 0x230;
    plVar9[0xf] = lVar10;
    plVar9[0xc] = lVar14;
    plVar9[0xd] = lVar13;
    plVar9[10] = unaff_x22 + 0x238;
    plVar9[0xb] = (long)puVar6;
    lVar14 = 0x112d6f778;
    func_0x0001000285a8(0x112d6f778,&UNK_10d931118);
    plVar9[0x10] = lVar14;
    lVar14 = *(long *)(lVar14 + -8);
    plVar9[0x11] = lVar14;
    uVar12 = *(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar9[0x12] = uVar12;
    lVar14 = 0x112d453c8;
    func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
    uVar12 = *(long *)(*(long *)(lVar14 + -8) + 0x40) + 0xf;
    uVar18 = uVar12 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar9[0x13] = uVar18;
    uVar12 = uVar12 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar9[0x14] = uVar12;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_1012b0c00,0,0);
    return;
  }
  func_0x0001000285a8(0x112d6f768,&UNK_10d931108);
  plVar9 = (long *)(ulong)*(uint *)(
                                   PTR___ss13withTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_ScGyxGzYaXEtYas8SendableRzr0_lFTu_11034ff68
                                   + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x300) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = (long)FUN_1012b0904;
                    /* WARNING: Could not recover jumptable at 0x00010bdb929c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss13withTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_ScGyxGzYaXEtYas8SendableRzr0_lF_11034ff60
  )();
  return;
}



/* Entry: 1012b0904; end: 1012b0957;  */

void FUN_1012b0904(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x2f8);
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x300));
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1012b0a5c,0,0);
  return;
}



/* Entry: 1012b0958; end: 1012b09cb;  */

void FUN_1012b0958(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x308));
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScG22awaitAllRemainingTasksyyYaFTu_11034fbe0 + 4);
  func_0x000107c615b8();
  *(long **)(lVar3 + 0x310) = plVar1;
  func_0x0001000285a8(0x112d6f770,&UNK_10d931110);
  *plVar1 = lVar2;
  plVar1[1] = (long)FUN_1012b09cc;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7d78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScG22awaitAllRemainingTasksyyYaF_11034fbd8)();
  return;
}



/* Entry: 1012b09cc; end: 1012b0a5b;  */

void FUN_1012b09cc(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x310));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x1012b0a14,0,0);
  return;
}



/* Entry: 1012b0a5c; end: 1012b0abb;  */

void FUN_1012b0a5c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x298);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x230);
  (**(code **)(unaff_x22 + 600))(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x228));
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001012b0ab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}


