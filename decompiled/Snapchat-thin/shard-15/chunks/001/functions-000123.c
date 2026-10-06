/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b8afa60; end: 10b8afa7b;  */

void FUN_10b8afa60(long param_1,long *param_2)

{
  if (param_1 + 0x18 != *param_2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b8afa7c; end: 10b8afabb;  */

long FUN_10b8afa7c(void)

{
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b8b08d0();
  for (; unaff_x21 != unaff_x20; unaff_x21 = unaff_x21 + 0xf8) {
    FUN_10b8afabc(unaff_x19,unaff_x21);
    unaff_x19 = unaff_x19 + 0xf8;
  }
  return unaff_x19;
}



/* Entry: 10b8afabc; end: 10b8afb8f;  */

undefined8 * FUN_10b8afabc(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *param_2 = 0;
  func_0x00010b8afae8(param_1 + 1,param_2 + 1);
  return param_1;
}



/* Entry: 10b8afb90; end: 10b8afbab;  */

void FUN_10b8afb90(long param_1)

{
  FUN_10b8afbac();
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



/* Entry: 10b8afbac; end: 10b8afbd7;  */

void FUN_10b8afbac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  *param_2 = 0;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_2[2] = 0;
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  return;
}



/* Entry: 10b8afbd8; end: 10b8afc4f;  */

undefined8 FUN_10b8afbd8(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x00010b8afc00(param_1 + 8);
  func_0x00010007e5d0(param_1);
  func_0x0001003a8cb8();
  return unaff_x19;
}



/* Entry: 10b8afc50; end: 10b8afc6f;  */

void FUN_10b8afc50(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    FUN_10b8af408();
  }
  return;
}



/* Entry: 10b8afc70; end: 10b8afd4b;  */

undefined1  [16] FUN_10b8afc70(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined **ppuVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined8 uStack_70;
  undefined *puStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [16];
  undefined1 uStack_40;
  long lStack_38;
  
  if (param_1 == 0) {
    uVar3 = 0;
    uVar5 = 0;
  }
  else {
    FUN_10b9a9358(&lStack_38,param_2);
    if (lStack_38 == 0) {
      puStack_68 = &UNK_10f7d0ef0;
      uStack_60 = 0;
    }
    else {
      puStack_68 = (undefined *)(lStack_38 + 0x18);
      uStack_60 = (ulong)*(uint *)(lStack_38 + 0xc);
    }
    uStack_58 = 0;
    auStack_50[0] = 0;
    uStack_40 = 0;
    ppuVar2 = &puStack_68;
    FUN_10b9899c8(ppuVar2);
    bVar1 = (param_1 & 1) == 0;
    if (bVar1) {
      FUN_10b9a6d50(&uStack_70,&puStack_68);
      func_0x0001090e1ddc(param_3,&uStack_70);
      func_0x000104bda960(uStack_70);
      uVar4 = 0;
      uVar5 = 0;
    }
    else {
      uVar5 = (ulong)ppuVar2 & 0xffffffffffffff00;
      uVar4 = (ulong)ppuVar2 & 0xff;
    }
    uVar3 = (ulong)!bVar1;
    func_0x000107c310b8(auStack_50);
    func_0x000107c278f8(lStack_38);
    uVar5 = uVar5 | uVar4;
  }
  auVar6._8_8_ = uVar3;
  auVar6._0_8_ = uVar5;
  return auVar6;
}



/* Entry: 10b8afd4c; end: 10b8afdb7;  */

long FUN_10b8afd4c(long param_1)

{
  long lVar1;
  long *plVar2;
  long lStack_28;
  
  plVar2 = (long *)(param_1 + 0x28);
  lVar1 = *plVar2;
  if (lVar1 == 0) {
    lVar1 = 0x40;
    __Znwm();
    *(undefined8 *)(lVar1 + 0x28) = 0;
    *(undefined8 *)(lVar1 + 0x20) = 0;
    *(undefined8 *)(lVar1 + 0x38) = 0;
    *(undefined8 *)(lVar1 + 0x30) = 0;
    *(undefined8 *)(lVar1 + 0x18) = 0;
    *(undefined8 *)(lVar1 + 0x10) = 0;
    func_0x00010b8b096c();
    *(undefined8 *)(lVar1 + 0x20) = 0;
    *(undefined8 *)(lVar1 + 0x28) = 0;
    *(undefined4 *)(lVar1 + 0x38) = 0;
    *(undefined8 *)(lVar1 + 0x30) = 0;
    lStack_28 = lVar1;
    func_0x00010b8ae018(plVar2,&lStack_28);
    FUN_10b8af370(lStack_28);
    lVar1 = *plVar2;
  }
  return lVar1;
}



/* Entry: 10b8afdb8; end: 10b8afdbf;  */

void FUN_10b8afdb8(void)

{
  return;
}



/* Entry: 10b8afdc0; end: 10b8afe5f;  */

void FUN_10b8afdc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,float *param_6)

{
  undefined8 *unaff_x19;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  char cStack_38;
  
  uVar2 = (undefined4)((ulong)param_1 >> 0x20);
  uVar1 = (undefined4)param_1;
  func_0x00010b8b0860();
  FUN_10b9aa764(auStack_40,param_3,param_4,param_5);
  if (cStack_38 != '\x01') {
    FUN_10b9a92f0(auStack_40);
    if ((float)(double)CONCAT44(uVar2,uVar1) < 0.0) {
      FUN_10b8af48c(&uStack_48);
      *unaff_x19 = uStack_48;
      *(undefined1 *)(unaff_x19 + 1) = 1;
      goto LAB_10b8afe48;
    }
    *param_6 = (float)(double)CONCAT44(uVar2,uVar1);
  }
  *(undefined1 *)unaff_x19 = 0;
  *(undefined1 *)(unaff_x19 + 1) = 0;
LAB_10b8afe48:
  FUN_10b9a8d98(auStack_40);
  return;
}



/* Entry: 10b8afe60; end: 10b8aff73;  */

void FUN_10b8afe60(undefined8 param_1,long *param_2,long param_3,undefined4 *param_4)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *unaff_x19;
  long *unaff_x20;
  long lVar5;
  undefined8 uStack_78;
  
  func_0x00010b8b0860();
  lVar5 = *param_2;
  FUN_10b8aff74(param_2,1);
  plVar3 = unaff_x20;
  func_0x00010b8affdc();
  lVar1 = *unaff_x20;
  lVar2 = unaff_x20[1];
  plVar4 = plVar3;
  if (((lVar1 != 0) && (plVar3 != (long *)0x0)) && (lVar1 != param_3)) {
    _memmove(plVar3,lVar1,param_3 - lVar1);
    plVar4 = (long *)((long)plVar3 + (param_3 - lVar1));
  }
  *(undefined4 *)plVar4 = *param_4;
  if ((param_3 != 0) && (lVar2 = lVar1 + lVar2 * 4, param_3 != lVar2)) {
    _memmove((long)plVar4 + 4,param_3,lVar2 - param_3);
  }
  uStack_78 = 0;
  if (lVar1 != 0) {
    FUN_10b8b0010();
  }
  *unaff_x20 = (long)plVar3;
  unaff_x20[1] = unaff_x20[1] + 1;
  unaff_x20[2] = (long)param_2;
  FUN_10b8b002c(&uStack_78);
  *unaff_x19 = *unaff_x20 + (param_3 - lVar5);
  return;
}



/* Entry: 10b8aff74; end: 10b8b000f;  */

ulong FUN_10b8aff74(long param_1,ulong *param_2)

{
  undefined1 **ppuVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 *puStack_20;
  undefined8 uStack_18;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  if ((long)param_2 + (*(long *)(param_1 + 8) - uVar2) <= 0x1fffffffffffffff - uVar2) {
    if (uVar2 >> 0x3d == 0) {
      uVar3 = (uVar2 << 3) / 5;
    }
    else {
      uVar3 = uVar2 << 3;
      if (4 < uVar2 >> 0x3d) {
        uVar3 = 0xffffffffffffffff;
      }
    }
    uVar2 = *(long *)(param_1 + 8) + (long)param_2;
    if (0x1ffffffffffffffe < uVar3) {
      uVar3 = 0x1fffffffffffffff;
    }
    if (uVar2 <= uVar3) {
      uVar2 = uVar3;
    }
    return uVar2;
  }
  ppuVar1 = (undefined1 **)&stack0xfffffffffffffff0;
  uVar4 = 0x10b8affdc;
  _abort();
  if ((ulong)param_2 >> 0x3d != 0) {
    ppuVar1 = &puStack_20;
    uStack_18 = 0x10b8affdc;
    uVar4 = 0x10b8afff4;
    puStack_20 = &stack0xfffffffffffffff0;
    _abort();
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    uVar2 = (long)param_2 << 2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(uVar2);
    return uVar2;
  }
  *(undefined1 ***)((long)ppuVar1 + -0x10) = ppuVar1;
  *(undefined8 *)((long)ppuVar1 + -8) = uVar4;
  func_0x00010772e264();
  uVar2 = *param_2;
  if (param_1 + 0x18U != uVar2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return uVar2;
  }
  return uVar2;
}



/* Entry: 10b8b0010; end: 10b8b002b;  */

void FUN_10b8b0010(long param_1,long *param_2)

{
  if (param_1 + 0x18 != *param_2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b8b002c; end: 10b8b0063;  */

long * FUN_10b8b002c(long *param_1)

{
  if ((*param_1 != 0) && (param_1[1] + 0x18 != *param_1)) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b8b0064; end: 10b8b0067;  */

void FUN_10b8b0064(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d70fb8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b8b0068; end: 10b8b007b;  */

void FUN_10b8b0068(void)

{
  FUN_10b8b04cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b8b007c; end: 10b8b008b;  */

void FUN_10b8b007c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b8b0084. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b8b008c; end: 10b8b0123;  */

long * FUN_10b8b008c(long *param_1,undefined8 param_2)

{
  *param_1 = (long)(param_1 + 3);
  param_1[2] = 4;
  param_1[1] = 0;
  func_0x00010b8b00c4(param_1,param_2,param_2);
  return param_1;
}



/* Entry: 10b8b0124; end: 10b8b01df;  */

void FUN_10b8b0124(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long *unaff_x19;
  long *plVar5;
  
  func_0x00010b8b0860();
  uVar3 = (param_3 - param_2) / 0xf8;
  if (uVar3 <= *(ulong *)(param_1 + 0x10)) {
    func_0x00010b8b0248();
    unaff_x19[1] = uVar3;
    return;
  }
  plVar4 = unaff_x19;
  FUN_10b8af9d8();
  plVar5 = (long *)*unaff_x19;
  if ((plVar5 != (long *)0x0) && (FUN_10b8b01e0(), unaff_x19 + 3 != plVar5)) {
    __ZdlPv(plVar5);
  }
  unaff_x19[1] = 0;
  unaff_x19[2] = uVar3;
  *unaff_x19 = (long)plVar4;
  lVar1 = *unaff_x19;
  lVar2 = unaff_x19[1];
  plVar4 = unaff_x19;
  FUN_10b8b02dc();
  unaff_x19[1] = ((long)plVar4 - (lVar1 + lVar2 * 0xf8)) / 0xf8 + unaff_x19[1];
  return;
}



/* Entry: 10b8b01e0; end: 10b8b01fb;  */

void FUN_10b8b01e0(void)

{
  long unaff_x19;
  
  func_0x00010b8b0908();
  *(undefined8 *)(unaff_x19 + 8) = 0;
  return;
}



/* Entry: 10b8b01fc; end: 10b8b02db;  */

void FUN_10b8b01fc(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  plVar3 = param_1;
  FUN_10b8b02dc();
  param_1[1] = ((long)plVar3 - (lVar1 + lVar2 * 0xf8)) / 0xf8 + param_1[1];
  return;
}



/* Entry: 10b8b02dc; end: 10b8b0317;  */

void FUN_10b8b02dc(undefined8 param_1,long param_2,long param_3,long param_4)

{
  for (; param_2 != param_3; param_2 = param_2 + 0xf8) {
    FUN_10b8afabc(param_4,param_2);
    param_4 = param_4 + 0xf8;
  }
  return;
}



/* Entry: 10b8b0318; end: 10b8b036f;  */

long FUN_10b8b0318(long param_1,long param_2,long *param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_10b8b03ec(*param_3,param_1);
    param_1 = param_1 + 0xf8;
    *param_3 = *param_3 + 0xf8;
    lVar1 = lVar1 + 0xf8;
  }
  return lVar1;
}



/* Entry: 10b8b0370; end: 10b8b03ab;  */

void FUN_10b8b0370(undefined8 param_1,long param_2,long param_3,long param_4)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_10b8afabc(param_4,param_2);
    param_2 = param_2 + 0xf8;
    param_4 = param_4 + 0xf8;
  }
  return;
}



/* Entry: 10b8b03ac; end: 10b8b03eb;  */

long FUN_10b8b03ac(undefined8 param_1,long param_2)

{
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b8b08d0();
  while (param_2 != 0) {
    FUN_10b8b03ec(unaff_x19,unaff_x21);
    unaff_x21 = unaff_x21 + 0xf8;
    unaff_x19 = unaff_x19 + 0xf8;
    unaff_x20 = unaff_x20 + -1;
    param_2 = unaff_x20;
  }
  return unaff_x19;
}



/* Entry: 10b8b03ec; end: 10b8b04cb;  */

void FUN_10b8b03ec(long param_1)

{
  long unaff_x19;
  
  func_0x00010b8b08fc();
  func_0x00010b8b0414(param_1 + 8,unaff_x19 + 8);
  return;
}



/* Entry: 10b8b04cc; end: 10b8b04db;  */

void FUN_10b8b04cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d70fb8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b8b04dc; end: 10b8b0587;  */

long FUN_10b8b04dc(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_10b8b0010(param_1,param_1);
  }
  return param_1;
}



/* Entry: 10b8b0588; end: 10b8b069f;  */

long * FUN_10b8b0588(undefined8 param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined1 in_CY;
  long lVar4;
  long lVar5;
  long *plVar6;
  ulong extraout_x8;
  ulong extraout_x9;
  ulong extraout_x10;
  ulong uVar7;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long lVar8;
  
  func_0x00010b8b0980(0x88888888888888);
  if ((bool)in_CY) {
    func_0x00010b8b0860();
    if (extraout_x10 >> 0x3d == 0) {
      uVar7 = (extraout_x10 << 3) / 5;
    }
    else {
      uVar7 = extraout_x10 << 3;
      if (4 < extraout_x10 >> 0x3d) {
        uVar7 = 0xffffffffffffffff;
      }
    }
    if (0x88888888888887 < uVar7) {
      uVar7 = 0x88888888888888;
    }
    uVar1 = extraout_x9;
    if (extraout_x9 <= uVar7) {
      uVar1 = uVar7;
    }
    unaff_x21 = param_3;
    if (extraout_x9 <= extraout_x8) {
      lVar8 = *unaff_x20;
      lVar4 = uVar1 * 0xf0;
      __Znwm();
      lVar2 = *unaff_x20;
      lVar3 = unaff_x20[1];
      lVar5 = lVar2;
      FUN_10b8b06a0(lVar2,param_3,lVar4);
      func_0x00010b8b08b8();
      FUN_10b8af984(lVar5);
      plVar6 = param_3;
      FUN_10b8b06a0(param_3,lVar2 + lVar3 * 0xf0,lVar5 + 0xf0);
      if (lVar2 != 0) {
        func_0x00010b8b050c(lVar2,unaff_x20[1]);
        plVar6 = (long *)*unaff_x20;
        if (unaff_x20 + 3 != plVar6) {
          __ZdlPv();
        }
      }
      *unaff_x20 = lVar4;
      unaff_x20[1] = unaff_x20[1] + 1;
      unaff_x20[2] = uVar1;
      *unaff_x19 = (long)param_3 + (lVar4 - lVar8);
      return plVar6;
    }
  }
  _abort();
  func_0x00010b8b08d0();
  for (; unaff_x21 != unaff_x20; unaff_x21 = unaff_x21 + 0x1e) {
    func_0x00010b8afae8(unaff_x19,unaff_x21);
    unaff_x19 = unaff_x19 + 0x1e;
  }
  return unaff_x19;
}



/* Entry: 10b8b06a0; end: 10b8b06df;  */

long FUN_10b8b06a0(void)

{
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b8b08d0();
  for (; unaff_x21 != unaff_x20; unaff_x21 = unaff_x21 + 0xf0) {
    func_0x00010b8afae8(unaff_x19,unaff_x21);
    unaff_x19 = unaff_x19 + 0xf0;
  }
  return unaff_x19;
}



/* Entry: 10b8b06e0; end: 10b8b0703;  */

undefined8 * FUN_10b8b06e0(undefined8 *param_1)

{
  FUN_10b8af370(*param_1);
  return param_1;
}



/* Entry: 10b8b0704; end: 10b8b0993;  */

long * FUN_10b8b0704(long *param_1)

{
  long *unaff_x19;
  
  if (*param_1 == 2) {
    func_0x0001003adc0c(param_1 + 1);
    func_0x000104bda960();
    return unaff_x19;
  }
  if (*param_1 == 1) {
    func_0x0001080cf6b0(param_1[1]);
    return param_1 + 1;
  }
  return param_1;
}



/* Entry: 10b8b0994; end: 10b8b1763;  */

void FUN_10b8b0994(undefined8 *param_1,long param_2,long ******param_3)

{
  long *****ppppplVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  long ******pppppplVar5;
  long ******pppppplVar6;
  ulong uVar7;
  undefined *puVar8;
  uint uVar9;
  undefined8 extraout_x8;
  long lVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  long ******unaff_x26;
  long ******pppppplVar14;
  long *****ppppplVar15;
  long ******pppppplVar16;
  long ******pppppplVar17;
  long ******pppppplVar18;
  long ******unaff_d8;
  long ******unaff_d9;
  long ******unaff_d11;
  long ******pppppplVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined1 auStack_1f0 [8];
  undefined8 uStack_1e8;
  int iStack_1e0;
  undefined4 uStack_1dc;
  byte bStack_1d8;
  long *****ppppplStack_1d0;
  undefined8 *puStack_1c8;
  undefined1 *puStack_1c0;
  code *pcStack_1b8;
  long *****ppppplStack_1a8;
  long *****ppppplStack_1a0;
  long *****ppppplStack_198;
  double dStack_190;
  long *****ppppplStack_188;
  double dStack_180;
  long *****ppppplStack_178;
  long *****ppppplStack_170;
  long lStack_168;
  undefined1 auStack_160 [8];
  long *****ppppplStack_158;
  long *****ppppplStack_150;
  long *****ppppplStack_148;
  double dStack_140;
  long *****ppppplStack_138;
  long *****ppppplStack_130;
  long *****ppppplStack_128;
  long *****ppppplStack_120;
  long *****ppppplStack_118;
  byte bStack_110;
  long *****ppppplStack_108;
  long *****ppppplStack_100;
  long *****ppppplStack_f8;
  undefined1 auStack_f0 [16];
  undefined1 uStack_e0;
  long *****ppppplStack_d8;
  long *****ppppplStack_d0;
  int iStack_c8;
  long *****ppppplStack_c0;
  long *****ppppplStack_b8;
  undefined8 uStack_b0;
  
  func_0x00010b8b1cf4();
  if (*(long *)(param_2 + 0x18) == 0) {
    bVar2 = false;
  }
  else {
    bVar2 = (*(byte *)(*(long *)(param_2 + 0x18) + 0x230) & 3) == 2;
  }
  uVar3 = *(char *)(param_3 + 1) == '\t';
  uStack_b0 = extraout_x8;
  if (((!(bool)uVar3) || (ppppplVar15 = *param_3, ppppplVar15 == (long *****)0x0)) ||
     (uVar3 = ppppplVar15[2] == (long ****)0x7, !(bool)uVar3)) {
    func_0x00010b8b1cc4();
    *param_1 = 2;
    param_1[1] = ppppplStack_158;
    goto LAB_10b8b0a90;
  }
  dVar20 = (double)*(float *)(param_2 + 0x148);
  dVar22 = (double)*(float *)(param_2 + 0x14c);
  if (1 < *(byte *)(ppppplVar15 + 4)) {
    uVar3 = (*(byte *)(ppppplVar15 + 4) & 0xfe) == 2;
    if ((bool)uVar3) {
      FUN_10b9a9358(&lStack_168,ppppplVar15 + 3);
      if (lStack_168 == 0) {
        ppppplStack_158 = (long *****)&UNK_10f7d0ef0;
        ppppplStack_150 = (long *****)0x0;
      }
      else {
        ppppplStack_158 = (long *****)(lStack_168 + 0x18);
        ppppplStack_150 = (long *****)(ulong)*(uint *)(lStack_168 + 0xc);
      }
      ppppplStack_148 = (long *****)0x0;
      dStack_140 = (double)((ulong)dStack_140 & 0xffffffffffffff00);
      ppppplStack_130 = (long *****)((ulong)ppppplStack_130 & 0xffffffffffffff00);
      func_0x00010b8b1cec();
      if (ppppplStack_148 < ppppplStack_150) {
        if ((*(byte *)((long)ppppplStack_158 + (long)ppppplStack_148) & 0xffffffdf) - 0x41 < 0x1a) {
          bVar12 = false;
          bVar11 = false;
          iVar13 = 0;
          unaff_d8 = (long ******)0x3fe0000000000000;
          unaff_d9 = (long ******)0x3fe0000000000000;
          while (ppppplStack_148 < ppppplStack_150) {
            pppppplVar17 = &ppppplStack_158;
            func_0x00010b9a71b4(&ppppplStack_108);
            ppppplVar1 = ppppplStack_100;
            pppppplVar6 = (long ******)ppppplStack_108;
            if (((ulong)ppppplStack_f8 & 1) == 0) {
              func_0x00010b8b1d4c(&ppppplStack_120);
              func_0x000107c31088(&ppppplStack_c0,&UNK_10f7caea4);
              FUN_10b99fa14(&ppppplStack_d8,&ppppplStack_120,&ppppplStack_c0);
              pppppplVar17 = (long ******)ppppplStack_d8;
              ppppplStack_d8 = (long *****)0x0;
              func_0x000107c278f8(ppppplStack_c0);
              func_0x000104bda960(ppppplStack_120);
              goto LAB_10b8b164c;
            }
            func_0x00010b8b1d14();
            func_0x00010812e298();
            pppppplVar18 = (long ******)0x0;
            unaff_x26 = pppppplVar6;
            if (((ulong)pppppplVar17 & 1) == 0) {
              func_0x00010b8b1d14();
              func_0x00010812e298();
              if (((ulong)pppppplVar17 & 1) == 0) {
                func_0x00010b8b1d14();
                func_0x00010812e298();
                if (((ulong)pppppplVar17 & 1) == 0) {
                  func_0x00010b8b1d14();
                  func_0x00010b8b1c98();
                  if (((ulong)pppppplVar17 & 1) != 0) {
                    iVar4 = 1;
                    goto LAB_10b8b10dc;
                  }
                  func_0x00010b8b1d14();
                  func_0x00010b8b1c98();
                  if (((ulong)pppppplVar17 & 1) == 0) {
                    func_0x000107c31084();
                    ppppplStack_120 = (long *****)pppppplVar6;
                    ppppplStack_118 = ppppplVar1;
                    func_0x000107c2793c(&UNK_10f7caec4);
                    func_0x000107c3173c(&ppppplStack_d8);
                    func_0x000107c31080(auStack_160,pppppplVar17,&ppppplStack_d8);
                    FUN_10b99f560(&ppppplStack_120,auStack_160);
                    pppppplVar17 = (long ******)ppppplStack_120;
                    ppppplStack_120 = (long *****)0x0;
                    func_0x00010b8b1ce4();
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                              (&ppppplStack_d8);
                    goto LAB_10b8b164c;
                  }
                  iVar4 = 2;
                  pppppplVar18 = (long ******)0x3fe0000000000000;
                }
                else {
                  iVar4 = 1;
                }
              }
              else {
                iVar4 = 0;
LAB_10b8b10dc:
                pppppplVar18 = (long ******)0x3ff0000000000000;
              }
            }
            else {
              iVar4 = 0;
            }
            if (iVar13 == 2) {
              puVar8 = &UNK_10f7caee9;
LAB_10b8b1640:
              FUN_10b99f5f8(&ppppplStack_d8,puVar8);
              pppppplVar17 = (long ******)ppppplStack_d8;
              goto LAB_10b8b164c;
            }
            if (iVar4 == 1) {
              if (bVar11) {
                puVar8 = &UNK_10f7caf5d;
                goto LAB_10b8b1640;
              }
              bVar11 = true;
              unaff_d8 = pppppplVar18;
            }
            else if (iVar4 == 0) {
              if (bVar12) {
                puVar8 = &UNK_10f7caf26;
                goto LAB_10b8b1640;
              }
              bVar12 = true;
              unaff_d9 = pppppplVar18;
            }
            func_0x00010b8b1cec();
            if (((ulong)pppppplVar17 & 1) == 0) goto LAB_10b8b14fc;
            iVar13 = iVar13 + 1;
          }
          pppppplVar6 = unaff_x26;
          if (iVar13 == 0) {
            FUN_10b99f5f8(&ppppplStack_108,&UNK_10f7caee9);
            pppppplVar17 = (long ******)ppppplStack_108;
LAB_10b8b164c:
            lVar10 = 2;
          }
          else {
LAB_10b8b14fc:
            uVar7 = 0;
            func_0x000107c31094();
            if ((uVar7 & 1) == 0) {
              func_0x00010b8b1d4c(&ppppplStack_d8);
              func_0x000107c31088(&ppppplStack_120,&UNK_10f7caf92);
              FUN_10b99fa14(&ppppplStack_108,&ppppplStack_d8,&ppppplStack_120);
              pppppplVar17 = (long ******)ppppplStack_108;
              ppppplStack_108 = (long *****)0x0;
              func_0x000107c278f8(ppppplStack_120);
              func_0x000104bda960(ppppplStack_d8);
              unaff_x26 = pppppplVar6;
              goto LAB_10b8b1198;
            }
            pppppplVar17 = (long ******)((double)unaff_d9 * dVar20);
            ppppplStack_188 = (long *****)((double)unaff_d8 * dVar22);
            uVar9 = 0;
            if ((double)unaff_d8 == 0.5) {
              uVar9 = (uint)((double)unaff_d9 == 0.5);
            }
            unaff_x26 = (long ******)(ulong)uVar9;
            lVar10 = 1;
          }
        }
        else {
          pppppplVar6 = &ppppplStack_108;
          FUN_10b8b1764(pppppplVar6,&ppppplStack_158);
          pppppplVar17 = (long ******)ppppplStack_100;
          uVar3 = (long ******)ppppplStack_108 == (long ******)0x1;
          if ((bool)uVar3) {
            func_0x00010b8b1cec();
            if (((ulong)pppppplVar6 & 1) == 0) {
              FUN_10b99f5f8(&ppppplStack_d8,&UNK_10f7cafb8);
              pppppplVar17 = (long ******)ppppplStack_d8;
              goto LAB_10b8b1470;
            }
            FUN_10b8b1764(&ppppplStack_d8,&ppppplStack_158);
            func_0x00010b8b1c78();
            pppppplVar17 = (long ******)ppppplStack_d0;
            if ((bool)uVar3) {
              func_0x00010b8b1cec();
              uVar7 = 0;
              func_0x000107c31094();
              if ((uVar7 & 1) == 0) {
                func_0x00010b8b1d4c(&ppppplStack_c0);
                func_0x000107c31088(auStack_160,&UNK_10f7cb001);
                func_0x00010b8b1d54(&ppppplStack_120);
                pppppplVar17 = (long ******)ppppplStack_120;
                ppppplStack_120 = (long *****)0x0;
                func_0x00010b8b1ce4();
                func_0x000104bda960(ppppplStack_c0);
                goto LAB_10b8b168c;
              }
              pppppplVar17 = (long ******)ppppplStack_100;
              if ((int)ppppplStack_f8 == 3) {
                pppppplVar17 = (long ******)((double)ppppplStack_100 * dVar20);
                func_0x00010b8b1d04();
              }
              ppppplStack_188 = ppppplStack_d0;
              if (iStack_c8 == 3) {
                ppppplStack_188 = (long *****)(((double)ppppplStack_d0 * dVar22) / 100.0);
              }
              uVar9 = 0;
              if ((double)ppppplStack_188 == dVar22 * 0.5) {
                uVar9 = (uint)((double)pppppplVar17 == dVar20 * 0.5);
              }
              unaff_x26 = (long ******)(ulong)uVar9;
              lVar10 = 1;
            }
            else {
              ppppplStack_d0 = (long *****)0x0;
LAB_10b8b168c:
              lVar10 = 2;
            }
            FUN_10b8b17e8(&ppppplStack_d8);
          }
          else {
            ppppplStack_100 = (long *****)0x0;
LAB_10b8b1470:
            lVar10 = 2;
          }
          FUN_10b8b17e8(&ppppplStack_108);
        }
      }
      else {
        FUN_10b99f5f8(&ppppplStack_108,&UNK_10f7cae84);
        pppppplVar17 = (long ******)ppppplStack_108;
LAB_10b8b1198:
        lVar10 = 2;
      }
      func_0x000107c310b8(&dStack_140);
      func_0x000107c278f8(lStack_168);
      uVar3 = 0;
      if (lVar10 == 1) goto LAB_10b8b0a48;
    }
    else {
      func_0x00010b8b1cc4();
      pppppplVar17 = (long ******)ppppplStack_158;
    }
    *param_1 = 2;
    param_1[1] = pppppplVar17;
    goto LAB_10b8b0a90;
  }
  pppppplVar17 = (long ******)(dVar20 * 0.5);
  ppppplStack_188 = (long *****)(dVar22 * 0.5);
  unaff_x26 = (long ******)0x1;
LAB_10b8b0a48:
  if (((ulong)ppppplVar15[6] & 0xfe) == 2) {
    FUN_10b9a9358(&lStack_168,ppppplVar15 + 5);
    if (lStack_168 == 0) {
      ppppplStack_108 = (long *****)&UNK_10f7d0ef0;
      ppppplStack_100 = (long *****)0x0;
    }
    else {
      ppppplStack_108 = (long *****)(lStack_168 + 0x18);
      ppppplStack_100 = (long *****)(ulong)*(uint *)(lStack_168 + 0xc);
    }
    ppppplStack_f8 = (long *****)0x0;
    auStack_f0[0] = 0;
    uStack_e0 = 0;
    func_0x00010b8b1ca0();
    pppppplVar6 = &ppppplStack_108;
    func_0x000107c310a8(pppppplVar6,"none",4);
    if (((ulong)pppppplVar6 & 1) == 0) {
      iVar13 = 0;
      ppppplStack_178 = (long *****)0x0;
      ppppplStack_198 = (long *****)0x0;
      ppppplStack_1a0 = (long *****)0x3ff0000000000000;
      pppppplVar16 = (long ******)0x0;
      ppppplStack_170 = (long *****)0x0;
      unaff_d8 = (long ******)0x3ff0000000000000;
      pppppplVar18 = (long ******)0x0;
      pppppplVar19 = (long ******)0x0;
      pppppplVar6 = (long ******)0x3ff0000000000000;
      dStack_190 = dVar22;
      dStack_180 = dVar20;
      while (uVar3 = ppppplStack_f8 == ppppplStack_100, ppppplStack_f8 < ppppplStack_100) {
        func_0x00010b9a71b4(&ppppplStack_120,&ppppplStack_108);
        if ((bStack_110 & 1) == 0) {
LAB_10b8b11b4:
          func_0x00010b8b1d3c(&ppppplStack_d8);
          func_0x000107c31088(&ppppplStack_c0,&UNK_10f7cb086);
          FUN_10b99fa14(&ppppplStack_158,&ppppplStack_d8,&ppppplStack_c0);
          param_3 = (long ******)ppppplStack_158;
          ppppplStack_158 = (long *****)0x0;
          func_0x000107c278f8(ppppplStack_c0);
          pppppplVar17 = (long ******)ppppplStack_d8;
LAB_10b8b1350:
          func_0x000104bda960(pppppplVar17);
          goto LAB_10b8b1354;
        }
        pppppplVar5 = &ppppplStack_108;
        func_0x000107c310a4(pppppplVar5,0x28);
        if (((ulong)pppppplVar5 & 1) == 0) goto LAB_10b8b11b4;
        func_0x00010b8b1ca0();
        pppppplVar14 = (long ******)ppppplStack_118;
        ppppplVar15 = ppppplStack_120;
        func_0x00010b8b1c84();
        func_0x00010812e298();
        if ((int)pppppplVar5 == 0) {
          func_0x00010b8b1c84();
          func_0x00010812e298();
          if ((int)pppppplVar5 == 0) {
            func_0x00010b8b1c84();
            func_0x00010812e298();
            if ((int)pppppplVar5 != 0) {
              func_0x00010b8b1d68(&ppppplStack_d8);
              func_0x00010b8b1c78();
              if (!(bool)uVar3) goto LAB_10b8b0e74;
              func_0x00010b8b1d20();
              ppppplStack_150 = (long *****)0x3ff0000000000000;
              ppppplStack_130 = ppppplStack_198;
              ppppplStack_138 = ppppplStack_1a0;
              ppppplStack_128 = (long *****)pppppplVar16;
              goto LAB_10b8b0da0;
            }
            func_0x00010b8b1c84();
            func_0x00010812e298();
            if ((int)pppppplVar5 != 0) {
              func_0x00010b8b1c4c();
              func_0x00010b8b1c78();
              pppppplVar16 = (long ******)ppppplStack_d0;
              if ((bool)uVar3) {
                iVar4 = (int)&ppppplStack_108;
                FUN_10b8b1944();
                unaff_d9 = pppppplVar16;
                if (iVar4 != 0) {
                  FUN_10b8b19b0(&ppppplStack_c0,&ppppplStack_108);
                  ppppplVar15 = ppppplStack_c0;
                  unaff_d9 = (long ******)ppppplStack_b8;
                  if ((long ******)ppppplStack_c0 != (long ******)0x1) {
                    func_0x00010b8b1d7c();
                    unaff_d9 = pppppplVar16;
                  }
                  func_0x00010b8b1d60();
                  pppppplVar16 = (long ******)ppppplStack_d0;
                  if ((long ******)ppppplVar15 != (long ******)0x1) goto LAB_10b8b0e34;
                }
                ppppplStack_148 = (long *****)0x0;
                dStack_140 = 0.0;
                ppppplStack_130 = (long *****)0x0;
                ppppplStack_128 = (long *****)0x0;
                ppppplStack_158 = (long *****)0x1;
                ppppplStack_150 = (long *****)pppppplVar16;
                ppppplStack_138 = (long *****)unaff_d9;
                goto LAB_10b8b0e34;
              }
              goto LAB_10b8b0dfc;
            }
            func_0x00010b8b1c84();
            func_0x00010b8b1c98();
            if ((int)pppppplVar5 != 0) {
              func_0x00010b8b1c4c();
              func_0x00010b8b1c78();
              if (!(bool)uVar3) goto LAB_10b8b0e74;
              func_0x00010b8b1d20();
              ppppplStack_130 = (long *****)0x0;
              ppppplStack_128 = (long *****)0x0;
              ppppplStack_138 = (long *****)0x3ff0000000000000;
              ppppplStack_150 = (long *****)pppppplVar16;
              goto LAB_10b8b0da0;
            }
            func_0x00010b8b1c84();
            func_0x00010b8b1c98();
            if ((int)pppppplVar5 != 0) {
              func_0x00010b8b1c4c();
              func_0x00010b8b1c78();
              if ((bool)uVar3) {
                func_0x00010b8b1d20();
                ppppplStack_130 = (long *****)0x0;
                ppppplStack_128 = (long *****)0x0;
                ppppplStack_150 = (long *****)0x3ff0000000000000;
                pppppplVar14 = (long ******)0x1;
                ppppplStack_158 = (long *****)pppppplVar14;
                ppppplStack_138 = (long *****)pppppplVar16;
              }
              else {
                func_0x00010b8b1d90();
                ppppplStack_158 = (long *****)pppppplVar14;
              }
              goto LAB_10b8b0e78;
            }
            func_0x00010b8b1c84();
            func_0x00010b8b1c98();
            if ((int)pppppplVar5 == 0) {
              func_0x00010b8b1c84();
              func_0x00010812e298();
              if ((int)pppppplVar5 == 0) {
                func_0x000107c31084();
                ppppplStack_c0 = ppppplVar15;
                ppppplStack_b8 = (long *****)pppppplVar14;
                ppppplStack_1a8 = (long *****)pppppplVar5;
                func_0x000107c2793c(&UNK_10f7cb118);
                func_0x000107c3173c(&ppppplStack_d8);
                func_0x000107c31080(auStack_160,ppppplStack_1a8,&ppppplStack_d8);
                FUN_10b99f560(&ppppplStack_c0,auStack_160);
                ppppplStack_158 = (long *****)0x2;
                ppppplStack_150 = ppppplStack_c0;
                ppppplStack_c0 = (long *****)0x0;
                func_0x00010b8b1ce4();
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                          (&ppppplStack_d8);
                pppppplVar14 = (long ******)ppppplStack_158;
                goto LAB_10b8b0e7c;
              }
            }
            FUN_10b8b1800(&ppppplStack_158,&ppppplStack_108);
            pppppplVar14 = (long ******)ppppplStack_158;
          }
          else {
            func_0x00010b8b1cd4();
            func_0x00010b8b1c78();
            if ((bool)uVar3) {
              func_0x00010b8b1d20();
              ppppplStack_150 = (long *****)0x3ff0000000000000;
              ppppplStack_138 = (long *****)0x3ff0000000000000;
              ppppplStack_128 = (long *****)0x0;
              ppppplStack_130 = (long *****)pppppplVar16;
LAB_10b8b0da0:
              pppppplVar14 = (long ******)0x1;
            }
            else {
LAB_10b8b0e74:
              func_0x00010b8b1d90();
            }
LAB_10b8b0e78:
            func_0x00010b8b1d34();
          }
        }
        else {
          func_0x00010b8b1cd4();
          func_0x00010b8b1c78();
          if ((bool)uVar3) {
            iVar4 = (int)&ppppplStack_108;
            FUN_10b8b1944();
            unaff_d9 = (long ******)0x0;
            if (iVar4 != 0) {
              func_0x00010b8b1d68(&ppppplStack_c0);
              ppppplVar15 = ppppplStack_c0;
              unaff_d9 = (long ******)ppppplStack_b8;
              if ((long ******)ppppplStack_c0 != (long ******)0x1) {
                func_0x00010b8b1d7c();
                unaff_d9 = (long ******)0x0;
              }
              func_0x00010b8b1d60();
              if ((long ******)ppppplVar15 != (long ******)0x1) goto LAB_10b8b0e34;
            }
            func_0x00010b8b1d20();
            ppppplStack_158 = (long *****)0x1;
            ppppplStack_150 = (long *****)0x3ff0000000000000;
            ppppplStack_138 = (long *****)0x3ff0000000000000;
            ppppplStack_130 = (long *****)pppppplVar16;
            ppppplStack_128 = (long *****)unaff_d9;
          }
          else {
LAB_10b8b0dfc:
            ppppplStack_158 = (long *****)0x2;
            ppppplStack_150 = ppppplStack_d0;
            ppppplStack_d0 = (long *****)0x0;
          }
LAB_10b8b0e34:
          func_0x00010b8b1d34();
          pppppplVar14 = (long ******)ppppplStack_158;
        }
LAB_10b8b0e7c:
        param_3 = (long ******)ppppplStack_150;
        dVar20 = dStack_180;
        dVar22 = dStack_190;
        if (pppppplVar14 != (long ******)0x1) {
          if (pppppplVar14 == (long ******)0x2) {
            func_0x00010b8b1ca8();
          }
          goto LAB_10b8b11ac;
        }
        func_0x00010b8b1ca0();
        pppppplVar16 = &ppppplStack_108;
        func_0x000107c310a4(pppppplVar16,0x29);
        if (((ulong)pppppplVar16 & 1) == 0) {
          func_0x00010b8b1d3c(&ppppplStack_c0);
          func_0x000107c31088(auStack_160,&UNK_10f7cb0a1);
          func_0x00010b8b1d54(&ppppplStack_d8);
          param_3 = (long ******)ppppplStack_d8;
          ppppplStack_d8 = (long *****)0x0;
          func_0x00010b8b1ce4();
          pppppplVar17 = (long ******)ppppplStack_c0;
          goto LAB_10b8b1350;
        }
        unaff_d9 = (long ******)
                   ((double)pppppplVar18 * (double)ppppplStack_148 +
                   (double)ppppplStack_150 * (double)pppppplVar6);
        dVar21 = (double)unaff_d8 * (double)ppppplStack_148;
        dVar22 = (double)ppppplStack_150 * (double)pppppplVar19;
        dVar23 = (double)pppppplVar18 * (double)ppppplStack_138;
        dVar20 = dStack_140 * (double)pppppplVar6;
        unaff_d11 = (long ******)
                    ((double)unaff_d8 * (double)ppppplStack_138 + dStack_140 * (double)pppppplVar19)
        ;
        ppppplStack_178 =
             (long *****)
             ((double)ppppplStack_178 +
             (double)pppppplVar18 * (double)ppppplStack_128 +
             (double)ppppplStack_130 * (double)pppppplVar6);
        pppppplVar16 = (long ******)
                       ((double)unaff_d8 * (double)ppppplStack_128 +
                       (double)ppppplStack_130 * (double)pppppplVar19);
        ppppplStack_170 = (long *****)((double)ppppplStack_170 + (double)pppppplVar16);
        func_0x00010b8b1ca0();
        iVar13 = iVar13 + -1;
        unaff_d8 = unaff_d11;
        pppppplVar18 = (long ******)(dVar23 + dVar20);
        pppppplVar19 = (long ******)(dVar21 + dVar22);
        pppppplVar6 = unaff_d9;
      }
      if (iVar13 == 0) {
        func_0x00010b8b1cc4();
        param_3 = (long ******)ppppplStack_158;
LAB_10b8b1354:
        lVar10 = 2;
        dVar20 = dStack_180;
        dVar22 = dStack_190;
      }
      else {
        pppppplVar16 = pppppplVar6;
        _hypot(pppppplVar6,pppppplVar19);
        unaff_d9 = (long ******)0x3ee4f8b588e368f1;
        if (1e-05 <= ABS((double)pppppplVar16)) {
          if (ABS((double)unaff_d8 * (double)pppppplVar19 +
                  (double)pppppplVar18 * (double)pppppplVar6) <= 1e-05) {
            ppppplStack_1a8 =
                 (long *****)
                 ((-((double)pppppplVar18 * (double)pppppplVar19) +
                  (double)unaff_d8 * (double)pppppplVar6) / (double)pppppplVar16);
            ppppplStack_1a0 = (long *****)pppppplVar16;
            goto LAB_10b8b1608;
          }
          func_0x00010b8b1cc4();
          lVar10 = 2;
          param_3 = (long ******)ppppplStack_158;
          dVar20 = dStack_180;
          dVar22 = dStack_190;
        }
        else {
          pppppplVar16 = pppppplVar18;
          _hypot(pppppplVar18,unaff_d8);
          ppppplStack_1a0 = (long *****)0x0;
          if (1e-05 <= ABS((double)pppppplVar16)) {
            pppppplVar19 = (long ******)-(double)pppppplVar18;
            pppppplVar6 = unaff_d8;
            ppppplStack_1a8 = (long *****)pppppplVar16;
LAB_10b8b1608:
            _atan2(pppppplVar19,pppppplVar6);
          }
          else {
            ppppplStack_1a8 = (long *****)0x0;
            pppppplVar19 = (long ******)0x0;
          }
          lVar10 = 1;
          param_3 = (long ******)ppppplStack_178;
          unaff_d8 = pppppplVar17;
          unaff_d9 = (long ******)ppppplStack_170;
          unaff_d11 = pppppplVar19;
          dVar20 = dStack_180;
          dVar22 = dStack_190;
        }
      }
    }
    else {
      func_0x00010b8b1ca0();
      uVar7 = 0;
      func_0x000107c31094();
      if ((uVar7 & 1) == 0) {
        func_0x00010b8b1d3c(&ppppplStack_158);
        param_3 = (long ******)ppppplStack_158;
LAB_10b8b11ac:
        lVar10 = 2;
      }
      else {
        ppppplStack_1a8 = (long *****)0x3ff0000000000000;
        ppppplStack_1a0 = (long *****)0x3ff0000000000000;
        lVar10 = 1;
        param_3 = (long ******)0x0;
        unaff_d8 = pppppplVar17;
        unaff_d9 = (long ******)0x0;
        unaff_d11 = (long ******)0x0;
      }
    }
    func_0x000107c310b8(auStack_f0);
    func_0x000107c278f8(lStack_168);
  }
  else {
    uVar3 = *(char *)(param_3 + 1) == '\t';
    if (((!(bool)uVar3) || (ppppplVar15 = *param_3, ppppplVar15 == (long *****)0x0)) ||
       (uVar3 = false, ppppplVar15[2] != (long ****)0x7)) {
      func_0x00010b8b1cc4();
      *param_1 = 2;
      param_1[1] = ppppplStack_158;
      goto LAB_10b8b0a90;
    }
    FUN_10b8b1a44(dVar20,&ppppplStack_158,ppppplVar15 + 7);
    param_3 = (long ******)ppppplStack_150;
    if ((long ******)ppppplStack_158 == (long ******)0x1) {
      FUN_10b8b1a44(dVar22,&ppppplStack_108,ppppplVar15 + 9);
      ppppplVar1 = ppppplStack_100;
      uVar3 = (long ******)ppppplStack_108 == (long ******)0x1;
      if ((bool)uVar3) {
        FUN_10b8b1af8(0x3ff0000000000000,&ppppplStack_d8,ppppplVar15 + 0xb);
        func_0x00010b8b1c78();
        pppppplVar6 = (long ******)ppppplStack_d0;
        if ((bool)uVar3) {
          ppppplStack_1a0 = ppppplStack_d0;
          FUN_10b8b1af8(0x3ff0000000000000,&ppppplStack_120,ppppplVar15 + 0xd);
          pppppplVar6 = (long ******)ppppplStack_118;
          if ((long ******)ppppplStack_120 == (long ******)0x1) {
            ppppplStack_1a8 = ppppplStack_118;
            FUN_10b8b1af8(0,&ppppplStack_c0,ppppplVar15 + 0xf);
            pppppplVar6 = (long ******)ppppplStack_b8;
            if ((long ******)ppppplStack_c0 == (long ******)0x1) {
              lVar10 = 1;
              pppppplVar6 = param_3;
              unaff_d8 = pppppplVar17;
              unaff_d11 = (long ******)ppppplStack_b8;
            }
            else {
              ppppplStack_b8 = (long *****)0x0;
              lVar10 = 2;
            }
            func_0x00010b8b1d60();
          }
          else {
            ppppplStack_118 = (long *****)0x0;
            lVar10 = 2;
          }
          FUN_10b8a6358(&ppppplStack_120);
        }
        else {
          ppppplStack_d0 = (long *****)0x0;
          lVar10 = 2;
        }
        func_0x00010b8b1d34();
        param_3 = pppppplVar6;
        unaff_d9 = (long ******)ppppplVar1;
      }
      else {
        ppppplStack_100 = (long *****)0x0;
        lVar10 = 2;
        param_3 = (long ******)ppppplVar1;
      }
      FUN_10b8a6358(&ppppplStack_108);
    }
    else {
      ppppplStack_150 = (long *****)0x0;
      lVar10 = 2;
    }
    FUN_10b8a6358(&ppppplStack_158);
  }
  ppppplVar15 = ppppplStack_188;
  uVar3 = lVar10 == 1;
  if ((bool)uVar3) {
    pppppplVar18 = (long ******)-(double)param_3;
    uVar3 = !bVar2;
    pppppplVar6 = (long ******)-(double)unaff_d11;
    pppppplVar17 = pppppplVar18;
    if ((bool)uVar3) {
      pppppplVar6 = unaff_d11;
      pppppplVar17 = param_3;
    }
    if (((ulong)unaff_x26 & 1) == 0) {
      uVar3 = !bVar2;
      pppppplVar19 = (long ******)(dVar20 - (double)unaff_d8);
      if ((bool)uVar3) {
        pppppplVar19 = unaff_d8;
      }
      dVar21 = dVar20 * 0.5 - (double)pppppplVar19;
      dVar23 = dVar22 * 0.5 - (double)ppppplStack_188;
      pppppplVar16 = pppppplVar6;
      ppppplStack_170 = (long *****)unaff_d9;
      ___sincos_stret(pppppplVar6);
      pppppplVar17 = (long ******)
                     (-(dVar23 * (double)ppppplStack_1a8 * (double)pppppplVar16) +
                      dVar21 * (double)ppppplStack_1a0 * (double)pppppplVar18 +
                     (((double)pppppplVar19 + (double)pppppplVar17) - dVar20 * 0.5));
      unaff_d9 = (long ******)
                 ((((double)ppppplVar15 + (double)ppppplStack_170) - dVar22 * 0.5) +
                 dVar23 * (double)ppppplStack_1a8 * (double)pppppplVar18 +
                 dVar21 * (double)ppppplStack_1a0 * (double)pppppplVar16);
    }
    FUN_10b8b1b20(pppppplVar17,unaff_d9,ppppplStack_1a0,ppppplStack_1a8,pppppplVar6,&ppppplStack_158
                 );
    func_0x000104bf351c(param_1,&ppppplStack_158);
    FUN_10b9a8d98(&ppppplStack_158);
  }
  else {
    *param_1 = 2;
    param_1[1] = param_3;
  }
LAB_10b8b0a90:
  func_0x00010b8b1c64(uStack_b0);
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1b8 = FUN_10b8b1764;
  ppppplStack_1d0 = (long *****)param_3;
  puStack_1c8 = param_1;
  puStack_1c0 = &stack0xfffffffffffffff0;
  func_0x00010b8b1cb0();
  if ((bStack_1d8 & 1) == 0) {
    func_0x00010b8b1c58();
    func_0x00010b8b1d44(&UNK_10f7cb028);
    func_0x00010b8b1c24();
    func_0x00010b8b1c34();
    func_0x000104bda960();
    func_0x00010b8b1d2c();
  }
  else {
    if (iStack_1e0 != 0) {
      *param_1 = 1;
      param_1[2] = CONCAT44(uStack_1dc,iStack_1e0);
      param_1[1] = uStack_1e8;
      return;
    }
    FUN_10b99f5f8(auStack_1f0,&UNK_10f7cb04a);
    func_0x00010b8b1c34();
  }
  func_0x000104bda960();
  return;
}



/* Entry: 10b8b1764; end: 10b8b17e7;  */

void FUN_10b8b1764(void)

{
  undefined8 *unaff_x19;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  int iStack_30;
  undefined4 uStack_2c;
  byte bStack_28;
  
  func_0x00010b8b1cb0();
  if ((bStack_28 & 1) == 0) {
    func_0x00010b8b1c58();
    func_0x00010b8b1d44(&UNK_10f7cb028);
    func_0x00010b8b1c24();
    func_0x00010b8b1c34();
    func_0x000104bda960();
    func_0x00010b8b1d2c();
  }
  else {
    if (iStack_30 != 0) {
      *unaff_x19 = 1;
      unaff_x19[2] = CONCAT44(uStack_2c,iStack_30);
      unaff_x19[1] = uStack_38;
      return;
    }
    FUN_10b99f5f8(auStack_40,&UNK_10f7cb04a);
    func_0x00010b8b1c34();
  }
  func_0x000104bda960();
  return;
}



/* Entry: 10b8b17e8; end: 10b8b17ff;  */

void FUN_10b8b17e8(long *param_1)

{
  if (*param_1 == 2) {
    func_0x0001003adc0c(param_1 + 1);
    func_0x000104bda960();
    return;
  }
  return;
}



/* Entry: 10b8b1800; end: 10b8b18bb;  */

void FUN_10b8b1800(double param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  double dVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 extraout_x8;
  undefined8 uStack_b8;
  double dStack_a8;
  int iStack_a0;
  byte bStack_98;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  double dStack_40;
  undefined8 uStack_38;
  
  uVar3 = (undefined4)((ulong)param_4 >> 0x20);
  uVar2 = (uint)param_4;
  func_0x00010b8b1cf4();
  dVar1 = (double)CONCAT44(uVar3,uVar2);
  uStack_38 = extraout_x8;
  FUN_10b989d0c();
  if ((uVar2 & 1) == 0) {
    func_0x00010b8b1c58();
    func_0x00010b8b1d44(&UNK_10f7cb16e);
    func_0x00010b8b1c24();
    uStack_48 = 2;
    func_0x00010b8b1ca8();
    func_0x00010b8b1d2c();
    func_0x000104bda960(uStack_58);
    *param_3 = 2;
    param_3[1] = uStack_50;
    dStack_40 = 0.0;
  }
  else {
    uStack_48 = 1;
    dStack_40 = dVar1;
    ___sincos_stret();
    *param_3 = 1;
    param_3[1] = param_2;
    param_3[2] = dVar1;
    param_3[3] = -dVar1;
    param_3[4] = param_2;
    param_3[5] = 0;
    param_3[6] = 0;
    param_1 = dVar1;
  }
  FUN_10b8a6358(&uStack_48);
  func_0x00010b8b1c64(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b8b1cb0();
  if ((bStack_98 & 1) == 0) {
    func_0x00010b8b1c58();
    func_0x00010b8b1d44(&UNK_10f7cb13c);
    func_0x00010b8b1c24();
    func_0x00010b8b1c34();
    func_0x000104bda960();
    func_0x00010b8b1d2c();
    func_0x000104bda960(uStack_b8);
  }
  else {
    if (iStack_a0 == 3) {
      dStack_a8 = param_1 * dStack_a8;
      func_0x00010b8b1d04();
    }
    *param_3 = 1;
    param_3[1] = dStack_a8;
  }
  return;
}



/* Entry: 10b8b18bc; end: 10b8b1943;  */

void FUN_10b8b18bc(double param_1)

{
  undefined8 *unaff_x19;
  undefined8 uStack_58;
  double dStack_48;
  int iStack_40;
  byte bStack_38;
  
  func_0x00010b8b1cb0();
  if ((bStack_38 & 1) == 0) {
    func_0x00010b8b1c58();
    func_0x00010b8b1d44(&UNK_10f7cb13c);
    func_0x00010b8b1c24();
    func_0x00010b8b1c34();
    func_0x000104bda960();
    func_0x00010b8b1d2c();
    func_0x000104bda960(uStack_58);
  }
  else {
    if (iStack_40 == 3) {
      dStack_48 = param_1 * dStack_48;
      func_0x00010b8b1d04();
    }
    *unaff_x19 = 1;
    unaff_x19[1] = dStack_48;
  }
  return;
}



/* Entry: 10b8b1944; end: 10b8b19af;  */

bool FUN_10b8b1944(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = param_1;
  func_0x000107c310ac();
  plVar2 = param_1;
  func_0x000107c310a0(param_1,0x2c);
  if ((int)plVar2 == 0) {
    if ((int)plVar1 == 0) {
      return false;
    }
    if ((ulong)param_1[2] < (ulong)param_1[1]) {
      return *(char *)(*param_1 + param_1[2]) != ')';
    }
  }
  else {
    func_0x000107c310ac(param_1);
  }
  return true;
}



/* Entry: 10b8b19b0; end: 10b8b1a43;  */

void FUN_10b8b19b0(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  
  uVar1 = param_2;
  uVar2 = param_2;
  FUN_10b9a6fe4();
  if ((uVar2 & 1) == 0) {
    FUN_10b9a6d50(&uStack_40,param_2);
    func_0x000107c31088(&uStack_48,&UNK_10f7cb155);
    FUN_10b99fa14(&uStack_38,&uStack_40,&uStack_48);
    uVar1 = uStack_38;
    uStack_38 = 0;
    func_0x00010b8b1ca8();
    func_0x000107c278f8(uStack_48);
    func_0x000104bda960(uStack_40);
    uVar3 = 2;
  }
  else {
    uVar3 = 1;
  }
  *param_1 = uVar3;
  param_1[1] = uVar1;
  return;
}



/* Entry: 10b8b1a44; end: 10b8b1af7;  */

void FUN_10b8b1a44(double param_1,undefined8 *param_2,long param_3)

{
  undefined1 uVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined4 uVar5;
  undefined8 extraout_x8;
  undefined8 uVar6;
  int extraout_w9;
  double dVar7;
  undefined8 uStack_c0;
  byte bStack_b0;
  long lStack_78;
  long lStack_50;
  double dStack_48;
  char cStack_40;
  undefined8 uStack_38;
  
  plVar4 = &lStack_50;
  puVar3 = param_2;
  func_0x00010b8b1cf4();
  uVar1 = *(byte *)(param_3 + 8) == 1;
  dVar7 = param_1;
  uStack_38 = extraout_x8;
  if (*(byte *)(param_3 + 8) < 2) {
    *param_2 = 1;
    param_2[1] = 0;
    plVar4 = puVar3;
  }
  else {
    func_0x00010b8b2370(&lStack_50,param_3);
    uVar1 = lStack_50 == 1;
    if ((bool)uVar1) {
      uVar1 = cStack_40 == '\x01';
      dVar7 = dStack_48;
      if ((bool)uVar1) {
        dVar7 = param_1 * dStack_48;
        func_0x00010b8b1d04();
      }
      *param_2 = 1;
      param_2[1] = dVar7;
    }
    else {
      *param_2 = 2;
      param_2[1] = dStack_48;
      dStack_48 = 0.0;
    }
    func_0x0001080cf3a4();
  }
  func_0x00010b8b1c64(uStack_38);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  if (*(byte *)(param_3 + 8) < 2) {
    *plVar4 = 1;
    plVar4[1] = (long)dVar7;
    return;
  }
  func_0x00010b8b2b34(plVar4,param_3);
  bVar2 = extraout_w9 == 4;
  if (bVar2) {
    FUN_10b9a92f0();
    *param_2 = 1;
    param_2[1] = dVar7;
  }
  else {
    func_0x00010b8b2b94();
    if (bVar2) {
      func_0x00010b8b2ba0();
      if (lStack_78 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)(lStack_78 + 0xc);
      }
      func_0x00010b8b2b0c(uVar5);
      FUN_10b989d9c();
      func_0x00010b8b2b74();
      FUN_10b8b2280();
      if ((bStack_b0 & 1) == 0) {
        func_0x00010b8b2b5c();
        func_0x00010b8b2ad4();
        uVar6 = 2;
      }
      else {
        param_2[1] = uStack_c0;
        uVar6 = 1;
      }
      *param_2 = uVar6;
      func_0x00010b8b2bcc();
      func_0x00010b8b2bbc();
    }
    else {
      func_0x00010b8b2be8();
      func_0x00010b8b2ae8();
    }
  }
  return;
}



/* Entry: 10b8b1af8; end: 10b8b1b1f;  */

void FUN_10b8b1af8(undefined8 param_1,undefined8 *param_2,long param_3)

{
  bool bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int extraout_w9;
  undefined8 *unaff_x19;
  undefined8 uStack_70;
  byte bStack_60;
  long lStack_28;
  
  if (*(byte *)(param_3 + 8) < 2) {
    *param_2 = 1;
    param_2[1] = param_1;
    return;
  }
  func_0x00010b8b2b34(param_2,param_3);
  bVar1 = extraout_w9 == 4;
  if (bVar1) {
    FUN_10b9a92f0();
    *unaff_x19 = 1;
    unaff_x19[1] = param_1;
  }
  else {
    func_0x00010b8b2b94();
    if (bVar1) {
      func_0x00010b8b2ba0();
      if (lStack_28 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined4 *)(lStack_28 + 0xc);
      }
      func_0x00010b8b2b0c(uVar2);
      FUN_10b989d9c();
      func_0x00010b8b2b74();
      FUN_10b8b2280();
      if ((bStack_60 & 1) == 0) {
        func_0x00010b8b2b5c();
        func_0x00010b8b2ad4();
        uVar3 = 2;
      }
      else {
        unaff_x19[1] = uStack_70;
        uVar3 = 1;
      }
      *unaff_x19 = uVar3;
      func_0x00010b8b2bcc();
      func_0x00010b8b2bbc();
    }
    else {
      func_0x00010b8b2be8();
      func_0x00010b8b2ae8();
    }
  }
  return;
}



/* Entry: 10b8b1b20; end: 10b8b1c23;  */

void FUN_10b8b1b20(undefined8 param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plStack_68;
  
  func_0x00010b9abe10(&plStack_68,5);
  func_0x00010b8b1ccc(plStack_68 + 3);
  func_0x00010b8b1c90();
  func_0x00010b8b1ccc(plStack_68 + 5);
  func_0x00010b8b1c90();
  func_0x00010b8b1ccc(plStack_68 + 7);
  func_0x00010b8b1c90();
  func_0x00010b8b1ccc(plStack_68 + 9);
  func_0x00010b8b1c90();
  func_0x00010b8b1ccc(plStack_68 + 0xb);
  func_0x00010b8b1c90();
  func_0x00010b9a8f84(param_1,&plStack_68);
  plVar1 = plStack_68 + 1;
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
    (**(code **)(*plStack_68 + 8))(plStack_68);
  }
  return;
}



/* Entry: 10b8b1c24; end: 10b8b1da3;  */

void FUN_10b8b1c24(void)

{
  int extraout_w11;
  long in_stack_00000000;
  
  if (in_stack_00000000 != 0) {
    do {
      func_0x00010b99fe60();
    } while (extraout_w11 != 0);
  }
  func_0x00010b99feb0();
  FUN_10b99f4e4();
  func_0x00010b99fe20();
  func_0x00010b99fdf8();
  return;
}



/* Entry: 10b8b1da4; end: 10b8b1e77;  */

void FUN_10b8b1da4(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_b8 [24];
  undefined8 uStack_a0;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  undefined1 auStack_60 [48];
  
  lVar1 = param_2;
  func_0x000107c31084();
  FUN_10b9a8d84(auStack_98,*(undefined1 *)(param_2 + 8));
  FUN_10b9a9358(&uStack_a0,param_2);
  FUN_10b9a8d84(auStack_b8,param_3);
  FUN_10b8b28d0(auStack_60,auStack_98,&uStack_a0,auStack_b8);
  func_0x000107c2793c(&UNK_10f7cb1ba);
  func_0x000107c3173c(auStack_80);
  func_0x000107c31080(&uStack_68,lVar1,auStack_80);
  FUN_10b99f560(param_1,&uStack_68);
  func_0x000107c278f8(uStack_68);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_80);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b8);
  func_0x000107c278f8(uStack_a0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_98);
  return;
}



/* Entry: 10b8b1e78; end: 10b8b1f9f;  */

void FUN_10b8b1e78(undefined8 *param_1,double param_2,long param_3)

{
  byte bVar1;
  undefined8 uStack_38;
  undefined2 uStack_30;
  undefined8 uStack_28;
  
  bVar1 = *(byte *)(param_3 + 8);
  if ((bVar1 & 0xfe) != 2) {
    if ((bVar1 & 0xfc) != 4) {
      func_0x00010b8b2ba8(&uStack_38,param_3);
      *param_1 = 2;
      param_1[1] = uStack_38;
      func_0x00010b8b2b00();
      return;
    }
    if (bVar1 == 6) {
      FUN_10b9a92f0(param_3);
      if (param_2 == (double)(int)param_2) {
        uStack_30 = 4;
        uStack_38 = CONCAT44(uStack_38._4_4_,(int)param_2);
        FUN_10b9a9358(&uStack_28,&uStack_38);
        *param_1 = 1;
        param_1[1] = uStack_28;
        uStack_28 = 0;
        func_0x000107c278f8(0);
        FUN_10b9a8d98(&uStack_38);
        return;
      }
    }
  }
  func_0x00010b8b2bb0();
  *param_1 = 1;
  param_1[1] = uStack_38;
  uStack_38 = 0;
  func_0x000107c278f8(0);
  return;
}



/* Entry: 10b8b1fa0; end: 10b8b20af;  */

undefined8 * FUN_10b8b1fa0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  ulong uVar1;
  undefined8 uStack_68;
  undefined2 uStack_60;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 **ppuStack_40;
  undefined *puStack_38;
  
  func_0x00010b8b2b94(*(undefined1 *)(param_3 + 8));
  if ((bool)in_ZR) {
    FUN_10b9a9358(&puStack_48,param_3);
    uVar1 = 0;
    FUN_10b98b110();
    if ((uVar1 & 1) == 0) {
      func_0x000107c31084();
      puStack_38 = &UNK_1003ab990;
      ppuStack_40 = &puStack_48;
      func_0x000107c2793c(&UNK_10f7cb1f2);
      func_0x000107c3173c(&uStack_68);
      func_0x000107c31080(&uStack_50,param_2,&uStack_68);
      FUN_10b99f560(&ppuStack_40,&uStack_50);
      *param_1 = 2;
      param_1[1] = ppuStack_40;
      ppuStack_40 = (undefined8 **)0x0;
      func_0x00010b8b2b2c();
      func_0x000107c278f8(uStack_50);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_68);
    }
    else {
      uStack_60 = 5;
      uStack_68 = param_2;
      func_0x000104bf351c(param_1,&uStack_68);
      FUN_10b9a8d98(&uStack_68);
    }
    func_0x000107c278f8(puStack_48);
    return puStack_48;
  }
  *param_1 = 1;
  FUN_10b9a8f04(param_1 + 1);
  return param_1;
}



/* Entry: 10b8b20b0; end: 10b8b2187;  */

void FUN_10b8b20b0(undefined8 param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int extraout_w9;
  undefined8 *unaff_x19;
  undefined8 auStack_88 [3];
  undefined1 auStack_70 [16];
  byte bStack_60;
  undefined8 uStack_58;
  undefined2 uStack_50;
  long lStack_28;
  
  func_0x00010b8b2b34();
  bVar1 = extraout_w9 == 4;
  if (bVar1) {
    FUN_10b9a9588();
    uStack_50 = 5;
    uStack_58 = param_1;
    func_0x000104bf351c();
    FUN_10b9a8d98(&uStack_58);
  }
  else {
    func_0x00010b8b2b94();
    if (bVar1) {
      func_0x00010b8b2ba0();
      if (lStack_28 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined4 *)(lStack_28 + 0xc);
      }
      func_0x00010b8b2b0c(uVar2);
      FUN_10b989b50();
      func_0x00010b8b2b74();
      FUN_10b8b2188();
      FUN_10b8ab934(auStack_88);
      if ((bStack_60 & 1) == 0) {
        func_0x00010b8b2b5c();
        *unaff_x19 = 2;
        unaff_x19[1] = auStack_88[0];
        func_0x00010b8b2b00();
      }
      else {
        func_0x00010b8a1764();
      }
      FUN_10b8ab934(auStack_70);
      func_0x00010b8b2bcc();
      func_0x00010b8b2bbc();
    }
    else {
      func_0x00010b8b2ba8(&uStack_58);
      func_0x00010b8b2ae8();
    }
  }
  return;
}



/* Entry: 10b8b2188; end: 10b8b21d3;  */

undefined1 * FUN_10b8b2188(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  if ((*(byte *)(param_3 + 0x10) & 1) != 0) {
    func_0x00010b8b2b44();
    func_0x00010b8b2bc4();
    if (((ulong)param_2 & 1) != 0) {
      *param_1 = 0;
      param_1[0x10] = 0;
      FUN_10b8b2960();
      return param_1;
    }
  }
  func_0x00010b8b2c14();
  return param_2;
}



/* Entry: 10b8b21d4; end: 10b8b227f;  */

void FUN_10b8b21d4(undefined8 param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int extraout_w9;
  undefined8 *unaff_x19;
  undefined8 uStack_70;
  byte bStack_60;
  long lStack_28;
  
  func_0x00010b8b2b34();
  bVar1 = extraout_w9 == 4;
  if (bVar1) {
    FUN_10b9a92f0();
    *unaff_x19 = 1;
    unaff_x19[1] = param_1;
  }
  else {
    func_0x00010b8b2b94();
    if (bVar1) {
      func_0x00010b8b2ba0();
      if (lStack_28 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined4 *)(lStack_28 + 0xc);
      }
      func_0x00010b8b2b0c(uVar2);
      FUN_10b989d9c();
      func_0x00010b8b2b74();
      FUN_10b8b2280();
      if ((bStack_60 & 1) == 0) {
        func_0x00010b8b2b5c();
        func_0x00010b8b2ad4();
        uVar3 = 2;
      }
      else {
        unaff_x19[1] = uStack_70;
        uVar3 = 1;
      }
      *unaff_x19 = uVar3;
      func_0x00010b8b2bcc();
      func_0x00010b8b2bbc();
    }
    else {
      func_0x00010b8b2be8();
      func_0x00010b8b2ae8();
    }
  }
  return;
}



/* Entry: 10b8b2280; end: 10b8b22bb;  */

void FUN_10b8b2280(uint param_1,long param_2)

{
  if ((*(byte *)(param_2 + 0x10) & 1) != 0) {
    func_0x00010b8b2b44();
    func_0x00010b8b2bc4();
    if ((param_1 & 1) != 0) {
      func_0x00010b8b2c00();
      return;
    }
  }
  func_0x00010b8b2c14();
  return;
}



/* Entry: 10b8b22bc; end: 10b8b241f;  */

void FUN_10b8b22bc(undefined1 param_1)

{
  uint extraout_w8;
  undefined8 uVar1;
  int extraout_w9;
  undefined8 *unaff_x19;
  undefined1 auStack_28 [8];
  
  func_0x00010b8b2b34();
  if (extraout_w9 == 4 || (extraout_w8 & 0xfe) == 2) {
    FUN_10b9a9608();
    *(undefined1 *)(unaff_x19 + 1) = param_1;
    uVar1 = 1;
  }
  else {
    FUN_10b8b1da4(auStack_28);
    func_0x00010b8b2ad4();
    uVar1 = 2;
  }
  *unaff_x19 = uVar1;
  return;
}



/* Entry: 10b8b2420; end: 10b8b245b;  */

void FUN_10b8b2420(uint param_1,long param_2)

{
  if ((*(byte *)(param_2 + 0x10) & 1) != 0) {
    func_0x00010b8b2b44();
    func_0x00010b8b2bc4();
    if ((param_1 & 1) != 0) {
      func_0x00010b8b2c00();
      return;
    }
  }
  func_0x00010b8b2c14();
  return;
}



/* Entry: 10b8b245c; end: 10b8b28cf;  */

undefined8 ****
FUN_10b8b245c(undefined8 *param_1,undefined8 ****param_2,undefined **param_3,undefined **param_4,
             undefined8 ****param_5)

{
  undefined8 ***pppuVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined8 ****ppppuVar5;
  undefined8 ****ppppuVar6;
  undefined8 uVar7;
  undefined8 *extraout_x8;
  long extraout_x8_00;
  byte *pbVar8;
  long extraout_x8_01;
  undefined8 *puVar9;
  undefined8 ****ppppuVar10;
  undefined8 uStack_138;
  undefined8 auStack_130 [3];
  undefined8 **ppuStack_118;
  undefined8 ***pppuStack_110;
  undefined8 ***pppuStack_108;
  undefined8 ***pppuStack_100;
  undefined8 ***pppuStack_f8;
  undefined1 auStack_f0 [16];
  undefined1 uStack_e0;
  undefined8 ***pppuStack_d8;
  undefined8 ***pppuStack_d0;
  undefined8 ***pppuStack_c8;
  undefined8 **appuStack_c0 [8];
  undefined8 ***pppuStack_80;
  undefined8 **ppuStack_78;
  undefined8 *puStack_70;
  undefined *puStack_68;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  bVar4 = *(char *)(param_2 + 1) == '\x0f';
  if (bVar4) {
    FUN_10b9a94ec(&pppuStack_d8,param_2);
    ppppuVar5 = (undefined8 ****)pppuStack_d8;
    if ((undefined8 ****)pppuStack_d8 == (undefined8 ****)0x0) {
      ppppuVar10 = (undefined8 ****)0x0;
    }
    else {
      param_3 = &PTR_DAT_110d7ebe8;
      param_4 = &PTR_DAT_110d70c98;
      param_5 = (undefined8 ****)0x0;
      ppppuVar10 = (undefined8 ****)pppuStack_d8;
      ___dynamic_cast();
      if ((ppppuVar10 != (undefined8 ****)0x0) &&
         (ppppuVar6 = ppppuVar10, FUN_10b9a5818(), ppppuVar5 = (undefined8 ****)pppuStack_d8,
         (int)ppppuVar6 == 0)) goto LAB_10b8b28cc;
    }
    func_0x000104bddf04();
    if (ppppuVar10 == (undefined8 ****)0x0) {
      func_0x00010b8b2ba8(&pppuStack_d8);
      ppppuVar10 = (undefined8 ****)pppuStack_d8;
      pppuStack_d8 = (undefined8 ****)0x0;
      func_0x00010b8b2b2c();
      uVar7 = 2;
    }
    else {
      uVar7 = 1;
      param_2 = ppppuVar5;
    }
    *param_1 = uVar7;
    param_1[1] = ppppuVar10;
    func_0x00010b8b2be0();
    ppppuVar6 = param_2;
  }
  else {
    func_0x00010b8b2b94();
    if (bVar4) {
      pppuStack_c8 = (undefined8 ****)0x4;
      pppuStack_d0 = (undefined8 ****)0x0;
      pppuStack_d8 = appuStack_c0;
      FUN_10b9a9358(&pppuStack_110);
      if ((undefined8 ****)pppuStack_110 == (undefined8 ****)0x0) {
        pppuStack_108 = (undefined8 ***)&UNK_10f7d0ef0;
        pppuStack_100 = (undefined8 ****)0x0;
      }
      else {
        pppuStack_108 = pppuStack_110 + 3;
        pppuStack_100 = (undefined8 ***)(ulong)*(uint *)((long)pppuStack_110 + 0xc);
      }
      pppuStack_f8 = (undefined8 ****)0x0;
      auStack_f0[0] = 0;
      uStack_e0 = 0;
      while (pppuStack_f8 < pppuStack_100) {
        func_0x00010b8b2310(&pppuStack_80,&pppuStack_108);
        if (((ulong)puStack_70 & 1) == 0) {
          FUN_10b9a6d50(auStack_130,&pppuStack_108);
          *param_1 = 2;
          param_1[1] = auStack_130[0];
          auStack_130[0] = 0;
          func_0x00010b8b2b2c();
          goto LAB_10b8b286c;
        }
        param_4 = (undefined **)(pppuStack_d8 + (long)pppuStack_d0 * 2);
        if (pppuStack_d0 == pppuStack_c8) {
          param_3 = (undefined **)&pppuStack_d8;
          param_5 = &pppuStack_80;
          FUN_10b8b2990(auStack_130);
        }
        else {
          param_4[1] = (undefined *)ppuStack_78;
          *param_4 = (undefined *)pppuStack_80;
          pppuStack_d0 = (undefined8 ***)((long)pppuStack_d0 + 1);
        }
        param_2 = &pppuStack_108;
        func_0x000107c310ac();
      }
      if ((long)pppuStack_d0 - 5U < 0xfffffffffffffffc) {
        func_0x000107c31084();
        pppuVar1 = pppuStack_d0;
        func_0x00010b8b2bb0();
        pppuStack_80 = pppuVar1;
        ppuStack_78 = (undefined8 ***)0x0;
        puStack_68 = &UNK_1003ab990;
        puStack_70 = &uStack_138;
        func_0x000107c2793c(&UNK_10f7cb20a);
        param_5 = &pppuStack_80;
        param_4 = (undefined **)0xf4;
        func_0x000107c3173c(auStack_130);
        func_0x000107c31080(&ppuStack_118,param_2,auStack_130);
        param_3 = (undefined **)&ppuStack_118;
        FUN_10b99f560(&pppuStack_80);
        *param_1 = 2;
        param_1[1] = pppuStack_80;
        pppuStack_80 = (undefined8 ****)0x0;
        func_0x00010b8b2b2c();
        func_0x000107c278f8(ppuStack_118);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_130);
        func_0x000107c278f8(uStack_138);
      }
      else {
        FUN_10b8ab674(&pppuStack_80);
        param_3 = (undefined **)*pppuStack_d8;
        param_4 = (undefined **)pppuStack_d8[1];
        if ((undefined8 ****)pppuStack_d0 == (undefined8 ****)0x1) {
          func_0x00010b8a8f24();
          ppppuVar6 = (undefined8 ****)pppuStack_80;
          if ((undefined8 ****)pppuStack_80 != (undefined8 ****)0x0) goto LAB_10b8b283c;
        }
        else {
          ppppuVar6 = (undefined8 ****)pppuStack_80;
          if ((undefined8 ****)pppuStack_d0 == (undefined8 ****)0x3) {
            func_0x00010b8b2b84();
            pbVar8 = (byte *)(extraout_x8_00 + 0x18);
            bVar2 = *pbVar8;
            puVar9 = (undefined8 *)(extraout_x8_00 + 0x10);
            ppppuVar6[4] = (undefined8 ***)*puVar9;
            *(byte *)((long)ppppuVar6 + 0x39) = bVar2 & 1;
            bVar2 = *(byte *)(extraout_x8_00 + 0x28);
            ppppuVar6[5] = *(undefined8 ****)(extraout_x8_00 + 0x20);
            *(byte *)((long)ppppuVar6 + 0x3a) = bVar2 & 1;
          }
          else if ((undefined8 ****)pppuStack_d0 == (undefined8 ****)0x2) {
            func_0x00010b8b2b84();
            puVar9 = extraout_x8 + 2;
            pbVar8 = (byte *)(extraout_x8 + 3);
            bVar2 = *pbVar8;
            ppppuVar6[4] = (undefined8 ***)*puVar9;
            *(byte *)((long)ppppuVar6 + 0x39) = bVar2 & 1;
            bVar2 = *(byte *)(extraout_x8 + 1);
            ppppuVar6[5] = (undefined8 ***)*extraout_x8;
            *(byte *)((long)ppppuVar6 + 0x3a) = bVar2 & 1;
          }
          else {
            func_0x00010b8b2b84();
            bVar2 = *(byte *)(extraout_x8_01 + 0x18);
            ppppuVar6[4] = *(undefined8 ****)(extraout_x8_01 + 0x10);
            *(byte *)((long)ppppuVar6 + 0x39) = bVar2 & 1;
            bVar2 = *(byte *)(extraout_x8_01 + 0x28);
            ppppuVar6[5] = *(undefined8 ****)(extraout_x8_01 + 0x20);
            *(byte *)((long)ppppuVar6 + 0x3a) = bVar2 & 1;
            puVar9 = (undefined8 *)(extraout_x8_01 + 0x30);
            pbVar8 = (byte *)(extraout_x8_01 + 0x38);
          }
          bVar2 = *pbVar8;
          ppppuVar6[6] = (undefined8 ***)*puVar9;
          *(byte *)((long)ppppuVar6 + 0x3b) = bVar2 & 1;
LAB_10b8b283c:
          if (ppppuVar6[2] != (undefined8 ***)0x0) {
            pppuVar1 = ppppuVar6[2] + 1;
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
              if (bVar4) {
                *pppuVar1 = (undefined8 **)((long)*pppuVar1 + 1);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
        }
        *param_1 = 1;
        param_1[1] = ppppuVar6;
        func_0x00010b8b2be0();
        func_0x0001080cf29c(pppuStack_80);
      }
LAB_10b8b286c:
      func_0x000107c310b8(auStack_f0);
      func_0x000107c278f8();
      ppppuVar6 = (undefined8 ****)pppuStack_110;
      if (((undefined8 ****)pppuStack_c8 != (undefined8 ****)0x0) &&
         (ppppuVar6 = (undefined8 ****)pppuStack_d8, appuStack_c0 != pppuStack_d8)) {
        __ZdlPv();
      }
    }
    else {
      func_0x00010b8b2370(&pppuStack_108,param_2);
      ppppuVar5 = (undefined8 ****)pppuStack_f8;
      ppppuVar6 = (undefined8 ****)pppuStack_100;
      if ((undefined8 ****)pppuStack_108 == (undefined8 ****)0x1) {
        uVar7 = 1;
        FUN_10b8aba60(&pppuStack_d8,1);
        pppuStack_c8[2] = (undefined8 ***)0x0;
        *pppuStack_c8 = (undefined8 **)&PTR_FUN_110d70da0;
        pppuStack_c8[1] = (undefined8 ***)0x0;
        func_0x00010b8a8f00(pppuStack_c8 + 3,ppppuVar6);
        param_3 = (undefined **)pppuStack_c8;
        pppuStack_c8 = (undefined8 ****)0x0;
        FUN_10b8aba44(&pppuStack_80,param_3 + 3);
        FUN_10b8abb60(&pppuStack_d8);
        ppppuVar6 = (undefined8 ****)pppuStack_80;
        func_0x00010b8b2be0();
        param_4 = (undefined **)ppppuVar5;
      }
      else {
        pppuStack_100 = (undefined8 ****)0x0;
        uVar7 = 2;
      }
      *param_1 = uVar7;
      param_1[1] = ppppuVar6;
      ppppuVar6 = &pppuStack_108;
      func_0x0001080cf3a4();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return ppppuVar6;
  }
  ___stack_chk_fail();
LAB_10b8b28cc:
  FUN_10b9a5890();
  ppppuVar5 = (undefined8 ****)param_3;
  func_0x000107c27e5c();
  ppppuVar10 = ppppuVar5;
  func_0x000107c27e5c();
  *ppppuVar6 = (undefined8 ***)param_3;
  ppppuVar6[1] = ppppuVar5;
  ppppuVar6[2] = (undefined8 ***)param_4;
  ppppuVar6[3] = (undefined8 ***)&UNK_1003ab990;
  ppppuVar6[4] = param_5;
  ppppuVar6[5] = ppppuVar10;
  return ppppuVar6;
}



/* Entry: 10b8b28d0; end: 10b8b2933;  */

undefined8 *
FUN_10b8b28d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2;
  func_0x000107c27e5c();
  uVar2 = uVar1;
  func_0x000107c27e5c();
  *param_1 = param_2;
  param_1[1] = uVar1;
  param_1[2] = param_3;
  param_1[3] = &UNK_1003ab990;
  param_1[4] = param_4;
  param_1[5] = uVar2;
  return param_1;
}



/* Entry: 10b8b2934; end: 10b8b295f;  */

undefined1 * FUN_10b8b2934(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x10] = 0;
  FUN_10b8b2960();
  return param_1;
}



/* Entry: 10b8b2960; end: 10b8b2973;  */

void FUN_10b8b2960(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    func_0x00010b9a8fa8();
    *(undefined1 *)(param_1 + 0x10) = 1;
    return;
  }
  return;
}



/* Entry: 10b8b2974; end: 10b8b298f;  */

void FUN_10b8b2974(long param_1)

{
  func_0x00010b9a8fa8();
  *(undefined1 *)(param_1 + 0x10) = 1;
  return;
}



/* Entry: 10b8b2990; end: 10b8b2ad3;  */

/* WARNING: Removing unreachable block (ram,0x000104bda964) */
/* WARNING: Removing unreachable block (ram,0x000104bda968) */
/* WARNING: Removing unreachable block (ram,0x000104bda970) */
/* WARNING: Removing unreachable block (ram,0x000104bda978) */
/* WARNING: Removing unreachable block (ram,0x000104bda97c) */

void FUN_10b8b2990(long *param_1,long *param_2,long param_3,undefined8 *param_4)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long *unaff_x19;
  long unaff_x27;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  uVar3 = param_2[2];
  uVar1 = param_2[1] + 1;
  if (uVar1 - uVar3 <= 0x7ffffffffffffff - uVar3) {
    if (uVar3 >> 0x3d == 0) {
      uVar6 = (uVar3 << 3) / 5;
    }
    else {
      uVar6 = uVar3 << 3;
      if (4 < uVar3 >> 0x3d) {
        uVar6 = 0xffffffffffffffff;
      }
    }
    if (0x7fffffffffffffe < uVar6) {
      uVar6 = 0x7ffffffffffffff;
    }
    uVar3 = uVar1;
    if (uVar1 <= uVar6) {
      uVar3 = uVar6;
    }
    unaff_x19 = param_1;
    if (uVar1 >> 0x3b == 0) {
      lVar7 = *param_2;
      puVar4 = (undefined8 *)(uVar3 << 4);
      __Znwm();
      plVar2 = (long *)*param_2;
      lVar8 = param_2[1];
      puVar5 = puVar4;
      if ((plVar2 != (long *)0x0) && (plVar2 != (long *)param_3)) {
        _memmove(puVar4,plVar2,param_3 - (long)plVar2);
        puVar5 = (undefined8 *)((long)puVar4 + (param_3 - (long)plVar2));
      }
      uVar9 = *param_4;
      puVar5[1] = param_4[1];
      *puVar5 = uVar9;
      if ((param_3 != 0) && ((long *)param_3 != plVar2 + lVar8 * 2)) {
        _memmove(puVar5 + 2,param_3,(long)(plVar2 + lVar8 * 2) - param_3);
      }
      if ((plVar2 != (long *)0x0) && (param_2 + 3 != plVar2)) {
        __ZdlPv(plVar2);
        lVar8 = param_2[1];
      }
      *param_2 = (long)puVar4;
      param_2[1] = lVar8 + 1;
      param_2[2] = uVar3;
      *param_1 = (long)puVar4 + (param_3 - lVar7);
      return;
    }
  }
  _abort();
  unaff_x19[1] = unaff_x27;
  return;
}



/* Entry: 10b8b2ad4; end: 10b8b2c1f;  */

/* WARNING: Removing unreachable block (ram,0x000104bda964) */
/* WARNING: Removing unreachable block (ram,0x000104bda968) */
/* WARNING: Removing unreachable block (ram,0x000104bda970) */
/* WARNING: Removing unreachable block (ram,0x000104bda978) */
/* WARNING: Removing unreachable block (ram,0x000104bda97c) */

void FUN_10b8b2ad4(void)

{
  long unaff_x19;
  undefined8 in_stack_00000008;
  
  *(undefined8 *)(unaff_x19 + 8) = in_stack_00000008;
  return;
}



/* Entry: 10b8b2c20; end: 10b8b3dbf;  */

void FUN_10b8b2c20(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_DAT_110d71008;
  param_1[1] = 1;
  param_1[2] = param_2;
  param_1[3] = 0;
  uVar1 = *(undefined4 *)(param_2 + 0x90);
  uVar2 = NEON_rev32((ulong)CONCAT16((char)((uint)uVar1 >> 0x18),
                                     (uint6)CONCAT14((char)((uint)uVar1 >> 0x10),
                                                     (uint)CONCAT12((char)((uint)uVar1 >> 8),
                                                                    (ushort)(byte)uVar1))),2);
  *(uint *)(param_1 + 0xb) =
       CONCAT13((char)((ulong)uVar2 >> 0x30),CONCAT12((char)((ulong)uVar2 >> 0x20),(short)uVar1));
  *(undefined4 *)((long)param_1 + 0x5c) = 0;
  return;
}



/* Entry: 10b8b3dc0; end: 10b8b3e07;  */

void FUN_10b8b3dc0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_110d71050;
  param_1[1] = 1;
  param_1[2] = &PTR_DAT_110d710c8;
  param_1[3] = param_2;
  param_1[4] = 0;
  param_1[5] = &UNK_10dd5b8b0;
  param_1[10] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0x11] = 0;
  param_1[0xc] = &UNK_10dd5b8b0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined2 *)(param_1 + 0x12) = 0;
  return;
}



/* Entry: 10b8b3e08; end: 10b8b3e4f;  */

undefined8 * FUN_10b8b3e08(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d71050;
  param_1[2] = &PTR_DAT_110d710c8;
  FUN_10b8b5580(param_1 + 0xc);
  func_0x00010b8b55ec(param_1 + 5);
  FUN_10b8a83c8(param_1 + 4);
  return param_1;
}



/* Entry: 10b8b3e50; end: 10b8b3e5b;  */

undefined8 * FUN_10b8b3e50(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d71050;
  param_1[2] = &PTR_DAT_110d710c8;
  FUN_10b8b5580(param_1 + 0xc);
  func_0x00010b8b55ec(param_1 + 5);
  FUN_10b8a83c8(param_1 + 4);
  return param_1;
}



/* Entry: 10b8b3e5c; end: 10b8b3e6f;  */

void FUN_10b8b3e5c(void)

{
  FUN_10b8b3e08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b8b3e70; end: 10b8b3e77;  */

void FUN_10b8b3e70(long param_1)

{
  FUN_10b8b3e08(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b8b3e78; end: 10b8b4033;  */

undefined8
FUN_10b8b3e78(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5,
             long *param_6)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  int extraout_w10;
  long *plVar10;
  undefined1 auStack_98 [32];
  long lStack_78;
  undefined4 uStack_70;
  long lStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  if ((*(long *)(param_1 + 0x18) == 0) || (*(long *)(*(long *)(param_1 + 0x18) + 0x1e0) == 0)) {
    return 0;
  }
  uVar5 = *(byte *)(param_5 + 8) == 1;
  uStack_58 = param_3;
  if (*(byte *)(param_5 + 8) < 2) {
    lVar9 = param_1 + 0x28;
    uVar2 = *(undefined4 *)(param_1 + 0x58);
    puVar8 = &uStack_58;
    lVar6 = lVar9;
    FUN_10b8b5658();
    lStack_78 = lVar9;
    uStack_70 = uVar2;
    lStack_68 = lVar6;
    puStack_60 = puVar8;
    func_0x00010b8b6564(*(undefined8 *)(param_1 + 0x28));
    if ((bool)uVar5) {
      return 0;
    }
    if (*param_6 != 0) {
      func_0x00010b8b3738(puVar8[1]);
    }
    uVar7 = puVar8[1];
    func_0x00010b8b301c(uVar7,param_4);
    if ((int)uVar7 == 0) {
      return 0;
    }
    plVar10 = (long *)puVar8[1];
    if (plVar10 != (long *)0x0) {
      do {
        func_0x00010b8b6414();
      } while (extraout_w10 != 0);
    }
    if (((*(byte *)((long)plVar10 + 0x5e) & 1) == 0) &&
       ((*(char *)((long)plVar10 + 0x5f) != '\x01' || (*(long *)(plVar10[4] + 8) == 0)))) {
      FUN_10b8b4034(auStack_98,lVar9,&lStack_78);
    }
    func_0x00010b8b687c();
    func_0x00010b8b67c8();
    plVar1 = plVar10 + 1;
    do {
      lVar9 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 1) {
      (**(code **)(*plVar10 + 8))(plVar10);
    }
    return 1;
  }
  FUN_10b8b4264(&lStack_78,param_1,param_3);
  if (lStack_78 == 0) {
    lStack_78 = 0;
  }
  else {
    if (*param_6 != 0) {
      func_0x00010b8b3738();
    }
    lVar9 = lStack_78;
    func_0x00010b8b2ce8(lStack_78,param_4,param_5);
    if ((int)lVar9 != 0) {
      func_0x00010b8b687c();
      func_0x00010b8b67c8();
      uVar7 = 1;
      goto LAB_10b8b400c;
    }
  }
  uVar7 = 0;
LAB_10b8b400c:
  FUN_10b8b5914(lStack_78);
  return uVar7;
}



/* Entry: 10b8b4034; end: 10b8b4073;  */

void FUN_10b8b4034(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x00010b8b6640();
  iVar1 = *(int *)(param_2 + 0x30) + 1;
  *(int *)(param_2 + 0x30) = iVar1;
  uVar3 = *(undefined8 *)(param_3 + 0x10);
  uVar2 = unaff_x19;
  FUN_10b8b577c();
  *unaff_x20 = unaff_x19;
  *(int *)(unaff_x20 + 1) = iVar1;
  unaff_x20[2] = uVar2;
  unaff_x20[3] = uVar3;
  return;
}



/* Entry: 10b8b4074; end: 10b8b4263;  */

void FUN_10b8b4074(long param_1,undefined8 *param_2,ulong param_3,long param_4,undefined8 *param_5)

{
  undefined1 uVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  int extraout_w11;
  undefined8 uVar5;
  long lStack_a0;
  undefined8 *puStack_98;
  long lStack_90;
  undefined8 *puStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  long lStack_70;
  byte bStack_68;
  long lStack_60;
  byte bStack_58;
  undefined8 uStack_48;
  
  plVar2 = &lStack_70;
  puVar4 = param_2;
  lVar3 = param_4;
  func_0x00010b8b6424();
  uStack_48 = extraout_x8;
  if (*(char *)(lVar3 + 0x59) == '\x01') {
    func_0x00010b8c92b4(*(undefined8 *)(param_1 + 0x18));
  }
  uVar1 = 0x11 < param_3;
  if (param_3 == 0x12) {
    func_0x00010b8b6448();
    func_0x00010b8b68b4();
    if ((bool)uVar1) {
      FUN_10b9aa3b0(&lStack_60);
    }
    func_0x00010b8ccb88(0x12);
    goto LAB_10b8b41c4;
  }
  if (param_3 == 7) {
    func_0x00010b8b6810();
    if (bStack_68 < 2) {
      FUN_10b8ccb30(0,*(undefined8 *)(param_1 + 0x18),0);
    }
    else {
      func_0x00010b8b6804();
      uVar1 = lStack_60 == 1;
      if (!(bool)uVar1) {
LAB_10b8b4250:
        func_0x0001080cf3a4(&lStack_60);
        func_0x00010b8b6660();
        goto LAB_10b8b423c;
      }
      func_0x00010b8b68dc();
      FUN_10b8ccb30();
LAB_10b8b41e4:
      func_0x0001080cf3a4(&lStack_60);
      plVar2 = &lStack_70;
    }
LAB_10b8b41f0:
    FUN_10b9a8d98(plVar2);
  }
  else {
    if (param_3 == 0x10) {
      func_0x00010b8b6448();
      uVar5 = *(undefined8 *)(param_1 + 0x18);
      if (bStack_58 < 2) {
        lStack_70 = 0;
      }
      else {
        FUN_10b9a9358(&lStack_70,&lStack_60);
      }
      FUN_10b8cc6d0(uVar5,&lStack_70);
      func_0x000107c278f8(lStack_70);
LAB_10b8b41c4:
      plVar2 = &lStack_60;
      goto LAB_10b8b41f0;
    }
    uVar1 = 0x10 < param_3;
    if (param_3 == 0x11) {
      func_0x00010b8b6448();
      func_0x00010b8b68b4();
      if ((bool)uVar1) {
        FUN_10b9aa3b0(&lStack_60);
      }
      FUN_10b8ccb3c(0x11);
      goto LAB_10b8b41c4;
    }
    if (param_3 == 6) {
      func_0x00010b8b6810();
      if (1 < bStack_68) {
        func_0x00010b8b6804();
        uVar1 = lStack_60 == 1;
        if (!(bool)uVar1) goto LAB_10b8b4250;
        func_0x00010b8b68dc();
        func_0x00010b8ccaa4();
        goto LAB_10b8b41e4;
      }
      func_0x00010b8ccaa4(0,*(undefined8 *)(param_1 + 0x18),0);
      plVar2 = &lStack_70;
      goto LAB_10b8b41f0;
    }
  }
  uVar1 = *(char *)(param_4 + 0x5a) == '\x01';
  if ((bool)uVar1) {
    lStack_60 = *(long *)(*(long *)(*(long *)(param_4 + 0x10) + 0x78) + 0x10);
    FUN_10b8b4418(param_1 + 0x60,&lStack_60);
    puVar4 = param_5;
    FUN_10b8b4938();
  }
  else {
    func_0x00010b8b67d0(param_1);
    puVar4 = param_2;
  }
LAB_10b8b423c:
  func_0x00010b8b63ac(uStack_48);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    pcStack_78 = FUN_10b8b4264;
    lStack_90 = param_1;
    puStack_88 = param_5;
    puStack_80 = &stack0xfffffffffffffff0;
    func_0x00010b8b67bc();
    puStack_98 = puVar4;
    func_0x00010b8b6850();
    func_0x00010b8b6434();
    if ((bool)uVar1) {
      lVar3 = param_1;
      FUN_10b8b4e00(param_1,puStack_98);
      if (lVar3 == 0) {
        *param_5 = 0;
      }
      else {
        lStack_a0 = lVar3;
        func_0x00010b8b39dc(param_5,&lStack_a0);
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
        FUN_10b8b5f18(param_1 + 0x28,&puStack_98);
        FUN_10b8b5f3c();
      }
    }
    else {
      uVar5 = 0;
      if (puVar4[1] != 0) {
        do {
          func_0x00010b8b6734();
          uVar5 = extraout_x8_00;
        } while (extraout_w11 != 0);
      }
      *param_5 = uVar5;
    }
    return;
  }
  return;
}



/* Entry: 10b8b4264; end: 10b8b4363;  */

void FUN_10b8b4264(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 extraout_x8;
  undefined8 uVar2;
  int extraout_w11;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined1 auStack_30 [8];
  long lStack_28;
  
  func_0x00010b8b67bc();
  lStack_28 = param_2;
  func_0x00010b8b6850();
  func_0x00010b8b6434();
  if ((bool)in_ZR) {
    lVar1 = unaff_x20;
    FUN_10b8b4e00();
    if (lVar1 == 0) {
      *unaff_x19 = 0;
    }
    else {
      func_0x00010b8b39dc(auStack_30);
      *(int *)(unaff_x20 + 0x58) = *(int *)(unaff_x20 + 0x58) + 1;
      FUN_10b8b5f18(unaff_x20 + 0x28,&lStack_28);
      FUN_10b8b5f3c();
    }
  }
  else {
    uVar2 = 0;
    if (*(long *)(param_2 + 8) != 0) {
      do {
        func_0x00010b8b6734();
        uVar2 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    *unaff_x19 = uVar2;
  }
  return;
}



/* Entry: 10b8b4364; end: 10b8b4417;  */

void FUN_10b8b4364(long param_1,long param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  int extraout_w10;
  long lVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = param_3;
  func_0x00010b8b6850();
  func_0x00010b8b6434();
  if (!(bool)in_ZR) {
    lVar1 = *(long *)(param_2 + 8);
    if (lVar1 != 0) {
      do {
        func_0x00010b8b6414();
      } while (extraout_w10 != 0);
    }
    func_0x00010b8b3814(lVar1);
    if (*(char *)(lVar1 + 0x5a) == '\x01') {
      uStack_40 = *(undefined8 *)(*(long *)(*(long *)(lVar1 + 0x10) + 0x78) + 0x10);
      FUN_10b8b4418(param_1 + 0x60,&uStack_40);
      FUN_10b8b443c();
    }
    else {
      uStack_40 = 0;
      func_0x00010b8b6888();
      func_0x00010b8b67d0();
      func_0x0001080da468(uStack_40);
    }
    FUN_10b8b5914(lVar1);
  }
  return;
}



/* Entry: 10b8b4418; end: 10b8b443b;  */

long FUN_10b8b4418(void)

{
  undefined1 auStack_28 [8];
  long lStack_20;
  
  FUN_10b8b5940(auStack_28);
  return lStack_20 + 8;
}



/* Entry: 10b8b443c; end: 10b8b4477;  */

long * FUN_10b8b443c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != param_2) {
    FUN_10b8b5ce4();
    *param_1 = param_2;
    func_0x0001080da468(lVar1);
  }
  return param_1;
}



/* Entry: 10b8b4478; end: 10b8b4517;  */

undefined8 *
FUN_10b8b4478(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long *param_5)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  undefined1 in_ZR;
  int iVar7;
  undefined8 *puVar8;
  undefined8 extraout_x8;
  long lVar9;
  int extraout_w10;
  long unaff_x22;
  undefined8 *puVar10;
  undefined8 *puStack_e0;
  undefined4 uStack_d8;
  undefined8 *puStack_d0;
  long lStack_c8;
  undefined8 *puStack_c0;
  undefined4 uStack_b8;
  undefined8 *puStack_b0;
  long lStack_a8;
  undefined1 auStack_38 [16];
  undefined8 auStack_28 [2];
  undefined8 uStack_18;
  
  func_0x00010b8b6424();
  auStack_28[0] = 0;
  uStack_18 = extraout_x8;
  if ((*param_5 == 0) || ((*(byte *)(*(long *)(param_1 + 0x18) + 0x1ca) & 1) == 0)) {
    func_0x00010b8b67f8(auStack_38);
    func_0x00010b8b67ec();
    func_0x0001080c6234(auStack_38);
    func_0x0001080da468(0);
  }
  else {
    func_0x00010b8b67f8(auStack_38);
    func_0x00010b8b67ec();
    func_0x0001080c6234(auStack_38);
  }
  puVar8 = auStack_28;
  func_0x0001080c6234();
  func_0x00010b8b63ac(uStack_18);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b8b6724();
    puVar1 = puVar8 + 5;
    uVar4 = *(undefined4 *)(puVar8 + 0xb);
    puVar8 = puVar1;
    FUN_10b8b58c4();
    puVar10 = (undefined8 *)0x0;
    puStack_c0 = puVar1;
    uStack_b8 = uVar4;
    puStack_b0 = puVar8;
    lStack_a8 = param_2;
    while (puStack_b0 != (undefined8 *)(*(long *)(unaff_x22 + 0x28) + *(long *)(unaff_x22 + 0x40)))
    {
      iVar7 = (int)*(undefined8 *)(lStack_a8 + 8);
      func_0x00010b8b301c();
      if (iVar7 == 0) {
        FUN_10b8b4674(&puStack_c0);
      }
      else {
        plVar3 = *(long **)(lStack_a8 + 8);
        if (plVar3 != (long *)0x0) {
          do {
            func_0x00010b8b6414();
          } while (extraout_w10 != 0);
        }
        if (((*(byte *)((long)plVar3 + 0x5e) & 1) == 0) &&
           ((*(char *)((long)plVar3 + 0x5f) != '\x01' || (*(long *)(plVar3[4] + 8) == 0)))) {
          FUN_10b8b4034(&puStack_e0,puVar1,&puStack_c0);
          puStack_c0 = puStack_e0;
          uStack_b8 = uStack_d8;
          lStack_a8 = lStack_c8;
          puStack_b0 = puStack_d0;
        }
        else {
          FUN_10b8b4674(&puStack_c0);
        }
        func_0x00010b8b6924();
        func_0x00010b8b67c8();
        plVar2 = plVar3 + 1;
        do {
          lVar9 = *plVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *plVar2 = lVar9 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar9 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3);
        }
        puVar10 = (undefined8 *)0x1;
      }
    }
    return puVar10;
  }
  return puVar8;
}



/* Entry: 10b8b4518; end: 10b8b4673;  */

undefined8 FUN_10b8b4518(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  int extraout_w10;
  long unaff_x22;
  undefined8 uVar9;
  long lStack_a0;
  undefined4 uStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined4 uStack_78;
  long lStack_70;
  long lStack_68;
  
  func_0x00010b8b6724();
  lVar1 = param_1 + 0x28;
  uVar4 = *(undefined4 *)(param_1 + 0x58);
  lVar8 = lVar1;
  FUN_10b8b58c4();
  uVar9 = 0;
  lStack_80 = lVar1;
  uStack_78 = uVar4;
  lStack_70 = lVar8;
  lStack_68 = param_2;
  while (lStack_70 != *(long *)(unaff_x22 + 0x28) + *(long *)(unaff_x22 + 0x40)) {
    iVar7 = (int)*(undefined8 *)(lStack_68 + 8);
    func_0x00010b8b301c();
    if (iVar7 == 0) {
      FUN_10b8b4674(&lStack_80);
    }
    else {
      plVar3 = *(long **)(lStack_68 + 8);
      if (plVar3 != (long *)0x0) {
        do {
          func_0x00010b8b6414();
        } while (extraout_w10 != 0);
      }
      if (((*(byte *)((long)plVar3 + 0x5e) & 1) == 0) &&
         ((*(char *)((long)plVar3 + 0x5f) != '\x01' || (*(long *)(plVar3[4] + 8) == 0)))) {
        FUN_10b8b4034(&lStack_a0,lVar1,&lStack_80);
        lStack_80 = lStack_a0;
        uStack_78 = uStack_98;
        lStack_68 = lStack_88;
        lStack_70 = lStack_90;
      }
      else {
        FUN_10b8b4674(&lStack_80);
      }
      func_0x00010b8b6924();
      func_0x00010b8b67c8();
      plVar2 = plVar3 + 1;
      do {
        lVar8 = *plVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *plVar2 = lVar8 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar8 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3);
      }
      uVar9 = 1;
    }
  }
  return uVar9;
}



/* Entry: 10b8b4674; end: 10b8b47cb;  */

void FUN_10b8b4674(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  undefined4 unaff_w21;
  
  func_0x00010b8b67a4();
  if ((bool)in_ZR) {
    func_0x00010b8b683c();
  }
  else {
    func_0x00010b8b67d8();
    *unaff_x19 = unaff_x20;
    *(undefined4 *)(unaff_x19 + 1) = unaff_w21;
    unaff_x19[2] = param_1;
    unaff_x19[3] = param_2;
  }
  return;
}



/* Entry: 10b8b47cc; end: 10b8b47f3;  */

void FUN_10b8b47cc(int param_1)

{
  func_0x00010b8b6640();
  FUN_10b8b59a4();
  func_0x00010b8b664c();
  FUN_10b8b5d9c();
  if (param_1 != 0) {
    func_0x00010b8b68c8();
  }
  return;
}



/* Entry: 10b8b47f4; end: 10b8b4937;  */

long * FUN_10b8b47f4(long *param_1,long *param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  long *plVar5;
  long lVar6;
  undefined8 extraout_x8;
  uint uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  long lStack_90;
  undefined2 uStack_88;
  long lStack_80;
  undefined1 auStack_78 [16];
  undefined8 uStack_68;
  
  lVar9 = 0;
  iVar8 = 0;
  iVar11 = 0;
  uVar7 = 0;
  plVar5 = param_1;
  lVar10 = param_3;
  func_0x00010b8b6424();
  plVar1 = param_2 + 3;
  uStack_68 = extraout_x8;
  for (lVar10 = *(long *)(lVar10 + 0x28) - *(long *)(lVar10 + 0x20) >> 4; lVar10 != 0;
      lVar10 = lVar10 + -1) {
    lVar2 = *(long *)(param_3 + 0x20) + lVar9;
    lVar6 = lVar2;
    FUN_10b8b5658(param_1 + 5);
    uStack_88 = 0;
    lStack_90 = 0;
    func_0x00010b8b6434();
    if (((bool)in_ZR) ||
       ((lVar6 = *(long *)(lVar6 + 8), (*(byte *)(lVar6 + 0x5e) & 1) == 0 &&
        ((*(char *)(lVar6 + 0x5f) != '\x01' || (*(long *)(*(long *)(lVar6 + 0x20) + 8) == 0)))))) {
      in_ZR = *(char *)(lVar2 + 8) == '\0';
      if ((bool)in_ZR) {
        iVar8 = 1;
      }
    }
    else {
      func_0x00010b8b33a0(&lStack_80,lVar6,param_1[3]);
      in_ZR = lStack_80 == 1;
      if ((bool)in_ZR) {
        FUN_10b9a9020(&lStack_90,auStack_78);
      }
      else {
        uVar7 = 1;
      }
      func_0x000104bda914(&lStack_80);
      iVar11 = 1;
    }
    plVar5 = plVar1;
    param_2 = &lStack_90;
    FUN_10b9a9020();
    func_0x00010b8b6660();
    plVar1 = plVar1 + 2;
    lVar9 = lVar9 + 0x10;
  }
  func_0x00010b8b63ac(uStack_68);
  if ((bool)in_ZR) {
    return (long *)(ulong)(iVar8 << 0x10 | iVar11 << 8 | uVar7);
  }
  ___stack_chk_fail();
  if (plVar5 != param_2) {
    lVar9 = *plVar5;
    lVar10 = *param_2;
    if ((lVar10 != 0) && (*(long *)(lVar10 + 0x10) != 0)) {
      plVar1 = (long *)(*(long *)(lVar10 + 0x10) + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    *plVar5 = lVar10;
    func_0x0001080da468(lVar9);
  }
  return plVar5;
}



/* Entry: 10b8b4938; end: 10b8b498b;  */

long * FUN_10b8b4938(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  
  if (param_1 != param_2) {
    lVar4 = *param_1;
    lVar5 = *param_2;
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
    *param_1 = lVar5;
    func_0x0001080da468(lVar4);
  }
  return param_1;
}



/* Entry: 10b8b498c; end: 10b8b49bb;  */

void FUN_10b8b498c(long param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  *(undefined1 *)(param_1 + 0x90) = 0;
  uStack_18 = 0;
  FUN_10b8b49bc(param_1,param_2,&uStack_18,0);
  func_0x00010b8b6848();
  return;
}



/* Entry: 10b8b49bc; end: 10b8b4a9b;  */

void FUN_10b8b49bc(long param_1,long param_2)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int extraout_w10;
  long unaff_x22;
  long *plVar8;
  long lStack_70;
  undefined4 uStack_68;
  long lStack_60;
  long lStack_58;
  
  func_0x00010b8b6724();
  uVar2 = *(undefined4 *)(param_1 + 0x58);
  lVar6 = param_1 + 0x28;
  FUN_10b8b58c4();
  lVar5 = *(long *)(unaff_x22 + 0x28);
  lVar7 = *(long *)(unaff_x22 + 0x40);
  lStack_70 = param_1 + 0x28;
  uStack_68 = uVar2;
  lStack_60 = lVar6;
  lStack_58 = param_2;
  while (lStack_60 != lVar5 + lVar7) {
    plVar8 = *(long **)(lStack_58 + 8);
    if (plVar8 != (long *)0x0) {
      do {
        func_0x00010b8b6414();
      } while (extraout_w10 != 0);
    }
    if ((*(byte *)((long)plVar8 + 0x5a) & 1) == 0) {
      plVar1 = plVar8 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      func_0x00010b8b6924();
      FUN_10b8b4478();
      do {
        lVar6 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar6 + -1 == 0) {
        (**(code **)(*plVar8 + 8))(plVar8);
      }
    }
    FUN_10b8b5914(plVar8);
    FUN_10b8b4674(&lStack_70);
  }
  return;
}



/* Entry: 10b8b4a9c; end: 10b8b4aab;  */

void FUN_10b8b4a9c(long param_1,long param_2)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int extraout_w10;
  long unaff_x22;
  long *plVar8;
  long lStack_70;
  undefined4 uStack_68;
  long lStack_60;
  long lStack_58;
  
  *(undefined1 *)(param_1 + 0x90) = 1;
  func_0x00010b8b6724();
  uVar2 = *(undefined4 *)(param_1 + 0x58);
  lVar6 = param_1 + 0x28;
  FUN_10b8b58c4();
  lVar5 = *(long *)(unaff_x22 + 0x28);
  lVar7 = *(long *)(unaff_x22 + 0x40);
  lStack_70 = param_1 + 0x28;
  uStack_68 = uVar2;
  lStack_60 = lVar6;
  lStack_58 = param_2;
  while (lStack_60 != lVar5 + lVar7) {
    plVar8 = *(long **)(lStack_58 + 8);
    if (plVar8 != (long *)0x0) {
      do {
        func_0x00010b8b6414();
      } while (extraout_w10 != 0);
    }
    if ((*(byte *)((long)plVar8 + 0x5a) & 1) == 0) {
      plVar1 = plVar8 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      func_0x00010b8b6924();
      FUN_10b8b4478();
      do {
        lVar6 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar6 + -1 == 0) {
        (**(code **)(*plVar8 + 8))(plVar8);
      }
    }
    FUN_10b8b5914(plVar8);
    FUN_10b8b4674(&lStack_70);
  }
  return;
}



/* Entry: 10b8b4aac; end: 10b8b4b6f;  */

void FUN_10b8b4aac(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long unaff_x20;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x00010b8b6640();
    if (*(char *)(param_1 + 0x91) == '\x01') {
      *(undefined1 *)(unaff_x20 + 0x91) = 0;
      func_0x00010b8b664c();
      FUN_10b8b4b70();
    }
    while (*(long *)(unaff_x20 + 0x70) != 0) {
      FUN_10b8b4c50(unaff_x20 + 0x60);
      if ((*(long *)(param_2 + 8) != 0) &&
         (lVar4 = *(long *)(*(long *)(param_2 + 8) + 0x10), lVar4 != 0)) {
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
      lVar4 = unaff_x20 + 0x60;
      FUN_10b8b4c50();
      FUN_10b8b4c7c(unaff_x20 + 0x60,lVar4,param_2);
      func_0x00010b8b664c();
      FUN_10b8b4cc0();
      func_0x00010b8b6848();
      param_2 = lVar4;
    }
  }
  return;
}



/* Entry: 10b8b4b70; end: 10b8b4c4f;  */

void FUN_10b8b4b70(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x20;
  long lVar3;
  undefined8 uStack_68;
  
  func_0x00010b8b6544();
  lVar1 = *(long *)(unaff_x20 + 0x28);
  lVar2 = *(long *)(unaff_x20 + 0x40);
  while (param_1 != lVar1 + lVar2) {
    lVar3 = *(long *)(param_2 + 8);
    if (lVar3 != 0) {
      do {
        func_0x00010b8b6414();
      } while (extraout_w10 != 0);
    }
    if (*(char *)(lVar3 + 0x5b) == '\x01') {
      do {
        func_0x00010b8b6414();
      } while (extraout_w10_00 != 0);
      *(undefined1 *)(lVar3 + 0x5c) = 1;
      if (*(char *)(lVar3 + 0x5a) == '\x01') {
        uStack_68 = *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x10) + 0x78) + 0x10);
        FUN_10b8b4418(unaff_x20 + 0x60,&uStack_68);
        FUN_10b8b443c();
      }
      else {
        uStack_68 = 0;
        func_0x00010b8b664c();
        func_0x00010b8b67d0();
        func_0x00010b8b6848();
      }
      func_0x00010b8b65a8();
    }
    func_0x00010b8b65a8();
    FUN_10b8b4674(&stack0xffffffffffffffa0);
  }
  return;
}



/* Entry: 10b8b4c50; end: 10b8b4c7b;  */

undefined1  [16] FUN_10b8b4c50(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = param_1[1];
  uStack_20 = *param_1;
  FUN_10b8b5e1c(&uStack_20);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = uStack_20;
  return auVar1;
}



/* Entry: 10b8b4c7c; end: 10b8b4cbf;  */

undefined1  [16] FUN_10b8b4c7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_2;
  uStack_38 = param_3;
  FUN_10b8b5410(&uStack_40);
  func_0x00010b8b687c();
  FUN_10b8b5e54();
  auVar1._8_8_ = uStack_38;
  auVar1._0_8_ = uStack_40;
  return auVar1;
}



/* Entry: 10b8b4cc0; end: 10b8b4d9b;  */

void FUN_10b8b4cc0(void)

{
  uint uVar1;
  long *plVar2;
  code *extraout_x8;
  long *unaff_x22;
  long lVar3;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x00010b8b6724();
  FUN_10b8b4264(&lStack_48);
  lVar3 = *(long *)(*(long *)(lStack_48 + 0x10) + 0x78);
  func_0x00010b9abe10(&uStack_50,*(long *)(lVar3 + 0x28) - *(long *)(lVar3 + 0x20) >> 4);
  plVar2 = unaff_x22;
  FUN_10b8b47f4();
  uVar1 = (uint)plVar2 & 0xffffff;
  if ((uVar1 >> 8 & 1) == 0) {
    func_0x00010b8b6924();
    FUN_10b8b4dbc();
  }
  else if ((uVar1 >> 0x10 & 1) == 0) {
    func_0x00010b9a8f84(auStack_60,&uStack_50);
    func_0x00010b8b6924(*(undefined8 *)(*unaff_x22 + 0x20));
    (*extraout_x8)();
    func_0x00010b8b6660();
  }
  func_0x000104bddf60(uStack_50);
  FUN_10b8b5914(lStack_48);
  return;
}



/* Entry: 10b8b4d9c; end: 10b8b4dbb;  */

bool FUN_10b8b4d9c(long param_1)

{
  if ((*(byte *)(param_1 + 0x91) & 1) != 0) {
    return true;
  }
  return *(long *)(param_1 + 0x70) != 0;
}



/* Entry: 10b8b4dbc; end: 10b8b4dff;  */

long * FUN_10b8b4dbc(long *param_1)

{
  (**(code **)(*param_1 + 0x20))();
  func_0x00010b8b6660();
  return param_1;
}



/* Entry: 10b8b4e00; end: 10b8b4e07;  */

undefined8 FUN_10b8b4e00(long param_1,ulong param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 uStack_5a;
  undefined1 uStack_59;
  undefined8 uStack_58;
  undefined8 auStack_50 [2];
  undefined8 uStack_40;
  ulong uStack_38;
  
  lVar2 = *(long *)(param_1 + 0x20);
  if (*(long *)(lVar2 + 0x50) == 0) {
    lVar3 = *(long *)(lVar2 + 0x70);
    lVar4 = *(long *)(lVar2 + 0x78) - lVar3;
  }
  else {
    lVar3 = *(long *)(lVar2 + 0x70);
    lVar4 = *(long *)(lVar2 + 0x78) - lVar3;
    if (((ulong)(lVar4 >> 3) <= param_2) || (*(long *)(lVar3 + param_2 * 8) == 0)) {
      uStack_38 = param_2;
      if (*(long *)(lVar2 + 0x88) == 0) {
        FUN_10b8a93ac(auStack_50);
        uVar1 = auStack_50[0];
        auStack_50[0] = 0;
        FUN_10b8a98d8((long *)(lVar2 + 0x88),uVar1);
        FUN_10b8a98b4(auStack_50);
      }
      FUN_10b8a3d20(&uStack_40,*(undefined8 *)(lVar2 + 0x60),param_2);
      uStack_58 = 0;
      uStack_59 = 1;
      uStack_5a = 0;
      FUN_10b8a99b4(auStack_50,&uStack_38,&uStack_40,lVar2 + 0x50,&uStack_58,&uStack_59,&uStack_5a);
      func_0x00010b8a93d8(*(undefined8 *)(lVar2 + 0x88),auStack_50);
      FUN_10b8a917c(lVar2,auStack_50[0]);
      uVar1 = auStack_50[0];
      FUN_10b8a9b90(auStack_50);
      func_0x000107c278f8(uStack_40);
      return uVar1;
    }
  }
  if (param_2 < (ulong)(lVar4 >> 3)) {
    return *(undefined8 *)(lVar3 + param_2 * 8);
  }
  return 0;
}



/* Entry: 10b8b4e08; end: 10b8b4ed7;  */

void FUN_10b8b4e08(long param_1)

{
  long lVar1;
  long extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uVar2;
  long extraout_x9;
  int extraout_w10;
  int extraout_w11;
  long unaff_x19;
  undefined8 uStack_60;
  undefined1 auStack_58 [16];
  long lStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  func_0x00010b8b6544();
  func_0x00010b8b6744();
  while (param_1 != extraout_x8 + extraout_x9) {
    uVar2 = *puStack_40;
    lVar1 = puStack_40[1];
    if (lVar1 != 0) {
      do {
        func_0x00010b8b6734();
        uVar2 = extraout_x8_00;
      } while (extraout_w11 != 0);
    }
    if ((*(char *)(lVar1 + 0x59) == '\x01') && (*(char *)(lVar1 + 0x58) == '\x01')) {
      do {
        uStack_60 = uVar2;
        func_0x00010b8b6414();
        uVar2 = uStack_60;
      } while (extraout_w10 != 0);
      *(int *)(unaff_x19 + 0x58) = *(int *)(unaff_x19 + 0x58) + 1;
      func_0x00010b8b38c0(&uStack_38,lVar1);
      FUN_10b8b5f18(unaff_x19 + 0x28,&uStack_60);
      FUN_10b8b62e4();
      FUN_10b8b5914(uStack_38);
      FUN_10b8b5914(lVar1);
    }
    FUN_10b8b5914(lVar1);
    FUN_10b8b4674(auStack_58);
    param_1 = lStack_48;
  }
  return;
}



/* Entry: 10b8b4ed8; end: 10b8b5023;  */

void FUN_10b8b4ed8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  long lVar4;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long *extraout_x8_01;
  long extraout_x8_02;
  long extraout_x9;
  long extraout_x9_00;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 *unaff_x19;
  long unaff_x20;
  long lVar5;
  undefined8 uStack_118;
  undefined1 auStack_110 [16];
  long lStack_100;
  undefined4 uStack_f8;
  long lStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  long *plStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined1 auStack_98 [16];
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 auStack_68 [2];
  undefined8 uStack_58;
  
  func_0x00010b8b67bc();
  func_0x00010b8b6424();
  uStack_58 = extraout_x8;
  func_0x000104bd4df4(&lStack_78);
  lVar5 = unaff_x20 + 0x28;
  lVar4 = lVar5;
  FUN_10b8b58c4();
  func_0x00010b8b6744();
  do {
    if (lVar4 == extraout_x8_00 + extraout_x9) {
      *unaff_x19 = 1;
      unaff_x19[1] = lStack_78;
      lStack_78 = 0;
      uVar3 = 1;
LAB_10b8b4fe8:
      lVar4 = lStack_78;
      func_0x000104bd4e64();
      func_0x00010b8b63ac(uStack_58);
      if (!(bool)uVar3) {
        ___stack_chk_fail();
        uStack_e0 = 2;
        plStack_d8 = &lStack_70;
        lStack_d0 = extraout_x8_00 + extraout_x9;
        lStack_c8 = lVar5;
        func_0x000104bd4df4();
        uVar2 = *(undefined4 *)(lVar4 + 0x58);
        lVar5 = lVar4 + 0x28;
        FUN_10b8b58c4();
        lStack_100 = lVar4 + 0x28;
        uStack_f8 = uVar2;
        lStack_f0 = lVar5;
        puStack_e8 = param_2;
        func_0x00010b8b68f0();
        while (lVar5 != extraout_x8_02 + extraout_x9_00) {
          uVar1 = *puStack_e8;
          lVar5 = puStack_e8[1];
          if (lVar5 != 0) {
            do {
              func_0x00010b8b6414();
            } while (extraout_w10_00 != 0);
          }
          if ((*(long *)(*(long *)(lVar5 + 0x10) + 0x78) == 0) ||
             (*(char *)(lVar5 + 0x5a) == '\x01')) {
            func_0x00010b8b6448();
            lVar5 = *extraout_x8_01;
            FUN_10b8b5130(&uStack_118,lVar4,uVar1);
            FUN_10b8b510c(lVar5 + 0x10,&uStack_118);
            FUN_10b9a9020();
            func_0x000107c278f8(uStack_118);
            FUN_10b9a8d98(auStack_110);
          }
          func_0x00010b8b65a8();
          FUN_10b8b513c(&lStack_100);
          lVar5 = lStack_f0;
        }
        return;
      }
      return;
    }
    lVar5 = *(long *)(lStack_80 + 8);
    if (lVar5 != 0) {
      do {
        func_0x00010b8b6414();
      } while (extraout_w10 != 0);
    }
    if (((*(char *)(lVar5 + 0x59) == '\x01') && (*(char *)(lVar5 + 0x58) == '\x01')) &&
       ((*(byte *)(lVar5 + 0x5a) & 1) == 0)) {
      param_2 = *(undefined8 **)(unaff_x20 + 0x18);
      func_0x00010b8b33a0(&lStack_70,lVar5);
      lVar4 = lStack_70;
      if (lStack_70 == 1) {
        func_0x0001080ee31c(lStack_78 + 0x10,*(long *)(lVar5 + 0x10) + 8);
        param_2 = auStack_68;
        FUN_10b9a9084();
      }
      else {
        *unaff_x19 = 2;
        unaff_x19[1] = auStack_68[0];
        auStack_68[0] = 0;
      }
      func_0x000104bda914(&lStack_70);
      uVar3 = lVar4 == 1;
      if (!(bool)uVar3) {
        func_0x00010b8b65a8();
        goto LAB_10b8b4fe8;
      }
    }
    func_0x00010b8b65a8();
    FUN_10b8b4674(auStack_98);
    lVar4 = lStack_88;
  } while( true );
}



/* Entry: 10b8b5024; end: 10b8b510b;  */

void FUN_10b8b5024(long *param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  long extraout_x8;
  long extraout_x9;
  int extraout_w10;
  long lVar3;
  undefined8 uStack_78;
  undefined1 auStack_70 [16];
  long lStack_60;
  undefined4 uStack_58;
  long lStack_50;
  undefined8 *puStack_48;
  
  func_0x000104bd4df4();
  uVar2 = *(undefined4 *)(param_2 + 0x58);
  lVar3 = param_2 + 0x28;
  FUN_10b8b58c4();
  lStack_60 = param_2 + 0x28;
  uStack_58 = uVar2;
  lStack_50 = lVar3;
  puStack_48 = param_3;
  func_0x00010b8b68f0();
  while (lVar3 != extraout_x8 + extraout_x9) {
    uVar1 = *puStack_48;
    lVar3 = puStack_48[1];
    if (lVar3 != 0) {
      do {
        func_0x00010b8b6414();
      } while (extraout_w10 != 0);
    }
    if ((*(long *)(*(long *)(lVar3 + 0x10) + 0x78) == 0) || (*(char *)(lVar3 + 0x5a) == '\x01')) {
      func_0x00010b8b6448();
      lVar3 = *param_1;
      FUN_10b8b5130(&uStack_78,param_2,uVar1);
      FUN_10b8b510c(lVar3 + 0x10,&uStack_78);
      FUN_10b9a9020();
      func_0x000107c278f8(uStack_78);
      FUN_10b9a8d98(auStack_70);
    }
    func_0x00010b8b65a8();
    FUN_10b8b513c(&lStack_60);
    lVar3 = lStack_50;
  }
  return;
}



/* Entry: 10b8b510c; end: 10b8b512f;  */

long FUN_10b8b510c(void)

{
  undefined1 auStack_28 [8];
  long lStack_20;
  
  func_0x000104bd9cd4(auStack_28);
  return lStack_20 + 8;
}



/* Entry: 10b8b5130; end: 10b8b513b;  */

void FUN_10b8b5130(long *param_1,long param_2,ulong param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)(*(long *)(param_2 + 0x18) + 0x30);
  __ZNSt3__15mutex4lockEv();
  if (param_3 < (ulong)(*(long *)(lVar4 + 0x48) - *(long *)(lVar4 + 0x40) >> 3)) {
    lVar5 = *(long *)(*(long *)(lVar4 + 0x40) + param_3 * 8);
    if (lVar5 != 0) {
      piVar1 = (int *)(lVar5 + 8);
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
    lVar5 = 0;
  }
  *param_1 = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(lVar4);
  return;
}



/* Entry: 10b8b513c; end: 10b8b5273;  */

void FUN_10b8b513c(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  undefined4 unaff_w21;
  
  func_0x00010b8b67a4();
  if ((bool)in_ZR) {
    func_0x00010b8b683c();
  }
  else {
    func_0x00010b8b67d8();
    *unaff_x19 = unaff_x20;
    *(undefined4 *)(unaff_x19 + 1) = unaff_w21;
    unaff_x19[2] = param_1;
    unaff_x19[3] = param_2;
  }
  return;
}



/* Entry: 10b8b5274; end: 10b8b5283;  */

void FUN_10b8b5274(long *param_1)

{
  undefined8 uVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x10;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  
  *(int *)(param_1 + 6) = (int)param_1[6] + 1;
  if (param_1[2] != 0) {
    uVar5 = param_1[3];
    if (0x7f < uVar5) {
      lVar3 = param_1[3];
      if (lVar3 != 0) {
        lVar6 = 8;
        for (lVar4 = 0; lVar4 != lVar3; lVar4 = lVar4 + 1) {
          if (-1 < *(char *)(*param_1 + lVar4)) {
            FUN_10b8b58f0(param_1[1] + lVar6);
            lVar3 = param_1[3];
          }
          lVar6 = lVar6 + 0x10;
        }
        __ZdlPv();
        func_0x00010b8b6774();
      }
      return;
    }
    if (uVar5 != 0) {
      lVar3 = 8;
      for (uVar7 = 0; uVar2 = uVar7 == uVar5, !(bool)uVar2; uVar7 = uVar7 + 1) {
        if (-1 < *(char *)(*param_1 + uVar7)) {
          FUN_10b8b58f0(param_1[1] + lVar3);
          uVar5 = param_1[3];
        }
        lVar3 = lVar3 + 0x10;
      }
      func_0x00010b8b65c4();
      func_0x00010b8b6600();
      uVar1 = extraout_x8;
      if (!(bool)uVar2) {
        uVar1 = extraout_x10;
      }
      func_0x00010b8b6668(uVar1);
    }
  }
  return;
}



/* Entry: 10b8b5284; end: 10b8b540f;  */

void FUN_10b8b5284(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uVar6;
  long extraout_x9;
  int extraout_w11;
  long lVar7;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  lStack_48 = 0;
  lStack_40 = 0;
  uStack_38 = 0;
  puVar4 = param_1 + 5;
  uVar1 = *(undefined4 *)(param_1 + 0xb);
  puVar2 = param_1;
  func_0x00010b8b67d8();
  puStack_60 = (undefined8 *)CONCAT44(puStack_60._4_4_,uVar1);
  puStack_68 = puVar4;
  puStack_58 = puVar2;
  puStack_50 = param_2;
  func_0x00010b8b68f0();
  while (lVar5 = lStack_40, lVar7 = lStack_48, puVar2 != (undefined8 *)(extraout_x8 + extraout_x9))
  {
    uStack_78 = *puStack_50;
    uVar6 = 0;
    if (puStack_50[1] != 0) {
      do {
        func_0x00010b8b6734();
        uVar6 = extraout_x8_00;
      } while (extraout_w11 != 0);
    }
    puVar2 = param_1;
    uStack_70 = uVar6;
    FUN_10b8b4e00(param_1,uStack_78);
    if (puVar2 == (undefined8 *)0x0) {
      param_2 = &uStack_78;
      func_0x00010737fce0(&lStack_48);
    }
    else {
      param_2 = puVar2;
      func_0x00010b8b3a0c(uStack_70);
      if (*(char *)(puVar2 + 0x12) == '\x01') {
        func_0x00010b8b3814(uStack_70);
      }
    }
    FUN_10b8b5914(uStack_70);
    FUN_10b8b4674(&puStack_68);
    puVar2 = puStack_58;
  }
  for (; lVar7 != lVar5; lVar7 = lVar7 + 8) {
    *(int *)(param_1 + 0xb) = *(int *)(param_1 + 0xb) + 1;
    func_0x00010b8b6888();
    FUN_10b8b5658();
    puVar3 = puVar2;
    if ((undefined8 *)(param_1[5] + param_1[8]) != puVar2) {
      puVar3 = puVar4;
      FUN_10b8b577c(puVar4,puVar2,param_2);
      param_2 = puVar2;
    }
    puVar2 = puVar3;
  }
  puVar4 = param_1 + 0xc;
  FUN_10b8b4c50();
  puStack_60 = param_2;
  while (puStack_68 = puVar4, puStack_68 != (undefined8 *)(param_1[0xc] + param_1[0xf])) {
    lVar5 = param_1[4];
    FUN_10b8a9294(lVar5,*puStack_60);
    if ((lVar5 == 0) || (*(long *)(lVar5 + 0x78) == 0)) {
      puVar4 = param_1 + 0xc;
      FUN_10b8b4c7c(puVar4,puStack_68,puStack_60);
      puStack_60 = puStack_68;
    }
    else {
      FUN_10b8b5410(&puStack_68);
      puVar4 = puStack_68;
    }
  }
  func_0x000108a64da4(&lStack_48);
  return;
}



/* Entry: 10b8b5410; end: 10b8b5473;  */

long * FUN_10b8b5410(long *param_1)

{
  param_1[1] = param_1[1] + 0x10;
  *param_1 = *param_1 + 1;
  FUN_10b8b5e1c();
  return param_1;
}



/* Entry: 10b8b5474; end: 10b8b54e7;  */

int FUN_10b8b5474(long param_1)

{
  long lVar1;
  undefined1 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  
  lVar4 = *(long *)(param_1 + 0x20);
  FUN_10b8a9294();
  lVar1 = *(long *)(*(long *)(lVar4 + 0x78) + 0x28);
  iVar6 = 0x7fffffff;
  for (lVar4 = *(long *)(*(long *)(lVar4 + 0x78) + 0x20); uVar2 = lVar4 == lVar1, !(bool)uVar2;
      lVar4 = lVar4 + 0x10) {
    lVar5 = lVar4;
    func_0x00010b8b589c(param_1 + 0x28);
    func_0x00010b8b68f0();
    func_0x00010b8b6564();
    iVar3 = iVar6;
    if (!(bool)uVar2) {
      iVar3 = (int)*(undefined8 *)(lVar5 + 8);
      func_0x00010b8b342c();
      if (iVar6 <= iVar3) {
        iVar3 = iVar6;
      }
    }
    iVar6 = iVar3;
  }
  return iVar6;
}


