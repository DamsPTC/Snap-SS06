/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1096da0c0; end: 1096da24b;  */

undefined8 * FUN_1096da0c0(undefined8 *param_1)

{
  *(undefined8 *)((long)param_1 + 0xb4) = 0;
  *(undefined8 *)((long)param_1 + 0xac) = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  FUN_1096b6920(param_1 + 0x18);
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x28] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  func_0x000107c2ace8(param_1 + 0x29);
  param_1[0x2b] = 0;
  *(undefined1 *)(param_1 + 0x2c) = 1;
  FUN_1096b81dc(param_1 + 0x2d);
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  return param_1;
}



/* Entry: 1096da24c; end: 1096da29b;  */

long FUN_1096da24c(long param_1)

{
  FUN_1096da29c(param_1 + 8);
  return param_1;
}



/* Entry: 1096da29c; end: 1096da3d3;  */

long FUN_1096da29c(long param_1)

{
  long lVar1;
  long lStack_28;
  
  *(undefined ***)(param_1 + 0x168) = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(param_1 + 0x168);
  lVar1 = *(long *)(param_1 + 0x158);
  *(undefined8 *)(param_1 + 0x158) = 0;
  if (lVar1 != 0) {
    FUN_1096ca830(param_1 + 0x158);
  }
  *(undefined ***)(param_1 + 0x148) = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(param_1 + 0x148);
  if (*(long *)(param_1 + 0x130) != 0) {
    *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x130);
    __ZdlPv();
  }
  lStack_28 = param_1 + 0x118;
  func_0x000104c607c8(&lStack_28);
  lStack_28 = param_1 + 0x100;
  func_0x000104c607c8(&lStack_28);
  if (*(long *)(param_1 + 0xe8) != 0) {
    *(long *)(param_1 + 0xf0) = *(long *)(param_1 + 0xe8);
    __ZdlPv();
  }
  if (*(char *)(param_1 + 0xe7) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0xd0));
  }
  *(undefined ***)(param_1 + 0xc0) = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  lVar1 = *(long *)(param_1 + 0x98);
  if (lVar1 != 0) {
    *(long *)(param_1 + 0xa0) = lVar1;
    _free(*(undefined8 *)(lVar1 + -8));
  }
  if (*(long *)(param_1 + 0x80) != 0) {
    *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x80);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x68) != 0) {
    *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x68);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x50);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x38);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x20);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 8) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 8);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1096da3d4; end: 1096da51b;  */

void FUN_1096da3d4(undefined8 *param_1)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined **ppuVar5;
  undefined ***pppuVar6;
  undefined1 *puVar7;
  int iVar8;
  long lVar9;
  int *piVar10;
  long lVar11;
  long lVar12;
  undefined **ppuStack_c0;
  byte *pbStack_b8;
  long lStack_98;
  undefined **appuStack_70 [2];
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined **appuStack_50 [5];
  long lStack_28;
  
  pppuVar6 = appuStack_70;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = **(long **)*param_1;
  FUN_1096b8a3c(appuStack_50,*(long *)(*(long *)(lVar12 + 8) + 0xd0) + 0x40);
  FUN_1096b8b38(appuStack_50);
  FUN_1096b8ba0(appuStack_70,appuStack_50);
  iVar8 = 0x10b01d40;
  ___dynamic_cast(appuStack_70,&PTR_DAT_110b01d40,&PTR_DAT_110b04e38,0);
  if (pppuVar6 == (undefined ***)0x0) {
    func_0x000107c2acdc();
  }
  lVar9 = *(long *)((long)pppuVar6 + 8);
  if (lVar9 != 0) {
    piVar10 = (int *)(lVar9 + -8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar4) {
        *piVar10 = *piVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lVar12 = *(long *)(lVar12 + 8);
  uStack_58 = *(undefined8 *)(lVar12 + 0x178);
  *(long *)(lVar12 + 0x178) = lVar9;
  *(undefined ***)(lVar12 + 0x170) = &PTR_FUN_110b04dd8;
  ppuStack_60 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_60);
  appuStack_70[0] = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(appuStack_70);
  appuStack_50[0] = &PTR_FUN_110b01d60;
  pppuVar6 = appuStack_50;
  func_0x000107c2acd4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (iVar8 != 0) {
    func_0x000104bd46a0();
    FUN_109696618(appuStack_50);
  }
  __Unwind_Resume();
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = *(long *)**pppuVar6;
  lVar9 = *(long *)((long)**pppuVar6 + 8);
  func_0x000109693fa4(lVar9,0x11382aa68);
  lVar9 = *(long *)(lVar9 + 8);
  if (lVar9 != 0) {
    piVar10 = (int *)(lVar9 + -8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar4) {
        *piVar10 = *piVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lVar11 = *(long *)(lVar12 + 8);
  pbStack_b8 = *(byte **)(lVar11 + 0x158);
  *(long *)(lVar11 + 0x158) = lVar9;
  *(undefined ***)(lVar11 + 0x150) = &PTR_FUN_110b00af0;
  ppuStack_c0 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_c0);
  lVar11 = *(long *)(lVar12 + 8);
  puVar7 = (undefined1 *)0x18;
  __Znwm();
  *puVar7 = 0;
  *(undefined8 *)(puVar7 + 8) = 0;
  *(undefined8 *)(puVar7 + 0x10) = 0;
  lVar9 = *(long *)(lVar11 + 0x160);
  *(undefined1 **)(lVar11 + 0x160) = puVar7;
  if (lVar9 != 0) {
    FUN_1096ca830(lVar11 + 0x160);
    lVar11 = *(long *)(lVar12 + 8);
  }
  iVar8 = (int)lVar9;
  FUN_1096d0a64(&ppuStack_c0,lVar11 + 0xd8);
  ppuVar5 = ppuStack_c0;
  ppuStack_c0 = (undefined **)0x0;
  if (ppuVar5 != (undefined **)0x0) {
    do {
      bVar2 = *pbStack_b8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pbStack_b8,0x10);
      if (bVar4) {
        *pbStack_b8 = 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while ((cVar3 != '\0') || ((bVar2 & 1) != 0));
    pbVar1 = pbStack_b8 + 8;
    if (*(long *)(pbStack_b8 + 0x10) != 0) {
      pbVar1 = (byte *)(*(long *)(pbStack_b8 + 0x10) + 0x10);
    }
    *(undefined ***)pbVar1 = ppuVar5;
    *(undefined ***)(pbStack_b8 + 0x10) = ppuVar5;
    *pbStack_b8 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_98) {
    ___stack_chk_fail();
    __Unwind_Resume();
    if (iVar8 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__malloc_11034c5e8)(0x10);
    return;
  }
  return;
}



/* Entry: 1096da51c; end: 1096da663;  */

void FUN_1096da51c(undefined8 *param_1)

{
  byte *pbVar1;
  byte bVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  undefined **ppuVar6;
  undefined1 *puVar7;
  int iVar8;
  long lVar9;
  int *piVar10;
  long lVar11;
  undefined **ppuStack_50;
  byte *pbStack_48;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = **(long **)*param_1;
  lVar9 = (*(long **)*param_1)[1];
  func_0x000109693fa4(lVar9,0x11382aa68);
  lVar9 = *(long *)(lVar9 + 8);
  if (lVar9 != 0) {
    piVar10 = (int *)(lVar9 + -8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar5) {
        *piVar10 = *piVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  lVar11 = *(long *)(lVar3 + 8);
  pbStack_48 = *(byte **)(lVar11 + 0x158);
  *(long *)(lVar11 + 0x158) = lVar9;
  *(undefined ***)(lVar11 + 0x150) = &PTR_FUN_110b00af0;
  ppuStack_50 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_50);
  lVar11 = *(long *)(lVar3 + 8);
  puVar7 = (undefined1 *)0x18;
  __Znwm();
  *puVar7 = 0;
  *(undefined8 *)(puVar7 + 8) = 0;
  *(undefined8 *)(puVar7 + 0x10) = 0;
  lVar9 = *(long *)(lVar11 + 0x160);
  *(undefined1 **)(lVar11 + 0x160) = puVar7;
  if (lVar9 != 0) {
    FUN_1096ca830(lVar11 + 0x160);
    lVar11 = *(long *)(lVar3 + 8);
  }
  iVar8 = (int)lVar9;
  FUN_1096d0a64(&ppuStack_50,lVar11 + 0xd8);
  ppuVar6 = ppuStack_50;
  ppuStack_50 = (undefined **)0x0;
  if (ppuVar6 != (undefined **)0x0) {
    do {
      bVar2 = *pbStack_48;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pbStack_48,0x10);
      if (bVar5) {
        *pbStack_48 = 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while ((cVar4 != '\0') || ((bVar2 & 1) != 0));
    pbVar1 = pbStack_48 + 8;
    if (*(long *)(pbStack_48 + 0x10) != 0) {
      pbVar1 = (byte *)(*(long *)(pbStack_48 + 0x10) + 0x10);
    }
    *(undefined ***)pbVar1 = ppuVar6;
    *(undefined ***)(pbStack_48 + 0x10) = ppuVar6;
    *pbStack_48 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    __Unwind_Resume();
    if (iVar8 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__malloc_11034c5e8)(0x10);
    return;
  }
  return;
}



/* Entry: 1096da664; end: 1096da66b;  */

void FUN_1096da664(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(0x10);
  return;
}



/* Entry: 1096da66c; end: 1096da69b;  */

void FUN_1096da66c(undefined8 param_1,undefined8 *param_2)

{
  (**(code **)*param_2)(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_2);
  return;
}



/* Entry: 1096da69c; end: 1096da6f7;  */

void FUN_1096da69c(undefined8 param_1,undefined8 param_2,byte *param_3)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  char *pcVar4;
  char cVar5;
  long lVar6;
  
  lVar3 = 0x21;
  __Znam();
  lVar6 = 0x10;
  pcVar4 = (char *)(lVar3 + 1);
  do {
    bVar2 = *param_3;
    cVar5 = '0';
    cVar1 = '0';
    if (9 < (bVar2 & 0xf)) {
      cVar1 = '7';
    }
    pcVar4[-1] = cVar1 + (bVar2 & 0xf);
    if (0x9f < bVar2) {
      cVar5 = '7';
    }
    *pcVar4 = cVar5 + (bVar2 >> 4);
    lVar6 = lVar6 + -1;
    pcVar4 = pcVar4 + 2;
    param_3 = param_3 + 1;
  } while (lVar6 != 0);
  *(undefined1 *)(lVar3 + 0x20) = 0;
  lVar6 = lVar3;
  _strlen(lVar3);
  FUN_109697928(param_1,lVar3,lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdaPv_110352250)(lVar3);
  return;
}



/* Entry: 1096da6f8; end: 1096da723;  */

void FUN_1096da6f8(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b08b28;
  param_2 = param_2 + 0x28;
  FUN_109698fb4(param_2,&ppuStack_28);
  if (param_2 == 0) {
    FUN_1096978cc();
    puVar3 = (undefined8 *)0x11382a968;
  }
  else {
    puVar3 = (undefined8 *)(param_2 + 0x18);
  }
  uVar5 = *puVar3;
  param_1[1] = puVar3[1];
  *param_1 = uVar5;
  if (param_1[1] != 0) {
    piVar4 = (int *)(param_1[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = &PTR_FUN_110b00f28;
  return;
}



/* Entry: 1096da724; end: 1096da80b;  */

void FUN_1096da724(undefined8 *param_1,undefined1 *param_2)

{
  undefined ***pppuVar1;
  int iVar2;
  undefined8 uVar3;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  long lStack_28;
  
  pppuVar1 = &ppuStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c2accc();
  iVar2 = 0x10b02870;
  func_0x00010969659c(param_1);
  FUN_1096978cc();
  if (param_1[1] == *(long *)(param_2 + 8)) {
    FUN_1096d318c("",0);
    func_0x000107c2accc();
    iVar2 = 0x10b02870;
    func_0x00010969659c(&ppuStack_50);
    uVar3 = param_1[1];
    param_1[1] = uStack_48;
    *param_1 = ppuStack_50;
    ppuStack_50 = &PTR_FUN_110b01d60;
    uStack_48 = uVar3;
    func_0x000107c2acd4(&ppuStack_50);
    param_2 = (undefined1 *)pppuVar1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (iVar2 != 0) {
    func_0x000104bd46a0(param_2);
    FUN_109696618(param_1);
  }
  __Unwind_Resume(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(4);
  return;
}



/* Entry: 1096da80c; end: 1096da837;  */

void FUN_1096da80c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(4);
  return;
}



/* Entry: 1096da838; end: 1096da87b;  */

bool FUN_1096da838(undefined8 param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = (long *)(*(long *)(param_2 + 8) + 8);
  if (*(char *)(*(long *)(param_2 + 8) + 0x1f) < '\0') {
    plVar1 = (long *)*plVar1;
  }
  _sscanf(plVar1,&UNK_10f57c051);
  return (int)plVar1 == 1;
}



/* Entry: 1096da87c; end: 1096da8a7;  */

undefined8 FUN_1096da87c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1096da8a8; end: 1096da8ff;  */

void FUN_1096da8a8(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b08b28;
  param_2 = param_2 + 0x28;
  FUN_109698fb4(param_2,&ppuStack_28);
  if (param_2 == 0) {
    FUN_1096978cc();
    puVar3 = (undefined8 *)0x11382a968;
  }
  else {
    puVar3 = (undefined8 *)(param_2 + 0x18);
  }
  uVar5 = *puVar3;
  param_1[1] = puVar3[1];
  *param_1 = uVar5;
  if (param_1[1] != 0) {
    piVar4 = (int *)(param_1[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = &PTR_FUN_110b00f28;
  return;
}



/* Entry: 1096da900; end: 1096da913;  */

void FUN_1096da900(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(0x10);
  return;
}



/* Entry: 1096da914; end: 1096da943;  */

void FUN_1096da914(undefined8 param_1,undefined8 *param_2)

{
  (**(code **)*param_2)(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_2);
  return;
}



/* Entry: 1096da944; end: 1096da97f;  */

void FUN_1096da944(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  undefined8 uVar4;
  
  uVar4 = *param_3;
  param_1[1] = param_3[1];
  *param_1 = uVar4;
  if (param_1[1] != 0) {
    piVar3 = (int *)(param_1[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = &PTR_FUN_110b00af0;
  return;
}



/* Entry: 1096da980; end: 1096da9df;  */

undefined8 FUN_1096da980(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  undefined8 uVar4;
  
  if (param_3[1] != param_2[1]) {
    func_0x000107c2acd4(param_3);
    uVar4 = *param_2;
    param_3[1] = param_2[1];
    *param_3 = uVar4;
    if (param_3[1] != 0) {
      piVar3 = (int *)(param_3[1] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar2) {
          *piVar3 = *piVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
  return 1;
}



/* Entry: 1096da9e0; end: 1096daa0b;  */

undefined8 FUN_1096da9e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1096daa0c; end: 1096daa37;  */

void FUN_1096daa0c(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b08b28;
  param_2 = param_2 + 0x28;
  FUN_109698fb4(param_2,&ppuStack_28);
  if (param_2 == 0) {
    FUN_1096978cc();
    puVar3 = (undefined8 *)0x11382a968;
  }
  else {
    puVar3 = (undefined8 *)(param_2 + 0x18);
  }
  uVar5 = *puVar3;
  param_1[1] = puVar3[1];
  *param_1 = uVar5;
  if (param_1[1] != 0) {
    piVar4 = (int *)(param_1[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = &PTR_FUN_110b00f28;
  return;
}



/* Entry: 1096daa38; end: 1096dab1f;  */

void FUN_1096daa38(undefined8 *param_1,undefined1 *param_2)

{
  undefined ***pppuVar1;
  int iVar2;
  undefined8 uVar3;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  long lStack_28;
  
  pppuVar1 = &ppuStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c2accc();
  iVar2 = 0x10b00b10;
  func_0x00010969659c(param_1);
  FUN_1096978cc();
  if (param_1[1] == *(long *)(param_2 + 8)) {
    func_0x000107c2acbc("",0);
    func_0x000107c2accc();
    iVar2 = 0x10b00b10;
    func_0x00010969659c(&ppuStack_50);
    uVar3 = param_1[1];
    param_1[1] = uStack_48;
    *param_1 = ppuStack_50;
    ppuStack_50 = &PTR_FUN_110b01d60;
    uStack_48 = uVar3;
    func_0x000107c2acd4(&ppuStack_50);
    param_2 = (undefined1 *)pppuVar1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (iVar2 != 0) {
    func_0x000104bd46a0(param_2);
    FUN_109696618(param_1);
  }
  __Unwind_Resume(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(1);
  return;
}



/* Entry: 1096dab20; end: 1096daba7;  */

void FUN_1096dab20(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(1);
  return;
}



/* Entry: 1096daba8; end: 1096dabff;  */

void FUN_1096daba8(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b08b28;
  param_2 = param_2 + 0x28;
  FUN_109698fb4(param_2,&ppuStack_28);
  if (param_2 == 0) {
    FUN_1096978cc();
    puVar3 = (undefined8 *)0x11382a968;
  }
  else {
    puVar3 = (undefined8 *)(param_2 + 0x18);
  }
  uVar5 = *puVar3;
  param_1[1] = puVar3[1];
  *param_1 = uVar5;
  if (param_1[1] != 0) {
    piVar4 = (int *)(param_1[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = &PTR_FUN_110b00f28;
  return;
}



/* Entry: 1096dac00; end: 1096dac1f;  */

void FUN_1096dac00(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(8);
  return;
}



/* Entry: 1096dac20; end: 1096dac63;  */

bool FUN_1096dac20(undefined8 param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = (long *)(*(long *)(param_2 + 8) + 8);
  if (*(char *)(*(long *)(param_2 + 8) + 0x1f) < '\0') {
    plVar1 = (long *)*plVar1;
  }
  _sscanf(plVar1,&UNK_10f57c058);
  return (int)plVar1 == 1;
}



/* Entry: 1096dac64; end: 1096dac9b;  */

undefined8 FUN_1096dac64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1096dac9c; end: 1096dacf3;  */

void FUN_1096dac9c(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b08b28;
  param_2 = param_2 + 0x28;
  FUN_109698fb4(param_2,&ppuStack_28);
  if (param_2 == 0) {
    FUN_1096978cc();
    puVar3 = (undefined8 *)0x11382a968;
  }
  else {
    puVar3 = (undefined8 *)(param_2 + 0x18);
  }
  uVar5 = *puVar3;
  param_1[1] = puVar3[1];
  *param_1 = uVar5;
  if (param_1[1] != 0) {
    piVar4 = (int *)(param_1[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = &PTR_FUN_110b00f28;
  return;
}



/* Entry: 1096dacf4; end: 1096db123;  */

void FUN_1096dacf4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  float *pfVar1;
  char cVar2;
  bool bVar3;
  undefined4 *puVar4;
  long lVar5;
  code *pcVar6;
  undefined8 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  ulong uVar10;
  undefined4 *puVar11;
  long lVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uStack_150;
  undefined4 uStack_148;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined8 uStack_e0;
  float fStack_d8;
  float fStack_d4;
  undefined8 uStack_d0;
  float fStack_c8;
  float fStack_c4;
  undefined **ppuStack_c0;
  long lStack_b8;
  undefined4 *puStack_b0;
  undefined4 *puStack_a8;
  long lStack_98;
  long lStack_90;
  undefined **ppuStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)(*(long *)(param_1 + 8) + 0x18);
  if (lStack_78 != 0) {
    piVar8 = (int *)(lStack_78 + -8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar3) {
        *piVar8 = *piVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  ppuStack_80 = &PTR_FUN_110b051b8;
  puVar7 = param_3;
  ___dynamic_cast(param_3,&PTR_DAT_110b01d40,&PTR_DAT_110b05200,0);
  if (puVar7 == (undefined8 *)0x0) {
    auStack_f0 = (undefined1  [8])&UNK_10f57d0c1;
    puStack_e8 = &UNK_10f57d0c5;
    uStack_e0 = 0x4e;
    FUN_109699380(auStack_f0);
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1096db090);
    (*pcVar6)();
  }
  FUN_1096ba0d4(&lStack_98);
  FUN_1096bf848(*(long *)(param_1 + 8) + 0x20,&ppuStack_80,
                (ulong)(*(long *)(lStack_78 + 0x20) - *(long *)(lStack_78 + 0x18)) >> 3 & 0xffffffff
                ,lStack_98,param_2);
  FUN_109367d10(&puStack_b0,(long)*(int *)(*(long *)(*(long *)(param_1 + 8) + 0x60) + 0x20));
  lVar13 = *(long *)(param_1 + 8);
  FUN_1096ba1fc(auStack_f0,&ppuStack_80);
  fStack_120 = 1.0;
  FUN_10939f5b4(auStack_f0,&fStack_120);
  FUN_1096ab480(lVar13 + 0x58,(ulong)((long)puStack_e8 - (long)auStack_f0) >> 2 & 0xffffffff,
                auStack_f0,(ulong)((long)puStack_a8 - (long)puStack_b0) >> 2 & 0xffffffff);
  if (auStack_f0 != (undefined1  [8])0x0) {
    puStack_e8 = (undefined *)auStack_f0;
    __ZdlPv();
  }
  lVar5 = lStack_78;
  FUN_1096ba870(&ppuStack_c0);
  FUN_1096ba9b0(&ppuStack_c0,*(long *)(param_1 + 8) + 0x48);
  puVar4 = puStack_b0;
  FUN_1096baa30(&ppuStack_c0);
  puVar9 = *(undefined4 **)(lStack_b8 + 0x18);
  uVar10 = *(long *)(lStack_b8 + 0x20) - (long)puVar9;
  lVar13 = (long)(uVar10 * 0x40000000) >> 0x20;
  puVar11 = puVar4;
  lVar12 = lVar13;
  if (0 < (int)(uVar10 >> 2)) {
    do {
      *puVar9 = *puVar11;
      lVar12 = lVar12 + -1;
      puVar9 = puVar9 + 1;
      puVar11 = puVar11 + 1;
    } while (lVar12 != 0);
  }
  pfVar1 = (float *)(puVar4 + lVar13);
  fVar14 = *(float *)(lVar5 + 0xc);
  _atan2f(fVar14,*(undefined4 *)(lVar5 + 8));
  fVar16 = fVar14;
  FUN_1096c0dec(*(long *)(param_1 + 8) + 0x10,lStack_98,*(long *)(param_1 + 8) + 0x30);
  fVar16 = fVar16 - fVar14;
  pfVar1[-1] = fVar16;
  fVar18 = pfVar1[4];
  fVar15 = pfVar1[1] * 0.5;
  fVar19 = *pfVar1 * 0.5;
  fVar20 = fVar16 * 0.5;
  ___sincosf_stret();
  fVar17 = fVar16;
  ___sincosf_stret();
  fVar14 = fVar17;
  ___sincosf_stret();
  fStack_114 = fVar20 * fVar15 * fVar19 + fVar14 * fVar16 * fVar17;
  fStack_120 = -(fVar16 * fVar19 * fVar20) + fVar14 * fVar15 * fVar17;
  fStack_11c = fVar20 * fVar15 * fVar17 + fVar14 * fVar16 * fVar19;
  fStack_118 = -(fVar15 * fVar19 * fVar14) + fVar20 * fVar16 * fVar17;
  uStack_150 = *(undefined8 *)(pfVar1 + 2);
  uStack_148 = 0;
  FUN_1096db124(fVar18 + 1.0,auStack_f0,&fStack_120,&uStack_150);
  if (*(int *)(*(long *)(param_1 + 8) + 8) < 5) {
    lVar13 = 4;
    do {
      *(ulong *)(auStack_f0 + lVar13) =
           CONCAT44(-(float)((ulong)*(undefined8 *)(auStack_f0 + lVar13) >> 0x20),
                    -(float)*(undefined8 *)(auStack_f0 + lVar13));
      lVar13 = lVar13 + 0x10;
    } while (lVar13 != 0x34);
    uStack_e0 = CONCAT44(-(float)((ulong)uStack_e0 >> 0x20),-(float)uStack_e0);
    uStack_d0 = CONCAT44(-(float)((ulong)uStack_d0 >> 0x20),-(float)uStack_d0);
    _fStack_d8 = CONCAT44(-(float)((ulong)_fStack_d8 >> 0x20) + 0.0,-(float)_fStack_d8);
    _fStack_c8 = CONCAT44(-(float)((ulong)_fStack_c8 >> 0x20) + 0.0,-(float)_fStack_c8);
  }
  FUN_1096b9e2c(&uStack_150,lVar5 + 8);
  FUN_1096b985c(&fStack_120,&uStack_150,auStack_f0);
  FUN_1096baa30(&ppuStack_c0);
  *(ulong *)(lStack_b8 + 0x38) = CONCAT44(fStack_114,fStack_118);
  *(ulong *)(lStack_b8 + 0x30) = CONCAT44(fStack_11c,fStack_120);
  *(undefined8 *)(lStack_b8 + 0x48) = uStack_108;
  *(undefined8 *)(lStack_b8 + 0x40) = uStack_110;
  *(undefined8 *)(lStack_b8 + 0x58) = uStack_f8;
  *(undefined8 *)(lStack_b8 + 0x50) = uStack_100;
  if (param_3[1] != lStack_b8) {
    func_0x000107c2acd4(param_3);
    param_3[1] = lStack_b8;
    *param_3 = ppuStack_c0;
    if (param_3[1] != 0) {
      piVar8 = (int *)(param_3[1] + -8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar3) {
          *piVar8 = *piVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  ppuStack_c0 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_c0);
  if (puStack_b0 != (undefined4 *)0x0) {
    puStack_a8 = puStack_b0;
    __ZdlPv();
  }
  if (lStack_98 != 0) {
    lStack_90 = lStack_98;
    __ZdlPv();
  }
  ppuStack_80 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_80);
  return;
}



/* Entry: 1096db124; end: 1096db17f;  */

void FUN_1096db124(float param_1,float *param_2)

{
  long lVar1;
  float *pfVar2;
  long lVar3;
  float *pfVar4;
  
  FUN_1096bb950();
  lVar1 = 0;
  pfVar2 = param_2;
  do {
    lVar3 = 0;
    pfVar4 = pfVar2;
    do {
      *pfVar4 = param_1 * *(float *)((long)param_2 + lVar3 + lVar1);
      lVar3 = lVar3 + 4;
      pfVar4 = pfVar4 + 1;
    } while (lVar3 != 0xc);
    lVar1 = lVar1 + 0x10;
    pfVar2 = pfVar2 + 4;
  } while (lVar1 != 0x30);
  return;
}



/* Entry: 1096db180; end: 1096db1fb;  */

undefined8 * FUN_1096db180(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_110b01d60;
  puVar1 = (undefined8 *)0x28;
  _malloc();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 3) = 1;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = &PTR_DAT_110b00de0;
  }
  *param_1 = &PTR_FUN_110b09190;
  param_1[1] = puVar1;
  FUN_1096db1fc(param_1);
  return param_1;
}



/* Entry: 1096db1fc; end: 1096db2d3;  */

void FUN_1096db1fc(undefined8 *param_1)

{
  func_0x000107c2acd0(param_1,0x68);
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  *param_1 = &PTR_DAT_110b00de0;
  *(undefined4 *)(param_1 + 1) = 4;
  FUN_1096b9ea0(param_1 + 2);
  FUN_1096bf7a0(param_1 + 4);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  FUN_1096b6920(param_1 + 9);
  FUN_1096ab3e4(param_1 + 0xb);
  *param_1 = &PTR_FUN_110b092b8;
  return;
}



/* Entry: 1096db2d4; end: 1096db543;  */

void FUN_1096db2d4(long param_1,long *param_2,long *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  uint *puVar9;
  undefined1 uStack_48;
  byte bStack_47;
  undefined1 uStack_46;
  byte bStack_45;
  undefined1 uStack_44;
  byte bStack_43;
  undefined1 uStack_42;
  byte bStack_41;
  
  (**(code **)(*param_2 + 0x48))(param_2,*(long *)(param_1 + 8) + 8,4,1);
  lVar7 = *(long *)(param_1 + 8);
  (**(code **)(*param_3 + 0x20))(param_3,param_2,lVar7 + 0x10);
  (**(code **)(*param_3 + 0x20))(param_3,param_2,lVar7 + 0x20);
  lVar7 = *(long *)(param_1 + 8);
  uVar8 = *(long *)(lVar7 + 0x38) - *(long *)(lVar7 + 0x30) >> 2;
  uVar4 = uVar8;
  if (0x7f < uVar8) {
    do {
      bStack_47 = (byte)uVar4 | 0x80;
      (**(code **)(*param_2 + 0x48))(param_2,&bStack_47,1,1);
      uVar8 = uVar4 >> 7;
      uVar5 = uVar4 >> 0xe;
      uVar4 = uVar8;
    } while (uVar5 != 0);
  }
  uStack_48 = (undefined1)uVar8;
  (**(code **)(*param_2 + 0x48))(param_2,&uStack_48,1,1);
  puVar1 = *(uint **)(lVar7 + 0x38);
  for (puVar9 = *(uint **)(lVar7 + 0x30); puVar9 != puVar1; puVar9 = puVar9 + 1) {
    uVar8 = (ulong)(int)*puVar9;
    uVar4 = uVar8;
    if (0x7f < *puVar9) {
      do {
        bStack_45 = (byte)uVar4 | 0x80;
        (**(code **)(*param_2 + 0x48))(param_2,&bStack_45,1,1);
        uVar8 = uVar4 >> 7;
        uVar5 = uVar4 >> 0xe;
        uVar4 = uVar8;
      } while (uVar5 != 0);
    }
    uStack_46 = (undefined1)uVar8;
    (**(code **)(*param_2 + 0x48))(param_2,&uStack_46,1,1);
  }
  lVar7 = *(long *)(*(long *)(param_1 + 8) + 0x50);
  uVar2 = *(uint *)(lVar7 + 0x10);
  uVar4 = (ulong)(int)uVar2;
  uVar3 = *(uint *)(lVar7 + 0x14);
  uVar8 = (ulong)(int)uVar3;
  uVar5 = uVar4;
  if (0x7f < uVar2) {
    do {
      bStack_43 = (byte)uVar5 | 0x80;
      (**(code **)(*param_2 + 0x48))(param_2,&bStack_43,1,1);
      uVar4 = uVar5 >> 7;
      uVar6 = uVar5 >> 0xe;
      uVar5 = uVar4;
    } while (uVar6 != 0);
  }
  uStack_44 = (undefined1)uVar4;
  (**(code **)(*param_2 + 0x48))(param_2,&uStack_44,1,1);
  uVar4 = uVar8;
  if (0x7f < uVar3) {
    do {
      bStack_41 = (byte)uVar4 | 0x80;
      (**(code **)(*param_2 + 0x48))(param_2,&bStack_41,1,1);
      uVar8 = uVar4 >> 7;
      uVar5 = uVar4 >> 0xe;
      uVar4 = uVar8;
    } while (uVar5 != 0);
  }
  uStack_42 = (undefined1)uVar8;
  (**(code **)(*param_2 + 0x48))(param_2,&uStack_42,1,1);
  (**(code **)(*param_3 + 0x20))(param_3,param_2,*(long *)(param_1 + 8) + 0x58);
  return;
}



/* Entry: 1096db544; end: 1096db997;  */

long * FUN_1096db544(long param_1,long *param_2,long *param_3)

{
  undefined4 *puVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  long *plVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  int iVar8;
  undefined **ppuVar9;
  int *piVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined4 *puVar14;
  ulong uVar15;
  ulong uVar16;
  undefined **ppuVar17;
  undefined **appuStack_b0 [2];
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  long lStack_58;
  
  pppuVar7 = appuStack_b0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x40))(param_2,*(long *)(param_1 + 8) + 8,4,1);
  if ((int)plVar5 == 1) {
    lVar12 = *(long *)(param_1 + 8);
    plVar5 = param_2;
    FUN_1096cf738(param_2,param_3,lVar12 + 0x10);
    if ((int)plVar5 != 0) {
      (**(code **)(*param_3 + 0x28))(&ppuStack_a0,param_3,param_2);
      pppuVar6 = &ppuStack_a0;
      ___dynamic_cast(pppuVar6,&PTR_DAT_110b01d40,&PTR_DAT_110b05d20,0);
      if (pppuVar6 == (undefined ***)0x0) {
        func_0x000107c2acdc();
      }
      ppuVar17 = pppuVar6[1];
      if (ppuVar17 != (undefined **)0x0) {
        ppuVar9 = ppuVar17 + -1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppuVar9,0x10);
          if (bVar3) {
            *(int *)ppuVar9 = *(int *)ppuVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_88 = *(undefined8 *)(lVar12 + 0x28);
      *(undefined ***)(lVar12 + 0x28) = ppuVar17;
      *(undefined ***)(lVar12 + 0x20) = &PTR_FUN_110b05ca8;
      ppuStack_90 = &PTR_FUN_110b01d60;
      func_0x000107c2acd4(&ppuStack_90);
      ppuStack_a0 = &PTR_FUN_110b01d60;
      func_0x000107c2acd4(&ppuStack_a0);
      lVar12 = param_3[1] + -0x20;
      func_0x0001096966c0(lVar12,uRam000000011382aa08);
      if (lVar12 == 0) {
        lVar12 = *(long *)(param_1 + 8);
        plVar5 = param_2;
        (**(code **)(*param_2 + 0x40))(param_2,&ppuStack_90,1,1);
        if ((int)plVar5 == 1) {
          uVar13 = 0;
          uVar16 = 0;
          do {
            uVar13 = ((ulong)ppuStack_90 & 0x7f) << (uVar16 & 0x3f) | uVar13;
            if (-1 < (char)ppuStack_90) {
              func_0x000108a5942c(lVar12 + 0x30,uVar13);
              puVar1 = *(undefined4 **)(lVar12 + 0x38);
              puVar14 = *(undefined4 **)(lVar12 + 0x30);
              goto LAB_1096db7fc;
            }
            plVar5 = param_2;
            (**(code **)(*param_2 + 0x40))(param_2,&ppuStack_90,1,1);
            uVar16 = uVar16 + 7;
          } while ((int)plVar5 == 1);
        }
      }
    }
  }
  goto LAB_1096db6dc;
LAB_1096db7fc:
  if (puVar14 == puVar1) goto LAB_1096db878;
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x40))(param_2,&ppuStack_90,1,1);
  if ((int)plVar5 != 1) goto LAB_1096db6dc;
  uVar13 = 0;
  uVar16 = 0;
  while( true ) {
    uVar13 = ((ulong)ppuStack_90 & 0x7f) << (uVar16 & 0x3f) | uVar13;
    if (-1 < (char)ppuStack_90) break;
    plVar5 = param_2;
    (**(code **)(*param_2 + 0x40))(param_2,&ppuStack_90,1,1);
    uVar16 = uVar16 + 7;
    if ((int)plVar5 != 1) goto LAB_1096db6dc;
  }
  *puVar14 = (int)uVar13;
  puVar14 = puVar14 + 1;
  goto LAB_1096db7fc;
  while( true ) {
    plVar5 = param_2;
    (**(code **)(*param_2 + 0x40))(param_2,&ppuStack_90,1,1);
    uVar16 = uVar16 + 7;
    if ((int)plVar5 != 1) break;
LAB_1096db910:
    uVar15 = ((ulong)ppuStack_90 & 0x7f) << (uVar16 & 0x3f) | uVar15;
    if (-1 < (char)ppuStack_90) {
      bVar3 = true;
      goto LAB_1096db6e8;
    }
  }
  goto LAB_1096db6e0;
LAB_1096db878:
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x40))(param_2,&ppuStack_90,1,1);
  if ((int)plVar5 == 1) {
    uVar13 = 0;
    uVar16 = 0;
    do {
      uVar13 = ((ulong)ppuStack_90 & 0x7f) << (uVar16 & 0x3f) | uVar13;
      if (-1 < (char)ppuStack_90) {
        plVar5 = param_2;
        (**(code **)(*param_2 + 0x40))(param_2,&ppuStack_90,1,1);
        if ((int)plVar5 != 1) goto LAB_1096db6e0;
        uVar15 = 0;
        uVar16 = 0;
        goto LAB_1096db910;
      }
      plVar5 = param_2;
      (**(code **)(*param_2 + 0x40))(param_2,&ppuStack_90,1,1);
      uVar16 = uVar16 + 7;
    } while ((int)plVar5 == 1);
  }
LAB_1096db6dc:
  uVar13 = 0;
LAB_1096db6e0:
  uVar15 = 0;
  bVar3 = false;
LAB_1096db6e8:
  FUN_1096b72bc(&ppuStack_90,3,1,uVar13,uVar15);
  FUN_1096b7480(appuStack_b0,&ppuStack_90);
  iVar8 = 0x10b01d40;
  ___dynamic_cast(appuStack_b0,&PTR_DAT_110b01d40,&PTR_DAT_110b04bf8,0);
  if (pppuVar7 == (undefined ***)0x0) {
    func_0x000107c2acdc();
  }
  lVar12 = *(long *)((long)pppuVar7 + 8);
  if (lVar12 != 0) {
    piVar10 = (int *)(lVar12 + -8);
    do {
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar4) {
        *piVar10 = *piVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar11 = *(long *)(param_1 + 8);
  uStack_98 = *(undefined8 *)(lVar11 + 0x50);
  *(long *)(lVar11 + 0x50) = lVar12;
  *(undefined ***)(lVar11 + 0x48) = &PTR_FUN_110b04b98;
  ppuStack_a0 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_a0);
  appuStack_b0[0] = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(appuStack_b0);
  ppuStack_90 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_90);
  if (bVar3) {
    FUN_1096bff20(param_2,param_3,*(long *)(param_1 + 8) + 0x58);
    iVar8 = (int)param_3;
  }
  else {
    param_2 = (long *)0x0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    if (iVar8 != 0) {
      func_0x000104bd46a0();
      FUN_109696618(&ppuStack_90);
    }
    __Unwind_Resume();
    *param_2 = (long)&PTR_FUN_110b01d60;
    func_0x000107c2acd4();
    return param_2;
  }
  return param_2;
}



/* Entry: 1096db998; end: 1096db9cb;  */

undefined8 * FUN_1096db998(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096db9cc; end: 1096db9ff;  */

void FUN_1096db9cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1096dba00; end: 1096dba1b;  */

void FUN_1096dba00(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(1);
  return;
}



/* Entry: 1096dba1c; end: 1096dba63;  */

void FUN_1096dba1c(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  uStack_22 = *param_3;
  uStack_21 = 0;
  puVar1 = &uStack_22;
  _strlen(puVar1);
  FUN_109697928(param_1,&uStack_22,puVar1);
  return;
}



/* Entry: 1096dba64; end: 1096dbabb;  */

undefined8 * FUN_1096dba64(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_110b01d60;
  puVar1 = (undefined8 *)0x28;
  func_0x000107c610a0();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 3) = 1;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = &PTR_DAT_110b00de0;
  }
  *param_1 = &PTR_FUN_110b00af0;
  param_1[1] = puVar1;
  puVar1 = param_1;
  func_0x000100033474(param_1,0x20);
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = &PTR_FUN_110b01c08;
  puVar1[1] = 0;
  return param_1;
}



/* Entry: 1096dbabc; end: 1096dbb13;  */

void FUN_1096dbabc(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b091c8;
  param_2 = param_2 + 0x28;
  FUN_109698fb4(param_2,&ppuStack_28);
  if (param_2 == 0) {
    FUN_1096978cc();
    puVar3 = (undefined8 *)0x11382a968;
  }
  else {
    puVar3 = (undefined8 *)(param_2 + 0x18);
  }
  uVar5 = *puVar3;
  param_1[1] = puVar3[1];
  *param_1 = uVar5;
  if (param_1[1] != 0) {
    piVar4 = (int *)(param_1[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = &PTR_FUN_110b00f28;
  return;
}



/* Entry: 1096dbb14; end: 1096dbb5f;  */

void FUN_1096dbb14(undefined8 *param_1)

{
  undefined **ppuStack_30;
  undefined8 uStack_28;
  
  FUN_1096db180(&ppuStack_30);
  param_1[1] = uStack_28;
  *param_1 = ppuStack_30;
  ppuStack_30 = &PTR_FUN_110b01d60;
  uStack_28 = 0;
  func_0x000107c2acd4(&ppuStack_30);
  return;
}



/* Entry: 1096dbb60; end: 1096dbb8f;  */

bool FUN_1096dbb60(long param_1)

{
  ___dynamic_cast(param_1,&PTR_DAT_110b01d40,&PTR_DAT_110b091c8,0);
  return param_1 != 0;
}



/* Entry: 1096dbb90; end: 1096dbc03;  */

long FUN_1096dbb90(long param_1)

{
  *(undefined ***)(param_1 + 0x58) = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  *(undefined ***)(param_1 + 0x48) = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  if (*(long *)(param_1 + 0x30) != 0) {
    *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x30);
    __ZdlPv();
  }
  *(undefined ***)(param_1 + 0x20) = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096dbc04; end: 1096dbc77;  */

void FUN_1096dbc04(long param_1)

{
  *(undefined ***)(param_1 + 0x58) = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  *(undefined ***)(param_1 + 0x48) = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  if (*(long *)(param_1 + 0x30) != 0) {
    *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x30);
    __ZdlPv();
  }
  *(undefined ***)(param_1 + 0x20) = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1096dbc78; end: 1096dbd1f;  */

undefined8 * FUN_1096dbc78(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_110b01d60;
  puVar1 = (undefined8 *)0x28;
  _malloc();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 3) = 1;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = &PTR_DAT_110b00de0;
  }
  *param_1 = &PTR_FUN_110b09320;
  param_1[1] = puVar1;
  puVar1 = param_1;
  func_0x000107c2acd0(param_1,0x40);
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[3] = &PTR_FUN_110b01d60;
  *(undefined4 *)(puVar1 + 7) = 0x3e800000;
  *puVar1 = &PTR_FUN_110b09510;
  puVar1[1] = 1;
  return param_1;
}



/* Entry: 1096dbd20; end: 1096dc9bf;  */

void FUN_1096dbd20(undefined8 *param_1,undefined8 param_2,float param_3,ulong param_4,long param_5,
                  undefined8 *param_6,long param_7,long param_8)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  double *pdVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  float *pfVar9;
  ulong uVar10;
  long lVar11;
  float *pfVar12;
  long lVar13;
  float *pfVar14;
  long lVar15;
  long lVar16;
  float *pfVar17;
  float *pfVar18;
  long *plVar19;
  long lVar20;
  long **pplVar21;
  float *pfVar22;
  double *pdVar23;
  long lVar24;
  bool bVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar30;
  double dVar29;
  float fVar31;
  undefined8 uVar32;
  float fVar33;
  float fVar34;
  ulong uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  long *plStack_218;
  undefined8 uStack_1c8;
  float fStack_1c0;
  undefined4 uStack_1bc;
  float fStack_1b8;
  undefined8 uStack_1b4;
  undefined8 uStack_1ac;
  undefined8 uStack_1a4;
  undefined4 uStack_19c;
  undefined8 uStack_198;
  long *plStack_190;
  long *plStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  float fStack_168;
  float fStack_164;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  float fStack_144;
  float fStack_134;
  long *aplStack_130 [4];
  undefined8 uStack_110;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float afStack_f8 [12];
  undefined8 uStack_c8;
  float afStack_c0 [4];
  long lStack_b0;
  
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_1096a5b40(param_6,0x11382aa18);
  lVar24 = *(long *)(*(long *)(param_7 + 8) + 8);
  if ((lVar24 != 0) &&
     (lVar7 = lVar24, ___dynamic_cast(lVar24,&PTR_DAT_110b01d40,&PTR_DAT_110b05200,0), lVar7 != 0))
  {
    lVar24 = lVar24 + 0x10;
    ___dynamic_cast(lVar24,&PTR_DAT_110b01d40,&PTR_DAT_110b053a0,0);
    if (lVar24 != 0) {
      plVar19 = (long *)(param_5 + 8);
      plVar8 = (long *)(*plVar19 + 0x18);
      (**(code **)(*plVar8 + 0x20))();
      lVar13 = *(long *)(lVar24 + 8);
      (**(code **)(*(long *)(*plVar19 + 0x18) + 0x30))
                ((long *)(*plVar19 + 0x18),(ulong)plVar8 & 0xffffffff,
                 *(long *)(lVar13 + 0x18) +
                 (long)(int)((ulong)(*(long *)(lVar13 + 0x20) - *(long *)(lVar13 + 0x18)) >> 2) * 4
                 + (long)*(int *)(*(long *)(lVar13 + 0x10) + 0x14) * -4,6,&uStack_c8);
      if (*(ulong *)(*plVar19 + 8) < 2) {
        uVar10 = 0;
        do {
          iVar2 = (int)uVar10;
          if (2 < uVar10) {
            iVar2 = (int)uVar10 + -3;
          }
          if (iVar2 != 0) {
            *(float *)((long)&uStack_c8 + uVar10 * 4) = -*(float *)((long)&uStack_c8 + uVar10 * 4);
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 != 6);
      }
      lVar13 = *(long *)(lVar24 + 8);
      FUN_109699cd8(&puStack_160,lVar13 + 0x30);
      lVar24 = *(long *)(*(long *)(lVar24 + 8) + 0x18);
      FUN_1096dc9c0(lVar13 + 0x30);
      param_3 = param_3 * 3.0;
      fVar27 = 1.5707964;
      if (param_3 <= 1.5707964) {
        fVar27 = param_3;
      }
      _sinf();
      afStack_f8[6] = 0.0;
      afStack_f8[7] = 0.0;
      afStack_f8[8] = 0.0;
      afStack_f8[9] = 0.0;
      afStack_f8[10] = 0.0;
      afStack_f8[0xb] = 0.0;
      afStack_f8[0] = 0.0;
      afStack_f8[1] = 0.0;
      afStack_f8[2] = 0.0;
      afStack_f8[3] = 0.0;
      afStack_f8[4] = 0.0;
      afStack_f8[5] = 0.0;
      fVar34 = -0.5;
      if (-1.5707964 <= param_3) {
        fVar34 = fVar27 * 0.5;
      }
      lVar20 = *(long *)(param_8 + 0x18);
      uStack_110 = *(long *)(param_5 + 8);
      plVar8 = (long *)(lVar20 + 0x28);
      FUN_1096bd5b4(plVar8,&uStack_110);
      if (plVar8 == (long *)0x0) {
        plVar19 = (long *)0x58;
        __Znwm();
        plVar8 = plVar19 + 1;
        *plVar8 = 0;
        plVar19[2] = 0;
        *plVar19 = (long)&PTR_FUN_110b09578;
        uStack_1c8 = plVar19 + 3;
        plVar19[4] = 0;
        *uStack_1c8 = 0;
        plVar19[6] = 0;
        plVar19[5] = 0;
        plVar19[8] = 0;
        plVar19[7] = 0;
        plVar19[10] = 0;
        plVar19[9] = 0;
        lVar15 = 0;
        do {
          *(undefined8 *)((long)plVar19 + lVar15 + 0x18) = 0;
          *(undefined1 *)((long)plVar19 + lVar15 + 0x20) = 0;
          *(undefined8 *)((long)plVar19 + lVar15 + 0x28) = 0;
          lVar11 = lVar15 + 0x20;
          *(undefined4 *)((long)plVar19 + lVar15 + 0x30) = 0;
          lVar15 = lVar11;
        } while (lVar11 != 0x40);
        fStack_1c0 = SUB84(plVar19,0);
        uStack_1bc = (undefined4)((ulong)plVar19 >> 0x20);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar4) {
            *plVar8 = *plVar8 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        uStack_198 = uStack_110;
        aplStack_130[0] = (long *)0x0;
        aplStack_130[1] = (long *)0x0;
        plVar8 = (long *)(lVar20 + 0x28);
        plStack_190 = uStack_1c8;
        plStack_188 = plVar19;
        FUN_1096bd704(plVar8,&uStack_198,&uStack_198);
        plVar19 = plStack_188;
        if (plStack_188 != (long *)0x0) {
          plVar1 = plStack_188 + 1;
          do {
            lVar20 = *plVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = lVar20 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar20 == 0) {
            (**(code **)(*plStack_188 + 0x10))(plStack_188);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            plVar8 = plVar19;
          }
        }
        plVar19 = aplStack_130[1];
        if (aplStack_130[1] != (long *)0x0) {
          plVar1 = aplStack_130[1] + 1;
          do {
            lVar20 = *plVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = lVar20 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar20 == 0) {
            (**(code **)(*aplStack_130[1] + 0x10))(aplStack_130[1]);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            plVar8 = plVar19;
          }
        }
        plVar19 = (long *)CONCAT44(uStack_1bc,fStack_1c0);
        plStack_218 = uStack_1c8;
        if (plVar19 != (long *)0x0) {
          plVar1 = plVar19 + 1;
          do {
            lVar20 = *plVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = lVar20 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar20 == 0) {
            (**(code **)(*plVar19 + 0x10))(plVar19);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            plVar8 = plVar19;
          }
        }
      }
      else {
        plStack_218 = (long *)plVar8[3];
      }
      pfVar22 = afStack_f8 + 3;
      __ZNSt3__16chrono12system_clock3nowEv();
      lVar20 = 0;
      pfVar9 = &fStack_164;
      pfVar18 = afStack_f8;
      pfVar12 = afStack_f8 + 6;
      bVar4 = true;
      do {
        bVar25 = bVar4;
        fVar40 = (float)param_4;
        fVar26 = afStack_c0[lVar20 * 3];
        uVar32 = *(undefined8 *)((long)&uStack_c8 + lVar20 * 0xc);
        uStack_198 = uVar32;
        plStack_190._0_4_ = fVar26;
        FUN_109699d9c(lVar13 + 0x30,&uStack_198);
        *pfVar12 = fVar26;
        fVar37 = (float)uVar32;
        pfVar12[1] = fVar37;
        pfVar12[2] = fVar40;
        lVar11 = *(long *)(param_5 + 8);
        lVar15 = lVar11 + lVar20 * 4;
        lVar16 = *(long *)(lVar7 + 8);
        pfVar14 = (float *)(*(long *)(lVar16 + 0x18) + (long)*(int *)(lVar15 + 0x28) * 8);
        fVar27 = *pfVar14;
        fVar31 = pfVar14[1];
        fVar28 = ((*(float *)(lVar16 + 0x10) +
                  -(fVar31 * *(float *)(lVar16 + 0xc)) + *(float *)(lVar16 + 8) * fVar27) -
                 *(float *)(param_6 + 1)) / (float)*param_6;
        fVar30 = -((fVar27 * *(float *)(lVar16 + 0xc) + *(float *)(lVar16 + 8) * fVar31 +
                   *(float *)(lVar16 + 0x14)) - *(float *)((long)param_6 + 0xc)) /
                 (float)((ulong)*param_6 >> 0x20);
        fVar33 = fVar26 + fVar28 * fVar40;
        fVar36 = -(fVar28 * fVar37) + fVar26 * fVar30;
        fVar31 = ABS(-(fVar30 * fVar40) - fVar37);
        fVar27 = ABS(fVar33);
        fVar39 = ABS(fVar36);
        if (fVar27 <= fVar39) {
          fVar27 = fVar39;
        }
        if (fVar31 <= fVar27) {
          fVar31 = fVar27;
        }
        if (fVar31 <= 1.8446744e+19) {
          fVar27 = 1.0;
          if (fVar31 < 5.421011e-20) {
            fVar27 = 1.9342813e+25;
          }
        }
        else {
          fVar27 = 5.169879e-26;
        }
        fVar38 = *(float *)(lVar11 + 0x10);
        fVar39 = fVar28 * fVar28 + fVar30 * fVar30 + 1.0;
        fVar31 = (-(fVar30 * fVar40) - fVar37) * fVar27;
        fVar33 = fVar33 * fVar27;
        fVar36 = fVar36 * fVar27;
        fVar27 = SQRT(fVar33 * fVar33 + fVar31 * fVar31 + fVar36 * fVar36) / fVar27;
        fVar33 = (fVar26 * fVar28 + fVar37 * fVar30) - fVar40;
        fVar31 = -(fVar27 * fVar27) + fVar38 * fVar38 * fVar39;
        if (fVar31 <= 0.0) {
          fVar31 = (fVar38 * SQRT(fVar39)) / ABS(fVar27);
          uStack_198 = CONCAT44(fVar37 + (((fVar30 * fVar33) / fVar39 + 0.0) - fVar37) * fVar31,
                                fVar26 + (((fVar28 * fVar33) / fVar39 + 0.0) - fVar26) * fVar31);
          fVar39 = fVar40 + ((0.0 - fVar33 / fVar39) - fVar40) * fVar31;
        }
        else {
          fVar31 = SQRT(fVar31);
          fVar39 = (fVar33 - fVar31) / fVar39;
          uStack_198 = CONCAT44(fVar30 * fVar39 + 0.0,fVar28 * fVar39 + 0.0);
          fVar39 = 0.0 - fVar39;
        }
        plStack_190 = (long *)CONCAT44(plStack_190._4_4_,fVar39);
        fVar30 = *(float *)(lVar24 + (long)*(int *)(lVar15 + 0x30) * 4);
        plVar19 = plStack_218 + lVar20 * 4;
        fVar28 = 1e+06;
        fVar27 = (float)((long)plVar8 - *plVar19) / 1e+06;
        if (((fVar27 < 0.0) || (fVar28 = *(float *)(lVar11 + 0x38), fVar28 < fVar27)) ||
           (fVar31 = *(float *)((long)plVar19 + 0xc), fVar30 <= fVar31)) {
          *(undefined1 *)(plVar19 + 1) = 0;
LAB_1096dc1bc:
          *plVar19 = (long)plVar8;
          *(float *)((long)plVar19 + 0xc) = fVar30;
          FUN_109699d9c(&puStack_160,&uStack_198);
          *(float *)(plVar19 + 2) = fVar27;
          *(float *)((long)plVar19 + 0x14) = fVar28;
          *(float *)(plVar19 + 3) = fVar31;
          fVar27 = (float)uStack_198;
          fVar28 = uStack_198._4_4_;
          fVar31 = plStack_190._0_4_;
        }
        else {
          if ((*(byte *)(plVar19 + 1) & 1) == 0) {
            fVar27 = fVar27 * *(float *)(lVar11 + 0x3c);
            fVar31 = (fVar30 - fVar31) + (fVar30 - fVar31);
            fVar28 = fVar28 * fVar31;
            if (fVar28 <= fVar27) goto LAB_1096dc1bc;
            *(undefined1 *)(plVar19 + 1) = 1;
          }
          FUN_109699d9c(lVar13 + 0x30,plVar19 + 2);
          fVar26 = *pfVar12;
          fVar37 = pfVar12[1];
          fVar40 = pfVar12[2];
        }
        param_4 = (ulong)(uint)(fVar31 - fVar40);
        fVar33 = (1.0 - fVar30) / (1.0 - *(float *)(*(long *)(param_5 + 8) + 0x3c));
        fVar30 = 1.0;
        if (fVar33 <= 1.0) {
          fVar30 = fVar33;
        }
        fVar36 = 0.0;
        if (0.0 <= fVar33) {
          fVar36 = fVar30;
        }
        fVar30 = fVar34;
        if (!bVar25) {
          fVar30 = -fVar34;
        }
        *pfVar9 = (fVar30 + 0.5) * fVar36;
        pfVar9 = &fStack_168;
        *pfVar18 = fVar27 - fVar26;
        pfVar18[1] = fVar28 - fVar37;
        pfVar18[2] = fVar31 - fVar40;
        lVar20 = 1;
        pfVar18 = pfVar22;
        pfVar12 = afStack_f8 + 9;
        bVar4 = false;
      } while (bVar25);
      uStack_110 = 0;
      fStack_108 = 0.0;
      fStack_104 = 0.0;
      pfVar9 = &fStack_168;
      pfVar18 = &fStack_164;
      fStack_100 = 0.0;
      fStack_fc = 0.0;
      pfVar12 = (float *)&uStack_110;
      pfVar14 = pfVar22;
      pfVar17 = afStack_f8;
      bVar4 = true;
      do {
        bVar25 = bVar4;
        fVar34 = *pfVar18;
        fVar27 = 0.0;
        if (0.0 <= *pfVar9 - fVar34) {
          fVar27 = *pfVar9 - fVar34;
        }
        fVar31 = (float)*(undefined8 *)pfVar17 * fVar34 + (float)*(undefined8 *)pfVar14 * fVar27;
        fVar26 = (float)((ulong)*(undefined8 *)pfVar17 >> 0x20) * fVar34 +
                 (float)((ulong)*(undefined8 *)pfVar14 >> 0x20) * fVar27;
        fVar27 = fVar34 * pfVar17[2] + pfVar14[2] * fVar27;
        fVar34 = 1.0 / SQRT(fVar27 * fVar27 + fVar31 * fVar31 + fVar26 * fVar26);
        pfVar14 = afStack_f8;
        pfVar9 = &fStack_164;
        *(ulong *)pfVar12 = CONCAT44(fVar26 * fVar34,fVar31 * fVar34);
        pfVar12[2] = fVar34 * fVar27;
        pfVar18 = &fStack_168;
        pfVar12 = &fStack_104;
        pfVar17 = pfVar22;
        bVar4 = false;
      } while (bVar25);
      fVar34 = afStack_f8[9] - (float)afStack_f8._24_8_;
      fVar31 = afStack_f8[10] - SUB84(afStack_f8._24_8_,4);
      fVar27 = afStack_f8[0xb] - afStack_f8[8];
      fVar28 = -(fVar31 * (fStack_108 + fStack_fc)) + fVar27 * (uStack_110._4_4_ + fStack_100);
      fVar26 = -(fVar27 * ((float)uStack_110 + fStack_104)) + fVar34 * (fStack_108 + fStack_fc);
      fVar30 = -(fVar34 * (uStack_110._4_4_ + fStack_100)) +
               ((float)uStack_110 + fStack_104) * fVar31;
      fVar37 = 1.0 / SQRT(fVar30 * fVar30 + fVar26 * fVar26 + fVar28 * fVar28);
      pfVar9 = (float *)&uStack_110;
      bVar4 = true;
      do {
        bVar25 = bVar4;
        fVar36 = fVar28 * fVar37 * *pfVar9 + fVar26 * fVar37 * pfVar9[1] +
                 fVar30 * fVar37 * pfVar9[2];
        fVar40 = *pfVar9 - fVar28 * fVar37 * fVar36;
        fVar33 = pfVar9[1] - fVar26 * fVar37 * fVar36;
        fVar36 = pfVar9[2] - fVar30 * fVar37 * fVar36;
        fVar39 = 1.0 / SQRT(fVar36 * fVar36 + fVar40 * fVar40 + fVar33 * fVar33);
        *pfVar9 = fVar40 * fVar39;
        pfVar9[1] = fVar33 * fVar39;
        pfVar9[2] = fVar36 * fVar39;
        pfVar9 = &fStack_104;
        bVar4 = false;
      } while (bVar25);
      fVar28 = (fVar27 + fStack_fc) - fStack_108;
      fVar30 = (fVar34 + fStack_104) - (float)uStack_110;
      fVar26 = (float)((ulong)uStack_110 >> 0x20);
      fVar37 = (fVar31 + fStack_100) - fVar26;
      fVar27 = fVar34 * fVar34 + fVar31 * fVar31 + fVar27 * fVar27;
      uVar10 = CONCAT44(fVar27,fVar27);
      fVar34 = (float)-(uint)(fVar27 < fVar30 * fVar30 + fVar37 * fVar37 + fVar28 * fVar28);
      fVar27 = fStack_fc;
      if (((uint)fVar34 & 1) != 0) {
        fStack_104 = fStack_104 + (float)uStack_110;
        fStack_100 = fStack_100 + fVar26;
        fVar27 = fStack_fc + fStack_108;
        fStack_108 = 1.0 / SQRT(fStack_104 * fStack_104 + fStack_100 * fStack_100 + fVar27 * fVar27)
        ;
        fStack_104 = fStack_108 * fStack_104;
        fVar34 = fStack_108 * fStack_100;
        fStack_108 = fVar27 * fStack_108;
        uVar10 = (ulong)(uint)fStack_108;
        uStack_110 = CONCAT44(fVar34,fStack_104);
        fStack_100 = fVar34;
        fStack_fc = fStack_108;
      }
      dVar29 = (double)(ulong)(uint)fVar34;
      uVar35 = (ulong)(uint)fVar27;
      FUN_1096b9358(aplStack_130);
      FUN_1096b9358(aplStack_130 + 2);
      pfVar9 = (float *)&uStack_110;
      pplVar21 = aplStack_130;
      pfVar22 = afStack_f8 + 6;
      bVar4 = true;
      do {
        bVar25 = bVar4;
        fVar34 = (float)uVar35;
        fVar31 = (float)uVar10;
        fVar27 = SUB84(dVar29,0);
        FUN_109699d9c(&puStack_160,pfVar9);
        fVar27 = fVar27 - uStack_158._4_4_;
        fVar31 = fVar31 - fStack_144;
        fVar34 = fVar34 - fStack_134;
        fVar26 = 1.0 / SQRT(fVar27 * fVar27 + fVar31 * fVar31 + fVar34 * fVar34);
        fVar27 = fVar27 * fVar26;
        fVar31 = fVar31 * fVar26;
        fVar34 = fVar34 * fVar26;
        fVar26 = fVar34 * 0.0 - fVar31;
        fVar28 = fVar27 + fVar34 * -0.0;
        fVar30 = fVar27 * -0.0 + fVar31 * 0.0;
        if (ABS(fVar26) <= 1.8446744e+19) {
          fVar37 = 1.0;
          if (ABS(fVar26) < 5.421011e-20) {
            fVar37 = 1.9342813e+25;
          }
        }
        else {
          fVar37 = 5.169879e-26;
        }
        fVar40 = fVar28 * fVar37;
        fVar33 = fVar30 * fVar37;
        fVar37 = SQRT(fVar40 * fVar40 + fVar26 * fVar37 * fVar26 * fVar37 + fVar33 * fVar33) /
                 fVar37;
        if (1.1920929e-07 <= fVar37) {
          fVar26 = fVar26 / fVar37;
          fVar28 = fVar28 / fVar37;
          fVar30 = fVar30 / fVar37;
        }
        else {
          fVar28 = 0.0;
          fVar26 = 1.0;
          fVar30 = -0.0;
        }
        fVar34 = fVar34 + fVar31 * 0.0 + fVar27 * 0.0;
        uStack_19c = 0;
        uStack_1a4 = 0;
        uStack_1ac = 0;
        uStack_1b4 = 0;
        uStack_1bc = 0;
        fStack_1b8 = 0.0;
        fVar27 = fVar34;
        _hypotf();
        fVar27 = fVar27 - fVar34;
        fVar31 = fVar26 * fVar27;
        fVar40 = fVar28 * fVar27;
        uVar35 = (ulong)(uint)fVar40;
        fStack_1b8 = fVar37 * fVar30 + fVar28 * fVar31;
        fStack_1c0 = fVar37 * fVar28 + fVar30 * fVar31;
        uStack_1ac = CONCAT44(fVar30 * fVar31 - fVar37 * fVar28,(undefined4)uStack_1ac);
        uStack_1c8 = (long *)CONCAT44(fVar28 * fVar31 - fVar37 * fVar30,fVar34 + fVar26 * fVar31);
        uStack_1b4 = CONCAT44(fVar30 * fVar40 - fVar37 * fVar26,fVar34 + fVar28 * fVar40);
        uStack_1a4 = CONCAT44(fVar34 + fVar30 * fVar30 * fVar27,fVar37 * fVar26 + fVar30 * fVar40);
        FUN_1096b985c(&uStack_198,&uStack_1c8,lVar13 + 0x30);
        FUN_1096b9498(pplVar21);
        plVar8 = pplVar21[1];
        plVar8[7] = (long)plStack_190;
        plVar8[6] = uStack_198;
        plVar8[9] = lStack_180;
        plVar8[8] = (long)plStack_188;
        plVar8[0xb] = lStack_170;
        plVar8[10] = lStack_178;
        FUN_1096b9498(pplVar21);
        plVar8 = pplVar21[1];
        fVar27 = pfVar22[1];
        uVar10 = (ulong)(uint)fVar27;
        *(float *)((long)plVar8 + 0x3c) = *pfVar22;
        *(float *)((long)plVar8 + 0x4c) = fVar27;
        *(float *)((long)plVar8 + 0x5c) = pfVar22[2];
        lVar24 = *(long *)(param_5 + 8);
        plVar8 = plVar8 + -4;
        func_0x0001096966c0(plVar8,pdRam000000011382aab8);
        pdVar5 = pdRam000000011382aab8;
        if ((plVar8 == (long *)0x0) || (pdVar23 = (double *)plVar8[1], pdVar23 == (double *)0x0)) {
          plVar8 = pplVar21[1];
          pdVar23 = pdRam000000011382aab8;
          (**(code **)*pdRam000000011382aab8)();
          plVar8 = plVar8 + -4;
          FUN_109696718(plVar8,pdVar5);
          plVar8[1] = (long)pdVar23;
        }
        dVar29 = (double)*(float *)(lVar24 + 0x10);
        *pdVar23 = dVar29;
        pfVar9 = &fStack_104;
        pplVar21 = aplStack_130 + 2;
        pfVar22 = afStack_f8 + 9;
        bVar4 = false;
      } while (bVar25);
      func_0x000107c2acec(param_1);
      lVar24 = 0;
      *param_1 = &PTR_FUN_110afd8b8;
      do {
        FUN_1096985c0(param_1[1] + 8,(long)aplStack_130 + lVar24);
        lVar24 = lVar24 + 0x10;
      } while (lVar24 != 0x20);
      lVar24 = 0x10;
      do {
        *(undefined ***)((long)aplStack_130 + lVar24) = &PTR_FUN_110b01d60;
        func_0x000107c2acd4((long)aplStack_130 + lVar24);
        lVar24 = lVar24 + -0x10;
      } while (lVar24 != -0x10);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
        return;
      }
      ___stack_chk_fail();
    }
  }
  puStack_160 = &UNK_10f57d0c1;
  uStack_158 = &UNK_10f57d0c5;
  uStack_150 = 0x55;
  FUN_109699380(&puStack_160);
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1096dc934);
  (*pcVar6)();
}



/* Entry: 1096dc9c0; end: 1096dca93;  */

ulong FUN_1096dc9c0(float *param_1)

{
  float fVar1;
  float fVar3;
  ulong uVar2;
  
  fVar3 = *param_1;
  fVar1 = param_1[1];
  uVar2 = (ulong)(uint)fVar1;
  fVar1 = -param_1[8] / SQRT(fVar3 * fVar3 + fVar1 * fVar1 + param_1[2] * param_1[2]);
  if (0.9999999 <= ABS(fVar1)) {
    _atan2f();
    if (fVar1 < 0.0) {
      uVar2 = (ulong)(uint)((float)uVar2 + 3.1415927);
    }
  }
  else {
    uVar2 = (ulong)(uint)param_1[9];
    _atan2f(uVar2,param_1[10]);
    _asinf(fVar1);
    _atan2f(param_1[4],fVar3);
  }
  return uVar2;
}



/* Entry: 1096dca94; end: 1096dccaf;  */

void FUN_1096dca94(long param_1,long *param_2,long *param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined1 uStack_46;
  byte bStack_45;
  undefined1 uStack_44;
  byte bStack_43;
  undefined1 uStack_42;
  byte bStack_41;
  
  uVar4 = *(ulong *)(*(long *)(param_1 + 8) + 8);
  uVar5 = uVar4;
  if (0x7f < uVar4) {
    do {
      bStack_45 = (byte)uVar5 | 0x80;
      (**(code **)(*param_2 + 0x48))(param_2,&bStack_45,1,1);
      uVar4 = uVar5 >> 7;
      uVar2 = uVar5 >> 0xe;
      uVar5 = uVar4;
    } while (uVar2 != 0);
  }
  uStack_46 = (undefined1)uVar4;
  (**(code **)(*param_2 + 0x48))(param_2,&uStack_46,1,1);
  (**(code **)(*param_2 + 0x48))(param_2,*(long *)(param_1 + 8) + 0x10,4,1);
  (**(code **)(*param_3 + 0x20))(param_3,param_2,*(long *)(param_1 + 8) + 0x18);
  lVar6 = 0;
  lVar3 = *(long *)(param_1 + 8);
  do {
    uVar1 = *(uint *)(lVar3 + 0x28 + lVar6);
    uVar4 = (ulong)(int)uVar1;
    uVar5 = uVar4;
    if (0x7f < uVar1) {
      do {
        bStack_43 = (byte)uVar5 | 0x80;
        (**(code **)(*param_2 + 0x48))(param_2,&bStack_43,1,1);
        uVar4 = uVar5 >> 7;
        uVar2 = uVar5 >> 0xe;
        uVar5 = uVar4;
      } while (uVar2 != 0);
    }
    uStack_44 = (undefined1)uVar4;
    (**(code **)(*param_2 + 0x48))(param_2,&uStack_44,1,1);
    lVar6 = lVar6 + 4;
  } while (lVar6 != 8);
  lVar6 = 0;
  do {
    uVar1 = *(uint *)(lVar3 + 0x30 + lVar6);
    uVar4 = (ulong)(int)uVar1;
    uVar5 = uVar4;
    if (0x7f < uVar1) {
      do {
        bStack_41 = (byte)uVar5 | 0x80;
        (**(code **)(*param_2 + 0x48))(param_2,&bStack_41,1,1);
        uVar4 = uVar5 >> 7;
        uVar2 = uVar5 >> 0xe;
        uVar5 = uVar4;
      } while (uVar2 != 0);
    }
    uStack_42 = (undefined1)uVar4;
    (**(code **)(*param_2 + 0x48))(param_2,&uStack_42,1,1);
    lVar6 = lVar6 + 4;
  } while (lVar6 != 8);
  lVar6 = *(long *)(param_1 + 8);
  (**(code **)(*param_2 + 0x48))(param_2,lVar6 + 0x38,4,1);
  (**(code **)(*param_2 + 0x48))(param_2,lVar6 + 0x3c,4,1);
  return;
}



/* Entry: 1096dccb0; end: 1096dcfcb;  */

undefined8 * FUN_1096dccb0(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined ***pppuVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined **appuStack_90 [2];
  undefined **ppuStack_80;
  undefined8 uStack_78;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = *(long *)(param_1 + 8);
  *(undefined8 *)(lVar6 + 8) = 0;
  pppuVar4 = &ppuStack_80;
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x40))(param_2,pppuVar4,1,1);
  iVar3 = (int)pppuVar4;
  if ((int)plVar1 == 1) {
    uVar7 = 0;
    do {
      *(ulong *)(lVar6 + 8) = ((ulong)ppuStack_80 & 0x7f) << (uVar7 & 0x3f) | *(ulong *)(lVar6 + 8);
      if (-1 < (char)ppuStack_80) {
        lVar6 = *(long *)(param_1 + 8) + 0x10;
        plVar1 = param_2;
        (**(code **)(*param_2 + 0x40))(param_2,lVar6,4,1);
        iVar3 = (int)lVar6;
        if ((int)plVar1 == 1) {
          lVar6 = *(long *)(param_1 + 8);
          (**(code **)(*param_3 + 0x28))(appuStack_90,param_3,param_2);
          FUN_1096b7c7c(&ppuStack_80,appuStack_90);
          uVar9 = *(undefined8 *)(lVar6 + 0x20);
          *(undefined8 *)(lVar6 + 0x20) = uStack_78;
          *(undefined ***)(lVar6 + 0x18) = ppuStack_80;
          ppuStack_80 = &PTR_FUN_110b01d60;
          uStack_78 = uVar9;
          func_0x000107c2acd4(&ppuStack_80);
          appuStack_90[0] = &PTR_FUN_110b01d60;
          func_0x000107c2acd4(appuStack_90);
          lVar6 = param_3[1] + -0x20;
          uVar9 = uRam000000011382aa08;
          func_0x0001096966c0();
          iVar3 = (int)uVar9;
          if (lVar6 == 0) {
            lVar6 = 0;
            lVar5 = *(long *)(param_1 + 8);
            goto LAB_1096dce40;
          }
        }
        break;
      }
      pppuVar4 = &ppuStack_80;
      plVar1 = param_2;
      (**(code **)(*param_2 + 0x40))(param_2,pppuVar4,1,1);
      iVar3 = (int)pppuVar4;
      uVar7 = uVar7 + 7;
    } while ((int)plVar1 == 1);
  }
LAB_1096dcdf8:
  puVar2 = (undefined8 *)0x0;
  goto LAB_1096dcdfc;
  while( true ) {
    uVar8 = 0;
    uVar7 = 0;
    while( true ) {
      uVar8 = ((ulong)ppuStack_80 & 0x7f) << (uVar7 & 0x3f) | uVar8;
      if (-1 < (char)ppuStack_80) break;
      pppuVar4 = &ppuStack_80;
      plVar1 = param_2;
      (**(code **)(*param_2 + 0x40))(param_2,pppuVar4,1,1);
      iVar3 = (int)pppuVar4;
      uVar7 = uVar7 + 7;
      if ((int)plVar1 != 1) goto LAB_1096dcdf8;
    }
    *(int *)(lVar5 + 0x28 + lVar6) = (int)uVar8;
    lVar6 = lVar6 + 4;
    if (lVar6 == 8) break;
LAB_1096dce40:
    pppuVar4 = &ppuStack_80;
    plVar1 = param_2;
    (**(code **)(*param_2 + 0x40))(param_2,pppuVar4,1,1);
    iVar3 = (int)pppuVar4;
    if ((int)plVar1 != 1) goto LAB_1096dcdf8;
  }
  lVar6 = 0;
  do {
    pppuVar4 = &ppuStack_80;
    plVar1 = param_2;
    (**(code **)(*param_2 + 0x40))(param_2,pppuVar4,1,1);
    iVar3 = (int)pppuVar4;
    if ((int)plVar1 != 1) goto LAB_1096dcdf8;
    uVar8 = 0;
    uVar7 = 0;
    while( true ) {
      uVar8 = ((ulong)ppuStack_80 & 0x7f) << (uVar7 & 0x3f) | uVar8;
      if (-1 < (char)ppuStack_80) break;
      pppuVar4 = &ppuStack_80;
      plVar1 = param_2;
      (**(code **)(*param_2 + 0x40))(param_2,pppuVar4,1,1);
      iVar3 = (int)pppuVar4;
      uVar7 = uVar7 + 7;
      if ((int)plVar1 != 1) goto LAB_1096dcdf8;
    }
    *(int *)(lVar5 + 0x30 + lVar6) = (int)uVar8;
    lVar6 = lVar6 + 4;
  } while (lVar6 != 8);
  lVar6 = *(long *)(param_1 + 8);
  if (*(long *)(lVar6 + 8) != 0) {
    lVar6 = lVar6 + 0x38;
    plVar1 = param_2;
    (**(code **)(*param_2 + 0x40))(param_2,lVar6,4,1);
    iVar3 = (int)lVar6;
    if ((int)plVar1 != 1) goto LAB_1096dcdf8;
    lVar6 = *(long *)(param_1 + 8);
  }
  lVar6 = lVar6 + 0x3c;
  (**(code **)(*param_2 + 0x40))(param_2,lVar6,4,1);
  iVar3 = (int)lVar6;
  puVar2 = (undefined8 *)(ulong)((int)param_2 == 1);
LAB_1096dcdfc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    if (iVar3 != 0) {
      func_0x000104bd46a0();
      FUN_10969664c(appuStack_90);
    }
    __Unwind_Resume();
    *puVar2 = &PTR_FUN_110b01d60;
    func_0x000107c2acd4();
    return puVar2;
  }
  return puVar2;
}



/* Entry: 1096dcfcc; end: 1096dcfff;  */

undefined8 * FUN_1096dcfcc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096dd000; end: 1096dd033;  */

void FUN_1096dd000(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1096dd034; end: 1096dd05f;  */

void FUN_1096dd034(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(8);
  return;
}



/* Entry: 1096dd060; end: 1096dd0a3;  */

bool FUN_1096dd060(undefined8 param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = (long *)(*(long *)(param_2 + 8) + 8);
  if (*(char *)(*(long *)(param_2 + 8) + 0x1f) < '\0') {
    plVar1 = (long *)*plVar1;
  }
  _sscanf(plVar1,&UNK_10f57c058);
  return (int)plVar1 == 1;
}



/* Entry: 1096dd0a4; end: 1096dd0cf;  */

undefined8 FUN_1096dd0a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1096dd0d0; end: 1096dd127;  */

void FUN_1096dd0d0(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b09358;
  param_2 = param_2 + 0x28;
  FUN_109698fb4(param_2,&ppuStack_28);
  if (param_2 == 0) {
    FUN_1096978cc();
    puVar3 = (undefined8 *)0x11382a968;
  }
  else {
    puVar3 = (undefined8 *)(param_2 + 0x18);
  }
  uVar5 = *puVar3;
  param_1[1] = puVar3[1];
  *param_1 = uVar5;
  if (param_1[1] != 0) {
    piVar4 = (int *)(param_1[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = &PTR_FUN_110b00f28;
  return;
}



/* Entry: 1096dd128; end: 1096dd173;  */

void FUN_1096dd128(undefined8 *param_1)

{
  undefined **ppuStack_30;
  undefined8 uStack_28;
  
  FUN_1096dbc78(&ppuStack_30);
  param_1[1] = uStack_28;
  *param_1 = ppuStack_30;
  ppuStack_30 = &PTR_FUN_110b01d60;
  uStack_28 = 0;
  func_0x000107c2acd4(&ppuStack_30);
  return;
}



/* Entry: 1096dd174; end: 1096dd1a3;  */

bool FUN_1096dd174(long param_1)

{
  ___dynamic_cast(param_1,&PTR_DAT_110b01d40,&PTR_DAT_110b09358,0);
  return param_1 != 0;
}



/* Entry: 1096dd1a4; end: 1096dd1bf;  */

void FUN_1096dd1a4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(1);
  return;
}



/* Entry: 1096dd1c0; end: 1096dd207;  */

void FUN_1096dd1c0(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  uStack_22 = *param_3;
  uStack_21 = 0;
  puVar1 = &uStack_22;
  _strlen(puVar1);
  FUN_109697928(param_1,&uStack_22,puVar1);
  return;
}



/* Entry: 1096dd208; end: 1096dd25f;  */

undefined8 * FUN_1096dd208(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_110b01d60;
  puVar1 = (undefined8 *)0x28;
  func_0x000107c610a0();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 3) = 1;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = &PTR_DAT_110b00de0;
  }
  *param_1 = &PTR_FUN_110b00af0;
  param_1[1] = puVar1;
  puVar1 = param_1;
  func_0x000100033474(param_1,0x20);
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = &PTR_FUN_110b01c08;
  puVar1[1] = 0;
  return param_1;
}



/* Entry: 1096dd260; end: 1096dd2b7;  */

void FUN_1096dd260(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b09358;
  param_2 = param_2 + 0x28;
  FUN_109698fb4(param_2,&ppuStack_28);
  if (param_2 == 0) {
    FUN_1096978cc();
    puVar3 = (undefined8 *)0x11382a968;
  }
  else {
    puVar3 = (undefined8 *)(param_2 + 0x18);
  }
  uVar5 = *puVar3;
  param_1[1] = puVar3[1];
  *param_1 = uVar5;
  if (param_1[1] != 0) {
    piVar4 = (int *)(param_1[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = &PTR_FUN_110b00f28;
  return;
}



/* Entry: 1096dd2b8; end: 1096dd2eb;  */

long FUN_1096dd2b8(long param_1)

{
  *(undefined ***)(param_1 + 0x18) = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096dd2ec; end: 1096dd31f;  */

void FUN_1096dd2ec(long param_1)

{
  *(undefined ***)(param_1 + 0x18) = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1096dd320; end: 1096dd377;  */

long FUN_1096dd320(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 1096dd378; end: 1096dd387;  */

void FUN_1096dd378(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b09578;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1096dd388; end: 1096dd3a7;  */

void FUN_1096dd388(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b09578;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1096dd3a8; end: 1096dd3af;  */

void FUN_1096dd3a8(void)

{
  return;
}



/* Entry: 1096dd3b0; end: 1096dd443;  */

undefined8 * FUN_1096dd3b0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_110b01d60;
  puVar1 = (undefined8 *)0x28;
  _malloc();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 3) = 1;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = &PTR_DAT_110b00de0;
  }
  *param_1 = &PTR_FUN_110b095c8;
  param_1[1] = puVar1;
  puVar1 = param_1;
  func_0x000107c2acd0(param_1,0x30);
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  *puVar1 = &PTR_FUN_110b096f0;
  puVar1[1] = &PTR_FUN_110b01d60;
  return param_1;
}



/* Entry: 1096dd444; end: 1096dd453;  */

void FUN_1096dd444(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001096dd450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(param_1 + 8) + 8) + 0x20))();
  return;
}



/* Entry: 1096dd454; end: 1096dd5ff;  */

void FUN_1096dd454(long param_1,long *param_2,long param_3,undefined8 param_4)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  float fVar5;
  undefined **appuStack_90 [2];
  ulong auStack_80 [3];
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x28))();
  fVar5 = (float)((int)plVar4 + -1) / 2.0;
  auStack_80[0] = (ulong)(uint)(fVar5 + fVar5);
  auStack_80[1] = 0xbf800000;
  auStack_80[2] = 0x3f80000080000000;
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x20))(param_2);
  plVar2 = param_2;
  (**(code **)(*param_2 + 0x28))(param_2);
  FUN_1096a54f0(appuStack_90,param_2,auStack_80,plVar4,plVar2);
  lVar3 = param_3;
  ___dynamic_cast(param_3,&PTR_DAT_110b01d40,&PTR_DAT_110b05200,0);
  if (lVar3 != 0) {
    FUN_1096c0f64(fVar5);
    plVar4 = (long *)(*(long *)(param_1 + 8) + 8);
    (**(code **)(*plVar4 + 0x30))(plVar4,appuStack_90,param_3,param_4);
    ___dynamic_cast(param_3,&PTR_DAT_110b01d40,&PTR_DAT_110b05200,0);
    if (param_3 != 0) {
      FUN_1096c0f64(fVar5);
      appuStack_90[0] = &PTR_FUN_110b01d60;
      func_0x000107c2acd4(appuStack_90);
      return;
    }
  }
  puStack_68 = &UNK_10f57d0c1;
  puStack_60 = &UNK_10f57d0c5;
  uStack_58 = 0x4e;
  FUN_109699380();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1096dd5e8);
  (*pcVar1)();
}



/* Entry: 1096dd600; end: 1096dd703;  */

void FUN_1096dd600(long param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 uStack_33;
  undefined1 uStack_32;
  byte bStack_31;
  
  uStack_33 = 0;
  (**(code **)(*param_2 + 0x48))(param_2,&uStack_33,1,1);
  (**(code **)(*param_3 + 0x20))(param_3,param_2,*(long *)(param_1 + 8) + 8);
  lVar2 = *(long *)(param_1 + 8);
  uVar3 = *(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18) >> 2;
  uVar4 = uVar3;
  if (0x7f < uVar3) {
    do {
      bStack_31 = (byte)uVar4 | 0x80;
      (**(code **)(*param_2 + 0x48))(param_2,&bStack_31,1,1);
      uVar3 = uVar4 >> 7;
      uVar1 = uVar4 >> 0xe;
      uVar4 = uVar3;
    } while (uVar1 != 0);
  }
  uStack_32 = (undefined1)uVar3;
  (**(code **)(*param_2 + 0x48))(param_2,&uStack_32,1,1);
  (**(code **)(*param_2 + 0x48))
            (param_2,*(long *)(lVar2 + 0x18),4,
             (*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) * 0x40000000 >> 0x20);
  return;
}



/* Entry: 1096dd704; end: 1096dd8fb;  */

undefined8 * FUN_1096dd704(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined ***pppuVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined **appuStack_70 [2];
  undefined **ppuStack_60;
  undefined8 uStack_58;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar4 = &ppuStack_60;
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x40))(param_2,pppuVar4,1,1);
  while (iVar3 = (int)pppuVar4, (int)plVar1 == 1) {
    if (-1 < (char)ppuStack_60) {
      lVar7 = *(long *)(param_1 + 8);
      (**(code **)(*param_3 + 0x28))(appuStack_70,param_3,param_2);
      FUN_1093e0930(&ppuStack_60,appuStack_70);
      uVar9 = *(undefined8 *)(lVar7 + 0x10);
      *(undefined8 *)(lVar7 + 0x10) = uStack_58;
      *(undefined ***)(lVar7 + 8) = ppuStack_60;
      ppuStack_60 = &PTR_FUN_110b01d60;
      uStack_58 = uVar9;
      func_0x000107c2acd4(&ppuStack_60);
      appuStack_70[0] = &PTR_FUN_110b01d60;
      func_0x000107c2acd4(appuStack_70);
      lVar7 = param_3[1] + -0x20;
      uVar9 = uRam000000011382aa08;
      func_0x0001096966c0();
      iVar3 = (int)uVar9;
      if (lVar7 == 0) {
        lVar7 = *(long *)(param_1 + 8);
        pppuVar4 = &ppuStack_60;
        plVar1 = param_2;
        (**(code **)(*param_2 + 0x40))(param_2,pppuVar4,1,1);
        iVar3 = (int)pppuVar4;
        if ((int)plVar1 == 1) {
          uVar6 = 0;
          uVar8 = 0;
          goto LAB_1096dd820;
        }
      }
      break;
    }
    pppuVar4 = &ppuStack_60;
    plVar1 = param_2;
    (**(code **)(*param_2 + 0x40))(param_2,pppuVar4,1,1);
  }
  goto LAB_1096dd85c;
  while( true ) {
    pppuVar4 = &ppuStack_60;
    plVar1 = param_2;
    (**(code **)(*param_2 + 0x40))(param_2,pppuVar4,1,1);
    iVar3 = (int)pppuVar4;
    uVar8 = uVar8 + 7;
    if ((int)plVar1 != 1) break;
LAB_1096dd820:
    uVar6 = ((ulong)ppuStack_60 & 0x7f) << (uVar8 & 0x3f) | uVar6;
    if (-1 < (char)ppuStack_60) {
      func_0x000108a5942c(lVar7 + 0x18,uVar6);
      lVar5 = *(long *)(lVar7 + 0x18);
      uVar8 = *(long *)(lVar7 + 0x20) - lVar5;
      (**(code **)(*param_2 + 0x40))(param_2,lVar5,4,(long)(uVar8 * 0x40000000) >> 0x20);
      iVar3 = (int)lVar5;
      puVar2 = (undefined8 *)(ulong)((int)param_2 == (int)(uVar8 >> 2));
      goto LAB_1096dd860;
    }
  }
LAB_1096dd85c:
  puVar2 = (undefined8 *)0x0;
LAB_1096dd860:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar2;
  }
  ___stack_chk_fail();
  if (iVar3 != 0) {
    func_0x000104bd46a0();
    FUN_10969664c(appuStack_70);
  }
  __Unwind_Resume();
  *puVar2 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return puVar2;
}



/* Entry: 1096dd8fc; end: 1096dd92f;  */

undefined8 * FUN_1096dd8fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096dd930; end: 1096dd963;  */

void FUN_1096dd930(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1096dd964; end: 1096dd97f;  */

void FUN_1096dd964(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(1);
  return;
}



/* Entry: 1096dd980; end: 1096dd9c7;  */

void FUN_1096dd980(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  uStack_22 = *param_3;
  uStack_21 = 0;
  puVar1 = &uStack_22;
  _strlen(puVar1);
  FUN_109697928(param_1,&uStack_22,puVar1);
  return;
}



/* Entry: 1096dd9c8; end: 1096dda1f;  */

undefined8 * FUN_1096dd9c8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_110b01d60;
  puVar1 = (undefined8 *)0x28;
  func_0x000107c610a0();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 3) = 1;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = &PTR_DAT_110b00de0;
  }
  *param_1 = &PTR_FUN_110b00af0;
  param_1[1] = puVar1;
  puVar1 = param_1;
  func_0x000100033474(param_1,0x20);
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = &PTR_FUN_110b01c08;
  puVar1[1] = 0;
  return param_1;
}



/* Entry: 1096dda20; end: 1096dda77;  */

void FUN_1096dda20(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b09600;
  param_2 = param_2 + 0x28;
  FUN_109698fb4(param_2,&ppuStack_28);
  if (param_2 == 0) {
    FUN_1096978cc();
    puVar3 = (undefined8 *)0x11382a968;
  }
  else {
    puVar3 = (undefined8 *)(param_2 + 0x18);
  }
  uVar5 = *puVar3;
  param_1[1] = puVar3[1];
  *param_1 = uVar5;
  if (param_1[1] != 0) {
    piVar4 = (int *)(param_1[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = &PTR_FUN_110b00f28;
  return;
}



/* Entry: 1096dda78; end: 1096ddac3;  */

void FUN_1096dda78(undefined8 *param_1)

{
  undefined **ppuStack_30;
  undefined8 uStack_28;
  
  FUN_1096dd3b0(&ppuStack_30);
  param_1[1] = uStack_28;
  *param_1 = ppuStack_30;
  ppuStack_30 = &PTR_FUN_110b01d60;
  uStack_28 = 0;
  func_0x000107c2acd4(&ppuStack_30);
  return;
}



/* Entry: 1096ddac4; end: 1096ddaf3;  */

bool FUN_1096ddac4(long param_1)

{
  ___dynamic_cast(param_1,&PTR_DAT_110b01d40,&PTR_DAT_110b09600,0);
  return param_1 != 0;
}



/* Entry: 1096ddaf4; end: 1096ddb3b;  */

long FUN_1096ddaf4(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x18);
    __ZdlPv();
  }
  *(undefined ***)(param_1 + 8) = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096ddb3c; end: 1096ddb83;  */

void FUN_1096ddb3c(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x18);
    __ZdlPv();
  }
  *(undefined ***)(param_1 + 8) = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1096ddb84; end: 1096ddc4f;  */

undefined8 * FUN_1096ddb84(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_110b01d60;
  puVar1 = (undefined8 *)0x28;
  _malloc();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 3) = 1;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = &PTR_DAT_110b00de0;
  }
  *param_1 = &PTR_FUN_110b09758;
  param_1[1] = puVar1;
  puVar1 = param_1;
  func_0x000107c2acd0(param_1,0x50);
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[1] = 0;
  *puVar1 = &PTR_DAT_110b00de0;
  FUN_1096cb8ac();
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  *puVar1 = &PTR_FUN_110b09880;
  return param_1;
}



/* Entry: 1096ddc50; end: 1096de2ab;  */

void FUN_1096ddc50(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  float *pfVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  float fVar18;
  long *plVar17;
  undefined8 uVar19;
  float fVar20;
  long *plVar21;
  float fVar22;
  float fVar23;
  undefined **ppuStack_160;
  long lStack_158;
  long lStack_148;
  undefined8 uStack_140;
  float fStack_138;
  undefined **ppuStack_130;
  long lStack_128;
  undefined8 uStack_118;
  long *plStack_110;
  undefined4 uStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  undefined **ppuStack_d0;
  long lStack_c8;
  long lStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined **ppuStack_90;
  long lStack_88;
  undefined **ppuStack_80;
  long lStack_78;
  
  if (*(long *)(param_4 + 0x18) != 0) {
    ___dynamic_cast(param_3,&PTR_DAT_110b01d40,&PTR_DAT_110b05200,0);
    if (param_3 == 0) {
      func_0x000107c2acdc();
    }
    lVar6 = *(long *)(param_3 + 8);
    if (lVar6 != 0) {
      piVar5 = (int *)(lVar6 + -8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar3) {
          *piVar5 = *piVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppuStack_80 = &PTR_FUN_110b051b8;
    lVar8 = *(long *)(param_4 + 0x18);
    lStack_148 = *(long *)(param_1 + 8);
    lVar7 = lVar8 + 0x28;
    lStack_78 = lVar6;
    FUN_1096bd5b4(lVar7,&lStack_148);
    if (lVar7 == 0) {
      plVar9 = (long *)0x78;
      __Znwm();
      plVar21 = plVar9 + 1;
      *plVar21 = 0;
      plVar9[2] = 0;
      *plVar9 = (long)&PTR_FUN_110b098e8;
      uStack_118 = plVar9 + 3;
      plVar9[4] = 0;
      *uStack_118 = 0x3f800000;
      plVar9[6] = 0;
      plVar9[5] = 0;
      plVar9[8] = 0;
      plVar9[7] = 0;
      plVar9[10] = 0;
      plVar9[9] = 0;
      plVar9[0xb] = 0;
      plVar9[0xc] = 0;
      plVar9[6] = 0;
      plVar9[7] = 0;
      plVar9[8] = 0;
      *(undefined4 *)(plVar9 + 9) = 0x3f800000;
      plVar9[0xd] = 0;
      plVar9[0xe] = 0;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar3) {
          *plVar21 = *plVar21 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lStack_c0 = lStack_148;
      uStack_e8 = 0;
      fStack_e0 = 0.0;
      fStack_dc = 0.0;
      plStack_110 = plVar9;
      plStack_b8 = uStack_118;
      plStack_b0 = plVar9;
      FUN_1096bd704(lVar8 + 0x28,&lStack_c0,&lStack_c0);
      plVar9 = plStack_b0;
      if (plStack_b0 != (long *)0x0) {
        plVar21 = plStack_b0 + 1;
        do {
          lVar6 = *plVar21;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar3) {
            *plVar21 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
      plVar9 = (long *)CONCAT44(fStack_dc,fStack_e0);
      if (plVar9 != (long *)0x0) {
        plVar21 = plVar9 + 1;
        do {
          lVar6 = *plVar21;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar3) {
            *plVar21 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
      plVar21 = plStack_110;
      plVar9 = uStack_118;
      lVar6 = lStack_78;
      if (plStack_110 != (long *)0x0) {
        plVar10 = plStack_110 + 1;
        do {
          lVar7 = *plVar10;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar3) {
            *plVar10 = lVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_110 + 0x10))(plStack_110);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
          lVar6 = lStack_78;
        }
      }
    }
    else {
      plVar9 = *(long **)(lVar7 + 0x18);
    }
    fVar15 = *(float *)(lVar6 + 8);
    fVar11 = *(float *)(lVar6 + 0xc);
    bVar3 = true;
    if ((!NAN(fVar15)) && (bVar3 = true, !NAN(fVar11))) {
      bVar3 = false;
    }
    if (!bVar3) {
      lVar8 = *(long *)(param_1 + 8);
      lVar7 = *(long *)(lVar8 + 0x28) - (long)*(int **)(lVar8 + 0x20);
      if (lVar7 == 0) {
        plVar21 = (long *)0x0;
      }
      else {
        lVar7 = lVar7 >> 2;
        plVar21 = (long *)0x0;
        piVar5 = *(int **)(lVar8 + 0x20);
        pfVar4 = *(float **)(lVar8 + 0x38);
        do {
          puVar1 = (undefined8 *)(*(long *)(lVar6 + 0x18) + (long)*piVar5 * 8);
          uVar19 = *puVar1;
          fVar18 = (float)uVar19;
          plVar21 = (long *)CONCAT44((float)((ulong)plVar21 >> 0x20) +
                                     ((float)((ulong)*(undefined8 *)(lVar6 + 0x10) >> 0x20) +
                                     fVar18 * fVar11 + (float)((ulong)uVar19 >> 0x20) * fVar15) *
                                     *pfVar4,SUB84(plVar21,0) +
                                             ((float)*(undefined8 *)(lVar6 + 0x10) +
                                             -*(float *)((long)puVar1 + 4) * fVar11 +
                                             fVar18 * fVar15) * *pfVar4);
          lVar7 = lVar7 + -1;
          piVar5 = piVar5 + 1;
          pfVar4 = pfVar4 + 1;
        } while (lVar7 != 0);
      }
      pfVar4 = *(float **)(param_4 + 0x18);
      FUN_1096be8c0();
      pfVar4[2] = 0.0;
      pfVar4[3] = 0.0;
      pfVar4[0] = 1.0;
      pfVar4[1] = 0.0;
      *(undefined8 *)(pfVar4 + 6) = *(undefined8 *)(pfVar4 + 4);
      fVar18 = (float)((ulong)plVar21 >> 0x20);
      bVar3 = true;
      if ((!NAN(SUB84(plVar21,0))) && (bVar3 = true, !NAN(fVar18))) {
        bVar3 = false;
      }
      if (!bVar3) {
        FUN_1096a57ec(&ppuStack_90,param_2);
        lVar6 = *(long *)(param_1 + 8);
        fVar12 = *(float *)(lVar6 + 0x18);
        uStack_118 = (long *)CONCAT44(fVar11 * fVar12,fVar15 * fVar12);
        lStack_c8 = lStack_88;
        ppuStack_d0 = ppuStack_90;
        if (lStack_88 != 0) {
          piVar5 = (int *)(lStack_88 + -8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
            if (bVar3) {
              *piVar5 = *piVar5 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        plStack_110 = plVar21;
        FUN_1096cb958(&lStack_c0,lVar6 + 8,&uStack_118,&ppuStack_d0,0);
        ppuStack_d0 = &PTR_FUN_110b01d60;
        func_0x000107c2acd4(&ppuStack_d0);
        plVar10 = plVar9 + 3;
        lVar6 = *plVar10;
        if (lVar6 != plVar9[4]) {
          FUN_1096cc31c(&uStack_e8,*(long *)(param_1 + 8) + 8,plVar9,&lStack_c0);
          fVar23 = *(float *)((long)plVar9 + 0xc);
          lVar6 = plVar9[1];
          fVar22 = fStack_dc + SUB84(plStack_b8,0);
          fVar12 = fStack_d8 + (float)((ulong)plStack_b8 >> 0x20);
          plVar17 = plStack_b8;
          if (plVar9[9] == plVar9[10]) {
            fVar13 = 0.0;
          }
          else {
            lVar7 = *(long *)(param_1 + 8);
            lStack_148 = plVar9[6];
            lStack_128 = lStack_88;
            ppuStack_130 = ppuStack_90;
            if (lStack_88 != 0) {
              piVar5 = (int *)(lStack_88 + -8);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
                if (bVar3) {
                  *piVar5 = *piVar5 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            uStack_140 = CONCAT44(fVar12,fVar22);
            FUN_1096cb958(&uStack_118,lVar7 + 8,&lStack_148,&ppuStack_130,1);
            ppuStack_130 = &PTR_FUN_110b01d60;
            func_0x000107c2acd4(&ppuStack_130);
            FUN_1096cc31c(&lStack_148,*(long *)(param_1 + 8) + 8,plVar9 + 6,&uStack_118);
            fVar13 = fStack_138;
            if (lStack_100 != 0) {
              lStack_f8 = lStack_100;
              _free(*(undefined8 *)(lStack_100 + -8));
            }
          }
          fVar16 = SUB84(plVar17,0);
          ___sincosf_stret();
          *pfVar4 = fVar16;
          pfVar4[1] = fVar13;
          fVar20 = (float)lVar6;
          fVar12 = fVar12 - (fVar20 * fVar13 + (float)((ulong)lVar6 >> 0x20) * fVar16);
          uVar14 = CONCAT44(fVar12,fVar22 - (-fVar23 * fVar13 + fVar20 * fVar16));
          uVar19 = uVar14;
          _hypotf(uVar14,fVar12);
          if (0.25 < (float)uVar19) {
            *(undefined8 *)(pfVar4 + 2) = uVar14;
          }
          lVar6 = *plVar10;
        }
        *(undefined4 *)(plVar9 + 2) = plStack_b0._0_4_;
        plVar9[1] = (long)plStack_b8;
        *plVar9 = lStack_c0;
        if (lVar6 != 0) {
          plVar9[4] = lVar6;
          _free(*(undefined8 *)(lVar6 + -8));
          *plVar10 = 0;
          plVar9[4] = 0;
          plVar9[5] = 0;
        }
        plVar9[4] = lStack_a0;
        plVar9[3] = lStack_a8;
        plVar9[5] = lStack_98;
        lStack_a8 = 0;
        lStack_a0 = 0;
        lStack_98 = 0;
        lVar6 = *(long *)(param_1 + 8);
        fVar12 = *(float *)(lVar6 + 0x1c);
        if (fVar12 != 0.0) {
          uStack_e8 = CONCAT44(fVar11 * fVar12,fVar15 * fVar12);
          lStack_158 = lStack_88;
          ppuStack_160 = ppuStack_90;
          if (lStack_88 != 0) {
            piVar5 = (int *)(lStack_88 + -8);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
              if (bVar3) {
                *piVar5 = *piVar5 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          fStack_e0 = SUB84(plVar21,0);
          fStack_dc = fVar18;
          FUN_1096cb958(&uStack_118,lVar6 + 8,&uStack_e8,&ppuStack_160,1);
          lVar6 = plVar9[9];
          plVar9[7] = (long)plStack_110;
          plVar9[6] = (long)uStack_118;
          *(undefined4 *)(plVar9 + 8) = uStack_108;
          if (lVar6 != 0) {
            plVar9[10] = lVar6;
            _free(*(undefined8 *)(lVar6 + -8));
            plVar9[9] = 0;
            plVar9[10] = 0;
            plVar9[0xb] = 0;
          }
          plVar9[10] = lStack_f8;
          plVar9[9] = lStack_100;
          plVar9[0xb] = lStack_f0;
          lStack_f8 = 0;
          lStack_f0 = 0;
          lStack_100 = 0;
          ppuStack_160 = &PTR_FUN_110b01d60;
          func_0x000107c2acd4(&ppuStack_160);
          if (lStack_a8 != 0) {
            lStack_a0 = lStack_a8;
            _free(*(undefined8 *)(lStack_a8 + -8));
          }
        }
        ppuStack_90 = &PTR_FUN_110b01d60;
        func_0x000107c2acd4(&ppuStack_90);
      }
    }
    ppuStack_80 = &PTR_FUN_110b01d60;
    func_0x000107c2acd4(&ppuStack_80);
  }
  return;
}



/* Entry: 1096de2ac; end: 1096de4e7;  */

void FUN_1096de2ac(long param_1,long *param_2,long *param_3)

{
  uint *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  uint *puVar5;
  ulong uVar6;
  undefined4 uStack_4c;
  undefined1 uStack_46;
  byte bStack_45;
  undefined1 uStack_44;
  byte bStack_43;
  undefined1 uStack_42;
  byte bStack_41;
  
  uStack_4c = 1;
  (**(code **)(*param_2 + 0x48))(param_2,&uStack_4c,4,1);
  (**(code **)(*param_3 + 0x20))(param_3,param_2,*(long *)(param_1 + 8) + 8);
  lVar3 = *(long *)(param_1 + 8);
  (**(code **)(*param_2 + 0x48))(param_2,lVar3 + 0x18,4,1);
  (**(code **)(*param_2 + 0x48))(param_2,lVar3 + 0x1c,4,1);
  lVar3 = *(long *)(param_1 + 8);
  uVar4 = *(long *)(lVar3 + 0x28) - *(long *)(lVar3 + 0x20) >> 2;
  uVar6 = uVar4;
  if (0x7f < uVar4) {
    do {
      bStack_45 = (byte)uVar6 | 0x80;
      (**(code **)(*param_2 + 0x48))(param_2,&bStack_45,1,1);
      uVar4 = uVar6 >> 7;
      uVar2 = uVar6 >> 0xe;
      uVar6 = uVar4;
    } while (uVar2 != 0);
  }
  uStack_46 = (undefined1)uVar4;
  (**(code **)(*param_2 + 0x48))(param_2,&uStack_46,1,1);
  puVar1 = *(uint **)(lVar3 + 0x28);
  for (puVar5 = *(uint **)(lVar3 + 0x20); puVar5 != puVar1; puVar5 = puVar5 + 1) {
    uVar4 = (ulong)(int)*puVar5;
    uVar6 = uVar4;
    if (0x7f < *puVar5) {
      do {
        bStack_43 = (byte)uVar6 | 0x80;
        (**(code **)(*param_2 + 0x48))(param_2,&bStack_43,1,1);
        uVar4 = uVar6 >> 7;
        uVar2 = uVar6 >> 0xe;
        uVar6 = uVar4;
      } while (uVar2 != 0);
    }
    uStack_44 = (undefined1)uVar4;
    (**(code **)(*param_2 + 0x48))(param_2,&uStack_44,1,1);
  }
  lVar3 = *(long *)(param_1 + 8);
  uVar4 = *(long *)(lVar3 + 0x40) - *(long *)(lVar3 + 0x38) >> 2;
  uVar6 = uVar4;
  if (0x7f < uVar4) {
    do {
      bStack_41 = (byte)uVar6 | 0x80;
      (**(code **)(*param_2 + 0x48))(param_2,&bStack_41,1,1);
      uVar4 = uVar6 >> 7;
      uVar2 = uVar6 >> 0xe;
      uVar6 = uVar4;
    } while (uVar2 != 0);
  }
  uStack_42 = (undefined1)uVar4;
  (**(code **)(*param_2 + 0x48))(param_2,&uStack_42,1,1);
  (**(code **)(*param_2 + 0x48))
            (param_2,*(long *)(lVar3 + 0x38),4,
             (*(long *)(lVar3 + 0x40) - *(long *)(lVar3 + 0x38)) * 0x40000000 >> 0x20);
  return;
}



/* Entry: 1096de4e8; end: 1096de957;  */

undefined8 * FUN_1096de4e8(long param_1,long *param_2,long *param_3)

{
  undefined4 *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined ***pppuVar5;
  undefined8 *puVar6;
  int iVar7;
  int *piVar8;
  undefined8 uVar9;
  long lVar10;
  undefined **ppuVar11;
  long lVar12;
  ulong uVar13;
  undefined4 *puVar14;
  long lVar15;
  ulong uVar16;
  undefined **ppuVar17;
  int iStack_84;
  undefined **appuStack_80 [2];
  undefined **ppuStack_70;
  undefined8 uStack_68;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  piVar8 = &iStack_84;
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x40))(param_2,piVar8,4,1);
  iVar7 = (int)piVar8;
  if ((int)plVar4 == 1) {
    lVar15 = *(long *)(param_1 + 8);
    (**(code **)(*param_3 + 0x28))(appuStack_80,param_3,param_2);
    pppuVar5 = appuStack_80;
    ___dynamic_cast(pppuVar5,&PTR_DAT_110b01d40,&PTR_DAT_110b071e8,0);
    if (pppuVar5 == (undefined ***)0x0) {
      func_0x000107c2acdc();
    }
    ppuVar17 = pppuVar5[1];
    if (ppuVar17 != (undefined **)0x0) {
      ppuVar11 = ppuVar17 + -1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
        if (bVar3) {
          *(int *)ppuVar11 = *(int *)ppuVar11 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_68 = *(undefined8 *)(lVar15 + 0x10);
    *(undefined ***)(lVar15 + 0x10) = ppuVar17;
    *(undefined ***)(lVar15 + 8) = &PTR_FUN_110b071c8;
    ppuStack_70 = &PTR_FUN_110b01d60;
    func_0x000107c2acd4(&ppuStack_70);
    appuStack_80[0] = &PTR_FUN_110b01d60;
    func_0x000107c2acd4(appuStack_80);
    lVar15 = param_3[1] + -0x20;
    uVar9 = uRam000000011382aa08;
    func_0x0001096966c0();
    iVar7 = (int)uVar9;
    if (lVar15 != 0) goto LAB_1096de648;
    lVar12 = *(long *)(param_1 + 8);
    lVar15 = lVar12 + 0x18;
    plVar4 = param_2;
    (**(code **)(*param_2 + 0x40))(param_2,lVar15,4,1);
    iVar7 = (int)lVar15;
    if ((int)plVar4 != 1) goto LAB_1096de648;
    lVar12 = lVar12 + 0x1c;
    plVar4 = param_2;
    (**(code **)(*param_2 + 0x40))(param_2,lVar12,4,1);
    iVar7 = (int)lVar12;
    bVar3 = (int)plVar4 == 1;
  }
  else {
LAB_1096de648:
    bVar3 = false;
  }
  if (iStack_84 < 1) {
    if (bVar3) {
      lVar15 = *(long *)(param_1 + 8);
      pppuVar5 = &ppuStack_70;
      plVar4 = param_2;
      (**(code **)(*param_2 + 0x40))(param_2,pppuVar5,4,1);
      iVar7 = (int)pppuVar5;
      if (((int)plVar4 == 1) && (iVar7 = (int)ppuStack_70, -1 < (int)ppuStack_70)) {
        func_0x000108a5942c(lVar15 + 0x20);
        for (lVar12 = *(long *)(lVar15 + 0x20); lVar12 != *(long *)(lVar15 + 0x28);
            lVar12 = lVar12 + 4) {
          plVar4 = param_2;
          lVar10 = lVar12;
          (**(code **)(*param_2 + 0x40))(param_2,lVar12,4,1);
          iVar7 = (int)lVar10;
          if ((int)plVar4 != 1) goto LAB_1096de8c8;
        }
        lVar15 = *(long *)(param_1 + 8);
        pppuVar5 = &ppuStack_70;
        plVar4 = param_2;
        (**(code **)(*param_2 + 0x40))(param_2,pppuVar5,4,1);
        puVar6 = (undefined8 *)0x0;
        iVar7 = (int)pppuVar5;
        if (((int)plVar4 == 1) && (iVar7 = (int)ppuStack_70, -1 < (int)ppuStack_70)) {
          func_0x00010742a308(lVar15 + 0x38);
          lVar12 = *(long *)(lVar15 + 0x38);
          if (lVar12 == *(long *)(lVar15 + 0x40)) {
            puVar6 = (undefined8 *)0x1;
          }
          else {
            do {
              plVar4 = param_2;
              lVar10 = lVar12;
              (**(code **)(*param_2 + 0x40))(param_2,lVar12,4,1);
              iVar7 = (int)lVar10;
              bVar3 = ((ulong)plVar4 & 0xffffffff) == 1;
              puVar6 = (undefined8 *)(ulong)bVar3;
              if (!bVar3) break;
              lVar12 = lVar12 + 4;
            } while (lVar12 != *(long *)(lVar15 + 0x40));
          }
        }
        goto LAB_1096de8cc;
      }
    }
  }
  else if (bVar3) {
    lVar15 = *(long *)(param_1 + 8);
    pppuVar5 = &ppuStack_70;
    plVar4 = param_2;
    (**(code **)(*param_2 + 0x40))(param_2,pppuVar5,1,1);
    iVar7 = (int)pppuVar5;
    if ((int)plVar4 == 1) {
      uVar13 = 0;
      uVar16 = 0;
      do {
        uVar13 = ((ulong)ppuStack_70 & 0x7f) << (uVar16 & 0x3f) | uVar13;
        if (-1 < (char)ppuStack_70) {
          func_0x000108a5942c(lVar15 + 0x20,uVar13);
          puVar1 = *(undefined4 **)(lVar15 + 0x28);
          puVar14 = *(undefined4 **)(lVar15 + 0x20);
          goto LAB_1096de754;
        }
        pppuVar5 = &ppuStack_70;
        plVar4 = param_2;
        (**(code **)(*param_2 + 0x40))(param_2,pppuVar5,1,1);
        uVar16 = uVar16 + 7;
        iVar7 = (int)pppuVar5;
      } while ((int)plVar4 == 1);
    }
  }
  goto LAB_1096de8c8;
LAB_1096de754:
  if (puVar14 == puVar1) goto LAB_1096de85c;
  pppuVar5 = &ppuStack_70;
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x40))(param_2,pppuVar5,1,1);
  iVar7 = (int)pppuVar5;
  if ((int)plVar4 != 1) goto LAB_1096de8c8;
  uVar13 = 0;
  uVar16 = 0;
  while( true ) {
    uVar13 = ((ulong)ppuStack_70 & 0x7f) << (uVar16 & 0x3f) | uVar13;
    if (-1 < (char)ppuStack_70) break;
    pppuVar5 = &ppuStack_70;
    plVar4 = param_2;
    (**(code **)(*param_2 + 0x40))(param_2,pppuVar5,1,1);
    uVar16 = uVar16 + 7;
    iVar7 = (int)pppuVar5;
    if ((int)plVar4 != 1) goto LAB_1096de8c8;
  }
  *puVar14 = (int)uVar13;
  puVar14 = puVar14 + 1;
  goto LAB_1096de754;
LAB_1096de85c:
  lVar15 = *(long *)(param_1 + 8);
  pppuVar5 = &ppuStack_70;
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x40))(param_2,pppuVar5,1,1);
  iVar7 = (int)pppuVar5;
  if ((int)plVar4 == 1) {
    uVar13 = 0;
    uVar16 = 0;
    do {
      uVar13 = ((ulong)ppuStack_70 & 0x7f) << (uVar16 & 0x3f) | uVar13;
      if (-1 < (char)ppuStack_70) {
        func_0x00010742a308(lVar15 + 0x38,uVar13);
        lVar12 = *(long *)(lVar15 + 0x38);
        uVar16 = *(long *)(lVar15 + 0x40) - lVar12;
        (**(code **)(*param_2 + 0x40))(param_2,lVar12,4,(long)(uVar16 * 0x40000000) >> 0x20);
        puVar6 = (undefined8 *)(ulong)((int)param_2 == (int)(uVar16 >> 2));
        iVar7 = (int)lVar12;
        goto LAB_1096de8cc;
      }
      pppuVar5 = &ppuStack_70;
      plVar4 = param_2;
      (**(code **)(*param_2 + 0x40))(param_2,pppuVar5,1,1);
      uVar16 = uVar16 + 7;
      iVar7 = (int)pppuVar5;
    } while ((int)plVar4 == 1);
  }
LAB_1096de8c8:
  puVar6 = (undefined8 *)0x0;
LAB_1096de8cc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    if (iVar7 != 0) {
      func_0x000104bd46a0();
    }
    __Unwind_Resume();
    *puVar6 = &PTR_FUN_110b01d60;
    func_0x000107c2acd4();
    return puVar6;
  }
  return puVar6;
}



/* Entry: 1096de958; end: 1096de98b;  */

undefined8 * FUN_1096de958(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096de98c; end: 1096de9bf;  */

void FUN_1096de98c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1096de9c0; end: 1096de9db;  */

void FUN_1096de9c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(1);
  return;
}



/* Entry: 1096de9dc; end: 1096dea23;  */

void FUN_1096de9dc(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  uStack_22 = *param_3;
  uStack_21 = 0;
  puVar1 = &uStack_22;
  _strlen(puVar1);
  FUN_109697928(param_1,&uStack_22,puVar1);
  return;
}



/* Entry: 1096dea24; end: 1096dea7b;  */

undefined8 * FUN_1096dea24(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_110b01d60;
  puVar1 = (undefined8 *)0x28;
  func_0x000107c610a0();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 3) = 1;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = &PTR_DAT_110b00de0;
  }
  *param_1 = &PTR_FUN_110b00af0;
  param_1[1] = puVar1;
  puVar1 = param_1;
  func_0x000100033474(param_1,0x20);
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = &PTR_FUN_110b01c08;
  puVar1[1] = 0;
  return param_1;
}



/* Entry: 1096dea7c; end: 1096dead3;  */

void FUN_1096dea7c(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b09790;
  param_2 = param_2 + 0x28;
  FUN_109698fb4(param_2,&ppuStack_28);
  if (param_2 == 0) {
    FUN_1096978cc();
    puVar3 = (undefined8 *)0x11382a968;
  }
  else {
    puVar3 = (undefined8 *)(param_2 + 0x18);
  }
  uVar5 = *puVar3;
  param_1[1] = puVar3[1];
  *param_1 = uVar5;
  if (param_1[1] != 0) {
    piVar4 = (int *)(param_1[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = &PTR_FUN_110b00f28;
  return;
}



/* Entry: 1096dead4; end: 1096deb1f;  */

void FUN_1096dead4(undefined8 *param_1)

{
  undefined **ppuStack_30;
  undefined8 uStack_28;
  
  FUN_1096ddb84(&ppuStack_30);
  param_1[1] = uStack_28;
  *param_1 = ppuStack_30;
  ppuStack_30 = &PTR_FUN_110b01d60;
  uStack_28 = 0;
  func_0x000107c2acd4(&ppuStack_30);
  return;
}



/* Entry: 1096deb20; end: 1096deb4f;  */

bool FUN_1096deb20(long param_1)

{
  ___dynamic_cast(param_1,&PTR_DAT_110b01d40,&PTR_DAT_110b09790,0);
  return param_1 != 0;
}



/* Entry: 1096deb50; end: 1096deba7;  */

long FUN_1096deb50(long param_1)

{
  if (*(long *)(param_1 + 0x38) != 0) {
    *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x38);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x20);
    __ZdlPv();
  }
  *(undefined ***)(param_1 + 8) = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096deba8; end: 1096debff;  */

void FUN_1096deba8(long param_1)

{
  if (*(long *)(param_1 + 0x38) != 0) {
    *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x38);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x20);
    __ZdlPv();
  }
  *(undefined ***)(param_1 + 8) = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1096dec00; end: 1096dec57;  */

long FUN_1096dec00(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 1096dec58; end: 1096dec67;  */

void FUN_1096dec58(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b098e8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1096dec68; end: 1096dec87;  */

void FUN_1096dec68(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b098e8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1096dec88; end: 1096decd3;  */

void FUN_1096dec88(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x60);
  if (lVar1 != 0) {
    *(long *)(param_1 + 0x68) = lVar1;
    _free(*(undefined8 *)(lVar1 + -8));
  }
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
    *(long *)(param_1 + 0x38) = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(*(undefined8 *)(lVar1 + -8));
    return;
  }
  return;
}



/* Entry: 1096decd4; end: 1096decd7;  */

void FUN_1096decd4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


