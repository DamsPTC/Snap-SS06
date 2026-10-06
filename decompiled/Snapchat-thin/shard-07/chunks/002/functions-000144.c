/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1052af81c; end: 1052af8b7;  */

undefined8 FUN_1052af81c(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lStack_20;
  undefined2 uStack_18;
  
  if ((bRam0000000113818ef8 & 1) == 0) {
    iVar4 = 0x13818ef8;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      FUN_1052af8b8();
      lStack_20 = lRam0000000113818f00;
      if (lRam0000000113818f00 != 0) {
        piVar1 = (int *)(lRam0000000113818f00 + 8);
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
      func_0x0001003ad9a4(0x113818ee8,&lStack_20);
      func_0x0001003a8c94(&lStack_20);
      ___cxa_guard_release(0x113818ef8);
    }
  }
  return 0x113818ee8;
}



/* Entry: 1052af8b8; end: 1052af90b;  */

void FUN_1052af8b8(void)

{
  int iVar1;
  
  if ((bRam0000000113818f08 & 1) == 0) {
    iVar1 = 0x13818f08;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(0x113818f00,"_djinni_interface_StreamerCallback");
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x113818f08);
      return;
    }
  }
  return;
}



/* Entry: 1052af90c; end: 1052af913;  */

void FUN_1052af90c(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)(param_1 + 8);
  func_0x0001003adc0c();
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))();
  }
  return;
}



/* Entry: 1052af914; end: 1052afa53;  */

undefined1 * FUN_1052af914(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  int iVar4;
  undefined1 *puVar5;
  undefined8 extraout_x8;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x0001052b035c();
  uStack_38 = extraout_x8;
  FUN_1052afa54();
  func_0x0001003b2110(auStack_58,0x113818f38);
  lStack_70 = 0x1052afb44;
  uStack_60 = param_2[1];
  uStack_68 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_1052afab4(auStack_48,&lStack_70);
  func_0x000104bdb9bc(auStack_50,auStack_58,auStack_48,1);
  func_0x00010b9a8d98(auStack_48);
  func_0x0001052aad20(&uStack_68);
  func_0x0001003b1f60(auStack_58);
  func_0x0001052afb7c(&lStack_70,auStack_50,param_2);
  if ((lStack_70 != 0) && (*(long *)(lStack_70 + 0x10) != 0)) {
    plVar1 = (long *)(*(long *)(lStack_70 + 0x10) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lStack_70;
  FUN_1052b0314(&lStack_70);
  puVar5 = auStack_50;
  func_0x000104bdbf78(puVar5);
  func_0x0001052b0348(uStack_38);
  if ((bool)in_ZR) {
    return puVar5;
  }
  ___stack_chk_fail();
  func_0x000104bdbf78(auStack_50);
  __Unwind_Resume(puVar5);
  if ((bRam0000000113818f40 & 1) == 0) {
    iVar4 = 0x13818f40;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      FUN_1052afd94();
      FUN_1052afde8(0x113818f30,0x113818f60);
      ___cxa_guard_release(0x113818f40);
    }
  }
  return (undefined1 *)0x113818f30;
}



/* Entry: 1052afa54; end: 1052afab3;  */

undefined8 FUN_1052afa54(void)

{
  int iVar1;
  
  if ((bRam0000000113818f40 & 1) == 0) {
    iVar1 = 0x13818f40;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_1052afd94();
      FUN_1052afde8(0x113818f30,0x113818f60);
      ___cxa_guard_release(0x113818f40);
    }
  }
  return 0x113818f30;
}



/* Entry: 1052afab4; end: 1052afb43;  */

void FUN_1052afab4(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_30;
  long lStack_28;
  
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_40 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  FUN_1052afe60(&lStack_30,&uStack_50);
  if (lStack_30 != 0) {
    plVar1 = (long *)(lStack_30 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lStack_28 = lStack_30;
  func_0x00010b9a8ef8(param_1,&lStack_28);
  func_0x000104bda388(&lStack_28);
  func_0x000104bda3d0(&lStack_30);
  func_0x0001052aad20((ulong)&uStack_50 | 8);
  return;
}



/* Entry: 1052afb44; end: 1052afbbf;  */

void FUN_1052afb44(undefined8 *param_1,undefined8 *param_2)

{
  (**(code **)(*(long *)*param_2 + 0x10))();
  *(undefined2 *)(param_1 + 1) = 1;
  *param_1 = 0;
  return;
}



/* Entry: 1052afbc0; end: 1052afcf7;  */

void FUN_1052afbc0(ulong param_1)

{
  byte bVar1;
  undefined1 in_ZR;
  int iVar2;
  undefined8 extraout_x8;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [16];
  undefined8 uStack_28;
  
  func_0x0001052b035c();
  bVar1 = *(byte *)((param_1 & 0xffffffff) + 0x113818f10);
  *(undefined1 *)((param_1 & 0xffffffff) + 0x113818f10) = 1;
  uStack_28 = extraout_x8;
  if ((bVar1 & 1) != 0) goto LAB_1052afc10;
  if ((bRam0000000113818f58 & 1) == 0) goto LAB_1052afc30;
  while( true ) {
    func_0x000108b80888(0x113818f48);
LAB_1052afc10:
    func_0x0001052b0348(uStack_28);
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
LAB_1052afc30:
    iVar2 = 0x13818f58;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      FUN_1052afd94();
      func_0x0001003a83dc(&uStack_48,"cancel");
      func_0x0001003b166c(auStack_68);
      func_0x000104bdbd48(auStack_58,auStack_68,0,0);
      uStack_40 = uStack_48;
      uStack_48 = 0;
      func_0x0001003aef98(auStack_38,auStack_58);
      func_0x000104bdbd44(0x113818f48,0x113818f60,1,&uStack_40,1);
      func_0x0001003b1c5c(&uStack_40);
      func_0x0001003adc18(auStack_50);
      func_0x0001003adc18(auStack_60);
      func_0x0001003a8c94(&uStack_48);
      ___cxa_guard_release(0x113818f58);
    }
  }
  return;
}



/* Entry: 1052afcf8; end: 1052afd93;  */

undefined8 FUN_1052afcf8(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lStack_20;
  undefined2 uStack_18;
  
  if ((bRam0000000113818f28 & 1) == 0) {
    iVar4 = 0x13818f28;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      FUN_1052afd94();
      lStack_20 = lRam0000000113818f60;
      if (lRam0000000113818f60 != 0) {
        piVar1 = (int *)(lRam0000000113818f60 + 8);
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
      func_0x0001003ad9a4(0x113818f18,&lStack_20);
      func_0x0001003a8c94(&lStack_20);
      ___cxa_guard_release(0x113818f28);
    }
  }
  return 0x113818f18;
}



/* Entry: 1052afd94; end: 1052afde7;  */

void FUN_1052afd94(void)

{
  int iVar1;
  
  if ((bRam0000000113818f68 & 1) == 0) {
    iVar1 = 0x13818f68;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(0x113818f60,"_djinni_interface_StreamerCancelable");
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x113818f68);
      return;
    }
  }
  return;
}



/* Entry: 1052afde8; end: 1052afe5f;  */

void FUN_1052afde8(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined1 auStack_40 [16];
  byte bStack_30;
  undefined8 uStack_28;
  
  FUN_1052afbc0(0);
  FUN_1052afbc0(1);
  func_0x00010b9941f8(&uStack_28);
  func_0x00010b993b40(auStack_40,uStack_28,param_2);
  if ((bStack_30 & 1) != 0) {
    func_0x0001003adcc0(param_1,auStack_40);
    func_0x0001003b12dc(auStack_40);
    func_0x000104bdc2fc(&uStack_28);
    return;
  }
  func_0x000104bdc2c8();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1052afe5c);
  (*pcVar1)();
}



/* Entry: 1052afe60; end: 1052afefb;  */

void FUN_1052afe60(undefined8 *param_1,undefined8 *param_2)

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
  
  func_0x0001052b035c();
  uVar1 = 0x40;
  uStack_38 = extraout_x8;
  __Znwm();
  pcStack_68 = FUN_1052afefc;
  ppuStack_60 = &PTR_FUN_110874f60;
  uStack_50 = param_2[1];
  uStack_58 = *param_2;
  uStack_48 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  ppcVar3 = &pcStack_68;
  uVar2 = uVar1;
  func_0x00010b9ac22c();
  *param_1 = uVar1;
  func_0x0001052b0374();
  func_0x0001052b0348(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001052b0374();
  __ZdlPv(uVar1);
  __Unwind_Resume(uVar2);
  (*ppcVar3[2])(ppcVar3 + 3,uVar2);
  return;
}



/* Entry: 1052afefc; end: 1052aff6b;  */

void FUN_1052afefc(undefined8 param_1,long param_2)

{
  (**(code **)(param_2 + 0x10))(param_2 + 0x18,param_1);
  return;
}



/* Entry: 1052aff6c; end: 1052affcf;  */

long FUN_1052aff6c(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x0001000df548();
  }
  return param_1 + 0x10;
}



/* Entry: 1052affd0; end: 1052afff7;  */

void FUN_1052affd0(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  FUN_1052afff8(&uStack_11,param_1,param_2);
  return;
}



/* Entry: 1052afff8; end: 1052b0097;  */

void FUN_1052afff8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  func_0x0001052b035c();
  uStack_38 = extraout_x8;
  FUN_1052b00b4(auStack_50,1);
  FUN_1052b0108(lStack_40,param_3,param_4);
  lVar6 = lStack_40;
  lStack_40 = 0;
  FUN_1052b0098(param_1,lVar6 + 0x18);
  FUN_1052b0304();
  func_0x0001052b0348(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  FUN_1052b0304(auStack_50);
  __Unwind_Resume();
  *extraout_x8_00 = puVar5;
  extraout_x8_00[1] = lVar6;
  puVar2 = (undefined1 *)0x0;
  if (puVar5 != (undefined1 *)0x0) {
    puVar2 = puVar5 + 8;
  }
  if ((puVar2 != (undefined1 *)0x0) &&
     ((*(long *)(puVar2 + 8) == 0 || (*(long *)(*(long *)(puVar2 + 8) + 8) == -1)))) {
    pcStack_58 = FUN_1052b0098;
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



/* Entry: 1052b0098; end: 1052b00b3;  */

void FUN_1052b0098(long *param_1,long param_2,long param_3)

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



/* Entry: 1052b00b4; end: 1052b00db;  */

long FUN_1052b00b4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_1052b00dc();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 1052b00dc; end: 1052b0107;  */

undefined8 * FUN_1052b00dc(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x333333333333334) {
    puVar1 = (undefined8 *)(param_2 * 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110874f90;
  FUN_1052b0174(param_1 + 3);
  return param_1;
}



/* Entry: 1052b0108; end: 1052b014b;  */

undefined8 * FUN_1052b0108(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110874f90;
  FUN_1052b0174(param_1 + 3);
  return param_1;
}



/* Entry: 1052b014c; end: 1052b014f;  */

void FUN_1052b014c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110874f90;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1052b0150; end: 1052b0163;  */

void FUN_1052b0150(void)

{
  FUN_1052b0288();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1052b0164; end: 1052b0173;  */

void FUN_1052b0164(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001052b016c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1052b0174; end: 1052b01bf;  */

void FUN_1052b0174(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  func_0x00010b9ace44();
  *param_1 = &PTR_FUN_110874fe0;
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



/* Entry: 1052b01c0; end: 1052b01c3;  */

void FUN_1052b01c0(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uStack_28;
  
  *param_1 = &PTR_FUN_110874fe0;
  __ZNSt3__15mutex4lockEv(0x11328ada8);
  puVar3 = param_1 + 5;
  uStack_28 = *puVar3;
  lVar2 = 0x11328ad40;
  func_0x000104bdbfcc(0x11328ad40,&uStack_28);
  iVar1 = *(int *)(lVar2 + 0x28) + -1;
  *(int *)(lVar2 + 0x28) = iVar1;
  if (iVar1 == 0) {
    uStack_28 = *puVar3;
    func_0x000104bdc09c(0x11328ad40,&uStack_28);
  }
  __ZNSt3__15mutex6unlockEv(0x11328ada8);
  func_0x0001052aad20(puVar3);
  func_0x00010b9ace94(param_1);
  return;
}



/* Entry: 1052b01c4; end: 1052b01d7;  */

void FUN_1052b01c4(void)

{
  FUN_1052b01e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1052b01d8; end: 1052b01e7;  */

undefined1  [16] FUN_1052b01d8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x10;
  auVar1._0_8_ = "Djinni C++ Proxy";
  return auVar1;
}



/* Entry: 1052b01e8; end: 1052b0287;  */

void FUN_1052b01e8(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uStack_28;
  
  *param_1 = &PTR_FUN_110874fe0;
  __ZNSt3__15mutex4lockEv(0x11328ada8);
  puVar3 = param_1 + 5;
  uStack_28 = *puVar3;
  lVar2 = 0x11328ad40;
  func_0x000104bdbfcc(0x11328ad40,&uStack_28);
  iVar1 = *(int *)(lVar2 + 0x28) + -1;
  *(int *)(lVar2 + 0x28) = iVar1;
  if (iVar1 == 0) {
    uStack_28 = *puVar3;
    func_0x000104bdc09c(0x11328ad40,&uStack_28);
  }
  __ZNSt3__15mutex6unlockEv(0x11328ada8);
  func_0x0001052aad20(puVar3);
  func_0x00010b9ace94(param_1);
  return;
}



/* Entry: 1052b0288; end: 1052b0297;  */

void FUN_1052b0288(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110874f90;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1052b0298; end: 1052b0303;  */

void FUN_1052b0298(long param_1,long param_2,undefined8 param_3)

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



/* Entry: 1052b0304; end: 1052b0313;  */

void FUN_1052b0304(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1052b0314; end: 1052b033b;  */

undefined8 * FUN_1052b0314(undefined8 *param_1)

{
  FUN_1052b033c(*param_1);
  return param_1;
}



/* Entry: 1052b033c; end: 1052b039f;  */

void FUN_1052b033c(long param_1)

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



/* Entry: 1052b03a0; end: 1052b0467;  */

undefined1 * FUN_1052b03a0(undefined8 param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  char *pcVar2;
  int iVar3;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  undefined2 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_1052b0468();
  func_0x0001003b2110(auStack_48,0x113818f78);
  uStack_38 = *param_2;
  uStack_30 = 5;
  func_0x000104bdb9bc(auStack_40,auStack_48,&uStack_38,1);
  func_0x00010b9a8d98(&uStack_38);
  func_0x0001003b1f60(auStack_48);
  iVar3 = (int)auStack_40;
  func_0x00010b9a8f60(param_1);
  puVar1 = auStack_40;
  func_0x000104bdbf78(puVar1);
  FUN_1052b054c(uStack_28);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x00010b9a8d98(&uStack_38);
  func_0x0001003b1f60(auStack_48);
  __Unwind_Resume(puVar1);
  pcStack_58 = FUN_1052b0468;
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((bRam0000000113818f80 & 1) == 0) {
    puVar1 = (undefined1 *)0x113818f80;
    ___cxa_guard_acquire();
    if ((int)puVar1 != 0) {
      func_0x0001003a83dc(auStack_88,"_djinni_record_StreamerMetadata");
      pcVar2 = "contentLength";
      func_0x0001003a83dc(auStack_90,"contentLength");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_80,auStack_90,pcVar2);
      iVar3 = 0;
      func_0x000104bdbd44(0x113818f70,auStack_88,0,auStack_80,1);
      func_0x0001003b1c5c(auStack_80);
      func_0x0001003a8c94(auStack_90);
      func_0x0001003a8c94(auStack_88);
      puVar1 = (undefined1 *)0x113818f80;
      ___cxa_guard_release(0x113818f80);
    }
  }
  FUN_1052b054c(uStack_68);
  if ((bool)in_ZR) {
    return (undefined1 *)0x113818f70;
  }
  ___stack_chk_fail();
  if (iVar3 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return puVar1;
}



/* Entry: 1052b0468; end: 1052b054b;  */

undefined8 FUN_1052b0468(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  char *pcVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113818f80 & 1) == 0) {
    param_1 = 0x113818f80;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_38,"_djinni_record_StreamerMetadata");
      pcVar1 = "contentLength";
      func_0x0001003a83dc(auStack_40,"contentLength");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_30,auStack_40,pcVar1);
      param_2 = 0;
      func_0x000104bdbd44(0x113818f70,auStack_38,0,auStack_30,1);
      func_0x0001003b1c5c(auStack_30);
      func_0x0001003a8c94(auStack_40);
      func_0x0001003a8c94(auStack_38);
      param_1 = 0x113818f80;
      ___cxa_guard_release(0x113818f80);
    }
  }
  FUN_1052b054c(uStack_18);
  if ((bool)in_ZR) {
    return 0x113818f70;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return param_1;
}



/* Entry: 1052b054c; end: 1052b055f;  */

void FUN_1052b054c(void)

{
  return;
}



/* Entry: 1052b0560; end: 1052b06bf;  */

void FUN_1052b0560(ulong param_1)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [16];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  bVar1 = *(byte *)((param_1 & 0xffffffff) + 0x113818f88);
  *(undefined1 *)((param_1 & 0xffffffff) + 0x113818f88) = 1;
  if ((bVar1 & 1) != 0) goto LAB_1052b05b8;
  if ((bRam0000000113818fa0 & 1) == 0) goto LAB_1052b05e4;
  while( true ) {
    func_0x000108b80888(0x113818f90);
LAB_1052b05b8:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) break;
    ___stack_chk_fail();
LAB_1052b05e4:
    iVar2 = 0x13818fa0;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      FUN_1052b06c0();
      pcVar3 = "parseManifest";
      func_0x0001003a83dc(&uStack_58,"parseManifest");
      FUN_1052b0714();
      pcVar4 = pcVar3;
      FUN_1052b079c();
      func_0x0001003adcc0(auStack_50,pcVar4);
      func_0x000104bdbd48(auStack_68,pcVar3,auStack_50,1);
      uStack_40 = uStack_58;
      uStack_58 = 0;
      func_0x0001003aef98(auStack_38,auStack_68);
      func_0x000104bdbd44(0x113818f90,0x113818fa8,1,&uStack_40,1);
      func_0x0001003b1c5c(&uStack_40);
      func_0x0001003adc18(auStack_60);
      func_0x0001003adc18(auStack_48);
      func_0x0001003a8c94(&uStack_58);
      ___cxa_guard_release(0x113818fa0);
    }
  }
  return;
}



/* Entry: 1052b06c0; end: 1052b0713;  */

void FUN_1052b06c0(void)

{
  int iVar1;
  
  if ((bRam0000000113818fb0 & 1) == 0) {
    iVar1 = 0x13818fb0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(0x113818fa8,"_djinni_interface_StreamingManifestParser");
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x113818fb0);
      return;
    }
  }
  return;
}



/* Entry: 1052b0714; end: 1052b079b;  */

undefined8 FUN_1052b0714(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((bRam00000001130cc4e8 & 1) == 0) {
    uVar1 = 0x1130cc4e8;
    ___cxa_guard_acquire();
    if ((int)uVar1 != 0) {
      FUN_1052b0810();
      uVar2 = uVar1;
      FUN_1052c521c();
      func_0x00010b9913cc(0x1130cc4d8,uVar1,uVar2);
      ___cxa_guard_release(0x1130cc4e8);
    }
  }
  return 0x1130cc4d8;
}



/* Entry: 1052b079c; end: 1052b080f;  */

undefined8 FUN_1052b079c(void)

{
  int iVar1;
  
  if ((bRam00000001130cc500 & 1) == 0) {
    iVar1 = 0x130cc500;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000100906bfc(0x1130cc4f0);
      ___cxa_guard_release(0x1130cc500);
    }
  }
  return 0x1130cc4f0;
}



/* Entry: 1052b0810; end: 1052b097b;  */

undefined8 FUN_1052b0810(undefined8 param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113818fc8 & 1) == 0) {
    iVar1 = 0x13818fc8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(auStack_78,"_djinni_record_StreamingMediaSpecifier");
      pcVar2 = "variants";
      func_0x0001003a83dc(auStack_80,"variants");
      FUN_1052ab948();
      func_0x0001003b1b50(auStack_70,auStack_80,pcVar2);
      pcVar2 = "segments";
      func_0x0001003a83dc(auStack_88,"segments");
      FUN_1052b097c();
      func_0x0001003b1b50(auStack_58,auStack_88,pcVar2);
      pcVar2 = "metaSegments";
      func_0x0001003a83dc(auStack_90,"metaSegments");
      FUN_1052b09d8();
      func_0x0001003b1b50(auStack_40,auStack_90,pcVar2);
      uVar3 = 0;
      func_0x000104bdbd44(0x113818fb8,auStack_78,0,auStack_70,3);
      lVar4 = 0x30;
      do {
        func_0x0001003b1c5c(auStack_70 + lVar4);
        param_2 = (int)uVar3;
        lVar4 = lVar4 + -0x18;
      } while (lVar4 != -0x18);
      func_0x0001003a8c94(auStack_90);
      func_0x0001003a8c94(auStack_88);
      func_0x0001003a8c94(auStack_80);
      func_0x0001003a8c94(auStack_78);
      ___cxa_guard_release(0x113818fc8);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return 0x113818fb8;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if ((bRam00000001130cc530 & 1) == 0) {
    iVar1 = 0x130cc530;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_1052af390();
      func_0x00010b990868(0x1130cc520);
      ___cxa_guard_release(0x1130cc530);
    }
  }
  return 0x1130cc520;
}



/* Entry: 1052b097c; end: 1052b09d7;  */

undefined8 FUN_1052b097c(void)

{
  int iVar1;
  
  if ((bRam00000001130cc530 & 1) == 0) {
    iVar1 = 0x130cc530;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_1052af390();
      func_0x00010b990868(0x1130cc520);
      ___cxa_guard_release(0x1130cc530);
    }
  }
  return 0x1130cc520;
}



/* Entry: 1052b09d8; end: 1052b0a33;  */

undefined8 FUN_1052b09d8(void)

{
  int iVar1;
  
  if ((bRam00000001130cc518 & 1) == 0) {
    iVar1 = 0x130cc518;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_1052ab7e8();
      func_0x00010b990868(0x1130cc508);
      ___cxa_guard_release(0x1130cc518);
    }
  }
  return 0x1130cc508;
}



/* Entry: 1052b0a34; end: 1052b0a83;  */

void FUN_1052b0a34(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  func_0x0001052b156c();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  uVar1 = *param_3;
  *(undefined8 *)(param_1 + 0x20) = param_3[1];
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined8 *)(param_1 + 0x28) = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  uVar1 = *param_4;
  *(undefined8 *)(param_1 + 0x38) = param_4[1];
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  *(undefined8 *)(param_1 + 0x40) = param_4[2];
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  return;
}



/* Entry: 1052b0a84; end: 1052b0af3;  */

undefined8 FUN_1052b0a84(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x0001052b0ab8(&uStack_28);
  return param_1;
}



/* Entry: 1052b0af4; end: 1052b0afb;  */

void FUN_1052b0af4(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001052b14fc(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x48;
    FUN_1052ab9a4();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1052b0afc; end: 1052b0b2f;  */

void FUN_1052b0afc(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001052b14fc();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x48;
    FUN_1052ab9a4();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1052b0b30; end: 1052b0ba3;  */

void FUN_1052b0b30(long *param_1,ulong param_2)

{
  long extraout_x9;
  undefined1 auStack_48 [40];
  
  func_0x0001052b1558();
  if ((ulong)(extraout_x9 / 0x50) < param_2) {
    if (0x333333333333333 < param_2) {
      FUN_1052b0ba4();
      func_0x0001052b14dc();
      func_0x0001052b1494();
      func_0x0001052b1538();
      func_0x0001052b14fc();
      FUN_1052b0c80(param_1 + 2,*param_1,param_1[1],
                    *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x50) * 0x50);
      func_0x0001052b1440();
      return;
    }
    FUN_1052b0bf4(auStack_48);
    func_0x0001052b1508();
    func_0x0001052b14dc();
  }
  return;
}



/* Entry: 1052b0ba4; end: 1052b0baf;  */

void FUN_1052b0ba4(long *param_1,long param_2)

{
  func_0x0001052b1538();
  func_0x0001052b14fc();
  FUN_1052b0c80(param_1 + 2,*param_1,param_1[1],
                *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x50) * 0x50);
  func_0x0001052b1440();
  return;
}



/* Entry: 1052b0bb0; end: 1052b0bf3;  */

void FUN_1052b0bb0(long *param_1,long param_2)

{
  func_0x0001052b14fc();
  FUN_1052b0c80(param_1 + 2,*param_1,param_1[1],
                *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x50) * 0x50);
  func_0x0001052b1440();
  return;
}



/* Entry: 1052b0bf4; end: 1052b0c53;  */

void FUN_1052b0bf4(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 != 0) {
    func_0x0001052b0c30(param_4);
  }
  func_0x0001052b14e4(0x50);
  return;
}



/* Entry: 1052b0c54; end: 1052b0c7f;  */

void FUN_1052b0c54(undefined8 param_1,ulong param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined1 uStack_48;
  long lStack_40;
  long lStack_38;
  
  if (param_2 < 0x333333333333334) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x50);
    return;
  }
  func_0x000104bd35f4();
  plStack_58 = &lStack_40;
  plStack_50 = &lStack_38;
  lStack_38 = param_4;
  for (lVar4 = 0; puVar1 = (undefined8 *)(param_2 + lVar4), puVar1 != param_3; lVar4 = lVar4 + 0x50)
  {
    puVar2 = (undefined8 *)(param_4 + lVar4);
    *(undefined1 *)puVar2 = 0;
    *(undefined1 *)(puVar2 + 3) = 0;
    if (*(char *)(puVar1 + 3) == '\x01') {
      uVar6 = puVar1[1];
      uVar5 = *puVar1;
      puVar2[2] = puVar1[2];
      puVar2[1] = uVar6;
      *puVar2 = uVar5;
      puVar1[1] = 0;
      puVar1[2] = 0;
      *puVar1 = 0;
      *(undefined1 *)(puVar2 + 3) = 1;
    }
    lStack_38 = param_4 + lVar4;
    lVar3 = param_2 + lVar4;
    uVar6 = *(undefined8 *)(lVar3 + 0x28);
    uVar5 = *(undefined8 *)(lVar3 + 0x20);
    uVar8 = *(undefined8 *)(lVar3 + 0x38);
    uVar7 = *(undefined8 *)(lVar3 + 0x30);
    uVar9 = *(undefined8 *)(lVar3 + 0x39);
    *(undefined8 *)(lStack_38 + 0x41) = *(undefined8 *)(lVar3 + 0x41);
    *(undefined8 *)(lStack_38 + 0x39) = uVar9;
    *(undefined8 *)(lStack_38 + 0x28) = uVar6;
    *(undefined8 *)(lStack_38 + 0x20) = uVar5;
    *(undefined8 *)(lStack_38 + 0x38) = uVar8;
    *(undefined8 *)(lStack_38 + 0x30) = uVar7;
    lStack_38 = lStack_38 + 0x50;
  }
  uStack_48 = 1;
  uStack_60 = param_1;
  lStack_40 = param_4;
  FUN_1052b0d44();
  FUN_1052b0d74(&uStack_60);
  return;
}



/* Entry: 1052b0c80; end: 1052b0d43;  */

void FUN_1052b0c80(undefined8 param_1,long param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  long *plStack_48;
  long *plStack_40;
  undefined1 uStack_38;
  long lStack_30;
  long lStack_28;
  
  plStack_48 = &lStack_30;
  plStack_40 = &lStack_28;
  lStack_28 = param_4;
  for (lVar4 = 0; puVar1 = (undefined8 *)(param_2 + lVar4), puVar1 != param_3; lVar4 = lVar4 + 0x50)
  {
    puVar2 = (undefined8 *)(param_4 + lVar4);
    *(undefined1 *)puVar2 = 0;
    *(undefined1 *)(puVar2 + 3) = 0;
    if (*(char *)(puVar1 + 3) == '\x01') {
      uVar6 = puVar1[1];
      uVar5 = *puVar1;
      puVar2[2] = puVar1[2];
      puVar2[1] = uVar6;
      *puVar2 = uVar5;
      puVar1[1] = 0;
      puVar1[2] = 0;
      *puVar1 = 0;
      *(undefined1 *)(puVar2 + 3) = 1;
    }
    lStack_28 = param_4 + lVar4;
    lVar3 = param_2 + lVar4;
    uVar6 = *(undefined8 *)(lVar3 + 0x28);
    uVar5 = *(undefined8 *)(lVar3 + 0x20);
    uVar8 = *(undefined8 *)(lVar3 + 0x38);
    uVar7 = *(undefined8 *)(lVar3 + 0x30);
    uVar9 = *(undefined8 *)(lVar3 + 0x39);
    *(undefined8 *)(lStack_28 + 0x41) = *(undefined8 *)(lVar3 + 0x41);
    *(undefined8 *)(lStack_28 + 0x39) = uVar9;
    *(undefined8 *)(lStack_28 + 0x28) = uVar6;
    *(undefined8 *)(lStack_28 + 0x20) = uVar5;
    *(undefined8 *)(lStack_28 + 0x38) = uVar8;
    *(undefined8 *)(lStack_28 + 0x30) = uVar7;
    lStack_28 = lStack_28 + 0x50;
  }
  uStack_38 = 1;
  uStack_50 = param_1;
  lStack_30 = param_4;
  FUN_1052b0d44();
  FUN_1052b0d74(&uStack_50);
  return;
}



/* Entry: 1052b0d44; end: 1052b0d73;  */

void FUN_1052b0d44(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x50) {
    func_0x0001001148fc();
  }
  return;
}



/* Entry: 1052b0d74; end: 1052b0da3;  */

long FUN_1052b0d74(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_1052b0da4(param_1);
  }
  return param_1;
}



/* Entry: 1052b0da4; end: 1052b0dc3;  */

void FUN_1052b0da4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x50;
    func_0x0001001148fc();
  }
  return;
}



/* Entry: 1052b0dc4; end: 1052b0e1f;  */

void FUN_1052b0dc4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x50;
    func_0x0001001148fc();
  }
  return;
}



/* Entry: 1052b0e20; end: 1052b0e27;  */

void FUN_1052b0e20(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001052b14fc(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x50;
    func_0x0001001148fc();
  }
  return;
}



/* Entry: 1052b0e28; end: 1052b0e97;  */

void FUN_1052b0e28(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001052b14fc();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x50;
    func_0x0001001148fc();
  }
  return;
}



/* Entry: 1052b0e98; end: 1052b0eeb;  */

void FUN_1052b0e98(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  *(undefined1 *)puVar1 = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  if (*(char *)(param_2 + 3) == '\x01') {
    uVar3 = param_2[1];
    uVar2 = *param_2;
    puVar1[2] = param_2[2];
    puVar1[1] = uVar3;
    *puVar1 = uVar2;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    *(undefined1 *)(puVar1 + 3) = 1;
  }
  uVar3 = param_2[5];
  uVar2 = param_2[4];
  uVar5 = param_2[7];
  uVar4 = param_2[6];
  uVar6 = *(undefined8 *)((long)param_2 + 0x39);
  *(undefined8 *)((long)puVar1 + 0x41) = *(undefined8 *)((long)param_2 + 0x41);
  *(undefined8 *)((long)puVar1 + 0x39) = uVar6;
  puVar1[5] = uVar3;
  puVar1[4] = uVar2;
  puVar1[7] = uVar5;
  puVar1[6] = uVar4;
  *(undefined8 **)(param_1 + 8) = puVar1 + 10;
  return;
}



/* Entry: 1052b0eec; end: 1052b0f93;  */

undefined8 FUN_1052b0eec(void)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puStack_48;
  
  func_0x0001052b1544();
  FUN_1052b0f94();
  func_0x0001052b14a8();
  FUN_1052b0bf4();
  *(undefined1 *)puStack_48 = 0;
  *(undefined1 *)(puStack_48 + 3) = 0;
  if (*(char *)(unaff_x20 + 3) == '\x01') {
    uVar2 = unaff_x20[1];
    uVar1 = *unaff_x20;
    puStack_48[2] = unaff_x20[2];
    puStack_48[1] = uVar2;
    *puStack_48 = uVar1;
    unaff_x20[1] = 0;
    unaff_x20[2] = 0;
    *unaff_x20 = 0;
    *(undefined1 *)(puStack_48 + 3) = 1;
  }
  uVar2 = unaff_x20[5];
  uVar1 = unaff_x20[4];
  uVar4 = unaff_x20[7];
  uVar3 = unaff_x20[6];
  uVar5 = *(undefined8 *)((long)unaff_x20 + 0x39);
  *(undefined8 *)((long)puStack_48 + 0x41) = *(undefined8 *)((long)unaff_x20 + 0x41);
  *(undefined8 *)((long)puStack_48 + 0x39) = uVar5;
  puStack_48[5] = uVar2;
  puStack_48[4] = uVar1;
  puStack_48[7] = uVar4;
  puStack_48[6] = uVar3;
  func_0x0001052b1508();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  func_0x0001052b14dc();
  return uVar1;
}



/* Entry: 1052b0f94; end: 1052b0fdb;  */

long * FUN_1052b0f94(long *param_1,long *param_2)

{
  ulong uVar1;
  long extraout_x9;
  long *plVar2;
  long alStack_58 [5];
  
  if (param_2 < (long *)0x333333333333334) {
    uVar1 = (param_1[2] - *param_1) / 0x50;
    plVar2 = (long *)(uVar1 * 2);
    if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
      plVar2 = param_2;
    }
    if (0x199999999999998 < uVar1) {
      plVar2 = (long *)0x333333333333333;
    }
    return plVar2;
  }
  FUN_1052b0ba4();
  func_0x0001052b1558();
  if ((long *)(extraout_x9 / 0x48) < param_2) {
    if ((long *)0x38e38e38e38e38e < param_2) {
      FUN_1052b1054();
      func_0x0001052b14d4();
      func_0x0001052b1494();
      func_0x0001052b1538();
      func_0x0001052b14fc();
      plVar2 = param_1 + 2;
      FUN_1052b1134(plVar2,*param_1,param_1[1],param_2[1] + ((param_1[1] - *param_1) / -0x48) * 0x48
                   );
      func_0x0001052b1440();
      return plVar2;
    }
    param_1 = alStack_58;
    FUN_1052b10a4(param_1);
    func_0x0001052b1514();
    func_0x0001052b14d4();
  }
  return param_1;
}



/* Entry: 1052b0fdc; end: 1052b1053;  */

void FUN_1052b0fdc(long *param_1,ulong param_2)

{
  long extraout_x9;
  undefined1 auStack_48 [40];
  
  func_0x0001052b1558();
  if ((ulong)(extraout_x9 / 0x48) < param_2) {
    if (0x38e38e38e38e38e < param_2) {
      FUN_1052b1054();
      func_0x0001052b14d4();
      func_0x0001052b1494();
      func_0x0001052b1538();
      func_0x0001052b14fc();
      FUN_1052b1134(param_1 + 2,*param_1,param_1[1],
                    *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x48) * 0x48);
      func_0x0001052b1440();
      return;
    }
    FUN_1052b10a4(auStack_48);
    func_0x0001052b1514();
    func_0x0001052b14d4();
  }
  return;
}



/* Entry: 1052b1054; end: 1052b105f;  */

void FUN_1052b1054(long *param_1,long param_2)

{
  func_0x0001052b1538();
  func_0x0001052b14fc();
  FUN_1052b1134(param_1 + 2,*param_1,param_1[1],
                *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x48) * 0x48);
  func_0x0001052b1440();
  return;
}



/* Entry: 1052b1060; end: 1052b10a3;  */

void FUN_1052b1060(long *param_1,long param_2)

{
  func_0x0001052b14fc();
  FUN_1052b1134(param_1 + 2,*param_1,param_1[1],
                *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x48) * 0x48);
  func_0x0001052b1440();
  return;
}



/* Entry: 1052b10a4; end: 1052b1103;  */

void FUN_1052b10a4(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 != 0) {
    func_0x0001052b10e0(param_4);
  }
  func_0x0001052b14e4(0x48);
  return;
}



/* Entry: 1052b1104; end: 1052b1133;  */

void FUN_1052b1104(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined8 uStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  if (param_2 < 0x38e38e38e38e38f) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x48);
    return;
  }
  func_0x000104bd35f4();
  plStack_68 = &lStack_50;
  plStack_60 = &lStack_48;
  uStack_70 = param_1;
  lStack_50 = param_4;
  for (uVar1 = param_2; lStack_48 = param_4, uVar1 != param_3; uVar1 = uVar1 + 0x48) {
    FUN_1052b1208(param_4,uVar1);
    param_4 = lStack_48 + 0x48;
  }
  uStack_58 = 1;
  FUN_1052b11d8(param_1,param_2,param_3);
  FUN_1052b1230(&uStack_70);
  return;
}



/* Entry: 1052b1134; end: 1052b11d7;  */

void FUN_1052b1134(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined1 uStack_48;
  long lStack_40;
  long lStack_38;
  
  plStack_58 = &lStack_40;
  plStack_50 = &lStack_38;
  uStack_60 = param_1;
  lStack_40 = param_4;
  for (lVar1 = param_2; lStack_38 = param_4, lVar1 != param_3; lVar1 = lVar1 + 0x48) {
    FUN_1052b1208(param_4,lVar1);
    param_4 = lStack_38 + 0x48;
  }
  uStack_48 = 1;
  FUN_1052b11d8(param_1,param_2,param_3);
  FUN_1052b1230(&uStack_60);
  return;
}



/* Entry: 1052b11d8; end: 1052b1207;  */

void FUN_1052b11d8(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x48) {
    FUN_1052ab9a4();
  }
  return;
}



/* Entry: 1052b1208; end: 1052b122f;  */

void FUN_1052b1208(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x0001052b156c();
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar4 = *(undefined8 *)(param_2 + 0x30);
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  uVar5 = *(undefined8 *)(param_2 + 0x31);
  *(undefined8 *)(param_1 + 0x39) = *(undefined8 *)(param_2 + 0x39);
  *(undefined8 *)(param_1 + 0x31) = uVar5;
  *(undefined8 *)(param_1 + 0x30) = uVar4;
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  return;
}



/* Entry: 1052b1230; end: 1052b125f;  */

long FUN_1052b1230(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_1052b1260(param_1);
  }
  return param_1;
}



/* Entry: 1052b1260; end: 1052b127f;  */

void FUN_1052b1260(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x48;
    FUN_1052ab9a4();
  }
  return;
}



/* Entry: 1052b1280; end: 1052b12db;  */

void FUN_1052b1280(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x48;
    FUN_1052ab9a4();
  }
  return;
}



/* Entry: 1052b12dc; end: 1052b12e3;  */

void FUN_1052b12dc(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001052b14fc(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x48;
    FUN_1052ab9a4();
  }
  return;
}



/* Entry: 1052b12e4; end: 1052b137b;  */

void FUN_1052b12e4(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001052b14fc();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x48;
    FUN_1052ab9a4();
  }
  return;
}



/* Entry: 1052b137c; end: 1052b13e7;  */

undefined8 FUN_1052b137c(void)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined8 uStack_48;
  
  func_0x0001052b1544();
  FUN_1052b13e8();
  func_0x0001052b14a8();
  FUN_1052b10a4();
  FUN_1052b1208(uStack_48);
  func_0x0001052b1514();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  func_0x0001052b14d4();
  return uVar1;
}



/* Entry: 1052b13e8; end: 1052b143f;  */

long * FUN_1052b13e8(long *param_1,long *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  
  if ((long *)0x38e38e38e38e38e < param_2) {
    FUN_1052b1054();
    unaff_x19[1] = unaff_x21;
    uVar2 = *unaff_x20;
    unaff_x20[1] = uVar2;
    *unaff_x20 = unaff_x19[1];
    unaff_x19[1] = uVar2;
    uVar2 = unaff_x20[1];
    unaff_x20[1] = unaff_x19[2];
    unaff_x19[2] = uVar2;
    uVar2 = unaff_x20[2];
    unaff_x20[2] = unaff_x19[3];
    unaff_x19[3] = uVar2;
    *unaff_x19 = unaff_x19[1];
    return param_1;
  }
  uVar1 = (param_1[2] - *param_1) / 0x48;
  plVar3 = (long *)(uVar1 * 2);
  if (plVar3 < param_2 || (long)plVar3 - (long)param_2 == 0) {
    plVar3 = param_2;
  }
  if (0x1c71c71c71c71c6 < uVar1) {
    plVar3 = (long *)0x38e38e38e38e38e;
  }
  return plVar3;
}



/* Entry: 1052b1440; end: 1052b158f;  */

void FUN_1052b1440(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  
  unaff_x19[1] = unaff_x21;
  uVar1 = *unaff_x20;
  unaff_x20[1] = uVar1;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar1;
  uVar1 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar1;
  uVar1 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar1;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 1052b1590; end: 1052b171b;  */

undefined8 FUN_1052b1590(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  char *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113818fe0 & 1) == 0) {
    param_1 = 0x113818fe0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_90,"_djinni_record_StreamingVariantCacheStatus");
      pcVar1 = "name";
      func_0x0001003a83dc(auStack_98,"name");
      func_0x000104bf1120();
      func_0x0001003b1b50(auStack_88,auStack_98,pcVar1);
      pcVar1 = "isManifestAvailable";
      func_0x0001003a83dc(auStack_a0,"isManifestAvailable");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_70,auStack_a0,pcVar1);
      pcVar1 = "isMediaAvailable";
      func_0x0001003a83dc(auStack_a8,"isMediaAvailable");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_58,auStack_a8,pcVar1);
      pcVar1 = "contentSizeOnDiskBytes";
      func_0x0001003a83dc(auStack_b0,"contentSizeOnDiskBytes");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_40,auStack_b0,pcVar1);
      uVar2 = 0;
      func_0x000104bdbd44(0x113818fd0,auStack_90,0,auStack_88,4);
      lVar3 = 0x48;
      do {
        func_0x0001003b1c5c(auStack_88 + lVar3);
        param_2 = (int)uVar2;
        lVar3 = lVar3 + -0x18;
        in_ZR = lVar3 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(auStack_b0);
      func_0x0001003a8c94(auStack_a8);
      func_0x0001003a8c94(auStack_a0);
      func_0x0001003a8c94(auStack_98);
      func_0x0001003a8c94(auStack_90);
      param_1 = 0x113818fe0;
      ___cxa_guard_release(0x113818fe0);
    }
  }
  FUN_1052b171c(uStack_28);
  if ((bool)in_ZR) {
    return 0x113818fd0;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return param_1;
}



/* Entry: 1052b171c; end: 1052b172f;  */

void FUN_1052b171c(void)

{
  return;
}



/* Entry: 1052b1730; end: 1052b189b;  */

void FUN_1052b1730(ulong param_1)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [16];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  bVar1 = *(byte *)((param_1 & 0xffffffff) + 0x113818fe8);
  *(undefined1 *)((param_1 & 0xffffffff) + 0x113818fe8) = 1;
  if ((bVar1 & 1) != 0) goto LAB_1052b1788;
  if ((bRam0000000113819018 & 1) == 0) goto LAB_1052b17b4;
  while( true ) {
    func_0x000108b80888(0x113819008);
LAB_1052b1788:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) break;
    ___stack_chk_fail();
LAB_1052b17b4:
    iVar2 = 0x13819018;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      FUN_1052b1938();
      pcVar3 = "done";
      func_0x0001003a83dc(&uStack_58,"done");
      func_0x0001003b166c(auStack_78);
      func_0x000104bef4f0();
      func_0x0001003adcc0(auStack_50,pcVar3);
      func_0x000104bdbd48(auStack_68,auStack_78,auStack_50,1);
      uStack_40 = uStack_58;
      uStack_58 = 0;
      func_0x0001003aef98(auStack_38,auStack_68);
      func_0x000104bdbd44(0x113819008,0x113819020,1,&uStack_40,1);
      func_0x0001003b1c5c(&uStack_40);
      func_0x0001003adc18(auStack_60);
      func_0x0001003adc18(auStack_48);
      func_0x0001003adc18(auStack_70);
      func_0x0001003a8c94(&uStack_58);
      ___cxa_guard_release(0x113819018);
    }
  }
  return;
}



/* Entry: 1052b189c; end: 1052b1937;  */

undefined8 FUN_1052b189c(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lStack_20;
  undefined2 uStack_18;
  
  if ((bRam0000000113819000 & 1) == 0) {
    iVar4 = 0x13819000;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      FUN_1052b1938();
      lStack_20 = lRam0000000113819020;
      if (lRam0000000113819020 != 0) {
        piVar1 = (int *)(lRam0000000113819020 + 8);
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
      func_0x0001003ad9a4(0x113818ff0,&lStack_20);
      func_0x0001003a8c94(&lStack_20);
      ___cxa_guard_release(0x113819000);
    }
  }
  return 0x113818ff0;
}



/* Entry: 1052b1938; end: 1052b198b;  */

void FUN_1052b1938(void)

{
  int iVar1;
  
  if ((bRam0000000113819028 & 1) == 0) {
    iVar1 = 0x13819028;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(0x113819020,"_djinni_interface_TaskCompletionCallback");
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x113819028);
      return;
    }
  }
  return;
}



/* Entry: 1052b198c; end: 1052b1b47;  */

undefined8 FUN_1052b198c(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113819040 & 1) == 0) {
    iVar1 = 0x13819040;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(auStack_a8,"_djinni_record_VariantSpecifier");
      pcVar2 = "url";
      func_0x0001003a83dc(auStack_b0,"url");
      func_0x000104bf1120();
      func_0x0001003b1b50(auStack_a0,auStack_b0,pcVar2);
      pcVar2 = "name";
      func_0x0001003a83dc(auStack_b8,"name");
      func_0x000104bf1120();
      func_0x0001003b1b50(auStack_88,auStack_b8,pcVar2);
      pcVar2 = "segments";
      func_0x0001003a83dc(auStack_c0,"segments");
      FUN_1052b097c();
      func_0x0001003b1b50(auStack_70,auStack_c0,pcVar2);
      pcVar2 = "bandwidth";
      func_0x0001003a83dc(auStack_c8,"bandwidth");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_58,auStack_c8,pcVar2);
      pcVar2 = "type";
      func_0x0001003a83dc(auStack_d0,"type");
      FUN_1052b1b48();
      func_0x0001003b1b50(auStack_40,auStack_d0,pcVar2);
      uVar3 = 0;
      func_0x000104bdbd44(0x113819030,auStack_a8,0,auStack_a0,5);
      lVar4 = 0x60;
      do {
        func_0x0001003b1c5c(auStack_a0 + lVar4);
        param_2 = (int)uVar3;
        lVar4 = lVar4 + -0x18;
        in_ZR = lVar4 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(auStack_d0);
      func_0x0001003a8c94(auStack_c8);
      func_0x0001003a8c94(auStack_c0);
      func_0x0001003a8c94(auStack_b8);
      func_0x0001003a8c94(auStack_b0);
      func_0x0001003a8c94(auStack_a8);
      ___cxa_guard_release(0x113819040);
    }
  }
  func_0x0001052b1c38(uStack_28);
  if ((bool)in_ZR) {
    return 0x113819030;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if ((bRam00000001130cc548 & 1) == 0) {
    iVar1 = 0x130cc548;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x1130cc538);
      ___cxa_guard_release(0x1130cc548);
    }
  }
  return 0x1130cc538;
}



/* Entry: 1052b1b48; end: 1052b1b9f;  */

undefined8 FUN_1052b1b48(void)

{
  int iVar1;
  
  if ((bRam00000001130cc548 & 1) == 0) {
    iVar1 = 0x130cc548;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x1130cc538);
      ___cxa_guard_release(0x1130cc548);
    }
  }
  return 0x1130cc538;
}



/* Entry: 1052b1ba0; end: 1052b1c4b;  */

void FUN_1052b1ba0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 param_5,undefined4 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  if (*(char *)(param_2 + 3) == '\x01') {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    *(undefined1 *)(param_1 + 3) = 1;
  }
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  if (*(char *)(param_3 + 3) == '\x01') {
    uVar2 = param_3[1];
    uVar1 = *param_3;
    param_1[6] = param_3[2];
    param_1[5] = uVar2;
    param_1[4] = uVar1;
    param_3[1] = 0;
    param_3[2] = 0;
    *param_3 = 0;
    *(undefined1 *)(param_1 + 7) = 1;
  }
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  uVar1 = *param_4;
  param_1[9] = param_4[1];
  param_1[8] = uVar1;
  param_1[10] = param_4[2];
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  param_1[0xb] = param_5;
  *(undefined4 *)(param_1 + 0xc) = param_6;
  return;
}



/* Entry: 1052b1c4c; end: 1052b1dab;  */

int * FUN_1052b1c4c(int *param_1,int param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  char *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 auStack_70 [3];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113819058 & 1) == 0) {
    param_1 = (int *)0x113819058;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_78,"_djinni_record_AdditionalVariantRankingInfo");
      pcVar1 = "uncalibratedOptimalVariantBitrateKbps";
      func_0x0001003a83dc(auStack_80,"uncalibratedOptimalVariantBitrateKbps");
      func_0x000104bef760();
      func_0x0001003b1b50(auStack_70,auStack_80,pcVar1);
      pcVar1 = "rankerTargetTriggerTypes";
      func_0x0001003a83dc(auStack_88,"rankerTargetTriggerTypes");
      FUN_10527ed64();
      func_0x0001003b1b50(auStack_58,auStack_88,pcVar1);
      pcVar1 = "serializedCalibrationBiases";
      func_0x0001003a83dc(auStack_90,"serializedCalibrationBiases");
      FUN_1052810e0();
      func_0x0001003b1b50(auStack_40,auStack_90,pcVar1);
      param_3 = auStack_70;
      uVar2 = 0;
      param_4 = 3;
      func_0x000104bdbd44(0x113819048,auStack_78,0,param_3,3);
      lVar3 = 0x30;
      do {
        func_0x0001003b1c5c((long)auStack_70 + lVar3);
        param_2 = (int)uVar2;
        lVar3 = lVar3 + -0x18;
        in_ZR = lVar3 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(auStack_90);
      func_0x0001003a8c94(auStack_88);
      func_0x0001003a8c94(auStack_80);
      func_0x0001003a8c94(auStack_78);
      param_1 = (int *)0x113819058;
      ___cxa_guard_release();
    }
  }
  FUN_1052b1dfc(uStack_28);
  if ((bool)in_ZR) {
    return (int *)0x113819048;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  *param_1 = param_2;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar2 = *param_3;
  *(undefined8 *)(param_1 + 4) = param_3[1];
  *(undefined8 *)(param_1 + 2) = uVar2;
  *(undefined8 *)(param_1 + 6) = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  func_0x0001006b78fc(param_1 + 8,param_4);
  return param_1;
}



/* Entry: 1052b1dac; end: 1052b1dfb;  */

undefined4 *
FUN_1052b1dac(undefined4 *param_1,undefined4 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  uVar1 = *param_3;
  *(undefined8 *)(param_1 + 4) = param_3[1];
  *(undefined8 *)(param_1 + 2) = uVar1;
  *(undefined8 *)(param_1 + 6) = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  func_0x0001006b78fc(param_1 + 8,param_4);
  return param_1;
}



/* Entry: 1052b1dfc; end: 1052b1e0f;  */

void FUN_1052b1dfc(void)

{
  return;
}



/* Entry: 1052b1e10; end: 1052b1f93;  */

void FUN_1052b1e10(ulong param_1)

{
  byte bVar1;
  undefined1 in_ZR;
  int iVar2;
  char *pcVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined1 auStack_38 [16];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  bVar1 = *(byte *)((param_1 & 0xffffffff) + 0x113819060);
  *(undefined1 *)((param_1 & 0xffffffff) + 0x113819060) = 1;
  if ((bVar1 & 1) != 0) goto LAB_1052b1e68;
  if ((bRam0000000113819078 & 1) == 0) goto LAB_1052b1e88;
  while( true ) {
    func_0x000108b80888(0x113819068);
LAB_1052b1e68:
    FUN_1052b2040(uStack_28);
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
LAB_1052b1e88:
    iVar2 = 0x13819078;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      FUN_1052b1f94();
      pcVar3 = "logEvent";
      func_0x0001003a83dc(&uStack_68,"logEvent");
      func_0x0001003b166c(auStack_88);
      FUN_1052b1fe8();
      puVar4 = auStack_60;
      func_0x0001003adcc0(puVar4,pcVar3);
      func_0x000108b80a94();
      func_0x0001003adcc0(auStack_50,puVar4);
      func_0x000104bdbd48(auStack_78,auStack_88,auStack_60,2);
      uStack_40 = uStack_68;
      uStack_68 = 0;
      func_0x0001003aef98(auStack_38,auStack_78);
      func_0x000104bdbd44(0x113819068,0x113819080,1,&uStack_40,1);
      func_0x0001003b1c5c(&uStack_40);
      func_0x0001003adc18(auStack_70);
      lVar5 = 0x18;
      do {
        func_0x0001003adc18(auStack_60 + lVar5);
        lVar5 = lVar5 + -0x10;
        in_ZR = lVar5 == -8;
      } while (!(bool)in_ZR);
      func_0x0001003adc18(auStack_80);
      func_0x0001003a8c94(&uStack_68);
      ___cxa_guard_release(0x113819078);
    }
  }
  return;
}



/* Entry: 1052b1f94; end: 1052b1fe7;  */

void FUN_1052b1f94(void)

{
  int iVar1;
  
  if ((bRam0000000113819088 & 1) == 0) {
    iVar1 = 0x13819088;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(0x113819080,"_djinni_interface_BlizzardProtoLoggerInterface");
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x113819088);
      return;
    }
  }
  return;
}



/* Entry: 1052b1fe8; end: 1052b203f;  */

undefined8 FUN_1052b1fe8(void)

{
  int iVar1;
  
  if ((bRam00000001130cc560 & 1) == 0) {
    iVar1 = 0x130cc560;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x1130cc550);
      ___cxa_guard_release(0x1130cc560);
    }
  }
  return 0x1130cc550;
}



/* Entry: 1052b2040; end: 1052b2053;  */

void FUN_1052b2040(void)

{
  return;
}



/* Entry: 1052b2054; end: 1052b2193;  */

void FUN_1052b2054(ulong param_1)

{
  byte bVar1;
  undefined1 in_ZR;
  int iVar2;
  char *pcVar3;
  undefined8 extraout_x8;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [16];
  undefined8 uStack_28;
  
  func_0x0001052b2ce8();
  bVar1 = *(byte *)((param_1 & 0xffffffff) + 0x113819090);
  *(undefined1 *)((param_1 & 0xffffffff) + 0x113819090) = 1;
  uStack_28 = extraout_x8;
  if ((bVar1 & 1) != 0) goto LAB_1052b20a4;
  if ((bRam00000001138190a8 & 1) == 0) goto LAB_1052b20bc;
  while( true ) {
    func_0x000108b80888(0x113819098);
LAB_1052b20a4:
    func_0x0001052b2c98(uStack_28);
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
LAB_1052b20bc:
    iVar2 = 0x138190a8;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      FUN_1052b2194();
      pcVar3 = "getMediaVariantRules";
      func_0x0001003a83dc(&uStack_58,"getMediaVariantRules");
      FUN_1052b2464();
      func_0x000104bdbd7c();
      func_0x0001003adcc0(auStack_50,pcVar3);
      func_0x0001052b2cf8(auStack_68);
      func_0x000104bdbd48();
      uStack_40 = uStack_58;
      uStack_58 = 0;
      func_0x0001003aef98(auStack_38,auStack_68);
      func_0x000104bdbd44(0x113819098,0x1138190b0,1,&uStack_40,1);
      func_0x0001003b1c5c(&uStack_40);
      func_0x0001003adc18(auStack_60);
      func_0x0001003adc18(auStack_48);
      func_0x0001003a8c94(&uStack_58);
      ___cxa_guard_release(0x1138190a8);
    }
  }
  return;
}



/* Entry: 1052b2194; end: 1052b21e7;  */

void FUN_1052b2194(void)

{
  int iVar1;
  
  if ((bRam00000001138190b8 & 1) == 0) {
    iVar1 = 0x138190b8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(0x1138190b0,"_djinni_interface_BoltMediaVariantProviderCallback");
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x1138190b8);
      return;
    }
  }
  return;
}



/* Entry: 1052b21e8; end: 1052b223b;  */

void FUN_1052b21e8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = param_2;
  __ZNSt3__112__get_sp_mutEPKv();
  __ZNSt3__18__sp_mut4lockEv();
  uVar2 = *param_3;
  uVar4 = param_2[1];
  uVar3 = *param_2;
  param_2[1] = param_3[1];
  *param_2 = uVar2;
  param_3[1] = uVar4;
  *param_3 = uVar3;
  __ZNSt3__18__sp_mut6unlockEv(puVar1);
  uVar2 = *param_3;
  param_1[1] = param_3[1];
  *param_1 = uVar2;
  *param_3 = 0;
  param_3[1] = 0;
  return;
}



/* Entry: 1052b223c; end: 1052b22e3;  */

undefined8 * FUN_1052b223c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x0001052b2c84();
  return param_1;
}



/* Entry: 1052b22e4; end: 1052b23f3;  */

void FUN_1052b22e4(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined1 auStack_68 [8];
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined1 uStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_30 = 0;
  lStack_28 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_1052b21e8(&lStack_40,param_2,&uStack_50);
  FUN_1052b223c(&lStack_30,&lStack_40);
  func_0x0001052b22bc(&lStack_40);
  func_0x0001052b2c7c();
  lStack_40 = lStack_30 + 0x58;
  uStack_38 = 1;
  __ZNSt3__15mutex4lockEv();
  lStack_60 = lStack_30;
  lStack_58 = lStack_28;
  if (lStack_28 != 0) {
    plVar1 = (long *)(lStack_28 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_1052b23f4(lStack_30 + 0x28,&lStack_40,&lStack_60);
  func_0x0001052b2cd8();
  if (*(long *)(lStack_30 + 0x98) == 0) {
    func_0x0001006b78fc(param_1);
    func_0x0001000df5a0(&lStack_40);
    func_0x0001052b22bc(&lStack_30);
    return;
  }
  __ZNSt13exception_ptrC1ERKS_(auStack_68,(long *)(lStack_30 + 0x98));
  __ZSt17rethrow_exceptionSt13exception_ptr(auStack_68);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1052b23b8);
  (*pcVar4)();
}



/* Entry: 1052b23f4; end: 1052b2433;  */

void FUN_1052b23f4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  while (uVar1 = param_3, FUN_1052b2434(), (uVar1 & 1) == 0) {
    __ZNSt3__118condition_variable4waitERNS_11unique_lockINS_5mutexEEE(param_1,param_2);
  }
  return;
}



/* Entry: 1052b2434; end: 1052b243b;  */

bool FUN_1052b2434(long *param_1)

{
  bool bVar1;
  
  if ((*(byte *)(*param_1 + 0x20) & 1) == 0) {
    bVar1 = *(long *)(*param_1 + 0x98) != 0;
    func_0x0001052b2ce0();
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}


