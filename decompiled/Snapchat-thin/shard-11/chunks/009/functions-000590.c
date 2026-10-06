/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108b7cbcc; end: 108b7cc63;  */

long FUN_108b7cbcc(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  plVar1 = param_1;
  FUN_108940710(param_1,(param_1[1] - *param_1) / 0x28 + 1);
  FUN_1089407e4(auStack_58,plVar1,(param_1[1] - *param_1) / 0x28,param_1 + 2);
  func_0x000108940904(lStack_48,param_2);
  lStack_48 = lStack_48 + 0x28;
  func_0x000108b7cc74();
  lVar2 = param_1[1];
  func_0x000108b7cc6c();
  return lVar2;
}



/* Entry: 108b7cc64; end: 108b7cc93;  */

void FUN_108b7cc64(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 108b7cc94; end: 108b7cdcf;  */

undefined1 * FUN_108b7cc94(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  int iVar4;
  undefined1 *puVar5;
  undefined8 extraout_x8;
  code *pcStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000108b7d7cc();
  uStack_38 = extraout_x8;
  FUN_108b7cdd0();
  func_0x000107c30f7c(auStack_58,0x113828598);
  pcStack_70 = FUN_108b7cec0;
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
  FUN_108b7ce30(auStack_48,&pcStack_70);
  func_0x000104bdb9bc(auStack_50,auStack_58,auStack_48,1);
  func_0x00010b9a8d98(auStack_48);
  FUN_10893cfec(&uStack_68);
  func_0x000107c27928(auStack_58);
  FUN_108b7cf1c(&pcStack_70,auStack_50,param_2);
  if ((pcStack_70 != (code *)0x0) && (*(long *)(pcStack_70 + 0x10) != 0)) {
    plVar1 = (long *)(*(long *)(pcStack_70 + 0x10) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = pcStack_70;
  FUN_108b7d784(&pcStack_70);
  puVar5 = auStack_50;
  func_0x000104bdbf78(puVar5);
  func_0x000108b7d7b8(uStack_38);
  if ((bool)in_ZR) {
    return puVar5;
  }
  ___stack_chk_fail();
  func_0x000104bdbf78(auStack_50);
  func_0x000108b7d810();
  if ((bRam00000001138285a0 & 1) == 0) {
    iVar4 = 0x138285a0;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      FUN_108b7d120();
      FUN_108b7d174(0x113828590,0x1138285c0);
      ___cxa_guard_release(0x1138285a0);
    }
  }
  return (undefined1 *)0x113828590;
}



/* Entry: 108b7cdd0; end: 108b7ce2f;  */

undefined8 FUN_108b7cdd0(void)

{
  int iVar1;
  
  if ((bRam00000001138285a0 & 1) == 0) {
    iVar1 = 0x138285a0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_108b7d120();
      FUN_108b7d174(0x113828590,0x1138285c0);
      ___cxa_guard_release(0x1138285a0);
    }
  }
  return 0x113828590;
}



/* Entry: 108b7ce30; end: 108b7cebf;  */

void FUN_108b7ce30(undefined8 param_1,undefined8 *param_2)

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
  FUN_108b7d218(&lStack_30,&uStack_50);
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
  FUN_10893cfec((ulong)&uStack_50 | 8);
  return;
}



/* Entry: 108b7cec0; end: 108b7cf1b;  */

void FUN_108b7cec0(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_108 [232];
  
  (**(code **)(*(long *)*param_2 + 0x10))(auStack_108);
  FUN_108b7f8cc(param_1,auStack_108);
  FUN_108b7d1ec(auStack_108);
  return;
}



/* Entry: 108b7cf1c; end: 108b7cf5f;  */

void FUN_108b7cf1c(undefined8 *param_1,ulong param_2)

{
  byte bVar1;
  undefined1 in_ZR;
  int iVar2;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [16];
  undefined8 uStack_68;
  undefined8 auStack_38 [2];
  undefined8 uStack_28;
  
  func_0x000108b7d7cc();
  uStack_28 = extraout_x8;
  FUN_108b7d444(auStack_38);
  *param_1 = auStack_38[0];
  func_0x000108b7d7b8(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000108b7d7cc();
  bVar1 = *(byte *)((param_2 & 0xffffffff) + 0x113828570);
  *(undefined1 *)((param_2 & 0xffffffff) + 0x113828570) = 1;
  uStack_68 = extraout_x8_00;
  if ((bVar1 & 1) != 0) goto LAB_108b7cfb0;
  if ((bRam00000001138285b8 & 1) == 0) goto LAB_108b7cfd0;
  while( true ) {
    FUN_108b80888(0x1138285a8);
LAB_108b7cfb0:
    func_0x000108b7d7b8(uStack_68);
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
LAB_108b7cfd0:
    iVar2 = 0x138285b8;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      FUN_108b7d120();
      func_0x000107c31088(&uStack_88,&UNK_10f501fd3);
      FUN_108b7fa90();
      func_0x000104bdbd48(auStack_98);
      uStack_80 = uStack_88;
      uStack_88 = 0;
      func_0x000107c30f40(auStack_78,auStack_98);
      func_0x000104bdbd44(0x1138285a8,0x1138285c0,1,&uStack_80,1);
      func_0x000107c27924(&uStack_80);
      func_0x000107c27900(auStack_90);
      func_0x000107c278f4(&uStack_88);
      ___cxa_guard_release(0x1138285b8);
    }
  }
  return;
}



/* Entry: 108b7cf60; end: 108b7d083;  */

void FUN_108b7cf60(ulong param_1)

{
  byte bVar1;
  undefined1 in_ZR;
  int iVar2;
  undefined8 extraout_x8;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [16];
  undefined8 uStack_28;
  
  func_0x000108b7d7cc();
  bVar1 = *(byte *)((param_1 & 0xffffffff) + 0x113828570);
  *(undefined1 *)((param_1 & 0xffffffff) + 0x113828570) = 1;
  uStack_28 = extraout_x8;
  if ((bVar1 & 1) != 0) goto LAB_108b7cfb0;
  if ((bRam00000001138285b8 & 1) == 0) goto LAB_108b7cfd0;
  while( true ) {
    FUN_108b80888(0x1138285a8);
LAB_108b7cfb0:
    func_0x000108b7d7b8(uStack_28);
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
LAB_108b7cfd0:
    iVar2 = 0x138285b8;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      FUN_108b7d120();
      func_0x000107c31088(&uStack_48,&UNK_10f501fd3);
      FUN_108b7fa90();
      func_0x000104bdbd48(auStack_58);
      uStack_40 = uStack_48;
      uStack_48 = 0;
      func_0x000107c30f40(auStack_38,auStack_58);
      func_0x000104bdbd44(0x1138285a8,0x1138285c0,1,&uStack_40,1);
      func_0x000107c27924(&uStack_40);
      func_0x000107c27900(auStack_50);
      func_0x000107c278f4(&uStack_48);
      ___cxa_guard_release(0x1138285b8);
    }
  }
  return;
}



/* Entry: 108b7d084; end: 108b7d11f;  */

undefined8 FUN_108b7d084(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lStack_20;
  undefined2 uStack_18;
  
  if ((bRam0000000113828588 & 1) == 0) {
    iVar4 = 0x13828588;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      FUN_108b7d120();
      lStack_20 = lRam00000001138285c0;
      if (lRam00000001138285c0 != 0) {
        piVar1 = (int *)(lRam00000001138285c0 + 8);
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
      func_0x000107c30fa8(0x113828578,&lStack_20);
      func_0x000107c278f4(&lStack_20);
      ___cxa_guard_release(0x113828588);
    }
  }
  return 0x113828578;
}



/* Entry: 108b7d120; end: 108b7d173;  */

void FUN_108b7d120(void)

{
  int iVar1;
  
  if ((bRam00000001138285c8 & 1) == 0) {
    iVar1 = 0x138285c8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000107c31088(0x1138285c0,&UNK_10f501fe6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x1138285c8);
      return;
    }
  }
  return;
}



/* Entry: 108b7d174; end: 108b7d1eb;  */

void FUN_108b7d174(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined1 auStack_40 [16];
  byte bStack_30;
  undefined8 uStack_28;
  
  FUN_108b7cf60(0);
  FUN_108b7cf60(1);
  func_0x00010b9941f8(&uStack_28);
  func_0x00010b993b40(auStack_40,uStack_28,param_2);
  if ((bStack_30 & 1) != 0) {
    func_0x000107c30f3c(param_1,auStack_40);
    func_0x000107c27930(auStack_40);
    func_0x000104bdc2fc(&uStack_28);
    return;
  }
  func_0x000104bdc2c8();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108b7d1e8);
  (*pcVar1)();
}



/* Entry: 108b7d1ec; end: 108b7d217;  */

long FUN_108b7d1ec(long param_1)

{
  FUN_108997840(param_1 + 0x68);
  func_0x000107c279a4(param_1 + 0x10);
  return param_1;
}



/* Entry: 108b7d218; end: 108b7d2b3;  */

void FUN_108b7d218(undefined8 *param_1,undefined8 *param_2)

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
  
  func_0x000108b7d7cc();
  uVar1 = 0x40;
  uStack_38 = extraout_x8;
  __Znwm();
  pcStack_68 = FUN_108b7d2b4;
  ppuStack_60 = &PTR_FUN_110ab4068;
  uStack_50 = param_2[1];
  uStack_58 = *param_2;
  uStack_48 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  ppcVar3 = &pcStack_68;
  uVar2 = uVar1;
  func_0x00010b9ac22c();
  *param_1 = uVar1;
  func_0x000108b7d7e4();
  func_0x000108b7d7b8(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000108b7d7e4();
  __ZdlPv(uVar1);
  __Unwind_Resume(uVar2);
  (*ppcVar3[2])(ppcVar3 + 3,uVar2);
  return;
}



/* Entry: 108b7d2b4; end: 108b7d3df;  */

void FUN_108b7d2b4(undefined8 param_1,long param_2)

{
  (**(code **)(param_2 + 0x10))(param_2 + 0x18,param_1);
  return;
}



/* Entry: 108b7d3e0; end: 108b7d443;  */

void FUN_108b7d3e0(long param_1)

{
  param_1 = param_1 + 0x10;
  func_0x00010893d1f0();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 108b7d444; end: 108b7d46b;  */

void FUN_108b7d444(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  FUN_108b7d46c(&uStack_11,param_1,param_2);
  return;
}



/* Entry: 108b7d46c; end: 108b7d507;  */

void FUN_108b7d46c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  func_0x000108b7d7cc();
  uStack_38 = extraout_x8;
  FUN_108b7d524(auStack_50,1);
  FUN_108b7d578(lStack_40,param_3,param_4);
  lVar6 = lStack_40;
  lStack_40 = 0;
  FUN_108b7d508(param_1,lVar6 + 0x18);
  FUN_108b7d774(auStack_50);
  func_0x000108b7d7b8(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  FUN_108b7d774();
  func_0x000108b7d810();
  *extraout_x8_00 = puVar5;
  extraout_x8_00[1] = lVar6;
  puVar2 = (undefined1 *)0x0;
  if (puVar5 != (undefined1 *)0x0) {
    puVar2 = puVar5 + 8;
  }
  if ((puVar2 != (undefined1 *)0x0) &&
     ((*(long *)(puVar2 + 8) == 0 || (*(long *)(*(long *)(puVar2 + 8) + 8) == -1)))) {
    pcStack_58 = FUN_108b7d508;
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
    func_0x000107c278e4(puVar2,&puStack_70);
    func_0x000107c278ec(&puStack_70);
    return;
  }
  return;
}



/* Entry: 108b7d508; end: 108b7d523;  */

void FUN_108b7d508(long *param_1,long param_2,long param_3)

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
    func_0x000107c278e4(lVar2,&lStack_20);
    func_0x000107c278ec(&lStack_20);
    return;
  }
  return;
}



/* Entry: 108b7d524; end: 108b7d54b;  */

long FUN_108b7d524(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_108b7d54c();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 108b7d54c; end: 108b7d577;  */

undefined8 * FUN_108b7d54c(undefined8 *param_1,ulong param_2)

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
  *param_1 = &PTR_FUN_110ab4098;
  FUN_108b7d5e4(param_1 + 3);
  return param_1;
}



/* Entry: 108b7d578; end: 108b7d5bb;  */

undefined8 * FUN_108b7d578(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110ab4098;
  FUN_108b7d5e4(param_1 + 3);
  return param_1;
}



/* Entry: 108b7d5bc; end: 108b7d5bf;  */

void FUN_108b7d5bc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ab4098;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108b7d5c0; end: 108b7d5d3;  */

void FUN_108b7d5c0(void)

{
  FUN_108b7d6f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108b7d5d4; end: 108b7d5e3;  */

void FUN_108b7d5d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108b7d5dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 108b7d5e4; end: 108b7d62f;  */

void FUN_108b7d5e4(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  func_0x00010b9ace44();
  *param_1 = &PTR_FUN_110ab40e8;
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



/* Entry: 108b7d630; end: 108b7d633;  */

void FUN_108b7d630(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uStack_28;
  
  *param_1 = &PTR_FUN_110ab40e8;
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
  FUN_10893cfec(puVar3);
  func_0x00010b9ace94(param_1);
  return;
}



/* Entry: 108b7d634; end: 108b7d647;  */

void FUN_108b7d634(void)

{
  FUN_108b7d658();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108b7d648; end: 108b7d657;  */

undefined1  [16] FUN_108b7d648(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x10;
  auVar1._0_8_ = "Djinni C++ Proxy";
  return auVar1;
}



/* Entry: 108b7d658; end: 108b7d6f7;  */

void FUN_108b7d658(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uStack_28;
  
  *param_1 = &PTR_FUN_110ab40e8;
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
  FUN_10893cfec(puVar3);
  func_0x00010b9ace94(param_1);
  return;
}



/* Entry: 108b7d6f8; end: 108b7d707;  */

void FUN_108b7d6f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ab4098;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108b7d708; end: 108b7d773;  */

void FUN_108b7d708(long param_1,long param_2,undefined8 param_3)

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
    func_0x000107c278e4(param_2,&uStack_20);
    func_0x000107c278ec(&uStack_20);
    return;
  }
  return;
}



/* Entry: 108b7d774; end: 108b7d783;  */

void FUN_108b7d774(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108b7d784; end: 108b7d7ab;  */

undefined8 * FUN_108b7d784(undefined8 *param_1)

{
  FUN_108b7d7ac(*param_1);
  return param_1;
}



/* Entry: 108b7d7ac; end: 108b7d817;  */

void FUN_108b7d7ac(long param_1)

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



/* Entry: 108b7d818; end: 108b7d987;  */

/* WARNING: Possible PIC construction at 0x000108b7d934: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108b7d9b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108b7d938) */
/* WARNING: Removing unreachable block (ram,0x000108b7d950) */
/* WARNING: Removing unreachable block (ram,0x000108b7d95c) */
/* WARNING: Removing unreachable block (ram,0x000108b7d970) */
/* WARNING: Removing unreachable block (ram,0x000108b7d980) */
/* WARNING: Removing unreachable block (ram,0x000108b7d9d4) */
/* WARNING: Removing unreachable block (ram,0x000108b7d9e4) */
/* WARNING: Removing unreachable block (ram,0x000108b7dbbc) */
/* WARNING: Removing unreachable block (ram,0x000108b7dbd0) */
/* WARNING: Removing unreachable block (ram,0x000108b7d9b0) */
/* WARNING: Removing unreachable block (ram,0x000108b7d93c) */
/* WARNING: Removing unreachable block (ram,0x000108b7d9b4) */
/* WARNING: Removing unreachable block (ram,0x000108b7dc40) */
/* WARNING: Removing unreachable block (ram,0x000108b7dc48) */
/* WARNING: Removing unreachable block (ram,0x000108b7dc4c) */
/* WARNING: Removing unreachable block (ram,0x000108b7d9b8) */

void FUN_108b7d818(undefined8 param_1,undefined4 *param_2)

{
  long lVar1;
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [8];
  undefined4 auStack_e8 [2];
  undefined2 uStack_e0;
  undefined4 uStack_d8;
  undefined2 uStack_d0;
  undefined8 uStack_c8;
  undefined1 uStack_c0;
  undefined1 uStack_bf;
  undefined4 uStack_b8;
  undefined2 uStack_b0;
  undefined4 uStack_a8;
  undefined2 uStack_a0;
  undefined4 uStack_98;
  undefined2 uStack_90;
  undefined4 uStack_88;
  undefined2 uStack_80;
  undefined4 uStack_78;
  undefined2 uStack_70;
  undefined4 uStack_68;
  undefined2 uStack_60;
  undefined4 uStack_58;
  undefined2 uStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000108b7dc68();
  FUN_108b7d988();
  func_0x000107c30f7c(auStack_f8,0x1138285d8);
  uStack_e0 = 4;
  auStack_e8[0] = *param_2;
  uStack_d8 = param_2[1];
  uStack_d0 = 4;
  if (*(char *)(param_2 + 3) == '\x01') {
    uStack_c8 = CONCAT44(uStack_c8._4_4_,param_2[2]);
    uStack_c0 = 4;
  }
  else {
    uStack_c8 = 0;
    uStack_c0 = 1;
  }
  uStack_bf = 0;
  uStack_b8 = param_2[4];
  uStack_a8 = param_2[5];
  uStack_98 = param_2[6];
  uStack_88 = param_2[7];
  uStack_78 = param_2[8];
  uStack_68 = param_2[9];
  uStack_b0 = 4;
  uStack_a0 = 4;
  uStack_90 = 4;
  uStack_80 = 4;
  uStack_70 = 4;
  uStack_60 = 4;
  uStack_58 = param_2[10];
  uStack_50 = 4;
  func_0x0001052808e4(auStack_48,param_2 + 0xc);
  func_0x000104bdb9bc(auStack_f0,auStack_f8,auStack_e8,0xb);
  lVar1 = 0xa0;
  do {
    func_0x00010b9a8d98((long)auStack_e8 + lVar1);
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != -0x10);
  func_0x000107c27928(auStack_f8);
  func_0x00010b9a8f60(param_1,auStack_f0);
  func_0x000104bdbf78(auStack_f0);
  return;
}



/* Entry: 108b7d988; end: 108b7dc4f;  */

/* WARNING: Possible PIC construction at 0x000108b7d9b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108b7d9b4) */
/* WARNING: Removing unreachable block (ram,0x000108b7dc40) */
/* WARNING: Removing unreachable block (ram,0x000108b7dc48) */
/* WARNING: Removing unreachable block (ram,0x000108b7dc4c) */
/* WARNING: Removing unreachable block (ram,0x000108b7d9b8) */

void FUN_108b7d988(void)

{
  int iVar1;
  char *pcVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 auStack_1a0 [8];
  undefined1 auStack_198 [8];
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [8];
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [8];
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [8];
  undefined1 auStack_160 [8];
  undefined1 auStack_158 [8];
  undefined1 auStack_150 [8];
  undefined1 auStack_148 [8];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [32];
  
  func_0x000108b7dc68();
  if ((bRam000000011372d7c0 & 1) == 0) {
    iVar1 = 0x1372d7c0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000107c31088(auStack_148,&UNK_10f502011);
      pcVar2 = "durationMs";
      func_0x000107c31088(auStack_150,"durationMs");
      func_0x000104bef760();
      func_0x000107c27e98(auStack_140,auStack_150,pcVar2);
      puVar3 = &UNK_10f502033;
      func_0x000107c31088(auStack_158,&UNK_10f502033);
      func_0x000104bef760();
      func_0x000107c27e98(auStack_128,auStack_158,puVar3);
      puVar3 = &UNK_10f502043;
      func_0x000107c31088(auStack_160,&UNK_10f502043);
      func_0x000104bef494();
      func_0x000107c27e98(auStack_110,auStack_160,puVar3);
      puVar3 = &UNK_10f50204c;
      func_0x000107c31088(auStack_168,&UNK_10f50204c);
      func_0x000104bef760();
      func_0x000107c27e98(auStack_f8,auStack_168,puVar3);
      puVar3 = &UNK_10f50205d;
      func_0x000107c31088(auStack_170,&UNK_10f50205d);
      func_0x000104bef760();
      func_0x000107c27e98(auStack_e0,auStack_170,puVar3);
      puVar3 = &UNK_10f502069;
      func_0x000107c31088(auStack_178,&UNK_10f502069);
      func_0x000104bef760();
      func_0x000107c27e98(auStack_c8,auStack_178,puVar3);
      puVar3 = &UNK_10f502079;
      func_0x000107c31088(auStack_180,&UNK_10f502079);
      func_0x000104bef760();
      func_0x000107c27e98(auStack_b0,auStack_180,puVar3);
      puVar3 = &UNK_10f502084;
      func_0x000107c31088(auStack_188,&UNK_10f502084);
      func_0x000104bef760();
      func_0x000107c27e98(auStack_98,auStack_188,puVar3);
      puVar3 = &UNK_10f502092;
      func_0x000107c31088(auStack_190,&UNK_10f502092);
      func_0x000104bef760();
      func_0x000107c27e98(auStack_80,auStack_190,puVar3);
      puVar3 = &UNK_10f5020a1;
      func_0x000107c31088(auStack_198,&UNK_10f5020a1);
      func_0x000104bef760();
      func_0x000107c27e98(auStack_68,auStack_198,puVar3);
      puVar3 = &UNK_10f501745;
      func_0x000107c31088(auStack_1a0,&UNK_10f501745);
      func_0x000104bdbd7c();
      func_0x000107c27e98(auStack_50,auStack_1a0,puVar3);
      func_0x000104bdbd44(0x1138285d0,auStack_148,0,auStack_140,0xb);
      lVar4 = 0xf0;
      do {
        func_0x000107c27924(auStack_140 + lVar4);
        lVar4 = lVar4 + -0x18;
      } while (lVar4 != -0x18);
      func_0x000107c278f4(auStack_1a0);
      func_0x000107c278f4(auStack_198);
      func_0x000107c278f4(auStack_190);
      func_0x000107c278f4(auStack_188);
      func_0x000107c278f4(auStack_180);
      func_0x000107c278f4(auStack_178);
      func_0x000107c278f4(auStack_170);
      func_0x000107c278f4(auStack_168);
      func_0x000107c278f4(auStack_160);
      func_0x000107c278f4(auStack_158);
      func_0x000107c278f4(auStack_150);
      func_0x000107c278f4(auStack_148);
      ___cxa_guard_release(0x11372d7c0);
    }
  }
  return;
}



/* Entry: 108b7dc50; end: 108b7dc7b;  */

void FUN_108b7dc50(void)

{
  return;
}



/* Entry: 108b7dc7c; end: 108b7de1b;  */

/* WARNING: Possible PIC construction at 0x000108b7ddc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108b7de44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108b7ddcc) */
/* WARNING: Removing unreachable block (ram,0x000108b7dde4) */
/* WARNING: Removing unreachable block (ram,0x000108b7ddf0) */
/* WARNING: Removing unreachable block (ram,0x000108b7de04) */
/* WARNING: Removing unreachable block (ram,0x000108b7de14) */
/* WARNING: Removing unreachable block (ram,0x000108b7de68) */
/* WARNING: Removing unreachable block (ram,0x000108b7de78) */
/* WARNING: Removing unreachable block (ram,0x000108b7e074) */
/* WARNING: Removing unreachable block (ram,0x000108b7e088) */
/* WARNING: Removing unreachable block (ram,0x000108b7de44) */
/* WARNING: Removing unreachable block (ram,0x000108b7ddd0) */
/* WARNING: Removing unreachable block (ram,0x000108b7de48) */
/* WARNING: Removing unreachable block (ram,0x000108b7e100) */
/* WARNING: Removing unreachable block (ram,0x000108b7e108) */
/* WARNING: Removing unreachable block (ram,0x000108b7e10c) */
/* WARNING: Removing unreachable block (ram,0x000108b7de4c) */

void FUN_108b7dc7c(undefined8 param_1,undefined4 *param_2)

{
  long lVar1;
  undefined1 auStack_108 [8];
  undefined1 auStack_100 [8];
  undefined4 auStack_f8 [2];
  undefined2 uStack_f0;
  undefined4 uStack_e8;
  undefined2 uStack_e0;
  undefined4 uStack_d8;
  undefined2 uStack_d0;
  undefined4 uStack_c8;
  undefined2 uStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  undefined1 uStack_af;
  undefined4 uStack_a8;
  undefined2 uStack_a0;
  undefined4 uStack_98;
  undefined2 uStack_90;
  undefined4 uStack_88;
  undefined2 uStack_80;
  undefined4 uStack_78;
  undefined2 uStack_70;
  undefined4 uStack_68;
  undefined2 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined1 uStack_4f;
  undefined4 uStack_48;
  undefined2 uStack_40;
  
  func_0x000108b7e128();
  FUN_108b7de1c();
  func_0x000107c30f7c(auStack_108,0x1138285e8);
  auStack_f8[0] = *param_2;
  uStack_e8 = param_2[1];
  uStack_d8 = param_2[2];
  uStack_c8 = param_2[3];
  uStack_f0 = 4;
  uStack_e0 = 4;
  uStack_d0 = 4;
  uStack_c0 = 4;
  if (*(char *)(param_2 + 5) == '\x01') {
    uStack_b8 = CONCAT44(uStack_b8._4_4_,param_2[4]);
    uStack_b0 = 4;
  }
  else {
    uStack_b8 = 0;
    uStack_b0 = 1;
  }
  uStack_af = 0;
  uStack_a8 = param_2[6];
  uStack_98 = param_2[7];
  uStack_88 = param_2[8];
  uStack_78 = param_2[9];
  uStack_a0 = 4;
  uStack_90 = 4;
  uStack_80 = 4;
  uStack_70 = 4;
  uStack_68 = param_2[10];
  uStack_60 = 4;
  if (*(char *)(param_2 + 0xc) == '\x01') {
    uStack_58 = CONCAT44(uStack_58._4_4_,param_2[0xb]);
    uStack_50 = 4;
  }
  else {
    uStack_58 = 0;
    uStack_50 = 1;
  }
  uStack_4f = 0;
  uStack_48 = param_2[0xd];
  uStack_40 = 4;
  func_0x000104bdb9bc(auStack_100,auStack_108,auStack_f8,0xc);
  lVar1 = 0xb0;
  do {
    func_0x00010b9a8d98((long)auStack_f8 + lVar1);
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != -0x10);
  func_0x000107c27928(auStack_108);
  func_0x00010b9a8f60(param_1,auStack_100);
  func_0x000104bdbf78(auStack_100);
  return;
}



/* Entry: 108b7de1c; end: 108b7e10f;  */

/* WARNING: Possible PIC construction at 0x000108b7de44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108b7de48) */
/* WARNING: Removing unreachable block (ram,0x000108b7e100) */
/* WARNING: Removing unreachable block (ram,0x000108b7e108) */
/* WARNING: Removing unreachable block (ram,0x000108b7e10c) */
/* WARNING: Removing unreachable block (ram,0x000108b7de4c) */

void FUN_108b7de1c(void)

{
  int iVar1;
  char *pcVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 auStack_1c0 [8];
  undefined1 auStack_1b8 [8];
  undefined1 auStack_1b0 [8];
  undefined1 auStack_1a8 [8];
  undefined1 auStack_1a0 [8];
  undefined1 auStack_198 [8];
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [8];
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [8];
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [8];
  undefined1 auStack_160 [8];
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [32];
  
  func_0x000108b7e128();
  if ((bRam000000011372d7c8 & 1) == 0) {
    iVar1 = 0x1372d7c8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000107c31088(auStack_160,&UNK_10f5020af);
      pcVar2 = "durationMs";
      func_0x000107c31088(auStack_168,"durationMs");
      func_0x000104bef760();
      func_0x000107c27e98(auStack_158,auStack_168,pcVar2);
      puVar3 = &UNK_10f5020cf;
      func_0x000107c31088(auStack_170,&UNK_10f5020cf);
      func_0x000104bef760();
      func_0x000107c27e98(auStack_140,auStack_170,puVar3);
      puVar3 = &UNK_10f5020df;
      func_0x000107c31088(auStack_178,&UNK_10f5020df);
      func_0x000104bef760();
      func_0x000107c27e98(auStack_128,auStack_178,puVar3);
      puVar3 = &UNK_10f5020f5;
      func_0x000107c31088(auStack_180,&UNK_10f5020f5);
      func_0x000104bef760();
      func_0x000107c27e98(auStack_110,auStack_180,puVar3);
      puVar3 = &UNK_10f5020fe;
      func_0x000107c31088(auStack_188,&UNK_10f5020fe);
      func_0x000104bef494();
      func_0x000107c27e98(auStack_f8,auStack_188,puVar3);
      puVar3 = &UNK_10f502104;
      func_0x000107c31088(auStack_190,&UNK_10f502104);
      func_0x000104bef760();
      func_0x000107c27e98(auStack_e0,auStack_190,puVar3);
      puVar3 = &UNK_10f502115;
      func_0x000107c31088(auStack_198,&UNK_10f502115);
      func_0x000104bef760();
      func_0x000107c27e98(auStack_c8,auStack_198,puVar3);
      puVar3 = &UNK_10f502128;
      func_0x000107c31088(auStack_1a0,&UNK_10f502128);
      func_0x000104bef760();
      func_0x000107c27e98(auStack_b0,auStack_1a0,puVar3);
      puVar3 = &UNK_10f5017a7;
      func_0x000107c31088(auStack_1a8,&UNK_10f5017a7);
      func_0x000104bef760();
      func_0x000107c27e98(auStack_98,auStack_1a8,puVar3);
      puVar3 = &UNK_10f50213b;
      func_0x000107c31088(auStack_1b0,&UNK_10f50213b);
      func_0x000104bef760();
      func_0x000107c27e98(auStack_80,auStack_1b0,puVar3);
      puVar3 = &UNK_10f502149;
      func_0x000107c31088(auStack_1b8,&UNK_10f502149);
      func_0x000104bef494();
      func_0x000107c27e98(auStack_68,auStack_1b8,puVar3);
      puVar3 = &UNK_10f50214f;
      func_0x000107c31088(auStack_1c0,&UNK_10f50214f);
      func_0x000104bef760();
      func_0x000107c27e98(auStack_50,auStack_1c0,puVar3);
      func_0x000104bdbd44(0x1138285e0,auStack_160,0,auStack_158,0xc);
      lVar4 = 0x108;
      do {
        func_0x000107c27924(auStack_158 + lVar4);
        lVar4 = lVar4 + -0x18;
      } while (lVar4 != -0x18);
      func_0x000107c278f4(auStack_1c0);
      func_0x000107c278f4(auStack_1b8);
      func_0x000107c278f4(auStack_1b0);
      func_0x000107c278f4(auStack_1a8);
      func_0x000107c278f4(auStack_1a0);
      func_0x000107c278f4(auStack_198);
      func_0x000107c278f4(auStack_190);
      func_0x000107c278f4(auStack_188);
      func_0x000107c278f4(auStack_180);
      func_0x000107c278f4(auStack_178);
      func_0x000107c278f4(auStack_170);
      func_0x000107c278f4(auStack_168);
      func_0x000107c278f4(auStack_160);
      ___cxa_guard_release(0x11372d7c8);
    }
  }
  return;
}



/* Entry: 108b7e110; end: 108b7e13b;  */

void FUN_108b7e110(void)

{
  return;
}



/* Entry: 108b7e13c; end: 108b7e2b7;  */

undefined1 * FUN_108b7e13c(undefined8 param_1,long param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined1 auStack_2d0 [8];
  undefined1 auStack_2c8 [8];
  undefined1 auStack_2c0 [8];
  undefined1 auStack_2b8 [8];
  undefined1 auStack_2b0 [8];
  undefined1 auStack_2a8 [8];
  undefined1 auStack_2a0 [8];
  undefined1 auStack_298 [8];
  undefined1 auStack_290 [8];
  undefined1 auStack_288 [8];
  undefined1 auStack_280 [8];
  undefined1 auStack_278 [8];
  undefined1 auStack_270 [8];
  undefined1 auStack_268 [24];
  undefined1 auStack_250 [24];
  undefined1 auStack_238 [24];
  undefined1 auStack_220 [24];
  undefined1 auStack_208 [24];
  undefined1 auStack_1f0 [24];
  undefined1 auStack_1d8 [24];
  undefined1 auStack_1c0 [24];
  undefined1 auStack_1a8 [24];
  undefined1 auStack_190 [24];
  undefined1 auStack_178 [24];
  undefined1 auStack_160 [32];
  undefined1 auStack_108 [8];
  undefined1 auStack_100 [8];
  undefined1 auStack_f8 [16];
  undefined1 auStack_e8 [16];
  undefined4 uStack_d8;
  undefined2 uStack_d0;
  undefined4 uStack_c8;
  undefined2 uStack_c0;
  undefined4 uStack_b8;
  undefined2 uStack_b0;
  undefined4 uStack_a8;
  undefined2 uStack_a0;
  undefined4 uStack_98;
  undefined2 uStack_90;
  undefined4 uStack_88;
  undefined2 uStack_80;
  undefined4 uStack_78;
  undefined2 uStack_70;
  undefined4 uStack_68;
  undefined2 uStack_60;
  undefined4 uStack_58;
  undefined2 uStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000108b7e670();
  FUN_108b7e2b8();
  func_0x000107c30f7c(auStack_108,0x1138285f8);
  func_0x0001052808e4(auStack_f8,param_2);
  func_0x0001052808e4(auStack_e8,param_2 + 0x18);
  uStack_d8 = *(undefined4 *)(param_2 + 0x30);
  uStack_c8 = *(undefined4 *)(param_2 + 0x34);
  uStack_b8 = *(undefined4 *)(param_2 + 0x38);
  uStack_a8 = *(undefined4 *)(param_2 + 0x3c);
  uStack_98 = *(undefined4 *)(param_2 + 0x40);
  uStack_88 = *(undefined4 *)(param_2 + 0x44);
  uStack_78 = *(undefined4 *)(param_2 + 0x48);
  uStack_68 = *(undefined4 *)(param_2 + 0x4c);
  uStack_d0 = 4;
  uStack_c0 = 4;
  uStack_b0 = 4;
  uStack_a0 = 4;
  uStack_90 = 4;
  uStack_80 = 4;
  uStack_70 = 4;
  uStack_60 = 4;
  uStack_58 = *(undefined4 *)(param_2 + 0x50);
  uStack_50 = 4;
  func_0x000108b7e638(auStack_48,param_2 + 0x58);
  func_0x000104bdb9bc(auStack_100,auStack_108,auStack_f8,0xc);
  lVar6 = 0xb0;
  do {
    func_0x00010b9a8d98(auStack_f8 + lVar6);
    lVar6 = lVar6 + -0x10;
    uVar1 = lVar6 == -0x10;
  } while (!(bool)uVar1);
  func_0x000107c27928(auStack_108);
  func_0x00010b9a8f60(param_1,auStack_100);
  puVar3 = auStack_100;
  func_0x000104bdbf78();
  func_0x000108b7e658();
  if ((bool)uVar1) {
    return puVar3;
  }
  ___stack_chk_fail();
  puVar4 = auStack_48;
  lVar6 = -0xc0;
  do {
    func_0x00010b9a8d98(puVar4);
    puVar4 = puVar4 + -0x10;
    lVar6 = lVar6 + 0x10;
    uVar1 = lVar6 == 0;
  } while (!(bool)uVar1);
  func_0x000107c27928(auStack_108);
  __Unwind_Resume(puVar3);
  func_0x000108b7e670();
  if ((bRam000000011372d7d0 & 1) == 0) {
    iVar2 = 0x1372d7d0;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107c31088(auStack_270,&UNK_10f50215b);
      puVar5 = &DAT_10f637b7c;
      func_0x000107c31088(auStack_278,&DAT_10f637b7c);
      func_0x000104bdbd7c();
      func_0x000107c27e98(auStack_268,auStack_278,puVar5);
      puVar5 = &UNK_10f50217e;
      func_0x000107c31088(auStack_280,&UNK_10f50217e);
      func_0x000104bdbd7c();
      func_0x000107c27e98(auStack_250,auStack_280,puVar5);
      func_0x000107c31088(auStack_288,&UNK_10f50218d);
      if ((bRam000000011372d7d8 & 1) == 0) goto LAB_108b7e5c4;
      goto LAB_108b7e390;
    }
  }
  while (func_0x000108b7e658(), !(bool)uVar1) {
    ___stack_chk_fail();
LAB_108b7e5c4:
    iVar2 = 0x1372d7d8;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x00010b990e20(0x11372d7e8);
      ___cxa_guard_release(0x11372d7d8);
    }
LAB_108b7e390:
    func_0x000107c27e98(auStack_238,auStack_288,0x11372d7e8);
    puVar5 = &UNK_10f50219e;
    func_0x000107c31088(auStack_290,&UNK_10f50219e);
    func_0x000104bef760();
    func_0x000107c27e98(auStack_220,auStack_290,puVar5);
    puVar5 = &UNK_10f5021b9;
    func_0x000107c31088(auStack_298,&UNK_10f5021b9);
    func_0x000104bef760();
    func_0x000107c27e98(auStack_208,auStack_298,puVar5);
    puVar5 = &UNK_10f5021d6;
    func_0x000107c31088(auStack_2a0,&UNK_10f5021d6);
    func_0x000104bef760();
    func_0x000107c27e98(auStack_1f0,auStack_2a0,puVar5);
    puVar5 = &UNK_10f5021ef;
    func_0x000107c31088(auStack_2a8,&UNK_10f5021ef);
    func_0x000104bef760();
    func_0x000107c27e98(auStack_1d8,auStack_2a8,puVar5);
    puVar5 = &UNK_10f50220a;
    func_0x000107c31088(auStack_2b0,&UNK_10f50220a);
    func_0x000104bef760();
    func_0x000107c27e98(auStack_1c0,auStack_2b0,puVar5);
    puVar5 = &UNK_10f502235;
    func_0x000107c31088(auStack_2b8,&UNK_10f502235);
    func_0x000104bef760();
    func_0x000107c27e98(auStack_1a8,auStack_2b8,puVar5);
    puVar5 = &UNK_10f502259;
    func_0x000107c31088(auStack_2c0,&UNK_10f502259);
    func_0x000104bef760();
    func_0x000107c27e98(auStack_190,auStack_2c0,puVar5);
    puVar5 = &UNK_10f50227b;
    func_0x000107c31088(auStack_2c8,&UNK_10f50227b);
    func_0x000104bef760();
    func_0x000107c27e98(auStack_178,auStack_2c8,puVar5);
    func_0x000107c31088(auStack_2d0,&UNK_10f502293);
    if ((bRam000000011372d7e0 & 1) == 0) {
      iVar2 = 0x1372d7e0;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        FUN_108b7e79c();
        func_0x00010b990784(0x11372d7f8);
        ___cxa_guard_release(0x11372d7e0);
      }
    }
    func_0x000107c27e98(auStack_160,auStack_2d0,0x11372d7f8);
    func_0x000104bdbd44(0x1138285f0,auStack_270,0,auStack_268,0xc);
    lVar6 = 0x108;
    do {
      func_0x000107c27924(auStack_268 + lVar6);
      lVar6 = lVar6 + -0x18;
      uVar1 = lVar6 == -0x18;
    } while (!(bool)uVar1);
    func_0x000107c278f4(auStack_2d0);
    func_0x000107c278f4(auStack_2c8);
    func_0x000107c278f4(auStack_2c0);
    func_0x000107c278f4(auStack_2b8);
    func_0x000107c278f4(auStack_2b0);
    func_0x000107c278f4(auStack_2a8);
    func_0x000107c278f4(auStack_2a0);
    func_0x000107c278f4(auStack_298);
    func_0x000107c278f4(auStack_290);
    func_0x000107c278f4(auStack_288);
    func_0x000107c278f4(auStack_280);
    func_0x000107c278f4(auStack_278);
    func_0x000107c278f4(auStack_270);
    ___cxa_guard_release(0x11372d7d0);
  }
  return (undefined1 *)0x1138285f0;
}



/* Entry: 108b7e2b8; end: 108b7e637;  */

undefined8 FUN_108b7e2b8(void)

{
  undefined1 in_ZR;
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 auStack_1c0 [8];
  undefined1 auStack_1b8 [8];
  undefined1 auStack_1b0 [8];
  undefined1 auStack_1a8 [8];
  undefined1 auStack_1a0 [8];
  undefined1 auStack_198 [8];
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [8];
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [8];
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [8];
  undefined1 auStack_160 [8];
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [32];
  
  func_0x000108b7e670();
  if ((bRam000000011372d7d0 & 1) == 0) {
    iVar1 = 0x1372d7d0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000107c31088(auStack_160,&UNK_10f50215b);
      puVar2 = &DAT_10f637b7c;
      func_0x000107c31088(auStack_168,&DAT_10f637b7c);
      func_0x000104bdbd7c();
      func_0x000107c27e98(auStack_158,auStack_168,puVar2);
      puVar2 = &UNK_10f50217e;
      func_0x000107c31088(auStack_170,&UNK_10f50217e);
      func_0x000104bdbd7c();
      func_0x000107c27e98(auStack_140,auStack_170,puVar2);
      func_0x000107c31088(auStack_178,&UNK_10f50218d);
      if ((bRam000000011372d7d8 & 1) == 0) goto LAB_108b7e5c4;
      goto LAB_108b7e390;
    }
  }
  while (func_0x000108b7e658(), !(bool)in_ZR) {
    ___stack_chk_fail();
LAB_108b7e5c4:
    iVar1 = 0x1372d7d8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x11372d7e8);
      ___cxa_guard_release(0x11372d7d8);
    }
LAB_108b7e390:
    func_0x000107c27e98(auStack_128,auStack_178,0x11372d7e8);
    puVar2 = &UNK_10f50219e;
    func_0x000107c31088(auStack_180,&UNK_10f50219e);
    func_0x000104bef760();
    func_0x000107c27e98(auStack_110,auStack_180,puVar2);
    puVar2 = &UNK_10f5021b9;
    func_0x000107c31088(auStack_188,&UNK_10f5021b9);
    func_0x000104bef760();
    func_0x000107c27e98(auStack_f8,auStack_188,puVar2);
    puVar2 = &UNK_10f5021d6;
    func_0x000107c31088(auStack_190,&UNK_10f5021d6);
    func_0x000104bef760();
    func_0x000107c27e98(auStack_e0,auStack_190,puVar2);
    puVar2 = &UNK_10f5021ef;
    func_0x000107c31088(auStack_198,&UNK_10f5021ef);
    func_0x000104bef760();
    func_0x000107c27e98(auStack_c8,auStack_198,puVar2);
    puVar2 = &UNK_10f50220a;
    func_0x000107c31088(auStack_1a0,&UNK_10f50220a);
    func_0x000104bef760();
    func_0x000107c27e98(auStack_b0,auStack_1a0,puVar2);
    puVar2 = &UNK_10f502235;
    func_0x000107c31088(auStack_1a8,&UNK_10f502235);
    func_0x000104bef760();
    func_0x000107c27e98(auStack_98,auStack_1a8,puVar2);
    puVar2 = &UNK_10f502259;
    func_0x000107c31088(auStack_1b0,&UNK_10f502259);
    func_0x000104bef760();
    func_0x000107c27e98(auStack_80,auStack_1b0,puVar2);
    puVar2 = &UNK_10f50227b;
    func_0x000107c31088(auStack_1b8,&UNK_10f50227b);
    func_0x000104bef760();
    func_0x000107c27e98(auStack_68,auStack_1b8,puVar2);
    func_0x000107c31088(auStack_1c0,&UNK_10f502293);
    if ((bRam000000011372d7e0 & 1) == 0) {
      iVar1 = 0x1372d7e0;
      ___cxa_guard_acquire();
      if (iVar1 != 0) {
        FUN_108b7e79c();
        func_0x00010b990784(0x11372d7f8);
        ___cxa_guard_release(0x11372d7e0);
      }
    }
    func_0x000107c27e98(auStack_50,auStack_1c0,0x11372d7f8);
    func_0x000104bdbd44(0x1138285f0,auStack_160,0,auStack_158,0xc);
    lVar3 = 0x108;
    do {
      func_0x000107c27924(auStack_158 + lVar3);
      lVar3 = lVar3 + -0x18;
      in_ZR = lVar3 == -0x18;
    } while (!(bool)in_ZR);
    func_0x000107c278f4(auStack_1c0);
    func_0x000107c278f4(auStack_1b8);
    func_0x000107c278f4(auStack_1b0);
    func_0x000107c278f4(auStack_1a8);
    func_0x000107c278f4(auStack_1a0);
    func_0x000107c278f4(auStack_198);
    func_0x000107c278f4(auStack_190);
    func_0x000107c278f4(auStack_188);
    func_0x000107c278f4(auStack_180);
    func_0x000107c278f4(auStack_178);
    func_0x000107c278f4(auStack_170);
    func_0x000107c278f4(auStack_168);
    func_0x000107c278f4(auStack_160);
    ___cxa_guard_release(0x11372d7d0);
  }
  return 0x1138285f0;
}



/* Entry: 108b7e638; end: 108b7e683;  */

undefined4 * FUN_108b7e638(undefined8 *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [8];
  undefined1 auStack_120 [8];
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined8 uStack_b8;
  undefined4 *puStack_b0;
  undefined4 *puStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined1 auStack_88 [8];
  undefined4 auStack_80 [2];
  undefined4 auStack_78 [2];
  undefined2 uStack_70;
  undefined4 uStack_68;
  undefined2 uStack_60;
  undefined4 uStack_58;
  undefined2 uStack_50;
  undefined8 uStack_48;
  undefined2 uStack_40;
  undefined8 uStack_38;
  
  if (*(char *)(param_2 + 6) != '\x01') {
    *(undefined2 *)(param_1 + 1) = 1;
    *param_1 = 0;
    return param_2;
  }
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_108b7e79c();
  func_0x000107c30f7c(auStack_88,0x113828608);
  uStack_70 = 4;
  auStack_78[0] = *param_2;
  uStack_68 = param_2[1];
  uStack_60 = 4;
  uStack_58 = param_2[2];
  uStack_50 = 4;
  uStack_48 = *(undefined8 *)(param_2 + 4);
  uStack_40 = 5;
  func_0x000104bdb9bc(auStack_80,auStack_88,auStack_78,4);
  lVar7 = 0x30;
  do {
    func_0x00010b9a8d98((long)auStack_78 + lVar7);
    lVar7 = lVar7 + -0x10;
    uVar1 = lVar7 == -0x10;
  } while (!(bool)uVar1);
  func_0x000107c27928(auStack_88);
  puVar3 = auStack_80;
  func_0x00010b9a8f60(param_1);
  puVar2 = auStack_80;
  func_0x000104bdbf78();
  FUN_108b7e928(uStack_38);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  lVar7 = 0x30;
  do {
    func_0x00010b9a8d98((long)auStack_78 + lVar7);
    iVar5 = (int)puVar3;
    lVar7 = lVar7 + -0x10;
    uVar1 = lVar7 == -0x10;
  } while (!(bool)uVar1);
  func_0x000107c27928(auStack_88);
  puVar3 = puVar2;
  __Unwind_Resume(puVar2);
  pcStack_98 = FUN_108b7e79c;
  uStack_b8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_b0 = auStack_78;
  puStack_a8 = puVar2;
  puStack_a0 = &stack0xfffffffffffffff0;
  if ((bRam0000000113828610 & 1) == 0) {
    puVar3 = (undefined4 *)0x113828610;
    ___cxa_guard_acquire();
    if ((int)puVar3 != 0) {
      func_0x000107c31088(auStack_120,&UNK_10f5022a2);
      puVar4 = &UNK_10f5022c7;
      func_0x000107c31088(auStack_128,&UNK_10f5022c7);
      func_0x000104bef760();
      func_0x000107c27e98(auStack_118,auStack_128,puVar4);
      puVar4 = &UNK_10f5022dc;
      func_0x000107c31088(auStack_130,&UNK_10f5022dc);
      func_0x000104bef760();
      func_0x000107c27e98(auStack_100,auStack_130,puVar4);
      puVar4 = &UNK_10f5022ff;
      func_0x000107c31088(auStack_138,&UNK_10f5022ff);
      func_0x000104bef760();
      func_0x000107c27e98(auStack_e8,auStack_138,puVar4);
      puVar4 = &UNK_10f502312;
      func_0x000107c31088(auStack_140,&UNK_10f502312);
      func_0x000104bef5f8();
      func_0x000107c27e98(auStack_d0,auStack_140,puVar4);
      uVar6 = 0;
      func_0x000104bdbd44(0x113828600,auStack_120,0,auStack_118,4);
      lVar7 = 0x48;
      do {
        func_0x000107c27924(auStack_118 + lVar7);
        iVar5 = (int)uVar6;
        lVar7 = lVar7 + -0x18;
        uVar1 = lVar7 == -0x18;
      } while (!(bool)uVar1);
      func_0x000107c278f4(auStack_140);
      func_0x000107c278f4(auStack_138);
      func_0x000107c278f4(auStack_130);
      func_0x000107c278f4(auStack_128);
      func_0x000107c278f4(auStack_120);
      puVar3 = (undefined4 *)0x113828610;
      ___cxa_guard_release(0x113828610);
    }
  }
  FUN_108b7e928(uStack_b8);
  if ((bool)uVar1) {
    return (undefined4 *)0x113828600;
  }
  ___stack_chk_fail();
  if (iVar5 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return puVar3;
}



/* Entry: 108b7e684; end: 108b7e79b;  */

undefined1 * FUN_108b7e684(undefined8 param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [8];
  undefined1 auStack_120 [8];
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined8 uStack_b8;
  undefined4 *puStack_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined4 auStack_78 [2];
  undefined2 uStack_70;
  undefined4 uStack_68;
  undefined2 uStack_60;
  undefined4 uStack_58;
  undefined2 uStack_50;
  undefined8 uStack_48;
  undefined2 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_108b7e79c();
  func_0x000107c30f7c(auStack_88,0x113828608);
  uStack_70 = 4;
  auStack_78[0] = *param_2;
  uStack_68 = param_2[1];
  uStack_60 = 4;
  uStack_58 = param_2[2];
  uStack_50 = 4;
  uStack_48 = *(undefined8 *)(param_2 + 4);
  uStack_40 = 5;
  func_0x000104bdb9bc(auStack_80,auStack_88,auStack_78,4);
  lVar7 = 0x30;
  do {
    func_0x00010b9a8d98((long)auStack_78 + lVar7);
    lVar7 = lVar7 + -0x10;
    uVar1 = lVar7 == -0x10;
  } while (!(bool)uVar1);
  func_0x000107c27928(auStack_88);
  puVar3 = auStack_80;
  func_0x00010b9a8f60(param_1);
  puVar2 = auStack_80;
  func_0x000104bdbf78();
  FUN_108b7e928(uStack_38);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  lVar7 = 0x30;
  do {
    func_0x00010b9a8d98((long)auStack_78 + lVar7);
    iVar5 = (int)puVar3;
    lVar7 = lVar7 + -0x10;
    uVar1 = lVar7 == -0x10;
  } while (!(bool)uVar1);
  func_0x000107c27928(auStack_88);
  puVar3 = puVar2;
  __Unwind_Resume(puVar2);
  pcStack_98 = FUN_108b7e79c;
  uStack_b8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_b0 = auStack_78;
  puStack_a8 = puVar2;
  puStack_a0 = &stack0xfffffffffffffff0;
  if ((bRam0000000113828610 & 1) == 0) {
    puVar3 = (undefined1 *)0x113828610;
    ___cxa_guard_acquire();
    if ((int)puVar3 != 0) {
      func_0x000107c31088(auStack_120,&UNK_10f5022a2);
      puVar4 = &UNK_10f5022c7;
      func_0x000107c31088(auStack_128,&UNK_10f5022c7);
      func_0x000104bef760();
      func_0x000107c27e98(auStack_118,auStack_128,puVar4);
      puVar4 = &UNK_10f5022dc;
      func_0x000107c31088(auStack_130,&UNK_10f5022dc);
      func_0x000104bef760();
      func_0x000107c27e98(auStack_100,auStack_130,puVar4);
      puVar4 = &UNK_10f5022ff;
      func_0x000107c31088(auStack_138,&UNK_10f5022ff);
      func_0x000104bef760();
      func_0x000107c27e98(auStack_e8,auStack_138,puVar4);
      puVar4 = &UNK_10f502312;
      func_0x000107c31088(auStack_140,&UNK_10f502312);
      func_0x000104bef5f8();
      func_0x000107c27e98(auStack_d0,auStack_140,puVar4);
      uVar6 = 0;
      func_0x000104bdbd44(0x113828600,auStack_120,0,auStack_118,4);
      lVar7 = 0x48;
      do {
        func_0x000107c27924(auStack_118 + lVar7);
        iVar5 = (int)uVar6;
        lVar7 = lVar7 + -0x18;
        uVar1 = lVar7 == -0x18;
      } while (!(bool)uVar1);
      func_0x000107c278f4(auStack_140);
      func_0x000107c278f4(auStack_138);
      func_0x000107c278f4(auStack_130);
      func_0x000107c278f4(auStack_128);
      func_0x000107c278f4(auStack_120);
      puVar3 = (undefined1 *)0x113828610;
      ___cxa_guard_release(0x113828610);
    }
  }
  FUN_108b7e928(uStack_b8);
  if ((bool)uVar1) {
    return (undefined1 *)0x113828600;
  }
  ___stack_chk_fail();
  if (iVar5 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return puVar3;
}



/* Entry: 108b7e79c; end: 108b7e927;  */

undefined8 FUN_108b7e79c(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  undefined *puVar1;
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
  if ((bRam0000000113828610 & 1) == 0) {
    param_1 = 0x113828610;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107c31088(auStack_90,&UNK_10f5022a2);
      puVar1 = &UNK_10f5022c7;
      func_0x000107c31088(auStack_98,&UNK_10f5022c7);
      func_0x000104bef760();
      func_0x000107c27e98(auStack_88,auStack_98,puVar1);
      puVar1 = &UNK_10f5022dc;
      func_0x000107c31088(auStack_a0,&UNK_10f5022dc);
      func_0x000104bef760();
      func_0x000107c27e98(auStack_70,auStack_a0,puVar1);
      puVar1 = &UNK_10f5022ff;
      func_0x000107c31088(auStack_a8,&UNK_10f5022ff);
      func_0x000104bef760();
      func_0x000107c27e98(auStack_58,auStack_a8,puVar1);
      puVar1 = &UNK_10f502312;
      func_0x000107c31088(auStack_b0,&UNK_10f502312);
      func_0x000104bef5f8();
      func_0x000107c27e98(auStack_40,auStack_b0,puVar1);
      uVar2 = 0;
      func_0x000104bdbd44(0x113828600,auStack_90,0,auStack_88,4);
      lVar3 = 0x48;
      do {
        func_0x000107c27924(auStack_88 + lVar3);
        param_2 = (int)uVar2;
        lVar3 = lVar3 + -0x18;
        in_ZR = lVar3 == -0x18;
      } while (!(bool)in_ZR);
      func_0x000107c278f4(auStack_b0);
      func_0x000107c278f4(auStack_a8);
      func_0x000107c278f4(auStack_a0);
      func_0x000107c278f4(auStack_98);
      func_0x000107c278f4(auStack_90);
      param_1 = 0x113828610;
      ___cxa_guard_release(0x113828610);
    }
  }
  FUN_108b7e928(uStack_28);
  if ((bool)in_ZR) {
    return 0x113828600;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return param_1;
}



/* Entry: 108b7e928; end: 108b7e93b;  */

void FUN_108b7e928(void)

{
  return;
}



/* Entry: 108b7e93c; end: 108b7edcf;  */

void FUN_108b7e93c(long *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined1 uVar4;
  int iVar5;
  code **ppcVar6;
  undefined8 ***pppuVar7;
  code ***pppcVar8;
  undefined **ppuVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  undefined **ppuVar10;
  long lVar11;
  undefined *puVar12;
  code **ppcStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 **ppuStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [8];
  code *pcStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  code **ppcStack_d0;
  code **appcStack_c8 [2];
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  code **ppcStack_98;
  undefined **ppuStack_90;
  code *pcStack_88;
  undefined8 uStack_68;
  
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam000000011372d808 & 1) == 0) {
    iVar5 = 0x1372d808;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      FUN_108b7f0b0();
      FUN_108b7ee58(0);
      FUN_108b7ee58(1);
      func_0x00010b9941f8(appcStack_c8);
      func_0x00010b993b40(&ppcStack_98,appcStack_c8[0],0x113828650);
      if (((ulong)pcStack_88 & 1) == 0) goto LAB_108b7ecfc;
      func_0x000107c30f3c(0x11372d810,&ppcStack_98);
      func_0x000107c27930(&ppcStack_98);
      func_0x000104bdc2fc(appcStack_c8);
      ___cxa_guard_release(0x11372d808);
    }
  }
  ppcVar6 = (code **)0x11372d818;
  func_0x000107c30f7c(auStack_f8);
  pcStack_110 = FUN_108b7edd0;
  func_0x000108b7f530();
  if (extraout_x8 != 0) {
    do {
      func_0x000108b7f4c8();
    } while (extraout_w10 != 0);
  }
  pcStack_e8 = FUN_108b7edd0;
  uStack_108 = 0;
  uStack_100 = 0;
  func_0x000108b7f55c();
  ppcStack_98 = (code **)FUN_108b7f104;
  ppuStack_90 = &PTR_FUN_110ab4118;
  pcStack_88 = FUN_108b7edd0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  func_0x000108b7f574();
  ppuStack_128 = (undefined8 **)ppcVar6;
  (*(code *)*ppuStack_90)(&ppuStack_90);
  do {
    func_0x000108b7f520();
  } while (extraout_w10_00 != 0);
  ppcStack_98 = ppcVar6;
  func_0x000108b7f57c(appcStack_c8);
  func_0x000108b7f554();
  pppuVar7 = &ppuStack_128;
  func_0x000104bda3d0();
  func_0x000108b7f54c();
  ppuStack_128 = (undefined8 **)0x108b7ee00;
  func_0x000108b7f530();
  if (extraout_x8_00 != 0) {
    do {
      func_0x000108b7f4c8();
    } while (extraout_w10_01 != 0);
  }
  pcStack_e8 = (code *)0x108b7ee00;
  uStack_120 = 0;
  uStack_118 = 0;
  func_0x000108b7f55c();
  func_0x000108b7f4e0(FUN_108b7f278);
  func_0x000108b7f574();
  ppcStack_140 = (code **)pppuVar7;
  func_0x000108b7f500();
  do {
    func_0x000108b7f520();
  } while (extraout_w10_02 != 0);
  ppcStack_98 = (code **)pppuVar7;
  func_0x000108b7f57c(auStack_b8);
  func_0x000108b7f554();
  pppcVar8 = &ppcStack_140;
  func_0x000104bda3d0();
  func_0x000108b7f54c();
  ppcStack_140 = (code **)0x108b7ee2c;
  func_0x000108b7f530();
  if (extraout_x8_01 != 0) {
    do {
      func_0x000108b7f4c8();
    } while (extraout_w10_03 != 0);
  }
  pcStack_e8 = (code *)0x108b7ee2c;
  uStack_138 = 0;
  uStack_130 = 0;
  func_0x000108b7f55c();
  func_0x000108b7f4e0(FUN_108b7f2f0);
  func_0x000108b7f574();
  ppcStack_d0 = (code **)pppcVar8;
  func_0x000108b7f500();
  do {
    func_0x000108b7f520();
  } while (extraout_w10_04 != 0);
  ppcStack_98 = (code **)pppcVar8;
  func_0x000108b7f57c(auStack_a8);
  func_0x000108b7f554();
  func_0x000104bda3d0(&ppcStack_d0);
  func_0x000108b7f54c();
  func_0x000104bdb9bc(auStack_f0,auStack_f8,appcStack_c8,3);
  lVar11 = 0x20;
  do {
    func_0x00010b9a8d98((long)appcStack_c8 + lVar11);
    lVar11 = lVar11 + -0x10;
    uVar4 = lVar11 == -0x10;
  } while (!(bool)uVar4);
  func_0x000108937570(&uStack_138);
  func_0x000108937570(&uStack_120);
  func_0x000108937570(&uStack_108);
  func_0x000107c27928(auStack_f8);
  ppuVar9 = (undefined **)0x50;
  __Znwm();
  ppuVar10 = ppuVar9 + 1;
  *ppuVar10 = (undefined *)0x0;
  ppuVar9[2] = (undefined *)0x0;
  *ppuVar9 = (undefined *)&PTR_DAT_110ab4188;
  pppcVar8 = (code ***)(ppuVar9 + 3);
  func_0x00010b9ace44(pppcVar8,auStack_f0);
  ppuVar9[3] = (undefined *)&PTR_DAT_110ab41d8;
  lVar11 = param_2[1];
  puVar12 = (undefined *)*param_2;
  ppuVar9[9] = (undefined *)param_2[1];
  ppuVar9[8] = puVar12;
  if (lVar11 != 0) {
    do {
      func_0x000108b7f4c8();
    } while (extraout_w10_05 != 0);
  }
  appcStack_c8[0] = (code **)pppcVar8;
  if ((ppuVar9[5] == (undefined *)0x0) || (uVar4 = *(long *)(ppuVar9[5] + 8) == -1, (bool)uVar4)) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppuVar10,0x10);
      if (bVar2) {
        *ppuVar10 = *ppuVar10 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    ppcStack_98 = (code **)pppcVar8;
    ppuStack_90 = ppuVar9;
    func_0x000107c278e4(ppuVar9 + 4,&ppcStack_98);
    func_0x000107c278ec(&ppcStack_98);
    if (ppuVar9[5] != (undefined *)0x0) goto LAB_108b7ec38;
  }
  else {
LAB_108b7ec38:
    do {
      func_0x000108b7f4c8();
    } while (extraout_w10_06 != 0);
  }
  *param_1 = (long)pppcVar8;
  FUN_108b7f468(appcStack_c8);
  func_0x000104bdbf78(auStack_f0);
  func_0x000108b7f590(uStack_68);
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
LAB_108b7ecfc:
  func_0x000104bdc2c8();
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x108b7ed04);
  (*pcVar3)();
}



/* Entry: 108b7edd0; end: 108b7ee57;  */

void FUN_108b7edd0(float param_1)

{
  long extraout_x8;
  double *unaff_x19;
  
  func_0x000108b7f510();
  (**(code **)(extraout_x8 + 0x10))();
  *(undefined2 *)(unaff_x19 + 1) = 6;
  *unaff_x19 = (double)param_1;
  return;
}



/* Entry: 108b7ee58; end: 108b7f013;  */

void FUN_108b7ee58(ulong param_1)

{
  byte bVar1;
  undefined1 in_ZR;
  int iVar2;
  long lVar3;
  undefined1 auStack_b8 [16];
  undefined8 uStack_a8;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined1 auStack_88 [16];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [16];
  undefined8 uStack_58;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined1 auStack_38 [16];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  bVar1 = *(byte *)((param_1 & 0xffffffff) + 0x113828618);
  *(undefined1 *)((param_1 & 0xffffffff) + 0x113828618) = 1;
  if ((bVar1 & 1) != 0) goto LAB_108b7eeb0;
  if ((bRam0000000113828648 & 1) == 0) goto LAB_108b7eed0;
  while( true ) {
    FUN_108b80888(0x113828638);
LAB_108b7eeb0:
    func_0x000108b7f590(uStack_28);
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
LAB_108b7eed0:
    iVar2 = 0x13828648;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      FUN_108b7f0b0();
      func_0x000107c31088(&uStack_78,&UNK_10f502326);
      func_0x0001052b6d98();
      func_0x000108b7f4b0(auStack_88);
      uStack_70 = uStack_78;
      uStack_78 = 0;
      func_0x000107c30f40(auStack_68,auStack_88);
      func_0x000107c31088(&uStack_90,&UNK_10f502336);
      func_0x000104bef4f0();
      func_0x000108b7f4b0(auStack_a0);
      uStack_58 = uStack_90;
      uStack_90 = 0;
      func_0x000107c30f40(auStack_50,auStack_a0);
      func_0x000107c31088(&uStack_a8,&UNK_10f502340);
      func_0x000104bef760();
      func_0x000108b7f4b0(auStack_b8);
      uStack_40 = uStack_a8;
      uStack_a8 = 0;
      func_0x000107c30f40(auStack_38,auStack_b8);
      func_0x000104bdbd44(0x113828638,0x113828650,1,&uStack_70,3);
      lVar3 = 0x30;
      do {
        func_0x000107c27924(auStack_68 + lVar3 + -8);
        lVar3 = lVar3 + -0x18;
        in_ZR = lVar3 == -0x18;
      } while (!(bool)in_ZR);
      func_0x000108b7f564(auStack_b8);
      func_0x000107c278f4(&uStack_a8);
      func_0x000108b7f564(auStack_a0);
      func_0x000107c278f4(&uStack_90);
      func_0x000108b7f564(auStack_88);
      func_0x000107c278f4(&uStack_78);
      ___cxa_guard_release(0x113828648);
    }
  }
  return;
}



/* Entry: 108b7f014; end: 108b7f0af;  */

undefined8 FUN_108b7f014(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lStack_20;
  undefined2 uStack_18;
  
  if ((bRam0000000113828630 & 1) == 0) {
    iVar4 = 0x13828630;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      FUN_108b7f0b0();
      lStack_20 = lRam0000000113828650;
      if (lRam0000000113828650 != 0) {
        piVar1 = (int *)(lRam0000000113828650 + 8);
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
      func_0x000107c30fa8(0x113828620,&lStack_20);
      func_0x000107c278f4(&lStack_20);
      ___cxa_guard_release(0x113828630);
    }
  }
  return 0x113828620;
}



/* Entry: 108b7f0b0; end: 108b7f103;  */

void FUN_108b7f0b0(void)

{
  int iVar1;
  
  if ((bRam0000000113828658 & 1) == 0) {
    iVar1 = 0x13828658;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000107c31088(0x113828650,&UNK_10f50234f);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x113828658);
      return;
    }
  }
  return;
}



/* Entry: 108b7f104; end: 108b7f22f;  */

void FUN_108b7f104(undefined8 param_1,long param_2)

{
  (**(code **)(param_2 + 0x10))(param_2 + 0x18,param_1);
  return;
}



/* Entry: 108b7f230; end: 108b7f277;  */

long FUN_108b7f230(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c278a0();
  }
  return param_1 + 0x10;
}



/* Entry: 108b7f278; end: 108b7f2d3;  */

void FUN_108b7f278(void)

{
  func_0x000108b7f540();
  return;
}



/* Entry: 108b7f2d4; end: 108b7f2ef;  */

long FUN_108b7f2d4(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c278a0();
  }
  return param_1 + 0x10;
}



/* Entry: 108b7f2f0; end: 108b7f34b;  */

void FUN_108b7f2f0(void)

{
  func_0x000108b7f540();
  return;
}



/* Entry: 108b7f34c; end: 108b7f36b;  */

long FUN_108b7f34c(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c278a0();
  }
  return param_1 + 0x10;
}



/* Entry: 108b7f36c; end: 108b7f37f;  */

void FUN_108b7f36c(void)

{
  FUN_108b7f458();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108b7f380; end: 108b7f393;  */

void FUN_108b7f380(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108b7f388. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 108b7f394; end: 108b7f3a7;  */

void FUN_108b7f394(void)

{
  FUN_108b7f3b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108b7f3a8; end: 108b7f3b7;  */

undefined1  [16] FUN_108b7f3a8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x10;
  auVar1._0_8_ = "Djinni C++ Proxy";
  return auVar1;
}



/* Entry: 108b7f3b8; end: 108b7f457;  */

void FUN_108b7f3b8(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uStack_28;
  
  *param_1 = &PTR_DAT_110ab41d8;
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
  func_0x000108937570(puVar3);
  func_0x00010b9ace94(param_1);
  return;
}



/* Entry: 108b7f458; end: 108b7f467;  */

void FUN_108b7f458(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ab4188;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108b7f468; end: 108b7f493;  */

long * FUN_108b7f468(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c3105c();
  }
  return param_1;
}



/* Entry: 108b7f494; end: 108b7f5a3;  */

void FUN_108b7f494(undefined8 param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  
  *param_2 = param_1;
  uVar1 = *(undefined8 *)(param_3 + 8);
  param_2[2] = *(undefined8 *)(param_3 + 0x10);
  param_2[1] = uVar1;
  param_2[3] = *(undefined8 *)(param_3 + 0x18);
  *(undefined8 *)(param_3 + 0x10) = 0;
  *(undefined8 *)(param_3 + 0x18) = 0;
  return;
}



/* Entry: 108b7f5a4; end: 108b7f6cf;  */

undefined1 * FUN_108b7f5a4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_1a0 [8];
  undefined1 auStack_198 [8];
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [8];
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [8];
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [24];
  undefined1 auStack_150 [24];
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined1 *puStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined2 uStack_90;
  undefined4 uStack_88;
  undefined2 uStack_80;
  undefined4 uStack_78;
  undefined2 uStack_70;
  undefined4 uStack_68;
  undefined2 uStack_60;
  undefined4 uStack_58;
  undefined2 uStack_50;
  undefined4 uStack_48;
  undefined2 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_108b7f6d0();
  func_0x000107c30f7c(auStack_a8,0x113828668);
  uStack_98 = *param_2;
  uStack_90 = 5;
  uStack_88 = *(undefined4 *)(param_2 + 1);
  uStack_78 = *(undefined4 *)((long)param_2 + 0xc);
  uStack_68 = *(undefined4 *)(param_2 + 2);
  uStack_58 = *(undefined4 *)((long)param_2 + 0x14);
  uStack_80 = 4;
  uStack_70 = 4;
  uStack_60 = 4;
  uStack_50 = 4;
  uStack_48 = *(undefined4 *)(param_2 + 3);
  uStack_40 = 4;
  func_0x000104bdb9bc(auStack_a0,auStack_a8,&uStack_98,6);
  lVar7 = 0x50;
  do {
    func_0x00010b9a8d98((long)&uStack_98 + lVar7);
    lVar7 = lVar7 + -0x10;
    uVar1 = lVar7 == -0x10;
  } while (!(bool)uVar1);
  func_0x000107c27928(auStack_a8);
  puVar3 = auStack_a0;
  func_0x00010b9a8f60(param_1);
  puVar2 = auStack_a0;
  func_0x000104bdbf78();
  FUN_108b7f8b8(uStack_38);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  lVar7 = 0x50;
  do {
    func_0x00010b9a8d98((long)&uStack_98 + lVar7);
    iVar5 = (int)puVar3;
    lVar7 = lVar7 + -0x10;
    uVar1 = lVar7 == -0x10;
  } while (!(bool)uVar1);
  func_0x000107c27928(auStack_a8);
  puVar3 = puVar2;
  __Unwind_Resume(puVar2);
  pcStack_b8 = FUN_108b7f6d0;
  uStack_d8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_d0 = &uStack_98;
  puStack_c8 = puVar2;
  puStack_c0 = &stack0xfffffffffffffff0;
  if ((bRam0000000113828670 & 1) == 0) {
    puVar3 = (undefined1 *)0x113828670;
    ___cxa_guard_acquire();
    if ((int)puVar3 != 0) {
      func_0x000107c31088(auStack_170,&UNK_10f502371);
      puVar4 = &UNK_10f50238f;
      func_0x000107c31088(auStack_178,&UNK_10f50238f);
      func_0x000104bef5f8();
      func_0x000107c27e98(auStack_168,auStack_178,puVar4);
      puVar4 = &UNK_10f50239b;
      func_0x000107c31088(auStack_180,&UNK_10f50239b);
      func_0x000104bef760();
      func_0x000107c27e98(auStack_150,auStack_180,puVar4);
      puVar4 = &UNK_10f5023a6;
      func_0x000107c31088(auStack_188,&UNK_10f5023a6);
      func_0x000104bef760();
      func_0x000107c27e98(auStack_138,auStack_188,puVar4);
      puVar4 = &UNK_10f5023ba;
      func_0x000107c31088(auStack_190,&UNK_10f5023ba);
      func_0x000104bef760();
      func_0x000107c27e98(auStack_120,auStack_190,puVar4);
      puVar4 = &UNK_10f5023d0;
      func_0x000107c31088(auStack_198,&UNK_10f5023d0);
      func_0x000104bef760();
      func_0x000107c27e98(auStack_108,auStack_198,puVar4);
      puVar4 = &UNK_10f5023e7;
      func_0x000107c31088(auStack_1a0,&UNK_10f5023e7);
      func_0x000104bef760();
      func_0x000107c27e98(auStack_f0,auStack_1a0,puVar4);
      uVar6 = 0;
      func_0x000104bdbd44(0x113828660,auStack_170,0,auStack_168,6);
      lVar7 = 0x78;
      do {
        func_0x000107c27924(auStack_168 + lVar7);
        iVar5 = (int)uVar6;
        lVar7 = lVar7 + -0x18;
        uVar1 = lVar7 == -0x18;
      } while (!(bool)uVar1);
      func_0x000107c278f4(auStack_1a0);
      func_0x000107c278f4(auStack_198);
      func_0x000107c278f4(auStack_190);
      func_0x000107c278f4(auStack_188);
      func_0x000107c278f4(auStack_180);
      func_0x000107c278f4(auStack_178);
      func_0x000107c278f4(auStack_170);
      puVar3 = (undefined1 *)0x113828670;
      ___cxa_guard_release(0x113828670);
    }
  }
  FUN_108b7f8b8(uStack_d8);
  if ((bool)uVar1) {
    return (undefined1 *)0x113828660;
  }
  ___stack_chk_fail();
  if (iVar5 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return puVar3;
}



/* Entry: 108b7f6d0; end: 108b7f8b7;  */

undefined8 FUN_108b7f6d0(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113828670 & 1) == 0) {
    param_1 = 0x113828670;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107c31088(auStack_c0,&UNK_10f502371);
      puVar1 = &UNK_10f50238f;
      func_0x000107c31088(auStack_c8,&UNK_10f50238f);
      func_0x000104bef5f8();
      func_0x000107c27e98(auStack_b8,auStack_c8,puVar1);
      puVar1 = &UNK_10f50239b;
      func_0x000107c31088(auStack_d0,&UNK_10f50239b);
      func_0x000104bef760();
      func_0x000107c27e98(auStack_a0,auStack_d0,puVar1);
      puVar1 = &UNK_10f5023a6;
      func_0x000107c31088(auStack_d8,&UNK_10f5023a6);
      func_0x000104bef760();
      func_0x000107c27e98(auStack_88,auStack_d8,puVar1);
      puVar1 = &UNK_10f5023ba;
      func_0x000107c31088(auStack_e0,&UNK_10f5023ba);
      func_0x000104bef760();
      func_0x000107c27e98(auStack_70,auStack_e0,puVar1);
      puVar1 = &UNK_10f5023d0;
      func_0x000107c31088(auStack_e8,&UNK_10f5023d0);
      func_0x000104bef760();
      func_0x000107c27e98(auStack_58,auStack_e8,puVar1);
      puVar1 = &UNK_10f5023e7;
      func_0x000107c31088(auStack_f0,&UNK_10f5023e7);
      func_0x000104bef760();
      func_0x000107c27e98(auStack_40,auStack_f0,puVar1);
      uVar2 = 0;
      func_0x000104bdbd44(0x113828660,auStack_c0,0,auStack_b8,6);
      lVar3 = 0x78;
      do {
        func_0x000107c27924(auStack_b8 + lVar3);
        param_2 = (int)uVar2;
        lVar3 = lVar3 + -0x18;
        in_ZR = lVar3 == -0x18;
      } while (!(bool)in_ZR);
      func_0x000107c278f4(auStack_f0);
      func_0x000107c278f4(auStack_e8);
      func_0x000107c278f4(auStack_e0);
      func_0x000107c278f4(auStack_d8);
      func_0x000107c278f4(auStack_d0);
      func_0x000107c278f4(auStack_c8);
      func_0x000107c278f4(auStack_c0);
      param_1 = 0x113828670;
      ___cxa_guard_release(0x113828670);
    }
  }
  FUN_108b7f8b8(uStack_28);
  if ((bool)in_ZR) {
    return 0x113828660;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return param_1;
}



/* Entry: 108b7f8b8; end: 108b7f8cb;  */

void FUN_108b7f8b8(void)

{
  return;
}



/* Entry: 108b7f8cc; end: 108b7fa8f;  */

undefined1 * FUN_108b7f8cc(undefined8 param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  char *pcVar6;
  long lVar7;
  undefined1 auStack_3a0 [8];
  undefined1 auStack_398 [8];
  undefined1 auStack_390 [8];
  undefined1 auStack_388 [8];
  undefined1 auStack_380 [8];
  undefined1 auStack_378 [8];
  undefined1 auStack_370 [8];
  undefined1 auStack_368 [8];
  undefined1 auStack_360 [8];
  undefined1 auStack_358 [8];
  undefined1 auStack_350 [8];
  undefined1 auStack_348 [8];
  undefined1 auStack_340 [8];
  undefined1 auStack_338 [8];
  undefined1 auStack_330 [8];
  undefined1 auStack_328 [8];
  undefined1 auStack_320 [8];
  undefined1 auStack_318 [24];
  undefined1 auStack_300 [24];
  undefined1 auStack_2e8 [24];
  undefined1 auStack_2d0 [24];
  undefined1 auStack_2b8 [24];
  undefined1 auStack_2a0 [24];
  undefined1 auStack_288 [24];
  undefined1 auStack_270 [24];
  undefined1 auStack_258 [24];
  undefined1 auStack_240 [24];
  undefined1 auStack_228 [24];
  undefined1 auStack_210 [24];
  undefined1 auStack_1f8 [24];
  undefined1 auStack_1e0 [24];
  undefined1 auStack_1c8 [24];
  undefined1 auStack_1b0 [24];
  undefined8 uStack_198;
  undefined1 auStack_158 [8];
  undefined1 auStack_150 [8];
  undefined4 auStack_148 [2];
  undefined2 uStack_140;
  undefined4 uStack_138;
  undefined2 uStack_130;
  undefined4 uStack_128;
  undefined2 uStack_120;
  undefined1 auStack_118 [16];
  undefined8 uStack_108;
  undefined2 uStack_100;
  undefined4 uStack_f8;
  undefined2 uStack_f0;
  undefined4 uStack_e8;
  undefined2 uStack_e0;
  undefined4 uStack_d8;
  undefined2 uStack_d0;
  undefined4 uStack_c8;
  undefined2 uStack_c0;
  undefined4 uStack_b8;
  undefined2 uStack_b0;
  undefined4 uStack_a8;
  undefined2 uStack_a0;
  undefined4 uStack_98;
  undefined2 uStack_90;
  undefined4 uStack_88;
  undefined2 uStack_80;
  undefined4 uStack_78;
  undefined2 uStack_70;
  undefined8 uStack_68;
  undefined2 uStack_60;
  undefined1 auStack_58 [16];
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_108b7fa90();
  func_0x000107c30f7c(auStack_158,0x113828680);
  uStack_140 = 4;
  auStack_148[0] = *param_2;
  uStack_138 = param_2[1];
  uStack_130 = 4;
  uStack_128 = param_2[2];
  uStack_120 = 4;
  func_0x000105280820(auStack_118,param_2 + 4);
  uStack_108 = *(undefined8 *)(param_2 + 0xc);
  uStack_f8 = param_2[0xe];
  uStack_e8 = param_2[0xf];
  uStack_d8 = param_2[0x10];
  uStack_c8 = param_2[0x11];
  uStack_b8 = param_2[0x12];
  uStack_a8 = param_2[0x13];
  uStack_98 = param_2[0x14];
  uStack_88 = param_2[0x15];
  uStack_100 = 5;
  uStack_f0 = 4;
  uStack_e0 = 4;
  uStack_d0 = 4;
  uStack_c0 = 4;
  uStack_b0 = 4;
  uStack_a0 = 4;
  uStack_90 = 4;
  uStack_80 = 4;
  uStack_78 = param_2[0x16];
  uStack_70 = 4;
  uStack_68 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = 5;
  FUN_108b7ff60(auStack_58,param_2 + 0x1a);
  func_0x000104bdb9bc(auStack_150,auStack_158,auStack_148,0x10);
  lVar7 = 0xf0;
  do {
    func_0x00010b9a8d98((long)auStack_148 + lVar7);
    lVar7 = lVar7 + -0x10;
    uVar1 = lVar7 == -0x10;
  } while (!(bool)uVar1);
  func_0x000107c27928(auStack_158);
  func_0x00010b9a8f60(param_1,auStack_150);
  puVar3 = auStack_150;
  func_0x000104bdbf78();
  func_0x000108b7ff80(uStack_48);
  if ((bool)uVar1) {
    return puVar3;
  }
  ___stack_chk_fail();
  puVar4 = auStack_58;
  lVar7 = -0x100;
  do {
    func_0x00010b9a8d98(puVar4);
    puVar4 = puVar4 + -0x10;
    lVar7 = lVar7 + 0x10;
    uVar1 = lVar7 == 0;
  } while (!(bool)uVar1);
  func_0x000107c27928(auStack_158);
  __Unwind_Resume(puVar3);
  uStack_198 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam000000011372d820 & 1) == 0) {
    iVar2 = 0x1372d820;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107c31088(auStack_320,&UNK_10f5023fe);
      func_0x000107c31088(auStack_328,&UNK_10f50241d);
      if ((bRam000000011372d828 & 1) == 0) goto LAB_108b7fe84;
      goto LAB_108b7fb2c;
    }
  }
  while (func_0x000108b7ff80(uStack_198), !(bool)uVar1) {
    ___stack_chk_fail();
LAB_108b7fe84:
    iVar2 = 0x1372d828;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x00010b990e20(0x11372d848);
      ___cxa_guard_release(0x11372d828);
    }
LAB_108b7fb2c:
    func_0x000107c27e98(auStack_318,auStack_328,0x11372d848);
    func_0x000107c31088(auStack_330,&UNK_10f502427);
    if ((bRam000000011372d830 & 1) == 0) {
      iVar2 = 0x1372d830;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        func_0x00010b990e20(0x11372d858);
        ___cxa_guard_release(0x11372d830);
      }
    }
    func_0x000107c27e98(auStack_300,auStack_330,0x11372d858);
    func_0x000107c31088(auStack_338,&UNK_10f502431);
    if ((bRam000000011372d838 & 1) == 0) {
      iVar2 = 0x1372d838;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        func_0x00010b990e20(0x11372d868);
        ___cxa_guard_release(0x11372d838);
      }
    }
    func_0x000107c27e98(auStack_2e8,auStack_338,0x11372d868);
    puVar5 = &DAT_10f2da5ea;
    func_0x000107c31088(auStack_340,&DAT_10f2da5ea);
    func_0x000104bf1120();
    func_0x000107c27e98(auStack_2d0,auStack_340,puVar5);
    puVar5 = &DAT_10f3e7c40;
    func_0x000107c31088(auStack_348,&DAT_10f3e7c40);
    func_0x000104bef5f8();
    func_0x000107c27e98(auStack_2b8,auStack_348,puVar5);
    pcVar6 = "durationMs";
    func_0x000107c31088(auStack_350,"durationMs");
    func_0x000104bef760();
    func_0x000107c27e98(auStack_2a0,auStack_350,pcVar6);
    puVar5 = &UNK_10f502440;
    func_0x000107c31088(auStack_358,&UNK_10f502440);
    func_0x000104bef760();
    func_0x000107c27e98(auStack_288,auStack_358,puVar5);
    puVar5 = &UNK_10f502451;
    func_0x000107c31088(auStack_360,&UNK_10f502451);
    func_0x000104bef760();
    func_0x000107c27e98(auStack_270,auStack_360,puVar5);
    puVar5 = &UNK_10f502462;
    func_0x000107c31088(auStack_368,&UNK_10f502462);
    func_0x000104bef760();
    func_0x000107c27e98(auStack_258,auStack_368,puVar5);
    puVar5 = &UNK_10f50247a;
    func_0x000107c31088(auStack_370,&UNK_10f50247a);
    func_0x000104bef760();
    func_0x000107c27e98(auStack_240,auStack_370,puVar5);
    puVar5 = &UNK_10f50248a;
    func_0x000107c31088(auStack_378,&UNK_10f50248a);
    func_0x000104bef760();
    func_0x000107c27e98(auStack_228,auStack_378,puVar5);
    puVar5 = &UNK_10f50249b;
    func_0x000107c31088(auStack_380,&UNK_10f50249b);
    func_0x000104bef760();
    func_0x000107c27e98(auStack_210,auStack_380,puVar5);
    puVar5 = &UNK_10f5024ac;
    func_0x000107c31088(auStack_388,&UNK_10f5024ac);
    func_0x000104bef760();
    func_0x000107c27e98(auStack_1f8,auStack_388,puVar5);
    puVar5 = &UNK_10f5024bf;
    func_0x000107c31088(auStack_390,&UNK_10f5024bf);
    func_0x000104bef760();
    func_0x000107c27e98(auStack_1e0,auStack_390,puVar5);
    puVar5 = &UNK_10f5024d3;
    func_0x000107c31088(auStack_398,&UNK_10f5024d3);
    func_0x000104bef5f8();
    func_0x000107c27e98(auStack_1c8,auStack_398,puVar5);
    func_0x000107c31088(auStack_3a0,&UNK_10f5024e9);
    if ((bRam000000011372d840 & 1) == 0) {
      iVar2 = 0x1372d840;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        FUN_108b7e2b8();
        func_0x00010b990784(0x11372d878);
        ___cxa_guard_release(0x11372d840);
      }
    }
    func_0x000107c27e98(auStack_1b0,auStack_3a0,0x11372d878);
    func_0x000104bdbd44(0x113828678,auStack_320,0,auStack_318,0x10);
    lVar7 = 0x168;
    do {
      func_0x000107c27924(auStack_318 + lVar7);
      lVar7 = lVar7 + -0x18;
      uVar1 = lVar7 == -0x18;
    } while (!(bool)uVar1);
    func_0x000107c278f4(auStack_3a0);
    func_0x000107c278f4(auStack_398);
    func_0x000107c278f4(auStack_390);
    func_0x000107c278f4(auStack_388);
    func_0x000107c278f4(auStack_380);
    func_0x000107c278f4(auStack_378);
    func_0x000107c278f4(auStack_370);
    func_0x000107c278f4(auStack_368);
    func_0x000107c278f4(auStack_360);
    func_0x000107c278f4(auStack_358);
    func_0x000107c278f4(auStack_350);
    func_0x000107c278f4(auStack_348);
    func_0x000107c278f4(auStack_340);
    func_0x000107c278f4(auStack_338);
    func_0x000107c278f4(auStack_330);
    func_0x000107c278f4(auStack_328);
    func_0x000107c278f4(auStack_320);
    ___cxa_guard_release(0x11372d820);
  }
  return (undefined1 *)0x113828678;
}



/* Entry: 108b7fa90; end: 108b7ff5f;  */

undefined8 FUN_108b7fa90(void)

{
  undefined1 in_ZR;
  int iVar1;
  undefined *puVar2;
  char *pcVar3;
  long lVar4;
  undefined1 auStack_240 [8];
  undefined1 auStack_238 [8];
  undefined1 auStack_230 [8];
  undefined1 auStack_228 [8];
  undefined1 auStack_220 [8];
  undefined1 auStack_218 [8];
  undefined1 auStack_210 [8];
  undefined1 auStack_208 [8];
  undefined1 auStack_200 [8];
  undefined1 auStack_1f8 [8];
  undefined1 auStack_1f0 [8];
  undefined1 auStack_1e8 [8];
  undefined1 auStack_1e0 [8];
  undefined1 auStack_1d8 [8];
  undefined1 auStack_1d0 [8];
  undefined1 auStack_1c8 [8];
  undefined1 auStack_1c0 [8];
  undefined1 auStack_1b8 [24];
  undefined1 auStack_1a0 [24];
  undefined1 auStack_188 [24];
  undefined1 auStack_170 [24];
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam000000011372d820 & 1) == 0) {
    iVar1 = 0x1372d820;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000107c31088(auStack_1c0,&UNK_10f5023fe);
      func_0x000107c31088(auStack_1c8,&UNK_10f50241d);
      if ((bRam000000011372d828 & 1) == 0) goto LAB_108b7fe84;
      goto LAB_108b7fb2c;
    }
  }
  while (func_0x000108b7ff80(uStack_38), !(bool)in_ZR) {
    ___stack_chk_fail();
LAB_108b7fe84:
    iVar1 = 0x1372d828;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x11372d848);
      ___cxa_guard_release(0x11372d828);
    }
LAB_108b7fb2c:
    func_0x000107c27e98(auStack_1b8,auStack_1c8,0x11372d848);
    func_0x000107c31088(auStack_1d0,&UNK_10f502427);
    if ((bRam000000011372d830 & 1) == 0) {
      iVar1 = 0x1372d830;
      ___cxa_guard_acquire();
      if (iVar1 != 0) {
        func_0x00010b990e20(0x11372d858);
        ___cxa_guard_release(0x11372d830);
      }
    }
    func_0x000107c27e98(auStack_1a0,auStack_1d0,0x11372d858);
    func_0x000107c31088(auStack_1d8,&UNK_10f502431);
    if ((bRam000000011372d838 & 1) == 0) {
      iVar1 = 0x1372d838;
      ___cxa_guard_acquire();
      if (iVar1 != 0) {
        func_0x00010b990e20(0x11372d868);
        ___cxa_guard_release(0x11372d838);
      }
    }
    func_0x000107c27e98(auStack_188,auStack_1d8,0x11372d868);
    puVar2 = &DAT_10f2da5ea;
    func_0x000107c31088(auStack_1e0,&DAT_10f2da5ea);
    func_0x000104bf1120();
    func_0x000107c27e98(auStack_170,auStack_1e0,puVar2);
    puVar2 = &DAT_10f3e7c40;
    func_0x000107c31088(auStack_1e8,&DAT_10f3e7c40);
    func_0x000104bef5f8();
    func_0x000107c27e98(auStack_158,auStack_1e8,puVar2);
    pcVar3 = "durationMs";
    func_0x000107c31088(auStack_1f0,"durationMs");
    func_0x000104bef760();
    func_0x000107c27e98(auStack_140,auStack_1f0,pcVar3);
    puVar2 = &UNK_10f502440;
    func_0x000107c31088(auStack_1f8,&UNK_10f502440);
    func_0x000104bef760();
    func_0x000107c27e98(auStack_128,auStack_1f8,puVar2);
    puVar2 = &UNK_10f502451;
    func_0x000107c31088(auStack_200,&UNK_10f502451);
    func_0x000104bef760();
    func_0x000107c27e98(auStack_110,auStack_200,puVar2);
    puVar2 = &UNK_10f502462;
    func_0x000107c31088(auStack_208,&UNK_10f502462);
    func_0x000104bef760();
    func_0x000107c27e98(auStack_f8,auStack_208,puVar2);
    puVar2 = &UNK_10f50247a;
    func_0x000107c31088(auStack_210,&UNK_10f50247a);
    func_0x000104bef760();
    func_0x000107c27e98(auStack_e0,auStack_210,puVar2);
    puVar2 = &UNK_10f50248a;
    func_0x000107c31088(auStack_218,&UNK_10f50248a);
    func_0x000104bef760();
    func_0x000107c27e98(auStack_c8,auStack_218,puVar2);
    puVar2 = &UNK_10f50249b;
    func_0x000107c31088(auStack_220,&UNK_10f50249b);
    func_0x000104bef760();
    func_0x000107c27e98(auStack_b0,auStack_220,puVar2);
    puVar2 = &UNK_10f5024ac;
    func_0x000107c31088(auStack_228,&UNK_10f5024ac);
    func_0x000104bef760();
    func_0x000107c27e98(auStack_98,auStack_228,puVar2);
    puVar2 = &UNK_10f5024bf;
    func_0x000107c31088(auStack_230,&UNK_10f5024bf);
    func_0x000104bef760();
    func_0x000107c27e98(auStack_80,auStack_230,puVar2);
    puVar2 = &UNK_10f5024d3;
    func_0x000107c31088(auStack_238,&UNK_10f5024d3);
    func_0x000104bef5f8();
    func_0x000107c27e98(auStack_68,auStack_238,puVar2);
    func_0x000107c31088(auStack_240,&UNK_10f5024e9);
    if ((bRam000000011372d840 & 1) == 0) {
      iVar1 = 0x1372d840;
      ___cxa_guard_acquire();
      if (iVar1 != 0) {
        FUN_108b7e2b8();
        func_0x00010b990784(0x11372d878);
        ___cxa_guard_release(0x11372d840);
      }
    }
    func_0x000107c27e98(auStack_50,auStack_240,0x11372d878);
    func_0x000104bdbd44(0x113828678,auStack_1c0,0,auStack_1b8,0x10);
    lVar4 = 0x168;
    do {
      func_0x000107c27924(auStack_1b8 + lVar4);
      lVar4 = lVar4 + -0x18;
      in_ZR = lVar4 == -0x18;
    } while (!(bool)in_ZR);
    func_0x000107c278f4(auStack_240);
    func_0x000107c278f4(auStack_238);
    func_0x000107c278f4(auStack_230);
    func_0x000107c278f4(auStack_228);
    func_0x000107c278f4(auStack_220);
    func_0x000107c278f4(auStack_218);
    func_0x000107c278f4(auStack_210);
    func_0x000107c278f4(auStack_208);
    func_0x000107c278f4(auStack_200);
    func_0x000107c278f4(auStack_1f8);
    func_0x000107c278f4(auStack_1f0);
    func_0x000107c278f4(auStack_1e8);
    func_0x000107c278f4(auStack_1e0);
    func_0x000107c278f4(auStack_1d8);
    func_0x000107c278f4(auStack_1d0);
    func_0x000107c278f4(auStack_1c8);
    func_0x000107c278f4(auStack_1c0);
    ___cxa_guard_release(0x11372d820);
  }
  return 0x113828678;
}



/* Entry: 108b7ff60; end: 108b7ff93;  */

undefined1 * FUN_108b7ff60(undefined8 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined1 auStack_2d0 [8];
  undefined1 auStack_2c8 [8];
  undefined1 auStack_2c0 [8];
  undefined1 auStack_2b8 [8];
  undefined1 auStack_2b0 [8];
  undefined1 auStack_2a8 [8];
  undefined1 auStack_2a0 [8];
  undefined1 auStack_298 [8];
  undefined1 auStack_290 [8];
  undefined1 auStack_288 [8];
  undefined1 auStack_280 [8];
  undefined1 auStack_278 [8];
  undefined1 auStack_270 [8];
  undefined1 auStack_268 [24];
  undefined1 auStack_250 [24];
  undefined1 auStack_238 [24];
  undefined1 auStack_220 [24];
  undefined1 auStack_208 [24];
  undefined1 auStack_1f0 [24];
  undefined1 auStack_1d8 [24];
  undefined1 auStack_1c0 [24];
  undefined1 auStack_1a8 [24];
  undefined1 auStack_190 [24];
  undefined1 auStack_178 [24];
  undefined1 auStack_160 [32];
  undefined1 auStack_108 [8];
  undefined1 auStack_100 [8];
  undefined1 auStack_f8 [16];
  undefined1 auStack_e8 [16];
  undefined4 uStack_d8;
  undefined2 uStack_d0;
  undefined4 uStack_c8;
  undefined2 uStack_c0;
  undefined4 uStack_b8;
  undefined2 uStack_b0;
  undefined4 uStack_a8;
  undefined2 uStack_a0;
  undefined4 uStack_98;
  undefined2 uStack_90;
  undefined4 uStack_88;
  undefined2 uStack_80;
  undefined4 uStack_78;
  undefined2 uStack_70;
  undefined4 uStack_68;
  undefined2 uStack_60;
  undefined4 uStack_58;
  undefined2 uStack_50;
  undefined1 auStack_48 [24];
  
  if (param_2[0x78] != '\x01') {
    *(undefined2 *)(param_1 + 1) = 1;
    *param_1 = 0;
    return param_2;
  }
  func_0x000108b7e670();
  FUN_108b7e2b8();
  func_0x000107c30f7c(auStack_108,0x1138285f8);
  func_0x0001052808e4(auStack_f8,param_2);
  func_0x0001052808e4(auStack_e8,param_2 + 0x18);
  uStack_d8 = *(undefined4 *)(param_2 + 0x30);
  uStack_c8 = *(undefined4 *)(param_2 + 0x34);
  uStack_b8 = *(undefined4 *)(param_2 + 0x38);
  uStack_a8 = *(undefined4 *)(param_2 + 0x3c);
  uStack_98 = *(undefined4 *)(param_2 + 0x40);
  uStack_88 = *(undefined4 *)(param_2 + 0x44);
  uStack_78 = *(undefined4 *)(param_2 + 0x48);
  uStack_68 = *(undefined4 *)(param_2 + 0x4c);
  uStack_d0 = 4;
  uStack_c0 = 4;
  uStack_b0 = 4;
  uStack_a0 = 4;
  uStack_90 = 4;
  uStack_80 = 4;
  uStack_70 = 4;
  uStack_60 = 4;
  uStack_58 = *(undefined4 *)(param_2 + 0x50);
  uStack_50 = 4;
  func_0x000108b7e638(auStack_48,param_2 + 0x58);
  func_0x000104bdb9bc(auStack_100,auStack_108,auStack_f8,0xc);
  lVar6 = 0xb0;
  do {
    func_0x00010b9a8d98(auStack_f8 + lVar6);
    lVar6 = lVar6 + -0x10;
    uVar1 = lVar6 == -0x10;
  } while (!(bool)uVar1);
  func_0x000107c27928(auStack_108);
  func_0x00010b9a8f60(param_1,auStack_100);
  puVar3 = auStack_100;
  func_0x000104bdbf78();
  func_0x000108b7e658();
  if ((bool)uVar1) {
    return puVar3;
  }
  ___stack_chk_fail();
  puVar4 = auStack_48;
  lVar6 = -0xc0;
  do {
    func_0x00010b9a8d98(puVar4);
    puVar4 = puVar4 + -0x10;
    lVar6 = lVar6 + 0x10;
    uVar1 = lVar6 == 0;
  } while (!(bool)uVar1);
  func_0x000107c27928(auStack_108);
  __Unwind_Resume(puVar3);
  func_0x000108b7e670();
  if ((bRam000000011372d7d0 & 1) == 0) {
    iVar2 = 0x1372d7d0;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107c31088(auStack_270,&UNK_10f50215b);
      puVar5 = &DAT_10f637b7c;
      func_0x000107c31088(auStack_278,&DAT_10f637b7c);
      func_0x000104bdbd7c();
      func_0x000107c27e98(auStack_268,auStack_278,puVar5);
      puVar5 = &UNK_10f50217e;
      func_0x000107c31088(auStack_280,&UNK_10f50217e);
      func_0x000104bdbd7c();
      func_0x000107c27e98(auStack_250,auStack_280,puVar5);
      func_0x000107c31088(auStack_288,&UNK_10f50218d);
      if ((bRam000000011372d7d8 & 1) == 0) goto LAB_108b7e5c4;
      goto LAB_108b7e390;
    }
  }
  while (func_0x000108b7e658(), !(bool)uVar1) {
    ___stack_chk_fail();
LAB_108b7e5c4:
    iVar2 = 0x1372d7d8;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x00010b990e20(0x11372d7e8);
      ___cxa_guard_release(0x11372d7d8);
    }
LAB_108b7e390:
    func_0x000107c27e98(auStack_238,auStack_288,0x11372d7e8);
    puVar5 = &UNK_10f50219e;
    func_0x000107c31088(auStack_290,&UNK_10f50219e);
    func_0x000104bef760();
    func_0x000107c27e98(auStack_220,auStack_290,puVar5);
    puVar5 = &UNK_10f5021b9;
    func_0x000107c31088(auStack_298,&UNK_10f5021b9);
    func_0x000104bef760();
    func_0x000107c27e98(auStack_208,auStack_298,puVar5);
    puVar5 = &UNK_10f5021d6;
    func_0x000107c31088(auStack_2a0,&UNK_10f5021d6);
    func_0x000104bef760();
    func_0x000107c27e98(auStack_1f0,auStack_2a0,puVar5);
    puVar5 = &UNK_10f5021ef;
    func_0x000107c31088(auStack_2a8,&UNK_10f5021ef);
    func_0x000104bef760();
    func_0x000107c27e98(auStack_1d8,auStack_2a8,puVar5);
    puVar5 = &UNK_10f50220a;
    func_0x000107c31088(auStack_2b0,&UNK_10f50220a);
    func_0x000104bef760();
    func_0x000107c27e98(auStack_1c0,auStack_2b0,puVar5);
    puVar5 = &UNK_10f502235;
    func_0x000107c31088(auStack_2b8,&UNK_10f502235);
    func_0x000104bef760();
    func_0x000107c27e98(auStack_1a8,auStack_2b8,puVar5);
    puVar5 = &UNK_10f502259;
    func_0x000107c31088(auStack_2c0,&UNK_10f502259);
    func_0x000104bef760();
    func_0x000107c27e98(auStack_190,auStack_2c0,puVar5);
    puVar5 = &UNK_10f50227b;
    func_0x000107c31088(auStack_2c8,&UNK_10f50227b);
    func_0x000104bef760();
    func_0x000107c27e98(auStack_178,auStack_2c8,puVar5);
    func_0x000107c31088(auStack_2d0,&UNK_10f502293);
    if ((bRam000000011372d7e0 & 1) == 0) {
      iVar2 = 0x1372d7e0;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        FUN_108b7e79c();
        func_0x00010b990784(0x11372d7f8);
        ___cxa_guard_release(0x11372d7e0);
      }
    }
    func_0x000107c27e98(auStack_160,auStack_2d0,0x11372d7f8);
    func_0x000104bdbd44(0x1138285f0,auStack_270,0,auStack_268,0xc);
    lVar6 = 0x108;
    do {
      func_0x000107c27924(auStack_268 + lVar6);
      lVar6 = lVar6 + -0x18;
      uVar1 = lVar6 == -0x18;
    } while (!(bool)uVar1);
    func_0x000107c278f4(auStack_2d0);
    func_0x000107c278f4(auStack_2c8);
    func_0x000107c278f4(auStack_2c0);
    func_0x000107c278f4(auStack_2b8);
    func_0x000107c278f4(auStack_2b0);
    func_0x000107c278f4(auStack_2a8);
    func_0x000107c278f4(auStack_2a0);
    func_0x000107c278f4(auStack_298);
    func_0x000107c278f4(auStack_290);
    func_0x000107c278f4(auStack_288);
    func_0x000107c278f4(auStack_280);
    func_0x000107c278f4(auStack_278);
    func_0x000107c278f4(auStack_270);
    ___cxa_guard_release(0x11372d7d0);
  }
  return (undefined1 *)0x1138285f0;
}



/* Entry: 108b7ff94; end: 108b7fff3;  */

undefined8 FUN_108b7ff94(void)

{
  int iVar1;
  
  if ((bRam000000011372d890 & 1) == 0) {
    iVar1 = 0x1372d890;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000107c31088(0x11372d888,&UNK_10f5024fd);
      ___cxa_guard_release(0x11372d890);
    }
  }
  return 0x11372d888;
}



/* Entry: 108b7fff4; end: 108b80087;  */

void FUN_108b7fff4(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  long lStack_30;
  undefined1 auStack_28 [8];
  
  func_0x00010b9a96d0(auStack_28);
  FUN_108b80088(&uStack_38,auStack_28);
  uStack_48 = uStack_38;
  lStack_40 = lStack_30;
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
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = uStack_38;
  param_1[1] = lStack_30;
  func_0x000107c27d78(&uStack_48);
  FUN_108b806d4(&uStack_38);
  func_0x000104bdb38c(auStack_28);
  return;
}



/* Entry: 108b80088; end: 108b800ab;  */

void FUN_108b80088(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_108b804c0(&uStack_11,param_1);
  return;
}



/* Entry: 108b800ac; end: 108b8033b;  */

void FUN_108b800ac(undefined8 param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 **ppuVar5;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  long *plStack_88;
  long *plStack_80;
  undefined1 auStack_70 [8];
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  long *plStack_58;
  
  puVar3 = (undefined8 *)*param_2;
  plVar6 = (long *)param_2[1];
  puStack_90 = puVar3;
  plStack_88 = plVar6;
  if (plVar6 != (long *)0x0) {
    do {
      func_0x000108b80704();
    } while (extraout_w10 != 0);
  }
  if ((puVar3 == (undefined8 *)0x0) || (___dynamic_cast(), puVar3 == (undefined8 *)0x0)) {
    ppuVar5 = &puStack_60;
  }
  else {
    ppuVar5 = &puStack_90;
    puStack_60 = puVar3;
    plStack_58 = plVar6;
  }
  *ppuVar5 = (undefined8 *)0x0;
  ppuVar5[1] = (undefined8 *)0x0;
  func_0x000107c27d78(&puStack_90);
  if (puStack_60 != (undefined8 *)0x0) {
    puStack_90 = (undefined8 *)puStack_60[1];
    if (puStack_90 != (undefined8 *)0x0) {
      plVar6 = puStack_90 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = *plVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    func_0x00010b9a8f90(param_1,&puStack_90);
    func_0x000104bdb38c(&puStack_90);
    goto LAB_108b802dc;
  }
  puVar3 = (undefined8 *)0x50;
  __Znwm();
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_110ab42a0;
  puVar8 = puVar3 + 3;
  *puVar8 = &PTR_FUN_110ab4230;
  puVar3[5] = 0;
  puVar3[4] = 0;
  puVar3[9] = 0;
  puVar3[8] = 0;
  puVar7 = puVar3 + 6;
  puVar3[7] = 0;
  *puVar7 = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  *puVar7 = 0;
  *(undefined4 *)(puVar3 + 9) = 0;
  puStack_90 = puVar8;
  plStack_88 = puVar3;
  do {
    func_0x000108b80704();
  } while (extraout_w10_00 != 0);
  func_0x000107c278e4();
  func_0x000107c278ec(&puStack_90);
  plVar6 = (long *)*param_2;
  puStack_68 = puVar8;
  if (plVar6 == (long *)0x0) {
    plVar6 = (long *)0x0;
LAB_108b80224:
    puStack_90 = (undefined8 *)0x0;
    plVar4 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar6 + 0x10))();
    plVar4 = (long *)*param_2;
    if (plVar4 == (long *)0x0) goto LAB_108b80224;
    (**(code **)(*plVar4 + 0x18))();
    puStack_90 = (undefined8 *)*param_2;
  }
  plStack_88 = (long *)param_2[1];
  if (plStack_88 != (long *)0x0) {
    do {
      func_0x000108b80704();
    } while (extraout_w10_01 != 0);
  }
  if (*(int *)(puVar3 + 9) == 2) {
    func_0x0001054918e8(puVar7,&puStack_90);
  }
  else {
    FUN_108b803c0(puVar7);
    puVar3[7] = plStack_88;
    puVar3[6] = puStack_90;
    puStack_90 = (undefined8 *)0x0;
    plStack_88 = (long *)0x0;
    *(undefined4 *)(puVar3 + 9) = 2;
  }
  func_0x000107c27d78(&puStack_90);
  if (puVar3[5] != 0) {
    do {
      func_0x000108b80704();
    } while (extraout_w10_02 != 0);
  }
  uStack_98 = 0;
  puStack_90 = puVar8;
  plStack_88 = plVar6;
  plStack_80 = plVar4;
  func_0x0001089332fc(auStack_70,&UNK_10df9355c,&puStack_90);
  func_0x000107c27900(&puStack_90);
  func_0x000107c27900(&uStack_98);
  func_0x00010b9a8f90(param_1,auStack_70);
  func_0x000104bdb38c(auStack_70);
  FUN_108b80498(&puStack_68);
LAB_108b802dc:
  FUN_108b806d4(&puStack_60);
  return;
}



/* Entry: 108b8033c; end: 108b803a7;  */

undefined8 FUN_108b8033c(void)

{
  int iVar1;
  
  if ((bRam0000000113828698 & 1) == 0) {
    iVar1 = 0x13828698;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000107c30fa4(0x113828688);
      ___cxa_guard_release(0x113828698);
    }
  }
  return 0x113828688;
}



/* Entry: 108b803a8; end: 108b803ab;  */

undefined8 * FUN_108b803a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ab4230;
  FUN_108b803c0(param_1 + 3);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 108b803ac; end: 108b803bf;  */

void FUN_108b803ac(void)

{
  FUN_108b8042c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108b803c0; end: 108b80413;  */

void FUN_108b803c0(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x18) != 0xffffffff) {
    (*(code *)(&PTR_FUN_110ab4278)[*(uint *)(param_1 + 0x18)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  return;
}



/* Entry: 108b80414; end: 108b8042b;  */

undefined8 FUN_108b80414(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_28;
  
  uStack_28 = param_2;
  func_0x000100100fd4(&uStack_28);
  return param_2;
}



/* Entry: 108b8042c; end: 108b80467;  */

undefined8 * FUN_108b8042c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ab4230;
  FUN_108b803c0(param_1 + 3);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 108b80468; end: 108b8046b;  */

void FUN_108b80468(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ab42a0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108b8046c; end: 108b8047f;  */

void FUN_108b8046c(void)

{
  func_0x000108b80488();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108b80480; end: 108b80497;  */

void FUN_108b80480(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108b80730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 108b80498; end: 108b804bf;  */

long * FUN_108b80498(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c3105c();
  }
  return param_1;
}



/* Entry: 108b804c0; end: 108b8055b;  */

undefined1 * FUN_108b804c0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_40 [16];
  long lStack_30;
  long lStack_28;
  
  puVar2 = auStack_40;
  puVar3 = auStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_108b8055c(auStack_40,1);
  FUN_108b805b0(lStack_30);
  lVar1 = lStack_30;
  lStack_30 = 0;
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  func_0x000108b806c4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x000108b806c4();
  func_0x000108b80714();
  *(undefined8 *)(puVar3 + 8) = param_3;
  puVar2 = puVar3;
  FUN_108b80584();
  *(undefined1 **)(puVar3 + 0x10) = puVar2;
  return puVar3;
}



/* Entry: 108b8055c; end: 108b80583;  */

long FUN_108b8055c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_108b80584();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 108b80584; end: 108b805af;  */

undefined8 * FUN_108b80584(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x666666666666667) {
    puVar1 = (undefined8 *)(param_2 * 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110ab42f0;
  FUN_108b80614(param_1 + 3);
  return param_1;
}



/* Entry: 108b805b0; end: 108b805f3;  */

undefined8 * FUN_108b805b0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110ab42f0;
  FUN_108b80614(param_1 + 3);
  return param_1;
}



/* Entry: 108b805f4; end: 108b805f7;  */

void FUN_108b805f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ab42f0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108b805f8; end: 108b8060b;  */

void FUN_108b805f8(void)

{
  FUN_108b806b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108b8060c; end: 108b80613;  */

void FUN_108b8060c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108b80730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 108b80614; end: 108b8065b;  */

undefined8 * FUN_108b80614(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ab4340;
  param_1[1] = 0;
  func_0x0001080f6534(param_1 + 1);
  return param_1;
}



/* Entry: 108b8065c; end: 108b8065f;  */

undefined8 * FUN_108b8065c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ab4340;
  func_0x000104bdb38c(param_1 + 1);
  return param_1;
}



/* Entry: 108b80660; end: 108b80673;  */

void FUN_108b80660(void)

{
  FUN_108b80688();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108b80674; end: 108b80687;  */

undefined8 FUN_108b80674(long param_1)

{
  return *(undefined8 *)(*(long *)(param_1 + 8) + 0x20);
}



/* Entry: 108b80688; end: 108b806b3;  */

undefined8 * FUN_108b80688(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ab4340;
  func_0x000104bdb38c(param_1 + 1);
  return param_1;
}



/* Entry: 108b806b4; end: 108b806d3;  */

void FUN_108b806b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ab42f0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108b806d4; end: 108b806fb;  */

long FUN_108b806d4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 108b806fc; end: 108b80733;  */

void FUN_108b806fc(void)

{
  return;
}


