/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1081418ec; end: 108141993;  */

undefined8 FUN_1081418ec(undefined8 *param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  int iVar1;
  undefined8 extraout_x8;
  undefined8 auStack_38 [2];
  undefined8 uStack_28;
  
  func_0x000108142014();
  uStack_28 = extraout_x8;
  FUN_108141e0c(auStack_38);
  *param_1 = auStack_38[0];
  func_0x000108141fec(uStack_28);
  if ((bool)in_ZR) {
    return param_2;
  }
  ___stack_chk_fail();
  if ((bRam0000000113729cf8 & 1) == 0) {
    iVar1 = 0x13729cf8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(0x113729cf0,&UNK_10f47beeb);
      ___cxa_guard_release(0x113729cf8);
    }
  }
  return 0x113729cf0;
}



/* Entry: 108141994; end: 108141997;  */

undefined8 * FUN_108141994(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a27258;
  func_0x000108141abc(param_1 + 2);
  return param_1;
}



/* Entry: 108141998; end: 1081419ab;  */

void FUN_108141998(void)

{
  FUN_1081419c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1081419ac; end: 1081419c7;  */

void FUN_1081419ac(long *param_1)

{
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010814205c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))();
    return;
  }
  return;
}



/* Entry: 1081419c8; end: 108141b37;  */

undefined8 * FUN_1081419c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a27258;
  func_0x000108141abc(param_1 + 2);
  return param_1;
}



/* Entry: 108141b38; end: 108141b43;  */

void FUN_108141b38(long param_1)

{
  _abort();
  func_0x00010814202c();
  if (param_1 != 0) {
    FUN_108141b68();
  }
  return;
}



/* Entry: 108141b44; end: 108141b67;  */

void FUN_108141b44(long param_1)

{
  func_0x00010814202c();
  if (param_1 != 0) {
    FUN_108141b68();
  }
  return;
}



/* Entry: 108141b68; end: 108141b9b;  */

void FUN_108141b68(int *param_1)

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
      FUN_10815b164();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108141b9c; end: 108141bc7;  */

undefined8 * FUN_108141b9c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a27350;
  func_0x0001080e7680(param_1 + 1);
  return param_1;
}



/* Entry: 108141bc8; end: 108141bdb;  */

void FUN_108141bc8(void)

{
  FUN_108141b9c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108141bdc; end: 108141c2f;  */

void FUN_108141bdc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  
  puVar4 = (undefined8 *)0x10;
  __Znwm();
  lVar5 = *(long *)(param_1 + 8);
  *puVar4 = &PTR_FUN_110a27350;
  if ((lVar5 != 0) && (*(long *)(lVar5 + 0x10) != 0)) {
    plVar1 = (long *)(*(long *)(lVar5 + 0x10) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar4[1] = lVar5;
  return;
}



/* Entry: 108141c30; end: 108141c7b;  */

void FUN_108141c30(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 8);
  *param_2 = &PTR_FUN_110a27350;
  if ((lVar4 != 0) && (*(long *)(lVar4 + 0x10) != 0)) {
    plVar1 = (long *)(*(long *)(lVar4 + 0x10) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_2[1] = lVar4;
  return;
}



/* Entry: 108141c7c; end: 108141d57;  */

long * FUN_108141c7c(long *param_1,long *param_2,long *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  long lVar4;
  long *plVar5;
  undefined8 extraout_x8;
  long lVar6;
  long *plVar7;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  plVar5 = &lStack_50;
  func_0x000108142014();
  lVar6 = *param_3;
  uStack_38 = extraout_x8;
  if (lVar6 == 0) {
    *param_1 = 0;
  }
  else {
    plVar7 = (long *)param_2[1];
    func_0x0001003a8364();
    lVar4 = lVar6;
    _strlen(lVar6);
    func_0x0001003a8480(&lStack_50,param_2,lVar6,lVar4);
    (**(code **)(*plVar7 + 0x48))(&lStack_48,plVar7);
    func_0x0001003a8cb8(lStack_50);
    in_ZR = lStack_48 == 1;
    if ((bool)in_ZR) {
      lVar6 = *(long *)(lStack_40 + 0x58);
      if (lVar6 != 0) {
        piVar1 = (int *)(lVar6 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
    }
    else {
      lVar6 = 0;
    }
    *param_1 = lVar6;
    param_2 = &lStack_48;
    func_0x00010812cb9c(param_2);
    param_3 = plVar5;
  }
  func_0x000108141fec(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    FUN_10812092c(param_3,&PTR_DAT_110a273c0);
    param_2 = param_2 + 1;
    if ((int)param_3 == 0) {
      param_2 = (long *)0x0;
    }
    return param_2;
  }
  return param_2;
}



/* Entry: 108141d58; end: 108141d8f;  */

long FUN_108141d58(long param_1,undefined8 param_2)

{
  FUN_10812092c(param_2,&PTR_DAT_110a273c0);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 108141d90; end: 108141d9b;  */

undefined ** FUN_108141d90(void)

{
  return &PTR_DAT_110a273c0;
}



/* Entry: 108141d9c; end: 108141e0b;  */

void FUN_108141d9c(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined4 *extraout_x8;
  undefined4 extraout_w9;
  
  func_0x00010814202c();
  if (param_1 != 0) {
    do {
      func_0x000108142038();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = extraout_w9;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
      func_0x000108142000();
    }
  }
  return;
}



/* Entry: 108141e0c; end: 108141e2b;  */

void FUN_108141e0c(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_108141e2c(&uStack_11,param_1);
  return;
}



/* Entry: 108141e2c; end: 108141e9b;  */

void FUN_108141e2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  undefined1 *puStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined1 auStack_40 [16];
  long lStack_30;
  undefined8 uStack_28;
  
  puVar5 = auStack_40;
  func_0x000108142014();
  uStack_28 = extraout_x8;
  FUN_108141eb8(auStack_40,1);
  FUN_108141f0c(lStack_30,param_3);
  lVar6 = lStack_30;
  lStack_30 = 0;
  FUN_108141e9c(param_1,lVar6 + 0x18);
  func_0x000108141fdc();
  func_0x000108141fec(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  *extraout_x8_00 = puVar5;
  extraout_x8_00[1] = lVar6;
  puVar2 = (undefined1 *)0x0;
  if (puVar5 != (undefined1 *)0x0) {
    puVar2 = puVar5 + 8;
  }
  if ((puVar2 != (undefined1 *)0x0) &&
     ((*(long *)(puVar2 + 8) == 0 || (*(long *)(*(long *)(puVar2 + 8) + 8) == -1)))) {
    pcStack_48 = FUN_108141e9c;
    lStack_58 = extraout_x8_00[1];
    if (lStack_58 != 0) {
      plVar1 = (long *)(lStack_58 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    puStack_60 = puVar5;
    puStack_50 = &stack0xfffffffffffffff0;
    func_0x0001003a8180(puVar2,&puStack_60);
    func_0x0001003a824c(&puStack_60);
    return;
  }
  return;
}



/* Entry: 108141e9c; end: 108141eb7;  */

void FUN_108141e9c(long *param_1,long param_2,long param_3)

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
    func_0x0001003a824c(&lStack_20);
    return;
  }
  return;
}



/* Entry: 108141eb8; end: 108141edf;  */

long FUN_108141eb8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_108141ee0();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 108141ee0; end: 108141f0b;  */

undefined8 * FUN_108141ee0(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x19999999999999a) {
    puVar1 = (undefined8 *)(param_2 * 0xa0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bfe188();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110a273e0;
  FUN_10814174c(param_1 + 3);
  return param_1;
}



/* Entry: 108141f0c; end: 108141f3b;  */

undefined8 * FUN_108141f0c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110a273e0;
  FUN_10814174c(param_1 + 3);
  return param_1;
}



/* Entry: 108141f3c; end: 108141f3f;  */

void FUN_108141f3c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a273e0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108141f40; end: 108141f53;  */

void FUN_108141f40(void)

{
  func_0x000108141f64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108141f54; end: 108141f73;  */

void FUN_108141f54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108141f5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 108141f74; end: 108141fdb;  */

void FUN_108141f74(long param_1,long param_2,undefined8 param_3)

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
    func_0x0001003a824c(&uStack_20);
    return;
  }
  return;
}



/* Entry: 108141fdc; end: 10814206b;  */

void FUN_108141fdc(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10814206c; end: 10814489f;  */

void FUN_10814206c(float param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  
  FUN_10836412c(param_1 * 57.295776,auStack_48);
  FUN_108363f68(param_2,auStack_48);
  return;
}



/* Entry: 1081448a0; end: 1081448b3;  */

undefined * FUN_1081448a0(undefined *param_1)

{
  if (param_1 != (undefined *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__malloc_11034c5e8)();
    return param_1;
  }
  return &UNK_10def18dc;
}



/* Entry: 1081448b4; end: 1081448ef;  */

undefined * FUN_1081448b4(undefined *param_1,undefined *param_2)

{
  if (param_1 == &UNK_10def18dc) {
    if (param_2 != (undefined *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__malloc_11034c5e8)();
      return param_2;
    }
    return &UNK_10def18dc;
  }
  if (param_2 != (undefined *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__realloc_11034ca10)();
    return param_1;
  }
  _free();
  return &UNK_10def18dc;
}



/* Entry: 1081448f0; end: 108144907;  */

void FUN_1081448f0(undefined *param_1)

{
  if (param_1 != &UNK_10def18dc) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)();
    return;
  }
  return;
}



/* Entry: 108144908; end: 108144933;  */

void FUN_108144908(void)

{
  undefined4 uStack_14;
  
  uStack_14 = 0;
  FUN_108144934(0,0,&uStack_14);
  return;
}



/* Entry: 108144934; end: 108144acb;  */

long FUN_108144934(uint param_1,uint param_2,int *param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  
  if (param_3 == (int *)0x0) {
    return 0;
  }
  if (0 < *param_3) {
    return 0;
  }
  if ((int)(param_2 | param_1) < 0) {
    iVar4 = 1;
LAB_1081449e0:
    *param_3 = iVar4;
    return 0;
  }
  lVar1 = 1;
  _calloc(1,0x1d0);
  if (lVar1 == 0) {
    iVar4 = 7;
    goto LAB_1081449e0;
  }
  if ((int)param_1 < 1) {
    *(undefined1 *)(lVar1 + 0x68) = 1;
  }
  else {
    lVar2 = lVar1 + 0x38;
    func_0x000108147aa0(lVar2,lVar1 + 0x1c,1);
    if ((int)lVar2 != 0) {
      uVar3 = lVar1 + 0x40;
      func_0x000108147aa0(uVar3,lVar1 + 0x20,1);
      if ((uVar3 & 1) != 0) goto LAB_1081449f0;
    }
    *param_3 = 7;
  }
LAB_1081449f0:
  if ((int)param_2 < 1) {
    *(undefined1 *)(lVar1 + 0x69) = 1;
  }
  else if (param_2 == 1) {
    *(undefined4 *)(lVar1 + 0x2c) = 0xc;
  }
  else {
    uVar3 = lVar1 + 0x58;
    func_0x000108147a58(uVar3,lVar1 + 0x2c);
    if ((uVar3 & 1) == 0) {
      *param_3 = 7;
      goto LAB_108144a38;
    }
  }
  if (*param_3 < 1) {
    return lVar1;
  }
LAB_108144a38:
  FUN_108144acc(lVar1);
  return 0;
}



/* Entry: 108144acc; end: 108144b4b;  */

void FUN_108144acc(undefined8 *param_1)

{
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  *param_1 = 0;
  if (param_1[7] != 0) {
    FUN_1081448f0();
  }
  if (param_1[8] != 0) {
    FUN_1081448f0();
  }
  if (param_1[9] != 0) {
    FUN_1081448f0();
  }
  if (param_1[10] != 0) {
    FUN_1081448f0();
  }
  if (param_1[0xb] != 0) {
    FUN_1081448f0();
  }
  if (param_1[0xc] != 0) {
    FUN_1081448f0();
  }
  if (param_1[0x36] != 0) {
    FUN_1081448f0();
  }
  if (param_1 != (undefined8 *)&UNK_10def18dc) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)();
    return;
  }
  return;
}



/* Entry: 108144b4c; end: 108144b97;  */

undefined1 FUN_108144b4c(long param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  int *piVar6;
  
  uVar5 = 0;
  uVar2 = *(uint *)(param_1 + 200);
  uVar3 = (ulong)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU));
  piVar6 = *(int **)(param_1 + 0xd0);
  while ((uVar4 = uVar3, uVar3 != uVar5 && (uVar4 = uVar5, *piVar6 <= param_2))) {
    uVar5 = uVar5 + 1;
    piVar6 = piVar6 + 2;
  }
  iVar1 = (int)uVar4;
  if ((int)(uVar2 - 1) <= (int)uVar4) {
    iVar1 = uVar2 - 1;
  }
  return (char)(*(int **)(param_1 + 0xd0))[(long)iVar1 * 2 + 1];
}



/* Entry: 108144b98; end: 108146b8f;  */

/* WARNING: Possible PIC construction at 0x000108145e50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108145c78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108145634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108145c7c) */
/* WARNING: Removing unreachable block (ram,0x000108145e54) */
/* WARNING: Removing unreachable block (ram,0x000108145638) */
/* WARNING: Type propagation algorithm not settling */

void FUN_108144b98(uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5,
                  uint *param_6)

{
  ushort *puVar1;
  byte *pbVar2;
  uint *******pppppppuVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  undefined *puVar8;
  undefined4 uVar9;
  byte bVar10;
  ushort uVar11;
  int iVar12;
  uint **ppuVar13;
  undefined1 in_ZR;
  bool bVar14;
  undefined1 uVar15;
  byte bVar16;
  uint uVar17;
  uint *puVar18;
  uint *puVar19;
  int iVar20;
  uint uVar21;
  uint *puVar22;
  long lVar23;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  int extraout_w8_02;
  int extraout_w8_03;
  int extraout_w8_04;
  int extraout_w8_05;
  uint uVar24;
  uint uVar25;
  ulong extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  undefined8 *puVar26;
  undefined **ppuVar27;
  long lVar28;
  ulong extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  ulong uVar29;
  uint uVar30;
  uint uVar31;
  long extraout_x9;
  long lVar32;
  long extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  byte *pbVar33;
  ulong uVar34;
  uint extraout_w10;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x10_01;
  ulong extraout_x10_02;
  ulong extraout_x10_03;
  ulong extraout_x10_04;
  ulong extraout_x10_05;
  ulong extraout_x10_06;
  ulong extraout_x10_07;
  ulong extraout_x10_08;
  uint extraout_w11;
  long lVar35;
  uint *extraout_x11;
  uint *extraout_x11_00;
  undefined2 *extraout_x11_01;
  undefined2 *extraout_x11_02;
  undefined2 *puVar36;
  undefined2 *extraout_x11_03;
  undefined2 *extraout_x11_04;
  undefined2 *extraout_x11_05;
  undefined2 *extraout_x11_06;
  undefined2 *extraout_x11_07;
  uint *puVar37;
  uint extraout_w12;
  int iVar38;
  uint extraout_w12_00;
  uint extraout_w12_01;
  ulong extraout_x12;
  uint *extraout_x12_00;
  uint *extraout_x12_01;
  uint *puVar39;
  uint *extraout_x12_02;
  uint *extraout_x12_03;
  uint *extraout_x12_04;
  uint *extraout_x12_05;
  uint *extraout_x12_06;
  uint *extraout_x12_07;
  uint *puVar40;
  int extraout_w13;
  int extraout_w13_00;
  uint *extraout_x13;
  uint *extraout_x13_00;
  uint *extraout_x13_01;
  uint *extraout_x13_02;
  uint *extraout_x13_03;
  uint *extraout_x13_04;
  uint *extraout_x13_05;
  uint *extraout_x13_06;
  uint *extraout_x13_07;
  uint *extraout_x13_08;
  uint *extraout_x13_09;
  uint *extraout_x13_10;
  uint *puVar41;
  uint *extraout_x13_11;
  uint *extraout_x13_12;
  uint *extraout_x13_13;
  uint *extraout_x13_14;
  ulong uVar42;
  int iVar43;
  uint extraout_w14;
  uint *extraout_x14;
  uint *extraout_x14_00;
  undefined4 uVar44;
  uint *puVar45;
  uint *puVar46;
  uint *puVar47;
  uint *puVar48;
  uint *unaff_x23;
  uint uVar49;
  uint *puVar50;
  undefined8 *puVar51;
  uint uVar52;
  undefined *puVar53;
  uint *unaff_x27;
  ulong unaff_x28;
  byte *pbVar54;
  uint *******pppppppuVar55;
  uint *puVar56;
  undefined8 uVar57;
  uint ******in_stack_00000050;
  byte abStack_1014 [100];
  undefined1 *puStack_fb0;
  undefined8 *puStack_fa8;
  undefined *puStack_fa0;
  uint *puStack_f98;
  long lStack_f90;
  uint uStack_f84;
  uint *puStack_f80;
  int iStack_f74;
  undefined *puStack_f70;
  long lStack_f68;
  uint auStack_f60 [125];
  undefined8 uStack_d6c;
  undefined2 uStack_d62;
  byte bStack_d60;
  undefined1 uStack_d5f;
  undefined1 auStack_d5e [2];
  uint uStack_d5c;
  undefined2 auStack_56e [135];
  uint *puStack_460;
  uint *puStack_458;
  uint uStack_44c;
  uint *puStack_448;
  uint uStack_43c;
  uint *puStack_438;
  int iStack_42c;
  int iStack_428;
  uint uStack_424;
  undefined8 uStack_420;
  uint *puStack_418;
  uint *******pppppppuStack_410;
  uint *puStack_408;
  uint auStack_400 [126];
  uint auStack_208 [130];
  
  func_0x000108147ab4();
  pppppppuVar55 = &stack0x00000050;
  ppuVar13 = &puStack_460;
  func_0x000108147acc();
  puVar18 = param_1;
  puVar48 = param_2;
  puVar50 = param_4;
  puVar40 = param_5;
  if ((param_6 == (uint *)0x0) || (in_ZR = *param_6 == 0, unaff_x27 = param_6, 0 < (int)*param_6))
  goto LAB_108144ea8;
  if ((param_1 == (uint *)0x0) || (param_2 == (uint *)0x0)) {
LAB_108144d8c:
    uVar21 = 1;
LAB_108144d90:
    *param_6 = uVar21;
    goto LAB_108144ea8;
  }
  iVar20 = (int)param_3;
  in_ZR = iVar20 == -1;
  if (iVar20 < -1) goto LAB_108144d8c;
  uVar21 = (uint)param_4;
  unaff_x23 = param_4;
  if (-1 < (char)((byte)param_4 + 0x82)) goto LAB_108144d8c;
  if (iVar20 == -1) {
    puVar18 = param_2;
    func_0x00010814b068();
    param_3 = puVar18;
  }
  in_ZR = param_1[0x21] == 3;
  uVar24 = (uint)param_3;
  if ((bool)in_ZR) {
    param_1[0x21] = 0;
    if (uVar24 == 0) {
      puVar50 = param_4;
      func_0x000108147a28(param_1,param_2,0);
      puVar18 = (uint *)0x0;
      puVar48 = param_2;
    }
    else {
      puVar18 = (uint *)((-((ulong)param_3 >> 0x1f & 1) & 0xfffffff800000000 |
                         ((ulong)param_3 & 0xffffffff) << 3) - (long)(int)uVar24);
      FUN_1081448a0();
      if (puVar18 == (uint *)0x0) {
        *param_6 = 7;
      }
      else {
        uVar25 = param_1[0x22];
        if ((uVar25 & 1) != 0) {
          param_1[0x22] = uVar25 & 0xfffffffc | 2;
        }
        puVar50 = (uint *)(ulong)(uVar21 & 1);
        puVar48 = param_2;
        func_0x000108147a28(param_1,param_2,param_3);
        in_ZR = *param_6 == 0;
        if ((int)*param_6 < 1) {
          pppppppuVar3 = (uint *******)(puVar18 + (int)uVar24);
          param_4 = (uint *)((long)pppppppuVar3 + (long)(int)uVar24 * 2);
          puVar40 = param_1;
          FUN_108147fec(param_1,param_6);
          uVar31 = param_1[5];
          _memcpy(param_4,puVar40,(long)(int)uVar31);
          uVar30 = param_1[0x31];
          puStack_408 = (uint *)CONCAT44(puStack_408._4_4_,param_1[0x2e]);
          puVar50 = (uint *)0x2;
          puVar48 = param_1;
          puVar40 = param_6;
          pppppppuStack_410 = pppppppuVar3;
          func_0x000108148e80(param_1,pppppppuVar3,param_3);
          puStack_418 = (uint *)CONCAT44(puStack_418._4_4_,(int)puVar48);
          FUN_10814875c(param_1,puVar18,param_6);
          unaff_x28 = (ulong)uVar31;
          if ((int)*param_6 < 1) {
            param_1[0x21] = 5;
            param_1[0x22] = uVar25;
            uVar25 = param_1[0x1a];
            *(byte *)(param_1 + 0x1a) = 0;
            puVar50 = (uint *)(ulong)(uVar21 & 1 ^ 1);
            uStack_424 = uVar30;
            uStack_420 = (ulong)uVar31;
            func_0x000108147a28(param_1,pppppppuStack_410,(ulong)puStack_418 & 0xffffffff);
            *(byte *)(param_1 + 0x1a) = (byte)uVar25;
            FUN_108148184(param_1,param_6);
            if ((int)*param_6 < 1) {
              iVar20 = 0;
              uVar21 = param_1[0x4a];
              uVar29 = (ulong)uVar21;
              puVar51 = *(undefined8 **)(param_1 + 0x4c);
              uVar25 = 0;
              for (uVar42 = 0; uVar42 != (uVar21 & ((int)uVar21 >> 0x1f ^ 0xffffffffU));
                  uVar42 = uVar42 + 1) {
                puVar48 = (uint *)((long)puVar51 + uVar42 * 0xc);
                uVar31 = puVar48[1];
                iVar38 = uVar31 - uVar25;
                if (1 < iVar38) {
                  uVar34 = (ulong)*puVar48 & 0x7fffffff;
                  iVar43 = (int)uVar34;
                  do {
                    puVar48 = puVar18 + uVar34 + 1;
                    do {
                      uVar34 = uVar34 + 1;
                      if ((uint)(iVar43 + iVar38) <= uVar34) goto LAB_1081457f4;
                      puVar45 = puVar48 + -1;
                      uVar25 = *puVar48;
                      iVar12 = uVar25 - *puVar45;
                      iVar7 = -iVar12;
                      if (-1 < iVar12) {
                        iVar7 = iVar12;
                      }
                    } while ((iVar7 == 1) &&
                            (puVar48 = puVar48 + 1,
                            *(byte *)((long)param_4 + (long)(int)uVar25) ==
                            *(byte *)((long)param_4 + (long)(int)*puVar45)));
                    iVar20 = iVar20 + 1;
                  } while( true );
                }
LAB_1081457f4:
                uVar25 = uVar31;
              }
              if (iVar20 != 0) {
                puVar50 = (uint *)(ulong)((iVar20 + uVar21) * 0xc);
                puVar48 = param_1 + 0x16;
                func_0x000108144a50(puVar48,param_1 + 0xb,
                                    (long)(char)*(byte *)((long)param_1 + 0x69));
                if ((int)puVar48 == 0) goto LAB_108144d30;
                if (uVar21 == 1) {
                  puVar26 = *(undefined8 **)(param_1 + 0x16);
                  uVar57 = *puVar51;
                  *(undefined4 *)(puVar26 + 1) = *(undefined4 *)(puVar51 + 1);
                  *puVar26 = uVar57;
                }
                puVar51 = *(undefined8 **)(param_1 + 0x16);
                *(undefined8 **)(param_1 + 0x4c) = puVar51;
                param_1[0x4a] = param_1[0x4a] + iVar20;
              }
              while (0 < (int)uVar29) {
                uVar42 = uVar29 - 1;
                iVar38 = (int)uVar42;
                if (iVar38 == 0) {
                  uVar34 = 0;
                  iVar43 = *(int *)((long)puVar51 + 4);
                }
                else {
                  uVar34 = uVar42 & 0xffffffff;
                  iVar43 = *(int *)((long)puVar51 + uVar34 * 0xc + 4) -
                           *(int *)((long)puVar51 + uVar29 * 0xc + -0x14);
                }
                puVar48 = (uint *)((long)puVar51 + uVar34 * 0xc);
                uVar21 = *puVar48;
                lVar28 = (long)iVar38;
                if (1 < iVar43) {
                  uVar31 = (uint)((ulong)uVar21 & 0x7fffffff);
                  uVar30 = (iVar43 + uVar31) - 1;
                  uVar25 = uVar30;
                  if (0x7fffffff < uVar21) {
                    uVar25 = uVar31;
                  }
                  if (0x7fffffff < uVar21) {
                    uVar31 = uVar30;
                  }
                  lVar32 = 1;
                  if (-1 < (int)uVar21) {
                    lVar32 = -1;
                  }
                  uVar29 = (ulong)(int)uVar25;
                  uVar34 = (ulong)uVar25;
                  do {
                    puVar50 = puVar18 + uVar29;
                    puVar40 = puVar18 + lVar32 + uVar29;
                    lVar35 = 0;
                    do {
                      lVar23 = lVar35;
                      iVar43 = (int)uVar34;
                      if ((long)(int)uVar31 - uVar29 == lVar23) {
                        if (iVar20 != 0) {
                          lVar28 = (long)iVar20 + (long)iVar38;
                          uVar57 = *(undefined8 *)puVar48;
                          puVar26 = (undefined8 *)((long)puVar51 + lVar28 * 0xc);
                          *(uint *)(puVar26 + 1) = puVar48[2];
                          *puVar26 = uVar57;
                        }
                        uVar25 = puVar18[iVar43];
                        if ((int)puVar18[(int)uVar31] <= (int)puVar18[iVar43]) {
                          uVar25 = puVar18[(int)uVar31];
                        }
                        goto LAB_108145a30;
                      }
                      uVar25 = puVar50[lVar23];
                      iVar12 = uVar25 - puVar40[lVar23];
                      iVar7 = -iVar12;
                      if (-1 < iVar12) {
                        iVar7 = iVar12;
                      }
                      if (iVar7 != 1) break;
                      bVar16 = *(byte *)((long)param_4 + (long)(int)puVar40[lVar23]);
                      param_6 = (uint *)(ulong)bVar16;
                      lVar35 = lVar23 + lVar32;
                    } while (*(byte *)((long)param_4 + (long)(int)uVar25) == bVar16);
                    uVar30 = puVar18[iVar43];
                    if ((int)uVar25 <= (int)puVar18[iVar43]) {
                      uVar30 = uVar25;
                    }
                    puVar40 = (uint *)((long)puVar51 + (long)(iVar20 + iVar38) * 0xc);
                    uVar17 = puVar48[1];
                    uVar49 = puVar48[2];
                    *puVar40 = uVar30 | (uVar21 >> 0x1f ^
                                        (uint)*(byte *)((long)param_4 + (long)(int)uVar30)) << 0x1f;
                    puVar40[1] = uVar17;
                    uVar25 = ((int)uVar29 - iVar43) + (int)lVar23;
                    uVar30 = -uVar25;
                    if (-1 < (int)uVar25) {
                      uVar30 = uVar25;
                    }
                    puVar40[2] = uVar49 & 10;
                    puVar48[1] = uVar17 + ~uVar30;
                    puVar48[2] = puVar48[2] & (uVar49 & 10 ^ 0xffffffff);
                    iVar20 = iVar20 + -1;
                    uVar29 = lVar32 + uVar29 + lVar23;
                    uVar34 = uVar29;
                  } while( true );
                }
                if (iVar20 != 0) {
                  lVar28 = (long)iVar20 + (long)iVar38;
                  uVar57 = *(undefined8 *)puVar48;
                  puVar26 = (undefined8 *)((long)puVar51 + lVar28 * 0xc);
                  *(uint *)(puVar26 + 1) = puVar48[2];
                  *puVar26 = uVar57;
                }
                uVar25 = puVar18[(ulong)uVar21 & 0x7fffffff];
LAB_108145a30:
                *(uint *)((long)puVar51 + lVar28 * 0xc) =
                     uVar25 | (uVar21 >> 0x1f ^ (uint)*(byte *)((long)param_4 + (long)(int)uVar25))
                              << 0x1f;
                uVar29 = uVar42;
              }
            }
LAB_108144d30:
            *(byte *)((long)param_1 + 0x8d) = *(byte *)((long)param_1 + 0x8d) ^ 1;
            unaff_x28 = uStack_420;
            uVar30 = uStack_424;
          }
          *(uint **)(param_1 + 2) = param_2;
          uVar21 = (uint)unaff_x28;
          param_1[4] = uVar24;
          param_1[5] = uVar21;
          param_1[0x2e] = (uint)puStack_408;
          if ((int)param_1[8] <= (int)uVar21) {
            uVar21 = param_1[8];
          }
          puVar48 = param_4;
          _memcpy(*(undefined8 *)(param_1 + 0x1e),param_4,(long)(int)uVar21);
          param_1[0x31] = uVar30;
          in_ZR = param_1[0x4a] == 1;
          if (1 < (int)param_1[0x4a]) {
            param_1[0x2e] = 2;
          }
        }
      }
    }
    FUN_1081448f0();
    param_1[0x21] = 3;
    unaff_x23 = param_4;
    unaff_x27 = param_6;
    goto LAB_108144ea8;
  }
  param_1[0] = 0;
  param_1[1] = 0;
  *(uint **)(param_1 + 2) = param_2;
  param_1[5] = uVar24;
  param_1[6] = uVar24;
  param_1[4] = uVar24;
  *(byte *)((long)param_1 + 0x8d) = (byte)param_4;
  param_1[0x2e] = uVar21 & 1;
  param_1[0x32] = 1;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  *(bool *)((long)param_1 + 0x8e) = 0xfd < uVar21;
  func_0x000108147ae0();
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  if (uVar24 != 0) {
    puVar18 = *(uint **)(param_1 + 0x14);
    param_1[0x4a] = 0xffffffff;
    unaff_x23 = param_1 + 0x36;
    in_ZR = puVar18 == (uint *)0x0;
    puVar48 = unaff_x23;
    if (!(bool)in_ZR) {
      puVar48 = puVar18;
    }
    *(uint **)(param_1 + 0x34) = puVar48;
    puVar18 = param_1 + 0xe;
    puVar48 = param_1 + 7;
    puVar50 = param_3;
    func_0x000108144a50(puVar18,puVar48,(long)(char)(byte)param_1[0x1a]);
    if ((int)puVar18 != 0) {
      puStack_408 = *(uint **)(param_1 + 0xe);
      *(uint **)(param_1 + 0x1c) = *(uint **)(param_1 + 0xe);
      bVar16 = *(byte *)((long)param_1 + 0x8d);
      if (bVar16 < 0xfe) {
        uStack_420 = (ulong)uStack_420._4_4_ << 0x20;
      }
      else {
        uStack_420 = CONCAT44(uStack_420._4_4_,(uint)(param_1[0x21] - 5 < 2));
      }
      puStack_438 = param_6;
      pppppppuStack_410 = (uint *******)CONCAT44(pppppppuStack_410._4_4_,param_1[0x22]);
      if ((param_1[0x22] >> 2 & 1) != 0) {
        param_1[5] = 0;
      }
      unaff_x27 = *(uint **)(param_1 + 2);
      uVar21 = param_1[4];
      unaff_x28 = (ulong)uVar21;
      uStack_44c = bVar16 & 1;
      uVar42 = (ulong)uStack_44c;
      uStack_43c = (uint)bVar16;
      puStack_448 = param_5;
      puStack_460 = param_1 + 0x14;
      puStack_458 = unaff_x23;
      if (uStack_43c < 0xfe) {
        uVar29 = 0;
        *(uint *)(*(long *)(param_1 + 0x34) + 4) = uStack_43c;
        uVar42 = 10;
      }
      else {
        *(uint *)(*(long *)(param_1 + 0x34) + 4) = uStack_44c;
        uVar24 = param_1[0x26];
        if ((int)uVar24 < 1) {
          uVar29 = 1;
        }
        else {
          uVar42 = 0;
          lVar28 = *(long *)(param_1 + 0x24);
          param_3 = (uint *)0xd800;
          puVar18 = (uint *)0xa;
          while( true ) {
            iVar20 = (int)uVar42;
            uVar25 = (uint)puVar18;
            if ((int)uVar24 <= iVar20) break;
            uVar42 = (long)iVar20 + 1;
            uVar11 = *(ushort *)(lVar28 + (long)iVar20 * 2);
            puVar48 = (uint *)(ulong)uVar11;
            if ((uVar11 & 0xfc00) == 0xd800 && (uint)uVar42 != uVar24) {
              uVar30 = (uint)*(ushort *)(lVar28 + uVar42 * 2);
              bVar14 = (uVar30 & 0xfc00) == 0xdc00;
              uVar31 = (uint)uVar11;
              if (bVar14) {
                uVar31 = (uint)uVar11 * 0x400 + -0x35fdc00 + uVar30;
              }
              puVar48 = (uint *)(ulong)uVar31;
              uVar31 = (uint)uVar42;
              if (bVar14) {
                uVar31 = iVar20 + 2;
              }
              uVar42 = (ulong)uVar31;
            }
            puVar45 = param_1;
            func_0x000108146e18();
            uVar31 = (uint)puVar45;
            if ((uVar25 & 0xff) == 10) {
              puVar18 = (uint *)0xa;
              if ((uVar31 & 0xff) < 0xe && (1 << (ulong)(uVar31 & 0x1f) & 0x2003U) != 0) {
                puVar18 = puVar45;
              }
            }
            else {
              uVar30 = 10;
              if ((uVar31 & 0xff) != 7) {
                uVar30 = uVar25;
              }
              puVar18 = (uint *)(ulong)uVar30;
            }
          }
          if ((uVar25 & 0xff) == 10) {
            uVar29 = 1;
            uVar42 = (ulong)uStack_44c;
          }
          else {
            uVar42 = (ulong)uStack_44c;
            uVar29 = 0;
            if (((ulong)puVar18 & 0xff) == 0) {
              *(undefined4 *)(*(long *)(param_1 + 0x34) + 4) = 0;
            }
            else {
              *(undefined4 *)(*(long *)(param_1 + 0x34) + 4) = 1;
            }
          }
        }
      }
      param_6 = (uint *)0x0;
      uVar24 = 0;
      puVar53 = (undefined *)0x0;
      puStack_418 = (uint *)((long)puStack_408 + -2);
      uStack_424 = 0xffffffff;
      uVar34 = 0xffffffff;
LAB_108145048:
      do {
        iStack_42c = 0;
        if ((int)uVar42 == 1) {
          iStack_42c = (uint)uStack_420;
        }
        iStack_428 = (int)uVar42;
LAB_108145058:
        do {
          uVar31 = (uint)uVar29;
          uVar25 = (uint)uVar34;
          param_4 = (uint *)(ulong)(uVar31 == 2 && (int)uVar25 < 0x7e);
          do {
            while( true ) {
              puVar45 = puStack_438;
              puVar56 = puStack_448;
              iVar20 = (int)puVar53;
              if ((int)uVar21 <= iVar20) {
                uVar30 = 2;
                if ((int)uVar25 < 0x7e) {
                  uVar30 = uVar31;
                }
                if (0x7c < (int)uVar25) {
                  uVar25 = 0x7d;
                }
                puVar40 = (uint *)&UNK_10def1924;
                goto joined_r0x0001081453cc;
              }
              puVar53 = (undefined *)((long)iVar20 + 1);
              uVar11 = *(ushort *)((long)unaff_x27 + (long)iVar20 * 2);
              param_3 = (uint *)(ulong)uVar11;
              if ((uVar11 & 0xfc00) == 0xd800 && (uint)puVar53 != uVar21) {
                uVar17 = (uint)*(ushort *)((long)unaff_x27 + (long)puVar53 * 2);
                bVar14 = (uVar17 & 0xfc00) == 0xdc00;
                uVar30 = (uint)uVar11;
                if (bVar14) {
                  uVar30 = (uint)uVar11 * 0x400 + -0x35fdc00 + uVar17;
                }
                param_3 = (uint *)(ulong)uVar30;
                uVar30 = (uint)puVar53;
                if (bVar14) {
                  uVar30 = iVar20 + 2;
                }
                puVar53 = (undefined *)(ulong)uVar30;
              }
              puVar18 = param_1;
              puVar48 = param_3;
              func_0x000108146e18();
              uVar30 = (uint)param_6 | (uint)(1L << ((ulong)puVar18 & 0x3f));
              uVar52 = (uint)puVar53;
              lVar28 = (long)(int)uVar52 + -1;
              uVar17 = (uint)puVar18;
              *(byte *)((long)puStack_408 + lVar28) = (byte)puVar18;
              uVar49 = (uint)param_3;
              if (0xffff < uVar49) {
                uVar30 = uVar30 | 0x40000;
                *(byte *)((long)puStack_418 + (long)(int)uVar52) = 0x12;
              }
              param_6 = (uint *)(ulong)uVar30;
              if ((((uint)pppppppuStack_410 >> 1 & 1) != 0) &&
                 ((uVar49 - 0x202a < 5 || uVar49 - 0x2066 < 4) || uVar49 >> 2 == 0x803)) {
                uVar24 = uVar24 + 1;
              }
              uVar6 = uVar17 & 0xff;
              if (((ulong)puVar18 & 0xff) == 0) {
                if (uVar31 == 2) {
                  uVar42 = 0;
                  uVar31 = uVar30 | 0x100000;
                  if (0x7d < (int)uVar25) {
                    uVar31 = uVar30;
                  }
                  param_6 = (uint *)(ulong)uVar31;
                  uVar29 = 3;
                }
                else {
                  uVar42 = 0;
                  if (uVar31 == 1) {
                    func_0x000108147a00();
                    *(undefined4 *)(extraout_x8_00 + -4) = 0;
                    uVar42 = extraout_x10;
                    uVar29 = extraout_x12;
                  }
                }
                goto LAB_108145048;
              }
              if ((uVar17 & 0xff) == 0xd || (uVar17 & 0xff) == 1) {
                if (uVar31 == 2) {
                  if ((int)uVar25 < 0x7e) {
                    *(byte *)((long)puStack_408 + (long)(int)auStack_208[(int)uVar25]) = 0x15;
                    param_6 = (uint *)(ulong)(uVar30 | 0x200000);
                  }
                  uVar29 = 3;
                }
                else if (uVar31 == 1) {
                  uVar29 = 0;
                  *(undefined4 *)(*(long *)(param_1 + 0x34) + (long)(int)param_1[0x32] * 8 + -4) = 1
                  ;
                }
                uVar25 = (uint)lVar28;
                if (uVar6 != 0xd) {
                  uVar25 = uStack_424;
                }
                uStack_424 = uVar25;
                uVar42 = 1;
                goto LAB_108145048;
              }
              if (uVar6 - 0x13 < 3) {
                uVar34 = (long)(int)uVar25 + 1;
                if ((int)uVar25 < 0x7d) {
                  auStack_208[uVar34] = (uint)lVar28;
                  auStack_400[uVar34] = uVar31;
                }
                uVar29 = 3;
                if (uVar6 == 0x13) {
                  *(byte *)((long)puStack_408 + lVar28) = 0x14;
                  uVar29 = 2;
                }
                goto LAB_108145058;
              }
              if ((uVar17 & 0xff) == 7) break;
              if ((uVar17 & 0xff) == 0x16) {
                uVar17 = uVar30 | 0x100000;
                if (uVar31 != 2 || (int)uVar25 >= 0x7e) {
                  uVar17 = uVar30;
                }
                param_6 = (uint *)(ulong)uVar17;
                if (-1 < (int)uVar25) {
                  if ((int)uVar25 < 0x7e) {
                    uVar29 = (ulong)auStack_400[uVar34 & 0xffffffff];
                  }
                  uVar34 = (ulong)(uVar25 - 1);
                  goto LAB_108145058;
                }
              }
            }
            bVar14 = (int)uVar52 < (int)uVar21;
            if (uVar49 != 0xd || (int)uVar21 <= (int)uVar52) goto LAB_1081451a8;
          } while (*(short *)((long)unaff_x27 + (long)(int)uVar52 * 2) == 10);
          bVar14 = true;
LAB_1081451a8:
          puVar18 = *(uint **)(param_1 + 0x34);
          uVar25 = param_1[0x32];
          puVar18[(long)(int)uVar25 * 2 + -2] = uVar52;
          if (iStack_42c != 0) {
            puVar18[(long)(int)uVar25 * 2 + -1] = 1;
          }
          if (((byte)param_1[0x22] >> 2 & 1) != 0) {
            param_1[5] = uVar52;
            param_1[0x6e] = uVar24;
          }
        } while (!bVar14);
        param_1[0x32] = uVar25 + 1;
        in_ZR = puVar18 == puStack_458;
        puVar18 = puStack_460;
        if ((bool)in_ZR) {
          in_ZR = uVar25 == 10;
          if (9 < (int)uVar25) {
            puVar48 = param_1 + 10;
            puVar50 = (uint *)0xa0;
            func_0x000108144a50(puStack_460,puVar48,1);
            if ((int)puVar18 == 0) goto LAB_108145e64;
            *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_1 + 0x14);
            puVar48 = puStack_458;
            _memcpy(*(undefined8 *)(param_1 + 0x14),puStack_458,0x50);
          }
        }
        else {
          puVar50 = (uint *)(ulong)((uVar25 + 1) * 0x10);
          puVar48 = param_1 + 10;
          func_0x000108147a58();
          if ((int)puVar18 == 0) {
LAB_108145e64:
            uVar21 = 7;
            param_6 = unaff_x27;
            goto LAB_108145cc4;
          }
          *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_1 + 0x14);
        }
        if (uStack_43c < 0xfe) {
          uVar29 = 0;
          *(uint *)(*(long *)(param_1 + 0x34) + (long)(int)param_1[0x32] * 8 + -4) =
               (uint)*(byte *)((long)param_1 + 0x8d);
          uVar34 = 0xffffffff;
          goto LAB_108145058;
        }
        func_0x000108147a00();
        uVar42 = (ulong)uStack_44c;
        *(uint *)(extraout_x8_01 + -4) = uStack_44c;
        uVar34 = 0xffffffff;
        uVar29 = 1;
      } while( true );
    }
    uVar21 = 7;
    goto LAB_108144d90;
  }
  in_ZR = uVar21 == 0xfe;
  if (0xfd < uVar21) {
    *(byte *)((long)param_1 + 0x8d) = (byte)extraout_x8;
    *(byte *)((long)param_1 + 0x8e) = 0;
  }
  param_1[0x2f] = *(uint *)(extraout_x9 + (extraout_x8 & 0xffffffff) * 4);
  param_1[0x4a] = 0;
  param_1[0x32] = 0;
LAB_108144e80:
  param_1[0x26] = 0;
  param_1[0x2a] = 0;
  *(uint **)param_1 = param_1;
  unaff_x23 = param_4;
  unaff_x27 = param_6;
LAB_108144ea8:
  func_0x000108147a70();
  if ((bool)in_ZR) {
    return;
  }
  puVar56 = (uint *)0x108145e70;
  ___stack_chk_fail();
  puVar45 = puVar48;
  param_4 = unaff_x23;
SUB_108145e70:
  func_0x000108147ab4();
  puVar48 = puVar18;
  puVar37 = puVar45;
  pppppppuStack_410 = pppppppuVar55;
  puStack_408 = puVar56;
  func_0x000108147acc();
  param_6 = *(uint **)(puVar48 + 0x1c);
  param_3 = *(uint **)(puVar48 + 0x1e);
  puVar53 = *(undefined **)(puVar48 + 2);
  lStack_f68 = (long)(int)puVar48[5];
  uVar21 = puVar48[0x2f];
  puVar46 = (uint *)(ulong)uVar21;
  if ((*(byte *)((long)puVar48 + 0x8e) == 0) || (func_0x000108147a4c(), 0 < extraout_w8_03)) {
    puVar48 = (uint *)(ulong)*(byte *)((long)puVar18 + 0x8d);
  }
  else {
    func_0x000108147a34();
  }
  uVar24 = (uint)puVar50;
  uVar31 = (uint)puVar40;
  param_1 = (uint *)0x0;
  puVar18[0x51] = 0;
  uVar15 = *puVar45 == 0;
  puVar47 = puVar48;
  puVar22 = param_4;
  if ((int)*puVar45 < 1) {
    param_1 = puVar46;
    FUN_108146e64();
    uVar24 = (uint)puVar50;
    uVar31 = (uint)puVar40;
    uVar15 = 0;
    if ((int)param_1 == 2) {
      if ((int)puVar18[0x21] < 2) {
        if ((uVar21 & 0x79d800) != 0) {
          puVar22 = auStack_f60;
          puStack_fa0 = puVar53;
          func_0x000108147a88();
          puVar45 = (uint *)0x0;
          unaff_x28 = 0;
          iStack_f74 = 0;
          puStack_f70 = (undefined *)((ulong)puStack_f70 & 0xffffffff00000000);
          puVar46 = (uint *)0x0;
          func_0x000108147a40();
          auStack_56e[0] = (short)puVar48;
          puStack_f98 = param_6;
          lStack_f90 = (long)&uStack_d6c + 4;
          puStack_fb0 = auStack_d5e;
          puStack_fa8 = &uStack_d6c;
          unaff_x27 = (uint *)(ulong)((uint)lStack_f68 &
                                     ((int)(uint)lStack_f68 >> 0x1f ^ 0xffffffffU));
          puVar36 = auStack_56e;
          puStack_f80 = unaff_x27;
          puVar39 = extraout_x12_00;
          puVar41 = extraout_x13_08;
          while( true ) {
            uVar24 = (uint)puVar50;
            uVar31 = (uint)puVar40;
            puVar53 = &UNK_10def18fb;
            uVar21 = (uint)unaff_x28;
            if (puVar45 == unaff_x27) break;
            bVar16 = *(byte *)((long)param_6 + (long)puVar45);
            puVar22 = (uint *)(ulong)bVar16;
            uVar24 = (uint)puVar39;
            uVar30 = (uint)puVar47;
            uVar31 = (uint)puVar48;
            uVar25 = (uint)puVar41;
            iVar20 = (int)puVar46;
            uVar44 = SUB84(puVar45,0);
            bVar10 = (byte)puVar48;
            puVar19 = puVar47;
            switch(bVar16) {
            case 7:
              if ((*(byte *)((long)puVar18 + 0x8e) == 0) ||
                 ((long)puVar45 < (long)**(int **)(puVar18 + 0x34))) {
                bVar16 = *(byte *)((long)puVar18 + 0x8d);
              }
              else {
                puVar47 = puVar18;
                uStack_f84 = uVar25;
                FUN_108144b4c(puVar18,puVar45);
                bVar16 = (byte)puVar47;
                puVar41 = (uint *)(ulong)uStack_f84;
                puVar36 = auStack_56e;
                puVar22 = puVar39;
                unaff_x27 = puStack_f80;
              }
              unaff_x28 = (ulong)(uVar21 | 0x80);
              *(byte *)((long)param_3 + (long)puVar45) = bVar16;
              puVar37 = (uint *)((long)puVar45 + 1);
              if (((int)puVar37 < (int)lStack_f68) &&
                 ((*(short *)(puStack_fa0 + (long)puVar45 * 2) != 0xd ||
                  (*(short *)(puStack_fa0 + (long)puVar37 * 2) != 10)))) {
                if ((*(byte *)((long)puVar18 + 0x8e) == 0) ||
                   (func_0x000108147a4c(), (int)puVar37 < extraout_w8_05)) {
                  puVar48 = (uint *)(ulong)*(byte *)((long)puVar18 + 0x8d);
                }
                else {
                  puVar48 = puVar18;
                  FUN_108144b4c();
                }
                puVar46 = (uint *)0x0;
                func_0x000108147a40();
                iStack_f74 = 0;
                auStack_56e[0] = (short)puVar48;
                uStack_d62 = 0;
                bStack_d60 = (byte)puVar48;
                uStack_d5c = (uint)puVar48 & 1;
                auStack_d5e[0] = (undefined1)uStack_d5c;
                uStack_d5f = auStack_d5e[0];
                *puStack_fa8 = 0;
                puVar19 = puVar48;
                puVar36 = extraout_x11_06;
                puVar39 = extraout_x12_06;
                puVar41 = extraout_x13_13;
              }
              break;
            default:
              uVar15 = (uVar30 & 0x7f) == (uVar31 & 0x7f);
              bVar16 = (byte)puVar47;
              uStack_f84 = uVar24;
              if (!(bool)uVar15) {
                puVar22 = (uint *)(ulong)(uVar30 & 0xff);
                puVar56 = (uint *)(ulong)(uVar31 & 0xff);
                puVar50 = puVar22;
                FUN_1081473c0(auStack_f60,(ulong)puStack_f70 & 0xffffffff);
                uVar15 = (int)(char)bVar16 == 0xffffffff;
                puVar8 = &UNK_10def1934;
                if (0x7fffffff < (uint)(int)(char)bVar16) {
                  puVar8 = &UNK_10def192c;
                }
                unaff_x28 = (ulong)(uVar21 | *(uint *)(puVar8 + (ulong)(uVar30 & 1) * 4) |
                                   0x80000000);
              }
              *(byte *)((long)param_3 + (long)puVar45) = bVar16;
              iVar20 = (int)auStack_f60;
              puVar37 = puVar45;
              FUN_108146f54();
              uVar24 = (uint)puVar50;
              uVar31 = (uint)puVar40;
              if (iVar20 == 0) {
                param_1 = (uint *)0xffffffff;
                unaff_x27 = puVar41;
                goto LAB_108146530;
              }
              unaff_x28 = (ulong)((uint)unaff_x28 |
                                 (uint)(1L << ((ulong)*(byte *)((long)param_6 + (long)puVar45) &
                                              0x3f)));
              puVar36 = auStack_56e;
              puVar39 = (uint *)(ulong)uStack_f84;
              puVar48 = puVar47;
              unaff_x27 = puStack_f80;
              break;
            case 0xb:
            case 0xc:
            case 0xe:
            case 0xf:
              unaff_x28 = (ulong)(uVar21 | 0x40000);
              *(byte *)((long)param_3 + (long)puVar45) = bVar10;
              uVar31 = (uint)bVar16;
              uVar21 = (uVar30 & 0x7f) + 1 | 1;
              if (uVar31 - 0xb < 2) {
                uVar21 = uVar30 + 2 & 0x7e;
              }
              if (((uVar21 < 0x7e) && (uVar25 == 0)) && (uVar24 == 0)) {
                puVar41 = (uint *)0x0;
                if (uVar31 == 0xf || uVar31 == 0xc) {
                  uVar21 = uVar21 | 0xffffff80;
                }
                puVar19 = (uint *)(ulong)uVar21;
                puVar46 = (uint *)(ulong)(iVar20 + 1);
                puVar36[(long)puVar46] = (ushort)uVar21 & 0xff;
code_r0x00010814602c:
                puStack_f70 = (undefined *)CONCAT44(puStack_f70._4_4_,uVar44);
              }
              else {
                if (uVar25 == 0) {
                  uVar24 = uVar24 + 1;
                }
                puVar39 = (uint *)(ulong)uVar24;
              }
              break;
            case 0x10:
              unaff_x28 = (ulong)(uVar21 | 0x40000);
              *(byte *)((long)param_3 + (long)puVar45) = bVar10;
              if (uVar25 == 0) {
                if (uVar24 == 0) {
                  if ((iVar20 != 0) && ((ushort)puVar36[(long)puVar46] < 0x100)) {
                    func_0x000108147a40();
                    puVar46 = (uint *)(ulong)(iVar20 - 1);
                    puVar19 = (uint *)(ulong)(ushort)extraout_x11_05[(long)puVar46];
                    puVar36 = extraout_x11_05;
                    puVar39 = extraout_x12_05;
                    puVar41 = extraout_x13_12;
                    puVar48 = extraout_x14;
                    goto code_r0x00010814602c;
                  }
                  func_0x000108147a40();
                  puVar36 = extraout_x11_07;
                  puVar39 = extraout_x12_07;
                  puVar41 = extraout_x13_14;
                  puVar48 = extraout_x14_00;
                }
                else {
                  puVar41 = (uint *)0x0;
                  puVar39 = (uint *)(ulong)(uVar24 - 1);
                }
              }
              break;
            case 0x12:
              *(byte *)((long)param_3 + (long)puVar45) = bVar10;
              unaff_x28 = (ulong)(uVar21 | 0x40000);
              break;
            case 0x14:
            case 0x15:
              func_0x000108147ae0(uVar30 & 1);
              uVar21 = *(uint *)(extraout_x9_00 + (extraout_x8_04 & 0xffffffff) * 4) | uVar21;
              uVar24 = uVar30 & 0x7f;
              *(byte *)((long)param_3 + (long)puVar45) = (byte)uVar24;
              if (uVar24 == (extraout_w14 & 0x7f)) {
                uVar21 = uVar21 | 0x400;
                puVar36 = extraout_x11_01;
                puVar39 = extraout_x12_01;
                iVar38 = extraout_w13;
              }
              else {
                func_0x000108147aec();
                FUN_1081473c0();
                puVar36 = auStack_56e;
                uVar21 = uVar21 | 0x80000400;
                puVar39 = extraout_x12_02;
                param_6 = puStack_f98;
                iVar38 = extraout_w13_00;
              }
              unaff_x27 = puStack_f80;
              uVar25 = uVar30 + 2 & 0x7e;
              if (bVar16 != 0x14) {
                uVar25 = uVar24 + 1 | 1;
              }
              puVar19 = (uint *)(ulong)uVar25;
              if (((uVar25 < 0x7e) && (iVar38 == 0)) && ((int)puVar39 == 0)) {
                if ((int)puVar18[0x51] <= iStack_f74) {
                  puVar18[0x51] = iStack_f74 + 1;
                }
                func_0x000108147a40();
                puVar46 = (uint *)(ulong)(iVar20 + 1);
                extraout_x11_02[(long)puVar46] = (ushort)puVar19 | 0x100;
                uVar21 = uVar21 | (uint)(1L << ((ulong)puVar22 & 0x3f));
                lVar28 = lStack_f90 + (long)(int)uStack_d6c * 0x10;
                uStack_d6c = CONCAT44(uStack_d6c._4_4_,(int)uStack_d6c + 1);
                *(undefined2 *)(lVar28 + 0x16) = *(undefined2 *)(lVar28 + 6);
                *(undefined2 *)(lVar28 + 0x14) = *(undefined2 *)(lVar28 + 6);
                uVar24 = (uint)puVar19 & 1;
                uVar15 = (undefined1)uVar24;
                *(undefined1 *)(lVar28 + 0x1a) = uVar15;
                *(undefined1 *)(lVar28 + 0x19) = uVar15;
                *(uint *)(lVar28 + 0x1c) = uVar24;
                *(undefined1 *)(lVar28 + 10) = 10;
                *(char *)(lVar28 + 0x18) = (char)puVar19;
                *(undefined4 *)(lVar28 + 0x10) = 0;
                iStack_f74 = extraout_w8_04;
                puStack_f70 = (undefined *)CONCAT44(puStack_f70._4_4_,uVar44);
                puVar36 = extraout_x11_02;
                puVar39 = extraout_x12_03;
                puVar41 = extraout_x13_10;
              }
              else {
                *(byte *)((long)param_6 + (long)puVar45) = 9;
                puVar41 = (uint *)(ulong)(iVar38 + 1);
                puVar19 = puVar47;
              }
              unaff_x28 = (ulong)uVar21;
              puVar48 = puVar47;
              break;
            case 0x16:
              if (((uVar31 ^ uVar30) & 0x7f) != 0) {
                func_0x000108147aec();
                FUN_1081473c0();
                puVar36 = auStack_56e;
                unaff_x28 = (ulong)(uVar21 | 0x80000000);
                puVar41 = extraout_x13_09;
                puVar22 = extraout_x13_09;
              }
              uVar21 = (uint)unaff_x28;
              if ((int)puVar41 == 0) {
                if (iStack_f74 == 0) {
                  iStack_f74 = 0;
                  goto code_r0x000108146168;
                }
                do {
                  puVar1 = puVar36 + (long)puVar46;
                  puVar46 = (uint *)(ulong)((int)puVar46 - 1);
                } while (*puVar1 < 0x100);
                func_0x000108147a40();
                uVar21 = uVar21 | 0x400000;
                iStack_f74 = iStack_f74 + -1;
                puStack_f70 = (undefined *)CONCAT44(puStack_f70._4_4_,uVar44);
                lVar28 = (long)(int)uStack_d6c;
                uStack_d6c = CONCAT44(uStack_d6c._4_4_,(int)(lVar28 + -1));
                puStack_fb0[(lVar28 + -1) * 0x10] = 10;
                puVar36 = extraout_x11_03;
              }
              else {
code_r0x000108146168:
                *(byte *)((long)param_6 + (long)puVar45) = 9;
              }
              puVar19 = (uint *)(ulong)(ushort)puVar36[(long)puVar46];
              func_0x000108147ae0((ulong)puVar19 & 1);
              unaff_x28 = (ulong)(uVar21 | *(uint *)(extraout_x9_01 + extraout_x8_05 * 4) | 0x400);
              *(byte *)((long)param_3 + (long)puVar45) = (byte)puVar19 & 0x7f;
              puVar36 = extraout_x11_04;
              puVar39 = extraout_x12_04;
              puVar41 = extraout_x13_11;
              puVar48 = puVar19;
            }
            puVar45 = (uint *)((long)puVar45 + 1);
            puVar47 = puVar19;
          }
          if ((unaff_x28 & 0x7fdfd8) != 0) {
            func_0x000108147ae0(*(byte *)((long)puVar18 + 0x8d) & 1);
            unaff_x28 = (ulong)(*(uint *)(extraout_x9_02 + extraout_x8_06 * 4) | uVar21);
          }
          uVar15 = (byte)puVar18[0x23] == 0;
          uVar21 = 0;
          if (!(bool)uVar15) {
            uVar21 = (uint)unaff_x28 >> 7 & 1;
          }
          uVar21 = (uint)unaff_x28 | uVar21;
          param_1 = (uint *)(ulong)uVar21;
          puVar18[0x2f] = uVar21;
          FUN_108146e64();
          goto LAB_108146530;
        }
        func_0x000108147a88();
        puVar22 = (uint *)0x0;
        puStack_f70 = puVar53 + 2;
        while( true ) {
          uVar24 = (uint)puVar50;
          uVar31 = (uint)puVar40;
          uVar15 = puVar22 == (uint *)(long)(int)puVar18[0x32];
          if ((long)(int)puVar18[0x32] <= (long)puVar22) break;
          piVar4 = (int *)(*(long *)(puVar18 + 0x34) + (long)puVar22 * 8);
          if (puVar22 == (uint *)0x0) {
            puVar46 = (uint *)0x0;
          }
          else {
            puVar46 = (uint *)(long)piVar4[-2];
          }
          uVar25 = piVar4[1];
          unaff_x28 = (ulong)uVar25;
          unaff_x27 = (uint *)(long)*piVar4;
          uVar21 = uVar25 & 1;
          puVar53 = (undefined *)(ulong)uVar21;
          puVar47 = (uint *)(puStack_f70 + (long)puVar46 * 2);
          for (; (long)puVar46 < (long)unaff_x27; puVar46 = (uint *)((long)puVar46 + 1)) {
            *(byte *)((long)param_3 + (long)puVar46) = (byte)uVar25;
            if (*(byte *)((long)param_6 + (long)puVar46) != 0x12) {
              uVar15 = *(byte *)((long)param_6 + (long)puVar46) == 7;
              if ((bool)uVar15) {
                if (((long)((long)puVar46 + 1) < lStack_f68) &&
                   ((*(short *)((long)puVar47 + -2) != 0xd || ((short)*puVar47 != 10)))) {
                  uStack_d6c = 0;
                  uStack_d62 = 0;
                  uStack_d5f = (undefined1)uVar21;
                  bStack_d60 = (byte)uVar25;
                  auStack_d5e[0] = uStack_d5f;
                  uStack_d5c = uVar21;
                }
              }
              else {
                uVar42 = 0;
                puVar37 = puVar46;
                FUN_108146f54();
                uVar24 = (uint)puVar50;
                uVar31 = (uint)puVar40;
                if ((uVar42 & 1) == 0) {
                  param_1 = (uint *)0x0;
                  *puVar45 = 7;
                  goto LAB_108146530;
                }
              }
            }
            puVar47 = (uint *)((long)puVar47 + 2);
          }
          puVar22 = (uint *)((long)puVar22 + 1);
        }
      }
      else {
        for (lVar28 = 0; uVar15 = lVar28 == (int)puVar18[0x32], lVar28 < (int)puVar18[0x32];
            lVar28 = lVar28 + 1) {
          piVar4 = (int *)(*(long *)(puVar18 + 0x34) + lVar28 * 8);
          if (lVar28 == 0) {
            lVar32 = 0;
          }
          else {
            lVar32 = (long)piVar4[-2];
          }
          iVar20 = *piVar4;
          iVar38 = piVar4[1];
          for (; lVar32 < iVar20; lVar32 = lVar32 + 1) {
            *(byte *)((long)param_3 + lVar32) = (byte)iVar38;
          }
        }
      }
      param_1 = (uint *)0x2;
    }
  }
LAB_108146530:
  func_0x000108147a70();
  if ((bool)uVar15) {
    return;
  }
  uVar57 = 0x108146550;
  ___stack_chk_fail();
  ppuVar13 = (uint **)&puStack_fb0;
  param_4 = puVar56;
  pppppppuVar55 = (uint *******)&pppppppuStack_410;
  goto SUB_108146550;
joined_r0x0001081453cc:
  if ((int)uVar25 < 0) goto LAB_1081453ec;
  if (uVar30 == 2) {
    param_6 = (uint *)(ulong)((uint)param_6 | 0x100000);
    goto LAB_1081453ec;
  }
  uVar30 = auStack_400[uVar25];
  uVar25 = uVar25 - 1;
  goto joined_r0x0001081453cc;
code_r0x000108145748:
  lVar35 = lVar35 + -1;
  goto LAB_10814572c;
code_r0x000108146a90:
  uVar34 = (ulong)puVar40 & 0xff;
  puVar40 = *(uint **)((long)ppuVar13 + -0x98);
  uVar24 = 3;
  switch(uVar34) {
  default:
    break;
  case 1:
code_r0x000108146ad0:
    uVar24 = 1;
    goto LAB_108146adc;
  case 3:
  case 4:
    goto LAB_108146a24;
  case 5:
    goto LAB_108146adc;
  }
  uVar24 = uVar25;
  goto LAB_108146adc;
LAB_1081453ec:
  if (((byte)param_1[0x22] >> 2 & 1) == 0) {
    func_0x000108147a00();
    *(uint *)(extraout_x8_02 + -8) = uVar21;
    param_1[0x6e] = uVar24;
    uVar24 = extraout_w11;
  }
  else {
    uVar24 = (uint)uStack_420;
    if ((int)param_1[5] < (int)uVar21) {
      param_1[0x32] = param_1[0x32] - 1;
    }
  }
  uVar24 = uVar24 ^ 1;
  if (iStack_428 != 1) {
    uVar24 = 1;
  }
  uVar21 = uStack_43c;
  uVar25 = uStack_424;
  if ((uVar24 & 1) == 0) {
    func_0x000108147a00();
    *(undefined4 *)(extraout_x8_03 + -4) = 1;
    uVar21 = extraout_w10;
    uVar25 = extraout_w12;
  }
  if (0xfd < uVar21) {
    *(byte *)((long)param_1 + 0x8d) = (byte)*(undefined4 *)(*(long *)(param_1 + 0x34) + 4);
  }
  lVar28 = 4;
  for (uVar42 = (ulong)(param_1[0x32] & ((int)param_1[0x32] >> 0x1f ^ 0xffffffffU));
      uVar21 = (uint)param_6, uVar42 != 0; uVar42 = uVar42 - 1) {
    param_6 = (uint *)(ulong)(puVar40[(ulong)*(uint *)(*(long *)(param_1 + 0x34) + lVar28) & 1] |
                             uVar21);
    lVar28 = lVar28 + 8;
  }
  in_ZR = (byte)param_1[0x23] == 0;
  uVar24 = 0;
  if (!(bool)in_ZR) {
    uVar24 = uVar21 >> 7 & 1;
  }
  param_1[0x2f] = uVar21 | uVar24;
  param_1[0x30] = uVar25;
  puStack_408 = *(uint **)(param_1 + 0x1c);
  uVar21 = param_1[5];
  puVar47 = (uint *)(long)(int)uVar21;
  param_1[0x31] = uVar21;
  if (puVar56 == (uint *)0x0) {
    puVar18 = param_1 + 0x10;
    puVar48 = param_1 + 8;
    func_0x000108147aa0(puVar18,puVar48,(long)(char)(byte)param_1[0x1a]);
    if ((int)puVar18 == 0) {
LAB_108145698:
      uVar21 = 7;
LAB_10814569c:
      *puVar45 = uVar21;
      unaff_x23 = param_4;
      goto LAB_108144ea8;
    }
    *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(param_1 + 0x10);
    puVar56 = (uint *)0x108145638;
    puVar18 = param_1;
    goto SUB_108145e70;
  }
  puVar22 = (uint *)0x0;
  iVar20 = 0;
  *(uint **)(param_1 + 0x1e) = puVar56;
  param_1[0x51] = 0;
  uVar29 = (ulong)**(uint **)(param_1 + 0x34);
  uVar24 = (uint)*(byte *)((long)param_1 + 0x8d);
  uVar25 = 0;
  for (uVar42 = 0; (uVar21 & ((int)uVar21 >> 0x1f ^ 0xffffffffU)) != uVar42; uVar42 = uVar42 + 1) {
    bVar16 = *(byte *)((long)puVar56 + uVar42);
    puVar48 = (uint *)(ulong)bVar16;
    bVar10 = *(byte *)((long)puStack_408 + uVar42);
    if ((bVar10 & 0xfe) == 0x14) {
      uVar31 = uVar25 + 1;
      puVar50 = (uint *)(ulong)param_1[0x51];
      if ((int)param_1[0x51] <= (int)uVar25) {
        param_1[0x51] = uVar31;
      }
    }
    else if (bVar10 == 7) {
      uVar31 = 0;
    }
    else {
      uVar31 = uVar25;
      if (bVar10 == 0x16) {
        uVar31 = uVar25 - 1;
      }
    }
    if ((*(byte *)((long)param_1 + 0x8e) != 0) && (uVar42 == uVar29)) {
      iVar38 = iVar20 + 1;
      puVar50 = (uint *)(ulong)param_1[0x32];
      if (iVar38 < (int)param_1[0x32]) {
        puVar18 = (uint *)(*(long *)(param_1 + 0x34) + (long)iVar38 * 8);
        uVar29 = (ulong)*puVar18;
        uVar24 = puVar18[1];
        iVar20 = iVar38;
      }
    }
    uVar25 = bVar16 & 0x7f;
    in_ZR = uVar24 == uVar25;
    if ((!(bool)in_ZR && (int)uVar25 <= (int)uVar24) || (in_ZR = uVar25 == 0x7e, 0x7d < uVar25)) {
      if ((bVar16 & 0x7f) != 0) {
        uVar21 = 1;
        puVar18 = puVar22;
        goto LAB_10814569c;
      }
      if (bVar10 == 7) {
        uVar25 = 0;
      }
      else {
        uVar25 = uVar24 & 0xff;
        uVar30 = bVar16 | uVar24;
        puVar50 = (uint *)(ulong)uVar30;
        *(byte *)((long)puVar56 + uVar42) = (byte)uVar30;
      }
    }
    if ((char)bVar16 < '\0') {
      uVar25 = *(uint *)(&UNK_10def192c + (ulong)(uVar25 & 1) * 4);
    }
    else {
      puVar48 = (uint *)(ulong)*(uint *)(&UNK_10def1934 + (ulong)(uVar25 & 1) * 4);
      uVar25 = *(uint *)(&UNK_10def1934 + (ulong)(uVar25 & 1) * 4) |
               (uint)(1L << ((ulong)bVar10 & 0x3f));
    }
    puVar22 = (uint *)(ulong)(uVar25 | (uint)puVar22);
    uVar25 = uVar31;
  }
  if (((ulong)puVar22 & 0x7fdfd8) != 0) {
    puVar22 = (uint *)(ulong)(puVar40[(ulong)*(byte *)((long)param_1 + 0x8d) & 1] | (uint)puVar22);
  }
  param_1[0x2f] = (uint)puVar22;
  FUN_108146e64();
  in_ZR = *puVar45 == 0;
  puVar18 = puVar22;
  unaff_x23 = param_4;
  if (0 < (int)*puVar45) goto LAB_108144ea8;
  param_4 = puVar22;
  if ((int)param_1[0x51] < 6) {
    puVar39 = param_1 + 0x54;
  }
  else {
    uVar24 = param_1[0x51] * 0x10;
    puVar50 = (uint *)(ulong)uVar24;
    param_3 = param_1 + 0xc;
    in_ZR = uVar24 == *param_3;
    if ((int)*param_3 < (int)uVar24) {
      puVar18 = param_1 + 0x18;
      puVar48 = param_3;
      func_0x000108147a58();
      if ((int)puVar18 == 0) goto LAB_108145698;
      puVar39 = *(uint **)(param_1 + 0x18);
    }
    else {
      puVar39 = *(uint **)(param_1 + 0x18);
    }
  }
  *(uint **)(param_1 + 0x52) = puVar39;
  param_1[0x51] = 0xffffffff;
  uVar24 = (uint)puVar22;
  param_1[0x2e] = uVar24;
  in_ZR = uVar24 == 2;
  puVar39 = puStack_408;
  if (uVar24 < 2) {
    param_1[0x31] = 0;
    param_6 = unaff_x27;
LAB_1081456c4:
    uVar21 = param_1[0x22];
    if (((*(byte *)((long)param_1 + 0x8e) != 0) && ((uVar21 & 1) != 0)) &&
       (in_ZR = param_1[0x21] - 5 == 1, param_1[0x21] - 5 < 2)) {
      for (lVar28 = 0; in_ZR = lVar28 == (int)param_1[0x32], lVar28 < (int)param_1[0x32];
          lVar28 = lVar28 + 1) {
        puVar45 = (uint *)(*(long *)(param_1 + 0x34) + lVar28 * 8);
        if ((char)puVar45[1] != '\0') {
          if (lVar28 == 0) {
            lVar32 = 0;
          }
          else {
            lVar32 = (long)(int)puVar45[-2];
          }
          uVar21 = *puVar45 - 1;
          puVar48 = (uint *)(ulong)uVar21;
          lVar35 = (long)(int)uVar21;
LAB_10814572c:
          if (lVar32 <= lVar35) {
            if ((ulong)*(byte *)((long)puVar39 + lVar35) == 0) {
              if ((int)lVar35 < (int)uVar21) {
                puVar48 = (uint *)(ulong)*puVar45;
                pbVar54 = (byte *)((long)puVar39 + (long)(int)uVar21);
                do {
                  bVar16 = *pbVar54;
                  puVar48 = (uint *)(ulong)((int)puVar48 - 1);
                  pbVar54 = pbVar54 + -1;
                } while (bVar16 == 7);
              }
              puVar18 = param_1;
              FUN_108146b90(param_1,puVar48,4);
              puVar39 = puStack_408;
            }
            else if ((1L << ((ulong)*(byte *)((long)puVar39 + lVar35) & 0x3f) & 0x2002U) == 0)
            goto code_r0x000108145748;
          }
        }
      }
      uVar21 = param_1[0x22];
    }
    if ((uVar21 >> 1 & 1) == 0) {
      uVar21 = param_1[0x69];
    }
    else {
      uVar21 = -param_1[0x6e];
    }
    param_1[6] = uVar21 + param_1[6];
    goto LAB_108144e80;
  }
  switch(param_1[0x21]) {
  case 0:
    ppuVar27 = &PTR_DAT_110a27620;
    break;
  case 1:
    ppuVar27 = &PTR_DAT_110a27640;
    break;
  case 2:
    ppuVar27 = &PTR_DAT_110a27660;
    break;
  default:
    goto LAB_108145ad8;
  case 4:
    ppuVar27 = &PTR_DAT_110a27680;
    break;
  case 5:
    if ((param_1[0x22] & 1) == 0) {
      ppuVar27 = &PTR_DAT_110a276c0;
    }
    else {
      ppuVar27 = &PTR_DAT_110a276a0;
    }
    break;
  case 6:
    if ((param_1[0x22] & 1) == 0) {
      ppuVar27 = &PTR_DAT_110a27700;
    }
    else {
      ppuVar27 = &PTR_DAT_110a276e0;
    }
  }
  *(undefined ***)(param_1 + 0x2c) = ppuVar27;
LAB_108145ad8:
  uVar42 = 0x5d800;
  if (((puVar56 != (uint *)0x0) || (1 < (int)param_1[0x32])) || ((int)param_1[0x2f] < 0)) {
    puVar46 = *(uint **)(param_1 + 0x1e);
    if ((*(byte *)((long)param_1 + 0x8e) == 0) ||
       (func_0x000108147a4c(), uVar42 = extraout_x10_00, puVar39 = extraout_x13, 0 < extraout_w8)) {
      puVar18 = (uint *)(ulong)*(byte *)((long)param_1 + 0x8d);
    }
    else {
      func_0x000108147a34();
      func_0x0001081479f0();
      uVar42 = extraout_x10_01;
      puVar39 = extraout_x13_00;
    }
    bVar16 = (byte)*puVar46;
    uVar24 = (uint)puVar18;
    if (uVar24 <= bVar16) {
      uVar24 = (uint)bVar16;
    }
    puVar22 = (uint *)(ulong)(uVar24 & 1);
    pppppppuStack_410 = (uint *******)((long)puVar39 + -1);
    uStack_420 = CONCAT44(uStack_420._4_4_,uVar21 - 1);
    unaff_x28 = 0x100000000;
    puVar37 = (uint *)0x0;
    unaff_x27 = (uint *)(ulong)bVar16;
    do {
      uVar24 = (uint)puVar22;
      iVar20 = (int)puVar37;
      if ((0 < iVar20) && (*(byte *)((long)pppppppuStack_410 + ((ulong)puVar37 & 0xffffffff)) == 7))
      {
        if ((*(byte *)((long)param_1 + 0x8e) == 0) ||
           (func_0x000108147a4c(), uVar42 = extraout_x10_02, puVar39 = extraout_x13_01,
           iVar20 < extraout_w8_00)) {
          puVar18 = (uint *)(ulong)*(byte *)((long)param_1 + 0x8d);
        }
        else {
          puVar18 = param_1;
          puVar48 = puVar37;
          FUN_108144b4c();
          func_0x0001081479f0();
          uVar42 = extraout_x10_03;
          puVar39 = extraout_x13_02;
        }
        uVar24 = (uint)puVar18 & 1;
      }
      lVar28 = (long)iVar20;
      param_3 = (uint *)(lVar28 + 1);
      puVar45 = puVar47;
      if ((long)puVar47 < (long)param_3) {
        puVar45 = (uint *)(lVar28 + 1);
      }
      puVar53 = (undefined *)((long)puVar37 << 0x20);
      for (; uVar25 = (uint)unaff_x27, (long)param_3 < (long)puVar47;
          param_3 = (uint *)((long)param_3 + 1)) {
        param_6 = (uint *)(ulong)*(byte *)((long)puVar46 + (long)param_3);
        if (((uint)*(byte *)((long)puVar46 + (long)param_3) != (uVar25 & 0xff)) &&
           (param_4 = param_3,
           (uVar42 >> ((ulong)*(byte *)((long)puVar39 + (long)param_3) & 0x3f) & 1) == 0))
        goto LAB_108145c44;
        puVar53 = puVar53 + 0x100000000;
      }
      if ((*(byte *)((long)param_1 + 0x8e) == 0) ||
         (func_0x000108147a4c(), uVar42 = extraout_x10_04, puVar45 = extraout_x11,
         puVar39 = extraout_x13_03, uVar24 = extraout_w12_00, (int)uVar21 <= extraout_w8_01)) {
        param_6 = (uint *)(ulong)*(byte *)((long)param_1 + 0x8d);
        param_4 = puVar45;
      }
      else {
        puVar48 = (uint *)(uStack_420 & 0xffffffff);
        puVar18 = param_1;
        puStack_418 = extraout_x11;
        FUN_108144b4c();
        func_0x0001081479f0();
        uVar42 = extraout_x10_05;
        param_4 = extraout_x11_00;
        puVar39 = extraout_x13_04;
        param_6 = puVar18;
        uVar24 = extraout_w12_01;
      }
LAB_108145c44:
      uVar31 = (uint)param_6;
      if (((uint)param_6 & 0x7f) <= (uVar25 & 0x7f)) {
        uVar31 = uVar25;
      }
      uVar31 = uVar31 & 1;
      puVar22 = (uint *)(ulong)uVar31;
      if ((uVar25 >> 7 & 1) == 0) {
        uVar24 = uVar24 & 0xff;
        uVar57 = 0x108145c7c;
        puVar18 = param_1;
        puVar45 = param_4;
        goto SUB_108146550;
      }
      do {
        *(byte *)((long)puVar46 + lVar28) = *(byte *)((long)puVar46 + lVar28) & 0x7f;
        bVar14 = lVar28 < (long)puVar53 >> 0x20;
        lVar28 = lVar28 + 1;
      } while (bVar14);
      puVar37 = param_4;
      unaff_x27 = param_6;
    } while ((long)param_3 < (long)puVar47);
    uVar21 = param_1[0x6b];
    in_ZR = uVar21 == 1;
    if (0 < (int)uVar21) {
LAB_108145cc4:
      *puStack_438 = uVar21;
      unaff_x23 = param_4;
      unaff_x27 = param_6;
      goto LAB_108144ea8;
    }
    in_ZR = (param_1[0x2f] & 0x7ddb80) == 0;
    if (!(bool)in_ZR) {
      lVar28 = *(long *)(param_1 + 0x1c);
      lVar32 = *(long *)(param_1 + 0x1e);
      bVar16 = (byte)param_1[0x23];
      param_4 = (uint *)(ulong)bVar16;
      puVar45 = (uint *)(ulong)param_1[0x31];
      unaff_x28 = 0x7ddb80;
LAB_108145d04:
      in_ZR = (int)puVar45 == 1;
      puVar56 = puVar45;
      if (0 < (int)puVar45) {
        while (0 < (long)puVar56) {
          uVar29 = 1L << ((ulong)*(byte *)(lVar28 + -1 + (long)puVar56) & 0x3f);
          puVar45 = (uint *)((long)puVar56 + -1);
          if ((uVar29 & 0x7ddb80) == 0) goto LAB_108145d7c;
          if ((bVar16 == 0) || (((uint)uVar29 >> 7 & 1) == 0)) {
            if ((*(byte *)((long)param_1 + 0x8e) == 0) ||
               ((long)puVar56 <= (long)**(int **)(param_1 + 0x34))) {
              puVar18 = (uint *)(ulong)*(byte *)((long)param_1 + 0x8d);
            }
            else {
              puVar18 = param_1;
              puVar48 = puVar45;
              FUN_108144b4c();
              func_0x0001081479f0();
              uVar42 = extraout_x10_06;
              puVar39 = extraout_x13_05;
            }
          }
          else {
            puVar18 = (uint *)0x0;
          }
          *(byte *)(lVar32 + -1 + (long)puVar56) = (byte)puVar18;
          puVar56 = puVar45;
        }
        puVar45 = (uint *)0x0;
LAB_108145d7c:
        param_6 = (uint *)(lVar32 + (long)puVar45);
        pbVar54 = (byte *)(lVar28 + -1 + (long)puVar45);
        while( true ) {
          iVar20 = (int)puVar45;
          puVar45 = (uint *)(ulong)(iVar20 - 1);
          if (iVar20 < 1) break;
          uVar29 = 1L << ((ulong)*pbVar54 & 0x3f);
          if ((uVar29 & uVar42) == 0) {
            if ((bVar16 == 0) || (((uint)uVar29 >> 7 & 1) == 0)) {
              if ((uVar29 & 0x180) == 0) goto LAB_108145db8;
              if ((*(byte *)((long)param_1 + 0x8e) == 0) ||
                 (func_0x000108147a4c(), uVar42 = extraout_x10_07, puVar39 = extraout_x13_06,
                 iVar20 <= extraout_w8_02)) {
                puVar18 = (uint *)(ulong)*(byte *)((long)param_1 + 0x8d);
              }
              else {
                puVar18 = param_1;
                puVar48 = puVar45;
                FUN_108144b4c();
                func_0x0001081479f0();
                uVar42 = extraout_x10_08;
                puVar39 = extraout_x13_07;
              }
            }
            else {
              puVar18 = (uint *)0x0;
            }
            *(byte *)((long)param_6 + -1) = (byte)puVar18;
            goto LAB_108145d04;
          }
          *(byte *)((long)param_6 + -1) = (byte)*param_6;
LAB_108145db8:
          param_6 = (uint *)((long)param_6 + -1);
          pbVar54 = pbVar54 + -1;
        }
        puVar45 = (uint *)0x0;
        goto LAB_108145d04;
      }
    }
    goto LAB_1081456c4;
  }
  if (*(byte *)((long)param_1 + 0x8e) == 0) {
    puVar40 = (uint *)(ulong)*(byte *)((long)param_1 + 0x8d);
    puVar46 = puVar40;
  }
  else {
    uVar24 = **(uint **)(param_1 + 0x34);
    puVar45 = (uint *)(ulong)uVar24;
    if ((int)uVar24 < 1) {
      func_0x000108147a34();
    }
    else {
      puVar18 = (uint *)(ulong)*(byte *)((long)param_1 + 0x8d);
    }
    puVar46 = puVar18;
    if ((int)uVar24 < (int)uVar21) {
      puVar40 = param_1;
      FUN_108144b4c(param_1,uVar21 - 1);
    }
    else {
      puVar40 = (uint *)(ulong)*(byte *)((long)param_1 + 0x8d);
    }
  }
  uVar24 = (uint)puVar46 & 1;
  uVar31 = (uint)puVar40 & 1;
  puVar37 = (uint *)0x0;
  uVar57 = 0x108145e54;
  ppuVar13 = &puStack_460;
  param_4 = puVar47;
  puVar18 = param_1;
SUB_108146550:
  *(ulong *)((long)ppuVar13 + -0x60) = unaff_x28;
  *(uint **)((long)ppuVar13 + -0x58) = unaff_x27;
  *(undefined **)((long)ppuVar13 + -0x50) = puVar53;
  *(uint **)((long)ppuVar13 + -0x48) = param_6;
  *(uint **)((long)ppuVar13 + -0x40) = param_3;
  *(uint **)((long)ppuVar13 + -0x38) = puVar22;
  *(uint **)((long)ppuVar13 + -0x30) = puVar47;
  *(uint **)((long)ppuVar13 + -0x28) = puVar46;
  *(uint **)((long)ppuVar13 + -0x20) = puVar45;
  *(uint **)((long)ppuVar13 + -0x18) = puVar18;
  *(uint ********)((long)ppuVar13 + -0x10) = pppppppuVar55;
  *(undefined8 *)((long)ppuVar13 + -8) = uVar57;
  *(uint *)((long)ppuVar13 + -0xa0) = uVar31;
  *(uint **)((long)ppuVar13 + -0x98) = param_1;
  *(uint **)((long)ppuVar13 + -0x90) = param_4;
  lVar28 = *(long *)(param_1 + 0x1c);
  iVar20 = (int)puVar37;
  puVar40 = param_1;
  if (iVar20 < (int)param_1[0x30]) {
    if ((*(byte *)((long)param_1 + 0x8e) == 0) || (iVar20 < **(int **)(param_1 + 0x34))) {
      if ((*(byte *)((long)param_1 + 0x8d) & 1) == 0) goto LAB_1081465b8;
    }
    else {
      FUN_108144b4c(param_1,puVar37);
      puVar40 = *(uint **)((long)ppuVar13 + -0x98);
      if (((ulong)param_1 & 1) == 0) goto LAB_1081465b8;
    }
    uVar21 = (uint)(puVar40[0x21] - 5 < 2);
  }
  else {
LAB_1081465b8:
    uVar21 = 0;
  }
  *(undefined8 *)((long)ppuVar13 + -0x74) = 0xffffffffffffffff;
  *(int *)((long)ppuVar13 + -0x68) = iVar20;
  puVar48 = (uint *)(long)iVar20;
  bVar16 = *(byte *)(*(long *)(puVar40 + 0x1e) + (long)iVar20);
  *(byte *)((long)ppuVar13 + -100) = bVar16;
  puVar51 = (undefined8 *)(*(long *)(puVar40 + 0x2c) + ((ulong)bVar16 & 1) * 8);
  uVar57 = puVar51[2];
  *(undefined8 *)((long)ppuVar13 + -0x88) = *puVar51;
  *(undefined8 *)((long)ppuVar13 + -0x80) = uVar57;
  *(uint *)((long)ppuVar13 + -0xb0) = uVar21;
  if ((iVar20 == 0) && (0 < (int)puVar40[0x26])) {
    lVar32 = *(long *)(puVar40 + 0x24);
    uVar42 = (ulong)puVar40[0x26];
    do {
      iVar38 = (int)uVar42;
      uVar29 = (ulong)(iVar38 - 1U);
      if (iVar38 < 1) goto LAB_1081466e0;
      uVar11 = *(ushort *)(lVar32 + uVar29 * 2);
      uVar21 = (uint)uVar11;
      if ((uVar11 & 0xfc00) == 0xdc00) {
        if (iVar38 == 1) {
          uVar29 = 0;
        }
        else {
          uVar31 = (uint)*(ushort *)(lVar32 + -4 + uVar42 * 2);
          uVar25 = iVar38 - 1U;
          uVar21 = (uint)uVar11;
          if ((uVar31 & 0xfc00) == 0xd800) {
            uVar25 = iVar38 - 2;
            uVar21 = (uint)uVar11 + uVar31 * 0x400 + 0xfca02400;
          }
          uVar29 = (ulong)uVar25;
        }
      }
      func_0x000108146e18(puVar40,uVar21);
      uVar25 = (uint)puVar40;
      uVar21 = uVar25 & 0xff;
      if (((ulong)puVar40 & 0xff) == 0) {
        puVar40 = *(uint **)((long)ppuVar13 + -0x98);
        uVar24 = uVar25;
        goto LAB_1081466e0;
      }
      puVar40 = *(uint **)((long)ppuVar13 + -0x98);
      if (uVar21 == 0xd) break;
      if (uVar21 == 7) goto LAB_1081466e0;
      uVar42 = uVar29;
    } while (uVar21 != 1);
    uVar24 = 1;
LAB_1081466e0:
    uVar21 = *(uint *)((long)ppuVar13 + -0xb0);
  }
  if (*(byte *)(lVar28 + (long)puVar48) == 0x16) {
    uVar25 = puVar40[0x51];
    if ((int)uVar25 < 0) goto LAB_108146720;
    puVar5 = (undefined4 *)(*(long *)(puVar40 + 0x52) + (ulong)uVar25 * 0x10);
    uVar24 = puVar5[1];
    uVar42 = (ulong)*(ushort *)(puVar5 + 3);
    uVar44 = puVar5[2];
    *(undefined4 *)((long)ppuVar13 + -0x78) = *puVar5;
    *(undefined4 *)((long)ppuVar13 + -0x6c) = uVar44;
    puVar40[0x51] = uVar25 - 1;
    puVar18 = (uint *)(ulong)uVar24;
  }
  else {
LAB_108146720:
    uVar25 = 0;
    if (*(byte *)(lVar28 + (long)puVar48) == 0x11) {
      uVar25 = uVar24 + 1;
    }
    uVar42 = (ulong)(uVar25 & 0xff);
    *(undefined4 *)((long)ppuVar13 + -0x78) = 0xffffffff;
    *(undefined4 *)((long)ppuVar13 + -0x6c) = 0;
    func_0x0001081475c0(puVar40,(undefined1 *)((long)ppuVar13 + -0x88),uVar24 & 0xff,puVar37,puVar37
                       );
    puVar40 = *(uint **)((long)ppuVar13 + -0x98);
    puVar18 = puVar37;
  }
  puVar50 = (uint *)(long)(int)*(undefined8 *)((long)ppuVar13 + -0x90);
  iVar38 = (int)*(undefined8 *)((long)ppuVar13 + -0x90) + -1;
  if (iVar38 <= iVar20) {
    iVar20 = iVar38;
  }
  *(int *)((long)ppuVar13 + -0xac) = iVar20;
  pbVar54 = (byte *)((long)puVar50 + -1);
  bVar16 = 1;
  puVar22 = (uint *)0xffffffff;
  *(uint **)((long)ppuVar13 + -0xa8) = puVar50;
  puVar47 = puVar37;
  puVar56 = puVar48;
  for (puVar45 = puVar48; puVar56 = (uint *)((long)puVar56 + 1), (long)puVar45 <= (long)puVar50;
      puVar45 = (uint *)((long)puVar45 + 1)) {
    if ((long)puVar45 < (long)puVar50) {
      bVar10 = *(byte *)(lVar28 + (long)puVar45);
      uVar24 = (uint)bVar10;
      if (bVar10 == 7) {
        puVar40[0x51] = 0xffffffff;
      }
      if (uVar21 != 0) {
        if (bVar10 == 0xd) {
          uVar24 = 1;
        }
        else if (bVar10 == 2) {
          puVar39 = puVar37;
          puVar46 = puVar56;
          if ((long)(int)puVar22 <= (long)puVar45) {
            do {
              if ((long)puVar50 <= (long)puVar46) {
                uVar24 = 2;
                bVar16 = 1;
                puVar22 = *(uint **)((long)ppuVar13 + -0x90);
                goto LAB_108146878;
              }
              bVar16 = *(byte *)(lVar28 + (long)puVar46);
              puVar22 = (uint *)(ulong)((int)puVar39 + 1);
              puVar39 = puVar22;
              puVar46 = (uint *)((long)puVar46 + 1);
            } while (0xd < bVar16 || (1 << (ulong)(bVar16 & 0x1f) & 0x2003U) == 0);
          }
          uVar24 = 5;
          if (bVar16 != 0xd) {
            uVar24 = 2;
          }
        }
      }
LAB_108146878:
      uVar25 = (uint)(byte)(&UNK_10def1b62)[uVar24];
    }
    else {
      uVar29 = *(ulong *)((long)ppuVar13 + -0x90);
      pbVar33 = pbVar54;
      do {
        if ((long)pbVar33 <= (long)puVar48) {
          uVar24 = *(uint *)((long)ppuVar13 + -0xac);
          break;
        }
        pbVar2 = pbVar33 + lVar28;
        uVar24 = (int)uVar29 - 1;
        uVar29 = (ulong)uVar24;
        pbVar33 = pbVar33 + -1;
      } while ((0x5d800U >> ((ulong)*pbVar2 & 0x3f) & 1) != 0);
      uVar25 = *(uint *)((long)ppuVar13 + -0xa0);
      if ((*(byte *)(lVar28 + (int)uVar24) & 0xfe) == 0x14) break;
    }
    bVar10 = (&UNK_10def1b7b)[(ulong)uVar25 + uVar42 * 0x10];
    uVar24 = (uint)(bVar10 >> 5);
    if (bVar10 < 0x20 && puVar45 == puVar50) {
      uVar24 = 1;
    }
    puVar39 = puVar47;
    if ((uVar24 == 0) || (3 < uVar24 - 1)) goto LAB_1081469c8;
    uVar15 = (&UNK_10def1b8a)[uVar42 * 0x10];
    uVar44 = SUB84(puVar22,0);
    puVar39 = puVar45;
    switch(uVar24) {
    case 1:
      *(undefined4 *)((long)ppuVar13 + -0x9c) = uVar44;
      func_0x0001081475c0(puVar40,(undefined1 *)((long)ppuVar13 + -0x88),uVar15,puVar18,puVar45);
      uVar24 = *(uint *)((long)ppuVar13 + -0x9c);
      puVar50 = *(uint **)((long)ppuVar13 + -0xa8);
      uVar21 = *(uint *)((long)ppuVar13 + -0xb0);
      goto code_r0x00010814696c;
    case 2:
      break;
    case 3:
      *(undefined4 *)((long)ppuVar13 + -0x9c) = uVar44;
      *(uint **)((long)ppuVar13 + -0xb8) = puVar37;
      func_0x0001081475c0(puVar40,(undefined1 *)((long)ppuVar13 + -0x88),uVar15,puVar18,puVar47);
      func_0x0001081475c0(*(undefined8 *)((long)ppuVar13 + -0x98),
                          (undefined1 *)((long)ppuVar13 + -0x88),4,puVar47,puVar45);
      uVar24 = *(uint *)((long)ppuVar13 + -0x9c);
      puVar50 = *(uint **)((long)ppuVar13 + -0xa8);
      puVar37 = *(uint **)((long)ppuVar13 + -0xb8);
code_r0x00010814696c:
      puVar22 = (uint *)(ulong)uVar24;
      puVar40 = *(uint **)((long)ppuVar13 + -0x98);
      puVar39 = puVar47;
      puVar18 = puVar45;
      break;
    case 4:
      *(undefined4 *)((long)ppuVar13 + -0x9c) = uVar44;
      func_0x0001081475c0(puVar40,(undefined1 *)((long)ppuVar13 + -0x88),uVar15,puVar18,puVar47);
      puVar22 = (uint *)(ulong)*(uint *)((long)ppuVar13 + -0x9c);
      puVar50 = *(uint **)((long)ppuVar13 + -0xa8);
      uVar21 = *(uint *)((long)ppuVar13 + -0xb0);
      puVar40 = *(uint **)((long)ppuVar13 + -0x98);
      puVar18 = puVar47;
    }
LAB_1081469c8:
    uVar42 = (ulong)(bVar10 & 0x1f);
    puVar37 = (uint *)(ulong)((int)puVar37 + 1);
    puVar47 = puVar39;
  }
  if (((uint)*(undefined8 *)((long)ppuVar13 + -0x90) == puVar40[5]) &&
     (uVar21 = puVar40[0x2a], 0 < (int)uVar21)) {
    uVar29 = 0;
    lVar32 = *(long *)(puVar40 + 0x28);
LAB_108146a24:
    while (iVar20 = (int)uVar29, iVar20 < (int)uVar21) {
      uVar29 = (long)iVar20 + 1;
      uVar11 = *(ushort *)(lVar32 + (long)iVar20 * 2);
      uVar24 = (uint)uVar11;
      if ((uVar11 & 0xfc00) == 0xd800 && (uint)uVar29 != uVar21) {
        uVar31 = (uint)*(ushort *)(lVar32 + uVar29 * 2);
        uVar25 = (uint)uVar29;
        uVar24 = (uint)uVar11;
        if ((uVar31 & 0xfc00) == 0xdc00) {
          uVar25 = iVar20 + 2;
          uVar24 = (uint)uVar11 * 0x400 + -0x35fdc00 + uVar31;
        }
        uVar29 = (ulong)uVar25;
      }
      func_0x000108146e18(puVar40,uVar24);
      uVar25 = (uint)puVar40;
      uVar24 = uVar25 & 0xff;
      if (uVar24 < 6) goto code_r0x000108146a90;
      puVar40 = *(uint **)((long)ppuVar13 + -0x98);
      if (uVar24 == 0xd) goto code_r0x000108146ad0;
    }
  }
  uVar24 = *(uint *)((long)ppuVar13 + -0xa0);
LAB_108146adc:
  uVar29 = *(ulong *)((long)ppuVar13 + -0x90);
  do {
    if ((long)pbVar54 <= (long)puVar48) {
      uVar21 = *(uint *)((long)ppuVar13 + -0xac);
      break;
    }
    pbVar33 = pbVar54 + lVar28;
    uVar21 = (int)uVar29 - 1;
    uVar29 = (ulong)uVar21;
    pbVar54 = pbVar54 + -1;
  } while ((0x5d800U >> ((ulong)*pbVar33 & 0x3f) & 1) != 0);
  if (((*(byte *)(lVar28 + (int)uVar21) & 0xfe) == 0x14) &&
     ((int)*(undefined8 *)((long)ppuVar13 + -0x90) < (int)puVar40[5])) {
    uVar21 = puVar40[0x51];
    puVar40[0x51] = (uint)((long)(int)uVar21 + 1);
    puVar5 = (undefined4 *)(*(long *)(puVar40 + 0x52) + ((long)(int)uVar21 + 1) * 0x10);
    *(short *)(puVar5 + 3) = (short)uVar42;
    uVar44 = *(undefined4 *)((long)ppuVar13 + -0x6c);
    uVar9 = *(undefined4 *)((long)ppuVar13 + -0x78);
    puVar5[1] = (int)puVar18;
    puVar5[2] = uVar44;
    *puVar5 = uVar9;
  }
  else {
    func_0x0001081475c0(puVar40,(undefined1 *)((long)ppuVar13 + -0x88),uVar24 & 0xff,
                        *(undefined8 *)((long)ppuVar13 + -0x90),
                        *(undefined8 *)((long)ppuVar13 + -0x90));
  }
  return;
}



/* Entry: 108146b90; end: 108146c43;  */

void FUN_108146b90(long param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  
  uVar3 = *(uint *)(param_1 + 0x1a0);
  if (uVar3 == 0) {
    lVar5 = 0x50;
    _malloc();
    *(long *)(param_1 + 0x1b0) = lVar5;
    if (lVar5 != 0) {
      uVar3 = 10;
      *(undefined4 *)(param_1 + 0x1a0) = 10;
      goto LAB_108146bd8;
    }
LAB_108146c2c:
    *(undefined4 *)(param_1 + 0x1ac) = 7;
  }
  else {
    lVar5 = *(long *)(param_1 + 0x1b0);
LAB_108146bd8:
    iVar4 = *(int *)(param_1 + 0x1a4);
    lVar2 = lVar5;
    if ((int)uVar3 <= iVar4) {
      FUN_1081448b4(lVar5,-(ulong)((uVar3 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 |
                          (ulong)(uVar3 << 1) << 3);
      *(long *)(param_1 + 0x1b0) = lVar2;
      if (lVar2 == 0) {
        *(long *)(param_1 + 0x1b0) = lVar5;
        goto LAB_108146c2c;
      }
      *(int *)(param_1 + 0x1a0) = *(int *)(param_1 + 0x1a0) << 1;
      iVar4 = *(int *)(param_1 + 0x1a4);
    }
    puVar1 = (undefined4 *)(lVar2 + (long)iVar4 * 8);
    *puVar1 = param_2;
    puVar1[1] = param_3;
    *(int *)(param_1 + 0x1a4) = *(int *)(param_1 + 0x1a4) + 1;
  }
  return;
}



/* Entry: 108146c44; end: 108146ca3;  */

undefined4 FUN_108146c44(long *param_1)

{
  undefined4 uVar1;
  long *plVar2;
  
  uVar1 = 0;
  if (param_1 != (long *)0x0) {
    plVar2 = (long *)*param_1;
    if ((plVar2 != param_1) && ((plVar2 == (long *)0x0 || ((long *)*plVar2 != plVar2)))) {
      return 0;
    }
    uVar1 = *(undefined4 *)((long)param_1 + 0x14);
  }
  return uVar1;
}



/* Entry: 108146ca4; end: 108146e63;  */

void FUN_108146ca4(long *param_1,uint param_2,int *param_3,undefined4 *param_4,undefined1 *param_5,
                  int *param_6)

{
  undefined1 uVar1;
  long *plVar2;
  int iVar3;
  
  if ((param_6 == (int *)0x0) || (0 < *param_6)) {
    return;
  }
  if ((param_1 == (long *)0x0) ||
     ((plVar2 = (long *)*param_1, plVar2 != param_1 &&
      ((plVar2 == (long *)0x0 || ((long *)*plVar2 != plVar2)))))) {
    iVar3 = 0x1b;
  }
  else {
    if ((-1 < (int)param_2) && ((int)param_2 < (int)param_1[0x19])) {
      if (param_2 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(plVar2[0x1a] + (ulong)param_2 * 8 + -8);
      }
      if (param_3 != (int *)0x0) {
        *param_3 = iVar3;
      }
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = *(undefined4 *)(plVar2[0x1a] + (ulong)param_2 * 8);
      }
      if (param_5 == (undefined1 *)0x0) {
        return;
      }
      if ((*(char *)((long)plVar2 + 0x8e) == '\0') || (iVar3 < *(int *)plVar2[0x1a])) {
        uVar1 = *(undefined1 *)((long)plVar2 + 0x8d);
      }
      else {
        FUN_108144b4c(plVar2,iVar3);
        uVar1 = SUB81(plVar2,0);
      }
      *param_5 = uVar1;
      return;
    }
    iVar3 = 1;
  }
  *param_6 = iVar3;
  return;
}



/* Entry: 108146e64; end: 108146ea7;  */

undefined4 FUN_108146e64(uint param_1)

{
  undefined4 uVar1;
  
  if ((((param_1 & 0x20e002) != 0) ||
      ((uVar1 = 0, (param_1 >> 5 & 1) != 0 && ((param_1 & 0x5d1fd8) != 0)))) &&
     (uVar1 = 1, (param_1 & 0x1901825) != 0)) {
    uVar1 = 2;
  }
  return uVar1;
}



/* Entry: 108146ea8; end: 108146f53;  */

void FUN_108146ea8(long param_1,long *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  undefined4 uVar5;
  
  *param_2 = param_1;
  *(undefined4 *)((long)param_2 + 500) = 0;
  *(undefined4 *)((long)param_2 + 0x1fc) = 0;
  if ((*(char *)(param_1 + 0x8e) == '\0') || (0 < **(int **)(param_1 + 0xd0))) {
    uVar2 = (uint)*(byte *)(param_1 + 0x8d);
    *(byte *)(param_2 + 0x40) = *(byte *)(param_1 + 0x8d);
  }
  else {
    lVar3 = param_1;
    func_0x000108147a94();
    uVar2 = (uint)lVar3;
    *(char *)(param_2 + 0x40) = (char)lVar3;
    func_0x000108147a94();
  }
  uVar1 = (undefined1)(uVar2 & 1);
  *(undefined1 *)((long)param_2 + 0x202) = uVar1;
  *(undefined1 *)((long)param_2 + 0x201) = uVar1;
  *(uint *)((long)param_2 + 0x204) = uVar2 & 1;
  *(undefined4 *)(param_2 + 0x3f) = 0;
  plVar4 = *(long **)(param_1 + 0x48);
  if (plVar4 == (long *)0x0) {
    plVar4 = param_2 + 1;
    uVar5 = 0x14;
  }
  else {
    uVar5 = (undefined4)((ulong)(long)*(int *)(param_1 + 0x24) / 0x18);
  }
  param_2[0x3d] = (long)plVar4;
  *(undefined4 *)(param_2 + 0x3e) = uVar5;
  *(bool *)(param_2 + 0x13d) = *(int *)(param_1 + 0x84) == 1 || *(int *)(param_1 + 0x84) == 6;
  return;
}



/* Entry: 108146f54; end: 1081473bf;  */

void FUN_108146f54(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  byte bVar4;
  ushort uVar5;
  ushort uVar6;
  byte bVar7;
  int iVar8;
  bool bVar9;
  long *plVar10;
  int iVar11;
  undefined8 uVar12;
  undefined1 uVar13;
  ulong uVar14;
  ushort uVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  uint uVar20;
  uint uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  
  func_0x000108147ab4();
  iVar8 = *(int *)((long)param_1 + 500);
  plVar1 = param_1 + (long)iVar8 * 2 + 0x3f;
  lVar25 = *param_1;
  lVar22 = *(long *)(lVar25 + 0x70);
  iVar11 = (int)param_2;
  bVar4 = *(byte *)(lVar22 + iVar11);
  uVar21 = (uint)bVar4;
  if (bVar4 == 10) {
    uVar6 = *(ushort *)(*(long *)(lVar25 + 8) + (long)iVar11 * 2);
    uVar20 = (uint)uVar6;
    uVar19 = (ulong)*(ushort *)((long)param_1 + (long)iVar8 * 0x10 + 0x1fe);
    uVar14 = (ulong)*(ushort *)((long)param_1 + (long)iVar8 * 0x10 + 0x1fc);
    lVar23 = uVar19 * 0x18;
    do {
      uVar16 = uVar19;
      if ((long)uVar16 <= (long)uVar14) {
        if (((uVar6 != 0) &&
            (uVar17 = uVar20, func_0x000108147cb0(), (uint)uVar6 != (uVar17 & 0xffff))) &&
           (func_0x000108147c38(), uVar20 == 1)) {
          if ((uVar17 & 0xffff) == 0x3009) {
            uVar12 = 0x232a;
LAB_108147228:
            plVar10 = param_1;
            FUN_10814741c(param_1,uVar12,param_2);
            if ((int)plVar10 == 0) {
              return;
            }
          }
          else if ((uVar17 & 0xffff) == 0x232a) {
            uVar12 = 0x3009;
            goto LAB_108147228;
          }
          plVar10 = param_1;
          FUN_10814741c(param_1,uVar17 & 0xffff,param_2);
          if ((int)plVar10 == 0) {
            return;
          }
          lVar25 = *param_1;
        }
        goto LAB_10814724c;
      }
      uVar19 = uVar16 - 1;
      lVar24 = param_1[0x3d];
      lVar2 = lVar24 + lVar23;
      lVar23 = lVar23 + -0x18;
    } while (*(uint *)(lVar2 + -0x14) != (uint)uVar6);
    uVar6 = *(ushort *)(lVar24 + lVar23 + 0xc);
    if ((*(byte *)(param_1 + (long)iVar8 * 2 + 0x40) & 1) == 0) {
      if ((uVar6 & 1) == 0) goto LAB_108147040;
      bVar9 = true;
      uVar20 = 0;
    }
    else if ((uVar6 >> 1 & 1) == 0) {
LAB_108147040:
      if ((uVar6 & 3) == 0) {
        *(ushort *)((long)param_1 + (long)iVar8 * 0x10 + 0x1fe) = (ushort)uVar19;
        goto LAB_10814724c;
      }
      uVar20 = *(byte *)(param_1 + (long)iVar8 * 2 + 0x40) & 1;
      bVar9 = uVar14 == uVar19;
      uVar17 = *(uint *)(lVar24 + lVar23 + 0x10);
      if (uVar17 != uVar20) {
        uVar20 = uVar17;
      }
    }
    else {
      bVar9 = true;
      uVar20 = 1;
    }
    *(char *)(lVar22 + *(int *)(lVar24 + lVar23)) = (char)uVar20;
    *(char *)(*(long *)(*param_1 + 0x70) + (long)iVar11) = (char)uVar20;
    FUN_1081474f4(param_1,uVar19,*(undefined4 *)(lVar24 + lVar23),uVar20 & 0xff);
    if (bVar9) {
      uVar5 = *(ushort *)((long)param_1 + (long)iVar8 * 0x10 + 0x1fc);
      uVar14 = (ulong)uVar5;
      uVar16 = uVar19;
      uVar6 = uVar5;
      if (((uint)uVar19 & 0xffff) <= (uint)uVar5) {
        uVar6 = (ushort)uVar19;
      }
      while( true ) {
        uVar17 = (uint)uVar16;
        uVar15 = uVar6;
        if (((uVar17 & 0xffff) <= (uint)uVar5) ||
           (uVar15 = (ushort)uVar16,
           *(int *)(param_1[0x3d] + (ulong)((uVar17 & 0xffff) - 1) * 0x18) !=
           *(int *)(lVar24 + lVar23))) break;
        uVar16 = (ulong)(uVar17 - 1);
      }
      *(ushort *)((long)param_1 + (long)iVar8 * 0x10 + 0x1fe) = uVar15;
    }
    else {
      *(int *)(lVar24 + lVar23 + 4) = -iVar11;
      uVar14 = (ulong)*(ushort *)((long)param_1 + (long)iVar8 * 0x10 + 0x1fc);
      uVar18 = uVar19;
      for (lVar25 = lVar23;
          ((long)uVar14 < (long)uVar18 &&
          (*(int *)(param_1[0x3d] + lVar25 + -0x18) == *(int *)(lVar24 + lVar23)));
          lVar25 = lVar25 + -0x18) {
        *(undefined4 *)(param_1[0x3d] + lVar25 + -0x14) = 0;
        uVar18 = uVar18 - 1;
      }
      uVar6 = *(ushort *)((long)param_1 + (long)iVar8 * 0x10 + 0x1fe);
      for (lVar25 = lVar23;
          (uVar16 < uVar6 && (lVar2 = param_1[0x3d] + lVar25, *(int *)(lVar2 + 0x18) < iVar11));
          lVar25 = lVar25 + 0x18) {
        if (0 < *(int *)(lVar2 + 0x1c)) {
          *(undefined4 *)(lVar2 + 0x1c) = 0;
        }
        uVar16 = uVar16 + 1;
      }
    }
    lVar25 = *param_1;
    if ((uVar20 & 0xff) != 10) {
      *(undefined1 *)((long)param_1 + (long)iVar8 * 0x10 + 0x202) = 10;
      *(uint *)((long)param_1 + (long)iVar8 * 0x10 + 0x204) = uVar20 & 0xff;
      *(int *)plVar1 = iVar11;
      lVar22 = *(long *)(lVar25 + 0x78);
      bVar4 = *(byte *)(lVar22 + iVar11);
      if ((char)bVar4 < '\0') {
        *(byte *)((long)param_1 + (long)iVar8 * 0x10 + 0x201) = bVar4 & 1;
        lVar25 = uVar14 * 0x18 + 0xc;
        for (; (long)uVar14 < (long)uVar19; uVar14 = uVar14 + 1) {
          *(ushort *)(param_1[0x3d] + lVar25) =
               *(ushort *)(param_1[0x3d] + lVar25) | (ushort)(1 << ((long)(char)bVar4 & 1U));
          lVar25 = lVar25 + 0x18;
        }
        *(byte *)(lVar22 + iVar11) = *(byte *)(lVar22 + iVar11) & 0x7f;
        lVar22 = *(long *)(*param_1 + 0x78);
      }
      *(byte *)(lVar22 + *(int *)(param_1[0x3d] + lVar23)) =
           *(byte *)(lVar22 + *(int *)(param_1[0x3d] + lVar23)) & 0x7f;
      return;
    }
  }
LAB_10814724c:
  bVar7 = *(byte *)(*(long *)(lVar25 + 0x78) + (long)iVar11);
  if ((char)bVar7 < '\0') {
    uVar21 = bVar7 & 1;
    uVar13 = (undefined1)uVar21;
    if ((byte)(bVar4 - 0xb) < 0xfd) {
      *(undefined1 *)(lVar22 + iVar11) = uVar13;
    }
    *(undefined1 *)((long)param_1 + (long)iVar8 * 0x10 + 0x202) = uVar13;
    *(undefined1 *)((long)param_1 + (long)iVar8 * 0x10 + 0x201) = uVar13;
    *(uint *)((long)param_1 + (long)iVar8 * 0x10 + 0x204) = uVar21;
LAB_1081472c0:
    *(int *)plVar1 = iVar11;
  }
  else {
    if (bVar4 < 2) {
LAB_10814727c:
      *(byte *)((long)param_1 + (long)iVar8 * 0x10 + 0x202) = bVar4;
      *(byte *)((long)param_1 + (long)iVar8 * 0x10 + 0x201) = bVar4;
      uVar21 = (uint)(bVar4 != 0);
      *(uint *)((long)param_1 + (long)iVar8 * 0x10 + 0x204) = (uint)(bVar4 != 0);
      goto LAB_1081472c0;
    }
    if (bVar4 == 2) {
      *(undefined1 *)((long)param_1 + (long)iVar8 * 0x10 + 0x202) = 2;
      cVar3 = *(char *)((long)param_1 + (long)iVar8 * 0x10 + 0x201);
      if (cVar3 == '\r') {
        uVar13 = 5;
LAB_10814734c:
        *(undefined1 *)(lVar22 + iVar11) = uVar13;
LAB_108147350:
        uVar21 = 1;
      }
      else {
        if (cVar3 != '\0') {
          uVar13 = 0x18;
          goto LAB_10814734c;
        }
        if ((char)param_1[0x13d] == '\0') {
          uVar21 = 0;
          *(undefined1 *)(lVar22 + iVar11) = 0x17;
        }
        else {
          uVar21 = 0;
        }
      }
      *(uint *)((long)param_1 + (long)iVar8 * 0x10 + 0x204) = uVar21;
      *(int *)plVar1 = iVar11;
      goto LAB_10814735c;
    }
    if (bVar4 == 5) {
      *(undefined1 *)((long)param_1 + (long)iVar8 * 0x10 + 0x202) = 5;
      goto LAB_108147350;
    }
    if (bVar4 == 0x11) {
      uVar21 = (uint)*(byte *)((long)param_1 + (long)iVar8 * 0x10 + 0x202);
      if (uVar21 == 10) {
        *(undefined1 *)(lVar22 + iVar11) = 10;
        return;
      }
    }
    else {
      if (bVar4 == 0xd) goto LAB_10814727c;
      *(byte *)((long)param_1 + (long)iVar8 * 0x10 + 0x202) = bVar4;
    }
  }
  if (0xd < uVar21 || (1 << (ulong)(uVar21 & 0x1f) & 0x2003U) == 0) {
    return;
  }
LAB_10814735c:
  uVar19 = (ulong)*(ushort *)((long)param_1 + (long)iVar8 * 0x10 + 0x1fc);
  uVar6 = *(ushort *)((long)param_1 + (long)iVar8 * 0x10 + 0x1fe);
  lVar22 = uVar19 * 0x18;
  for (; uVar19 < uVar6; uVar19 = uVar19 + 1) {
    if (*(int *)(param_1[0x3d] + lVar22) < iVar11) {
      lVar25 = param_1[0x3d] + lVar22;
      *(ushort *)(lVar25 + 0xc) = *(ushort *)(lVar25 + 0xc) | (ushort)(1 << (uVar21 != 0));
    }
    lVar22 = lVar22 + 0x18;
  }
  return;
}



/* Entry: 1081473c0; end: 10814741b;  */

void FUN_1081473c0(long *param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  undefined1 uVar3;
  
  if ((1L << ((ulong)*(byte *)(*(long *)(*param_1 + 0x70) + (long)param_2) & 0x3f) & 0x780000U) != 0
     ) {
    return;
  }
  iVar2 = *(int *)((long)param_1 + 500);
  *(undefined2 *)((long)param_1 + (long)iVar2 * 0x10 + 0x1fe) =
       *(undefined2 *)((long)param_1 + (long)iVar2 * 0x10 + 0x1fc);
  uVar1 = param_4;
  if ((param_4 & 0x7f) <= (param_3 & 0x7f)) {
    uVar1 = param_3;
  }
  *(char *)(param_1 + (long)iVar2 * 2 + 0x40) = (char)param_4;
  uVar3 = (undefined1)(uVar1 & 1);
  *(undefined1 *)((long)param_1 + (long)iVar2 * 0x10 + 0x202) = uVar3;
  *(undefined1 *)((long)param_1 + (long)iVar2 * 0x10 + 0x201) = uVar3;
  *(uint *)((long)param_1 + (long)iVar2 * 0x10 + 0x204) = uVar1 & 1;
  *(int *)(param_1 + (long)iVar2 * 2 + 0x3f) = param_2;
  return;
}



/* Entry: 10814741c; end: 1081474f3;  */

void FUN_10814741c(long *param_1,undefined4 param_2,undefined8 param_3)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  undefined4 *puVar4;
  long lVar5;
  
  iVar2 = *(int *)((long)param_1 + 500);
  uVar1 = *(ushort *)((long)param_1 + (long)iVar2 * 0x10 + 0x1fe);
  if ((int)(uint)uVar1 < (int)param_1[0x3e]) {
    lVar3 = param_1[0x3d];
  }
  else {
    lVar5 = *param_1;
    lVar3 = lVar5 + 0x48;
    func_0x000108147a58(lVar3,lVar5 + 0x24,param_3,(uint)uVar1 * 0x30);
    if ((int)lVar3 == 0) {
      return;
    }
    if ((long *)param_1[0x3d] == param_1 + 1) {
      _memcpy(*(undefined8 *)(lVar5 + 0x48),param_1 + 1,0x1e0);
    }
    lVar3 = *(long *)(lVar5 + 0x48);
    param_1[0x3d] = lVar3;
    *(int *)(param_1 + 0x3e) = (int)((ulong)(long)*(int *)(lVar5 + 0x24) / 0x18);
    uVar1 = *(ushort *)((long)param_1 + (long)iVar2 * 0x10 + 0x1fe);
  }
  puVar4 = (undefined4 *)(lVar3 + (ulong)uVar1 * 0x18);
  *puVar4 = (int)param_3;
  puVar4[1] = param_2;
  puVar4[4] = *(undefined4 *)((long)param_1 + (long)iVar2 * 0x10 + 0x204);
  puVar4[2] = (int)param_1[(long)iVar2 * 2 + 0x3f];
  *(undefined2 *)(puVar4 + 3) = 0;
  *(ushort *)((long)param_1 + (long)iVar2 * 0x10 + 0x1fe) = uVar1 + 1;
  return;
}



/* Entry: 1081474f4; end: 108147993;  */

void FUN_1081474f4(long *param_1,int param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  int *piVar6;
  
  func_0x000108147ab4();
  iVar1 = *(int *)((long)param_1 + 500);
  lVar5 = *(long *)(*param_1 + 0x70);
  uVar4 = (ulong)(param_2 + 1);
  piVar6 = (int *)(param_1[0x3d] + uVar4 * 0x18);
  do {
    if ((uint)*(ushort *)((long)param_1 + (long)iVar1 * 0x10 + 0x1fe) <= (uint)uVar4) {
      return;
    }
    if (piVar6[1] < 0) {
      if (param_3 < piVar6[2]) {
        return;
      }
      iVar2 = *piVar6;
      if (param_3 < iVar2) {
        if (piVar6[4] == (int)param_4) {
          return;
        }
        *(char *)(lVar5 + iVar2) = (char)param_4;
        iVar3 = piVar6[1];
        *(char *)(lVar5 - iVar3) = (char)param_4;
        piVar6[1] = 0;
        FUN_1081474f4(param_1,uVar4,(long)iVar2,param_4);
        FUN_1081474f4(param_1,uVar4,-iVar3,param_4);
      }
    }
    uVar4 = (ulong)((uint)uVar4 + 1);
    piVar6 = piVar6 + 6;
  } while( true );
}



/* Entry: 108147994; end: 108147d2b;  */

void FUN_108147994(long param_1,long param_2,int param_3,int param_4,undefined1 param_5)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = 0;
  for (lVar2 = (long)param_3; lVar2 < param_4; lVar2 = lVar2 + 1) {
    bVar1 = *(byte *)(param_1 + lVar2);
    iVar3 = iVar3 - (uint)(bVar1 == 0x16);
    if (iVar3 == 0) {
      *(undefined1 *)(param_2 + lVar2) = param_5;
    }
    if ((bVar1 & 0xfe) == 0x14) {
      iVar3 = iVar3 + 1;
    }
  }
  return;
}



/* Entry: 108147d2c; end: 108147feb;  */

void FUN_108147d2c(long *param_1,ulong param_2,int param_3,long *param_4,int *param_5)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  byte bVar7;
  int iVar8;
  long lVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  
  if (param_5 == (int *)0x0) {
    return;
  }
  if (0 < *param_5) {
    return;
  }
  if ((param_1 == (long *)0x0) || ((long *)*param_1 != param_1)) {
    iVar6 = 0x1b;
    goto LAB_108147dfc;
  }
  iVar6 = (int)param_2;
  if ((((-1 < iVar6) && (uVar2 = param_3 - iVar6, uVar2 != 0 && iVar6 <= param_3)) &&
      (param_3 <= *(int *)((long)param_1 + 0x14))) && (param_4 != (long *)0x0)) {
    plVar4 = param_1;
    FUN_108148a34(param_1,param_2);
    plVar5 = param_1;
    FUN_108148a34(param_1,param_3 + -1);
    if ((int)plVar4 == (int)plVar5) {
      lVar9 = param_1[1];
      uVar14 = param_2 & 0xffffffff;
      *param_4 = 0;
      param_4[1] = lVar9 + (param_2 & 0xffffffff) * 2;
      *(uint *)(param_4 + 2) = uVar2;
      *(uint *)((long)param_4 + 0x14) = uVar2;
      *(uint *)(param_4 + 3) = uVar2;
      if ((*(char *)((long)param_1 + 0x8e) == '\0') || (iVar6 < *(int *)param_1[0x1a])) {
        uVar3 = (uint)*(byte *)((long)param_1 + 0x8d);
      }
      else {
        plVar4 = param_1;
        FUN_108144b4c(param_1,param_2);
        uVar3 = (uint)plVar4;
      }
      bVar7 = (byte)uVar3;
      *(byte *)((long)param_4 + 0x8d) = bVar7;
      *(int *)(param_4 + 0x19) = (int)param_1[0x19];
      param_4[0x26] = 0;
      *(undefined4 *)((long)param_4 + 0xbc) = 0;
      *(undefined8 *)((long)param_4 + 0x84) = *(undefined8 *)((long)param_1 + 0x84);
      *(undefined4 *)(param_4 + 0x37) = 0;
      if (0 < (int)param_1[0x37]) {
        iVar8 = 0;
        lVar9 = uVar14 << 1;
        for (; (int)param_2 < param_3; param_2 = (ulong)((int)param_2 + 1)) {
          if ((*(ushort *)(param_1[1] + lVar9) >> 2 == 0x803) ||
             (uVar12 = *(ushort *)(param_1[1] + lVar9) - 0x202a,
             uVar12 < 0x40 && (1L << ((ulong)uVar12 & 0x3f) & 0xf00000000000001fU) != 0)) {
            iVar8 = iVar8 + 1;
            *(int *)(param_4 + 0x37) = iVar8;
          }
          lVar9 = lVar9 + 2;
        }
        *(uint *)(param_4 + 3) = uVar2 - iVar8;
      }
      lVar1 = param_1[0xf];
      lVar9 = param_1[0xe] + uVar14;
      pbVar10 = (byte *)(lVar1 + uVar14);
      param_4[0xe] = lVar9;
      param_4[0xf] = (long)pbVar10;
      *(undefined4 *)(param_4 + 0x25) = 0xffffffff;
      if ((int)param_1[0x17] == 2) {
        uVar12 = uVar2;
        if (*(char *)(lVar9 + (int)uVar2 + -1) != '\a') {
          uVar11 = uVar2;
          do {
            uVar12 = uVar11;
            if ((int)uVar12 < 1) {
              uVar12 = 0;
              break;
            }
            uVar11 = uVar12 - 1;
          } while ((1L << ((ulong)*(byte *)(lVar9 + -1 + (ulong)uVar12) & 0x3f) & 0x7ddb80U) != 0);
          do {
            if ((int)uVar12 < 1) goto LAB_108147fb4;
            if (pbVar10[(ulong)uVar12 - 1] != uVar3) break;
            uVar12 = uVar12 - 1;
          } while( true );
        }
        *(uint *)((long)param_4 + 0xc4) = uVar12;
        uVar11 = *pbVar10 & 1;
        if ((int)uVar2 <= (int)uVar12 || (uVar3 & 1) == uVar11) {
          uVar13 = (ulong)uVar12;
          pbVar10 = (byte *)(uVar14 + lVar1);
          do {
            uVar13 = uVar13 - 1;
            pbVar10 = pbVar10 + 1;
            if (uVar13 == 0) goto LAB_108147fbc;
          } while ((*pbVar10 & 1) == uVar11);
        }
        *(undefined4 *)(param_4 + 0x17) = 2;
        goto LAB_108147fe4;
      }
      *(int *)(param_4 + 0x17) = (int)param_1[0x17];
      iVar8 = *(int *)((long)param_1 + 0xc4);
      if (iVar8 - iVar6 != 0 && iVar6 <= iVar8) {
        if (iVar8 < param_3) {
          *(int *)((long)param_4 + 0xc4) = iVar8 - iVar6;
        }
        else {
          *(uint *)((long)param_4 + 0xc4) = uVar2;
        }
        goto LAB_108147fe4;
      }
      goto LAB_108147fe0;
    }
  }
  iVar6 = 1;
LAB_108147dfc:
  *param_5 = iVar6;
  return;
LAB_108147fb4:
  *(undefined4 *)((long)param_4 + 0xc4) = 0;
  uVar11 = uVar3 & 1;
LAB_108147fbc:
  *(uint *)(param_4 + 0x17) = uVar11;
  if (uVar11 == 0) {
    bVar7 = bVar7 + 1 & 0xfe;
  }
  else {
    bVar7 = bVar7 | 1;
  }
  *(byte *)((long)param_4 + 0x8d) = bVar7;
LAB_108147fe0:
  *(undefined4 *)((long)param_4 + 0xc4) = 0;
LAB_108147fe4:
  *param_4 = (long)param_1;
  return;
}



/* Entry: 108147fec; end: 1081480fb;  */

long FUN_108147fec(long *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  
  if ((param_2 == (int *)0x0) || (0 < *param_2)) {
    return 0;
  }
  if ((param_1 == (long *)0x0) ||
     ((plVar3 = (long *)*param_1, plVar3 != param_1 &&
      ((plVar3 == (long *)0x0 || ((long *)*plVar3 != plVar3)))))) {
    iVar2 = 0x1b;
  }
  else {
    iVar2 = *(int *)((long)param_1 + 0x14);
    if (iVar2 < 1) {
      iVar2 = 1;
    }
    else {
      iVar1 = *(int *)((long)param_1 + 0xc4);
      if (iVar2 == iVar1) {
        return param_1[0xf];
      }
      plVar3 = param_1 + 8;
      func_0x000108144a50(plVar3,param_1 + 4,(long)(char)param_1[0xd],iVar2);
      if ((int)plVar3 != 0) {
        lVar4 = param_1[8];
        if ((0 < iVar1) && (lVar4 != param_1[0xf])) {
          _memcpy(lVar4,param_1[0xf],iVar1);
        }
        _memset(lVar4 + iVar1,*(undefined1 *)((long)param_1 + 0x8d),(long)(iVar2 - iVar1));
        *(int *)((long)param_1 + 0xc4) = iVar2;
        param_1[0xf] = lVar4;
        return lVar4;
      }
      iVar2 = 7;
    }
  }
  *param_2 = iVar2;
  return 0;
}



/* Entry: 1081480fc; end: 108148183;  */

undefined4 FUN_1081480fc(long *param_1,int *param_2)

{
  long *plVar1;
  
  if (param_2 == (int *)0x0) {
    return 0xffffffff;
  }
  if (*param_2 < 1) {
    if ((param_1 == (long *)0x0) ||
       ((plVar1 = (long *)*param_1, plVar1 != param_1 &&
        ((plVar1 == (long *)0x0 || ((long *)*plVar1 != plVar1)))))) {
      *param_2 = 0x1b;
    }
    else {
      FUN_108148184(param_1,param_2);
      if (*param_2 < 1) {
        return (int)param_1[0x25];
      }
    }
  }
  return 0xffffffff;
}



/* Entry: 108148184; end: 108148623;  */

long FUN_108148184(long param_1,undefined8 param_2)

{
  byte *pbVar1;
  int *piVar2;
  undefined4 *puVar3;
  ushort *puVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  byte bVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  uint uVar17;
  undefined8 *puVar18;
  ulong uVar19;
  ulong uVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  undefined8 *puVar24;
  uint *puVar25;
  int iVar26;
  ulong uVar27;
  long lVar28;
  int *piVar29;
  int iVar30;
  int iVar31;
  byte *pbVar32;
  undefined4 *puVar33;
  ushort *puVar34;
  
  if (-1 < *(int *)(param_1 + 0x128)) {
    return 1;
  }
  if (*(int *)(param_1 + 0xb8) == 2) {
    uVar17 = 0;
    uVar7 = *(uint *)(param_1 + 0x14);
    pbVar32 = *(byte **)(param_1 + 0x78);
    uVar8 = *(uint *)(param_1 + 0xc4);
    bVar22 = 0xfe;
    for (uVar19 = 0; (uVar8 & ((int)uVar8 >> 0x1f ^ 0xffffffffU)) != uVar19; uVar19 = uVar19 + 1) {
      pbVar1 = pbVar32 + uVar19;
      if (*pbVar1 != bVar22) {
        uVar17 = uVar17 + 1;
      }
      bVar22 = *pbVar1;
    }
    if (uVar17 != 1 || uVar7 != uVar8) {
      if ((int)uVar8 < (int)uVar7) {
        uVar17 = uVar17 + 1;
      }
      uVar19 = (ulong)uVar17;
      lVar28 = param_1 + 0x58;
      func_0x000108144a50(lVar28,param_1 + 0x2c,(long)*(char *)(param_1 + 0x69),uVar17 * 0xc);
      if ((int)lVar28 == 0) {
        return lVar28;
      }
      uVar20 = 0;
      uVar27 = 0;
      puVar18 = *(undefined8 **)(param_1 + 0x58);
      bVar22 = 0;
      bVar23 = 0x7e;
      do {
        lVar28 = 0;
        bVar11 = pbVar32[uVar27];
        bVar5 = bVar11;
        if (bVar23 <= bVar11) {
          bVar5 = bVar23;
        }
        bVar21 = bVar11;
        if (bVar11 <= bVar22) {
          bVar21 = bVar22;
        }
        iVar26 = (int)uVar27;
        uVar6 = uVar8;
        if ((int)uVar8 <= iVar26 + 1) {
          uVar6 = iVar26 + 1;
        }
        do {
          lVar13 = uVar27 + lVar28 + 1;
          if ((int)uVar8 <= lVar13) goto LAB_1081482d0;
          lVar12 = lVar28 + uVar27 + 1;
          lVar28 = lVar28 + 1;
        } while (pbVar32[lVar12] == bVar11);
        uVar6 = iVar26 + (int)lVar28;
LAB_1081482d0:
        uVar27 = (ulong)uVar6;
        piVar29 = (int *)((long)puVar18 + uVar20 * 0xc);
        *piVar29 = iVar26;
        piVar29[1] = uVar6 - iVar26;
        piVar29[2] = 0;
        uVar20 = uVar20 + 1;
        bVar22 = bVar21;
        bVar23 = bVar5;
      } while (lVar13 < (int)uVar8);
      bVar22 = bVar5;
      if (uVar7 - uVar8 != 0 && (int)uVar8 <= (int)uVar7) {
        puVar25 = (uint *)((long)puVar18 + (uVar20 & 0xffffffff) * 0xc);
        *puVar25 = uVar8;
        puVar25[1] = uVar7 - uVar8;
        bVar22 = *(byte *)(param_1 + 0x8d);
        if (bVar5 <= *(byte *)(param_1 + 0x8d)) {
          bVar22 = bVar5;
        }
      }
      *(undefined8 **)(param_1 + 0x130) = puVar18;
      *(uint *)(param_1 + 0x128) = uVar17;
      if ((bVar22 | 1) < bVar21) {
        lVar28 = *(long *)(param_1 + 0x78);
        iVar26 = uVar17 - (*(int *)(param_1 + 0xc4) < *(int *)(param_1 + 0x14));
LAB_108148344:
        bVar21 = bVar21 - 1;
        if (bVar22 < bVar21) {
          iVar30 = 0;
          do {
            lVar12 = (long)iVar30;
            piVar29 = (int *)((long)puVar18 + (long)iVar30 * 0xc);
            lVar13 = lVar12;
            while( true ) {
              lVar13 = lVar13 + 1;
              if (iVar26 <= lVar12) goto LAB_108148344;
              if (bVar21 <= *(byte *)(lVar28 + *piVar29)) break;
              lVar12 = lVar12 + 1;
              piVar29 = piVar29 + 3;
              iVar30 = iVar30 + 1;
            }
            lVar14 = 0xc;
            do {
              iVar31 = iVar26;
              if (iVar26 <= lVar13) break;
              piVar2 = (int *)((long)piVar29 + lVar14);
              iVar31 = iVar30 + 1;
              lVar14 = lVar14 + 0xc;
              lVar13 = lVar13 + 1;
              iVar30 = iVar31;
            } while (bVar21 <= *(byte *)(lVar28 + *piVar2));
            lVar13 = 0;
            lVar14 = (long)(iVar31 + -1);
            puVar15 = (undefined8 *)((long)puVar18 + (long)(iVar31 + -1) * 0xc);
            for (; lVar12 < lVar14; lVar12 = lVar12 + 1) {
              puVar24 = (undefined8 *)((long)piVar29 + lVar13);
              uVar16 = *puVar24;
              uVar9 = *(undefined4 *)(puVar24 + 1);
              uVar10 = *(undefined4 *)(puVar15 + 1);
              *puVar24 = *puVar15;
              *(undefined4 *)(puVar24 + 1) = uVar10;
              *puVar15 = uVar16;
              *(undefined4 *)(puVar15 + 1) = uVar9;
              lVar14 = lVar14 + -1;
              puVar15 = (undefined8 *)((long)puVar15 + -0xc);
              lVar13 = lVar13 + 0xc;
            }
            iVar30 = iVar31 + 1;
          } while (iVar31 != iVar26);
          goto LAB_108148344;
        }
        if ((bVar22 & 1) != 0) {
          iVar26 = iVar26 - (uint)(*(int *)(param_1 + 0xc4) == *(int *)(param_1 + 0x14));
          lVar13 = (long)iVar26;
          puVar24 = (undefined8 *)((long)puVar18 + (long)iVar26 * 0xc);
          puVar15 = puVar18;
          for (lVar28 = 0; lVar28 < lVar13; lVar28 = lVar28 + 1) {
            uVar16 = *puVar15;
            uVar9 = *(undefined4 *)(puVar15 + 1);
            uVar10 = *(undefined4 *)(puVar24 + 1);
            *puVar15 = *puVar24;
            *(undefined4 *)(puVar15 + 1) = uVar10;
            *puVar24 = uVar16;
            *(undefined4 *)(puVar24 + 1) = uVar9;
            lVar13 = lVar13 + -1;
            puVar24 = (undefined8 *)((long)puVar24 + -0xc);
            puVar15 = (undefined8 *)((long)puVar15 + 0xc);
          }
        }
      }
      iVar26 = 0;
      piVar29 = (int *)((long)puVar18 + 4);
      for (; uVar19 != 0; uVar19 = uVar19 - 1) {
        iVar26 = *piVar29 + iVar26;
        piVar29[-1] = piVar29[-1] | (uint)pbVar32[piVar29[-1]] << 0x1f;
        *piVar29 = iVar26;
        piVar29 = piVar29 + 3;
      }
      if ((uint)uVar20 < uVar17) {
        uVar20 = uVar20 & 0xffffffff;
        if ((*(byte *)(param_1 + 0x8d) & 1) != 0) {
          uVar20 = 0;
        }
        *(uint *)((long)puVar18 + uVar20 * 0xc) =
             *(uint *)((long)puVar18 + uVar20 * 0xc) | (uint)*(byte *)(param_1 + 0x8d) << 0x1f;
      }
      goto LAB_108148450;
    }
    bVar22 = *pbVar32;
    *(long *)(param_1 + 0x130) = param_1 + 0x138;
    *(undefined4 *)(param_1 + 0x128) = 1;
    *(uint *)(param_1 + 0x138) = (uint)bVar22 << 0x1f;
    *(uint *)(param_1 + 0x13c) = uVar7;
  }
  else {
    *(long *)(param_1 + 0x130) = param_1 + 0x138;
    *(undefined4 *)(param_1 + 0x128) = 1;
    *(uint *)(param_1 + 0x138) = (uint)*(byte *)(param_1 + 0x8d) << 0x1f;
    *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(param_1 + 0x14);
  }
  *(undefined4 *)(param_1 + 0x140) = 0;
LAB_108148450:
  if (0 < (int)*(uint *)(param_1 + 0x1a4)) {
    puVar33 = *(undefined4 **)(param_1 + 0x1b0);
    puVar3 = puVar33 + (ulong)*(uint *)(param_1 + 0x1a4) * 2;
    for (; puVar33 < puVar3; puVar33 = puVar33 + 2) {
      iVar26 = *(int *)(param_1 + 0x128);
      FUN_108148700(iVar26,*(undefined8 *)(param_1 + 0x130),*puVar33,param_2);
      lVar28 = *(long *)(param_1 + 0x130) + (long)iVar26 * 0xc;
      *(uint *)(lVar28 + 8) = *(uint *)(lVar28 + 8) | puVar33[1];
    }
  }
  if (0 < *(int *)(param_1 + 0x1b8)) {
    iVar26 = 0;
    puVar34 = *(ushort **)(param_1 + 8);
    puVar4 = puVar34 + *(int *)(param_1 + 0x14);
    for (; puVar34 < puVar4; puVar34 = puVar34 + 1) {
      if ((*puVar34 >> 2 == 0x803) ||
         (uVar17 = *puVar34 - 0x202a,
         uVar17 < 0x40 && (1L << ((ulong)uVar17 & 0x3f) & 0xf00000000000001fU) != 0)) {
        iVar30 = *(int *)(param_1 + 0x128);
        FUN_108148700(iVar30,*(undefined8 *)(param_1 + 0x130),iVar26,param_2);
        lVar28 = *(long *)(param_1 + 0x130) + (long)iVar30 * 0xc;
        *(int *)(lVar28 + 8) = *(int *)(lVar28 + 8) + -1;
      }
      iVar26 = iVar26 + 1;
    }
  }
  return 1;
}



/* Entry: 108148624; end: 1081486ff;  */

uint FUN_108148624(long *param_1,uint param_2,uint *param_3,int *param_4)

{
  uint uVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  uint *puVar5;
  int iStack_34;
  
  iStack_34 = 0;
  if (param_1 == (long *)0x0) {
    return 0;
  }
  plVar2 = (long *)*param_1;
  if ((plVar2 == param_1) || ((plVar2 != (long *)0x0 && ((long *)*plVar2 == plVar2)))) {
    FUN_108148184(param_1,&iStack_34);
    if ((int)param_2 < 0) {
      return 0;
    }
    if (0 < iStack_34) {
      return 0;
    }
    if ((int)param_2 < (int)param_1[0x25]) {
      lVar4 = param_1[0x26];
      puVar5 = (uint *)(lVar4 + (ulong)param_2 * 0xc);
      uVar1 = *puVar5;
      if (param_3 != (uint *)0x0) {
        *param_3 = uVar1 & 0x7fffffff;
      }
      if (param_4 != (int *)0x0) {
        if (param_2 == 0) {
          iVar3 = *(int *)(lVar4 + 4);
        }
        else {
          iVar3 = *(int *)(lVar4 + (ulong)param_2 * 0xc + 4) - puVar5[-2];
        }
        *param_4 = iVar3;
      }
      return uVar1 >> 0x1f;
    }
  }
  return 0;
}



/* Entry: 108148700; end: 10814875b;  */

ulong FUN_108148700(uint param_1,long param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  ulong uVar2;
  int *piVar3;
  int iVar4;
  
  uVar2 = 0;
  piVar3 = (int *)(param_2 + 4);
  iVar4 = 0;
  while( true ) {
    if ((param_1 & ((int)param_1 >> 0x1f ^ 0xffffffffU)) == uVar2) {
      *param_4 = 0x1b;
      return 0;
    }
    iVar1 = *piVar3;
    if (((int)(piVar3[-1] & 0x7fffffffU) <= param_3) &&
       (param_3 < (int)((iVar1 - iVar4) + (piVar3[-1] & 0x7fffffffU)))) break;
    uVar2 = uVar2 + 1;
    piVar3 = piVar3 + 3;
    iVar4 = iVar1;
  }
  return uVar2;
}



/* Entry: 10814875c; end: 108148a33;  */

void FUN_10814875c(long param_1,uint *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  uint *puVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  uint *puVar15;
  ulong uVar16;
  uint *puVar17;
  ulong uVar18;
  uint uVar19;
  uint uVar20;
  
  if ((param_3 != (int *)0x0) && (*param_3 < 1)) {
    if (param_2 == (uint *)0x0) {
      *param_3 = 1;
    }
    else {
      FUN_1081480fc(param_1,param_3);
      if ((*param_3 < 1) && (0 < *(int *)(param_1 + 0x18))) {
        puVar11 = *(uint **)(param_1 + 0x130);
        iVar13 = *(int *)(param_1 + 0x128);
        puVar14 = param_2;
        uVar12 = 0;
        for (puVar17 = puVar11; puVar17 < puVar11 + (long)iVar13 * 3; puVar17 = puVar17 + 3) {
          uVar19 = *puVar17;
          uVar4 = puVar17[1];
          uVar20 = uVar12;
          if ((int)uVar19 < 0) {
            uVar20 = ~uVar12 + uVar4 + (uVar19 & 0x7fffffff);
            uVar19 = uVar12;
            do {
              puVar15 = puVar14 + 1;
              *puVar14 = uVar20;
              uVar19 = uVar19 + 1;
              uVar20 = uVar20 - 1;
              puVar14 = puVar15;
            } while ((int)uVar19 < (int)uVar4);
          }
          else {
            do {
              puVar15 = puVar14 + 1;
              *puVar14 = uVar19;
              uVar19 = uVar19 + 1;
              uVar20 = uVar20 + 1;
              puVar14 = puVar15;
            } while ((int)uVar20 < (int)uVar4);
          }
          if ((int)uVar4 <= (int)(uVar12 + 1)) {
            uVar4 = uVar12 + 1;
          }
          puVar14 = puVar15;
          uVar12 = uVar4;
        }
        if (*(int *)(param_1 + 0x1a4) < 1) {
          if (0 < *(int *)(param_1 + 0x1b8)) {
            uVar18 = 0;
            uVar12 = *(uint *)(param_1 + 0x128);
            uVar19 = 0;
            for (uVar16 = 0; uVar16 != (uVar12 & ((int)uVar12 >> 0x1f ^ 0xffffffffU));
                uVar16 = uVar16 + 1) {
              puVar17 = puVar11 + uVar16 * 3;
              uVar4 = puVar17[1];
              uVar20 = uVar4 - uVar19;
              if (puVar17[2] == 0 && (uint)uVar18 == uVar19) {
                uVar18 = (ulong)(uVar20 + (uint)uVar18);
              }
              else if (puVar17[2] == 0) {
                uVar9 = -(uVar18 >> 0x1f) & 0xfffffffc00000000 | uVar18 << 2;
                for (lVar8 = (long)(int)uVar19; lVar8 < (int)uVar4; lVar8 = lVar8 + 1) {
                  *(uint *)((long)param_2 + uVar9) = param_2[lVar8];
                  uVar18 = (ulong)((int)uVar18 + 1);
                  uVar9 = uVar9 + 4;
                }
              }
              else {
                uVar5 = *puVar17;
                uVar2 = uVar5 & 0x7fffffff;
                uVar19 = ~uVar19 + uVar4 + uVar2;
                for (uVar20 = uVar20 & ((int)uVar20 >> 0x1f ^ 0xffffffffU); uVar20 != 0;
                    uVar20 = uVar20 - 1) {
                  uVar3 = uVar19;
                  if (-1 < (int)uVar5) {
                    uVar3 = uVar2;
                  }
                  uVar6 = *(ushort *)(*(long *)(param_1 + 8) + (long)(int)uVar3 * 2);
                  if ((uVar6 >> 2 != 0x803) &&
                     (uVar1 = uVar6 - 0x202a,
                     0x3f < uVar1 || (1L << ((ulong)uVar1 & 0x3f) & 0xf00000000000001fU) == 0)) {
                    param_2[(int)uVar18] = uVar3;
                    uVar18 = (ulong)((int)uVar18 + 1);
                  }
                  uVar2 = uVar2 + 1;
                  uVar19 = uVar19 - 1;
                }
              }
              uVar19 = uVar4;
            }
          }
        }
        else {
          iVar13 = 0;
          uVar12 = *(uint *)(param_1 + 0x128);
          puVar17 = puVar11 + 2;
          for (uVar16 = (ulong)(uVar12 & ((int)uVar12 >> 0x1f ^ 0xffffffffU)); uVar16 != 0;
              uVar16 = uVar16 - 1) {
            if ((*puVar17 & 5) != 0) {
              iVar13 = iVar13 + 1;
            }
            if ((*puVar17 & 10) != 0) {
              iVar13 = iVar13 + 1;
            }
            puVar17 = puVar17 + 3;
          }
          uVar18 = (ulong)*(uint *)(param_1 + 0x18);
          uVar16 = (ulong)uVar12;
          while (0 < (int)uVar16 && 0 < iVar13) {
            uVar9 = uVar16 - 1;
            uVar12 = puVar11[uVar9 * 3 + 2];
            if ((uVar12 & 10) != 0) {
              uVar19 = (int)uVar18 - 1;
              uVar18 = (ulong)uVar19;
              param_2[(int)uVar19] = 0xffffffff;
              iVar13 = iVar13 + -1;
            }
            if (uVar16 < 2) {
              lVar8 = 0;
            }
            else {
              lVar8 = (long)(int)puVar11[uVar16 * 3 + -5];
            }
            lVar10 = (long)(int)puVar11[uVar9 * 3 + 1];
            uVar16 = -(uVar18 >> 0x1f) & 0xfffffffc00000000 | uVar18 << 2;
            while ((lVar8 < lVar10 && (iVar13 != 0))) {
              lVar7 = lVar10 + -1;
              lVar10 = lVar10 + -1;
              *(uint *)((long)param_2 + (uVar16 - 4)) = param_2[lVar7];
              uVar18 = (ulong)((int)uVar18 - 1);
              uVar16 = uVar16 - 4;
            }
            uVar16 = uVar9;
            if ((uVar12 & 5) != 0) {
              uVar12 = (int)uVar18 - 1;
              uVar18 = (ulong)uVar12;
              param_2[(int)uVar12] = 0xffffffff;
              iVar13 = iVar13 + -1;
            }
          }
        }
      }
    }
  }
  return;
}



/* Entry: 108148a34; end: 108148a47;  */

int FUN_108148a34(long *param_1,int param_2)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  int *piVar4;
  int *unaff_x23;
  
  if ((unaff_x23 != (int *)0x0) && (*unaff_x23 < 1)) {
    if ((param_1 == (long *)0x0) ||
       ((plVar2 = (long *)*param_1, plVar2 != param_1 &&
        ((plVar2 == (long *)0x0 || ((long *)*plVar2 != plVar2)))))) {
      iVar3 = 0x1b;
    }
    else {
      if ((-1 < param_2) && (param_2 < *(int *)((long)plVar2 + 0x14))) {
        iVar3 = -1;
        piVar4 = (int *)plVar2[0x1a];
        do {
          iVar1 = *piVar4;
          iVar3 = iVar3 + 1;
          piVar4 = piVar4 + 2;
        } while (iVar1 <= param_2);
        FUN_108146ca4(plVar2,iVar3,0,0,0);
        return iVar3;
      }
      iVar3 = 1;
    }
    *unaff_x23 = iVar3;
  }
  return -1;
}



/* Entry: 108148a48; end: 108148b2f;  */

ulong FUN_108148a48(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   int *param_6)

{
  int iVar1;
  
  if ((param_6 == (int *)0x0) || (0 < *param_6)) {
    param_1 = 0;
  }
  else if (((((param_1 == 0) || (iVar1 = (int)param_2, iVar1 < -1)) || ((int)param_4 < 0)) ||
           ((param_3 == 0 && ((int)param_4 != 0)))) ||
          ((param_3 != 0 &&
           ((param_3 <= param_1 && param_1 < param_3 + (param_4 & 0xffffffff) * 2 ||
            (param_1 <= param_3 && param_3 < param_1 + (long)iVar1 * 2)))))) {
    param_1 = 0;
    *param_6 = 1;
  }
  else {
    if (iVar1 == -1) {
      param_2 = param_1;
      func_0x00010814b068();
    }
    if ((int)param_2 < 1) {
      param_1 = 0;
    }
    else {
      FUN_108148b30(param_1,param_2,param_3,param_4,param_5,param_6);
    }
    func_0x00010814967c();
  }
  return param_1;
}



/* Entry: 108148b30; end: 108149643;  */

ulong FUN_108148b30(ushort *param_1,ulong param_2,ushort *param_3,int param_4,uint param_5,
                   undefined4 *param_6)

{
  ushort *puVar1;
  uint uVar2;
  ushort uVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  ushort *puVar10;
  uint uVar11;
  ulong uVar12;
  int iVar13;
  ulong uVar14;
  
  iVar7 = (int)param_2;
  uVar12 = param_2;
  if ((param_5 & 0xb) == 1) {
    uVar9 = param_2;
    if (iVar7 <= param_4) {
LAB_108148c08:
      do {
        iVar7 = (int)uVar12;
        uVar14 = (ulong)(iVar7 - 1U);
        uVar3 = param_1[(int)(iVar7 - 1U)];
        uVar6 = (ulong)uVar3;
        if (iVar7 < 2 || (uVar3 & 0xfc00) != 0xdc00) {
LAB_108148c3c:
          if (0 < (int)uVar14) goto LAB_108148c44;
          bVar4 = false;
        }
        else {
          if ((param_1[(uVar12 & 0xffffffff) - 2] & 0xfc00) == 0xd800) {
            uVar14 = (ulong)(iVar7 - 2);
            uVar6 = (ulong)(uVar3 + 0xfca02400);
            goto LAB_108148c3c;
          }
LAB_108148c44:
          func_0x0001081496b0();
          bVar4 = true;
          uVar12 = uVar14;
          if ((1L << (uVar6 & 0x3f) & 0x1c0U) != 0) goto LAB_108148c08;
        }
        lVar8 = (long)(int)uVar14;
        puVar10 = param_3;
        do {
          puVar1 = param_1 + lVar8;
          lVar8 = lVar8 + 1;
          param_3 = puVar10 + 1;
          *puVar10 = *puVar1;
          puVar10 = param_3;
        } while (lVar8 < (int)uVar9);
        uVar12 = uVar14;
        uVar9 = uVar14;
        if (!bVar4) {
          return param_2;
        }
      } while( true );
    }
  }
  else if ((param_5 & 0xb) == 0) {
    if (iVar7 <= param_4) {
      do {
        iVar7 = (int)uVar12;
        uVar11 = iVar7 - 1;
        uVar9 = (ulong)uVar11;
        if (iVar7 < 2 || (param_1[(int)uVar11] & 0xfc00) != 0xdc00) {
          uVar12 = (long)(int)uVar11;
        }
        else {
          uVar2 = iVar7 - 2;
          if ((param_1[(uVar12 & 0xffffffff) - 2] & 0xfc00) != 0xd800) {
            uVar2 = uVar11;
          }
          uVar9 = (ulong)uVar2;
          uVar12 = uVar9;
        }
        puVar10 = param_3;
        do {
          puVar1 = param_1 + uVar12;
          uVar12 = uVar12 + 1;
          param_3 = puVar10 + 1;
          *puVar10 = *puVar1;
          puVar10 = param_3;
        } while ((long)uVar12 < (long)iVar7);
        uVar12 = uVar9;
      } while (0 < (int)uVar9);
      return param_2;
    }
  }
  else {
    if ((param_5 >> 3 & 1) != 0) {
      uVar12 = 0;
      iVar13 = iVar7 + 1;
      do {
        puVar10 = param_1 + 1;
        uVar3 = *param_1;
        uVar11 = (uint)uVar12;
        if ((uVar3 - 0x202f < 0xfffffffb && uVar3 - 0x206a < 0xfffffffc) &&
            (uVar3 & 0xfffc) != 0x200c) {
          uVar11 = uVar11 + 1;
        }
        uVar12 = (ulong)uVar11;
        iVar13 = iVar13 + -1;
        param_1 = puVar10;
      } while (1 < iVar13);
      param_1 = puVar10 + -(long)iVar7;
    }
    if ((int)uVar12 <= param_4) {
      do {
        iVar7 = (int)param_2;
        uVar11 = iVar7 - 1;
        uVar3 = param_1[(int)uVar11];
        uVar9 = (ulong)uVar3;
        if (1 < iVar7 && (uVar3 & 0xfc00) == 0xdc00) {
          bVar4 = (param_1[(param_2 & 0xffffffff) - 2] & 0xfc00) == 0xd800;
          uVar2 = (uint)uVar3;
          if (bVar4) {
            uVar2 = uVar3 + 0xfca02400 + (uint)param_1[(param_2 & 0xffffffff) - 2] * 0x400;
          }
          uVar9 = (ulong)uVar2;
          if (bVar4) {
            uVar11 = iVar7 - 2;
          }
        }
        param_2 = (ulong)uVar11;
        if (((param_5 & 1) != 0) && (0 < (int)uVar11)) {
          do {
            uVar6 = uVar9;
            func_0x0001081496b0();
            if ((1L << (uVar6 & 0x3f) & 0x1c0U) == 0) goto LAB_108148dbc;
            iVar13 = (int)param_2;
            uVar6 = (ulong)(iVar13 - 1U);
            uVar3 = param_1[uVar6];
            uVar9 = (ulong)uVar3;
            if ((uVar3 & 0xfc00) == 0xdc00) {
              if (iVar13 < 2) break;
              bVar4 = (param_1[param_2 - 2] & 0xfc00) == 0xd800;
              uVar11 = (uint)uVar3;
              if (bVar4) {
                uVar11 = uVar3 + 0xfca02400 + (uint)param_1[param_2 - 2] * 0x400;
              }
              uVar9 = (ulong)uVar11;
              uVar11 = iVar13 - 1U;
              if (bVar4) {
                uVar11 = iVar13 - 2;
              }
              uVar6 = (ulong)uVar11;
            }
            param_2 = uVar6;
          } while (0 < (int)uVar6);
          param_2 = 0;
        }
LAB_108148dbc:
        iVar13 = (int)param_2;
        if (((param_5 >> 3 & 1) == 0) ||
           (((int)(uVar9 >> 2) != 0x803 && 4 < (int)uVar9 - 0x202aU) && 3 < (int)uVar9 - 0x2066U)) {
          iVar5 = iVar13;
          if ((param_5 >> 1 & 1) != 0) {
            func_0x000108147b74();
            uVar11 = (uint)uVar9;
            if ((uVar9 & 0xffff0000) == 0) {
              lVar8 = 1;
            }
            else {
              uVar11 = (uVar11 >> 10) - 0x2840;
              param_3[1] = (ushort)uVar9 & 0x3ff | 0xdc00;
              lVar8 = 2;
            }
            *param_3 = (ushort)uVar11;
            param_3 = param_3 + lVar8;
            iVar5 = (int)lVar8 + iVar13;
          }
          for (lVar8 = (long)iVar5; lVar8 < iVar7; lVar8 = lVar8 + 1) {
            *param_3 = param_1[lVar8];
            param_3 = param_3 + 1;
          }
        }
        if (iVar13 < 1) {
          return uVar12;
        }
      } while( true );
    }
  }
  *param_6 = 0xf;
  return uVar12;
}



/* Entry: 108149644; end: 108149723;  */

void FUN_108149644(void)

{
  long *plVar1;
  long *unaff_x22;
  
  if ((unaff_x22 != (long *)0x0) &&
     ((plVar1 = (long *)*unaff_x22, plVar1 == unaff_x22 ||
      ((plVar1 != (long *)0x0 && ((long *)*plVar1 == plVar1)))))) {
    FUN_108148184();
  }
  return;
}



/* Entry: 108149724; end: 10814a0bf;  */

/* WARNING: Possible PIC construction at 0x0001081499ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001081499b0) */
/* WARNING: Removing unreachable block (ram,0x0001081499c0) */
/* WARNING: Removing unreachable block (ram,0x000108149a14) */
/* WARNING: Removing unreachable block (ram,0x0001081499d8) */
/* WARNING: Removing unreachable block (ram,0x0001081499e0) */
/* WARNING: Removing unreachable block (ram,0x000108149a10) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort * FUN_108149724(ushort *param_1,ushort *param_2,ushort *param_3,ulong param_4,ulong param_5,
                      int *param_6)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  bool bVar7;
  ushort *puVar8;
  ushort *puVar9;
  ushort uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined2 uVar14;
  ushort *puVar15;
  undefined *puVar16;
  short sVar17;
  ulong uVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  ushort *puVar23;
  ulong uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined8 uStack_2e8;
  undefined2 uStack_2e0;
  undefined2 uStack_2de;
  undefined8 uStack_2dc;
  undefined8 uStack_2d4;
  uint uStack_2cc;
  ushort auStack_2c8 [300];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((param_6 == (int *)0x0) || (0 < *param_6)) {
LAB_108149768:
    param_3 = param_1;
    puVar23 = (ushort *)0x0;
    goto LAB_1081497c4;
  }
  puVar15 = param_1;
  if ((param_1 == (ushort *)0x0) || ((int)param_2 < -1)) {
LAB_1081497b8:
    puVar23 = (ushort *)0x0;
    iVar13 = 1;
LAB_1081497c0:
    *param_6 = iVar13;
    param_3 = puVar15;
  }
  else {
    uVar11 = (uint)param_4;
    if (((int)uVar11 < 0) || (param_3 == (ushort *)0x0 && uVar11 != 0)) goto LAB_1081497b8;
    uVar12 = (uint)param_5;
    uVar1 = uVar12 & 0x18;
    uVar22 = uVar12 & 0xe0000;
    if ((((param_5 & 0xe0000) != 0) && (uVar1 == 0x18)) ||
       (((uVar12 >> 9 & 1) != 0 || ((param_5 & 0xe0000) != 0 && uVar1 == 0x10))))
    goto LAB_1081497b8;
    if (((uVar12 & 0xe0) == 0xa0) || (((uVar12 & 0x1001b) != 0x18 && ((uVar12 >> 0xe & 1) != 0))))
    goto LAB_1081497b8;
    if (((3 < (uVar12 & 0x10003)) && ((uVar12 & 0x10003) != 0x10000)) ||
       ((6 < uVar22 >> 0x11 || ((1 << (ulong)(uVar22 >> 0x11) & 0x5dU) == 0)))) goto LAB_1081497b8;
    puVar8 = param_1;
    if ((int)param_2 == -1) {
      func_0x00010814b068();
      param_2 = puVar8;
    }
    uVar19 = (uint)param_2;
    if ((int)uVar19 < 1) {
      func_0x00010814b080(param_3,param_4,0,param_6);
      param_1 = param_3;
      goto LAB_108149768;
    }
    if ((param_3 != (ushort *)0x0) &&
       ((puVar15 = puVar8, param_1 <= param_3 && param_3 < param_1 + ((ulong)param_2 & 0xffffffff)
        || (param_3 <= param_1 && param_1 < param_3 + (param_4 & 0xffffffff))))) goto LAB_1081497b8;
    uVar14 = 0x200b;
    if ((param_5 & 0x8000000) != 0) {
      uVar14 = 0xfe73;
    }
    uVar4 = uVar19 << 1;
    if ((param_5 & 0x18) != 0) {
      uStack_2e8 = 0;
      if ((uVar12 >> 0xe & 1) == 0) {
        puVar15 = (ushort *)0x0;
LAB_108149a4c:
        if (((param_5 & 0x10003) == 0) || (puVar23 = param_2, uVar22 == 0x80000)) {
          puVar8 = param_1;
          func_0x00010814a15c(param_1,param_2,param_5);
          puVar23 = puVar8;
        }
        iVar13 = (int)puVar23;
        if ((int)uVar11 < iVar13) {
          *param_6 = 0xf;
          param_3 = puVar8;
          if (puVar15 != (ushort *)0x0) {
            FUN_1081448f0();
            param_3 = puVar15;
          }
          goto LAB_1081497c4;
        }
        iVar20 = (int)param_2;
        iVar21 = iVar20;
        if (iVar20 <= iVar13) {
          iVar21 = iVar13;
        }
        if (iVar21 < 0x12d) {
          iVar21 = 300;
          puVar9 = auStack_2c8;
        }
        else {
          puVar8 = (ushort *)(ulong)(uint)(iVar21 << 1);
          FUN_1081448a0();
          puVar9 = puVar8;
          if (puVar8 == (ushort *)0x0) {
            *param_6 = 7;
            param_1 = puVar8;
            if (puVar15 != (ushort *)0x0) {
              FUN_1081448f0();
              param_1 = puVar15;
            }
            goto LAB_108149768;
          }
        }
        if (0 < iVar20) {
          puVar8 = puVar9;
          _memcpy(puVar9,param_1,iVar20 << 1);
        }
        if (puVar15 != (ushort *)0x0) {
          FUN_1081448f0();
          puVar8 = puVar15;
        }
        if (iVar21 - iVar20 != 0 && iVar20 <= iVar21) {
          puVar8 = puVar9 + ((ulong)param_2 & 0xffffffff);
          _bzero(puVar8,(iVar21 - iVar20) * 2);
        }
        if ((uVar12 >> 2 & 1) == 0) {
          func_0x00010814a28c(puVar9,param_2,(long)&uStack_2e8 + 4,&uStack_2e8);
          puVar8 = puVar9;
          func_0x00010814a2e0(puVar9,param_2,uStack_2e8._4_4_,uStack_2e8 & 0xffffffff);
          uVar19 = 0;
          auVar26 = _UNK_10df01f60;
        }
        else {
          auVar25._0_4_ = -(uint)((param_5 & 0x4000000) == 0);
          auVar25._4_4_ = auVar25._0_4_;
          auVar25._8_4_ = auVar25._0_4_;
          auVar25._12_4_ = auVar25._0_4_;
          auVar5._12_4_ = 0x40000;
          auVar5._0_12_ = _UNK_10df01f50;
          auVar26._12_4_ = 0x40000;
          auVar26._0_12_ = _UNK_10df01f50;
          auVar26 = auVar26 ^ (auVar5 ^ _UNK_10df01f60) & auVar25;
          uVar19 = uVar12 >> 0x1a & 1;
        }
        puVar15 = puVar8;
        puVar23 = (ushort *)(ulong)(uVar1 >> 3);
        switch(uVar1) {
        case 8:
          if (((param_5 & 0xe0000) != 0) && (uVar22 != 0xc0000)) {
            func_0x00010814afbc();
            goto code_r0x000108149e8c;
          }
          func_0x00010814afbc();
          FUN_10814a318();
          puVar15 = puVar8;
          puVar23 = puVar8;
          if (uVar22 == 0xc0000) {
            uVar18 = (ulong)((uint)puVar8 & ((int)(uint)puVar8 >> 0x1f ^ 0xffffffffU));
            puVar8 = puVar9;
            for (; puVar15 = (ushort *)&UNK_10df02556, uVar18 != 0; uVar18 = uVar18 - 1) {
              uVar10 = *puVar8;
              if ((uVar10 & 0xfff0) == 0xfe70) {
                if (uVar10 == 0xfe73 || uVar10 == 0xfe75) goto code_r0x000108149c90;
                if (uVar10 != 0xfe7d) {
                  if ((&UNK_10df02556)[(ulong)uVar10 & 0xf] == '\x01') {
                    uVar10 = 0x640;
                    goto code_r0x000108149cac;
                  }
                  if ((&UNK_10df02556)[(ulong)uVar10 & 0xf] == '\x02') goto code_r0x000108149c88;
                  if (uVar10 == 0xfe73 || uVar10 == 0xfe75) goto code_r0x000108149c90;
                  bVar7 = (1L << ((ulong)uVar10 & 0xf) & 0xaa82U) != 0;
                  goto code_r0x000108149c9c;
                }
code_r0x000108149c88:
                uVar10 = 0xfe7d;
code_r0x000108149cac:
                *puVar8 = uVar10;
              }
              else {
                if ((ushort)(uVar10 + 0x30e) < 3) goto code_r0x000108149c88;
code_r0x000108149c90:
                bVar7 = (ushort)(uVar10 + 0x39c) < 0xfffa;
code_r0x000108149c9c:
                if ((uVar10 != 0xfe7c) && (!bVar7)) {
                  uVar10 = 0x20;
                  goto code_r0x000108149cac;
                }
              }
              puVar8 = puVar8 + 1;
            }
          }
          break;
        case 0x10:
          bVar7 = false;
          for (uVar18 = 0; ((ulong)param_2 & 0xffffffff) != uVar18; uVar18 = uVar18 + 1) {
            uVar10 = puVar9[uVar18];
            if ((ushort)(uVar10 + 0x4b0) < 0xb0) {
              uVar3 = *(ushort *)(&UNK_10df02280 + (ulong)(uVar10 - 0xfb50) * 2);
              if (uVar3 != 0) {
                puVar9[uVar18] = uVar3;
                uVar10 = uVar3;
              }
            }
            else if (((uVar12 & 0x3800000) == 0x1000000) &&
                    ((((uVar10 == 0xfe80 || (uVar10 == 0x621)) &&
                      ((long)uVar18 < (long)(iVar20 + -1))) &&
                     ((puVar9[uVar18 + 1] - 0xfeef < 2 || (puVar9[uVar18 + 1] == 0x649)))))) {
              uVar10 = 0x20;
              puVar9[uVar18] = 0x20;
              puVar9[uVar18 + 1] = 0x626;
            }
            else {
              if (((uVar12 & 0x700000) == 0x200000) &&
                 ((((uVar10 == 0x200b || uVar10 == 0xfe73) && (long)uVar18 < (long)(iVar20 + -1) &&
                   ((puVar9[uVar18 + 1] + 0x14f & 0xffff) < 0xe)) &&
                  ((1L << ((ulong)(puVar9[uVar18 + 1] - 0xfeb1) & 0x3f) & 0xcccU) == 0)))) {
                uVar10 = 0x20;
              }
              else {
                if (0x84 < (ushort)(uVar10 + 400)) goto code_r0x000108149dfc;
                uVar10 = *(ushort *)(&UNK_10df023e0 + (ulong)(uVar10 - 0xfe70) * 2);
              }
              puVar9[uVar18] = uVar10;
            }
code_r0x000108149dfc:
            if (0xfff7 < (ushort)(uVar10 + 0x103)) {
              bVar7 = true;
            }
          }
          puVar15 = (ushort *)0x1000000;
          puVar23 = param_2;
          if (bVar7) {
            uStack_2de = 0;
            uStack_2d4 = auVar26._8_8_;
            puVar15 = puVar9;
            uStack_2e0 = uVar14;
            uStack_2dc = auVar26._0_8_;
            uStack_2cc = uVar19;
            FUN_10814a9f4(puVar9,param_2,param_2,param_5,param_6,1,&uStack_2e0);
            puVar23 = puVar15;
          }
          break;
        case 0x18:
          func_0x00010814afbc();
code_r0x000108149e8c:
          FUN_10814a318();
          puVar15 = puVar8;
          puVar23 = puVar8;
        }
        if ((uVar12 >> 2 & 1) == 0) {
          func_0x00010814a28c(puVar9,puVar23,(long)&uStack_2e8 + 4,&uStack_2e8);
          puVar15 = puVar9;
          func_0x00010814a2e0(puVar9,puVar23,uStack_2e8._4_4_,uStack_2e8 & 0xffffffff);
        }
        uVar22 = (uint)puVar23;
        uVar1 = uVar22;
        if ((int)uVar11 <= (int)uVar22) {
          uVar1 = uVar11;
        }
        if (0 < (int)uVar1) {
          puVar15 = param_3;
          _memcpy(param_3,puVar9,uVar1 << 1);
        }
        if (puVar9 != auStack_2c8) {
          FUN_1081448f0();
          puVar15 = puVar9;
        }
        if ((int)uVar22 <= (int)uVar11) goto LAB_108149f04;
        iVar13 = 0xf;
      }
      else {
        iVar13 = 1;
        uVar2 = uVar19;
        if ((param_5 & 4) != 0) {
          uVar2 = 0xffffffff;
          iVar13 = -1;
        }
        puVar15 = (ushort *)(ulong)(uVar19 << 2);
        FUN_1081448a0();
        if (puVar15 != (ushort *)0x0) {
          puVar8 = (ushort *)0x0;
          if ((param_5 & 4) == 0) {
            uVar19 = 0xffffffff;
            uVar4 = 0xffffffff;
          }
          param_2 = (ushort *)0x0;
          if (uVar2 != iVar13 + uVar19) {
            uVar11 = (uint)param_1[(long)iVar13 + (long)(int)uVar19];
            goto FUN_10814a0c0;
          }
          param_1 = puVar15 + (int)(uVar4 & (int)(uVar12 << 0x1d) >> 0x1f);
          goto LAB_108149a4c;
        }
        puVar23 = (ushort *)0x0;
        iVar13 = 7;
      }
      goto LAB_1081497c0;
    }
    puVar23 = param_2;
    if (uVar11 < uVar19) {
      *param_6 = 0xf;
      param_3 = puVar8;
    }
    else {
      _memcpy(param_3,param_1,uVar4);
LAB_108149f04:
      if ((param_5 & 0xe0) != 0) {
        iVar13 = 0x660;
        if ((param_5 & 0x100) != 0) {
          iVar13 = 0x6f0;
        }
        uVar11 = (uVar12 & 0xe0) - 0x20 >> 5;
        if (uVar11 < 4) {
          bVar7 = false;
          uVar22 = (uint)puVar23;
          uVar1 = (int)uVar22 >> 0x1f;
          switch(uVar11) {
          case 0:
            puVar15 = param_3;
            for (uVar18 = (ulong)(uVar22 & (uVar1 ^ 0xffffffff)); uVar18 != 0; uVar18 = uVar18 - 1)
            {
                    /* WARNING: Read-only address (ram,0x00010df01f50) is written */
                    /* WARNING: Read-only address (ram,0x00010df01f60) is written */
              if (*puVar15 - 0x30 < 10) {
                *puVar15 = (short)iVar13 + -0x30 + *puVar15;
              }
              puVar15 = puVar15 + 1;
            }
            break;
          case 1:
            sVar17 = -0x630;
            if ((param_5 & 0x100) != 0) {
              sVar17 = -0x6c0;
            }
            puVar15 = param_3;
            for (uVar18 = (ulong)(uVar22 & (uVar1 ^ 0xffffffff)); uVar18 != 0; uVar18 = uVar18 - 1)
            {
              if ((uint)*puVar15 - iVar13 < 10) {
                *puVar15 = *puVar15 + sVar17;
              }
              puVar15 = puVar15 + 1;
            }
            break;
          case 3:
            bVar7 = true;
          case 2:
            sVar17 = (short)iVar13 + -0x30;
            if ((uVar12 >> 2 & 1) == 0) {
              puVar15 = param_3;
              for (uVar18 = (ulong)(uVar22 & (uVar1 ^ 0xffffffff)); uVar18 != 0; uVar18 = uVar18 - 1
                  ) {
                uVar10 = *puVar15;
                uVar11 = (uint)uVar10;
                func_0x000108147b00();
                if (uVar11 < 2) {
                  bVar6 = false;
                }
                else if (uVar11 == 2) {
                  bVar6 = bVar7;
                  if (bVar7) {
                    if (uVar10 - 0x30 < 10) {
                      *puVar15 = uVar10 + sVar17;
                    }
                    bVar6 = true;
                  }
                }
                else {
                  bVar6 = true;
                  if (uVar11 != 0xd) {
                    bVar6 = bVar7;
                  }
                }
                puVar15 = puVar15 + 1;
                bVar7 = bVar6;
              }
            }
            else {
              uVar18 = (ulong)puVar23 & 0xffffffff;
              while (bVar6 = bVar7, 0 < (int)uVar18) {
                uVar24 = uVar18 - 1;
                uVar10 = param_3[uVar18 - 1];
                uVar11 = (uint)uVar10;
                func_0x000108147b00();
                uVar18 = uVar24;
                if (uVar11 < 2) {
                  bVar7 = false;
                }
                else if (uVar11 == 2) {
                  bVar7 = false;
                  if ((bVar6) && (bVar7 = true, uVar10 - 0x30 < 10)) {
                    param_3[uVar24] = uVar10 + sVar17;
                  }
                }
                else {
                  bVar7 = bVar6;
                  if (uVar11 == 0xd) {
                    bVar7 = true;
                  }
                }
              }
            }
          }
        }
      }
      func_0x00010814b080(param_3,param_4,puVar23,param_6);
    }
  }
LAB_1081497c4:
  uVar11 = (uint)param_3;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar23;
  }
  ___stack_chk_fail();
FUN_10814a0c0:
  if (uVar11 - 0x622 < 0xb2) {
    return (ushort *)(ulong)*(ushort *)(&UNK_10df01f78 + (ulong)(uVar11 - 0x622) * 2);
  }
  if (uVar11 != 0x200d) {
    if (uVar11 - 0x206d < 3) {
      return (ushort *)0x4;
    }
    if ((uVar11 + 0x4b0 & 0xffff) < 0x113) {
      uVar11 = uVar11 - 0xfb50;
      puVar16 = &UNK_10df020dc;
    }
    else {
      if (0x8c < (uVar11 + 400 & 0xffff)) {
        return (ushort *)0x0;
      }
      uVar11 = uVar11 - 0xfe70;
      puVar16 = &UNK_10df021ef;
    }
    return (ushort *)(ulong)(byte)puVar16[uVar11];
  }
  return (ushort *)0x3;
}



/* Entry: 10814a0c0; end: 10814a317;  */

ushort FUN_10814a0c0(int param_1)

{
  uint uVar1;
  undefined *puVar2;
  
  if (param_1 - 0x622U < 0xb2) {
    return *(ushort *)(&UNK_10df01f78 + (ulong)(param_1 - 0x622U) * 2);
  }
  if (param_1 == 0x200d) {
    return 3;
  }
  if (param_1 - 0x206dU < 3) {
    return 4;
  }
  if ((param_1 + 0x4b0U & 0xffff) < 0x113) {
    uVar1 = param_1 - 0xfb50;
    puVar2 = &UNK_10df020dc;
  }
  else {
    if (0x8c < (param_1 + 400U & 0xffff)) {
      return 0;
    }
    uVar1 = param_1 - 0xfe70;
    puVar2 = &UNK_10df021ef;
  }
  return (ushort)(byte)puVar2[uVar1];
}



/* Entry: 10814a318; end: 10814a9f3;  */

ushort * FUN_10814a318(ushort *param_1,uint param_2,uint param_3,undefined4 *param_4,int param_5,
                      undefined8 *param_6)

{
  bool bVar1;
  ushort uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  ushort *puVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  long lVar16;
  ushort uVar17;
  short sVar18;
  int iVar19;
  ulong uVar20;
  ulong uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  ulong uVar25;
  long lVar26;
  int iVar27;
  ulong uVar28;
  ushort *puVar29;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uVar20 = (ulong)(param_2 & ((int)param_2 >> 0x1f ^ 0xffffffffU));
  uVar11 = uVar20;
  puVar29 = param_1;
  if ((param_3 >> 0xf & 1) == 0) {
    for (; uVar11 != 0; uVar11 = uVar11 - 1) {
      uVar17 = *puVar29;
      if ((ushort)(uVar17 + 0x4b0) < 0xb0) {
        uVar17 = *(ushort *)(&UNK_10df02280 + (ulong)(uVar17 - 0xfb50) * 2);
        if (uVar17 != 0) {
LAB_10814a3b4:
          *puVar29 = uVar17;
        }
      }
      else if ((ushort)(uVar17 + 400) < 0x8d) {
        uVar17 = *(ushort *)(&UNK_10df023e0 + (ulong)(uVar17 - 0xfe70) * 2);
        goto LAB_10814a3b4;
      }
      puVar29 = puVar29 + 1;
    }
  }
  uVar21 = (ulong)(param_2 - 1);
  uVar11 = (ulong)param_1[(int)(param_2 - 1)];
  FUN_10814a0c0();
  bVar4 = false;
  bVar8 = false;
  bVar7 = false;
  bVar9 = false;
  uVar24 = 0;
  uVar23 = 0;
  uVar25 = 0;
  uVar28 = uVar21;
  uVar10 = 0xfffffffe;
  while (uVar22 = uVar10, uVar12 = uVar11, iVar27 = (int)uVar28, iVar27 != -1) {
    if ((uint)uVar12 < 0x100) {
      uVar10 = (uint)param_1[iVar27];
      FUN_10814a0c0();
      if ((uVar10 >> 2 & 1) != 0) goto LAB_10814a428;
    }
    else {
LAB_10814a428:
      uVar10 = uVar22;
      uVar15 = iVar27 - 1;
      while (uVar13 = uVar15, uVar22 = uVar10, (int)uVar22 < 0) {
        uVar25 = 0;
        uVar10 = 3000;
        uVar15 = 0xffffffff;
        if (uVar13 != 0xffffffff) {
          uVar25 = (ulong)param_1[(int)uVar13];
          FUN_10814a0c0();
          if ((uVar25 & 4) == 0) {
            uVar22 = uVar13;
          }
          uVar10 = uVar22;
          uVar15 = uVar13 - (((uint)uVar25 & 4) >> 2);
        }
      }
      if ((((uint)uVar12 >> 5 & 1) != 0) && ((uVar23 >> 4 & 1) != 0)) {
        uVar12 = 0;
        uVar23 = param_1[iVar27] - 0x622;
        if ((uVar23 < 6) && ((0x2bU >> (ulong)(uVar23 & 0x1f) & 1) != 0)) {
          uVar17 = *(ushort *)(&UNK_10df02566 + ((ulong)uVar23 & 0xffff) * 2);
          uVar12 = (ulong)uVar17;
          param_1[iVar27] = 0xffff;
          param_1[(int)(uint)uVar21] = uVar17;
          uVar28 = uVar21;
        }
        FUN_10814a0c0();
        bVar4 = true;
        uVar23 = uVar24;
      }
      iVar27 = (int)uVar28;
      bVar1 = bVar7;
      if (iVar27 < 1) {
        if (iVar27 == 0) {
          uVar17 = *param_1;
          goto LAB_10814a4f4;
        }
      }
      else if ((param_1 + uVar28)[-1] == 0x20) {
        uVar17 = param_1[uVar28];
LAB_10814a4f4:
        bVar5 = bVar8;
        if (uVar17 == 0x626) {
          bVar5 = true;
        }
        bVar1 = true;
        if (uVar17 - 0x637 < 0xfffffffc) {
          bVar1 = bVar7;
          bVar8 = bVar5;
        }
      }
      uVar10 = (uint)uVar12;
      uVar17 = (ushort)(byte)(&UNK_10df024fa)
                             [(ulong)(uVar10 & 3) +
                              (ulong)(uVar23 & 3) * 4 + (ulong)((uint)uVar25 & 3) * 0x10];
      bVar7 = bVar1;
      if ((uVar10 & 3) == 1) {
        uVar17 = uVar17 & 1;
        uVar15 = (uint)param_1[iVar27];
LAB_10814a56c:
        if ((uVar15 ^ 0x600) < 0x100) {
          puVar29 = param_1 + iVar27;
          if (uVar15 - 0x653 < 0xfffffff8) {
            if ((uVar10 >> 3 & 1) == 0) {
              if ((uVar10 < 0x100) || ((uVar10 >> 2 & 1) != 0)) goto LAB_10814a648;
              sVar18 = -400;
            }
            else {
              sVar18 = -0x4b0;
            }
            uVar17 = uVar17 + (short)(uVar12 >> 8) + sVar18;
            goto LAB_10814a644;
          }
          if ((param_5 != 2) || (uVar15 == 0x651)) goto LAB_10814a5f0;
          *puVar29 = 0xfffe;
          bVar9 = true;
        }
      }
      else {
        puVar29 = param_1 + iVar27;
        uVar2 = *puVar29;
        uVar15 = (uint)uVar2;
        if (uVar2 - 0x653 < 0xfffffff8) goto LAB_10814a56c;
        if ((((uVar23 >> 1 & 1) != 0) && (param_5 == 1)) && ((uVar25 & 1) != 0)) {
          if ((uVar2 & 0x65e) == 0x64c) {
            uVar17 = 0;
          }
          else {
            uVar17 = (ushort)((uVar25 & 0x20) == 0);
            if ((uVar23 & 0x10) == 0) {
              uVar17 = 1;
            }
          }
          goto LAB_10814a56c;
        }
        uVar17 = 0;
        if ((param_5 != 2) || (uVar15 != 0x651)) goto LAB_10814a56c;
        uVar17 = 1;
LAB_10814a5f0:
        uVar17 = (uVar17 - 400) + (ushort)(byte)(&UNK_10df01eef)[uVar15];
LAB_10814a644:
        *puVar29 = uVar17;
      }
    }
LAB_10814a648:
    uVar13 = (uint)uVar28;
    uVar10 = uVar13;
    uVar15 = (uint)uVar12;
    if ((uVar12 & 4) != 0) {
      uVar10 = (uint)uVar21;
      uVar15 = uVar23;
      uVar23 = uVar24;
    }
    uVar24 = uVar23;
    uVar23 = uVar15;
    uVar21 = (ulong)uVar10;
    uVar15 = uVar13 - 1;
    uVar28 = (ulong)uVar15;
    uVar11 = uVar25;
    uVar10 = 0xfffffffe;
    if ((uVar15 != uVar22) && (uVar11 = uVar12, uVar10 = uVar22, uVar13 != 0)) {
      uVar11 = (ulong)param_1[(int)uVar15];
      FUN_10814a0c0();
    }
  }
  puVar29 = (ushort *)(ulong)param_2;
  if (!bVar4 && !bVar9) goto LAB_10814a974;
  uVar23 = *(uint *)((long)param_6 + 4);
  uVar10 = *(uint *)(param_6 + 1);
  uVar24 = *(uint *)((long)param_6 + 0xc);
  uVar22 = *(uint *)(param_6 + 2);
  iVar27 = *(int *)((long)param_6 + 0x14);
  lVar26 = (long)(int)(param_2 * 2 + 2);
  FUN_1081448a0();
  if (lVar26 == 0) {
    puVar29 = (ushort *)0x0;
    *param_4 = 7;
    goto LAB_10814a974;
  }
  uVar15 = param_3 & 0xe0000;
  uVar13 = param_3 & 0x10003;
  if ((uVar13 == 0) || (puVar29 = (ushort *)(ulong)param_2, uVar15 == 0x80000)) {
    func_0x00010814b020();
    iVar19 = 0;
    iVar14 = 0;
    for (lVar16 = 0; uVar20 << 1 != lVar16; lVar16 = lVar16 + 2) {
      sVar18 = *(short *)((long)param_1 + lVar16);
      if (sVar18 == -1 && uVar13 == 0 || uVar15 == 0x80000 && sVar18 == -2) {
        iVar14 = iVar14 + 1;
      }
      else {
        *(short *)(lVar26 + (long)iVar19 * 2) = sVar18;
        iVar19 = iVar19 + 1;
      }
    }
    lVar16 = uVar20 << 1;
    for (; -1 < iVar14; iVar14 = iVar14 + -1) {
      *(undefined2 *)(lVar26 + lVar16) = 0;
      lVar16 = lVar16 + -2;
    }
    if (0 < (int)param_2) {
      func_0x00010814aff8();
    }
    puVar29 = param_1;
    func_0x00010814b068(param_1);
  }
  uVar11 = uVar20;
  puVar6 = param_1;
  if (uVar13 == 1) {
    for (; uVar11 != 0; uVar11 = uVar11 - 1) {
      if (*puVar6 == 0xffff) {
        *puVar6 = 0x20;
      }
      puVar6 = puVar6 + 1;
    }
    puVar29 = (ushort *)(ulong)param_2;
  }
  if ((uVar13 == uVar23) || (uVar13 == 0x10000 && iVar27 == 1)) {
    bVar9 = uVar15 == uVar24;
    bVar4 = true;
LAB_10814a820:
    func_0x00010814b020();
    uVar23 = 0;
    uVar24 = param_2;
    for (uVar3 = param_2; -1 < (int)uVar3; uVar3 = uVar3 - 1) {
      uVar17 = param_1[uVar3];
      bVar1 = false;
      if (uVar17 == 0xffff) {
        bVar1 = bVar4;
      }
      bVar5 = false;
      if (uVar17 == 0xfffe) {
        bVar5 = bVar9;
      }
      if ((bVar1) || (bVar5)) {
        uVar23 = uVar23 + 1;
      }
      else {
        *(ushort *)(lVar26 + (long)(int)uVar24 * 2) = uVar17;
        uVar24 = uVar24 - 1;
      }
    }
    for (lVar16 = 0; (ulong)(uVar23 & ((int)uVar23 >> 0x1f ^ 0xffffffffU)) << 1 != lVar16;
        lVar16 = lVar16 + 2) {
      *(undefined2 *)(lVar26 + lVar16) = 0x20;
    }
    puVar29 = (ushort *)(ulong)param_2;
    if (0 < (int)param_2) {
      func_0x00010814aff8();
      puVar29 = (ushort *)(ulong)param_2;
    }
  }
  else if (uVar15 == uVar24) {
    bVar4 = false;
    bVar9 = true;
    goto LAB_10814a820;
  }
  if ((uVar13 == uVar10) || ((uVar13 == 0x10000 && (iVar27 == 0)))) {
    bVar9 = uVar15 == uVar22;
    bVar4 = true;
LAB_10814a8dc:
    puVar29 = (ushort *)(ulong)param_2;
    func_0x00010814b020();
    iVar27 = 0;
    iVar14 = 0;
    for (lVar16 = 0; uVar20 << 1 != lVar16; lVar16 = lVar16 + 2) {
      sVar18 = *(short *)((long)param_1 + lVar16);
      bVar1 = false;
      if (sVar18 == -1) {
        bVar1 = bVar4;
      }
      bVar5 = false;
      if (sVar18 == -2) {
        bVar5 = bVar9;
      }
      if ((bVar1) || (bVar5)) {
        iVar14 = iVar14 + 1;
      }
      else {
        *(short *)(lVar26 + (long)iVar27 * 2) = sVar18;
        iVar27 = iVar27 + 1;
      }
    }
    lVar16 = uVar20 << 1;
    for (; -1 < iVar14; iVar14 = iVar14 + -1) {
      *(undefined2 *)(lVar26 + lVar16) = 0x20;
      lVar16 = lVar16 + -2;
    }
    if (0 < (int)param_2) {
      func_0x00010814aff8();
    }
  }
  else if (uVar15 == uVar22) {
    bVar4 = false;
    bVar9 = true;
    goto LAB_10814a8dc;
  }
  FUN_1081448f0(lVar26);
LAB_10814a974:
  if (bVar7 || bVar8) {
    uStack_78 = param_6[1];
    uStack_80 = *param_6;
    uStack_70 = param_6[2];
    FUN_10814a9f4(param_1,param_2,puVar29,param_3,param_4,0,&uStack_80);
    puVar29 = param_1;
  }
  return puVar29;
}



/* Entry: 10814a9f4; end: 10814ad9f;  */

long FUN_10814a9f4(long param_1,long param_2,long param_3,ulong param_4,int *param_5,int param_6,
                  long param_7)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  ushort uVar8;
  long lVar9;
  
  uVar5 = (uint)param_4;
  uVar1 = uVar5 & 0x10003;
  lVar9 = param_1;
  if (uVar1 == 0x10000 && param_6 != 0) {
    if (*(int *)(param_7 + 0x14) == 0) {
      func_0x00010814afe8();
      func_0x00010814ac24();
      param_3 = lVar9;
      if (*param_5 == 0x14) {
        *param_5 = 0;
        func_0x00010814afe8();
        FUN_10814ada0();
        goto LAB_10814aab0;
      }
    }
    else {
      func_0x00010814afe8();
      FUN_10814ada0();
      param_3 = lVar9;
      if (*param_5 == 0x14) {
        *param_5 = 0;
        func_0x00010814afe8();
        func_0x00010814ac24();
LAB_10814aab0:
        param_3 = lVar9;
        if (*param_5 == 0x14) {
          *param_5 = 0;
          func_0x00010814afe8();
          FUN_10814aea0();
          param_3 = param_2;
        }
      }
    }
  }
  else if (param_6 == 0) {
    bVar2 = (uVar5 & 0x3800000) == 0x1000000;
    bVar3 = (uVar5 & 0x700000) == 0x200000;
    goto LAB_10814ab24;
  }
  if (uVar1 == *(uint *)(param_7 + 8)) {
    func_0x00010814afe8();
    func_0x00010814ac24();
    param_3 = lVar9;
  }
  if (uVar1 == *(uint *)(param_7 + 4)) {
    func_0x00010814afe8();
    FUN_10814ada0();
    param_3 = lVar9;
  }
  bVar2 = false;
  bVar3 = false;
LAB_10814ab24:
  if (((uVar1 == 1 && param_6 != 0) || (bVar2)) || (bVar3)) {
    func_0x00010814afe8();
    FUN_10814aea0();
    param_3 = param_2;
  }
  if (((param_4 & 0x10003) == 0) && (param_6 != 0)) {
    param_3 = param_1;
    func_0x00010814a15c(param_1,param_2,param_4);
    iVar4 = (int)param_3;
    lVar9 = (long)(iVar4 * 2 + 2);
    FUN_1081448a0();
    if (lVar9 == 0) {
      param_3 = 0;
      *param_5 = 7;
    }
    else {
      func_0x00010814b040();
      iVar7 = 0;
      for (lVar6 = 0; lVar6 < iVar4 && iVar7 < iVar4; lVar6 = lVar6 + 1) {
        uVar8 = *(ushort *)(param_1 + lVar6 * 2);
        if (0xfff7 < (ushort)(uVar8 + 0x103)) {
          *(undefined2 *)(lVar9 + (long)iVar7 * 2) =
               *(undefined2 *)(&UNK_10dee2758 + (ulong)uVar8 * 2);
          iVar7 = iVar7 + 1;
          uVar8 = 0x644;
        }
        *(ushort *)(lVar9 + (long)iVar7 * 2) = uVar8;
        iVar7 = iVar7 + 1;
      }
      if (0 < iVar4) {
        _memcpy(param_1,lVar9,iVar4 * 2);
      }
      FUN_1081448f0(lVar9);
    }
  }
  return param_3;
}



/* Entry: 10814ada0; end: 10814ae9f;  */

undefined8 FUN_10814ada0(long param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined2 *puVar1;
  short sVar2;
  int iVar3;
  ulong extraout_x8;
  ulong uVar4;
  uint uVar5;
  short *psVar6;
  ulong extraout_x9;
  ulong uVar7;
  uint extraout_w10;
  undefined2 extraout_w11;
  long extraout_x12;
  long extraout_x13;
  undefined4 extraout_w14;
  int iVar8;
  ulong uVar9;
  ushort uVar10;
  short *unaff_x21;
  
  func_0x00010814b008();
  if (param_1 == 0) {
    param_2 = 0;
    *param_3 = 7;
  }
  else {
    func_0x00010814b040();
    iVar8 = -1;
    psVar6 = unaff_x21;
    do {
      sVar2 = *psVar6;
      iVar8 = iVar8 + 1;
      psVar6 = psVar6 + 1;
    } while (sVar2 == 0x20);
    func_0x00010814b048(iVar8);
    uVar5 = (uint)extraout_x9;
    uVar4 = extraout_x8;
    uVar7 = extraout_x9;
    uVar9 = extraout_x9;
    while ((-1 < (int)uVar5 && (iVar8 = (int)uVar9, -1 < iVar8))) {
      iVar3 = (int)uVar4;
      if (iVar3 < 1) {
        uVar10 = unaff_x21[uVar7 & 0xffffffff];
        if ((iVar3 == 0) && (extraout_w10 <= (uVar10 + 0x103 & 0xffff))) {
          *param_3 = extraout_w14;
        }
LAB_10814ae48:
        *(ushort *)(param_1 + (uVar9 & 0xffffffff) * 2) = uVar10;
      }
      else {
        uVar10 = unaff_x21[uVar7 & 0xffffffff];
        if ((uVar10 + 0x103 & 0xffff) < extraout_w10) goto LAB_10814ae48;
        puVar1 = (undefined2 *)(param_1 + (uVar9 & 0xffffffff) * 2);
        *puVar1 = extraout_w11;
        puVar1[-1] = *(undefined2 *)(extraout_x12 + (ulong)uVar10 * 2 + extraout_x13);
        iVar8 = iVar8 + -1;
        uVar4 = (ulong)(iVar3 - 1);
      }
      uVar5 = (int)uVar7 - 1;
      uVar7 = (ulong)uVar5;
      uVar9 = (ulong)(iVar8 - 1);
    }
    if (0 < (int)param_2) {
      _memcpy();
    }
    FUN_1081448f0(param_1);
  }
  return param_2;
}



/* Entry: 10814aea0; end: 10814afbb;  */

undefined8
FUN_10814aea0(ushort *param_1,undefined8 param_2,undefined4 *param_3,int param_4,int param_5,
             int param_6,ushort param_7)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x9;
  uint extraout_w10;
  ushort extraout_w11;
  long extraout_x12;
  long extraout_x13;
  undefined4 extraout_w14;
  
  uVar3 = (undefined4)((ulong)param_2 >> 0x20);
  uVar2 = (undefined4)param_2;
  func_0x00010814b048(0);
  lVar4 = extraout_x8;
  do {
    if (extraout_x9 == lVar4) {
      return CONCAT44(uVar3,uVar2);
    }
    if ((param_5 == 0) ||
       (0xd < (*param_1 + 0x14f & 0xffff) ||
        (1L << ((ulong)(*param_1 - 0xfeb1) & 0x3f) & 0xcccU) != 0)) {
      if ((param_4 == 0) || ((ushort)(*param_1 + 0x175) < 0xfffe)) {
        if ((param_6 != 0) && (uVar1 = param_1[1], extraout_w10 <= (uVar1 + 0x103 & 0xffff))) {
          if (*param_1 != 0x20) goto LAB_10814af98;
          param_1[1] = extraout_w11;
          *param_1 = *(ushort *)(extraout_x12 + (ulong)uVar1 * 2 + extraout_x13);
        }
      }
      else {
        if ((lVar4 == 0) || (param_1[-1] != 0x20)) goto LAB_10814af98;
        *param_1 = *(ushort *)(&UNK_10dee2840 + (ulong)*param_1 * 2);
        param_1[-1] = 0xfe80;
      }
    }
    else if ((lVar4 == 0) || (param_1[-1] != 0x20)) {
LAB_10814af98:
      *param_3 = extraout_w14;
    }
    else {
      param_1[-1] = param_7;
    }
    lVar4 = lVar4 + 1;
    param_1 = param_1 + 1;
  } while( true );
}



/* Entry: 10814afbc; end: 10814b1b3;  */

void FUN_10814afbc(void)

{
  return;
}



/* Entry: 10814b1b4; end: 10814b2bb;  */

undefined8 * FUN_10814b1b4(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 0x18);
  }
  *(undefined4 *)(param_1 + 1) = uVar1;
  *(undefined1 *)((long)param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 2) = 0xfffffffe;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 1;
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *param_1 = &PTR_DAT_110a27b98;
  if (param_2 == 0) {
    param_1[6] = 0;
    *(undefined4 *)(param_1 + 7) = 1;
  }
  else {
    param_1[6] = *(undefined8 *)(param_2 + 0x20);
    *(uint *)(param_1 + 7) = *(byte *)(param_2 + 0x29) ^ 1;
  }
  func_0x00010814c934();
  if (param_2 == 0) {
    uVar2 = 0;
    uVar3 = 0;
    uVar1 = 1;
  }
  else {
    uVar2 = 3;
    if (*(char *)(param_2 + 0x28) != '\x02') {
      uVar2 = 1;
    }
    uVar1 = 2;
    if (*(char *)(param_2 + 0x28) != '\x01') {
      uVar1 = uVar2;
    }
    uVar3 = (uint)*(byte *)(param_2 + 0x2a);
    uVar2 = (undefined4)(*(ulong *)(param_2 + 0x10) / 0xac440);
  }
  *(undefined4 *)((long)param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 5) = uVar2;
  *(uint *)((long)param_1 + 0x2c) = uVar3;
  return param_1;
}



/* Entry: 10814b2bc; end: 10814b2ef;  */

undefined4 FUN_10814b2bc(long param_1)

{
  return *(undefined4 *)(param_1 + 0x38);
}



/* Entry: 10814b2f0; end: 10814b35b;  */

undefined8 * FUN_10814b2f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  
  lVar1 = *param_4;
  *param_4 = 0;
  FUN_10821b60c();
  if (lVar1 != 0) {
    FUN_10814cc5c();
  }
  *param_1 = &PTR_DAT_110a27d98;
  return param_1;
}



/* Entry: 10814b35c; end: 10814b363;  */

void FUN_10814b35c(void)

{
  return;
}



/* Entry: 10814b364; end: 10814b39f;  */

undefined * FUN_10814b364(undefined *param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  undefined4 *in_x5;
  uint uVar8;
  undefined4 uVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  undefined *puVar13;
  uint uVar14;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1c8;
  float fStack_1c0;
  float fStack_1bc;
  undefined1 auStack_188 [40];
  undefined **ppuStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined1 *puStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined **ppuStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined8 uStack_dc;
  undefined8 uStack_d4;
  undefined8 uStack_cc;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [40];
  
  puVar13 = param_1;
  FUN_10814b3a0();
  if ((int)puVar13 != 0) {
    return puVar13;
  }
  if (*(long *)(param_1 + 0x5a8) == 0) {
    return (undefined *)0x8;
  }
  if (in_x5 != (undefined4 *)0x0) {
    *in_x5 = *(undefined4 *)(param_1 + 0x54);
  }
  cVar3 = param_1[0x5b9];
  puVar13 = param_1;
  FUN_10814bd18();
  if (cVar3 == '\x01') {
    uVar8 = 1;
    if (puVar13 != &UNK_10df0275f) {
      uVar8 = 2;
    }
    if (puVar13 != (undefined *)0x0) {
      return (undefined *)(ulong)uVar8;
    }
    goto LAB_10814b770;
  }
  if (*(uint *)(param_1 + 0x68) == 0) {
    uVar9 = 1;
    if (*(int *)(param_1 + 0x14) != 0) {
      uVar9 = 2;
    }
    uVar14 = 1;
    uVar8 = uVar14;
    if (puVar13 != &UNK_10df0275f) {
      uVar8 = 2;
    }
    uVar12 = 0;
    if (puVar13 != (undefined *)0x0) {
      uVar12 = uVar8;
    }
    puVar13 = (undefined *)(ulong)uVar12;
  }
  else {
    plVar5 = (long *)(*(long *)(param_1 + 0x5e0) + (ulong)*(uint *)(param_1 + 0x68) * 0x40);
    lVar10 = plVar5[2];
    uVar14 = (uint)((int)lVar10 == -1);
    (**(code **)(*plVar5 + 0x10))();
    uVar9 = 1;
    if ((int)plVar5 != 0) {
      uVar9 = 2;
    }
    if (puVar13 == (undefined *)0x0) {
      puVar13 = (undefined *)0x0;
    }
    else {
      uVar8 = 1;
      if (puVar13 != &UNK_10df0275f) {
        uVar8 = 2;
      }
      puVar13 = (undefined *)(ulong)uVar8;
      if ((int)lVar10 != -1) {
        return puVar13;
      }
      uVar14 = 1;
    }
  }
  uVar6 = (ulong)*(uint *)(param_1 + 0x4e8);
  func_0x00010814c99c();
  if ((int)uVar6 == 0) {
    return (undefined *)0x8;
  }
  if ((uVar6 & 7) != 0) {
    return (undefined *)0x8;
  }
  if (param_1[0x5ba] == '\x01') {
    if (uVar14 != 0) {
      if (*(long *)(param_1 + 0x4a8) == 0) {
        if ((((int)*(ulong *)(param_1 + 0x4b0) == (int)*(ulong *)(param_1 + 8)) &&
            ((int)puVar13 == 0)) &&
           ((*(ulong *)(param_1 + 8) ^ *(ulong *)(param_1 + 0x4b0)) >> 0x20 == 0))
        goto LAB_10814b880;
      }
      in_x5 = *(undefined4 **)(param_1 + 0x5a8);
      FUN_10821ea6c(param_1 + 0x40,in_x5,*(undefined8 *)(param_1 + 0x5b0),
                    *(undefined4 *)(param_1 + 0x58));
    }
LAB_10814b880:
    param_1[0x5ba] = 0;
  }
  uVar7 = *(ulong *)(param_1 + 0x490);
  FUN_10814f090();
  uVar8 = (uint)uVar7;
  uVar12 = (uint)in_x5;
  if ((uVar8 < uVar12) && (uVar7 >> 0x20 < (ulong)in_x5 >> 0x20)) {
    lVar10 = *(long *)(param_1 + 0x4f8);
    lVar11 = *(long *)(param_1 + 0x510);
    func_0x0001078bde1c(&ppuStack_160,param_1 + 8);
    iVar1 = 0;
    if (uVar8 <= uVar12) {
      iVar1 = uVar12 - uVar8;
    }
    uVar8 = (uint)(uVar7 >> 0x20);
    uVar12 = (uint)((ulong)in_x5 >> 0x20);
    iVar2 = 0;
    if (uVar8 <= uVar12) {
      iVar2 = uVar12 - uVar8;
    }
    if (ppuStack_160 != (undefined **)0x0) {
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuStack_160,0x10);
        if (bVar4) {
          *(int *)ppuStack_160 = *(int *)ppuStack_160 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uStack_100 = CONCAT44(iVar2,iVar1);
    ppuStack_110 = ppuStack_160;
    uStack_108 = uStack_158;
    FUN_10814bd9c(auStack_88,&ppuStack_110,uVar9);
    FUN_10810a400(&ppuStack_110);
    FUN_10810a400(&ppuStack_160);
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    FUN_10814bdf0(&uStack_c0,auStack_88,
                  lVar10 + lVar11 * (uVar7 >> 0x20) +
                  (uVar7 & 0xffffffff) * (uVar6 >> 3 & 0x1fffffff),lVar11);
    uStack_dc = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_e4 = 0;
    uStack_f0 = 0;
    uStack_108 = 0;
    ppuStack_110 = (undefined **)0x0;
    uStack_d4 = 0x3f800000;
    uStack_cc = 0x40800000;
    if (uVar14 != 0) {
      FUN_1083762f4(&ppuStack_110,1);
    }
    uStack_138 = 0;
    uStack_118 = 0;
    puStack_120 = (undefined8 *)0x0;
    puStack_128 = (undefined1 *)0x0;
    uStack_140 = 0;
    uStack_148 = 0;
    uStack_158 = *(undefined8 *)(param_1 + 0x5a8);
    ppuStack_160 = &PTR_FUN_110a3e568;
    uStack_150 = *(undefined8 *)(param_1 + 0x5b0);
    pcStack_130 = FUN_108335c48;
    func_0x000108152830(&uStack_148,param_1 + 0x40);
    fStack_1c0 = (float)*(int *)(param_1 + 8);
    fStack_1bc = (float)*(int *)(param_1 + 0xc);
    uStack_1c8 = 0;
    uStack_1f0 = 0;
    uStack_1e8 = CONCAT44((float)*(int *)(param_1 + 0x54),(float)*(int *)(param_1 + 0x50));
    FUN_10814c9e0(auStack_188,&uStack_1c8,&uStack_1f0,0);
    uStack_1e8 = *(undefined8 *)(param_1 + 0x50);
    uStack_1f0 = 0;
    puStack_128 = auStack_188;
    FUN_108386d74(&uStack_1c8,&uStack_1f0);
    puStack_120 = &uStack_1c8;
    FUN_10814bdfc(&uStack_1f0,(float)(uVar7 & 0xffffffff),(float)uVar8);
    uStack_208 = 0;
    uStack_200 = 0;
    uStack_1f8 = 0;
    FUN_108348c58(&ppuStack_160,&uStack_c0,&uStack_1f0,0,&uStack_208,&ppuStack_110);
    FUN_108386ed4(&uStack_1c8);
    FUN_10814ca20(&ppuStack_160);
    FUN_108375e94(&ppuStack_110);
    FUN_108330548(&uStack_c0);
    FUN_10810a400(auStack_88);
  }
  if ((int)puVar13 != 0) {
    return puVar13;
  }
  if ((param_1[0x5f8] == '\x01') &&
     ((*(long *)(param_1 + 0x5e8) - *(long *)(param_1 + 0x5e0) >> 6) + -1 ==
      (long)*(int *)(param_1 + 0x68))) {
    FUN_10814bcec(param_1 + 0x5c0,0);
    *(undefined8 *)(param_1 + 0x5d0) = 0;
  }
LAB_10814b770:
  *(undefined8 *)(param_1 + 0x5a8) = 0;
  *(undefined8 *)(param_1 + 0x5b0) = 0;
  *(undefined2 *)(param_1 + 0x5b8) = 0;
  return (undefined *)0x0;
}



/* Entry: 10814b3a0; end: 10814b707;  */

undefined *
FUN_10814b3a0(undefined *param_1,long param_2,long param_3,undefined8 param_4,undefined4 *param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  bool bVar8;
  undefined *puVar9;
  undefined1 uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  ulong uVar19;
  
  if (param_3 == 0) {
    return (undefined *)0x5;
  }
  if (*(long *)(param_5 + 2) != 0) {
    return (undefined *)0x9;
  }
  puVar9 = param_1;
  FUN_10814bb4c(param_1,param_5[4]);
  if ((int)puVar9 != 0) {
    return puVar9;
  }
  puVar9 = param_1;
  func_0x00010814bc78();
  if (puVar9 == &UNK_10df0275f) {
    return (undefined *)0x1;
  }
  if (puVar9 != (undefined *)0x0) {
    return (undefined *)0x2;
  }
  iVar1 = *(int *)(param_2 + 8);
  if (iVar1 == 2) {
    uVar3 = 0x80000565;
    lVar16 = 2;
LAB_10814b46c:
    uVar13 = (ulong)uVar3;
    if (*(long *)(param_1 + 0x20) != 0) goto LAB_10814b474;
    lVar17 = *(long *)(param_2 + 0x10);
    param_1[0x5b9] = *(long *)(param_1 + 8) == lVar17;
    if (*(long *)(param_1 + 8) != lVar17) goto LAB_10814b478;
    uVar2 = *(uint *)(param_2 + 0x10);
    func_0x00010814ccd8(param_1 + 0x4e8);
    func_0x00010814c99c();
    if ((int)uVar13 == 0) {
      return (undefined *)0x8;
    }
    if ((uVar13 & 7) != 0) {
      return (undefined *)0x8;
    }
    uVar12 = lVar16 * (int)uVar2;
    uVar13 = (ulong)uVar2 * (uVar13 >> 3 & 0x1fffffff);
    if (uVar12 <= uVar13 && uVar13 - uVar12 != 0) {
      return (undefined *)0x8;
    }
    *(uint *)(param_1 + 0x4e8) = uVar3;
    *(uint *)(param_1 + 0x4f0) = uVar2;
    *(int *)(param_1 + 0x4f4) = (int)((ulong)lVar17 >> 0x20);
    *(long *)(param_1 + 0x4f8) = param_3;
    *(ulong *)(param_1 + 0x500) = uVar12;
    *(long *)(param_1 + 0x508) = lVar17 >> 0x20;
    *(undefined8 *)(param_1 + 0x510) = param_4;
    if ((param_5[4] == 0) ||
       (*(int *)(*(long *)(param_1 + 0x5e0) + (ulong)(uint)param_5[4] * 0x40 + 0x10) == -1)) {
      FUN_10821ea6c(param_2,param_3,param_4,*param_5);
      goto LAB_10814b6e8;
    }
    uVar10 = 1;
LAB_10814b6ec:
    puVar9 = (undefined *)0x0;
    param_1[0x5b8] = uVar10;
    *(long *)(param_1 + 0x5a8) = param_3;
    *(undefined8 *)(param_1 + 0x5b0) = param_4;
    param_1[0x5ba] = 1;
  }
  else {
    if (iVar1 == 4) {
      uVar3 = 0xa1008888;
LAB_10814b45c:
      lVar16 = 4;
      goto LAB_10814b46c;
    }
    if (iVar1 == 6) {
      uVar3 = 0x81008888;
      goto LAB_10814b45c;
    }
LAB_10814b474:
    param_1[0x5b9] = 0;
LAB_10814b478:
    lVar16 = *(long *)(param_1 + 0x5c0);
    if (lVar16 == 0) {
      uVar3 = *(uint *)(param_1 + 0x4d8);
      uVar13 = (ulong)uVar3;
      if ((uVar3 & 0x30000) == 0) {
        func_0x00010814c99c();
        uVar12 = 0;
        if (((int)uVar13 != 0) && ((uVar13 & 7) == 0)) {
          uVar12 = uVar13 >> 3 & 0x1fffffff;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = uVar12;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = (ulong)*(uint *)(param_1 + 0x4e4) * (ulong)*(uint *)(param_1 + 0x4e0);
          if (SUB168(auVar5 * auVar7,8) != 0) goto LAB_10814b498;
          uVar12 = (ulong)*(uint *)(param_1 + 0x4e4) * (ulong)*(uint *)(param_1 + 0x4e0) * uVar12;
          if ((uVar3 >> 0x12 & 1) != 0) {
            if (0xfffffffffffffbff < uVar12) {
              uVar12 = 0xfffffffffffffc00;
            }
            uVar12 = uVar12 + 0x400;
          }
        }
      }
      else {
LAB_10814b498:
        uVar12 = 0;
      }
      uVar13 = uVar12;
      _calloc(uVar12,1);
      if (uVar13 != 0) {
        FUN_10814bcec(param_1 + 0x5c0,uVar13);
        *(ulong *)(param_1 + 0x5d0) = uVar12;
        lVar17 = *(long *)(param_1 + 0x5c0);
        goto LAB_10814b4c0;
      }
    }
    else {
      uVar12 = *(ulong *)(param_1 + 0x5d0);
      lVar17 = lVar16;
LAB_10814b4c0:
      func_0x00010814ccd8(param_1 + 0x4e8);
      uVar3 = *(uint *)(param_1 + 0x4d8);
      uVar13 = (ulong)uVar3;
      if ((uVar3 & 0x30000) == 0) {
        func_0x00010814c99c();
        if ((int)uVar13 == 0) {
          return (undefined *)0x8;
        }
        if ((uVar13 & 7) != 0) {
          return (undefined *)0x8;
        }
        if ((uVar3 >> 0x12 & 1) != 0) {
          bVar8 = uVar12 < 0x400;
          uVar12 = uVar12 - 0x400;
          if (bVar8) {
            return (undefined *)0x8;
          }
          *(long *)(param_1 + 0x558) = lVar17;
          *(undefined8 *)(param_1 + 0x568) = 1;
          *(undefined8 *)(param_1 + 0x560) = 0x400;
          *(undefined8 *)(param_1 + 0x570) = 0x400;
          lVar17 = lVar17 + 0x400;
        }
        uVar13 = uVar13 >> 3 & 0x1fffffff;
        uVar3 = *(uint *)(param_1 + 0x4e0);
        uVar11 = (ulong)*(uint *)(param_1 + 0x4e4) * (ulong)uVar3;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar13;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = uVar11;
        if (SUB168(auVar4 * auVar6,8) != 0) {
          return (undefined *)0x8;
        }
        uVar11 = uVar11 * uVar13;
        if (uVar12 <= uVar11 && uVar11 - uVar12 != 0) {
          return (undefined *)0x8;
        }
        *(undefined8 *)(param_1 + 0x4f0) = *(undefined8 *)(param_1 + 0x4e0);
        *(undefined8 *)(param_1 + 0x4e8) = *(undefined8 *)(param_1 + 0x4d8);
        lVar14 = uVar3 * uVar13;
        *(long *)(param_1 + 0x4f8) = lVar17;
        *(long *)(param_1 + 0x500) = lVar14;
        *(ulong *)(param_1 + 0x508) = (ulong)*(uint *)(param_1 + 0x4e4);
        *(long *)(param_1 + 0x510) = lVar14;
        if (lVar16 != 0) {
          uVar12 = *(ulong *)(param_1 + 0x4a8);
          uVar19 = *(ulong *)(param_1 + 0x4b0);
          uVar11 = uVar12 >> 0x20;
          lVar16 = lVar17 + uVar11 * lVar14 + (uVar12 & 0xffffffff) * uVar13;
          uVar15 = (uint)uVar12;
          uVar18 = (uint)uVar19;
          uVar2 = 0;
          if (uVar15 <= uVar18) {
            uVar2 = uVar18 - uVar15;
          }
          uVar12 = uVar19 >> 0x20;
          if ((uVar2 == uVar3 && uVar11 <= uVar12) && (uVar2 != uVar3 || uVar12 != uVar11)) {
            if ((uVar12 - uVar11) * lVar14 != 0) {
              _bzero(lVar16);
            }
          }
          else {
            for (; (uint)uVar11 < (uint)(uVar19 >> 0x20); uVar11 = (ulong)((uint)uVar11 + 1)) {
              if (uVar15 < uVar18) {
                _bzero(lVar16,uVar13 * uVar2);
              }
              lVar16 = lVar16 + lVar14;
            }
          }
        }
LAB_10814b6e8:
        uVar10 = 0;
        goto LAB_10814b6ec;
      }
    }
    puVar9 = (undefined *)0x8;
  }
  return puVar9;
}



/* Entry: 10814b708; end: 10814bb43;  */

char FUN_10814b708(undefined *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  undefined *puVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  char cVar9;
  undefined4 uVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  uint uVar14;
  char cVar15;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1c8;
  float fStack_1c0;
  float fStack_1bc;
  undefined1 auStack_188 [40];
  undefined **ppuStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined1 *puStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined **ppuStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined8 uStack_dc;
  undefined8 uStack_d4;
  undefined8 uStack_cc;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [40];
  
  if (*(long *)(param_1 + 0x5a8) == 0) {
    return '\b';
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x54);
  }
  cVar9 = param_1[0x5b9];
  puVar5 = param_1;
  FUN_10814bd18();
  if (cVar9 == '\x01') {
    cVar9 = '\x01';
    if (puVar5 != &UNK_10df0275f) {
      cVar9 = '\x02';
    }
    if (puVar5 != (undefined *)0x0) {
      return cVar9;
    }
    goto LAB_10814b770;
  }
  if (*(uint *)(param_1 + 0x68) == 0) {
    uVar10 = 1;
    if (*(int *)(param_1 + 0x14) != 0) {
      uVar10 = 2;
    }
    bVar4 = true;
    cVar9 = bVar4;
    if (puVar5 != &UNK_10df0275f) {
      cVar9 = '\x02';
    }
    cVar15 = '\0';
    if (puVar5 != (undefined *)0x0) {
      cVar15 = cVar9;
    }
  }
  else {
    plVar6 = (long *)(*(long *)(param_1 + 0x5e0) + (ulong)*(uint *)(param_1 + 0x68) * 0x40);
    lVar11 = plVar6[2];
    bVar4 = (int)lVar11 == -1;
    (**(code **)(*plVar6 + 0x10))();
    uVar10 = 1;
    if ((int)plVar6 != 0) {
      uVar10 = 2;
    }
    if (puVar5 == (undefined *)0x0) {
      cVar15 = '\0';
    }
    else {
      cVar15 = '\x01';
      if (puVar5 != &UNK_10df0275f) {
        cVar15 = '\x02';
      }
      if ((int)lVar11 != -1) {
        return cVar15;
      }
      bVar4 = true;
    }
  }
  uVar7 = (ulong)*(uint *)(param_1 + 0x4e8);
  func_0x00010814c99c();
  if ((int)uVar7 == 0) {
    return '\b';
  }
  if ((uVar7 & 7) != 0) {
    return '\b';
  }
  if (param_1[0x5ba] == '\x01') {
    if (bVar4 != false) {
      if (*(long *)(param_1 + 0x4a8) == 0) {
        if ((((int)*(ulong *)(param_1 + 0x4b0) == (int)*(ulong *)(param_1 + 8)) && (cVar15 == '\0'))
           && ((*(ulong *)(param_1 + 8) ^ *(ulong *)(param_1 + 0x4b0)) >> 0x20 == 0))
        goto LAB_10814b880;
      }
      param_2 = *(undefined4 **)(param_1 + 0x5a8);
      FUN_10821ea6c(param_1 + 0x40,param_2,*(undefined8 *)(param_1 + 0x5b0),
                    *(undefined4 *)(param_1 + 0x58));
    }
LAB_10814b880:
    param_1[0x5ba] = 0;
  }
  uVar8 = *(ulong *)(param_1 + 0x490);
  FUN_10814f090();
  uVar12 = (uint)uVar8;
  uVar14 = (uint)param_2;
  if ((uVar12 < uVar14) && (uVar8 >> 0x20 < (ulong)param_2 >> 0x20)) {
    lVar11 = *(long *)(param_1 + 0x4f8);
    lVar13 = *(long *)(param_1 + 0x510);
    func_0x0001078bde1c(&ppuStack_160,param_1 + 8);
    iVar1 = 0;
    if (uVar12 <= uVar14) {
      iVar1 = uVar14 - uVar12;
    }
    uVar12 = (uint)(uVar8 >> 0x20);
    uVar14 = (uint)((ulong)param_2 >> 0x20);
    iVar2 = 0;
    if (uVar12 <= uVar14) {
      iVar2 = uVar14 - uVar12;
    }
    if (ppuStack_160 != (undefined **)0x0) {
      do {
        cVar9 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppuStack_160,0x10);
        if (bVar3) {
          *(int *)ppuStack_160 = *(int *)ppuStack_160 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
    }
    uStack_100 = CONCAT44(iVar2,iVar1);
    ppuStack_110 = ppuStack_160;
    uStack_108 = uStack_158;
    FUN_10814bd9c(auStack_88,&ppuStack_110,uVar10);
    FUN_10810a400(&ppuStack_110);
    FUN_10810a400(&ppuStack_160);
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    FUN_10814bdf0(&uStack_c0,auStack_88,
                  lVar11 + lVar13 * (uVar8 >> 0x20) +
                  (uVar8 & 0xffffffff) * (uVar7 >> 3 & 0x1fffffff),lVar13);
    uStack_dc = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_e4 = 0;
    uStack_f0 = 0;
    uStack_108 = 0;
    ppuStack_110 = (undefined **)0x0;
    uStack_d4 = 0x3f800000;
    uStack_cc = 0x40800000;
    if (bVar4 != false) {
      FUN_1083762f4(&ppuStack_110,1);
    }
    uStack_138 = 0;
    uStack_118 = 0;
    puStack_120 = (undefined8 *)0x0;
    puStack_128 = (undefined1 *)0x0;
    uStack_140 = 0;
    uStack_148 = 0;
    uStack_158 = *(undefined8 *)(param_1 + 0x5a8);
    ppuStack_160 = &PTR_FUN_110a3e568;
    uStack_150 = *(undefined8 *)(param_1 + 0x5b0);
    pcStack_130 = FUN_108335c48;
    func_0x000108152830(&uStack_148,param_1 + 0x40);
    fStack_1c0 = (float)*(int *)(param_1 + 8);
    fStack_1bc = (float)*(int *)(param_1 + 0xc);
    uStack_1c8 = 0;
    uStack_1f0 = 0;
    uStack_1e8 = CONCAT44((float)*(int *)(param_1 + 0x54),(float)*(int *)(param_1 + 0x50));
    FUN_10814c9e0(auStack_188,&uStack_1c8,&uStack_1f0,0);
    uStack_1e8 = *(undefined8 *)(param_1 + 0x50);
    uStack_1f0 = 0;
    puStack_128 = auStack_188;
    FUN_108386d74(&uStack_1c8,&uStack_1f0);
    puStack_120 = &uStack_1c8;
    FUN_10814bdfc(&uStack_1f0,(float)(uVar8 & 0xffffffff),(float)uVar12);
    uStack_208 = 0;
    uStack_200 = 0;
    uStack_1f8 = 0;
    FUN_108348c58(&ppuStack_160,&uStack_c0,&uStack_1f0,0,&uStack_208,&ppuStack_110);
    FUN_108386ed4(&uStack_1c8);
    FUN_10814ca20(&ppuStack_160);
    FUN_108375e94(&ppuStack_110);
    FUN_108330548(&uStack_c0);
    FUN_10810a400(auStack_88);
  }
  if (cVar15 != '\0') {
    return cVar15;
  }
  if ((param_1[0x5f8] == '\x01') &&
     ((*(long *)(param_1 + 0x5e8) - *(long *)(param_1 + 0x5e0) >> 6) + -1 ==
      (long)*(int *)(param_1 + 0x68))) {
    FUN_10814bcec(param_1 + 0x5c0,0);
    *(undefined8 *)(param_1 + 0x5d0) = 0;
  }
LAB_10814b770:
  *(undefined8 *)(param_1 + 0x5a8) = 0;
  *(undefined8 *)(param_1 + 0x5b0) = 0;
  *(undefined2 *)(param_1 + 0x5b8) = 0;
  return '\0';
}



/* Entry: 10814bb44; end: 10814bb4b;  */

long FUN_10814bb44(long param_1)

{
  return param_1 + 0x458;
}



/* Entry: 10814bb4c; end: 10814bceb;  */

int FUN_10814bb4c(long param_1,uint param_2)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  if (*(char *)(param_1 + 0x5f9) == '\x01') {
    plVar3 = *(long **)(param_1 + 0x470);
    (**(code **)(*plVar3 + 0x28))();
    if ((int)plVar3 == 0) {
      return 8;
    }
    *(undefined1 *)(param_1 + 0x5a0) = 0;
    *(undefined8 *)(param_1 + 0x598) = 0;
    *(undefined8 *)(param_1 + 0x590) = 0;
    *(undefined8 *)(param_1 + 0x588) = 0;
    uVar4 = *(undefined8 *)(param_1 + 0x490);
    FUN_10814c18c(uVar4,0,param_1 + 0x578,*(undefined8 *)(param_1 + 0x470));
    iVar2 = (int)uVar4;
    if (iVar2 != 0) {
      if (iVar2 != 1) {
        return iVar2;
      }
      return 8;
    }
    *(undefined1 *)(param_1 + 0x5f9) = 0;
  }
  if ((int)param_2 < 0) {
    return 8;
  }
  if (param_2 == 0) {
    puVar6 = (ulong *)(param_1 + 0x4a0);
  }
  else {
    if ((ulong)(*(long *)(param_1 + 0x5e8) - *(long *)(param_1 + 0x5e0) >> 6) <= (ulong)param_2) {
      return 8;
    }
    puVar6 = (ulong *)(*(long *)(param_1 + 0x5e0) + (ulong)param_2 * 0x40 + 0x30);
  }
  uVar9 = *puVar6;
  plVar3 = *(long **)(param_1 + 0x470);
  uVar8 = *(ulong *)(param_1 + 0x598);
  uVar7 = uVar9 - uVar8;
  if ((uVar9 < uVar8) || (*(ulong *)(param_1 + 0x588) < uVar7)) {
    (**(code **)(*plVar3 + 0x40))(plVar3,uVar9);
    if ((int)plVar3 == 0) {
      return 8;
    }
    uVar7 = 0;
    *(ulong *)(param_1 + 0x588) = 0;
    *(undefined8 *)(param_1 + 0x590) = 0;
    *(ulong *)(param_1 + 0x598) = uVar9;
    *(undefined1 *)(param_1 + 0x5a0) = 0;
    uVar8 = uVar9;
  }
  else {
    *(ulong *)(param_1 + 0x590) = uVar7;
  }
  lVar5 = *(long *)(param_1 + 0x490);
  lVar1 = uVar8 + uVar7;
  if (CARRY8(uVar8,uVar7)) {
    lVar1 = -1;
  }
  func_0x00010814f1bc(lVar5,param_2,lVar1);
  if (lVar5 != 0) {
    return 8;
  }
  return 0;
}



/* Entry: 10814bcec; end: 10814bd17;  */

void FUN_10814bcec(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    (*(code *)param_1[1])();
  }
  return;
}



/* Entry: 10814bd18; end: 10814bd9b;  */

byte * FUN_10814bd18(long param_1)

{
  bool bVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar3 = &UNK_10df0275f;
  do {
    pbVar2 = *(byte **)(param_1 + 0x490);
    FUN_10814dcfc(pbVar2,param_1 + 0x4e8,param_1 + 0x578,*(undefined1 *)(param_1 + 0x5b8),
                  *(undefined8 *)(param_1 + 0x478),*(undefined8 *)(param_1 + 0x488),0);
    if (pbVar2 != &UNK_10df0275f) {
      pbVar3 = pbVar2;
      if (pbVar2 == (byte *)0x0) {
        bVar1 = false;
        goto LAB_10814bd84;
      }
      break;
    }
    func_0x00010814cd10();
  } while (((ulong)pbVar2 & 1) != 0);
  bVar1 = *pbVar3 - 0x23 < 2;
  pbVar2 = pbVar3;
LAB_10814bd84:
  func_0x00010814cd04(bVar1);
  return pbVar2;
}



/* Entry: 10814bd9c; end: 10814bdef;  */

void FUN_10814bd9c(undefined8 *param_1,undefined8 *param_2,undefined4 param_3)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uVar3 = param_2[2];
  uStack_18 = *(undefined4 *)(param_2 + 1);
  piVar4 = (int *)*param_2;
  if (piVar4 != (int *)0x0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_20 = 0;
  *param_1 = piVar4;
  param_1[1] = CONCAT44(param_3,uStack_18);
  param_1[2] = uVar3;
  uStack_14 = param_3;
  FUN_10810a400(&uStack_20);
  return;
}



/* Entry: 10814bdf0; end: 10814bdfb;  */

/* WARNING: Removing unreachable block (ram,0x000108330c54) */
/* WARNING: Removing unreachable block (ram,0x000108330c20) */

ulong FUN_10814bdf0(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined1 auStack_48 [8];
  
  uVar1 = param_1;
  FUN_1083306e4(param_1,param_2,param_4);
  if ((uVar1 & 1) == 0) {
    func_0x0001083306b0(param_1);
  }
  else if (param_3 != 0) {
    FUN_108383e4c(auStack_48,*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),param_4
                  ,param_3,0,0);
    func_0x000108331358(param_1,auStack_48);
    func_0x000108331364();
  }
  return uVar1;
}



/* Entry: 10814bdfc; end: 10814be2b;  */

void FUN_10814bdfc(undefined8 *param_1,float param_2,float param_3)

{
  bool bVar1;
  undefined4 uVar2;
  
  FUN_10810c9b4();
  bVar1 = false;
  if ((param_3 == 0.0) && (bVar1 = false, !NAN(param_2))) {
    bVar1 = param_2 == 0.0;
  }
  *param_1 = 0x3f800000;
  *(float *)(param_1 + 1) = param_2;
  *(undefined8 *)((long)param_1 + 0xc) = 0x3f80000000000000;
  uVar2 = 0x10;
  if (!bVar1) {
    uVar2 = 0x11;
  }
  *(float *)((long)param_1 + 0x14) = param_3;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  *(undefined4 *)((long)param_1 + 0x24) = uVar2;
  return;
}



/* Entry: 10814be2c; end: 10814c087;  */

ulong FUN_10814be2c(undefined *param_1)

{
  ulong *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  ulong *puStack_68;
  
  if (param_1[0x15fa] == '\x01') {
    if (((param_1[0x5f8] & 1) == 0) && (*(long *)(param_1 + 0x5a8) == 0)) {
      lVar5 = *(long *)(param_1 + 0x5e8) - *(long *)(param_1 + 0x5e0) >> 6;
      lVar13 = 0;
      if (lVar5 != 0) {
        lVar13 = lVar5 + -1;
      }
      puVar4 = param_1;
      FUN_10814bb4c(param_1,lVar13);
      if ((int)puVar4 == 0) {
        puVar1 = (ulong *)(param_1 + 0x5f0);
        for (uVar12 = (ulong)(int)lVar13; uVar12 != 0x7fffffff; uVar12 = uVar12 + 1) {
          puVar4 = param_1;
          func_0x00010814bc78();
          if (puVar4 != (undefined *)0x0) {
            if (puVar4 != &UNK_10df026fc) goto LAB_10814c028;
            break;
          }
          uVar11 = *(ulong *)(param_1 + 0x5e8);
          lVar13 = uVar11 - *(long *)(param_1 + 0x5e0);
          uVar7 = lVar13 >> 6;
          if (uVar7 <= uVar12) {
            if (uVar11 < *puVar1) {
              FUN_10814b1b4(uVar11,param_1 + 0x4a8);
              lVar13 = uVar11 + 0x40;
              *(long *)(param_1 + 0x5e8) = lVar13;
            }
            else {
              uVar7 = uVar7 + 1;
              if (uVar7 >> 0x3a != 0) {
                FUN_10814cc08();
LAB_10814c064:
                func_0x000104bd35f4();
                *(ulong *)(param_1 + 0x5e8) = uVar11;
                __Unwind_Resume();
                uVar12 = *(ulong *)(puVar4 + 0x490);
                func_0x00010814f188();
                if (*(ulong *)(puVar4 + 0x5d8) < uVar12) {
                  *(ulong *)(puVar4 + 0x5d8) = uVar12;
                }
                return uVar12;
              }
              uVar6 = *puVar1 - *(long *)(param_1 + 0x5e0);
              uVar11 = (long)uVar6 >> 5;
              if (uVar11 <= uVar7) {
                uVar11 = uVar7;
              }
              if (0x7fffffffffffffbf < uVar6) {
                uVar11 = 0x3ffffffffffffff;
              }
              puStack_68 = puVar1;
              if (uVar11 == 0) {
                lVar5 = 0;
              }
              else {
                if (uVar11 >> 0x3a != 0) goto LAB_10814c064;
                lVar5 = uVar11 << 6;
                __Znwm();
              }
              lVar13 = lVar5 + lVar13;
              lVar2 = lVar5 + uVar11 * 0x40;
              lStack_88 = lVar5;
              lStack_80 = lVar13;
              lStack_78 = lVar13;
              lStack_70 = lVar2;
              FUN_10814b1b4(lVar13,param_1 + 0x4a8);
              lVar8 = *(long *)(param_1 + 0x5e8);
              lVar5 = *(long *)(param_1 + 0x5e0);
              puVar3 = (undefined8 *)(lVar13 + (lVar5 - lVar8));
              puVar9 = puVar3;
              for (; lVar5 != lVar8; lVar5 = lVar5 + 0x40) {
                *puVar9 = &PTR_DAT_110a27d70;
                uVar14 = *(undefined8 *)(lVar5 + 0x10);
                uVar10 = *(undefined8 *)(lVar5 + 8);
                uVar16 = *(undefined8 *)(lVar5 + 0x20);
                uVar15 = *(undefined8 *)(lVar5 + 0x18);
                puVar9[5] = *(undefined8 *)(lVar5 + 0x28);
                puVar9[4] = uVar16;
                puVar9[3] = uVar15;
                puVar9[2] = uVar14;
                puVar9[1] = uVar10;
                *puVar9 = &PTR_DAT_110a27b98;
                uVar10 = *(undefined8 *)(lVar5 + 0x30);
                *(undefined4 *)(puVar9 + 7) = *(undefined4 *)(lVar5 + 0x38);
                puVar9[6] = uVar10;
                puVar9 = puVar9 + 8;
              }
              lVar13 = lVar13 + 0x40;
              lStack_88 = *(long *)(param_1 + 0x5e0);
              *(undefined8 **)(param_1 + 0x5e0) = puVar3;
              *(long *)(param_1 + 0x5e8) = lVar13;
              lStack_70 = *(long *)(param_1 + 0x5f0);
              *(long *)(param_1 + 0x5f0) = lVar2;
              lStack_80 = lStack_88;
              lStack_78 = lStack_88;
              FUN_10814cc1c(&lStack_88);
            }
            *(long *)(param_1 + 0x5e8) = lVar13;
            FUN_10821c1ec(param_1 + 0x458,lVar13 + -0x40);
          }
        }
        param_1[0x5f8] = 1;
      }
LAB_10814c028:
      FUN_10814c088(param_1);
    }
    uVar12 = (ulong)(*(long *)(param_1 + 0x5e8) - *(long *)(param_1 + 0x5e0)) >> 6;
  }
  else {
    uVar12 = 1;
  }
  return uVar12;
}



/* Entry: 10814c088; end: 10814c0bb;  */

void FUN_10814c088(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x490);
  func_0x00010814f188();
  if (*(ulong *)(param_1 + 0x5d8) < uVar1) {
    *(ulong *)(param_1 + 0x5d8) = uVar1;
  }
  return;
}



/* Entry: 10814c0bc; end: 10814c15f;  */

bool FUN_10814c0bc(long param_1,uint param_2,long param_3)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  
  bVar2 = false;
  if ((-1 < (int)param_2) && ((*(byte *)(param_1 + 0x15fa) & 1) != 0)) {
    uVar3 = (ulong)param_2;
    lVar4 = *(long *)(param_1 + 0x5e0);
    bVar1 = uVar3 < (ulong)(*(long *)(param_1 + 0x5e8) - lVar4 >> 6);
    bVar2 = lVar4 != 0 && bVar1;
    if ((param_3 != 0) && (lVar4 != 0 && bVar1)) {
      FUN_10821c184(lVar4 + uVar3 * 0x40,param_3,uVar3 < *(ulong *)(param_1 + 0x5d8));
      bVar2 = true;
    }
  }
  return bVar2;
}



/* Entry: 10814c160; end: 10814c18b;  */

undefined4 FUN_10814c160(long param_1)

{
  undefined4 uVar1;
  
  if (0x40 < (ulong)(*(long *)(param_1 + 0x5e8) - *(long *)(param_1 + 0x5e0))) {
    return 0;
  }
  uVar1 = 1;
  if (*(char *)(param_1 + 0x5f8) == '\0') {
    uVar1 = 2;
  }
  return uVar1;
}



/* Entry: 10814c18c; end: 10814c25f;  */

undefined8 FUN_10814c18c(int *param_1,undefined8 *param_2,ulong param_3,undefined8 param_4)

{
  int *piVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  piVar1 = param_1;
  FUN_10814f5ec(param_1,0xfe10,0x30003,0);
  if (piVar1 == (int *)0x0) {
    if (((param_1 != (int *)0x0) && (*param_1 == 0x3ccb6c71)) && ((char)param_1[0xc] == '\0')) {
      *(undefined1 *)((long)param_1 + 0x43) = 1;
    }
    do {
      piVar1 = param_1;
      func_0x00010814ef34(param_1,param_2,param_3);
      if (piVar1 == (int *)0x0) {
        if (param_2 == (undefined8 *)0x0) {
          return 0;
        }
        *param_2 = 0xa1008888;
        return 0;
      }
      if (piVar1 != (int *)&UNK_10df0275f) {
        return 2;
      }
      uVar3 = param_3;
      FUN_10814c260(param_3,param_4);
    } while ((uVar3 & 1) != 0);
    uVar2 = 1;
  }
  else {
    uVar2 = 8;
  }
  return uVar2;
}



/* Entry: 10814c260; end: 10814c2f3;  */

bool FUN_10814c260(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  
  if ((param_1 != (long *)0x0) && (uVar2 = param_1[3], uVar2 != 0)) {
    lVar1 = param_1[4] + uVar2;
    if (CARRY8(param_1[4],uVar2)) {
      lVar1 = -1;
    }
    param_1[4] = lVar1;
    lVar1 = param_1[2] - uVar2;
    if (lVar1 != 0) {
      _memmove(*param_1,*param_1 + uVar2,lVar1);
    }
    param_1[2] = lVar1;
    param_1[3] = 0;
  }
  (**(code **)(*param_2 + 0x10))(param_2,*param_1 + param_1[2],param_1[1] - param_1[2]);
  param_1[2] = param_1[2] + (long)param_2;
  *(undefined1 *)(param_1 + 5) = 0;
  return param_2 != (long *)0x0;
}



/* Entry: 10814c2f4; end: 10814c323;  */

void FUN_10814c2f4(undefined8 *param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_2 + 0x470);
  (**(code **)(*plVar1 + 0x70))();
  *param_1 = plVar1;
  return;
}



/* Entry: 10814c324; end: 10814c347;  */

bool FUN_10814c324(int *param_1,ulong param_2)

{
  if (3 < param_2) {
    return *param_1 == 0x38464947;
  }
  return false;
}



/* Entry: 10814c348; end: 10814c3bf;  */

void FUN_10814c348(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  uVar1 = 0x18;
  __Znwm();
  uStack_38 = *param_2;
  *param_2 = 0;
  FUN_10839ffb0();
  *param_1 = uVar1;
  func_0x0001078bddf8(&uStack_38);
  return;
}



/* Entry: 10814c3c0; end: 10814c3f3;  */

void FUN_10814c3c0(void)

{
  FUN_10814ca50();
  func_0x00010814cca0();
  return;
}



/* Entry: 10814c3f4; end: 10814c82b;  */

/* WARNING: Removing unreachable block (ram,0x00010814c820) */

void FUN_10814c3f4(long *param_1,int *param_2,int *param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 in_ZR;
  uint uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 *extraout_x8;
  long *plVar12;
  undefined1 uVar13;
  bool bVar14;
  undefined8 uStack_1128;
  code *pcStack_1120;
  long lStack_1118;
  code *pcStack_1110;
  undefined1 auStack_1108 [32];
  undefined8 uStack_10e8;
  code *pcStack_10e0;
  long lStack_10d8;
  code *pcStack_10d0;
  undefined8 uStack_10c8;
  undefined8 uStack_10c0;
  undefined8 uStack_10b8;
  char cStack_10b0;
  long *plStack_10a8;
  undefined8 uStack_10a0;
  undefined8 uStack_1098;
  undefined8 uStack_1090;
  undefined8 uStack_1088;
  undefined1 uStack_1080;
  undefined7 uStack_107f;
  long lStack_1078;
  long alStack_1070 [512];
  undefined8 uStack_70;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uStack_70 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if (param_3 == (int *)0x0) {
    bVar14 = true;
  }
  else {
    in_ZR = *param_3 == 0;
    bVar14 = (bool)in_ZR;
  }
  plVar12 = (long *)*param_1;
  *param_1 = 0;
  if (plVar12 == (long *)0x0) {
    if (param_2 != (int *)0x0) {
      *param_2 = 6;
    }
    *extraout_x8 = 0;
  }
  else {
    plVar7 = plVar12;
    (**(code **)(*plVar12 + 0x30))();
    if ((int)plVar7 == 0) {
      uVar6 = 0;
    }
    else {
      plVar7 = plVar12;
      (**(code **)(*plVar12 + 0x50))();
      uVar6 = (uint)plVar7;
    }
    uVar13 = (undefined1)uVar6;
    if (!bVar14 && (uVar6 & 1) == 0) {
      FUN_1083a07a0(alStack_1070,plVar12);
      FUN_10814c348(&plStack_10a8,alStack_1070);
      plVar12 = plStack_10a8;
      plStack_10a8 = (long *)0x0;
      func_0x00010814cc70();
      plVar7 = plStack_10a8;
      plStack_10a8 = (long *)0x0;
      if (plVar7 != (long *)0x0) {
        func_0x00010814cc5c();
      }
      func_0x0001078bddf8(alStack_1070);
      uVar13 = 1;
    }
    uStack_1098 = 0;
    uStack_1090 = 0;
    uStack_1080 = 0;
    uStack_1088 = 0;
    plStack_10a8 = alStack_1070;
    uStack_10a0 = 0x1000;
    uStack_10c8 = 0;
    uStack_10c0 = 0;
    cStack_10b0 = '\0';
    uStack_10b8 = 0;
    lVar8 = 0xfe10;
    _malloc();
    if (lVar8 == 0) {
      if (param_2 != (int *)0x0) {
        *param_2 = 8;
      }
      *extraout_x8 = 0;
      param_1 = (long *)0x0;
    }
    else {
      pcStack_10d0 = FUN_1084107e8;
      lVar9 = lVar8;
      lStack_10d8 = lVar8;
      FUN_10814c18c();
      if ((int)lVar9 == 0) {
        iVar2 = (int)uStack_10c0;
        iVar3 = uStack_10c0._4_4_;
        in_ZR = (int)uStack_10c0 < 1 || uStack_10c0._4_4_ == 0;
        if ((int)uStack_10c0 < 1 || (uStack_10c0._4_4_ == 0 || (long)uStack_10c0 < 0)) {
          if (param_2 != (int *)0x0) {
            *param_2 = 6;
          }
          goto LAB_10814c5b0;
        }
        uStack_10e8 = 0;
        pcStack_10e0 = FUN_1084107e8;
        uVar10 = 9;
        if ((int)uStack_10c8 != -0x7eff7778) {
          uVar10 = 6;
        }
        in_ZR = cStack_10b0 == '\0';
        uVar11 = 0;
        if ((bool)in_ZR) {
          uVar11 = 2;
        }
        FUN_10814c3c0(auStack_1108,uStack_10c0 & 0xffffffff,uStack_10c0._4_4_,uVar10,uVar11,8);
        if (param_2 != (int *)0x0) {
          *param_2 = 0;
        }
        param_2 = (int *)0x1600;
        __Znwm();
        uVar5 = uStack_1098;
        plVar7 = plStack_10a8;
        uVar4 = uStack_10b8;
        uVar1 = uStack_10c8;
        lStack_10d8 = 0;
        pcStack_1110 = FUN_1084107e8;
        uStack_10e8 = 0;
        uStack_1128 = 0;
        pcStack_1120 = FUN_1084107e8;
        lStack_1078 = 0;
        lStack_1118 = lVar8;
        FUN_10814b2f0();
        lVar9 = lStack_1078;
        lStack_1078 = 0;
        if (lVar9 != 0) {
          func_0x00010814cc5c();
        }
        *(undefined ***)param_2 = &PTR_DAT_110a27bc0;
        *(undefined ***)(param_2 + 0x116) = &PTR_FUN_110a27cb8;
        *(long **)(param_2 + 0x11c) = plVar12;
        uStack_1128 = 0;
        param_2[0x11e] = 0;
        param_2[0x11f] = 0;
        *(code **)(param_2 + 0x120) = FUN_1084107e8;
        param_2[0x122] = 0;
        param_2[0x123] = 0;
        lStack_1118 = 0;
        *(long *)(param_2 + 0x124) = lVar8;
        *(code **)(param_2 + 0x126) = FUN_1084107e8;
        *(undefined8 *)(param_2 + 0x128) = uVar4;
        param_2[300] = 0;
        param_2[0x12d] = 0;
        param_2[0x12a] = 0;
        param_2[299] = 0;
        param_2[0x130] = 0;
        param_2[0x131] = 0;
        param_2[0x12e] = 0;
        param_2[0x12f] = 0;
        *(undefined8 *)((long)param_2 + 0x4cb) = 0;
        *(undefined8 *)((long)param_2 + 0x4c3) = 0;
        *(undefined8 *)(param_2 + 0x136) = uVar1;
        param_2[0x138] = iVar2;
        param_2[0x139] = iVar3;
        param_2[0x170] = 0;
        param_2[0x171] = 0;
        func_0x00010814ccd8(param_2 + 0x13a);
        *(undefined4 *)((long)param_2 + 0x5b7) = 0;
        param_2[0x16c] = 0;
        param_2[0x16d] = 0;
        param_2[0x16a] = 0;
        param_2[0x16b] = 0;
        *(code **)(param_2 + 0x172) = FUN_1084107e8;
        param_2[0x176] = 0;
        param_2[0x177] = 0;
        param_2[0x174] = 0;
        param_2[0x175] = 0;
        param_2[0x17a] = 0;
        param_2[0x17b] = 0;
        param_2[0x178] = 0;
        param_2[0x179] = 0;
        *(undefined8 *)((long)param_2 + 0x5f2) = 0;
        *(undefined8 *)((long)param_2 + 0x5ea) = 0;
        *(undefined1 *)((long)param_2 + 0x15fa) = uVar13;
        *(int **)(param_2 + 0x11a) = param_2;
        param_2[0x118] = iVar2;
        param_2[0x119] = iVar3;
        _memmove((long)param_2 + 0x5fa,plVar7,uVar5);
        *(long *)(param_2 + 0x15e) = (long)param_2 + 0x5fa;
        param_2[0x160] = 0x1000;
        param_2[0x161] = 0;
        *(undefined8 *)(param_2 + 0x162) = uVar5;
        *(undefined8 *)(param_2 + 0x166) = uStack_1088;
        *(undefined8 *)(param_2 + 0x164) = uStack_1090;
        *(ulong *)(param_2 + 0x168) = CONCAT71(uStack_107f,uStack_1080);
        *extraout_x8 = param_2;
        FUN_10814cbe4(&uStack_1128);
        FUN_10814cbb0(&lStack_1118);
        func_0x00010814cd24();
        FUN_10814cbe4(&uStack_10e8);
        plVar12 = (long *)0x0;
      }
      else {
        if (param_2 != (int *)0x0) {
          *param_2 = (int)lVar9;
        }
LAB_10814c5b0:
        *extraout_x8 = 0;
      }
      param_1 = &lStack_10d8;
      FUN_10814cbb0(param_1);
    }
    if (plVar12 != (long *)0x0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar12 + 8);
      func_0x00010814ccc0();
      if ((bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010814c5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(plVar12);
        return;
      }
      goto LAB_10814c79c;
    }
  }
  func_0x00010814ccc0();
  if ((bool)in_ZR) {
    return;
  }
LAB_10814c79c:
  ___stack_chk_fail();
  lVar8 = lStack_1078;
  lStack_1078 = 0;
  if (lVar8 != 0) {
    func_0x00010814cc5c();
  }
  FUN_10814cbe4(&uStack_1128);
  FUN_10814cbb0(&lStack_1118);
  if (plVar12 != (long *)0x0) {
    func_0x00010814cc70();
  }
  __ZdlPv(param_2);
  func_0x00010814cd24();
  FUN_10814cbe4(&uStack_10e8);
  FUN_10814cbb0(&lStack_10d8);
  __Unwind_Resume(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10814c82c; end: 10814c83b;  */

void FUN_10814c82c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10814c83c; end: 10814c84f;  */

void FUN_10814c83c(void)

{
  func_0x00010814cb34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10814c850; end: 10814c9df;  */

undefined8 FUN_10814c850(void)

{
  return 0;
}



/* Entry: 10814c9e0; end: 10814ca1f;  */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x000108364340 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined8
FUN_10814c9e0(undefined8 *param_1,undefined8 param_2,float *param_3,float *param_4,uint param_5)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  uVar5 = (undefined4)((ulong)param_2 >> 0x20);
  FUN_10810c9b4();
  fVar7 = *param_3;
  if (fVar7 < param_3[2]) {
    fVar8 = param_3[1];
    if (fVar8 < param_3[3]) {
      fVar9 = *param_4;
      if (fVar9 < param_4[2]) {
        fVar12 = param_4[1];
        if (fVar12 < param_4[3]) {
          fVar13 = param_4[2] - fVar9;
          fVar14 = param_3[2] - fVar7;
          fVar10 = fVar13 / fVar14;
          fVar15 = param_4[3] - fVar12;
          fVar16 = param_3[3] - fVar8;
          fVar11 = fVar15 / fVar16;
          fVar17 = fVar11;
          if (fVar10 <= fVar11) {
            fVar17 = fVar10;
          }
          uVar1 = SUB41(fVar10,0);
          uVar2 = (undefined1)((uint)fVar10 >> 8);
          uVar3 = (undefined1)((uint)fVar10 >> 0x10);
          uVar4 = (undefined1)((uint)fVar10 >> 0x18);
          fVar6 = fVar11;
          if (param_5 != 0) {
            uVar1 = SUB41(fVar17,0);
            uVar2 = (undefined1)((uint)fVar17 >> 8);
            uVar3 = (undefined1)((uint)fVar17 >> 0x10);
            uVar4 = (undefined1)((uint)fVar17 >> 0x18);
            fVar6 = fVar17;
          }
          fVar9 = fVar9 - (float)CONCAT13(uVar4,CONCAT12(uVar3,CONCAT11(uVar2,uVar1))) * fVar7;
          fVar12 = fVar12 - fVar6 * fVar8;
          fVar7 = fVar9;
          if ((param_5 & 0xfffffffe) == 2) {
            fVar7 = fVar13 - fVar17 * fVar14;
            if (fVar10 <= fVar11) {
              fVar7 = fVar15 - fVar17 * fVar16;
            }
            fVar8 = fVar7 * 0.5;
            if (param_5 != 2) {
              fVar8 = fVar7;
            }
            fVar7 = fVar9 + fVar8;
            if (fVar10 <= fVar11) {
              fVar7 = fVar9;
              fVar12 = fVar12 + fVar8;
            }
          }
          func_0x000108142138(CONCAT44(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,CONCAT11(uVar2,uVar1)))),
                              fVar6,fVar7,fVar12);
          return 1;
        }
      }
      param_1[1] = 0;
      *param_1 = 0;
      param_1[3] = 0;
      param_1[2] = 0;
      param_1[4] = 0x23f800000;
      return 1;
    }
  }
  func_0x000108363ab4();
  return 0;
}



/* Entry: 10814ca20; end: 10814ca4f;  */

undefined8 * FUN_10814ca20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a3e608;
  FUN_10810a400(param_1 + 3);
  return param_1;
}



/* Entry: 10814ca50; end: 10814ca8f;  */

void FUN_10814ca50(void)

{
  undefined8 *in_x5;
  
  *in_x5 = 0;
  FUN_10814ca90();
  func_0x00010814cca0();
  return;
}



/* Entry: 10814ca90; end: 10814cacb;  */

void FUN_10814ca90(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined1 param_6,undefined8 *param_7,undefined1 param_8)

{
  undefined8 uVar1;
  
  uVar1 = *param_7;
  *param_7 = 0;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  *(undefined1 *)(param_1 + 4) = param_6;
  *(undefined1 *)((long)param_1 + 0x11) = param_8;
  *(undefined8 *)(param_1 + 6) = uVar1;
  func_0x00010814cca0();
  return;
}



/* Entry: 10814cacc; end: 10814caef;  */

undefined8 FUN_10814cacc(undefined8 param_1)

{
  FUN_10814caf0(param_1,0);
  return param_1;
}



/* Entry: 10814caf0; end: 10814cb07;  */

void FUN_10814caf0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      func_0x0001078bddf8(lVar1 + 0x3d0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10814cb08; end: 10814cbaf;  */

void FUN_10814cb08(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x0001078bddf8(param_2 + 0x3d0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10814cbb0; end: 10814cbe3;  */

long * FUN_10814cbb0(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    (*(code *)param_1[1])();
  }
  return param_1;
}


