/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104bfd7d8; end: 104bfd873;  */

undefined8 FUN_104bfd7d8(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lStack_20;
  undefined2 uStack_18;
  
  if ((bRam0000000113815ea0 & 1) == 0) {
    iVar4 = 0x13815ea0;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      FUN_104bfd874();
      lStack_20 = lRam0000000113815ed8;
      if (lRam0000000113815ed8 != 0) {
        piVar1 = (int *)(lRam0000000113815ed8 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_18 = 0xff00;
      func_0x0001003ad9a4(0x113815e90,&lStack_20);
      func_0x0001003a8c94(&lStack_20);
      ___cxa_guard_release(0x113815ea0);
    }
  }
  return 0x113815e90;
}



/* Entry: 104bfd874; end: 104bfd8c7;  */

void FUN_104bfd874(void)

{
  int iVar1;
  
  if ((bRam0000000113815ee0 & 1) == 0) {
    iVar1 = 0x13815ee0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(0x113815ed8,"_djinni_interface_TraceEmitter");
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x113815ee0);
      return;
    }
  }
  return;
}



/* Entry: 104bfd8c8; end: 104bfd93f;  */

void FUN_104bfd8c8(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined1 auStack_40 [16];
  byte bStack_30;
  undefined8 uStack_28;
  
  FUN_104bfd6a0(0);
  FUN_104bfd6a0(1);
  func_0x00010b9941f8(&uStack_28);
  func_0x00010b993b40(auStack_40,uStack_28,param_2);
  if ((bStack_30 & 1) != 0) {
    func_0x0001003adcc0(param_1,auStack_40);
    func_0x0001003b12dc(auStack_40);
    FUN_104bdc2fc(&uStack_28);
    return;
  }
  FUN_104bdc2c8();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104bfd93c);
  (*pcVar1)();
}



/* Entry: 104bfd940; end: 104bfd9db;  */

void FUN_104bfd940(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  undefined8 uVar2;
  code **ppcVar3;
  undefined8 extraout_x8;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_38;
  
  func_0x000104bfde3c();
  uVar1 = 0x40;
  uStack_38 = extraout_x8;
  __Znwm();
  pcStack_68 = FUN_104bfd9dc;
  ppuStack_60 = &PTR_FUN_1107e94c8;
  uStack_50 = param_2[1];
  uStack_58 = *param_2;
  uStack_48 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  ppcVar3 = &pcStack_68;
  uVar2 = uVar1;
  func_0x00010b9ac22c();
  *param_1 = uVar1;
  func_0x000104bfde54();
  func_0x000104bfde28(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000104bfde54();
  __ZdlPv(uVar1);
  __Unwind_Resume(uVar2);
  (*ppcVar3[2])(ppcVar3 + 3,uVar2);
  return;
}



/* Entry: 104bfd9dc; end: 104bfda4b;  */

void FUN_104bfd9dc(undefined8 param_1,long param_2)

{
  (**(code **)(param_2 + 0x10))(param_2 + 0x18,param_1);
  return;
}



/* Entry: 104bfda4c; end: 104bfdaaf;  */

long FUN_104bfda4c(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x0001000df548();
  }
  return param_1 + 0x10;
}



/* Entry: 104bfdab0; end: 104bfdad7;  */

void FUN_104bfdab0(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  FUN_104bfdad8(&uStack_11,param_1,param_2);
  return;
}



/* Entry: 104bfdad8; end: 104bfdb77;  */

void FUN_104bfdad8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined1 *puVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  undefined1 *puVar5;
  long lVar6;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined1 *puStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined1 auStack_50 [16];
  long lStack_40;
  undefined8 uStack_38;
  
  puVar5 = auStack_50;
  func_0x000104bfde3c();
  uStack_38 = extraout_x8;
  FUN_104bfdb94(auStack_50,1);
  FUN_104bfdbe8(lStack_40,param_3,param_4);
  lVar6 = lStack_40;
  lStack_40 = 0;
  FUN_104bfdb78(param_1,lVar6 + 0x18);
  FUN_104bfdde4();
  func_0x000104bfde28(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  FUN_104bfdde4(auStack_50);
  __Unwind_Resume();
  *extraout_x8_00 = puVar5;
  extraout_x8_00[1] = lVar6;
  puVar2 = (undefined1 *)0x0;
  if (puVar5 != (undefined1 *)0x0) {
    puVar2 = puVar5 + 8;
  }
  if ((puVar2 != (undefined1 *)0x0) &&
     ((*(long *)(puVar2 + 8) == 0 || (*(long *)(*(long *)(puVar2 + 8) + 8) == -1)))) {
    pcStack_58 = FUN_104bfdb78;
    lStack_68 = extraout_x8_00[1];
    if (lStack_68 != 0) {
      plVar1 = (long *)(lStack_68 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    puStack_70 = puVar5;
    puStack_60 = &stack0xfffffffffffffff0;
    func_0x0001003a8180(puVar2,&puStack_70);
    func_0x0001003a90c4(&puStack_70);
    return;
  }
  return;
}



/* Entry: 104bfdb78; end: 104bfdb93;  */

void FUN_104bfdb78(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lStack_20;
  long lStack_18;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  lVar2 = 0;
  if (param_2 != 0) {
    lVar2 = param_2 + 8;
  }
  if ((lVar2 != 0) && ((*(long *)(lVar2 + 8) == 0 || (*(long *)(*(long *)(lVar2 + 8) + 8) == -1))))
  {
    lStack_18 = param_1[1];
    if (lStack_18 != 0) {
      plVar1 = (long *)(lStack_18 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lStack_20 = param_2;
    func_0x0001003a8180(lVar2,&lStack_20);
    func_0x0001003a90c4(&lStack_20);
    return;
  }
  return;
}



/* Entry: 104bfdb94; end: 104bfdbbb;  */

long FUN_104bfdb94(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_104bfdbbc();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 104bfdbbc; end: 104bfdbe7;  */

undefined8 * FUN_104bfdbbc(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x333333333333334) {
    puVar1 = (undefined8 *)(param_2 * 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  FUN_104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1107e94f8;
  FUN_104bfdc54(param_1 + 3);
  return param_1;
}



/* Entry: 104bfdbe8; end: 104bfdc2b;  */

undefined8 * FUN_104bfdbe8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1107e94f8;
  FUN_104bfdc54(param_1 + 3);
  return param_1;
}



/* Entry: 104bfdc2c; end: 104bfdc2f;  */

void FUN_104bfdc2c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107e94f8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104bfdc30; end: 104bfdc43;  */

void FUN_104bfdc30(void)

{
  FUN_104bfdd68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bfdc44; end: 104bfdc53;  */

void FUN_104bfdc44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104bfdc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 104bfdc54; end: 104bfdc9f;  */

void FUN_104bfdc54(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  func_0x00010b9ace44();
  *param_1 = &PTR_FUN_1107e9548;
  lVar4 = param_3[1];
  uVar5 = *param_3;
  param_1[6] = param_3[1];
  param_1[5] = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* Entry: 104bfdca0; end: 104bfdca3;  */

void FUN_104bfdca0(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uStack_28;
  
  *param_1 = &PTR_FUN_1107e9548;
  __ZNSt3__15mutex4lockEv(0x11328ada8);
  puVar3 = param_1 + 5;
  uStack_28 = *puVar3;
  lVar2 = 0x11328ad40;
  FUN_104bdbfcc(0x11328ad40,&uStack_28);
  iVar1 = *(int *)(lVar2 + 0x28) + -1;
  *(int *)(lVar2 + 0x28) = iVar1;
  if (iVar1 == 0) {
    uStack_28 = *puVar3;
    FUN_104bdc09c(0x11328ad40,&uStack_28);
  }
  __ZNSt3__15mutex6unlockEv(0x11328ada8);
  FUN_104bfcf68(puVar3);
  func_0x00010b9ace94(param_1);
  return;
}



/* Entry: 104bfdca4; end: 104bfdcb7;  */

void FUN_104bfdca4(void)

{
  FUN_104bfdcc8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bfdcb8; end: 104bfdcc7;  */

undefined1  [16] FUN_104bfdcb8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x10;
  auVar1._0_8_ = "Djinni C++ Proxy";
  return auVar1;
}



/* Entry: 104bfdcc8; end: 104bfdd67;  */

void FUN_104bfdcc8(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uStack_28;
  
  *param_1 = &PTR_FUN_1107e9548;
  __ZNSt3__15mutex4lockEv(0x11328ada8);
  puVar3 = param_1 + 5;
  uStack_28 = *puVar3;
  lVar2 = 0x11328ad40;
  FUN_104bdbfcc(0x11328ad40,&uStack_28);
  iVar1 = *(int *)(lVar2 + 0x28) + -1;
  *(int *)(lVar2 + 0x28) = iVar1;
  if (iVar1 == 0) {
    uStack_28 = *puVar3;
    FUN_104bdc09c(0x11328ad40,&uStack_28);
  }
  __ZNSt3__15mutex6unlockEv(0x11328ada8);
  FUN_104bfcf68(puVar3);
  func_0x00010b9ace94(param_1);
  return;
}



/* Entry: 104bfdd68; end: 104bfdd77;  */

void FUN_104bfdd68(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107e94f8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104bfdd78; end: 104bfdde3;  */

void FUN_104bfdd78(long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_20;
  long lStack_18;
  
  if ((param_2 != 0) &&
     ((*(long *)(param_2 + 8) == 0 || (*(long *)(*(long *)(param_2 + 8) + 8) == -1)))) {
    lStack_18 = *(long *)(param_1 + 8);
    if (lStack_18 != 0) {
      plVar1 = (long *)(lStack_18 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_20 = param_3;
    func_0x0001003a8180(param_2,&uStack_20);
    func_0x0001003a90c4(&uStack_20);
    return;
  }
  return;
}



/* Entry: 104bfdde4; end: 104bfddf3;  */

void FUN_104bfdde4(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 104bfddf4; end: 104bfde1b;  */

undefined8 * FUN_104bfddf4(undefined8 *param_1)

{
  FUN_104bfde1c(*param_1);
  return param_1;
}



/* Entry: 104bfde1c; end: 104bfde7f;  */

void FUN_104bfde1c(long param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_1 != 0) {
    uStack_18 = *(undefined8 *)(param_1 + 0x10);
    uStack_20 = *(undefined8 *)(param_1 + 8);
    func_0x0001003a90c4(&uStack_20);
    return;
  }
  return;
}



/* Entry: 104bfde80; end: 104bfdfaf;  */

undefined8 * FUN_104bfde80(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x0001003a83dc(&uStack_58,"http");
  func_0x0001003a83dc(auStack_50,"https");
  func_0x0001003a83dc(auStack_48,"composer-encrypted-thumbnail");
  func_0x0001003a83dc(auStack_40,"content");
  FUN_104bfe058(&uStack_70,&uStack_58,4);
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d76a50;
  param_1[1] = 0;
  param_1[4] = uStack_68;
  param_1[3] = uStack_70;
  param_1[5] = uStack_60;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  FUN_104bfe1e0(&uStack_70);
  lVar5 = 0x18;
  do {
    puVar4 = (undefined8 *)((long)&uStack_58 + lVar5);
    func_0x0001003a8c94();
    lVar5 = lVar5 + -8;
  } while (lVar5 != -8);
  *param_1 = &PTR_FUN_1107e95a0;
  lVar5 = param_2[1];
  uVar6 = *param_2;
  param_1[7] = param_2[1];
  param_1[6] = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  *puVar4 = &PTR_FUN_1107e95a0;
  if (puVar4[7] != 0) {
    func_0x0001003a81fc();
  }
  *puVar4 = &PTR_DAT_110d76a50;
  FUN_104bfe1e0(puVar4 + 3);
  func_0x000107c278e8(puVar4 + 1);
  return puVar4;
}



/* Entry: 104bfdfb0; end: 104bfdfe7;  */

undefined8 * FUN_104bfdfb0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107e95a0;
  if (param_1[7] != 0) {
    func_0x0001003a81fc();
  }
  *param_1 = &PTR_DAT_110d76a50;
  FUN_104bfe1e0(param_1 + 3);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 104bfdfe8; end: 104bfdfeb;  */

undefined8 * FUN_104bfdfe8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107e95a0;
  if (param_1[7] != 0) {
    func_0x0001003a81fc();
  }
  *param_1 = &PTR_DAT_110d76a50;
  FUN_104bfe1e0(param_1 + 3);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 104bfdfec; end: 104bfdfff;  */

void FUN_104bfdfec(void)

{
  FUN_104bfdfb0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bfe000; end: 104bfe007;  */

undefined8 FUN_104bfe000(void)

{
  return 0;
}



/* Entry: 104bfe008; end: 104bfe047;  */

void FUN_104bfe008(undefined8 param_1)

{
  undefined1 auStack_30 [16];
  
  func_0x00010b9a8e18(auStack_30);
  func_0x000104bf351c(param_1,auStack_30);
  func_0x00010b9a8d98(auStack_30);
  return;
}



/* Entry: 104bfe048; end: 104bfe057;  */

void FUN_104bfe048(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 104bfe058; end: 104bfe08b;  */

undefined8 * FUN_104bfe058(undefined8 *param_1,long param_2,long param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_104bfe08c(param_1,param_2,param_2 + param_3 * 8,param_3);
  return param_1;
}



/* Entry: 104bfe08c; end: 104bfe0db;  */

void FUN_104bfe08c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_104bfe0dc(param_1,param_4);
    lVar1 = param_1 + 0x10;
    func_0x000104bfe194(lVar1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
    return;
  }
  return;
}



/* Entry: 104bfe0dc; end: 104bfe13b;  */

void FUN_104bfe0dc(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3d == 0) {
    plVar1 = param_1 + 2;
    FUN_104bfe148();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2);
  }
  else {
    FUN_104bfe13c();
    plVar1 = param_1 + 2;
    func_0x000104bfe194();
    param_1[1] = (long)plVar1;
  }
  return;
}



/* Entry: 104bfe13c; end: 104bfe147;  */

void FUN_104bfe13c(void)

{
  _abort();
  FUN_104bfe16c();
  return;
}



/* Entry: 104bfe148; end: 104bfe16b;  */

void FUN_104bfe148(void)

{
  FUN_104bfe16c();
  return;
}



/* Entry: 104bfe16c; end: 104bfe1a7;  */

/* WARNING: Possible PIC construction at 0x000104bfe184: Changing call to branch */

void FUN_104bfe16c(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 3);
    return;
  }
  _abort();
  FUN_104bfe1a8();
  return;
}



/* Entry: 104bfe1a8; end: 104bfe1df;  */

void FUN_104bfe1a8(undefined8 param_1,long *param_2,long *param_3,long *param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    lVar4 = *param_2;
    if (lVar4 != 0) {
      piVar1 = (int *)(lVar4 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *param_4 = lVar4;
    param_4 = param_4 + 1;
  }
  return;
}



/* Entry: 104bfe1e0; end: 104bfe24f;  */

undefined8 FUN_104bfe1e0(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x000104bfe214(&uStack_28);
  return param_1;
}



/* Entry: 104bfe250; end: 104bfe257;  */

void FUN_104bfe250(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -8;
    func_0x0001003a8c94();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 104bfe258; end: 104bfe2f3;  */

void FUN_104bfe258(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -8;
    func_0x0001003a8c94();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 104bfe2f4; end: 104bfe36b;  */

void FUN_104bfe2f4(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  
  if (param_1 != 0) {
    ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_1);
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar1 != (undefined **)0x0) goto LAB_104bfe32c;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110daae18;
LAB_104bfe32c:
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110daae38,param_2,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 104bfe36c; end: 104bfe3db;  */

/* WARNING: Removing unreachable block (ram,0x000104bfe3b0) */

long * FUN_104bfe36c(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar3 = param_1[1];
    lVar1 = lVar2;
    if (lVar2 != lVar3) {
      do {
        lVar3 = lVar3 + -0x18;
      } while (lVar3 != lVar2);
      lVar1 = *param_1;
    }
    param_1[1] = lVar2;
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 104bfe3dc; end: 104bfe417;  */

long * FUN_104bfe3dc(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    func_0x000100c93f9c(lVar1 + 8);
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 104bfe418; end: 104bfe42b;  */

char * FUN_104bfe418(void)

{
  char *pcVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  
  pcVar1 = "vector";
  FUN_104bd47e8();
  plVar4 = *(long **)pcVar1;
  if (plVar4 != (long *)0x0) {
    plVar5 = *(long **)(pcVar1 + 8);
    plVar2 = plVar4;
    if (plVar4 != plVar5) {
      do {
        plVar5 = plVar5 + -1;
        lVar3 = *plVar5;
        *plVar5 = 0;
        if (lVar3 != 0) {
          func_0x000100c93f9c(lVar3 + 8);
          __ZdlPv(lVar3);
        }
      } while (plVar5 != plVar4);
      plVar2 = *(long **)pcVar1;
    }
    *(long **)(pcVar1 + 8) = plVar4;
    __ZdlPv(plVar2);
  }
  return pcVar1;
}



/* Entry: 104bfe42c; end: 104bfe4a3;  */

undefined8 * FUN_104bfe42c(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)*param_1;
  if (plVar3 != (long *)0x0) {
    plVar4 = (long *)param_1[1];
    plVar1 = plVar3;
    if (plVar3 != plVar4) {
      do {
        plVar4 = plVar4 + -1;
        lVar2 = *plVar4;
        *plVar4 = 0;
        if (lVar2 != 0) {
          func_0x000100c93f9c(lVar2 + 8);
          __ZdlPv(lVar2);
        }
      } while (plVar4 != plVar3);
      plVar1 = (long *)*param_1;
    }
    param_1[1] = plVar3;
    __ZdlPv(plVar1);
  }
  return param_1;
}



/* Entry: 104bfe4a4; end: 104bfe4b7;  */

char * FUN_104bfe4a4(undefined8 param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  undefined8 *puVar2;
  undefined1 auStack_e0 [24];
  undefined1 uStack_c8;
  undefined1 auStack_c0 [24];
  undefined1 uStack_a8;
  uint uStack_a0;
  undefined1 uStack_9c;
  undefined1 uStack_98;
  undefined1 uStack_80;
  undefined1 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  pcVar1 = "vector";
  FUN_104bd47e8();
  auStack_e0[0] = 0;
  uStack_c8 = 0;
  auStack_c0[0] = 0;
  uStack_a8 = 0;
  uStack_a0 = uStack_a0 & 0xffffff00;
  uStack_9c = 0;
  uStack_98 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  switch(*param_2) {
  case 0:
  case 1:
    func_0x000104bfec48();
    func_0x000104bfec3c();
    break;
  case 2:
  case 3:
    func_0x000104bfec48();
    func_0x000104bfec3c();
    break;
  case 4:
  case 5:
    func_0x000104bfec48();
    func_0x000104bfec3c();
    break;
  case 6:
  case 7:
    func_0x000104bfec48();
    func_0x000104bfec3c();
    break;
  case 8:
    func_0x000104bfec48();
    func_0x000104bfec3c();
    goto code_r0x000104bfe5b0;
  case 9:
    func_0x000104bfec48();
    func_0x000104bfec3c();
    goto code_r0x000104bfe5b0;
  case 10:
    func_0x000104bfec48();
    func_0x000104bfec3c();
code_r0x000104bfe5b0:
    func_0x000104bfec64();
    uStack_a0 = 1;
    uStack_9c = 1;
  default:
    goto LAB_104bfe5c0;
  }
  func_0x000104bfec64();
LAB_104bfe5c0:
  func_0x0001002a8234(auStack_c0,param_2 + 8);
  *(undefined ***)pcVar1 = &PTR_FUN_1107e96c0;
  FUN_104bfeccc(&uStack_50,param_3,param_4,auStack_e0);
  puVar2 = (undefined8 *)0x30;
  __Znwm();
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_1107e96e0;
  uStack_68 = uStack_48;
  uStack_70 = uStack_50;
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x0001073a8fe0(puVar2 + 3,&uStack_70);
  func_0x000100561f40(&uStack_70);
  *(undefined8 **)(pcVar1 + 8) = puVar2 + 3;
  *(undefined8 **)(pcVar1 + 0x10) = puVar2;
  func_0x000100561f40(&uStack_50);
  FUN_104bfe868(auStack_e0);
  *(undefined ***)pcVar1 = &PTR_FUN_1107e9608;
  return pcVar1;
}



/* Entry: 104bfe4b8; end: 104bfe6cb;  */

undefined8 *
FUN_104bfe4b8(undefined8 *param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined1 auStack_d0 [24];
  undefined1 uStack_b8;
  undefined1 auStack_b0 [24];
  undefined1 uStack_98;
  uint uStack_90;
  undefined1 uStack_8c;
  undefined1 uStack_88;
  undefined1 uStack_70;
  undefined1 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  auStack_d0[0] = 0;
  uStack_b8 = 0;
  auStack_b0[0] = 0;
  uStack_98 = 0;
  uStack_90 = uStack_90 & 0xffffff00;
  uStack_8c = 0;
  uStack_88 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  switch(*param_2) {
  case 0:
  case 1:
    func_0x000104bfec48(param_1,&PTR_s_aws_api_snapchat_com_443_1107e9640);
    func_0x000104bfec3c();
    break;
  case 2:
  case 3:
    func_0x000104bfec48(param_1,&PTR_s_ingress_us_east1_aws_api_snapcha_1107e9660);
    func_0x000104bfec3c();
    break;
  case 4:
  case 5:
    func_0x000104bfec48(param_1,&PTR_s_valis_mesh_sc_corp_net_443_1107e9650);
    func_0x000104bfec3c();
    break;
  case 6:
  case 7:
    func_0x000104bfec48(param_1,&PTR_s_web_snapchat_com_443_1107e9670);
    func_0x000104bfec3c();
    break;
  case 8:
    func_0x000104bfec48(param_1,&PTR_s_valis_snap_80_1107e9690);
    func_0x000104bfec3c();
    goto code_r0x000104bfe5b0;
  case 9:
    func_0x000104bfec48(param_1,&PTR_s_valis_prod_snap_80_1107e9680);
    func_0x000104bfec3c();
    goto code_r0x000104bfe5b0;
  case 10:
    func_0x000104bfec48(param_1,&PTR_s_localhost_8080_1107e96a0);
    func_0x000104bfec3c();
code_r0x000104bfe5b0:
    func_0x000104bfec64();
    uStack_90 = 1;
    uStack_8c = 1;
  default:
    goto LAB_104bfe5c0;
  }
  func_0x000104bfec64();
LAB_104bfe5c0:
  func_0x0001002a8234(auStack_b0,param_2 + 8);
  *param_1 = &PTR_FUN_1107e96c0;
  FUN_104bfeccc(&uStack_40,param_3,param_4,auStack_d0);
  puVar1 = (undefined8 *)0x30;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_1107e96e0;
  uStack_58 = uStack_38;
  uStack_60 = uStack_40;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x0001073a8fe0(puVar1 + 3,&uStack_60);
  func_0x000100561f40(&uStack_60);
  param_1[1] = puVar1 + 3;
  param_1[2] = puVar1;
  func_0x000100561f40(&uStack_40);
  FUN_104bfe868(auStack_d0);
  *param_1 = &PTR_FUN_1107e9608;
  return param_1;
}



/* Entry: 104bfe6cc; end: 104bfe82b;  */

undefined8 ** FUN_104bfe6cc(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 **ppuVar5;
  undefined8 **ppuVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  undefined1 auStack_110 [8];
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined1 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_108 = 1;
  puVar3 = (undefined8 *)0x40;
  __Znwm();
  plVar7 = puVar3 + 1;
  *plVar7 = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_1107e9730;
  puVar8 = puVar3 + 3;
  *puVar8 = &PTR_FUN_1107e9780;
  puStack_100 = puVar3;
  FUN_104bfeaa4(puVar3 + 4,param_4);
  puStack_100 = (undefined8 *)0x0;
  puStack_120 = puVar8;
  puStack_118 = puVar3;
  func_0x000104bfe918(auStack_110);
  uVar4 = *(undefined8 *)(param_2 + 8);
  auStack_110[0] = 0;
  uStack_60 = 0;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar2) {
      *plVar7 = *plVar7 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  puStack_140 = puVar8;
  puStack_138 = puVar3;
  func_0x0001073a9014(&uStack_130,uVar4,auStack_110,&puStack_140);
  param_1[1] = uStack_128;
  *param_1 = uStack_130;
  uStack_130 = 0;
  uStack_128 = 0;
  func_0x000104bfec18(&uStack_130);
  func_0x000104bfebf4(&puStack_140);
  func_0x000100609698(auStack_110);
  ppuVar5 = &puStack_120;
  FUN_104bfe82c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return ppuVar5;
  }
  ___stack_chk_fail();
  func_0x000104bfebf4(&puStack_140);
  func_0x000100609698(auStack_110);
  ppuVar6 = &puStack_120;
  FUN_104bfe82c();
  func_0x000104bfec50();
  func_0x000100561f34();
  if (ppuVar6 != (undefined8 **)0x0) {
    func_0x0001000df548();
  }
  return ppuVar5;
}



/* Entry: 104bfe82c; end: 104bfe84f;  */

void FUN_104bfe82c(long param_1)

{
  func_0x000100561f34();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 104bfe850; end: 104bfe853;  */

undefined8 * FUN_104bfe850(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107e96c0;
  if (param_1[2] != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 104bfe854; end: 104bfe867;  */

void FUN_104bfe854(void)

{
  FUN_104bfe8e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bfe868; end: 104bfe897;  */

/* WARNING: Possible PIC construction at 0x000104bfe87c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104bfe880) */

void FUN_104bfe868(long param_1)

{
  if (*(char *)(param_1 + 0x60) == '\x01') {
    func_0x000107c60ca0();
  }
  return;
}



/* Entry: 104bfe898; end: 104bfe89b;  */

undefined8 * FUN_104bfe898(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107e96c0;
  if (param_1[2] != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 104bfe89c; end: 104bfe8af;  */

void FUN_104bfe89c(void)

{
  FUN_104bfe8e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bfe8b0; end: 104bfe8b3;  */

void FUN_104bfe8b0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107e96e0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104bfe8b4; end: 104bfe8c7;  */

void FUN_104bfe8b4(void)

{
  func_0x000104bfe8d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bfe8c8; end: 104bfe8e3;  */

void FUN_104bfe8c8(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000100561f34();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 104bfe8e4; end: 104bfe93f;  */

undefined8 * FUN_104bfe8e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107e96c0;
  if (param_1[2] != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 104bfe940; end: 104bfe94f;  */

void FUN_104bfe940(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107e9730;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104bfe950; end: 104bfe963;  */

void FUN_104bfe950(void)

{
  FUN_104bfe940();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bfe964; end: 104bfe973;  */

void FUN_104bfe964(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104bfe96c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 104bfe974; end: 104bfe99f;  */

undefined8 * FUN_104bfe974(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107e9780;
  func_0x000104bfeb04(param_1 + 1);
  return param_1;
}



/* Entry: 104bfe9a0; end: 104bfe9b3;  */

void FUN_104bfe9a0(void)

{
  FUN_104bfe974();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bfe9b4; end: 104bfea0b;  */

void FUN_104bfe9b4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  func_0x00010002b838(auStack_38,"[Location]");
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_50,param_3 + 8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_50);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
  return;
}



/* Entry: 104bfea0c; end: 104bfea6f;  */

void FUN_104bfea0c(long param_1)

{
  code *pcVar1;
  long *plVar2;
  undefined1 auStack_50 [40];
  undefined4 uStack_28;
  
  func_0x00010b5d0b14(auStack_50,0);
  uStack_28 = 0;
  plVar2 = *(long **)(param_1 + 0x20);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x30))(plVar2,auStack_50);
    FUN_104bfeb94(auStack_50);
    return;
  }
  FUN_104bfeb48();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104bfea60);
  (*pcVar1)();
}



/* Entry: 104bfea70; end: 104bfea9f;  */

void FUN_104bfea70(void)

{
  undefined1 auStack_28 [24];
  
  func_0x00010002b838(auStack_28,"[Location]");
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_28);
  return;
}



/* Entry: 104bfeaa0; end: 104bfeaa3;  */

void FUN_104bfeaa0(void)

{
  return;
}



/* Entry: 104bfeaa4; end: 104bfeb47;  */

long FUN_104bfeaa4(long param_1,long *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)param_2[3];
  if (plVar1 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (plVar1 == param_2) {
    *(long *)(param_1 + 0x18) = param_1;
    (**(code **)(*(long *)param_2[3] + 0x18))((long *)param_2[3],param_1);
  }
  else {
    (**(code **)(*plVar1 + 0x10))();
    *(long **)(param_1 + 0x18) = plVar1;
  }
  return param_1;
}



/* Entry: 104bfeb48; end: 104bfeb7b;  */

void FUN_104bfeb48(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x8;
  ___cxa_allocate_exception();
  *puVar1 = &PTR_FUN_1107e9838;
  ___cxa_throw();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)();
  return;
}



/* Entry: 104bfeb7c; end: 104bfeb7f;  */

void FUN_104bfeb7c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)();
  return;
}



/* Entry: 104bfeb80; end: 104bfeb93;  */

void FUN_104bfeb80(void)

{
  __ZNSt9exceptionD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bfeb94; end: 104bfebe7;  */

void FUN_104bfeb94(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x28) != 0xffffffff) {
    (*(code *)(&PTR_FUN_1107e9800)[*(uint *)(param_1 + 0x28)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  return;
}



/* Entry: 104bfebe8; end: 104bfebf3;  */

undefined8 FUN_104bfebe8(undefined8 param_1,undefined8 param_2)

{
  func_0x00010b5d239c();
  func_0x00010b5d0be4(param_2);
  return param_2;
}



/* Entry: 104bfebf4; end: 104bfec3b;  */

void FUN_104bfebf4(long param_1)

{
  func_0x000100561f34();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 104bfec3c; end: 104bfec6b;  */

void FUN_104bfec3c(void)

{
  long unaff_x29;
  char in_stack_00000018;
  
  if (in_stack_00000018 == '\x01') {
    func_0x000100066230();
  }
  else {
    *(undefined8 *)(unaff_x29 + -0x48) = 0;
    *(undefined8 *)(unaff_x29 + -0x40) = 0;
    *(undefined8 *)(unaff_x29 + -0x50) = 0;
  }
  return;
}



/* Entry: 104bfec6c; end: 104bfecaf;  */

void FUN_104bfec6c(undefined8 param_1,undefined8 param_2)

{
  undefined4 uStack_24;
  
  uStack_24 = 0x14;
  func_0x00010028b86c();
  FUN_104bfecb0(param_1,"maps",&uStack_24,param_2);
  return;
}



/* Entry: 104bfecb0; end: 104bfeccb;  */

void FUN_104bfecb0(void)

{
  func_0x00010055f46c();
  FUN_104bff9b8();
  return;
}



/* Entry: 104bfeccc; end: 104bff063;  */

void FUN_104bfeccc(undefined8 param_1,undefined8 *param_2,undefined8 param_3,long param_4)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  long lVar4;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w11;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_48;
  
  puVar3 = param_2;
  func_0x0001004b9648();
  uStack_48 = extraout_x8;
  func_0x0001008337f0();
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_SUB_1107e9918;
  puVar5 = puVar3 + 3;
  *puVar5 = &PTR_FUN_1107e9968;
  lVar4 = param_2[1];
  uVar6 = *param_2;
  puVar3[7] = param_2[1];
  puVar3[6] = uVar6;
  puStack_b0 = puVar5;
  puStack_a8 = puVar3;
  puStack_98 = puVar5;
  puStack_90 = puVar3;
  if (lVar4 != 0) {
    do {
      func_0x00010048ab88();
    } while (extraout_w11 != 0);
  }
  do {
    func_0x000100489994();
  } while (extraout_w10 != 0);
  do {
    func_0x000100489994();
  } while (extraout_w10_00 != 0);
  uStack_80 = 0;
  uStack_78 = 0;
  puVar3[4] = puVar5;
  puVar3[5] = puVar3;
  func_0x000104bff3ec(&uStack_80);
  FUN_104bff064(&puStack_98);
  func_0x000100489618(&uStack_80,1);
  puStack_70[2] = 0;
  *puStack_70 = &PTR_FUN_1107e9880;
  puStack_70[1] = 0;
  puStack_b0 = (undefined8 *)0x0;
  puStack_a8 = (undefined8 *)0x0;
  puStack_98 = puVar5;
  puStack_90 = puVar3;
  func_0x000100489728(puStack_70 + 3,&puStack_98);
  func_0x00010048b850(&puStack_98);
  puStack_b8 = puStack_70;
  puStack_70 = (undefined8 *)0x0;
  puStack_c0 = puStack_b8 + 3;
  func_0x000100489a40(&uStack_80);
  FUN_104bff064(&puStack_b0);
  uVar2 = *(undefined1 *)(param_4 + 0x68);
  puVar3 = (undefined8 *)0x28;
  __Znwm();
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_1107e9b28;
  puStack_d0 = puVar3 + 3;
  *puStack_d0 = &PTR_DAT_1107e9b78;
  *(undefined1 *)(puVar3 + 4) = uVar2;
  puStack_c8 = puVar3;
  func_0x00010055c758(&puStack_d8);
  puVar3 = puStack_d8;
  func_0x000100638a28(&uStack_80,param_4,&PTR_s_aws_api_snapchat_com_1107e9bb0);
  func_0x00010046a75c(puVar3,&uStack_80);
  func_0x000104c01be0();
  uVar1 = *(undefined4 *)(param_4 + 0x40);
  if (*(char *)(param_4 + 0x44) == '\0') {
    uVar1 = 3;
  }
  func_0x00010046a890(puStack_d8,uVar1);
  uVar2 = *(char *)(param_4 + 0x60) == '\x01';
  if ((bool)uVar2) {
    func_0x000100468be4(&uStack_80);
    func_0x00010002b838(&puStack_98,"grpc.authority_override");
    func_0x000100469094(&uStack_80,&puStack_98,param_4 + 0x48);
    func_0x000104c01b74();
    func_0x000100469c74(puStack_d8,&uStack_80);
    func_0x00010046a1bc(&uStack_80);
  }
  func_0x000104c01be8();
  func_0x00010002b838(&uStack_80);
  func_0x000100638a28(&puStack_98,param_4,&PTR_s_aws_api_snapchat_com_1107e9bb0);
  func_0x000104bff97c(&puStack_b0,param_4 + 0x48,"");
  func_0x00010055f464();
  func_0x000104c01b74();
  func_0x000104c01be0();
  func_0x00010055d588(&uStack_80,1);
  puStack_98 = puStack_d8;
  puStack_70[2] = 0;
  *puStack_70 = &PTR_DAT_1107e9bc8;
  puStack_70[1] = 0;
  puStack_d8 = (undefined8 *)0x0;
  func_0x00010055d67c(puStack_70 + 3,param_3,&puStack_c0,&puStack_d0,&puStack_98,0xc,0,0);
  func_0x00010055f5a0(&puStack_98);
  puVar3 = puStack_70;
  puStack_70 = (undefined8 *)0x0;
  func_0x000100561d68(param_1,puVar3 + 3);
  func_0x000100561e6c(&uStack_80);
  func_0x000100561d3c();
  func_0x000100561d44(&puStack_d0);
  func_0x00010048b4e8(&puStack_c0);
  func_0x0001004b9658(uStack_48);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x00010046a1bc(&uStack_80);
    func_0x000100561d3c();
    do {
      func_0x000100561d44(&puStack_d0);
      func_0x00010048b4e8(&puStack_c0);
      func_0x000104c01a98();
    } while( true );
  }
  return;
}



/* Entry: 104bff064; end: 104bff087;  */

void FUN_104bff064(long param_1)

{
  func_0x000100450bd8();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 104bff088; end: 104bff08b;  */

void FUN_104bff088(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107e9880;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104bff08c; end: 104bff09f;  */

void FUN_104bff08c(void)

{
  FUN_104bff1f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bff0a0; end: 104bff0a7;  */

void FUN_104bff0a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104c01a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 104bff0a8; end: 104bff0cb;  */

void FUN_104bff0a8(undefined8 param_1)

{
  undefined8 *unaff_x19;
  
  func_0x00010046e2dc();
  func_0x00010002c810();
  *unaff_x19 = param_1;
  return;
}



/* Entry: 104bff0cc; end: 104bff0f3;  */

undefined8 FUN_104bff0cc(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  FUN_104bff0f4(&uStack_18);
  return uStack_18;
}



/* Entry: 104bff0f4; end: 104bff19b;  */

void FUN_104bff0f4(undefined8 param_1,long param_2)

{
  long unaff_x19;
  
  func_0x0001001246dc();
  if (param_2 < 0) {
    for (; unaff_x19 != 0; unaff_x19 = unaff_x19 + 1) {
      FUN_104bff0a8();
    }
  }
  else {
    while (0 < unaff_x19) {
      func_0x000104bff138();
      unaff_x19 = unaff_x19 + -1;
    }
  }
  return;
}



/* Entry: 104bff19c; end: 104bff19f;  */

long FUN_104bff19c(long param_1)

{
  long lVar1;
  undefined8 extraout_x8;
  undefined8 *unaff_x20;
  
  lVar1 = param_1;
  func_0x000104c01b44(&UNK_1107e98d8);
  *unaff_x20 = extraout_x8;
  func_0x0001001c1d38(lVar1 + 0x18);
  func_0x00010048b850(unaff_x20 + 1);
  return param_1;
}



/* Entry: 104bff1a0; end: 104bff1b3;  */

void FUN_104bff1a0(void)

{
  FUN_104bff1b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bff1b4; end: 104bff1ef;  */

long FUN_104bff1b4(long param_1)

{
  long lVar1;
  undefined8 extraout_x8;
  undefined8 *unaff_x20;
  
  lVar1 = param_1;
  func_0x000104c01b44(&UNK_1107e98d8);
  *unaff_x20 = extraout_x8;
  func_0x0001001c1d38(lVar1 + 0x18);
  func_0x00010048b850(unaff_x20 + 1);
  return param_1;
}



/* Entry: 104bff1f0; end: 104bff207;  */

void FUN_104bff1f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107e9880;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104bff208; end: 104bff21b;  */

void FUN_104bff208(void)

{
  func_0x000104bff1fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bff21c; end: 104bff223;  */

void FUN_104bff21c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104c01a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 104bff224; end: 104bff25f;  */

undefined8 * FUN_104bff224(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107e9968;
  FUN_104bff3c8(param_1 + 3);
  func_0x000104bff3ec(param_1 + 1);
  return param_1;
}



/* Entry: 104bff260; end: 104bff273;  */

void FUN_104bff260(void)

{
  FUN_104bff224();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bff274; end: 104bff3c7;  */

undefined *** FUN_104bff274(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 in_ZR;
  undefined8 *puVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 uStack_88;
  long lStack_80;
  undefined **ppuStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined **ppuStack_58;
  undefined8 *puStack_50;
  long lStack_48;
  undefined ***pppuStack_40;
  undefined8 uStack_38;
  
  func_0x0001004b9648();
  uStack_38 = extraout_x8;
  if (param_1[3] == 0) {
    func_0x000104c01be8();
    func_0x00010002b838(&ppuStack_58);
    pppuVar4 = &ppuStack_58;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  else {
    uVar1 = *param_3;
    lVar2 = param_3[1];
    puVar3 = param_1;
    uStack_88 = uVar1;
    lStack_80 = lVar2;
    if (lVar2 != 0) {
      do {
        func_0x000100489994();
      } while (extraout_w10 != 0);
    }
    func_0x0001008337f0();
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = &PTR_FUN_1107e99e8;
    uStack_68 = uVar1;
    lStack_60 = lVar2;
    puStack_50 = (undefined8 *)uVar1;
    if (lVar2 == 0) {
      lStack_48 = 0;
    }
    else {
      do {
        func_0x000100489994();
        lStack_48 = lVar2;
      } while (extraout_w10_00 != 0);
      do {
        func_0x000100489994();
      } while (extraout_w10_01 != 0);
    }
    pppuStack_40 = &ppuStack_58;
    ppuStack_58 = &PTR_FUN_1107e9a38;
    puVar3[3] = &PTR_SUB_1107e9ac8;
    FUN_104bff864(puVar3 + 4,&ppuStack_58);
    FUN_104bff8d8(&ppuStack_58);
    func_0x00010049410c(&uStack_68);
    func_0x00010049410c(&uStack_88);
    ppuStack_78 = (undefined **)0x0;
    uStack_70 = 0;
    ppuStack_58 = (undefined **)(puVar3 + 3);
    puStack_50 = puVar3;
    func_0x000104c01a80(param_1[3]);
    (*extraout_x8_00)();
    func_0x000104bff90c(&ppuStack_58);
    pppuVar4 = &ppuStack_78;
    func_0x000104bff410();
  }
  func_0x0001004b9658(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    pppuVar5 = pppuVar4;
    func_0x000104c01a98();
    func_0x000100450bd8();
    if (pppuVar5 != (undefined ***)0x0) {
      func_0x0001000df548();
    }
    return pppuVar4;
  }
  return pppuVar4;
}



/* Entry: 104bff3c8; end: 104bff433;  */

void FUN_104bff3c8(long param_1)

{
  func_0x000100450bd8();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 104bff434; end: 104bff43f;  */

void FUN_104bff434(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107e99e8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104bff440; end: 104bff453;  */

void FUN_104bff440(void)

{
  FUN_104bff434();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bff454; end: 104bff45b;  */

void FUN_104bff454(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104c01a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


