/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1087a9114; end: 1087a9187;  */

void FUN_1087a9114(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar2;
  
  func_0x0001087a9dfc();
  lVar2 = *(long *)(param_2 + 8) - (param_1[1] - *param_1);
  _memcpy(lVar2);
  unaff_x19[1] = lVar2;
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



/* Entry: 1087a9188; end: 1087a919b;  */

void FUN_1087a9188(void)

{
  func_0x000104bd47e8(&DAT_10f62a4d8);
  FUN_1087a91c0();
  return;
}



/* Entry: 1087a919c; end: 1087a91bf;  */

void FUN_1087a919c(void)

{
  FUN_1087a91c0();
  return;
}



/* Entry: 1087a91c0; end: 1087a91db;  */

long * FUN_1087a91c0(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3d == 0) {
    plVar1 = (long *)(param_2 << 3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  FUN_1087a9208();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1087a91dc; end: 1087a9207;  */

long * FUN_1087a91dc(long *param_1)

{
  FUN_1087a9208();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1087a9208; end: 1087a920f;  */

void FUN_1087a9208(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001087a9dfc(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -8;
    func_0x0001087a8fac();
  }
  return;
}



/* Entry: 1087a9210; end: 1087a9243;  */

void FUN_1087a9210(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001087a9dfc();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -8;
    func_0x0001087a8fac();
  }
  return;
}



/* Entry: 1087a9244; end: 1087a924b;  */

void FUN_1087a9244(void)

{
  return;
}



/* Entry: 1087a924c; end: 1087a9333;  */

void FUN_1087a924c(undefined8 param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  long *plVar3;
  undefined1 *puVar4;
  long *extraout_x8;
  long lVar5;
  undefined8 uStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  long alStack_100 [3];
  undefined1 auStack_e8 [56];
  undefined1 uStack_b0;
  undefined1 auStack_a8 [112];
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x0001087a93b4(alStack_100);
  FUN_1087a9334(param_1,alStack_100);
  auStack_e8[0] = 0;
  uStack_b0 = 0;
  FUN_1087a986c(auStack_a8,*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 0x10),auStack_e8
                ,*(undefined8 *)(param_2 + 0x14));
  puVar4 = auStack_a8;
  func_0x0001087a9380(alStack_100);
  func_0x0001087a3420(auStack_a8);
  func_0x0001087a33a8(auStack_e8);
  while( true ) {
    plVar3 = alStack_100;
    func_0x000107c27fb8();
    func_0x0001087a9ec0(uStack_38);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    if ((int)puVar4 == 0) break;
    func_0x0001087a3420(auStack_a8);
    func_0x0001087a33a8(auStack_e8);
    ___cxa_begin_catch(plVar3);
    func_0x0001053360b0(alStack_100);
    ___cxa_end_catch();
  }
  func_0x0001087a9ea0();
  pcStack_118 = FUN_1087a9334;
  lVar5 = *plVar3;
  if (lVar5 != 0) {
    plVar3 = (long *)(lVar5 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = *plVar3 + 4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *extraout_x8 = lVar5;
  uStack_128 = 0;
  puStack_120 = &stack0xfffffffffffffff0;
  func_0x000107c27f9c(&uStack_128);
  return;
}



/* Entry: 1087a9334; end: 1087a937f;  */

void FUN_1087a9334(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uStack_18;
  
  lVar4 = *param_2;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar4;
  uStack_18 = 0;
  func_0x000107c27f9c(&uStack_18);
  return;
}



/* Entry: 1087a9380; end: 1087a93ef;  */

/* WARNING: Removing unreachable block (ram,0x0001005f953c) */
/* WARNING: Removing unreachable block (ram,0x0001005f9544) */
/* WARNING: Removing unreachable block (ram,0x0001005f954c) */

void FUN_1087a9380(long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  puVar5 = (undefined8 *)(param_1 + 8);
  FUN_1087a94dc(*puVar5,puVar5,param_2);
  plVar6 = (long *)*puVar5;
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar4 >> 0x21 == 1) {
      (**(code **)(*plVar6 + 0x10))(plVar6,1,puVar5);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  *puVar5 = 0;
  return;
}



/* Entry: 1087a93f0; end: 1087a9443;  */

void FUN_1087a93f0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0x110;
  __Znwm();
  FUN_1087a9444();
  uStack_30 = 0;
  uStack_28 = 0;
  *param_1 = uVar1;
  param_1[1] = uVar1;
  func_0x000107c27f98(&uStack_30);
  func_0x000107c27f9c(&uStack_28);
  return;
}



/* Entry: 1087a9444; end: 1087a946f;  */

void FUN_1087a9444(undefined8 *param_1)

{
  func_0x000107c31510();
  *param_1 = &PTR_FUN_110a70478;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  return;
}



/* Entry: 1087a9470; end: 1087a9473;  */

undefined8 * FUN_1087a9470(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a70478;
  FUN_1087a94bc(param_1 + 0x13);
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 1087a9474; end: 1087a9487;  */

void FUN_1087a9474(void)

{
  FUN_1087a9488();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087a9488; end: 1087a94bb;  */

undefined8 * FUN_1087a9488(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a70478;
  FUN_1087a94bc(param_1 + 0x13);
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 1087a94bc; end: 1087a94db;  */

void FUN_1087a94bc(long param_1)

{
  if (*(char *)(param_1 + 0x70) == '\x01') {
    func_0x0001087a3420();
  }
  return;
}



/* Entry: 1087a94dc; end: 1087a9563;  */

long FUN_1087a94dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x0001087a9dfc();
  do {
    uStack_38 = 0;
    lVar1 = unaff_x20 + 0x10;
    func_0x000107c27ff0(lVar1,&uStack_38,1,2);
    if ((int)lVar1 != 0) {
      FUN_1087a9564(unaff_x20 + 0x98,param_3);
      *(undefined8 *)(unaff_x20 + 0x10) = 2;
      func_0x000107c31508();
      return lVar1;
    }
  } while (((uint)uStack_38 >> 1 & 1) == 0);
  return lVar1;
}



/* Entry: 1087a9564; end: 1087a958f;  */

void FUN_1087a9564(void)

{
  func_0x0001087a9dfc();
  FUN_1087a9590();
  func_0x0001087a95b4();
  return;
}



/* Entry: 1087a9590; end: 1087a95cf;  */

void FUN_1087a9590(long param_1)

{
  if (*(char *)(param_1 + 0x70) == '\x01') {
    func_0x0001087a3420();
    *(undefined1 *)(param_1 + 0x70) = 0;
  }
  return;
}



/* Entry: 1087a95d0; end: 1087a9637;  */

void FUN_1087a95d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  
  func_0x0001087a9eb4();
  *param_1 = *param_2;
  FUN_1087a9638(param_1 + 1,param_2 + 1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x48);
  *(undefined1 *)(unaff_x19 + 0x50) = 0;
  *(undefined8 *)(unaff_x19 + 0x48) = uVar1;
  *(undefined1 *)(unaff_x19 + 0x68) = 0;
  if (*(char *)(unaff_x20 + 0x68) == '\x01') {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x58);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x50);
    *(undefined8 *)(unaff_x19 + 0x60) = *(undefined8 *)(unaff_x20 + 0x60);
    *(undefined8 *)(unaff_x19 + 0x58) = uVar2;
    *(undefined8 *)(unaff_x19 + 0x50) = uVar1;
    *(undefined8 *)(unaff_x20 + 0x58) = 0;
    *(undefined8 *)(unaff_x20 + 0x60) = 0;
    *(undefined8 *)(unaff_x20 + 0x50) = 0;
    *(undefined1 *)(unaff_x19 + 0x68) = 1;
  }
  return;
}



/* Entry: 1087a9638; end: 1087a9663;  */

undefined1 * FUN_1087a9638(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x38] = 0;
  FUN_1087a9664();
  return param_1;
}



/* Entry: 1087a9664; end: 1087a9677;  */

void FUN_1087a9664(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_1087a96a4(param_1 + 8,param_2 + 8);
    *(undefined1 *)(param_1 + 0x38) = 1;
    return;
  }
  return;
}



/* Entry: 1087a9678; end: 1087a96a3;  */

void FUN_1087a9678(long param_1,long param_2)

{
  FUN_1087a96a4(param_1 + 8,param_2 + 8);
  *(undefined1 *)(param_1 + 0x38) = 1;
  return;
}



/* Entry: 1087a96a4; end: 1087a96d3;  */

undefined1 * FUN_1087a96a4(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  FUN_1087a96d4();
  return param_1;
}



/* Entry: 1087a96d4; end: 1087a972f;  */

void FUN_1087a96d4(void)

{
  uint uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001087a9eb4();
  FUN_1087a32c8();
  uVar1 = *(uint *)(unaff_x20 + 0x28);
  if (uVar1 != 0xffffffff) {
    (*(code *)(&PTR_FUN_110a70408)[uVar1])(&stack0xffffffffffffffc8);
    *(uint *)(unaff_x19 + 0x28) = uVar1;
  }
  return;
}



/* Entry: 1087a9730; end: 1087a9767;  */

void FUN_1087a9730(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  param_1 = (undefined8 *)*param_1;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}



/* Entry: 1087a9768; end: 1087a9793;  */

undefined1 * FUN_1087a9768(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x20] = 0;
  FUN_1087a9794();
  return param_1;
}



/* Entry: 1087a9794; end: 1087a97a7;  */

void FUN_1087a9794(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    FUN_1087a97c4();
    *(undefined1 *)(param_1 + 0x20) = 1;
    return;
  }
  return;
}



/* Entry: 1087a97a8; end: 1087a97c3;  */

void FUN_1087a97a8(long param_1)

{
  FUN_1087a97c4();
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}



/* Entry: 1087a97c4; end: 1087a97cf;  */

undefined8 * FUN_1087a97c4(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_DAT_110a80f30;
  param_1[1] = 0;
  param_1[3] = 0;
  FUN_1087a9808(param_1,param_2);
  return param_1;
}



/* Entry: 1087a97d0; end: 1087a9807;  */

undefined8 * FUN_1087a97d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_DAT_110a80f30;
  param_1[1] = param_2;
  param_1[3] = 0;
  FUN_1087a9808(param_1,param_3);
  return param_1;
}



/* Entry: 1087a9808; end: 1087a986b;  */

long FUN_1087a9808(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar1 == uVar2) {
      FUN_1088ba078(param_1);
    }
    else {
      FUN_1088ba040(param_1);
    }
  }
  return param_1;
}



/* Entry: 1087a986c; end: 1087a989b;  */

long FUN_1087a986c(long param_1)

{
  undefined8 in_x4;
  
  func_0x0001087a9e80();
  *(undefined8 *)(param_1 + 0x48) = in_x4;
  *(undefined1 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(param_1 + 0x68) = 0;
  return param_1;
}



/* Entry: 1087a989c; end: 1087a989f;  */

undefined8 * FUN_1087a989c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a70428;
  func_0x000107c288a4(param_1 + 8);
  func_0x000107c28858(param_1 + 6);
  func_0x000107c28808(param_1 + 4);
  func_0x000107c28800(param_1 + 2);
  return param_1;
}



/* Entry: 1087a98a0; end: 1087a98b3;  */

void FUN_1087a98a0(void)

{
  FUN_1087a9a84();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087a98b4; end: 1087a9a83;  */

undefined8 * FUN_1087a98b4(void)

{
  undefined4 uVar1;
  undefined1 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 extraout_x8;
  long unaff_x19;
  long unaff_x20;
  undefined8 auStack_1f8 [3];
  undefined1 auStack_1e0 [44];
  undefined4 uStack_1b4;
  char cStack_190;
  undefined1 auStack_188 [44];
  undefined4 uStack_15c;
  undefined1 auStack_138 [56];
  undefined1 uStack_100;
  undefined1 auStack_f8 [56];
  undefined1 uStack_c0;
  undefined1 auStack_b8 [112];
  undefined8 uStack_48;
  
  func_0x0001087a9eb4();
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x0001087a93b4(auStack_1f8);
  FUN_1087a9334(extraout_x8,auStack_1f8);
  uVar1 = *(undefined4 *)(unaff_x20 + 0xa08);
  (**(code **)(**(long **)(unaff_x19 + 0x10) + 0x10))();
  FUN_1087a9ad0(auStack_188,uVar1);
  FUN_108860568(auStack_1e0,*(undefined8 *)(unaff_x19 + 0x20),auStack_188);
  uVar2 = cStack_190 == '\x01';
  if ((bool)uVar2) {
    plVar3 = *(long **)(unaff_x19 + 0x30);
    (**(code **)(*plVar3 + 0x10))();
    FUN_10879ca28(uStack_15c,uStack_1b4,plVar3,*(undefined8 *)(unaff_x19 + 0x40));
    uVar5 = (ulong)*(uint *)(unaff_x19 + 8);
    auStack_f8[0] = 0;
    uStack_c0 = 0;
    FUN_1087a9b2c(auStack_b8,uVar5,4,auStack_f8);
    func_0x0001087a9e74();
    func_0x0001087a9da0();
    FUN_1087a33a8(auStack_f8);
    func_0x0001087a9e4c();
  }
  else {
    func_0x0001087a9e4c();
    uVar5 = (ulong)*(uint *)(unaff_x19 + 8);
    auStack_138[0] = 0;
    uStack_100 = 0;
    FUN_1087a9b2c(auStack_b8,uVar5,0,auStack_138);
    func_0x0001087a9e74();
    func_0x0001087a9da0();
    FUN_1087a33a8(auStack_138);
  }
  func_0x000107c27914(auStack_188);
  while( true ) {
    puVar4 = auStack_1f8;
    func_0x000107c27fb8();
    func_0x0001087a9ec0(uStack_48);
    if ((bool)uVar2) {
      return puVar4;
    }
    ___stack_chk_fail();
    if ((int)uVar5 == 0) break;
    func_0x0001087a9da0();
    FUN_1087a33a8(auStack_f8);
    func_0x0001087a9e4c();
    func_0x000107c27914(auStack_188);
    ___cxa_begin_catch(puVar4);
    func_0x0001053360b0(auStack_1f8);
    ___cxa_end_catch();
  }
  func_0x0001087a9ea0();
  *puVar4 = &PTR_FUN_110a70428;
  func_0x000107c288a4(puVar4 + 8);
  func_0x000107c28858(puVar4 + 6);
  func_0x000107c28808(puVar4 + 4);
  func_0x000107c28800(puVar4 + 2);
  return puVar4;
}



/* Entry: 1087a9a84; end: 1087a9acf;  */

undefined8 * FUN_1087a9a84(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a70428;
  func_0x000107c288a4(param_1 + 8);
  func_0x000107c28858(param_1 + 6);
  func_0x000107c28808(param_1 + 4);
  func_0x000107c28800(param_1 + 2);
  return param_1;
}



/* Entry: 1087a9ad0; end: 1087a9b2b;  */

void FUN_1087a9ad0(long param_1,undefined4 param_2,long param_3,undefined8 param_4)

{
  func_0x000107c27994();
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_3 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = param_4;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_3 + 0xa00);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_3 + 0x9f8);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_3 + 0xa04);
  *(undefined8 *)(param_1 + 0x44) = 3;
  return;
}



/* Entry: 1087a9b2c; end: 1087a9b5b;  */

long FUN_1087a9b2c(long param_1)

{
  func_0x0001087a9e80();
  *(undefined1 *)(param_1 + 0x48) = 0;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(undefined1 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(param_1 + 0x68) = 0;
  return param_1;
}



/* Entry: 1087a9b5c; end: 1087a9ee7;  */

void FUN_1087a9b5c(long param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined1 *puVar2;
  long *unaff_x19;
  long *unaff_x20;
  long lVar3;
  undefined8 unaff_x22;
  undefined8 *puStack00000000000000b8;
  undefined8 *puStack00000000000000c0;
  long lStack00000000000000c8;
  
  puStack00000000000000b8 = (undefined8 *)(param_2 + param_1);
  lStack00000000000000c8 = param_2 + param_3 * 8;
  puStack00000000000000c0 = puStack00000000000000b8 + 1;
  *puStack00000000000000b8 = unaff_x22;
  puVar2 = &stack0x000000b0;
  plVar1 = unaff_x19;
  func_0x0001087a9dfc();
  lVar3 = *(long *)(puVar2 + 8) - (plVar1[1] - *plVar1);
  _memcpy(lVar3);
  unaff_x19[1] = lVar3;
  lVar3 = *unaff_x20;
  unaff_x20[1] = lVar3;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = lVar3;
  lVar3 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = lVar3;
  lVar3 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = lVar3;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 1087a9ee8; end: 1087a9f87;  */

undefined8 * FUN_1087a9ee8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a704b8;
  param_1[1] = &PTR_DAT_110a70538;
  func_0x000107c289f8(param_1 + 0x38);
  func_0x000107c289f8(param_1 + 0x32);
  func_0x000107c289f8(param_1 + 0x2c);
  func_0x000107c289f8(param_1 + 0x26);
  func_0x000107c289f8(param_1 + 0x20);
  func_0x000107c289f8(param_1 + 0x1a);
  func_0x000107c298fc(param_1 + 0x18);
  func_0x000107c299b0(param_1 + 0x16);
  func_0x000107c299a0(param_1 + 0x13);
  FUN_1087b1854(param_1 + 0xe);
  func_0x000100864b68(param_1 + 9);
  func_0x000107c29994(param_1 + 7);
  FUN_1087b17d0(param_1 + 6);
  func_0x0001087a8fd8(param_1 + 4);
  func_0x000107c299c4(param_1 + 2);
  return param_1;
}



/* Entry: 1087a9f88; end: 1087a9f93;  */

undefined8 * FUN_1087a9f88(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a704b8;
  param_1[1] = &PTR_DAT_110a70538;
  func_0x000107c289f8(param_1 + 0x38);
  func_0x000107c289f8(param_1 + 0x32);
  func_0x000107c289f8(param_1 + 0x2c);
  func_0x000107c289f8(param_1 + 0x26);
  func_0x000107c289f8(param_1 + 0x20);
  func_0x000107c289f8(param_1 + 0x1a);
  func_0x000107c298fc(param_1 + 0x18);
  func_0x000107c299b0(param_1 + 0x16);
  func_0x000107c299a0(param_1 + 0x13);
  FUN_1087b1854(param_1 + 0xe);
  func_0x000100864b68(param_1 + 9);
  func_0x000107c29994(param_1 + 7);
  FUN_1087b17d0(param_1 + 6);
  func_0x0001087a8fd8(param_1 + 4);
  func_0x000107c299c4(param_1 + 2);
  return param_1;
}



/* Entry: 1087a9f94; end: 1087a9fa7;  */

void FUN_1087a9f94(void)

{
  FUN_1087a9ee8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087a9fa8; end: 1087a9fb7;  */

void FUN_1087a9fa8(long param_1)

{
  FUN_1087a9ee8(param_1 + -8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087a9fb8; end: 1087aa0e3;  */

void FUN_1087a9fb8(undefined8 *param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  long *plVar3;
  uint extraout_w8;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar4;
  
  puVar2 = param_1;
  func_0x000107c335b0();
  plVar3 = puVar2 + 2;
  *puVar2 = FUN_1087b57bc;
  puVar2[1] = FUN_1087b5808;
  func_0x000107c27f94();
  func_0x0001087b5dc0();
  *(undefined1 *)((long)param_1 + 0x44) = 1;
  if (*(int *)(param_1 + 8) == 0) {
    plVar3 = param_1 + 10;
    func_0x000107c28850();
  }
  puVar2[4] = param_1[9];
  do {
    func_0x0001087b58e8();
  } while (extraout_w10 != 0);
  func_0x0001087b5a94(puVar2[4]);
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar2 + 5) = 0;
    func_0x0001087b58a4();
    if (*plVar3 == 0) {
      func_0x000107c3a5c0();
    }
    func_0x0001087b633c();
    plVar3 = extraout_x8;
    do {
      if (*plVar3 == 0) {
        func_0x0001087b5968();
        plVar3 = extraout_x8_01;
        uVar1 = extraout_w10_01;
        uVar4 = extraout_w11_00;
      }
      else {
        func_0x0001087b5c38();
        plVar3 = extraout_x8_00;
        uVar1 = extraout_w10_00;
        uVar4 = extraout_w11;
      }
      if ((uVar4 & 1) != 0) {
        func_0x0001087b5b40();
        if ((bool)in_ZR) {
          func_0x0001087b5948();
          func_0x0001087b58d8();
          func_0x0001087b5934();
          func_0x0001087b5e90();
        }
        func_0x0001087b58f8();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x000107c28834(puVar2 + 4);
  func_0x0001087b5dd4();
  func_0x0001087b5ca4();
  func_0x0001087b5a40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar2);
  return;
}



/* Entry: 1087aa0e4; end: 1087aa473;  */

void FUN_1087aa0e4(void)

{
  undefined1 uVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  code **ppcVar5;
  long *plVar6;
  undefined8 extraout_x8;
  long lVar7;
  long extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w11;
  long unaff_x20;
  long *plVar8;
  undefined8 uVar9;
  long lStack_17d0;
  long lStack_17c8;
  undefined8 uStack_17c0;
  undefined8 uStack_17b8;
  undefined8 uStack_17b0;
  undefined8 uStack_17a8;
  undefined8 uStack_17a0;
  undefined8 uStack_1798;
  undefined8 uStack_1790;
  undefined8 uStack_1788;
  undefined8 uStack_1780;
  undefined8 uStack_1778;
  undefined8 uStack_1768;
  undefined4 uStack_1760;
  undefined1 auStack_1758 [24];
  undefined8 uStack_1740;
  undefined8 uStack_1738;
  undefined8 uStack_1730;
  undefined8 uStack_1720;
  undefined8 uStack_1718;
  undefined8 uStack_1710;
  undefined8 uStack_1700;
  undefined8 uStack_16f8;
  undefined8 uStack_16f0;
  long lStack_16e0;
  undefined8 uStack_16d8;
  undefined8 uStack_16d0;
  undefined8 *puStack_16c0;
  code **ppcStack_16b8;
  undefined8 *puStack_16b0;
  long *plStack_16a8;
  undefined1 auStack_1668 [16];
  long lStack_1658;
  long lStack_1650;
  long lStack_1640;
  long lStack_1638;
  undefined1 auStack_15f8 [24];
  undefined8 auStack_15e0 [8];
  undefined1 auStack_15a0 [2440];
  byte bStack_c18;
  undefined8 uStack_b20;
  long lStack_b18;
  undefined8 uStack_b10;
  long lStack_b08;
  undefined1 auStack_b00 [2688];
  undefined8 uStack_80;
  long lStack_78;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_8;
  
  func_0x000107c335c0();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x0001087b6824();
  func_0x000107c33538();
  uStack_8 = extraout_x8;
  func_0x0001087b6330();
  func_0x000107c278b8(auStack_15f8,"sendMessageWithContent");
  func_0x000107c335f8(auStack_15e0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_15f8);
  FUN_1087aa474(auStack_1668);
  uVar1 = 0;
  if ((lStack_1658 == lStack_1650) && (uVar1 = lStack_1640 == lStack_1638, !(bool)uVar1)) {
    func_0x000107c289e8();
  }
  FUN_1086a4b90(auStack_1668,&lStack_1658);
  plVar6 = (long *)(*(long *)(unaff_x20 + 0x20) + 0x78);
  FUN_1086a050c(auStack_15a0);
  pbVar2 = (byte *)(unaff_x20 + 0x1c0);
  func_0x000107c289e8();
  bStack_c18 = *pbVar2 ^ 1;
  FUN_1087aa674();
  func_0x0001087b63f8(*(undefined8 *)(unaff_x20 + 0x30));
  FUN_1087927a4(&uStack_b20,auStack_15a0);
  func_0x0001087b61e4();
  func_0x000108794568(&uStack_b20);
  lVar7 = *(long *)(unaff_x20 + 0x20);
  plVar8 = *(long **)(lVar7 + 0x98);
  lStack_b18 = *(undefined8 *)(lVar7 + 0x40);
  uStack_b20 = *(undefined8 *)(lVar7 + 0x38);
  if (*(long *)(lVar7 + 0x40) != 0) {
    do {
      func_0x000107c33534();
    } while (extraout_w10 != 0);
    lVar7 = *(long *)(unaff_x20 + 0x20);
  }
  uStack_b10 = *(undefined8 *)(lVar7 + 0x188);
  lStack_b08 = *(long *)(lVar7 + 400);
  if (lStack_b08 != 0) {
    do {
      func_0x000107c33534();
    } while (extraout_w10_00 != 0);
  }
  FUN_108792710(auStack_b00,auStack_15a0);
  uStack_80 = *(undefined8 *)(*(long *)(unaff_x20 + 0x20) + 0x148);
  lStack_78 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0x150);
  if (lStack_78 != 0) {
    do {
      func_0x000107c33534();
    } while (extraout_w10_01 != 0);
  }
  pcStack_68 = FUN_1087b2c68;
  ppuStack_60 = &PTR_FUN_110a70b28;
  puVar3 = (undefined8 *)0xab0;
  __Znwm();
  puVar3[1] = lStack_b18;
  *puVar3 = uStack_b20;
  lStack_b18 = 0;
  uStack_b20 = 0;
  puVar3[3] = lStack_b08;
  puVar3[2] = uStack_b10;
  uStack_b10 = 0;
  lStack_b08 = 0;
  FUN_108792710(puVar3 + 4,auStack_b00);
  lVar7 = lStack_78;
  uVar9 = uStack_80;
  puVar3[0x155] = lStack_78;
  puVar3[0x154] = uStack_80;
  uStack_80 = 0;
  lStack_78 = 0;
  ppcVar5 = &pcStack_68;
  puStack_58 = puVar3;
  func_0x0001087b622c(*(undefined8 *)(*plVar8 + 0x10));
  func_0x0001087b59b8(ppuStack_60);
  FUN_1087acf64(&uStack_b20);
  func_0x000107c31428(auStack_15e0);
  func_0x0001087b60a8();
  func_0x000108794568(auStack_15a0);
  func_0x0001087b61a8();
  func_0x000107c31424(auStack_15e0);
  while( true ) {
    func_0x000107c33530(uStack_8);
    if ((bool)uVar1) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001087b5b68();
    func_0x0001087b61a8();
    puVar4 = auStack_15e0;
    func_0x000107c31424();
    uVar1 = (int)puVar3 == 1;
    if (!(bool)uVar1) break;
    func_0x0001087b5b38();
    func_0x0001087b67ac();
    uStack_b20 = uVar9;
    lStack_b18 = lVar7;
    if (extraout_x9 != 0) {
      do {
        func_0x000107c33568();
      } while (extraout_w11 != 0);
    }
    uStack_b10 = CONCAT71(uStack_b10._1_7_,1);
    func_0x0001087b5c20();
    FUN_1087aae38();
    FUN_1087acf98(&uStack_b20);
    ___cxa_end_catch();
  }
  func_0x0001087b5bdc();
  func_0x0001087b6664();
  puStack_16c0 = &uStack_b20;
  ppcStack_16b8 = &pcStack_68;
  puStack_16b0 = puVar3;
  plStack_16a8 = plVar8;
  if ((ulong)((plVar6[1] - *plVar6) / 0x18) < 2) {
    FUN_1088627a0(&lStack_17d0,*(undefined8 *)(ppcVar5[4] + 0x38),plVar6);
    uStack_1768 = 0;
    uStack_1760 = 0;
    func_0x000107c279ac(auStack_1758,plVar6);
    for (; lStack_17d0 != lStack_17c8; lStack_17d0 = lStack_17d0 + 0x1d0) {
      func_0x00010879d7e8(lStack_17d0 + 0x18,&uStack_1768);
    }
    func_0x0001086aaf34(&lStack_17d0);
  }
  else {
    FUN_1087a5200(&uStack_1768,*(undefined8 *)(ppcVar5[4] + 0x1e8),plVar6);
  }
  func_0x000107c279ac(&lStack_16e0,auStack_1758);
  FUN_108685948(&uStack_1700,plVar6 + 3);
  func_0x000108685aec(&uStack_1720,plVar6 + 6);
  func_0x000108685c38(&uStack_1740,plVar6 + 9);
  lStack_17c8 = uStack_16d8;
  lStack_17d0 = lStack_16e0;
  uStack_17c0 = uStack_16d0;
  uStack_16d8 = 0;
  uStack_16d0 = 0;
  lStack_16e0 = 0;
  uStack_17b0 = uStack_16f8;
  uStack_17b8 = uStack_1700;
  uStack_17a8 = uStack_16f0;
  uStack_1700 = 0;
  uStack_16f8 = 0;
  uStack_16f0 = 0;
  uStack_1798 = uStack_1718;
  uStack_17a0 = uStack_1720;
  uStack_1790 = uStack_1710;
  uStack_1718 = 0;
  uStack_1710 = 0;
  uStack_1720 = 0;
  uStack_1780 = uStack_1738;
  uStack_1788 = uStack_1740;
  uStack_1778 = uStack_1730;
  uStack_1740 = 0;
  uStack_1738 = 0;
  uStack_1730 = 0;
  func_0x000104bee7a0(&uStack_1740);
  func_0x000104bee7dc(&uStack_1720);
  func_0x000104bee864(&uStack_1700);
  func_0x000107c27a04(&lStack_16e0);
  *puVar4 = uStack_1768;
  *(undefined4 *)(puVar4 + 1) = uStack_1760;
  FUN_108639fcc(puVar4 + 2,&lStack_17d0);
  func_0x000104bee768(&lStack_17d0);
  func_0x000107c27a04(auStack_1758);
  return;
}



/* Entry: 1087aa474; end: 1087aa673;  */

void FUN_1087aa474(undefined8 *param_1,long param_2,long *param_3)

{
  long lStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined1 auStack_d8 [24];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if ((ulong)((param_3[1] - *param_3) / 0x18) < 2) {
    FUN_1088627a0(&lStack_150,*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x38),param_3);
    uStack_e8 = 0;
    uStack_e0 = 0;
    func_0x000107c279ac(auStack_d8,param_3);
    for (; lStack_150 != lStack_148; lStack_150 = lStack_150 + 0x1d0) {
      func_0x00010879d7e8(lStack_150 + 0x18,&uStack_e8);
    }
    func_0x0001086aaf34(&lStack_150);
  }
  else {
    FUN_1087a5200(&uStack_e8,*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x1e8),param_3);
  }
  func_0x000107c279ac(&lStack_60,auStack_d8);
  FUN_108685948(&uStack_80,param_3 + 3);
  func_0x000108685aec(&uStack_a0,param_3 + 6);
  func_0x000108685c38(&uStack_c0,param_3 + 9);
  lStack_148 = uStack_58;
  lStack_150 = lStack_60;
  uStack_140 = uStack_50;
  uStack_58 = 0;
  uStack_50 = 0;
  lStack_60 = 0;
  uStack_130 = uStack_78;
  uStack_138 = uStack_80;
  uStack_128 = uStack_70;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_118 = uStack_98;
  uStack_120 = uStack_a0;
  uStack_110 = uStack_90;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_a0 = 0;
  uStack_100 = uStack_b8;
  uStack_108 = uStack_c0;
  uStack_f8 = uStack_b0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  func_0x000104bee7a0(&uStack_c0);
  func_0x000104bee7dc(&uStack_a0);
  func_0x000104bee864(&uStack_80);
  func_0x000107c27a04(&lStack_60);
  *param_1 = uStack_e8;
  *(undefined4 *)(param_1 + 1) = uStack_e0;
  FUN_108639fcc(param_1 + 2,&lStack_150);
  func_0x000104bee768(&lStack_150);
  func_0x000107c27a04(auStack_d8);
  return;
}



/* Entry: 1087aa674; end: 1087aa78f;  */

void FUN_1087aa674(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  long *plVar3;
  int extraout_w8;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_798 [24];
  undefined1 auStack_780 [904];
  undefined1 auStack_3f8 [952];
  
  if (1 < *(int *)(param_2 + 0xa1c) - 2U) {
    func_0x0001087b5d6c();
    if ((extraout_w8 == 0) || (extraout_w8 == 1)) {
      (**(code **)(**(long **)(*(long *)(unaff_x20 + 0x20) + 0x158) + 0x20))();
    }
    FUN_108685044(auStack_780,unaff_x19 + 0x130);
    uVar4 = *(undefined8 *)(unaff_x19 + 0x658);
    uVar1 = *(undefined4 *)(unaff_x19 + 0xa1c);
    FUN_108848684(auStack_798);
    uVar2 = *(long *)(unaff_x20 + 0x20) + 0x358;
    FUN_1087a0040(uVar2);
    func_0x00010863c6a8(auStack_3f8,auStack_780,uVar4,uVar1,auStack_798,uVar2 & 0xffff);
    func_0x000107c27914(auStack_798);
    func_0x000104bee3a8(auStack_780);
    plVar3 = *(long **)(*(long *)(unaff_x20 + 0x20) + 0xa8);
    (**(code **)(*plVar3 + 0x50))(plVar3,auStack_3f8,unaff_x19 + 0x50);
    func_0x0001086858b0(auStack_3f8);
  }
  return;
}



/* Entry: 1087aa790; end: 1087aae37;  */

void FUN_1087aa790(long param_1,undefined8 param_2,undefined8 param_3,ulong *param_4)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  bool bVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar10;
  long extraout_x8_01;
  undefined1 *extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  undefined1 *extraout_x9;
  undefined1 *extraout_x9_00;
  undefined1 *extraout_x9_01;
  undefined1 *puVar11;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  long *plVar12;
  long *plVar13;
  long *extraout_x10;
  int extraout_w11;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *extraout_x11;
  undefined8 *unaff_x20;
  undefined1 *puVar16;
  long lVar17;
  long *plVar18;
  uint uVar19;
  undefined1 *puVar20;
  undefined1 *unaff_x25;
  ulong uStack_2120;
  ulong uStack_2118;
  byte bStack_2110;
  undefined8 uStack_2100;
  undefined8 uStack_20f8;
  undefined8 uStack_20f0;
  long lStack_20e0;
  long lStack_20d8;
  long lStack_20c8;
  long lStack_20c0;
  long lStack_20b8;
  long lStack_20a8;
  long lStack_20a0;
  long *plStack_2098;
  long *plStack_2090;
  undefined8 uStack_2088;
  undefined1 auStack_2080 [24];
  undefined1 auStack_2068 [2648];
  long lStack_1610;
  long lStack_1608;
  long lStack_1600;
  ulong uStack_15f8;
  ulong uStack_15f0;
  undefined1 uStack_15e8;
  undefined8 uStack_15e0;
  undefined8 uStack_15d8;
  undefined8 uStack_15d0;
  undefined1 auStack_15c8 [2688];
  long lStack_b48;
  long lStack_b40;
  undefined1 uStack_b38;
  long lStack_b30;
  long lStack_b28;
  long lStack_b20;
  long lStack_b18;
  undefined8 uStack_58;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar17 = param_1;
  func_0x000107c33538();
  lStack_b30 = *(long *)(lVar17 + 0x10);
  lVar17 = *(long *)(lVar17 + 0x18);
  if (lVar17 == 0) {
LAB_1087aad80:
    func_0x00010527822c();
  }
  else {
    uStack_58 = extraout_x8;
    func_0x0001087b6788();
    __ZNSt3__119__shared_weak_count4lockEv();
    lStack_b28 = lVar17;
    if (lVar17 == 0) goto LAB_1087aad80;
    uVar5 = *(long *)(param_1 + 0xa8) == -1;
    if (!(bool)uVar5) {
      func_0x0001087b62c4();
      plStack_2098 = &lStack_1600;
      lStack_1600 = extraout_x8_00;
      __ZNSt3__111__call_onceERVmPvPFvS2_E();
    }
    func_0x0001087b5ce4();
    func_0x000107c29990();
    lVar17 = *(long *)(param_1 + 0x38);
    FUN_108792710(auStack_2080);
    uStack_20f8 = unaff_x20[1];
    uStack_2100 = *unaff_x20;
    uStack_20f0 = unaff_x20[2];
    unaff_x20[1] = 0;
    unaff_x20[2] = 0;
    *unaff_x20 = 0;
    uStack_2118 = param_4[1];
    uStack_2120 = *param_4;
    if (param_4[1] != 0) {
      do {
        func_0x000107c33534();
      } while (extraout_w10 != 0);
    }
    bStack_2110 = 1;
    if ((*(byte *)(lVar17 + 0x44) & 1) == 0) {
      lVar9 = lVar17 + 0x18;
      FUN_108794e0c(lVar9,auStack_2068);
      if (lVar9 == 0) {
        func_0x000107c289cc(&lStack_20a8);
        lStack_20b8 = lStack_1608;
        lStack_20c0 = lStack_1610;
        if (lStack_1608 != 0) {
          do {
            func_0x000107c33534();
          } while (extraout_w10_00 != 0);
        }
        uStack_15f8 = uStack_15f8 & 0xffffffffffffff00;
        uStack_15e8 = 0;
        uVar4 = (int)(bStack_2110 - 1) < 0;
        uVar5 = bStack_2110 == 1;
        lStack_1600 = lVar17;
        if ((bool)uVar5) {
          uStack_15f0 = uStack_2118;
          uStack_15f8 = uStack_2120;
          if (uStack_2118 != 0) {
            do {
              func_0x000107c33534();
            } while (extraout_w10_01 != 0);
          }
          uStack_15e8 = 1;
        }
        uStack_15d8 = uStack_20f8;
        uStack_15e0 = uStack_2100;
        uStack_15d0 = uStack_20f0;
        uStack_20f8 = 0;
        uStack_20f0 = 0;
        uStack_2100 = 0;
        FUN_108792710(auStack_15c8,auStack_2080);
        lStack_b48 = lStack_20a8;
        if (lStack_20a8 != 0) {
          do {
            func_0x0001087b58e8();
          } while (extraout_w10_02 != 0);
        }
        uStack_b38 = 0;
        *(int *)(lVar17 + 0x40) = *(int *)(lVar17 + 0x40) + 1;
        lStack_b40 = lVar17;
        func_0x0001087b5ce4();
        FUN_1087b378c();
        func_0x0001087b5ce4(&lStack_20c8);
        FUN_1087b2e6c();
        func_0x0001087b5ce4();
        FUN_1087b386c();
        FUN_1087b386c(&lStack_1600);
        lStack_20d8 = lStack_20b8;
        lStack_20e0 = lStack_20c0;
        if (lStack_20b8 != 0) {
          do {
            func_0x000107c33534();
          } while (extraout_w10_03 != 0);
        }
        lStack_b30 = lStack_20a0;
        if (lStack_20a0 != 0) {
          do {
            func_0x0001087b6290();
          } while (extraout_w11 != 0);
        }
        lStack_b28 = lStack_20c8;
        if (lStack_20c8 != 0) {
          do {
            func_0x0001087b58e8();
          } while (extraout_w10_04 != 0);
        }
        lStack_b18 = lStack_20d8;
        lStack_b20 = lStack_20e0;
        lStack_20e0 = 0;
        lStack_20d8 = 0;
        puVar11 = auStack_2068;
        FUN_108848654();
        puVar20 = *(undefined1 **)(lVar17 + 0x20);
        if (puVar20 != (undefined1 *)0x0) {
          puVar16 = puVar20 + -1;
          uVar19 = (uint)puVar20;
          if (((ulong)puVar20 & (ulong)puVar16) == 0) {
            unaff_x25 = (undefined1 *)((ulong)(uVar19 - 1) & (ulong)puVar11);
            uVar5 = true;
            uVar4 = false;
          }
          else {
            uVar4 = (long)puVar11 - (long)puVar20 < 0;
            uVar5 = puVar11 == puVar20;
            unaff_x25 = puVar11;
            if (puVar20 <= puVar11) {
              uVar1 = 0;
              if (uVar19 != 0) {
                uVar1 = (uint)puVar11 / uVar19;
              }
              unaff_x25 = (undefined1 *)(ulong)((uint)puVar11 - uVar1 * uVar19);
            }
          }
          plVar18 = *(long **)(*(long *)(lVar17 + 0x18) + (long)unaff_x25 * 8);
          if (plVar18 != (long *)0x0) {
            do {
              while( true ) {
                plVar18 = (long *)*plVar18;
                if (plVar18 == (long *)0x0) goto LAB_1087aaa74;
                puVar10 = (undefined1 *)plVar18[1];
                uVar4 = (long)puVar10 - (long)puVar11 < 0;
                uVar5 = puVar10 == puVar11;
                if (!(bool)uVar5) break;
                uVar7 = (ulong)(plVar18 + 2);
                func_0x000107c28078(uVar7,auStack_2068);
                if ((uVar7 & 1) != 0) goto LAB_1087aad14;
              }
              if (((ulong)puVar20 & (ulong)puVar16) == 0) {
                puVar10 = (undefined1 *)((ulong)puVar10 & (ulong)puVar16);
              }
              else if (puVar20 <= puVar10) {
                uVar7 = 0;
                if (puVar20 != (undefined1 *)0x0) {
                  uVar7 = (ulong)puVar10 / (ulong)puVar20;
                }
                puVar10 = puVar10 + -(uVar7 * (long)puVar20);
              }
              uVar4 = (long)puVar10 - (long)unaff_x25 < 0;
              uVar5 = puVar10 == unaff_x25;
            } while ((bool)uVar5);
          }
        }
LAB_1087aaa74:
        plVar8 = (long *)0x48;
        __Znwm();
        plVar18 = (long *)(lVar17 + 0x28);
        uStack_2088 = 0;
        *plVar8 = 0;
        plVar8[1] = (long)puVar11;
        plStack_2098 = plVar8;
        plStack_2090 = plVar18;
        func_0x000107c27994(plVar8 + 2,auStack_2068);
        func_0x0001087b62c4();
        plVar8[6] = lStack_b28;
        plVar8[5] = lStack_b30;
        lStack_b28 = 0;
        lStack_b30 = 0;
        plVar8[8] = lStack_b18;
        plVar8[7] = lStack_b20;
        *(undefined8 *)(extraout_x8_01 + 0x18) = 0;
        *(undefined8 *)(extraout_x8_01 + 0x10) = 0;
        uStack_2088 = CONCAT71(uStack_2088._1_7_,1);
        if ((puVar20 == (undefined1 *)0x0) ||
           (func_0x0001087b66b4((float)(*(long *)(lVar17 + 0x30) + 1),*(undefined4 *)(lVar17 + 0x38)
                                ,(float)puVar20), (bool)uVar4)) {
          bVar3 = (undefined1 *)0x2 < puVar20;
          bVar6 = puVar20 == (undefined1 *)0x3;
          uVar7 = 1;
          if (bVar3) {
            uVar7 = (ulong)(((ulong)puVar20 & (ulong)(puVar20 + -1)) != 0);
          }
          func_0x0001087b5da4(uVar7 | (long)puVar20 << 1);
          puVar16 = extraout_x8_02;
          if (!bVar3 || bVar6) {
            puVar16 = extraout_x9;
          }
          if (puVar16 + -1 == (undefined1 *)0x0) {
            puVar16 = (undefined1 *)0x2;
          }
          else if (((ulong)puVar16 & (ulong)(puVar16 + -1)) != 0) {
            __ZNSt3__112__next_primeEm();
          }
          puVar20 = *(undefined1 **)(lVar17 + 0x20);
          if (puVar20 < puVar16) {
LAB_1087aab38:
            if ((ulong)puVar16 >> 0x3d != 0) goto LAB_1087aad88;
            lVar9 = (long)puVar16 << 3;
            __Znwm(lVar9);
            FUN_1087b38d8(lVar17 + 0x18,lVar9);
            puVar20 = (undefined1 *)0x0;
            *(undefined1 **)(lVar17 + 0x20) = puVar16;
            lVar9 = *(long *)(lVar17 + 0x18);
            while (puVar16 != puVar20) {
              func_0x0001087b68ac();
              lVar9 = extraout_x8_03;
              puVar20 = extraout_x9_00;
            }
            plVar12 = (long *)*plVar18;
            puVar20 = puVar16;
            if (plVar12 != (long *)0x0) {
              puVar14 = (undefined1 *)plVar12[1];
              puVar10 = puVar16 + -1;
              uVar7 = 0;
              if (puVar16 != (undefined1 *)0x0) {
                uVar7 = (ulong)puVar14 / (ulong)puVar16;
              }
              puVar15 = puVar14;
              if (puVar16 <= puVar14) {
                puVar15 = puVar14 + -(uVar7 * (long)puVar16);
              }
              if (((ulong)puVar16 & (ulong)puVar10) == 0) {
                puVar15 = (undefined1 *)((ulong)puVar14 & (ulong)puVar10);
              }
              *(long **)(lVar9 + (long)puVar15 * 8) = plVar18;
              while (plVar13 = plVar12, plVar12 = (long *)*plVar13, plVar12 != (long *)0x0) {
                puVar14 = (undefined1 *)plVar12[1];
                if (((ulong)puVar16 & (ulong)puVar10) == 0) {
                  puVar14 = (undefined1 *)((ulong)puVar14 & (ulong)puVar10);
                }
                else if (puVar16 <= puVar14) {
                  uVar7 = 0;
                  if (puVar16 != (undefined1 *)0x0) {
                    uVar7 = (ulong)puVar14 / (ulong)puVar16;
                  }
                  puVar14 = puVar14 + -(uVar7 * (long)puVar16);
                }
                if (puVar14 != puVar15) {
                  if (*(long *)(lVar9 + (long)puVar14 * 8) == 0) {
                    *(long **)(lVar9 + (long)puVar14 * 8) = plVar13;
                    puVar15 = puVar14;
                  }
                  else {
                    *plVar13 = *plVar12;
                    func_0x0001087b5c44();
                    lVar9 = extraout_x8_04;
                    puVar10 = extraout_x9_01;
                    plVar12 = extraout_x10;
                    puVar15 = extraout_x11;
                  }
                }
              }
            }
          }
          else if (puVar16 < puVar20) {
            puVar10 = (undefined1 *)
                      (long)((float)*(ulong *)(lVar17 + 0x30) / *(float *)(lVar17 + 0x38));
            if ((puVar20 < (undefined1 *)0x3) || (((ulong)puVar20 & (ulong)(puVar20 + -1)) != 0)) {
              __ZNSt3__112__next_primeEm();
            }
            else {
              func_0x0001087b5998();
            }
            if (puVar16 <= puVar10) {
              puVar16 = puVar10;
            }
            if (puVar16 < puVar20) {
              if (puVar16 != (undefined1 *)0x0) goto LAB_1087aab38;
              FUN_1087b38d8(lVar17 + 0x18,0);
              *(undefined8 *)(lVar17 + 0x20) = 0;
              puVar20 = (undefined1 *)0x0;
            }
            else {
              puVar20 = *(undefined1 **)(lVar17 + 0x20);
            }
          }
          if (((ulong)puVar20 & (ulong)(puVar20 + -1)) == 0) {
            uVar5 = 1;
            unaff_x25 = (undefined1 *)((ulong)((int)puVar20 - 1) & (ulong)puVar11);
          }
          else {
            uVar5 = puVar11 == puVar20;
            unaff_x25 = puVar11;
            if (puVar20 <= puVar11) {
              uVar7 = 0;
              if (puVar20 != (undefined1 *)0x0) {
                uVar7 = (ulong)puVar11 / (ulong)puVar20;
              }
              unaff_x25 = puVar11 + -(uVar7 * (long)puVar20);
            }
          }
        }
        lVar9 = *(long *)(lVar17 + 0x18);
        plVar12 = *(long **)(lVar9 + (long)unaff_x25 * 8);
        if (plVar12 == (long *)0x0) {
          *plVar8 = *plVar18;
          *plVar18 = (long)plVar8;
          *(long **)(lVar9 + (long)unaff_x25 * 8) = plVar18;
          if (*plVar8 != 0) {
            puVar11 = *(undefined1 **)(*plVar8 + 8);
            if (((ulong)puVar20 & (ulong)(puVar20 + -1)) == 0) {
              puVar11 = (undefined1 *)((ulong)puVar11 & (ulong)(puVar20 + -1));
              uVar5 = true;
            }
            else {
              uVar5 = puVar11 == puVar20;
              if (puVar20 <= puVar11) {
                uVar7 = 0;
                if (puVar20 != (undefined1 *)0x0) {
                  uVar7 = (ulong)puVar11 / (ulong)puVar20;
                }
                puVar11 = puVar11 + -(uVar7 * (long)puVar20);
              }
            }
            *(long **)(lVar9 + (long)puVar11 * 8) = plVar8;
          }
        }
        else {
          *plVar8 = *plVar12;
          *plVar12 = (long)plVar8;
        }
        plStack_2098 = (long *)0x0;
        *(long *)(lVar17 + 0x30) = *(long *)(lVar17 + 0x30) + 1;
        func_0x0001087b36cc(&plStack_2098);
LAB_1087aad14:
        func_0x0001087b5ce4();
        func_0x0001087b16e0();
        func_0x000108794594(&lStack_20e0);
        func_0x000107c27f9c(&lStack_20c8);
        func_0x000108794594(&lStack_20c0);
        func_0x000107c289dc(&lStack_20a8);
      }
    }
    FUN_1087acf98(&uStack_2120);
    FUN_1087a8f08(&uStack_2100);
    func_0x000108794568(auStack_2080);
    func_0x000107c33530(uStack_58);
    if ((bool)uVar5) {
      return;
    }
  }
  ___stack_chk_fail();
LAB_1087aad88:
  func_0x000104bd35f4();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1087aad90);
  (*pcVar2)();
}



/* Entry: 1087aae38; end: 1087aaee3;  */

void FUN_1087aae38(void)

{
  undefined8 in_x3;
  undefined1 auStack_68 [24];
  
  func_0x0001087b6894();
  func_0x000108848514(in_x3);
  func_0x0001087b59f0();
  func_0x000107c278b8(auStack_68,in_x3);
  FUN_1087b1944();
  func_0x0001087b5e50();
  return;
}



/* Entry: 1087aaee4; end: 1087ab0c7;  */

void FUN_1087aaee4(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_968 [48];
  undefined1 uStack_938;
  undefined1 auStack_930 [96];
  undefined1 auStack_8d0 [200];
  undefined1 auStack_808 [904];
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined1 auStack_468 [904];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [96];
  undefined1 auStack_70 [48];
  undefined1 auStack_40 [24];
  char cStack_28;
  undefined1 auStack_20 [32];
  
  func_0x000107c335c0();
  FUN_1087aa474(auStack_e0);
  FUN_1087ab0c8(auStack_468,param_3);
  uStack_478 = param_3[0xf];
  uStack_480 = param_3[0xe];
  uStack_470 = param_3[0x10];
  param_3[0xf] = 0;
  param_3[0x10] = 0;
  param_3[0xe] = 0;
  FUN_108639eb0(auStack_808,auStack_468);
  FUN_1086ac390(auStack_8d0,param_3 + 0x2e);
  uVar2 = param_3[0x15];
  FUN_1086858d8(auStack_930,auStack_d0);
  uVar3 = param_3[0x14];
  uVar4 = *param_3;
  puVar1 = auStack_e0;
  FUN_1086a4b90(puVar1,auStack_d0);
  func_0x000104be0ccc(auStack_20,param_3 + 0x21);
  func_0x000104be0ccc(auStack_40,param_3 + 0x25);
  if (cStack_28 == '\x01') {
    FUN_108791694(auStack_70,auStack_20,auStack_40);
    FUN_1087916cc(auStack_968,auStack_70);
    FUN_10866434c(auStack_70);
    func_0x000107c279c4(auStack_40);
    func_0x0001087b6564();
  }
  else {
    func_0x000107c279c4();
    func_0x0001087b6564();
    auStack_968[0] = 0;
    uStack_938 = 0;
  }
  FUN_1087916e8(param_1,&uStack_480,auStack_808,auStack_8d0,uVar2,auStack_930,uVar3,uVar4,
                (int)puVar1);
  FUN_10866432c(auStack_968);
  func_0x000104bee768(auStack_930);
  func_0x000107c2a500(auStack_8d0);
  func_0x000104bee3a8(auStack_808);
  func_0x000107c27914(&uStack_480);
  func_0x000104bee3a8(auStack_468);
  func_0x0001087b61a8();
  return;
}



/* Entry: 1087ab0c8; end: 1087ab49f;  */

void FUN_1087ab0c8(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_5e0 [36];
  undefined4 uStack_5bc;
  undefined1 auStack_5b8 [72];
  undefined1 auStack_570 [48];
  undefined1 auStack_540 [24];
  undefined1 uStack_528;
  undefined1 auStack_520 [56];
  undefined1 uStack_4e8;
  undefined1 auStack_4e0 [32];
  undefined1 auStack_4c0 [24];
  undefined1 auStack_4a8 [24];
  undefined1 auStack_490 [352];
  undefined1 uStack_330;
  undefined1 auStack_328 [32];
  undefined1 auStack_308 [32];
  undefined1 auStack_2e8 [464];
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [64];
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_80;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_50 [40];
  undefined1 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  func_0x000107c335c0();
  func_0x000107c33580();
  uStack_20 = 0;
  uStack_18 = 0;
  uStack_10 = 0;
  if (*(char *)(param_2 + 0x38) == '\x01') {
    func_0x00010528d190(&uStack_20,
                        (*(long *)(unaff_x20 + 0x28) - *(long *)(unaff_x20 + 0x20)) / 0x18);
    lVar1 = *(long *)(unaff_x20 + 0x28);
    for (lVar4 = *(long *)(unaff_x20 + 0x20); lVar4 != lVar1; lVar4 = lVar4 + 0x18) {
      FUN_1086c2e14(&uStack_20,lVar4);
    }
  }
  auStack_50[0] = 0;
  uStack_28 = 0;
  if (*(char *)(unaff_x20 + 600) == '\x01') {
    func_0x000107c27994(&uStack_70,unaff_x20 + 0x240);
    uStack_b0 = uStack_60;
    uStack_a8 = *(undefined8 *)(unaff_x20 + 0x280);
    if (*(char *)(unaff_x20 + 0x288) == '\0') {
      uStack_a8 = 0;
    }
    uStack_a0 = *(undefined8 *)(unaff_x20 + 0x290);
    if (*(char *)(unaff_x20 + 0x298) == '\0') {
      uStack_a0 = 0;
    }
    uStack_b8 = uStack_68;
    uStack_c0 = uStack_70;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_70 = 0;
    func_0x0001087946ac(auStack_50,&uStack_c0);
    func_0x000107c27914(&uStack_c0);
    func_0x000107c27914(&uStack_70);
  }
  uStack_c0 = uStack_c0 & 0xffffffffffffff00;
  uStack_80 = 0;
  if ((*(byte *)(unaff_x20 + 0x180) >> 5 & 1) != 0) {
    func_0x0001087946e0(auStack_100);
    func_0x000108794734(&uStack_c0,auStack_100);
    func_0x000104bee430(auStack_100);
  }
  func_0x000107c27994(auStack_118,unaff_x20 + 8);
  func_0x000104be0ccc(auStack_308,unaff_x20 + 0x48);
  uVar2 = *(undefined4 *)(unaff_x20 + 0x40);
  uVar3 = *(undefined4 *)(unaff_x20 + 0x68);
  func_0x000107c279d4(auStack_328,unaff_x20 + 0x150);
  auStack_490[0] = 0;
  uStack_330 = 0;
  func_0x00010529669c(auStack_2e8,auStack_308,uVar2,uVar3,0,0,auStack_328);
  func_0x000108687044(auStack_4a8,&uStack_20);
  FUN_10867be90(auStack_4c0,unaff_x20 + 0xb8);
  func_0x000104be0ccc(auStack_4e0,unaff_x20 + 0xe8);
  auStack_520[0] = 0;
  uStack_4e8 = 0;
  auStack_540[0] = 0;
  uStack_528 = 0;
  func_0x000107c28bf4(auStack_570,auStack_50);
  func_0x00010528d108(auStack_5b8,&uStack_c0);
  uStack_5bc = *(undefined4 *)(unaff_x20 + 0x220);
  FUN_1088484f4();
  func_0x000107c29eb4(auStack_100,unaff_x20 + 0x170);
  func_0x000104be0ccc(auStack_5e0,unaff_x20 + 0x260);
  func_0x00010528ce14();
  func_0x000107c279c4(auStack_5e0);
  func_0x000104bee410(auStack_5b8);
  func_0x000107c27a1c(auStack_570);
  func_0x000107c27a40(auStack_540);
  func_0x000107c27a2c(auStack_520);
  func_0x000107c279c4(auStack_4e0);
  func_0x000104bee630(auStack_4c0);
  func_0x000104be1594(auStack_4a8);
  func_0x000104bee6b8(auStack_2e8);
  func_0x000104bee6e8(auStack_490);
  func_0x000107c279dc(auStack_328);
  func_0x000107c279c4(auStack_308);
  func_0x000107c27914(auStack_118);
  func_0x000104bee410(&uStack_c0);
  func_0x000107c27a1c(auStack_50);
  func_0x000104be1594(&uStack_20);
  return;
}



/* Entry: 1087ab4a0; end: 1087ab727;  */

void FUN_1087ab4a0(void)

{
  undefined1 *puVar1;
  undefined8 *in_x3;
  long *unaff_x20;
  undefined8 *unaff_x22;
  undefined1 auStack_d00 [672];
  undefined1 auStack_a60 [696];
  undefined1 auStack_7a8 [672];
  undefined1 auStack_508 [72];
  byte bStack_4c0;
  undefined1 auStack_440 [224];
  undefined1 auStack_360 [24];
  undefined1 auStack_348 [24];
  undefined1 auStack_330 [64];
  undefined1 auStack_2f0 [688];
  
  func_0x0001087b6824();
  func_0x0001087b6330();
  func_0x000107c278b8(auStack_348,"retrySendMessage");
  func_0x000107c335f8(auStack_330);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_348);
  func_0x000107c27994(auStack_360,*unaff_x22);
  func_0x0001087b5eec();
  FUN_108862cf0(auStack_a60);
  FUN_1086b9814(auStack_508,auStack_a60);
  func_0x000107c28948(auStack_a60);
  func_0x000107c278b8(auStack_a60,&DAT_10f4bdff0);
  puVar1 = auStack_440;
  func_0x000107c278d0(puVar1,auStack_a60);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a60);
  if (((ulong)puVar1 & 1) == 0) {
    FUN_1087ab728(*(undefined8 *)(unaff_x20[4] + 0xb8),*in_x3,in_x3[1]);
  }
  else if ((bStack_4c0 & 1) == 0) {
    FUN_1087ab85c(*(undefined8 *)(unaff_x20[4] + 0xb8),*in_x3,in_x3[1],4);
  }
  else {
    func_0x0001087b5eec();
    FUN_10886854c(auStack_a60);
    func_0x000107c2986c(auStack_2f0,auStack_a60);
    puVar1 = auStack_2f0;
    FUN_108788f54(puVar1);
    FUN_1087b1acc(auStack_7a8,puVar1);
    func_0x000107c3356c(auStack_2f0);
    func_0x000107c2985c(auStack_a60);
    FUN_108788e34(auStack_d00,auStack_7a8);
    (**(code **)(*unaff_x20 + 0x68))();
    func_0x0001087b60a0();
    func_0x000107c31428(auStack_330);
    func_0x000108788648(auStack_7a8);
  }
  func_0x000107c288e0(auStack_508);
  func_0x000107c27914(auStack_360);
  func_0x000107c31424(auStack_330);
  return;
}



/* Entry: 1087ab728; end: 1087ab85b;  */

void FUN_1087ab728(long param_1,long param_2,long param_3,undefined8 *param_4)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  undefined1 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 **ppuVar8;
  code **ppcVar9;
  code **ppcVar10;
  code **ppcVar11;
  code **ppcVar12;
  code *pcVar13;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  code *extraout_x8_01;
  undefined8 extraout_x8_02;
  code *extraout_x8_03;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  code *unaff_x21;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  code *pcVar17;
  undefined1 auStack_a88 [40];
  undefined1 auStack_a60 [24];
  undefined1 auStack_a48 [40];
  undefined1 auStack_a20 [40];
  undefined8 uStack_9f8;
  undefined8 uStack_9f0;
  undefined8 uStack_9e8;
  long lStack_9e0;
  long lStack_9d8;
  undefined8 uStack_9d0;
  undefined8 *puStack_9c8;
  undefined8 *puStack_9c0;
  undefined1 auStack_900 [224];
  byte bStack_820;
  code *pcStack_818;
  code *pcStack_810;
  undefined1 uStack_588;
  undefined1 auStack_580 [432];
  undefined8 *puStack_3d0;
  undefined8 *puStack_3c8;
  undefined8 *puStack_3c0;
  char cStack_140;
  undefined8 uStack_138;
  code **ppcStack_130;
  long lStack_128;
  undefined4 uStack_120;
  code *pcStack_110;
  undefined **ppuStack_108;
  code **ppcStack_100;
  long lStack_f8;
  undefined4 uStack_f0;
  code **ppcStack_e0;
  code *pcStack_d8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  long lStack_90;
  long lStack_88;
  code *pcStack_80;
  undefined **ppuStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_50;
  undefined8 uStack_48;
  
  func_0x000107c33538();
  ppcVar12 = (code **)0x0;
  uStack_48 = extraout_x8_00;
  if (param_2 != 0) {
    lVar16 = param_1;
    lStack_90 = param_2;
    lStack_88 = param_3;
    if (param_3 != 0) {
      do {
        func_0x000107c33534();
      } while (extraout_w10_01 != 0);
    }
    func_0x000107c28150();
    unaff_x21 = *(code **)(param_1 + 0x10);
    func_0x0001087b6404();
    lVar15 = *(long *)(unaff_x21 + 0x70);
    pcStack_80 = FUN_1087b1a24;
    ppuStack_78 = &PTR_DAT_110a70a58;
    lStack_68 = lStack_88;
    lStack_70 = lStack_90;
    if (lStack_88 != 0) {
      do {
        func_0x000107c33534();
      } while (extraout_w10_02 != 0);
    }
    ppcVar12 = &pcStack_80;
    lStack_50 = lVar16;
    func_0x000107c28154();
    func_0x0001087b59b8(ppuStack_78);
    func_0x0001087b5e08();
    if (lVar15 == 0) {
      ppuStack_78 = *(undefined ***)(param_1 + 0x18);
      pcStack_80 = *(code **)(param_1 + 0x10);
      if (*(long *)(param_1 + 0x18) != 0) {
        do {
          func_0x000107c33534();
        } while (extraout_w10_03 != 0);
      }
      func_0x0001087b5aa8();
      ppcVar12 = &pcStack_80;
      (*extraout_x8_01)();
      func_0x000107c27e74();
    }
    func_0x0001087b5df4();
  }
  func_0x000107c33530(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  ppcVar9 = &pcStack_80;
  func_0x000107c27e74();
  func_0x0001087b5df4();
  func_0x0001087b5a48();
  pcStack_98 = FUN_1087ab85c;
  puStack_a0 = &stack0xfffffffffffffff0;
  func_0x000107c33538();
  ppcVar11 = ppcVar9;
  pcStack_d8 = (code *)extraout_x8_02;
  if (ppcVar12 != (code **)0x0) {
    ppcVar10 = ppcVar9;
    ppcStack_130 = ppcVar12;
    lStack_128 = param_3;
    if (param_3 != 0) {
      do {
        func_0x000107c33534();
      } while (extraout_w10_04 != 0);
    }
    uStack_120 = SUB84(param_4,0);
    func_0x000107c28150();
    unaff_x21 = ppcVar9[2];
    func_0x0001087b6404();
    lVar16 = *(long *)(unaff_x21 + 0x70);
    pcStack_110 = (code *)0x1087b1a6c;
    ppuStack_108 = &PTR_DAT_110a70a70;
    lStack_f8 = lStack_128;
    ppcStack_100 = ppcStack_130;
    if (lStack_128 != 0) {
      do {
        func_0x000107c33534();
      } while (extraout_w10_05 != 0);
    }
    uStack_f0 = uStack_120;
    ppcVar11 = (code **)(unaff_x21 + 0x48);
    ppcStack_e0 = ppcVar10;
    func_0x000107c28154(ppcVar11,&pcStack_110);
    func_0x0001087b59b8(ppuStack_108);
    func_0x0001087b5e08();
    if (lVar16 == 0) {
      ppuStack_108 = (undefined **)ppcVar9[3];
      pcStack_110 = ppcVar9[2];
      if (ppcVar9[3] != (code *)0x0) {
        do {
          func_0x000107c33534();
        } while (extraout_w10_06 != 0);
      }
      func_0x0001087b5aa8();
      (*extraout_x8_03)();
      ppcVar11 = &pcStack_110;
      func_0x000107c27e74();
    }
    func_0x0001087b5df4();
  }
  func_0x000107c33530(pcStack_d8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  ppcVar12 = &pcStack_110;
  func_0x000107c27e74();
  func_0x0001087b5df4();
  pcVar17 = FUN_1087ab99c;
  func_0x0001087b5a48();
  pcVar13 = ppcVar12[0x18];
  func_0x0001087967ac();
  ppcStack_e0 = (code **)&puStack_a0;
  pcStack_d8 = pcVar17;
  func_0x00010879630c();
  func_0x000108796038();
  lStack_9e0 = 0;
  lStack_9d8 = 0;
  uStack_9d0 = 0;
  uStack_9f8 = 0;
  uStack_9f0 = 0;
  uStack_9e8 = 0;
  uStack_138 = extraout_x8;
  FUN_108862cf0(&puStack_3d0,**(undefined8 **)(pcVar13 + 0x10));
  func_0x000107c28998(&puStack_9c8,&puStack_3d0);
  func_0x000107c28948(&puStack_3d0);
  if ((bStack_820 & 1) == 0) {
LAB_10878fb38:
    bVar2 = false;
  }
  else {
    func_0x000107c278b8(&pcStack_818,&DAT_10f4bdfd4);
    puVar4 = auStack_900;
    func_0x000107c278d0(puVar4,&pcStack_818);
    func_0x0001087965fc();
    if ((int)puVar4 == 0) {
      func_0x0001087962cc();
      FUN_10886929c(&pcStack_818);
      FUN_1086c2d80(&puStack_3d0,&pcStack_818);
      FUN_1086d4da0(&pcStack_818);
      if (cStack_140 == '\x01') {
        FUN_1086d5190(&pcStack_818,&puStack_3d0);
        func_0x000107c28970(auStack_580,&puStack_9c8);
        func_0x0001087961fc();
      }
      else {
        pcStack_818 = (code *)((ulong)pcStack_818 & 0xffffffffffffff00);
        uStack_588 = 0;
        func_0x000107c28a9c(auStack_580,&puStack_9c8);
        func_0x0001087961fc();
      }
      func_0x000108796474();
      FUN_1086cf6a4(&puStack_3d0);
      goto LAB_10878fb38;
    }
    pcStack_818 = (code *)((ulong)pcStack_818 & 0xffffffffffffff00);
    uStack_588 = 0;
    func_0x000107c28970(auStack_580,&puStack_9c8);
    func_0x0001087961fc();
    func_0x000108796474();
    bVar2 = true;
  }
  func_0x000107c288dc(&puStack_9c8);
  lVar16 = lStack_9e0;
  if (bVar2) {
    lVar15 = *(long *)(ppcVar11[2] + 0x30);
    func_0x000107c287d8();
    lVar15 = lVar15 - *(long *)(lVar16 + 0x378);
    uVar3 = lVar15 == 5000;
    if (lVar15 < 0x1389) {
      plVar5 = *(long **)(ppcVar11[2] + 0x90);
      (**(code **)(*plVar5 + 0x18))(plVar5,unaff_x21,param_3,5,param_4);
      func_0x00010879677c();
      FUN_10878f7cc(&puStack_3d0,&pcStack_818,1);
      func_0x0001087962ac();
      plVar5 = *(long **)(ppcVar11[2] + 0xa0);
      func_0x0001087965e0(auStack_a20);
      func_0x000108796540(*(undefined8 *)(*plVar5 + 0x60));
      puVar4 = auStack_a20;
    }
    else {
      FUN_1087900b8(ppcVar11[2] + 0x10,param_4,4);
      func_0x00010879677c();
      func_0x0001087962a0(&puStack_9c8);
      ppuVar8 = &puStack_9c8;
      func_0x000108796588(ppuVar8,7);
      FUN_108791a34(&puStack_3d0,ppuVar8);
      func_0x0001087965d8();
      func_0x0001087962ac();
      plVar5 = *(long **)(ppcVar11[2] + 0xa0);
      func_0x0001087965e0(auStack_a48);
      func_0x000108796540(*(undefined8 *)(*plVar5 + 0x60));
      puVar4 = auStack_a48;
    }
LAB_10878fe18:
    FUN_108788618(puVar4);
    FUN_108788618(&puStack_3d0);
LAB_10878fe24:
    func_0x000108791c84(&uStack_9f8);
    func_0x000108791d1c(&lStack_9e0);
    func_0x000108795f50(uStack_138);
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    uVar3 = lStack_9e0 == lStack_9d8;
    if ((bool)uVar3) {
      FUN_1087900b8(ppcVar11[2] + 0x10,param_4,7);
      func_0x00010879677c();
      func_0x0001087962a0(&puStack_9c8);
      ppuVar8 = &puStack_9c8;
      func_0x000108796588(ppuVar8,2);
      FUN_108791a34(&puStack_3d0,ppuVar8);
      func_0x0001087965d8();
      func_0x0001087962ac();
      plVar5 = *(long **)(ppcVar11[2] + 0xa0);
      func_0x0001087965e0(auStack_a88);
      func_0x000108796540(*(undefined8 *)(*plVar5 + 0x60));
      puVar4 = auStack_a88;
      goto LAB_10878fe18;
    }
    pcStack_818 = *ppcVar11;
    pcVar13 = ppcVar11[1];
    if (pcVar13 != (code *)0x0) {
      __ZNSt3__119__shared_weak_count4lockEv();
      pcStack_810 = pcVar13;
      if (pcVar13 == (code *)0x0) goto LAB_10878fe54;
      puStack_3c8 = (undefined8 *)0x1;
      puVar6 = (undefined8 *)0x498;
      __Znwm();
      plVar5 = puVar6 + 1;
      *plVar5 = 0;
      puVar6[2] = 0;
      puVar14 = puVar6 + 3;
      *puVar14 = &PTR_FUN_110a6fc40;
      *puVar6 = &PTR_FUN_110a6fbf0;
      uVar7 = *param_4;
      puVar6[5] = param_4[1];
      puVar6[4] = uVar7;
      puStack_3c0 = puVar6;
      if (param_4[1] != 0) {
        do {
          func_0x000108796160();
        } while (extraout_w10 != 0);
      }
      func_0x000107c27994(puVar6 + 6,unaff_x21);
      FUN_108791b70(puVar6 + 9,lVar16);
      puVar6[0x91] = pcStack_818;
      puVar6[0x92] = pcStack_810;
      if (pcStack_810 != (code *)0x0) {
        do {
          func_0x000108796160();
        } while (extraout_w10_00 != 0);
      }
      puStack_3c0 = (undefined8 *)0x0;
      puStack_9c8 = puVar14;
      puStack_9c0 = puVar6;
      FUN_108794d40(&puStack_3d0);
      func_0x000107c298fc(&pcStack_818);
      uVar3 = *(char *)(lStack_9e0 + 0x290) == '\x01';
      if ((bool)uVar3) {
        uVar7 = *(undefined8 *)(ppcVar11[2] + 0x60);
        FUN_108790114(uVar7,lStack_9e0 + 0x70);
        if ((int)uVar7 == 0) goto LAB_10878fd9c;
        uVar7 = *(undefined8 *)(ppcVar11[2] + 0x60);
        func_0x000107c27994(&pcStack_818,lStack_9e0 + 0x70);
        func_0x00010868c9c4(auStack_a60,&pcStack_818,1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = *plVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        puStack_3d0 = puVar14;
        puStack_3c8 = puVar6;
        func_0x000108790134(uVar7,auStack_a60,&puStack_3d0,1);
        func_0x000104be3970(&puStack_3d0);
        func_0x000107c27a04(auStack_a60);
        func_0x000107c27914(&pcStack_818);
      }
      else {
LAB_10878fd9c:
        FUN_108791d40(puVar14,0);
      }
      FUN_1087901e4(&puStack_9c8);
      goto LAB_10878fe24;
    }
  }
  pcStack_810 = (code *)0x0;
LAB_10878fe54:
  func_0x00010527822c();
                    /* WARNING: Does not return */
  pcVar13 = (code *)SoftwareBreakpoint(1,0x10878fe5c);
  (*pcVar13)();
}



/* Entry: 1087ab85c; end: 1087ab99b;  */

void FUN_1087ab85c(ulong *param_1,long param_2,long param_3,undefined8 *param_4)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  undefined1 *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 **ppuVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong uVar12;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  code *extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  ulong unaff_x21;
  undefined8 *puVar13;
  long lVar14;
  code *pcVar15;
  undefined1 auStack_9f8 [40];
  undefined1 auStack_9d0 [24];
  undefined1 auStack_9b8 [40];
  undefined1 auStack_990 [40];
  undefined8 uStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  long lStack_950;
  long lStack_948;
  undefined8 uStack_940;
  undefined8 *puStack_938;
  undefined8 *puStack_930;
  undefined1 auStack_870 [224];
  byte bStack_790;
  ulong uStack_788;
  ulong uStack_780;
  undefined1 uStack_4f8;
  undefined1 auStack_4f0 [432];
  undefined8 *puStack_340;
  undefined8 *puStack_338;
  undefined8 *puStack_330;
  char cStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined4 uStack_90;
  ulong uStack_80;
  undefined **ppuStack_78;
  long lStack_70;
  long lStack_68;
  undefined4 uStack_60;
  ulong *puStack_50;
  code *pcStack_48;
  
  func_0x000107c33538();
  puVar11 = param_1;
  pcStack_48 = (code *)extraout_x8_00;
  if (param_2 != 0) {
    puVar10 = param_1;
    lStack_a0 = param_2;
    lStack_98 = param_3;
    if (param_3 != 0) {
      do {
        func_0x000107c33534();
      } while (extraout_w10_01 != 0);
    }
    uStack_90 = SUB84(param_4,0);
    func_0x000107c28150();
    unaff_x21 = param_1[2];
    func_0x0001087b6404();
    lVar14 = *(long *)(unaff_x21 + 0x70);
    uStack_80 = 0x1087b1a6c;
    ppuStack_78 = &PTR_DAT_110a70a70;
    lStack_68 = lStack_98;
    lStack_70 = lStack_a0;
    if (lStack_98 != 0) {
      do {
        func_0x000107c33534();
      } while (extraout_w10_02 != 0);
    }
    uStack_60 = uStack_90;
    puVar11 = (ulong *)(unaff_x21 + 0x48);
    puStack_50 = puVar10;
    func_0x000107c28154(puVar11,&uStack_80);
    func_0x0001087b59b8(ppuStack_78);
    func_0x0001087b5e08();
    if (lVar14 == 0) {
      ppuStack_78 = (undefined **)param_1[3];
      uStack_80 = param_1[2];
      if (param_1[3] != 0) {
        do {
          func_0x000107c33534();
        } while (extraout_w10_03 != 0);
      }
      func_0x0001087b5aa8();
      (*extraout_x8_01)();
      puVar11 = &uStack_80;
      func_0x000107c27e74();
    }
    func_0x0001087b5df4();
  }
  func_0x000107c33530(pcStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  puVar10 = &uStack_80;
  func_0x000107c27e74();
  func_0x0001087b5df4();
  pcVar15 = FUN_1087ab99c;
  func_0x0001087b5a48();
  uVar12 = puVar10[0x18];
  func_0x0001087967ac();
  puStack_50 = (ulong *)&stack0xfffffffffffffff0;
  pcStack_48 = pcVar15;
  func_0x00010879630c();
  func_0x000108796038();
  lStack_950 = 0;
  lStack_948 = 0;
  uStack_940 = 0;
  uStack_968 = 0;
  uStack_960 = 0;
  uStack_958 = 0;
  uStack_a8 = extraout_x8;
  FUN_108862cf0(&puStack_340,**(undefined8 **)(uVar12 + 0x10));
  func_0x000107c28998(&puStack_938,&puStack_340);
  func_0x000107c28948(&puStack_340);
  if ((bStack_790 & 1) == 0) {
LAB_10878fb38:
    bVar2 = false;
  }
  else {
    func_0x000107c278b8(&uStack_788,&DAT_10f4bdfd4);
    puVar4 = auStack_870;
    func_0x000107c278d0(puVar4,&uStack_788);
    func_0x0001087965fc();
    if ((int)puVar4 == 0) {
      func_0x0001087962cc();
      FUN_10886929c(&uStack_788);
      FUN_1086c2d80(&puStack_340,&uStack_788);
      FUN_1086d4da0(&uStack_788);
      if (cStack_b0 == '\x01') {
        FUN_1086d5190(&uStack_788,&puStack_340);
        func_0x000107c28970(auStack_4f0,&puStack_938);
        func_0x0001087961fc();
      }
      else {
        uStack_788 = uStack_788 & 0xffffffffffffff00;
        uStack_4f8 = 0;
        func_0x000107c28a9c(auStack_4f0,&puStack_938);
        func_0x0001087961fc();
      }
      func_0x000108796474();
      FUN_1086cf6a4(&puStack_340);
      goto LAB_10878fb38;
    }
    uStack_788 = uStack_788 & 0xffffffffffffff00;
    uStack_4f8 = 0;
    func_0x000107c28970(auStack_4f0,&puStack_938);
    func_0x0001087961fc();
    func_0x000108796474();
    bVar2 = true;
  }
  func_0x000107c288dc(&puStack_938);
  lVar14 = lStack_950;
  if (bVar2) {
    lVar5 = *(long *)(puVar11[2] + 0x30);
    func_0x000107c287d8();
    lVar5 = lVar5 - *(long *)(lVar14 + 0x378);
    uVar3 = lVar5 == 5000;
    if (lVar5 < 0x1389) {
      plVar6 = *(long **)(puVar11[2] + 0x90);
      (**(code **)(*plVar6 + 0x18))(plVar6,unaff_x21,param_3,5,param_4);
      func_0x00010879677c();
      FUN_10878f7cc(&puStack_340,&uStack_788,1);
      func_0x0001087962ac();
      plVar6 = *(long **)(puVar11[2] + 0xa0);
      func_0x0001087965e0(auStack_990);
      func_0x000108796540(*(undefined8 *)(*plVar6 + 0x60));
      puVar4 = auStack_990;
    }
    else {
      FUN_1087900b8(puVar11[2] + 0x10,param_4,4);
      func_0x00010879677c();
      func_0x0001087962a0(&puStack_938);
      ppuVar9 = &puStack_938;
      func_0x000108796588(ppuVar9,7);
      FUN_108791a34(&puStack_340,ppuVar9);
      func_0x0001087965d8();
      func_0x0001087962ac();
      plVar6 = *(long **)(puVar11[2] + 0xa0);
      func_0x0001087965e0(auStack_9b8);
      func_0x000108796540(*(undefined8 *)(*plVar6 + 0x60));
      puVar4 = auStack_9b8;
    }
LAB_10878fe18:
    FUN_108788618(puVar4);
    FUN_108788618(&puStack_340);
LAB_10878fe24:
    func_0x000108791c84(&uStack_968);
    func_0x000108791d1c(&lStack_950);
    func_0x000108795f50(uStack_a8);
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    uVar3 = lStack_950 == lStack_948;
    if ((bool)uVar3) {
      FUN_1087900b8(puVar11[2] + 0x10,param_4,7);
      func_0x00010879677c();
      func_0x0001087962a0(&puStack_938);
      ppuVar9 = &puStack_938;
      func_0x000108796588(ppuVar9,2);
      FUN_108791a34(&puStack_340,ppuVar9);
      func_0x0001087965d8();
      func_0x0001087962ac();
      plVar6 = *(long **)(puVar11[2] + 0xa0);
      func_0x0001087965e0(auStack_9f8);
      func_0x000108796540(*(undefined8 *)(*plVar6 + 0x60));
      puVar4 = auStack_9f8;
      goto LAB_10878fe18;
    }
    uStack_788 = *puVar11;
    uVar12 = puVar11[1];
    if (uVar12 != 0) {
      __ZNSt3__119__shared_weak_count4lockEv();
      uStack_780 = uVar12;
      if (uVar12 == 0) goto LAB_10878fe54;
      puStack_338 = (undefined8 *)0x1;
      puVar7 = (undefined8 *)0x498;
      __Znwm();
      plVar6 = puVar7 + 1;
      *plVar6 = 0;
      puVar7[2] = 0;
      puVar13 = puVar7 + 3;
      *puVar13 = &PTR_FUN_110a6fc40;
      *puVar7 = &PTR_FUN_110a6fbf0;
      uVar8 = *param_4;
      puVar7[5] = param_4[1];
      puVar7[4] = uVar8;
      puStack_330 = puVar7;
      if (param_4[1] != 0) {
        do {
          func_0x000108796160();
        } while (extraout_w10 != 0);
      }
      func_0x000107c27994(puVar7 + 6,unaff_x21);
      FUN_108791b70(puVar7 + 9,lVar14);
      puVar7[0x91] = uStack_788;
      puVar7[0x92] = uStack_780;
      if (uStack_780 != 0) {
        do {
          func_0x000108796160();
        } while (extraout_w10_00 != 0);
      }
      puStack_330 = (undefined8 *)0x0;
      puStack_938 = puVar13;
      puStack_930 = puVar7;
      FUN_108794d40(&puStack_340);
      func_0x000107c298fc(&uStack_788);
      uVar3 = *(char *)(lStack_950 + 0x290) == '\x01';
      if ((bool)uVar3) {
        uVar8 = *(undefined8 *)(puVar11[2] + 0x60);
        FUN_108790114(uVar8,lStack_950 + 0x70);
        if ((int)uVar8 == 0) goto LAB_10878fd9c;
        uVar8 = *(undefined8 *)(puVar11[2] + 0x60);
        func_0x000107c27994(&uStack_788,lStack_950 + 0x70);
        func_0x00010868c9c4(auStack_9d0,&uStack_788,1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar2) {
            *plVar6 = *plVar6 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        puStack_340 = puVar13;
        puStack_338 = puVar7;
        func_0x000108790134(uVar8,auStack_9d0,&puStack_340,1);
        func_0x000104be3970(&puStack_340);
        func_0x000107c27a04(auStack_9d0);
        func_0x000107c27914(&uStack_788);
      }
      else {
LAB_10878fd9c:
        FUN_108791d40(puVar13,0);
      }
      FUN_1087901e4(&puStack_938);
      goto LAB_10878fe24;
    }
  }
  uStack_780 = 0;
LAB_10878fe54:
  func_0x00010527822c();
                    /* WARNING: Does not return */
  pcVar15 = (code *)SoftwareBreakpoint(1,0x10878fe5c);
  (*pcVar15)();
}



/* Entry: 1087ab99c; end: 1087ab9ab;  */

void FUN_1087ab99c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined1 uVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 **ppuVar10;
  long lVar11;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  ulong *unaff_x19;
  long *plVar12;
  undefined8 *puVar13;
  undefined1 auStack_958 [40];
  undefined1 auStack_930 [24];
  undefined1 auStack_918 [40];
  undefined1 auStack_8f0 [40];
  undefined8 uStack_8c8;
  undefined8 uStack_8c0;
  undefined8 uStack_8b8;
  long lStack_8b0;
  long lStack_8a8;
  undefined8 uStack_8a0;
  undefined8 *puStack_898;
  undefined8 *puStack_890;
  undefined1 auStack_7d0 [224];
  byte bStack_6f0;
  ulong uStack_6e8;
  ulong uStack_6e0;
  undefined1 uStack_458;
  undefined1 auStack_450 [432];
  undefined8 *puStack_2a0;
  undefined8 *puStack_298;
  undefined8 *puStack_290;
  char cStack_10;
  undefined8 uStack_8;
  
  lVar11 = *(long *)(param_1 + 0xc0);
  func_0x0001087967ac();
  func_0x00010879630c();
  func_0x000108796038();
  lStack_8b0 = 0;
  lStack_8a8 = 0;
  uStack_8a0 = 0;
  uStack_8c8 = 0;
  uStack_8c0 = 0;
  uStack_8b8 = 0;
  uStack_8 = extraout_x8;
  FUN_108862cf0(&puStack_2a0,**(undefined8 **)(lVar11 + 0x10));
  func_0x000107c28998(&puStack_898,&puStack_2a0);
  func_0x000107c28948(&puStack_2a0);
  if ((bStack_6f0 & 1) == 0) {
LAB_10878fb38:
    bVar2 = false;
  }
  else {
    func_0x000107c278b8(&uStack_6e8,&DAT_10f4bdfd4);
    puVar5 = auStack_7d0;
    func_0x000107c278d0(puVar5,&uStack_6e8);
    func_0x0001087965fc();
    if ((int)puVar5 == 0) {
      func_0x0001087962cc();
      FUN_10886929c(&uStack_6e8);
      FUN_1086c2d80(&puStack_2a0,&uStack_6e8);
      FUN_1086d4da0(&uStack_6e8);
      if (cStack_10 == '\x01') {
        FUN_1086d5190(&uStack_6e8,&puStack_2a0);
        func_0x000107c28970(auStack_450,&puStack_898);
        func_0x0001087961fc();
      }
      else {
        uStack_6e8 = uStack_6e8 & 0xffffffffffffff00;
        uStack_458 = 0;
        func_0x000107c28a9c(auStack_450,&puStack_898);
        func_0x0001087961fc();
      }
      func_0x000108796474();
      FUN_1086cf6a4(&puStack_2a0);
      goto LAB_10878fb38;
    }
    uStack_6e8 = uStack_6e8 & 0xffffffffffffff00;
    uStack_458 = 0;
    func_0x000107c28970(auStack_450,&puStack_898);
    func_0x0001087961fc();
    func_0x000108796474();
    bVar2 = true;
  }
  func_0x000107c288dc(&puStack_898);
  lVar11 = lStack_8b0;
  if (bVar2) {
    lVar6 = *(long *)(unaff_x19[2] + 0x30);
    func_0x000107c287d8();
    lVar6 = lVar6 - *(long *)(lVar11 + 0x378);
    uVar4 = lVar6 == 5000;
    if (lVar6 < 0x1389) {
      (**(code **)(**(long **)(unaff_x19[2] + 0x90) + 0x18))();
      func_0x00010879677c();
      FUN_10878f7cc(&puStack_2a0,&uStack_6e8,1);
      func_0x0001087962ac();
      plVar12 = *(long **)(unaff_x19[2] + 0xa0);
      func_0x0001087965e0(auStack_8f0);
      func_0x000108796540(*(undefined8 *)(*plVar12 + 0x60));
      puVar5 = auStack_8f0;
    }
    else {
      FUN_1087900b8(unaff_x19[2] + 0x10,param_4,4);
      func_0x00010879677c();
      func_0x0001087962a0(&puStack_898);
      ppuVar10 = &puStack_898;
      func_0x000108796588(ppuVar10,7);
      FUN_108791a34(&puStack_2a0,ppuVar10);
      func_0x0001087965d8();
      func_0x0001087962ac();
      plVar12 = *(long **)(unaff_x19[2] + 0xa0);
      func_0x0001087965e0(auStack_918);
      func_0x000108796540(*(undefined8 *)(*plVar12 + 0x60));
      puVar5 = auStack_918;
    }
LAB_10878fe18:
    FUN_108788618(puVar5);
    FUN_108788618(&puStack_2a0);
LAB_10878fe24:
    func_0x000108791c84(&uStack_8c8);
    func_0x000108791d1c(&lStack_8b0);
    func_0x000108795f50(uStack_8);
    if ((bool)uVar4) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    uVar4 = lStack_8b0 == lStack_8a8;
    if ((bool)uVar4) {
      FUN_1087900b8(unaff_x19[2] + 0x10,param_4,7);
      func_0x00010879677c();
      func_0x0001087962a0(&puStack_898);
      ppuVar10 = &puStack_898;
      func_0x000108796588(ppuVar10,2);
      FUN_108791a34(&puStack_2a0,ppuVar10);
      func_0x0001087965d8();
      func_0x0001087962ac();
      plVar12 = *(long **)(unaff_x19[2] + 0xa0);
      func_0x0001087965e0(auStack_958);
      func_0x000108796540(*(undefined8 *)(*plVar12 + 0x60));
      puVar5 = auStack_958;
      goto LAB_10878fe18;
    }
    uStack_6e8 = *unaff_x19;
    uVar7 = unaff_x19[1];
    if (uVar7 != 0) {
      __ZNSt3__119__shared_weak_count4lockEv();
      uStack_6e0 = uVar7;
      if (uVar7 == 0) goto LAB_10878fe54;
      puStack_298 = (undefined8 *)0x1;
      puVar8 = (undefined8 *)0x498;
      __Znwm();
      plVar12 = puVar8 + 1;
      *plVar12 = 0;
      puVar8[2] = 0;
      puVar13 = puVar8 + 3;
      *puVar13 = &PTR_FUN_110a6fc40;
      *puVar8 = &PTR_FUN_110a6fbf0;
      uVar9 = *param_4;
      puVar8[5] = param_4[1];
      puVar8[4] = uVar9;
      puStack_290 = puVar8;
      if (param_4[1] != 0) {
        do {
          func_0x000108796160();
        } while (extraout_w10 != 0);
      }
      func_0x000107c27994(puVar8 + 6);
      FUN_108791b70(puVar8 + 9,lVar11);
      puVar8[0x91] = uStack_6e8;
      puVar8[0x92] = uStack_6e0;
      if (uStack_6e0 != 0) {
        do {
          func_0x000108796160();
        } while (extraout_w10_00 != 0);
      }
      puStack_290 = (undefined8 *)0x0;
      puStack_898 = puVar13;
      puStack_890 = puVar8;
      FUN_108794d40(&puStack_2a0);
      func_0x000107c298fc(&uStack_6e8);
      uVar4 = *(char *)(lStack_8b0 + 0x290) == '\x01';
      if ((bool)uVar4) {
        uVar9 = *(undefined8 *)(unaff_x19[2] + 0x60);
        FUN_108790114(uVar9,lStack_8b0 + 0x70);
        if ((int)uVar9 == 0) goto LAB_10878fd9c;
        uVar9 = *(undefined8 *)(unaff_x19[2] + 0x60);
        func_0x000107c27994(&uStack_6e8,lStack_8b0 + 0x70);
        func_0x00010868c9c4(auStack_930,&uStack_6e8,1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar2) {
            *plVar12 = *plVar12 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        puStack_2a0 = puVar13;
        puStack_298 = puVar8;
        func_0x000108790134(uVar9,auStack_930,&puStack_2a0,1);
        func_0x000104be3970(&puStack_2a0);
        func_0x000107c27a04(auStack_930);
        func_0x000107c27914(&uStack_6e8);
      }
      else {
LAB_10878fd9c:
        FUN_108791d40(puVar13,0);
      }
      FUN_1087901e4(&puStack_898);
      goto LAB_10878fe24;
    }
  }
  uStack_6e0 = 0;
LAB_10878fe54:
  func_0x00010527822c();
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10878fe5c);
  (*pcVar3)();
}



/* Entry: 1087ab9ac; end: 1087abd47;  */

void FUN_1087ab9ac(void)

{
  long *plVar1;
  long extraout_x8;
  long *unaff_x19;
  undefined8 uVar2;
  undefined8 uStack_b50;
  undefined8 uStack_b48;
  undefined8 uStack_b40;
  undefined8 uStack_b38;
  long lStack_b30;
  undefined1 auStack_b28 [24];
  undefined1 auStack_b10 [32];
  undefined4 uStack_af0;
  undefined1 auStack_ae8 [32];
  undefined4 uStack_ac8;
  undefined1 auStack_ac0 [24];
  undefined1 auStack_aa8 [24];
  long lStack_a90;
  long lStack_a88;
  long lStack_a80;
  undefined1 auStack_a78 [24];
  undefined1 uStack_a60;
  long lStack_a58;
  undefined1 uStack_a50;
  undefined1 auStack_a48 [32];
  undefined1 auStack_a28 [32];
  undefined1 auStack_a08 [32];
  undefined1 uStack_9e8;
  undefined1 auStack_9e0 [32];
  undefined1 auStack_9c0 [200];
  undefined1 uStack_8f8;
  undefined1 auStack_8f0 [32];
  undefined1 auStack_8d0 [32];
  long lStack_8b0;
  undefined1 uStack_8a8;
  long lStack_8a0;
  undefined1 uStack_898;
  long alStack_890 [83];
  byte bStack_5f8;
  long alStack_5f0 [83];
  byte bStack_358;
  undefined1 auStack_350 [680];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [64];
  
  func_0x000107c33580();
  func_0x0001087b6330();
  uVar2 = *(undefined8 *)(extraout_x8 + 0x18);
  func_0x000107c278b8(auStack_a8,&UNK_10f4baf06);
  func_0x000107c31420(auStack_90,uVar2,auStack_a8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a8);
  func_0x000107c33578();
  FUN_10886986c(auStack_350);
  FUN_1086d5044(alStack_5f0,auStack_350);
  _bzero(alStack_890,0x2a0);
  while ((((bStack_358 & 1) != 0 || ((bStack_5f8 & 1) != 0)) && (alStack_5f0[0] != alStack_890[0])))
  {
    plVar1 = alStack_5f0;
    FUN_1086d505c();
    if ((int)plVar1[0x11] == 3) {
      lStack_b30 = *plVar1;
      func_0x000107c27994(auStack_b28,plVar1 + 1);
      func_0x000107c28aa0(auStack_b10,plVar1 + 4);
      uStack_af0 = (undefined4)plVar1[8];
      func_0x000104be0ccc(auStack_ae8,plVar1 + 9);
      uStack_ac8 = (undefined4)plVar1[0xd];
      func_0x0001087b6398(auStack_ac0);
      func_0x000107c278b8(auStack_aa8,&DAT_10f4bdff0);
      lStack_a88 = plVar1[0x13];
      lStack_a90 = plVar1[0x12];
      lStack_a80 = plVar1[0x14];
      FUN_10867be90(auStack_a78,plVar1 + 0x15);
      uStack_a60 = (undefined1)plVar1[0x18];
      lStack_a58 = plVar1[0x19];
      uStack_a50 = (undefined1)plVar1[0x1a];
      func_0x000104be0ccc(auStack_a48,plVar1 + 0x1b);
      func_0x000104be0ccc(auStack_a28,plVar1 + 0x1f);
      func_0x000104be0ccc(auStack_a08,plVar1 + 0x23);
      uStack_9e8 = (undefined1)plVar1[0x27];
      func_0x000107c279d4(auStack_9e0,plVar1 + 0x28);
      FUN_108656428(auStack_9c0,plVar1 + 0x2c);
      uStack_8f8 = (undefined1)plVar1[0x45];
      func_0x000107c279d4(auStack_8f0,plVar1 + 0x46);
      func_0x000104be0ccc(auStack_8d0,plVar1 + 0x4a);
      lStack_8b0 = plVar1[0x4e];
      uStack_8a8 = (undefined1)plVar1[0x4f];
      lStack_8a0 = plVar1[0x50];
      uStack_898 = (undefined1)plVar1[0x51];
      FUN_1087abd48(&uStack_b50);
      uStack_b38 = uStack_b48;
      uStack_b40 = uStack_b50;
      uStack_b50 = 0;
      uStack_b48 = 0;
      (**(code **)(*unaff_x19 + 0x68))();
      func_0x000104be36f0(&uStack_b40);
      FUN_1087b1ce8(&uStack_b50);
      func_0x000108788648(&lStack_b30);
    }
    FUN_10879579c(alStack_5f0);
  }
  func_0x0001087b6130(alStack_890);
  func_0x0001087b6130(alStack_5f0);
  FUN_1086d4da0(auStack_350);
  func_0x000107c31428(auStack_90);
  func_0x000107c31424(auStack_90);
  return;
}



/* Entry: 1087abd48; end: 1087abd87;  */

void FUN_1087abd48(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  func_0x000107c335bc();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110a70a98;
  param_1[1] = puVar1;
  puVar1[3] = &PTR_DAT_110a70ae8;
  *param_1 = puVar1 + 3;
  return;
}



/* Entry: 1087abd88; end: 1087abf93;  */

void FUN_1087abd88(undefined1 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  undefined8 extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  int extraout_w10;
  int extraout_w10_00;
  undefined1 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long lVar6;
  undefined1 *unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar7;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined1 **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    (*(code *)PTR____chkstk_darwin_11034bd40)(param_1);
    puVar1 = (undefined1 *)((long)register0x00000008 + -0x1550);
    func_0x0001087b5c04();
    func_0x000107c33538();
    *(undefined8 *)((long)register0x00000008 + -0x48) = extraout_x8;
    func_0x0001087b6818();
    FUN_108860310((undefined1 *)((long)register0x00000008 + -0xac8));
    func_0x000107c298f0((undefined1 *)((long)register0x00000008 + -0x1550),
                        (undefined1 *)((long)register0x00000008 + -0xac8));
    FUN_108794924((undefined1 *)((long)register0x00000008 + -0x1550));
    func_0x0001087b1d0c((undefined1 *)((long)register0x00000008 + -0xb18),puVar1);
    func_0x000107c335b4((undefined1 *)((long)register0x00000008 + -0x1550));
    func_0x000107c298ec((undefined1 *)((long)register0x00000008 + -0xac8));
    *(undefined4 *)((long)register0x00000008 + -0xaf0) = 0;
    *(undefined4 *)((long)register0x00000008 + -0xad8) = 1;
    func_0x0001087b5eec();
    FUN_10886024c();
    lVar6 = unaff_x20 + 0x70;
    FUN_1087b1d48(lVar6,(undefined1 *)((long)register0x00000008 + -0xb18));
    if (lVar6 != 0) {
      FUN_1087b1e08(unaff_x20 + 0x70);
    }
    uVar2 = *(undefined8 *)(*(long *)(unaff_x20 + 0x20) + 0x28);
    func_0x0001087b5aa8();
    (*extraout_x8_00)();
    *(undefined8 *)(unaff_x21 + 0xa8) = uVar2;
    func_0x0001087b5eec();
    FUN_10886a704();
    func_0x0001087b5eec();
    FUN_10879d0a0((undefined1 *)((long)register0x00000008 + -0xb78));
    lVar6 = *(long *)(unaff_x20 + 0x20);
    FUN_1087aaee4((undefined1 *)((long)register0x00000008 + -0x1550),unaff_x20,unaff_x21,
                  (undefined1 *)((long)register0x00000008 + -0xb78));
    FUN_10878f704((undefined1 *)((long)register0x00000008 + -0xac8),lVar6 + 0x28,
                  (undefined1 *)((long)register0x00000008 + -0xb18),
                  (undefined1 *)((long)register0x00000008 + -0x1550));
    func_0x0001086a931c((undefined1 *)((long)register0x00000008 + -0x1550));
    FUN_1087aa674(unaff_x20,(undefined1 *)((long)register0x00000008 + -0xac8));
    func_0x0001087b63f8(*(undefined8 *)(unaff_x20 + 0x30));
    puVar1 = (undefined1 *)((long)register0x00000008 + -0x998);
    FUN_1087abf94(unaff_x20,(undefined1 *)((long)register0x00000008 + -0xb18),puVar1);
    func_0x0001087b61e4();
    func_0x0001087b60a8();
    func_0x000108794568((undefined1 *)((long)register0x00000008 + -0xac8));
    func_0x000104bee768((undefined1 *)((long)register0x00000008 + -0xb78));
    puVar3 = (undefined1 *)((long)register0x00000008 + -0xb18);
    func_0x000107c27914();
    func_0x000107c33530(*(undefined8 *)((long)register0x00000008 + -0x48));
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x000108794568((undefined1 *)((long)register0x00000008 + -0xac8));
    func_0x000104bee768((undefined1 *)((long)register0x00000008 + -0xb78));
    puVar4 = (undefined1 *)((long)register0x00000008 + -0xb18);
    func_0x000107c27914();
    puVar5 = param_3;
    func_0x0001087b5a48();
    *(undefined8 *)((long)register0x00000008 + -0x1590) = unaff_x24;
    *(undefined1 **)((long)register0x00000008 + -0x1588) =
         (undefined1 *)((long)register0x00000008 + -0x1550);
    *(long *)((long)register0x00000008 + -0x1580) = lVar6;
    *(long *)((long)register0x00000008 + -0x1578) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x1570) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x1568) = puVar3;
    *(undefined1 **)((long)register0x00000008 + -0x1560) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x1558) = FUN_1087abf94;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x1560);
    func_0x000107c33538();
    *(undefined8 *)((long)register0x00000008 + -0x1598) = extraout_x8_01;
    func_0x000107c27994((undefined1 *)((long)register0x00000008 + -0x1998));
    func_0x0001087ad084((undefined1 *)((long)register0x00000008 + -0x1d28),puVar1);
    param_3 = (undefined8 *)0x0;
    FUN_10864094c((undefined1 *)((long)register0x00000008 + -0x1980),
                  (undefined1 *)((long)register0x00000008 + -0x1998),0,
                  (undefined1 *)((long)register0x00000008 + -0x1d28));
    func_0x00010863f788((undefined1 *)((long)register0x00000008 + -0x1d28));
    func_0x000107c27914((undefined1 *)((long)register0x00000008 + -0x1998));
    uVar2 = *(undefined8 *)(*(long *)(puVar4 + 0x20) + 0x88);
    func_0x0001087b5aa8();
    (*extraout_x8_02)();
    unaff_x20 = *(long *)(*(long *)(puVar4 + 0x20) + 0xb8);
    lVar6 = puVar5[1];
    uVar7 = *puVar5;
    *(undefined8 *)((long)register0x00000008 + -0x1d38) = puVar5[1];
    *(undefined8 *)((long)register0x00000008 + -0x1d40) = uVar7;
    if (lVar6 != 0) {
      do {
        func_0x000107c33534();
      } while (extraout_w10 != 0);
    }
    func_0x000107c28150();
    unaff_x21 = *(long *)(unaff_x20 + 0x10);
    func_0x0001087b6404();
    unaff_x22 = *(long *)(unaff_x21 + 0x70);
    unaff_x23 = (undefined1 *)((long)register0x00000008 + -0x15d0);
    *(undefined8 *)((long)register0x00000008 + -0x15d0) = 0x1087b38f0;
    *(undefined ***)((long)register0x00000008 + -0x15c8) = &PTR_DAT_110a70b40;
    *(undefined8 *)((long)register0x00000008 + -0x15b8) =
         *(undefined8 *)((long)register0x00000008 + -0x1d38);
    *(undefined8 *)((long)register0x00000008 + -0x15c0) =
         *(undefined8 *)((long)register0x00000008 + -0x1d40);
    *(undefined8 *)((long)register0x00000008 + -0x1d40) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1d38) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x15a0) = uVar2;
    func_0x000107c28154(unaff_x21 + 0x48);
    func_0x0001087b59b8(*(undefined8 *)((long)register0x00000008 + -0x15c8));
    func_0x0001087b5e08();
    if (unaff_x22 == 0) {
      lVar6 = *(long *)(unaff_x20 + 0x18);
      uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
      *(undefined8 *)((long)register0x00000008 + -0x15c8) = *(undefined8 *)(unaff_x20 + 0x18);
      *(undefined8 *)((long)register0x00000008 + -0x15d0) = uVar2;
      if (lVar6 != 0) {
        do {
          func_0x000107c33534();
        } while (extraout_w10_00 != 0);
      }
      func_0x0001087b5aa8();
      (*extraout_x8_03)();
      func_0x000107c27e74((undefined1 *)((long)register0x00000008 + -0x15d0));
    }
    func_0x0001087b5df4();
    unaff_x19 = (undefined1 *)((long)register0x00000008 + -0x1980);
    FUN_108798a4c();
    func_0x000107c33530(*(undefined8 *)((long)register0x00000008 + -0x1598));
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    func_0x000107c27e74((undefined1 *)((long)register0x00000008 + -0x15d0));
    func_0x0001087b5df4();
    param_1 = (undefined1 *)((long)register0x00000008 + -0x1980);
    FUN_108798a4c();
    unaff_x30 = FUN_1087ac13c;
    func_0x0001087b5a48();
    param_1 = param_1 + -8;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x1d40);
  }
  return;
}



/* Entry: 1087abf94; end: 1087ac13b;  */

void FUN_1087abf94(undefined1 *param_1,undefined8 param_2,undefined1 *param_3,undefined8 *param_4)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  undefined8 extraout_x8_01;
  code *extraout_x8_02;
  long lVar5;
  long lVar6;
  code *extraout_x8_03;
  int extraout_w10;
  int extraout_w10_00;
  undefined1 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined1 *unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar7;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined1 **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    func_0x000107c33538();
    *(undefined8 *)((long)register0x00000008 + -0x48) = extraout_x8_01;
    func_0x000107c27994((undefined1 *)((long)register0x00000008 + -0x448));
    func_0x0001087ad084((undefined1 *)((long)register0x00000008 + -0x7d8),param_3);
    puVar4 = (undefined8 *)0x0;
    FUN_10864094c((undefined1 *)((long)register0x00000008 + -0x430),
                  (undefined1 *)((long)register0x00000008 + -0x448),0,
                  (undefined1 *)((long)register0x00000008 + -0x7d8));
    func_0x00010863f788((undefined1 *)((long)register0x00000008 + -0x7d8));
    func_0x000107c27914((undefined1 *)((long)register0x00000008 + -0x448));
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x88);
    func_0x0001087b5aa8();
    (*extraout_x8_02)();
    unaff_x20 = *(long *)(*(long *)(param_1 + 0x20) + 0xb8);
    lVar5 = param_4[1];
    uVar7 = *param_4;
    *(undefined8 *)((long)register0x00000008 + -0x7e8) = param_4[1];
    *(undefined8 *)((long)register0x00000008 + -0x7f0) = uVar7;
    if (lVar5 != 0) {
      do {
        func_0x000107c33534();
      } while (extraout_w10 != 0);
    }
    func_0x000107c28150();
    unaff_x21 = *(long *)(unaff_x20 + 0x10);
    func_0x0001087b6404();
    lVar5 = *(long *)(unaff_x21 + 0x70);
    *(undefined8 *)((long)register0x00000008 + -0x80) = 0x1087b38f0;
    *(undefined ***)((long)register0x00000008 + -0x78) = &PTR_DAT_110a70b40;
    *(undefined8 *)((long)register0x00000008 + -0x68) =
         *(undefined8 *)((long)register0x00000008 + -0x7e8);
    *(undefined8 *)((long)register0x00000008 + -0x70) =
         *(undefined8 *)((long)register0x00000008 + -0x7f0);
    *(undefined8 *)((long)register0x00000008 + -0x7f0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x7e8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x50) = uVar1;
    func_0x000107c28154(unaff_x21 + 0x48);
    func_0x0001087b59b8(*(undefined8 *)((long)register0x00000008 + -0x78));
    func_0x0001087b5e08();
    if (lVar5 == 0) {
      lVar6 = *(long *)(unaff_x20 + 0x18);
      uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
      *(undefined8 *)((long)register0x00000008 + -0x78) = *(undefined8 *)(unaff_x20 + 0x18);
      *(undefined8 *)((long)register0x00000008 + -0x80) = uVar1;
      if (lVar6 != 0) {
        do {
          func_0x000107c33534();
        } while (extraout_w10_00 != 0);
      }
      func_0x0001087b5aa8();
      (*extraout_x8_03)();
      func_0x000107c27e74((undefined1 *)((long)register0x00000008 + -0x80));
    }
    func_0x0001087b5df4();
    puVar2 = (undefined1 *)((long)register0x00000008 + -0x430);
    FUN_108798a4c();
    func_0x000107c33530(*(undefined8 *)((long)register0x00000008 + -0x48));
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    func_0x000107c27e74((undefined1 *)((long)register0x00000008 + -0x80));
    func_0x0001087b5df4();
    puVar3 = (undefined1 *)((long)register0x00000008 + -0x430);
    FUN_108798a4c(puVar3);
    func_0x0001087b5a48();
    *(undefined8 *)((long)register0x00000008 + -0x830) = unaff_x24;
    *(undefined1 **)((long)register0x00000008 + -0x828) =
         (undefined1 *)((long)register0x00000008 + -0x80);
    *(long *)((long)register0x00000008 + -0x820) = lVar5;
    *(long *)((long)register0x00000008 + -0x818) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x810) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x808) = puVar2;
    *(undefined1 **)((long)register0x00000008 + -0x800) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x7f8) = FUN_1087ac13c;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x800);
    (*(code *)PTR____chkstk_darwin_11034bd40)(puVar3 + -8);
    puVar2 = (undefined1 *)((long)register0x00000008 + -0x1d40);
    unaff_x23 = (undefined1 *)((long)register0x00000008 + -0x1d40);
    func_0x0001087b5c04();
    func_0x000107c33538();
    *(undefined8 *)((long)register0x00000008 + -0x838) = extraout_x8;
    func_0x0001087b6818();
    FUN_108860310((undefined1 *)((long)register0x00000008 + -0x12b8));
    func_0x000107c298f0((undefined1 *)((long)register0x00000008 + -0x1d40),
                        (undefined1 *)((long)register0x00000008 + -0x12b8));
    FUN_108794924((undefined1 *)((long)register0x00000008 + -0x1d40));
    func_0x0001087b1d0c((undefined1 *)((long)register0x00000008 + -0x1308),puVar2);
    func_0x000107c335b4((undefined1 *)((long)register0x00000008 + -0x1d40));
    func_0x000107c298ec((undefined1 *)((long)register0x00000008 + -0x12b8));
    *(undefined4 *)((long)register0x00000008 + -0x12e0) = 0;
    *(undefined4 *)((long)register0x00000008 + -0x12c8) = 1;
    func_0x0001087b5eec();
    FUN_10886024c();
    lVar5 = unaff_x20 + 0x70;
    FUN_1087b1d48(lVar5,(undefined1 *)((long)register0x00000008 + -0x1308));
    if (lVar5 != 0) {
      FUN_1087b1e08(unaff_x20 + 0x70);
    }
    uVar1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x20) + 0x28);
    func_0x0001087b5aa8();
    (*extraout_x8_00)();
    *(undefined8 *)(unaff_x21 + 0xa8) = uVar1;
    func_0x0001087b5eec();
    FUN_10886a704();
    func_0x0001087b5eec();
    FUN_10879d0a0((undefined1 *)((long)register0x00000008 + -0x1368));
    unaff_x22 = *(long *)(unaff_x20 + 0x20);
    FUN_1087aaee4((undefined1 *)((long)register0x00000008 + -0x1d40),unaff_x20,unaff_x21,
                  (undefined1 *)((long)register0x00000008 + -0x1368));
    FUN_10878f704((undefined1 *)((long)register0x00000008 + -0x12b8),unaff_x22 + 0x28,
                  (undefined1 *)((long)register0x00000008 + -0x1308),
                  (undefined1 *)((long)register0x00000008 + -0x1d40));
    func_0x0001086a931c((undefined1 *)((long)register0x00000008 + -0x1d40));
    FUN_1087aa674(unaff_x20,(undefined1 *)((long)register0x00000008 + -0x12b8));
    func_0x0001087b63f8(*(undefined8 *)(unaff_x20 + 0x30));
    param_3 = (undefined1 *)((long)register0x00000008 + -0x1188);
    FUN_1087abf94(unaff_x20,(undefined1 *)((long)register0x00000008 + -0x1308));
    func_0x0001087b61e4();
    func_0x0001087b60a8();
    func_0x000108794568((undefined1 *)((long)register0x00000008 + -0x12b8));
    func_0x000104bee768((undefined1 *)((long)register0x00000008 + -0x1368));
    unaff_x19 = (undefined1 *)((long)register0x00000008 + -0x1308);
    func_0x000107c27914();
    func_0x000107c33530(*(undefined8 *)((long)register0x00000008 + -0x838));
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x000108794568((undefined1 *)((long)register0x00000008 + -0x12b8));
    func_0x000104bee768((undefined1 *)((long)register0x00000008 + -0x1368));
    param_1 = (undefined1 *)((long)register0x00000008 + -0x1308);
    func_0x000107c27914();
    unaff_x30 = FUN_1087abf94;
    func_0x0001087b5a48();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x1d40);
    param_4 = puVar4;
  }
  return;
}



/* Entry: 1087ac13c; end: 1087ac143;  */

void FUN_1087ac13c(undefined1 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  undefined8 extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  int extraout_w10;
  int extraout_w10_00;
  undefined1 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar6;
  long unaff_x22;
  undefined1 *unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar7;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined1 **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    (*(code *)PTR____chkstk_darwin_11034bd40)(param_1 + -8);
    puVar1 = (undefined1 *)((long)register0x00000008 + -0x1550);
    func_0x0001087b5c04();
    func_0x000107c33538();
    *(undefined8 *)((long)register0x00000008 + -0x48) = extraout_x8;
    func_0x0001087b6818();
    FUN_108860310((undefined1 *)((long)register0x00000008 + -0xac8));
    func_0x000107c298f0((undefined1 *)((long)register0x00000008 + -0x1550),
                        (undefined1 *)((long)register0x00000008 + -0xac8));
    FUN_108794924((undefined1 *)((long)register0x00000008 + -0x1550));
    func_0x0001087b1d0c((undefined1 *)((long)register0x00000008 + -0xb18),puVar1);
    func_0x000107c335b4((undefined1 *)((long)register0x00000008 + -0x1550));
    func_0x000107c298ec((undefined1 *)((long)register0x00000008 + -0xac8));
    *(undefined4 *)((long)register0x00000008 + -0xaf0) = 0;
    *(undefined4 *)((long)register0x00000008 + -0xad8) = 1;
    func_0x0001087b5eec();
    FUN_10886024c();
    lVar6 = unaff_x20 + 0x70;
    FUN_1087b1d48(lVar6,(undefined1 *)((long)register0x00000008 + -0xb18));
    if (lVar6 != 0) {
      FUN_1087b1e08(unaff_x20 + 0x70);
    }
    uVar2 = *(undefined8 *)(*(long *)(unaff_x20 + 0x20) + 0x28);
    func_0x0001087b5aa8();
    (*extraout_x8_00)();
    *(undefined8 *)(unaff_x21 + 0xa8) = uVar2;
    func_0x0001087b5eec();
    FUN_10886a704();
    func_0x0001087b5eec();
    FUN_10879d0a0((undefined1 *)((long)register0x00000008 + -0xb78));
    lVar6 = *(long *)(unaff_x20 + 0x20);
    FUN_1087aaee4((undefined1 *)((long)register0x00000008 + -0x1550),unaff_x20,unaff_x21,
                  (undefined1 *)((long)register0x00000008 + -0xb78));
    FUN_10878f704((undefined1 *)((long)register0x00000008 + -0xac8),lVar6 + 0x28,
                  (undefined1 *)((long)register0x00000008 + -0xb18),
                  (undefined1 *)((long)register0x00000008 + -0x1550));
    func_0x0001086a931c((undefined1 *)((long)register0x00000008 + -0x1550));
    FUN_1087aa674(unaff_x20,(undefined1 *)((long)register0x00000008 + -0xac8));
    func_0x0001087b63f8(*(undefined8 *)(unaff_x20 + 0x30));
    puVar1 = (undefined1 *)((long)register0x00000008 + -0x998);
    FUN_1087abf94(unaff_x20,(undefined1 *)((long)register0x00000008 + -0xb18),puVar1);
    func_0x0001087b61e4();
    func_0x0001087b60a8();
    func_0x000108794568((undefined1 *)((long)register0x00000008 + -0xac8));
    func_0x000104bee768((undefined1 *)((long)register0x00000008 + -0xb78));
    puVar3 = (undefined1 *)((long)register0x00000008 + -0xb18);
    func_0x000107c27914();
    func_0x000107c33530(*(undefined8 *)((long)register0x00000008 + -0x48));
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x000108794568((undefined1 *)((long)register0x00000008 + -0xac8));
    func_0x000104bee768((undefined1 *)((long)register0x00000008 + -0xb78));
    puVar4 = (undefined1 *)((long)register0x00000008 + -0xb18);
    func_0x000107c27914();
    puVar5 = param_3;
    func_0x0001087b5a48();
    *(undefined8 *)((long)register0x00000008 + -0x1590) = unaff_x24;
    *(undefined1 **)((long)register0x00000008 + -0x1588) =
         (undefined1 *)((long)register0x00000008 + -0x1550);
    *(long *)((long)register0x00000008 + -0x1580) = lVar6;
    *(long *)((long)register0x00000008 + -0x1578) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x1570) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x1568) = puVar3;
    *(undefined1 **)((long)register0x00000008 + -0x1560) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x1558) = FUN_1087abf94;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x1560);
    func_0x000107c33538();
    *(undefined8 *)((long)register0x00000008 + -0x1598) = extraout_x8_01;
    func_0x000107c27994((undefined1 *)((long)register0x00000008 + -0x1998));
    func_0x0001087ad084((undefined1 *)((long)register0x00000008 + -0x1d28),puVar1);
    param_3 = (undefined8 *)0x0;
    FUN_10864094c((undefined1 *)((long)register0x00000008 + -0x1980),
                  (undefined1 *)((long)register0x00000008 + -0x1998),0,
                  (undefined1 *)((long)register0x00000008 + -0x1d28));
    func_0x00010863f788((undefined1 *)((long)register0x00000008 + -0x1d28));
    func_0x000107c27914((undefined1 *)((long)register0x00000008 + -0x1998));
    uVar2 = *(undefined8 *)(*(long *)(puVar4 + 0x20) + 0x88);
    func_0x0001087b5aa8();
    (*extraout_x8_02)();
    unaff_x20 = *(long *)(*(long *)(puVar4 + 0x20) + 0xb8);
    lVar6 = puVar5[1];
    uVar7 = *puVar5;
    *(undefined8 *)((long)register0x00000008 + -0x1d38) = puVar5[1];
    *(undefined8 *)((long)register0x00000008 + -0x1d40) = uVar7;
    if (lVar6 != 0) {
      do {
        func_0x000107c33534();
      } while (extraout_w10 != 0);
    }
    func_0x000107c28150();
    unaff_x21 = *(long *)(unaff_x20 + 0x10);
    func_0x0001087b6404();
    unaff_x22 = *(long *)(unaff_x21 + 0x70);
    unaff_x23 = (undefined1 *)((long)register0x00000008 + -0x15d0);
    *(undefined8 *)((long)register0x00000008 + -0x15d0) = 0x1087b38f0;
    *(undefined ***)((long)register0x00000008 + -0x15c8) = &PTR_DAT_110a70b40;
    *(undefined8 *)((long)register0x00000008 + -0x15b8) =
         *(undefined8 *)((long)register0x00000008 + -0x1d38);
    *(undefined8 *)((long)register0x00000008 + -0x15c0) =
         *(undefined8 *)((long)register0x00000008 + -0x1d40);
    *(undefined8 *)((long)register0x00000008 + -0x1d40) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1d38) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x15a0) = uVar2;
    func_0x000107c28154(unaff_x21 + 0x48);
    func_0x0001087b59b8(*(undefined8 *)((long)register0x00000008 + -0x15c8));
    func_0x0001087b5e08();
    if (unaff_x22 == 0) {
      lVar6 = *(long *)(unaff_x20 + 0x18);
      uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
      *(undefined8 *)((long)register0x00000008 + -0x15c8) = *(undefined8 *)(unaff_x20 + 0x18);
      *(undefined8 *)((long)register0x00000008 + -0x15d0) = uVar2;
      if (lVar6 != 0) {
        do {
          func_0x000107c33534();
        } while (extraout_w10_00 != 0);
      }
      func_0x0001087b5aa8();
      (*extraout_x8_03)();
      func_0x000107c27e74((undefined1 *)((long)register0x00000008 + -0x15d0));
    }
    func_0x0001087b5df4();
    unaff_x19 = (undefined1 *)((long)register0x00000008 + -0x1980);
    FUN_108798a4c();
    func_0x000107c33530(*(undefined8 *)((long)register0x00000008 + -0x1598));
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    func_0x000107c27e74((undefined1 *)((long)register0x00000008 + -0x15d0));
    func_0x0001087b5df4();
    param_1 = (undefined1 *)((long)register0x00000008 + -0x1980);
    FUN_108798a4c();
    unaff_x30 = FUN_1087ac13c;
    func_0x0001087b5a48();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x1d40);
  }
  return;
}



/* Entry: 1087ac144; end: 1087ac1b7;  */

undefined8 FUN_1087ac144(undefined8 param_1,long *param_2)

{
  if ((((*param_2 == param_2[1]) && (param_2[3] == param_2[4])) && (param_2[6] == param_2[7])) &&
     (param_2[9] == param_2[10])) {
    func_0x0001087b6818();
    FUN_108869b70();
    func_0x0001087b5eec();
    FUN_1088606d0();
    return 0;
  }
  return 1;
}



/* Entry: 1087ac1b8; end: 1087ac2a7;  */

undefined8 FUN_1087ac1b8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_3a0 [432];
  undefined1 auStack_1f0 [424];
  byte bStack_48;
  
  if (*(long *)(param_3 + 0x58) - *(long *)(param_3 + 0x50) != 0x18) {
    return 0;
  }
  func_0x0001087b6824();
  func_0x0001087b6818();
  FUN_108869aa4(auStack_1f0);
  if ((bStack_48 & 1) == 0) {
    FUN_1087a20f8(auStack_3a0);
    func_0x000107c2894c(auStack_1f0,auStack_3a0);
    func_0x000107c288dc(auStack_3a0);
    if ((bStack_48 & 1) == 0) {
      func_0x0001087b5eec();
      FUN_108869b70();
      func_0x0001087b5eec();
      FUN_1088606d0();
      uVar1 = 1;
      goto LAB_1087ac270;
    }
  }
  uVar1 = 0;
LAB_1087ac270:
  func_0x000107c288dc(auStack_1f0);
  return uVar1;
}



/* Entry: 1087ac2a8; end: 1087ac2e7;  */

void FUN_1087ac2a8(void)

{
  FUN_1087b2480();
  return;
}



/* Entry: 1087ac2e8; end: 1087ac49b;  */

long FUN_1087ac2e8(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lStack_3f0;
  long lStack_3e8;
  byte bStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined4 uStack_370;
  undefined1 auStack_360 [104];
  undefined1 auStack_2f8 [696];
  
  func_0x0001087b6818();
  func_0x000107c2a014(auStack_2f8);
  func_0x000107c33578();
  func_0x000107c2a01c(auStack_360);
  uStack_388 = 0;
  uStack_390 = 0;
  uStack_378 = 0;
  uStack_380 = 0;
  uStack_370 = 0x3f800000;
  func_0x000107c298f0(&lStack_3f0,auStack_360);
  while (((bStack_398 & 1) != 0 && (lStack_3f0 != 0))) {
    plVar3 = &lStack_3f0;
    FUN_108794924(plVar3);
    FUN_1087ac2a8(&uStack_390,plVar3,plVar3);
    func_0x000107c2991c(&lStack_3f0);
  }
  func_0x0001087b63ec();
  func_0x000107c335b4(&lStack_3f0);
  func_0x000107c29978(&lStack_3f0,auStack_2f8);
  lVar4 = 0;
  for (lVar2 = lStack_3f0; lVar2 != lStack_3e8; lVar2 = lVar2 + 0x2a0) {
    puVar1 = &uStack_390;
    FUN_1087b29c4(puVar1,lVar2 + 0x70);
    if (puVar1 != (undefined8 *)0x0) {
      if (*(int *)((long)puVar1 + 0x6c) == 3) {
        plVar3 = *(long **)(param_1 + 0x98);
        (**(code **)(*plVar3 + 0x10))(plVar3,*(undefined4 *)(puVar1 + 10));
        lVar4 = lVar4 + ((ulong)plVar3 & 1);
      }
      else {
        lVar4 = lVar4 + 1;
      }
    }
  }
  func_0x000107c2998c(&lStack_3f0);
  func_0x000107c299dc(&uStack_390);
  func_0x000107c298ec(auStack_360);
  func_0x000107c2985c(auStack_2f8);
  return lVar4;
}



/* Entry: 1087ac49c; end: 1087acb5f;  */

void FUN_1087ac49c(ulong param_1)

{
  undefined1 in_ZR;
  ulong uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_2070;
  long alStack_2068 [3];
  undefined1 auStack_2050 [32];
  undefined4 uStack_2030;
  undefined1 auStack_2028 [32];
  undefined4 uStack_2008;
  undefined1 auStack_2000 [24];
  undefined1 auStack_1fe8 [24];
  undefined8 uStack_1fd0;
  undefined8 uStack_1fc8;
  undefined8 uStack_1fc0;
  undefined1 auStack_1fb8 [24];
  undefined1 uStack_1fa0;
  undefined8 uStack_1f98;
  undefined1 uStack_1f90;
  undefined1 auStack_1f88 [32];
  undefined1 auStack_1f68 [32];
  undefined1 auStack_1f48 [32];
  undefined1 uStack_1f28;
  undefined1 auStack_1f20 [32];
  undefined1 auStack_1f00 [200];
  undefined1 uStack_1e38;
  undefined1 auStack_1e30 [32];
  undefined1 auStack_1e10 [32];
  undefined8 uStack_1df0;
  undefined1 uStack_1de8;
  undefined8 uStack_1de0;
  undefined1 uStack_1dd8;
  undefined8 uStack_1dd0;
  long lStack_1dc8;
  undefined8 uStack_13f8;
  long lStack_13f0;
  undefined8 uStack_13e0;
  undefined8 uStack_13d8;
  undefined8 uStack_13d0;
  undefined4 uStack_13c8;
  undefined8 uStack_13c0;
  undefined4 uStack_13b8;
  undefined4 uStack_13b4;
  undefined4 uStack_13b0;
  undefined1 auStack_13a8 [96];
  long alStack_1348 [88];
  byte bStack_1088;
  long lStack_1080;
  undefined1 uStack_1078;
  undefined7 uStack_1077;
  undefined1 auStack_1070 [24];
  undefined1 auStack_1058 [32];
  undefined4 uStack_1038;
  undefined1 auStack_1030 [32];
  undefined4 uStack_1010;
  undefined1 auStack_1008 [24];
  undefined4 uStack_ff0;
  undefined8 uStack_fe8;
  undefined8 uStack_fe0;
  undefined8 uStack_fd8;
  undefined1 auStack_fd0 [24];
  undefined1 uStack_fb8;
  undefined8 uStack_fb0;
  undefined1 uStack_fa8;
  undefined1 auStack_fa0 [32];
  undefined1 auStack_f80 [32];
  undefined1 auStack_f60 [32];
  undefined1 uStack_f40;
  undefined1 auStack_f38 [32];
  undefined1 auStack_f18 [200];
  undefined1 uStack_e50;
  undefined1 auStack_e48 [32];
  undefined1 auStack_e28 [32];
  undefined8 uStack_e08;
  undefined1 uStack_e00;
  undefined8 uStack_df8;
  undefined1 uStack_df0;
  undefined8 uStack_de8;
  undefined8 uStack_de0;
  undefined4 uStack_dd8;
  undefined8 uStack_dd0;
  undefined4 uStack_dc8;
  byte bStack_dc0;
  undefined1 auStack_db8 [8];
  long lStack_db0;
  undefined1 auStack_da8 [696];
  char cStack_af0;
  undefined1 auStack_ae8 [24];
  undefined1 auStack_ad0 [64];
  undefined1 auStack_a90 [2444];
  undefined4 uStack_104;
  undefined1 uStack_100;
  undefined8 uStack_10;
  
  func_0x000107c335c0();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000107c33538();
  uStack_10 = extraout_x8;
  func_0x0001087b6330();
  uVar4 = *(undefined8 *)(extraout_x8_00 + 0x18);
  func_0x000107c278b8(auStack_ae8,&UNK_10f4baf2b);
  func_0x000107c31420(auStack_ad0,uVar4,auStack_ae8);
  func_0x0001087b646c();
  func_0x000107c33578();
  FUN_1088685f0(auStack_db8);
  lStack_1080 = 0;
  uStack_1078 = 0;
  bStack_dc0 = 0;
  if (cStack_af0 == '\0') {
    lVar5 = 0;
  }
  else {
    func_0x0001087b20b4(&uStack_1078,auStack_da8);
    func_0x0001087b2090(auStack_da8);
    lVar5 = lStack_1080;
  }
  lStack_1080 = lStack_db0;
  puVar3 = (undefined1 *)0x2c8;
  lStack_db0 = lVar5;
  _bzero(alStack_1348);
  while ((((bStack_dc0 & 1) != 0 || ((bStack_1088 & 1) != 0)) &&
         (in_ZR = lStack_1080 == alStack_1348[0], !(bool)in_ZR))) {
    if ((bStack_dc0 & 1) == 0) {
      uVar4 = *(undefined8 *)(lStack_1080 + 8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (&uStack_1dd0,lStack_1080 + 0x58);
      func_0x0001087b62c4();
      func_0x000107c27f54(&UNK_10f2e0451,&uStack_1dd0);
      func_0x00010bcc7444(uVar4,0x65,auStack_a90);
      func_0x0001087b5ce4();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_1dd0);
    }
    uVar1 = *(ulong *)(param_1 + 0x38);
    puVar3 = auStack_1008;
    FUN_108790114();
    if ((uVar1 & 1) == 0) {
      func_0x000107c33578();
      FUN_10879d0a0(auStack_13a8);
      puVar3 = auStack_13a8;
      func_0x0001087b64e0();
      if ((uVar1 & 1) != 0) {
        lVar5 = *(long *)(param_1 + 0x20);
        func_0x000107c27994(&uStack_13f8,auStack_1008);
        uStack_13e0 = uStack_de8;
        uStack_13d8 = uStack_fe0;
        uStack_13d0 = uStack_de0;
        uStack_13c8 = uStack_dd8;
        uStack_13c0 = uStack_dd0;
        uStack_13b8 = uStack_dc8;
        uStack_13b4 = uStack_ff0;
        uStack_13b0 = 0;
        uStack_2070 = CONCAT71(uStack_1077,uStack_1078);
        func_0x000107c27994(alStack_2068,auStack_1070);
        func_0x000107c28aa0(auStack_2050,auStack_1058);
        uStack_2030 = uStack_1038;
        func_0x000104be0ccc(auStack_2028,auStack_1030);
        uStack_2008 = uStack_1010;
        func_0x000107c27994(auStack_2000,auStack_1008);
        func_0x000107c278b8(auStack_1fe8,&DAT_10f4bdff0);
        uStack_1fc8 = uStack_fe0;
        uStack_1fd0 = uStack_fe8;
        uStack_1fc0 = uStack_fd8;
        FUN_10867be90(auStack_1fb8,auStack_fd0);
        uStack_1fa0 = uStack_fb8;
        uStack_1f98 = uStack_fb0;
        uStack_1f90 = uStack_fa8;
        func_0x000104be0ccc(auStack_1f88,auStack_fa0);
        func_0x000104be0ccc(auStack_1f68,auStack_f80);
        func_0x000104be0ccc(auStack_1f48,auStack_f60);
        uStack_1f28 = uStack_f40;
        func_0x000107c279d4(auStack_1f20,auStack_f38);
        FUN_108656428(auStack_1f00,auStack_f18);
        uStack_1e38 = uStack_e50;
        func_0x000107c279d4(auStack_1e30,auStack_e48);
        func_0x000104be0ccc(auStack_1e10,auStack_e28);
        uStack_1df0 = uStack_e08;
        uStack_1de8 = uStack_e00;
        uStack_1de0 = uStack_df8;
        uStack_1dd8 = uStack_df0;
        FUN_1087aaee4(&uStack_1dd0,param_1,&uStack_2070,auStack_13a8);
        func_0x0001087b62c4();
        FUN_10878f704(lVar5 + 0x28,&uStack_13f8,&uStack_1dd0);
        func_0x0001086a931c(&uStack_1dd0);
        func_0x000108788648(&uStack_2070);
        func_0x000107c27914(&uStack_13f8);
        lVar5 = param_1 + 0x70;
        FUN_1087b1d48(lVar5,auStack_1008);
        if (lVar5 != 0) {
          uStack_104 = *(undefined4 *)(lVar5 + 0x28);
          uStack_100 = 1;
        }
        puVar3 = auStack_ad0;
        uVar1 = param_1;
        FUN_1087ac1b8(param_1,puVar3,auStack_a90);
        if ((uVar1 & 1) == 0) {
          FUN_1087abd48(&uStack_2070);
          lVar5 = alStack_2068[0];
          uVar4 = uStack_2070;
          uStack_1dd0 = uStack_2070;
          lStack_1dc8 = alStack_2068[0];
          if (alStack_2068[0] != 0) {
            do {
              func_0x000107c33534();
            } while (extraout_w10 != 0);
          }
          func_0x0001087b62c4();
          FUN_1087abf94(param_1,extraout_x8_01 + 0x18,extraout_x8_01 + 0x130,&uStack_1dd0);
          func_0x000104be36f0(&uStack_1dd0);
          uStack_13f8 = uVar4;
          lStack_13f0 = lVar5;
          if (lVar5 != 0) {
            do {
              func_0x000107c33534();
            } while (extraout_w10_00 != 0);
          }
          FUN_1087a7724(&uStack_1dd0);
          func_0x0001087b64ac();
          uStack_13f8 = uVar4;
          lStack_13f0 = lVar5;
          if (lVar5 != 0) {
            do {
              func_0x000107c33534();
            } while (extraout_w10_01 != 0);
          }
          puVar3 = auStack_a90;
          FUN_1087aa790(param_1,puVar3,&uStack_1dd0,&uStack_13f8);
          func_0x0001087b64ac();
          FUN_1087a8f08(&uStack_1dd0);
          FUN_1087b1ce8(&uStack_2070);
        }
        func_0x0001087b5ce4();
        func_0x000108794568();
      }
      func_0x000104bee768(auStack_13a8);
    }
    FUN_1087b21bc(&lStack_1080);
  }
  func_0x0001087b640c();
  func_0x0001087acfb8(&uStack_1078);
  puVar2 = auStack_ad0;
  func_0x000107c31428();
  func_0x0001087b6454();
  func_0x0001087b6424();
  while (func_0x000107c33530(uStack_10), !(bool)in_ZR) {
    ___stack_chk_fail();
    if ((int)puVar3 != 0) goto LAB_1087ac938;
    do {
      __Unwind_Resume(puVar2);
LAB_1087ac938:
      func_0x000104bd46a0(puVar2);
      func_0x0001087b5ab4();
      func_0x0001087b6454();
      func_0x0001087b6424();
      in_ZR = (int)&uStack_e08 == 1;
    } while (!(bool)in_ZR);
    ___cxa_begin_catch();
    auStack_db8[0] = 0;
    auStack_da8[0] = 0;
    func_0x0001087b5c20(*(undefined8 *)(param_1 + 0x20));
    func_0x0001087b6548();
    func_0x0001087b6460();
    ___cxa_end_catch();
  }
  return;
}



/* Entry: 1087acb60; end: 1087acf63;  */

void FUN_1087acb60(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long extraout_x8;
  code *extraout_x8_00;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined4 uVar6;
  undefined1 auStack_1a90 [912];
  undefined1 auStack_1700 [24];
  undefined1 auStack_16e8 [944];
  undefined1 auStack_1338 [32];
  undefined1 auStack_1318 [24];
  long lStack_1300;
  long lStack_12f8;
  undefined1 auStack_12a0 [128];
  undefined1 auStack_1220 [2272];
  undefined1 auStack_940 [96];
  undefined1 auStack_8e0 [80];
  byte bStack_890;
  undefined1 auStack_888 [24];
  long alStack_870 [85];
  byte bStack_5c8;
  long alStack_5c0 [85];
  byte bStack_318;
  undefined1 auStack_310 [696];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [64];
  
  func_0x000107c335c0();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x0001087b6330();
  uVar3 = *(undefined8 *)(extraout_x8 + 0x18);
  func_0x000107c278b8(auStack_58,&UNK_10f4baf63);
  func_0x000107c31420(auStack_40,uVar3,auStack_58);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
  func_0x000107c33578();
  FUN_108869340(auStack_310);
  func_0x000107c2986c(alStack_5c0,auStack_310);
  _bzero(alStack_870,0x2b0);
  while ((((bStack_318 & 1) != 0 || ((bStack_5c8 & 1) != 0)) && (alStack_5c0[0] != alStack_870[0])))
  {
    plVar5 = alStack_5c0;
    FUN_108788f54();
    func_0x0001087b6398(auStack_888);
    uVar2 = *(ulong *)(param_1 + 0x38);
    FUN_108790114(uVar2,auStack_888);
    if ((uVar2 & 1) == 0) {
      func_0x000107c33578();
      FUN_108860310(auStack_1318);
      FUN_10878f644(auStack_8e0,auStack_1318);
      uVar2 = 0;
      func_0x000107c298ec();
      if ((bStack_890 & 1) == 0) {
        func_0x000107c33578();
        FUN_108869b70();
      }
      else {
        func_0x000107c33578();
        FUN_10879d0a0(auStack_940);
        func_0x0001087b64e0();
        if ((uVar2 & 1) != 0) {
          FUN_1087aaee4(auStack_1318,param_1,plVar5,auStack_940);
          uVar1 = (uint)*(undefined8 *)(param_1 + 0xb0);
          func_0x0001087b5aa8();
          (*extraout_x8_00)();
          uVar6 = 7;
          if (uVar1 == 0) {
            uVar6 = 5;
          }
          if (((uVar1 & 1) == 0) && (1 < (ulong)((lStack_12f8 - lStack_1300) / 0x18))) {
            lVar4 = *(long *)(param_1 + 0x20);
            FUN_1087ad068(auStack_1338,&lStack_1300);
            FUN_1087a65e4(lVar4 + 0x38,lVar4 + 0x168,auStack_12a0,auStack_1338);
            func_0x000104bee748(auStack_1338);
          }
          plVar5 = *(long **)(*(long *)(param_1 + 0x20) + 0x88);
          func_0x000107c27994(auStack_1700,auStack_888);
          func_0x0001087ad084(auStack_1a90,auStack_1220);
          FUN_10864094c(auStack_16e8,auStack_1700,0,auStack_1a90);
          (**(code **)(*plVar5 + 0x20))(plVar5,auStack_16e8,uVar6);
          FUN_108798a4c(auStack_16e8);
          func_0x00010863f788(auStack_1a90);
          func_0x000107c27914(auStack_1700);
          func_0x0001086a931c(auStack_1318);
        }
        func_0x0001087b6430();
      }
      func_0x0001087b6448();
    }
    func_0x0001087b6418();
    func_0x000107c299f0(alStack_5c0);
  }
  func_0x000107c3356c(alStack_870);
  func_0x000107c3356c(alStack_5c0);
  func_0x000107c31428(auStack_40);
  func_0x0001087b643c();
  func_0x000107c31424(auStack_40);
  return;
}



/* Entry: 1087acf64; end: 1087acf97;  */

long FUN_1087acf64(long param_1)

{
  func_0x000107c28858(param_1 + 0xaa0);
  func_0x0001087b5bf4();
  func_0x000107c299ac(param_1 + 0x10);
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1087acf98; end: 1087acfd7;  */

void FUN_1087acf98(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    func_0x000104be36f0();
  }
  return;
}



/* Entry: 1087acfd8; end: 1087ad067;  */

long FUN_1087acfd8(long param_1)

{
  func_0x000107c279c4(param_1 + 0x250);
  func_0x000107c279dc(param_1 + 0x230);
  func_0x000107c2a500(param_1 + 0x160);
  func_0x000107c279dc(param_1 + 0x140);
  func_0x000107c279c4(param_1 + 0x118);
  func_0x000107c279c4(param_1 + 0xf8);
  func_0x000107c279c4(param_1 + 0xd8);
  func_0x000104bee630(param_1 + 0xa8);
  func_0x0001087b6044();
  func_0x0001087b603c();
  func_0x000107c28754(param_1 + 0x20);
  func_0x0001087b626c();
  return param_1;
}



/* Entry: 1087ad068; end: 1087ad09f;  */

void FUN_1087ad068(long param_1)

{
  func_0x000107c279ac();
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 1087ad0a0; end: 1087ad0a3;  */

undefined8 * FUN_1087ad0a0(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_110a705f0;
  func_0x000107c289f8(param_1 + 0x19);
  func_0x000107c289f8(param_1 + 0x13);
  func_0x000107c29778(param_1 + 0x11);
  func_0x000107c299a4(param_1 + 0xe);
  func_0x000107c299a8(param_1 + 0xc);
  lVar1 = param_1[0xb];
  param_1[0xb] = 0;
  if (lVar1 != 0) {
    func_0x0001087b59d4();
  }
  func_0x000107c288a4(param_1 + 9);
  func_0x000107c28868(param_1 + 7);
  func_0x000107c28808(param_1 + 5);
  func_0x000107c28800(param_1 + 3);
  func_0x000107c2995c(param_1 + 1);
  return param_1;
}



/* Entry: 1087ad0a4; end: 1087ad0b7;  */

void FUN_1087ad0a4(void)

{
  FUN_1087ad90c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087ad0b8; end: 1087ad90b;  */

void FUN_1087ad0b8(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  bool bVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined1 extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long *plVar17;
  long lVar18;
  undefined8 *puVar19;
  long *plVar20;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long extraout_x8_03;
  long lVar21;
  code *extraout_x8_04;
  code *extraout_x8_05;
  code *extraout_x8_06;
  long extraout_x8_07;
  code *extraout_x8_08;
  uint extraout_w9;
  uint extraout_w9_00;
  undefined4 extraout_w9_01;
  ulong extraout_x9;
  long lVar22;
  long extraout_x9_00;
  undefined8 uVar23;
  int extraout_w10;
  int extraout_w10_00;
  ulong extraout_x10;
  ulong extraout_x10_00;
  long extraout_x10_01;
  int extraout_w11;
  ulong extraout_x11;
  long extraout_x12;
  long lVar24;
  long *plVar25;
  long lVar26;
  long *plVar27;
  ulong uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  long lStack_ab0;
  long lStack_aa8;
  long lStack_aa0;
  undefined8 uStack_a98;
  undefined8 *puStack_a90;
  undefined8 uStack_10;
  
  func_0x000107c335c0();
  func_0x000107c33538();
  puVar12 = (undefined8 *)0xba8;
  uStack_10 = extraout_x8_00;
  __Znwm();
  *puVar12 = FUN_1087b4c64;
  puVar12[1] = FUN_1087b511c;
  puVar12[0x172] = param_4;
  puVar12[0x171] = param_1;
  FUN_108792710(puVar12 + 4,param_2);
  plVar1 = puVar12 + 0x168;
  plVar2 = puVar12 + 0x16b;
  uVar29 = *param_3;
  puVar12[0x169] = param_3[1];
  puVar12[0x168] = uVar29;
  puVar12[0x16a] = param_3[2];
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  func_0x0001087adea8(puVar12 + 2);
  FUN_1087ad990(extraout_x8,puVar12 + 2);
  puVar12[0x16f] = 0;
  puVar12[0x16c] = 0;
  *plVar2 = 0;
  puVar12[0x16e] = 0;
  puVar12[0x16d] = 0;
  plVar27 = (long *)puVar12[0x168];
  lVar24 = *(long *)(param_1 + 0x40);
  uVar23 = *(undefined8 *)(param_1 + 0x40);
  uVar29 = *(undefined8 *)(param_1 + 0x38);
  puVar13 = (undefined8 *)0x58;
  __Znwm();
  puVar15 = puVar12 + 0x16a;
  if (lVar24 != 0) {
    do {
      func_0x000107c33534();
    } while (extraout_w10 != 0);
  }
  uVar9 = *(undefined1 *)(param_1 + 0x80);
  *(undefined4 *)(puVar13 + 1) = 0x19;
  *puVar13 = &PTR_FUN_110a70640;
  puVar13[2] = 0;
  puVar13[3] = 0;
  *(undefined1 *)(puVar13 + 4) = 0;
  puVar13[6] = uVar23;
  puVar13[5] = uVar29;
  lStack_ab0 = 0;
  lStack_aa8 = 0;
  *(undefined4 *)(puVar13 + 7) = 0;
  lVar24 = *(long *)(param_1 + 0x78);
  uVar29 = *(undefined8 *)(param_1 + 0x70);
  puVar13[9] = *(undefined8 *)(param_1 + 0x78);
  puVar13[8] = uVar29;
  if (lVar24 != 0) {
    do {
      func_0x000107c33568();
      uVar9 = extraout_w8;
    } while (extraout_w11 != 0);
  }
  plVar3 = puVar12 + 0x163;
  *(undefined1 *)(puVar13 + 10) = uVar9;
  plVar14 = &lStack_ab0;
  func_0x000107c28868();
  plVar17 = (long *)puVar12[0x169];
  if (plVar17 < (long *)*puVar15) {
    if (plVar27 == plVar17) {
      *plVar17 = (long)puVar13;
      puVar12[0x169] = plVar17 + 1;
      uVar9 = 1;
    }
    else {
      plVar25 = plVar17 + -1;
      plVar14 = plVar17;
      for (plVar20 = plVar25; plVar20 < plVar17; plVar20 = plVar20 + 1) {
        lVar24 = *plVar20;
        *plVar20 = 0;
        *plVar14 = lVar24;
        plVar14 = plVar14 + 1;
      }
      puVar12[0x169] = plVar14;
      plVar14 = plVar25;
      while (uVar9 = plVar25 == plVar27, !(bool)uVar9) {
        plVar25 = plVar25 + -1;
        lVar18 = *plVar25;
        *plVar25 = 0;
        lVar24 = *plVar14;
        *plVar14 = lVar18;
        if (lVar24 != 0) {
          func_0x0001087b59d4();
        }
        plVar14 = plVar14 + -1;
      }
      plVar14 = (long *)*plVar27;
      *plVar27 = (long)puVar13;
      if (plVar14 != (long *)0x0) {
        func_0x0001087b59d4();
      }
    }
  }
  else {
    plVar14 = plVar1;
    FUN_1087a90d4(plVar1,((long)plVar17 - *plVar1 >> 3) + 1);
    plVar17 = (long *)puVar12[0x168];
    puVar12[0x167] = puVar15;
    if (plVar14 == (long *)0x0) {
      puVar19 = (undefined8 *)0x0;
      lVar24 = 0;
    }
    else {
      puVar19 = puVar15;
      FUN_1087a919c();
      lVar24 = (long)plVar14 << 3;
    }
    lVar18 = (long)plVar27 - (long)plVar17;
    puVar12[0x163] = puVar19;
    puVar16 = (undefined8 *)((long)puVar19 + lVar18);
    puVar12[0x165] = puVar16;
    puVar12[0x164] = puVar16;
    puVar12[0x166] = (long)puVar19 + lVar24;
    uVar9 = 0;
    if (lVar18 == lVar24) {
      if (plVar27 == plVar17) {
        lVar18 = 1;
        puStack_a90 = puVar15;
        FUN_1087a919c();
        lStack_aa8 = puVar12[0x164];
        lStack_aa0 = puVar12[0x165];
        for (lVar24 = 0; uVar9 = lStack_aa0 - lStack_aa8 == lVar24, !(bool)uVar9;
            lVar24 = lVar24 + 8) {
          uVar29 = *(undefined8 *)(lStack_aa8 + lVar24);
          *(undefined8 *)(lStack_aa8 + lVar24) = 0;
          *(undefined8 *)((long)puVar15 + lVar24) = uVar29;
        }
        lStack_ab0 = puVar12[0x163];
        puVar12[0x163] = puVar15;
        puVar12[0x164] = puVar15;
        puVar12[0x165] = (long)puVar15 + (lStack_aa0 - lStack_aa8);
        uStack_a98 = puVar12[0x166];
        puVar12[0x166] = puVar15 + lVar18;
        FUN_1087a91dc(&lStack_ab0);
        puVar16 = (undefined8 *)puVar12[0x165];
      }
      else {
        puVar16 = puVar16 + ((lVar18 >> 3) + 1) / -2;
        puVar12[0x164] = puVar16;
        uVar9 = 0;
      }
    }
    *puVar16 = puVar13;
    puVar12[0x165] = puVar16 + 1;
    _memcpy(puVar16 + 1,plVar27,puVar12[0x169] - (long)plVar27);
    puVar12[0x165] = puVar12[0x165] + (puVar12[0x169] - (long)plVar27);
    puVar12[0x169] = plVar27;
    lVar24 = puVar12[0x164] - ((long)plVar27 - puVar12[0x168]);
    _memcpy(lVar24);
    uVar29 = puVar12[0x168];
    puVar12[0x168] = lVar24;
    puVar12[0x164] = uVar29;
    uVar23 = puVar12[0x16a];
    uVar30 = puVar12[0x165];
    puVar12[0x165] = uVar29;
    puVar12[0x16a] = puVar12[0x166];
    puVar12[0x169] = uVar30;
    puVar12[0x166] = uVar23;
    puVar12[0x163] = uVar29;
    plVar14 = plVar3;
    FUN_1087a91dc();
  }
  plVar27 = puVar12 + 0x154;
  puVar12[0x173] = *(undefined8 *)puVar12[0x168];
  func_0x0001087b58a4();
  while( true ) {
    plVar17 = (long *)puVar12[0x171];
    FUN_1087ad9cc(plVar3,plVar17,plVar1,puVar12 + 4,puVar12[0x172]);
    *plVar27 = *plVar3;
    do {
      func_0x0001087b58e8();
    } while (extraout_w10_00 != 0);
    func_0x0001087b5a94(*plVar27);
    if ((extraout_w8_00 >> 1 & 1) == 0) {
      *(undefined1 *)(puVar12 + 0x174) = 0;
      lVar24 = *plVar27;
      lVar18 = *plVar14;
      if (lVar18 == 0) {
        func_0x000107c3a5c0();
        lVar18 = *plVar17;
      }
      plVar20 = (long *)(lVar24 + 0x10);
      do {
        if (*plVar20 == 0) {
          bVar10 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar10) {
            *plVar20 = 1;
            ExclusiveMonitorsStatus();
          }
          func_0x0001087b6794();
          plVar20 = extraout_x8_02;
          uVar6 = extraout_w9_00;
          uVar28 = extraout_x10_00;
        }
        else {
          func_0x0001087b67a0();
          plVar20 = extraout_x8_01;
          uVar6 = extraout_w9;
          uVar28 = extraout_x10;
        }
        if ((uVar28 & 1) != 0) {
          func_0x0001087b5978();
          if ((bool)uVar9) {
            func_0x0001087b5948();
            func_0x0001087b5924();
            func_0x0001087b5878();
            *(long **)(lVar24 + 0x90) = plVar17;
          }
          func_0x0001087b5988();
          *(long *)(extraout_x8_07 + 0x20) = lVar18;
          func_0x0001087b5958(*(undefined8 *)(lVar24 + 0x90));
          *(undefined8 *)(lVar24 + 0x10) = 0;
          goto LAB_1087ad710;
        }
      } while ((uVar6 >> 1 & 1) == 0);
    }
    func_0x0001087b5a94(*plVar27);
    if ((extraout_w8_01 >> 5 & 1) != 0) {
      __ZNSt13exception_ptrC1ERKS_(puVar12 + 0x170,*plVar27 + 0x18);
      __ZSt17rethrow_exceptionSt13exception_ptr(puVar12 + 0x170);
      goto LAB_1087ad7d8;
    }
    uVar28 = puVar12[0x16c];
    bVar8 = (ulong)puVar12[0x16d] <= uVar28;
    bVar10 = uVar28 == puVar12[0x16d];
    if (bVar8) {
      lVar24 = *plVar2;
      func_0x0001087b6858();
      if (bVar8 && !bVar10) {
        FUN_1087aefc4();
        goto LAB_1087ad7d8;
      }
      lVar18 = 0;
      if (extraout_x12 != 0) {
        lVar18 = (extraout_x8_03 - extraout_x10_01) / extraout_x12;
      }
      func_0x0001087b61c8(lVar18);
      uVar5 = extraout_x9;
      if (bVar8) {
        uVar5 = extraout_x11;
      }
      puVar12[0x162] = puVar12 + 0x16d;
      if (uVar5 == 0) {
        lVar18 = 0;
      }
      else {
        if (0xaaaaaaaaaaaaaaa < uVar5) goto LAB_1087ad7d4;
        lVar18 = uVar5 * 0x18;
        __Znwm();
      }
      puVar12[0x15e] = lVar18;
      lVar4 = lVar18 + (uVar28 - lVar24);
      puVar12[0x160] = lVar4;
      puVar12[0x15f] = lVar4;
      lVar18 = lVar18 + uVar5 * 0x18;
      puVar12[0x161] = lVar18;
      func_0x0001087b64c8();
      lVar26 = puVar12[0x16c];
      lVar24 = puVar12[0x16b];
      lVar21 = lVar26 - lVar24;
      lVar22 = lVar24;
      while (lVar22 != lVar26) {
        func_0x0001087b5d78();
        lVar22 = extraout_x9_00;
      }
      for (; lVar24 != lVar26; lVar24 = lVar24 + 0x18) {
        FUN_1087aefd0();
      }
      lVar24 = lVar4 + 0x18;
      uVar29 = puVar12[0x16b];
      puVar12[0x16b] = lVar4 + (lVar21 / -0x18) * 0x18;
      puVar12[0x15f] = uVar29;
      puVar12[0x16c] = lVar24;
      puVar12[0x160] = uVar29;
      uVar23 = puVar12[0x16d];
      puVar12[0x16d] = lVar18;
      puVar12[0x161] = uVar23;
      puVar12[0x15e] = uVar29;
      func_0x0001087b615c();
    }
    else {
      func_0x0001087b64c8();
      lVar24 = uVar28 + 0x18;
    }
    puVar12[0x16c] = lVar24;
    func_0x000107c27f9c(plVar27);
    func_0x0001087b5cb4();
    lVar24 = puVar12[0x16c];
    if (*(long *)(lVar24 + -0x18) == *(long *)(lVar24 + -0x10)) {
      iVar11 = 7;
    }
    else {
      iVar11 = *(int *)(*(long *)(lVar24 + -0x10) + -0x6c);
    }
    *(int *)(puVar12 + 0x15e) = iVar11;
    (**(code **)(**(long **)(puVar12[0x171] + 8) + 8))
              (plVar27,*(long **)(puVar12[0x171] + 8),iVar11);
    lVar18 = puVar12[0x173];
    func_0x0001087addf8(puVar12 + 0x16e,plVar27);
    func_0x000107c299a0(plVar27);
    uVar9 = iVar11 == 1;
    *(undefined1 *)(lVar18 + 0x20) = uVar9;
    func_0x0001087b153c(lVar18 + 0x10,puVar12 + 0x16e);
    lVar18 = puVar12[0x16e];
    if (lVar18 == 0) break;
    func_0x0001087b5aa8(lVar18,*(undefined4 *)(puVar12 + 6));
    iVar11 = (int)lVar18;
    (*extraout_x8_04)();
    if (iVar11 == 0) break;
    func_0x0001087b5aa8(*(undefined8 *)(puVar12[0x171] + 0x58));
    (*extraout_x8_05)();
    uVar9 = *(int *)((long)puVar12 + 0xa3c) == 3;
    if ((bool)uVar9) {
      func_0x0001087b5d40();
    }
    else {
      *(undefined4 *)((long)puVar12 + 0xa3c) = 3;
    }
    uVar29 = *(undefined8 *)(puVar12[0x171] + 0x28);
    func_0x000107c27994(plVar27,puVar12 + 7);
    puVar12[0x157] = puVar12[10];
    func_0x0001087b5aa8(*(undefined8 *)(puVar12[0x171] + 0x18));
    (*extraout_x8_06)();
    func_0x0001087b5cf0();
    *(undefined4 *)((long)puVar12 + 0xae4) = 1;
    *(undefined4 *)(puVar12 + 0x15d) = extraout_w9_01;
    FUN_10886024c(uVar29,plVar27);
    func_0x000107c27914(plVar27);
  }
  func_0x0001087ade30(&lStack_ab0,lVar24 + -0x18);
  func_0x000107c279a4(&lStack_ab0);
  lStack_aa8 = puVar12[0x16c];
  lStack_ab0 = *plVar2;
  lStack_aa0 = puVar12[0x16d];
  puVar12[0x16c] = 0;
  puVar12[0x16d] = 0;
  *plVar2 = 0;
  FUN_108792710(&uStack_a98,puVar12 + 4);
  func_0x0001087b5aa8(*(undefined8 *)(puVar12[0x171] + 0x60));
  (*extraout_x8_08)();
  func_0x0001087b5db4();
  func_0x0001087b15d4(&lStack_ab0);
  func_0x0001087b5f48();
  func_0x0001087b158c(plVar2);
  func_0x0001087b5a40();
  FUN_1087a8f08(plVar1);
  func_0x0001087b5bf4();
  func_0x0001087b5a84();
LAB_1087ad710:
  func_0x000107c33530(uStack_10);
  if ((bool)uVar9) {
    return;
  }
  ___stack_chk_fail();
LAB_1087ad7d4:
  func_0x000104bd35f4();
LAB_1087ad7d8:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x1087ad7dc);
  (*pcVar7)();
}



/* Entry: 1087ad90c; end: 1087ad98f;  */

undefined8 * FUN_1087ad90c(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_110a705f0;
  func_0x000107c289f8(param_1 + 0x19);
  func_0x000107c289f8(param_1 + 0x13);
  func_0x000107c29778(param_1 + 0x11);
  func_0x000107c299a4(param_1 + 0xe);
  func_0x000107c299a8(param_1 + 0xc);
  lVar1 = param_1[0xb];
  param_1[0xb] = 0;
  if (lVar1 != 0) {
    func_0x0001087b59d4();
  }
  func_0x000107c288a4(param_1 + 9);
  func_0x000107c28868(param_1 + 7);
  func_0x000107c28808(param_1 + 5);
  func_0x000107c28800(param_1 + 3);
  func_0x000107c2995c(param_1 + 1);
  return param_1;
}



/* Entry: 1087ad990; end: 1087ad9cb;  */

void FUN_1087ad990(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  
  if (*param_1 != 0) {
    plVar1 = (long *)(*param_1 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x0001087b60c0();
  return;
}



/* Entry: 1087ad9cc; end: 1087addf7;  */

void FUN_1087ad9cc(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined **ppuVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  uint extraout_w8;
  long *extraout_x8;
  long *plVar18;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  uint extraout_w9;
  uint extraout_w9_00;
  long extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  ulong extraout_x10;
  ulong extraout_x10_00;
  long *plVar19;
  long lVar20;
  long lVar21;
  undefined *puVar22;
  long lVar23;
  undefined8 uVar24;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  
  puVar10 = (undefined8 *)0x118;
  __Znwm();
  *puVar10 = FUN_1087b48ec;
  puVar10[1] = FUN_1087b4c30;
  puVar10[0x1e] = param_4;
  puVar10[0x1f] = param_5;
  puVar10[0x1d] = param_2;
  puVar11 = (undefined8 *)0xb8;
  __Znwm();
  plVar1 = puVar10 + 0x1b;
  plVar2 = puVar10 + 0x1c;
  puVar13 = puVar11;
  func_0x0001087b63e0();
  *puVar13 = &PTR_FUN_110a70680;
  *(undefined1 *)(puVar13 + 0x13) = 0;
  *(undefined1 *)(puVar13 + 0x16) = 0;
  lStack_80 = 0;
  uStack_68 = 0;
  func_0x000107c27f98(&uStack_68);
  func_0x000107c27f9c(&lStack_80);
  plVar19 = puVar10 + 3;
  *plVar19 = (long)puVar11;
  puVar10[2] = puVar11;
  lStack_80 = 0;
  uStack_78 = 0;
  func_0x000107c27fec(&lStack_80);
  lStack_80 = puVar10[2];
  if (lStack_80 != 0) {
    do {
      func_0x0001087b58e8();
    } while (extraout_w10 != 0);
  }
  *param_1 = lStack_80;
  lStack_80 = 0;
  func_0x000107c27f9c(&lStack_80);
  puVar10[0x18] = 0;
  puVar10[0x19] = 0;
  puVar10[0x1a] = 0;
  uVar24 = *param_3;
  puVar10[0x20] = param_3[1];
  ppuVar12 = &PTR___tlv_bootstrap_11340e278;
  (*(code *)PTR___tlv_bootstrap_11340e278)(uVar24);
  plVar18 = extraout_x8;
  do {
    puVar10[0x21] = plVar18;
    uVar9 = plVar18 == (long *)puVar10[0x20];
    if ((bool)uVar9) break;
    puVar13 = (undefined8 *)puVar10[0x1d];
    lVar17 = *plVar18;
    FUN_1087af044(plVar2,puVar13,lVar17,puVar10[0x1e],puVar10[0x1f]);
    *plVar1 = *plVar2;
    do {
      func_0x0001087b58e8();
    } while (extraout_w10_00 != 0);
    func_0x0001087b5a94(*plVar1);
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(puVar10 + 0x22) = 0;
      lVar20 = *plVar1;
      puVar22 = *ppuVar12;
      if (puVar22 == (undefined *)0x0) {
        func_0x000107c3a5c0();
        puVar22 = (undefined *)*puVar13;
      }
      plVar18 = (long *)(lVar20 + 0x10);
      do {
        if (*plVar18 == 0) {
          bVar8 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar8) {
            *plVar18 = 1;
            ExclusiveMonitorsStatus();
          }
          func_0x0001087b6794();
          plVar18 = extraout_x8_01;
          uVar6 = extraout_w9_00;
          uVar14 = extraout_x10_00;
        }
        else {
          func_0x0001087b67a0();
          plVar18 = extraout_x8_00;
          uVar6 = extraout_w9;
          uVar14 = extraout_x10;
        }
        if ((uVar14 & 1) != 0) {
          func_0x0001087b5978();
          if ((bool)uVar9) {
            func_0x0001087b5948();
            func_0x0001087b5924();
            func_0x0001087b5878();
            *(undefined8 **)(lVar20 + 0x90) = puVar13;
          }
          func_0x0001087b5988();
          *(undefined **)(extraout_x8_03 + 0x20) = puVar22;
          func_0x0001087b5958(*(undefined8 *)(lVar20 + 0x90));
          *(undefined8 *)(lVar20 + 0x10) = 0;
          return;
        }
      } while ((uVar6 >> 1 & 1) == 0);
    }
    if (((uint)*(undefined8 *)(*plVar1 + 0x10) >> 5 & 1) != 0) {
      func_0x0001087b5b7c(*plVar1,puVar10 + 0x14);
      __ZSt17rethrow_exceptionSt13exception_ptr(puVar10 + 0x14);
LAB_1087add94:
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1087add98);
      (*pcVar7)();
    }
    func_0x0001087b6378();
    func_0x0001087b5cb4();
    func_0x0001087b5a8c();
    uVar14 = puVar10[0x19];
    bVar8 = (ulong)puVar10[0x1a] <= uVar14;
    if (bVar8) {
      lVar20 = puVar10[0x18];
      if (((long)(uVar14 - lVar20) >> 7) + 1U >> 0x39 != 0) {
        FUN_1087aee8c();
        goto LAB_1087add94;
      }
      func_0x0001087b5fe8();
      lVar21 = extraout_x9;
      if (bVar8) {
        lVar21 = extraout_x8_02;
      }
      if (lVar21 == 0) {
        lVar21 = 0;
        lVar17 = 0;
      }
      else {
        FUN_1087aee98();
      }
      lVar20 = lVar21 + (uVar14 - lVar20);
      FUN_1087b151c(lVar20,puVar10 + 4);
      lVar23 = puVar10[0x18];
      lVar4 = puVar10[0x19];
      lVar3 = lVar20 + (lVar23 - lVar4);
      puVar10[0x1b] = lVar3;
      puVar10[0x1c] = lVar3;
      puVar10[0x14] = puVar10 + 0x1a;
      puVar10[0x15] = plVar2;
      puVar10[0x16] = plVar1;
      lVar15 = lVar3;
      for (lVar16 = lVar23; lVar16 != lVar4; lVar16 = lVar16 + 0x80) {
        FUN_1087b151c(lVar15,lVar16);
        lVar15 = *plVar1 + 0x80;
        *plVar1 = lVar15;
      }
      *(undefined1 *)(puVar10 + 0x17) = 1;
      for (; lVar23 != lVar4; lVar23 = lVar23 + 0x80) {
        func_0x0001087a3420(lVar23 + 0x10);
      }
      lVar20 = lVar20 + 0x80;
      FUN_1087aeeec(puVar10 + 0x14);
      lVar16 = puVar10[0x18];
      puVar10[0x18] = lVar3;
      puVar10[0x19] = lVar20;
      puVar10[0x1a] = lVar21 + lVar17 * 0x80;
      if (lVar16 != 0) {
        __ZdlPv();
      }
    }
    else {
      FUN_1087b151c(uVar14,puVar10 + 4);
      lVar20 = uVar14 + 0x80;
    }
    lVar17 = puVar10[0x21];
    puVar10[0x19] = lVar20;
    iVar5 = *(int *)(lVar20 + -0x6c);
    func_0x0001087b602c();
    plVar18 = (long *)(lVar17 + 8);
  } while (iVar5 == 0);
  lVar17 = *plVar19;
  do {
    lStack_80 = 0;
    lVar20 = lVar17 + 0x10;
    func_0x0001087b5a50(lVar20,&lStack_80);
    if ((int)lVar20 != 0) {
      if (*(char *)(lVar17 + 0xb0) == '\x01') {
        FUN_1087aefd0(lVar17 + 0x98);
      }
      uVar24 = puVar10[0x18];
      *(undefined8 *)(lVar17 + 0xa0) = puVar10[0x19];
      *(undefined8 *)(lVar17 + 0x98) = uVar24;
      *(undefined8 *)(lVar17 + 0xa8) = puVar10[0x1a];
      puVar10[0x18] = 0;
      puVar10[0x19] = 0;
      puVar10[0x1a] = 0;
      *(undefined1 *)(lVar17 + 0xb0) = 1;
      func_0x0001087b6348(lVar17 + 0x10);
      func_0x000107c31508(lVar17,plVar19);
      break;
    }
  } while (((uint)lStack_80 >> 1 & 1) == 0);
  func_0x0001087b6234(plVar19);
  func_0x0001087b5f0c();
  func_0x0001087b5a40();
  func_0x0001087b5a84();
  return;
}



/* Entry: 1087addf8; end: 1087aded3;  */

undefined8 * FUN_1087addf8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x000107c335c8();
  return param_1;
}



/* Entry: 1087aded4; end: 1087aded7;  */

undefined8 * FUN_1087aded4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a70640;
  func_0x000107c299a4(param_1 + 8);
  func_0x000107c28868(param_1 + 5);
  func_0x000107c299a0(param_1 + 2);
  return param_1;
}



/* Entry: 1087aded8; end: 1087adeeb;  */

void FUN_1087aded8(void)

{
  FUN_1087ae28c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087adeec; end: 1087ae28b;  */

void FUN_1087adeec(undefined8 param_1,long param_2,undefined8 *param_3,long *param_4)

{
  uint uVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  uint extraout_w8;
  uint extraout_w8_00;
  undefined8 extraout_x8;
  long lVar5;
  long *extraout_x8_00;
  long *plVar6;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long *extraout_x8_03;
  long *extraout_x8_04;
  long *extraout_x8_05;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  uint extraout_w10_02;
  uint extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  uint extraout_w10_06;
  uint extraout_w10_07;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar7;
  uint extraout_w11_01;
  uint extraout_w11_02;
  undefined1 auStack_b8 [112];
  undefined8 uStack_48;
  
  func_0x000107c33538();
  puVar2 = (undefined8 *)0xc8;
  uStack_48 = extraout_x8;
  __Znwm();
  *puVar2 = FUN_1087b3e20;
  puVar2[1] = FUN_1087b3f3c;
  puVar2[0x17] = param_2;
  func_0x0001087a93b4(puVar2 + 2);
  FUN_1087a9334(param_1,puVar2 + 2);
  if ((*(long **)(param_2 + 0x10) != (long *)0x0) &&
     (param_3 = (undefined8 *)(ulong)*(uint *)(param_2 + 0x38), *(uint *)(param_2 + 0x38) != 0)) {
    (**(code **)(**(long **)(param_2 + 0x10) + 0x20))();
    in_ZR = *(char *)(param_2 + 0x50) == '\x01';
    if (((bool)in_ZR) && (in_ZR = *(char *)(param_2 + 0x20) == '\x01', (bool)in_ZR)) {
      (**(code **)(**(long **)(param_2 + 0x40) + 0x10))(puVar2 + 0xf);
      func_0x0001087b6830();
      func_0x000107c314e0(auStack_b8);
      func_0x000107c2886c(puVar2 + 0x10,auStack_b8,puVar2 + 0xf);
      func_0x000107c27f9c(auStack_b8);
      puVar2[0x13] = puVar2[0x10];
      if (puVar2[0x10] != 0) {
        do {
          func_0x0001087b58e8();
        } while (extraout_w10 != 0);
      }
      lVar5 = *param_4;
      puVar2[0x14] = lVar5;
      if (lVar5 != 0) {
        do {
          func_0x0001087b58e8();
        } while (extraout_w10_00 != 0);
      }
      func_0x0001087b6214();
      plVar3 = puVar2 + 0x13;
      param_3 = puVar2 + 0x14;
      FUN_1087ae2d0(puVar2 + 0x12,plVar3,param_3,puVar2 + 0xc);
      puVar2[0x11] = puVar2[0x12];
      do {
        func_0x0001087b58e8();
      } while (extraout_w10_01 != 0);
      func_0x0001087b5a94(puVar2[0x11]);
      if ((extraout_w8 >> 1 & 1) == 0) {
        *(undefined1 *)(puVar2 + 0x18) = 0;
        func_0x0001087b58a4();
        if (*plVar3 == 0) {
          func_0x000107c3a5c0();
        }
        func_0x0001087b633c();
        plVar6 = extraout_x8_00;
        do {
          if (*plVar6 == 0) {
            func_0x0001087b5968();
            plVar6 = extraout_x8_02;
            uVar1 = extraout_w10_03;
            uVar7 = extraout_w11_00;
          }
          else {
            func_0x0001087b5c38();
            plVar6 = extraout_x8_01;
            uVar1 = extraout_w10_02;
            uVar7 = extraout_w11;
          }
          if ((uVar7 & 1) != 0) {
LAB_1087ae18c:
            func_0x0001087b5b40();
            if ((bool)in_ZR) {
              func_0x0001087b5948();
              func_0x0001087b58d8();
              func_0x0001087b5934();
              func_0x0001087b5e90();
            }
            func_0x0001087b58f8();
            goto LAB_1087ae178;
          }
        } while ((uVar1 >> 1 & 1) == 0);
      }
      func_0x000107c28870(puVar2 + 0x11);
      func_0x0001087b5f38();
      func_0x0001087b5fa0();
      func_0x0001087b5bfc();
      func_0x0001087b5fc0();
      func_0x0001087b5f04();
      func_0x0001087b6204();
      puVar4 = puVar2 + 0xf;
    }
    else {
      func_0x0001087b6830();
      func_0x000107c314e0(puVar2 + 0x15);
      lVar5 = *param_4;
      puVar2[0x16] = lVar5;
      if (lVar5 != 0) {
        do {
          func_0x0001087b58e8();
        } while (extraout_w10_04 != 0);
      }
      func_0x0001087b6214();
      plVar3 = puVar2 + 0x15;
      param_3 = puVar2 + 0x16;
      FUN_1087ae498(puVar2 + 0x10,plVar3,param_3,puVar2 + 0xc);
      puVar2[0xf] = puVar2[0x10];
      do {
        func_0x0001087b58e8();
      } while (extraout_w10_05 != 0);
      func_0x0001087b5a94(puVar2[0xf]);
      if ((extraout_w8_00 >> 1 & 1) == 0) {
        *(undefined1 *)(puVar2 + 0x18) = 1;
        func_0x0001087b58a4();
        if (*plVar3 == 0) {
          func_0x000107c3a5c0();
        }
        func_0x0001087b633c();
        plVar6 = extraout_x8_03;
        do {
          if (*plVar6 == 0) {
            func_0x0001087b5968();
            plVar6 = extraout_x8_05;
            uVar1 = extraout_w10_07;
            uVar7 = extraout_w11_02;
          }
          else {
            func_0x0001087b5c38();
            plVar6 = extraout_x8_04;
            uVar1 = extraout_w10_06;
            uVar7 = extraout_w11_01;
          }
          if ((uVar7 & 1) != 0) goto LAB_1087ae18c;
        } while ((uVar1 >> 1 & 1) == 0);
      }
      func_0x000107c28834(puVar2 + 0xf);
      func_0x000107c27f9c(puVar2 + 0xf);
      func_0x0001087b6204();
      func_0x0001087b5bfc();
      func_0x000107c27f9c(puVar2 + 0x16);
      puVar4 = puVar2 + 0x15;
    }
    func_0x000107c27f9c(puVar4);
  }
  func_0x0001087b5cbc();
  func_0x0001087b636c();
  func_0x0001087a3420(auStack_b8);
  plVar3 = puVar2 + 4;
  func_0x0001087a33a8(plVar3);
  while( true ) {
    func_0x0001087b5a40();
    func_0x0001087b5a84();
LAB_1087ae178:
    func_0x000107c33530(uStack_48);
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    if ((int)param_3 != 0) goto LAB_1087ae1c4;
    do {
      func_0x0001087b5c18();
LAB_1087ae1c4:
      func_0x000104bd46a0(plVar3);
    } while ((int)param_3 == 0);
    func_0x0001087b5f38();
    func_0x0001087b5fa0();
    func_0x0001087b5bfc();
    func_0x0001087b5fc0();
    func_0x0001087b5f04();
    func_0x0001087b6204();
    plVar3 = puVar2 + 0xf;
    func_0x000107c27f9c();
    func_0x0001087b5c10();
    func_0x0001087b5a7c();
    ___cxa_end_catch();
  }
  return;
}



/* Entry: 1087ae28c; end: 1087ae2cf;  */

undefined8 * FUN_1087ae28c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a70640;
  func_0x000107c299a4(param_1 + 8);
  func_0x000107c28868(param_1 + 5);
  func_0x000107c299a0(param_1 + 2);
  return param_1;
}



/* Entry: 1087ae2d0; end: 1087ae497;  */

void FUN_1087ae2d0(long param_1)

{
  undefined1 uVar1;
  uint uVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  long *plVar3;
  undefined1 extraout_w8;
  uint extraout_w8_00;
  long extraout_x8;
  long extraout_x8_00;
  long lVar4;
  long *extraout_x8_01;
  long *plVar5;
  long *extraout_x8_02;
  long *extraout_x8_03;
  long extraout_x8_04;
  undefined1 extraout_w9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  uint extraout_w10_04;
  uint extraout_w10_05;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar6;
  long *unaff_x20;
  long lVar7;
  
  func_0x0001087b5e70();
  func_0x0001087b5aec(FUN_1087b3b18);
  if (extraout_x8 != 0) {
    do {
      func_0x0001087b58e8();
    } while (extraout_w10 != 0);
  }
  func_0x0001087b6738();
  if (extraout_x8_00 != 0) {
    do {
      func_0x0001087b58e8();
    } while (extraout_w10_00 != 0);
  }
  FUN_1087ae93c(param_1 + 0x10);
  plVar3 = (long *)(param_1 + 0x10);
  FUN_1087ae65c();
  lVar4 = *unaff_x20;
  *(long *)(param_1 + 0x58) = lVar4;
  if (lVar4 != 0) {
    do {
      func_0x0001087b58e8();
    } while (extraout_w10_01 != 0);
  }
  *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x40);
  if (*(long *)(param_1 + 0x40) != 0) {
    do {
      func_0x0001087b58e8();
    } while (extraout_w10_02 != 0);
  }
  func_0x0001087b6384();
  func_0x0001087b67ec();
  FUN_1087ae6c0();
  func_0x0001087b5e40();
  do {
    func_0x0001087b58e8();
  } while (extraout_w10_03 != 0);
  func_0x0001087b5a10();
  if ((extraout_w8_00 >> 1 & 1) == 0) {
    *(undefined1 *)(param_1 + 0x68) = 0;
    lVar4 = *(long *)(param_1 + 0x48);
    func_0x0001087b58a4();
    lVar7 = *plVar3;
    if (lVar7 == 0) {
      func_0x000107c3a5c0();
      lVar7 = *plVar3;
    }
    func_0x0001087b67d4();
    plVar5 = extraout_x8_01;
    do {
      if (*plVar5 == 0) {
        func_0x0001087b5968();
        plVar5 = extraout_x8_03;
        uVar2 = extraout_w10_05;
        uVar6 = extraout_w11_00;
      }
      else {
        func_0x0001087b5c38();
        plVar5 = extraout_x8_02;
        uVar2 = extraout_w10_04;
        uVar6 = extraout_w11;
      }
      if ((uVar6 & 1) != 0) {
        func_0x0001087b5978();
        if ((bool)in_ZR) {
          func_0x0001087b5948();
          uVar1 = extraout_w8;
          if ((bool)in_CY) {
            uVar1 = extraout_w9;
          }
          func_0x0001087b58d8();
          *(undefined1 *)plVar3 = uVar1;
          func_0x0001087b58b4(0);
          *(long **)(lVar4 + 0x90) = plVar3;
        }
        func_0x0001087b5988();
        *(long *)(extraout_x8_04 + 0x20) = lVar7;
        func_0x0001087b5958(*(undefined8 *)(lVar4 + 0x90));
        func_0x0001087b67e0();
        return;
      }
    } while ((uVar2 >> 1 & 1) == 0);
  }
  func_0x0001087b5d20();
  func_0x0001087b6024();
  func_0x0001087b5aa0();
  func_0x0001087b5b60();
  func_0x0001087b5ac0();
  func_0x0001087b5be4();
  func_0x0001087b5c30();
  func_0x0001087b5a40();
  func_0x0001087b5b28();
  func_0x0001087b5a8c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087ae498; end: 1087ae65b;  */

void FUN_1087ae498(long param_1)

{
  undefined1 uVar1;
  uint uVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  long *plVar3;
  undefined1 extraout_w8;
  uint extraout_w8_00;
  long extraout_x8;
  long extraout_x8_00;
  long lVar4;
  long *extraout_x8_01;
  long *plVar5;
  long *extraout_x8_02;
  long *extraout_x8_03;
  long extraout_x8_04;
  undefined1 extraout_w9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  uint extraout_w10_04;
  uint extraout_w10_05;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar6;
  long *unaff_x20;
  long lVar7;
  
  func_0x0001087b5e70();
  func_0x0001087b5aec(FUN_1087b3d74);
  if (extraout_x8 != 0) {
    do {
      func_0x0001087b58e8();
    } while (extraout_w10 != 0);
  }
  func_0x0001087b6738();
  if (extraout_x8_00 != 0) {
    do {
      func_0x0001087b58e8();
    } while (extraout_w10_00 != 0);
  }
  func_0x000107c27f94(param_1 + 0x10);
  plVar3 = (long *)(param_1 + 0x10);
  func_0x000107c287c4();
  lVar4 = *unaff_x20;
  *(long *)(param_1 + 0x58) = lVar4;
  if (lVar4 != 0) {
    do {
      func_0x0001087b58e8();
    } while (extraout_w10_01 != 0);
  }
  *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x40);
  if (*(long *)(param_1 + 0x40) != 0) {
    do {
      func_0x0001087b58e8();
    } while (extraout_w10_02 != 0);
  }
  func_0x0001087b6384();
  func_0x0001087b67ec();
  FUN_1087aeb10();
  func_0x0001087b5e40();
  do {
    func_0x0001087b58e8();
  } while (extraout_w10_03 != 0);
  func_0x0001087b5a10();
  if ((extraout_w8_00 >> 1 & 1) == 0) {
    *(undefined1 *)(param_1 + 0x68) = 0;
    lVar4 = *(long *)(param_1 + 0x48);
    func_0x0001087b58a4();
    lVar7 = *plVar3;
    if (lVar7 == 0) {
      func_0x000107c3a5c0();
      lVar7 = *plVar3;
    }
    func_0x0001087b67d4();
    plVar5 = extraout_x8_01;
    do {
      if (*plVar5 == 0) {
        func_0x0001087b5968();
        plVar5 = extraout_x8_03;
        uVar2 = extraout_w10_05;
        uVar6 = extraout_w11_00;
      }
      else {
        func_0x0001087b5c38();
        plVar5 = extraout_x8_02;
        uVar2 = extraout_w10_04;
        uVar6 = extraout_w11;
      }
      if ((uVar6 & 1) != 0) {
        func_0x0001087b5978();
        if ((bool)in_ZR) {
          func_0x0001087b5948();
          uVar1 = extraout_w8;
          if ((bool)in_CY) {
            uVar1 = extraout_w9;
          }
          func_0x0001087b58d8();
          *(undefined1 *)plVar3 = uVar1;
          func_0x0001087b58b4(0);
          *(long **)(lVar4 + 0x90) = plVar3;
        }
        func_0x0001087b5988();
        *(long *)(extraout_x8_04 + 0x20) = lVar7;
        func_0x0001087b5958(*(undefined8 *)(lVar4 + 0x90));
        func_0x0001087b67e0();
        return;
      }
    } while ((uVar2 >> 1 & 1) == 0);
  }
  func_0x0001087b63a0();
  func_0x0001087b5aa0();
  func_0x0001087b5b60();
  func_0x0001087b5ac0();
  func_0x0001087b5be4();
  func_0x0001087b5c30();
  func_0x0001087b5ca4();
  func_0x0001087b5a40();
  func_0x0001087b5b28();
  func_0x0001087b5a8c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087ae65c; end: 1087ae697;  */

void FUN_1087ae65c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  
  if (*param_1 != 0) {
    plVar1 = (long *)(*param_1 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x0001087b60c0();
  return;
}



/* Entry: 1087ae698; end: 1087ae6bf;  */

/* WARNING: Removing unreachable block (ram,0x0001005f953c) */
/* WARNING: Removing unreachable block (ram,0x0001005f9544) */
/* WARNING: Removing unreachable block (ram,0x0001005f954c) */

void FUN_1087ae698(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *unaff_x19;
  long *plVar5;
  
  func_0x0001087b67c0();
  FUN_1087ae9b4();
  plVar5 = (long *)*unaff_x19;
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar4 >> 0x21 == 1) {
      (**(code **)(*plVar5 + 0x10))(plVar5,1);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  *unaff_x19 = 0;
  return;
}



/* Entry: 1087ae6c0; end: 1087ae93b;  */

void FUN_1087ae6c0(long param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  undefined1 uVar4;
  long *plVar5;
  undefined1 extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  uint extraout_w8_02;
  long extraout_x8;
  long extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long *extraout_x8_03;
  long *extraout_x8_04;
  long *plVar6;
  long *extraout_x8_05;
  long *extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  undefined1 extraout_w9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  uint extraout_w10_02;
  uint extraout_w10_03;
  int extraout_w10_04;
  uint extraout_w10_05;
  uint extraout_w10_06;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar7;
  uint extraout_w11_01;
  uint extraout_w11_02;
  long *unaff_x20;
  long unaff_x22;
  long lVar8;
  
  func_0x0001087b5e58();
  func_0x0001087b5aec(FUN_1087b3968);
  if (extraout_x8 != 0) {
    do {
      func_0x0001087b58e8();
    } while (extraout_w10 != 0);
  }
  func_0x0001087b6738();
  if (extraout_x8_00 != 0) {
    do {
      func_0x0001087b58e8();
    } while (extraout_w10_00 != 0);
  }
  func_0x0001087b5fc8();
  FUN_1087ae93c();
  FUN_1087ae65c(param_1 + 0x10);
  plVar5 = unaff_x20;
  FUN_1087aea2c(param_1 + 0x50);
  func_0x0001087b5e40();
  do {
    func_0x0001087b58e8();
  } while (extraout_w10_01 != 0);
  func_0x0001087b5a10();
  if ((extraout_w8_00 >> 1 & 1) == 0) {
    *(undefined1 *)(param_1 + 0x60) = 0;
    func_0x0001087b5a00();
    lVar8 = *plVar5;
    if (lVar8 == 0) {
      func_0x000107c3a5c0();
      lVar8 = *plVar5;
    }
    func_0x0001087b630c();
    plVar6 = extraout_x8_01;
    do {
      if (*plVar6 == 0) {
        func_0x0001087b5968();
        plVar6 = extraout_x8_03;
        uVar1 = extraout_w10_03;
        uVar7 = extraout_w11_00;
      }
      else {
        func_0x0001087b5c38();
        plVar6 = extraout_x8_02;
        uVar1 = extraout_w10_02;
        uVar7 = extraout_w11;
      }
      if ((uVar7 & 1) != 0) {
        func_0x0001087b5978();
        if ((bool)in_ZR) {
          func_0x0001087b5948();
          func_0x0001087b5924();
          func_0x0001087b5878();
          *(long **)(unaff_x22 + 0x90) = plVar5;
        }
        func_0x0001087b5988();
        *(long *)(extraout_x8_07 + 0x20) = lVar8;
        goto LAB_1087ae884;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x0001087b5d20();
  unaff_x22 = *plVar5;
  func_0x0001087b5aa0();
  func_0x0001087b5b60();
  uVar3 = unaff_x22 != 0;
  uVar4 = unaff_x22 == 1;
  if ((bool)uVar4) {
    func_0x0001087b5a94(*(undefined8 *)(param_1 + 0x40));
    if ((extraout_w8_02 >> 5 & 1) == 0) {
      func_0x0001087b5e30();
      func_0x0001087b6148();
      func_0x0001087b5b14();
      ___cxa_throw(plVar5);
    }
    else {
      func_0x0001087b5a20();
      func_0x0001087b61c0();
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1087ae8d0);
    (*pcVar2)();
  }
  func_0x0001087b5ef8(*unaff_x20);
  do {
    func_0x0001087b58e8();
  } while (extraout_w10_04 != 0);
  func_0x0001087b5a10();
  if ((extraout_w8_01 >> 1 & 1) == 0) {
    func_0x0001087b68a0();
    func_0x0001087b5a00();
    lVar8 = *plVar5;
    if (lVar8 == 0) {
      func_0x000107c3a5c0();
      lVar8 = *plVar5;
    }
    func_0x0001087b630c();
    plVar6 = extraout_x8_04;
    do {
      if (*plVar6 == 0) {
        func_0x0001087b5968();
        plVar6 = extraout_x8_06;
        uVar1 = extraout_w10_06;
        uVar7 = extraout_w11_02;
      }
      else {
        func_0x0001087b5c38();
        plVar6 = extraout_x8_05;
        uVar1 = extraout_w10_05;
        uVar7 = extraout_w11_01;
      }
      if ((uVar7 & 1) != 0) {
        func_0x0001087b5978();
        if ((bool)uVar4) {
          func_0x0001087b5948();
          uVar4 = extraout_w8;
          if ((bool)uVar3) {
            uVar4 = extraout_w9;
          }
          func_0x0001087b58d8();
          *(undefined1 *)plVar5 = uVar4;
          func_0x0001087b58b4(0);
          *(long **)(unaff_x22 + 0x90) = plVar5;
        }
        func_0x0001087b5988();
        *(long *)(extraout_x8_08 + 0x20) = lVar8;
LAB_1087ae884:
        func_0x0001087b5958(*(undefined8 *)(unaff_x22 + 0x90));
        *(undefined8 *)(unaff_x22 + 0x10) = 0;
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x0001087b5d20();
  func_0x0001087b6024();
  func_0x0001087b5aa0();
  func_0x0001087b5a40();
  func_0x0001087b5ac0();
  func_0x0001087b5b28();
  func_0x0001087b5a8c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087ae93c; end: 1087ae967;  */

undefined8 FUN_1087ae93c(undefined8 param_1)

{
  undefined1 auStack_30 [16];
  
  FUN_1087ae968(auStack_30);
  func_0x0001087b5f24();
  return param_1;
}



/* Entry: 1087ae968; end: 1087ae9b3;  */

void FUN_1087ae968(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0xa8;
  __Znwm();
  func_0x000107c28884();
  uStack_30 = 0;
  uStack_28 = 0;
  *param_1 = uVar1;
  param_1[1] = uVar1;
  func_0x000107c27f98(&uStack_30);
  func_0x000107c27f9c(&uStack_28);
  return;
}



/* Entry: 1087ae9b4; end: 1087aea2b;  */

long FUN_1087ae9b4(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x0001087b5d6c();
  do {
    uStack_38 = 0;
    lVar1 = unaff_x20 + 0x10;
    func_0x0001087b5a50(lVar1,&uStack_38);
    if ((int)lVar1 != 0) {
      *(undefined8 *)(unaff_x20 + 0x98) = *param_3;
      *(undefined1 *)(unaff_x20 + 0xa0) = 1;
      func_0x0001087b6348(unaff_x20 + 0x10);
      func_0x0001087b677c();
      func_0x000107c31508();
      return lVar1;
    }
  } while (((uint)uStack_38 >> 1 & 1) == 0);
  return lVar1;
}



/* Entry: 1087aea2c; end: 1087aead3;  */

void FUN_1087aea2c(void)

{
  undefined8 uVar1;
  undefined8 *extraout_x8;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  long lStack_38;
  
  func_0x0001087b5a70();
  func_0x000107c28874(&uStack_48);
  func_0x000107c28878(&uStack_50,2);
  uVar1 = uStack_50;
  uStack_50 = 0;
  func_0x000107c28888(lStack_38 + 0x18,uVar1);
  func_0x000107c28890(&uStack_50);
  *(undefined8 *)(lStack_38 + 8) = 2;
  func_0x000107c2887c(lStack_38,auStack_40);
  func_0x000107c28880(lStack_38,0);
  uVar1 = uStack_48;
  uStack_50 = 0;
  uStack_48 = 0;
  *extraout_x8 = uVar1;
  func_0x000107c27f9c(&uStack_50);
  func_0x000107c2889c(&uStack_48);
  return;
}



/* Entry: 1087aead4; end: 1087aead7;  */

void FUN_1087aead4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 1087aead8; end: 1087aeb0f;  */

void FUN_1087aead8(undefined8 *param_1)

{
  __ZNSt13runtime_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE();
  *param_1 = &PTR_FUN_110a70b98;
  return;
}



/* Entry: 1087aeb10; end: 1087aed7f;  */

void FUN_1087aeb10(long param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  undefined1 uVar4;
  long *plVar5;
  undefined1 extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  uint extraout_w8_02;
  long extraout_x8;
  long extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long *extraout_x8_03;
  long *extraout_x8_04;
  long *plVar6;
  long *extraout_x8_05;
  long *extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  undefined1 extraout_w9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  uint extraout_w10_02;
  uint extraout_w10_03;
  int extraout_w10_04;
  uint extraout_w10_05;
  uint extraout_w10_06;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar7;
  uint extraout_w11_01;
  uint extraout_w11_02;
  long *unaff_x20;
  long unaff_x22;
  long lVar8;
  
  func_0x0001087b5e58();
  func_0x0001087b5aec(FUN_1087b3bc8);
  if (extraout_x8 != 0) {
    do {
      func_0x0001087b58e8();
    } while (extraout_w10 != 0);
  }
  func_0x0001087b6738();
  if (extraout_x8_00 != 0) {
    do {
      func_0x0001087b58e8();
    } while (extraout_w10_00 != 0);
  }
  func_0x0001087b5fc8();
  func_0x000107c27f94();
  func_0x0001087b5dc0();
  plVar5 = unaff_x20;
  func_0x000107c2886c(param_1 + 0x50);
  func_0x0001087b5e40();
  do {
    func_0x0001087b58e8();
  } while (extraout_w10_01 != 0);
  func_0x0001087b5a10();
  if ((extraout_w8_00 >> 1 & 1) == 0) {
    *(undefined1 *)(param_1 + 0x60) = 0;
    func_0x0001087b5a00();
    lVar8 = *plVar5;
    if (lVar8 == 0) {
      func_0x000107c3a5c0();
      lVar8 = *plVar5;
    }
    func_0x0001087b630c();
    plVar6 = extraout_x8_01;
    do {
      if (*plVar6 == 0) {
        func_0x0001087b5968();
        plVar6 = extraout_x8_03;
        uVar1 = extraout_w10_03;
        uVar7 = extraout_w11_00;
      }
      else {
        func_0x0001087b5c38();
        plVar6 = extraout_x8_02;
        uVar1 = extraout_w10_02;
        uVar7 = extraout_w11;
      }
      if ((uVar7 & 1) != 0) {
        func_0x0001087b5978();
        if ((bool)in_ZR) {
          func_0x0001087b5948();
          func_0x0001087b5924();
          func_0x0001087b5878();
          *(long **)(unaff_x22 + 0x90) = plVar5;
        }
        func_0x0001087b5988();
        *(long *)(extraout_x8_07 + 0x20) = lVar8;
        goto LAB_1087aecc8;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x0001087b5d20();
  unaff_x22 = *plVar5;
  func_0x0001087b5aa0();
  func_0x0001087b5b60();
  uVar3 = unaff_x22 != 0;
  uVar4 = unaff_x22 == 1;
  if ((bool)uVar4) {
    func_0x0001087b5a94(*(undefined8 *)(param_1 + 0x40));
    if ((extraout_w8_02 >> 5 & 1) == 0) {
      func_0x0001087b5e30();
      func_0x0001087b6148();
      func_0x0001087b5b14();
      ___cxa_throw(plVar5);
    }
    else {
      func_0x0001087b5a20();
      func_0x0001087b61c0();
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1087aed14);
    (*pcVar2)();
  }
  func_0x0001087b5ef8(*unaff_x20);
  do {
    func_0x0001087b58e8();
  } while (extraout_w10_04 != 0);
  func_0x0001087b5a10();
  if ((extraout_w8_01 >> 1 & 1) == 0) {
    func_0x0001087b68a0();
    func_0x0001087b5a00();
    lVar8 = *plVar5;
    if (lVar8 == 0) {
      func_0x000107c3a5c0();
      lVar8 = *plVar5;
    }
    func_0x0001087b630c();
    plVar6 = extraout_x8_04;
    do {
      if (*plVar6 == 0) {
        func_0x0001087b5968();
        plVar6 = extraout_x8_06;
        uVar1 = extraout_w10_06;
        uVar7 = extraout_w11_02;
      }
      else {
        func_0x0001087b5c38();
        plVar6 = extraout_x8_05;
        uVar1 = extraout_w10_05;
        uVar7 = extraout_w11_01;
      }
      if ((uVar7 & 1) != 0) {
        func_0x0001087b5978();
        if ((bool)uVar4) {
          func_0x0001087b5948();
          uVar4 = extraout_w8;
          if ((bool)uVar3) {
            uVar4 = extraout_w9;
          }
          func_0x0001087b58d8();
          *(undefined1 *)plVar5 = uVar4;
          func_0x0001087b58b4(0);
          *(long **)(unaff_x22 + 0x90) = plVar5;
        }
        func_0x0001087b5988();
        *(long *)(extraout_x8_08 + 0x20) = lVar8;
LAB_1087aecc8:
        func_0x0001087b5958(*(undefined8 *)(unaff_x22 + 0x90));
        *(undefined8 *)(unaff_x22 + 0x10) = 0;
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x0001087b63a0();
  func_0x0001087b5aa0();
  func_0x0001087b5ca4();
  func_0x0001087b5a40();
  func_0x0001087b5ac0();
  func_0x0001087b5b28();
  func_0x0001087b5a8c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087aed80; end: 1087aee8b;  */

ulong * FUN_1087aed80(ulong *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  long lVar5;
  ulong *puStack_80;
  undefined1 uStack_78;
  ulong *puStack_70;
  ulong *puStack_68;
  ulong *puStack_60;
  undefined1 uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar5 = *param_2;
  lVar1 = param_2[1];
  uStack_78 = 0;
  lVar2 = lVar1 - lVar5;
  puStack_80 = param_1;
  if (lVar2 != 0) {
    uVar4 = lVar2 >> 7;
    if (uVar4 >> 0x39 != 0) {
      FUN_1087aee8c();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1087aee68);
      (*pcVar3)();
    }
    FUN_1087aee98();
    *param_1 = uVar4;
    param_1[1] = uVar4;
    puStack_70 = param_1 + 2;
    *puStack_70 = uVar4 + (long)param_2 * 0x80;
    puStack_68 = &uStack_50;
    puStack_60 = &uStack_48;
    uStack_58 = 0;
    uStack_50 = uVar4;
    for (; uStack_48 = uVar4, lVar5 != lVar1; lVar5 = lVar5 + 0x80) {
      func_0x0001087aeecc(uVar4,lVar5);
      uVar4 = uStack_48 + 0x80;
    }
    uStack_58 = 1;
    FUN_1087aeeec(&puStack_70);
    param_1[1] = uVar4;
  }
  uStack_78 = 1;
  FUN_1087aef3c(&puStack_80);
  return param_1;
}



/* Entry: 1087aee8c; end: 1087aee97;  */

void FUN_1087aee8c(ulong param_1)

{
  func_0x0001087b5e24();
  if (param_1 >> 0x39 == 0) {
    __Znwm(param_1 << 7);
    return;
  }
  func_0x000104bd35f4();
  func_0x0001087b618c();
  FUN_1087a3188();
  return;
}



/* Entry: 1087aee98; end: 1087aeeeb;  */

void FUN_1087aee98(ulong param_1)

{
  if (param_1 >> 0x39 == 0) {
    __Znwm(param_1 << 7);
    return;
  }
  func_0x000104bd35f4();
  func_0x0001087b618c();
  FUN_1087a3188();
  return;
}



/* Entry: 1087aeeec; end: 1087aef3b;  */

long FUN_1087aeeec(long param_1)

{
  long lVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    lVar2 = **(long **)(param_1 + 8);
    for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != lVar2; lVar1 = lVar1 + -0x80) {
      func_0x0001087a3420(lVar1 + -0x70);
    }
  }
  return param_1;
}



/* Entry: 1087aef3c; end: 1087aef67;  */

long FUN_1087aef3c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_1087aef68(param_1);
  }
  return param_1;
}


