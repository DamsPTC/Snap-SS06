/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104a7f268; end: 104a7f27b;  */

undefined ** FUN_104a7f268(void)

{
  return &PTR_DAT_1107c1460;
}



/* Entry: 104a7f27c; end: 104a7f2af;  */

void FUN_104a7f27c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_DAT_1107c1480;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 104a7f2b0; end: 104a7f2db;  */

void FUN_104a7f2b0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_1107c1480;
  param_2[1] = uVar1;
  return;
}



/* Entry: 104a7f2dc; end: 104a7f317;  */

long FUN_104a7f2dc(long param_1,undefined8 param_2)

{
  FUN_104a7385c(param_2,&PTR_DAT_1107c14e0);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 104a7f318; end: 104a7f323;  */

undefined ** FUN_104a7f318(void)

{
  return &PTR_DAT_1107c14e0;
}



/* Entry: 104a7f324; end: 104a7f357;  */

void FUN_104a7f324(undefined8 *param_1,ulong param_2)

{
  if (param_2 >> 0x3b == 0) {
    __Znwm(param_2 << 5);
    return;
  }
  FUN_104a7757c();
  *param_1 = &PTR_FUN_1107c1500;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104a7f358; end: 104a7f367;  */

void FUN_104a7f358(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107c1500;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104a7f368; end: 104a7f387;  */

void FUN_104a7f368(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107c1500;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104a7f388; end: 104a7f393;  */

long * FUN_104a7f388(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (long *)(param_1 + 0x18);
  puVar2 = (undefined8 *)*plVar1;
  *plVar1 = 0;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)();
  }
  return plVar1;
}



/* Entry: 104a7f394; end: 104a7f483;  */

void FUN_104a7f394(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_104a7f394(param_1,*param_2);
    FUN_104a7f394(param_1,param_2[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 104a7f484; end: 104a7f497;  */

undefined8 * FUN_104a7f484(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  FUN_104a6fa70();
  *puVar1 = &PTR_FUN_1107c1550;
  if ((puVar1[1] & 1) != 0) {
    func_0x00010084dad0();
  }
  return puVar1;
}



/* Entry: 104a7f498; end: 104a7f4d3;  */

undefined8 * FUN_104a7f498(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107c1550;
  if ((param_1[1] & 1) != 0) {
    func_0x00010084dad0();
  }
  return param_1;
}



/* Entry: 104a7f4d4; end: 104a7f50f;  */

void FUN_104a7f4d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107c1550;
  if ((param_1[1] & 1) != 0) {
    func_0x00010084dad0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 104a7f510; end: 104a7f56f;  */

void FUN_104a7f510(ulong *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  int *piVar4;
  
  uVar3 = *(ulong *)(param_2 + 8);
  if ((uVar3 & 1) == 0) {
    *param_1 = uVar3;
    *(undefined4 *)(param_1 + 2) = 2;
  }
  else {
    piVar4 = (int *)(uVar3 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    *param_1 = uVar3;
    *(undefined4 *)(param_1 + 2) = 2;
    func_0x00010084dad0();
  }
  return;
}



/* Entry: 104a7f570; end: 104a7f5b7;  */

ulong * FUN_104a7f570(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong **ppuVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puStack_50;
  ulong uStack_48;
  
  puVar3 = param_1 + 1;
  if ((*param_1 & 1) == 0) {
    uVar7 = 1;
  }
  else {
    puVar3 = (ulong *)param_1[1];
    uVar7 = param_1[2];
  }
  uVar5 = *param_1 >> 1;
  if (uVar5 == uVar7) {
    ppuVar2 = &puStack_50;
    puVar3 = param_1 + 1;
    uVar7 = *param_1;
    if ((uVar7 & 1) == 0) {
      uVar5 = 2;
    }
    else {
      puVar3 = (ulong *)param_1[1];
      uVar5 = param_1[2] << 1;
    }
    puStack_50 = (ulong *)0x0;
    uStack_48 = 0;
    FUN_104a7f324();
    uVar4 = uVar7 >> 1;
    puVar1 = (ulong *)(ppuVar2 + uVar4 * 4);
    uVar8 = *param_2;
    uVar10 = param_2[3];
    uVar9 = param_2[2];
    uStack_48 = uVar5;
    puVar1[1] = param_2[1];
    puStack_50 = (ulong *)ppuVar2;
    *puVar1 = uVar8;
    puVar1[3] = uVar10;
    puVar1[2] = uVar9;
    puVar6 = (ulong *)ppuVar2;
    if (1 < uVar7) {
      do {
        uVar7 = *puVar3;
        uVar9 = puVar3[3];
        uVar8 = puVar3[2];
        puVar6[1] = puVar3[1];
        *puVar6 = uVar7;
        puVar6[3] = uVar9;
        puVar6[2] = uVar8;
        uVar4 = uVar4 - 1;
        puVar6 = puVar6 + 4;
        puVar3 = puVar3 + 4;
      } while (uVar4 != 0);
    }
    uVar7 = *param_1;
    if ((uVar7 & 1) != 0) {
      __ZdlPv(param_1[1]);
      uVar7 = *param_1;
      ppuVar2 = (ulong **)puStack_50;
      uVar5 = uStack_48;
    }
    param_1[1] = (ulong)ppuVar2;
    param_1[2] = uVar5;
    *param_1 = (uVar7 | 1) + 2;
    return puVar1;
  }
  puVar3 = puVar3 + uVar5 * 4;
  uVar7 = *param_2;
  uVar4 = param_2[3];
  uVar5 = param_2[2];
  puVar3[1] = param_2[1];
  *puVar3 = uVar7;
  puVar3[3] = uVar4;
  puVar3[2] = uVar5;
  *param_1 = *param_1 + 2;
  return puVar3;
}



/* Entry: 104a7f5b8; end: 104a7f68b;  */

ulong * FUN_104a7f5b8(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong **ppuVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puStack_50;
  ulong uStack_48;
  
  ppuVar2 = &puStack_50;
  puVar6 = param_1 + 1;
  uVar7 = *param_1;
  if ((uVar7 & 1) == 0) {
    uVar3 = 2;
  }
  else {
    puVar6 = (ulong *)param_1[1];
    uVar3 = param_1[2] << 1;
  }
  puStack_50 = (ulong *)0x0;
  uStack_48 = 0;
  FUN_104a7f324();
  uVar4 = uVar7 >> 1;
  puVar1 = (ulong *)(ppuVar2 + uVar4 * 4);
  uVar8 = *param_2;
  uVar10 = param_2[3];
  uVar9 = param_2[2];
  uStack_48 = uVar3;
  puVar1[1] = param_2[1];
  puStack_50 = (ulong *)ppuVar2;
  *puVar1 = uVar8;
  puVar1[3] = uVar10;
  puVar1[2] = uVar9;
  puVar5 = (ulong *)ppuVar2;
  if (1 < uVar7) {
    do {
      uVar7 = *puVar6;
      uVar9 = puVar6[3];
      uVar8 = puVar6[2];
      puVar5[1] = puVar6[1];
      *puVar5 = uVar7;
      puVar5[3] = uVar9;
      puVar5[2] = uVar8;
      uVar4 = uVar4 - 1;
      puVar5 = puVar5 + 4;
      puVar6 = puVar6 + 4;
    } while (uVar4 != 0);
  }
  uVar7 = *param_1;
  if ((uVar7 & 1) != 0) {
    __ZdlPv(param_1[1]);
    uVar7 = *param_1;
    ppuVar2 = (ulong **)puStack_50;
    uVar3 = uStack_48;
  }
  param_1[1] = (ulong)ppuVar2;
  param_1[2] = uVar3;
  *param_1 = (uVar7 | 1) + 2;
  return puVar1;
}



/* Entry: 104a7f68c; end: 104a7f68f;  */

undefined8 * FUN_104a7f68c(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_1107c15a0;
  plVar3 = *(long **)(param_1[1] + 8);
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    func_0x000100836ca4();
  }
  return param_1;
}



/* Entry: 104a7f690; end: 104a7f6a3;  */

void FUN_104a7f690(void)

{
  FUN_104a7f6e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104a7f6a4; end: 104a7f6df;  */

void FUN_104a7f6a4(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(*(long *)(param_1 + 8) + 0x170);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000104a7f6b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x20))();
    return;
  }
  return;
}



/* Entry: 104a7f6e0; end: 104a7f733;  */

undefined8 * FUN_104a7f6e0(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_1107c15a0;
  plVar3 = *(long **)(param_1[1] + 8);
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    func_0x000100836ca4();
  }
  return param_1;
}



/* Entry: 104a7f734; end: 104a7f7a7;  */

long FUN_104a7f734(long param_1,undefined8 *param_2)

{
  if (*(char *)(param_1 + 0x18) == '\0') {
    func_0x00010002b024(param_1,*param_2);
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  else {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc();
  }
  return param_1;
}



/* Entry: 104a7f7a8; end: 104a7f7ef;  */

ulong * FUN_104a7f7a8(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong **ppuVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puStack_50;
  ulong uStack_48;
  
  puVar3 = param_1 + 1;
  if ((*param_1 & 1) == 0) {
    uVar7 = 2;
  }
  else {
    puVar3 = (ulong *)param_1[1];
    uVar7 = param_1[2];
  }
  uVar5 = *param_1 >> 1;
  if (uVar5 == uVar7) {
    ppuVar2 = &puStack_50;
    puVar3 = param_1 + 1;
    uVar7 = *param_1;
    if ((uVar7 & 1) == 0) {
      uVar5 = 4;
    }
    else {
      puVar3 = (ulong *)param_1[1];
      uVar5 = param_1[2] << 1;
    }
    puStack_50 = (ulong *)0x0;
    uStack_48 = 0;
    FUN_104a7f324();
    uVar4 = uVar7 >> 1;
    puVar1 = (ulong *)(ppuVar2 + uVar4 * 4);
    uVar8 = *param_2;
    uVar10 = param_2[3];
    uVar9 = param_2[2];
    uStack_48 = uVar5;
    puVar1[1] = param_2[1];
    puStack_50 = (ulong *)ppuVar2;
    *puVar1 = uVar8;
    puVar1[3] = uVar10;
    puVar1[2] = uVar9;
    puVar6 = (ulong *)ppuVar2;
    if (1 < uVar7) {
      do {
        uVar7 = *puVar3;
        uVar9 = puVar3[3];
        uVar8 = puVar3[2];
        puVar6[1] = puVar3[1];
        *puVar6 = uVar7;
        puVar6[3] = uVar9;
        puVar6[2] = uVar8;
        uVar4 = uVar4 - 1;
        puVar6 = puVar6 + 4;
        puVar3 = puVar3 + 4;
      } while (uVar4 != 0);
    }
    uVar7 = *param_1;
    if ((uVar7 & 1) != 0) {
      __ZdlPv(param_1[1]);
      uVar7 = *param_1;
      ppuVar2 = (ulong **)puStack_50;
      uVar5 = uStack_48;
    }
    param_1[1] = (ulong)ppuVar2;
    param_1[2] = uVar5;
    *param_1 = (uVar7 | 1) + 2;
    return puVar1;
  }
  puVar3 = puVar3 + uVar5 * 4;
  uVar7 = *param_2;
  uVar4 = param_2[3];
  uVar5 = param_2[2];
  puVar3[1] = param_2[1];
  *puVar3 = uVar7;
  puVar3[3] = uVar4;
  puVar3[2] = uVar5;
  *param_1 = *param_1 + 2;
  return puVar3;
}



/* Entry: 104a7f7f0; end: 104a7f8c3;  */

ulong * FUN_104a7f7f0(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong **ppuVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puStack_50;
  ulong uStack_48;
  
  ppuVar2 = &puStack_50;
  puVar6 = param_1 + 1;
  uVar7 = *param_1;
  if ((uVar7 & 1) == 0) {
    uVar3 = 4;
  }
  else {
    puVar6 = (ulong *)param_1[1];
    uVar3 = param_1[2] << 1;
  }
  puStack_50 = (ulong *)0x0;
  uStack_48 = 0;
  FUN_104a7f324();
  uVar4 = uVar7 >> 1;
  puVar1 = (ulong *)(ppuVar2 + uVar4 * 4);
  uVar8 = *param_2;
  uVar10 = param_2[3];
  uVar9 = param_2[2];
  uStack_48 = uVar3;
  puVar1[1] = param_2[1];
  puStack_50 = (ulong *)ppuVar2;
  *puVar1 = uVar8;
  puVar1[3] = uVar10;
  puVar1[2] = uVar9;
  puVar5 = (ulong *)ppuVar2;
  if (1 < uVar7) {
    do {
      uVar7 = *puVar6;
      uVar9 = puVar6[3];
      uVar8 = puVar6[2];
      puVar5[1] = puVar6[1];
      *puVar5 = uVar7;
      puVar5[3] = uVar9;
      puVar5[2] = uVar8;
      uVar4 = uVar4 - 1;
      puVar5 = puVar5 + 4;
      puVar6 = puVar6 + 4;
    } while (uVar4 != 0);
  }
  uVar7 = *param_1;
  if ((uVar7 & 1) != 0) {
    __ZdlPv(param_1[1]);
    uVar7 = *param_1;
    ppuVar2 = (ulong **)puStack_50;
    uVar3 = uStack_48;
  }
  param_1[1] = (ulong)ppuVar2;
  param_1[2] = uVar3;
  *param_1 = (uVar7 | 1) + 2;
  return puVar1;
}



/* Entry: 104a7f8c4; end: 104a7f99b;  */

ulong * FUN_104a7f8c4(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong **ppuVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *puStack_50;
  ulong uStack_48;
  
  ppuVar2 = &puStack_50;
  puVar6 = param_1 + 1;
  uVar7 = *param_1;
  if ((uVar7 & 1) == 0) {
    uVar3 = 8;
  }
  else {
    puVar6 = (ulong *)param_1[1];
    uVar3 = param_1[2] << 1;
  }
  puStack_50 = (ulong *)0x0;
  uStack_48 = 0;
  func_0x000104a7f774();
  uVar4 = uVar7 >> 1;
  puVar1 = (ulong *)(ppuVar2 + uVar4);
  puStack_50 = (ulong *)ppuVar2;
  uStack_48 = uVar3;
  *puVar1 = *param_2;
  puVar5 = puStack_50;
  if (1 < uVar7) {
    do {
      *puVar5 = *puVar6;
      uVar4 = uVar4 - 1;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    } while (uVar4 != 0);
  }
  uVar7 = *param_1;
  if ((uVar7 & 1) != 0) {
    __ZdlPv(param_1[1]);
    uVar7 = *param_1;
    uVar3 = uStack_48;
  }
  param_1[1] = (ulong)puStack_50;
  param_1[2] = uVar3;
  *param_1 = (uVar7 | 1) + 2;
  return puVar1;
}



/* Entry: 104a7f99c; end: 104a7fa6f;  */

ulong * FUN_104a7f99c(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong **ppuVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puStack_50;
  ulong uStack_48;
  
  ppuVar2 = &puStack_50;
  puVar6 = param_1 + 1;
  uVar7 = *param_1;
  if ((uVar7 & 1) == 0) {
    uVar3 = 4;
  }
  else {
    puVar6 = (ulong *)param_1[1];
    uVar3 = param_1[2] << 1;
  }
  puStack_50 = (ulong *)0x0;
  uStack_48 = 0;
  FUN_104a7f324();
  uVar4 = uVar7 >> 1;
  puVar1 = (ulong *)(ppuVar2 + uVar4 * 4);
  uVar8 = *param_2;
  uVar10 = param_2[3];
  uVar9 = param_2[2];
  uStack_48 = uVar3;
  puVar1[1] = param_2[1];
  puStack_50 = (ulong *)ppuVar2;
  *puVar1 = uVar8;
  puVar1[3] = uVar10;
  puVar1[2] = uVar9;
  puVar5 = (ulong *)ppuVar2;
  if (1 < uVar7) {
    do {
      uVar7 = *puVar6;
      uVar9 = puVar6[3];
      uVar8 = puVar6[2];
      puVar5[1] = puVar6[1];
      *puVar5 = uVar7;
      puVar5[3] = uVar9;
      puVar5[2] = uVar8;
      uVar4 = uVar4 - 1;
      puVar5 = puVar5 + 4;
      puVar6 = puVar6 + 4;
    } while (uVar4 != 0);
  }
  uVar7 = *param_1;
  if ((uVar7 & 1) != 0) {
    __ZdlPv(param_1[1]);
    uVar7 = *param_1;
    ppuVar2 = (ulong **)puStack_50;
    uVar3 = uStack_48;
  }
  param_1[1] = (ulong)ppuVar2;
  param_1[2] = uVar3;
  *param_1 = (uVar7 | 1) + 2;
  return puVar1;
}



/* Entry: 104a7fa70; end: 104a7fa73;  */

undefined8 * FUN_104a7fa70(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_1107c1628;
  puStack_28 = param_1;
  FUN_104a7fe98(param_1[2] + 0x1b8,&puStack_28);
  lVar7 = param_1[2];
  if (*(long *)(lVar7 + 0x58) != 0) {
    lVar6 = param_1[3];
    func_0x0001004d75ac();
    lVar7 = param_1[2];
    if (lVar6 != 0) {
      plVar8 = *(long **)(lVar7 + 0x1a8);
      if (plVar8 != (long *)0x0) {
        plVar9 = (long *)(lVar7 + 0x1a8);
        do {
          plVar4 = plVar8 + 1;
          if ((ulong)param_1[3] <= (ulong)plVar8[4]) {
            plVar9 = plVar8;
            plVar4 = plVar8;
          }
          plVar8 = (long *)*plVar4;
        } while (plVar8 != (long *)0x0);
        if ((plVar9 != (long *)(lVar7 + 0x1a8)) && ((ulong)plVar9[4] <= (ulong)param_1[3])) {
          iVar3 = (int)plVar9[5] + -1;
          *(int *)(plVar9 + 5) = iVar3;
          if (iVar3 == 0) {
            FUN_104aacf80(*(undefined8 *)(lVar7 + 0x58),*(undefined8 *)(lVar6 + 0x18));
            func_0x000104a7ff80(param_1[2] + 0x1a0,plVar9);
            __ZdlPv(plVar9);
            lVar7 = param_1[2];
          }
          goto LAB_104a7fe24;
        }
      }
      func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/client_channel.cc"
                          ,0x1f1,2,"assertion failed: %s");
      _abort();
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x104a7fde8);
      (*pcVar5)();
    }
  }
LAB_104a7fe24:
  plVar8 = *(long **)(lVar7 + 8);
  do {
    lVar7 = *plVar8;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar2) {
      *plVar8 = lVar7 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar7 + -1 == 0) {
    func_0x000100836ca4();
  }
  puStack_28 = param_1 + 0xb;
  FUN_104a7fc68(&puStack_28);
  FUN_104a7fce4(param_1 + 8,param_1[9]);
  if ((*(char *)(param_1 + 7) != '\0') && (*(char *)((long)param_1 + 0x37) < '\0')) {
    __ZdlPv(param_1[4]);
  }
  func_0x0001004d6dac(param_1 + 3);
  return param_1;
}



/* Entry: 104a7fa74; end: 104a7fa87;  */

void FUN_104a7fa74(void)

{
  FUN_104a7fd24();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104a7fa88; end: 104a7fb0b;  */

void FUN_104a7fa88(long param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  long *unaff_x19;
  long *plVar3;
  
  plVar1 = (long *)(param_1 + 0x48);
  plVar2 = (long *)*plVar1;
  plVar3 = plVar1;
  if (plVar2 != (long *)0x0) {
    do {
      unaff_x19 = plVar3;
      plVar3 = plVar2 + 1;
      if (param_2 <= (ulong)plVar2[4]) {
        unaff_x19 = plVar2;
        plVar3 = plVar2;
      }
      plVar2 = (long *)*plVar3;
      plVar3 = unaff_x19;
    } while (plVar2 != (long *)0x0);
    if ((unaff_x19 != plVar1) && ((ulong)unaff_x19[4] <= param_2)) goto LAB_104a7fad8;
  }
  func_0x00010bda9a74();
LAB_104a7fad8:
  FUN_104a8e558(*(undefined8 *)(param_1 + 0x18),param_1 + 0x20,unaff_x19[5]);
  FUN_104a80450(param_1 + 0x40,unaff_x19);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(unaff_x19);
  return;
}



/* Entry: 104a7fb0c; end: 104a7fb13;  */

void FUN_104a7fb0c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  
  plVar4 = *(long **)(param_1 + 0x18);
  plVar1 = plVar4 + 1;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  func_0x000100460448(plVar4 + 0x32);
  plVar5 = plVar4 + 0x43;
  func_0x0001004c54f8();
  iVar6 = *(int *)((long)plVar4 + 0x1d4);
  if (iVar6 == 3) {
    FUN_104ab2050();
    (**(code **)(*plVar5 + 0x58))();
    if ((int)plVar5 != 0) {
      FUN_104a8e730(plVar4);
      goto LAB_104a8e694;
    }
    iVar6 = *(int *)((long)plVar4 + 0x1d4);
  }
  if (iVar6 == 1) {
    func_0x000100460dc4();
    lVar7 = *plVar5;
    func_0x0001004671a4();
    plVar4[0x6c] = lVar7;
  }
LAB_104a8e694:
  func_0x000100466b80(plVar4 + 0x32);
  do {
    lVar7 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar7 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar7 + -1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000104a8e6d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x10))(plVar4);
  return;
}



/* Entry: 104a7fb14; end: 104a7fc5b;  */

void FUN_104a7fb14(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  
  plVar8 = (long *)*param_2;
  *param_2 = 0;
  (**(code **)(*plVar8 + 0x10))(plVar8,*(undefined8 *)(param_1 + 0x18));
  puVar4 = (undefined8 *)(param_1 + 0x68);
  puVar10 = *(undefined8 **)(param_1 + 0x60);
  if (puVar10 < (undefined8 *)*puVar4) {
    puVar12 = puVar10 + 1;
    *puVar10 = plVar8;
  }
  else {
    plVar9 = (long *)(param_1 + 0x58);
    lVar11 = (long)puVar10 - *plVar9 >> 3;
    uVar1 = lVar11 + 1;
    if (uVar1 >> 0x3d != 0) {
      FUN_104a804c0(plVar9);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x104a7fc40);
      (*pcVar3)();
    }
    uVar5 = (long)*puVar4 - *plVar9;
    uVar6 = (long)uVar5 >> 2;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar5) {
      uVar6 = 0x1fffffffffffffff;
    }
    puStack_38 = puVar4;
    if (uVar6 == 0) {
      puVar4 = (undefined8 *)0x0;
    }
    else {
      FUN_104a804d4();
    }
    puVar10 = puVar4 + lVar11;
    puVar12 = puVar10 + 1;
    *puVar10 = plVar8;
    puVar2 = *(undefined8 **)(param_1 + 0x58);
    puStack_58 = *(undefined8 **)(param_1 + 0x60);
    puStack_48 = puStack_58;
    if (puStack_58 != puVar2) {
      do {
        puStack_58 = puStack_58 + -1;
        uVar7 = *puStack_58;
        *puStack_58 = 0;
        puVar10 = puVar10 + -1;
        *puVar10 = uVar7;
      } while (puStack_58 != puVar2);
      puStack_58 = (undefined8 *)*plVar9;
      puStack_48 = *(undefined8 **)(param_1 + 0x60);
    }
    *(undefined8 **)(param_1 + 0x58) = puVar10;
    *(undefined8 **)(param_1 + 0x60) = puVar12;
    uStack_40 = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 **)(param_1 + 0x68) = puVar4 + uVar6;
    puStack_50 = puStack_58;
    func_0x000104a80508(&puStack_58);
  }
  *(undefined8 **)(param_1 + 0x60) = puVar12;
  return;
}



/* Entry: 104a7fc5c; end: 104a7fc67;  */

undefined8 FUN_104a7fc5c(long param_1)

{
  return *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x130);
}



/* Entry: 104a7fc68; end: 104a7fce3;  */

void FUN_104a7fc68(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  
  puVar2 = (undefined8 *)*param_1;
  plVar3 = (long *)*puVar2;
  if (plVar3 != (long *)0x0) {
    plVar4 = (long *)puVar2[1];
    plVar1 = plVar3;
    if (plVar4 != plVar3) {
      do {
        plVar4 = plVar4 + -1;
        plVar1 = (long *)*plVar4;
        *plVar4 = 0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
      } while (plVar4 != plVar3);
      plVar1 = *(long **)*param_1;
    }
    puVar2[1] = plVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(plVar1);
    return;
  }
  return;
}



/* Entry: 104a7fce4; end: 104a7fd23;  */

void FUN_104a7fce4(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_104a7fce4(param_1,*param_2);
    FUN_104a7fce4(param_1,param_2[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 104a7fd24; end: 104a7fe97;  */

undefined8 * FUN_104a7fd24(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_1107c1628;
  puStack_28 = param_1;
  FUN_104a7fe98(param_1[2] + 0x1b8,&puStack_28);
  lVar7 = param_1[2];
  if (*(long *)(lVar7 + 0x58) != 0) {
    lVar6 = param_1[3];
    func_0x0001004d75ac();
    lVar7 = param_1[2];
    if (lVar6 != 0) {
      plVar8 = *(long **)(lVar7 + 0x1a8);
      if (plVar8 != (long *)0x0) {
        plVar9 = (long *)(lVar7 + 0x1a8);
        do {
          plVar4 = plVar8 + 1;
          if ((ulong)param_1[3] <= (ulong)plVar8[4]) {
            plVar9 = plVar8;
            plVar4 = plVar8;
          }
          plVar8 = (long *)*plVar4;
        } while (plVar8 != (long *)0x0);
        if ((plVar9 != (long *)(lVar7 + 0x1a8)) && ((ulong)plVar9[4] <= (ulong)param_1[3])) {
          iVar3 = (int)plVar9[5] + -1;
          *(int *)(plVar9 + 5) = iVar3;
          if (iVar3 == 0) {
            FUN_104aacf80(*(undefined8 *)(lVar7 + 0x58),*(undefined8 *)(lVar6 + 0x18));
            func_0x000104a7ff80(param_1[2] + 0x1a0,plVar9);
            __ZdlPv(plVar9);
            lVar7 = param_1[2];
          }
          goto LAB_104a7fe24;
        }
      }
      func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/client_channel.cc"
                          ,0x1f1,2,"assertion failed: %s");
      _abort();
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x104a7fde8);
      (*pcVar5)();
    }
  }
LAB_104a7fe24:
  plVar8 = *(long **)(lVar7 + 8);
  do {
    lVar7 = *plVar8;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar2) {
      *plVar8 = lVar7 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar7 + -1 == 0) {
    func_0x000100836ca4();
  }
  puStack_28 = param_1 + 0xb;
  FUN_104a7fc68(&puStack_28);
  FUN_104a7fce4(param_1 + 8,param_1[9]);
  if ((*(char *)(param_1 + 7) != '\0') && (*(char *)((long)param_1 + 0x37) < '\0')) {
    __ZdlPv(param_1[4]);
  }
  func_0x0001004d6dac(param_1 + 3);
  return param_1;
}



/* Entry: 104a7fe98; end: 104a7ffef;  */

undefined8 FUN_104a7fe98(long param_1,ulong *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar2 = (long *)(param_1 + 8);
  plVar3 = (long *)*plVar2;
  if (plVar3 != (long *)0x0) {
    plVar4 = plVar2;
    do {
      plVar1 = plVar3 + 1;
      if (*param_2 <= (ulong)plVar3[4]) {
        plVar4 = plVar3;
        plVar1 = plVar3;
      }
      plVar3 = (long *)*plVar1;
    } while (plVar3 != (long *)0x0);
    if ((plVar4 != plVar2) && ((ulong)plVar4[4] <= *param_2)) {
      func_0x000104a7ff10(param_1,plVar4);
      __ZdlPv(plVar4);
      return 1;
    }
  }
  return 0;
}



/* Entry: 104a7fff0; end: 104a7fff3;  */

undefined8 * FUN_104a7fff0(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined ***pppuVar4;
  long *plVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  undefined1 uStack_49;
  undefined **ppuStack_48;
  long lStack_40;
  undefined ***pppuStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = &PTR_FUN_1107c16c0;
  lStack_40 = param_1[0x11];
  param_1[0x11] = 0;
  ppuStack_48 = &PTR_FUN_1107c1768;
  pppuVar4 = &ppuStack_48;
  pppuStack_30 = &ppuStack_48;
  func_0x0001004be2c8(*(undefined8 *)(*(long *)(lStack_40 + 0x10) + 0x130),pppuVar4,&uStack_49);
  iVar7 = (int)pppuVar4;
  if (pppuStack_30 == &ppuStack_48) {
    lVar8 = 4;
    pppuVar4 = &ppuStack_48;
  }
  else {
    if (pppuStack_30 == (undefined ***)0x0) goto LAB_104a80094;
    lVar8 = 5;
    pppuVar4 = pppuStack_30;
  }
  (*(code *)(*pppuVar4)[lVar8])();
LAB_104a80094:
  plVar5 = (long *)param_1[0x11];
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar8 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  plVar5 = (long *)param_1[0x10];
  param_1[0x10] = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  puVar6 = param_1;
  FUN_104a80120();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  if (iVar7 == 0) {
    __Unwind_Resume();
  }
  FUN_104bd46a0();
  *puVar6 = &PTR_DAT_1107c1738;
  FUN_104a80234(puVar6 + 10);
  func_0x0001005a5f48(puVar6 + 2);
  return puVar6;
}



/* Entry: 104a7fff4; end: 104a80007;  */

void FUN_104a7fff4(void)

{
  FUN_104a80008();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104a80008; end: 104a8011f;  */

undefined8 * FUN_104a80008(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined ***pppuVar4;
  long *plVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  undefined1 uStack_49;
  undefined **ppuStack_48;
  long lStack_40;
  undefined ***pppuStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = &PTR_FUN_1107c16c0;
  lStack_40 = param_1[0x11];
  param_1[0x11] = 0;
  ppuStack_48 = &PTR_FUN_1107c1768;
  pppuVar4 = &ppuStack_48;
  pppuStack_30 = &ppuStack_48;
  func_0x0001004be2c8(*(undefined8 *)(*(long *)(lStack_40 + 0x10) + 0x130),pppuVar4,&uStack_49);
  iVar7 = (int)pppuVar4;
  if (pppuStack_30 == &ppuStack_48) {
    lVar8 = 4;
    pppuVar4 = &ppuStack_48;
  }
  else {
    if (pppuStack_30 == (undefined ***)0x0) goto LAB_104a80094;
    lVar8 = 5;
    pppuVar4 = pppuStack_30;
  }
  (*(code *)(*pppuVar4)[lVar8])();
LAB_104a80094:
  plVar5 = (long *)param_1[0x11];
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar8 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  plVar5 = (long *)param_1[0x10];
  param_1[0x10] = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  puVar6 = param_1;
  FUN_104a80120();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  if (iVar7 == 0) {
    __Unwind_Resume();
  }
  FUN_104bd46a0();
  *puVar6 = &PTR_DAT_1107c1738;
  FUN_104a80234(puVar6 + 10);
  func_0x0001005a5f48(puVar6 + 2);
  return puVar6;
}



/* Entry: 104a80120; end: 104a80163;  */

undefined8 * FUN_104a80120(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1107c1738;
  FUN_104a80234(param_1 + 10);
  func_0x0001005a5f48(param_1 + 2);
  return param_1;
}



/* Entry: 104a80164; end: 104a8016b;  */

void FUN_104a80164(void)

{
  return;
}



/* Entry: 104a8016c; end: 104a8019f;  */

void FUN_104a8016c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_1107c1768;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 104a801a0; end: 104a801eb;  */

void FUN_104a801a0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_1107c1768;
  param_2[1] = uVar1;
  return;
}



/* Entry: 104a801ec; end: 104a80227;  */

long FUN_104a801ec(long param_1,undefined8 param_2)

{
  FUN_104a7385c(param_2,&PTR_DAT_1107c17c8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 104a80228; end: 104a80233;  */

undefined ** FUN_104a80228(void)

{
  return &PTR_DAT_1107c17c8;
}



/* Entry: 104a80234; end: 104a8034b;  */

long * FUN_104a80234(long *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  puVar4 = (undefined8 *)param_1[1];
  puVar5 = puVar4;
  if ((undefined8 *)param_1[2] != puVar4) {
    uVar2 = param_1[4];
    plVar6 = puVar4 + (uVar2 >> 8);
    lVar3 = *plVar6 + (uVar2 & 0xff) * 0x10;
    lVar1 = *(long *)((long)puVar4 + (param_1[5] + uVar2 >> 5 & 0x7fffffffffffff8)) +
            (param_1[5] + uVar2 & 0xff) * 0x10;
    puVar5 = (undefined8 *)param_1[2];
    if (lVar3 != lVar1) {
      do {
        func_0x0001004da948(param_1 + 5,lVar3);
        lVar3 = lVar3 + 0x10;
        if (lVar3 - *plVar6 == 0x1000) {
          plVar6 = plVar6 + 1;
          lVar3 = *plVar6;
        }
      } while (lVar3 != lVar1);
      puVar4 = (undefined8 *)param_1[1];
      puVar5 = (undefined8 *)param_1[2];
    }
  }
  param_1[5] = 0;
  uVar2 = (long)puVar5 - (long)puVar4;
  while (0x10 < uVar2) {
    __ZdlPv(*puVar4);
    puVar5 = (undefined8 *)param_1[2];
    puVar4 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = (long)puVar4;
    uVar2 = (long)puVar5 - (long)puVar4;
  }
  if (uVar2 >> 3 == 1) {
    lVar3 = 0x80;
  }
  else {
    if (uVar2 >> 3 != 2) goto LAB_104a80328;
    lVar3 = 0x100;
  }
  param_1[4] = lVar3;
LAB_104a80328:
  for (; puVar4 != puVar5; puVar4 = puVar4 + 1) {
    __ZdlPv(*puVar4);
  }
  lVar3 = param_1[2];
  if (lVar3 != param_1[1]) {
    param_1[2] = lVar3 + ((param_1[1] - lVar3) + 7U & 0xfffffffffffffff8);
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 104a8034c; end: 104a8037b;  */

long FUN_104a8034c(long param_1)

{
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010084dad0();
  }
  return param_1;
}



/* Entry: 104a8037c; end: 104a803c7;  */

long * FUN_104a8037c(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  if (lVar1 != param_1[1]) {
    param_1[2] = lVar1 + ((param_1[1] - lVar1) + 7U & 0xfffffffffffffff8);
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 104a803c8; end: 104a803cf;  */

void FUN_104a803c8(void)

{
  return;
}



/* Entry: 104a803d0; end: 104a80403;  */

void FUN_104a803d0(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_1107c17e8;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 104a80404; end: 104a80407;  */

void FUN_104a80404(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104a80408; end: 104a80443;  */

long FUN_104a80408(long param_1,undefined8 param_2)

{
  FUN_104a7385c(param_2,&PTR_DAT_1107c1848);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 104a80444; end: 104a8044f;  */

undefined ** FUN_104a80444(void)

{
  return &PTR_DAT_1107c1848;
}



/* Entry: 104a80450; end: 104a804bf;  */

long * FUN_104a80450(long *param_1,long *param_2)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = param_2;
  plVar1 = (long *)param_2[1];
  if ((long *)param_2[1] == (long *)0x0) {
    do {
      plVar4 = (long *)plVar3[2];
      bVar2 = (long *)*plVar4 != plVar3;
      plVar3 = plVar4;
    } while (bVar2);
  }
  else {
    do {
      plVar4 = plVar1;
      plVar1 = (long *)*plVar4;
    } while ((long *)*plVar4 != (long *)0x0);
  }
  if ((long *)*param_1 == param_2) {
    *param_1 = (long)plVar4;
  }
  param_1[2] = param_1[2] + -1;
  FUN_104a7ee40(param_1[1]);
  return plVar4;
}



/* Entry: 104a804c0; end: 104a804d3;  */

undefined1  [16] FUN_104a804c0(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_104a6fa70();
  if (param_2 >> 0x3d == 0) {
    lVar2 = param_2 << 3;
    __Znwm(lVar2);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = lVar2;
    return auVar5;
  }
  FUN_104a7757c();
  lVar2 = plVar1[1];
  lVar4 = plVar1[2];
  while (lVar4 != lVar2) {
    plVar1[2] = lVar4 + -8;
    plVar3 = *(long **)(lVar4 + -8);
    *(undefined8 *)(lVar4 + -8) = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    lVar4 = plVar1[2];
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = plVar1;
  return auVar6;
}



/* Entry: 104a804d4; end: 104a8061f;  */

undefined1  [16] FUN_104a804d4(long *param_1,ulong param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if (param_2 >> 0x3d == 0) {
    lVar1 = param_2 << 3;
    __Znwm(lVar1);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar1;
    return auVar4;
  }
  FUN_104a7757c();
  lVar1 = param_1[1];
  lVar3 = param_1[2];
  while (lVar3 != lVar1) {
    param_1[2] = lVar3 + -8;
    plVar2 = *(long **)(lVar3 + -8);
    *(undefined8 *)(lVar3 + -8) = 0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    lVar3 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = param_1;
  return auVar5;
}



/* Entry: 104a80620; end: 104a80633;  */

char * FUN_104a80620(void)

{
  return "default";
}



/* Entry: 104a80634; end: 104a80647;  */

undefined8 * FUN_104a80634(void)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  
  puVar3 = (undefined8 *)&DAT_10f62a4d8;
  FUN_104a6fa70();
  *puVar3 = &PTR_FUN_1107c18f8;
  plVar4 = *(long **)(puVar3[1] + 8);
  do {
    lVar5 = *plVar4;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = lVar5 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar5 + -1 == 0) {
    func_0x000100836ca4();
  }
  return puVar3;
}



/* Entry: 104a80648; end: 104a8064b;  */

undefined8 * FUN_104a80648(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_1107c18f8;
  plVar3 = *(long **)(param_1[1] + 8);
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    func_0x000100836ca4();
  }
  return param_1;
}



/* Entry: 104a8064c; end: 104a8065f;  */

void FUN_104a8064c(void)

{
  FUN_104a80660();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104a80660; end: 104a806b3;  */

undefined8 * FUN_104a80660(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_1107c18f8;
  plVar3 = *(long **)(param_1[1] + 8);
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    func_0x000100836ca4();
  }
  return param_1;
}



/* Entry: 104a806b4; end: 104a806bb;  */

void FUN_104a806b4(void)

{
  return;
}



/* Entry: 104a806bc; end: 104a806ef;  */

void FUN_104a806bc(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_1107c1948;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 104a806f0; end: 104a8070b;  */

void FUN_104a806f0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_1107c1948;
  param_2[1] = uVar1;
  return;
}



/* Entry: 104a8070c; end: 104a807a3;  */

void FUN_104a8070c(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plStack_28;
  
  func_0x0001008db1f0(&plStack_28,*(undefined8 *)(*(long *)*param_3 + 0x18));
  FUN_104a8db0c(plStack_28,*(undefined8 *)(*(long *)(param_2 + 8) + 0x70),
                *(undefined8 *)(*(long *)(param_2 + 8) + 0x78));
  *param_1 = 0;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
      (**(code **)(*plStack_28 + 8))();
    }
  }
  return;
}



/* Entry: 104a807a4; end: 104a807df;  */

long FUN_104a807a4(long param_1,undefined8 param_2)

{
  FUN_104a7385c(param_2,&PTR_DAT_1107c19b8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 104a807e0; end: 104a807f3;  */

undefined ** FUN_104a807e0(void)

{
  return &PTR_DAT_1107c19b8;
}



/* Entry: 104a807f4; end: 104a80817;  */

void FUN_104a807f4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_DAT_1107c19d8;
  return;
}



/* Entry: 104a80818; end: 104a8082f;  */

void FUN_104a80818(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_1107c19d8;
  return;
}



/* Entry: 104a80830; end: 104a8089f;  */

void FUN_104a80830(void)

{
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_29;
  undefined8 *puStack_28;
  
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_48 = 0;
  FUN_104ab5920(2,"LB picker queued call",0x15,&uStack_29,&uStack_48);
  puStack_28 = &uStack_48;
  func_0x000100482b64(&puStack_28);
  return;
}



/* Entry: 104a808a0; end: 104a808db;  */

long FUN_104a808a0(long param_1,undefined8 param_2)

{
  FUN_104a7385c(param_2,&PTR_DAT_1107c1a48);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 104a808dc; end: 104a808ef;  */

undefined ** FUN_104a808dc(void)

{
  return &PTR_DAT_1107c1a48;
}



/* Entry: 104a808f0; end: 104a80913;  */

void FUN_104a808f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_DAT_1107c1a68;
  return;
}



/* Entry: 104a80914; end: 104a8092b;  */

void FUN_104a80914(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_1107c1a68;
  return;
}



/* Entry: 104a8092c; end: 104a809a3;  */

void FUN_104a8092c(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  ulong uStack_28;
  
  uStack_28 = *(ulong *)*param_2;
  if ((uStack_28 & 1) != 0) {
    piVar3 = (int *)(uStack_28 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_104addba0(&uStack_28);
  if ((uStack_28 & 1) != 0) {
    func_0x00010084dad0();
  }
  return;
}



/* Entry: 104a809a4; end: 104a809df;  */

long FUN_104a809a4(long param_1,undefined8 param_2)

{
  FUN_104a7385c(param_2,&PTR_DAT_1107c1ad8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 104a809e0; end: 104a809f3;  */

undefined ** FUN_104a809e0(void)

{
  return &PTR_DAT_1107c1ad8;
}



/* Entry: 104a809f4; end: 104a80a17;  */

void FUN_104a809f4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_DAT_1107c1af8;
  return;
}



/* Entry: 104a80a18; end: 104a80a2f;  */

void FUN_104a80a18(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_1107c1af8;
  return;
}



/* Entry: 104a80a30; end: 104a80aa7;  */

void FUN_104a80a30(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  ulong uStack_28;
  
  uStack_28 = *(ulong *)*param_2;
  if ((uStack_28 & 1) != 0) {
    piVar3 = (int *)(uStack_28 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_104addba0(&uStack_28);
  if ((uStack_28 & 1) != 0) {
    func_0x00010084dad0();
  }
  return;
}



/* Entry: 104a80aa8; end: 104a80ae3;  */

long FUN_104a80aa8(long param_1,undefined8 param_2)

{
  FUN_104a7385c(param_2,&PTR_DAT_1107c1b68);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 104a80ae4; end: 104a80af7;  */

undefined ** FUN_104a80ae4(void)

{
  return &PTR_DAT_1107c1b68;
}



/* Entry: 104a80af8; end: 104a80b2f;  */

void FUN_104a80af8(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  *puVar1 = &PTR_DAT_1107c1b88;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  return;
}



/* Entry: 104a80b30; end: 104a80b5b;  */

void FUN_104a80b30(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_DAT_1107c1b88;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 104a80b5c; end: 104a80b97;  */

long FUN_104a80b5c(long param_1,undefined8 param_2)

{
  FUN_104a7385c(param_2,&PTR_DAT_1107c1be8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 104a80b98; end: 104a80bab;  */

undefined ** FUN_104a80b98(void)

{
  return &PTR_DAT_1107c1be8;
}



/* Entry: 104a80bac; end: 104a80bdf;  */

void FUN_104a80bac(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_DAT_1107c1c08;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 104a80be0; end: 104a80be3;  */

void FUN_104a80be0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104a80be4; end: 104a80c1f;  */

long FUN_104a80be4(long param_1,undefined8 param_2)

{
  FUN_104a7385c(param_2,&PTR_DAT_1107c1c68);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 104a80c20; end: 104a80c2b;  */

undefined ** FUN_104a80c20(void)

{
  return &PTR_DAT_1107c1c68;
}



/* Entry: 104a80c2c; end: 104a80c87;  */

void FUN_104a80c2c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  func_0x0001004d9fa0(param_1 + 2,param_1[3]);
  param_1 = (long *)*param_1;
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000104a80c84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 104a80c88; end: 104a80cab;  */

void FUN_104a80c88(void)

{
  return;
}



/* Entry: 104a80cac; end: 104a80ceb;  */

void FUN_104a80cac(long param_1)

{
  if ((*(long **)(param_1 + 8) != (long *)0x0) && (*(char *)(param_1 + 0x10) == '\0')) {
    (**(code **)(**(long **)(param_1 + 8) + 0x18))();
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  return;
}



/* Entry: 104a80cec; end: 104a80cf3;  */

void FUN_104a80cec(void)

{
  return;
}



/* Entry: 104a80cf4; end: 104a80d27;  */

void FUN_104a80cf4(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_1107c1ce0;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 104a80d28; end: 104a80d3f;  */

void FUN_104a80d28(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_1107c1ce0;
  param_2[1] = uVar1;
  return;
}



/* Entry: 104a80d40; end: 104a80d7b;  */

long FUN_104a80d40(long param_1,undefined8 param_2)

{
  FUN_104a7385c(param_2,&PTR_DAT_1107c1d50);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 104a80d7c; end: 104a80d8f;  */

undefined ** FUN_104a80d7c(void)

{
  return &PTR_DAT_1107c1d50;
}



/* Entry: 104a80d90; end: 104a80dc3;  */

void FUN_104a80d90(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_DAT_1107c1d70;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 104a80dc4; end: 104a80ddb;  */

void FUN_104a80dc4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_1107c1d70;
  param_2[1] = uVar1;
  return;
}



/* Entry: 104a80ddc; end: 104a80df7;  */

undefined8 FUN_104a80ddc(long param_1)

{
  func_0x0001004e3790(*(undefined8 *)(param_1 + 8));
  return 0;
}


