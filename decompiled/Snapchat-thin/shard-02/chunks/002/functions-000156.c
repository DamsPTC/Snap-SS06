/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101a79518; end: 101a795c7;  */

undefined1  [16] FUN_101a79518(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  func_0x000107c5fadc();
  uVar2 = 0xd00000000000002e;
  func_0x000107c5fadc(0xd00000000000002e,0x800000010efcde10);
  uVar3 = 0;
  func_0x000107c5fe40(0);
  lVar4 = param_1;
  uVar6 = uVar2;
  func_0x0001000f6108(param_1,uVar2,uVar3);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  if (lVar4 != 0) {
    lVar5 = lVar4;
    func_0x000107c5faec(lVar4);
    func_0x000107c61170(lVar4);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar5;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101a795c8);
  (*pcVar1)();
}



/* Entry: 101a795c8; end: 101a795d3; -[SCScheduleReRegistrationNotificationPreRegistrationScopedEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a795c8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112df2fd0;
  func_0x000107c61428(param_1 + _DAT_112df2fd0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101a795d4; end: 101a795df; -[SCScheduleReRegistrationNotificationPreRegistrationScopedEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a795d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112df2fd0;
  func_0x000107c61428(param_1 + _DAT_112df2fd0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101a795e0; end: 101a795eb; -[SCScheduleReRegistrationNotificationPreRegistrationScopedEntryPoint circumstanceEngineServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a795e0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112df2fd8;
  func_0x000107c61428(param_1 + _DAT_112df2fd8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101a795ec; end: 101a795f7; -[SCScheduleReRegistrationNotificationPreRegistrationScopedEntryPoint setCircumstanceEngineServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a795ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112df2fd8;
  func_0x000107c61428(param_1 + _DAT_112df2fd8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101a795f8; end: 101a79603; -[SCScheduleReRegistrationNotificationPreRegistrationScopedEntryPoint asyncQueueServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a795f8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112df2fe0;
  func_0x000107c61428(param_1 + _DAT_112df2fe0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101a79604; end: 101a7960f; -[SCScheduleReRegistrationNotificationPreRegistrationScopedEntryPoint setAsyncQueueServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a79604(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112df2fe0;
  func_0x000107c61428(param_1 + _DAT_112df2fe0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101a79610; end: 101a7961b; -[SCScheduleReRegistrationNotificationPreRegistrationScopedEntryPoint localNotificationSchedulingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a79610(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112df2fe8;
  func_0x000107c61428(param_1 + _DAT_112df2fe8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101a7961c; end: 101a7965f;  */

void FUN_101a7961c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 101a79660; end: 101a7966b; -[SCScheduleReRegistrationNotificationPreRegistrationScopedEntryPoint setLocalNotificationSchedulingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a79660(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112df2fe8;
  func_0x000107c61428(param_1 + _DAT_112df2fe8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101a7966c; end: 101a796bf;  */

void FUN_101a7966c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101a796c0; end: 101a7992f;  */

/* WARNING: Possible PIC construction at 0x000101a797bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a7984c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a79864: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a79874: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a798dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a798ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a798a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a79898: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101a798ac) */
/* WARNING: Removing unreachable block (ram,0x000101a798f0) */
/* WARNING: Removing unreachable block (ram,0x000101a798e0) */
/* WARNING: Removing unreachable block (ram,0x000101a79878) */
/* WARNING: Removing unreachable block (ram,0x000101a798f8) */
/* WARNING: Removing unreachable block (ram,0x000101a79868) */
/* WARNING: Removing unreachable block (ram,0x000101a79850) */
/* WARNING: Removing unreachable block (ram,0x000101a797c0) */
/* WARNING: Removing unreachable block (ram,0x000101a798d8) */
/* WARNING: Removing unreachable block (ram,0x000101a797c4) */
/* WARNING: Removing unreachable block (ram,0x000101a7989c) */

void FUN_101a796c0(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = 0;
  func_0x000107c5f824();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = unaff_x20;
  func_0x000107c3fa0c();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c3e274();
    func_0x000107c61180();
    if (lVar2 != 0) {
      func_0x000107c4b81c();
      func_0x000107c61180();
      if (unaff_x20 != 0) {
        FUN_101a78fe0();
        func_0x000107c613fc();
        func_0x000107c3e270(lVar2);
        func_0x000107c61180();
        func_0x000107c5c734();
        func_0x000107c61180();
        lVar1 = lVar2;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 101a79930; end: 101a79937;  */

/* WARNING: Possible PIC construction at 0x000101a78f90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101a78f94) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a79930(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  uVar6 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_11305b998);
  lVar1 = 0;
  func_0x000101a788a0();
  uVar4 = 0x18;
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = uVar6;
  func_0x000107c6157c();
  func_0x000101a794d8();
  uVar2 = uVar6;
  uVar5 = uVar4;
  func_0x000101a794f8();
  puVar3 = &UNK_1104354e0;
  func_0x000107c613fc(&UNK_1104354e0,0x48,7);
  *(long *)(puVar3 + 0x10) = lVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar6;
  *(undefined8 *)(puVar3 + 0x20) = uVar4;
  *(undefined8 *)(puVar3 + 0x28) = uVar2;
  *(undefined8 *)(puVar3 + 0x30) = uVar5;
  *(undefined8 *)(puVar3 + 0x38) = 0x73696765725f6572;
  *(undefined8 *)(puVar3 + 0x40) = 0xef6e6f6974617274;
  func_0x000107c6157c(lVar1);
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar5);
  FUN_101a78080(FUN_101a79000,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(lVar1);
  return;
}



/* Entry: 101a79938; end: 101a7995f; -[SCScheduleReRegistrationNotificationPreRegistrationScopedEntryPoint begin] */

void FUN_101a79938(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101a796c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101a79960; end: 101a799a3; -[SCScheduleReRegistrationNotificationPreRegistrationScopedEntryPoint end] */

void FUN_101a79960(undefined8 param_1)

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



/* Entry: 101a799a4; end: 101a79c13;  */

void FUN_101a799a4(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe6) || (param_3 != -0x7ffffffef10ed550)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000001a,0x800000010ef12ab0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        if ((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef10ed650)) {
          uVar2 = 0;
          func_0x000107c605b8(0xd000000000000012,0x800000010ef129b0,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            uVar2 = 0xd000000000000023;
            if (((param_2 != -0x2fffffffffffffdd) || (param_3 != -0x7ffffffef10e79d0)) &&
               (func_0x000107c605b8(0xd000000000000023,0x800000010ef18630,param_2,param_3,0),
               (uVar2 & 1) == 0)) {
              func_0x000107c602fc(0x15);
              func_0x000107c6142c(0xe000000000000000);
              func_0x000107c5fb78(param_2,param_3);
              func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                  "SCScheduleIncompleteAuthenticationNotification/SCScheduleReRegistrationNotificationPreRegistrationScopedEntryPoint.swift"
                                  ,0x78,2,0x33,0);
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x101a79c14);
              (*pcVar1)();
            }
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c5600c();
            goto LAB_101a79a30;
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c52954();
        goto LAB_101a79a30;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c53414();
  }
LAB_101a79a30:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101a79c14; end: 101a79cbf; -[SCScheduleReRegistrationNotificationPreRegistrationScopedEntryPoint setValue:forIvarName:] */

void FUN_101a79c14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101a799a4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101a79cc0; end: 101a79d5b; -[SCScheduleReRegistrationNotificationPreRegistrationScopedEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a79cc0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112df2fd0,0);
  func_0x000107c61614(param_1 + _DAT_112df2fd8,0);
  func_0x000107c61614(param_1 + _DAT_112df2fe0,0);
  func_0x000107c61614(param_1 + _DAT_112df2fe8,0);
  *(undefined8 *)(param_1 + _DAT_112df2ff0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101a79d5c; end: 101a79d8f;  */

void FUN_101a79d5c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101a79d90; end: 101a79df7; -[SCScheduleReRegistrationNotificationPreRegistrationScopedEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a79d90(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112df2fd0);
  func_0x000107c61610(param_1 + _DAT_112df2fd8);
  func_0x000107c61610(param_1 + _DAT_112df2fe0);
  func_0x000107c61610(param_1 + _DAT_112df2fe8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112df2ff0));
  return;
}



/* Entry: 101a79df8; end: 101a79e17;  */

void FUN_101a79df8(void)

{
  func_0x000107c61168(&PTR_PTR_1127f2498);
  return;
}



/* Entry: 101a79e18; end: 101a7a0db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a79e18(double param_1,code *param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  code *pcStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  lVar2 = 0;
  func_0x000107c5eec8();
  lVar10 = *(long *)(lVar2 + -8);
  lStack_a8 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar9 = (long)&pcStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar6 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c61168();
  func_0x000107c5a9c4();
  func_0x000107c61180();
  puVar4 = puVar3;
  func_0x000107c4a28c();
  func_0x000107c61170(puVar3);
  if ((int)puVar4 == 0) {
    (*param_2)(0,0);
  }
  else {
    puVar3 = PTR_PTR_1126a8700;
    pcStack_b0 = param_2;
    func_0x000107c610f8(PTR_PTR_1126a8700);
    func_0x000107c453e4();
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112df3020);
    func_0x000107c5fadc(uVar7,((undefined8 *)(unaff_x20 + _DAT_112df3020))[1]);
    func_0x000107c5a344(puVar3);
    func_0x000107c61170(uVar7);
    func_0x000107c5eea0(lVar6);
    func_0x000107c5ee8c();
    (**(code **)(lVar8 + 8))(lVar6,lVar2);
    param_1 = param_1 * 1000.0;
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101a7a0d4);
      (*pcVar1)();
    }
    if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101a7a0d8);
      (*pcVar1)();
    }
    if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101a7a0dc);
      (*pcVar1)();
    }
    puVar4 = puVar3;
    func_0x000107c59dc8(puVar3);
    func_0x000107c5eec4(lVar9);
    func_0x000107c5eeac();
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar2);
    (**(code **)(lVar10 + 8))(lVar9,lStack_a8);
    func_0x000107c546ac(puVar3);
    func_0x000107c61170(puVar4);
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112df3028);
    puVar4 = &UNK_110435650;
    func_0x000107c613fc(&UNK_110435650,0x21,7);
    *(code **)(puVar4 + 0x10) = pcStack_b0;
    *(undefined8 *)(puVar4 + 0x18) = param_3;
    puVar4[0x20] = 1;
    pcStack_80 = FUN_101a7a2bc;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    pcStack_90 = FUN_101a7a2c8;
    puStack_88 = &UNK_110435668;
    ppuVar5 = &puStack_a0;
    puStack_78 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    puVar4 = puStack_78;
    func_0x000107c6157c(param_3);
    func_0x000107c61574(puVar4);
    func_0x000107c50244(uVar7);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(puVar3);
  }
  return;
}



/* Entry: 101a7a0dc; end: 101a7a2bb;  */

/* WARNING: Possible PIC construction at 0x000101a7a150: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a7a268: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101a7a26c) */

void FUN_101a7a0dc(long param_1,long param_2,code *param_3,undefined8 param_4,undefined1 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_a0 [80];
  
  puVar6 = auStack_a0;
  if (param_1 == 0) {
    if (param_2 != 0) {
      func_0x000107c614b0(param_2);
      func_0x000107c614b0(param_2);
      (*param_3)(param_2,1);
      func_0x000107c614ac(param_2);
      func_0x000107c614ac(param_2);
      return;
    }
    lVar2 = 0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    func_0x000107c61534();
    *(undefined8 *)(lVar2 + 0x18) = 2;
    *(undefined8 *)(lVar2 + 0x10) = 1;
    uVar3 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    func_0x000107c5faec();
    *(undefined8 *)(lVar2 + 0x20) = uVar3;
    puVar1 = PTR___sSSN_11034da80;
    *(undefined **)(lVar2 + 0x48) = PTR___sSSN_11034da80;
    *(undefined1 **)(lVar2 + 0x28) = puVar6;
    *(undefined8 *)(lVar2 + 0x30) = 0xd000000000000031;
    *(undefined8 *)(lVar2 + 0x38) = 0x800000010efcdf30;
    lVar4 = lVar2;
    func_0x000100214a84(lVar2);
    func_0x000107c61588(lVar2);
    func_0x000100f15a0c((undefined8 *)(lVar2 + 0x20));
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    param_1 = -0x2fffffffffffffd3;
    func_0x000107c5fadc(0xd00000000000002d,0x800000010efcdf00);
    func_0x000107c5f9dc(lVar4,puVar1,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(lVar4);
    func_0x000107c466bc(puVar5);
  }
  else {
    func_0x000107c61174();
    lVar2 = param_1;
    func_0x000107c5bd10();
    if (lVar2 == 1) {
      (*param_3)(param_5,0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101a7a2bc; end: 101a7a2c7;  */

/* WARNING: Possible PIC construction at 0x000101a7a150: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a7a268: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101a7a26c) */

void FUN_101a7a2bc(long param_1,long param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  long unaff_x20;
  undefined1 auStack_a0 [80];
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  uVar2 = *(undefined1 *)(unaff_x20 + 0x20);
  puVar8 = auStack_a0;
  if (param_1 == 0) {
    if (param_2 != 0) {
      func_0x000107c614b0(param_2);
      func_0x000107c614b0(param_2);
      (*pcVar1)(param_2,1);
      func_0x000107c614ac(param_2);
      func_0x000107c614ac(param_2);
      return;
    }
    lVar4 = 0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0,pcVar1,*(undefined8 *)(unaff_x20 + 0x18));
    func_0x000107c61534();
    *(undefined8 *)(lVar4 + 0x18) = 2;
    *(undefined8 *)(lVar4 + 0x10) = 1;
    uVar5 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    func_0x000107c5faec();
    *(undefined8 *)(lVar4 + 0x20) = uVar5;
    puVar3 = PTR___sSSN_11034da80;
    *(undefined **)(lVar4 + 0x48) = PTR___sSSN_11034da80;
    *(undefined1 **)(lVar4 + 0x28) = puVar8;
    *(undefined8 *)(lVar4 + 0x30) = 0xd000000000000031;
    *(undefined8 *)(lVar4 + 0x38) = 0x800000010efcdf30;
    lVar6 = lVar4;
    func_0x000100214a84(lVar4);
    func_0x000107c61588(lVar4);
    func_0x000100f15a0c((undefined8 *)(lVar4 + 0x20));
    puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    param_1 = -0x2fffffffffffffd3;
    func_0x000107c5fadc(0xd00000000000002d,0x800000010efcdf00);
    func_0x000107c5f9dc(lVar6,puVar3,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(lVar6);
    func_0x000107c466bc(puVar7);
  }
  else {
    func_0x000107c61174();
    lVar4 = param_1;
    func_0x000107c5bd10();
    if (lVar4 == 1) {
      (*pcVar1)(uVar2,0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101a7a2c8; end: 101a7a33f;  */

/* WARNING: Possible PIC construction at 0x000101a7a324: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101a7a328) */

void FUN_101a7a2c8(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 101a7a340; end: 101a7a35b;  */

void FUN_101a7a340(long param_1,long param_2)

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



/* Entry: 101a7a35c; end: 101a7a3bb; -[_TtC30NotificationSignalServicesImpl31NotificationDeviceStateReporter init] */

void FUN_101a7a35c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("NotificationSignalServicesImpl.NotificationDeviceStateReporter",0x3e,"init()"
                      ,6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101a7a388);
  (*pcVar1)();
}



/* Entry: 101a7a3bc; end: 101a7a417; -[_TtC30NotificationSignalServicesImpl31NotificationDeviceStateReporter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a7a3bc(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112df3020 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112df3028));
  return;
}



/* Entry: 101a7a418; end: 101a7a437;  */

void FUN_101a7a418(void)

{
  func_0x000107c61168(&PTR_PTR_1127f2570);
  return;
}



/* Entry: 101a7a438; end: 101a7a47b;  */

void FUN_101a7a438(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  return;
}



/* Entry: 101a7a47c; end: 101a7a48b;  */

void FUN_101a7a47c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  return;
}



/* Entry: 101a7a48c; end: 101a7a517;  */

void FUN_101a7a48c(void)

{
  undefined *puVar1;
  code *pcVar2;
  
  puVar1 = &UNK_1104356b8;
  func_0x000107c613fc(&UNK_1104356b8,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  func_0x0001000285a8(0x112df3058,&UNK_10d9c1280);
  func_0x000107c613fc();
  pcVar2 = FUN_101a7a7fc;
  func_0x0001000bdd8c(FUN_101a7a7fc,puVar1);
  func_0x0001001f74bc(0);
  func_0x000107c610f8();
  func_0x000103743728(pcVar2);
  return;
}



/* Entry: 101a7a518; end: 101a7a7fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a7a518(long *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    lVar2 = *(long *)(param_2 + 0x18);
    func_0x000107c3e270();
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar3 == 0) {
      func_0x000107c61574(param_2);
    }
    else {
      lVar4 = *(long *)(param_2 + 0x20);
      func_0x000107c44580();
      func_0x000107c61180();
      lVar2 = lVar4;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar4);
      if (lVar2 != 0) {
        lVar4 = lVar3;
        func_0x000107c4f7fc();
        func_0x000107c61180();
        puVar5 = PTR_PTR_1126ae728;
        func_0x000107c61168(PTR_PTR_1126ae728);
        func_0x000107c3edf4();
        func_0x000107c61180();
        uVar6 = 0xd000000000000018;
        func_0x000107c5fadc(0xd000000000000018,0x800000010ef1b1f0);
        puVar7 = puVar5;
        func_0x000107c545b8(puVar5);
        func_0x000107c61180();
        func_0x000107c61170(uVar6);
        func_0x000107c61170(puVar7);
        func_0x000107c57f3c(puVar5);
        func_0x000107c61180();
        func_0x000107c61170();
        func_0x000107c59d5c(puVar5);
        func_0x000107c61180();
        func_0x000107c61170();
        uVar6 = 0xd00000000000001b;
        uVar14 = 0x800000010efcdfc0;
        func_0x000107c5fadc(0xd00000000000001b);
        lVar8 = lVar2;
        func_0x000107c40a28(lVar2);
        func_0x000107c61180();
        func_0x000107c61170(uVar6);
        puVar9 = PTR_PTR_1126a8708;
        func_0x000107c610f8();
        func_0x000107c49088();
        uVar10 = *(undefined8 *)(*(long *)(param_2 + 0x10) + _DAT_113091ad8);
        func_0x000107c5d984();
        func_0x000107c61180();
        uVar6 = uVar10;
        func_0x000107c5faec();
        func_0x000107c61170(uVar10);
        lVar11 = 0;
        FUN_101a7a418();
        lVar12 = lVar11;
        func_0x000107c610f8();
        puVar1 = (undefined8 *)(lVar12 + _DAT_112df3020);
        *puVar1 = uVar6;
        puVar1[1] = uVar14;
        *(undefined **)(lVar12 + _DAT_112df3028) = puVar9;
        puVar7 = PTR_s_init_1125d9248;
        lStack_88 = lVar12;
        lStack_80 = lVar11;
        func_0x000107c61174(puVar9);
        plVar13 = &lStack_88;
        func_0x000107c61154(plVar13,puVar7);
        param_1[3] = lVar11;
        param_1[4] = (long)&PTR_DAT_110435690;
        func_0x000107c615e8(lVar2);
        func_0x000107c61170(puVar9);
        func_0x000107c61170(lVar8);
        func_0x000107c61170(lVar4);
        func_0x000107c61170(puVar5);
        *param_1 = (long)plVar13;
        func_0x000107c61574(param_2);
        func_0x000107c615e8(lVar3);
        return;
      }
      func_0x000107c61574(param_2);
      func_0x000107c615e8(lVar3);
    }
  }
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 101a7a7fc; end: 101a7a803;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a7a7fc(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  long unaff_x20;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_78,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + 0x18);
    func_0x000107c3e270();
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar4 == 0) {
      func_0x000107c61574(lVar2);
    }
    else {
      lVar5 = *(long *)(lVar2 + 0x20);
      func_0x000107c44580();
      func_0x000107c61180();
      lVar3 = lVar5;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar5);
      if (lVar3 != 0) {
        lVar5 = lVar4;
        func_0x000107c4f7fc();
        func_0x000107c61180();
        puVar6 = PTR_PTR_1126ae728;
        func_0x000107c61168(PTR_PTR_1126ae728);
        func_0x000107c3edf4();
        func_0x000107c61180();
        uVar7 = 0xd000000000000018;
        func_0x000107c5fadc(0xd000000000000018,0x800000010ef1b1f0);
        puVar8 = puVar6;
        func_0x000107c545b8(puVar6);
        func_0x000107c61180();
        func_0x000107c61170(uVar7);
        func_0x000107c61170(puVar8);
        func_0x000107c57f3c(puVar6);
        func_0x000107c61180();
        func_0x000107c61170();
        func_0x000107c59d5c(puVar6);
        func_0x000107c61180();
        func_0x000107c61170();
        uVar7 = 0xd00000000000001b;
        uVar15 = 0x800000010efcdfc0;
        func_0x000107c5fadc(0xd00000000000001b);
        lVar9 = lVar3;
        func_0x000107c40a28(lVar3);
        func_0x000107c61180();
        func_0x000107c61170(uVar7);
        puVar10 = PTR_PTR_1126a8708;
        func_0x000107c610f8();
        func_0x000107c49088();
        uVar11 = *(undefined8 *)(*(long *)(lVar2 + 0x10) + _DAT_113091ad8);
        func_0x000107c5d984();
        func_0x000107c61180();
        uVar7 = uVar11;
        func_0x000107c5faec();
        func_0x000107c61170(uVar11);
        lVar12 = 0;
        FUN_101a7a418();
        lVar13 = lVar12;
        func_0x000107c610f8();
        puVar1 = (undefined8 *)(lVar13 + _DAT_112df3020);
        *puVar1 = uVar7;
        puVar1[1] = uVar15;
        *(undefined **)(lVar13 + _DAT_112df3028) = puVar10;
        puVar8 = PTR_s_init_1125d9248;
        lStack_88 = lVar13;
        lStack_80 = lVar12;
        func_0x000107c61174(puVar10);
        plVar14 = &lStack_88;
        func_0x000107c61154(plVar14,puVar8);
        param_1[3] = lVar12;
        param_1[4] = (long)&PTR_DAT_110435690;
        func_0x000107c615e8(lVar3);
        func_0x000107c61170(puVar10);
        func_0x000107c61170(lVar9);
        func_0x000107c61170(lVar5);
        func_0x000107c61170(puVar6);
        *param_1 = (long)plVar14;
        func_0x000107c61574(lVar2);
        func_0x000107c615e8(lVar4);
        return;
      }
      func_0x000107c61574(lVar2);
      func_0x000107c615e8(lVar4);
    }
  }
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 101a7a804; end: 101a7a827;  */

/* WARNING: Possible PIC construction at 0x000101a7a810: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101a7a814) */

void FUN_101a7a804(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101a7a828; end: 101a7a87b;  */

void FUN_101a7a828(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101a7a87c; end: 101a7a8fb;  */

void FUN_101a7a87c(undefined8 param_1)

{
  if (lRam0000000112df3088 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e66c120);
  return;
}



/* Entry: 101a7a8fc; end: 101a7a99b;  */

void FUN_101a7a8fc(undefined8 *param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_1104356b8;
  func_0x000107c613fc(&UNK_1104356b8,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  func_0x0001000285a8(0x112df3058,&UNK_10d9c1280);
  func_0x000107c613fc();
  pcVar2 = FUN_101a7a99c;
  func_0x0001000bdd8c(FUN_101a7a99c,puVar1);
  uVar3 = 0;
  func_0x0001001f74bc(0);
  func_0x000107c610f8();
  func_0x000103743728(pcVar2,uVar3);
  *param_1 = pcVar2;
  return;
}



/* Entry: 101a7a99c; end: 101a7a99f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a7a99c(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  long unaff_x20;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_78,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + 0x18);
    func_0x000107c3e270();
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar4 == 0) {
      func_0x000107c61574(lVar2);
    }
    else {
      lVar5 = *(long *)(lVar2 + 0x20);
      func_0x000107c44580();
      func_0x000107c61180();
      lVar3 = lVar5;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar5);
      if (lVar3 != 0) {
        lVar5 = lVar4;
        func_0x000107c4f7fc();
        func_0x000107c61180();
        puVar6 = PTR_PTR_1126ae728;
        func_0x000107c61168(PTR_PTR_1126ae728);
        func_0x000107c3edf4();
        func_0x000107c61180();
        uVar7 = 0xd000000000000018;
        func_0x000107c5fadc(0xd000000000000018,0x800000010ef1b1f0);
        puVar8 = puVar6;
        func_0x000107c545b8(puVar6);
        func_0x000107c61180();
        func_0x000107c61170(uVar7);
        func_0x000107c61170(puVar8);
        func_0x000107c57f3c(puVar6);
        func_0x000107c61180();
        func_0x000107c61170();
        func_0x000107c59d5c(puVar6);
        func_0x000107c61180();
        func_0x000107c61170();
        uVar7 = 0xd00000000000001b;
        uVar15 = 0x800000010efcdfc0;
        func_0x000107c5fadc(0xd00000000000001b);
        lVar9 = lVar3;
        func_0x000107c40a28(lVar3);
        func_0x000107c61180();
        func_0x000107c61170(uVar7);
        puVar10 = PTR_PTR_1126a8708;
        func_0x000107c610f8();
        func_0x000107c49088();
        uVar11 = *(undefined8 *)(*(long *)(lVar2 + 0x10) + _DAT_113091ad8);
        func_0x000107c5d984();
        func_0x000107c61180();
        uVar7 = uVar11;
        func_0x000107c5faec();
        func_0x000107c61170(uVar11);
        lVar12 = 0;
        FUN_101a7a418();
        lVar13 = lVar12;
        func_0x000107c610f8();
        puVar1 = (undefined8 *)(lVar13 + _DAT_112df3020);
        *puVar1 = uVar7;
        puVar1[1] = uVar15;
        *(undefined **)(lVar13 + _DAT_112df3028) = puVar10;
        puVar8 = PTR_s_init_1125d9248;
        lStack_88 = lVar13;
        lStack_80 = lVar12;
        func_0x000107c61174(puVar10);
        plVar14 = &lStack_88;
        func_0x000107c61154(plVar14,puVar8);
        param_1[3] = lVar12;
        param_1[4] = (long)&PTR_DAT_110435690;
        func_0x000107c615e8(lVar3);
        func_0x000107c61170(puVar10);
        func_0x000107c61170(lVar9);
        func_0x000107c61170(lVar5);
        func_0x000107c61170(puVar6);
        *param_1 = (long)plVar14;
        func_0x000107c61574(lVar2);
        func_0x000107c615e8(lVar4);
        return;
      }
      func_0x000107c61574(lVar2);
      func_0x000107c615e8(lVar4);
    }
  }
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 101a7a9a0; end: 101a7a9f3;  */

undefined8 FUN_101a7a9a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  func_0x0001004428d0(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 101a7a9f4; end: 101a7aa2f;  */

void FUN_101a7a9f4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101a7aa30; end: 101a7aa73;  */

undefined1  [16] FUN_101a7aa30(void)

{
  return ZEXT816(0x1104357b0);
}



/* Entry: 101a7aa74; end: 101a7aac7;  */

void FUN_101a7aa74(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101a7aac8; end: 101a7ab5b;  */

void FUN_101a7aac8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x000100233768();
  func_0x000107c613fc();
  FUN_101a7abbc(uStack_48,uStack_50,uStack_58);
  *param_1 = param_2;
  return;
}



/* Entry: 101a7ab5c; end: 101a7ab67;  */

void FUN_101a7ab5c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_48,uVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x000100233768();
  func_0x000107c613fc();
  FUN_101a7abbc(uStack_48,uStack_50,uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 101a7ab68; end: 101a7abbb;  */

undefined8 FUN_101a7ab68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_101a7abbc(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 101a7abbc; end: 101a7ac97;  */

void FUN_101a7abbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  FUN_101a804b8(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000101a80258();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  func_0x000101a8028c();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  return;
}



/* Entry: 101a7ac98; end: 101a7acd3;  */

void FUN_101a7ac98(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101a7acd4; end: 101a7ad27;  */

void FUN_101a7acd4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101a7ad28; end: 101a7ad73;  */

void FUN_101a7ad28(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101a7ad74; end: 101a7adc7;  */

void FUN_101a7ad74(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101a7adc8; end: 101a7ae27; -[_TtC31SaturnSocialContextServicesImpl31SaturnSocialContextProviderImpl fetchSocialContextWithCompletion:] */

/* WARNING: Possible PIC construction at 0x000101a7ae0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101a7ae10) */

void FUN_101a7adc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c60bc4(param_3);
  func_0x000107c60bc4();
  func_0x000107c61174(param_1);
  FUN_101a7c0c8(0,0,param_1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_release_11034bcf0)(param_3);
  return;
}



/* Entry: 101a7ae28; end: 101a7aeeb;  */

void FUN_101a7ae28(undefined8 param_1,long param_2,code *param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined1 auStack_58 [24];
  
  if (param_2 != 0) {
    func_0x000107c614b0(param_2);
    (*param_3)(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)(param_2);
    return;
  }
  func_0x000107c61428(param_5 + 0x10,auStack_58,0,0);
  param_5 = param_5 + 0x10;
  func_0x000107c61618();
  if (param_5 != 0) {
    FUN_101a7aeec(param_1,param_6,param_7,param_3,param_4);
    func_0x000107c61170(param_5);
  }
  return;
}



/* Entry: 101a7aeec; end: 101a7bd63;  */

/* WARNING: Removing unreachable block (ram,0x000101a7bd48) */

void FUN_101a7aeec(code *param_1,code *param_2,code *param_3,code *param_4)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  code *pcVar11;
  code *pcVar12;
  code *pcVar13;
  code *pcVar14;
  code *pcVar15;
  code *pcVar16;
  code *pcVar17;
  code *unaff_x20;
  code *pcVar18;
  undefined *puVar19;
  ulong uVar20;
  code *pcVar21;
  code *pcVar22;
  long lVar23;
  code *pcVar24;
  code *pcStack_110;
  undefined8 uStack_108;
  code *pcStack_c8;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  code *pcStack_80;
  code *pcStack_78;
  
  if (param_1 == (code *)0x0) {
    (*param_4)();
    return;
  }
  pcVar24 = (code *)((ulong)param_1 & 0xffffffffffffff8);
  pcVar3 = param_4;
  if ((ulong)param_1 >> 0x3e == 0) {
    pcVar22 = *(code **)(pcVar24 + 0x10);
  }
  else {
    pcVar22 = param_1;
    if (-1 < (long)param_1) {
      pcVar22 = pcVar24;
    }
    func_0x000107c60480();
  }
  pcVar18 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
  if (pcVar22 != (code *)0x0) {
    pcVar17 = param_2;
    pcVar8 = (code *)0x0;
    do {
      while( true ) {
        if (((ulong)param_1 & 0xc000000000000001) == 0) {
          if (*(code **)(pcVar24 + 0x10) <= pcVar8) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101a7b15c);
            (*pcVar3)();
          }
          pcVar4 = *(code **)(param_1 + (long)pcVar8 * 8 + 0x20);
          func_0x000107c61174();
          pcVar21 = pcVar17;
        }
        else {
          pcVar4 = pcVar8;
          pcVar21 = param_1;
          func_0x00010103193c();
        }
        pcVar15 = pcVar8 + 1;
        if (SCARRY8((long)pcVar8,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101a7b158);
          (*pcVar3)();
        }
        pcVar13 = pcVar4;
        func_0x000107c5d984();
        func_0x000107c61180();
        pcVar17 = pcVar21;
        if (pcVar13 != (code *)0x0) break;
LAB_101a7af5c:
        func_0x000107c61170(pcVar4);
LAB_101a7af64:
        pcVar8 = pcVar8 + 1;
        if (pcVar15 == pcVar22) goto LAB_101a7b18c;
      }
      pcVar14 = pcVar13;
      func_0x000107c5faec();
      pcVar17 = pcVar21;
      func_0x000107c61170(pcVar13);
      uVar20 = (ulong)pcVar14 & 0xffffffffffff;
      if (((ulong)pcVar21 & 0x2000000000000000) != 0) {
        uVar20 = (ulong)pcVar21 >> 0x38 & 0xf;
      }
      if (uVar20 == 0) {
        func_0x000107c6142c(pcVar21);
        goto LAB_101a7af5c;
      }
      if ((pcVar14 == (code *)0x70616e736d616574) && (pcVar21 == (code *)0xec00000074616863)) {
        func_0x000107c61170(pcVar4);
        func_0x000107c6142c(0xec00000074616863);
        goto LAB_101a7af64;
      }
      pcVar3 = (code *)0xec00000074616863;
      pcVar13 = pcVar21;
      func_0x000107c605b8(pcVar14,pcVar21,0x70616e736d616574,0xec00000074616863,0);
      func_0x000107c6142c(pcVar21);
      pcVar17 = pcVar13;
      if (((ulong)pcVar14 & 1) != 0) goto LAB_101a7af5c;
      pcVar21 = pcVar4;
      func_0x000107c51628();
      func_0x000107c61180();
      pcVar17 = pcVar13;
      if (pcVar21 == (code *)0x0) goto LAB_101a7af5c;
      pcVar14 = pcVar21;
      func_0x000107c51624();
      func_0x000107c61180();
      func_0x000107c61170(pcVar21);
      pcVar17 = pcVar13;
      if (pcVar14 == (code *)0x0) goto LAB_101a7af5c;
      pcVar21 = pcVar14;
      func_0x000107c5faec();
      pcVar17 = pcVar13;
      func_0x000107c61170(pcVar14);
      func_0x000107c6142c(pcVar13);
      uVar20 = (ulong)pcVar21 & 0xffffffffffff;
      if (((ulong)pcVar13 & 0x2000000000000000) != 0) {
        uVar20 = (ulong)pcVar13 >> 0x38 & 0xf;
      }
      if (uVar20 == 0) goto LAB_101a7af5c;
      pcVar8 = pcVar18;
      func_0x000107c61558();
      pcStack_88 = pcVar18;
      if (((ulong)pcVar8 & 1) == 0) {
        pcVar17 = (code *)(*(long *)(pcVar18 + 0x10) + 1);
        func_0x0001010673e4(0,pcVar17,1);
      }
      uVar20 = *(ulong *)(pcStack_88 + 0x10);
      pcVar18 = (code *)(uVar20 + 1);
      if (*(ulong *)(pcStack_88 + 0x18) >> 1 <= uVar20) {
        pcVar17 = pcVar18;
        func_0x0001010673e4(1 < *(ulong *)(pcStack_88 + 0x18),pcVar18,1);
      }
      *(code **)(pcStack_88 + 0x10) = pcVar18;
      *(code **)(pcStack_88 + uVar20 * 8 + 0x20) = pcVar4;
      pcVar8 = pcVar15;
      pcVar18 = pcStack_88;
    } while (pcVar15 != pcVar22);
  }
LAB_101a7b18c:
  if (((long)pcVar18 < 0) || (((ulong)pcVar18 >> 0x3e & 1) != 0)) {
    pcVar24 = pcVar18;
    func_0x000107c60480();
    if (pcVar24 == (code *)0x0) goto LAB_101a7bc80;
    pcVar24 = pcVar18;
    func_0x000107c60480();
    func_0x000107c61174(unaff_x20);
    pcVar22 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
    if (pcVar24 != (code *)0x0) {
      func_0x000107c6157c(pcVar18);
      pcVar22 = pcVar24;
      func_0x000100f63250(pcVar24,0);
      pcVar17 = pcVar18;
      func_0x000100f63690(pcVar22 + 0x20,pcVar24);
      func_0x000107c6142c();
      if (pcVar17 != pcVar24) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101a7bc80);
        (*pcVar3)();
      }
    }
  }
  else {
    if (*(long *)(pcVar18 + 0x10) == 0) {
LAB_101a7bc80:
      func_0x000107c61574(pcVar18);
      (*param_4)(0);
      return;
    }
    func_0x000107c61174(unaff_x20);
    func_0x000107c6157c(pcVar18);
    pcVar22 = pcVar18;
  }
  pcStack_88 = pcVar22;
  func_0x000107c61174();
  pcVar24 = unaff_x20;
  FUN_101a7f8d4(&pcStack_88);
  func_0x000107c61574(pcVar18);
  func_0x000107c61170(unaff_x20);
  func_0x000107c61170(unaff_x20);
  pcVar22 = pcStack_88;
  pcStack_78 = pcStack_88;
  if (param_3 != (code *)0x0) {
    if (((long)pcStack_88 < 0) || (((ulong)pcStack_88 >> 0x3e & 1) != 0)) {
      pcVar18 = pcStack_88;
      func_0x000107c60480();
    }
    else {
      pcVar18 = *(code **)(pcStack_88 + 0x10);
    }
    if (pcVar18 != (code *)0x0) {
      pcVar17 = (code *)0x0;
      do {
        if (((ulong)pcVar22 & 0xc000000000000001) == 0) {
          if (*(code **)(pcVar22 + 0x10) <= pcVar17) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101a7bc1c);
            (*pcVar3)();
          }
          pcVar8 = *(code **)(pcVar22 + (long)pcVar17 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          pcVar8 = pcVar17;
          pcVar24 = pcVar22;
          func_0x00010103193c();
        }
        pcVar4 = pcVar8;
        func_0x000107c5d984();
        func_0x000107c61180();
        if (pcVar4 != (code *)0x0) {
          pcVar21 = pcVar4;
          func_0x000107c5faec();
          func_0x000107c61170(pcVar4);
          if ((pcVar21 == param_2) && (param_3 == pcVar24)) {
            func_0x000107c6142c(pcVar24);
            func_0x000107c61170(pcVar8);
          }
          else {
            pcVar4 = pcVar24;
            pcVar3 = param_3;
            func_0x000107c605b8(pcVar21,pcVar24,param_2,param_3,0);
            func_0x000107c6142c(pcVar24);
            func_0x000107c61170(pcVar8);
            pcVar24 = pcVar4;
            if (((ulong)pcVar21 & 1) == 0) goto joined_r0x000101a7b2b4;
          }
          FUN_101a7bdf8(pcVar17);
          if ((ulong)pcStack_78 >> 0x3e != 0) {
            pcVar24 = (code *)((ulong)pcStack_78 & 0xffffffffffffff8);
            if ((code *)0x7fffffffffffffff < pcStack_78) {
              pcVar24 = pcStack_78;
            }
            func_0x000107c60480();
            if ((long)pcVar24 < 0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101a7bd3c);
              (*pcVar3)();
            }
          }
          pcVar24 = (code *)0x0;
          FUN_101a7fb60(0,0,pcVar17);
          func_0x000107c61170(pcVar17);
          pcVar22 = pcStack_78;
          break;
        }
        func_0x000107c61170(pcVar8);
joined_r0x000101a7b2b4:
        if (SCARRY8((long)pcVar17,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101a7bc14);
          (*pcVar3)();
        }
        pcVar17 = pcVar17 + 1;
      } while (pcVar17 != pcVar18);
    }
  }
  uVar20 = (ulong)pcVar22 >> 0x3e;
  if (uVar20 == 0) {
    pcVar18 = *(code **)((code *)((ulong)pcVar22 & 0xffffffffffffff8) + 0x10);
  }
  else {
    pcVar18 = (code *)((ulong)pcVar22 & 0xffffffffffffff8);
    if (((ulong)pcVar22 & 0x8000000000000000) != 0) {
      pcVar18 = pcVar22;
    }
    func_0x000107c60480();
  }
  if (pcVar18 == (code *)0x0) {
    (*param_4)();
    func_0x000107c6142c(pcVar22);
    return;
  }
  uVar1 = (ulong)pcVar22 & 0xc000000000000001;
  if (uVar1 == 0) {
    if (*(long *)(((ulong)pcVar22 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101a7bd08);
      (*pcVar3)();
    }
    uVar5 = *(undefined8 *)(pcVar22 + 0x20);
    func_0x000107c61174();
  }
  else {
    uVar5 = 0;
    pcVar24 = pcVar22;
    func_0x00010103193c();
  }
  uVar6 = uVar5;
  FUN_101a7fc38();
  uVar7 = uVar5;
  pcVar18 = pcVar24;
  FUN_101a7fd60();
  pcVar17 = pcVar18;
  if (uVar20 == 0) {
    pcVar8 = *(code **)((code *)((ulong)pcVar22 & 0xffffffffffffff8) + 0x10);
  }
  else {
    pcVar8 = (code *)((ulong)pcVar22 & 0xffffffffffffff8);
    if (((ulong)pcVar22 & 0x8000000000000000) != 0) {
      pcVar8 = pcVar22;
    }
    func_0x000107c60480();
  }
  if ((long)pcVar8 < 2) {
    func_0x000107c61434(pcVar22);
    pcStack_110 = (code *)0x0;
    uStack_108 = 0;
    pcVar4 = pcVar17;
  }
  else {
    if (uVar1 == 0) {
      if (*(ulong *)(((ulong)pcVar22 & 0xffffffffffffff8) + 0x10) < 2) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101a7bd40);
        (*pcVar3)();
      }
      uVar9 = *(undefined8 *)(pcVar22 + 0x28);
      func_0x000107c61434(pcVar22);
      func_0x000107c61174();
    }
    else {
      func_0x000107c61434(pcVar22);
      uVar9 = 1;
      pcVar17 = pcVar22;
      func_0x00010103193c();
    }
    uStack_108 = uVar9;
    FUN_101a7fd60();
    pcVar4 = pcVar17;
    func_0x000107c61170(uVar9);
    pcStack_110 = pcVar17;
  }
  pcVar17 = (code *)((ulong)pcVar22 & 0xffffffffffffff8);
  if (uVar20 == 0) {
    pcVar21 = *(code **)(pcVar17 + 0x10);
  }
  else {
    pcVar21 = pcVar17;
    if (((ulong)pcVar22 & 0x8000000000000000) != 0) {
      pcVar21 = pcVar22;
    }
    func_0x000107c60480();
  }
  pcStack_c8 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
  pcStack_a8 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
  if (pcVar21 != (code *)0x0) {
    pcVar15 = (code *)0x0;
    do {
      while( true ) {
        if (uVar1 == 0) {
          if (*(code **)(pcVar17 + 0x10) <= pcVar15) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101a7bc18);
            (*pcVar3)();
          }
          pcVar13 = *(code **)(pcVar22 + (long)pcVar15 * 8 + 0x20);
          func_0x000107c61174();
          pcVar14 = pcVar4;
        }
        else {
          pcVar13 = pcVar15;
          pcVar14 = pcVar22;
          func_0x00010103193c();
        }
        pcVar16 = pcVar15 + 1;
        if (SCARRY8((long)pcVar15,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101a7bc10);
          (*pcVar3)();
        }
        if (*(long *)(pcStack_a8 + 0x10) == 5) {
          func_0x000107c61170(pcVar13);
          goto joined_r0x000101a7b810;
        }
        pcVar12 = pcVar13;
        func_0x000107c40cdc();
        func_0x000107c61180();
        pcVar4 = pcVar14;
        if (pcVar12 == (code *)0x0) break;
        pcVar11 = pcVar12;
        func_0x000107c4f3b8();
        func_0x000107c61180();
        func_0x000107c61170(pcVar12);
        pcVar4 = pcVar14;
        if (pcVar11 == (code *)0x0) break;
        pcVar12 = pcVar11;
        func_0x000107c5faec();
        pcVar4 = pcVar14;
        func_0x000107c61170(pcVar11);
        uVar2 = (ulong)pcVar12 & 0xffffffffffff;
        if (((ulong)pcVar14 & 0x2000000000000000) != 0) {
          uVar2 = (ulong)pcVar14 >> 0x38 & 0xf;
        }
        if (uVar2 == 0) {
          func_0x000107c6142c(pcVar14);
          break;
        }
LAB_101a7b550:
        pcVar11 = pcStack_a8;
        func_0x000107c61558();
        pcVar15 = pcVar4;
        if (((ulong)pcVar11 & 1) == 0) {
          pcVar15 = (code *)(*(long *)(pcStack_a8 + 0x10) + 1);
          pcVar4 = (code *)0x0;
          FUN_101a7bfa0(0,pcVar15,1,pcStack_a8,PTR__swift_bridgeObjectRelease_11034f258);
          pcVar3 = pcStack_a8;
          pcStack_a8 = pcVar4;
        }
        uVar2 = *(ulong *)(pcStack_a8 + 0x10);
        pcVar4 = (code *)(uVar2 + 1);
        if (*(ulong *)(pcStack_a8 + 0x18) >> 1 <= uVar2) {
          pcVar11 = (code *)(ulong)(1 < *(ulong *)(pcStack_a8 + 0x18));
          pcVar15 = pcVar4;
          FUN_101a7bfa0(pcVar11,pcVar4,1,pcStack_a8,PTR__swift_bridgeObjectRelease_11034f258);
          pcVar3 = pcStack_a8;
          pcStack_a8 = pcVar11;
        }
        *(code **)(pcStack_a8 + 0x10) = pcVar4;
        *(code **)(pcStack_a8 + uVar2 * 0x10 + 0x20) = pcVar12;
        *(code **)(pcStack_a8 + uVar2 * 0x10 + 0x28) = pcVar14;
        pcVar12 = pcVar13;
        func_0x000107c42120();
        func_0x000107c61180();
        pcVar14 = pcVar15;
        if (pcVar12 == (code *)0x0) {
LAB_101a7b634:
          pcVar15 = pcVar13;
          func_0x000107c5db08();
          func_0x000107c61180();
          pcVar12 = pcVar3;
          if (pcVar15 == (code *)0x0) {
            pcVar4 = (code *)0x665f646e65697266;
            func_0x000107c5fadc(0x665f646e65697266,0xef6b6361626c6c61);
            pcVar12 = (code *)0xd00000000000001f;
            func_0x000107c5fadc(0xd00000000000001f,0x800000010d9c1660);
            uVar9 = 0;
            func_0x000107c5fe40(0);
            pcVar15 = pcVar4;
            pcVar14 = pcVar12;
            func_0x0001000f6108(pcVar4,pcVar12,uVar9);
            func_0x000107c61180();
            func_0x000107c61170(pcVar4);
            func_0x000107c61170(pcVar12);
            func_0x000107c61170(uVar9);
            pcVar12 = pcVar3;
            if (pcVar15 == (code *)0x0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101a7bd48);
              (*pcVar3)();
            }
          }
          pcVar11 = pcVar15;
          func_0x000107c5faec();
          pcVar4 = pcVar14;
          func_0x000107c61170(pcVar15);
        }
        else {
          pcVar11 = pcVar12;
          func_0x000107c5faec();
          pcVar14 = pcVar15;
          func_0x000107c61170();
          uVar2 = (ulong)pcVar11 & 0xffffffffffff;
          if (((ulong)pcVar15 & 0x2000000000000000) != 0) {
            uVar2 = (ulong)pcVar15 >> 0x38 & 0xf;
          }
          if (uVar2 == 0) {
            func_0x000107c6142c(pcVar15);
            goto LAB_101a7b634;
          }
          uStack_98 = 0x20;
          uStack_90 = 0xe100000000000000;
          pcStack_88 = pcVar11;
          pcStack_80 = pcVar15;
          func_0x000100e8b654();
          puVar10 = &uStack_98;
          pcVar4 = (code *)PTR___sSSN_11034da80;
          func_0x000107c601dc(puVar10,PTR___sSSN_11034da80,PTR___sSSN_11034da80,pcVar12,pcVar12);
          if (puVar10[2] == 0) {
            func_0x000107c6142c();
            pcVar14 = pcVar15;
          }
          else {
            pcVar11 = (code *)puVar10[4];
            pcVar14 = (code *)puVar10[5];
            func_0x000107c61434(pcVar14);
            func_0x000107c6142c(pcVar15);
            func_0x000107c6142c(puVar10);
          }
        }
        pcVar3 = pcStack_c8;
        func_0x000107c61558();
        if (((ulong)pcVar3 & 1) == 0) {
          pcVar4 = (code *)(*(long *)(pcStack_c8 + 0x10) + 1);
          pcVar3 = (code *)0x0;
          FUN_101a7bfa0(0,pcVar4,1,pcStack_c8,PTR__swift_bridgeObjectRelease_11034f258);
          pcVar12 = pcStack_c8;
          pcStack_c8 = pcVar3;
        }
        uVar2 = *(ulong *)(pcStack_c8 + 0x10);
        pcVar15 = (code *)(uVar2 + 1);
        pcVar3 = pcVar12;
        if (*(ulong *)(pcStack_c8 + 0x18) >> 1 <= uVar2) {
          pcVar12 = (code *)(ulong)(1 < *(ulong *)(pcStack_c8 + 0x18));
          pcVar4 = pcVar15;
          FUN_101a7bfa0(pcVar12,pcVar15,1,pcStack_c8,PTR__swift_bridgeObjectRelease_11034f258);
          pcVar3 = pcStack_c8;
          pcStack_c8 = pcVar12;
        }
        *(code **)(pcStack_c8 + 0x10) = pcVar15;
        *(code **)(pcStack_c8 + uVar2 * 0x10 + 0x20) = pcVar11;
        *(code **)(pcStack_c8 + uVar2 * 0x10 + 0x28) = pcVar14;
        func_0x000107c61170(pcVar13);
        pcVar15 = pcVar16;
        if (pcVar16 == pcVar21) goto joined_r0x000101a7b810;
      }
      pcVar12 = pcVar13;
      FUN_101a7fd60();
      pcVar14 = pcVar4;
      if (pcVar4 != (code *)0x0) goto LAB_101a7b550;
      func_0x000107c61170(pcVar13);
      pcVar15 = pcVar15 + 1;
    } while (pcVar16 != pcVar21);
  }
joined_r0x000101a7b810:
  if ((long)pcVar21 < 0) {
    pcVar21 = (code *)0x3;
  }
  else if ((code *)0x2 < pcVar21) {
    pcVar21 = (code *)0x3;
  }
  if (uVar20 == 0) {
    pcVar4 = *(code **)(pcVar17 + 0x10);
  }
  else {
    pcVar4 = pcVar17;
    if (((ulong)pcVar22 & 0x8000000000000000) != 0) {
      pcVar4 = pcVar22;
    }
    pcVar15 = pcVar4;
    func_0x000107c60480();
    if ((long)pcVar15 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101a7bd0c);
      (*pcVar3)();
    }
    func_0x000107c60480();
  }
  if ((long)pcVar4 < (long)pcVar21) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101a7bd10);
    (*pcVar3)();
  }
  if ((uVar1 == 0) || (pcVar21 == (code *)0x0)) {
    func_0x000107c61434(pcVar22);
  }
  else {
    uVar9 = 0;
    FUN_101a7c330(0,0x112d4ed88,&PTR_PTR_1126b15c8);
    func_0x000107c61434(pcVar22);
    func_0x000107c60318(0,pcVar22,uVar9);
    if ((pcVar21 != (code *)0x1) && (func_0x000107c60318(1,pcVar22,uVar9), pcVar21 != (code *)0x2))
    {
      func_0x000107c60318(2,pcVar22,uVar9);
    }
  }
  if (uVar20 == 0) {
    pcVar4 = (code *)0x0;
    pcVar3 = pcVar21;
    pcVar21 = pcVar17 + 0x20;
  }
  else {
    func_0x000107c6142c(pcVar22);
    pcVar4 = pcVar17;
    if (((ulong)pcVar22 & 0x8000000000000000) != 0) {
      pcVar4 = pcVar22;
    }
    pcVar17 = (code *)0x0;
    func_0x000107c60484();
    pcVar3 = (code *)((ulong)pcVar3 >> 1);
  }
  puVar19 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar20 = (long)pcVar3 - (long)pcVar4;
  if (SBORROW8((long)pcVar3,(long)pcVar4)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101a7bd14);
    (*pcVar3)();
  }
  if (uVar20 == 0) {
    func_0x000107c615e8(pcVar17);
    func_0x000107c6142c(pcVar22);
    puVar19 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    pcVar15 = (code *)(uVar20 & ((long)uVar20 >> 0x3f ^ 0xffffffffffffffffU));
    func_0x000100403514(0,pcVar15,0);
    if ((long)uVar20 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101a7bd18);
      (*pcVar3)();
    }
    if ((long)pcVar3 <= (long)pcVar4) {
      pcVar3 = pcVar4;
    }
    lVar23 = (long)pcVar3 - (long)pcVar4;
    pcVar21 = pcVar21 + (long)pcVar4 * 8;
    do {
      if (lVar23 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101a7bc0c);
        (*pcVar3)();
      }
      pcVar13 = *(code **)pcVar21;
      func_0x000107c61174();
      pcVar4 = pcVar13;
      func_0x000107c42120();
      func_0x000107c61180();
      pcVar3 = pcVar15;
      if (pcVar4 == (code *)0x0) {
LAB_101a7ba10:
        pcVar4 = pcVar13;
        func_0x000107c5db08();
        func_0x000107c61180();
        if (pcVar4 == (code *)0x0) {
          pcVar15 = (code *)0x665f646e65697266;
          func_0x000107c5fadc(0x665f646e65697266,0xef6b6361626c6c61);
          pcVar14 = (code *)0xd00000000000001f;
          func_0x000107c5fadc(0xd00000000000001f,0x800000010d9c1660);
          uVar9 = 0;
          func_0x000107c5fe40(0);
          pcVar4 = pcVar15;
          pcVar3 = pcVar14;
          func_0x0001000f6108(pcVar15,pcVar14,uVar9);
          func_0x000107c61180();
          func_0x000107c61170(pcVar15);
          func_0x000107c61170(pcVar14);
          func_0x000107c61170(uVar9);
          if (pcVar4 == (code *)0x0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101a7bd44);
            (*pcVar3)();
          }
        }
        pcVar14 = pcVar4;
        func_0x000107c5faec();
        pcVar16 = pcVar3;
        func_0x000107c61170(pcVar13);
        func_0x000107c61170(pcVar4);
      }
      else {
        pcVar14 = pcVar4;
        func_0x000107c5faec();
        pcVar3 = pcVar15;
        func_0x000107c61170(pcVar4);
        uVar1 = (ulong)pcVar14 & 0xffffffffffff;
        if (((ulong)pcVar15 & 0x2000000000000000) != 0) {
          uVar1 = (ulong)pcVar15 >> 0x38 & 0xf;
        }
        if (uVar1 == 0) {
          func_0x000107c6142c(pcVar15);
          goto LAB_101a7ba10;
        }
        uStack_98 = 0x20;
        uStack_90 = 0xe100000000000000;
        pcStack_88 = pcVar14;
        pcStack_80 = pcVar15;
        func_0x000100e8b654();
        puVar10 = &uStack_98;
        pcVar16 = (code *)PTR___sSSN_11034da80;
        func_0x000107c601dc(puVar10,PTR___sSSN_11034da80,PTR___sSSN_11034da80,pcVar4,pcVar4);
        if (puVar10[2] == 0) {
          func_0x000107c61170(pcVar13);
          func_0x000107c6142c(puVar10);
          pcVar3 = pcVar15;
        }
        else {
          pcVar14 = (code *)puVar10[4];
          pcVar3 = (code *)puVar10[5];
          func_0x000107c61434(pcVar3);
          func_0x000107c61170(pcVar13);
          func_0x000107c6142c(pcVar15);
          func_0x000107c6142c(puVar10);
        }
      }
      uVar1 = *(ulong *)(puVar19 + 0x10);
      pcVar4 = (code *)(uVar1 + 1);
      if (*(ulong *)(puVar19 + 0x18) >> 1 <= uVar1) {
        pcVar16 = pcVar4;
        func_0x000100403514(1 < *(ulong *)(puVar19 + 0x18),pcVar4,1);
      }
      *(code **)(puVar19 + 0x10) = pcVar4;
      *(code **)(puVar19 + uVar1 * 0x10 + 0x20) = pcVar14;
      *(code **)(puVar19 + uVar1 * 0x10 + 0x28) = pcVar3;
      lVar23 = lVar23 + -1;
      pcVar21 = pcVar21 + 8;
      uVar20 = uVar20 - 1;
      pcVar15 = pcVar16;
    } while (uVar20 != 0);
    func_0x000107c615e8(pcVar17);
    func_0x000107c6142c(pcVar22);
  }
  func_0x000103fee240(0);
  func_0x000107c610f8();
  func_0x000107c61434(pcStack_a8);
  func_0x000107c61434(pcStack_c8);
  func_0x000103fedf10(uVar6,pcVar24,uVar7,pcVar18,uStack_108,pcStack_110,pcVar8,pcStack_a8,puVar19,
                      pcStack_c8);
  uVar7 = uVar6;
  func_0x000107c61174();
  (*param_4)(uVar6);
  func_0x000107c6142c(pcVar22);
  func_0x000107c6142c(pcStack_a8);
  func_0x000107c6142c(pcStack_c8);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar5);
  return;
}



/* Entry: 101a7bd64; end: 101a7bdf7; -[_TtC31SaturnSocialContextServicesImpl31SaturnSocialContextProviderImpl fetchSocialContextWithPrioritizingUserId:completion:] */

void FUN_101a7bd64(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x000107c60bc4(param_4);
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  func_0x000107c60bc4(param_4);
  func_0x000107c61174(param_1);
  FUN_101a7c0c8(param_3,param_2,param_1,param_4);
  func_0x000107c60bd0(param_4);
  func_0x000107c60bd0(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101a7bdf8; end: 101a7be83;  */

undefined8 FUN_101a7bdf8(ulong param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong *unaff_x20;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  
  uVar4 = *unaff_x20;
  uVar6 = uVar4;
  func_0x000107c61550();
  if ((((int)uVar6 == 0) || ((long)uVar4 < 0)) || ((uVar4 >> 0x3e & 1) != 0)) {
    func_0x000100f638c0();
  }
  uVar6 = uVar4 & 0xffffffffffffff8;
  if (param_1 < *(ulong *)(uVar6 + 0x10)) {
    lVar7 = *(ulong *)(uVar6 + 0x10) - 1;
    lVar1 = uVar6 + param_1 * 8;
    puVar3 = (undefined8 *)(lVar1 + 0x20);
    uVar5 = *puVar3;
    func_0x000107c610b8(puVar3,lVar1 + 0x28,(lVar7 - param_1) * 8);
    *(long *)(uVar6 + 0x10) = lVar7;
    *unaff_x20 = uVar4;
    return uVar5;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101a7be84);
  (*pcVar2)();
}



/* Entry: 101a7be84; end: 101a7be93;  */

void FUN_101a7be84(void)

{
  return;
}



/* Entry: 101a7be94; end: 101a7bee7;  */

void FUN_101a7be94(long param_1,long *param_2)

{
  long lVar1;
  
  func_0x000107c5085c();
  func_0x000107c61180();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x000107c4f898();
    func_0x000107c61170(param_1);
    *param_2 = (long)(int)lVar1;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return;
}



/* Entry: 101a7bee8; end: 101a7bf47; -[_TtC31SaturnSocialContextServicesImpl31SaturnSocialContextProviderImpl init] */

void FUN_101a7bee8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SaturnSocialContextServicesImpl.SaturnSocialContextProviderImpl",0x3f,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101a7bf14);
  (*pcVar1)();
}



/* Entry: 101a7bf48; end: 101a7bf7f; -[_TtC31SaturnSocialContextServicesImpl31SaturnSocialContextProviderImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101a7bf64: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101a7bf68) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a7bf48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112df3318));
  return;
}



/* Entry: 101a7bf80; end: 101a7bf9f;  */

void FUN_101a7bf80(void)

{
  func_0x000107c61168(&PTR_PTR_1127f2638);
  return;
}



/* Entry: 101a7bfa0; end: 101a7c0b3;  */

undefined *
FUN_101a7bfa0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101a7c0b4);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar1,puVar4,uVar6,PTR___sSSN_11034da80);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*param_5)(param_4);
  return puVar3;
}



/* Entry: 101a7c0b4; end: 101a7c0c7;  */

/* WARNING: Removing unreachable block (ram,0x000101067420) */
/* WARNING: Removing unreachable block (ram,0x000101067430) */
/* WARNING: Removing unreachable block (ram,0x000101067530) */
/* WARNING: Removing unreachable block (ram,0x00010106743c) */
/* WARNING: Removing unreachable block (ram,0x000101067444) */
/* WARNING: Removing unreachable block (ram,0x0001010674bc) */
/* WARNING: Removing unreachable block (ram,0x0001010674c4) */
/* WARNING: Removing unreachable block (ram,0x0001010674c8) */
/* WARNING: Removing unreachable block (ram,0x0001010674cc) */
/* WARNING: Removing unreachable block (ram,0x0001010674dc) */

undefined * FUN_101a7c0b4(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  
  puVar4 = (undefined *)0x0;
  lVar5 = *(long *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(long *)(param_1 + 0x10) <= lVar5) {
    lVar1 = lVar5;
  }
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar1 != 0) {
    func_0x000100f630bc();
    func_0x000107c613fc();
    puVar2 = puVar4;
    func_0x000107c610a4();
    puVar6 = puVar2 + -0x19;
    if (0x1f < (long)puVar2) {
      puVar6 = puVar2 + -0x20;
    }
    *(long *)(puVar4 + 0x10) = lVar5;
    *(ulong *)(puVar4 + 0x18) = ((long)puVar6 >> 3) << 1 | 1;
    puVar6 = puVar4;
  }
  uVar3 = 0;
  func_0x0001010673a4(0,0x112d4ed88,&PTR_PTR_1126b15c8);
  func_0x000107c6140c(puVar6 + 0x20,param_1 + 0x20,lVar5,uVar3);
  func_0x000107c61574(param_1);
  return puVar6;
}



/* Entry: 101a7c0c8; end: 101a7c2f3;  */

/* WARNING: Possible PIC construction at 0x000101a7c274: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a7c294: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101a7c278) */
/* WARNING: Removing unreachable block (ram,0x000101a7c298) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a7c0c8(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &UNK_110435988;
  func_0x000107c613fc(&UNK_110435988,0x18,7);
  *(long *)(puVar1 + 0x10) = param_4;
  lVar6 = *(long *)(param_3 + _DAT_112df3318);
  func_0x000107c60bc4(param_4);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar6 != 0) {
    uVar2 = 0xd00000000000001c;
    func_0x000107c5fadc(0xd00000000000001c,0x800000010efce020);
    lVar3 = lVar6;
    func_0x000107c3ebd4();
    func_0x000107c615e8(lVar6);
    func_0x000107c61170(uVar2);
    if ((int)lVar3 != 0) {
      lVar6 = *(long *)(param_3 + _DAT_112df3320);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar6 != 0) {
        FUN_101a7c330(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
        func_0x000107c5ffdc();
        puVar4 = &UNK_1104359b0;
        func_0x000107c613fc(&UNK_1104359b0,0x18,7);
        func_0x000107c61614(puVar4 + 0x10,param_3);
        puVar5 = &UNK_1104359d8;
        func_0x000107c613fc(&UNK_1104359d8,0x38,7);
        *(code **)(puVar5 + 0x10) = FUN_101a7c2f4;
        *(undefined **)(puVar5 + 0x18) = puVar1;
        *(undefined **)(puVar5 + 0x20) = puVar4;
        *(undefined8 *)(puVar5 + 0x28) = param_1;
        *(undefined8 *)(puVar5 + 0x30) = param_2;
        uStack_60 = 0x101a7c304;
        puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_78 = 0x42000000;
        puStack_70 = &UNK_100f6151c;
        puStack_68 = &UNK_1104359f0;
        puStack_58 = puVar5;
        func_0x000107c60bc4(&puStack_80);
        puVar4 = puStack_58;
        func_0x000107c61434(param_2);
        func_0x000107c6157c(puVar1);
        puVar1 = puVar4;
        goto code_r0x000107c61574;
      }
    }
  }
  (**(code **)(param_4 + 0x10))(param_4,0);
code_r0x000107c61574:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101a7c2f4; end: 101a7c32f;  */

void FUN_101a7c2f4(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000101a7c300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 101a7c330; end: 101a7c36f;  */

void FUN_101a7c330(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101a7c370; end: 101a7c713;  */

byte FUN_101a7c370(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  byte bVar8;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  byte bStack_51;
  
  func_0x000107c439a8();
  func_0x000107c61180();
  bVar8 = 0;
  if (param_1 != 0) {
    lVar2 = param_1;
    func_0x000107c5c3a4();
    func_0x000107c61180();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    if (lVar2 == 0) {
      func_0x000107c61170(param_1);
      bVar8 = 0;
    }
    else {
      bStack_51 = 0;
      pcStack_68 = FUN_101a7be84;
      puStack_60 = (undefined *)0x0;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0x42000000;
      uStack_78 = 0x101a7ff58;
      puStack_70 = &UNK_110435e00;
      ppuVar3 = &puStack_88;
      func_0x000107c60bc4(ppuVar3);
      func_0x000107c61574(puStack_60);
      pcStack_68 = (code *)0x101a7be8c;
      puStack_60 = (undefined *)0x0;
      puStack_88 = puVar1;
      uStack_80 = 0x42000000;
      uStack_78 = 0x101a7ff5c;
      puStack_70 = &UNK_110435e28;
      ppuVar4 = &puStack_88;
      func_0x000107c60bc4(ppuVar4);
      func_0x000107c61574(puStack_60);
      puVar5 = &UNK_110435e60;
      func_0x000107c613fc(&UNK_110435e60,0x18,7);
      *(byte **)(puVar5 + 0x10) = &bStack_51;
      puVar6 = &UNK_110435e88;
      func_0x000107c613fc(&UNK_110435e88,0x20,7);
      *(undefined8 *)(puVar6 + 0x10) = 0x101a801cc;
      *(undefined **)(puVar6 + 0x18) = puVar5;
      pcStack_68 = (code *)0x101a80184;
      puStack_88 = puVar1;
      uStack_80 = 0x42000000;
      uStack_78 = 0x101a7ff60;
      puStack_70 = &UNK_110435ea0;
      ppuVar7 = &puStack_88;
      puStack_60 = puVar6;
      func_0x000107c60bc4(ppuVar7);
      func_0x000107c61574(puStack_60);
      func_0x000107c4c628(lVar2);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(param_1);
      func_0x000107c60bd0(ppuVar7);
      func_0x000107c60bd0(ppuVar4);
      func_0x000107c60bd0(ppuVar3);
      bVar8 = bStack_51;
      func_0x000107c61574(puVar5);
    }
  }
  return bVar8;
}



/* Entry: 101a7c714; end: 101a7c833;  */

bool FUN_101a7c714(double param_1,ulong *param_2,ulong *param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  uVar3 = (uint)param_3;
  uVar5 = *param_2;
  uVar4 = *param_3;
  uVar1 = uVar5;
  FUN_101a7c370();
  uVar2 = uVar4;
  FUN_101a7c370();
  if ((uVar1 & 1) != 0) {
    if ((uVar2 & 1) == 0) {
      return true;
    }
    uVar2 = uVar5;
    func_0x000101a7c538();
    uVar6 = 0x7fffffffffffffff;
    uVar1 = 0x7fffffffffffffff;
    if ((uVar3 & 0xff) != 1) {
      uVar1 = uVar2;
    }
    uVar2 = uVar4;
    func_0x000101a7c538();
    if ((uVar3 & 0xff) == 1) {
      if (uVar1 == 0x7fffffffffffffff) goto LAB_101a7c7a8;
    }
    else {
      uVar6 = uVar2;
      if (uVar1 == uVar2) goto LAB_101a7c7a8;
    }
    return (long)uVar1 < (long)uVar6;
  }
  if ((uVar2 & 1) != 0) {
    return false;
  }
LAB_101a7c7a8:
  func_0x000107c439a8();
  func_0x000107c61180();
  dVar7 = param_1;
  dVar9 = 0.0;
  if (uVar5 != 0) {
    func_0x000107c4aa00();
    dVar7 = param_1;
    func_0x000107c61170(uVar5);
    dVar9 = param_1;
  }
  func_0x000107c439a8();
  func_0x000107c61180();
  dVar8 = 0.0;
  if (uVar4 != 0) {
    func_0x000107c4aa00();
    func_0x000107c61170(uVar4);
    dVar8 = dVar7;
  }
  return dVar8 < dVar9;
}



/* Entry: 101a7c834; end: 101a7d05b;  */

void FUN_101a7c834(double param_1,long param_2,long param_3,long param_4,long *param_5)

{
  undefined *puVar1;
  char cVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  long *plVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  ulong uStack_b0;
  char cStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  if (param_4 != param_3) {
    lVar13 = *param_5;
    plVar18 = (long *)(lVar13 + param_4 * 8 + -8);
    param_2 = param_2 - param_4;
    do {
      lVar5 = *(long *)(lVar13 + param_4 * 8);
      lVar14 = param_2;
      plVar19 = plVar18;
      do {
        lVar15 = *plVar19;
        func_0x000107c61174();
        func_0x000107c61174();
        lVar6 = lVar5;
        func_0x000107c439a8();
        func_0x000107c61180();
        if (lVar6 == 0) {
LAB_101a7ca9c:
          uVar17 = 0;
        }
        else {
          lVar7 = lVar6;
          func_0x000107c5c3a4();
          func_0x000107c61180();
          puVar1 = PTR___NSConcreteStackBlock_11034bd00;
          if (lVar7 == 0) {
            func_0x000107c61170(lVar6);
            goto LAB_101a7ca9c;
          }
          uStack_b0 = uStack_b0 & 0xffffffffffffff00;
          pcStack_80 = FUN_101a7be84;
          puStack_78 = (undefined *)0x0;
          puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_98 = 0x42000000;
          uStack_90 = 0x101a7ff58;
          puStack_88 = &UNK_110435c70;
          ppuVar8 = &puStack_a0;
          func_0x000107c60bc4(ppuVar8);
          func_0x000107c61574(puStack_78);
          pcStack_80 = (code *)0x101a7be8c;
          puStack_78 = (undefined *)0x0;
          puStack_a0 = puVar1;
          uStack_98 = 0x42000000;
          uStack_90 = 0x101a7ff5c;
          puStack_88 = &UNK_110435c98;
          ppuVar9 = &puStack_a0;
          func_0x000107c60bc4(ppuVar9);
          func_0x000107c61574(puStack_78);
          puVar10 = &UNK_110435cd0;
          func_0x000107c613fc(&UNK_110435cd0,0x18,7);
          *(ulong **)(puVar10 + 0x10) = &uStack_b0;
          puVar11 = &UNK_110435cf8;
          func_0x000107c613fc(&UNK_110435cf8,0x20,7);
          *(undefined8 *)(puVar11 + 0x10) = 0x101a801c8;
          *(undefined **)(puVar11 + 0x18) = puVar10;
          pcStack_80 = (code *)0x101a8017c;
          puStack_a0 = puVar1;
          uStack_98 = 0x42000000;
          uStack_90 = 0x101a7ff60;
          puStack_88 = &UNK_110435d10;
          ppuVar12 = &puStack_a0;
          puStack_78 = puVar11;
          func_0x000107c60bc4(ppuVar12);
          func_0x000107c61574(puStack_78);
          func_0x000107c4c628(lVar7);
          func_0x000107c61170(lVar7);
          func_0x000107c61170(lVar6);
          func_0x000107c60bd0(ppuVar12);
          func_0x000107c60bd0(ppuVar9);
          func_0x000107c60bd0(ppuVar8);
          uVar17 = uStack_b0 & 0xff;
          func_0x000107c61574(puVar10);
        }
        lVar6 = lVar15;
        func_0x000107c439a8();
        func_0x000107c61180();
        if (lVar6 == 0) {
LAB_101a7cdc8:
          if ((uVar17 & 1) == 0) {
LAB_101a7cf94:
            lVar6 = lVar5;
            func_0x000107c439a8();
            func_0x000107c61180();
            dVar20 = param_1;
            dVar22 = 0.0;
            if (lVar6 != 0) {
              func_0x000107c4aa00();
              dVar20 = param_1;
              func_0x000107c61170(lVar6);
              dVar22 = param_1;
            }
            lVar6 = lVar15;
            func_0x000107c439a8();
            func_0x000107c61180();
            lVar7 = lVar15;
            param_1 = dVar20;
            dVar21 = 0.0;
            if (lVar6 != 0) {
              func_0x000107c4aa00();
              param_1 = dVar20;
              func_0x000107c61170(lVar5);
              lVar7 = lVar6;
              lVar5 = lVar15;
              dVar21 = dVar20;
            }
            func_0x000107c61170(lVar5);
            func_0x000107c61170(lVar7);
            if (dVar22 <= dVar21) break;
          }
          else {
LAB_101a7cdcc:
            func_0x000107c61170(lVar5);
            func_0x000107c61170(lVar15);
          }
        }
        else {
          lVar7 = lVar6;
          func_0x000107c5c3a4();
          func_0x000107c61180();
          puVar1 = PTR___NSConcreteStackBlock_11034bd00;
          if (lVar7 == 0) {
            func_0x000107c61170(lVar6);
            goto LAB_101a7cdc8;
          }
          uStack_b0 = uStack_b0 & 0xffffffffffffff00;
          pcStack_80 = FUN_101a7be84;
          puStack_78 = (undefined *)0x0;
          puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_98 = 0x42000000;
          uStack_90 = 0x101a7ff58;
          puStack_88 = &UNK_110435a18;
          ppuVar8 = &puStack_a0;
          func_0x000107c60bc4(ppuVar8);
          func_0x000107c61574(puStack_78);
          pcStack_80 = (code *)0x101a7be8c;
          puStack_78 = (undefined *)0x0;
          puStack_a0 = puVar1;
          uStack_98 = 0x42000000;
          uStack_90 = 0x101a7ff5c;
          puStack_88 = &UNK_110435a40;
          ppuVar9 = &puStack_a0;
          func_0x000107c60bc4(ppuVar9);
          func_0x000107c61574(puStack_78);
          puVar10 = &UNK_110435a78;
          func_0x000107c613fc(&UNK_110435a78,0x18,7);
          *(ulong **)(puVar10 + 0x10) = &uStack_b0;
          puVar11 = &UNK_110435aa0;
          func_0x000107c613fc(&UNK_110435aa0,0x20,7);
          *(code **)(puVar11 + 0x10) = FUN_101a7ff0c;
          *(undefined **)(puVar11 + 0x18) = puVar10;
          pcStack_80 = (code *)0x101a7ff30;
          puStack_a0 = puVar1;
          uStack_98 = 0x42000000;
          uStack_90 = 0x101a7ff60;
          puStack_88 = &UNK_110435ab8;
          ppuVar12 = &puStack_a0;
          puStack_78 = puVar11;
          func_0x000107c60bc4(ppuVar12);
          func_0x000107c61574(puStack_78);
          func_0x000107c4c628(lVar7);
          func_0x000107c61170(lVar7);
          func_0x000107c61170(lVar6);
          func_0x000107c60bd0(ppuVar12);
          func_0x000107c60bd0(ppuVar9);
          func_0x000107c60bd0(ppuVar8);
          uVar16 = uStack_b0;
          func_0x000107c61574(puVar10);
          if ((uVar17 & 1) == 0) {
            if ((uVar16 & 1) == 0) goto LAB_101a7cf94;
            func_0x000107c61170(lVar5);
            func_0x000107c61170(lVar15);
            break;
          }
          if ((uVar16 & 1) == 0) goto LAB_101a7cdcc;
          lVar6 = lVar5;
          func_0x000107c439a8();
          func_0x000107c61180();
          if (lVar6 == 0) {
LAB_101a7cdf8:
            uVar17 = 0x7fffffffffffffff;
          }
          else {
            lVar7 = lVar6;
            func_0x000107c5c3a4();
            func_0x000107c61180();
            puVar1 = PTR___NSConcreteStackBlock_11034bd00;
            if (lVar7 == 0) {
              func_0x000107c61170(lVar6);
              goto LAB_101a7cdf8;
            }
            uStack_b0 = 0;
            cStack_a8 = '\x01';
            pcStack_80 = (code *)0x101a7be88;
            puStack_78 = (undefined *)0x0;
            puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_98 = 0x42000000;
            uStack_90 = 0x101a7ff58;
            puStack_88 = &UNK_110435ba8;
            ppuVar8 = &puStack_a0;
            func_0x000107c60bc4(ppuVar8);
            func_0x000107c61574(puStack_78);
            pcStack_80 = (code *)0x101a7be90;
            puStack_78 = (undefined *)0x0;
            puStack_a0 = puVar1;
            uStack_98 = 0x42000000;
            uStack_90 = 0x101a7ff5c;
            puStack_88 = &UNK_110435bd0;
            ppuVar9 = &puStack_a0;
            func_0x000107c60bc4(ppuVar9);
            func_0x000107c61574(puStack_78);
            puVar10 = &UNK_110435c08;
            func_0x000107c613fc(&UNK_110435c08,0x18,7);
            *(ulong **)(puVar10 + 0x10) = &uStack_b0;
            puVar11 = &UNK_110435c30;
            func_0x000107c613fc(&UNK_110435c30,0x20,7);
            *(undefined8 *)(puVar11 + 0x10) = 0x101a801f0;
            *(undefined **)(puVar11 + 0x18) = puVar10;
            pcStack_80 = (code *)0x101a80178;
            puStack_a0 = puVar1;
            uStack_98 = 0x42000000;
            uStack_90 = 0x101a7ff60;
            puStack_88 = &UNK_110435c48;
            ppuVar12 = &puStack_a0;
            puStack_78 = puVar11;
            func_0x000107c60bc4(ppuVar12);
            func_0x000107c61574(puStack_78);
            func_0x000107c4c628(lVar7);
            func_0x000107c61170(lVar7);
            func_0x000107c61170(lVar6);
            func_0x000107c60bd0(ppuVar12);
            func_0x000107c60bd0(ppuVar9);
            func_0x000107c60bd0(ppuVar8);
            cVar2 = cStack_a8;
            uVar17 = uStack_b0;
            func_0x000107c61574(puVar10);
            if (cVar2 == '\x01') goto LAB_101a7cdf8;
          }
          lVar6 = lVar15;
          func_0x000107c439a8();
          func_0x000107c61180();
          if (lVar6 == 0) {
LAB_101a7d030:
            uVar16 = 0x7fffffffffffffff;
            if (uVar17 == 0x7fffffffffffffff) goto LAB_101a7cf94;
          }
          else {
            lVar7 = lVar6;
            func_0x000107c5c3a4();
            func_0x000107c61180();
            puVar1 = PTR___NSConcreteStackBlock_11034bd00;
            if (lVar7 == 0) {
              func_0x000107c61170(lVar6);
              goto LAB_101a7d030;
            }
            uStack_b0 = 0;
            cStack_a8 = '\x01';
            pcStack_80 = (code *)0x101a7be88;
            puStack_78 = (undefined *)0x0;
            puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_98 = 0x42000000;
            uStack_90 = 0x101a7ff58;
            puStack_88 = &UNK_110435ae0;
            ppuVar8 = &puStack_a0;
            func_0x000107c60bc4(ppuVar8);
            func_0x000107c61574(puStack_78);
            pcStack_80 = (code *)0x101a7be90;
            puStack_78 = (undefined *)0x0;
            puStack_a0 = puVar1;
            uStack_98 = 0x42000000;
            uStack_90 = 0x101a7ff5c;
            puStack_88 = &UNK_110435b08;
            ppuVar9 = &puStack_a0;
            func_0x000107c60bc4(ppuVar9);
            func_0x000107c61574(puStack_78);
            puVar10 = &UNK_110435b40;
            func_0x000107c613fc(&UNK_110435b40,0x18,7);
            *(ulong **)(puVar10 + 0x10) = &uStack_b0;
            puVar11 = &UNK_110435b68;
            func_0x000107c613fc(&UNK_110435b68,0x20,7);
            *(code **)(puVar11 + 0x10) = FUN_101a7ff50;
            *(undefined **)(puVar11 + 0x18) = puVar10;
            pcStack_80 = (code *)0x101a80174;
            puStack_a0 = puVar1;
            uStack_98 = 0x42000000;
            uStack_90 = 0x101a7ff60;
            puStack_88 = &UNK_110435b80;
            ppuVar12 = &puStack_a0;
            puStack_78 = puVar11;
            func_0x000107c60bc4(ppuVar12);
            func_0x000107c61574(puStack_78);
            func_0x000107c4c628(lVar7);
            func_0x000107c61170(lVar7);
            func_0x000107c61170(lVar6);
            func_0x000107c60bd0(ppuVar12);
            func_0x000107c60bd0(ppuVar9);
            func_0x000107c60bd0(ppuVar8);
            cVar2 = cStack_a8;
            uVar16 = uStack_b0;
            func_0x000107c61574(puVar10);
            if (cVar2 == '\x01') goto LAB_101a7d030;
            if (uVar17 == uVar16) goto LAB_101a7cf94;
          }
          func_0x000107c61170(lVar5);
          func_0x000107c61170(lVar15);
          if ((long)uVar16 <= (long)uVar17) break;
        }
        if (lVar13 == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101a7d05c);
          (*pcVar3)();
        }
        lVar6 = *plVar19;
        lVar5 = plVar19[1];
        *plVar19 = lVar5;
        plVar19[1] = lVar6;
        bVar4 = lVar14 != -1;
        lVar14 = lVar14 + 1;
        plVar19 = plVar19 + -1;
      } while (bVar4);
      param_4 = param_4 + 1;
      plVar18 = plVar18 + 1;
      param_2 = param_2 + -1;
    } while (param_4 != param_3);
  }
  return;
}



/* Entry: 101a7d05c; end: 101a7e1cb;  */

undefined8 FUN_101a7d05c(double param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  undefined *puVar1;
  char cVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  long *plVar17;
  long *plVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  ulong uStack_b0;
  char cStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  lVar12 = (long)param_3 - (long)param_2;
  lVar9 = lVar12 + 7;
  if (-1 < lVar12) {
    lVar9 = lVar12;
  }
  lVar9 = lVar9 >> 3;
  lVar14 = (long)param_4 - (long)param_3;
  lVar11 = lVar14 + 7;
  if (-1 < lVar14) {
    lVar11 = lVar14;
  }
  lVar11 = lVar11 >> 3;
  if (lVar9 < lVar11) {
    if (((param_5 < param_2) || (param_2 + lVar9 <= param_5)) || (param_5 != param_2)) {
      func_0x000107c610b8(param_5,param_2,lVar9 * 8);
    }
    plVar18 = param_5 + lVar9;
    plVar8 = param_2;
    if (7 < lVar12) {
      do {
        if (param_4 <= param_3) break;
        lVar12 = *param_3;
        lVar11 = *param_5;
        func_0x000107c61174();
        func_0x000107c61174();
        lVar9 = lVar12;
        func_0x000107c439a8();
        func_0x000107c61180();
        if (lVar9 == 0) {
LAB_101a7d2cc:
          uVar16 = 0;
        }
        else {
          lVar14 = lVar9;
          func_0x000107c5c3a4();
          func_0x000107c61180();
          puVar1 = PTR___NSConcreteStackBlock_11034bd00;
          if (lVar14 == 0) {
            func_0x000107c61170(lVar9);
            goto LAB_101a7d2cc;
          }
          uStack_b0 = uStack_b0 & 0xffffffffffffff00;
          pcStack_80 = FUN_101a7be84;
          puStack_78 = (undefined *)0x0;
          puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_98 = 0x42000000;
          uStack_90 = 0x101a7ff58;
          puStack_88 = &UNK_110436a80;
          ppuVar3 = &puStack_a0;
          func_0x000107c60bc4(ppuVar3);
          func_0x000107c61574(puStack_78);
          pcStack_80 = (code *)0x101a7be8c;
          puStack_78 = (undefined *)0x0;
          puStack_a0 = puVar1;
          uStack_98 = 0x42000000;
          uStack_90 = 0x101a7ff5c;
          puStack_88 = &UNK_110436aa8;
          ppuVar4 = &puStack_a0;
          func_0x000107c60bc4(ppuVar4);
          func_0x000107c61574(puStack_78);
          puVar5 = &UNK_110436ae0;
          func_0x000107c613fc(&UNK_110436ae0,0x18,7);
          *(ulong **)(puVar5 + 0x10) = &uStack_b0;
          puVar6 = &UNK_110436b08;
          func_0x000107c613fc(&UNK_110436b08,0x20,7);
          *(undefined8 *)(puVar6 + 0x10) = 0x101a801ec;
          *(undefined **)(puVar6 + 0x18) = puVar5;
          pcStack_80 = (code *)0x101a801c4;
          puStack_a0 = puVar1;
          uStack_98 = 0x42000000;
          uStack_90 = 0x101a7ff60;
          puStack_88 = &UNK_110436b20;
          ppuVar7 = &puStack_a0;
          puStack_78 = puVar6;
          func_0x000107c60bc4(ppuVar7);
          func_0x000107c61574(puStack_78);
          func_0x000107c4c628(lVar14);
          func_0x000107c61170(lVar14);
          func_0x000107c61170(lVar9);
          func_0x000107c60bd0(ppuVar7);
          func_0x000107c60bd0(ppuVar4);
          func_0x000107c60bd0(ppuVar3);
          uVar16 = uStack_b0 & 0xff;
          func_0x000107c61574(puVar5);
        }
        lVar9 = lVar11;
        func_0x000107c439a8();
        func_0x000107c61180();
        if (lVar9 == 0) {
LAB_101a7d5f4:
          if ((uVar16 & 1) != 0) {
LAB_101a7d5f8:
            func_0x000107c61170(lVar12);
            func_0x000107c61170(lVar11);
            goto LAB_101a7d848;
          }
LAB_101a7d7d0:
          lVar9 = lVar12;
          func_0x000107c439a8();
          func_0x000107c61180();
          dVar19 = param_1;
          dVar21 = 0.0;
          if (lVar9 != 0) {
            func_0x000107c4aa00();
            dVar19 = param_1;
            func_0x000107c61170(lVar9);
            dVar21 = param_1;
          }
          lVar9 = lVar11;
          func_0x000107c439a8();
          func_0x000107c61180();
          param_1 = dVar19;
          dVar20 = 0.0;
          if (lVar9 != 0) {
            func_0x000107c4aa00();
            param_1 = dVar19;
            func_0x000107c61170(lVar12);
            lVar12 = lVar11;
            lVar11 = lVar9;
            dVar20 = dVar19;
          }
          func_0x000107c61170(lVar12);
          func_0x000107c61170(lVar11);
          if (dVar20 < dVar21) goto LAB_101a7d848;
LAB_101a7d8ac:
          plVar15 = param_5 + 1;
          plVar13 = param_3;
          plVar17 = param_5;
        }
        else {
          lVar14 = lVar9;
          func_0x000107c5c3a4();
          func_0x000107c61180();
          puVar1 = PTR___NSConcreteStackBlock_11034bd00;
          if (lVar14 == 0) {
            func_0x000107c61170(lVar9);
            goto LAB_101a7d5f4;
          }
          uStack_b0 = uStack_b0 & 0xffffffffffffff00;
          pcStack_80 = FUN_101a7be84;
          puStack_78 = (undefined *)0x0;
          puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_98 = 0x42000000;
          uStack_90 = 0x101a7ff58;
          puStack_88 = &UNK_110436828;
          ppuVar3 = &puStack_a0;
          func_0x000107c60bc4(ppuVar3);
          func_0x000107c61574(puStack_78);
          pcStack_80 = (code *)0x101a7be8c;
          puStack_78 = (undefined *)0x0;
          puStack_a0 = puVar1;
          uStack_98 = 0x42000000;
          uStack_90 = 0x101a7ff5c;
          puStack_88 = &UNK_110436850;
          ppuVar4 = &puStack_a0;
          func_0x000107c60bc4(ppuVar4);
          func_0x000107c61574(puStack_78);
          puVar5 = &UNK_110436888;
          func_0x000107c613fc(&UNK_110436888,0x18,7);
          *(ulong **)(puVar5 + 0x10) = &uStack_b0;
          puVar6 = &UNK_1104368b0;
          func_0x000107c613fc(&UNK_1104368b0,0x20,7);
          *(undefined8 *)(puVar6 + 0x10) = 0x101a801e8;
          *(undefined **)(puVar6 + 0x18) = puVar5;
          pcStack_80 = (code *)0x101a801b8;
          puStack_a0 = puVar1;
          uStack_98 = 0x42000000;
          uStack_90 = 0x101a7ff60;
          puStack_88 = &UNK_1104368c8;
          ppuVar7 = &puStack_a0;
          puStack_78 = puVar6;
          func_0x000107c60bc4(ppuVar7);
          func_0x000107c61574(puStack_78);
          func_0x000107c4c628(lVar14);
          func_0x000107c61170(lVar14);
          func_0x000107c61170(lVar9);
          func_0x000107c60bd0(ppuVar7);
          func_0x000107c60bd0(ppuVar4);
          func_0x000107c60bd0(ppuVar3);
          uVar10 = uStack_b0;
          func_0x000107c61574(puVar5);
          if ((uVar16 & 1) == 0) {
            if ((uVar10 & 1) == 0) goto LAB_101a7d7d0;
            func_0x000107c61170(lVar12);
            func_0x000107c61170(lVar11);
            goto LAB_101a7d8ac;
          }
          if ((uVar10 & 1) == 0) goto LAB_101a7d5f8;
          lVar9 = lVar12;
          func_0x000107c439a8();
          func_0x000107c61180();
          if (lVar9 == 0) {
LAB_101a7d634:
            uVar16 = 0x7fffffffffffffff;
          }
          else {
            lVar14 = lVar9;
            func_0x000107c5c3a4();
            func_0x000107c61180();
            puVar1 = PTR___NSConcreteStackBlock_11034bd00;
            if (lVar14 == 0) {
              func_0x000107c61170(lVar9);
              goto LAB_101a7d634;
            }
            uStack_b0 = 0;
            cStack_a8 = '\x01';
            pcStack_80 = (code *)0x101a7be88;
            puStack_78 = (undefined *)0x0;
            puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_98 = 0x42000000;
            uStack_90 = 0x101a7ff58;
            puStack_88 = &UNK_1104369b8;
            ppuVar3 = &puStack_a0;
            func_0x000107c60bc4(ppuVar3);
            func_0x000107c61574(puStack_78);
            pcStack_80 = (code *)0x101a7be90;
            puStack_78 = (undefined *)0x0;
            puStack_a0 = puVar1;
            uStack_98 = 0x42000000;
            uStack_90 = 0x101a7ff5c;
            puStack_88 = &UNK_1104369e0;
            ppuVar4 = &puStack_a0;
            func_0x000107c60bc4(ppuVar4);
            func_0x000107c61574(puStack_78);
            puVar5 = &UNK_110436a18;
            func_0x000107c613fc(&UNK_110436a18,0x18,7);
            *(ulong **)(puVar5 + 0x10) = &uStack_b0;
            puVar6 = &UNK_110436a40;
            func_0x000107c613fc(&UNK_110436a40,0x20,7);
            *(undefined8 *)(puVar6 + 0x10) = 0x101a80214;
            *(undefined **)(puVar6 + 0x18) = puVar5;
            pcStack_80 = (code *)0x101a801c0;
            puStack_a0 = puVar1;
            uStack_98 = 0x42000000;
            uStack_90 = 0x101a7ff60;
            puStack_88 = &UNK_110436a58;
            ppuVar7 = &puStack_a0;
            puStack_78 = puVar6;
            func_0x000107c60bc4(ppuVar7);
            func_0x000107c61574(puStack_78);
            func_0x000107c4c628(lVar14);
            func_0x000107c61170(lVar14);
            func_0x000107c61170(lVar9);
            func_0x000107c60bd0(ppuVar7);
            func_0x000107c60bd0(ppuVar4);
            func_0x000107c60bd0(ppuVar3);
            cVar2 = cStack_a8;
            uVar16 = uStack_b0;
            func_0x000107c61574(puVar5);
            if (cVar2 == '\x01') goto LAB_101a7d634;
          }
          lVar9 = lVar11;
          func_0x000107c439a8();
          func_0x000107c61180();
          if (lVar9 == 0) {
LAB_101a7d888:
            uVar10 = 0x7fffffffffffffff;
            if (uVar16 == 0x7fffffffffffffff) goto LAB_101a7d7d0;
          }
          else {
            lVar14 = lVar9;
            func_0x000107c5c3a4();
            func_0x000107c61180();
            puVar1 = PTR___NSConcreteStackBlock_11034bd00;
            if (lVar14 == 0) {
              func_0x000107c61170(lVar9);
              goto LAB_101a7d888;
            }
            uStack_b0 = 0;
            cStack_a8 = '\x01';
            pcStack_80 = (code *)0x101a7be88;
            puStack_78 = (undefined *)0x0;
            puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_98 = 0x42000000;
            uStack_90 = 0x101a7ff58;
            puStack_88 = &UNK_1104368f0;
            ppuVar3 = &puStack_a0;
            func_0x000107c60bc4(ppuVar3);
            func_0x000107c61574(puStack_78);
            pcStack_80 = (code *)0x101a7be90;
            puStack_78 = (undefined *)0x0;
            puStack_a0 = puVar1;
            uStack_98 = 0x42000000;
            uStack_90 = 0x101a7ff5c;
            puStack_88 = &UNK_110436918;
            ppuVar4 = &puStack_a0;
            func_0x000107c60bc4(ppuVar4);
            func_0x000107c61574(puStack_78);
            puVar5 = &UNK_110436950;
            func_0x000107c613fc(&UNK_110436950,0x18,7);
            *(ulong **)(puVar5 + 0x10) = &uStack_b0;
            puVar6 = &UNK_110436978;
            func_0x000107c613fc(&UNK_110436978,0x20,7);
            *(undefined8 *)(puVar6 + 0x10) = 0x101a80210;
            *(undefined **)(puVar6 + 0x18) = puVar5;
            pcStack_80 = (code *)0x101a801bc;
            puStack_a0 = puVar1;
            uStack_98 = 0x42000000;
            uStack_90 = 0x101a7ff60;
            puStack_88 = &UNK_110436990;
            ppuVar7 = &puStack_a0;
            puStack_78 = puVar6;
            func_0x000107c60bc4(ppuVar7);
            func_0x000107c61574(puStack_78);
            func_0x000107c4c628(lVar14);
            func_0x000107c61170(lVar14);
            func_0x000107c61170(lVar9);
            func_0x000107c60bd0(ppuVar7);
            func_0x000107c60bd0(ppuVar4);
            func_0x000107c60bd0(ppuVar3);
            cVar2 = cStack_a8;
            uVar10 = uStack_b0;
            func_0x000107c61574(puVar5);
            if (cVar2 == '\x01') goto LAB_101a7d888;
            if (uVar16 == uVar10) goto LAB_101a7d7d0;
          }
          func_0x000107c61170(lVar12);
          func_0x000107c61170(lVar11);
          if ((long)uVar10 <= (long)uVar16) goto LAB_101a7d8ac;
LAB_101a7d848:
          plVar15 = param_5;
          plVar13 = param_3 + 1;
          plVar17 = param_3;
        }
        param_3 = plVar13;
        param_5 = plVar15;
        if (plVar8 != plVar17) {
          *plVar8 = *plVar17;
        }
        plVar8 = plVar8 + 1;
      } while (param_5 < plVar18);
    }
  }
  else {
    if (((param_5 < param_3) || (param_3 + lVar11 <= param_5)) || (param_5 != param_3)) {
      func_0x000107c610b8(param_5,param_3,lVar11 * 8);
    }
    plVar17 = param_5 + lVar11;
    plVar8 = param_3;
    plVar18 = plVar17;
    if (7 < lVar14) {
      do {
        plVar8 = param_3;
        plVar18 = plVar17;
        if (param_3 <= param_2) break;
        plVar13 = param_3 + -1;
        plVar15 = param_4;
LAB_101a7d950:
        param_4 = plVar15 + -1;
        plVar18 = plVar17 + -1;
        lVar12 = *plVar18;
        lVar11 = *plVar13;
        func_0x000107c61174();
        func_0x000107c61174();
        lVar9 = lVar12;
        func_0x000107c439a8();
        func_0x000107c61180();
        if (lVar9 == 0) {
          uVar16 = 0;
        }
        else {
          lVar14 = lVar9;
          func_0x000107c5c3a4();
          func_0x000107c61180();
          puVar1 = PTR___NSConcreteStackBlock_11034bd00;
          if (lVar14 == 0) {
            func_0x000107c61170(lVar9);
            uVar16 = 0;
          }
          else {
            uStack_b0 = uStack_b0 & 0xffffffffffffff00;
            pcStack_80 = FUN_101a7be84;
            puStack_78 = (undefined *)0x0;
            puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_98 = 0x42000000;
            uStack_90 = 0x101a7ff58;
            puStack_88 = &UNK_110436760;
            ppuVar3 = &puStack_a0;
            func_0x000107c60bc4(ppuVar3);
            func_0x000107c61574(puStack_78);
            pcStack_80 = (code *)0x101a7be8c;
            puStack_78 = (undefined *)0x0;
            puStack_a0 = puVar1;
            uStack_98 = 0x42000000;
            uStack_90 = 0x101a7ff5c;
            puStack_88 = &UNK_110436788;
            ppuVar4 = &puStack_a0;
            func_0x000107c60bc4(ppuVar4);
            func_0x000107c61574(puStack_78);
            puVar5 = &UNK_1104367c0;
            func_0x000107c613fc(&UNK_1104367c0,0x18,7);
            *(ulong **)(puVar5 + 0x10) = &uStack_b0;
            puVar6 = &UNK_1104367e8;
            func_0x000107c613fc(&UNK_1104367e8,0x20,7);
            *(undefined8 *)(puVar6 + 0x10) = 0x101a801e4;
            *(undefined **)(puVar6 + 0x18) = puVar5;
            pcStack_80 = (code *)0x101a801b4;
            puStack_a0 = puVar1;
            uStack_98 = 0x42000000;
            uStack_90 = 0x101a7ff60;
            puStack_88 = &UNK_110436800;
            ppuVar7 = &puStack_a0;
            puStack_78 = puVar6;
            func_0x000107c60bc4(ppuVar7);
            func_0x000107c61574(puStack_78);
            func_0x000107c4c628(lVar14);
            func_0x000107c61170(lVar14);
            func_0x000107c61170(lVar9);
            func_0x000107c60bd0(ppuVar7);
            func_0x000107c60bd0(ppuVar4);
            func_0x000107c60bd0(ppuVar3);
            uVar16 = uStack_b0 & 0xff;
            func_0x000107c61574(puVar5);
          }
        }
        lVar9 = lVar11;
        func_0x000107c439a8();
        func_0x000107c61180();
        if (lVar9 != 0) {
          lVar14 = lVar9;
          func_0x000107c5c3a4();
          func_0x000107c61180();
          puVar1 = PTR___NSConcreteStackBlock_11034bd00;
          if (lVar14 == 0) {
            func_0x000107c61170(lVar9);
            goto LAB_101a7de50;
          }
          uStack_b0 = uStack_b0 & 0xffffffffffffff00;
          pcStack_80 = FUN_101a7be84;
          puStack_78 = (undefined *)0x0;
          puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_98 = 0x42000000;
          uStack_90 = 0x101a7ff58;
          puStack_88 = &UNK_110436508;
          ppuVar3 = &puStack_a0;
          func_0x000107c60bc4(ppuVar3);
          func_0x000107c61574(puStack_78);
          pcStack_80 = (code *)0x101a7be8c;
          puStack_78 = (undefined *)0x0;
          puStack_a0 = puVar1;
          uStack_98 = 0x42000000;
          uStack_90 = 0x101a7ff5c;
          puStack_88 = &UNK_110436530;
          ppuVar4 = &puStack_a0;
          func_0x000107c60bc4(ppuVar4);
          func_0x000107c61574(puStack_78);
          puVar5 = &UNK_110436568;
          func_0x000107c613fc(&UNK_110436568,0x18,7);
          *(ulong **)(puVar5 + 0x10) = &uStack_b0;
          puVar6 = &UNK_110436590;
          func_0x000107c613fc(&UNK_110436590,0x20,7);
          *(undefined8 *)(puVar6 + 0x10) = 0x101a801e0;
          *(undefined **)(puVar6 + 0x18) = puVar5;
          pcStack_80 = (code *)0x101a801a8;
          puStack_a0 = puVar1;
          uStack_98 = 0x42000000;
          uStack_90 = 0x101a7ff60;
          puStack_88 = &UNK_1104365a8;
          ppuVar7 = &puStack_a0;
          puStack_78 = puVar6;
          func_0x000107c60bc4(ppuVar7);
          func_0x000107c61574(puStack_78);
          func_0x000107c4c628(lVar14);
          func_0x000107c61170(lVar14);
          func_0x000107c61170(lVar9);
          func_0x000107c60bd0(ppuVar7);
          func_0x000107c60bd0(ppuVar4);
          func_0x000107c60bd0(ppuVar3);
          uVar10 = uStack_b0;
          func_0x000107c61574(puVar5);
          if ((uVar16 & 1) == 0) {
            if ((uVar10 & 1) != 0) {
              func_0x000107c61170(lVar12);
              func_0x000107c61170(lVar11);
              goto LAB_101a7ded4;
            }
            goto LAB_101a7de54;
          }
          if ((uVar10 & 1) == 0) goto LAB_101a7e100;
          lVar9 = lVar12;
          func_0x000107c439a8();
          func_0x000107c61180();
          if (lVar9 == 0) {
LAB_101a7df24:
            uVar16 = 0x7fffffffffffffff;
          }
          else {
            lVar14 = lVar9;
            func_0x000107c5c3a4();
            func_0x000107c61180();
            puVar1 = PTR___NSConcreteStackBlock_11034bd00;
            if (lVar14 == 0) {
              func_0x000107c61170(lVar9);
              goto LAB_101a7df24;
            }
            uStack_b0 = 0;
            cStack_a8 = '\x01';
            pcStack_80 = (code *)0x101a7be88;
            puStack_78 = (undefined *)0x0;
            puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_98 = 0x42000000;
            uStack_90 = 0x101a7ff58;
            puStack_88 = &UNK_110436698;
            ppuVar3 = &puStack_a0;
            func_0x000107c60bc4(ppuVar3);
            func_0x000107c61574(puStack_78);
            pcStack_80 = (code *)0x101a7be90;
            puStack_78 = (undefined *)0x0;
            puStack_a0 = puVar1;
            uStack_98 = 0x42000000;
            uStack_90 = 0x101a7ff5c;
            puStack_88 = &UNK_1104366c0;
            ppuVar4 = &puStack_a0;
            func_0x000107c60bc4(ppuVar4);
            func_0x000107c61574(puStack_78);
            puVar5 = &UNK_1104366f8;
            func_0x000107c613fc(&UNK_1104366f8,0x18,7);
            *(ulong **)(puVar5 + 0x10) = &uStack_b0;
            puVar6 = &UNK_110436720;
            func_0x000107c613fc(&UNK_110436720,0x20,7);
            *(undefined8 *)(puVar6 + 0x10) = 0x101a8020c;
            *(undefined **)(puVar6 + 0x18) = puVar5;
            pcStack_80 = (code *)0x101a801b0;
            puStack_a0 = puVar1;
            uStack_98 = 0x42000000;
            uStack_90 = 0x101a7ff60;
            puStack_88 = &UNK_110436738;
            ppuVar7 = &puStack_a0;
            puStack_78 = puVar6;
            func_0x000107c60bc4(ppuVar7);
            func_0x000107c61574(puStack_78);
            func_0x000107c4c628(lVar14);
            func_0x000107c61170(lVar14);
            func_0x000107c61170(lVar9);
            func_0x000107c60bd0(ppuVar7);
            func_0x000107c60bd0(ppuVar4);
            func_0x000107c60bd0(ppuVar3);
            cVar2 = cStack_a8;
            uVar16 = uStack_b0;
            func_0x000107c61574(puVar5);
            if (cVar2 == '\x01') goto LAB_101a7df24;
          }
          lVar9 = lVar11;
          func_0x000107c439a8();
          func_0x000107c61180();
          if (lVar9 == 0) {
LAB_101a7e0d4:
            uVar10 = 0x7fffffffffffffff;
            if (uVar16 == 0x7fffffffffffffff) goto LAB_101a7de54;
          }
          else {
            lVar14 = lVar9;
            func_0x000107c5c3a4();
            func_0x000107c61180();
            puVar1 = PTR___NSConcreteStackBlock_11034bd00;
            if (lVar14 == 0) {
              func_0x000107c61170(lVar9);
              goto LAB_101a7e0d4;
            }
            uStack_b0 = 0;
            cStack_a8 = '\x01';
            pcStack_80 = (code *)0x101a7be88;
            puStack_78 = (undefined *)0x0;
            puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_98 = 0x42000000;
            uStack_90 = 0x101a7ff58;
            puStack_88 = &UNK_1104365d0;
            ppuVar3 = &puStack_a0;
            func_0x000107c60bc4(ppuVar3);
            func_0x000107c61574(puStack_78);
            pcStack_80 = (code *)0x101a7be90;
            puStack_78 = (undefined *)0x0;
            puStack_a0 = puVar1;
            uStack_98 = 0x42000000;
            uStack_90 = 0x101a7ff5c;
            puStack_88 = &UNK_1104365f8;
            ppuVar4 = &puStack_a0;
            func_0x000107c60bc4(ppuVar4);
            func_0x000107c61574(puStack_78);
            puVar5 = &UNK_110436630;
            func_0x000107c613fc(&UNK_110436630,0x18,7);
            *(ulong **)(puVar5 + 0x10) = &uStack_b0;
            puVar6 = &UNK_110436658;
            func_0x000107c613fc(&UNK_110436658,0x20,7);
            *(undefined8 *)(puVar6 + 0x10) = 0x101a80208;
            *(undefined **)(puVar6 + 0x18) = puVar5;
            pcStack_80 = (code *)0x101a801ac;
            puStack_a0 = puVar1;
            uStack_98 = 0x42000000;
            uStack_90 = 0x101a7ff60;
            puStack_88 = &UNK_110436670;
            ppuVar7 = &puStack_a0;
            puStack_78 = puVar6;
            func_0x000107c60bc4(ppuVar7);
            func_0x000107c61574(puStack_78);
            func_0x000107c4c628(lVar14);
            func_0x000107c61170(lVar14);
            func_0x000107c61170(lVar9);
            func_0x000107c60bd0(ppuVar7);
            func_0x000107c60bd0(ppuVar4);
            func_0x000107c60bd0(ppuVar3);
            cVar2 = cStack_a8;
            uVar10 = uStack_b0;
            func_0x000107c61574(puVar5);
            if (cVar2 == '\x01') goto LAB_101a7e0d4;
            if (uVar16 == uVar10) goto LAB_101a7de54;
          }
          func_0x000107c61170(lVar12);
          func_0x000107c61170(lVar11);
          if ((long)uVar16 < (long)uVar10) goto LAB_101a7e114;
LAB_101a7ded4:
          if (plVar15 != plVar17) {
            *param_4 = *plVar18;
          }
          plVar17 = plVar18;
          plVar15 = param_4;
          if (plVar18 <= param_5) break;
          goto LAB_101a7d950;
        }
LAB_101a7de50:
        if ((uVar16 & 1) == 0) {
LAB_101a7de54:
          lVar9 = lVar12;
          func_0x000107c439a8();
          func_0x000107c61180();
          dVar19 = param_1;
          dVar21 = 0.0;
          if (lVar9 != 0) {
            func_0x000107c4aa00();
            dVar19 = param_1;
            func_0x000107c61170(lVar9);
            dVar21 = param_1;
          }
          lVar9 = lVar11;
          func_0x000107c439a8();
          func_0x000107c61180();
          param_1 = dVar19;
          dVar20 = 0.0;
          if (lVar9 != 0) {
            func_0x000107c4aa00();
            param_1 = dVar19;
            func_0x000107c61170(lVar12);
            lVar12 = lVar11;
            lVar11 = lVar9;
            dVar20 = dVar19;
          }
          func_0x000107c61170(lVar12);
          func_0x000107c61170(lVar11);
          if (dVar20 < dVar21) goto LAB_101a7e114;
          goto LAB_101a7ded4;
        }
LAB_101a7e100:
        func_0x000107c61170(lVar12);
        func_0x000107c61170(lVar11);
LAB_101a7e114:
        if (plVar15 != param_3) {
          *param_4 = *plVar13;
        }
        plVar8 = plVar13;
        plVar18 = plVar17;
        param_3 = plVar13;
      } while (param_5 < plVar17);
    }
  }
  uVar10 = (long)plVar18 - (long)param_5;
  uVar16 = uVar10 + 7;
  if (-1 < (long)uVar10) {
    uVar16 = uVar10;
  }
  if ((plVar8 != param_5) || ((long *)((long)param_5 + (uVar16 & 0xfffffffffffffff8)) <= plVar8)) {
    func_0x000107c610b8(plVar8,param_5,((long)uVar16 >> 3) << 3);
  }
  return 1;
}



/* Entry: 101a7e1cc; end: 101a7e49f;  */

undefined8 FUN_101a7e1cc(ulong *param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  bool bVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long unaff_x21;
  ulong uVar15;
  ulong uVar16;
  
  uVar16 = *param_1;
  if (1 < *(ulong *)(uVar16 + 0x10)) {
    func_0x000107c61174();
    uVar14 = uVar16;
    func_0x000107c61558();
    if ((uVar14 & 1) == 0) {
      func_0x000100e06d54();
    }
    *param_1 = uVar16;
    lVar1 = uVar16 + 0x20;
    uVar14 = *(ulong *)(uVar16 + 0x10);
    do {
      uVar11 = uVar14 - 1;
      uVar8 = param_4;
      if (uVar14 < 4) {
        if (uVar14 == 3) {
          bVar7 = SBORROW8(*(long *)(uVar16 + 0x28),*(long *)(uVar16 + 0x20));
          lVar9 = *(long *)(uVar16 + 0x28) - *(long *)(uVar16 + 0x20);
          goto LAB_101a7e2ac;
        }
        if (uVar14 < 2) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101a7e478);
          (*pcVar6)();
        }
        plVar2 = (long *)(uVar16 + uVar14 * 0x10);
        lVar9 = *plVar2;
        lVar10 = plVar2[1];
        bVar7 = SBORROW8(lVar10,lVar9);
        lVar10 = lVar10 - lVar9;
LAB_101a7e30c:
        if (bVar7) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101a7e468);
          (*pcVar6)();
        }
        plVar2 = (long *)(lVar1 + uVar11 * 0x10);
        lVar9 = *plVar2;
        lVar4 = plVar2[1];
        if (SBORROW8(lVar4,lVar9)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101a7e470);
          (*pcVar6)();
        }
        uVar12 = uVar11;
        if (lVar4 - lVar9 < lVar10) break;
      }
      else {
        lVar10 = lVar1 + uVar14 * 0x10;
        if (SBORROW8(*(long *)(lVar10 + -0x38),*(long *)(lVar10 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101a7e450);
          (*pcVar6)();
        }
        lVar9 = *(long *)(lVar10 + -0x28) - *(long *)(lVar10 + -0x30);
        if (SBORROW8(*(long *)(lVar10 + -0x28),*(long *)(lVar10 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101a7e454);
          (*pcVar6)();
        }
        plVar2 = (long *)(uVar16 + uVar14 * 0x10);
        lVar4 = *plVar2;
        lVar13 = plVar2[1];
        lVar5 = lVar13 - lVar4;
        if (SBORROW8(lVar13,lVar4)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101a7e45c);
          (*pcVar6)();
        }
        if (SCARRY8(lVar9,lVar5)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101a7e464);
          (*pcVar6)();
        }
        bVar7 = false;
        if (lVar9 + lVar5 < *(long *)(lVar10 + -0x38) - *(long *)(lVar10 + -0x40)) {
LAB_101a7e2ac:
          if (bVar7) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x101a7e458);
            (*pcVar6)();
          }
          plVar2 = (long *)(uVar16 + uVar14 * 0x10);
          lVar4 = *plVar2;
          lVar13 = plVar2[1];
          lVar10 = lVar13 - lVar4;
          if (SBORROW8(lVar13,lVar4)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x101a7e460);
            (*pcVar6)();
          }
          plVar2 = (long *)(lVar1 + uVar11 * 0x10);
          lVar4 = *plVar2;
          lVar13 = plVar2[1];
          lVar5 = lVar13 - lVar4;
          if (SBORROW8(lVar13,lVar4)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x101a7e46c);
            (*pcVar6)();
          }
          if (SCARRY8(lVar10,lVar5)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x101a7e474);
            (*pcVar6)();
          }
          bVar7 = false;
          if (lVar10 + lVar5 < lVar9) goto LAB_101a7e30c;
          uVar12 = uVar14 - 2;
          if (lVar5 <= lVar9) {
            uVar12 = uVar11;
          }
        }
        else {
          plVar2 = (long *)(lVar1 + uVar11 * 0x10);
          lVar10 = *plVar2;
          lVar4 = plVar2[1];
          if (SBORROW8(lVar4,lVar10)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x101a7e47c);
            (*pcVar6)();
          }
          uVar12 = uVar14 - 2;
          if (lVar4 - lVar10 <= lVar9) {
            uVar12 = uVar11;
          }
        }
      }
      uVar11 = uVar12 - 1;
      if (uVar14 <= uVar11) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x101a7e440);
        (*pcVar6)();
      }
      lVar9 = *param_3;
      if (lVar9 == 0) {
        func_0x000107c61170(param_4);
        *param_1 = uVar16;
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x101a7e4a0);
        (*pcVar6)();
      }
      plVar2 = (long *)(lVar1 + uVar11 * 0x10);
      lVar13 = *plVar2;
      plVar3 = (long *)(lVar1 + uVar12 * 0x10);
      lVar10 = *plVar3;
      lVar4 = plVar3[1];
      func_0x000107c61174(param_4);
      FUN_101a7d05c(lVar9 + lVar13 * 8,lVar9 + lVar10 * 8,lVar9 + lVar4 * 8,param_2);
      func_0x000107c61170(uVar8);
      if (unaff_x21 != 0) {
        *param_1 = uVar16;
        func_0x000107c61170(uVar8);
        return 1;
      }
      if (lVar4 < lVar13) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x101a7e444);
        (*pcVar6)();
      }
      uVar15 = *(ulong *)(uVar16 + 0x10);
      if (uVar15 <= uVar11) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x101a7e448);
        (*pcVar6)();
      }
      *plVar2 = lVar13;
      plVar2[1] = lVar4;
      if (uVar15 <= uVar12) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x101a7e44c);
        (*pcVar6)();
      }
      uVar14 = uVar15 - 1;
      func_0x000107c610b8(plVar3,plVar3 + 2,(uVar14 - uVar12) * 0x10);
      *(ulong *)(uVar16 + 0x10) = uVar14;
    } while (2 < uVar15);
    func_0x000107c61170(uVar8);
    *param_1 = uVar16;
  }
  return 1;
}



/* Entry: 101a7e4a0; end: 101a7f8d3;  */

void FUN_101a7e4a0(double param_1,long *param_2,undefined8 param_3,long *param_4,long param_5,
                  undefined8 param_6)

{
  ulong *puVar1;
  ulong uVar2;
  char cVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  long unaff_x21;
  long lVar26;
  ulong *puVar27;
  long *plVar28;
  long *plVar29;
  long lVar30;
  long lVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  undefined *puStack_d8;
  ulong uStack_c0;
  char cStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *apuStack_80 [2];
  
  lVar31 = param_4[1];
  apuStack_80[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar31 < 1) {
    func_0x000107c61174(param_6);
    func_0x000107c61174();
  }
  else {
    uVar6 = param_6;
    func_0x000107c61174();
    func_0x000107c61174();
    lVar18 = 0;
    do {
      lVar24 = lVar18 + 1;
      if (lVar24 < lVar31) {
        lVar26 = *param_4;
        puVar7 = *(undefined **)(lVar26 + lVar24 * 8);
        uVar23 = *(ulong *)(lVar26 + lVar18 * 8);
        uStack_c0 = uVar23;
        puStack_b0 = puVar7;
        func_0x000107c61174();
        func_0x000107c61174(uVar23);
        ppuVar8 = &puStack_b0;
        FUN_101a7c714(ppuVar8,&uStack_c0);
        func_0x000107c61170(puVar7);
        func_0x000107c61170(uVar23);
        if (unaff_x21 != 0) goto LAB_101a7f7e4;
        lVar24 = lVar18 + 2;
        if (lVar24 < lVar31) {
          plVar28 = (long *)(lVar26 + lVar18 * 8 + 0x10);
          lVar26 = lVar24;
          do {
            lVar24 = lVar26;
            lVar26 = plVar28[-1];
            lVar17 = *plVar28;
            func_0x000107c61174();
            func_0x000107c61174();
            lVar30 = lVar17;
            func_0x000107c439a8();
            func_0x000107c61180();
            if (lVar30 == 0) {
LAB_101a7e778:
              uVar23 = 0;
            }
            else {
              lVar13 = lVar30;
              func_0x000107c5c3a4();
              func_0x000107c61180();
              puVar7 = PTR___NSConcreteStackBlock_11034bd00;
              if (lVar13 == 0) {
                func_0x000107c61170(lVar30);
                goto LAB_101a7e778;
              }
              uStack_c0 = uStack_c0 & 0xffffffffffffff00;
              pcStack_90 = FUN_101a7be84;
              puStack_88 = (undefined *)0x0;
              puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_a8 = 0x42000000;
              uStack_a0 = 0x101a7ff58;
              puStack_98 = &UNK_110436440;
              ppuVar9 = &puStack_b0;
              func_0x000107c60bc4(ppuVar9);
              func_0x000107c61574(puStack_88);
              pcStack_90 = (code *)0x101a7be8c;
              puStack_88 = (undefined *)0x0;
              puStack_b0 = puVar7;
              uStack_a8 = 0x42000000;
              uStack_a0 = 0x101a7ff5c;
              puStack_98 = &UNK_110436468;
              ppuVar10 = &puStack_b0;
              func_0x000107c60bc4(ppuVar10);
              func_0x000107c61574(puStack_88);
              puVar11 = &UNK_1104364a0;
              func_0x000107c613fc(&UNK_1104364a0,0x18,7);
              *(ulong **)(puVar11 + 0x10) = &uStack_c0;
              puVar16 = &UNK_1104364c8;
              func_0x000107c613fc(&UNK_1104364c8,0x20,7);
              *(undefined8 *)(puVar16 + 0x10) = 0x101a801dc;
              *(undefined **)(puVar16 + 0x18) = puVar11;
              pcStack_90 = (code *)0x101a801a4;
              puStack_b0 = puVar7;
              uStack_a8 = 0x42000000;
              uStack_a0 = 0x101a7ff60;
              puStack_98 = &UNK_1104364e0;
              ppuVar12 = &puStack_b0;
              puStack_88 = puVar16;
              func_0x000107c60bc4(ppuVar12);
              func_0x000107c61574(puStack_88);
              func_0x000107c4c628(lVar13);
              func_0x000107c61170(lVar13);
              func_0x000107c61170(lVar30);
              func_0x000107c60bd0(ppuVar12);
              func_0x000107c60bd0(ppuVar10);
              func_0x000107c60bd0(ppuVar9);
              uVar23 = uStack_c0 & 0xff;
              func_0x000107c61574(puVar11);
            }
            lVar30 = lVar26;
            func_0x000107c439a8();
            func_0x000107c61180();
            if (lVar30 == 0) {
LAB_101a7ea9c:
              if ((uVar23 & 1) == 0) {
LAB_101a7ec74:
                lVar30 = lVar17;
                func_0x000107c439a8();
                func_0x000107c61180();
                dVar32 = param_1;
                dVar34 = 0.0;
                if (lVar30 != 0) {
                  func_0x000107c4aa00();
                  dVar32 = param_1;
                  func_0x000107c61170(lVar30);
                  dVar34 = param_1;
                }
                lVar30 = lVar26;
                func_0x000107c439a8();
                func_0x000107c61180();
                param_1 = dVar32;
                dVar33 = 0.0;
                if (lVar30 != 0) {
                  func_0x000107c4aa00();
                  param_1 = dVar32;
                  func_0x000107c61170(lVar17);
                  lVar17 = lVar26;
                  lVar26 = lVar30;
                  dVar33 = dVar32;
                }
                func_0x000107c61170(lVar17);
                func_0x000107c61170(lVar26);
                bVar5 = dVar33 < dVar34;
LAB_101a7ecec:
                if ((((uint)ppuVar8 ^ (uint)bVar5) & 1) != 0) break;
              }
              else {
LAB_101a7e5a0:
                func_0x000107c61170(lVar17);
                func_0x000107c61170(lVar26);
                if (((ulong)ppuVar8 & 1) == 0) goto LAB_101a7edb8;
              }
            }
            else {
              lVar13 = lVar30;
              func_0x000107c5c3a4();
              func_0x000107c61180();
              puVar7 = PTR___NSConcreteStackBlock_11034bd00;
              if (lVar13 == 0) {
                func_0x000107c61170(lVar30);
                goto LAB_101a7ea9c;
              }
              uStack_c0 = uStack_c0 & 0xffffffffffffff00;
              pcStack_90 = FUN_101a7be84;
              puStack_88 = (undefined *)0x0;
              puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_a8 = 0x42000000;
              uStack_a0 = 0x101a7ff58;
              puStack_98 = &UNK_1104361e8;
              ppuVar9 = &puStack_b0;
              func_0x000107c60bc4(ppuVar9);
              func_0x000107c61574(puStack_88);
              pcStack_90 = (code *)0x101a7be8c;
              puStack_88 = (undefined *)0x0;
              puStack_b0 = puVar7;
              uStack_a8 = 0x42000000;
              uStack_a0 = 0x101a7ff5c;
              puStack_98 = &UNK_110436210;
              ppuVar10 = &puStack_b0;
              func_0x000107c60bc4(ppuVar10);
              func_0x000107c61574(puStack_88);
              puVar11 = &UNK_110436248;
              func_0x000107c613fc(&UNK_110436248,0x18,7);
              *(ulong **)(puVar11 + 0x10) = &uStack_c0;
              puVar16 = &UNK_110436270;
              func_0x000107c613fc(&UNK_110436270,0x20,7);
              *(undefined8 *)(puVar16 + 0x10) = 0x101a801d8;
              *(undefined **)(puVar16 + 0x18) = puVar11;
              pcStack_90 = (code *)0x101a80198;
              puStack_b0 = puVar7;
              uStack_a8 = 0x42000000;
              uStack_a0 = 0x101a7ff60;
              puStack_98 = &UNK_110436288;
              ppuVar12 = &puStack_b0;
              puStack_88 = puVar16;
              func_0x000107c60bc4(ppuVar12);
              func_0x000107c61574(puStack_88);
              func_0x000107c4c628(lVar13);
              func_0x000107c61170(lVar13);
              func_0x000107c61170(lVar30);
              func_0x000107c60bd0(ppuVar12);
              func_0x000107c60bd0(ppuVar10);
              func_0x000107c60bd0(ppuVar9);
              uVar19 = uStack_c0;
              func_0x000107c61574(puVar11);
              if ((uVar23 & 1) != 0) {
                if ((uVar19 & 1) == 0) goto LAB_101a7e5a0;
                lVar30 = lVar17;
                func_0x000107c439a8();
                func_0x000107c61180();
                if (lVar30 == 0) {
LAB_101a7ead4:
                  uVar23 = 0x7fffffffffffffff;
                }
                else {
                  lVar13 = lVar30;
                  func_0x000107c5c3a4();
                  func_0x000107c61180();
                  puVar7 = PTR___NSConcreteStackBlock_11034bd00;
                  if (lVar13 == 0) {
                    func_0x000107c61170(lVar30);
                    goto LAB_101a7ead4;
                  }
                  uStack_c0 = 0;
                  cStack_b8 = '\x01';
                  pcStack_90 = (code *)0x101a7be88;
                  puStack_88 = (undefined *)0x0;
                  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
                  uStack_a8 = 0x42000000;
                  uStack_a0 = 0x101a7ff58;
                  puStack_98 = &UNK_110436378;
                  ppuVar9 = &puStack_b0;
                  func_0x000107c60bc4(ppuVar9);
                  func_0x000107c61574(puStack_88);
                  pcStack_90 = (code *)0x101a7be90;
                  puStack_88 = (undefined *)0x0;
                  puStack_b0 = puVar7;
                  uStack_a8 = 0x42000000;
                  uStack_a0 = 0x101a7ff5c;
                  puStack_98 = &UNK_1104363a0;
                  ppuVar10 = &puStack_b0;
                  func_0x000107c60bc4(ppuVar10);
                  func_0x000107c61574(puStack_88);
                  puVar11 = &UNK_1104363d8;
                  func_0x000107c613fc(&UNK_1104363d8,0x18,7);
                  *(ulong **)(puVar11 + 0x10) = &uStack_c0;
                  puVar16 = &UNK_110436400;
                  func_0x000107c613fc(&UNK_110436400,0x20,7);
                  *(undefined8 *)(puVar16 + 0x10) = 0x101a80204;
                  *(undefined **)(puVar16 + 0x18) = puVar11;
                  pcStack_90 = (code *)0x101a801a0;
                  puStack_b0 = puVar7;
                  uStack_a8 = 0x42000000;
                  uStack_a0 = 0x101a7ff60;
                  puStack_98 = &UNK_110436418;
                  ppuVar12 = &puStack_b0;
                  puStack_88 = puVar16;
                  func_0x000107c60bc4(ppuVar12);
                  func_0x000107c61574(puStack_88);
                  func_0x000107c4c628(lVar13);
                  func_0x000107c61170(lVar13);
                  func_0x000107c61170(lVar30);
                  func_0x000107c60bd0(ppuVar12);
                  func_0x000107c60bd0(ppuVar10);
                  func_0x000107c60bd0(ppuVar9);
                  cVar3 = cStack_b8;
                  uVar23 = uStack_c0;
                  func_0x000107c61574(puVar11);
                  if (cVar3 == '\x01') goto LAB_101a7ead4;
                }
                lVar30 = lVar26;
                func_0x000107c439a8();
                func_0x000107c61180();
                if (lVar30 == 0) {
LAB_101a7ed08:
                  uVar19 = 0x7fffffffffffffff;
                  if (uVar23 == 0x7fffffffffffffff) goto LAB_101a7ec74;
                }
                else {
                  lVar13 = lVar30;
                  func_0x000107c5c3a4();
                  func_0x000107c61180();
                  puVar7 = PTR___NSConcreteStackBlock_11034bd00;
                  if (lVar13 == 0) {
                    func_0x000107c61170(lVar30);
                    goto LAB_101a7ed08;
                  }
                  uStack_c0 = 0;
                  cStack_b8 = '\x01';
                  pcStack_90 = (code *)0x101a7be88;
                  puStack_88 = (undefined *)0x0;
                  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
                  uStack_a8 = 0x42000000;
                  uStack_a0 = 0x101a7ff58;
                  puStack_98 = &UNK_1104362b0;
                  ppuVar9 = &puStack_b0;
                  func_0x000107c60bc4();
                  func_0x000107c61574(puStack_88);
                  pcStack_90 = (code *)0x101a7be90;
                  puStack_88 = (undefined *)0x0;
                  puStack_b0 = puVar7;
                  uStack_a8 = 0x42000000;
                  uStack_a0 = 0x101a7ff5c;
                  puStack_98 = &UNK_1104362d8;
                  ppuVar10 = &puStack_b0;
                  func_0x000107c60bc4(ppuVar10);
                  func_0x000107c61574(puStack_88);
                  puVar11 = &UNK_110436310;
                  func_0x000107c613fc(&UNK_110436310,0x18,7);
                  *(ulong **)(puVar11 + 0x10) = &uStack_c0;
                  puVar16 = &UNK_110436338;
                  func_0x000107c613fc(&UNK_110436338,0x20,7);
                  *(undefined8 *)(puVar16 + 0x10) = 0x101a80200;
                  *(undefined **)(puVar16 + 0x18) = puVar11;
                  pcStack_90 = (code *)0x101a8019c;
                  puStack_b0 = puVar7;
                  uStack_a8 = 0x42000000;
                  uStack_a0 = 0x101a7ff60;
                  puStack_98 = &UNK_110436350;
                  ppuVar12 = &puStack_b0;
                  puStack_88 = puVar16;
                  func_0x000107c60bc4(ppuVar12);
                  func_0x000107c61574(puStack_88);
                  func_0x000107c4c628(lVar13);
                  func_0x000107c61170(lVar13);
                  func_0x000107c61170(lVar30);
                  func_0x000107c60bd0(ppuVar12);
                  func_0x000107c60bd0(ppuVar10);
                  func_0x000107c60bd0(ppuVar9);
                  cVar3 = cStack_b8;
                  uVar19 = uStack_c0;
                  func_0x000107c61574(puVar11);
                  if (cVar3 == '\x01') goto LAB_101a7ed08;
                  if (uVar23 == uVar19) goto LAB_101a7ec74;
                }
                func_0x000107c61170(lVar17);
                func_0x000107c61170(lVar26);
                bVar5 = (long)uVar23 < (long)uVar19;
                goto LAB_101a7ecec;
              }
              if ((uVar19 & 1) == 0) goto LAB_101a7ec74;
              func_0x000107c61170(lVar17);
              func_0x000107c61170(lVar26);
              if (((ulong)ppuVar8 & 1) != 0) {
                if (lVar18 <= lVar24) goto LAB_101a7ed50;
                goto LAB_101a7f84c;
              }
            }
            plVar28 = plVar28 + 1;
            lVar26 = lVar24 + 1;
            lVar24 = lVar31;
          } while (lVar31 != lVar26);
        }
        if (((ulong)ppuVar8 & 1) != 0) {
          if (lVar24 < lVar18) {
LAB_101a7f84c:
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101a7f850);
            (*pcVar4)();
          }
LAB_101a7ed50:
          if (lVar18 < lVar24) {
            lVar17 = *param_4;
            puVar20 = (undefined8 *)(lVar17 + lVar24 * 8);
            puVar21 = (undefined8 *)(lVar17 + lVar18 * 8);
            lVar26 = lVar24;
            lVar31 = lVar18;
            do {
              puVar20 = puVar20 + -1;
              lVar26 = lVar26 + -1;
              if (lVar31 != lVar26) {
                if (lVar17 == 0) {
                  func_0x000107c61170(uVar6);
                  func_0x000107c61170(uVar6);
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x101a7f890);
                  (*pcVar4)();
                }
                uVar22 = *puVar21;
                *puVar21 = *puVar20;
                *puVar20 = uVar22;
              }
              lVar31 = lVar31 + 1;
              puVar21 = puVar21 + 1;
            } while (lVar31 < lVar26);
          }
        }
      }
LAB_101a7edb8:
      lVar31 = param_4[1];
      lVar26 = lVar24;
      if (lVar24 < lVar31) {
        if (SBORROW8(lVar24,lVar18)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101a7f844);
          (*pcVar4)();
        }
        if (lVar24 - lVar18 < param_5) {
          if (SCARRY8(lVar18,param_5)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101a7f848);
            (*pcVar4)();
          }
          lVar17 = lVar18 + param_5;
          if (lVar31 <= lVar18 + param_5) {
            lVar17 = lVar31;
          }
          if (lVar17 < lVar18) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101a7f84c);
            (*pcVar4)();
          }
          if (lVar24 != lVar17) {
            lVar31 = *param_4;
            plVar28 = (long *)(lVar31 + lVar24 * 8 + -8);
            lVar30 = lVar18 - lVar24;
            do {
              lVar13 = *(long *)(lVar31 + lVar24 * 8);
              plVar29 = plVar28;
              lVar26 = lVar30;
              do {
                lVar25 = *plVar29;
                func_0x000107c61174();
                func_0x000107c61174();
                lVar14 = lVar13;
                func_0x000107c439a8();
                func_0x000107c61180();
                if (lVar14 == 0) {
LAB_101a7f014:
                  uVar23 = 0;
                }
                else {
                  lVar15 = lVar14;
                  func_0x000107c5c3a4();
                  func_0x000107c61180();
                  puVar7 = PTR___NSConcreteStackBlock_11034bd00;
                  if (lVar15 == 0) {
                    func_0x000107c61170(lVar14);
                    goto LAB_101a7f014;
                  }
                  uStack_c0 = uStack_c0 & 0xffffffffffffff00;
                  pcStack_90 = FUN_101a7be84;
                  puStack_88 = (undefined *)0x0;
                  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
                  uStack_a8 = 0x42000000;
                  uStack_a0 = 0x101a7ff58;
                  puStack_98 = &UNK_110436120;
                  ppuVar8 = &puStack_b0;
                  func_0x000107c60bc4(ppuVar8);
                  func_0x000107c61574(puStack_88);
                  pcStack_90 = (code *)0x101a7be8c;
                  puStack_88 = (undefined *)0x0;
                  puStack_b0 = puVar7;
                  uStack_a8 = 0x42000000;
                  uStack_a0 = 0x101a7ff5c;
                  puStack_98 = &UNK_110436148;
                  ppuVar9 = &puStack_b0;
                  func_0x000107c60bc4(ppuVar9);
                  func_0x000107c61574(puStack_88);
                  puVar11 = &UNK_110436180;
                  func_0x000107c613fc(&UNK_110436180,0x18,7);
                  *(ulong **)(puVar11 + 0x10) = &uStack_c0;
                  puVar16 = &UNK_1104361a8;
                  func_0x000107c613fc(&UNK_1104361a8,0x20,7);
                  *(undefined8 *)(puVar16 + 0x10) = 0x101a801d4;
                  *(undefined **)(puVar16 + 0x18) = puVar11;
                  pcStack_90 = (code *)0x101a80194;
                  puStack_b0 = puVar7;
                  uStack_a8 = 0x42000000;
                  uStack_a0 = 0x101a7ff60;
                  puStack_98 = &UNK_1104361c0;
                  ppuVar10 = &puStack_b0;
                  puStack_88 = puVar16;
                  func_0x000107c60bc4(ppuVar10);
                  func_0x000107c61574(puStack_88);
                  func_0x000107c4c628(lVar15);
                  func_0x000107c61170(lVar15);
                  func_0x000107c61170(lVar14);
                  func_0x000107c60bd0(ppuVar10);
                  func_0x000107c60bd0(ppuVar9);
                  func_0x000107c60bd0(ppuVar8);
                  uVar23 = uStack_c0 & 0xff;
                  func_0x000107c61574(puVar11);
                }
                lVar14 = lVar25;
                func_0x000107c439a8();
                func_0x000107c61180();
                if (lVar14 == 0) {
LAB_101a7f340:
                  if ((uVar23 & 1) == 0) {
LAB_101a7f510:
                    lVar14 = lVar13;
                    func_0x000107c439a8();
                    func_0x000107c61180();
                    dVar32 = param_1;
                    dVar34 = 0.0;
                    if (lVar14 != 0) {
                      func_0x000107c4aa00();
                      dVar32 = param_1;
                      func_0x000107c61170(lVar14);
                      dVar34 = param_1;
                    }
                    lVar14 = lVar25;
                    func_0x000107c439a8();
                    func_0x000107c61180();
                    lVar15 = lVar25;
                    param_1 = dVar32;
                    dVar33 = 0.0;
                    if (lVar14 != 0) {
                      func_0x000107c4aa00();
                      param_1 = dVar32;
                      func_0x000107c61170(lVar13);
                      lVar15 = lVar14;
                      lVar13 = lVar25;
                      dVar33 = dVar32;
                    }
                    func_0x000107c61170(lVar13);
                    func_0x000107c61170(lVar15);
                    if (dVar34 <= dVar33) break;
                  }
                  else {
LAB_101a7f344:
                    func_0x000107c61170(lVar13);
                    func_0x000107c61170(lVar25);
                  }
                }
                else {
                  lVar15 = lVar14;
                  func_0x000107c5c3a4();
                  func_0x000107c61180();
                  puVar7 = PTR___NSConcreteStackBlock_11034bd00;
                  if (lVar15 == 0) {
                    func_0x000107c61170(lVar14);
                    goto LAB_101a7f340;
                  }
                  uStack_c0 = uStack_c0 & 0xffffffffffffff00;
                  pcStack_90 = FUN_101a7be84;
                  puStack_88 = (undefined *)0x0;
                  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
                  uStack_a8 = 0x42000000;
                  uStack_a0 = 0x101a7ff58;
                  puStack_98 = &UNK_110435ec8;
                  ppuVar8 = &puStack_b0;
                  func_0x000107c60bc4(ppuVar8);
                  func_0x000107c61574(puStack_88);
                  pcStack_90 = (code *)0x101a7be8c;
                  puStack_88 = (undefined *)0x0;
                  puStack_b0 = puVar7;
                  uStack_a8 = 0x42000000;
                  uStack_a0 = 0x101a7ff5c;
                  puStack_98 = &UNK_110435ef0;
                  ppuVar9 = &puStack_b0;
                  func_0x000107c60bc4(ppuVar9);
                  func_0x000107c61574(puStack_88);
                  puVar11 = &UNK_110435f28;
                  func_0x000107c613fc(&UNK_110435f28,0x18,7);
                  *(ulong **)(puVar11 + 0x10) = &uStack_c0;
                  puVar16 = &UNK_110435f50;
                  func_0x000107c613fc(&UNK_110435f50,0x20,7);
                  *(undefined8 *)(puVar16 + 0x10) = 0x101a801d0;
                  *(undefined **)(puVar16 + 0x18) = puVar11;
                  pcStack_90 = (code *)0x101a80188;
                  puStack_b0 = puVar7;
                  uStack_a8 = 0x42000000;
                  uStack_a0 = 0x101a7ff60;
                  puStack_98 = &UNK_110435f68;
                  ppuVar10 = &puStack_b0;
                  puStack_88 = puVar16;
                  func_0x000107c60bc4(ppuVar10);
                  func_0x000107c61574(puStack_88);
                  func_0x000107c4c628(lVar15);
                  func_0x000107c61170(lVar15);
                  func_0x000107c61170(lVar14);
                  func_0x000107c60bd0(ppuVar10);
                  func_0x000107c60bd0(ppuVar9);
                  func_0x000107c60bd0(ppuVar8);
                  uVar19 = uStack_c0;
                  func_0x000107c61574(puVar11);
                  if ((uVar23 & 1) == 0) {
                    if ((uVar19 & 1) == 0) goto LAB_101a7f510;
                    func_0x000107c61170(lVar13);
                    func_0x000107c61170(lVar25);
                    break;
                  }
                  if ((uVar19 & 1) == 0) goto LAB_101a7f344;
                  lVar14 = lVar13;
                  func_0x000107c439a8();
                  func_0x000107c61180();
                  if (lVar14 == 0) {
LAB_101a7f370:
                    uVar23 = 0x7fffffffffffffff;
                  }
                  else {
                    lVar15 = lVar14;
                    func_0x000107c5c3a4();
                    func_0x000107c61180();
                    puVar7 = PTR___NSConcreteStackBlock_11034bd00;
                    if (lVar15 == 0) {
                      func_0x000107c61170(lVar14);
                      goto LAB_101a7f370;
                    }
                    uStack_c0 = 0;
                    cStack_b8 = '\x01';
                    pcStack_90 = (code *)0x101a7be88;
                    puStack_88 = (undefined *)0x0;
                    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
                    uStack_a8 = 0x42000000;
                    uStack_a0 = 0x101a7ff58;
                    puStack_98 = &UNK_110436058;
                    ppuVar8 = &puStack_b0;
                    func_0x000107c60bc4(ppuVar8);
                    func_0x000107c61574(puStack_88);
                    pcStack_90 = (code *)0x101a7be90;
                    puStack_88 = (undefined *)0x0;
                    puStack_b0 = puVar7;
                    uStack_a8 = 0x42000000;
                    uStack_a0 = 0x101a7ff5c;
                    puStack_98 = &UNK_110436080;
                    ppuVar9 = &puStack_b0;
                    func_0x000107c60bc4(ppuVar9);
                    func_0x000107c61574(puStack_88);
                    puVar11 = &UNK_1104360b8;
                    func_0x000107c613fc(&UNK_1104360b8,0x18,7);
                    *(ulong **)(puVar11 + 0x10) = &uStack_c0;
                    puVar16 = &UNK_1104360e0;
                    func_0x000107c613fc(&UNK_1104360e0,0x20,7);
                    *(undefined8 *)(puVar16 + 0x10) = 0x101a801fc;
                    *(undefined **)(puVar16 + 0x18) = puVar11;
                    pcStack_90 = (code *)0x101a80190;
                    puStack_b0 = puVar7;
                    uStack_a8 = 0x42000000;
                    uStack_a0 = 0x101a7ff60;
                    puStack_98 = &UNK_1104360f8;
                    ppuVar10 = &puStack_b0;
                    puStack_88 = puVar16;
                    func_0x000107c60bc4(ppuVar10);
                    func_0x000107c61574(puStack_88);
                    func_0x000107c4c628(lVar15);
                    func_0x000107c61170(lVar15);
                    func_0x000107c61170(lVar14);
                    func_0x000107c60bd0(ppuVar10);
                    func_0x000107c60bd0(ppuVar9);
                    func_0x000107c60bd0(ppuVar8);
                    cVar3 = cStack_b8;
                    uVar23 = uStack_c0;
                    func_0x000107c61574(puVar11);
                    if (cVar3 == '\x01') goto LAB_101a7f370;
                  }
                  lVar14 = lVar25;
                  func_0x000107c439a8();
                  func_0x000107c61180();
                  if (lVar14 == 0) {
LAB_101a7f5ac:
                    uVar19 = 0x7fffffffffffffff;
                    if (uVar23 == 0x7fffffffffffffff) goto LAB_101a7f510;
                  }
                  else {
                    lVar15 = lVar14;
                    func_0x000107c5c3a4();
                    func_0x000107c61180();
                    puVar7 = PTR___NSConcreteStackBlock_11034bd00;
                    if (lVar15 == 0) {
                      func_0x000107c61170(lVar14);
                      goto LAB_101a7f5ac;
                    }
                    uStack_c0 = 0;
                    cStack_b8 = '\x01';
                    pcStack_90 = (code *)0x101a7be88;
                    puStack_88 = (undefined *)0x0;
                    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
                    uStack_a8 = 0x42000000;
                    uStack_a0 = 0x101a7ff58;
                    puStack_98 = &UNK_110435f90;
                    ppuVar8 = &puStack_b0;
                    func_0x000107c60bc4();
                    func_0x000107c61574(puStack_88);
                    pcStack_90 = (code *)0x101a7be90;
                    puStack_88 = (undefined *)0x0;
                    puStack_b0 = puVar7;
                    uStack_a8 = 0x42000000;
                    uStack_a0 = 0x101a7ff5c;
                    puStack_98 = &UNK_110435fb8;
                    ppuVar9 = &puStack_b0;
                    func_0x000107c60bc4(ppuVar9);
                    func_0x000107c61574(puStack_88);
                    puVar11 = &UNK_110435ff0;
                    func_0x000107c613fc(&UNK_110435ff0,0x18,7);
                    *(ulong **)(puVar11 + 0x10) = &uStack_c0;
                    puVar16 = &UNK_110436018;
                    func_0x000107c613fc(&UNK_110436018,0x20,7);
                    *(undefined8 *)(puVar16 + 0x10) = 0x101a801f8;
                    *(undefined **)(puVar16 + 0x18) = puVar11;
                    pcStack_90 = (code *)0x101a8018c;
                    puStack_b0 = puVar7;
                    uStack_a8 = 0x42000000;
                    uStack_a0 = 0x101a7ff60;
                    puStack_98 = &UNK_110436030;
                    ppuVar10 = &puStack_b0;
                    puStack_88 = puVar16;
                    func_0x000107c60bc4(ppuVar10);
                    func_0x000107c61574(puStack_88);
                    func_0x000107c4c628(lVar15);
                    func_0x000107c61170(lVar15);
                    func_0x000107c61170(lVar14);
                    func_0x000107c60bd0(ppuVar10);
                    func_0x000107c60bd0(ppuVar9);
                    func_0x000107c60bd0(ppuVar8);
                    cVar3 = cStack_b8;
                    uVar19 = uStack_c0;
                    func_0x000107c61574(puVar11);
                    if (cVar3 == '\x01') goto LAB_101a7f5ac;
                    if (uVar23 == uVar19) goto LAB_101a7f510;
                  }
                  func_0x000107c61170(lVar13);
                  func_0x000107c61170(lVar25);
                  if ((long)uVar19 <= (long)uVar23) break;
                }
                if (lVar31 == 0) {
                  func_0x000107c61170(uVar6);
                  func_0x000107c61170(uVar6);
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x101a7f868);
                  (*pcVar4)();
                }
                lVar14 = *plVar29;
                lVar13 = plVar29[1];
                *plVar29 = lVar13;
                plVar29[1] = lVar14;
                bVar5 = lVar26 != -1;
                lVar26 = lVar26 + 1;
                plVar29 = plVar29 + -1;
              } while (bVar5);
              lVar24 = lVar24 + 1;
              plVar28 = plVar28 + 1;
              lVar30 = lVar30 + -1;
              lVar26 = lVar17;
            } while (lVar24 != lVar17);
          }
        }
      }
      puVar7 = apuStack_80[0];
      if (lVar26 < lVar18) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101a7f834);
        (*pcVar4)();
      }
      puVar11 = apuStack_80[0];
      func_0x000107c61558();
      puVar16 = puVar7;
      if (((ulong)puVar11 & 1) == 0) {
        puVar16 = (undefined *)0x0;
        func_0x0001000a91e0(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7);
      }
      uVar23 = *(ulong *)(puVar16 + 0x10);
      puVar7 = puVar16;
      if (*(ulong *)(puVar16 + 0x18) >> 1 <= uVar23) {
        puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar16 + 0x18));
        func_0x0001000a91e0(puVar7,uVar23 + 1,1,puVar16);
      }
      *(ulong *)(puVar7 + 0x10) = uVar23 + 1;
      *(long *)(puVar7 + uVar23 * 0x10 + 0x20) = lVar18;
      *(long *)(puVar7 + uVar23 * 0x10 + 0x28) = lVar26;
      lVar31 = *param_2;
      apuStack_80[0] = puVar7;
      if (lVar31 == 0) {
        func_0x000107c61170(uVar6);
        func_0x000107c61170(uVar6);
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101a7f8a8);
        (*pcVar4)();
      }
      uVar22 = uVar6;
      func_0x000107c61174(uVar6);
      FUN_101a7e1cc(apuStack_80,lVar31,param_4,uVar22);
      func_0x000107c61170(uVar22);
      if (unaff_x21 != 0) goto LAB_101a7f7e4;
      lVar31 = param_4[1];
      lVar18 = lVar26;
    } while (lVar26 < lVar31);
  }
  puStack_d8 = apuStack_80[0];
  lVar31 = *param_2;
  if (lVar31 == 0) {
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_6);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x101a7f8d4);
    (*pcVar4)();
  }
  puVar7 = apuStack_80[0];
  func_0x000107c61558();
  if (((ulong)puVar7 & 1) == 0) {
    func_0x000100e06d54();
  }
  puVar27 = (ulong *)(puStack_d8 + 0x10);
  uVar23 = *puVar27;
  do {
    if (uVar23 < 2) {
      func_0x000107c61170(param_6);
      func_0x000107c61170(param_6);
LAB_101a7f800:
      func_0x000107c6142c(puStack_d8);
      return;
    }
    lVar18 = *param_4;
    if (lVar18 == 0) {
      func_0x000107c61170(param_6);
      func_0x000107c61170(param_6);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x101a7f8bc);
      (*pcVar4)();
    }
    plVar28 = (long *)(puStack_d8 + uVar23 * 0x10);
    lVar24 = *plVar28;
    puVar1 = puVar27 + uVar23 * 2;
    uVar19 = *puVar1;
    uVar2 = puVar1[1];
    uVar6 = param_6;
    func_0x000107c61174();
    FUN_101a7d05c(lVar18 + lVar24 * 8,lVar18 + uVar19 * 8,lVar18 + uVar2 * 8,lVar31);
    if (unaff_x21 != 0) {
      apuStack_80[0] = puStack_d8;
      func_0x000107c61170(uVar6);
LAB_101a7f7e4:
      puStack_d8 = apuStack_80[0];
      func_0x000107c61170(param_6);
      func_0x000107c61170(param_6);
      goto LAB_101a7f800;
    }
    func_0x000107c61170(uVar6);
    if ((long)uVar2 < lVar24) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x101a7f838);
      (*pcVar4)();
    }
    uVar19 = *puVar27;
    if (uVar19 <= uVar23 - 2) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x101a7f83c);
      (*pcVar4)();
    }
    *plVar28 = lVar24;
    plVar28[1] = uVar2;
    lVar18 = uVar19 - uVar23;
    if (uVar19 < uVar23) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x101a7f840);
      (*pcVar4)();
    }
    uVar23 = uVar19 - 1;
    func_0x000107c610b8(puVar1,puVar1 + 2,lVar18 * 0x10);
    *puVar27 = uVar23;
  } while( true );
}



/* Entry: 101a7f8d4; end: 101a7fa33;  */

void FUN_101a7f8d4(ulong *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puStack_70;
  undefined *puStack_68;
  long lStack_60;
  ulong uStack_58;
  undefined1 auStack_48 [8];
  
  uVar4 = *param_1;
  func_0x000107c61174(param_2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = uVar4;
  func_0x000107c61558();
  if ((uVar1 & 1) == 0) {
    FUN_101a7c0b4();
  }
  uVar6 = *(ulong *)(uVar4 + 0x10);
  lStack_60 = uVar4 + 0x20;
  uVar1 = uVar6;
  uStack_58 = uVar6;
  func_0x000107c60574();
  if ((long)uVar1 < (long)uVar6) {
    puVar5 = (undefined *)(uVar6 >> 1);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (1 < uVar6) {
      uVar2 = 0;
      FUN_101a7c330(0,0x112d4ed88,&PTR_PTR_1126b15c8);
      puVar3 = puVar5;
      func_0x000107c60380(puVar5,uVar2);
      *(undefined **)(puVar3 + 0x10) = puVar5;
    }
    puStack_70 = puVar3 + 0x20;
    uVar2 = param_2;
    puStack_68 = puVar5;
    func_0x000107c61174(param_2);
    FUN_101a7e4a0(&puStack_70,auStack_48,&lStack_60,uVar1,uVar2);
    func_0x000107c61170(uVar2);
    *(undefined8 *)(puVar3 + 0x10) = 0;
    func_0x000107c61574(puVar3);
  }
  else if (uVar6 != 0) {
    FUN_101a7c834(0,uVar6,1,&lStack_60);
  }
  *param_1 = uVar4;
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 101a7fa34; end: 101a7fb5f;  */

void FUN_101a7fa34(long param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong *unaff_x20;
  ulong uVar9;
  ulong uVar10;
  
  lVar4 = param_2 - param_1;
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x101a7fb3c);
    (*pcVar6)();
  }
  uVar10 = *unaff_x20;
  uVar9 = uVar10 & 0xffffffffffffff8;
  puVar1 = (undefined8 *)(uVar9 + 0x20 + param_1 * 8);
  uVar7 = 0;
  FUN_101a7c330(0,0x112d4ed88,&PTR_PTR_1126b15c8);
  func_0x000107c61408(puVar1,lVar4,uVar7);
  lVar5 = param_3 - lVar4;
  if (SBORROW8(param_3,lVar4)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x101a7fb40);
    (*pcVar6)();
  }
  if (lVar5 != 0) {
    if (uVar10 >> 0x3e == 0) {
      uVar8 = *(ulong *)(uVar9 + 0x10);
      lVar4 = uVar8 - param_2;
    }
    else {
      uVar8 = uVar9;
      if ((uVar10 & 0x8000000000000000) != 0) {
        uVar8 = uVar10;
      }
      func_0x000107c60480();
      lVar4 = uVar8 - param_2;
    }
    if (SBORROW8(uVar8,param_2)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x101a7fb58);
      (*pcVar6)();
    }
    puVar2 = puVar1 + param_3;
    puVar3 = (undefined8 *)(uVar9 + 0x20 + param_2 * 8);
    if (puVar2 != puVar3 || puVar3 + lVar4 <= puVar2) {
      func_0x000107c610b8(puVar2,puVar3,lVar4 << 3);
    }
    if (uVar10 >> 0x3e == 0) {
      uVar8 = *(ulong *)(uVar9 + 0x10);
    }
    else {
      uVar8 = uVar9;
      if ((uVar10 & 0x8000000000000000) != 0) {
        uVar8 = uVar10;
      }
      func_0x000107c60480();
    }
    if (SCARRY8(uVar8,lVar5)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x101a7fb5c);
      (*pcVar6)();
    }
    *(ulong *)(uVar9 + 0x10) = uVar8 + lVar5;
  }
  if (0 < param_3) {
    *puVar1 = param_4;
    func_0x000107c61174(param_4);
    if (param_3 != 1) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x101a7fb60);
      (*pcVar6)();
    }
  }
  return;
}



/* Entry: 101a7fb60; end: 101a7fc37;  */

/* WARNING: Removing unreachable block (ram,0x000101a7fb5c) */

void FUN_101a7fb60(long param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *unaff_x20;
  ulong uVar10;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x101a7fc14);
    (*pcVar6)();
  }
  uVar10 = *unaff_x20;
  if (uVar10 >> 0x3e == 0) {
    uVar9 = *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar9 = uVar10 & 0xffffffffffffff8;
    if ((uVar10 & 0x8000000000000000) != 0) {
      uVar9 = uVar10;
    }
    func_0x000107c60480();
  }
  if ((long)uVar9 < param_2) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x101a7fc2c);
    (*pcVar6)();
  }
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x101a7fc30);
    (*pcVar6)();
  }
  lVar5 = 1 - (param_2 - param_1);
  if (!SBORROW8(1,param_2 - param_1)) {
    if (uVar10 >> 0x3e == 0) {
      uVar9 = *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar9 = uVar10 & 0xffffffffffffff8;
      if ((uVar10 & 0x8000000000000000) != 0) {
        uVar9 = uVar10;
      }
      func_0x000107c60480();
    }
    if (SCARRY8(uVar9,lVar5)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x101a7fc38);
      (*pcVar6)();
    }
    func_0x000100f63810(uVar9 + lVar5,1);
    lVar5 = param_2 - param_1;
    if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x101a7fb3c);
      (*pcVar6)();
    }
    uVar9 = *unaff_x20;
    uVar10 = uVar9 & 0xffffffffffffff8;
    puVar1 = (undefined8 *)(uVar10 + 0x20 + param_1 * 8);
    uVar7 = 0;
    FUN_101a7c330(0,0x112d4ed88,&PTR_PTR_1126b15c8);
    func_0x000107c61408(puVar1,lVar5,uVar7);
    lVar4 = 1 - lVar5;
    if (SBORROW8(1,lVar5)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x101a7fb40);
      (*pcVar6)();
    }
    if (lVar4 != 0) {
      if (uVar9 >> 0x3e == 0) {
        uVar8 = *(ulong *)(uVar10 + 0x10);
        lVar5 = uVar8 - param_2;
      }
      else {
        uVar8 = uVar10;
        if ((uVar9 & 0x8000000000000000) != 0) {
          uVar8 = uVar9;
        }
        func_0x000107c60480();
        lVar5 = uVar8 - param_2;
      }
      if (SBORROW8(uVar8,param_2)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x101a7fb58);
        (*pcVar6)();
      }
      puVar2 = puVar1 + 1;
      puVar3 = (undefined8 *)(uVar10 + 0x20 + param_2 * 8);
      if (puVar2 != puVar3 || puVar3 + lVar5 <= puVar2) {
        func_0x000107c610b8(puVar2,puVar3,lVar5 << 3);
      }
      if (uVar9 >> 0x3e == 0) {
        uVar8 = *(ulong *)(uVar10 + 0x10);
      }
      else {
        uVar8 = uVar10;
        if ((uVar9 & 0x8000000000000000) != 0) {
          uVar8 = uVar9;
        }
        func_0x000107c60480();
      }
      if (SCARRY8(uVar8,lVar4)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x101a7fb5c);
        (*pcVar6)();
      }
      *(ulong *)(uVar10 + 0x10) = uVar8 + lVar4;
    }
    *puVar1 = param_3;
    func_0x000107c61174(param_3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x101a7fc34);
  (*pcVar6)();
}



/* Entry: 101a7fc38; end: 101a7fd5f;  */

undefined1  [16] FUN_101a7fc38(ulong param_1,ulong param_2)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  
  puVar5 = &uStack_50;
  uVar3 = param_1;
  func_0x000107c42120();
  func_0x000107c61180();
  uVar10 = param_2;
  if (uVar3 != 0) {
    uVar4 = uVar3;
    func_0x000107c5faec();
    uVar10 = param_2;
    func_0x000107c61170(uVar3);
    uVar1 = uVar4 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar1 = param_2 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      uStack_50 = 0x20;
      uStack_48 = 0xe100000000000000;
      uStack_40 = uVar4;
      uStack_38 = param_2;
      func_0x000100e8b654();
      func_0x000107c601dc(&uStack_50,PTR___sSSN_11034da80,PTR___sSSN_11034da80,uVar3,uVar3);
      if (*(long *)((long)puVar5 + 0x10) == 0) {
        func_0x000107c6142c();
      }
      else {
        uVar4 = *(ulong *)((long)puVar5 + 0x20);
        uVar3 = *(ulong *)((long)puVar5 + 0x28);
        func_0x000107c61434(uVar3);
        func_0x000107c6142c(param_2);
        func_0x000107c6142c(puVar5);
        param_2 = uVar3;
      }
      goto LAB_101a7fd48;
    }
    func_0x000107c6142c(param_2);
  }
  func_0x000107c5db08();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar6 = 0x665f646e65697266;
    func_0x000107c5fadc(0x665f646e65697266,0xef6b6361626c6c61);
    uVar7 = 0xd00000000000001f;
    func_0x000107c5fadc(0xd00000000000001f,0x800000010efce0e0);
    uVar8 = 0;
    func_0x000107c5fe40(0);
    lVar9 = lVar6;
    uVar11 = uVar7;
    func_0x0001000f6108(lVar6,uVar7,uVar8);
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101a806ec);
      (*pcVar2)();
    }
    lVar6 = lVar9;
    func_0x000107c5faec(lVar9);
    func_0x000107c61170(lVar9);
    auVar13._8_8_ = uVar11;
    auVar13._0_8_ = lVar6;
    return auVar13;
  }
  uVar4 = param_1;
  func_0x000107c5faec();
  func_0x000107c61170(param_1);
  param_2 = uVar10;
LAB_101a7fd48:
  auVar12._8_8_ = param_2;
  auVar12._0_8_ = uVar4;
  return auVar12;
}



/* Entry: 101a7fd60; end: 101a7ff0b;  */

void FUN_101a7fd60(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  func_0x000107c3e9e8();
  func_0x000107c61180();
  if (param_1 != 0) {
    uVar1 = param_1;
    func_0x000107c3e978();
    func_0x000107c61180();
    if (uVar1 == 0) {
      func_0x000107c61170(param_1);
    }
    else {
      uVar2 = uVar1;
      func_0x000107c5faec();
      uVar4 = param_2;
      func_0x000107c61170(uVar1);
      uVar1 = param_1;
      func_0x000107c3ea1c();
      func_0x000107c61180();
      if (uVar1 == 0) {
        func_0x000107c61170(param_1);
      }
      else {
        uVar3 = uVar1;
        func_0x000107c5faec();
        func_0x000107c61170(uVar1);
        uVar1 = uVar2 & 0xffffffffffff;
        if ((param_2 & 0x2000000000000000) != 0) {
          uVar1 = param_2 >> 0x38 & 0xf;
        }
        if (uVar1 != 0) {
          uVar1 = uVar3 & 0xffffffffffff;
          if ((uVar4 & 0x2000000000000000) != 0) {
            uVar1 = uVar4 >> 0x38 & 0xf;
          }
          if (uVar1 != 0) {
            func_0x000107c602fc(0x41);
            func_0x000107c5fb78(0xd000000000000023,0x800000010efce040);
            func_0x000107c5fb78(uVar3,uVar4);
            func_0x000107c6142c(uVar4);
            func_0x000107c5fb78(0x2d,0xe100000000000000);
            func_0x000107c5fb78(uVar2,param_2);
            func_0x000107c6142c(param_2);
            func_0x000107c5fb78(0xd000000000000019,0x800000010efce070);
            func_0x000107c61170(param_1);
            return;
          }
        }
        func_0x000107c61170(param_1);
        func_0x000107c6142c(param_2);
        param_2 = uVar4;
      }
      func_0x000107c6142c(param_2);
    }
  }
  return;
}



/* Entry: 101a7ff0c; end: 101a7ff4f;  */

void FUN_101a7ff0c(undefined1 param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  
  puVar1 = *(undefined1 **)(unaff_x20 + 0x10);
  func_0x000107c49aac();
  *puVar1 = param_1;
  return;
}



/* Entry: 101a7ff50; end: 101a80217;  */

void FUN_101a7ff50(long param_1)

{
  long lVar1;
  long *plVar2;
  long unaff_x20;
  
  plVar2 = *(long **)(unaff_x20 + 0x10);
  func_0x000107c5085c();
  func_0x000107c61180();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x000107c4f898();
    func_0x000107c61170(param_1);
    *plVar2 = (long)(int)lVar1;
    *(undefined1 *)(plVar2 + 1) = 0;
  }
  return;
}



/* Entry: 101a80218; end: 101a803f3;  */

void FUN_101a80218(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  return;
}



/* Entry: 101a803f4; end: 101a803fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a803f4(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c3fa08();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101a803f0);
    (*pcVar1)();
  }
  lVar3 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c5b4b0();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = 0;
    FUN_101a7bf80();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(long *)(lVar5 + _DAT_112df3318) = lVar2;
    *(long *)(lVar5 + _DAT_112df3320) = lVar3;
    lStack_40 = lVar5;
    lStack_38 = lVar4;
    func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101a803f4);
  (*pcVar1)();
}



/* Entry: 101a803fc; end: 101a80433;  */

void FUN_101a803fc(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 101a80434; end: 101a8044f;  */

void FUN_101a80434(long param_1,long param_2)

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



/* Entry: 101a80450; end: 101a8046b;  */

/* WARNING: Possible PIC construction at 0x000101a8045c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101a80460) */

void FUN_101a80450(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101a8046c; end: 101a804b7;  */

void FUN_101a8046c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101a804b8; end: 101a80533;  */

void FUN_101a804b8(undefined8 param_1)

{
  if (lRam0000000112df3378 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e66c330);
  return;
}



/* Entry: 101a80534; end: 101a8060f;  */

void FUN_101a80534(undefined8 *param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  
  ppuVar2 = &puStack_70;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  uStack_50 = 0x101a80618;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_101a803fc;
  puStack_58 = &UNK_110436b70;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c6157c();
  func_0x000107c61574(unaff_x20);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  uVar3 = 0;
  func_0x0001002337f4(0);
  func_0x000107c610f8();
  func_0x000103fee2bc(puVar1,uVar3);
  *param_1 = puVar1;
  return;
}



/* Entry: 101a80610; end: 101a8061b;  */

void FUN_101a80610(long param_1,long param_2)

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



/* Entry: 101a8061c; end: 101a806eb;  */

undefined1  [16] FUN_101a8061c(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x665f646e65697266;
  func_0x000107c5fadc(0x665f646e65697266,0xef6b6361626c6c61);
  uVar3 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010efce0e0);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101a806ec);
  (*pcVar1)();
}



/* Entry: 101a806ec; end: 101a8077f;  */

void FUN_101a806ec(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x0001002347b0();
  func_0x000107c613fc();
  FUN_101a807e0(uStack_48,uStack_50,uStack_58);
  *param_1 = param_2;
  return;
}



/* Entry: 101a80780; end: 101a8078b;  */

void FUN_101a80780(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_48,uVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x0001002347b0();
  func_0x000107c613fc();
  FUN_101a807e0(uStack_48,uStack_50,uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 101a8078c; end: 101a807df;  */

undefined8 FUN_101a8078c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_101a807e0(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 101a807e0; end: 101a809bf;  */

void FUN_101a807e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  puVar1 = PTR_PTR_1126a8710;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c990);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  uVar2 = uVar3;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  return;
}



/* Entry: 101a809c0; end: 101a809fb;  */

void FUN_101a809c0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101a809fc; end: 101a80a4f;  */

void FUN_101a809fc(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101a80a50; end: 101a80a57;  */

void FUN_101a80a50(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101a80a58; end: 101a80aa7;  */

undefined8 FUN_101a80a58(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101a80aa8; end: 101a80aeb;  */

undefined1  [16] FUN_101a80aa8(void)

{
  return ZEXT816(0x110436c80);
}



/* Entry: 101a80aec; end: 101a80b13;  */

void FUN_101a80aec(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101a80b14; end: 101a80b1b;  */

undefined8 FUN_101a80b14(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}


