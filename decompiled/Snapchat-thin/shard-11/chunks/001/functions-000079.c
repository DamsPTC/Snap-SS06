/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10812f428; end: 10812f5ab;  */

long * FUN_10812f428(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uStack_90;
  int *piStack_88;
  long lStack_80;
  int *piStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  (**(code **)(*param_2 + 0x20))(&lStack_58);
  uVar3 = lStack_58 == 1;
  if ((bool)uVar3) {
    lStack_70 = lStack_50;
    lStack_50 = 0;
    uStack_60 = uStack_40;
    uStack_68 = uStack_48;
    func_0x00010813f954(&piStack_78,&lStack_70,0);
    if (piStack_78 != (int *)0x0) {
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piStack_78,0x10);
        if (bVar2) {
          *piStack_78 = *piStack_78 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    piStack_88 = piStack_78;
    FUN_108350d94(&lStack_80,param_3,&piStack_88,0);
    func_0x0001078bddf8(&piStack_88);
    if (lStack_80 == 0) {
      plVar6 = (long *)&UNK_10f47bc13;
      func_0x00010b99f5f8(&uStack_90);
      uVar4 = uStack_90;
      uStack_90 = 0;
      func_0x000104bda960(0);
      uVar7 = 2;
    }
    else {
      uVar4 = 0xb8;
      __Znwm();
      uVar7 = 1;
      plVar6 = &lStack_80;
      FUN_108137014();
      func_0x000107807b00(0);
    }
    *param_1 = uVar7;
    param_1[1] = uVar4;
    func_0x0001081298a0(&lStack_80);
    func_0x0001078bddf8(&piStack_78);
    if (lStack_70 != 0) {
      func_0x00010812f970();
    }
  }
  else {
    plVar6 = (long *)&UNK_10f47bbf6;
    func_0x00010b99fa70(&lStack_70,&lStack_50,&UNK_10f47bbf6,0x1c);
    *param_1 = 2;
    param_1[1] = lStack_70;
    lStack_70 = 0;
    func_0x000104bda960(0);
  }
  plVar5 = &lStack_58;
  func_0x0001080c5c8c();
  func_0x00010812f97c(uStack_38);
  if ((bool)uVar3) {
    return plVar5;
  }
  ___stack_chk_fail();
  if (plVar5 != plVar6) {
    func_0x00010812cb9c(plVar5);
    *plVar5 = *plVar6;
    plVar5[1] = plVar6[1];
    *plVar6 = 0;
  }
  return plVar5;
}



/* Entry: 10812f5ac; end: 10812f643;  */

undefined8 * FUN_10812f5ac(undefined8 *param_1,undefined8 *param_2)

{
  if (param_1 != param_2) {
    func_0x00010812cb9c(param_1);
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    *param_2 = 0;
  }
  return param_1;
}



/* Entry: 10812f644; end: 10812f67f;  */

void FUN_10812f644(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x40;
  __Znwm();
  FUN_10812f710();
  *param_1 = uVar1;
  return;
}



/* Entry: 10812f680; end: 10812f6d3;  */

void FUN_10812f680(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lStack_28;
  
  FUN_10812f6d4(&lStack_28);
  if (lStack_28 == 0) {
    lVar4 = 0;
  }
  else {
    plVar1 = (long *)(lStack_28 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      lVar4 = lStack_28;
    } while (cVar2 != '\0');
  }
  *param_1 = lStack_28;
  FUN_10812f920(lVar4);
  return;
}



/* Entry: 10812f6d4; end: 10812f70f;  */

void FUN_10812f6d4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x30;
  __Znwm();
  func_0x00010812f80c();
  *param_1 = uVar1;
  return;
}



/* Entry: 10812f710; end: 10812f77b;  */

undefined8 * FUN_10812f710(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  *param_1 = &PTR_DAT_110a263c0;
  param_1[2] = 0;
  param_1[1] = 1;
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
  param_1[4] = lVar4;
  *param_1 = &PTR_FUN_110a26410;
  func_0x000104c6257c(param_1 + 5,param_3);
  return param_1;
}



/* Entry: 10812f77c; end: 10812f77f;  */

undefined8 * FUN_10812f77c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a26410;
  if (param_1[5] != 0) {
    func_0x00010812f970();
  }
  *param_1 = &PTR_DAT_110a263c0;
  func_0x0001003a8c94(param_1 + 4);
  func_0x00010812cb9c(param_1 + 2);
  return param_1;
}



/* Entry: 10812f780; end: 10812f793;  */

void FUN_10812f780(void)

{
  FUN_10812f7b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10812f794; end: 10812f7af;  */

void FUN_10812f794(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *param_1 = 1;
  param_1[1] = uVar1;
  *(undefined8 *)(param_2 + 0x28) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  param_1[3] = *(undefined8 *)(param_2 + 0x38);
  param_1[2] = uVar1;
  return;
}



/* Entry: 10812f7b0; end: 10812f7e7;  */

undefined8 * FUN_10812f7b0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a26410;
  if (param_1[5] != 0) {
    func_0x00010812f970();
  }
  *param_1 = &PTR_DAT_110a263c0;
  func_0x0001003a8c94(param_1 + 4);
  func_0x00010812cb9c(param_1 + 2);
  return param_1;
}



/* Entry: 10812f7e8; end: 10812f877;  */

void FUN_10812f7e8(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
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
                    /* WARNING: Could not recover jumptable at 0x00010812f96c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 10812f878; end: 10812f88b;  */

void FUN_10812f878(void)

{
  func_0x00010812f8f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10812f88c; end: 10812f91f;  */

void FUN_10812f88c(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puStack_48;
  ulong uStack_40;
  undefined1 auStack_38 [24];
  
  lVar1 = *(long *)(param_2 + 0x28);
  if (lVar1 == 0) {
    puStack_48 = &UNK_10f7d0ef0;
    uStack_40 = 0;
  }
  else {
    puStack_48 = (undefined *)(lVar1 + 0x18);
    uStack_40 = (ulong)*(uint *)(lVar1 + 0xc);
  }
  func_0x00010b9a2108(auStack_38,&puStack_48);
  func_0x00010b99e488(param_1,auStack_38);
  FUN_1080c9d44(auStack_38);
  return;
}



/* Entry: 10812f920; end: 10812f98f;  */

void FUN_10812f920(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
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
                    /* WARNING: Could not recover jumptable at 0x00010812f96c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 10812f990; end: 10812fa17;  */

void FUN_10812f990(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  
  if ((bRam0000000113824dc8 & 1) == 0) {
    iVar5 = 0x13824dc8;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      FUN_10825a0a0(0x113824dc0,0);
      ___cxa_guard_release(0x113824dc8);
    }
  }
  lVar4 = lRam0000000113824dc0;
  if (lRam0000000113824dc0 != 0) {
    piVar1 = (int *)(lRam0000000113824dc0 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar4;
  return;
}



/* Entry: 10812fa18; end: 10812fa3f;  */

long * FUN_10812fa18(long *param_1)

{
  FUN_10812fc88(param_1 + 4);
  if (*param_1 != 0) {
    FUN_10812fee8();
  }
  return param_1;
}



/* Entry: 10812fa40; end: 10812fb07;  */

undefined8 *
FUN_10812fa40(undefined4 param_1,undefined4 param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6,undefined1 param_7)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  *param_3 = &PTR_FUN_110a264b0;
  param_3[1] = 1;
  *(undefined4 *)(param_3 + 2) = param_1;
  *(undefined4 *)((long)param_3 + 0x14) = param_2;
  *(undefined1 *)(param_3 + 3) = param_7;
  param_3[5] = 0;
  param_3[6] = 0;
  param_3[4] = 0;
  uVar3 = *param_4;
  param_3[5] = param_4[1];
  param_3[4] = uVar3;
  param_3[6] = param_4[2];
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  param_3[7] = 0;
  param_3[8] = 0;
  param_3[9] = 0;
  uVar3 = *param_5;
  param_3[8] = param_5[1];
  param_3[7] = uVar3;
  param_3[9] = param_5[2];
  *param_5 = 0;
  param_5[1] = 0;
  param_5[2] = 0;
  param_3[10] = 0;
  param_3[0xb] = 0;
  param_3[0xc] = 0;
  uVar3 = *param_6;
  param_3[0xb] = param_6[1];
  param_3[10] = uVar3;
  param_3[0xc] = param_6[2];
  *param_6 = 0;
  param_6[1] = 0;
  param_6[2] = 0;
  param_3[0xd] = 0;
  param_3[0xe] = 0;
  lVar1 = param_3[5];
  for (lVar2 = param_3[4]; lVar2 != lVar1; lVar2 = lVar2 + 0x38) {
    func_0x00010813fee4(param_3 + 0xd,lVar2 + 8);
  }
  return param_3;
}



/* Entry: 10812fb08; end: 10812fb4b;  */

undefined8 * FUN_10812fb08(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a264b0;
  func_0x00010812fd48(param_1 + 10);
  FUN_10812fdf0(param_1 + 7);
  FUN_10812fe2c(param_1 + 4);
  return param_1;
}



/* Entry: 10812fb4c; end: 10812fb4f;  */

undefined8 * FUN_10812fb4c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a264b0;
  func_0x00010812fd48(param_1 + 10);
  FUN_10812fdf0(param_1 + 7);
  FUN_10812fe2c(param_1 + 4);
  return param_1;
}



/* Entry: 10812fb50; end: 10812fb63;  */

void FUN_10812fb50(void)

{
  FUN_10812fb08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10812fb64; end: 10812fc67;  */

void FUN_10812fb64(long *param_1,float param_2,float param_3,float param_4,long param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  long lStack_70;
  float fStack_68;
  float fStack_64;
  
  lStack_70 = 0;
  puVar1 = *(undefined8 **)(param_5 + 0x58);
  puVar3 = (undefined8 *)(*(long *)(param_5 + 0x50) + 0x10);
  fVar8 = 0.0;
  fVar6 = param_2;
  fVar7 = param_3;
  fStack_68 = param_2;
  fStack_64 = param_3;
  while( true ) {
    puVar5 = puVar3 + -2;
    if (puVar5 == puVar1) {
      *param_1 = lStack_70;
      return;
    }
    puVar2 = puVar5;
    func_0x0001081400a0(puVar5,&fStack_68);
    if ((int)puVar2 != 0) break;
    func_0x0001081400e4(puVar5,&fStack_68);
    fVar7 = (param_3 - fVar7) * (param_3 - fVar7);
    fVar6 = fVar7 + (param_2 - fVar6) * (param_2 - fVar6);
    fVar9 = SQRT(fVar6);
    if ((fVar9 <= param_4) && ((lStack_70 == 0 || (fVar9 < fVar8)))) {
      func_0x0001003ae7fc(&lStack_70,puVar3);
      fVar8 = fVar9;
    }
    puVar3 = puVar3 + 5;
  }
  plVar4 = (long *)*puVar3;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  *param_1 = (long)plVar4;
  if (lStack_70 == 0) {
    return;
  }
  func_0x00010812ff60();
  return;
}



/* Entry: 10812fc68; end: 10812fc87;  */

float FUN_10812fc68(float *param_1,float *param_2)

{
  return SQRT((param_1[1] - param_2[1]) * (param_1[1] - param_2[1]) +
              (*param_1 - *param_2) * (*param_1 - *param_2));
}



/* Entry: 10812fc88; end: 10812fcdb;  */

void FUN_10812fc88(void)

{
  func_0x00010812ff28();
  func_0x00010812fcac();
  return;
}



/* Entry: 10812fcdc; end: 10812fce3;  */

void FUN_10812fcdc(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x30;
    func_0x00010812fd1c();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 10812fce4; end: 10812fd9b;  */

void FUN_10812fce4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -0x30;
    func_0x00010812fd1c();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 10812fd9c; end: 10812fda3;  */

void FUN_10812fd9c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  for (lVar2 = param_1[1]; lVar2 != lVar1; lVar2 = lVar2 + -0x28) {
    if (*(long *)(lVar2 + -0x18) != 0) {
      func_0x00010812ff60();
    }
  }
  param_1[1] = lVar1;
  return;
}



/* Entry: 10812fda4; end: 10812fdef;  */

void FUN_10812fda4(long param_1,long param_2)

{
  long lVar1;
  
  for (lVar1 = *(long *)(param_1 + 8); lVar1 != param_2; lVar1 = lVar1 + -0x28) {
    if (*(long *)(lVar1 + -0x18) != 0) {
      func_0x00010812ff60();
    }
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 10812fdf0; end: 10812fe13;  */

void FUN_10812fdf0(void)

{
  func_0x00010812ff28();
  FUN_10812fe14();
  return;
}



/* Entry: 10812fe14; end: 10812fe2b;  */

void FUN_10812fe14(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10812fe2c; end: 10812fe7f;  */

void FUN_10812fe2c(void)

{
  func_0x00010812ff28();
  func_0x00010812fe50();
  return;
}



/* Entry: 10812fe80; end: 10812fe87;  */

void FUN_10812fe80(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x38;
    FUN_10812fa18();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 10812fe88; end: 10812fee7;  */

void FUN_10812fe88(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -0x38;
    FUN_10812fa18();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 10812fee8; end: 10812ff1b;  */

void FUN_10812fee8(int *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  
  do {
    iVar1 = *param_1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 + -1 == 0) {
    if (param_1 != (int *)0x0) {
      FUN_1083a7954();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)();
    return;
  }
  return;
}



/* Entry: 10812ff1c; end: 10812ff6b;  */

void FUN_10812ff1c(void)

{
  return;
}



/* Entry: 10812ff6c; end: 10813003f;  */

void FUN_10812ff6c(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined4 uVar14;
  
  lVar8 = *(long *)(param_2 + 0x10);
  lVar13 = *(long *)(param_2 + 0x18);
  lVar9 = *(long *)(param_2 + 0x20);
  uVar14 = *(undefined4 *)(param_2 + 0x28);
  uVar3 = *(undefined4 *)(param_2 + 0x2c);
  lVar12 = *(long *)(param_2 + 0x38);
  lVar11 = *(long *)(param_2 + 0x30);
  uVar4 = *(undefined4 *)(param_2 + 0x40);
  lVar1 = *(long *)(param_2 + 0x48);
  lVar2 = *(long *)(param_2 + 0x50);
  lVar10 = *(long *)(param_2 + 0x58);
  if ((param_3 != 0) && (*(long *)(param_3 + 0x10) != 0)) {
    plVar7 = (long *)(*(long *)(param_3 + 0x10) + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar6) {
        *plVar7 = *plVar7 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  *param_1 = param_3;
  plVar7 = *(long **)(param_2 + 8);
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  param_1[1] = (long)plVar7;
  param_1[2] = lVar8;
  param_1[3] = lVar13;
  param_1[4] = lVar9;
  *(undefined4 *)(param_1 + 5) = uVar14;
  *(undefined4 *)((long)param_1 + 0x2c) = uVar3;
  param_1[7] = lVar12;
  param_1[6] = lVar11;
  *(undefined4 *)(param_1 + 8) = uVar4;
  param_1[9] = lVar1;
  param_1[10] = lVar2;
  param_1[0xb] = lVar10;
  return;
}



/* Entry: 108130040; end: 10813013b;  */

undefined4 *
FUN_108130040(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
             undefined4 param_5,undefined4 param_6,int param_7,long *param_8,undefined1 param_9,
             undefined1 param_10)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long extraout_x8;
  int extraout_w11;
  
  *param_4 = param_5;
  param_4[1] = param_6;
  param_4[2] = param_1;
  param_4[3] = param_2;
  *(undefined8 *)(param_4 + 4) = 0;
  *(undefined8 *)(param_4 + 6) = 0;
  *(long *)(param_4 + 8) = (long)param_7;
  *(undefined8 *)(param_4 + 10) = 1;
  *(undefined2 *)(param_4 + 0xc) = 0;
  *(undefined1 *)((long)param_4 + 0x32) = 0;
  *(undefined1 *)((long)param_4 + 0x33) = param_9;
  *(undefined1 *)(param_4 + 0xd) = param_10;
  param_4[0xe] = param_3;
  lVar4 = *param_8;
  if ((lVar4 != 0) && (*(long *)(lVar4 + 0x10) != 0)) {
    do {
      func_0x00010813493c();
      lVar4 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  *(long *)(param_4 + 0x10) = lVar4;
  func_0x0001081349fc(param_4 + 0x12);
  lVar4 = 0;
  if ((*param_8 != 0) && (lVar4 = *(long *)(*param_8 + 0x198), lVar4 != 0)) {
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
  *(long *)(param_4 + 0x36) = lVar4;
  param_4[0x38] = 0;
  return param_4;
}



/* Entry: 10813013c; end: 108130273;  */

void FUN_10813013c(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined1 param_6)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  long in_stack_00000018;
  
  func_0x000108134a78();
  uVar3 = *(ulong *)(param_1 + 0x98);
  if (uVar3 < *(ulong *)(param_1 + 0xa0)) {
    func_0x0001081349fc(uVar3);
    lVar2 = uVar3 + 0x90;
  }
  else {
    plVar4 = (long *)(param_1 + 0x90);
    FUN_108132b10(plVar4,(long)(uVar3 - *plVar4) / 0x90 + 1);
    func_0x000108134868(*(undefined8 *)(param_1 + 0x98));
    lVar2 = in_stack_00000018;
    func_0x0001081349fc(in_stack_00000018);
    func_0x00010813494c(lVar2 + 0x90);
    FUN_108132b68(plVar4);
    lVar2 = *(long *)(param_1 + 0x98);
    func_0x000108132c80(&stack0x00000008);
  }
  *(long *)(param_1 + 0x98) = lVar2;
  *(undefined8 *)(lVar2 + -0x90) = param_3;
  *(undefined8 *)(lVar2 + -0x88) = param_4;
  uVar1 = *param_5;
  *(undefined8 *)(lVar2 + -0x70) = param_5[1];
  *(undefined8 *)(lVar2 + -0x78) = uVar1;
  *(undefined8 *)(lVar2 + -0x68) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(lVar2 + -0x80) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(lVar2 + -0x60) = *(undefined8 *)(param_1 + 0x18);
  func_0x0001078d387c(lVar2 + -0x40,param_2);
  func_0x0001003ae7fc(lVar2 + -0x38,param_2 + 8);
  *(undefined1 *)(lVar2 + -0x30) = *(undefined1 *)(param_2 + 0x18);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined1 *)(lVar2 + -0x24) = *(undefined1 *)(param_2 + 0x18);
  *(undefined8 *)(lVar2 + -0x2c) = uVar1;
  *(undefined8 *)(lVar2 + -0x20) = *(undefined8 *)(param_2 + 0x48);
  uVar1 = *(undefined8 *)(param_2 + 0x50);
  *(undefined1 *)(lVar2 + -0x10) = *(undefined1 *)(param_2 + 0x58);
  *(undefined8 *)(lVar2 + -0x18) = uVar1;
  *(undefined1 *)(lVar2 + -8) = param_6;
  *(undefined4 *)(lVar2 + -0x58) = *(undefined4 *)(param_2 + 0x2c);
  uVar5 = *(undefined8 *)(param_2 + 0x38);
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  *(undefined1 *)(lVar2 + -0x44) = *(undefined1 *)(param_2 + 0x40);
  *(undefined8 *)(lVar2 + -0x4c) = uVar5;
  *(undefined8 *)(lVar2 + -0x54) = uVar1;
  return;
}



/* Entry: 108130274; end: 10813036f;  */

bool FUN_108130274(long param_1,long param_2,long param_3,float *param_4)

{
  long extraout_x8;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  *(undefined8 *)param_4 = *(undefined8 *)(param_1 + 0x18);
  fVar1 = *(float *)(param_2 + 0x24);
  if ((*(int *)(param_2 + 0x20) == 1) &&
     (fVar2 = *(float *)(param_3 + 8) - *(float *)(param_3 + 4), fVar1 = fVar1 / fVar2, fVar2 <= 0.0
     )) {
    fVar1 = 1.0;
  }
  fVar4 = *(float *)(param_3 + 4) * fVar1;
  fVar1 = *(float *)(param_3 + 8) * fVar1;
  fVar2 = fVar4;
  fVar3 = fVar1;
  if (*(char *)(param_2 + 0x18) == '\x01') {
    FUN_1081303cc(param_2 + 0x10);
    FUN_108130370(fVar4,fVar1,*(undefined4 *)(param_2 + 0x14),*(undefined4 *)(param_2 + 0x1c));
    if (fVar4 <= fVar2) {
      fVar2 = fVar4;
    }
    if (fVar3 <= fVar1) {
      fVar3 = fVar1;
    }
  }
  if (((*(uint *)(param_2 + 0x58) & 1) != 0) && (*(long *)(param_1 + 0xc0) != 0)) {
    func_0x0001081349b8();
    fVar2 = fVar2 - *(float *)(extraout_x8 + 0xc);
    fVar3 = fVar3 + *(float *)(extraout_x8 + 0x14);
  }
  if (*param_4 <= fVar2) {
    fVar2 = *param_4;
  }
  if (fVar3 <= param_4[1]) {
    fVar3 = param_4[1];
  }
  *param_4 = fVar2;
  param_4[1] = fVar3;
  return *(float *)(param_1 + 0x14) + (fVar3 - fVar2) <= *(float *)(param_1 + 0xc);
}



/* Entry: 108130370; end: 1081303cb;  */

ulong FUN_108130370(ulong param_1,float param_2,float param_3,undefined4 param_4)

{
  switch(param_4) {
  default:
    return (ulong)(uint)(((float)param_1 + param_2) * 0.5 - param_3 * 0.5);
  case 1:
    return param_1;
  case 2:
    return (ulong)(uint)(param_2 - param_3);
  case 3:
    return (ulong)(uint)-param_3;
  }
}



/* Entry: 1081303cc; end: 1081303e3;  */

ulong FUN_1081303cc(ulong param_1,float param_2,float param_3,long param_4,long param_5)

{
  long extraout_x8;
  long unaff_x19;
  long unaff_x20;
  float fVar1;
  ulong uVar2;
  
  if ((*(byte *)(param_4 + 8) & 1) != 0) {
    return param_1;
  }
  func_0x0001080da3e4();
  func_0x00010014c548();
  fVar1 = *(float *)(param_5 + 0x24);
  if ((*(int *)(param_5 + 0x20) == 1) &&
     (fVar1 = fVar1 / (param_3 - param_2), param_3 - param_2 <= 0.0)) {
    fVar1 = 1.0;
  }
  uVar2 = (ulong)(uint)(param_2 * fVar1);
  if (*(char *)(param_5 + 0x18) != '\0') {
    FUN_1081303cc();
    FUN_108130370(uVar2,param_3 * fVar1,*(undefined4 *)(unaff_x19 + 0x14),
                  *(undefined4 *)(unaff_x19 + 0x1c));
  }
  if (((*(uint *)(unaff_x19 + 0x58) & 1) != 0) && (*(long *)(unaff_x20 + 0xc0) != 0)) {
    func_0x0001081349b8();
    uVar2 = (ulong)(uint)((float)uVar2 - *(float *)(extraout_x8 + 0xc));
  }
  return uVar2;
}



/* Entry: 1081303e4; end: 1081304af;  */

ulong FUN_1081303e4(undefined8 param_1,float param_2,float param_3,undefined8 param_4,long param_5)

{
  long extraout_x8;
  long unaff_x19;
  long unaff_x20;
  float fVar1;
  ulong uVar2;
  
  func_0x00010014c548();
  fVar1 = *(float *)(param_5 + 0x24);
  if ((*(int *)(param_5 + 0x20) == 1) &&
     (fVar1 = fVar1 / (param_3 - param_2), param_3 - param_2 <= 0.0)) {
    fVar1 = 1.0;
  }
  uVar2 = (ulong)(uint)(param_2 * fVar1);
  if (*(char *)(param_5 + 0x18) != '\0') {
    FUN_1081303cc();
    FUN_108130370(uVar2,param_3 * fVar1,*(undefined4 *)(unaff_x19 + 0x14),
                  *(undefined4 *)(unaff_x19 + 0x1c));
  }
  if (((*(uint *)(unaff_x19 + 0x58) & 1) != 0) && (*(long *)(unaff_x20 + 0xc0) != 0)) {
    func_0x0001081349b8();
    uVar2 = (ulong)(uint)((float)uVar2 - *(float *)(extraout_x8 + 0xc));
  }
  return uVar2;
}



/* Entry: 1081304b0; end: 10813052b;  */

/* WARNING: Removing unreachable block (ram,0x000108130520) */

void FUN_1081304b0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x10) =
       *(undefined8 *)(lVar1 + ((*(long *)(param_1 + 0x98) - lVar1) / 0x90) * 0x90 + -0x80);
  FUN_1081329dc((long *)(param_1 + 0x90),*(long *)(param_1 + 0x98) + -0x90);
  lVar1 = *(long *)(param_1 + 0x98);
  if (*(long *)(param_1 + 0x90) == lVar1) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    uVar2 = 1;
  }
  else {
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar1 + -0x60);
    uVar2 = *(undefined8 *)(lVar1 + -0x68);
  }
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  return;
}



/* Entry: 10813052c; end: 108130697;  */

void FUN_10813052c(float param_1,float param_2,ulong *param_3,ulong param_4,ulong param_5,
                  int param_6)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 uVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar8 = 0;
  uVar10 = *param_3;
  uVar7 = param_3[1];
  uVar9 = (undefined1)param_3[2];
  uVar4 = *(undefined1 *)((long)param_3 + 0x11);
  uVar11 = param_4;
  do {
    if (param_5 <= param_4) {
      *param_3 = param_4;
      param_3[1] = param_4;
      *(undefined2 *)(param_3 + 2) = 0;
      return;
    }
    uVar5 = *(uint *)(param_4 + 0x10);
    if ((uVar5 == 0x8000000a || uVar5 == 0x80000d0a) || (uVar5 == 0xd0a || uVar5 == 10)) {
      *param_3 = param_4;
      param_3[1] = param_4 + 0x14;
      *(undefined2 *)(param_3 + 2) = 0x101;
      return;
    }
    param_2 = param_2 + *(float *)(param_4 + 8);
    uVar6 = (ulong)(uVar5 & 0x7fffffff);
    FUN_108139a4c();
    uVar1 = uVar11;
    if (-1 < (int)uVar5 && (uVar8 & 1) == 0) {
      uVar1 = param_4;
    }
    uVar2 = uVar11;
    if ((((uint)uVar8 | (uint)uVar6 ^ 0xffffffff) & 1) == 0) {
      uVar2 = param_4;
    }
    uVar3 = uVar11;
    if (param_6 == 0) {
      uVar3 = uVar2;
    }
    uVar11 = uVar1;
    if (param_6 != 1) {
      uVar11 = uVar3;
    }
    if (param_1 < param_2) {
      if ((uint)uVar6 == 0) {
        param_4 = uVar11;
      }
      for (; param_4 < param_5; param_4 = param_4 + 0x14) {
        uVar5 = *(uint *)(param_4 + 0x10) & 0x7fffffff;
        FUN_108139a4c();
        if (uVar5 == 0) break;
      }
      uVar4 = 0;
      uVar9 = 1;
      uVar7 = param_4;
      uVar10 = uVar11;
    }
    else {
      param_4 = param_4 + 0x14;
      uVar8 = uVar6;
    }
    if (param_1 < param_2) {
      *(undefined1 *)(param_3 + 2) = uVar9;
      *(undefined1 *)((long)param_3 + 0x11) = uVar4;
      *param_3 = uVar10;
      param_3[1] = uVar7;
      return;
    }
  } while( true );
}



/* Entry: 108130698; end: 1081306b7;  */

float FUN_108130698(long param_1,long param_2)

{
  float *pfVar1;
  float fVar2;
  
  fVar2 = 0.0;
  pfVar1 = (float *)(param_1 + 8);
  for (; param_2 != 0; param_2 = param_2 + -1) {
    fVar2 = fVar2 + *pfVar1;
    pfVar1 = pfVar1 + 5;
  }
  return fVar2;
}



/* Entry: 1081306b8; end: 108130a0b;  */

undefined1  [16]
FUN_1081306b8(long *param_1,long *param_2,undefined8 param_3,long param_4,undefined4 *param_5,
             undefined8 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  float *pfVar5;
  undefined1 in_ZR;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  char *pcVar9;
  undefined8 extraout_x8;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long unaff_x19;
  long *plVar14;
  long *unaff_x20;
  long lVar15;
  long *plVar16;
  long lVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined4 auStack_178 [2];
  float fStack_170;
  float fStack_16c;
  long lStack_168;
  undefined1 auStack_160 [88];
  long lStack_108;
  long *aplStack_100 [4];
  float fStack_e0;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_78;
  
  func_0x00010813480c();
  *(undefined1 *)(param_1 + 6) = 1;
  uStack_78 = extraout_x8;
  if (*(int *)((long)param_1 + 4) != 0) {
LAB_108130990:
    func_0x0001081347d0(uStack_78);
    if ((bool)in_ZR) {
      auVar26._8_8_ = param_2;
      auVar26._0_8_ = param_1;
      return auVar26;
    }
    ___stack_chk_fail();
LAB_1081309c4:
    func_0x0001080df67c(&uStack_a0,&UNK_10f47bc35);
    plVar16 = &lStack_90;
    func_0x00010bd3f434(&lStack_90,uStack_a0,uStack_98,&UNK_10f47bc58);
    pcVar9 = "unknown";
    uVar10 = 399;
    func_0x00010bd3f4e0(plVar16,"unknown",399);
    plVar14 = plVar16 + 0xf;
    lVar17 = plVar16[0x10] - *plVar14;
    plVar8 = (long *)plVar16[0x1b];
    (**(code **)(*plVar8 + 0x30))(plVar8,uVar10,param_4,pcVar9,param_6,param_5,plVar14);
    lVar15 = *plVar14;
    if ((int)param_6 != 0) {
      puVar11 = (undefined8 *)(lVar17 + lVar15);
      puVar13 = (undefined8 *)plVar16[0x10];
      if (puVar13 != puVar11) {
        for (; puVar12 = (undefined8 *)((long)puVar13 - 0x14), puVar11 < puVar12;
            puVar11 = (undefined8 *)((long)puVar11 + 0x14)) {
          uVar1 = *(undefined4 *)(puVar11 + 2);
          uVar19 = puVar11[1];
          uVar10 = *puVar11;
          uVar2 = *(undefined4 *)((long)puVar13 - 4);
          uVar22 = *puVar12;
          puVar11[1] = *(undefined8 *)((long)puVar13 - 0xc);
          *puVar11 = uVar22;
          *(undefined4 *)(puVar11 + 2) = uVar2;
          *(undefined8 *)((long)puVar13 - 0xc) = uVar19;
          *puVar12 = uVar10;
          *(undefined4 *)((long)puVar13 - 4) = uVar1;
          puVar13 = puVar12;
        }
        lVar15 = *plVar14;
      }
    }
    pfVar5 = (float *)(lVar17 + lVar15 + 8);
    for (plVar16 = plVar8; plVar16 != (long *)0x0; plVar16 = (long *)((long)plVar16 + -1)) {
      *pfVar5 = (float)(int)*pfVar5;
      pfVar5 = pfVar5 + 5;
    }
    auVar27._8_8_ = lVar15 + lVar17 + (long)plVar8 * 0x14;
    auVar27._0_8_ = lVar15 + lVar17;
    return auVar27;
  }
  func_0x0001081348c0();
  uStack_a4 = 0x2026;
  lVar15 = *param_2;
  if ((lVar15 != 0) && (*(long *)(lVar15 + 0x10) != 0)) {
    plVar16 = (long *)(*(long *)(lVar15 + 0x10) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar4) {
        *plVar16 = *plVar16 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar16 = (long *)unaff_x20[1];
  lStack_108 = lVar15;
  if (plVar16 != (long *)0x0) {
    (**(code **)(*plVar16 + 0x10))(plVar16);
  }
  aplStack_100[0] = plVar16;
  func_0x0001081348f4();
  uVar6 = *(ulong *)(*unaff_x20 + 0x20);
  FUN_108137190(uVar6,0x2026);
  if ((uVar6 & 1) == 0) {
    param_4 = 0;
    param_5 = (undefined4 *)0x2026;
    FUN_10812c370(&lStack_90,*(undefined8 *)(unaff_x19 + 0x40));
    in_ZR = lStack_90 == 1;
    if (!(bool)in_ZR) {
      func_0x000107807ab8(&lStack_90);
LAB_108130988:
      param_1 = &lStack_108;
      func_0x000108132d10(param_1);
      param_2 = unaff_x20;
      goto LAB_108130990;
    }
    FUN_10812ff6c(&lStack_168,&lStack_108,uStack_88);
    func_0x0001078d4460(&lStack_108,&lStack_168);
    func_0x0001008d6514(aplStack_100,auStack_160);
    func_0x0001081348f4();
    func_0x000108132d10(&lStack_168);
    func_0x000107807ab8(&lStack_90);
    lVar15 = lStack_108;
  }
  param_4 = 1;
  param_5 = (undefined4 *)0x5a797979;
  param_6 = 0;
  lVar17 = unaff_x19;
  fVar18 = fStack_e0;
  FUN_108130a0c();
  lVar7 = lStack_108;
  func_0x00010812977c();
  lVar15 = (lVar15 - lVar17) / 0x14;
  FUN_108130698(lVar17,lVar15);
  fVar20 = *(float *)(lVar7 + 4);
  fVar23 = *(float *)(lVar7 + 8);
  unaff_x20 = &lStack_108;
  fVar25 = fVar18;
  FUN_1081303e4();
  auStack_178[0] = 0;
  fVar25 = fVar23 - fVar25;
  fStack_170 = fVar20;
  fStack_16c = fVar23;
  do {
    while( true ) {
      fVar23 = *(float *)(unaff_x19 + 8);
      if ((fVar20 + *(float *)(unaff_x19 + 0x10) <= fVar23) &&
         (fVar21 = fVar25 + *(float *)(unaff_x19 + 0x14),
         in_ZR = fVar21 == *(float *)(unaff_x19 + 0xc), fVar21 <= *(float *)(unaff_x19 + 0xc))) {
        unaff_x20 = &lStack_108;
        param_5 = auStack_178;
        param_6 = 0;
        FUN_10813013c();
        *(float *)(unaff_x19 + 0x10) = fVar18 + *(float *)(unaff_x19 + 0x10);
        param_4 = lVar15;
        goto LAB_108130988;
      }
      lVar17 = *(long *)(unaff_x19 + 0x98);
      in_ZR = 1;
      if (*(long *)(unaff_x19 + 0x90) == lVar17) goto LAB_108130988;
      if (*(long *)(lVar17 + -0x68) == *(long *)(unaff_x19 + 0x28)) break;
      *(long *)(unaff_x19 + 0x28) = *(long *)(lVar17 + -0x68);
      uVar10 = *(undefined8 *)(lVar17 + -0x80);
      *(undefined8 *)(unaff_x19 + 0x10) = uVar10;
      fVar23 = *(float *)(lVar17 + -0x70) - *(float *)(lVar17 + -0x78);
LAB_10813092c:
      *(float *)(unaff_x19 + 0x10) = fVar23 + (float)uVar10;
    }
    fVar24 = *(float *)(lVar17 + -0x5c) - *(float *)(lVar17 + -0x60);
    fVar21 = fVar25;
    if (fVar25 <= fVar24) {
      fVar21 = fVar24;
    }
    if (*(float *)(unaff_x19 + 0x14) + fVar21 <= *(float *)(unaff_x19 + 0xc)) {
      plVar16 = (long *)(*(long *)(unaff_x19 + 0x78) + *(long *)(lVar17 + -0x90) * 0x14);
      param_4 = 1;
      unaff_x20 = plVar16;
      FUN_10813052c(fVar23,fVar20 + *(float *)(lVar17 + -0x80),&lStack_168,plVar16,
                    (long)plVar16 + *(long *)(lVar17 + -0x88) * 0x14,1);
      if (lStack_168 - (long)plVar16 != 0) {
        unaff_x20 = (long *)((lStack_168 - (long)plVar16) / 0x14);
        *(long **)(lVar17 + -0x88) = unaff_x20;
        FUN_108130698(plVar16);
        fVar21 = fVar23 + *(float *)(lVar17 + -0x78);
        if (fVar21 < *(float *)(lVar17 + -0x70)) {
          *(float *)(lVar17 + -0x70) = fVar21;
          uVar10 = *(undefined8 *)(lVar17 + -0x80);
          *(undefined8 *)(unaff_x19 + 0x10) = uVar10;
          goto LAB_10813092c;
        }
        goto LAB_1081309c4;
      }
    }
    FUN_1081304b0();
  } while( true );
}



/* Entry: 108130a0c; end: 108130afb;  */

undefined1  [16]
FUN_108130a0c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float *pfVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  
  plVar9 = (long *)(param_1 + 0x78);
  lVar10 = *(long *)(param_1 + 0x80) - *plVar9;
  plVar4 = *(long **)(param_1 + 0xd8);
  (**(code **)(*plVar4 + 0x30))(plVar4,param_3,param_4,param_2,param_6,param_5,plVar9);
  lVar6 = *plVar9;
  if ((int)param_6 != 0) {
    puVar5 = (undefined8 *)(lVar10 + lVar6);
    puVar8 = *(undefined8 **)(param_1 + 0x80);
    if (puVar8 != puVar5) {
      for (; puVar7 = (undefined8 *)((long)puVar8 - 0x14), puVar5 < puVar7;
          puVar5 = (undefined8 *)((long)puVar5 + 0x14)) {
        uVar1 = *(undefined4 *)(puVar5 + 2);
        uVar12 = puVar5[1];
        uVar11 = *puVar5;
        uVar2 = *(undefined4 *)((long)puVar8 - 4);
        uVar13 = *puVar7;
        puVar5[1] = *(undefined8 *)((long)puVar8 - 0xc);
        *puVar5 = uVar13;
        *(undefined4 *)(puVar5 + 2) = uVar2;
        *(undefined8 *)((long)puVar8 - 0xc) = uVar12;
        *puVar7 = uVar11;
        *(undefined4 *)((long)puVar8 - 4) = uVar1;
        puVar8 = puVar7;
      }
      lVar6 = *plVar9;
    }
  }
  pfVar3 = (float *)(lVar10 + lVar6 + 8);
  for (plVar9 = plVar4; plVar9 != (long *)0x0; plVar9 = (long *)((long)plVar9 + -1)) {
    *pfVar3 = (float)(int)*pfVar3;
    pfVar3 = pfVar3 + 5;
  }
  auVar14._8_8_ = lVar6 + lVar10 + (long)plVar4 * 0x14;
  auVar14._0_8_ = lVar6 + lVar10;
  return auVar14;
}



/* Entry: 108130afc; end: 108130b77;  */

long FUN_108130afc(long param_1,int *param_2)

{
  char cVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  
  lVar2 = 0;
  lVar4 = *(long *)(param_1 + 0xb0) - *(long *)(param_1 + 0xa8) >> 3;
  pcVar3 = (char *)(*(long *)(param_1 + 0xa8) + 4);
  do {
    if (lVar4 == lVar2) {
      func_0x000108132d3c();
      return lVar4;
    }
    cVar1 = *pcVar3;
    if (cVar1 == (char)param_2[1] && cVar1 != '\0') {
      if (*(int *)(pcVar3 + -4) == *param_2) {
        return lVar2;
      }
    }
    else if (cVar1 == (char)param_2[1]) {
      return lVar2;
    }
    lVar2 = lVar2 + 1;
    pcVar3 = pcVar3 + 8;
  } while( true );
}



/* Entry: 108130b78; end: 108130c37;  */

undefined1  [16] FUN_108130b78(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  uVar2 = 0;
  if (*(char *)(param_2 + 0x30) == '\x01') {
    uVar4 = 0;
    if ((*(byte *)(param_2 + 4) & 1) != 0) {
      FUN_108130c38(param_2);
      lVar5 = 0;
      uVar3 = 0;
      uVar2 = 1;
      while( true ) {
        uVar4 = (*(long *)(param_1 + 200) - *(long *)(param_1 + 0xc0)) / 0x30;
        if (uVar4 <= uVar3) break;
        uVar1 = *(long *)(param_1 + 0xc0) + lVar5;
        FUN_108132e54(uVar1,param_2);
        uVar4 = uVar3;
        if ((uVar1 & 1) != 0) goto LAB_108130c18;
        uVar3 = uVar3 + 1;
        lVar5 = lVar5 + 0x30;
      }
      func_0x000108132ec8(param_1 + 0xc0,param_2);
      uVar2 = 1;
    }
  }
  else {
    uVar4 = 0;
  }
LAB_108130c18:
  auVar6._8_8_ = uVar2;
  auVar6._0_8_ = uVar4;
  return auVar6;
}



/* Entry: 108130c38; end: 108130c4f;  */

long FUN_108130c38(undefined4 param_1,long param_2,long *param_3,long *param_4,undefined8 param_5,
                  undefined4 param_6,undefined8 param_7,undefined8 param_8,undefined1 param_9,
                  undefined1 param_10,undefined4 param_11,undefined4 param_12)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar6;
  undefined8 uStack_88;
  
  if ((*(byte *)(param_2 + 0x30) & 1) != 0) {
    return param_2;
  }
  func_0x0001080da3e4();
  if ((*param_4 == 0) || (param_3[1] == 0)) {
    lVar2 = 0;
  }
  else {
    lVar2 = *param_3;
    uStack_88 = param_8;
    func_0x000108143ff0(lVar2,param_3[1],param_2 + 0x48);
    if (lVar2 != 0) {
      lVar5 = *(long *)(param_2 + 0x50) - *(long *)(param_2 + 0x48) >> 2;
      lVar3 = param_2 + 0x60;
      FUN_108130d94();
      func_0x0001078d387c();
      *(undefined8 *)(lVar3 + 0x20) = param_5;
      *(undefined4 *)(lVar3 + 0x28) = param_1;
      *(undefined4 *)(lVar3 + 0x2c) = param_6;
      uVar1 = *(undefined1 *)(unaff_x29 + 2);
      uVar6 = *unaff_x29;
      *(undefined8 *)(lVar3 + 0x38) = unaff_x29[1];
      *(undefined8 *)(lVar3 + 0x30) = uVar6;
      *(undefined1 *)(lVar3 + 0x40) = uVar1;
      func_0x0001008d6514(lVar3 + 8,param_7);
      *(undefined8 *)(lVar3 + 0x10) = unaff_x30;
      *(undefined1 *)(lVar3 + 0x18) = param_10;
      *(undefined4 *)(lVar3 + 0x1c) = param_12;
      lVar4 = param_2;
      FUN_108130afc(param_2,&uStack_88);
      *(long *)(lVar3 + 0x48) = lVar4;
      FUN_108130b78();
      *(long *)(lVar3 + 0x50) = param_2;
      *(undefined1 *)(lVar3 + 0x58) = param_9;
      *(long *)(lVar3 + 0x60) = lVar5 - lVar2;
      *(long *)(lVar3 + 0x68) = lVar5;
    }
  }
  return lVar2;
}



/* Entry: 108130c50; end: 108130d93;  */

long FUN_108130c50(undefined4 param_1,long param_2,long *param_3,long *param_4,undefined8 param_5,
                  undefined4 param_6,undefined8 param_7,undefined8 param_8,undefined1 param_9,
                  undefined8 *param_10,undefined8 param_11,undefined1 param_12,undefined4 param_13,
                  undefined4 param_14)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uStack_78;
  
  if ((*param_4 == 0) || (param_3[1] == 0)) {
    lVar2 = 0;
  }
  else {
    lVar2 = *param_3;
    uStack_78 = param_8;
    func_0x000108143ff0(lVar2,param_3[1],param_2 + 0x48);
    if (lVar2 != 0) {
      lVar5 = *(long *)(param_2 + 0x50) - *(long *)(param_2 + 0x48) >> 2;
      lVar3 = param_2 + 0x60;
      FUN_108130d94();
      func_0x0001078d387c();
      *(undefined8 *)(lVar3 + 0x20) = param_5;
      *(undefined4 *)(lVar3 + 0x28) = param_1;
      *(undefined4 *)(lVar3 + 0x2c) = param_6;
      uVar1 = *(undefined1 *)(param_10 + 2);
      uVar6 = *param_10;
      *(undefined8 *)(lVar3 + 0x38) = param_10[1];
      *(undefined8 *)(lVar3 + 0x30) = uVar6;
      *(undefined1 *)(lVar3 + 0x40) = uVar1;
      func_0x0001008d6514(lVar3 + 8,param_7);
      *(undefined8 *)(lVar3 + 0x10) = param_11;
      *(undefined1 *)(lVar3 + 0x18) = param_12;
      *(undefined4 *)(lVar3 + 0x1c) = param_14;
      lVar4 = param_2;
      FUN_108130afc(param_2,&uStack_78);
      *(long *)(lVar3 + 0x48) = lVar4;
      FUN_108130b78();
      *(long *)(lVar3 + 0x50) = param_2;
      *(undefined1 *)(lVar3 + 0x58) = param_9;
      *(long *)(lVar3 + 0x60) = lVar5 - lVar2;
      *(long *)(lVar3 + 0x68) = lVar5;
    }
  }
  return lVar2;
}



/* Entry: 108130d94; end: 108130dcf;  */

long FUN_108130d94(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_108133154();
    lVar2 = uVar1 + 0x70;
  }
  else {
    lVar2 = param_1;
    func_0x000108133180();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x70;
}



/* Entry: 108130dd0; end: 108130e67;  */

void FUN_108130dd0(long param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong unaff_x19;
  ulong unaff_x20;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  float fVar10;
  undefined1 auStack_e0 [80];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined8 uStack_5f;
  
  if (param_2 < param_3) {
    lVar5 = 0;
    lVar1 = *(long *)(param_1 + 0x90) + param_2 * 0x90;
    lVar4 = *(long *)(param_1 + 0x90) + param_3 * 0x90;
    lVar3 = 0;
    for (lVar6 = param_3 * 0x90 + param_2 * -0x90; lVar6 != 0; lVar6 = lVar6 + -0x90) {
      lVar8 = *(long *)(lVar1 + 0x28);
      lVar2 = lVar3;
      if ((lVar8 != lVar5) && (lVar2 = lVar1, lVar5 = lVar8, lVar3 != 0)) {
        FUN_108133d50(lVar3,lVar1);
      }
      lVar1 = lVar1 + 0x90;
      lVar3 = lVar2;
    }
    if (lVar3 != 0) {
      func_0x00010014c548();
      fVar10 = *(float *)(lVar3 + 0x10);
      uVar9 = unaff_x20;
      uVar7 = unaff_x19;
      if (lVar3 != lVar4) {
        for (; uVar7 = uVar7 - 0x90, uVar9 < uVar7; uVar9 = uVar9 + 0x90) {
          func_0x0001081348cc(auStack_e0,uVar9);
          uStack_88 = *(undefined8 *)(uVar9 + 0x58);
          uStack_90 = *(undefined8 *)(uVar9 + 0x50);
          uStack_78 = *(undefined8 *)(uVar9 + 0x68);
          uStack_80 = *(undefined8 *)(uVar9 + 0x60);
          *(undefined8 *)(uVar9 + 0x50) = 0;
          *(undefined8 *)(uVar9 + 0x58) = 0;
          uStack_70 = *(undefined8 *)(uVar9 + 0x70);
          uStack_68 = (undefined1)*(undefined8 *)(uVar9 + 0x78);
          uStack_5f = *(undefined8 *)(uVar9 + 0x81);
          uStack_67 = (undefined7)*(undefined8 *)(uVar9 + 0x79);
          uStack_60 = (undefined1)((ulong)*(undefined8 *)(uVar9 + 0x79) >> 0x38);
          func_0x000108132cc8(uVar9,uVar7);
          func_0x000108132cc8(uVar7,auStack_e0);
          func_0x000108132a10(auStack_e0);
        }
      }
      for (; unaff_x20 != unaff_x19; unaff_x20 = unaff_x20 + 0x90) {
        *(float *)(unaff_x20 + 0x10) = fVar10;
        fVar10 = fVar10 + (*(float *)(unaff_x20 + 0x20) - *(float *)(unaff_x20 + 0x18));
      }
      return;
    }
  }
  return;
}



/* Entry: 108130e68; end: 108130ea3;  */

long * FUN_108130e68(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != param_2) {
    FUN_1080fa694();
    *param_1 = param_2;
    func_0x000107807aac(lVar1);
  }
  return param_1;
}



/* Entry: 108130ea4; end: 108131073;  */

undefined8 *
FUN_108130ea4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,long param_4,long param_5,
             long param_6,long *param_7)

{
  uint uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  long lVar4;
  uint uVar5;
  long *plVar6;
  undefined8 extraout_x8;
  undefined8 *puVar7;
  undefined8 *puVar8;
  byte bVar9;
  undefined8 *in_stack_00000008;
  undefined8 *in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000028;
  
  func_0x000108134a78();
  puVar3 = param_1;
  lVar4 = param_5;
  plVar6 = param_7;
  func_0x00010813480c();
  in_stack_00000008 = (undefined8 *)0x0;
  in_stack_00000010 = (undefined8 *)0x0;
  bVar9 = *(byte *)(*(long *)(*plVar6 + 0x20) + 0x74);
  in_stack_00000028 = extraout_x8;
  do {
    uVar5 = (uint)param_2;
    if (param_6 == param_5) {
      uVar2 = lVar4 == param_6;
      if (!(bool)uVar2) {
        func_0x0001081348ac();
        puVar3[3] = lVar4;
        puVar3[4] = param_6;
        uVar2 = in_stack_00000010 == (undefined8 *)0x0;
        if (!(bool)uVar2) {
          param_7 = (long *)&stack0x00000010;
        }
        uVar5 = (uint)param_7;
        func_0x0001078d387c(puVar3 + 6);
      }
      func_0x000107807aac(in_stack_00000008);
      puVar3 = in_stack_00000010;
      func_0x000107807aac();
      func_0x0001081347d0(in_stack_00000028);
      if ((bool)uVar2) {
        return puVar3;
      }
      ___stack_chk_fail();
      if ((uVar5 == 10) || (uVar5 == 0xd0a)) {
        return (undefined8 *)0x1;
      }
      lVar4 = *(long *)(puVar3[4] + 0x60);
      uVar1 = uVar5 >> 8;
      if ((*(uint *)(lVar4 + 0x10) <= uVar1) && (uVar1 <= *(uint *)(lVar4 + 0x14))) {
        return (undefined8 *)
               (ulong)(*(uint *)(*(long *)(lVar4 + 0x20) +
                                 (ulong)*(ushort *)
                                         (*(long *)(lVar4 + 0x18) +
                                         (ulong)(uVar1 - *(uint *)(lVar4 + 0x10)) * 2) * 0x20 +
                                (ulong)(uVar5 >> 5 & 7) * 4) >> (ulong)(uVar5 & 0x1f) & 1);
      }
      return (undefined8 *)0x0;
    }
    uVar5 = *(uint *)(param_4 + param_5 * 4);
    puVar7 = (undefined8 *)(ulong)uVar5;
    puVar3 = puVar7;
    FUN_108139a4c();
    if (((ulong)puVar3 & 1) == 0) {
      if (((uVar5 != 10) && (uVar5 != 0xd0a)) &&
         (puVar3 = puVar7, func_0x000108139a90(), ((ulong)puVar3 & 1) == 0)) goto LAB_108130f38;
    }
    else if ((bVar9 & 1) != 0) {
LAB_108130f38:
      puVar3 = (undefined8 *)*param_7;
      param_2 = puVar7;
      FUN_108131074();
      if ((int)puVar3 == 0) {
        if ((in_stack_00000008 == (undefined8 *)0x0) ||
           (puVar3 = in_stack_00000008, param_2 = puVar7, FUN_108131074(),
           puVar8 = in_stack_00000008, (int)puVar3 == 0)) {
          FUN_10812c370(&stack0x00000018,param_1[8],param_7,0,0,puVar7);
          if (in_stack_00000018 == 1) {
            param_2 = (undefined8 *)&stack0x00000020;
            func_0x0001078d4460();
          }
          else {
            param_2 = (undefined8 *)0x0;
            FUN_108130e68(&stack0x00000008);
          }
          puVar8 = in_stack_00000008;
          puVar3 = &stack0x00000018;
          func_0x000107807ab8();
        }
      }
      else {
        puVar8 = (undefined8 *)*param_7;
      }
      if (in_stack_00000010 != puVar8) {
        if ((in_stack_00000010 != (undefined8 *)0x0) && (lVar4 != param_5)) {
          func_0x0001081348ac();
          func_0x0001078d387c(puVar3 + 6,&stack0x00000010);
          puVar3[3] = lVar4;
          puVar3[4] = param_5;
          lVar4 = param_5;
        }
        puVar3 = &stack0x00000010;
        param_2 = puVar8;
        FUN_108130e68();
        if (puVar8 == (undefined8 *)0x0) {
          bVar9 = 0;
          puVar8 = in_stack_00000010;
        }
        else {
          bVar9 = *(byte *)(puVar8[4] + 0x74);
          puVar8 = in_stack_00000010;
        }
      }
      if (puVar8 == (undefined8 *)0x0) {
        lVar4 = param_5 + 1;
      }
    }
    param_5 = param_5 + 1;
  } while( true );
}



/* Entry: 108131074; end: 108131093;  */

uint FUN_108131074(long param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  
  if ((param_2 == 10) || (param_2 == 0xd0a)) {
    return 1;
  }
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x60);
  uVar1 = param_2 >> 8;
  if ((*(uint *)(lVar2 + 0x10) <= uVar1) && (uVar1 <= *(uint *)(lVar2 + 0x14))) {
    return *(uint *)(*(long *)(lVar2 + 0x20) +
                     (ulong)*(ushort *)
                             (*(long *)(lVar2 + 0x18) + (ulong)(uVar1 - *(uint *)(lVar2 + 0x10)) * 2
                             ) * 0x20 + (ulong)(param_2 >> 5 & 7) * 4) >> (ulong)(param_2 & 0x1f) &
           1;
  }
  return 0;
}



/* Entry: 108131094; end: 10813171f;  */

undefined1 **
FUN_108131094(undefined1 **param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined1 **ppuVar5;
  undefined1 uVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  undefined1 **extraout_x8;
  undefined8 extraout_x8_00;
  undefined1 **ppuVar13;
  undefined8 *puVar14;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined1 extraout_w9;
  undefined1 extraout_w9_00;
  undefined8 *puVar15;
  ulong uVar16;
  long lVar17;
  undefined1 **ppuVar18;
  undefined1 **ppuVar19;
  undefined4 *puVar20;
  undefined1 **ppuVar21;
  undefined8 *puVar22;
  undefined1 **ppuVar23;
  undefined1 *puVar24;
  long lVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined1 auStack_268 [16];
  undefined8 *puStack_258;
  undefined1 **ppuStack_240;
  undefined1 *puStack_238;
  undefined1 **ppuStack_230;
  undefined1 **ppuStack_228;
  undefined1 **ppuStack_220;
  code *pcStack_218;
  undefined1 **ppuStack_210;
  undefined1 *puStack_208;
  undefined1 *puStack_200;
  undefined1 *puStack_1f8;
  undefined1 auStack_1f0 [64];
  undefined1 uStack_1b0;
  undefined1 *apuStack_130 [11];
  undefined1 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c0;
  undefined1 *puStack_70;
  undefined8 uStack_68;
  
  puVar14 = (undefined8 *)param_1[1];
  if (puVar14 < param_1[2]) {
    *puVar14 = param_2;
    puVar14[1] = param_3;
    puVar14[6] = 0;
    puVar14[3] = 0;
    puVar14[4] = 0;
    puVar14[2] = param_4;
    puVar22 = puVar14 + 7;
    *(undefined2 *)(puVar14 + 5) = 0;
LAB_1081311f0:
    param_1[1] = (undefined1 *)puVar22;
    return (undefined1 **)(puVar22 + -7);
  }
  puVar22 = (undefined8 *)*param_1;
  lVar25 = (long)puVar14 - (long)puVar22;
  uVar1 = lVar25 / 0x38 + 1;
  if (uVar1 < 0x492492492492493) {
    uVar4 = ((long)param_1[2] - (long)puVar22) / 0x38;
    uVar16 = uVar4 * 2;
    if (uVar16 < uVar1 || uVar16 - uVar1 == 0) {
      uVar16 = uVar1;
    }
    if (0x249249249249248 < uVar4) {
      uVar16 = 0x492492492492492;
    }
    if (uVar16 < 0x492492492492493) {
      lVar17 = uVar16 * 0x38;
      __Znwm();
      puVar2 = (undefined8 *)(lVar17 + lVar25);
      *puVar2 = param_2;
      puVar2[1] = param_3;
      puVar2[6] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[2] = param_4;
      *(undefined2 *)(puVar2 + 5) = 0;
      puVar12 = puVar2 + (lVar25 / -0x38) * 7;
      for (puVar15 = puVar22; puVar15 != puVar14; puVar15 = puVar15 + 7) {
        uVar27 = puVar15[1];
        uVar26 = *puVar15;
        uVar29 = puVar15[3];
        uVar28 = puVar15[2];
        uVar30 = *(undefined8 *)((long)puVar15 + 0x1a);
        *(undefined8 *)((long)puVar12 + 0x22) = *(undefined8 *)((long)puVar15 + 0x22);
        *(undefined8 *)((long)puVar12 + 0x1a) = uVar30;
        puVar12[1] = uVar27;
        *puVar12 = uVar26;
        puVar12[3] = uVar29;
        puVar12[2] = uVar28;
        puVar12[6] = puVar15[6];
        puVar15[6] = 0;
        puVar12 = puVar12 + 7;
      }
      for (; puVar22 != puVar14; puVar22 = puVar22 + 7) {
        func_0x000107807a88(puVar22 + 6);
      }
      puVar8 = *param_1;
      puVar22 = puVar2 + 7;
      *param_1 = (undefined1 *)(puVar2 + (lVar25 / -0x38) * 7);
      param_1[1] = (undefined1 *)puVar22;
      param_1[2] = (undefined1 *)(lVar17 + uVar16 * 0x38);
      if (puVar8 != (undefined1 *)0x0) {
        __ZdlPv();
      }
      goto LAB_1081311f0;
    }
  }
  else {
    func_0x00010bdb1724();
  }
  func_0x000104bfe188();
  uStack_68 = 0x10813121c;
  ppuVar13 = param_1;
  lStack_c0 = lVar25;
  puStack_70 = &stack0xfffffffffffffff0;
  func_0x00010813480c();
  ppuVar19 = extraout_x8 + 3;
  *extraout_x8 = (undefined1 *)ppuVar19;
  ppuVar21 = extraout_x8 + 0x1b;
  *ppuVar21 = (undefined1 *)0x0;
  extraout_x8[2] = (undefined1 *)0x2;
  extraout_x8[1] = (undefined1 *)0x0;
  extraout_x8[0x1c] = (undefined1 *)0x0;
  extraout_x8[0x1d] = (undefined1 *)0x0;
  puVar8 = ppuVar13[9];
  apuStack_130[0] = (undefined1 *)((ulong)apuStack_130[0] & 0xffffffffffffff00);
  uStack_d8 = 0;
  uStack_d0 = extraout_x8_00;
  func_0x000105c3b044();
  if ((int)ppuVar13 != 0) {
    FUN_1080e8d4c(apuStack_130);
    func_0x000105c3d66c(apuStack_130,&UNK_10f47bc7c);
    uStack_d8 = 1;
  }
  (**(code **)(*(long *)param_1[0x1b] + 0x28))
            (&puStack_208,param_1[0x1b],puVar8,(long)param_1[10] - (long)param_1[9] >> 2,
             *(undefined1 *)((long)param_1 + 0x33));
  puVar9 = puStack_200;
  puVar24 = puStack_208;
  if (&puStack_208 != extraout_x8) {
    if (auStack_1f0 == puStack_208) {
      if (extraout_x8[2] < puStack_200) {
        ppuVar13 = extraout_x8;
        FUN_108133e44(extraout_x8,puStack_200);
        ppuVar23 = (undefined1 **)*extraout_x8;
        if ((ppuVar23 != (undefined1 **)0x0) && (FUN_108133e20(extraout_x8), ppuVar19 != ppuVar23))
        {
          __ZdlPv(ppuVar23);
        }
        extraout_x8[1] = (undefined1 *)0x0;
        extraout_x8[2] = puVar9;
        *extraout_x8 = (undefined1 *)ppuVar13;
        for (ppuVar19 = (undefined1 **)0x0; (undefined1 **)((long)puVar9 * -0x60) != ppuVar19;
            ppuVar19 = ppuVar19 + -0xc) {
          FUN_108133e94(ppuVar13,puVar24);
          puVar24 = puVar24 + 0x60;
          ppuVar13 = ppuVar13 + 0xc;
        }
        puVar9 = extraout_x8[1] + -(long)ppuVar19 / 0x60;
      }
      else {
        puVar24 = *extraout_x8;
        puVar10 = extraout_x8[1];
        lVar25 = (long)puVar10 - (long)puStack_200;
        puVar3 = puStack_208;
        if (puVar10 < puStack_200) {
          while (ppuVar19 = (undefined1 **)0x0, puVar10 != (undefined1 *)0x0) {
            func_0x00010813490c();
            puVar24 = puVar24 + 0x60;
            puVar3 = puVar3 + 0x60;
          }
          for (; lVar25 != 0; lVar25 = lVar25 + 1) {
            FUN_108133e94(puVar24 + (long)ppuVar19,puVar3 + (long)ppuVar19);
            ppuVar19 = ppuVar19 + 0xc;
          }
        }
        else {
          while (puVar9 != (undefined1 *)0x0) {
            func_0x00010813490c();
            puVar24 = puVar24 + 0x60;
          }
          func_0x0001077feacc(extraout_x8,puVar24,lVar25);
          ppuVar19 = (undefined1 **)0x0;
        }
      }
      extraout_x8[1] = puVar9;
      FUN_108133e20(&puStack_208);
    }
    else {
      FUN_108133e20(extraout_x8);
      if (*extraout_x8 != (undefined1 *)0x0) {
        func_0x0001077feb80(extraout_x8,extraout_x8,extraout_x8[2]);
      }
      *extraout_x8 = puStack_208;
      extraout_x8[2] = puStack_1f8;
      extraout_x8[1] = puStack_200;
      puStack_200 = (undefined1 *)0x0;
      puStack_1f8 = (undefined1 *)0x0;
      puStack_208 = (undefined1 *)0x0;
    }
  }
  func_0x0001077feaa0(&puStack_208);
  iVar7 = (int)apuStack_130;
  FUN_1080e8dd4();
  puStack_208 = (undefined1 *)((ulong)puStack_208 & 0xffffffffffffff00);
  uStack_1b0 = 0;
  func_0x000105c3b044();
  if (iVar7 != 0) {
    FUN_108117b98(&puStack_208,&UNK_10f47bc9a);
  }
  puVar24 = (undefined1 *)0x0;
  puVar14 = (undefined8 *)*extraout_x8;
  puVar22 = puVar14 + (long)extraout_x8[1] * 0xc;
  ppuStack_210 = extraout_x8;
  for (; puVar14 != puVar22; puVar14 = puVar14 + 0xc) {
    ppuVar13 = (undefined1 **)*puVar14;
    ppuVar19 = ppuVar13 + puVar14[1] * 4;
    for (; ppuVar13 != ppuVar19; ppuVar13 = ppuVar13 + 4) {
      puVar11 = (undefined1 *)0x0;
      puVar3 = ppuVar13[2];
      puVar10 = ppuVar13[1];
      for (puVar9 = puVar10; puVar9 != puVar3; puVar9 = puVar9 + 1) {
        if ((puVar24 == (undefined1 *)0x0) ||
           (puVar9 < *(undefined1 **)(puVar24 + 0x60) || *(undefined1 **)(puVar24 + 0x68) <= puVar9)
           ) {
          puVar24 = param_1[0xc];
          while( true ) {
            uVar6 = puVar24 == param_1[0xd];
            if ((bool)uVar6) {
              _abort();
              goto LAB_1081316e4;
            }
            if (*(undefined1 **)(puVar24 + 0x60) <= puVar9 &&
                puVar9 < *(undefined1 **)(puVar24 + 0x68)) break;
            puVar24 = puVar24 + 0x70;
          }
        }
        if ((puVar24 != puVar11) && (puVar11 = puVar24, puVar10 != puVar9)) {
          func_0x000108134a2c();
          FUN_108130ea4();
          puVar10 = puVar9;
        }
      }
      if (puVar10 != puVar3) {
        func_0x000108134a2c();
        FUN_108130ea4();
      }
    }
  }
  ppuVar13 = (undefined1 **)ppuStack_210[0x1b];
  ppuVar23 = (undefined1 **)ppuStack_210[0x1c];
  if (ppuVar13 != ppuVar23) {
    puVar24 = (undefined1 *)0x0;
    lVar25 = ((long)ppuVar23 - (long)ppuVar13) / 0x38;
    puVar9 = (undefined1 *)0x0;
    do {
      lVar17 = -lVar25;
      ppuVar5 = ppuVar13 + lVar25 * 7 + -6;
      do {
        ppuVar18 = ppuVar5;
        lVar17 = lVar17 + 1;
        if (lVar17 == 1) goto LAB_1081315ac;
        if (*ppuVar18 != puVar24) {
          *(undefined1 *)(ppuVar18 + 4) = 1;
          puVar24 = *ppuVar18;
        }
        ppuVar5 = ppuVar18 + -7;
      } while (ppuVar18[1] == puVar9);
      *(undefined1 *)((long)ppuVar18 + 0x21) = 1;
      lVar25 = -lVar17;
      puVar9 = ppuVar18[1];
    } while( true );
  }
LAB_1081315ac:
  uVar6 = 0;
  if (*(char *)((long)param_1 + 0x34) == '\x01') {
    apuStack_130[0] = (undefined1 *)0x0;
    while (uVar6 = ppuVar23 == ppuVar13, !(bool)uVar6) {
      if (apuStack_130[0] == (undefined1 *)0x0) {
LAB_108131618:
        func_0x0001078d387c(apuStack_130,ppuVar23 + -1);
      }
      else {
        param_1 = ppuVar23 + -1;
        if (*param_1 == (undefined1 *)0x0) {
          FUN_108130e68(apuStack_130,0);
        }
        else {
          if (*param_1 != apuStack_130[0]) {
            puVar24 = ppuVar23[-3];
            puVar20 = (undefined4 *)(puVar8 + (long)ppuVar23[-4] * 4);
            do {
              if (puVar8 + (long)puVar24 * 4 <= puVar20) {
                func_0x0001078d387c(param_1,apuStack_130);
                goto LAB_10813164c;
              }
              puVar9 = apuStack_130[0];
              FUN_108131074(apuStack_130[0],*puVar20);
              puVar20 = puVar20 + 1;
            } while (((ulong)puVar9 & 1) != 0);
            goto LAB_108131618;
          }
LAB_10813164c:
          if (((((*(byte *)((long)ppuVar23 + -0xf) & 1) == 0) && (((ulong)ppuVar23[-2] & 1) == 0))
              && (ppuVar23[-7] == *ppuVar23)) &&
             ((ppuVar23[-5] == ppuVar23[2] && (ppuVar23[3] == ppuVar23[-3])))) {
            ppuVar23[3] = ppuVar23[-4];
            param_1 = (undefined1 **)ppuStack_210[0x1c];
            ppuVar19 = ppuVar23 + -7;
            while (ppuVar13 = ppuVar19 + 7, ppuVar13 != param_1) {
              ppuVar19[1] = ppuVar19[8];
              *ppuVar19 = *ppuVar13;
              ppuVar19[3] = ppuVar19[10];
              ppuVar19[2] = ppuVar19[9];
              *(undefined8 *)((long)ppuVar19 + 0x22) = *(undefined8 *)((long)ppuVar19 + 0x5a);
              *(undefined8 *)((long)ppuVar19 + 0x1a) = *(undefined8 *)((long)ppuVar19 + 0x52);
              func_0x0001078d4460(ppuVar19 + 6,ppuVar19 + 0xd);
              ppuVar19 = ppuVar13;
            }
            FUN_1081334a0(ppuVar21);
          }
        }
      }
      ppuVar13 = (undefined1 **)*ppuVar21;
      ppuVar19 = ppuVar23 + -7;
      ppuVar23 = ppuVar19;
    }
LAB_1081316e4:
    func_0x000107807aac();
  }
  ppuVar13 = &puStack_208;
  FUN_1080e8dd4();
  func_0x0001081347d0(uStack_d0);
  if (!(bool)uVar6) {
    ___stack_chk_fail();
    pcStack_218 = FUN_108131720;
    puVar14 = (undefined8 *)ppuVar13[1];
    ppuStack_240 = param_1;
    puStack_238 = puVar8;
    ppuStack_230 = ppuVar21;
    ppuStack_228 = ppuVar19;
    ppuStack_220 = &puStack_70;
    if (puVar14 < ppuVar13[2]) {
      puVar14[5] = 0;
      puVar14[4] = 0;
      puVar14[7] = 0;
      puVar14[6] = 0;
      puVar14[9] = 0;
      puVar14[8] = 0;
      puVar14[1] = 0;
      *puVar14 = 0;
      puVar14[3] = 0;
      puVar14[2] = 0;
      func_0x000108134a38();
      puVar8 = (undefined1 *)(extraout_x8_01 + 0x50);
      *(undefined1 *)(extraout_x8_01 + 0x38) = extraout_w9;
    }
    else {
      ppuVar19 = ppuVar13;
      FUN_1081336b0(ppuVar13,((long)puVar14 - (long)*ppuVar13) / 0x50 + 1);
      func_0x000108133740(auStack_268,ppuVar19,((long)ppuVar13[1] - (long)*ppuVar13) / 0x50,
                          ppuVar13 + 2);
      puStack_258[5] = 0;
      puStack_258[4] = 0;
      puStack_258[7] = 0;
      puStack_258[6] = 0;
      puStack_258[1] = 0;
      *puStack_258 = 0;
      puStack_258[3] = 0;
      puStack_258[2] = 0;
      puStack_258[9] = 0;
      puStack_258[8] = 0;
      func_0x000108134a38();
      *(undefined1 *)(extraout_x8_02 + 0x38) = extraout_w9_00;
      func_0x00010813494c(extraout_x8_02 + 0x50);
      func_0x0001081336f8(ppuVar13);
      puVar8 = ppuVar13[1];
      FUN_108133798(auStack_268);
    }
    ppuVar13[1] = puVar8;
    return (undefined1 **)(puVar8 + -0x50);
  }
  return ppuVar13;
}



/* Entry: 108131720; end: 1081317eb;  */

long FUN_108131720(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 extraout_w9;
  undefined1 extraout_w9_00;
  long lVar3;
  undefined1 auStack_58 [16];
  undefined8 *puStack_48;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 < (undefined8 *)param_1[2]) {
    puVar2[5] = 0;
    puVar2[4] = 0;
    puVar2[7] = 0;
    puVar2[6] = 0;
    puVar2[9] = 0;
    puVar2[8] = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    func_0x000108134a38();
    lVar3 = extraout_x8 + 0x50;
    *(undefined1 *)(extraout_x8 + 0x38) = extraout_w9;
  }
  else {
    plVar1 = param_1;
    FUN_1081336b0(param_1,((long)puVar2 - *param_1) / 0x50 + 1);
    func_0x000108133740(auStack_58,plVar1,(param_1[1] - *param_1) / 0x50,param_1 + 2);
    puStack_48[5] = 0;
    puStack_48[4] = 0;
    puStack_48[7] = 0;
    puStack_48[6] = 0;
    puStack_48[1] = 0;
    *puStack_48 = 0;
    puStack_48[3] = 0;
    puStack_48[2] = 0;
    puStack_48[9] = 0;
    puStack_48[8] = 0;
    func_0x000108134a38();
    *(undefined1 *)(extraout_x8_00 + 0x38) = extraout_w9_00;
    func_0x00010813494c(extraout_x8_00 + 0x50);
    func_0x0001081336f8(param_1);
    lVar3 = param_1[1];
    FUN_108133798(auStack_58);
  }
  param_1[1] = lVar3;
  return lVar3 + -0x50;
}



/* Entry: 1081317ec; end: 108132907;  */

float ******* FUN_1081317ec(undefined8 *param_1,float *******param_2)

{
  float *pfVar1;
  float *pfVar2;
  undefined8 *puVar3;
  bool bVar4;
  float *****pppppfVar5;
  byte bVar6;
  ulong uVar7;
  undefined4 uVar8;
  float *pfVar9;
  char cVar10;
  undefined1 uVar11;
  int iVar12;
  float *******pppppppfVar13;
  float *******pppppppfVar14;
  float *******pppppppfVar15;
  float *****pppppfVar16;
  float *****pppppfVar17;
  float *****pppppfVar18;
  ulong uVar19;
  float *******pppppppfVar20;
  float *******pppppppfVar21;
  float *pfVar22;
  float ******ppppppfVar23;
  undefined8 extraout_x8;
  long *extraout_x8_00;
  long lVar24;
  long extraout_x8_01;
  long lVar25;
  float ******ppppppfVar26;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  float *pfVar27;
  long extraout_x8_06;
  float *****pppppfVar28;
  long extraout_x8_07;
  long extraout_x8_08;
  ulong extraout_x8_09;
  float *pfVar29;
  long extraout_x9;
  long extraout_x9_00;
  float ******ppppppfVar30;
  undefined4 *puVar31;
  ulong uVar32;
  float *******unaff_x19;
  undefined8 uVar33;
  float ******ppppppfVar34;
  float *pfVar35;
  long *plVar36;
  float *******pppppppfVar37;
  float *****pppppfVar38;
  float *pfVar39;
  float *pfVar40;
  undefined4 uVar41;
  float fVar42;
  float *******pppppppfVar43;
  float ******ppppppfVar44;
  float ****ppppfVar45;
  undefined8 uVar46;
  float fVar47;
  uint uVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  uint uVar53;
  float fVar54;
  ulong uStack_3b0;
  undefined8 uStack_3a8;
  ulong uStack_3a0;
  float fStack_370;
  float fStack_36c;
  float ***pppfStack_368;
  float ****ppppfStack_360;
  undefined8 uStack_358;
  float *pfStack_350;
  float *pfStack_348;
  float *pfStack_340;
  float ******ppppppfStack_338;
  float *pfStack_330;
  float *pfStack_328;
  undefined8 uStack_320;
  undefined4 uStack_310;
  char cStack_308;
  undefined4 uStack_2f8;
  float ******ppppppfStack_2d0;
  uint uStack_2c8;
  float ******ppppppfStack_280;
  undefined4 uStack_278;
  undefined4 uStack_274;
  byte bStack_270;
  char cStack_26f;
  undefined2 uStack_26e;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  float ******ppppppfStack_260;
  float ******ppppppfStack_258;
  float ******ppppppfStack_250;
  float *pfStack_248;
  undefined8 uStack_240;
  undefined1 uStack_238;
  undefined1 uStack_230;
  undefined1 auStack_228 [32];
  undefined1 uStack_208;
  float ******ppppppfStack_200;
  float ******ppppppfStack_1f8;
  float ******ppppppfStack_1f0;
  undefined8 uStack_1e8;
  undefined5 uStack_1e0;
  undefined8 uStack_1db;
  undefined8 uStack_1d0;
  long *plStack_128;
  long *plStack_120;
  float ******ppppppfStack_108;
  undefined8 uStack_100;
  undefined2 uStack_f8;
  undefined2 uStack_f6;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  long lStack_e0;
  undefined1 uStack_d8;
  undefined8 uStack_a8;
  
  pppppppfVar21 = param_2;
  func_0x00010813480c();
  pppppppfVar37 = pppppppfVar21 + 0xf;
  uVar19 = (long)pppppppfVar21[10] - (long)pppppppfVar21[9] >> 2;
  uStack_a8 = extraout_x8;
  if ((ulong)(((long)pppppppfVar21[0x11] - (long)*pppppppfVar37) / 0x14) < uVar19) {
    if (0xccccccccccccccc < uVar19) goto LAB_108132904;
    FUN_108133534(&ppppppfStack_200,uVar19,((long)param_2[0x10] - (long)*pppppppfVar37) / 0x14);
    FUN_1081334ec(pppppppfVar37,&ppppppfStack_200);
    FUN_1081335b0(&ppppppfStack_200);
  }
  pppppppfVar21 = param_2;
  func_0x00010813121c(&ppppppfStack_200);
  iVar12 = (int)pppppppfVar21;
  pppppppfVar21 = param_2 + 0x12;
  ppppppfStack_260 = (float ******)((ulong)ppppppfStack_260 & 0xffffffffffffff00);
  uStack_208 = 0;
  ppppppfVar34 = (float ******)(((long)param_2[0x13] - (long)*pppppppfVar21) / 0x90);
  func_0x000105c3b044();
  if (iVar12 != 0) {
    FUN_1080e8d4c(&ppppppfStack_260);
    ppppppfStack_260 = (float ******)0x0;
    ppppppfStack_258 = (float ******)0x0;
    ppppppfStack_250 = (float ******)0x0;
    pfStack_248 = (float *)&UNK_10f47bcbc;
    uStack_240 = 0x11;
    uStack_238 = 0;
    uStack_230 = 0;
    func_0x00010bd3f3dc(auStack_228,&UNK_10f47bcbc,0x11);
    func_0x00010b9a7630(&ppppppfStack_260);
    uStack_208 = 1;
  }
  ppppppfVar26 = ppppppfVar34;
  for (plVar36 = plStack_128; plVar36 != plStack_120; plVar36 = plVar36 + 7) {
    if (plVar36[6] != 0) {
      FUN_10812ff6c(&uStack_320,*plVar36);
      if (((uStack_2c8 & 1) != 0) && (param_2[0x18] != (float ******)0x0)) {
        func_0x0001081349b8();
        ppppppfStack_108 = (float ******)*extraout_x8_00;
        uVar41 = (undefined4)extraout_x8_00[1];
        lStack_e0 = extraout_x8_00[5];
        lVar25 = extraout_x8_00[4];
        uStack_26c = (undefined4)lStack_e0;
        uStack_268 = (undefined4)((ulong)lStack_e0 >> 0x20);
        bStack_270 = (byte)((ulong)lVar25 >> 0x20);
        cStack_26f = (char)((ulong)lVar25 >> 0x28);
        uStack_26e = (undefined2)((ulong)lVar25 >> 0x30);
        ppppppfStack_280 = *(float *******)((long)extraout_x8_00 + 0x14);
        uStack_278 = (undefined4)*(undefined8 *)((long)extraout_x8_00 + 0x1c);
        uStack_274 = (undefined4)((ulong)*(undefined8 *)((long)extraout_x8_00 + 0x1c) >> 0x20);
        if (plVar36[3] != *(long *)(*plVar36 + 0x60)) {
          uVar41 = 0;
        }
        uVar8 = (int)extraout_x8_00[2];
        if (plVar36[4] != *(long *)(*plVar36 + 0x68)) {
          uVar8 = 0;
        }
        uStack_100 = (float *******)CONCAT44(*(undefined4 *)((long)extraout_x8_00 + 0xc),uVar41);
        uStack_f8 = (undefined2)uVar8;
        uStack_f6 = (undefined2)((uint)uVar8 >> 0x10);
        uStack_f4 = SUB84(ppppppfStack_280,0);
        uStack_f0 = (undefined4)((ulong)ppppppfStack_280 >> 0x20);
        uStack_e8 = uStack_274;
        uStack_e4 = (undefined4)
                    (CONCAT26(uStack_26e,CONCAT15(cStack_26f,CONCAT14(bStack_270,uStack_274))) >>
                    0x20);
        uStack_d8 = 1;
        uVar11 = SUB81(&ppppppfStack_108,0);
        pppppppfVar20 = param_2;
        uStack_ec = uStack_278;
        FUN_108130b78();
        uStack_2c8 = CONCAT31(uStack_2c8._1_3_,uVar11);
        ppppppfStack_2d0 = (float ******)pppppppfVar20;
      }
      if (((ulong)param_2[6] & 1) == 0) {
        uVar11 = *(undefined1 *)plVar36[2];
        pppppppfVar20 = (float *******)CONCAT44(uStack_320._4_4_,(float)uStack_320);
        pppppppfVar13 = param_2;
        FUN_108130a0c(uStack_2f8,param_2,pppppppfVar20,(long)param_2[9] + plVar36[3] * 4,
                      plVar36[4] - plVar36[3],*(undefined4 *)((undefined1 *)plVar36[2] + 0x18),
                      uVar11);
        if (cStack_308 == '\x01') {
          lVar24 = 0;
          ppppppfVar30 = *pppppppfVar37;
          lVar25 = ((long)pppppppfVar13 - (long)ppppppfVar30) / 0x14;
          puVar31 = (undefined4 *)((long)ppppppfVar30 + (lVar25 * 5 + 2) * 4);
          for (; lVar25 < ((long)pppppppfVar20 - (long)ppppppfVar30) / 0x14; lVar25 = lVar25 + 1) {
            uVar41 = uStack_310;
            if (lVar24 != 0) {
              uVar41 = 0;
            }
            *puVar31 = uVar41;
            lVar24 = lVar24 + -1;
            puVar31 = puVar31 + 5;
          }
        }
        pppppppfVar14 = (float *******)CONCAT44(uStack_320._4_4_,(float)uStack_320);
        func_0x00010812977c();
        pppppppfVar15 = pppppppfVar14;
        fVar54 = 0.0;
        if (((uStack_2c8 & 1) != 0) && (fVar54 = 0.0, param_2[0x18] != (float ******)0x0)) {
          func_0x0001081349b8();
          fVar54 = *(float *)(extraout_x8_01 + 8) + *(float *)(extraout_x8_01 + 0x10);
        }
        while( true ) {
          if ((pppppppfVar20 <= pppppppfVar13) || (((ulong)param_2[6] & 1) != 0))
          goto LAB_108131cb4;
          func_0x0001081349d0();
          if (((ulong)pppppppfVar15 & 1) == 0) break;
          pppppppfVar43 = (float *******)(ulong)*(uint *)(param_2 + 1);
          pppppppfVar15 = &ppppppfStack_280;
          FUN_10813052c(pppppppfVar43,fVar54 + *(float *)(param_2 + 2),pppppppfVar15,pppppppfVar13,
                        pppppppfVar20,*(uint *)(param_2 + 0x1c));
          if (bStack_270 == 1) {
            if ((param_2[4] == (float ******)0x0) ||
               ((float ******)((long)param_2[5] + 1U) <= param_2[4])) {
              bVar4 = false;
              if (((float *******)ppppppfStack_280 != (float *******)CONCAT44(uStack_274,uStack_278)
                   || pppppppfVar13 != (float *******)ppppppfStack_280) ||
                 (fVar47 = *(float *)(param_2 + 2), fVar47 != 0.0)) goto LAB_108131b88;
            }
            else {
              fVar47 = *(float *)(param_2 + 2);
            }
            bVar4 = true;
            pppppppfVar15 = &ppppppfStack_108;
            FUN_10813052c(*(uint *)(param_2 + 1),fVar54 + fVar47,pppppppfVar15,pppppppfVar13,
                          pppppppfVar20,1);
            uStack_278 = SUB84(uStack_100,0);
            uStack_274 = (undefined4)((ulong)uStack_100 >> 0x20);
            ppppppfStack_280 = ppppppfStack_108;
            bStack_270 = (byte)uStack_f8;
            cStack_26f = (char)((ushort)uStack_f8 >> 8);
            pppppppfVar43 = (float *******)ppppppfStack_108;
          }
          else {
            bVar4 = false;
          }
LAB_108131b88:
          cVar10 = cStack_26f;
          uVar53 = (uint)pppppppfVar43;
          lVar25 = (long)ppppppfStack_280 - (long)pppppppfVar13;
          if (((0 < lVar25) || (cStack_26f != '\0')) && (param_2[3] = ppppppfStack_338, 0 < lVar25))
          {
            FUN_108130698(pppppppfVar13,lVar25 / 0x14);
            fVar47 = *(float *)((long)pppppppfVar14 + 4);
            uVar48 = *(uint *)(pppppppfVar14 + 1);
            FUN_1081303e4(param_2,&uStack_320);
            ppppppfStack_108 = (float ******)((ulong)uVar53 << 0x20);
            uStack_100 = (float *******)CONCAT44(uVar48,fVar47);
            pppppppfVar15 = param_2;
            FUN_10813013c(param_2,&uStack_320,((long)pppppppfVar13 - (long)param_2[0xf]) / 0x14,
                          lVar25 / 0x14,&ppppppfStack_108,uVar11);
            *(float *)(param_2 + 2) = fVar47 + *(float *)(param_2 + 2);
          }
          if ((bStack_270 & 1) != 0) {
            if (bVar4) {
              func_0x000108134890();
              goto LAB_108131c94;
            }
            *(uint *)(param_2 + 2) = 0;
            *(float *)((long)param_2 + 0x14) =
                 *(float *)((long)param_2 + 0x14) +
                 (*(float *)((long)param_2 + 0x1c) - *(float *)(param_2 + 3));
            param_2[3] = (float ******)0x0;
            param_2[5] = (float ******)((long)param_2[5] + 1);
            if (cVar10 != '\0') {
              func_0x0001081349d0();
              if (((ulong)pppppppfVar15 & 1) == 0) break;
              param_2[3] = ppppppfStack_338;
            }
          }
          pppppppfVar13 = (float *******)CONCAT44(uStack_274,uStack_278);
        }
        func_0x000108134890();
LAB_108131c94:
        FUN_1081306b8(param_2,&ppppppfStack_108);
        func_0x000108132d10(&ppppppfStack_108);
      }
LAB_108131cb4:
      func_0x000108132d10(&uStack_320);
    }
    if (*(char *)((long)plVar36 + 0x29) == '\x01') {
      ppppppfVar30 = param_2[0x12];
      ppppppfVar23 = param_2[0x13];
      if (*(char *)plVar36[2] != *(char *)(plVar36[1] + 0x58)) {
        FUN_108130dd0(param_2,ppppppfVar34,((long)ppppppfVar23 - (long)ppppppfVar30) / 0x90);
        ppppppfVar30 = param_2[0x12];
        ppppppfVar23 = param_2[0x13];
      }
      ppppppfVar34 = (float ******)(((long)ppppppfVar23 - (long)ppppppfVar30) / 0x90);
    }
    if ((char)plVar36[5] == '\x01') {
      ppppppfVar30 = param_2[0x12];
      ppppppfVar23 = param_2[0x13];
      if (*(char *)(plVar36[1] + 0x58) == '\x01') {
        FUN_108130dd0(param_2,ppppppfVar26,((long)ppppppfVar23 - (long)ppppppfVar30) / 0x90);
        ppppppfVar30 = param_2[0x12];
        ppppppfVar23 = param_2[0x13];
      }
      ppppppfVar26 = (float ******)(((long)ppppppfVar23 - (long)ppppppfVar30) / 0x90);
    }
  }
  FUN_1080e8dd4(&ppppppfStack_260);
  func_0x0001077fea78(&ppppppfStack_200);
  unaff_x19 = (float *******)param_2[0x13];
  fVar54 = *(float *)(param_2 + 1);
  if (*(float *)(param_2 + 1) == 3.4028235e+38) {
    pppppppfVar20 = (float *******)0x0;
    ppppppfVar26 = (float ******)0x0;
    pppppppfVar37 = (float *******)*pppppppfVar21;
    ppppppfStack_200 = (float ******)((ulong)ppppppfStack_200 & 0xffffffff00000000);
    for (; pppppppfVar37 != unaff_x19; pppppppfVar37 = pppppppfVar37 + 0x12) {
      ppppppfVar34 = pppppppfVar37[5];
      if ((ppppppfVar34 != ppppppfVar26) &&
         (bVar4 = pppppppfVar20 != (float *******)0x0, pppppppfVar20 = pppppppfVar37,
         ppppppfVar26 = ppppppfVar34, bVar4)) {
        func_0x0001081349e8();
      }
      ppppppfVar34 = ppppppfVar26;
    }
    if (pppppppfVar20 != (float *******)0x0) {
      func_0x0001081349e8();
    }
    fVar54 = ppppppfStack_200._0_4_;
  }
  if (*(uint *)param_2 == 3) {
    pppppppfVar37 = (float *******)param_2[0x12];
    ppppppfVar26 = param_2[0x14];
    uStack_f8 = SUB82(ppppppfVar26,0);
    uStack_f6 = (undefined2)((ulong)ppppppfVar26 >> 0x10);
    uStack_f4 = (undefined4)((ulong)ppppppfVar26 >> 0x20);
    param_2[0x13] = (float ******)0x0;
    param_2[0x14] = (float ******)0x0;
    *pppppppfVar21 = (float ******)0x0;
    uStack_320._0_4_ = fVar54;
    ppppppfStack_108 = (float ******)pppppppfVar37;
    uStack_100 = unaff_x19;
    FUN_1081329dc(pppppppfVar21,0);
    pppppppfVar21 = (float *******)0x0;
    ppppppfVar26 = (float ******)0x0;
    ppppppfStack_260 = (float ******)&ppppppfStack_200;
    ppppppfStack_200 = (float ******)&uStack_1e8;
    ppppppfStack_1f0 = (float ******)0x10;
    ppppppfStack_1f8 = (float ******)0x0;
    ppppppfStack_250 = (float ******)&uStack_320;
    ppppppfStack_258 = (float ******)param_2;
    for (; pppppppfVar37 != unaff_x19; pppppppfVar37 = pppppppfVar37 + 0x12) {
      ppppppfVar34 = pppppppfVar37[5];
      if ((ppppppfVar34 != ppppppfVar26) &&
         (bVar4 = pppppppfVar21 != (float *******)0x0, pppppppfVar21 = pppppppfVar37,
         ppppppfVar26 = ppppppfVar34, bVar4)) {
        func_0x0001081349c4();
      }
      ppppppfVar34 = ppppppfVar26;
    }
    if (pppppppfVar21 != (float *******)0x0) {
      func_0x0001081349c4();
    }
    FUN_108133664(&ppppppfStack_200);
    FUN_108132978(&ppppppfStack_108);
  }
  func_0x000108134a18();
  ppppppfStack_280 = (float ******)0x0;
  uStack_278 = 0;
  uStack_274 = 0;
  bStack_270 = 0;
  cStack_26f = '\0';
  uStack_26e = 0;
  uStack_26c = 0;
  if ((long)param_2[0x16] - (long)param_2[0x15] == 0) {
LAB_108131eb8:
    ppppppfStack_338 = (float ******)0x0;
    pfStack_330 = (float *)0x0;
    pfStack_328 = (float *)0x0;
    pfStack_350 = (float *)0x0;
    pfStack_348 = (float *)0x0;
    pfStack_340 = (float *)0x0;
    uStack_f8 = 2;
    uStack_f6 = 0;
    uStack_f4 = 0;
    uStack_100 = (float *******)0x0;
    pppppppfVar21 = (float *******)param_2[5];
    ppppppfStack_108 = (float ******)&uStack_f0;
    if ((float *******)0x2 < pppppppfVar21) {
      pppppppfVar37 = pppppppfVar21;
      FUN_108133cf0();
      ppppppfVar26 = ppppppfStack_108;
      ppppppfStack_1f8 = (float ******)&ppppppfStack_108;
      ppppppfStack_1f0 = (float ******)pppppppfVar21;
      if (((float *******)ppppppfStack_108 == (float *******)0x0) ||
         (uStack_100 == (float *******)0x0)) {
        ppppppfStack_200 = (float ******)0x0;
        if ((float *******)ppppppfStack_108 != (float *******)0x0) goto LAB_108131f20;
      }
      else {
        func_0x000108134a2c();
        _memmove();
LAB_108131f20:
        ppppppfStack_200 = (float ******)0x0;
        if ((float ******)&uStack_f0 != ppppppfVar26) {
          __ZdlPv(ppppppfVar26);
        }
      }
      uStack_f8 = SUB82(pppppppfVar21,0);
      uStack_f6 = (undefined2)((ulong)pppppppfVar21 >> 0x10);
      uStack_f4 = (undefined4)((ulong)pppppppfVar21 >> 0x20);
      ppppppfStack_108 = (float ******)pppppppfVar37;
      FUN_108133d1c(&ppppppfStack_200);
    }
    ppppppfVar23 = (float ******)0x0;
    pppppppfVar21 = (float *******)0x0;
    ppppppfVar26 = param_2[0x12];
    ppppppfVar30 = param_2[0x13];
    ppppppfStack_260 = (float ******)CONCAT44(ppppppfStack_260._4_4_,*(uint *)param_2);
    ppppppfStack_1f8 = (float ******)&ppppppfStack_260;
    ppppppfStack_1f0 = (float ******)&uStack_320;
    unaff_x19 = &ppppppfStack_108;
    uStack_320._0_4_ = fVar54;
    ppppppfStack_200 = (float ******)&ppppppfStack_108;
    for (; ppppppfVar26 != ppppppfVar30; ppppppfVar26 = ppppppfVar26 + 0x12) {
      pppppppfVar37 = (float *******)ppppppfVar26[5];
      if ((pppppppfVar37 != pppppppfVar21) &&
         (bVar4 = ppppppfVar23 != (float ******)0x0, ppppppfVar23 = ppppppfVar26,
         pppppppfVar21 = pppppppfVar37, bVar4)) {
        func_0x0001081349dc();
      }
      unaff_x19 = pppppppfVar21;
    }
    if (ppppppfVar23 != (float ******)0x0) {
      func_0x0001081349dc();
    }
    pfVar40 = (float *)0x0;
    for (pppppfVar38 = (float *****)0x0;
        pppppfVar16 = (float *****)((long)param_2[0x16] - (long)param_2[0x15] >> 3),
        uVar11 = pppppfVar38 == pppppfVar16, pppppfVar38 < pppppfVar16;
        pppppfVar38 = (float *****)((long)pppppfVar38 + 1)) {
      uVar19 = CONCAT44(uStack_26c,CONCAT22(uStack_26e,CONCAT11(cStack_26f,bStack_270)));
      if (CONCAT44(uStack_274,uStack_278) < uVar19) {
        func_0x000108134988();
        ppppppfVar34 = (float ******)(extraout_x8_02 + 0x38);
        *(undefined1 *)(extraout_x8_02 + 0x18) = 0;
      }
      else {
        lVar25 = (long)(CONCAT44(uStack_274,uStack_278) - (long)ppppppfStack_280) / 0x38;
        ppppppfVar26 = (float ******)(lVar25 + 1);
        if (ppppppfVar34 < ppppppfVar26) goto LAB_1081328fc;
        uVar19 = (long)(uVar19 - (long)ppppppfStack_280) / 0x38;
        ppppppfVar30 = (float ******)(uVar19 * 2);
        if (ppppppfVar30 < ppppppfVar26 || (long)ppppppfVar30 - (long)ppppppfVar26 == 0) {
          ppppppfVar30 = ppppppfVar26;
        }
        if (0x249249249249248 < uVar19) {
          ppppppfVar30 = ppppppfVar34;
        }
        FUN_1081339e8(&ppppppfStack_200,ppppppfVar30,lVar25,&bStack_270);
        func_0x000108134988(ppppppfStack_1f0);
        *(undefined1 *)(extraout_x8_03 + 0x18) = 0;
        ppppppfStack_1f0 = (float ******)(extraout_x8_03 + 0x38);
        func_0x000108134a04();
        ppppppfVar34 = (float ******)CONCAT44(uStack_274,uStack_278);
        FUN_108133a48(&ppppppfStack_200);
      }
      uStack_278 = SUB84(ppppppfVar34,0);
      uStack_274 = (undefined4)((ulong)ppppppfVar34 >> 0x20);
      ppppppfVar34[-6] = (float *****)0x0;
      ppppfStack_360 = (float ****)0x0;
      uStack_358 = (float *****)0x0;
      ppppppfVar34[-5] = (float *****)0x0;
      uVar11 = *(undefined1 *)((long)(param_2[0x15] + (long)pppppfVar38) + 4);
      *(undefined4 *)(ppppppfVar34 + -4) = *(undefined4 *)(param_2[0x15] + (long)pppppfVar38);
      *(undefined1 *)((long)ppppppfVar34 + -0x1c) = uVar11;
      uStack_1d0 = 0;
      ppppppfStack_1f8 = (float ******)0x0;
      ppppppfStack_200 = (float ******)0x0;
      uStack_1e8._0_5_ = 0;
      ppppppfStack_1f0 = (float ******)0x0;
      uStack_1db = 0;
      uStack_1e8._5_3_ = 0;
      uStack_1e0 = 0;
      ppppppfVar30 = param_2[0x13];
      for (ppppppfVar26 = param_2[0x12]; ppppppfVar26 != ppppppfVar30;
          ppppppfVar26 = ppppppfVar26 + 0x12) {
        if (ppppppfVar26[0xe] == pppppfVar38) {
          fVar47 = *(float *)((long)ppppppfStack_108 + ((long)ppppppfVar26[5] * 3 + -2) * 4);
          fVar54 = 0.0;
          if (fVar47 <= -0.0) {
            fVar54 = -fVar47;
          }
          fVar49 = *(float *)((long)ppppppfVar26 + 0x14);
          fVar47 = *(float *)((long)ppppppfStack_108 + ((long)ppppppfVar26[5] * 3 + -3) * 4) +
                   *(float *)(ppppppfVar26 + 2);
          if ((((ulong)ppppppfVar26[0x10] & 1) != 0) && (param_2[0x18] != (float ******)0x0)) {
            unaff_x19 = (float *******)(param_2[0x18] + (long)ppppppfVar26[0xf] * 6);
            if (pfStack_330 < pfStack_328) {
              ppppppfVar23 = unaff_x19[3];
              *pfStack_330 = fVar47;
              pfStack_330[1] = fVar49;
              func_0x000108134844(ppppppfVar23);
              *(undefined1 *)(extraout_x8_04 + 0x4c) = 0;
              pfStack_330 = (float *)(extraout_x8_04 + 0x50);
            }
            else {
              pppppppfVar21 = &ppppppfStack_338;
              FUN_1081336b0(CONCAT44((float)((ulong)ppppppfVar26[4] >> 0x20) -
                                     (float)((ulong)ppppppfVar26[3] >> 0x20),
                                     SUB84(ppppppfVar26[4],0) - SUB84(ppppppfVar26[3],0)),
                            CONCAT44(fVar49,fVar47),pppppppfVar21,
                            ((long)pfStack_330 - (long)ppppppfStack_338) / 0x50 + 1);
              func_0x000108133740(&ppppppfStack_260,pppppppfVar21,
                                  ((long)pfStack_330 - (long)ppppppfStack_338) / 0x50,&pfStack_328);
              ppppppfVar23 = ppppppfStack_250;
              ppppppfVar44 = unaff_x19[3];
              *(float *)ppppppfStack_250 = fVar47;
              *(float *)((long)ppppppfVar23 + 4) = fVar49;
              func_0x000108134844(ppppppfVar44);
              *(undefined1 *)(extraout_x8_05 + 0x4c) = 0;
              unaff_x19 = (float *******)
                          (ppppppfStack_258 +
                          (((long)pfStack_330 - (long)ppppppfStack_338) / -0x50) * 10);
              _memcpy(unaff_x19);
              pfVar22 = pfStack_328;
              pfStack_328 = pfStack_248;
              ppppppfStack_250 = ppppppfStack_338;
              pfStack_248 = pfVar22;
              ppppppfStack_260 = ppppppfStack_338;
              ppppppfStack_258 = ppppppfStack_338;
              ppppppfStack_338 = (float ******)unaff_x19;
              pfStack_330 = (float *)(extraout_x8_05 + 0x50);
              FUN_108133798(&ppppppfStack_260);
              pfStack_330 = (float *)(extraout_x8_05 + 0x50);
            }
          }
          fVar49 = fVar49 + fVar54;
          fVar54 = fVar47;
          if (*(int *)(ppppppfVar26 + 7) - 2U < 3) {
            pppppfVar16 = ppppppfVar26[10];
            func_0x00010812977c();
            if (*(int *)(ppppppfVar26 + 7) == 4) {
              fVar42 = *(float *)(param_2 + 7);
              fVar50 = fVar42 + fVar42;
              fVar42 = (fVar50 + fVar42 * 0.5) - fVar50 * 0.5;
            }
            else {
              fVar50 = *(float *)((long)pppppfVar16 + 0xc);
              fVar42 = *(float *)(pppppfVar16 + 2);
            }
            uStack_3a0 = (ulong)(uint)fVar50;
            uStack_3a8 = *(undefined8 *)((long)ppppppfVar26 + 0x44);
            uStack_3b0 = *(ulong *)((long)ppppppfVar26 + 0x3c);
            bVar6 = *(byte *)((long)ppppppfVar26 + 0x4c);
            unaff_x19 = (float *******)(ulong)bVar6;
            if ((bVar6 & 1) != 0) {
              fVar50 = *(float *)(param_2 + 7);
              fVar42 = (float)uStack_3b0 * fVar50;
              uStack_3b0 = CONCAT44((float)(uStack_3b0 >> 0x20) * fVar50,fVar42);
              fVar52 = (float)((ulong)uStack_3a8 >> 0x20) * fVar50;
              uStack_3a8 = CONCAT44(fVar52,(float)uStack_3a8 * fVar50);
              fVar42 = (fVar52 + *(float *)(pppppfVar16 + 1) * 0.5) - fVar42 * 0.5;
              uStack_3a0 = uStack_3b0;
            }
            pppppppfVar21 = &ppppppfStack_338;
            FUN_108131720();
            fVar50 = *(float *)(ppppppfVar26 + 4);
            fVar52 = *(float *)(ppppppfVar26 + 3);
            *(float *)pppppppfVar21 = fVar47;
            *(float *)((long)pppppppfVar21 + 4) = fVar49 + fVar42;
            *(float *)(pppppppfVar21 + 1) = fVar47 + (fVar50 - fVar52);
            *(float *)((long)pppppppfVar21 + 0xc) = fVar49 + fVar42 + (float)uStack_3a0;
            *(undefined1 *)(pppppppfVar21 + 2) = 1;
            func_0x000108134958();
            *(undefined8 *)((long)pppppppfVar21 + 0x44) = uStack_3a8;
            *(ulong *)((long)pppppppfVar21 + 0x3c) = uStack_3b0;
            *(byte *)((long)pppppppfVar21 + 0x4c) = bVar6;
            if (*(int *)(ppppppfVar26 + 7) == 4) {
              uVar41 = 2;
            }
            else {
              if (*(int *)(ppppppfVar26 + 7) != 3) goto LAB_108132358;
              uVar41 = 1;
            }
            *(undefined4 *)(pppppppfVar21 + 4) = uVar41;
          }
          else if (*(int *)(ppppppfVar26 + 7) == 1) {
            unaff_x19 = (float *******)ppppppfVar26[10];
            func_0x00010812977c();
            pppppppfVar21 = &ppppppfStack_338;
            FUN_108131720();
            fVar50 = *(float *)(ppppppfVar26 + 4);
            fVar42 = *(float *)(ppppppfVar26 + 3);
            fVar51 = *(float *)((long)unaff_x19 + 0x14);
            fVar52 = *(float *)(unaff_x19 + 3);
            *(float *)pppppppfVar21 = fVar47;
            *(float *)((long)pppppppfVar21 + 4) = fVar49 + fVar52;
            *(float *)(pppppppfVar21 + 1) = fVar47 + (fVar50 - fVar42);
            *(float *)((long)pppppppfVar21 + 0xc) = fVar49 + fVar52 + fVar51;
            *(undefined1 *)(pppppppfVar21 + 2) = 0;
            func_0x000108134958();
          }
LAB_108132358:
          fStack_370 = fVar54;
          fVar50 = *(float *)((long)ppppppfVar26 + 0x14);
          fVar54 = fVar50 + ((float)((ulong)ppppppfVar26[4] >> 0x20) -
                            (float)((ulong)ppppppfVar26[3] >> 0x20));
          ppppfVar45 = (float ****)
                       CONCAT44(fVar54,fStack_370 +
                                       (SUB84(ppppppfVar26[4],0) - SUB84(ppppppfVar26[3],0)));
          pfVar22 = &fStack_370;
          fStack_36c = fVar50;
          pppfStack_368 = (float ***)ppppfVar45;
          func_0x00010813fee4(&ppppfStack_360);
          pfVar9 = pfStack_350;
          if (ppppppfVar26[0xb] != (float *****)0x0) {
            if (*(char *)(ppppppfVar26 + 0xc) == '\x01') {
              fVar50 = fVar49 + *(float *)((long)ppppppfVar26 + 0x1c);
              ppppfVar45 = (float ****)
                           (ulong)(uint)(fVar47 + (*(float *)(ppppppfVar26 + 4) -
                                                  *(float *)(ppppppfVar26 + 3)));
              fVar54 = fVar50 + (*(float *)((long)ppppppfVar26 + 0x24) -
                                *(float *)((long)ppppppfVar26 + 0x1c));
            }
            if (pfVar40 < pfStack_340) {
              uVar33 = *(undefined8 *)((long)ppppppfVar26 + 100);
              fVar42 = *(float *)((long)ppppppfVar26 + 0x6c);
              *pfVar40 = fVar47;
              pfVar40[1] = fVar50;
              pfVar40[2] = SUB84(ppppfVar45,0);
              pfVar40[3] = fVar54;
              pppppfVar16 = ppppppfVar26[0xb];
              if (pppppfVar16 != (float *****)0x0) {
                func_0x0001081348d4();
              }
              *(float ******)(pfVar40 + 4) = pppppfVar16;
              *(undefined8 *)(pfVar40 + 6) = uVar33;
              pfVar40[8] = fVar42;
              pfVar1 = pfVar40;
LAB_108132538:
              pfVar40 = pfVar1 + 10;
              pfStack_348 = pfVar40;
              goto LAB_10813253c;
            }
            lVar25 = (long)pfVar40 - (long)pfStack_350;
            uVar19 = lVar25 / 0x28 + 1;
            if (uVar19 < 0x666666666666667) {
              uVar7 = ((long)pfStack_340 - (long)pfStack_350) / 0x28;
              uVar32 = uVar7 * 2;
              if (uVar32 < uVar19 || uVar32 - uVar19 == 0) {
                uVar32 = uVar19;
              }
              if (0x333333333333332 < uVar7) {
                uVar32 = 0x666666666666666;
              }
              if (uVar32 < 0x666666666666667) {
                lVar24 = uVar32 * 0x28;
                __Znwm();
                pfVar1 = (float *)(lVar24 + lVar25);
                uVar33 = *(undefined8 *)((long)ppppppfVar26 + 100);
                fVar42 = *(float *)((long)ppppppfVar26 + 0x6c);
                *pfVar1 = fVar47;
                pfVar1[1] = fVar50;
                pfVar1[2] = SUB84(ppppfVar45,0);
                pfVar1[3] = fVar54;
                pppppfVar16 = ppppppfVar26[0xb];
                if (pppppfVar16 != (float *****)0x0) {
                  (*(code *)(*pppppfVar16)[2])(pppppfVar16);
                }
                pfVar2 = (float *)(lVar24 + uVar32 * 0x28);
                *(float ******)(pfVar1 + 4) = pppppfVar16;
                *(undefined8 *)(pfVar1 + 6) = uVar33;
                pfVar1[8] = fVar42;
                pfVar39 = pfVar1 + (lVar25 / -0x28) * 10;
                pfVar27 = pfVar39;
                pfVar29 = pfVar9;
                while (pfVar35 = pfVar9, pfVar29 != pfVar40) {
                  func_0x000108134970(pfVar27);
                  uVar33 = *(undefined8 *)(extraout_x9 + 0x18);
                  *(undefined4 *)(extraout_x8_06 + 0x20) = *(undefined4 *)(extraout_x9 + 0x20);
                  *(undefined8 *)(extraout_x8_06 + 0x18) = uVar33;
                  pfVar27 = (float *)(extraout_x8_06 + 0x28);
                  pfVar29 = (float *)(extraout_x9 + 0x28);
                }
                for (; pfVar35 != pfVar40; pfVar35 = pfVar35 + 10) {
                  if (*(long *)(pfVar35 + 4) != 0) {
                    func_0x000108134800();
                  }
                }
                pfStack_350 = pfVar39;
                pfStack_340 = pfVar2;
                if (pfVar9 != (float *)0x0) {
                  __ZdlPv(pfVar9);
                }
                goto LAB_108132538;
              }
              func_0x000104bfe188();
            }
            func_0x00010bdb1748();
LAB_1081328f8:
            func_0x00010bdb1718();
            goto LAB_1081328fc;
          }
LAB_10813253c:
          pppppfVar16 = ppppppfVar26[1];
          unaff_x19 = (float *******)((long)param_2[0xf] + (long)*ppppppfVar26 * 0x14);
          if (*(char *)((long)param_2 + 0x31) == '\x01') {
            pppppfVar18 = ppppppfVar34[-2];
            if (pppppfVar18 < ppppppfVar34[-1]) {
              pppppfVar18[3] = (float ****)0x0;
              pppppfVar18[2] = (float ****)0x0;
              pppppfVar18[5] = (float ****)0x0;
              pppppfVar18[4] = (float ****)0x0;
              pppppfVar28 = pppppfVar18 + 6;
              pppppfVar18[1] = (float ****)0x0;
              *pppppfVar18 = (float ****)0x0;
            }
            else {
              lVar25 = (long)pppppfVar18 - (long)ppppppfVar34[-3];
              uVar19 = lVar25 / 0x30 + 1;
              if (0x555555555555555 < uVar19) goto LAB_1081328f8;
              uVar7 = ((long)ppppppfVar34[-1] - (long)ppppppfVar34[-3]) / 0x30;
              uVar32 = uVar7 * 2;
              if (uVar32 < uVar19 || uVar32 - uVar19 == 0) {
                uVar32 = uVar19;
              }
              if (0x2aaaaaaaaaaaaa9 < uVar7) {
                uVar32 = 0x555555555555555;
              }
              func_0x000108133464();
              puVar3 = (undefined8 *)(uVar32 + lVar25);
              puVar3[1] = 0;
              *puVar3 = 0;
              puVar3[3] = 0;
              puVar3[2] = 0;
              puVar3[5] = 0;
              puVar3[4] = 0;
              pppppfVar17 = ppppppfVar34[-3];
              pppppfVar5 = ppppppfVar34[-2];
              lVar25 = (long)pppppfVar5 - (long)pppppfVar17;
              pppppfVar28 = (float *****)(puVar3 + (lVar25 / -0x30) * 6);
              pppppfVar18 = pppppfVar17;
              while (pppppfVar18 != pppppfVar5) {
                func_0x000108134970(pppppfVar28);
                uVar46 = *(undefined8 *)(extraout_x9_00 + 0x20);
                uVar33 = *(undefined8 *)(extraout_x9_00 + 0x18);
                *(undefined8 *)(extraout_x8_07 + 0x28) = *(undefined8 *)(extraout_x9_00 + 0x28);
                *(undefined8 *)(extraout_x8_07 + 0x20) = uVar46;
                *(undefined8 *)(extraout_x8_07 + 0x18) = uVar33;
                *(undefined8 *)(extraout_x9_00 + 0x20) = 0;
                *(undefined8 *)(extraout_x9_00 + 0x28) = 0;
                *(undefined8 *)(extraout_x9_00 + 0x18) = 0;
                pppppfVar28 = (float *****)(extraout_x8_07 + 0x30);
                pppppfVar18 = (float *****)(extraout_x9_00 + 0x30);
              }
              for (; pppppfVar17 != pppppfVar5; pppppfVar17 = pppppfVar17 + 6) {
                func_0x00010812fd1c();
              }
              pppppfVar18 = ppppppfVar34[-3];
              pppppfVar28 = (float *****)(puVar3 + 6);
              ppppppfVar34[-3] = (float *****)(puVar3 + (lVar25 / -0x30) * 6);
              ppppppfVar34[-2] = pppppfVar28;
              ppppppfVar34[-1] = (float *****)(uVar32 + (long)pfVar22 * 0x30);
              if (pppppfVar18 != (float *****)0x0) {
                __ZdlPv();
              }
            }
            ppppppfVar34[-2] = pppppfVar28;
            pppppfVar28[-5] = (float ****)pppfStack_368;
            pppppfVar28[-6] = (float ****)CONCAT44(fStack_36c,fStack_370);
            func_0x0001078d387c(pppppfVar28 + -4,ppppppfVar26 + 10);
            ppppppfStack_260 = (float ******)0x0;
            ppppppfStack_258 = (float ******)0x0;
            ppppppfStack_250 = (float ******)0x0;
            func_0x0001074287b0(&ppppppfStack_260,pppppfVar16);
            pppppppfVar21 = unaff_x19;
            pppppppfVar37 = (float *******)ppppppfStack_260;
            for (lVar25 = (long)pppppfVar16 * 0x14; lVar25 != 0; lVar25 = lVar25 + -0x14) {
              *(uint *)pppppppfVar37 = *(uint *)(pppppppfVar21 + 2) & 0x7fffffff;
              pppppppfVar21 = (float *******)((long)pppppppfVar21 + 0x14);
              pppppppfVar37 = (float *******)((long)pppppppfVar37 + 4);
            }
            func_0x00010814408c(&uStack_320,ppppppfStack_260,
                                (long)ppppppfStack_258 - (long)ppppppfStack_260 >> 2);
            func_0x00010811ddb8(&ppppppfStack_260);
            func_0x00010014c554(pppppfVar28 + -3,&uStack_320);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_320);
          }
          if ((*(char *)((long)param_2 + 0x32) == '\x01') && (((ulong)ppppppfVar26[0xc] & 1) == 0))
          {
            pppppppfVar21 = (float *******)((long)unaff_x19 + (long)pppppfVar16 * 0x14);
            pppppppfVar37 = (float *******)((long)unaff_x19 + -0x14);
            lVar25 = 1;
            if (*(char *)(ppppppfVar26 + 0x11) != '\0') {
              lVar25 = -1;
              unaff_x19 = (float *******)((long)pppppppfVar21 + -0x14);
              pppppppfVar21 = pppppppfVar37;
            }
            pppppppfVar37 = &ppppppfStack_200;
            FUN_1083a82a0(pppppppfVar37,ppppppfVar26[10] + 7,*(undefined4 *)(ppppppfVar26 + 1),
                          &fStack_370);
            if ((((ulong)ppppppfVar26[0x10] & 1) != 0) && (param_2[0x18] != (float ******)0x0)) {
              func_0x0001081349b8();
              fVar47 = fVar47 + *(float *)(extraout_x8_08 + 8);
            }
            ppppppfVar23 = pppppppfVar37[1];
            ppppppfVar44 = *pppppppfVar37;
            for (; unaff_x19 != pppppppfVar21;
                unaff_x19 = (float *******)((long)unaff_x19 + lVar25 * 0x14)) {
              *(undefined2 *)ppppppfVar44 = *(undefined2 *)((long)unaff_x19 + 0xc);
              *ppppppfVar23 =
                   (float *****)
                   CONCAT44(fVar49 + (float)((ulong)*unaff_x19 >> 0x20),fVar47 + SUB84(*unaff_x19,0)
                           );
              fVar47 = fVar47 + *(float *)(unaff_x19 + 1);
              ppppppfVar23 = ppppppfVar23 + 1;
              ppppppfVar44 = (float ******)((long)ppppppfVar44 + 2);
            }
          }
        }
      }
      fVar54 = *(float *)((long)param_2 + 0x14) +
               (*(float *)((long)param_2 + 0x1c) - *(float *)(param_2 + 3));
      if (fVar54 <= uStack_358._4_4_) {
        fVar54 = uStack_358._4_4_;
      }
      uStack_358 = (float *****)CONCAT44(fVar54,(undefined4)uStack_358);
      func_0x000108134a18(*(undefined1 *)((long)param_2 + 0x32));
      if ((extraout_x8_09 & 1) != 0) {
        FUN_1083a7a38(&ppppppfStack_260,&ppppppfStack_200);
        pppppfVar16 = ppppppfVar34[-7];
        ppppppfVar34[-7] = (float *****)ppppppfStack_260;
        if (pppppfVar16 != (float *****)0x0) {
          FUN_10812fee8();
        }
      }
      ppppppfVar34[-5] = uStack_358;
      ppppppfVar34[-6] = (float *****)ppppfStack_360;
      FUN_1083a79f4(&ppppppfStack_200);
    }
    unaff_x19 = (float *******)(ulong)*(byte *)(param_2 + 6);
    uVar53 = *(uint *)(param_2 + 1);
    uVar48 = *(uint *)((long)param_2 + 0xc);
    uVar33 = 0x78;
    __Znwm();
    FUN_10812fa40(uVar53,uVar48);
    *param_1 = uVar33;
    if ((CONCAT44(uStack_f4,CONCAT22(uStack_f6,uStack_f8)) != 0) &&
       (uVar11 = (float ******)&uStack_f0 == ppppppfStack_108, !(bool)uVar11)) {
      __ZdlPv();
    }
    func_0x00010812fd48(&pfStack_350);
    FUN_10812fdf0(&ppppppfStack_338);
    pppppppfVar21 = &ppppppfStack_280;
    FUN_10812fe2c(pppppppfVar21);
    func_0x0001081347d0(uStack_a8);
    if ((bool)uVar11) {
      return pppppppfVar21;
    }
  }
  else {
    ppppppfVar26 = (float ******)((long)param_2[0x16] - (long)param_2[0x15] >> 3);
    if (ppppppfVar26 <= ppppppfVar34) {
      FUN_1081339e8(&ppppppfStack_200,ppppppfVar26,0,&bStack_270);
      func_0x000108134a04();
      FUN_108133a48(&ppppppfStack_200);
      goto LAB_108131eb8;
    }
LAB_1081328fc:
    func_0x00010bdb173c();
  }
  ___stack_chk_fail();
LAB_108132904:
  FUN_1081334e0();
  func_0x0001081347f0();
  FUN_10813292c();
  return unaff_x19;
}



/* Entry: 108132908; end: 10813292b;  */

void FUN_108132908(void)

{
  func_0x0001081347f0();
  FUN_10813292c();
  return;
}



/* Entry: 10813292c; end: 10813293f;  */

void FUN_10813292c(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108132940; end: 108132963;  */

void FUN_108132940(void)

{
  func_0x0001081347f0();
  FUN_108132964();
  return;
}



/* Entry: 108132964; end: 108132977;  */

void FUN_108132964(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108132978; end: 1081329d3;  */

void FUN_108132978(void)

{
  func_0x0001081347f0();
  func_0x00010813299c();
  return;
}



/* Entry: 1081329d4; end: 1081329db;  */

void FUN_1081329d4(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010014c548(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x90;
    func_0x000108132a10();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1081329dc; end: 108132a63;  */

void FUN_1081329dc(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010014c548();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x90;
    func_0x000108132a10();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 108132a64; end: 108132a77;  */

void FUN_108132a64(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108132a78; end: 108132ad3;  */

void FUN_108132a78(void)

{
  func_0x0001081347f0();
  func_0x000108132a9c();
  return;
}



/* Entry: 108132ad4; end: 108132adb;  */

void FUN_108132ad4(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010014c548(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x70;
    func_0x000108132d10();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 108132adc; end: 108132b0f;  */

void FUN_108132adc(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010014c548();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x70;
    func_0x000108132d10();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 108132b10; end: 108132b67;  */

long * FUN_108132b10(long *param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long unaff_x19;
  long *unaff_x20;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  
  if (param_2 < (long *)0x1c71c71c71c71c8) {
    uVar2 = (param_1[2] - *param_1) / 0x90;
    plVar4 = (long *)(uVar2 * 2);
    if (plVar4 < param_2 || (long)plVar4 - (long)param_2 == 0) {
      plVar4 = param_2;
    }
    if (0xe38e38e38e38e2 < uVar2) {
      plVar4 = (long *)0x1c71c71c71c71c7;
    }
    return plVar4;
  }
  func_0x00010bdb1700();
  func_0x00010014c548();
  plVar5 = (long *)*param_1;
  plVar1 = (long *)param_1[1];
  lVar6 = param_2[1] + (((long)plVar1 - (long)plVar5) / -0x90) * 0x90;
  lVar3 = lVar6;
  for (plVar4 = plVar5; plVar4 != plVar1; plVar4 = plVar4 + 0x12) {
    func_0x000108134a2c();
    func_0x0001081348cc();
    lVar7 = plVar4[10];
    *(long *)(lVar3 + 0x58) = plVar4[0xb];
    *(long *)(lVar3 + 0x50) = lVar7;
    plVar4[10] = 0;
    plVar4[0xb] = 0;
    uVar9 = *(undefined8 *)((long)plVar4 + 0x81);
    uVar8 = *(undefined8 *)((long)plVar4 + 0x79);
    lVar11 = plVar4[0xc];
    lVar10 = plVar4[0xf];
    lVar7 = plVar4[0xe];
    *(long *)(lVar3 + 0x68) = plVar4[0xd];
    *(long *)(lVar3 + 0x60) = lVar11;
    *(long *)(lVar3 + 0x78) = lVar10;
    *(long *)(lVar3 + 0x70) = lVar7;
    *(undefined8 *)(lVar3 + 0x81) = uVar9;
    *(undefined8 *)(lVar3 + 0x79) = uVar8;
    lVar3 = lVar3 + 0x90;
  }
  for (; plVar5 != plVar1; plVar5 = plVar5 + 0x12) {
    param_1 = plVar5;
    func_0x000108132a10(plVar5);
  }
  *(long *)(unaff_x19 + 8) = lVar6;
  lVar3 = *unaff_x20;
  *unaff_x20 = lVar6;
  unaff_x20[1] = lVar3;
  func_0x00010813474c();
  return param_1;
}



/* Entry: 108132b68; end: 108132c0b;  */

void FUN_108132b68(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  long *unaff_x20;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  func_0x00010014c548();
  lVar3 = *param_1;
  lVar1 = param_1[1];
  lVar5 = *(long *)(param_2 + 8) + ((lVar1 - lVar3) / -0x90) * 0x90;
  lVar4 = lVar5;
  for (lVar2 = lVar3; lVar2 != lVar1; lVar2 = lVar2 + 0x90) {
    func_0x000108134a2c();
    func_0x0001081348cc();
    uVar6 = *(undefined8 *)(lVar2 + 0x50);
    *(undefined8 *)(lVar4 + 0x58) = *(undefined8 *)(lVar2 + 0x58);
    *(undefined8 *)(lVar4 + 0x50) = uVar6;
    *(undefined8 *)(lVar2 + 0x50) = 0;
    *(undefined8 *)(lVar2 + 0x58) = 0;
    uVar7 = *(undefined8 *)(lVar2 + 0x81);
    uVar6 = *(undefined8 *)(lVar2 + 0x79);
    uVar10 = *(undefined8 *)(lVar2 + 0x60);
    uVar9 = *(undefined8 *)(lVar2 + 0x78);
    uVar8 = *(undefined8 *)(lVar2 + 0x70);
    *(undefined8 *)(lVar4 + 0x68) = *(undefined8 *)(lVar2 + 0x68);
    *(undefined8 *)(lVar4 + 0x60) = uVar10;
    *(undefined8 *)(lVar4 + 0x78) = uVar9;
    *(undefined8 *)(lVar4 + 0x70) = uVar8;
    *(undefined8 *)(lVar4 + 0x81) = uVar7;
    *(undefined8 *)(lVar4 + 0x79) = uVar6;
    lVar4 = lVar4 + 0x90;
  }
  for (; lVar3 != lVar1; lVar3 = lVar3 + 0x90) {
    func_0x000108132a10(lVar3);
  }
  *(long *)(unaff_x19 + 8) = lVar5;
  lVar2 = *unaff_x20;
  *unaff_x20 = lVar5;
  unaff_x20[1] = lVar2;
  func_0x00010813474c();
  return;
}



/* Entry: 108132c0c; end: 108132d7f;  */

void FUN_108132c0c(undefined8 param_1,long param_2)

{
  func_0x000108134834();
  if (param_2 != 0) {
    func_0x000108132c40(param_2);
  }
  func_0x0001081347a4(0x90);
  return;
}



/* Entry: 108132d80; end: 108132e53;  */

undefined8 * FUN_108132d80(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  int *piVar3;
  char cVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  
  piVar3 = (int *)*param_1;
  lVar8 = param_1[1] - (long)piVar3;
  uVar1 = (lVar8 >> 3) + 1;
  if (uVar1 >> 0x3d == 0) {
    uVar7 = param_1[2] - (long)piVar3 >> 2;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7ffffffffffffff7 < (ulong)(param_1[2] - (long)piVar3)) {
      uVar7 = 0x1fffffffffffffff;
    }
    if (uVar7 == 0) {
      lVar5 = 0;
    }
    else {
      unaff_x20 = param_1;
      if (uVar7 >> 0x3d != 0) goto LAB_108132e50;
      lVar5 = uVar7 << 3;
      __Znwm();
    }
    puVar2 = (undefined8 *)(lVar5 + lVar8);
    *puVar2 = *param_2;
    _memcpy(puVar2 + -(lVar8 >> 3),piVar3,lVar8);
    *param_1 = (long)(puVar2 + -(lVar8 >> 3));
    param_1[1] = (long)(puVar2 + 1);
    param_1[2] = lVar5 + uVar7 * 8;
    if (piVar3 != (int *)0x0) {
      __ZdlPv(piVar3);
    }
    return puVar2 + 1;
  }
  func_0x00010bdb170c();
LAB_108132e50:
  func_0x000104bfe188();
  func_0x00010014c548();
  cVar4 = *(char *)((long)param_1 + 4);
  if (cVar4 == *(char *)((long)param_2 + 4) && cVar4 != '\0') {
    if ((int)*unaff_x20 != *piVar3) {
      return (undefined8 *)0x0;
    }
  }
  else if (cVar4 != *(char *)((long)param_2 + 4)) {
    return (undefined8 *)0x0;
  }
  plVar6 = unaff_x20 + 1;
  FUN_108132f14(plVar6,piVar3 + 2);
  if ((int)plVar6 == 0) {
    return (undefined8 *)0x0;
  }
  if ((((*(float *)(unaff_x20 + 3) == (float)piVar3[6]) &&
       (*(float *)((long)unaff_x20 + 0x1c) == (float)piVar3[7])) &&
      (*(float *)(unaff_x20 + 4) == (float)piVar3[8])) &&
     (((*(float *)((long)unaff_x20 + 0x24) == (float)piVar3[9] &&
       ((char)unaff_x20[5] == (char)piVar3[10])) &&
      ((*(char *)((long)unaff_x20 + 0x29) == *(char *)((long)piVar3 + 0x29) &&
       (*(char *)((long)unaff_x20 + 0x2a) == *(char *)((long)piVar3 + 0x2a))))))) {
    return (undefined8 *)
           (ulong)(*(char *)((long)unaff_x20 + 0x2b) == *(char *)((long)piVar3 + 0x2b));
  }
  return (undefined8 *)0x0;
}



/* Entry: 108132e54; end: 108132f13;  */

bool FUN_108132e54(long param_1,long param_2)

{
  char cVar1;
  int *piVar2;
  int *unaff_x19;
  int *unaff_x20;
  
  func_0x00010014c548();
  cVar1 = *(char *)(param_1 + 4);
  if (cVar1 == *(char *)(param_2 + 4) && cVar1 != '\0') {
    if (*unaff_x20 != *unaff_x19) {
      return false;
    }
  }
  else if (cVar1 != *(char *)(param_2 + 4)) {
    return false;
  }
  piVar2 = unaff_x20 + 2;
  FUN_108132f14(piVar2,unaff_x19 + 2);
  if ((int)piVar2 == 0) {
    return false;
  }
  if (((((float)unaff_x20[6] == (float)unaff_x19[6]) && ((float)unaff_x20[7] == (float)unaff_x19[7])
       ) && ((float)unaff_x20[8] == (float)unaff_x19[8])) &&
     ((((float)unaff_x20[9] == (float)unaff_x19[9] && ((char)unaff_x20[10] == (char)unaff_x19[10]))
      && ((*(char *)((long)unaff_x20 + 0x29) == *(char *)((long)unaff_x19 + 0x29) &&
          (*(char *)((long)unaff_x20 + 0x2a) == *(char *)((long)unaff_x19 + 0x2a))))))) {
    return *(char *)((long)unaff_x20 + 0x2b) == *(char *)((long)unaff_x19 + 0x2b);
  }
  return false;
}



/* Entry: 108132f14; end: 108132f5f;  */

bool FUN_108132f14(float *param_1,float *param_2)

{
  if (((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) {
    return param_1[3] == param_2[3];
  }
  return false;
}



/* Entry: 108132f60; end: 108132fe7;  */

long FUN_108132f60(undefined8 param_1)

{
  undefined8 *unaff_x19;
  long lVar1;
  long *unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [16];
  undefined8 *puStack_48;
  
  func_0x00010014c548();
  FUN_108132fe8();
  FUN_108133084(auStack_58,param_1,(unaff_x20[1] - *unaff_x20) / 0x30,unaff_x20 + 2);
  uVar6 = unaff_x19[3];
  uVar5 = unaff_x19[2];
  uVar3 = unaff_x19[5];
  uVar2 = unaff_x19[4];
  uVar4 = *unaff_x19;
  puStack_48[1] = unaff_x19[1];
  *puStack_48 = uVar4;
  puStack_48[3] = uVar6;
  puStack_48[2] = uVar5;
  puStack_48[5] = uVar3;
  puStack_48[4] = uVar2;
  func_0x00010813494c(puStack_48 + 6);
  FUN_108133030();
  lVar1 = unaff_x20[1];
  FUN_108133104(auStack_58);
  return lVar1;
}



/* Entry: 108132fe8; end: 10813302f;  */

long * FUN_108132fe8(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  
  if (param_2 < (long *)0x555555555555556) {
    uVar1 = (param_1[2] - *param_1) / 0x30;
    plVar2 = (long *)(uVar1 * 2);
    if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
      plVar2 = param_2;
    }
    if (0x2aaaaaaaaaaaaa9 < uVar1) {
      plVar2 = (long *)0x555555555555555;
    }
    return plVar2;
  }
  FUN_108133078();
  func_0x00010014c548();
  func_0x00010813492c();
  func_0x00010813481c();
  *(undefined8 *)(unaff_x19 + 8) = unaff_x21;
  unaff_x20[1] = *unaff_x20;
  *unaff_x20 = *(undefined8 *)(unaff_x19 + 8);
  func_0x00010813474c();
  return param_1;
}



/* Entry: 108133030; end: 108133077;  */

void FUN_108133030(void)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  
  func_0x00010014c548();
  func_0x00010813492c();
  func_0x00010813481c();
  *(undefined8 *)(unaff_x19 + 8) = unaff_x21;
  unaff_x20[1] = *unaff_x20;
  *unaff_x20 = *(undefined8 *)(unaff_x19 + 8);
  func_0x00010813474c();
  return;
}



/* Entry: 108133078; end: 108133083;  */

void FUN_108133078(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  _abort();
  func_0x000108134834();
  if (param_2 != 0) {
    func_0x0001081330b8(param_4);
  }
  func_0x0001081347a4(0x30);
  return;
}



/* Entry: 108133084; end: 1081330d7;  */

void FUN_108133084(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000108134834();
  if (param_2 != 0) {
    func_0x0001081330b8(param_4);
  }
  func_0x0001081347a4(0x30);
  return;
}



/* Entry: 1081330d8; end: 108133103;  */

long * FUN_1081330d8(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 < 0x555555555555556) {
    plVar1 = (long *)(param_2 * 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bfe188();
  FUN_108133130();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 108133104; end: 10813312f;  */

long * FUN_108133104(long *param_1)

{
  FUN_108133130();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 108133130; end: 108133153;  */

void FUN_108133130(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -0x30;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 108133154; end: 108133203;  */

void FUN_108133154(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  FUN_108133204(lVar1);
  *(long *)(param_1 + 8) = lVar1 + 0x70;
  return;
}



/* Entry: 108133204; end: 108133247;  */

void FUN_108133204(undefined8 *param_1)

{
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
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0x3f800000;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  return;
}



/* Entry: 108133248; end: 10813329f;  */

long * FUN_108133248(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long unaff_x19;
  undefined8 *unaff_x20;
  long lVar3;
  
  if (param_2 < (long *)0x24924924924924a) {
    uVar1 = (param_1[2] - *param_1) / 0x70;
    plVar2 = (long *)(uVar1 * 2);
    if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
      plVar2 = param_2;
    }
    if (0x124924924924923 < uVar1) {
      plVar2 = (long *)0x249249249249249;
    }
    return plVar2;
  }
  FUN_1081332f8();
  func_0x00010014c548();
  plVar2 = param_1 + 2;
  lVar3 = param_2[1] + ((param_1[1] - *param_1) / -0x70) * 0x70;
  FUN_108133388(plVar2,*param_1,param_1[1],lVar3);
  *(long *)(unaff_x19 + 8) = lVar3;
  unaff_x20[1] = *unaff_x20;
  *unaff_x20 = *(undefined8 *)(unaff_x19 + 8);
  FUN_10813474c();
  return plVar2;
}



/* Entry: 1081332a0; end: 1081332f7;  */

void FUN_1081332a0(long *param_1,long param_2)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  long lVar1;
  
  func_0x00010014c548();
  lVar1 = *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x70) * 0x70;
  FUN_108133388(param_1 + 2,*param_1,param_1[1],lVar1);
  *(long *)(unaff_x19 + 8) = lVar1;
  unaff_x20[1] = *unaff_x20;
  *unaff_x20 = *(undefined8 *)(unaff_x19 + 8);
  FUN_10813474c();
  return;
}



/* Entry: 1081332f8; end: 108133303;  */

void FUN_1081332f8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  _abort();
  func_0x000108134834();
  if (param_2 != 0) {
    func_0x000108133338(param_4);
  }
  func_0x0001081347a4(0x70);
  return;
}



/* Entry: 108133304; end: 108133357;  */

void FUN_108133304(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000108134834();
  if (param_2 != 0) {
    func_0x000108133338(param_4);
  }
  func_0x0001081347a4(0x70);
  return;
}



/* Entry: 108133358; end: 108133387;  */

void FUN_108133358(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (param_2 < (undefined8 *)0x24924924924924a) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)((long)param_2 * 0x70);
    return;
  }
  func_0x000104bfe188();
  for (puVar1 = param_2; puVar1 != param_3; puVar1 = puVar1 + 0xe) {
    uVar2 = *puVar1;
    param_4[1] = puVar1[1];
    *param_4 = uVar2;
    *puVar1 = 0;
    puVar1[1] = 0;
    _memcpy(param_4 + 2,puVar1 + 2,0x49);
    uVar2 = puVar1[0xc];
    param_4[0xd] = puVar1[0xd];
    param_4[0xc] = uVar2;
    param_4 = param_4 + 0xe;
  }
  for (; param_2 != param_3; param_2 = param_2 + 0xe) {
    func_0x000108132d10(param_2);
  }
  return;
}



/* Entry: 108133388; end: 1081333fb;  */

void FUN_108133388(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  for (puVar1 = param_2; puVar1 != param_3; puVar1 = puVar1 + 0xe) {
    uVar2 = *puVar1;
    param_4[1] = puVar1[1];
    *param_4 = uVar2;
    *puVar1 = 0;
    puVar1[1] = 0;
    _memcpy(param_4 + 2,puVar1 + 2,0x49);
    uVar2 = puVar1[0xc];
    param_4[0xd] = puVar1[0xd];
    param_4[0xc] = uVar2;
    param_4 = param_4 + 0xe;
  }
  for (; param_2 != param_3; param_2 = param_2 + 0xe) {
    func_0x000108132d10(param_2);
  }
  return;
}



/* Entry: 1081333fc; end: 108133427;  */

long * FUN_1081333fc(long *param_1)

{
  FUN_108133428();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 108133428; end: 10813342f;  */

void FUN_108133428(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010014c548(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x70;
    func_0x000108132d10();
  }
  return;
}



/* Entry: 108133430; end: 10813349f;  */

void FUN_108133430(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010014c548();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x70;
    func_0x000108132d10();
  }
  return;
}



/* Entry: 1081334a0; end: 1081334df;  */

void FUN_1081334a0(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010014c548();
  for (lVar1 = *(long *)(param_1 + 8); lVar1 != unaff_x19; lVar1 = lVar1 + -0x38) {
    func_0x000107807a88(lVar1 + -8);
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1081334e0; end: 1081334eb;  */

void FUN_1081334e0(void)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  
  _abort();
  func_0x00010014c548();
  func_0x00010813492c();
  func_0x00010813481c();
  *(undefined8 *)(unaff_x19 + 8) = unaff_x21;
  unaff_x20[1] = *unaff_x20;
  *unaff_x20 = *(undefined8 *)(unaff_x19 + 8);
  func_0x00010813474c();
  return;
}



/* Entry: 1081334ec; end: 108133533;  */

void FUN_1081334ec(void)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  
  func_0x00010014c548();
  func_0x00010813492c();
  func_0x00010813481c();
  *(undefined8 *)(unaff_x19 + 8) = unaff_x21;
  unaff_x20[1] = *unaff_x20;
  *unaff_x20 = *(undefined8 *)(unaff_x19 + 8);
  func_0x00010813474c();
  return;
}



/* Entry: 108133534; end: 108133587;  */

void FUN_108133534(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000108134834();
  if (param_2 != 0) {
    func_0x000108133568(param_4);
  }
  func_0x0001081347a4(0x14);
  return;
}



/* Entry: 108133588; end: 1081335af;  */

long * FUN_108133588(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 < 0xccccccccccccccd) {
    plVar1 = (long *)(param_2 * 0x14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bfe188();
  FUN_1081335dc();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1081335b0; end: 1081335db;  */

long * FUN_1081335b0(long *param_1)

{
  FUN_1081335dc();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}


