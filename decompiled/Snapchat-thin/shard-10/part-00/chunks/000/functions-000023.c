/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107365838; end: 10736585f;  */

undefined4 * FUN_107365838(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  func_0x00010726fe1c(param_1 + 2,param_2 + 2);
  return param_1;
}



/* Entry: 107365860; end: 10736588b;  */

undefined1 * FUN_107365860(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x70] = 0;
  FUN_10736588c();
  return param_1;
}



/* Entry: 10736588c; end: 10736589f;  */

void FUN_10736588c(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    func_0x00010726d804();
    *(undefined1 *)(param_1 + 0x70) = 1;
    return;
  }
  return;
}



/* Entry: 1073658a0; end: 1073658bb;  */

void FUN_1073658a0(long param_1)

{
  func_0x00010726d804();
  *(undefined1 *)(param_1 + 0x70) = 1;
  return;
}



/* Entry: 1073658bc; end: 1073658f3;  */

undefined8 * FUN_1073658bc(undefined8 *param_1,long *param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1073658f4(param_1,*param_2,param_2[1],param_2[1] - *param_2 >> 4);
  return param_1;
}



/* Entry: 1073658f4; end: 107365967;  */

void FUN_1073658f4(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long unaff_x19;
  long unaff_x20;
  long lVar1;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  if (param_4 != 0) {
    func_0x00010736a8c4();
    FUN_107365968();
    lVar1 = *(long *)(unaff_x19 + 8);
    if (param_3 - unaff_x20 != 0) {
      _memmove(lVar1);
    }
    *(long *)(unaff_x19 + 8) = lVar1 + (param_3 - unaff_x20);
  }
  func_0x00010736aa94();
  func_0x0001073659a0(&uStack_40);
  return;
}



/* Entry: 107365968; end: 1073659cb;  */

long * FUN_107365968(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3c == 0) {
    plVar1 = param_1 + 2;
    func_0x00010725ad54();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 2);
    return plVar1;
  }
  func_0x00010725ac80();
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    func_0x00010725af20(param_1);
  }
  return param_1;
}



/* Entry: 1073659cc; end: 107365b0b;  */

void FUN_1073659cc(void)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x9;
  long lVar6;
  long *unaff_x19;
  long *unaff_x20;
  ulong uVar7;
  long lStack_50;
  long lStack_48;
  
  func_0x00010736a8c4();
  FUN_107365b0c();
  uVar7 = unaff_x20[3];
  if (uVar7 != 0) {
    if ((ulong)(*(long *)(*unaff_x19 + -8) + unaff_x19[3]) < uVar7) {
      FUN_107365b20();
    }
    lVar3 = *unaff_x20;
    lVar5 = unaff_x20[1];
    FUN_107365bac();
    while (lStack_50 = lVar3, lStack_48 = lVar5, lVar3 != 0) {
      func_0x00010736aa4c();
      lVar4 = lVar3;
      func_0x00010736aa0c();
      func_0x00010ae6c8b4();
      bVar2 = (byte)lVar3 & 0x7f;
      lVar3 = unaff_x19[1];
      uVar1 = unaff_x19[2];
      lVar6 = *unaff_x19;
      *(byte *)(lVar6 + lVar4) = bVar2;
      *(byte *)(lVar6 + (lVar4 - 7U & uVar1) + (uVar1 & 7)) = bVar2;
      func_0x00010736ac18();
      func_0x000104c2fe00();
      FUN_1073655f8(lVar3 + lVar4 * 0x50 + 0x38,lVar5 + 0x38);
      FUN_107365c0c(&lStack_50);
      lVar3 = lStack_50;
      lVar5 = lStack_48;
    }
    unaff_x19[3] = uVar7;
    func_0x00010736ac24();
    *(ulong *)(extraout_x8 + -8) = extraout_x9 - uVar7;
  }
  return;
}



/* Entry: 107365b0c; end: 107365b1f;  */

void FUN_107365b0c(undefined8 *param_1)

{
  *param_1 = &UNK_10e52b660;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}



/* Entry: 107365b20; end: 107365b8b;  */

void FUN_107365b20(void)

{
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  func_0x00010736b00c();
  func_0x00010736a778();
  func_0x00010726d624();
  func_0x00010736ad04();
  for (; unaff_x23 != unaff_x24; unaff_x24 = unaff_x24 + 1) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      func_0x00010736aa4c();
      func_0x00010736a710();
      func_0x00010736a548();
      func_0x00010736adf4();
      FUN_107365b8c();
    }
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 107365b8c; end: 107365bab;  */

undefined8 FUN_107365b8c(void)

{
  undefined8 unaff_x19;
  
  func_0x00010736abf4();
  func_0x00010736ab9c();
  func_0x00010736ae48();
  func_0x0001072ba554();
  func_0x00010736a9f4();
  return unaff_x19;
}



/* Entry: 107365bac; end: 107365bd3;  */

undefined1  [16] FUN_107365bac(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_1;
  uStack_18 = param_2;
  FUN_107365bd4(&uStack_20);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = uStack_20;
  return auVar1;
}



/* Entry: 107365bd4; end: 107365c0b;  */

void FUN_107365bd4(undefined8 *param_1)

{
  char *pcVar1;
  char *extraout_x8;
  
  pcVar1 = (char *)*param_1;
  while (*pcVar1 < -1) {
    func_0x00010736ab28();
    pcVar1 = extraout_x8;
  }
  if (*pcVar1 != -1) {
    return;
  }
  *param_1 = 0;
  return;
}



/* Entry: 107365c0c; end: 107365c3f;  */

long * FUN_107365c0c(long *param_1)

{
  param_1[1] = param_1[1] + 0x50;
  *param_1 = *param_1 + 1;
  FUN_107365bd4();
  return param_1;
}



/* Entry: 107365c40; end: 107365c47;  */

void FUN_107365c40(void)

{
  return;
}



/* Entry: 107365c48; end: 107365c67;  */

void FUN_107365c48(undefined8 *param_1)

{
  func_0x00010736abe4();
  *param_1 = &PTR_FUN_1109a55f0;
  return;
}



/* Entry: 107365c68; end: 107365c87;  */

void FUN_107365c68(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_1109a55f0;
  return;
}



/* Entry: 107365c88; end: 107365caf;  */

void FUN_107365c88(undefined8 param_1)

{
  func_0x00010736a920();
  func_0x00010736a8bc(param_1,&PTR_DAT_1109a5650);
  func_0x00010736a6d0();
  return;
}



/* Entry: 107365cb0; end: 107365cbb;  */

undefined ** FUN_107365cb0(void)

{
  return &PTR_DAT_1109a5650;
}



/* Entry: 107365cbc; end: 107365d03;  */

long FUN_107365cbc(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x20) == '\x01') {
    if (*(long *)(param_1 + 0x18) == param_1) {
      uVar1 = 0x20;
    }
    else {
      if (*(long *)(param_1 + 0x18) == 0) {
        return param_1;
      }
      uVar1 = 0x28;
    }
    func_0x00010736a808(uVar1);
  }
  return param_1;
}



/* Entry: 107365d04; end: 107365d3b;  */

void FUN_107365d04(long param_1)

{
  func_0x0001072bef58();
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 107365d3c; end: 107365d9f;  */

long FUN_107365d3c(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    func_0x000107365d78();
    lVar2 = uVar1 + 0x20;
  }
  else {
    lVar2 = param_1;
    FUN_107365da0();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x20;
}



/* Entry: 107365da0; end: 107365e33;  */

long FUN_107365da0(undefined8 param_1)

{
  long *unaff_x19;
  long lVar1;
  undefined1 auStack_48 [16];
  long lStack_38;
  
  func_0x00010736a8c4();
  FUN_107365e78();
  FUN_107365f64(auStack_48,param_1,unaff_x19[1] - *unaff_x19 >> 5,unaff_x19 + 2);
  FUN_107365e34(lStack_38);
  lStack_38 = lStack_38 + 0x20;
  FUN_107365eb8();
  lVar1 = unaff_x19[1];
  FUN_107365fec(auStack_48);
  return lVar1;
}



/* Entry: 107365e34; end: 107365e77;  */

void FUN_107365e34(undefined8 param_1,long param_2)

{
  long extraout_x8;
  long unaff_x19;
  
  func_0x00010736afc8();
  if (extraout_x8 == 0) {
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
  }
  else if (extraout_x8 == param_2) {
    func_0x00010736a764();
    func_0x00010736aa44();
  }
  else {
    func_0x00010736ae00();
  }
  return;
}



/* Entry: 107365e78; end: 107365eb7;  */

ulong FUN_107365e78(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *unaff_x19;
  ulong *unaff_x20;
  ulong uVar5;
  
  if (param_2 >> 0x3b == 0) {
    uVar4 = (long)(param_1[2] - *param_1) >> 4;
    if (uVar4 <= param_2) {
      uVar4 = param_2;
    }
    if (0x7fffffffffffffdf < param_1[2] - *param_1) {
      uVar4 = 0x7ffffffffffffff;
    }
    return uVar4;
  }
  FUN_107365f58();
  func_0x00010736a934();
  uVar5 = *param_1;
  uVar2 = param_1[1];
  uVar1 = *(long *)(param_2 + 8) + (uVar5 - uVar2);
  uVar3 = uVar1;
  for (uVar4 = uVar5; uVar4 != uVar2; uVar4 = uVar4 + 0x20) {
    FUN_107365e34(uVar3,uVar4);
    uVar3 = uVar3 + 0x20;
  }
  for (; uVar5 != uVar2; uVar5 = uVar5 + 0x20) {
    uVar3 = uVar5;
    FUN_1073671cc(uVar5);
  }
  unaff_x19[1] = uVar1;
  uVar4 = *unaff_x20;
  *unaff_x20 = uVar1;
  unaff_x20[1] = uVar4;
  unaff_x19[1] = uVar4;
  uVar4 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar4;
  uVar4 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar4;
  *unaff_x19 = unaff_x19[1];
  return uVar3;
}



/* Entry: 107365eb8; end: 107365f57;  */

void FUN_107365eb8(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long lVar5;
  
  func_0x00010736a934();
  lVar5 = *param_1;
  lVar2 = param_1[1];
  lVar1 = *(long *)(param_2 + 8) + (lVar5 - lVar2);
  lVar3 = lVar1;
  for (lVar4 = lVar5; lVar4 != lVar2; lVar4 = lVar4 + 0x20) {
    FUN_107365e34(lVar3,lVar4);
    lVar3 = lVar3 + 0x20;
  }
  for (; lVar5 != lVar2; lVar5 = lVar5 + 0x20) {
    FUN_1073671cc(lVar5);
  }
  unaff_x19[1] = lVar1;
  lVar4 = *unaff_x20;
  *unaff_x20 = lVar1;
  unaff_x20[1] = lVar4;
  unaff_x19[1] = lVar4;
  lVar4 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = lVar4;
  lVar4 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = lVar4;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 107365f58; end: 107365f63;  */

long * FUN_107365f58(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  func_0x00010736ae68();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x000107365fac();
  }
  lVar1 = param_4 + param_3 * 0x20;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x20;
  return param_1;
}



/* Entry: 107365f64; end: 107365fcf;  */

long * FUN_107365f64(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x000107365fac();
  }
  lVar1 = param_4 + param_3 * 0x20;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x20;
  return param_1;
}



/* Entry: 107365fd0; end: 107365feb;  */

long * FUN_107365fd0(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3b == 0) {
    plVar1 = (long *)(param_2 << 5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  FUN_107366018();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107365fec; end: 107366017;  */

long * FUN_107365fec(long *param_1)

{
  FUN_107366018();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107366018; end: 10736601f;  */

void FUN_107366018(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010736a934(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x20;
    FUN_1073671cc();
  }
  return;
}



/* Entry: 107366020; end: 107366107;  */

void FUN_107366020(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010736a934();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x20;
    FUN_1073671cc();
  }
  return;
}



/* Entry: 107366108; end: 10736611f;  */

void FUN_107366108(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107366120; end: 107366147;  */

long FUN_107366120(long param_1)

{
  FUN_107366148();
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 107366148; end: 10736618f;  */

void FUN_107366148(long param_1)

{
  undefined8 *unaff_x19;
  
  func_0x00010736ae0c();
  if (param_1 != 0) {
    func_0x000107250860();
  }
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  func_0x0001072508cc(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 107366190; end: 1073661ef;  */

void FUN_107366190(undefined8 param_1)

{
  ulong extraout_x8;
  long unaff_x27;
  
  func_0x00010736a900();
  func_0x00010736a58c();
  while( true ) {
    func_0x00010736a7e4();
    while (unaff_x27 != 0) {
      func_0x00010736a7b8();
      if ((int)param_1 != 0) {
        func_0x00010736af48();
        return;
      }
      func_0x00010736addc();
    }
    func_0x00010736a78c();
    if ((extraout_x8 & 1) != 0) break;
    func_0x00010736af54();
  }
  return;
}



/* Entry: 1073661f0; end: 10736622f;  */

void FUN_1073661f0(void)

{
  ulong unaff_x20;
  
  func_0x00010736a8f0();
  FUN_107366230();
  func_0x00010736acb8();
  if ((unaff_x20 & 1) != 0) {
    func_0x00010736aacc();
    FUN_1073663b0();
  }
  func_0x00010736ac94();
  func_0x00010736a8d0();
  return;
}



/* Entry: 107366230; end: 10736629b;  */

void FUN_107366230(ulong param_1)

{
  uint extraout_w8;
  long unaff_x28;
  
  func_0x00010736a900();
  func_0x00010736a8c4();
  func_0x00010736a5b8();
  func_0x00010736a5c8();
  while( true ) {
    func_0x00010736a834();
    while (unaff_x28 != 0) {
      func_0x00010736a66c();
      if ((param_1 & 1) != 0) {
        return;
      }
      func_0x00010736afbc();
    }
    func_0x00010736a78c();
    if ((extraout_w8 & 1) != 0) break;
    func_0x00010736afb0();
  }
  func_0x00010736aa0c();
  FUN_10736629c();
  func_0x00010736ade8();
  return;
}



/* Entry: 10736629c; end: 107366307;  */

void FUN_10736629c(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x9;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  func_0x00010736a570();
  func_0x00010736ac24();
  if ((extraout_x9 == 0) && (func_0x00010736ad5c(), !(bool)in_ZR)) {
    func_0x00010736ad50();
    if (((bool)in_CY) && (func_0x00010736a750(), (bool)in_CY)) {
      func_0x00010736a8b0();
    }
    else {
      func_0x00010736a8e0();
      FUN_107366308();
    }
    func_0x00010736a7fc();
  }
  func_0x00010736a480();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010736b00c();
  func_0x00010736a778();
  func_0x00010726d624();
  func_0x00010736ad04();
  for (; unaff_x23 != unaff_x24; unaff_x24 = unaff_x24 + 1) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      func_0x00010736aa4c();
      func_0x00010736a710();
      func_0x00010736a548();
      func_0x00010736adf4();
      FUN_107366374();
    }
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 107366308; end: 107366373;  */

void FUN_107366308(void)

{
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  func_0x00010736b00c();
  func_0x00010736a778();
  func_0x00010726d624();
  func_0x00010736ad04();
  for (; unaff_x23 != unaff_x24; unaff_x24 = unaff_x24 + 1) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      func_0x00010736aa4c();
      func_0x00010736a710();
      func_0x00010736a548();
      func_0x00010736adf4();
      FUN_107366374();
    }
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 107366374; end: 10736639f;  */

long FUN_107366374(long param_1)

{
  long unaff_x19;
  
  func_0x00010736abf4();
  FUN_1073255f0(param_1 + 0x38,unaff_x19 + 0x38);
  func_0x00010736ae48();
  func_0x0001072b978c();
  func_0x00010736a9f4();
  return unaff_x19;
}



/* Entry: 1073663a0; end: 1073663af;  */

long FUN_1073663a0(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x30);
  if (lVar1 == -1) {
    lVar1 = param_2;
    func_0x000104c2fcd4();
    func_0x000104c2fcf0(param_2);
    func_0x0001001030f4(lVar1,lVar1 + param_2);
    func_0x000104c343b0();
    func_0x000104c2ffc0();
  }
  return lVar1;
}



/* Entry: 1073663b0; end: 1073663eb;  */

void FUN_1073663b0(long param_1)

{
  func_0x000104c2fe00();
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  return;
}



/* Entry: 1073663ec; end: 107366437;  */

void FUN_1073663ec(void)

{
  ulong unaff_x20;
  long unaff_x21;
  long unaff_x22;
  
  func_0x00010736a8f0();
  FUN_107366438();
  func_0x00010736acb8();
  if ((unaff_x20 & 1) != 0) {
    FUN_107366608(*(long *)(unaff_x21 + 8) + unaff_x22 * 0x70);
  }
  func_0x00010736ac94();
  func_0x00010736a8d0();
  return;
}



/* Entry: 107366438; end: 1073664a3;  */

void FUN_107366438(ulong param_1)

{
  uint extraout_w8;
  long unaff_x28;
  
  func_0x00010736a900();
  func_0x00010736a8c4();
  func_0x00010736a5b8();
  func_0x00010736a5c8();
  while( true ) {
    func_0x00010736a834();
    while (unaff_x28 != 0) {
      func_0x00010736a66c();
      if ((param_1 & 1) != 0) {
        return;
      }
      func_0x00010736afbc();
    }
    func_0x00010736a78c();
    if ((extraout_w8 & 1) != 0) break;
    func_0x00010736afb0();
  }
  func_0x00010736aa0c();
  FUN_1073664a4();
  func_0x00010736ade8();
  return;
}



/* Entry: 1073664a4; end: 107366517;  */

void FUN_1073664a4(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x9;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  func_0x00010736a570();
  func_0x00010736ac24();
  if ((extraout_x9 == 0) && (func_0x00010736ad5c(), !(bool)in_ZR)) {
    func_0x00010736ad50();
    if (((bool)in_CY) && (func_0x00010736a750(), (bool)in_CY)) {
      func_0x00010736a8b0();
    }
    else {
      func_0x00010736a8e0();
      FUN_107366518();
    }
    func_0x00010736a7fc();
  }
  func_0x00010736a480();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010736b00c();
  func_0x00010736a778();
  func_0x0001072a9a98();
  func_0x00010736ad04();
  for (; unaff_x23 != unaff_x24; unaff_x24 = unaff_x24 + 1) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      func_0x00010736aa4c();
      func_0x00010736a710();
      func_0x00010736a548();
      func_0x00010736adf4();
      FUN_107366584();
    }
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 107366518; end: 107366583;  */

void FUN_107366518(void)

{
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  func_0x00010736b00c();
  func_0x00010736a778();
  func_0x0001072a9a98();
  func_0x00010736ad04();
  for (; unaff_x23 != unaff_x24; unaff_x24 = unaff_x24 + 1) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      func_0x00010736aa4c();
      func_0x00010736a710();
      func_0x00010736a548();
      func_0x00010736adf4();
      FUN_107366584();
    }
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 107366584; end: 1073665f7;  */

long FUN_107366584(void)

{
  long lVar1;
  code *extraout_x8;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010736a934();
  func_0x000104c318bc();
  lVar1 = *(long *)(unaff_x19 + 0x50);
  if (lVar1 == 0) {
    *(undefined8 *)(unaff_x20 + 0x50) = 0;
  }
  else if (lVar1 == unaff_x19 + 0x38) {
    *(long *)(unaff_x20 + 0x50) = unaff_x20 + 0x38;
    func_0x00010736aa2c(*(undefined8 *)(unaff_x19 + 0x50));
    (*extraout_x8)();
  }
  else {
    *(long *)(unaff_x20 + 0x50) = lVar1;
    *(undefined8 *)(unaff_x19 + 0x50) = 0;
  }
  uVar3 = *(undefined8 *)(unaff_x19 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x58);
  *(undefined1 *)(unaff_x20 + 0x68) = *(undefined1 *)(unaff_x19 + 0x68);
  *(undefined8 *)(unaff_x20 + 0x60) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x58) = uVar2;
  func_0x00010736ae48();
  func_0x0001072ab37c();
  func_0x00010736a9f4();
  return unaff_x19;
}



/* Entry: 1073665f8; end: 107366607;  */

long FUN_1073665f8(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x30);
  if (lVar1 == -1) {
    lVar1 = param_2;
    func_0x000104c2fcd4();
    func_0x000104c2fcf0(param_2);
    func_0x0001001030f4(lVar1,lVar1 + param_2);
    func_0x000104c343b0();
    func_0x000104c2ffc0();
  }
  return lVar1;
}



/* Entry: 107366608; end: 10736662f;  */

void FUN_107366608(long param_1)

{
  func_0x000104c2fe00();
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}



/* Entry: 107366630; end: 107366647;  */

void FUN_107366630(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107366648; end: 10736666b;  */

undefined8 FUN_107366648(undefined8 param_1)

{
  FUN_10736666c(param_1,0);
  return param_1;
}



/* Entry: 10736666c; end: 107366683;  */

void FUN_10736666c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    func_0x0001073660b4(lVar1 + 0x18);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 107366684; end: 1073666c7;  */

void FUN_107366684(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x0001073660b4(param_2 + 0x18);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 1073666c8; end: 1073666ff;  */

void FUN_1073666c8(undefined8 *param_1)

{
  char *pcVar1;
  char *extraout_x8;
  
  pcVar1 = (char *)*param_1;
  while (*pcVar1 < -1) {
    func_0x00010736ab28();
    pcVar1 = extraout_x8;
  }
  if (*pcVar1 != -1) {
    return;
  }
  *param_1 = 0;
  return;
}



/* Entry: 107366700; end: 10736672b;  */

undefined8 * FUN_107366700(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a56b0;
  func_0x00010725b1d4(param_1 + 1);
  return param_1;
}



/* Entry: 10736672c; end: 10736673f;  */

void FUN_10736672c(void)

{
  FUN_107366700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107366740; end: 107366763;  */

long FUN_107366740(undefined8 *param_1)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x00010736ab74();
  func_0x00010736a934();
  *param_1 = &PTR_FUN_1109a56b0;
  FUN_107366af4(param_1 + 1);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x28) = *(undefined8 *)(unaff_x19 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar1;
  return unaff_x20;
}



/* Entry: 107366764; end: 107366787;  */

void FUN_107366764(long param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x00010736a934(param_2,param_1 + 8);
  *param_2 = &PTR_FUN_1109a56b0;
  FUN_107366af4(param_2 + 1);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x28) = *(undefined8 *)(unaff_x19 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar1;
  return;
}



/* Entry: 107366788; end: 107366a8b;  */

void FUN_107366788(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 in_ZR;
  undefined1 uVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 extraout_x8;
  long unaff_x19;
  long lVar10;
  undefined1 auStack_220 [16];
  long lStack_210;
  long lStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined1 auStack_1d0 [24];
  undefined1 auStack_1b8 [24];
  undefined1 auStack_1a0 [24];
  byte bStack_188;
  long lStack_180;
  undefined1 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 auStack_158 [24];
  undefined8 *puStack_140;
  undefined1 auStack_138 [56];
  undefined1 auStack_100 [32];
  undefined4 uStack_e0;
  undefined1 uStack_d8;
  undefined1 uStack_d0;
  undefined8 uStack_10;
  
  func_0x00010736aff4();
  iVar5 = (int)auStack_220;
  func_0x00010736a6ac();
  uStack_10 = extraout_x8;
  func_0x00010736aeec();
  func_0x00010736ae54();
  if (iVar5 != 0) {
    lVar10 = *(long *)(unaff_x19 + 0x20);
    lVar6 = *param_2;
    lVar8 = param_2[1];
    FUN_107365bac();
    lStack_210 = lVar6;
    while (lStack_208 = lVar8, lStack_210 != 0) {
      lVar6 = lVar10 + 200;
      lVar9 = lVar8;
      FUN_107364f04();
      if ((lVar6 != 0) && (in_ZR = 0, *(char *)(lVar9 + 0x68) == '\x01')) {
        lVar6 = *(long *)(lVar8 + 0x38);
        lVar8 = *(long *)(lVar8 + 0x40);
        uStack_170 = 0;
        uStack_168 = 0;
        uStack_160 = 0;
        for (; uVar4 = lVar6 == lVar8, !(bool)uVar4; lVar6 = lVar6 + 0x58) {
          func_0x0001072d6ffc(auStack_100,lVar6);
          func_0x00010726d718(&uStack_170,auStack_100);
          func_0x000107269e60(auStack_100);
        }
        uStack_178 = 1;
        lStack_180 = lVar10 + 0x20;
        __ZNSt3__119__shared_mutex_base11lock_sharedEv(lVar10 + 0x20);
        func_0x00010002b838(auStack_1b8,&UNK_10f40ae1e);
        func_0x00010736aca0(auStack_1a0);
        func_0x00010736acc4();
        if ((bStack_188 & 1) == 0) {
          func_0x00010736af60();
          in_ZR = 0;
          if ((bool)uVar4) {
            FUN_1073630ec(&lStack_180);
            func_0x000104c2fe00(auStack_138,lVar9);
            FUN_107363124(auStack_100,auStack_138);
            uStack_e0 = 1;
            uStack_d8 = 0;
            uStack_d0 = 0;
            FUN_107362428(lVar10,lVar9,auStack_100);
            func_0x0001072ab37c(auStack_100);
            func_0x000104c2f714(auStack_138);
            FUN_10736315c(&lStack_180);
            func_0x00010002b838(auStack_1d0,&UNK_10f40ae1e);
            func_0x00010736aca0(auStack_158);
            FUN_107326484(auStack_1a0,auStack_158);
            func_0x0001072b9760(auStack_158);
            func_0x00010736acdc();
            uVar4 = bStack_188 == 1;
            in_ZR = uVar4;
            if ((bool)uVar4) goto LAB_10736687c;
          }
        }
        else {
LAB_10736687c:
          puVar7 = &uStack_1e8;
          func_0x0001072729e0(puVar7,&uStack_170);
          uVar3 = uStack_1d8;
          uVar2 = uStack_1e0;
          uVar1 = uStack_1e8;
          uStack_200 = uStack_1e8;
          uStack_1f8 = uStack_1e0;
          uStack_1f0 = uStack_1d8;
          uStack_1e8 = 0;
          uStack_1e0 = 0;
          uStack_1d8 = 0;
          puStack_140 = (undefined8 *)0x0;
          func_0x00010736aa8c();
          *puVar7 = &PTR_FUN_1109a6010;
          puVar7[1] = uVar1;
          puVar7[2] = uVar2;
          puVar7[3] = uVar3;
          uStack_1f8 = 0;
          uStack_1f0 = 0;
          uStack_200 = 0;
          puStack_140 = puVar7;
          FUN_1073631b0(lVar10,auStack_1a0,lVar9,auStack_158);
          FUN_1073671cc(auStack_158);
          func_0x00010726e43c(&uStack_200);
          func_0x00010726e43c(&uStack_1e8);
          in_ZR = uVar4;
        }
        func_0x0001072b9760(auStack_1a0);
        func_0x000100100f40(&lStack_180);
        func_0x00010726e43c(&uStack_170);
      }
      FUN_107365c0c(&lStack_210);
      lVar8 = lStack_208;
    }
  }
  func_0x00010736aa18();
  func_0x00010736a534(uStack_10);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001072b9760(auStack_158);
    func_0x00010736acdc();
    func_0x0001072b9760(auStack_1a0);
    func_0x000100100f40(&lStack_180);
    func_0x00010726e43c(&uStack_170);
    func_0x00010736aa18();
    func_0x00010736a888();
    func_0x00010736a920();
    func_0x00010736a8bc();
    func_0x00010736a6d0();
    return;
  }
  return;
}



/* Entry: 107366a8c; end: 107366ab3;  */

void FUN_107366a8c(undefined8 param_1)

{
  func_0x00010736a920();
  func_0x00010736a8bc(param_1,&PTR_DAT_1109a5720);
  func_0x00010736a6d0();
  return;
}



/* Entry: 107366ab4; end: 107366abf;  */

undefined ** FUN_107366ab4(void)

{
  return &PTR_DAT_1109a5720;
}



/* Entry: 107366ac0; end: 107366af3;  */

void FUN_107366ac0(undefined8 *param_1)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x00010736a934();
  *param_1 = &PTR_FUN_1109a56b0;
  FUN_107366af4(param_1 + 1);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x28) = *(undefined8 *)(unaff_x19 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar1;
  return;
}



/* Entry: 107366af4; end: 107366b23;  */

void FUN_107366af4(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010736abc4();
    } while (extraout_w10 != 0);
  }
  param_1[2] = param_2[2];
  return;
}



/* Entry: 107366b24; end: 107366c27;  */

void FUN_107366b24(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long **pplVar3;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long *plStack_30;
  undefined8 uStack_28;
  
  pplVar3 = &plStack_50;
  func_0x00010726fc00(&plStack_30,param_2);
  if (plStack_30 != (long *)0x0) {
    func_0x00010726fc3c();
    uVar2 = uStack_28;
    plVar1 = plStack_30;
    if (*plStack_30 != -1) {
      plStack_30 = (long *)0x0;
      uStack_28 = 0;
      *param_1 = plVar1;
      param_1[1] = uVar2;
      uStack_40 = 0;
      uStack_38 = 0;
      func_0x0001072508cc(&uStack_40);
      pplVar3 = &plStack_30;
      goto LAB_107366b9c;
    }
    func_0x00010726fc88();
  }
  func_0x0001072508cc(&plStack_30);
  *param_1 = 0;
  param_1[1] = 0;
  plStack_50 = (long *)0x0;
  uStack_48 = 0;
LAB_107366b9c:
  func_0x0001072508cc(pplVar3);
  return;
}



/* Entry: 107366c28; end: 107366cc7;  */

long FUN_107366c28(long *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar6 = param_1[1];
  if ((uVar6 != 0) && (param_1[3] != 0)) {
    uVar1 = *param_2;
    uVar7 = (ulong)uVar1;
    uVar8 = uVar6 - 1;
    uVar5 = (uint)uVar6;
    if ((uVar6 & uVar8) == 0) {
      uVar9 = (ulong)(uVar5 - 1 & uVar1);
    }
    else {
      uVar9 = uVar7;
      if (uVar6 <= uVar7) {
        uVar2 = 0;
        if (uVar5 != 0) {
          uVar2 = uVar1 / uVar5;
        }
        uVar9 = (ulong)(uVar1 - uVar2 * uVar5);
      }
    }
    plVar4 = *(long **)(*param_1 + uVar9 * 8);
    if (plVar4 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar4 = (long *)*plVar4;
        if (plVar4 == (long *)0x0) {
          return 0;
        }
        uVar10 = plVar4[1];
        if (uVar10 != uVar7) break;
        if (*(uint *)(plVar4 + 2) == uVar1) {
          return (long)plVar4;
        }
      }
      if ((uVar6 & uVar8) == 0) {
        uVar10 = uVar10 & uVar8;
      }
      else if (uVar6 <= uVar10) {
        uVar3 = 0;
        if (uVar6 != 0) {
          uVar3 = uVar10 / uVar6;
        }
        uVar10 = uVar10 - uVar3 * uVar6;
      }
    } while (uVar10 == uVar9);
  }
  return 0;
}



/* Entry: 107366cc8; end: 107366cff;  */

undefined8 FUN_107366cc8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_2;
  FUN_107366d00(auStack_38);
  FUN_107366648(auStack_38);
  return uVar1;
}



/* Entry: 107366d00; end: 107366e1b;  */

void FUN_107366d00(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  uVar4 = param_2[1];
  uVar3 = param_3[1];
  uVar7 = uVar4 - 1;
  if ((uVar4 & uVar7) == 0) {
    uVar3 = uVar7 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar8 * uVar4;
  }
  lVar6 = *param_2;
  plVar2 = *(long **)(lVar6 + uVar3 * 8);
  do {
    plVar5 = plVar2;
    plVar2 = (long *)*plVar5;
  } while ((long *)*plVar5 != param_3);
  if (plVar5 != param_2 + 2) {
    uVar8 = plVar5[1];
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_107366db4;
  }
  if (*param_3 != 0) {
    uVar8 = *(ulong *)(*param_3 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_107366db4;
  }
  *(undefined8 *)(lVar6 + uVar3 * 8) = 0;
LAB_107366db4:
  lVar9 = *param_3;
  if (lVar9 != 0) {
    uVar8 = *(ulong *)(lVar9 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar7 = 0;
      if (uVar4 != 0) {
        uVar7 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar7 * uVar4;
    }
    if (uVar8 != uVar3) {
      *(long **)(lVar6 + uVar8 * 8) = plVar5;
      lVar9 = *param_3;
    }
  }
  *plVar5 = lVar9;
  *param_3 = 0;
  param_2[3] = param_2[3] + -1;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined4 *)((long)param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return;
}



/* Entry: 107366e1c; end: 107366e3f;  */

undefined8 FUN_107366e1c(undefined8 param_1)

{
  func_0x00010736ad9c();
  func_0x000104c2f714();
  return param_1;
}



/* Entry: 107366e40; end: 107366e53;  */

void FUN_107366e40(void)

{
  FUN_107366e1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107366e54; end: 107366e77;  */

undefined8 FUN_107366e54(undefined8 param_1)

{
  func_0x00010736ac84();
  func_0x00010736ad9c();
  func_0x000104c2fe00();
  return param_1;
}



/* Entry: 107366e78; end: 107366e9b;  */

undefined8 FUN_107366e78(long param_1,undefined8 param_2)

{
  func_0x00010736ad9c(param_2,param_1 + 8);
  func_0x000104c2fe00();
  return param_2;
}



/* Entry: 107366e9c; end: 107366feb;  */

void FUN_107366e9c(long param_1)

{
  undefined8 *puVar1;
  undefined1 in_ZR;
  long lVar2;
  int extraout_w10;
  long *unaff_x19;
  long unaff_x21;
  undefined8 *unaff_x23;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  func_0x00010736a8f0();
  func_0x00010736a614();
  func_0x0001077f3c4c();
  func_0x0001077f3790();
  func_0x0001072ab0e0(&uStack_60,1);
  puVar1 = puStack_50;
  lVar2 = unaff_x23[1];
  uStack_68 = unaff_x23[1];
  uStack_70 = *unaff_x23;
  puStack_50[2] = 0;
  *puStack_50 = &PTR_DAT_11099a248;
  puStack_50[1] = 0;
  if (lVar2 != 0) {
    do {
      func_0x00010736abc4();
    } while (extraout_w10 != 0);
  }
  FUN_1073af27c(&uStack_90,0,0);
  uStack_78 = uStack_88;
  uStack_80 = uStack_90;
  uStack_90 = 0;
  uStack_88 = 0;
  FUN_107352640(puVar1 + 3,unaff_x21 + 8,&uStack_70,param_1 + 8,0x1131ad3d0,&uStack_80);
  func_0x00010724b8b8(&uStack_80);
  func_0x00010724b8b8(&uStack_90);
  func_0x00010725b6e0(&uStack_70);
  puVar1 = puStack_50;
  puStack_50 = (undefined8 *)0x0;
  func_0x0001072ab160(&uStack_60);
  *unaff_x19 = (long)(puVar1 + 3);
  unaff_x19[1] = (long)puVar1;
  uStack_60 = 0;
  uStack_58 = 0;
  *(undefined4 *)(unaff_x19 + 2) = 0;
  func_0x00010726ee94();
  func_0x00010736a534(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010724b8b8(&uStack_80);
    func_0x00010724b8b8(&uStack_90);
    func_0x00010725b6e0(&uStack_70);
    __ZNSt3__119__shared_weak_countD2Ev(puVar1);
    func_0x0001072ab160(&uStack_60);
    func_0x00010736a888();
    func_0x00010736a920();
    func_0x00010736a8bc();
    func_0x00010736a6d0();
    return;
  }
  return;
}



/* Entry: 107366fec; end: 107367013;  */

void FUN_107366fec(undefined8 param_1)

{
  func_0x00010736a920();
  func_0x00010736a8bc(param_1,&PTR_DAT_1109a57a0);
  func_0x00010736a6d0();
  return;
}



/* Entry: 107367014; end: 10736701f;  */

undefined ** FUN_107367014(void)

{
  return &PTR_DAT_1109a57a0;
}



/* Entry: 107367020; end: 10736706f;  */

undefined8 FUN_107367020(undefined8 param_1)

{
  func_0x00010736ad9c();
  func_0x000104c2fe00();
  return param_1;
}



/* Entry: 107367070; end: 107367083;  */

void FUN_107367070(void)

{
  func_0x000107367044();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107367084; end: 1073670bb;  */

undefined8 FUN_107367084(void)

{
  undefined8 uVar1;
  
  uVar1 = 0xb8;
  __Znwm(0xb8);
  FUN_10736717c();
  return uVar1;
}



/* Entry: 1073670bc; end: 1073670df;  */

void FUN_1073670bc(long param_1,undefined8 param_2)

{
  func_0x00010736a864(param_2,param_1 + 8);
  func_0x00010736a990();
  func_0x00010736af6c();
  func_0x00010726933c();
  return;
}



/* Entry: 1073670e0; end: 107367147;  */

void FUN_1073670e0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long extraout_x8;
  
  lVar1 = param_3;
  func_0x00010736a8c4();
  if ((*(char *)(lVar1 + 8) != '\0') && (*(char *)(*(long *)(param_1 + 8) + 0x148) == '\x01')) {
    FUN_1073671b4(param_3);
    func_0x00010736aa94();
    func_0x00010736af84();
    FUN_1073632d4();
  }
  func_0x00010736af78();
                    /* WARNING: Could not recover jumptable at 0x00010736acf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(extraout_x8 + 0x10))();
  return;
}



/* Entry: 107367148; end: 10736716f;  */

void FUN_107367148(undefined8 param_1)

{
  func_0x00010736a920();
  func_0x00010736a8bc(param_1,&PTR_DAT_1109a5830);
  func_0x00010736a6d0();
  return;
}



/* Entry: 107367170; end: 10736717b;  */

undefined ** FUN_107367170(void)

{
  return &PTR_DAT_1109a5830;
}



/* Entry: 10736717c; end: 1073671b3;  */

void FUN_10736717c(void)

{
  func_0x00010736a864();
  func_0x00010736a990();
  func_0x00010736af6c();
  func_0x00010726933c();
  return;
}



/* Entry: 1073671b4; end: 1073671cb;  */

void FUN_1073671b4(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
  func_0x00010736abd4();
  if ((bool)in_ZR) {
    uVar1 = 0x20;
  }
  else {
    if (param_1 == 0) {
      return;
    }
    uVar1 = 0x28;
  }
  func_0x00010736a808(uVar1);
  return;
}



/* Entry: 1073671cc; end: 10736722b;  */

void FUN_1073671cc(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x00010736abd4();
  if ((bool)in_ZR) {
    uVar1 = 0x20;
  }
  else {
    if (param_1 == 0) {
      return;
    }
    uVar1 = 0x28;
  }
  func_0x00010736a808(uVar1);
  return;
}



/* Entry: 10736722c; end: 10736723f;  */

void FUN_10736722c(void)

{
  func_0x000107367200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107367240; end: 107367273;  */

undefined8 FUN_107367240(undefined8 param_1)

{
  func_0x00010736ad10();
  FUN_107367388();
  return param_1;
}



/* Entry: 107367274; end: 107367297;  */

void FUN_107367274(long param_1,undefined8 param_2)

{
  func_0x00010736a8c4(param_2,param_1 + 8);
  func_0x00010736aa54(&PTR_SUB_1109a5850);
  FUN_107366af4();
  func_0x00010736af30();
  FUN_1073655b8();
  return;
}



/* Entry: 107367298; end: 107367353;  */

void FUN_107367298(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_58 [16];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010736a8c4();
  iVar2 = (int)auStack_58;
  func_0x00010736aeec();
  func_0x00010736ae54();
  if (iVar2 != 0) {
    uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    lVar1 = *(long *)(unaff_x19 + 0x28);
    for (lVar5 = *(long *)(unaff_x19 + 0x20); lVar5 != lVar1; lVar5 = lVar5 + 0x58) {
      lVar3 = lVar5;
      func_0x000107932f68(lVar5);
      func_0x000100651cb4(&uStack_48,lVar3);
      func_0x00010b4d1758(lVar5,uStack_48,(int)uStack_40 - (int)uStack_48);
      FUN_1073a71bc(uVar4,*(ulong *)(lVar5 + 0x30) & 0xfffffffffffffffc,unaff_x19 + 0x38,&uStack_48,
                    *(undefined8 *)(unaff_x19 + 0x50),*(undefined8 *)(unaff_x19 + 0x58));
    }
    func_0x000100100fec(&uStack_48);
  }
  func_0x000107270b00(auStack_58);
  return;
}



/* Entry: 107367354; end: 10736737b;  */

void FUN_107367354(undefined8 param_1)

{
  func_0x00010736a920();
  func_0x00010736a8bc(param_1,&PTR_DAT_1109a58b0);
  func_0x00010736a6d0();
  return;
}



/* Entry: 10736737c; end: 107367387;  */

undefined ** FUN_10736737c(void)

{
  return &PTR_DAT_1109a58b0;
}



/* Entry: 107367388; end: 1073673c7;  */

void FUN_107367388(void)

{
  func_0x00010736a8c4();
  func_0x00010736aa54(&PTR_SUB_1109a5850);
  FUN_107366af4();
  func_0x00010736af30();
  FUN_1073655b8();
  return;
}



/* Entry: 1073673c8; end: 1073673f3;  */

undefined8 * FUN_1073673c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a58d0;
  FUN_107363990(param_1 + 1);
  return param_1;
}



/* Entry: 1073673f4; end: 107367407;  */

void FUN_1073673f4(void)

{
  FUN_1073673c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107367408; end: 10736743f;  */

undefined8 FUN_107367408(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x70;
  __Znwm(0x70);
  FUN_107367550();
  return uVar1;
}



/* Entry: 107367440; end: 107367463;  */

void FUN_107367440(long param_1,undefined8 param_2)

{
  func_0x00010736a8c4(param_2,param_1 + 8);
  func_0x00010736aa54(&PTR_FUN_1109a58d0);
  FUN_107366af4();
  func_0x00010736af30();
  FUN_1073657e4();
  return;
}



/* Entry: 107367464; end: 10736751b;  */

void FUN_107367464(void)

{
  long lVar1;
  int iVar2;
  long unaff_x19;
  long lVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x00010736a934();
  FUN_107366b24(auStack_70,unaff_x20 + 8);
  iVar2 = (int)unaff_x20 + 8;
  func_0x000107366bac();
  if (iVar2 != 0) {
    lVar4 = *(long *)(unaff_x19 + 0x10);
    func_0x00010724ef84(auStack_48,unaff_x20 + 0x20);
    lVar1 = *(long *)(unaff_x20 + 0x60);
    for (lVar3 = *(long *)(unaff_x20 + 0x58); lVar3 != lVar1; lVar3 = lVar3 + 0x38) {
      func_0x00010724ef84(auStack_60,lVar3);
      FUN_1073a7244(lVar4 + 0xe60,auStack_60,auStack_48);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_60);
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  }
  func_0x00010736aa18();
  return;
}



/* Entry: 10736751c; end: 107367543;  */

void FUN_10736751c(undefined8 param_1)

{
  func_0x00010736a920();
  func_0x00010736a8bc(param_1,&PTR_DAT_1109a5930);
  func_0x00010736a6d0();
  return;
}



/* Entry: 107367544; end: 10736754f;  */

undefined ** FUN_107367544(void)

{
  return &PTR_DAT_1109a5930;
}



/* Entry: 107367550; end: 10736758f;  */

void FUN_107367550(void)

{
  func_0x00010736a8c4();
  func_0x00010736aa54(&PTR_FUN_1109a58d0);
  FUN_107366af4();
  func_0x00010736af30();
  FUN_1073657e4();
  return;
}


