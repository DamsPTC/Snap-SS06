/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a041f68; end: 10a041f7b;  */

undefined1  [16] FUN_10a041f68(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  FUN_109ffde64(&UNK_10f6334ac);
  if (param_2 >> 0x39 == 0) {
    lVar1 = param_2 << 7;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000109ffded8();
  uVar2 = param_2;
  for (; param_2 != param_3; param_2 = param_2 + 0x80) {
    uVar2 = param_2;
    FUN_10a042034(param_4,param_2);
    param_4 = param_4 + 0x80;
  }
  auVar4._8_8_ = uVar2;
  auVar4._0_8_ = param_4;
  return auVar4;
}



/* Entry: 10a041f7c; end: 10a041faf;  */

undefined1  [16] FUN_10a041f7c(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_2 >> 0x39 == 0) {
    lVar1 = param_2 << 7;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000109ffded8();
  uVar2 = param_2;
  for (; param_2 != param_3; param_2 = param_2 + 0x80) {
    uVar2 = param_2;
    FUN_10a042034(param_4,param_2);
    param_4 = param_4 + 0x80;
  }
  auVar4._8_8_ = uVar2;
  auVar4._0_8_ = param_4;
  return auVar4;
}



/* Entry: 10a041fb0; end: 10a042033;  */

long FUN_10a041fb0(undefined8 param_1,long param_2,long param_3,long param_4)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x80) {
    FUN_10a042034(param_4,param_2);
    param_4 = param_4 + 0x80;
  }
  return param_4;
}



/* Entry: 10a042034; end: 10a0420ff;  */

undefined4 * FUN_10a042034(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_1 = *param_2;
  if (*(char *)((long)param_2 + 0x1f) < '\0') {
    func_0x000107c3192c(param_1 + 2,*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 4);
    uVar1 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 4) = uVar2;
    *(undefined8 *)(param_1 + 2) = uVar1;
  }
  if (*(char *)((long)param_2 + 0x37) < '\0') {
    func_0x000107c3192c(param_1 + 8,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 10));
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 10);
    uVar1 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
    *(undefined8 *)(param_1 + 10) = uVar2;
    *(undefined8 *)(param_1 + 8) = uVar1;
  }
  uVar1 = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0xe) = uVar1;
  uVar2 = *(undefined8 *)(param_2 + 0x14);
  uVar1 = *(undefined8 *)(param_2 + 0x12);
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  uVar3 = *(undefined8 *)(param_2 + 0x16);
  uVar6 = *(undefined8 *)(param_2 + 0x1c);
  uVar5 = *(undefined8 *)(param_2 + 0x1a);
  param_1[0x1e] = param_2[0x1e];
  *(undefined8 *)(param_1 + 0x1c) = uVar6;
  *(undefined8 *)(param_1 + 0x1a) = uVar5;
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  *(undefined8 *)(param_1 + 0x16) = uVar3;
  *(undefined8 *)(param_1 + 0x14) = uVar2;
  *(undefined8 *)(param_1 + 0x12) = uVar1;
  return param_1;
}



/* Entry: 10a042100; end: 10a042143;  */

void FUN_10a042100(long param_1)

{
  if (*(char *)(param_1 + 0x37) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x20));
  }
  if (-1 < *(char *)(param_1 + 0x1f)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10a042144; end: 10a04236b;  */

void FUN_10a042144(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar2 = plVar3[1];
    lVar1 = lVar4;
    if (lVar2 != lVar4) {
      do {
        lVar2 = lVar2 + -0x80;
        FUN_10a042100(lVar2);
      } while (lVar2 != lVar4);
      lVar1 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a04236c; end: 10a0423ab;  */

bool FUN_10a04236c(long param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  
  if (*(ulong *)(param_1 + 8) < param_3) {
    bVar1 = false;
  }
  else {
    FUN_10a0423ac(param_1,0,param_3,param_2,param_3);
    bVar1 = (int)param_1 == 0;
  }
  return bVar1;
}



/* Entry: 10a0423ac; end: 10a042417;  */

undefined1 *
FUN_10a0423ac(long *param_1,ulong param_2,ulong param_3,undefined8 param_4,ulong param_5)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined1 *puVar6;
  
  uVar4 = param_1[1] - param_2;
  if (param_2 <= (ulong)param_1[1]) {
    if (param_3 <= uVar4) {
      uVar4 = param_3;
    }
    uVar3 = param_5;
    if (uVar4 <= param_5) {
      uVar3 = uVar4;
    }
    lVar5 = *param_1 + param_2;
    _memcmp(lVar5,param_4,uVar3);
    uVar1 = 1;
    if (uVar4 < param_5) {
      uVar1 = 0xffffffff;
    }
    uVar2 = 0;
    if (uVar4 != param_5) {
      uVar2 = uVar1;
    }
    uVar1 = (uint)lVar5;
    if ((uint)lVar5 == 0) {
      uVar1 = uVar2;
    }
    return (undefined1 *)(ulong)uVar1;
  }
  puVar6 = &UNK_10f63350d;
  FUN_109ffdddc();
  *puVar6 = 0;
  puVar6[0x40] = 0;
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_10a042458(puVar6);
  }
  return puVar6;
}



/* Entry: 10a042418; end: 10a042457;  */

undefined1 * FUN_10a042418(undefined1 *param_1,long param_2)

{
  *param_1 = 0;
  param_1[0x40] = 0;
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_10a042458(param_1);
  }
  return param_1;
}



/* Entry: 10a042458; end: 10a0424c3;  */

void FUN_10a042458(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_DAT_110b17898;
  lVar4 = *(long *)(param_2 + 0x10);
  uVar5 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar5;
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
  *param_1 = &PTR_FUN_110c35298;
  FUN_10a0424c4(param_1 + 3,param_2 + 0x18);
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}



/* Entry: 10a0424c4; end: 10a04252f;  */

void FUN_10a0424c4(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar2 = *param_2;
  *param_2 = 0;
  *param_1 = lVar2;
  lVar4 = param_2[2];
  lVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = lVar3;
  param_2[1] = 0;
  lVar3 = param_2[3];
  param_1[3] = lVar3;
  *(int *)(param_1 + 4) = (int)param_2[4];
  if (lVar3 != 0) {
    uVar5 = *(ulong *)(lVar4 + 8);
    uVar6 = param_1[1];
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar5 = uVar6 - 1 & uVar5;
    }
    else if (uVar6 <= uVar5) {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar5 / uVar6;
      }
      uVar5 = uVar5 - uVar1 * uVar6;
    }
    *(long **)(lVar2 + uVar5 * 8) = param_1 + 2;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  return;
}



/* Entry: 10a042530; end: 10a042577;  */

undefined8 * FUN_10a042530(undefined8 *param_1)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x000104c4f944(param_1 + 3);
    *param_1 = &PTR_DAT_110b17898;
    func_0x00010a004dac(param_1 + 1);
  }
  return param_1;
}



/* Entry: 10a042578; end: 10a04258b;  */

void FUN_10a042578(undefined8 *param_1)

{
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_1);
  return;
}



/* Entry: 10a04258c; end: 10a0425af;  */

void FUN_10a04258c(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  FUN_10a0426d8(&uStack_18);
  return;
}



/* Entry: 10a0425b0; end: 10a0425b3;  */

void FUN_10a0425b0(void)

{
  return;
}



/* Entry: 10a0425b4; end: 10a042633;  */

long * FUN_10a0425b4(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = *param_2;
  *param_2 = 0;
  lVar1 = *param_1;
  *param_1 = lVar2;
  if (lVar1 != 0) {
    (*(code *)param_1[1])();
  }
  param_1[1] = param_2[1];
  plVar3 = param_1 + 2;
  (**(code **)*plVar3)(plVar3);
  (**(code **)(param_2[2] + 0x10))(plVar3,param_2 + 2);
  return param_1;
}



/* Entry: 10a042634; end: 10a04267f;  */

long * FUN_10a042634(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    (*(code *)param_1[1])();
  }
  (**(code **)param_1[2])();
  return param_1;
}



/* Entry: 10a042680; end: 10a0426bf;  */

void FUN_10a042680(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a0426c0; end: 10a0426d7;  */

void FUN_10a0426c0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a0426d8; end: 10a042717;  */

void FUN_10a0426d8(undefined8 *param_1)

{
  if (*(long *)*param_1 != 0) {
    FUN_10a042718();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 10a042718; end: 10a042763;  */

/* WARNING: Removing unreachable block (ram,0x00010a042744) */

void FUN_10a042718(long *param_1)

{
  long lVar1;
  
  for (lVar1 = param_1[1]; lVar1 != *param_1; lVar1 = lVar1 + -0x18) {
  }
  param_1[1] = *param_1;
  return;
}



/* Entry: 10a042764; end: 10a04287b;  */

undefined8 *
FUN_10a042764(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = &PTR_DAT_110c5ee88;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1 + 7,*param_2,param_2[1]);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[9] = param_2[2];
    param_1[8] = uVar2;
    param_1[7] = uVar1;
  }
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(param_1 + 10,*param_3,param_3[1]);
  }
  else {
    uVar2 = param_3[1];
    uVar1 = *param_3;
    param_1[0xc] = param_3[2];
    param_1[0xb] = uVar2;
    param_1[10] = uVar1;
  }
  if (*(char *)((long)param_4 + 0x17) < '\0') {
    func_0x000107c3192c(param_1 + 0xd,*param_4,param_4[1]);
  }
  else {
    uVar2 = param_4[1];
    uVar1 = *param_4;
    param_1[0xf] = param_4[2];
    param_1[0xe] = uVar2;
    param_1[0xd] = uVar1;
  }
  return param_1;
}



/* Entry: 10a04287c; end: 10a042917;  */

undefined8 * FUN_10a04287c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c5eee8;
  func_0x00010a0428c0(param_1 + 3);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a042918; end: 10a042993;  */

long * FUN_10a042918(long *param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  *param_1 = param_2;
  puVar2 = (undefined8 *)0x20;
  __Znwm();
  *puVar2 = &PTR_FUN_110b9f490;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = param_2;
  param_1[1] = (long)puVar2;
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + 0x28;
  }
  FUN_10a042994(param_1,lVar1,param_2);
  return param_1;
}



/* Entry: 10a042994; end: 10a042a43;  */

void FUN_10a042994(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if ((param_2 != (undefined8 *)0x0) &&
     ((lVar4 = param_2[1], lVar4 == 0 || (*(long *)(lVar4 + 8) == -1)))) {
    plVar5 = *(long **)(param_1 + 8);
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = plVar5 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar4 = param_2[1];
    }
    *param_2 = param_3;
    param_2[1] = plVar5;
    if (lVar4 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a042a44; end: 10a042a47;  */

void FUN_10a042a44(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a042a48; end: 10a042a5b;  */

void FUN_10a042a48(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a042a5c; end: 10a042a73;  */

void FUN_10a042a5c(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010a042a6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 10a042a74; end: 10a042aab;  */

undefined8 FUN_10a042a74(undefined8 param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110b9f4e0);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a042aac; end: 10a042aaf;  */

void FUN_10a042aac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a042ab0; end: 10a042afb;  */

bool FUN_10a042ab0(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  uVar2 = *(ulong *)(param_2 + 8);
  if (uVar1 == uVar2) {
    return true;
  }
  if (-1 < (long)(uVar2 & uVar1)) {
    return false;
  }
  uVar1 = uVar1 & 0x7fffffffffffffff;
  _strcmp(uVar1,uVar2 & 0x7fffffffffffffff);
  return (int)uVar1 == 0;
}



/* Entry: 10a042afc; end: 10a042c03;  */

long FUN_10a042afc(long param_1)

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



/* Entry: 10a042c04; end: 10a042c0b;  */

void FUN_10a042c04(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a042c08);
  (*pcVar1)();
}



/* Entry: 10a042c0c; end: 10a042d87;  */

long FUN_10a042c0c(long param_1)

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



/* Entry: 10a042d88; end: 10a042d97;  */

undefined8 * FUN_10a042d88(undefined8 *param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  byte bVar6;
  undefined8 *puVar7;
  ulong *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  char *pcVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  uint6 uVar17;
  undefined8 uVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  byte bVar24;
  byte bVar25;
  undefined8 *puStack_68;
  
  *param_1 = &PTR_FUN_110b9f768;
  *param_1 = &PTR_FUN_110bacbc0;
  pcVar12 = (char *)param_1[3];
  plVar1 = (long *)param_1[4];
  cVar19 = *pcVar12;
  while (puVar7 = param_1, cVar19 < -1) {
    uVar18 = *(undefined8 *)pcVar12;
    uVar9 = CONCAT17(-(-2 < (char)((ulong)uVar18 >> 0x38)),
                     CONCAT16(-(-2 < (char)((ulong)uVar18 >> 0x30)),
                              CONCAT15(-(-2 < (char)((ulong)uVar18 >> 0x28)),
                                       CONCAT14(-(-2 < (char)((ulong)uVar18 >> 0x20)),
                                                CONCAT13(-(-2 < (char)((ulong)uVar18 >> 0x18)),
                                                         CONCAT12(-(-2 < (char)((ulong)uVar18 >>
                                                                               0x10)),
                                                                  CONCAT11(-(-2 < (char)((ulong)
                                                  uVar18 >> 8)),-(-2 < (char)uVar18))))))));
    uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
    uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
    uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
    uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
    uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20);
    pcVar12 = pcVar12 + (uVar9 >> 3);
    plVar1 = plVar1 + (uVar9 >> 3) * 2;
    cVar19 = *pcVar12;
  }
  while (cVar19 != -1) {
    plVar14 = plVar1 + 2;
    puVar7 = (undefined8 *)(*plVar1 + 0x10);
    puStack_68 = param_1;
    func_0x00010a1bd9e8(puVar7,&puStack_68);
    pcVar12 = pcVar12 + 1;
    cVar19 = *pcVar12;
    while (plVar1 = plVar14, cVar19 < -1) {
      uVar18 = *(undefined8 *)pcVar12;
      uVar9 = CONCAT17(-(-2 < (char)((ulong)uVar18 >> 0x38)),
                       CONCAT16(-(-2 < (char)((ulong)uVar18 >> 0x30)),
                                CONCAT15(-(-2 < (char)((ulong)uVar18 >> 0x28)),
                                         CONCAT14(-(-2 < (char)((ulong)uVar18 >> 0x20)),
                                                  CONCAT13(-(-2 < (char)((ulong)uVar18 >> 0x18)),
                                                           CONCAT12(-(-2 < (char)((ulong)uVar18 >>
                                                                                 0x10)),
                                                                    CONCAT11(-(-2 < (char)((ulong)
                                                  uVar18 >> 8)),-(-2 < (char)uVar18))))))));
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20);
      pcVar12 = pcVar12 + (uVar9 >> 3);
      plVar14 = plVar14 + (uVar9 >> 3) * 2;
      cVar19 = *pcVar12;
    }
  }
  pcVar12 = (char *)param_1[7];
  plVar1 = (long *)param_1[8];
  cVar19 = *pcVar12;
  while (cVar19 < -1) {
    uVar18 = *(undefined8 *)pcVar12;
    uVar9 = CONCAT17(-(-2 < (char)((ulong)uVar18 >> 0x38)),
                     CONCAT16(-(-2 < (char)((ulong)uVar18 >> 0x30)),
                              CONCAT15(-(-2 < (char)((ulong)uVar18 >> 0x28)),
                                       CONCAT14(-(-2 < (char)((ulong)uVar18 >> 0x20)),
                                                CONCAT13(-(-2 < (char)((ulong)uVar18 >> 0x18)),
                                                         CONCAT12(-(-2 < (char)((ulong)uVar18 >>
                                                                               0x10)),
                                                                  CONCAT11(-(-2 < (char)((ulong)
                                                  uVar18 >> 8)),-(-2 < (char)uVar18))))))));
    uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
    uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
    uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
    uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
    uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20);
    pcVar12 = pcVar12 + (uVar9 >> 3);
    plVar1 = plVar1 + (uVar9 >> 3) * 2;
    cVar19 = *pcVar12;
  }
  while (cVar19 != -1) {
    plVar14 = plVar1 + 2;
    puVar7 = (undefined8 *)(*plVar1 + 0x10);
    puStack_68 = param_1;
    func_0x00010a1bd9e8(puVar7,&puStack_68);
    pcVar12 = pcVar12 + 1;
    cVar19 = *pcVar12;
    while (plVar1 = plVar14, cVar19 < -1) {
      uVar18 = *(undefined8 *)pcVar12;
      uVar9 = CONCAT17(-(-2 < (char)((ulong)uVar18 >> 0x38)),
                       CONCAT16(-(-2 < (char)((ulong)uVar18 >> 0x30)),
                                CONCAT15(-(-2 < (char)((ulong)uVar18 >> 0x28)),
                                         CONCAT14(-(-2 < (char)((ulong)uVar18 >> 0x20)),
                                                  CONCAT13(-(-2 < (char)((ulong)uVar18 >> 0x18)),
                                                           CONCAT12(-(-2 < (char)((ulong)uVar18 >>
                                                                                 0x10)),
                                                                    CONCAT11(-(-2 < (char)((ulong)
                                                  uVar18 >> 8)),-(-2 < (char)uVar18))))))));
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20);
      pcVar12 = pcVar12 + (uVar9 >> 3);
      plVar14 = plVar14 + (uVar9 >> 3) * 2;
      cVar19 = *pcVar12;
    }
  }
  lVar13 = param_1[1];
  if (lVar13 != 0) {
    puStack_68 = param_1;
    FUN_10a1bd024();
    if (puVar7[8] == lVar13) {
      FUN_10a1bd024();
      func_0x00010a1bd968();
    }
    __ZNSt3__15mutex4lockEv(lVar13);
    func_0x00010a1bd968(lVar13 + 0x80,&puStack_68);
    lVar10 = lVar13 + 0x40;
    puVar7 = puStack_68;
    FUN_10a1bfb78(lVar10,puStack_68);
    if (lVar10 != 0) {
      FUN_10a1cc04c(puVar7);
      FUN_10ae6cb48(lVar13 + 0x40,lVar10,0x48);
    }
    lVar10 = 0;
    uVar15 = *(ulong *)(lVar13 + 0x60);
    Hint_Prefetch(uVar15,0,2,0);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = puStack_68 + 0x2219159b;
    uVar9 = (SUB168(auVar2 * ZEXT816(0x9ddfea08eb382d69),8) ^
            (long)(puStack_68 + 0x2219159b) * -0x622015f714c7d297) + (long)puStack_68;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar9;
    uVar11 = SUB168(auVar3 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar9 * -0x622015f714c7d297;
    uVar9 = uVar11 >> 7 ^ uVar15 >> 0xc;
    bVar6 = (byte)uVar11;
    uVar17 = CONCAT15(bVar6,CONCAT14(bVar6,CONCAT13(bVar6,CONCAT12(bVar6,CONCAT11(bVar6,bVar6))))) &
             0x7f7f7f7f7f7f;
    while( true ) {
      uVar9 = uVar9 & *(ulong *)(lVar13 + 0x70);
      uVar18 = *(undefined8 *)(uVar15 + uVar9);
      cVar19 = (char)((ulong)uVar18 >> 8);
      cVar20 = (char)((ulong)uVar18 >> 0x10);
      cVar21 = (char)((ulong)uVar18 >> 0x18);
      cVar22 = (char)((ulong)uVar18 >> 0x20);
      cVar23 = (char)((ulong)uVar18 >> 0x28);
      bVar24 = (byte)((ulong)uVar18 >> 0x30);
      bVar25 = (byte)((ulong)uVar18 >> 0x38);
      for (uVar11 = CONCAT17(-(bVar25 == (bVar6 & 0x7f)),
                             CONCAT16(-(bVar24 == (bVar6 & 0x7f)),
                                      CONCAT15(-(cVar23 == (char)(uVar17 >> 0x28)),
                                               CONCAT14(-(cVar22 == (char)(uVar17 >> 0x20)),
                                                        CONCAT13(-(cVar21 == (char)(uVar17 >> 0x18))
                                                                 ,CONCAT12(-(cVar20 ==
                                                                            (char)(uVar17 >> 0x10)),
                                                                           CONCAT11(-(cVar19 ==
                                                                                     (char)(uVar17 
                                                  >> 8)),-((char)uVar18 == (char)uVar17)))))))) &
                    0x8080808080808080; uVar11 != 0; uVar11 = uVar11 - 1 & uVar11) {
        uVar16 = (uVar11 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar11 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
        uVar16 = uVar9 + ((ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3) &
                 *(ulong *)(lVar13 + 0x70);
        if (*(undefined8 **)(*(long *)(lVar13 + 0x68) + uVar16 * 0x48) == puStack_68) {
          if (uVar15 != 0) {
            FUN_10a1cbfa4();
            FUN_10ae6cb48((ulong *)(lVar13 + 0x60),uVar15 + uVar16,0x48);
          }
          goto LAB_10a1c03bc;
        }
      }
      if (CONCAT17(-(bVar25 == 0x80),
                   CONCAT16(-(bVar24 == 0x80),
                            CONCAT15(-(cVar23 == -0x80),
                                     CONCAT14(-(cVar22 == -0x80),
                                              CONCAT13(-(cVar21 == -0x80),
                                                       CONCAT12(-(cVar20 == -0x80),
                                                                CONCAT11(-(cVar19 == -0x80),
                                                                         -((char)uVar18 == -0x80))))
                                             )))) != 0) break;
      lVar10 = lVar10 + 8;
      uVar9 = lVar10 + uVar9;
    }
LAB_10a1c03bc:
    func_0x00010a1bd9e8(lVar13 + 0xe0,&puStack_68);
    if (puStack_68[1] == lVar13) {
      puStack_68[1] = 0;
    }
    if ((((*(byte *)(lVar13 + 0x120) & 1) != 0) || ((*(byte *)(lVar13 + 0x121) & 1) != 0)) ||
       ((*(byte *)(lVar13 + 0x122) & 1) != 0)) {
      lVar10 = 0;
      puVar8 = (ulong *)(lVar13 + 0xc0);
      uVar11 = *puVar8;
      Hint_Prefetch(uVar11,0,2,0);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = puStack_68 + 0x2219159b;
      uVar9 = (SUB168(auVar4 * ZEXT816(0x9ddfea08eb382d69),8) ^
              (long)(puStack_68 + 0x2219159b) * -0x622015f714c7d297) + (long)puStack_68;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar9;
      uVar9 = SUB168(auVar5 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar9 * -0x622015f714c7d297;
      bVar6 = (byte)uVar9;
      uVar17 = CONCAT15(bVar6,CONCAT14(bVar6,CONCAT13(bVar6,CONCAT12(bVar6,CONCAT11(bVar6,bVar6)))))
               & 0x7f7f7f7f7f7f;
      uVar9 = uVar9 >> 7 ^ uVar11 >> 0xc;
      while( true ) {
        uVar9 = uVar9 & *(ulong *)(lVar13 + 0xd0);
        uVar18 = *(undefined8 *)(uVar11 + uVar9);
        cVar19 = (char)((ulong)uVar18 >> 8);
        cVar20 = (char)((ulong)uVar18 >> 0x10);
        cVar21 = (char)((ulong)uVar18 >> 0x18);
        cVar22 = (char)((ulong)uVar18 >> 0x20);
        cVar23 = (char)((ulong)uVar18 >> 0x28);
        bVar24 = (byte)((ulong)uVar18 >> 0x30);
        bVar25 = (byte)((ulong)uVar18 >> 0x38);
        uVar15 = CONCAT17(-(bVar25 == (bVar6 & 0x7f)),
                          CONCAT16(-(bVar24 == (bVar6 & 0x7f)),
                                   CONCAT15(-(cVar23 == (char)(uVar17 >> 0x28)),
                                            CONCAT14(-(cVar22 == (char)(uVar17 >> 0x20)),
                                                     CONCAT13(-(cVar21 == (char)(uVar17 >> 0x18)),
                                                              CONCAT12(-(cVar20 ==
                                                                        (char)(uVar17 >> 0x10)),
                                                                       CONCAT11(-(cVar19 ==
                                                                                 (char)(uVar17 >> 8)
                                                                                 ),-((char)uVar18 ==
                                                                                    (char)uVar17))))
                                                    )))) & 0x8080808080808080;
        if (uVar15 != 0) {
          do {
            uVar16 = (uVar15 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar15 >> 7 & 0xff00ff00ff00ff) << 8
            ;
            uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
            if (*(undefined8 **)
                 (*(long *)(lVar13 + 200) +
                 (uVar9 + ((ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3) &
                 *(ulong *)(lVar13 + 0xd0)) * 8) == puStack_68) goto LAB_10a1c04b8;
            uVar15 = uVar15 - 1 & uVar15;
          } while (uVar15 != 0);
        }
        if (CONCAT17(-(bVar25 == 0x80),
                     CONCAT16(-(bVar24 == 0x80),
                              CONCAT15(-(cVar23 == -0x80),
                                       CONCAT14(-(cVar22 == -0x80),
                                                CONCAT13(-(cVar21 == -0x80),
                                                         CONCAT12(-(cVar20 == -0x80),
                                                                  CONCAT11(-(cVar19 == -0x80),
                                                                           -((char)uVar18 == -0x80))
                                                                 )))))) != 0) break;
        lVar10 = lVar10 + 8;
        uVar9 = lVar10 + uVar9;
      }
      FUN_10a1d1adc();
      *(undefined8 **)(*(long *)(lVar13 + 200) + (long)puVar8 * 8) = puStack_68;
    }
LAB_10a1c04b8:
    __ZNSt3__15mutex6unlockEv(lVar13);
  }
  if (param_1[9] != 0) {
    __ZdlPv(param_1[7] + -8);
  }
  if (param_1[5] != 0) {
    __ZdlPv(param_1[3] + -8);
  }
  return param_1;
}



/* Entry: 10a042d98; end: 10a042db7;  */

void FUN_10a042d98(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9f768;
  FUN_10a1c00f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a042db8; end: 10a042dcb;  */

void FUN_10a042db8(void)

{
  return;
}



/* Entry: 10a042dcc; end: 10a042e23;  */

long FUN_10a042dcc(long param_1)

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



/* Entry: 10a042e24; end: 10a042ee7;  */

void FUN_10a042e24(char *param_1,long param_2)

{
  char *pcVar1;
  code *pcVar2;
  char *pcVar3;
  char *pcStack_40;
  long lStack_38;
  
  uRam00000001137e93a0 = 0;
  uRam00000001137e93a8 = 0;
  uRam00000001137e93b0 = 0;
  if (param_2 == 0) {
    uRam00000001137e93b0 = 0;
    uRam00000001137e93a8 = 0;
    uRam00000001137e93a0 = 0;
    return;
  }
  pcVar1 = param_1 + param_2;
  pcStack_40 = param_1;
LAB_10a042e5c:
  do {
    pcVar3 = param_1;
    if (*param_1 != ',') {
      param_1 = param_1 + 1;
      pcVar3 = pcVar1;
      if (param_1 != pcVar1) goto LAB_10a042e5c;
    }
    if (pcStack_40 != pcVar3) {
      lStack_38 = (long)pcVar3 - (long)pcStack_40;
      if (lStack_38 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10a042ec4);
        (*pcVar2)();
      }
      FUN_10a043080(0x1137e93a0,&pcStack_40);
    }
    if (pcVar3 == pcVar1) {
      return;
    }
    param_1 = pcVar3 + 1;
    pcStack_40 = param_1;
    if (param_1 == pcVar1) {
      return;
    }
  } while( true );
}



/* Entry: 10a042ee8; end: 10a042f17;  */

long * FUN_10a042ee8(long *param_1)

{
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a042f18; end: 10a04307f;  */

void FUN_10a042f18(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined **ppuVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lStack_118;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined7 uStack_28;
  undefined1 uStack_21;
  
  ppuVar2 = &PTR___tlv_bootstrap_11340de28;
  (*(code *)PTR___tlv_bootstrap_11340de28)();
  puStack_38 = &UNK_10f63b699;
  uStack_30 = 0x28;
  if (*ppuVar2 != (undefined *)0x0) {
    plVar10 = *(long **)(*ppuVar2 + 0x10);
    if (plVar10 != (long *)0x0) {
      puVar3 = (undefined8 *)0x28;
      __Znwm();
      uStack_40 = -0x7fffffffffffffd8;
      uStack_48 = 0x27;
      puVar3[1] = 0x4349565245535f50;
      *puVar3 = 0x414e535f534e454c;
      puVar3[3] = 0x4c415f54534f485f;
      puVar3[2] = 0x45544f4d45525f45;
      *(undefined8 *)((long)puVar3 + 0x1f) = 0x5453494c574f4c4c;
      *(undefined1 *)((long)puVar3 + 0x27) = 0;
      puVar4 = (undefined8 *)0x28;
      puStack_50 = puVar3;
      __Znwm();
      uStack_58 = -0x7fffffffffffffd8;
      uStack_60 = 0x25;
      *(undefined8 *)((long)puVar4 + 0x1d) = 0x74656e2e6e64632d;
      puVar4[1] = 0x74656e2e6e64632d;
      *puVar4 = 0x63732e74732d6663;
      puVar4[3] = 0x64632d63732e6e64;
      puVar4[2] = 0x63672d746c6f622c;
      *(undefined1 *)((long)puVar4 + 0x25) = 0;
      puStack_68 = puVar4;
      (**(code **)(*plVar10 + 0x60))(&puStack_38,plVar10,&puStack_50,&puStack_68);
      if (lRam00000001137e9398 < 0) {
        __ZdlPv(puRam00000001137e9388);
      }
      uRam00000001137e9390 = uStack_30;
      puRam00000001137e9388 = puStack_38;
      lRam00000001137e9398 = CONCAT17(uStack_21,uStack_28);
      uStack_21 = 0;
      puStack_38 = (undefined *)((ulong)puStack_38 & 0xffffffffffffff00);
      if (uStack_58 < 0) {
        __ZdlPv(puStack_68);
      }
      if (uStack_40 < 0) {
        __ZdlPv(puStack_50);
      }
    }
    return;
  }
  ppuVar2 = &puStack_38;
  FUN_10a0edfc4();
  if (uStack_58._7_1_ < '\0') {
    __ZdlPv(puStack_68);
  }
  if (uStack_40._7_1_ < '\0') {
    __ZdlPv(puStack_50);
  }
  __Unwind_Resume();
  puVar3 = (undefined8 *)ppuVar2[1];
  if (puVar3 < ppuVar2[2]) {
    uVar14 = *param_2;
    puVar3[1] = param_2[1];
    *puVar3 = uVar14;
    puVar3 = puVar3 + 2;
  }
  else {
    lVar12 = (long)puVar3 - (long)*ppuVar2;
    uVar1 = (lVar12 >> 4) + 1;
    if (uVar1 >> 0x3c != 0) {
      FUN_10a043148();
      FUN_109ffde64(&UNK_10f6334ac);
      if ((ulong)param_2 >> 0x3c == 0) {
        __Znwm((long)param_2 << 4);
        return;
      }
      func_0x000109ffded8();
      plVar10 = (long *)&UNK_10f6334ac;
      FUN_109ffde64();
      lVar12 = *plVar10;
      if (lVar12 != 0) {
        lVar13 = plVar10[1];
        lVar7 = lVar12;
        if (lVar13 != lVar12) {
          do {
            lVar13 = lVar13 + -0x18;
            lStack_118 = lVar13;
            FUN_10a04a568(&lStack_118);
          } while (lVar13 != lVar12);
          lVar7 = *plVar10;
        }
        plVar10[1] = lVar12;
        __ZdlPv(lVar7);
      }
      return;
    }
    uVar8 = (long)ppuVar2[2] - (long)*ppuVar2;
    uVar9 = (long)uVar8 >> 3;
    if (uVar9 <= uVar1) {
      uVar9 = uVar1;
    }
    if (0x7fffffffffffffef < uVar8) {
      uVar9 = 0xfffffffffffffff;
    }
    ppuVar5 = ppuVar2;
    FUN_10a04315c();
    puVar4 = (undefined8 *)((long)ppuVar5 + lVar12);
    uVar14 = *param_2;
    puVar4[1] = param_2[1];
    *puVar4 = uVar14;
    puVar3 = puVar4 + 2;
    puVar11 = (undefined *)((long)puVar4 - ((long)ppuVar2[1] - (long)*ppuVar2));
    _memcpy(puVar11);
    puVar6 = *ppuVar2;
    *ppuVar2 = puVar11;
    ppuVar2[1] = (undefined *)puVar3;
    ppuVar2[2] = (undefined *)(ppuVar5 + uVar9 * 2);
    if (puVar6 != (undefined *)0x0) {
      __ZdlPv();
    }
  }
  ppuVar2[1] = (undefined *)puVar3;
  return;
}



/* Entry: 10a043080; end: 10a043147;  */

void FUN_10a043080(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lStack_a8;
  
  puVar8 = (undefined8 *)param_1[1];
  if (puVar8 < (undefined8 *)param_1[2]) {
    uVar10 = *param_2;
    puVar8[1] = param_2[1];
    *puVar8 = uVar10;
    puVar8 = puVar8 + 2;
  }
  else {
    lVar7 = (long)puVar8 - *param_1;
    uVar1 = (lVar7 >> 4) + 1;
    if (uVar1 >> 0x3c != 0) {
      FUN_10a043148();
      FUN_109ffde64(&UNK_10f6334ac);
      if ((ulong)param_2 >> 0x3c == 0) {
        __Znwm((long)param_2 << 4);
        return;
      }
      func_0x000109ffded8();
      plVar3 = (long *)&UNK_10f6334ac;
      FUN_109ffde64();
      lVar7 = *plVar3;
      if (lVar7 != 0) {
        lVar9 = plVar3[1];
        lVar6 = lVar7;
        if (lVar9 != lVar7) {
          do {
            lVar9 = lVar9 + -0x18;
            lStack_a8 = lVar9;
            FUN_10a04a568(&lStack_a8);
          } while (lVar9 != lVar7);
          lVar6 = *plVar3;
        }
        plVar3[1] = lVar7;
        __ZdlPv(lVar6);
      }
      return;
    }
    uVar4 = param_1[2] - *param_1;
    uVar5 = (long)uVar4 >> 3;
    if (uVar5 <= uVar1) {
      uVar5 = uVar1;
    }
    if (0x7fffffffffffffef < uVar4) {
      uVar5 = 0xfffffffffffffff;
    }
    plVar3 = param_1;
    FUN_10a04315c();
    puVar2 = (undefined8 *)((long)plVar3 + lVar7);
    uVar10 = *param_2;
    puVar2[1] = param_2[1];
    *puVar2 = uVar10;
    puVar8 = puVar2 + 2;
    lVar6 = (long)puVar2 - (param_1[1] - *param_1);
    _memcpy(lVar6);
    lVar7 = *param_1;
    *param_1 = lVar6;
    param_1[1] = (long)puVar8;
    param_1[2] = (long)(plVar3 + uVar5 * 2);
    if (lVar7 != 0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar8;
  return;
}



/* Entry: 10a043148; end: 10a04315b;  */

void FUN_10a043148(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lStack_78;
  
  FUN_109ffde64(&UNK_10f6334ac);
  if (param_2 >> 0x3c == 0) {
    __Znwm(param_2 << 4);
    return;
  }
  func_0x000109ffded8();
  plVar1 = (long *)&UNK_10f6334ac;
  FUN_109ffde64();
  lVar3 = *plVar1;
  if (lVar3 != 0) {
    lVar4 = plVar1[1];
    lVar2 = lVar3;
    if (lVar4 != lVar3) {
      do {
        lVar4 = lVar4 + -0x18;
        lStack_78 = lVar4;
        FUN_10a04a568(&lStack_78);
      } while (lVar4 != lVar3);
      lVar2 = *plVar1;
    }
    plVar1[1] = lVar3;
    __ZdlPv(lVar2);
  }
  return;
}



/* Entry: 10a04315c; end: 10a04318f;  */

void FUN_10a04315c(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lStack_68;
  
  if (param_2 >> 0x3c == 0) {
    __Znwm(param_2 << 4);
    return;
  }
  func_0x000109ffded8();
  plVar1 = (long *)&UNK_10f6334ac;
  FUN_109ffde64();
  lVar3 = *plVar1;
  if (lVar3 != 0) {
    lVar4 = plVar1[1];
    lVar2 = lVar3;
    if (lVar4 != lVar3) {
      do {
        lVar4 = lVar4 + -0x18;
        lStack_68 = lVar4;
        FUN_10a04a568(&lStack_68);
      } while (lVar4 != lVar3);
      lVar2 = *plVar1;
    }
    plVar1[1] = lVar3;
    __ZdlPv(lVar2);
  }
  return;
}



/* Entry: 10a043190; end: 10a0431a3;  */

void FUN_10a043190(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lStack_48;
  
  plVar1 = (long *)&UNK_10f6334ac;
  FUN_109ffde64();
  lVar3 = *plVar1;
  if (lVar3 != 0) {
    lVar4 = plVar1[1];
    lVar2 = lVar3;
    if (lVar4 != lVar3) {
      do {
        lVar4 = lVar4 + -0x18;
        lStack_48 = lVar4;
        FUN_10a04a568(&lStack_48);
      } while (lVar4 != lVar3);
      lVar2 = *plVar1;
    }
    plVar1[1] = lVar3;
    __ZdlPv(lVar2);
  }
  return;
}



/* Entry: 10a0431a4; end: 10a04320b;  */

void FUN_10a0431a4(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lStack_38;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar3 = param_1[1];
    lVar1 = lVar2;
    if (lVar3 != lVar2) {
      do {
        lVar3 = lVar3 + -0x18;
        lStack_38 = lVar3;
        FUN_10a04a568(&lStack_38);
      } while (lVar3 != lVar2);
      lVar1 = *param_1;
    }
    param_1[1] = lVar2;
    __ZdlPv(lVar1);
  }
  return;
}



/* Entry: 10a04320c; end: 10a04321f;  */

undefined8 FUN_10a04320c(void)

{
  FUN_109ffdddc(&UNK_10f6334ac);
  return 0;
}



/* Entry: 10a043220; end: 10a043293;  */

undefined8 FUN_10a043220(void)

{
  return 0;
}



/* Entry: 10a043294; end: 10a0432a7;  */

void FUN_10a043294(void)

{
  __ZNSt9exceptionD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a0432a8; end: 10a0432d7;  */

char * FUN_10a0432a8(long param_1)

{
  char *pcVar1;
  
  pcVar1 = "fail";
  if (*(int *)(param_1 + 8) != 1) {
    pcVar1 = "unknown";
  }
  return pcVar1;
}



/* Entry: 10a0432d8; end: 10a0432f7;  */

void FUN_10a0432d8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b9d040;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a0432f8; end: 10a04337b;  */

void FUN_10a0432f8(long param_1)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x0001099f0ce8();
    __ZdlPv();
  }
  plVar1 = (long *)*(long *)(param_1 + 0x40);
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    if (plVar1[4] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *(long *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x20) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
  return;
}



/* Entry: 10a04337c; end: 10a04337f;  */

void FUN_10a04337c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a043380; end: 10a0433f3;  */

void FUN_10a043380(undefined8 *param_1)

{
  if (*(long *)*param_1 != 0) {
    func_0x00010a0436d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 10a0433f4; end: 10a0435cb;  */

void FUN_10a0433f4(long *param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(param_1 + 1);
  puVar3 = (ulong *)*param_1;
  puVar4 = puVar3;
  if (uVar1 != 0) {
    uVar2 = (ulong)(0x40 - uVar1);
    uVar5 = uVar2;
    if (param_2 <= uVar2) {
      uVar5 = param_2;
    }
    puVar4 = puVar3 + 1;
    *puVar3 = *puVar3 & (0xffffffffffffffffU >> (uVar2 - uVar5 & 0x3f) &
                         -1L << ((ulong)uVar1 & 0x3f) ^ 0xffffffffffffffff);
    param_2 = param_2 - uVar5;
    *param_1 = (long)puVar4;
  }
  uVar5 = param_2 >> 6;
  if (0x3f < param_2) {
    _bzero(puVar4,uVar5 << 3);
  }
  if ((param_2 & 0x3f) != 0) {
    *param_1 = (long)(puVar4 + uVar5);
    puVar4[uVar5] =
         puVar4[uVar5] & (0xffffffffffffffffU >> (-(param_2 & 0x3f) & 0x3f) ^ 0xffffffffffffffff);
  }
  return;
}



/* Entry: 10a0435cc; end: 10a0435df;  */

undefined1  [16] FUN_10a0435cc(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long *plVar4;
  long *plVar5;
  char *pcVar6;
  char *pcVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  long lStack_48;
  undefined1 **ppuStack_40;
  code *pcStack_38;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  plVar1 = (long *)&UNK_10f6334ac;
  FUN_109ffde64();
  pcStack_18 = FUN_10a0435e0;
  if ((ulong)param_2 >> 0x3a == 0) {
    lVar2 = (long)param_2 << 6;
    puStack_20 = &stack0xfffffffffffffff0;
    __Znwm(lVar2);
    auVar8._8_8_ = param_2;
    auVar8._0_8_ = lVar2;
    return auVar8;
  }
  puStack_20 = &stack0xfffffffffffffff0;
  func_0x000109ffded8();
  pcStack_38 = FUN_10a043614;
  plVar5 = &lStack_48;
  ppuStack_40 = &puStack_20;
  FUN_10a043650();
  if (*plVar1 != 0) {
    auVar9._8_8_ = plVar5;
    auVar9._0_8_ = *plVar1 + 0x38;
    return auVar9;
  }
  pcVar3 = "map::at:  key not found";
  FUN_109ffdddc();
  pcVar6 = *(char **)(pcVar3 + 8);
  pcVar3 = pcVar3 + 8;
  plVar1 = plVar5;
  while (pcVar7 = pcVar3, pcVar6 != (char *)0x0) {
    while( true ) {
      pcVar7 = pcVar6;
      plVar1 = (long *)(pcVar7 + 0x20);
      plVar4 = param_2;
      FUN_10a003e3c(param_2,plVar1);
      if (((uint)plVar4 >> 7 & 1) != 0) break;
      pcVar6 = pcVar7 + 0x20;
      plVar1 = param_2;
      FUN_10a003e3c(pcVar6,param_2);
      if (((uint)pcVar6 >> 7 & 1) == 0) goto LAB_10a0436bc;
      pcVar3 = pcVar7 + 8;
      pcVar6 = *(char **)pcVar3;
      if (*(char **)pcVar3 == (char *)0x0) goto LAB_10a0436bc;
    }
    pcVar3 = pcVar7;
    pcVar6 = *(char **)pcVar7;
  }
LAB_10a0436bc:
  *plVar5 = (long)pcVar7;
  auVar10._8_8_ = plVar1;
  auVar10._0_8_ = pcVar3;
  return auVar10;
}



/* Entry: 10a0435e0; end: 10a043613;  */

undefined1  [16] FUN_10a0435e0(long *param_1,long *param_2)

{
  long lVar1;
  char *pcVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  char *pcVar6;
  char *pcVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  long lStack_38;
  undefined1 *puStack_30;
  code *pcStack_28;
  
  if ((ulong)param_2 >> 0x3a == 0) {
    lVar1 = (long)param_2 << 6;
    __Znwm(lVar1);
    auVar8._8_8_ = param_2;
    auVar8._0_8_ = lVar1;
    return auVar8;
  }
  func_0x000109ffded8();
  pcStack_28 = FUN_10a043614;
  plVar4 = &lStack_38;
  puStack_30 = &stack0xfffffffffffffff0;
  FUN_10a043650();
  if (*param_1 != 0) {
    auVar9._8_8_ = plVar4;
    auVar9._0_8_ = *param_1 + 0x38;
    return auVar9;
  }
  pcVar2 = "map::at:  key not found";
  FUN_109ffdddc();
  pcVar6 = *(char **)(pcVar2 + 8);
  pcVar2 = pcVar2 + 8;
  plVar5 = plVar4;
  while (pcVar7 = pcVar2, pcVar6 != (char *)0x0) {
    while( true ) {
      pcVar7 = pcVar6;
      plVar5 = (long *)(pcVar7 + 0x20);
      plVar3 = param_2;
      FUN_10a003e3c(param_2,plVar5);
      if (((uint)plVar3 >> 7 & 1) != 0) break;
      pcVar6 = pcVar7 + 0x20;
      plVar5 = param_2;
      FUN_10a003e3c(pcVar6,param_2);
      if (((uint)pcVar6 >> 7 & 1) == 0) goto LAB_10a0436bc;
      pcVar2 = pcVar7 + 8;
      pcVar6 = *(char **)pcVar2;
      if (*(char **)pcVar2 == (char *)0x0) goto LAB_10a0436bc;
    }
    pcVar2 = pcVar7;
    pcVar6 = *(char **)pcVar7;
  }
LAB_10a0436bc:
  *plVar4 = (long)pcVar7;
  auVar10._8_8_ = plVar5;
  auVar10._0_8_ = pcVar2;
  return auVar10;
}



/* Entry: 10a043614; end: 10a04364f;  */

char * FUN_10a043614(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  undefined8 uStack_18;
  
  puVar2 = &uStack_18;
  FUN_10a043650();
  if (*param_1 != 0) {
    return (char *)(*param_1 + 0x38);
  }
  pcVar4 = "map::at:  key not found";
  FUN_109ffdddc();
  pcVar4 = pcVar4 + 8;
  pcVar3 = *(char **)pcVar4;
  pcVar5 = pcVar4;
  while (pcVar3 != (char *)0x0) {
    while (pcVar5 = pcVar3, uVar1 = param_2, FUN_10a003e3c(param_2,pcVar5 + 0x20),
          ((uint)uVar1 >> 7 & 1) != 0) {
      pcVar3 = *(char **)pcVar5;
      pcVar4 = pcVar5;
      if (*(char **)pcVar5 == (char *)0x0) goto LAB_10a0436bc;
    }
    pcVar3 = pcVar5 + 0x20;
    FUN_10a003e3c(pcVar3,param_2);
    if (((uint)pcVar3 >> 7 & 1) == 0) break;
    pcVar4 = pcVar5 + 8;
    pcVar3 = *(char **)pcVar4;
  }
LAB_10a0436bc:
  *puVar2 = pcVar5;
  return pcVar4;
}



/* Entry: 10a043650; end: 10a04372b;  */

long * FUN_10a043650(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)(param_1 + 8);
  plVar2 = (long *)*plVar3;
  plVar4 = plVar3;
  while (plVar2 != (long *)0x0) {
    while (plVar4 = plVar2, uVar1 = param_3, FUN_10a003e3c(param_3,plVar4 + 4),
          ((uint)uVar1 >> 7 & 1) != 0) {
      plVar2 = (long *)*plVar4;
      plVar3 = plVar4;
      if ((long *)*plVar4 == (long *)0x0) goto LAB_10a0436bc;
    }
    plVar2 = plVar4 + 4;
    FUN_10a003e3c(plVar2,param_3);
    if (((uint)plVar2 >> 7 & 1) == 0) break;
    plVar3 = plVar4 + 1;
    plVar2 = (long *)*plVar3;
  }
LAB_10a0436bc:
  *param_2 = plVar4;
  return plVar3;
}



/* Entry: 10a04372c; end: 10a04373f;  */

void FUN_10a04372c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar1 = (undefined8 *)&UNK_10f6334ac;
  FUN_109ffde64();
  if ((undefined8 *)0x13b13b13b13b13b < puVar1) {
    func_0x000109ffded8();
    puVar2 = puVar1;
    if (puVar1 != param_2) {
      do {
        uVar3 = *puVar2;
        param_3[1] = puVar2[1];
        *param_3 = uVar3;
        uVar4 = puVar2[3];
        uVar3 = puVar2[2];
        uVar6 = puVar2[5];
        uVar5 = puVar2[4];
        uVar7 = puVar2[6];
        uVar9 = puVar2[9];
        uVar8 = puVar2[8];
        param_3[7] = puVar2[7];
        param_3[6] = uVar7;
        param_3[9] = uVar9;
        param_3[8] = uVar8;
        param_3[3] = uVar4;
        param_3[2] = uVar3;
        param_3[5] = uVar6;
        param_3[4] = uVar5;
        uVar4 = puVar2[0xb];
        uVar3 = puVar2[10];
        param_3[0xc] = puVar2[0xc];
        param_3[0xb] = uVar4;
        param_3[10] = uVar3;
        puVar2[0xb] = 0;
        puVar2[0xc] = 0;
        puVar2[10] = 0;
        uVar4 = puVar2[0xe];
        uVar3 = puVar2[0xd];
        param_3[0xf] = puVar2[0xf];
        param_3[0xe] = uVar4;
        param_3[0xd] = uVar3;
        puVar2[0xe] = 0;
        puVar2[0xf] = 0;
        puVar2[0xd] = 0;
        uVar4 = puVar2[0x11];
        uVar3 = puVar2[0x10];
        uVar5 = puVar2[0x12];
        uVar7 = puVar2[0x15];
        uVar6 = puVar2[0x14];
        param_3[0x13] = puVar2[0x13];
        param_3[0x12] = uVar5;
        param_3[0x15] = uVar7;
        param_3[0x14] = uVar6;
        param_3[0x11] = uVar4;
        param_3[0x10] = uVar3;
        uVar3 = puVar2[0x16];
        param_3[0x17] = puVar2[0x17];
        param_3[0x16] = uVar3;
        puVar2[0x16] = 0;
        puVar2[0x17] = 0;
        uVar3 = puVar2[0x18];
        param_3[0x19] = puVar2[0x19];
        param_3[0x18] = uVar3;
        puVar2[0x18] = 0;
        puVar2[0x19] = 0;
        puVar2 = puVar2 + 0x1a;
        param_3 = param_3 + 0x1a;
      } while (puVar2 != param_2);
      do {
        func_0x00010a043848(puVar1);
        puVar1 = puVar1 + 0x1a;
      } while (puVar1 != param_2);
    }
    return;
  }
  __Znwm((long)puVar1 * 0xd0);
  return;
}



/* Entry: 10a043740; end: 10a0438e7;  */

void FUN_10a043740(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if ((undefined8 *)0x13b13b13b13b13b < param_1) {
    func_0x000109ffded8();
    puVar1 = param_1;
    if (param_1 != param_2) {
      do {
        uVar2 = *puVar1;
        param_3[1] = puVar1[1];
        *param_3 = uVar2;
        uVar3 = puVar1[3];
        uVar2 = puVar1[2];
        uVar5 = puVar1[5];
        uVar4 = puVar1[4];
        uVar6 = puVar1[6];
        uVar8 = puVar1[9];
        uVar7 = puVar1[8];
        param_3[7] = puVar1[7];
        param_3[6] = uVar6;
        param_3[9] = uVar8;
        param_3[8] = uVar7;
        param_3[3] = uVar3;
        param_3[2] = uVar2;
        param_3[5] = uVar5;
        param_3[4] = uVar4;
        uVar3 = puVar1[0xb];
        uVar2 = puVar1[10];
        param_3[0xc] = puVar1[0xc];
        param_3[0xb] = uVar3;
        param_3[10] = uVar2;
        puVar1[0xb] = 0;
        puVar1[0xc] = 0;
        puVar1[10] = 0;
        uVar3 = puVar1[0xe];
        uVar2 = puVar1[0xd];
        param_3[0xf] = puVar1[0xf];
        param_3[0xe] = uVar3;
        param_3[0xd] = uVar2;
        puVar1[0xe] = 0;
        puVar1[0xf] = 0;
        puVar1[0xd] = 0;
        uVar3 = puVar1[0x11];
        uVar2 = puVar1[0x10];
        uVar4 = puVar1[0x12];
        uVar6 = puVar1[0x15];
        uVar5 = puVar1[0x14];
        param_3[0x13] = puVar1[0x13];
        param_3[0x12] = uVar4;
        param_3[0x15] = uVar6;
        param_3[0x14] = uVar5;
        param_3[0x11] = uVar3;
        param_3[0x10] = uVar2;
        uVar2 = puVar1[0x16];
        param_3[0x17] = puVar1[0x17];
        param_3[0x16] = uVar2;
        puVar1[0x16] = 0;
        puVar1[0x17] = 0;
        uVar2 = puVar1[0x18];
        param_3[0x19] = puVar1[0x19];
        param_3[0x18] = uVar2;
        puVar1[0x18] = 0;
        puVar1[0x19] = 0;
        puVar1 = puVar1 + 0x1a;
        param_3 = param_3 + 0x1a;
      } while (puVar1 != param_2);
      do {
        func_0x00010a043848(param_1);
        param_1 = param_1 + 0x1a;
      } while (param_1 != param_2);
    }
    return;
  }
  __Znwm((long)param_1 * 0xd0);
  return;
}



/* Entry: 10a0438e8; end: 10a0438fb;  */

void FUN_10a0438e8(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = (undefined8 *)&UNK_10f6334ac;
  FUN_109ffde64();
  if ((undefined8 *)0x2aaaaaaaaaaaaaa < puVar1) {
    func_0x000109ffded8();
    puVar2 = puVar1;
    if (puVar1 != param_2) {
      do {
        uVar4 = puVar2[1];
        uVar3 = *puVar2;
        uVar6 = puVar2[3];
        uVar5 = puVar2[2];
        uVar8 = puVar2[5];
        uVar7 = puVar2[4];
        *(undefined1 *)(param_3 + 6) = *(undefined1 *)(puVar2 + 6);
        param_3[3] = uVar6;
        param_3[2] = uVar5;
        param_3[5] = uVar8;
        param_3[4] = uVar7;
        param_3[1] = uVar4;
        *param_3 = uVar3;
        uVar3 = puVar2[7];
        param_3[8] = puVar2[8];
        param_3[7] = uVar3;
        puVar2[7] = 0;
        puVar2[8] = 0;
        uVar3 = puVar2[9];
        param_3[10] = puVar2[10];
        param_3[9] = uVar3;
        puVar2[9] = 0;
        puVar2[10] = 0;
        *(undefined2 *)(param_3 + 0xb) = *(undefined2 *)(puVar2 + 0xb);
        puVar2 = puVar2 + 0xc;
        param_3 = param_3 + 0xc;
      } while (puVar2 != param_2);
      do {
        func_0x00010a061c50(puVar1 + 9);
        func_0x00010a061c50(puVar1 + 7);
        puVar1 = puVar1 + 0xc;
      } while (puVar1 != param_2);
    }
    return;
  }
  __Znwm((long)puVar1 * 0x60);
  return;
}



/* Entry: 10a0438fc; end: 10a0439cf;  */

void FUN_10a0438fc(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if ((undefined8 *)0x2aaaaaaaaaaaaaa < param_1) {
    func_0x000109ffded8();
    puVar1 = param_1;
    if (param_1 != param_2) {
      do {
        uVar3 = puVar1[1];
        uVar2 = *puVar1;
        uVar5 = puVar1[3];
        uVar4 = puVar1[2];
        uVar7 = puVar1[5];
        uVar6 = puVar1[4];
        *(undefined1 *)(param_3 + 6) = *(undefined1 *)(puVar1 + 6);
        param_3[3] = uVar5;
        param_3[2] = uVar4;
        param_3[5] = uVar7;
        param_3[4] = uVar6;
        param_3[1] = uVar3;
        *param_3 = uVar2;
        uVar2 = puVar1[7];
        param_3[8] = puVar1[8];
        param_3[7] = uVar2;
        puVar1[7] = 0;
        puVar1[8] = 0;
        uVar2 = puVar1[9];
        param_3[10] = puVar1[10];
        param_3[9] = uVar2;
        puVar1[9] = 0;
        puVar1[10] = 0;
        *(undefined2 *)(param_3 + 0xb) = *(undefined2 *)(puVar1 + 0xb);
        puVar1 = puVar1 + 0xc;
        param_3 = param_3 + 0xc;
      } while (puVar1 != param_2);
      do {
        func_0x00010a061c50(param_1 + 9);
        func_0x00010a061c50(param_1 + 7);
        param_1 = param_1 + 0xc;
      } while (param_1 != param_2);
    }
    return;
  }
  __Znwm((long)param_1 * 0x60);
  return;
}



/* Entry: 10a0439d0; end: 10a043a97;  */

long * FUN_10a0439d0(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x60;
    func_0x00010a061c50(lVar2 + -0x18);
    func_0x00010a061c50(lVar2 + -0x28);
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a043a98; end: 10a043aab;  */

undefined1  [16] FUN_10a043a98(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  puVar1 = &UNK_10f6334ac;
  FUN_109ffde64();
  if (puVar1 < (undefined *)0x24924924924924a) {
    lVar3 = (long)puVar1 * 0x70;
    __Znwm(lVar3);
    auVar5._8_8_ = puVar1;
    auVar5._0_8_ = lVar3;
    return auVar5;
  }
  func_0x000109ffded8();
  plVar2 = (long *)&UNK_10f6334ac;
  FUN_109ffde64();
  if (plVar2 < (long *)0x555555555555556) {
    lVar3 = (long)plVar2 * 0x30;
    __Znwm(lVar3);
    auVar6._8_8_ = plVar2;
    auVar6._0_8_ = lVar3;
    return auVar6;
  }
  func_0x000109ffded8();
  lVar3 = plVar2[1];
  lVar4 = plVar2[2];
  while (lVar4 != lVar3) {
    plVar2[2] = lVar4 + -0x30;
    func_0x00010a043b98();
    lVar4 = plVar2[2];
  }
  if (*plVar2 != 0) {
    __ZdlPv();
  }
  auVar7._8_8_ = param_2;
  auVar7._0_8_ = plVar2;
  return auVar7;
}



/* Entry: 10a043aac; end: 10a043af3;  */

undefined1  [16] FUN_10a043aac(ulong param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if (param_1 < 0x24924924924924a) {
    lVar2 = param_1 * 0x70;
    __Znwm(lVar2);
    auVar4._8_8_ = param_1;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000109ffded8();
  plVar1 = (long *)&UNK_10f6334ac;
  FUN_109ffde64();
  if (plVar1 < (long *)0x555555555555556) {
    lVar2 = (long)plVar1 * 0x30;
    __Znwm(lVar2);
    auVar5._8_8_ = plVar1;
    auVar5._0_8_ = lVar2;
    return auVar5;
  }
  func_0x000109ffded8();
  lVar2 = plVar1[1];
  lVar3 = plVar1[2];
  while (lVar3 != lVar2) {
    plVar1[2] = lVar3 + -0x30;
    func_0x00010a043b98();
    lVar3 = plVar1[2];
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = plVar1;
  return auVar6;
}



/* Entry: 10a043af4; end: 10a043b07;  */

undefined1  [16] FUN_10a043af4(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  plVar1 = (long *)&UNK_10f6334ac;
  FUN_109ffde64();
  if (plVar1 < (long *)0x555555555555556) {
    lVar2 = (long)plVar1 * 0x30;
    __Znwm(lVar2);
    auVar4._8_8_ = plVar1;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000109ffded8();
  lVar2 = plVar1[1];
  lVar3 = plVar1[2];
  while (lVar3 != lVar2) {
    plVar1[2] = lVar3 + -0x30;
    func_0x00010a043b98();
    lVar3 = plVar1[2];
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = plVar1;
  return auVar5;
}



/* Entry: 10a043b08; end: 10a043bc7;  */

undefined1  [16] FUN_10a043b08(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_1 < (long *)0x555555555555556) {
    lVar1 = (long)param_1 * 0x30;
    __Znwm(lVar1);
    auVar3._8_8_ = param_1;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000109ffded8();
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x30;
    func_0x00010a043b98();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 10a043bc8; end: 10a043bdb;  */

void FUN_10a043bc8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)&UNK_10f6334ac;
  FUN_109ffde64();
  if (puVar1 < (undefined8 *)0xaaaaaaaaaaaaaab) {
    __Znwm((long)puVar1 * 0x18);
    return;
  }
  func_0x000109ffded8();
  *puVar1 = &PTR_FUN_110b9d090;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a043bdc; end: 10a043c1f;  */

void FUN_10a043bdc(undefined8 *param_1)

{
  if (param_1 < (undefined8 *)0xaaaaaaaaaaaaaab) {
    __Znwm((long)param_1 * 0x18);
    return;
  }
  func_0x000109ffded8();
  *param_1 = &PTR_FUN_110b9d090;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a043c20; end: 10a043c2f;  */

void FUN_10a043c20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9d090;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a043c30; end: 10a043c4f;  */

void FUN_10a043c30(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9d090;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a043c50; end: 10a043dc3;  */

long FUN_10a043c50(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    uVar4 = 0;
  }
  else {
    func_0x0001099f0d40();
    __ZdlPv();
    uVar4 = *(undefined8 *)(param_1 + 0x18);
  }
  lVar13 = *(long *)(param_1 + 0x20);
  plVar12 = (long *)(lVar13 + 0x18);
  FUN_10a043dc4(plVar12,uVar4);
  if (plVar12 == (long *)0x0) goto LAB_10a043db0;
  uVar7 = *(ulong *)(lVar13 + 0x20);
  lVar5 = *plVar12;
  uVar6 = plVar12[1];
  uVar8 = uVar7 - 1;
  if ((uVar7 & uVar8) == 0) {
    uVar6 = uVar8 & uVar6;
  }
  else if (uVar7 <= uVar6) {
    uVar10 = 0;
    if (uVar7 != 0) {
      uVar10 = uVar6 / uVar7;
    }
    uVar6 = uVar6 - uVar10 * uVar7;
  }
  plVar3 = *(long **)(*(long *)(lVar13 + 0x18) + uVar6 * 8);
  do {
    plVar9 = plVar3;
    plVar3 = (long *)*plVar9;
  } while ((long *)*plVar9 != plVar12);
  if (plVar9 == (long *)(lVar13 + 0x28)) {
LAB_10a043d10:
    if (lVar5 == 0) {
LAB_10a043d44:
      *(undefined8 *)(*(long *)(lVar13 + 0x18) + uVar6 * 8) = 0;
      lVar5 = *plVar12;
      goto LAB_10a043d4c;
    }
    uVar10 = *(ulong *)(lVar5 + 8);
    if ((uVar7 & uVar8) == 0) {
      uVar11 = uVar10 & uVar8;
    }
    else {
      uVar11 = uVar10;
      if (uVar7 <= uVar10) {
        uVar11 = 0;
        if (uVar7 != 0) {
          uVar11 = uVar10 / uVar7;
        }
        uVar11 = uVar10 - uVar11 * uVar7;
      }
    }
    if (uVar11 != uVar6) goto LAB_10a043d44;
LAB_10a043d54:
    if ((uVar7 & uVar8) == 0) {
      uVar10 = uVar10 & uVar8;
    }
    else if (uVar7 <= uVar10) {
      uVar8 = 0;
      if (uVar7 != 0) {
        uVar8 = uVar10 / uVar7;
      }
      uVar10 = uVar10 - uVar8 * uVar7;
    }
    if (uVar10 != uVar6) {
      *(long **)(*(long *)(lVar13 + 0x18) + uVar10 * 8) = plVar9;
      lVar5 = *plVar12;
    }
  }
  else {
    uVar10 = plVar9[1];
    if ((uVar7 & uVar8) == 0) {
      uVar10 = uVar10 & uVar8;
    }
    else if (uVar7 <= uVar10) {
      uVar11 = 0;
      if (uVar7 != 0) {
        uVar11 = uVar10 / uVar7;
      }
      uVar10 = uVar10 - uVar11 * uVar7;
    }
    if (uVar10 != uVar6) goto LAB_10a043d10;
LAB_10a043d4c:
    if (lVar5 != 0) {
      uVar10 = *(ulong *)(lVar5 + 8);
      goto LAB_10a043d54;
    }
  }
  *plVar9 = lVar5;
  *plVar12 = 0;
  *(long *)(lVar13 + 0x30) = *(long *)(lVar13 + 0x30) + -1;
  if (plVar12[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZdlPv(plVar12);
LAB_10a043db0:
  plVar12 = *(long **)(param_1 + 0x28);
  if (plVar12 != (long *)0x0) {
    plVar3 = plVar12 + 1;
    do {
      lVar13 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar13 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
    }
  }
  return param_1 + 0x20;
}



/* Entry: 10a043dc4; end: 10a043e9b;  */

void FUN_10a043dc4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a043e9c; end: 10a043ecb;  */

void FUN_10a043e9c(ulong param_1,long param_2)

{
  if (((param_1 & 1) != 0) && (*(long *)(param_2 + 0x20) != 0)) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10a043ecc; end: 10a043eff;  */

long * FUN_10a043ecc(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  
  plVar4 = (long *)0x8;
  ___cxa_allocate_exception();
  *plVar4 = (long)(PTR___ZTVNSt3__112bad_weak_ptrE_110346af0 + 0x10);
  ___cxa_throw();
  plVar6 = (long *)plVar4[1];
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return plVar4;
}



/* Entry: 10a043f00; end: 10a043f57;  */

long FUN_10a043f00(long param_1)

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



/* Entry: 10a043f58; end: 10a043fd7;  */

undefined8 *
FUN_10a043f58(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  if (param_3 != 0) {
    plVar1 = (long *)(param_3 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[2] = *param_4;
  if (*(char *)((long)param_5 + 0x17) < '\0') {
    func_0x000107c3192c(param_1 + 3,*param_5,param_5[1]);
  }
  else {
    uVar5 = param_5[1];
    uVar4 = *param_5;
    param_1[5] = param_5[2];
    param_1[4] = uVar5;
    param_1[3] = uVar4;
  }
  return param_1;
}



/* Entry: 10a043fd8; end: 10a04402f;  */

long FUN_10a043fd8(long param_1)

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



/* Entry: 10a044030; end: 10a04430b;  */

/* WARNING: Removing unreachable block (ram,0x00010a0440f0) */
/* WARNING: Removing unreachable block (ram,0x00010a0440f4) */
/* WARNING: Removing unreachable block (ram,0x00010a0440fc) */
/* WARNING: Removing unreachable block (ram,0x00010a044104) */
/* WARNING: Removing unreachable block (ram,0x00010a044110) */
/* WARNING: Removing unreachable block (ram,0x00010a044118) */
/* WARNING: Removing unreachable block (ram,0x00010a044120) */
/* WARNING: Removing unreachable block (ram,0x00010a044124) */
/* WARNING: Removing unreachable block (ram,0x00010a04423c) */
/* WARNING: Removing unreachable block (ram,0x00010a044240) */
/* WARNING: Removing unreachable block (ram,0x00010a044248) */
/* WARNING: Removing unreachable block (ram,0x00010a044250) */
/* WARNING: Removing unreachable block (ram,0x00010a04425c) */
/* WARNING: Removing unreachable block (ram,0x00010a044264) */
/* WARNING: Removing unreachable block (ram,0x00010a04426c) */
/* WARNING: Removing unreachable block (ram,0x00010a044270) */

void FUN_10a044030(long param_1,long param_2,undefined8 *param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plStack_70;
  long *plStack_68;
  code *pcStack_60;
  code *pcStack_58;
  long *plStack_50;
  undefined8 *puStack_48;
  
  plVar7 = (long *)param_3[2];
  plStack_68 = (long *)0x0;
  if (plVar7 == (long *)0x0) {
    plStack_70 = (long *)0xc0;
    __Znwm();
    plStack_70[2] = 0;
    plStack_70[1] = 0x200000006;
    *(undefined2 *)(plStack_70 + 3) = 4;
    plStack_70[5] = 0;
    plStack_70[4] = 0;
    plStack_70[7] = 0;
    plStack_70[6] = 0;
    plStack_70[9] = 0;
    plStack_70[8] = 0;
    plStack_70[0xb] = 0;
    plStack_70[10] = 0;
    plStack_70[0xd] = 0;
    plStack_70[0xc] = 0;
    plStack_70[0xf] = 0;
    plStack_70[0xe] = 0;
    plStack_70[0x10] = 0;
    plStack_70[0x11] = (long)(plStack_70 + 3);
    plStack_70[0x12] = 0;
    *(undefined2 *)(plStack_70 + 0x13) = 0;
    *plStack_70 = (long)&PTR_DAT_110b9d118;
    plVar6 = plStack_70 + 0x14;
    *plVar6 = param_1;
    plStack_70[0x15] = param_2;
    *(undefined1 *)(plStack_70 + 0x16) = 1;
    plStack_70[0x17] = 0;
    pcStack_60 = FUN_10a04433c;
    plStack_68 = plStack_70;
  }
  else {
    pcStack_58 = (code *)0x0;
    (**(code **)(*plVar7 + 0x28))(plVar7,0,&pcStack_58);
    if (pcStack_58 != (code *)0x0) {
      func_0x0001092af97c(&pcStack_58);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a0442e8);
      (*pcVar4)();
    }
    plStack_70 = (long *)0xc8;
    __Znwm();
    *(undefined2 *)(plStack_70 + 3) = 4;
    plStack_70[2] = 0;
    plStack_70[1] = 0x200000006;
    plStack_70[5] = 0;
    plStack_70[4] = 0;
    plStack_70[7] = 0;
    plStack_70[6] = 0;
    plStack_70[9] = 0;
    plStack_70[8] = 0;
    plStack_70[0xb] = 0;
    plStack_70[10] = 0;
    plStack_70[0xd] = 0;
    plStack_70[0xc] = 0;
    plStack_70[0xf] = 0;
    plStack_70[0xe] = 0;
    plStack_70[0x10] = 0;
    plStack_70[0x11] = (long)(plStack_70 + 3);
    plStack_70[0x12] = 0;
    *(undefined2 *)(plStack_70 + 0x13) = 0;
    *plStack_70 = (long)&PTR_FUN_110b9d0e0;
    plVar6 = plStack_70 + 0x14;
    *plVar6 = param_1;
    plStack_70[0x15] = param_2;
    *(undefined1 *)(plStack_70 + 0x16) = 1;
    plStack_70[0x17] = 0;
    plStack_70[0x18] = (long)plVar7;
    if (plStack_68 != (long *)0x0) {
      func_0x0001092b4274(&plStack_68);
    }
    pcStack_60 = FUN_10a04430c;
    plStack_68 = plStack_70;
    __ZNSt13exception_ptrD1Ev(&pcStack_58);
  }
  if (plVar6[3] != 0) {
    func_0x0001092b4274();
  }
  plVar6[3] = (long)plStack_68;
  plStack_68 = (long *)0x0;
  pcStack_58 = pcStack_60;
  plStack_50 = plVar6;
  puStack_48 = param_3;
  (**(code **)*param_3)(param_3,&pcStack_58);
  if (plStack_68 != (long *)0x0) {
    func_0x0001092b4274(&plStack_68);
  }
  if (plStack_70 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_70 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plStack_70 + 8))(plStack_70);
      }
    }
  }
  return;
}



/* Entry: 10a04430c; end: 10a04433b;  */

void FUN_10a04430c(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x20);
  FUN_10a04433c();
                    /* WARNING: Could not recover jumptable at 0x00010a044338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,0);
  return;
}



/* Entry: 10a04433c; end: 10a04441f;  */

void FUN_10a04433c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lStack_28;
  
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a0443f4);
    (*pcVar4)();
  }
  lVar6 = param_1[3];
  param_1[3] = 0;
  lStack_28 = lVar6;
  (*(code *)*param_1)(param_1[1]);
  plVar1 = (long *)(lVar6 + 0x10);
  do {
    lVar5 = *plVar1;
    if (lVar5 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 2;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        FUN_109d1b4dc(lVar6 + 0x18);
        goto LAB_10a0443ac;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar5 >> 1 & 1) != 0) {
LAB_10a0443ac:
      if (*(char *)(param_1 + 2) == '\x01') {
        *(undefined1 *)(param_1 + 2) = 0;
      }
      lStack_28 = 0;
      if ((lVar6 != 0) && (func_0x0001092b4274(&lStack_28,lVar6), lStack_28 != 0)) {
        func_0x0001092b4274(&lStack_28);
      }
      return;
    }
  } while( true );
}



/* Entry: 10a044420; end: 10a044567;  */

undefined8 * FUN_10a044420(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9d0e0;
  if (param_1[0x17] != 0) {
    func_0x0001092b4274();
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a044568; end: 10a044577;  */

void FUN_10a044568(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9d150;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a044578; end: 10a044597;  */

void FUN_10a044578(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9d150;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a044598; end: 10a0445cf;  */

long FUN_10a044598(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x0001099f0d98();
    __ZdlPv();
  }
  FUN_10a0445e8(param_1 + 0x30);
  plVar5 = *(long **)(param_1 + 0x28);
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
  return param_1 + 0x20;
}



/* Entry: 10a0445d0; end: 10a0445d3;  */

void FUN_10a0445d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a0445d4; end: 10a0445e7;  */

void FUN_10a0445d4(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  plVar1 = (long *)&UNK_10f6334ac;
  FUN_109ffde64();
  lVar4 = *plVar1;
  if (lVar4 != 0) {
    lVar2 = plVar1[1];
    lVar3 = lVar4;
    if (lVar2 != lVar4) {
      do {
        lVar2 = lVar2 + -0x10;
        FUN_10a043f00();
      } while (lVar2 != lVar4);
      lVar3 = *plVar1;
    }
    plVar1[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar3);
    return;
  }
  return;
}



/* Entry: 10a0445e8; end: 10a044643;  */

void FUN_10a0445e8(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar1 = param_1[1];
    lVar2 = lVar3;
    if (lVar1 != lVar3) {
      do {
        lVar1 = lVar1 + -0x10;
        FUN_10a043f00();
      } while (lVar1 != lVar3);
      lVar2 = *param_1;
    }
    param_1[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10a044644; end: 10a0446ab;  */

void FUN_10a044644(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar2 = param_1[1];
    lVar1 = lVar3;
    if (lVar2 != lVar3) {
      do {
        lVar2 = lVar2 + -0x30;
        func_0x00010a043b98(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *param_1;
    }
    param_1[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a0446ac; end: 10a0446e7;  */

void FUN_10a0446ac(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  
  FUN_109ffde64(&UNK_10f6334ac);
  FUN_109ffde64(&UNK_10f6334ac);
  FUN_109ffde64(&UNK_10f6334ac);
  if (-1 < param_2) {
    __Znwm(param_2 << 1);
    return;
  }
  func_0x000109ffded8();
  puVar1 = (undefined8 *)&UNK_10f6334ac;
  FUN_109ffde64();
  *puVar1 = &PTR_FUN_110b9d1a0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a0446e8; end: 10a044717;  */

void FUN_10a0446e8(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  
  if (-1 < param_2) {
    __Znwm(param_2 << 1);
    return;
  }
  func_0x000109ffded8();
  puVar1 = (undefined8 *)&UNK_10f6334ac;
  FUN_109ffde64();
  *puVar1 = &PTR_FUN_110b9d1a0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a044718; end: 10a04472b;  */

void FUN_10a044718(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)&UNK_10f6334ac;
  FUN_109ffde64();
  *puVar1 = &PTR_FUN_110b9d1a0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a04472c; end: 10a04473b;  */

void FUN_10a04472c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9d1a0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a04473c; end: 10a04475b;  */

void FUN_10a04473c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9d1a0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a04475c; end: 10a04478b;  */

long FUN_10a04475c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x0001099f0df0();
    __ZdlPv();
  }
  plVar5 = *(long **)(param_1 + 0x28);
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
  return param_1 + 0x20;
}



/* Entry: 10a04478c; end: 10a04478f;  */

void FUN_10a04478c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a044790; end: 10a044867;  */

void FUN_10a044790(undefined8 **param_1,int param_2)

{
  undefined8 **ppuVar1;
  undefined8 **ppuVar2;
  code *pcStack_78;
  undefined8 *apuStack_70 [7];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = param_1 + 1;
  if (*(char *)(*ppuVar2 + 1) == '\x01') {
    pcStack_78 = (code *)*param_1;
    ppuVar1 = ppuVar2;
    (*(code *)(*ppuVar2)[2])(apuStack_70);
    param_2 = (int)ppuVar1;
    *param_1 = (undefined8 *)&UNK_1053a6a3c;
    (*(code *)*param_1[1])(ppuVar2);
    param_1[1] = &PTR_DAT_110ae9180;
    (*pcStack_78)(&pcStack_78);
    param_1 = apuStack_70;
    (*(code *)*apuStack_70[0])();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if (**param_1 != 0) {
    FUN_10a021eb4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(**param_1);
    return;
  }
  return;
}



/* Entry: 10a044868; end: 10a0448a7;  */

void FUN_10a044868(undefined8 *param_1)

{
  if (*(long *)*param_1 != 0) {
    FUN_10a021eb4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 10a0448a8; end: 10a04491f;  */

bool FUN_10a0448a8(long *param_1,uint param_2)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  
  bVar1 = false;
  plVar3 = param_1;
  if (param_1 != (long *)0x0) {
    do {
      plVar2 = plVar3;
      (**(code **)(*plVar3 + 0x80))();
      if ((int)plVar2 != 2) {
        FUN_10a044920(param_1,1);
        break;
      }
      plVar2 = plVar3 + 0x13;
      plVar3 = (long *)*plVar2;
    } while ((long *)*plVar2 != (long *)0x0);
    (**(code **)(*param_1 + 0x90))(param_1);
    bVar1 = ((uint)param_1 & param_2) != 0;
  }
  return bVar1;
}


