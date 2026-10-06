/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101b4e680; end: 101b4e6b3; -[SCSCStartupCompleteSnapAnyoneListenerScopedServicesSaberEntryPoint end] */

void FUN_101b4e680(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101b4e500();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101b4e6b4; end: 101b4e7d3;  */

void FUN_101b4e6b4(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 != 0x6e496e69676562 || param_3 != -0x1900000000000000) &&
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) == 0))
  {
    func_0x000107c602fc(0x15);
    func_0x000107c6142c(0xe000000000000000);
    func_0x000107c5fb78(param_2,param_3);
    func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                        "StartupCompleteSnapAnyoneListenerScopeGraphBridge/SCSCStartupCompleteSnapAnyoneListenerScopedServicesSaberEntryPoint.swift"
                        ,0x7a,2,0x2b,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101b4e7d4);
    (*pcVar1)();
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c52c38();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101b4e7d4; end: 101b4e87f; -[SCSCStartupCompleteSnapAnyoneListenerScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_101b4e7d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101b4e6b4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101b4e880; end: 101b4e8df; -[SCSCStartupCompleteSnapAnyoneListenerScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b4e880(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e03de0,0);
  *(undefined8 *)(param_1 + _DAT_112e03de8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101b4e8e0; end: 101b4e913;  */

void FUN_101b4e8e0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101b4e914; end: 101b4e94b; -[SCSCStartupCompleteSnapAnyoneListenerScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b4e914(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e03de0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e03de8));
  return;
}



/* Entry: 101b4e94c; end: 101b4e96b;  */

void FUN_101b4e94c(void)

{
  func_0x000107c61168(&PTR_PTR_1127fa1f8);
  return;
}



/* Entry: 101b4e96c; end: 101b4e9b7;  */

undefined8 FUN_101b4e96c(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_101b4e9b8(param_1,param_2);
  return unaff_x20;
}



/* Entry: 101b4e9b8; end: 101b4ea6f;  */

void FUN_101b4e9b8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_48;
  
  uVar1 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010effc510);
  uVar2 = param_1;
  func_0x000107c3ebd4();
  func_0x000107c61170(uVar1);
  if ((int)uVar2 == 0) {
    func_0x000107c615e8(param_1);
    func_0x000107c61574(param_2);
  }
  else {
    func_0x000100083b20(&uStack_48);
    func_0x000107c615e8(param_1);
    func_0x000107c61574(param_2);
    func_0x000107c61170(uStack_48);
  }
  return;
}



/* Entry: 101b4ea70; end: 101b4eab7;  */

void FUN_101b4ea70(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101b4eab8; end: 101b4eb67;  */

void FUN_101b4eab8(void)

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



/* Entry: 101b4eb68; end: 101b4eb6f;  */

void FUN_101b4eb68(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*param_1);
  return;
}



/* Entry: 101b4eb70; end: 101b4ebbb;  */

undefined8 * FUN_101b4eb70(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
  uVar1 = param_2[2];
  uVar3 = param_2[5];
  uVar2 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  param_1[5] = uVar3;
  param_1[4] = uVar2;
  param_1[6] = param_2[6];
  *(undefined2 *)(param_1 + 7) = *(undefined2 *)(param_2 + 7);
  func_0x000107c615f0();
  return param_1;
}



/* Entry: 101b4ebbc; end: 101b4ec47;  */

undefined8 * FUN_101b4ebbc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c615f0();
  func_0x000107c615e8(uVar1);
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)((long)param_1 + 9) = *(undefined1 *)((long)param_2 + 9);
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  *(undefined1 *)((long)param_1 + 0x39) = *(undefined1 *)((long)param_2 + 0x39);
  return param_1;
}



/* Entry: 101b4ec48; end: 101b4ec63;  */

void FUN_101b4ec48(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar6 = param_2[5];
  uVar5 = param_2[4];
  uVar7 = *(undefined8 *)((long)param_2 + 0x2a);
  *(undefined8 *)((long)param_1 + 0x32) = *(undefined8 *)((long)param_2 + 0x32);
  *(undefined8 *)((long)param_1 + 0x2a) = uVar7;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[5] = uVar6;
  param_1[4] = uVar5;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Entry: 101b4ec64; end: 101b4ecc7;  */

undefined8 * FUN_101b4ec64(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c615e8(uVar1);
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)((long)param_1 + 9) = *(undefined1 *)((long)param_2 + 9);
  uVar1 = param_2[2];
  uVar3 = param_2[5];
  uVar2 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  param_1[5] = uVar3;
  param_1[4] = uVar2;
  param_1[6] = param_2[6];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  *(undefined1 *)((long)param_1 + 0x39) = *(undefined1 *)((long)param_2 + 0x39);
  return param_1;
}



/* Entry: 101b4ecc8; end: 101b4ed6f;  */

int FUN_101b4ecc8(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x3a) != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101b4ed70; end: 101b4eed7;  */

void FUN_101b4ed70(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  
  iVar2 = (int)param_2;
  uVar7 = param_2;
  func_0x000107c426e0();
  iVar3 = iVar2;
  func_0x000107c42484();
  iVar4 = iVar2;
  func_0x000107c4ced8();
  iVar5 = iVar2;
  func_0x000107c4c828();
  iVar6 = iVar2;
  func_0x000107c420f8();
  iVar9 = iVar2;
  func_0x000107c5ba18();
  iVar8 = (int)((long)iVar9 * 0x18);
  if ((long)iVar9 * 0x18 - (long)iVar8 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101b4eec4);
    (*pcVar1)();
  }
  lVar11 = (long)iVar8 * 0x3c;
  iVar9 = (int)lVar11;
  if (lVar11 - iVar9 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101b4eec8);
    (*pcVar1)();
  }
  lVar11 = (long)iVar9 * 0x3c;
  iVar9 = (int)lVar11;
  if (lVar11 - iVar9 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101b4eecc);
    (*pcVar1)();
  }
  iVar8 = iVar2;
  func_0x000107c40778();
  iVar10 = (int)((long)iVar8 * 0x18);
  if ((long)iVar8 * 0x18 - (long)iVar10 == 0) {
    lVar11 = (long)iVar10 * 0x3c;
    iVar8 = (int)lVar11;
    if (lVar11 - iVar8 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101b4eed4);
      (*pcVar1)();
    }
    lVar11 = (long)iVar8 * 0x3c;
    iVar8 = (int)lVar11;
    if (lVar11 - iVar8 == 0) {
      func_0x000107c407a8();
      func_0x000107c5e058();
      *param_1 = param_3;
      *(char *)(param_1 + 1) = (char)uVar7;
      *(bool *)((long)param_1 + 9) = iVar3 == 2;
      param_1[2] = (double)iVar4;
      param_1[3] = (double)iVar5;
      param_1[4] = (double)iVar6;
      param_1[5] = (double)iVar9;
      param_1[6] = (double)iVar8;
      *(bool *)(param_1 + 7) = iVar2 == 2;
      *(char *)((long)param_1 + 0x39) = (char)param_2;
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101b4eed8);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101b4eed0);
  (*pcVar1)();
}



/* Entry: 101b4eed8; end: 101b4f057;  */

void FUN_101b4eed8(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11044a0b8;
  if (lRam0000000112e03ef8 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112e03ef8 = param_1;
  }
  return;
}



/* Entry: 101b4f058; end: 101b4f097;  */

void FUN_101b4f058(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e03f00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9d7634;
  func_0x000107c61520(&UNK_10d9d7634,&UNK_11044a1d8);
  puRam0000000112e03f00 = puVar1;
  return;
}



/* Entry: 101b4f098; end: 101b4f09b;  */

void FUN_101b4f098(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e03f08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9d769c;
  func_0x000107c61520(&UNK_10d9d769c,&UNK_11044a148);
  puRam0000000112e03f08 = puVar1;
  return;
}



/* Entry: 101b4f09c; end: 101b4f0db;  */

void FUN_101b4f09c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e03f08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9d769c;
  func_0x000107c61520(&UNK_10d9d769c,&UNK_11044a148);
  puRam0000000112e03f08 = puVar1;
  return;
}



/* Entry: 101b4f0dc; end: 101b4f117;  */

void FUN_101b4f0dc(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11044a1f8;
  if (lRam0000000112e03f10 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112e03f10 = param_1;
  }
  return;
}



/* Entry: 101b4f118; end: 101b4f15b;  */

void FUN_101b4f118(long param_1,long *param_2,long param_3)

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



/* Entry: 101b4f15c; end: 101b4f1a3;  */

undefined1 FUN_101b4f15c(undefined1 *param_1)

{
  return *param_1;
}



/* Entry: 101b4f1a4; end: 101b4f243;  */

void FUN_101b4f1a4(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 101b4f244; end: 101b4f253;  */

void FUN_101b4f244(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 101b4f254; end: 101b4f457;  */

undefined1  [16]
FUN_101b4f254(ulong param_1,long param_2,ulong param_3,long param_4,long param_5,undefined8 param_6)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined1 auVar7 [16];
  
  if ((param_1 & 1) == 0) {
    func_0x000107c61434(param_6);
    goto LAB_101b4f438;
  }
  if (param_3 != 0) {
    func_0x000107c42924();
    func_0x000107c61180();
    lVar2 = param_4;
    func_0x000107cf9d2c();
    func_0x000107c61180();
    func_0x000107c61170(param_4);
    if (lVar2 != 0) {
      lVar3 = lVar2;
      func_0x000107c5d98c();
      func_0x000107c61180();
      if (lVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101b4f458);
        (*pcVar1)();
      }
      uVar4 = 0;
      FUN_101b50580(0,0x112e03f30,&PTR_PTR_1126b14c8);
      lVar5 = lVar3;
      func_0x000107c5f9e8(lVar3,PTR___sSSN_11034da80,uVar4,PTR___sSSSHsWP_11034da90);
      func_0x000107c61170(lVar3);
      if (*(long *)(lVar5 + 0x10) == 0) {
        func_0x000107c61170(lVar2);
        func_0x000107c6142c(lVar5);
      }
      else {
        func_0x000107c61434(lVar5);
        func_0x000100029284();
        if ((param_3 & 1) == 0) {
          func_0x000107c61170(lVar2);
          func_0x000107c61430(lVar5,2);
        }
        else {
          lVar6 = *(long *)(*(long *)(lVar5 + 0x38) + param_2 * 8);
          func_0x000107c61174();
          param_6 = 2;
          func_0x000107c61430(lVar5,2);
          lVar3 = lVar6;
          func_0x000107c5b464();
          func_0x000107c61180();
          func_0x000107c61170(lVar6);
          if (lVar3 != 0) {
            lVar5 = lVar3;
            func_0x000107c42120();
            func_0x000107c61180();
            if (lVar5 != 0) {
              param_5 = lVar5;
              func_0x000107c5faec();
              func_0x000107c61170(lVar3);
              func_0x000107c61170(lVar2);
              func_0x000107c61170(lVar5);
              goto LAB_101b4f438;
            }
            lVar5 = lVar3;
            func_0x000107c5db08();
            func_0x000107c61180();
            if (lVar5 != 0) {
              param_5 = lVar5;
              func_0x000107c5faec();
              func_0x000107c61170(lVar5);
              func_0x000107c61170(lVar3);
              func_0x000107c61170(lVar2);
              goto LAB_101b4f438;
            }
            func_0x000107c61170(lVar3);
          }
          func_0x000107c61170(lVar2);
        }
      }
    }
  }
  param_5 = 0;
  param_6 = 0;
LAB_101b4f438:
  auVar7._8_8_ = param_6;
  auVar7._0_8_ = param_5;
  return auVar7;
}



/* Entry: 101b4f458; end: 101b4f467;  */

void FUN_101b4f458(void)

{
  return;
}



/* Entry: 101b4f468; end: 101b4f4eb;  */

void FUN_101b4f468(void)

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



/* Entry: 101b4f4ec; end: 101b4f69f;  */

void FUN_101b4f4ec(long *param_1,long *param_2,char param_3)

{
  code *pcVar1;
  long lVar2;
  undefined1 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  
  if ((char)param_2[10] == '\0') {
    uVar3 = 2;
    if (*param_2 < 2) {
      uVar3 = 0;
    }
  }
  else if ((char)param_2[10] == '\x01') {
    uVar3 = 3;
    if (*param_2 < 2) {
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 4;
  }
  if (param_3 != '\0') {
    lVar2 = param_2[9];
    if (lVar2 == 0) {
      lVar6 = param_2[1];
      lVar4 = param_2[2];
      func_0x000107c61434(lVar4);
    }
    else {
      lVar6 = param_2[8];
      lVar4 = lVar2;
    }
    lVar8 = *param_2 + -1;
    if (lVar8 == 0) {
      uVar10 = 0;
      lVar9 = 0;
      lVar7 = 0;
      uVar11 = 0xff;
      lVar5 = 0;
    }
    else {
      if (SBORROW8(*param_2,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101b4f6a0);
        (*pcVar1)();
      }
      lVar9 = 0;
      lVar7 = 0;
      uVar11 = 0xff;
      uVar10 = 1;
      lVar5 = 0;
    }
    goto LAB_101b4f660;
  }
  lVar7 = *param_2 + -1;
  if (lVar7 != 0 && 0 < *param_2) {
    lVar2 = param_2[9];
    if (lVar2 == 0) {
      lVar9 = param_2[1];
      lVar5 = param_2[2];
      func_0x000107c61434(lVar5);
    }
    else {
      lVar9 = param_2[8];
      lVar5 = lVar2;
    }
    lVar6 = 0;
    lVar4 = 0;
    lVar8 = 0;
    uVar11 = 1;
    uVar10 = 0xff;
    goto LAB_101b4f660;
  }
  if ((*(byte *)(param_2 + 3) & 1) == 0) {
    lVar4 = 0;
LAB_101b4f648:
    lVar6 = 0;
    uVar10 = 0xff;
  }
  else {
    lVar4 = param_2[9];
    if (lVar4 == 0) goto LAB_101b4f648;
    lVar6 = param_2[8];
    func_0x000107c61434(lVar4);
    uVar10 = 0;
  }
  lVar8 = 0;
  lVar7 = 0;
  uVar11 = 0;
  lVar9 = param_2[1];
  lVar2 = param_2[2];
  lVar5 = lVar2;
LAB_101b4f660:
  func_0x000107c61434(lVar2);
  *param_1 = lVar9;
  param_1[1] = lVar5;
  param_1[2] = lVar7;
  *(undefined1 *)(param_1 + 3) = uVar11;
  param_1[4] = lVar6;
  param_1[5] = lVar4;
  param_1[6] = lVar8;
  *(undefined1 *)(param_1 + 7) = uVar10;
  *(undefined1 *)((long)param_1 + 0x39) = uVar3;
  return;
}



/* Entry: 101b4f6a0; end: 101b4fcd7;  */

undefined4 FUN_101b4f6a0(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  char cVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  ulong uVar20;
  code *pcVar21;
  long lVar22;
  undefined *puVar23;
  ulong uVar24;
  undefined8 uVar25;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined2 uStack_7a;
  
  uStack_7a = 0;
  if (param_1 >> 0x3e == 0) {
    uVar24 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar24 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar24 = param_1;
    }
    func_0x000107c60480();
  }
  if (uVar24 == 0) {
    puStack_d0 = (undefined *)0x0;
    uStack_c8 = 0;
    puStack_e0 = (undefined *)0x0;
    uStack_d8 = 0;
    puStack_f0 = (undefined *)0x0;
    uStack_e8 = 0;
    puVar23 = (undefined *)0x0;
    pcVar21 = (code *)0x0;
  }
  else {
    pcVar21 = (code *)0x0;
    puStack_f0 = (undefined *)0x0;
    uStack_e8 = 0;
    puStack_e0 = (undefined *)0x0;
    uStack_d8 = 0;
    puStack_d0 = (undefined *)0x0;
    uStack_c8 = 0;
    lVar22 = 4;
    puVar6 = (undefined *)0x0;
    do {
      uVar20 = lVar22 - 4;
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar20) {
                    /* WARNING: Does not return */
          pcVar21 = (code *)SoftwareBreakpoint(1,0x101b4fc60);
          (*pcVar21)();
        }
        uVar4 = *(ulong *)(param_1 + lVar22 * 8);
        func_0x000107c61174();
      }
      else {
        uVar4 = uVar20;
        func_0x00010117ea28(uVar20,param_1);
      }
      uVar1 = lVar22 - 3;
      if (SCARRY8(uVar20,1)) {
                    /* WARNING: Does not return */
        pcVar21 = (code *)SoftwareBreakpoint(1,0x101b4fc5c);
        (*pcVar21)();
      }
      uVar20 = uVar4;
      func_0x000107c3d15c();
      func_0x000107c61180();
      if (uVar20 == 0) {
LAB_101b4f724:
        func_0x000107c61170(uVar4);
        puVar23 = puVar6;
      }
      else {
        uVar5 = uVar20;
        func_0x000107c4cda8();
        func_0x000107c61180();
        func_0x000107c61170(uVar20);
        if (uVar5 == 0) goto LAB_101b4f724;
        puVar23 = &UNK_11044a290;
        func_0x000107c613fc(&UNK_11044a290,0x18,7);
        *(long *)(puVar23 + 0x10) = (long)&uStack_7a + 1;
        func_0x000100cc70e8(pcVar21,puVar6);
        puVar6 = &UNK_11044a2b8;
        func_0x000107c613fc(&UNK_11044a2b8,0x20,7);
        *(code **)(puVar6 + 0x10) = FUN_101b51e6c;
        *(undefined **)(puVar6 + 0x18) = puVar23;
        puVar2 = PTR___NSConcreteStackBlock_11034bd00;
        pcStack_90 = FUN_101b50534;
        puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a8 = 0x42000000;
        uStack_a0 = 0x101b5b8ac;
        puStack_98 = &UNK_11044a2d0;
        ppuVar7 = &puStack_b0;
        puStack_88 = puVar6;
        func_0x000107c60bc4(ppuVar7);
        func_0x000107c61574(puStack_88);
        pcStack_90 = FUN_101b4f458;
        puStack_88 = (undefined *)0x0;
        puStack_b0 = puVar2;
        uStack_a8 = 0x42000000;
        uStack_a0 = 0x101b5b8b0;
        puStack_98 = &UNK_11044a2f8;
        ppuVar8 = &puStack_b0;
        func_0x000107c60bc4(ppuVar8);
        func_0x000107c61574(puStack_88);
        pcStack_90 = (code *)0x101b4f45c;
        puStack_88 = (undefined *)0x0;
        puStack_b0 = puVar2;
        uStack_a8 = 0x42000000;
        uStack_a0 = 0x101b5b8b4;
        puStack_98 = &UNK_11044a320;
        ppuVar9 = &puStack_b0;
        func_0x000107c60bc4();
        func_0x000107c61574(puStack_88);
        pcStack_90 = (code *)0x101b4f460;
        puStack_88 = (undefined *)0x0;
        puStack_b0 = puVar2;
        uStack_a8 = 0x42000000;
        uStack_a0 = 0x101b5b8b8;
        puStack_98 = &UNK_11044a348;
        ppuVar10 = &puStack_b0;
        func_0x000107c60bc4();
        func_0x000107c61574(puStack_88);
        puVar6 = &UNK_11044a380;
        func_0x000107c613fc(&UNK_11044a380,0x18,7);
        *(undefined2 **)(puVar6 + 0x10) = &uStack_7a;
        func_0x000100cc70e8(uStack_e8,puStack_f0);
        puVar11 = &UNK_11044a3a8;
        func_0x000107c613fc(&UNK_11044a3a8,0x20,7);
        *(undefined8 *)(puVar11 + 0x10) = 0x101b50558;
        *(undefined **)(puVar11 + 0x18) = puVar6;
        pcStack_90 = (code *)0x101b50568;
        puStack_b0 = puVar2;
        uStack_a8 = 0x42000000;
        uStack_a0 = 0x101b5b8bc;
        puStack_98 = &UNK_11044a3c0;
        ppuVar12 = &puStack_b0;
        puStack_88 = puVar11;
        func_0x000107c60bc4(ppuVar12);
        func_0x000107c61574(puStack_88);
        pcStack_90 = (code *)0x101b4f464;
        puStack_88 = (undefined *)0x0;
        puStack_b0 = puVar2;
        uStack_a8 = 0x42000000;
        uStack_a0 = 0x101b5b8c0;
        puStack_98 = &UNK_11044a3e8;
        ppuVar13 = &puStack_b0;
        func_0x000107c60bc4();
        func_0x000107c61574(puStack_88);
        puVar11 = &UNK_11044a420;
        func_0x000107c613fc(&UNK_11044a420,0x18,7);
        *(undefined2 **)(puVar11 + 0x10) = &uStack_7a;
        func_0x000100cc70e8(uStack_d8,puStack_e0);
        puVar14 = &UNK_11044a448;
        func_0x000107c613fc(&UNK_11044a448,0x20,7);
        *(undefined8 *)(puVar14 + 0x10) = 0x101b51e70;
        *(undefined **)(puVar14 + 0x18) = puVar11;
        pcStack_90 = (code *)0x101b50570;
        puStack_b0 = puVar2;
        uStack_a8 = 0x42000000;
        uStack_a0 = 0x101b5b8c4;
        puStack_98 = &UNK_11044a460;
        ppuVar15 = &puStack_b0;
        puStack_88 = puVar14;
        func_0x000107c60bc4();
        func_0x000107c61574(puStack_88);
        puVar14 = &UNK_11044a498;
        func_0x000107c613fc(&UNK_11044a498,0x18,7);
        *(undefined2 **)(puVar14 + 0x10) = &uStack_7a;
        func_0x000100cc70e8(uStack_c8,puStack_d0);
        puVar16 = &UNK_11044a4c0;
        func_0x000107c613fc(&UNK_11044a4c0,0x20,7);
        *(undefined8 *)(puVar16 + 0x10) = 0x101b51e74;
        *(undefined **)(puVar16 + 0x18) = puVar14;
        pcStack_90 = (code *)0x101b50578;
        puStack_b0 = puVar2;
        uStack_a8 = 0x42000000;
        uStack_a0 = 0x101b5b8c8;
        puStack_98 = &UNK_11044a4d8;
        ppuVar17 = &puStack_b0;
        puStack_88 = puVar16;
        func_0x000107c60bc4();
        func_0x000107c61574(puStack_88);
        func_0x000107c4c710(uVar5);
        func_0x000107c61170(uVar4);
        func_0x000107c61170(uVar5);
        func_0x000107c60bd0(ppuVar17);
        func_0x000107c60bd0(ppuVar15);
        func_0x000107c60bd0(ppuVar13);
        func_0x000107c60bd0(ppuVar12);
        func_0x000107c60bd0(ppuVar10);
        func_0x000107c60bd0(ppuVar9);
        func_0x000107c60bd0(ppuVar8);
        func_0x000107c60bd0(ppuVar7);
        puStack_f0 = puVar6;
        puStack_e0 = puVar11;
        puStack_d0 = puVar14;
        if (uStack_7a._1_1_ == '\x01') {
          pcVar21 = FUN_101b51e6c;
          uVar25 = 0x101b50558;
          uStack_e8 = 0x101b50558;
          uVar19 = 0x101b51e70;
          uStack_d8 = 0x101b51e70;
          uVar18 = 0x101b51e74;
          uStack_c8 = 0x101b51e74;
          if ((uStack_7a & 1) != 0) goto LAB_101b4fc0c;
        }
        else {
          pcVar21 = FUN_101b51e6c;
          uStack_e8 = 0x101b50558;
          uStack_d8 = 0x101b51e70;
          uStack_c8 = 0x101b51e74;
        }
      }
      lVar22 = lVar22 + 1;
      puVar6 = puVar23;
    } while (uVar1 != uVar24);
    uVar18 = uStack_c8;
    uVar19 = uStack_d8;
    puVar6 = puStack_f0;
    puVar14 = puStack_d0;
    uVar25 = uStack_e8;
    puVar11 = puStack_e0;
    if (uStack_7a._1_1_ == '\x01') {
LAB_101b4fc0c:
      cVar3 = (char)uStack_7a;
      func_0x000100cc70e8(pcVar21,puVar23);
      func_0x000100cc70e8(uVar25,puVar6);
      func_0x000100cc70e8(uVar19,puVar11);
      func_0x000100cc70e8(uVar18,puVar14);
      if (cVar3 == '\0') {
        return 0;
      }
      return 2;
    }
  }
  func_0x000100cc70e8(pcVar21,puVar23);
  func_0x000100cc70e8(uStack_e8,puStack_f0);
  func_0x000100cc70e8(uStack_d8,puStack_e0);
  func_0x000100cc70e8(uStack_c8,puStack_d0);
  return 1;
}



/* Entry: 101b4fcd8; end: 101b4ff77;  */

void FUN_101b4fcd8(ulong *param_1,ulong param_2,ulong param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  
  if (param_2 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_2 & 0xffffffffffffff8;
    if ((param_2 & 0x8000000000000000) != 0) {
      uVar2 = param_2;
    }
    func_0x000107c60480();
  }
  if (uVar2 == 0) {
    FUN_101b504f4();
    func_0x000107c613f8(&UNK_11044a580,uVar2,0,0);
    func_0x000107c61654();
    return;
  }
  if ((param_2 & 0xc000000000000001) == 0) {
    if (*(long *)((param_2 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101b4ff78);
      (*pcVar1)();
    }
    uVar2 = *(ulong *)(param_2 + 0x20);
    func_0x000107c61174();
  }
  else {
    uVar2 = 0;
    param_3 = param_2;
    func_0x00010117ea28();
  }
  uVar3 = uVar2;
  func_0x000107c42924();
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x000107cf9e44();
  func_0x000107c61170(uVar3);
  uVar3 = uVar2;
  func_0x000107c42924();
  func_0x000107c61180();
  uVar5 = uVar3;
  if ((int)uVar4 == 0) {
    func_0x000107cfa164();
  }
  else {
    func_0x000107cfa440();
  }
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  uVar3 = uVar5;
  func_0x000107c5faec();
  uVar13 = param_3;
  func_0x000107c61170(uVar5);
  uVar5 = uVar2;
  func_0x000107c3d15c();
  func_0x000107c61180();
  if (uVar5 != 0) {
    uVar6 = uVar5;
    func_0x000107c4cda8();
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    if (uVar6 != 0) {
      uVar5 = uVar6;
      func_0x000107cfe8cc();
      func_0x000107c61180();
      if (uVar5 != 0) {
        uVar12 = uVar5;
        func_0x000107c5faec();
        func_0x000107c61170(uVar5);
        func_0x000107c61170(uVar6);
        goto LAB_101b4fe28;
      }
      func_0x000107c61170(uVar6);
    }
  }
  uVar12 = 0;
  uVar13 = 0;
LAB_101b4fe28:
  uVar7 = uVar4 & 0xffffffff;
  uVar6 = uVar12;
  FUN_101b4f254(uVar7,uVar12,uVar13,uVar2,uVar3,param_3);
  uVar5 = param_2;
  uVar9 = uVar6;
  FUN_101b4f6a0();
  if (param_2 >> 0x3e == 0) {
    uVar11 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar11 = param_2 & 0xffffffffffffff8;
    if ((param_2 & 0x8000000000000000) != 0) {
      uVar11 = param_2;
    }
    func_0x000107c60480();
  }
  uVar10 = uVar2;
  func_0x000107c3d15c();
  func_0x000107c61180();
  if (uVar10 == 0) {
    func_0x000107c61170(uVar2);
    uVar10 = 0;
    uVar9 = 0;
  }
  else {
    uVar8 = uVar10;
    func_0x000107c40674();
    func_0x000107c61180();
    func_0x000107c61170(uVar10);
    uVar10 = uVar8;
    func_0x000107c5faec();
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar2);
  }
  *param_1 = uVar11;
  param_1[1] = uVar3;
  param_1[2] = param_3;
  *(char *)(param_1 + 3) = (char)uVar4;
  param_1[4] = uVar10;
  param_1[5] = uVar9;
  param_1[6] = uVar12;
  param_1[7] = uVar13;
  param_1[8] = uVar7;
  param_1[9] = uVar6;
  *(char *)(param_1 + 10) = (char)uVar5;
  return;
}



/* Entry: 101b4ff78; end: 101b502f3;  */

undefined1  [16] FUN_101b4ff78(undefined8 *param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  uVar3 = *param_1;
  uVar5 = param_1[1];
  lVar8 = param_1[2];
  if (*(char *)(param_1 + 3) == '\x01') {
    uVar6 = uVar3;
    uVar7 = uVar5;
    FUN_101b504ec(uVar3,uVar5,lVar8);
    if (lVar8 < 2) {
      func_0x000101b5ba4c();
      lVar8 = 0x112d36008;
      func_0x0001000285a8(0x112d36008,&UNK_10d900720);
      func_0x000107c613fc();
      *(undefined8 *)(lVar8 + 0x18) = 2;
      *(undefined8 *)(lVar8 + 0x10) = 1;
      *(undefined **)(lVar8 + 0x38) = PTR___sSSN_11034da80;
      lVar4 = lVar8;
      func_0x00010075bbf0();
      *(long *)(lVar8 + 0x40) = lVar4;
      *(undefined8 *)(lVar8 + 0x20) = uVar3;
      *(undefined8 *)(lVar8 + 0x28) = uVar5;
      uVar3 = uVar6;
    }
    else {
      func_0x000101b5bb18();
      lVar8 = 0x112d36008;
      func_0x0001000285a8(0x112d36008,&UNK_10d900720);
      func_0x000107c613fc();
      *(undefined8 *)(lVar8 + 0x18) = 4;
      *(undefined8 *)(lVar8 + 0x10) = 2;
      *(undefined **)(lVar8 + 0x38) = PTR___sSSN_11034da80;
      lVar4 = lVar8;
      func_0x00010075bbf0();
      *(long *)(lVar8 + 0x40) = lVar4;
      *(undefined8 *)(lVar8 + 0x20) = uVar3;
      *(undefined8 *)(lVar8 + 0x28) = uVar5;
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8();
      func_0x000107c46ed0();
      uVar3 = 0;
      FUN_101b50580(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      *(undefined8 *)(lVar8 + 0x60) = uVar3;
      FUN_101b50498();
      *(undefined8 *)(lVar8 + 0x68) = uVar3;
      *(undefined **)(lVar8 + 0x48) = puVar2;
      uVar3 = uVar6;
    }
    uVar5 = uVar7;
    func_0x000107c5fb00(uVar3,uVar7,lVar8);
    func_0x000107c6142c(uVar7);
  }
  else {
    if (*(char *)(param_1 + 3) == -1) {
      lVar4 = -0x2fffffffffffffe3;
      func_0x000107c5fadc(0xd00000000000001d,0x800000010efffe40);
      uVar5 = 0xd00000000000001c;
      func_0x000107c5fadc(0xd00000000000001c,0x800000010efffb80);
      uVar6 = 0;
      func_0x000107c5fe40(0);
      lVar8 = lVar4;
      uVar3 = uVar5;
      func_0x0001000f6108(lVar4,uVar5,uVar6);
      func_0x000107c61180();
      func_0x000107c61170(lVar4);
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uVar6);
      if (lVar8 != 0) {
        lVar4 = lVar8;
        func_0x000107c5faec(lVar8);
        func_0x000107c61170(lVar8);
        auVar10._8_8_ = uVar3;
        auVar10._0_8_ = lVar4;
        return auVar10;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101b5ba4c);
      (*pcVar1)();
    }
    FUN_101b504ec(uVar3,uVar5,lVar8);
  }
  auVar9._8_8_ = uVar5;
  auVar9._0_8_ = uVar3;
  return auVar9;
}



/* Entry: 101b502f4; end: 101b50423;  */

undefined1  [16]
FUN_101b502f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  
  bVar1 = *(byte *)(param_4 + 0x39);
  uVar2 = param_1;
  uVar7 = param_2;
  if (bVar1 < 3) {
    if (1 < bVar1) {
      func_0x000101b5c640();
      goto LAB_101b50344;
    }
  }
  else if (bVar1 != 3) {
    func_0x000101b5c7d8();
    goto LAB_101b50344;
  }
  func_0x000101b5c70c();
LAB_101b50344:
  lVar3 = 0x112d36008;
  func_0x0001000285a8(0x112d36008,&UNK_10d900720);
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x18) = 4;
  *(undefined8 *)(lVar3 + 0x10) = 2;
  *(undefined **)(lVar3 + 0x38) = PTR___sSSN_11034da80;
  lVar4 = lVar3;
  func_0x00010075bbf0();
  *(long *)(lVar3 + 0x40) = lVar4;
  *(undefined8 *)(lVar3 + 0x20) = param_1;
  *(undefined8 *)(lVar3 + 0x28) = param_2;
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c61434(param_2);
  func_0x000107c46ed0();
  uVar6 = 0;
  FUN_101b50580(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  *(undefined8 *)(lVar3 + 0x60) = uVar6;
  FUN_101b50498();
  *(undefined8 *)(lVar3 + 0x68) = uVar6;
  *(undefined **)(lVar3 + 0x48) = puVar5;
  uVar6 = uVar7;
  func_0x000107c5fb00(uVar2,uVar7,lVar3);
  func_0x000107c6142c(uVar7);
  auVar8._8_8_ = uVar6;
  auVar8._0_8_ = uVar2;
  return auVar8;
}



/* Entry: 101b50424; end: 101b50497;  */

undefined1  [16] FUN_101b50424(long param_1)

{
  byte bVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  uVar9 = *(undefined8 *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0x38) != '\x01') {
    if (*(char *)(param_1 + 0x38) != -1) {
      bVar1 = *(byte *)(param_1 + 0x39);
      uVar7 = uVar5;
      uVar8 = uVar9;
      if (bVar1 < 2) {
        if (bVar1 == 0) {
          func_0x000101b5bfe0();
        }
        else {
          func_0x000101b5c0ac();
        }
      }
      else if (bVar1 == 2) {
        func_0x000101b5c178();
      }
      else if (bVar1 == 3) {
        func_0x000101b5c244();
      }
      else {
        func_0x000101b5c310();
      }
      lVar3 = 0x112d36008;
      func_0x0001000285a8(0x112d36008,&UNK_10d900720);
      func_0x000107c613fc();
      *(undefined8 *)(lVar3 + 0x18) = 2;
      *(undefined8 *)(lVar3 + 0x10) = 1;
      *(undefined **)(lVar3 + 0x38) = PTR___sSSN_11034da80;
      lVar6 = lVar3;
      func_0x00010075bbf0();
      *(long *)(lVar3 + 0x40) = lVar6;
      *(undefined8 *)(lVar3 + 0x20) = uVar5;
      *(undefined8 *)(lVar3 + 0x28) = uVar9;
      func_0x000107c61434(uVar9);
      uVar5 = uVar8;
      func_0x000107c5fb00(uVar7,uVar8,lVar3);
      func_0x000107c6142c(uVar8);
      auVar10._8_8_ = uVar5;
      auVar10._0_8_ = uVar7;
      return auVar10;
    }
    bVar1 = *(byte *)(param_1 + 0x39);
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        lVar6 = -0x2fffffffffffffe6;
        func_0x000107c5fadc(0xd00000000000001a,0x800000010efffba0);
        uVar5 = 0xd00000000000001c;
        func_0x000107c5fadc(0xd00000000000001c,0x800000010efffb80);
        uVar7 = 0;
        func_0x000107c5fe40(0);
        lVar3 = lVar6;
        uVar9 = uVar5;
        func_0x0001000f6108(lVar6,uVar5,uVar7);
        func_0x000107c61180();
        func_0x000107c61170(lVar6);
        func_0x000107c61170(uVar5);
        func_0x000107c61170(uVar7);
        if (lVar3 != 0) {
          lVar6 = lVar3;
          func_0x000107c5faec(lVar3);
          func_0x000107c61170(lVar3);
          auVar14._8_8_ = uVar9;
          auVar14._0_8_ = lVar6;
          return auVar14;
        }
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101b5bd7c);
        (*pcVar2)();
      }
      lVar6 = -0x2fffffffffffffe6;
      func_0x000107c5fadc(0xd00000000000001a,0x800000010efffb60);
      uVar5 = 0xd00000000000001c;
      func_0x000107c5fadc(0xd00000000000001c,0x800000010efffb80);
      uVar7 = 0;
      func_0x000107c5fe40(0);
      lVar3 = lVar6;
      uVar9 = uVar5;
      func_0x0001000f6108(lVar6,uVar5,uVar7);
      func_0x000107c61180();
      func_0x000107c61170(lVar6);
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uVar7);
      if (lVar3 != 0) {
        lVar6 = lVar3;
        func_0x000107c5faec(lVar3);
        func_0x000107c61170(lVar3);
        auVar13._8_8_ = uVar9;
        auVar13._0_8_ = lVar6;
        return auVar13;
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101b5bcb0);
      (*pcVar2)();
    }
    if (bVar1 == 2) {
      lVar6 = -0x2fffffffffffffe5;
      func_0x000107c5fadc(0xd00000000000001b,0x800000010efffbc0);
      uVar5 = 0xd00000000000001c;
      func_0x000107c5fadc(0xd00000000000001c,0x800000010efffb80);
      uVar7 = 0;
      func_0x000107c5fe40(0);
      lVar3 = lVar6;
      uVar9 = uVar5;
      func_0x0001000f6108(lVar6,uVar5,uVar7);
      func_0x000107c61180();
      func_0x000107c61170(lVar6);
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uVar7);
      if (lVar3 != 0) {
        lVar6 = lVar3;
        func_0x000107c5faec(lVar3);
        func_0x000107c61170(lVar3);
        auVar15._8_8_ = uVar9;
        auVar15._0_8_ = lVar6;
        return auVar15;
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101b5be48);
      (*pcVar2)();
    }
    if (bVar1 == 3) {
      lVar6 = -0x2fffffffffffffe5;
      func_0x000107c5fadc(0xd00000000000001b,0x800000010efffbe0);
      uVar5 = 0xd00000000000001c;
      func_0x000107c5fadc(0xd00000000000001c,0x800000010efffb80);
      uVar7 = 0;
      func_0x000107c5fe40(0);
      lVar3 = lVar6;
      uVar9 = uVar5;
      func_0x0001000f6108(lVar6,uVar5,uVar7);
      func_0x000107c61180();
      func_0x000107c61170(lVar6);
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uVar7);
      if (lVar3 != 0) {
        lVar6 = lVar3;
        func_0x000107c5faec(lVar3);
        func_0x000107c61170(lVar3);
        auVar16._8_8_ = uVar9;
        auVar16._0_8_ = lVar6;
        return auVar16;
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101b5bf14);
      (*pcVar2)();
    }
    lVar3 = -0x2fffffffffffffdb;
    func_0x000107c5fadc(0xd000000000000025,0x800000010efffc00);
    uVar9 = 0xd00000000000001c;
    func_0x000107c5fadc(0xd00000000000001c,0x800000010efffb80);
    uVar7 = 0;
    func_0x000107c5fe40(0);
    lVar6 = lVar3;
    uVar5 = uVar9;
    func_0x0001000f6108(lVar3,uVar9,uVar7);
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar7);
    if (lVar6 != 0) {
      lVar3 = lVar6;
      func_0x000107c5faec(lVar6);
      func_0x000107c61170(lVar6);
      auVar17._8_8_ = uVar5;
      auVar17._0_8_ = lVar3;
      return auVar17;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101b5bfe0);
    (*pcVar2)();
  }
  if (1 < *(long *)(param_1 + 0x30)) {
    bVar1 = *(byte *)(param_1 + 0x39);
    uVar7 = uVar5;
    uVar8 = uVar9;
    if (bVar1 < 3) {
      if (1 < bVar1) {
        func_0x000101b5c640();
        goto LAB_101b50344;
      }
    }
    else if (bVar1 != 3) {
      func_0x000101b5c7d8();
      goto LAB_101b50344;
    }
    func_0x000101b5c70c();
LAB_101b50344:
    lVar3 = 0x112d36008;
    func_0x0001000285a8(0x112d36008,&UNK_10d900720);
    func_0x000107c613fc();
    *(undefined8 *)(lVar3 + 0x18) = 4;
    *(undefined8 *)(lVar3 + 0x10) = 2;
    *(undefined **)(lVar3 + 0x38) = PTR___sSSN_11034da80;
    lVar6 = lVar3;
    func_0x00010075bbf0();
    *(long *)(lVar3 + 0x40) = lVar6;
    *(undefined8 *)(lVar3 + 0x20) = uVar5;
    *(undefined8 *)(lVar3 + 0x28) = uVar9;
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c61434(uVar9);
    func_0x000107c46ed0();
    uVar5 = 0;
    FUN_101b50580(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    *(undefined8 *)(lVar3 + 0x60) = uVar5;
    FUN_101b50498();
    *(undefined8 *)(lVar3 + 0x68) = uVar5;
    *(undefined **)(lVar3 + 0x48) = puVar4;
    uVar5 = uVar8;
    func_0x000107c5fb00(uVar7,uVar8,lVar3);
    func_0x000107c6142c(uVar8);
    auVar12._8_8_ = uVar5;
    auVar12._0_8_ = uVar7;
    return auVar12;
  }
  bVar1 = *(byte *)(param_1 + 0x39);
  uVar7 = uVar5;
  uVar8 = uVar9;
  if (bVar1 < 3) {
    if (1 < bVar1) {
      func_0x000101b5c3dc();
      goto LAB_101b50260;
    }
  }
  else if (bVar1 != 3) {
    func_0x000101b5c574();
    goto LAB_101b50260;
  }
  func_0x000101b5c4a8();
LAB_101b50260:
  lVar3 = 0x112d36008;
  func_0x0001000285a8(0x112d36008,&UNK_10d900720);
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x18) = 2;
  *(undefined8 *)(lVar3 + 0x10) = 1;
  *(undefined **)(lVar3 + 0x38) = PTR___sSSN_11034da80;
  lVar6 = lVar3;
  func_0x00010075bbf0();
  *(long *)(lVar3 + 0x40) = lVar6;
  *(undefined8 *)(lVar3 + 0x20) = uVar5;
  *(undefined8 *)(lVar3 + 0x28) = uVar9;
  func_0x000107c61434(uVar9);
  uVar5 = uVar8;
  func_0x000107c5fb00(uVar7,uVar8,lVar3);
  func_0x000107c6142c(uVar8);
  auVar11._8_8_ = uVar5;
  auVar11._0_8_ = uVar7;
  return auVar11;
}



/* Entry: 101b50498; end: 101b504eb;  */

void FUN_101b50498(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112dc2100 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_101b50580(0xff,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  puVar2 = PTR___sSo8NSObjectCs7CVarArg10ObjectiveCMc_11034fac8;
  func_0x000107c61520(PTR___sSo8NSObjectCs7CVarArg10ObjectiveCMc_11034fac8,uVar1);
  puRam0000000112dc2100 = puVar2;
  return;
}



/* Entry: 101b504ec; end: 101b504f3;  */

void FUN_101b504ec(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
  return;
}



/* Entry: 101b504f4; end: 101b50533;  */

void FUN_101b504f4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e03f28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9d7878;
  func_0x000107c61520(&UNK_10d9d7878,&UNK_11044a580);
  puRam0000000112e03f28 = puVar1;
  return;
}



/* Entry: 101b50534; end: 101b5057f;  */

void FUN_101b50534(undefined8 param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))
            (param_1,*(code **)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 101b50580; end: 101b505bf;  */

void FUN_101b50580(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101b505c0; end: 101b506ab;  */

uint FUN_101b505c0(uint *param_1,int param_2)

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



/* Entry: 101b506ac; end: 101b506eb;  */

/* WARNING: Possible PIC construction at 0x000101b506c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b506d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b506c4) */
/* WARNING: Removing unreachable block (ram,0x000101b506d4) */

void FUN_101b506ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 101b506ec; end: 101b5076f;  */

undefined8 * FUN_101b506ec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 4);
  uVar2 = param_2[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar2;
  uVar3 = param_2[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar3;
  uVar4 = param_2[10];
  param_1[9] = param_2[9];
  param_1[10] = uVar4;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar4);
  return param_1;
}



/* Entry: 101b50770; end: 101b5084b;  */

undefined8 * FUN_101b50770(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  *(undefined1 *)((long)param_1 + 0x21) = *(undefined1 *)((long)param_2 + 0x21);
  param_1[5] = param_2[5];
  uVar1 = param_1[6];
  param_1[6] = param_2[6];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[7] = param_2[7];
  uVar1 = param_1[8];
  param_1[8] = param_2[8];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[9] = param_2[9];
  uVar1 = param_1[10];
  param_1[10] = param_2[10];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 101b5084c; end: 101b508c7;  */

undefined8 * FUN_101b5084c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 4);
  uVar1 = param_2[6];
  uVar2 = param_1[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[8];
  uVar2 = param_1[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[10];
  uVar2 = param_1[10];
  param_1[9] = param_2[9];
  param_1[10] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 101b508c8; end: 101b50973;  */

int FUN_101b508c8(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x16] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101b50974; end: 101b509d3;  */

/* WARNING: Possible PIC construction at 0x000101b509b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b509bc) */

void FUN_101b50974(undefined8 *param_1)

{
  if (*(char *)(param_1 + 3) != -1) {
    FUN_101b509d4(*param_1,param_1[1],param_1[2]);
  }
  if (*(char *)(param_1 + 7) != -1) {
    FUN_101b509d4(param_1[4],param_1[5],param_1[6]);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_1[9]);
  return;
}



/* Entry: 101b509d4; end: 101b509db;  */

void FUN_101b509d4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101b509dc; end: 101b50cdf;  */

undefined8 * FUN_101b509dc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  cVar2 = *(char *)(param_2 + 3);
  if (cVar2 == -1) {
    uVar4 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar4;
    uVar4 = *(undefined8 *)((long)param_2 + 9);
    *(undefined8 *)((long)param_1 + 0x11) = *(undefined8 *)((long)param_2 + 0x11);
    *(undefined8 *)((long)param_1 + 9) = uVar4;
  }
  else {
    uVar4 = *param_2;
    uVar1 = param_2[1];
    uVar3 = param_2[2];
    FUN_101b504ec(uVar4,uVar1,uVar3,cVar2);
    *param_1 = uVar4;
    param_1[1] = uVar1;
    param_1[2] = uVar3;
    *(char *)(param_1 + 3) = cVar2;
  }
  cVar2 = *(char *)(param_2 + 7);
  if (cVar2 == -1) {
    uVar4 = param_2[4];
    param_1[5] = param_2[5];
    param_1[4] = uVar4;
    uVar4 = *(undefined8 *)((long)param_2 + 0x29);
    *(undefined8 *)((long)param_1 + 0x31) = *(undefined8 *)((long)param_2 + 0x31);
    *(undefined8 *)((long)param_1 + 0x29) = uVar4;
  }
  else {
    uVar4 = param_2[4];
    uVar1 = param_2[5];
    uVar3 = param_2[6];
    FUN_101b504ec(uVar4,uVar1,uVar3,cVar2);
    param_1[4] = uVar4;
    param_1[5] = uVar1;
    param_1[6] = uVar3;
    *(char *)(param_1 + 7) = cVar2;
  }
  *(undefined2 *)((long)param_1 + 0x39) = *(undefined2 *)((long)param_2 + 0x39);
  uVar4 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar4;
  uVar4 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar4;
  uVar1 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar1;
  func_0x000107c61434();
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar1);
  return param_1;
}



/* Entry: 101b50ce0; end: 101b50e13;  */

undefined8 * FUN_101b50ce0(undefined8 *param_1)

{
  FUN_101b509d4(*param_1,param_1[1],param_1[2],*(undefined1 *)(param_1 + 3));
  return param_1;
}



/* Entry: 101b50e14; end: 101b50f03;  */

int FUN_101b50e14(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x1c] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 0x12);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 101b50f04; end: 101b50fcb;  */

undefined8 * FUN_101b50f04(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar4 = param_2[2];
  uVar3 = *(undefined1 *)(param_2 + 3);
  FUN_101b504ec(uVar1,uVar2,uVar4,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar4;
  *(undefined1 *)(param_1 + 3) = uVar3;
  return param_1;
}



/* Entry: 101b50fcc; end: 101b51017;  */

undefined8 * FUN_101b50fcc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar6 = param_2[2];
  uVar3 = *(undefined1 *)(param_2 + 3);
  uVar5 = *param_1;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar7 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[2] = uVar6;
  uVar4 = *(undefined1 *)(param_1 + 3);
  *(undefined1 *)(param_1 + 3) = uVar3;
  FUN_101b509d4(uVar5,uVar1,uVar2,uVar4);
  return param_1;
}



/* Entry: 101b51018; end: 101b510cb;  */

int FUN_101b51018(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 0x19) != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = *(byte *)(param_1 + 6) ^ 0xff;
  if (*(byte *)(param_1 + 6) < 2) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 101b510cc; end: 101b51103;  */

/* WARNING: Possible PIC construction at 0x000101b510e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b510f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b510e4) */
/* WARNING: Removing unreachable block (ram,0x000101b510f4) */

void FUN_101b510cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 101b51104; end: 101b51243;  */

undefined8 * FUN_101b51104(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  uVar3 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar3;
  uVar1 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  uVar2 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar2;
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  func_0x000107c61434();
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  return param_1;
}



/* Entry: 101b51244; end: 101b512bf;  */

undefined8 * FUN_101b51244(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  uVar1 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[7];
  uVar2 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[9];
  uVar2 = param_1[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  func_0x000107c6142c(uVar2);
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  return param_1;
}



/* Entry: 101b512c0; end: 101b51373;  */

int FUN_101b512c0(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x51) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101b51374; end: 101b513b3;  */

void FUN_101b51374(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e03f38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9d7850;
  func_0x000107c61520(&UNK_10d9d7850,&UNK_11044a580);
  puRam0000000112e03f38 = puVar1;
  return;
}



/* Entry: 101b513b4; end: 101b513e7;  */

void FUN_101b513b4(void)

{
  return;
}



/* Entry: 101b513e8; end: 101b5155b;  */

void FUN_101b513e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  cVar2 = *(char *)(param_2 + 3);
  if (cVar2 == -1) {
    uVar4 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar4;
    uVar4 = *(undefined8 *)((long)param_2 + 9);
    *(undefined8 *)((long)param_1 + 0x11) = *(undefined8 *)((long)param_2 + 0x11);
    *(undefined8 *)((long)param_1 + 9) = uVar4;
  }
  else {
    uVar4 = *param_2;
    uVar1 = param_2[1];
    uVar3 = param_2[2];
    FUN_101b504ec(uVar4,uVar1,uVar3,cVar2);
    *param_1 = uVar4;
    param_1[1] = uVar1;
    param_1[2] = uVar3;
    *(char *)(param_1 + 3) = cVar2;
  }
  *(undefined1 *)((long)param_1 + 0x19) = *(undefined1 *)((long)param_2 + 0x19);
  return;
}



/* Entry: 101b5155c; end: 101b515f7;  */

void FUN_101b5155c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (*(char *)(param_1 + 3) == -1) {
    uVar6 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar6;
    uVar6 = *(undefined8 *)((long)param_2 + 9);
    *(undefined8 *)((long)param_1 + 0x11) = *(undefined8 *)((long)param_2 + 0x11);
    *(undefined8 *)((long)param_1 + 9) = uVar6;
  }
  else {
    cVar2 = *(char *)(param_2 + 3);
    if (cVar2 == -1) {
      FUN_101b50ce0();
      uVar6 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar6;
      uVar6 = *(undefined8 *)((long)param_2 + 9);
      *(undefined8 *)((long)param_1 + 0x11) = *(undefined8 *)((long)param_2 + 0x11);
      *(undefined8 *)((long)param_1 + 9) = uVar6;
    }
    else {
      uVar4 = param_2[2];
      uVar6 = *param_1;
      uVar1 = param_1[1];
      uVar3 = param_1[2];
      uVar5 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar5;
      param_1[2] = uVar4;
      *(char *)(param_1 + 3) = cVar2;
      FUN_101b509d4(uVar6,uVar1,uVar3);
    }
  }
  *(undefined1 *)((long)param_1 + 0x19) = *(undefined1 *)((long)param_2 + 0x19);
  return;
}



/* Entry: 101b515f8; end: 101b516bb;  */

int FUN_101b515f8(int *param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfd < param_2) && (*(char *)((long)param_1 + 0x1a) != '\0')) {
    return *param_1 + 0xfe;
  }
  iVar1 = (*(byte *)(param_1 + 6) ^ 0xff) - 1;
  if (*(byte *)(param_1 + 6) < 2) {
    iVar1 = -1;
  }
  return iVar1 + 1;
}



/* Entry: 101b516bc; end: 101b5181b;  */

undefined8 * FUN_101b516bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  bVar2 = *(byte *)(param_2 + 3);
  if (bVar2 < 2) {
    uVar4 = *param_2;
    uVar1 = param_2[1];
    uVar3 = param_2[2];
    FUN_101b504ec(uVar4,uVar1,uVar3,bVar2);
    *param_1 = uVar4;
    param_1[1] = uVar1;
    param_1[2] = uVar3;
    *(byte *)(param_1 + 3) = bVar2;
  }
  else {
    uVar4 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar4;
    uVar4 = *(undefined8 *)((long)param_2 + 9);
    *(undefined8 *)((long)param_1 + 0x11) = *(undefined8 *)((long)param_2 + 0x11);
    *(undefined8 *)((long)param_1 + 9) = uVar4;
  }
  return param_1;
}



/* Entry: 101b5181c; end: 101b518bf;  */

undefined8 * FUN_101b5181c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (*(byte *)(param_1 + 3) < 2) {
    bVar2 = *(byte *)(param_2 + 3);
    if (bVar2 < 2) {
      uVar4 = param_2[2];
      uVar6 = *param_1;
      uVar1 = param_1[1];
      uVar3 = param_1[2];
      uVar5 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar5;
      param_1[2] = uVar4;
      *(byte *)(param_1 + 3) = bVar2;
      FUN_101b509d4(uVar6,uVar1,uVar3);
    }
    else {
      FUN_101b509d4(*param_1,param_1[1],param_1[2]);
      uVar6 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar6;
      uVar6 = *(undefined8 *)((long)param_2 + 9);
      *(undefined8 *)((long)param_1 + 0x11) = *(undefined8 *)((long)param_2 + 0x11);
      *(undefined8 *)((long)param_1 + 9) = uVar6;
    }
  }
  else {
    uVar6 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar6;
    uVar6 = *(undefined8 *)((long)param_2 + 9);
    *(undefined8 *)((long)param_1 + 0x11) = *(undefined8 *)((long)param_2 + 0x11);
    *(undefined8 *)((long)param_1 + 9) = uVar6;
  }
  return param_1;
}



/* Entry: 101b518c0; end: 101b51c4f;  */

uint FUN_101b518c0(int *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfd < param_2) && (*(char *)((long)param_1 + 0x19) != '\0')) {
    return *param_1 + 0xfe;
  }
  uVar2 = *(byte *)(param_1 + 6) ^ 0xff;
  if (*(byte *)(param_1 + 6) < 2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = 0;
  if (1 < uVar2 + 1) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Entry: 101b51c50; end: 101b51c8f;  */

void FUN_101b51c50(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e03f40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9d7920;
  func_0x000107c61520(&UNK_10d9d7920,&UNK_11044aa80);
  puRam0000000112e03f40 = puVar1;
  return;
}



/* Entry: 101b51c90; end: 101b51c93;  */

void FUN_101b51c90(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e03f48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9d7988;
  func_0x000107c61520(&UNK_10d9d7988,&UNK_11044a860);
  puRam0000000112e03f48 = puVar1;
  return;
}



/* Entry: 101b51c94; end: 101b51cd3;  */

void FUN_101b51c94(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e03f48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9d7988;
  func_0x000107c61520(&UNK_10d9d7988,&UNK_11044a860);
  puRam0000000112e03f48 = puVar1;
  return;
}



/* Entry: 101b51cd4; end: 101b51e2b;  */

int FUN_101b51cd4(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_101b51d50;
        goto LAB_101b51d34;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_101b51d34:
      return ((uint)*param_1 | uVar1 << 8) - 4;
    }
  }
LAB_101b51d50:
  iVar2 = *param_1 - 5;
  if (*param_1 < 5) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 101b51e2c; end: 101b51e6b;  */

void FUN_101b51e2c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e03f50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9d7a10;
  func_0x000107c61520(&UNK_10d9d7a10,&UNK_11044ab10);
  puRam0000000112e03f50 = puVar1;
  return;
}



/* Entry: 101b51e6c; end: 101b51f1f;  */

void FUN_101b51e6c(void)

{
  long unaff_x20;
  
  **(undefined1 **)(unaff_x20 + 0x10) = 1;
  return;
}



/* Entry: 101b51f20; end: 101b5213b;  */

bool FUN_101b51f20(double param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long unaff_x20;
  code *pcVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  double dVar11;
  undefined1 auStack_70 [8];
  long lStack_68;
  
  lVar1 = 0x112d373d8;
  dVar11 = param_1;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = auStack_70 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar10 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar7 = (long)puVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar7 - extraout_x12;
  if (param_1 <= 0.0) {
    return true;
  }
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    uVar3 = 0xd000000000000036;
    func_0x000107c5fadc(0xd000000000000036,0x800000010efff960);
    lVar4 = lVar2;
    func_0x000107c4d9c0();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    func_0x000107c61170(uVar3);
    if (lVar4 != 0) {
      uVar3 = 0x112d373e8;
      lStack_68 = lVar4;
      func_0x0001000285a8(0x112d373e8,&UNK_10d97fd10);
      puVar5 = puVar9;
      func_0x000107c6147c(puVar9,&lStack_68,uVar3,lVar1,6);
      (**(code **)(lVar10 + 0x38))(puVar9,(uint)puVar5 ^ 1,1,lVar1);
      puVar5 = puVar9;
      (**(code **)(lVar10 + 0x30))(puVar9,1,lVar1);
      if ((int)puVar5 != 1) {
        (**(code **)(lVar10 + 0x20))(lVar8,puVar9,lVar1);
        func_0x000107c5eea0(lVar7);
        func_0x000107c5ee68(lVar8);
        pcVar6 = *(code **)(lVar10 + 8);
        (*pcVar6)(lVar7,lVar1);
        (*pcVar6)(lVar8,lVar1);
        return param_1 <= dVar11;
      }
      goto LAB_101b52110;
    }
  }
  (**(code **)(lVar10 + 0x38))(puVar9,1,1,lVar1);
LAB_101b52110:
  func_0x0001000d1dcc(puVar9);
  return true;
}



/* Entry: 101b5213c; end: 101b5217f;  */

void FUN_101b5213c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101b52180; end: 101b5222b;  */

void FUN_101b52180(void)

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



/* Entry: 101b5222c; end: 101b5223f;  */

bool FUN_101b5222c(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101b52240; end: 101b52407;  */

/* WARNING: Possible PIC construction at 0x000101b522b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b5230c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b52310) */
/* WARNING: Removing unreachable block (ram,0x000101b52328) */
/* WARNING: Removing unreachable block (ram,0x000101b52334) */
/* WARNING: Removing unreachable block (ram,0x000101b52340) */
/* WARNING: Removing unreachable block (ram,0x000101b5234c) */
/* WARNING: Removing unreachable block (ram,0x000101b52358) */
/* WARNING: Removing unreachable block (ram,0x000101b52364) */
/* WARNING: Removing unreachable block (ram,0x000101b523ac) */
/* WARNING: Removing unreachable block (ram,0x000101b523c0) */

void FUN_101b52240(char *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126a8af0;
  func_0x000107c610f8(PTR_PTR_1126a8af0);
  func_0x000107c453e4();
  if (*param_1 < '\0') {
    func_0x000107c5710c(puVar1);
    func_0x000107c55380(puVar1);
    lVar3 = *(long *)(param_1 + 0x10);
  }
  else {
    func_0x000107c5710c(puVar1);
    func_0x000107c53f24(puVar1);
    lVar3 = *(long *)(param_1 + 0x10);
  }
  if (lVar3 == 0) {
    uVar4 = 0;
    if (param_1[0x20] == '\x01') {
      uVar4 = 0xe700000000000000;
      uVar2 = 0x6e776f6e6b6e75;
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      func_0x0001000e48c0(uVar2);
    }
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar4);
    func_0x000107c53c88(puVar1);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x000107c5fadc(uVar2);
    func_0x000107c56b00(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 101b52408; end: 101b526b3;  */

/* WARNING: Possible PIC construction at 0x000101b52658: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b52668: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b5265c) */
/* WARNING: Removing unreachable block (ram,0x000101b5266c) */

void FUN_101b52408(char *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (*param_1 < 0) {
    uVar6 = (ulong)((int)*param_1 & 0x7f);
    FUN_101b52de4(uVar6);
  }
  else {
    uVar6 = 0x657474696d627573;
    param_2 = 0xe900000000000064;
  }
  cVar2 = param_1[0x68];
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c5fadc(uVar6,param_2);
  if (param_1[0x20] == '\x01') {
    uVar8 = 0xe700000000000000;
    uVar3 = 0x6e776f6e6b6e75;
    goto LAB_101b525d0;
  }
  lVar4 = *(long *)(param_1 + 0x18);
  if (lVar4 < 0x67) {
    if (lVar4 < 0x2a) {
      if (lVar4 == 0x12) {
        uVar8 = 0xeb00000000707574;
        uVar3 = 0x726174735f707061;
        goto LAB_101b525d0;
      }
      if (lVar4 == 0x1f) {
        uVar8 = 0xe600000000000000;
        uVar3 = 0x6172656d6163;
        goto LAB_101b525d0;
      }
      if (lVar4 == 0x27) goto LAB_101b52514;
    }
    else {
      if (lVar4 - 0x2aU < 2) {
LAB_101b52514:
        uVar8 = 0xe900000000000067;
        uVar3 = 0x6e6967617373656d;
        goto LAB_101b525d0;
      }
      if (lVar4 == 0x4c) {
LAB_101b52554:
        uVar8 = 0xe800000000000000;
        uVar3 = 0x7265766f63736964;
        goto LAB_101b525d0;
      }
    }
  }
  else if (lVar4 < 0x96) {
    if (lVar4 == 0x67) {
      uVar8 = 0xec00000064656566;
      uVar3 = 0x5f73646e65697266;
      goto LAB_101b525d0;
    }
    if (lVar4 == 0x93) {
      uVar8 = 0xe300000000000000;
      uVar3 = 0x70616d;
      goto LAB_101b525d0;
    }
  }
  else {
    if (lVar4 == 0x96) goto LAB_101b52514;
    if (lVar4 == 0xb0) goto LAB_101b52554;
    if (lVar4 == 0x13c) {
      uVar8 = 0xe900000000000074;
      uVar3 = 0x6867696c746f7073;
      goto LAB_101b525d0;
    }
  }
  uVar8 = 0xe500000000000000;
  uVar3 = 0x726568746f;
LAB_101b525d0:
  uVar1 = 0xeb00000000796c6e;
  if (cVar2 != '\x01') {
    uVar1 = 0x800000010efff9a0;
  }
  uVar5 = 0x6f5f6172656d6163;
  if (cVar2 != '\x01') {
    uVar5 = 0xd000000000000014;
  }
  func_0x000107c5fadc(uVar3,uVar8);
  func_0x000107c6142c(uVar8);
  func_0x000107c5fadc(uVar5,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x00010571c544(uVar7,uVar6,uVar3,uVar5,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 101b526b4; end: 101b52ae7;  */

/* WARNING: Possible PIC construction at 0x000101b52a70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b52aa0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b52950: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b52aa4) */
/* WARNING: Removing unreachable block (ram,0x000101b52a74) */
/* WARNING: Removing unreachable block (ram,0x000101b52954) */
/* WARNING: Removing unreachable block (ram,0x000101b52a90) */

void FUN_101b526b4(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  char *pcVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  
  lVar7 = param_1[5];
  if (lVar7 < 0x67) {
    if (lVar7 < 0x2a) {
      if (lVar7 == 0x12) {
        uVar10 = 0xeb00000000707574;
        lVar7 = 0x726174735f707061;
      }
      else {
        if (lVar7 != 0x1f) {
          if (lVar7 != 0x27) goto LAB_101b52804;
          goto LAB_101b5274c;
        }
        uVar10 = 0xe600000000000000;
        lVar7 = 0x6172656d6163;
      }
    }
    else if (lVar7 - 0x2aU < 2) {
LAB_101b5274c:
      uVar10 = 0xe900000000000067;
      lVar7 = 0x6e6967617373656d;
    }
    else if (lVar7 == 0x4c) {
LAB_101b52794:
      uVar10 = 0xe800000000000000;
      lVar7 = 0x7265766f63736964;
    }
    else {
LAB_101b52804:
      uVar10 = 0xe500000000000000;
      lVar7 = 0x726568746f;
    }
  }
  else if (lVar7 < 0x96) {
    if (lVar7 == 0x67) {
      uVar10 = 0xec00000064656566;
      lVar7 = 0x5f73646e65697266;
    }
    else {
      if (lVar7 != 0x93) goto LAB_101b52804;
      uVar10 = 0xe300000000000000;
      lVar7 = 0x70616d;
    }
  }
  else {
    if (lVar7 == 0x96) goto LAB_101b5274c;
    if (lVar7 == 0xb0) goto LAB_101b52794;
    if (lVar7 != 0x13c) goto LAB_101b52804;
    uVar10 = 0xe900000000000074;
    lVar7 = 0x6867696c746f7073;
  }
  lVar4 = param_1[4];
  FUN_101b52d00(lVar4);
  lVar12 = *param_1;
  lVar3 = param_1[1];
  uVar9 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c5fadc(lVar7,uVar10);
  func_0x000107c6142c(uVar10);
  if ((char)lVar3 == '\0') {
    uVar10 = 0x6e776f6e6b6e75;
    if (lVar12 == 2) {
      uVar10 = 0x6977735f72657375;
    }
    uVar2 = 0xe700000000000000;
    if (lVar12 == 2) {
      uVar2 = 0xea00000000006570;
    }
    uVar1 = 0x74756f656d6974;
    if (lVar12 != 1) {
      uVar1 = uVar10;
    }
    uVar10 = 0xe700000000000000;
    if (lVar12 != 1) {
      uVar10 = uVar2;
    }
    uVar2 = 0xec00000063697461;
    uVar6 = 0x6d6d6172676f7270;
    if (lVar12 != 0) {
      uVar2 = uVar10;
      uVar6 = uVar1;
    }
    func_0x000107c5fadc(uVar6,uVar2);
    func_0x000107c6142c(uVar2);
    func_0x000107c5fadc(lVar4,param_2);
    func_0x000107c6142c(param_2);
    func_0x00010571cdd8(uVar9,lVar7,uVar6,lVar4,1);
    goto code_r0x000107c61170;
  }
  if ((char)lVar3 != '\x01') {
    func_0x000107c5fadc(lVar4,param_2);
    func_0x000107c6142c(param_2);
    func_0x00010571cba8(uVar9,lVar7,lVar4,1);
    func_0x000107c61170(lVar7);
    lVar7 = lVar4;
    goto code_r0x000107c61170;
  }
  if (lVar12 < 2) {
    if (lVar12 == 0) {
      pcVar8 = "app_state_change_foreground";
LAB_101b529fc:
      uVar5 = 0xd00000000000001b;
      uVar11 = (ulong)(pcVar8 + -0x20) | 0x8000000000000000;
    }
    else {
      if (lVar12 == 1) {
        uVar11 = 0xed00007963696c6f;
        uVar5 = 0x6e6565726373;
        goto LAB_101b52a24;
      }
LAB_101b529d4:
      uVar11 = 0xe700000000000000;
      uVar5 = 0x6e776f6e6b6e75;
    }
  }
  else {
    if (lVar12 != 2) {
      if (lVar12 != 3) goto LAB_101b529d4;
      pcVar8 = "app_state_change_background";
      goto LAB_101b529fc;
    }
    uVar11 = 0xef797469726f6972;
    uVar5 = 0x726568676968;
LAB_101b52a24:
    uVar5 = uVar5 | 0x705f000000000000;
  }
  func_0x000107c5fadc(uVar5,uVar11);
  func_0x000107c6142c(uVar11);
  func_0x000107c5fadc(lVar4,param_2);
  func_0x000107c6142c(param_2);
  func_0x00010571d098(uVar9,lVar7,uVar5,lVar4,1);
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar7);
  return;
}



/* Entry: 101b52ae8; end: 101b52cff;  */

/* WARNING: Possible PIC construction at 0x000101b52b30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b52b60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b52b34) */
/* WARNING: Removing unreachable block (ram,0x000101b52b64) */
/* WARNING: Removing unreachable block (ram,0x000101b52ba4) */
/* WARNING: Removing unreachable block (ram,0x000101b52bb8) */
/* WARNING: Removing unreachable block (ram,0x000101b52b7c) */
/* WARNING: Removing unreachable block (ram,0x000101b52bd0) */
/* WARNING: Removing unreachable block (ram,0x000101b52b88) */
/* WARNING: Removing unreachable block (ram,0x000101b52b98) */
/* WARNING: Removing unreachable block (ram,0x000101b52bc0) */
/* WARNING: Removing unreachable block (ram,0x000101b52bd8) */
/* WARNING: Removing unreachable block (ram,0x000101b52bec) */
/* WARNING: Removing unreachable block (ram,0x000101b52c00) */

void FUN_101b52ae8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126a8af0;
  func_0x000107c610f8(PTR_PTR_1126a8af0);
  func_0x000107c453e4();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c5fadc(uVar2,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c56b00(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 101b52d00; end: 101b52de3;  */

undefined1  [16] FUN_101b52d00(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  bool bVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  uVar2 = 0x6e776f6e6b6e75;
  if (param_1 == 2) {
    uVar2 = 0x656c7069746c756d;
  }
  uVar6 = 0xe700000000000000;
  if (param_1 == 2) {
    uVar6 = 0xe800000000000000;
  }
  uVar1 = 0x656c676e6973;
  if (param_1 != 3) {
    uVar1 = uVar2;
  }
  uVar2 = 0xe600000000000000;
  if (param_1 != 3) {
    uVar2 = uVar6;
  }
  bVar5 = *(char *)(unaff_x20 + 0x58) != '\x01';
  uVar6 = 0xec0000006b636162;
  if (bVar5) {
    uVar6 = 0xe800000000000000;
  }
  uVar3 = 0x5f656d6f636c6577;
  if (bVar5) {
    uVar3 = 0x647261646e617473;
  }
  func_0x000107c5fb78(0x5f,0xe100000000000000);
  func_0x000107c5fb78(uVar1,uVar2);
  func_0x000107c6142c(uVar2);
  auVar4._8_8_ = uVar6;
  auVar4._0_8_ = uVar3;
  return auVar4;
}



/* Entry: 101b52de4; end: 101b52f37;  */

/* WARNING: Possible PIC construction at 0x000101b530f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b531b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b531d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b531f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b52f4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b52f44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b531f4) */
/* WARNING: Removing unreachable block (ram,0x000101b531d4) */
/* WARNING: Removing unreachable block (ram,0x000101b531b8) */
/* WARNING: Removing unreachable block (ram,0x000101b530f8) */
/* WARNING: Removing unreachable block (ram,0x000101b53124) */
/* WARNING: Removing unreachable block (ram,0x000101b53188) */
/* WARNING: Removing unreachable block (ram,0x000101b5312c) */
/* WARNING: Removing unreachable block (ram,0x000101b53134) */
/* WARNING: Removing unreachable block (ram,0x000101b53100) */
/* WARNING: Removing unreachable block (ram,0x000101b5316c) */
/* WARNING: Removing unreachable block (ram,0x000101b53108) */
/* WARNING: Removing unreachable block (ram,0x000101b53158) */
/* WARNING: Removing unreachable block (ram,0x000101b53110) */
/* WARNING: Removing unreachable block (ram,0x000101b5317c) */
/* WARNING: Removing unreachable block (ram,0x000101b52f50) */
/* WARNING: Removing unreachable block (ram,0x000101b53050) */
/* WARNING: Removing unreachable block (ram,0x000101b53080) */

undefined1  [16] FUN_101b52de4(ulong param_1)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  char *pcVar4;
  ulong unaff_x20;
  ulong unaff_x22;
  ulong unaff_x24;
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
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  uVar3 = 0xef64656c62617369;
  uVar1 = 0x645f6769666e6f63;
  pcVar4 = (char *)(param_1 & 0xff);
  switch(pcVar4) {
  case (char *)0x0:
    goto code_r0x000101b52eb4;
  default:
    pcVar4 = "cooldown_not_expired";
  case (char *)0x7f:
    auVar5._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
    auVar5._0_8_ = 0xd000000000000014;
    return auVar5;
  case (char *)0x2:
    uVar3 = 0x6761705f656c;
  case (char *)0x40:
    uVar3 = uVar3 & 0xffffffffffff | 0xef65000000000000;
    uVar1 = 0x67696c656e69;
code_r0x000101b52e94:
    auVar7._0_8_ = uVar1 & 0xffffffffffff | 0x6269000000000000;
    auVar7._8_8_ = uVar3;
    return auVar7;
  case (char *)0x3:
    uVar1 = 0xd00000000000001c;
  case (char *)0x48:
    pcVar4 = "feed_coordinator_unavailable";
code_r0x000101b52eac:
    uVar3 = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
code_r0x000101b52eb4:
    auVar8._8_8_ = uVar3;
    auVar8._0_8_ = uVar1;
    return auVar8;
  case (char *)0x4:
    auVar6._8_8_ = 0xec0000006465646e;
    auVar6._0_8_ = 0x756f72676b636162;
    return auVar6;
  case (char *)0x5:
    uVar3 = 0xee00657669746361;
  case (char *)0x7d:
    auVar10._8_8_ = uVar3;
    auVar10._0_8_ = 0x5f746f6e5f707061;
    return auVar10;
  case (char *)0x6:
    auVar11._8_8_ = 0xec00000074756f65;
    auVar11._0_8_ = 0x6d69745f636e7973;
    return auVar11;
  case (char *)0x7:
    auVar9._8_8_ = 0xea00000000007364;
    auVar9._0_8_ = 0x6165726e755f6f6e;
    return auVar9;
  case (char *)0x8:
    uVar3 = 0x800000010efff9e0;
  case (char *)0x1d:
  case (char *)0x5d:
  case (char *)0x9d:
  case (char *)0xcd:
    pcVar4 = (char *)0x1c;
    goto code_r0x000101b52f2c;
  case (char *)0x9:
  case (char *)0x38:
    uVar1 = 0xd00000000000001c;
    pcVar4 = "consumable_items_not_emitted";
    goto code_r0x000101b52eac;
  case (char *)0x10:
  case (char *)0x50:
  case (char *)0x90:
  case (char *)0xc0:
    return ZEXT816(0x645f6769666e6f63);
  case (char *)0x11:
  case (char *)0x16:
  case (char *)0x51:
  case (char *)0x56:
  case (char *)0x70:
  case (char *)0x91:
  case (char *)0x96:
  case (char *)0xc1:
  case (char *)0xc6:
  case (char *)0xdf:
  case (char *)0xef:
  case (char *)0xfe:
    goto code_r0x000101b52fb8;
  case (char *)0x12:
  case (char *)0x52:
  case (char *)0x92:
  case (char *)0xad:
  case (char *)0xb3:
  case (char *)0xc2:
    goto code_r0x000101b52fd4;
  case (char *)0x13:
  case (char *)0x19:
  case (char *)0x26:
  case (char *)0x53:
  case (char *)0x59:
  case (char *)0x66:
  case (char *)0x93:
  case (char *)0x99:
  case (char *)0xa6:
  case (char *)0xc3:
  case (char *)0xc9:
  case (char *)0xd6:
  case (char *)0xe2:
  case (char *)0xf2:
  case (char *)0xfb:
    goto code_r0x000101b52fb0;
  case (char *)0x14:
  case (char *)0x21:
  case (char *)0x2a:
  case (char *)0x2d:
  case (char *)0x54:
  case (char *)0x61:
  case (char *)0x6a:
  case (char *)0x6d:
  case (char *)0x94:
  case (char *)0xa1:
  case (char *)0xaa:
  case (char *)0xc4:
  case (char *)0xd1:
  case (char *)0xda:
  case (char *)0xe5:
  case (char *)0xf5:
  case (char *)0xfc:
    goto code_r0x000101b52fe0;
  case (char *)0x15:
  case (char *)0x55:
  case (char *)0x95:
  case (char *)0xc5:
  case (char *)0xfd:
    goto LAB_101b52fd8;
  case (char *)0x17:
  case (char *)0x57:
  case (char *)0x97:
  case (char *)0xc7:
    goto code_r0x000101b52f2c;
  case (char *)0x18:
  case (char *)0x27:
  case (char *)0x58:
  case (char *)0x67:
  case (char *)0x98:
  case (char *)0xa7:
  case (char *)0xb8:
  case (char *)0xba:
  case (char *)0xc8:
  case (char *)0xd7:
  case (char *)0xe1:
  case (char *)0xe8:
  case (char *)0xea:
  case (char *)0xf1:
  case (char *)0xb1:
    in_OV = '\0';
    in_NG = '\x01';
    in_ZR = false;
code_r0x000101b52fb0:
    if ((bool)in_ZR || in_NG != in_OV) {
      in_OV = '\0';
      in_NG = '\x01';
      in_ZR = false;
code_r0x000101b52fb8:
      if (!(bool)in_ZR && in_NG == in_OV) goto LAB_101b530d4;
code_r0x000101b52fbc:
      in_ZR = false;
code_r0x000101b52fc0:
      if ((bool)in_ZR) {
        unaff_x24 = 0xeb00000000707574;
code_r0x000101b530c0:
        uVar1 = 0x726174735f707061;
      }
      else {
        in_ZR = false;
code_r0x000101b52fc8:
        if (!(bool)in_ZR) {
          in_ZR = false;
code_r0x000101b52fd0:
          if ((bool)in_ZR) goto LAB_101b53024;
code_r0x000101b52fd4:
          goto LAB_101b530d4;
        }
        unaff_x24 = 0xe600000000000000;
        uVar1 = 0x6172656d6163;
      }
    }
    else {
LAB_101b52fd8:
      in_OV = '\0';
      in_NG = '\x01';
      in_ZR = false;
code_r0x000101b52fdc:
      if (!(bool)in_ZR && in_NG == in_OV) {
code_r0x000101b52fe0:
        in_ZR = false;
code_r0x000101b52fe4:
        if ((bool)in_ZR) {
LAB_101b53024:
          uVar1 = 0x6e6967617373656d;
code_r0x000101b53034:
          unaff_x24 = 0xe900000000000067;
        }
        else {
          in_ZR = false;
code_r0x000101b52fec:
          if ((bool)in_ZR) {
            unaff_x24 = 0xe800000000000000;
            uVar1 = 0x7265766f63736964;
          }
          else {
            in_ZR = false;
code_r0x000101b52ff4:
            if (!(bool)in_ZR) goto LAB_101b530d4;
code_r0x000101b52ff8:
            unaff_x24 = 0xe900000000000074;
            uVar1 = 0x7073;
code_r0x000101b53008:
            uVar1 = uVar1 & 0xffff | 0x6867696c746f0000;
          }
        }
        goto LAB_101b530e4;
      }
LAB_101b530d4:
      unaff_x24 = 0xe500000000000000;
      uVar1 = 0x726568746f;
    }
LAB_101b530e4:
    uVar3 = unaff_x24;
    func_0x000107c5fadc(uVar1,unaff_x24);
    uVar1 = unaff_x24;
    break;
  case (char *)0x1a:
  case (char *)0x5a:
  case (char *)0x9a:
  case (char *)0xca:
    goto code_r0x000101b52fd0;
  case (char *)0x1b:
  case (char *)0x5b:
  case (char *)0x9b:
  case (char *)0xcb:
  case (char *)0xdc:
  case (char *)0xec:
    uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
    goto code_r0x000107c61170;
  case (char *)0x1c:
  case (char *)0x2b:
  case (char *)0x31:
  case (char *)0x5c:
  case (char *)0x6b:
  case (char *)0x9c:
  case (char *)0xab:
  case (char *)0xcc:
  case (char *)0xdb:
  case (char *)0xdd:
  case (char *)0xe6:
  case (char *)0xed:
  case (char *)0xf6:
    goto code_r0x000101b52fdc;
  case (char *)0x1e:
  case (char *)0x1f:
  case (char *)0x5e:
  case (char *)0x5f:
  case (char *)0x9e:
  case (char *)0x9f:
  case (char *)0xce:
  case (char *)0xcf:
    goto code_r0x000101b52fe4;
  case (char *)0x20:
  case (char *)0x60:
  case (char *)0xa0:
  case (char *)0xd0:
    goto code_r0x000101b52f5c;
  case (char *)0x22:
  case (char *)0x28:
  case (char *)0x62:
  case (char *)0x68:
  case (char *)0xa2:
  case (char *)0xa8:
  case (char *)0xb5:
  case (char *)0xb9:
  case (char *)0xd2:
  case (char *)0xd8:
  case (char *)0xde:
  case (char *)0xe3:
  case (char *)0xe9:
  case (char *)0xee:
  case (char *)0xf3:
  case (char *)0xfa:
    goto code_r0x000101b52ff4;
  case (char *)0x23:
  case (char *)0x25:
  case (char *)0x29:
  case (char *)0x30:
  case (char *)0x63:
  case (char *)0x65:
  case (char *)0x69:
  case (char *)0xa3:
  case (char *)0xa5:
  case (char *)0xa9:
  case (char *)0xae:
  case (char *)0xb0:
  case (char *)0xb2:
  case (char *)0xb4:
  case (char *)0xd3:
  case (char *)0xd5:
  case (char *)0xd9:
  case (char *)0xe4:
  case (char *)0xf4:
    goto code_r0x000101b52fc8;
  case (char *)0x24:
  case (char *)0x64:
  case (char *)0xa4:
  case (char *)0xd4:
    goto code_r0x000101b52fbc;
  case (char *)0x2c:
  case (char *)0x6c:
    func_0x000107c615e8();
    uVar1 = unaff_x20;
    goto code_r0x000101b52f5c;
  case (char *)0x2e:
  case (char *)0x2f:
  case (char *)0x32:
  case (char *)0x6e:
  case (char *)0x6f:
  case (char *)0xaf:
    goto code_r0x000101b52fc0;
  case (char *)0x71:
  case (char *)0xe0:
  case (char *)0xf0:
    goto code_r0x000101b52fec;
  case (char *)0x74:
    func_0x000107c5fadc();
    uVar1 = unaff_x20;
    break;
  case (char *)0x75:
    break;
  case (char *)0x76:
  case (char *)0x7a:
    uVar3 = unaff_x22;
    func_0x000107c5fadc(0x645f7070615f6f63);
    uVar1 = unaff_x22;
    break;
  case (char *)0x78:
    goto code_r0x000101b52e94;
  case (char *)0x79:
    uRam645f6769666e6f63 = uRamef64656c62617369;
    uRam645f6769666e6f6b = uRamef64656c62617371;
    uRam645f6769666e6f73 = uRamef64656c62617379;
    uRam645f6769666e6f7b = uRamef64656c62617381;
    uRam645f6769666e6f83 = uRamef64656c62617389;
    uRam645f6769666e6f8b = uRamef64656c62617391;
    uRam645f6769666e6f93 = uRamef64656c62617399;
    uRam645f6769666e6f9b = uRamef64656c626173a1;
    uRam645f6769666e6fab = uRamef64656c626173b1;
    uRam645f6769666e6fa3 = uRamef64656c626173a9;
    uRam645f6769666e6fb3 = uRamef64656c626173b9;
    uRam645f6769666e6fbb = uRamef64656c626173c1;
    uRam645f6769666e6fc3 = uRamef64656c626173c9;
    uRam645f6769666e6fcb = uRamef64656c626173d1;
    func_0x000107c61434();
    auVar13._8_8_ = uVar3;
    auVar13._0_8_ = 0x645f6769666e6f63;
    return auVar13;
  case (char *)0x7c:
    goto code_r0x000101b53034;
  case (char *)0x7e:
    goto code_r0x000101b530c0;
  case (char *)0xac:
    uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    auVar14._8_8_ = uVar3;
    auVar14._0_8_ = uVar2;
    return auVar14;
  case (char *)0xb6:
    goto code_r0x000101b53008;
  case (char *)0xb7:
  case (char *)0xe7:
    goto code_r0x000101b52f34;
  case (char *)0xf8:
    goto code_r0x000101b52f60;
  case (char *)0xf9:
    goto code_r0x000101b52ff8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
  auVar15._8_8_ = uVar3;
  auVar15._0_8_ = uVar1;
  return auVar15;
code_r0x000101b52f5c:
  uVar3 = 0x5a;
code_r0x000101b52f60:
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  auVar16._8_8_ = uVar3;
  auVar16._0_8_ = uVar1;
  return auVar16;
code_r0x000101b52f2c:
  uVar1 = ((ulong)pcVar4 | 0xd000000000000000) - 0xb;
code_r0x000101b52f34:
  auVar12._8_8_ = uVar3;
  auVar12._0_8_ = uVar1;
  return auVar12;
}



/* Entry: 101b52f38; end: 101b52f8b;  */

void FUN_101b52f38(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101b52f8c; end: 101b53213;  */

/* WARNING: Possible PIC construction at 0x000101b531f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b531f4) */

void FUN_101b52f8c(undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  char *pcVar3;
  undefined8 uVar4;
  long unaff_x20;
  ulong uVar5;
  undefined8 uVar6;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  if (param_2 < 0x67) {
    if (param_2 < 0x2a) {
      if (param_2 == 0x12) {
        uVar6 = 0xeb00000000707574;
        uVar1 = 0x726174735f707061;
      }
      else {
        if (param_2 != 0x1f) {
          if (param_2 != 0x27) goto LAB_101b530d4;
          goto LAB_101b53024;
        }
        uVar6 = 0xe600000000000000;
        uVar1 = 0x6172656d6163;
      }
    }
    else if (param_2 - 0x2aU < 2) {
LAB_101b53024:
      uVar1 = 0x6e6967617373656d;
      uVar6 = 0xe900000000000067;
    }
    else if (param_2 == 0x4c) {
LAB_101b53068:
      uVar6 = 0xe800000000000000;
      uVar1 = 0x7265766f63736964;
    }
    else {
LAB_101b530d4:
      uVar6 = 0xe500000000000000;
      uVar1 = 0x726568746f;
    }
  }
  else if (param_2 < 0x96) {
    if (param_2 == 0x67) {
      uVar6 = 0xec00000064656566;
      uVar1 = 0x5f73646e65697266;
    }
    else {
      if (param_2 != 0x93) goto LAB_101b530d4;
      uVar6 = 0xe300000000000000;
      uVar1 = 0x70616d;
    }
  }
  else {
    if (param_2 == 0x96) goto LAB_101b53024;
    if (param_2 == 0xb0) goto LAB_101b53068;
    if (param_2 != 0x13c) goto LAB_101b530d4;
    uVar6 = 0xe900000000000074;
    uVar1 = 0x6867696c746f7073;
  }
  func_0x000107c5fadc(uVar1,uVar6);
  func_0x000107c6142c(uVar6);
  if (param_3 < 0x11) {
    if (param_3 == 0xf) {
      pcVar3 = "nothing_to_display";
    }
    else {
      if (param_3 != 0x10) goto LAB_101b53158;
      pcVar3 = "suppress_new_notif";
    }
    uVar6 = 0xd000000000000012;
    uVar5 = (ulong)(pcVar3 + -0x20) | 0x8000000000000000;
  }
  else {
    if (param_3 == 0x11) {
      uVar5 = 0x800000010efffac0;
      uVar6 = 0xd000000000000015;
      goto LAB_101b531a4;
    }
    if (param_3 == 0x12) {
      uVar5 = 0xee00647261637369;
      uVar6 = 0x645f7070615f6e69;
      goto LAB_101b531a4;
    }
LAB_101b53158:
    uVar5 = 0xe500000000000000;
    uVar6 = 0x726568746f;
  }
LAB_101b531a4:
  uVar2 = uVar5;
  func_0x000107c5fadc(uVar6,uVar5);
  func_0x000107c6142c(uVar5);
  FUN_101b52d00(param_1);
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar2);
  func_0x00010571d358(uVar4,uVar1,uVar6,param_1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 101b53214; end: 101b5321b;  */

void FUN_101b53214(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 101b5321c; end: 101b5329f;  */

undefined1 * FUN_101b5321c(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  param_1[0x20] = param_2[0x20];
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  param_1[0x38] = param_2[0x38];
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  param_1[0x48] = param_2[0x48];
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  param_1[0x58] = param_2[0x58];
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined2 *)(param_1 + 0x68) = *(undefined2 *)(param_2 + 0x68);
  func_0x000107c61434();
  return param_1;
}



/* Entry: 101b532a0; end: 101b53353;  */

undefined1 * FUN_101b532a0(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  param_1[0x20] = param_2[0x20];
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  param_1[0x38] = param_2[0x38];
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  param_1[0x48] = param_2[0x48];
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x50);
  param_1[0x58] = param_2[0x58];
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  param_1[0x68] = param_2[0x68];
  param_1[0x69] = param_2[0x69];
  return param_1;
}



/* Entry: 101b53354; end: 101b533df;  */

undefined1 * FUN_101b53354(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  func_0x000107c6142c(uVar2);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  param_1[0x20] = param_2[0x20];
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  param_1[0x38] = param_2[0x38];
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  param_1[0x48] = param_2[0x48];
  param_1[0x58] = param_2[0x58];
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined2 *)(param_1 + 0x68) = *(undefined2 *)(param_2 + 0x68);
  return param_1;
}



/* Entry: 101b533e0; end: 101b534c3;  */

int FUN_101b533e0(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && (*(char *)((long)param_1 + 0x6a) != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 101b534c4; end: 101b5350f;  */

undefined8 * FUN_101b534c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar1 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar1;
  param_1[6] = param_2[6];
  func_0x000107c61434();
  return param_1;
}



/* Entry: 101b53510; end: 101b53583;  */

undefined8 * FUN_101b53510(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  return param_1;
}



/* Entry: 101b53584; end: 101b535d7;  */

undefined8 * FUN_101b53584(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar2 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  param_1[6] = param_2[6];
  return param_1;
}



/* Entry: 101b535d8; end: 101b53a4f;  */

int FUN_101b535d8(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xe] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101b53a50; end: 101b53a8f;  */

void FUN_101b53a50(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e040a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9d7b94;
  func_0x000107c61520(&UNK_10d9d7b94,&UNK_11044ae78);
  puRam0000000112e040a8 = puVar1;
  return;
}



/* Entry: 101b53a90; end: 101b53ab3;  */

long FUN_101b53a90(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101b53ab4; end: 101b53b1b;  */

void FUN_101b53ab4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x20) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b53b1c,uVar1,uVar2);
  return;
}



/* Entry: 101b53b1c; end: 101b53b8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b53b1c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x20));
  func_0x000100083b20(unaff_x22 + 0x10);
  lVar3 = *(long *)(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(lVar3 + _DAT_113097748);
  func_0x000107c615f0(uVar2);
  func_0x000107c61170(lVar3);
  uVar1 = uVar2;
  func_0x000107c44368(uVar2);
  func_0x000107c615e8(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101b53b8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar1);
  return;
}



/* Entry: 101b53b90; end: 101b53c37;  */

void FUN_101b53b90(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x78);
  if (lVar2 != 0) {
    func_0x000107c6157c(lVar2);
    uVar1 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x000107c5fd50(lVar2,PTR___sytN_11034f1b0 + 8,uVar1,PTR___ss5ErrorWS_11034ee10);
    func_0x000107c61574(lVar2);
  }
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000834e4(unaff_x20 + 0x30);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  return;
}



/* Entry: 101b53c38; end: 101b53c77;  */

void FUN_101b53c38(void)

{
  FUN_101b53b90();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}


