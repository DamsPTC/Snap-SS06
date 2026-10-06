/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b5057bc; end: 10b5057bf;  */

long FUN_10b5057bc(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b50578c(param_1);
  return param_1;
}



/* Entry: 10b5057c0; end: 10b5057d3;  */

void FUN_10b5057c0(void)

{
  FUN_10b50575c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5057d4; end: 10b505817;  */

undefined ** FUN_10b5057d4(void)

{
  return &PTR_DAT_110cf71f0;
}



/* Entry: 10b505818; end: 10b50588b;  */

void FUN_10b505818(long param_1)

{
  ulong *puVar1;
  
  FUN_10b505f5c(param_1 + 0x18);
  if (*(int *)(param_1 + 0x3c) != 1) {
    func_0x000107c30320(param_1 + 0x38,0x10500500020,0);
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_10b507818(*(undefined8 *)(param_1 + 0x58));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10b50588c; end: 10b505adb;  */

long * FUN_10b50588c(long param_1,long *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long alStack_68 [3];
  
  if (*(int *)(param_1 + 0x18) != 0) {
    if ((*(int *)(param_1 + 0x18) == 1) || ((*(byte *)((long)param_3 + 0x3a) & 1) == 0)) {
      plVar2 = alStack_68;
      func_0x00010564c19c(plVar2);
      while (plVar3 = plVar2, alStack_68[0] != 0) {
        func_0x00010b5063a8();
        plVar2 = plVar3;
        func_0x00010b506350();
        func_0x00010b506448();
        param_2 = plVar3;
      }
    }
    else {
      plVar2 = alStack_68;
      FUN_10b505fc4(plVar2);
      for (lVar6 = alStack_68[0] << 3; plVar3 = plVar2, lVar6 != 0; lVar6 = lVar6 + -8) {
        func_0x00010b5063a8();
        plVar2 = plVar3;
        func_0x00010b506350();
        param_2 = plVar3;
      }
      func_0x00010b506418();
    }
  }
  uVar1 = *(uint *)(param_1 + 0x38);
  uVar5 = (ulong)uVar1;
  if (uVar1 != 0) {
    if ((uVar1 == 1) || ((*(byte *)((long)param_3 + 0x3a) & 1) == 0)) {
      plVar2 = alStack_68;
      func_0x00010b506434(plVar2);
      while (plVar3 = plVar2, alStack_68[0] != 0) {
        func_0x00010b5063e0();
        plVar2 = plVar3;
        func_0x00010b506350();
        func_0x00010b506448();
        param_2 = plVar3;
      }
    }
    else {
      plVar2 = (long *)(uVar5 << 3);
      __Znam();
      func_0x00010b506434(alStack_68);
      plVar3 = plVar2;
      while (alStack_68[0] != 0) {
        *plVar3 = alStack_68[0] + 8;
        func_0x00010b506448();
        plVar3 = plVar3 + 1;
      }
      func_0x000105991c2c(plVar2,plVar2 + uVar5);
      uVar7 = uVar5 << 3;
      while (plVar3 = plVar2, uVar5 != 0) {
        func_0x00010b5063e0();
        plVar2 = plVar3;
        func_0x00010b506350();
        uVar7 = uVar7 - 8;
        param_2 = plVar3;
        uVar5 = uVar7;
      }
      func_0x00010b506418();
    }
  }
  plVar2 = param_2;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    plVar2 = (long *)0x3;
    func_0x000107c303cc(3,*(long *)(param_1 + 0x58),
                        *(undefined4 *)(*(long *)(param_1 + 0x58) + 0x14),param_2,param_3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar6 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar6 < 0) {
      lVar4 = *(long *)(uVar5 + 8);
      lVar6 = *(long *)(uVar5 + 0x10);
    }
    else {
      lVar4 = uVar5 + 8;
    }
    func_0x0001053930c4(param_3,lVar4,lVar6,plVar2);
    plVar2 = param_3;
  }
  return plVar2;
}



/* Entry: 10b505adc; end: 10b505bd3;  */

void FUN_10b505adc(int param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar1 = param_5;
  func_0x000107c28094(param_5,param_4);
  func_0x000107c280a8(param_1 << 3 | 2,uVar1);
  FUN_10b506064(param_2,param_3);
  func_0x000107c280a8();
  func_0x00010b5063bc();
  uVar2 = 2;
  func_0x00010b50643c(2,param_3,param_2);
  uVar3 = (ulong)*(uint *)((long)param_3 + 0x4c);
  uVar1 = param_5;
  func_0x0001001a597c(param_5,uVar2);
  uVar2 = 0x12;
  func_0x0001001a59d0(0x12,uVar1);
  func_0x0001001a59d0(uVar3,uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001006018cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x38))(param_3,uVar3,param_5);
  return;
}



/* Entry: 10b505bd4; end: 10b505cfb;  */

/* WARNING: Removing unreachable block (ram,0x00010b505c2c) */

long FUN_10b505bd4(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uStack_38;
  
  uVar3 = (ulong)*(uint *)(param_1 + 0x18);
  func_0x00010b506410();
  while (uStack_38 != 0) {
    lVar1 = uStack_38 + 8;
    func_0x00010b505c94(lVar1,uStack_38 + 0x20);
    uVar3 = lVar1 + uVar3;
    func_0x00010b5063d0();
  }
  lVar1 = uVar3 + *(uint *)(param_1 + 0x38);
  func_0x00010b506410();
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    lVar2 = *(long *)(param_1 + 0x58);
    FUN_10b505cfc();
    lVar1 = lVar1 + lVar2 + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x14) = (int)lVar1;
  return lVar1;
}



/* Entry: 10b505cfc; end: 10b505d13;  */

void FUN_10b505cfc(void)

{
  FUN_10b50793c();
  func_0x00010b506370();
  return;
}



/* Entry: 10b505d14; end: 10b505d17;  */

void FUN_10b505d14(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  FUN_10b506100(param_1 + 0x18,param_2 + 0x18);
  func_0x00010b506248(param_1 + 0x38,param_2 + 0x38);
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x58) == 0) {
      FUN_10b505f80(uVar2,*(undefined8 *)(param_2 + 0x58));
      *(ulong *)(param_1 + 0x58) = uVar2;
    }
    else {
      FUN_10b5079c4();
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b505d18; end: 10b505dc3;  */

void FUN_10b505d18(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  FUN_10b506100(param_1 + 0x18,param_2 + 0x18);
  func_0x00010b506248(param_1 + 0x38,param_2 + 0x38);
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x58) == 0) {
      FUN_10b505f80(uVar2,*(undefined8 *)(param_2 + 0x58));
      *(ulong *)(param_1 + 0x58) = uVar2;
    }
    else {
      FUN_10b5079c4();
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b505dc4; end: 10b505dfb;  */

void FUN_10b505dc4(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == param_1) {
    return;
  }
  FUN_10b505818();
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  FUN_10b506100(param_1 + 0x18,param_2 + 0x18);
  func_0x00010b506248(param_1 + 0x38,param_2 + 0x38);
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x58) == 0) {
      FUN_10b505f80(uVar2,*(undefined8 *)(param_2 + 0x58));
      *(ulong *)(param_1 + 0x58) = uVar2;
    }
    else {
      FUN_10b5079c4();
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b505dfc; end: 10b505e03;  */

undefined8 * FUN_10b505dfc(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x60;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x60);
  }
  *puVar1 = &PTR_FUN_110cf71b0;
  puVar1[1] = param_2;
  FUN_10b505674();
  return puVar1;
}



/* Entry: 10b505e04; end: 10b505e43;  */

undefined8 FUN_10b505e04(undefined8 param_1)

{
  func_0x00010b506450(0x100000000);
  FUN_10b506100();
  return param_1;
}



/* Entry: 10b505e44; end: 10b505e7b;  */

long FUN_10b505e44(long param_1)

{
  if (*(int *)(param_1 + 4) != 1) {
    func_0x00010b506400(param_1,0x700020);
  }
  return param_1;
}



/* Entry: 10b505e7c; end: 10b505ebb;  */

undefined8 FUN_10b505e7c(undefined8 param_1)

{
  func_0x00010b506450(0x100000000);
  func_0x00010b506248();
  return param_1;
}



/* Entry: 10b505ebc; end: 10b505ef3;  */

long FUN_10b505ebc(long param_1)

{
  if (*(int *)(param_1 + 4) != 1) {
    func_0x00010b506400(param_1,0x500020);
  }
  return param_1;
}



/* Entry: 10b505ef4; end: 10b505f5b;  */

long FUN_10b505ef4(long param_1)

{
  FUN_10b505ebc(param_1 + 0x28);
  FUN_10b505e44(param_1 + 8);
  return param_1;
}



/* Entry: 10b505f5c; end: 10b505f7f;  */

/* WARNING: Removing unreachable block (ram,0x00010055ea88) */
/* WARNING: Removing unreachable block (ram,0x00010055eac8) */
/* WARNING: Removing unreachable block (ram,0x00010055ea90) */
/* WARNING: Removing unreachable block (ram,0x00010055eabc) */
/* WARNING: Removing unreachable block (ram,0x000104c61180) */
/* WARNING: Removing unreachable block (ram,0x000104c611a4) */
/* WARNING: Removing unreachable block (ram,0x000104c61188) */
/* WARNING: Removing unreachable block (ram,0x000104c611a8) */
/* WARNING: Removing unreachable block (ram,0x000104c611bc) */
/* WARNING: Removing unreachable block (ram,0x000104c611c4) */
/* WARNING: Removing unreachable block (ram,0x000104c611d0) */
/* WARNING: Removing unreachable block (ram,0x000104c61160) */
/* WARNING: Removing unreachable block (ram,0x000104c61170) */
/* WARNING: Removing unreachable block (ram,0x00010055ead0) */

void FUN_10b505f5c(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long unaff_x22;
  ulong unaff_x23;
  ulong unaff_x25;
  undefined8 *puVar5;
  
  if (*(int *)((long)param_1 + 4) == 1) {
    return;
  }
  if (param_1[3] == 0) {
    puVar2 = param_1;
    func_0x000107c39c34(param_1,0x10500700020,0);
    for (; unaff_x23 < unaff_x25; unaff_x23 = unaff_x23 + 1) {
      puVar4 = *(undefined8 **)(unaff_x22 + unaff_x23 * 8);
      if (((ulong)puVar4 & 1) != 0) {
        func_0x000107c39c30();
        puVar4 = puVar2;
      }
      while (puVar4 != (undefined8 *)0x0) {
        puVar5 = (undefined8 *)*puVar4;
        puVar2 = puVar4 + 1;
        func_0x000107c60ca0();
        func_0x000107c39c3c();
        func_0x00010063c2d0();
        puVar4 = puVar5;
      }
    }
  }
  uVar1 = *(uint *)((long)param_1 + 4);
  puVar2 = (undefined8 *)param_1[2];
  uVar3 = (ulong)uVar1;
  while (0 < (long)uVar3) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
    uVar3 = uVar3 - 1;
  }
  *(undefined4 *)param_1 = 0;
  *(uint *)((long)param_1 + 0xc) = uVar1;
  return;
}



/* Entry: 10b505f80; end: 10b505fc3;  */

undefined8 * FUN_10b505f80(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x28);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110cf7608;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_10b4d197c(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((long)puVar1 + 0x14) = 0;
  lVar2 = param_2 + 0x18;
  func_0x000107c2809c(lVar2,param_1);
  puVar1[3] = lVar2;
  if ((*(byte *)(puVar1 + 2) & 1) == 0) {
    param_1 = (undefined8 *)0x0;
  }
  else {
    func_0x00010b5055fc(param_1,*(undefined8 *)(param_2 + 0x20));
  }
  puVar1[4] = param_1;
  return puVar1;
}



/* Entry: 10b505fc4; end: 10b506063;  */

ulong * FUN_10b505fc4(ulong *param_1,uint *param_2)

{
  uint uVar1;
  long *plVar2;
  long alStack_48 [3];
  
  uVar1 = *param_2;
  *param_1 = (ulong)uVar1;
  if (uVar1 == 0) {
    param_1[1] = 0;
  }
  else {
    plVar2 = (long *)((ulong)uVar1 << 3);
    __Znam();
    param_1[1] = (ulong)plVar2;
    func_0x00010b506434(alStack_48);
    while (alStack_48[0] != 0) {
      *plVar2 = alStack_48[0] + 8;
      func_0x00010b5063d0();
      plVar2 = plVar2 + 1;
    }
    func_0x000105991c2c(param_1[1],param_1[1] + *param_1 * 8);
  }
  return param_1;
}



/* Entry: 10b506064; end: 10b506093;  */

int FUN_10b506064(int param_1)

{
  int extraout_w8;
  uint extraout_w9;
  long unaff_x19;
  
  func_0x00010b50642c();
  func_0x00010b50638c(*(undefined4 *)(unaff_x19 + 0x4c));
  return param_1 + extraout_w8 + (extraout_w9 >> 6) + 2;
}



/* Entry: 10b506094; end: 10b5060cf;  */

void FUN_10b506094(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  uVar3 = param_1;
  func_0x00010b50643c();
  uVar4 = (ulong)*(uint *)((long)param_2 + 0x4c);
  uVar1 = param_4;
  func_0x0001001a597c(param_4,uVar3);
  uVar2 = (ulong)((int)param_1 << 3 | 2);
  func_0x0001001a59d0(uVar2,uVar1);
  func_0x0001001a59d0(uVar4,uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001006018cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x38))(param_2,uVar4,param_4);
  return;
}



/* Entry: 10b5060d0; end: 10b5060ff;  */

void FUN_10b5060d0(void)

{
  func_0x00010b506c9c();
  func_0x00010b506370();
  return;
}



/* Entry: 10b506100; end: 10b50614b;  */

void FUN_10b506100(undefined8 param_1)

{
  undefined8 uStack_38;
  
  func_0x00010b506410();
  while (uStack_38 != 0) {
    FUN_10b50614c(param_1,uStack_38 + 8);
    FUN_10b506e60();
    func_0x00010b5063d0();
  }
  return;
}



/* Entry: 10b50614c; end: 10b506173;  */

long FUN_10b50614c(void)

{
  long alStack_30 [4];
  
  FUN_10b506174(alStack_30);
  return alStack_30[0] + 0x20;
}



/* Entry: 10b506174; end: 10b50634f;  */

void FUN_10b506174(undefined8 *param_1,int *param_2,ulong param_3)

{
  int *piVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 uVar4;
  
  uVar2 = param_3;
  func_0x000107c28188(param_3);
  func_0x00010b506464();
  piVar1 = param_2;
  func_0x00010b506360();
  if (piVar1 == (int *)0x0) {
    uVar3 = (ulong)(*param_2 + 1);
    piVar1 = param_2;
    func_0x000107c27d60();
    if ((int)piVar1 != 0) {
      func_0x000107c28188(param_3);
      func_0x00010b506464();
      func_0x00010b506360(param_2);
      uVar2 = uVar3;
    }
    piVar1 = param_2;
    func_0x000107c27d64(param_2,0x70);
    func_0x000107c2821c(piVar1 + 2,*(undefined8 *)(param_2 + 6),param_3);
    func_0x00010b50694c(piVar1 + 8,*(undefined8 *)(param_2 + 6));
    func_0x000107c27d68(param_2,uVar2,piVar1);
    *param_2 = *param_2 + 1;
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  *param_1 = piVar1;
  param_1[1] = param_2;
  *(int *)(param_1 + 2) = (int)uVar2;
  *(undefined1 *)(param_1 + 3) = uVar4;
  return;
}



/* Entry: 10b506350; end: 10b50646f;  */

/* WARNING: Removing unreachable block (ram,0x0001006281e8) */

ulong FUN_10b506350(void)

{
  ulong unaff_x23;
  
  func_0x00010029f6ec();
  if ((unaff_x23 & 1) == 0) {
    func_0x000107c613d0();
    func_0x000107c303d0(&UNK_10f7741f2,0);
  }
  return unaff_x23;
}



/* Entry: 10b506470; end: 10b5064a3;  */

long FUN_10b506470(long param_1)

{
  func_0x00010b5070e8();
  func_0x000107c30258(param_1 + 0x10);
  func_0x000107c30258(param_1 + 0x18);
  return param_1;
}



/* Entry: 10b5064a4; end: 10b5064a7;  */

long FUN_10b5064a4(long param_1)

{
  func_0x00010b5070e8();
  func_0x000107c30258(param_1 + 0x10);
  func_0x000107c30258(param_1 + 0x18);
  return param_1;
}



/* Entry: 10b5064a8; end: 10b5064bb;  */

void FUN_10b5064a8(void)

{
  FUN_10b506470();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5064bc; end: 10b5064c7;  */

undefined ** FUN_10b5064bc(void)

{
  return &PTR_DAT_110cf7350;
}



/* Entry: 10b5064c8; end: 10b506507;  */

void FUN_10b5064c8(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x10);
  func_0x000107c3025c(param_1 + 0x18);
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10b506508; end: 10b5065ef;  */

long * FUN_10b506508(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  
  puVar5 = (undefined8 *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  lVar1 = (long)*(char *)((long)puVar5 + 0x17);
  if (lVar1 < 0) {
    lVar1 = puVar5[1];
    if (lVar1 != 0) {
      puVar5 = (undefined8 *)*puVar5;
      goto LAB_10b50654c;
    }
  }
  else if (*(char *)((long)puVar5 + 0x17) != '\0') {
LAB_10b50654c:
    func_0x00010b5070d4(puVar5,lVar1,param_3,&UNK_10f776278);
    param_2 = param_3;
    func_0x00010b5070c8(param_3,1);
  }
  puVar5 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
  if (*(char *)((long)puVar5 + 0x17) < '\0') {
    if (puVar5[1] == 0) goto LAB_10b5065ac;
    puVar5 = (undefined8 *)*puVar5;
  }
  else if (*(char *)((long)puVar5 + 0x17) == '\0') goto LAB_10b5065ac;
  func_0x00010b5070d4(puVar5);
  param_2 = param_3;
  func_0x00010b5070c8(param_3,2);
LAB_10b5065ac:
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  uVar2 = (ulong)*(char *)(uVar3 + 0x1f);
  if ((long)uVar2 < 0) {
    lVar1 = *(long *)(uVar3 + 8);
    uVar2 = *(ulong *)(uVar3 + 0x10);
  }
  else {
    lVar1 = uVar3 + 8;
  }
  if (*param_3 - (long)param_2 < (long)(int)uVar2) {
    while( true ) {
      iVar6 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar4 = (int)uVar2;
      uVar2 = (ulong)(uint)(iVar4 - iVar6);
      if (iVar4 - iVar6 == 0 || iVar4 < iVar6) break;
      func_0x00010b4d5738();
      lVar1 = (long)param_2 + (long)iVar6;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar4);
  }
  _memcpy(param_2,lVar1,uVar2 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)uVar2);
}



/* Entry: 10b5065f0; end: 10b50671b;  */

long FUN_10b5065f0(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  if (*(char *)(uVar1 + 0x17) < '\0') {
    if (*(long *)(uVar1 + 8) == 0) goto LAB_10b506628;
  }
  else if (*(char *)(uVar1 + 0x17) == '\0') {
LAB_10b506628:
    lVar3 = 0;
    goto LAB_10b50662c;
  }
  func_0x000107c282a0();
  lVar3 = uVar1 + 1;
LAB_10b50662c:
  uVar1 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  lVar2 = (long)*(char *)(uVar1 + 0x17);
  if (lVar2 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    lVar3 = lVar3 + uVar1 + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar1 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar1 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x20) = (int)lVar3;
  return lVar3;
}



/* Entry: 10b50671c; end: 10b50673f;  */

undefined8 FUN_10b50671c(undefined8 param_1)

{
  func_0x00010b5070e8();
  return param_1;
}



/* Entry: 10b506740; end: 10b506743;  */

undefined8 FUN_10b506740(undefined8 param_1)

{
  func_0x00010b5070e8();
  return param_1;
}



/* Entry: 10b506744; end: 10b506757;  */

void FUN_10b506744(void)

{
  FUN_10b50671c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b506758; end: 10b50677b;  */

undefined ** FUN_10b506758(void)

{
  return &PTR_DAT_110cf73b0;
}



/* Entry: 10b50677c; end: 10b506833;  */

long * FUN_10b50677c(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  
  plVar1 = param_1;
  if ((int)param_1[2] != 0) {
    func_0x00010b5070b0();
    func_0x000107c282e4();
    param_2 = plVar1;
  }
  if (*(int *)((long)param_1 + 0x14) != 0) {
    func_0x00010b5070b0();
    func_0x00010598f43c();
    param_2 = plVar1;
  }
  if ((int)param_1[3] != 0) {
    func_0x00010b5070b0();
    func_0x000107c282ac();
    param_2 = plVar1;
  }
  if (*(int *)((long)param_1 + 0x1c) != 0) {
    func_0x00010b5070b0();
    func_0x0001088bdd44();
    param_2 = plVar1;
  }
  if ((int)param_1[4] != 0) {
    func_0x00010b5070b0();
    func_0x0001088b96ec();
    param_2 = plVar1;
  }
  if ((param_1[1] & 1U) != 0) {
    uVar4 = param_1[1] & 0xfffffffffffffffe;
    uVar3 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uVar3 < 0) {
      lVar2 = *(long *)(uVar4 + 8);
      uVar3 = *(ulong *)(uVar4 + 0x10);
    }
    else {
      lVar2 = uVar4 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar3) {
      while( true ) {
        iVar6 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar5 = (int)uVar3;
        uVar3 = (ulong)(uint)(iVar5 - iVar6);
        if (iVar5 - iVar6 == 0 || iVar5 < iVar6) break;
        func_0x00010b4d5738();
        lVar2 = (long)param_2 + (long)iVar6;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar2);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar5);
    }
    _memcpy(param_2,lVar2,uVar3 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar3);
  }
  return param_2;
}



/* Entry: 10b506834; end: 10b50697f;  */

ulong FUN_10b506834(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    uVar1 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x14)) * -9 + 0x2c0U >> 6) + uVar1;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar1 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6) + uVar1;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x1c)) * -9 + 0x2c0U >> 6) + uVar1;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    uVar1 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x20)) * -9 + 0x2c0U >> 6) + uVar1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    uVar1 = lVar2 + uVar1;
  }
  *(int *)(param_1 + 0x24) = (int)uVar1;
  return uVar1;
}



/* Entry: 10b506980; end: 10b506a33;  */

undefined8 * FUN_10b506980(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined2 uVar1;
  long lVar2;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110cf7310;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  FUN_10b506eb0(param_1 + 2,param_2,param_3 + 0x10);
  func_0x00010b506ed0(param_1 + 5,param_2,param_3 + 0x28);
  lVar2 = param_3 + 0x40;
  func_0x000107c2809c(lVar2,param_2);
  param_1[8] = lVar2;
  *(undefined4 *)((long)param_1 + 0x4c) = 0;
  uVar1 = *(undefined2 *)(param_3 + 0x48);
  *(undefined1 *)((long)param_1 + 0x4a) = *(undefined1 *)(param_3 + 0x4a);
  *(undefined2 *)(param_1 + 9) = uVar1;
  return param_1;
}



/* Entry: 10b506a34; end: 10b506a5f;  */

undefined8 FUN_10b506a34(undefined8 param_1)

{
  func_0x00010b5070e8();
  FUN_10b506a60(param_1);
  return param_1;
}



/* Entry: 10b506a60; end: 10b506a87;  */

long * FUN_10b506a60(long param_1)

{
  long *plVar1;
  
  func_0x000107c30258(param_1 + 0x40);
  plVar1 = (long *)(param_1 + 0x10);
  FUN_10b506ef0(param_1 + 0x28);
  if (*plVar1 != 0) {
    func_0x000107c303ac(plVar1);
  }
  return plVar1;
}



/* Entry: 10b506a88; end: 10b506a8b;  */

undefined8 FUN_10b506a88(undefined8 param_1)

{
  func_0x00010b5070e8();
  FUN_10b506a60(param_1);
  return param_1;
}



/* Entry: 10b506a8c; end: 10b506a9f;  */

void FUN_10b506a8c(void)

{
  FUN_10b506a34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b506aa0; end: 10b506aab;  */

undefined ** FUN_10b506aa0(void)

{
  return &PTR_DAT_110cf7408;
}



/* Entry: 10b506aac; end: 10b506b13;  */

void FUN_10b506aac(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
  }
  if (0 < *(int *)(param_1 + 0x30)) {
    func_0x0001053936e4(param_1 + 0x28);
  }
  func_0x000107c3025c(param_1 + 0x40);
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined1 *)(param_1 + 0x4a) = 0;
  *(undefined2 *)(param_1 + 0x48) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10b506b14; end: 10b506d87;  */

long * FUN_10b506b14(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  
  lVar3 = param_1[3];
  plVar1 = param_1;
  for (iVar6 = 0; (int)lVar3 != iVar6; iVar6 = iVar6 + 1) {
    func_0x00010b50708c();
    plVar1 = (long *)0x1;
    func_0x00010b5070bc();
    param_2 = plVar1;
  }
  if ((*(byte *)(param_1 + 9) & 1) != 0) {
    func_0x00010b507044();
    param_2 = (long *)0x10;
    func_0x000107c280a8(0x10,plVar1);
    func_0x00010b507050();
  }
  puVar7 = (undefined8 *)(param_1[8] & 0xfffffffffffffffc);
  if (*(char *)((long)puVar7 + 0x17) < '\0') {
    if (puVar7[1] == 0) goto LAB_10b506bd4;
    puVar2 = (undefined8 *)*puVar7;
  }
  else {
    puVar2 = puVar7;
    if (*(char *)((long)puVar7 + 0x17) == '\0') goto LAB_10b506bd4;
  }
  func_0x00010b5070d4(puVar2);
  plVar1 = param_3;
  func_0x000107c280a0(param_3,3,puVar7,param_2);
  param_2 = plVar1;
LAB_10b506bd4:
  if (*(char *)((long)param_1 + 0x49) == '\x01') {
    func_0x00010b507044();
    param_2 = (long *)0x20;
    func_0x000107c280a8();
    func_0x00010b507050();
  }
  if (*(char *)((long)param_1 + 0x4a) == '\x01') {
    func_0x00010b507044();
    param_2 = (long *)0x28;
    func_0x000107c280a8();
    func_0x00010b507050();
  }
  lVar3 = param_1[6];
  for (iVar6 = 0; (int)lVar3 != iVar6; iVar6 = iVar6 + 1) {
    func_0x00010b50708c();
    param_2 = (long *)0x6;
    func_0x00010b5070bc();
  }
  if ((param_1[1] & 1U) != 0) {
    uVar5 = param_1[1] & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar4 < 0) {
      lVar3 = *(long *)(uVar5 + 8);
      uVar4 = *(ulong *)(uVar5 + 0x10);
    }
    else {
      lVar3 = uVar5 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar4) {
      while( true ) {
        iVar8 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar6 = (int)uVar4;
        uVar4 = (ulong)(uint)(iVar6 - iVar8);
        if (iVar6 - iVar8 == 0 || iVar6 < iVar8) break;
        func_0x00010b4d5738();
        lVar3 = (long)param_2 + (long)iVar8;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar3);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar6);
    }
    _memcpy(param_2,lVar3,uVar4 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar4);
  }
  return param_2;
}



/* Entry: 10b506d88; end: 10b506d8b;  */

void FUN_10b506d88(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  FUN_10b506e40(param_1 + 0x10,param_2 + 0x10);
  func_0x00010b506e50(param_1 + 0x28,param_2 + 0x28);
  uVar1 = *(ulong *)(param_2 + 0x40) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x40,uVar1,uVar2);
  }
  if (*(char *)(param_2 + 0x48) == '\x01') {
    *(undefined1 *)(param_1 + 0x48) = 1;
  }
  if (*(char *)(param_2 + 0x49) == '\x01') {
    *(undefined1 *)(param_1 + 0x49) = 1;
  }
  if (*(char *)(param_2 + 0x4a) == '\x01') {
    *(undefined1 *)(param_1 + 0x4a) = 1;
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b506d8c; end: 10b506e3f;  */

void FUN_10b506d8c(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  FUN_10b506e40(param_1 + 0x10,param_2 + 0x10);
  func_0x00010b506e50(param_1 + 0x28,param_2 + 0x28);
  uVar1 = *(ulong *)(param_2 + 0x40) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x40,uVar1,uVar2);
  }
  if (*(char *)(param_2 + 0x48) == '\x01') {
    *(undefined1 *)(param_1 + 0x48) = 1;
  }
  if (*(char *)(param_2 + 0x49) == '\x01') {
    *(undefined1 *)(param_1 + 0x49) = 1;
  }
  if (*(char *)(param_2 + 0x4a) == '\x01') {
    *(undefined1 *)(param_1 + 0x4a) = 1;
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b506e40; end: 10b506e5f;  */

void FUN_10b506e40(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long *unaff_x19;
  int unaff_w20;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *unaff_x25;
  long unaff_x26;
  
  if (*(int *)(param_2 + 8) == 0) {
    return;
  }
  func_0x000100361ce4();
  plVar2 = param_1;
  func_0x00010064e8bc();
  plVar3 = (long *)*unaff_x25;
  func_0x000100361e44();
  plVar5 = unaff_x25;
  if (0 < (int)plVar2) {
    func_0x000107c39cb4();
    param_1 = param_1 + (int)plVar2;
    plVar5 = unaff_x25 + (int)plVar2;
  }
  lVar4 = unaff_x19[2];
  for (; iVar1 = (int)plVar2, plVar5 < unaff_x25 + unaff_x26; plVar5 = plVar5 + 1) {
    plVar2 = plVar3;
    (**(code **)(*plVar3 + 0x10))(plVar3,lVar4);
    *param_1 = (long)plVar2;
    func_0x00010064e8d4();
    param_1 = param_1 + 1;
  }
  func_0x000100361e74();
  if (iVar1 < unaff_w20) {
    *(int *)(*unaff_x19 + -1) = unaff_w20;
  }
  return;
}



/* Entry: 10b506e60; end: 10b506e97;  */

void FUN_10b506e60(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  if (param_2 == param_1) {
    return;
  }
  FUN_10b506aac();
  FUN_10b506e40(param_1 + 0x10,param_2 + 0x10);
  func_0x00010b506e50(param_1 + 0x28,param_2 + 0x28);
  uVar1 = *(ulong *)(param_2 + 0x40) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x40,uVar1,uVar2);
  }
  if (*(char *)(param_2 + 0x48) == '\x01') {
    *(undefined1 *)(param_1 + 0x48) = 1;
  }
  if (*(char *)(param_2 + 0x49) == '\x01') {
    *(undefined1 *)(param_1 + 0x49) = 1;
  }
  if (*(char *)(param_2 + 0x4a) == '\x01') {
    *(undefined1 *)(param_1 + 0x4a) = 1;
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b506e98; end: 10b506eaf;  */

void FUN_10b506e98(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    func_0x00010b5070dc();
  }
  *puVar1 = &PTR_FUN_110cf7270;
  puVar1[1] = param_2;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[2] = 0;
  return;
}



/* Entry: 10b506eb0; end: 10b506eef;  */

void FUN_10b506eb0(void)

{
  func_0x00010b5070fc();
  FUN_10b506e40();
  return;
}



/* Entry: 10b506ef0; end: 10b506f1f;  */

long * FUN_10b506ef0(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b506f20; end: 10b506f4f;  */

long * FUN_10b506f20(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b506f50; end: 10b50703b;  */

long * FUN_10b506f50(long *param_1)

{
  FUN_10b506ef0(param_1 + 3);
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b50703c; end: 10b50710f;  */

void FUN_10b50703c(void)

{
  return;
}



/* Entry: 10b507110; end: 10b507147;  */

long FUN_10b507110(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x10);
  func_0x000107c30258(param_1 + 0x18);
  return param_1;
}



/* Entry: 10b507148; end: 10b50714b;  */

long FUN_10b507148(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x10);
  func_0x000107c30258(param_1 + 0x18);
  return param_1;
}



/* Entry: 10b50714c; end: 10b50715f;  */

void FUN_10b50714c(void)

{
  FUN_10b507110();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b507160; end: 10b50716b;  */

undefined ** FUN_10b507160(void)

{
  return &PTR_DAT_110cf7540;
}



/* Entry: 10b50716c; end: 10b5071ab;  */

void FUN_10b50716c(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x10);
  func_0x000107c3025c(param_1 + 0x18);
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10b5071ac; end: 10b507287;  */

long * FUN_10b5071ac(long param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  
  puVar7 = (undefined8 *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  lVar3 = (long)*(char *)((long)puVar7 + 0x17);
  if (lVar3 < 0) {
    lVar3 = puVar7[1];
    if (lVar3 == 0) goto LAB_10b507218;
    puVar1 = (undefined8 *)*puVar7;
  }
  else {
    puVar1 = puVar7;
    if (*(char *)((long)puVar7 + 0x17) == '\0') goto LAB_10b507218;
  }
  func_0x000107c303d4(puVar1,lVar3,1,&UNK_10f77632c);
  plVar2 = param_3;
  func_0x000107c280a0(param_3,1,puVar7,param_2);
  param_2 = plVar2;
LAB_10b507218:
  uVar4 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar4 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar4 + 8);
  }
  plVar2 = param_2;
  if (lVar3 != 0) {
    plVar2 = param_3;
    func_0x000107c280a0(param_3,2,uVar4,param_2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar4 < 0) {
      lVar3 = *(long *)(uVar5 + 8);
      uVar4 = *(ulong *)(uVar5 + 0x10);
    }
    else {
      lVar3 = uVar5 + 8;
    }
    if (*param_3 - (long)plVar2 < (long)(int)uVar4) {
      while( true ) {
        iVar8 = ((int)*param_3 - (int)plVar2) + 0x10;
        iVar6 = (int)uVar4;
        uVar4 = (ulong)(uint)(iVar6 - iVar8);
        if (iVar6 - iVar8 == 0 || iVar6 < iVar8) break;
        func_0x00010b4d5738();
        lVar3 = (long)plVar2 + (long)iVar8;
        plVar2 = param_3;
        func_0x000107c303e4(param_3,lVar3);
      }
      func_0x00010b4d5738();
      return (long *)((long)plVar2 + (long)iVar6);
    }
    _memcpy(plVar2,lVar3,uVar4 & 0xffffffff);
    return (long *)((long)plVar2 + (long)(int)uVar4);
  }
  return plVar2;
}



/* Entry: 10b507288; end: 10b5073b3;  */

long FUN_10b507288(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  if (*(char *)(uVar1 + 0x17) < '\0') {
    if (*(long *)(uVar1 + 8) == 0) goto LAB_10b5072c0;
  }
  else if (*(char *)(uVar1 + 0x17) == '\0') {
LAB_10b5072c0:
    lVar3 = 0;
    goto LAB_10b5072c4;
  }
  func_0x000107c282a0();
  lVar3 = uVar1 + 1;
LAB_10b5072c4:
  uVar1 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  lVar2 = (long)*(char *)(uVar1 + 0x17);
  if (lVar2 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c28098();
    lVar3 = lVar3 + uVar1 + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar1 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar1 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x20) = (int)lVar3;
  return lVar3;
}



/* Entry: 10b5073b4; end: 10b5073ef;  */

long FUN_10b5073b4(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 10b5073f0; end: 10b5073f3;  */

long FUN_10b5073f0(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 10b5073f4; end: 10b507407;  */

void FUN_10b5073f4(void)

{
  FUN_10b5073b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b507408; end: 10b507413;  */

undefined ** FUN_10b507408(void)

{
  return &PTR_DAT_110cf7580;
}



/* Entry: 10b507414; end: 10b507457;  */

void FUN_10b507414(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
  }
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10b507458; end: 10b50750f;  */

long * FUN_10b507458(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = *(int *)(param_1 + 0x18);
  for (iVar6 = 0; iVar7 != iVar6; iVar6 = iVar6 + 1) {
    uVar4 = *(ulong *)(param_1 + 0x10);
    puVar1 = (ulong *)(param_1 + 0x10);
    if ((uVar4 & 1) != 0) {
      puVar1 = (ulong *)(uVar4 + (long)iVar6 * 8 + 7);
    }
    plVar2 = (long *)0x1;
    func_0x000107c303cc(1,*puVar1,*(undefined4 *)(*puVar1 + 0x20),param_2,param_3);
    param_2 = plVar2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar4 < 0) {
      lVar3 = *(long *)(uVar5 + 8);
      uVar4 = *(ulong *)(uVar5 + 0x10);
    }
    else {
      lVar3 = uVar5 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar4) {
      while( true ) {
        iVar7 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar6 = (int)uVar4;
        uVar4 = (ulong)(uint)(iVar6 - iVar7);
        if (iVar6 - iVar7 == 0 || iVar6 < iVar7) break;
        func_0x00010b4d5738();
        lVar3 = (long)param_2 + (long)iVar7;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar3);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar6);
    }
    _memcpy(param_2,lVar3,uVar4 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar4);
  }
  return param_2;
}



/* Entry: 10b507510; end: 10b507587;  */

long FUN_10b507510(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar3 = (long)*(int *)(param_1 + 0x18);
  puVar1 = (ulong *)(param_1 + 0x10);
  if ((uVar2 & 1) != 0) {
    puVar1 = (ulong *)(uVar2 + 7);
  }
  for (lVar4 = lVar3 << 3; lVar4 != 0; lVar4 = lVar4 + -8) {
    uVar2 = *puVar1;
    FUN_10b507588();
    lVar3 = uVar2 + lVar3;
    puVar1 = puVar1 + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar2 + 0x10);
    }
    lVar3 = lVar4 + lVar3;
  }
  *(int *)(param_1 + 0x28) = (int)lVar3;
  return lVar3;
}



/* Entry: 10b507588; end: 10b5075b3;  */

long FUN_10b507588(long param_1)

{
  FUN_10b507288();
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 10b5075b4; end: 10b5075b7;  */

void FUN_10b5075b4(long param_1,long param_2)

{
  FUN_10b507600(param_1 + 0x10,param_2 + 0x10);
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b5075b8; end: 10b5075ff;  */

void FUN_10b5075b8(long param_1,long param_2)

{
  FUN_10b507600(param_1 + 0x10,param_2 + 0x10);
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b507600; end: 10b50760f;  */

void FUN_10b507600(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long *unaff_x19;
  int unaff_w20;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *unaff_x25;
  long unaff_x26;
  
  if (*(int *)(param_2 + 8) == 0) {
    return;
  }
  func_0x000100361ce4();
  plVar2 = param_1;
  func_0x00010064e8bc();
  plVar3 = (long *)*unaff_x25;
  func_0x000100361e44();
  plVar5 = unaff_x25;
  if (0 < (int)plVar2) {
    func_0x000107c39cb4();
    param_1 = param_1 + (int)plVar2;
    plVar5 = unaff_x25 + (int)plVar2;
  }
  lVar4 = unaff_x19[2];
  for (; iVar1 = (int)plVar2, plVar5 < unaff_x25 + unaff_x26; plVar5 = plVar5 + 1) {
    plVar2 = plVar3;
    (**(code **)(*plVar3 + 0x10))(plVar3,lVar4);
    *param_1 = (long)plVar2;
    func_0x00010064e8d4();
    param_1 = param_1 + 1;
  }
  func_0x000100361e74();
  if (iVar1 < unaff_w20) {
    *(int *)(*unaff_x19 + -1) = unaff_w20;
  }
  return;
}



/* Entry: 10b507610; end: 10b507647;  */

void FUN_10b507610(long param_1,long param_2)

{
  if (param_2 == param_1) {
    return;
  }
  FUN_10b507414();
  FUN_10b507600(param_1 + 0x10,param_2 + 0x10);
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b507648; end: 10b507657;  */

void FUN_10b507648(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x28);
  }
  *puVar1 = &PTR_FUN_110cf74b0;
  puVar1[1] = param_2;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 10b507658; end: 10b5076f3;  */

void FUN_10b507658(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x28);
  }
  *puVar1 = &PTR_FUN_110cf74b0;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 10b5076f4; end: 10b50770f;  */

void FUN_10b5076f4(void)

{
  return;
}



/* Entry: 10b507710; end: 10b507793;  */

undefined8 * FUN_10b507710(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110cf7608;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  lVar1 = param_3 + 0x18;
  func_0x000107c2809c(lVar1,param_2);
  param_1[3] = lVar1;
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x00010b5055fc(param_2,*(undefined8 *)(param_3 + 0x20));
  }
  param_1[4] = param_2;
  return param_1;
}



/* Entry: 10b507794; end: 10b5077c3;  */

long FUN_10b507794(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b5077c4(param_1);
  return param_1;
}



/* Entry: 10b5077c4; end: 10b5077f3;  */

void FUN_10b5077c4(long param_1)

{
  func_0x000107c30258(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b507b38();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5077f4; end: 10b5077f7;  */

long FUN_10b5077f4(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b5077c4(param_1);
  return param_1;
}



/* Entry: 10b5077f8; end: 10b50780b;  */

void FUN_10b5077f8(void)

{
  FUN_10b507794();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b50780c; end: 10b507817;  */

undefined ** FUN_10b50780c(void)

{
  return &PTR_DAT_110cf7648;
}



/* Entry: 10b507818; end: 10b507867;  */

void FUN_10b507818(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x18);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x00010b507bd0(*(undefined8 *)(param_1 + 0x20));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10b507868; end: 10b50793b;  */

long * FUN_10b507868(long param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  
  puVar7 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
  lVar3 = (long)*(char *)((long)puVar7 + 0x17);
  if (lVar3 < 0) {
    lVar3 = puVar7[1];
    if (lVar3 == 0) goto LAB_10b5078d4;
    puVar1 = (undefined8 *)*puVar7;
  }
  else {
    puVar1 = puVar7;
    if (*(char *)((long)puVar7 + 0x17) == '\0') goto LAB_10b5078d4;
  }
  func_0x000107c303d4(puVar1,lVar3,1,&UNK_10f77634b);
  plVar2 = param_3;
  func_0x000107c280a0(param_3,1,puVar7,param_2);
  param_2 = plVar2;
LAB_10b5078d4:
  plVar2 = param_2;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    plVar2 = (long *)0x2;
    func_0x000107c303cc(2,*(long *)(param_1 + 0x20),
                        *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x18),param_2,param_3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return plVar2;
  }
  uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
  if ((long)uVar4 < 0) {
    lVar3 = *(long *)(uVar5 + 8);
    uVar4 = *(ulong *)(uVar5 + 0x10);
  }
  else {
    lVar3 = uVar5 + 8;
  }
  if (*param_3 - (long)plVar2 < (long)(int)uVar4) {
    while( true ) {
      iVar8 = ((int)*param_3 - (int)plVar2) + 0x10;
      iVar6 = (int)uVar4;
      uVar4 = (ulong)(uint)(iVar6 - iVar8);
      if (iVar6 - iVar8 == 0 || iVar6 < iVar8) break;
      func_0x00010b4d5738();
      lVar3 = (long)plVar2 + (long)iVar8;
      plVar2 = param_3;
      func_0x000107c303e4(param_3,lVar3);
    }
    func_0x00010b4d5738();
    return (long *)((long)plVar2 + (long)iVar6);
  }
  _memcpy(plVar2,lVar3,uVar4 & 0xffffffff);
  return (long *)((long)plVar2 + (long)(int)uVar4);
}



/* Entry: 10b50793c; end: 10b5079bf;  */

long FUN_10b50793c(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  if (*(char *)(uVar1 + 0x17) < '\0') {
    if (*(long *)(uVar1 + 8) == 0) goto LAB_10b507974;
  }
  else if (*(char *)(uVar1 + 0x17) == '\0') {
LAB_10b507974:
    lVar3 = 0;
    goto LAB_10b507978;
  }
  func_0x000107c282a0();
  lVar3 = uVar1 + 1;
LAB_10b507978:
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    FUN_10b505454();
    lVar3 = lVar3 + lVar2 + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar1 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar1 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x14) = (int)lVar3;
  return lVar3;
}



/* Entry: 10b5079c0; end: 10b5079c3;  */

void FUN_10b5079c0(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = *(ulong *)(param_1 + 8);
  uVar2 = uVar4;
  if ((uVar4 & 1) != 0) {
    uVar2 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  uVar3 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar3 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x18,uVar3,uVar4);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x20) == 0) {
      func_0x00010b5055fc(uVar2,*(undefined8 *)(param_2 + 0x20));
      *(ulong *)(param_1 + 0x20) = uVar2;
    }
    else {
      func_0x00010b507b04();
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b5079c4; end: 10b507a97;  */

void FUN_10b5079c4(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = *(ulong *)(param_1 + 8);
  uVar2 = uVar4;
  if ((uVar4 & 1) != 0) {
    uVar2 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  uVar3 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar3 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x18,uVar3,uVar4);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x20) == 0) {
      func_0x00010b5055fc(uVar2,*(undefined8 *)(param_2 + 0x20));
      *(ulong *)(param_1 + 0x20) = uVar2;
    }
    else {
      func_0x00010b507b04();
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b507a98; end: 10b507a9f;  */

void FUN_10b507a98(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x28);
  }
  *puVar1 = &PTR_FUN_110cf7608;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = 0;
  return;
}



/* Entry: 10b507aa0; end: 10b507aef;  */

void FUN_10b507aa0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x28);
  }
  *puVar1 = &PTR_FUN_110cf7608;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = 0;
  return;
}



/* Entry: 10b507af0; end: 10b507b37;  */

void FUN_10b507af0(void)

{
  return;
}



/* Entry: 10b507b38; end: 10b507b5f;  */

long FUN_10b507b38(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b507b60; end: 10b507bab;  */

undefined8 * FUN_10b507b60(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110cf76c0;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[2] = 0;
  func_0x00010b507b04(param_1,param_3);
  return param_1;
}



/* Entry: 10b507bac; end: 10b507baf;  */

long FUN_10b507bac(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b507bb0; end: 10b507bc3;  */

void FUN_10b507bb0(void)

{
  FUN_10b507b38();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b507bc4; end: 10b507be3;  */

undefined ** FUN_10b507bc4(void)

{
  return &PTR_DAT_110cf7700;
}



/* Entry: 10b507be4; end: 10b507c67;  */

long * FUN_10b507be4(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  plVar1 = param_2;
  if (*(int *)(param_1 + 0x10) != 0) {
    plVar1 = param_3;
    func_0x000107c282e4(param_3,*(int *)(param_1 + 0x10),param_2);
  }
  plVar2 = plVar1;
  if (*(int *)(param_1 + 0x14) != 0) {
    plVar2 = param_3;
    func_0x00010598f43c(param_3,*(int *)(param_1 + 0x14),plVar1);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar4 < 0) {
      lVar3 = *(long *)(uVar5 + 8);
      uVar4 = *(ulong *)(uVar5 + 0x10);
    }
    else {
      lVar3 = uVar5 + 8;
    }
    if (*param_3 - (long)plVar2 < (long)(int)uVar4) {
      while( true ) {
        iVar7 = ((int)*param_3 - (int)plVar2) + 0x10;
        iVar6 = (int)uVar4;
        uVar4 = (ulong)(uint)(iVar6 - iVar7);
        if (iVar6 - iVar7 == 0 || iVar6 < iVar7) break;
        func_0x00010b4d5738();
        lVar3 = (long)plVar2 + (long)iVar7;
        plVar2 = param_3;
        func_0x000107c303e4(param_3,lVar3);
      }
      func_0x00010b4d5738();
      return (long *)((long)plVar2 + (long)iVar6);
    }
    _memcpy(plVar2,lVar3,uVar4 & 0xffffffff);
    return (long *)((long)plVar2 + (long)(int)uVar4);
  }
  return plVar2;
}


