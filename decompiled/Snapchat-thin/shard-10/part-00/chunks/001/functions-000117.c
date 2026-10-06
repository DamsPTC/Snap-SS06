/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1074f4804; end: 1074f4813;  */

void FUN_1074f4804(long *param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  
  uVar2 = param_2 * 0x28;
  plVar1 = (long *)(*param_1 + 0x100000);
  if ((ulong)((long)plVar1 - *plVar1) < uVar2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(uVar2);
    return;
  }
  *plVar1 = *plVar1 + uVar2;
  return;
}



/* Entry: 1074f4814; end: 1074f48eb;  */

void FUN_1074f4814(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uStack_60;
  undefined8 **ppuStack_58;
  undefined8 **ppuStack_50;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  func_0x0001074feec8();
  ppuStack_58 = &puStack_40;
  ppuStack_50 = &puStack_38;
  uStack_60 = param_1;
  puStack_40 = param_4;
  for (; puStack_38 = param_4, param_2 != unaff_x19; param_2 = param_2 + 5) {
    *param_4 = *param_2;
    func_0x0001072a69bc(param_4 + 1,param_2 + 1);
    param_4 = puStack_38 + 5;
  }
  func_0x0001074ffa50();
  for (; unaff_x20 != unaff_x19; unaff_x20 = unaff_x20 + 5) {
    func_0x0001072a6a38(unaff_x20 + 1);
  }
  func_0x0001074f48a4(&uStack_60);
  return;
}



/* Entry: 1074f48ec; end: 1074f4927;  */

long * FUN_1074f48ec(long *param_1)

{
  long lVar1;
  
  FUN_1074f4928();
  lVar1 = *param_1;
  if (lVar1 != 0) {
    FUN_1074f4968(param_1[4],lVar1,(param_1[3] - lVar1) / 0x28);
  }
  return param_1;
}



/* Entry: 1074f4928; end: 1074f492f;  */

void FUN_1074f4928(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001074fe980(param_1,*(undefined8 *)(param_1 + 8));
  while (lVar1 = *(long *)(unaff_x20 + 0x10), unaff_x19 != lVar1) {
    *(long *)(unaff_x20 + 0x10) = lVar1 + -0x28;
    func_0x0001072a6a38(lVar1 + -0x20);
  }
  return;
}



/* Entry: 1074f4930; end: 1074f4967;  */

void FUN_1074f4930(void)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001074fe980();
  while (lVar1 = *(long *)(unaff_x20 + 0x10), unaff_x19 != lVar1) {
    *(long *)(unaff_x20 + 0x10) = lVar1 + -0x28;
    func_0x0001072a6a38(lVar1 + -0x20);
  }
  return;
}



/* Entry: 1074f4968; end: 1074f4977;  */

void FUN_1074f4968(ulong *param_1,ulong *param_2,long param_3)

{
  ulong *puVar1;
  
  puVar1 = (ulong *)*param_1 + 0x20000;
  if (param_2 < (ulong *)*param_1 || puVar1 < param_2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  if (param_2 + param_3 * 5 != (ulong *)*puVar1) {
    return;
  }
  *puVar1 = (ulong)param_2;
  return;
}



/* Entry: 1074f4978; end: 1074f49d3;  */

void FUN_1074f4978(void)

{
  func_0x0001074fe834();
  func_0x0001074f499c();
  return;
}



/* Entry: 1074f49d4; end: 1074f49db;  */

void FUN_1074f49d4(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001074fe980(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x20;
    FUN_1074f4668();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1074f49dc; end: 1074f4a3b;  */

void FUN_1074f49dc(void)

{
  func_0x0001074fe834();
  func_0x0001074f4a00();
  return;
}



/* Entry: 1074f4a3c; end: 1074f4a43;  */

void FUN_1074f4a3c(undefined8 *param_1)

{
  long unaff_x19;
  long unaff_x20;
  long lVar1;
  
  func_0x0001074fe980(param_1,*param_1);
  for (lVar1 = param_1[1]; lVar1 != unaff_x19; lVar1 = lVar1 + -0x28) {
    func_0x0001072a6a38(lVar1 + -0x20);
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1074f4a44; end: 1074f4a7f;  */

void FUN_1074f4a44(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  long lVar1;
  
  func_0x0001074fe980();
  for (lVar1 = *(long *)(param_1 + 8); lVar1 != unaff_x19; lVar1 = lVar1 + -0x28) {
    func_0x0001072a6a38(lVar1 + -0x20);
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1074f4a80; end: 1074f4abf;  */

void FUN_1074f4a80(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}



/* Entry: 1074f4ac0; end: 1074f4adf;  */

void FUN_1074f4ac0(void)

{
  func_0x0001074fe7f8();
  func_0x0001074fe430();
  return;
}



/* Entry: 1074f4ae0; end: 1074f4b17;  */

long * FUN_1074f4ae0(long *param_1)

{
  long lVar1;
  
  FUN_1074f4b18();
  lVar1 = *param_1;
  if (lVar1 != 0) {
    func_0x0001074f4620(param_1[4],lVar1,param_1[3] - lVar1 >> 3);
  }
  return param_1;
}



/* Entry: 1074f4b18; end: 1074f4b3b;  */

void FUN_1074f4b18(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 1074f4b3c; end: 1074f4b7b;  */

undefined8 * FUN_1074f4b3c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *unaff_x19;
  
  func_0x0001074fea4c();
  if (param_1 < (undefined8 *)unaff_x19[2]) {
    puVar1 = param_1 + 1;
    *param_1 = *param_2;
  }
  else {
    puVar1 = unaff_x19;
    FUN_1074f4b7c();
  }
  unaff_x19[1] = puVar1;
  return puVar1 + -1;
}



/* Entry: 1074f4b7c; end: 1074f4c0b;  */

long FUN_1074f4b7c(long param_1)

{
  long lVar1;
  long *unaff_x19;
  long lVar2;
  undefined8 *unaff_x20;
  long *plStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  long *plStack_40;
  long *plStack_38;
  
  func_0x0001074fe9f4();
  func_0x0001074ffa98();
  FUN_1074f4c0c();
  lVar2 = *unaff_x19;
  lVar1 = unaff_x19[1];
  plStack_58 = unaff_x19 + 3;
  plStack_38 = plStack_58;
  if (param_1 == 0) {
    plStack_58 = (long *)0x0;
  }
  else {
    FUN_1074f45a0();
  }
  puStack_50 = (undefined8 *)((long)plStack_58 + (lVar1 - lVar2));
  plStack_40 = plStack_58 + param_1;
  puStack_48 = puStack_50 + 1;
  *puStack_50 = *unaff_x20;
  func_0x0001074fec24();
  FUN_1074f4ac0();
  lVar2 = unaff_x19[1];
  FUN_1074f4ae0(&plStack_58);
  return lVar2;
}



/* Entry: 1074f4c0c; end: 1074f4c4b;  */

ulong FUN_1074f4c0c(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uVar2;
  undefined1 auStack_68 [16];
  undefined8 *puStack_58;
  
  if (param_2 >> 0x3d != 0) {
    FUN_1074f4594();
    func_0x0001074fed84();
    func_0x0001074ffa98();
    FUN_1074f4cdc();
    func_0x0001074ff474();
    FUN_1074f47b0(auStack_68);
    *puStack_58 = *unaff_x21;
    uVar2 = *unaff_x20;
    puStack_58[2] = unaff_x20[1];
    puStack_58[1] = uVar2;
    *(undefined4 *)(puStack_58 + 4) = 0;
    puStack_58 = puStack_58 + 5;
    func_0x0001074fec24();
    FUN_1074f476c();
    uVar1 = param_1[1];
    func_0x0001074ff3b8();
    return uVar1;
  }
  uVar1 = param_1[2] - *param_1 >> 2;
  if (uVar1 <= param_2) {
    uVar1 = param_2;
  }
  if (0x7ffffffffffffff7 < (ulong)(param_1[2] - *param_1)) {
    uVar1 = 0x1fffffffffffffff;
  }
  return uVar1;
}



/* Entry: 1074f4c4c; end: 1074f4cdb;  */

undefined8 FUN_1074f4c4c(long param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined1 auStack_58 [16];
  undefined8 *puStack_48;
  
  func_0x0001074fed84();
  func_0x0001074ffa98();
  FUN_1074f4cdc();
  func_0x0001074ff474();
  FUN_1074f47b0(auStack_58);
  *puStack_48 = *unaff_x21;
  uVar1 = *unaff_x20;
  puStack_48[2] = unaff_x20[1];
  puStack_48[1] = uVar1;
  *(undefined4 *)(puStack_48 + 4) = 0;
  puStack_48 = puStack_48 + 5;
  func_0x0001074fec24();
  FUN_1074f476c();
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x0001074ff3b8();
  return uVar1;
}



/* Entry: 1074f4cdc; end: 1074f4d23;  */

/* WARNING: Possible PIC construction at 0x0001074f4d38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001074f4d3c) */

long * FUN_1074f4cdc(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  
  if ((long *)0x666666666666666 < param_2) {
    FUN_1074f4760();
    func_0x0001072b0400(param_1 + 10);
    func_0x0001072a88ac();
    func_0x0001072afd84(param_1);
    func_0x0001072a8870();
    return param_1;
  }
  uVar1 = (param_1[2] - *param_1) / 0x28;
  plVar2 = (long *)(uVar1 * 2);
  if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
    plVar2 = param_2;
  }
  if (0x333333333333332 < uVar1) {
    plVar2 = (long *)0x666666666666666;
  }
  return plVar2;
}



/* Entry: 1074f4d24; end: 1074f4d53;  */

/* WARNING: Possible PIC construction at 0x0001074f4d38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001074f4d3c) */

long FUN_1074f4d24(long param_1)

{
  func_0x0001072b0400(param_1 + 0x50);
  func_0x0001072a88ac();
  func_0x0001072afd84(param_1);
  func_0x0001072a8870();
  return param_1;
}



/* Entry: 1074f4d54; end: 1074f4d5f;  */

void FUN_1074f4d54(void)

{
  func_0x0001074ff6d4();
  return;
}



/* Entry: 1074f4d60; end: 1074f4d8f;  */

void FUN_1074f4d60(void)

{
  return;
}



/* Entry: 1074f4d90; end: 1074f4e1f;  */

void FUN_1074f4d90(long param_1)

{
  func_0x0001074fea4c();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1074f4e20; end: 1074f4e67;  */

void FUN_1074f4e20(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x0001074ffae8();
  if (unaff_x20 != 0) {
    pcVar1 = (char *)*unaff_x19;
    lVar2 = unaff_x19[1];
    while (unaff_x20 != 0) {
      if (-1 < *pcVar1) {
        FUN_1074f4e68();
      }
      lVar2 = lVar2 + 0x50;
      func_0x0001074ff994(lVar2);
    }
    func_0x0001074fe63c();
  }
  return;
}



/* Entry: 1074f4e68; end: 1074f4ea3;  */

long FUN_1074f4e68(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)(param_1 + 0x38);
  if (*plVar1 != 0) {
    FUN_1074f4ea4(plVar1);
    __ZdlPv(*plVar1);
  }
  func_0x0001074fea00();
  return param_1;
}



/* Entry: 1074f4ea4; end: 1074f4eab;  */

void FUN_1074f4ea4(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001074fe980(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x90;
    func_0x0001074f8514();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1074f4eac; end: 1074f5213;  */

void FUN_1074f4eac(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001074fe980();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x90;
    func_0x0001074f8514();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1074f5214; end: 1074f522b;  */

void FUN_1074f5214(undefined8 *param_1)

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



/* Entry: 1074f522c; end: 1074f525b;  */

void FUN_1074f522c(void)

{
  long extraout_x8;
  
  func_0x0001074feb74();
  if (extraout_x8 != 0) {
    FUN_1074f525c();
    func_0x0001074fe63c();
  }
  return;
}



/* Entry: 1074f525c; end: 1074f52b7;  */

void FUN_1074f525c(void)

{
  long unaff_x19;
  char *unaff_x20;
  
  func_0x0001074fed78();
  for (; unaff_x19 != 0; unaff_x19 = unaff_x19 + -1) {
    if (-1 < *unaff_x20) {
      func_0x0001074f5294();
    }
    unaff_x20 = unaff_x20 + 1;
  }
  return;
}



/* Entry: 1074f52b8; end: 1074f52e7;  */

void FUN_1074f52b8(void)

{
  long extraout_x8;
  
  func_0x0001074feb74();
  if (extraout_x8 != 0) {
    FUN_1074f52e8();
    func_0x0001074fe63c();
  }
  return;
}



/* Entry: 1074f52e8; end: 1074f5343;  */

void FUN_1074f52e8(void)

{
  long unaff_x19;
  char *unaff_x20;
  
  func_0x0001074fed78();
  for (; unaff_x19 != 0; unaff_x19 = unaff_x19 + -1) {
    if (-1 < *unaff_x20) {
      func_0x0001074f5320();
    }
    unaff_x20 = unaff_x20 + 1;
  }
  return;
}



/* Entry: 1074f5344; end: 1074f5363;  */

void FUN_1074f5344(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    FUN_107410ccc();
  }
  return;
}



/* Entry: 1074f5364; end: 1074f536b;  */

void FUN_1074f5364(void)

{
  return;
}



/* Entry: 1074f536c; end: 1074f5393;  */

void FUN_1074f536c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x0001074fe9e0();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_FUN_1109b5f88;
  param_1[1] = uVar1;
  return;
}



/* Entry: 1074f5394; end: 1074f53bb;  */

void FUN_1074f5394(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_1109b5f88;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1074f53bc; end: 1074f53e3;  */

void FUN_1074f53bc(undefined8 param_1)

{
  func_0x0001074feaf8();
  func_0x0001074fea08(param_1,&PTR_DAT_1109b5ff8);
  func_0x0001074fe67c();
  return;
}



/* Entry: 1074f53e4; end: 1074f53ef;  */

undefined ** FUN_1074f53e4(void)

{
  return &PTR_DAT_1109b5ff8;
}



/* Entry: 1074f53f0; end: 1074f53fb;  */

void FUN_1074f53f0(void)

{
  func_0x0001074fe6bc();
  func_0x0001074fe7f8();
  func_0x0001074fe430();
  return;
}



/* Entry: 1074f53fc; end: 1074f541b;  */

void FUN_1074f53fc(void)

{
  func_0x0001074fe7f8();
  func_0x0001074fe430();
  return;
}



/* Entry: 1074f541c; end: 1074f54f7;  */

void FUN_1074f541c(ulong param_1)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x9;
  long lVar2;
  long extraout_x9_00;
  long *unaff_x19;
  
  if (param_1 >> 0x3d == 0) {
    func_0x0001074feb68();
    return;
  }
  func_0x000104bd35f4();
  func_0x0001074ff5e4();
  lVar1 = extraout_x8;
  lVar2 = extraout_x9;
  while (lVar2 != lVar1) {
    func_0x0001074ff93c();
    lVar1 = extraout_x8_00;
    lVar2 = extraout_x9_00;
  }
  if (*unaff_x19 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 1074f54f8; end: 1074f5503;  */

bool FUN_1074f54f8(undefined8 *param_1,long param_2)

{
  long unaff_x20;
  
  func_0x000104c2fe38(param_2,*param_1,param_2 + 0x38);
  func_0x000104c345b0();
  func_0x000104c2fe38();
  return unaff_x20 == param_2;
}



/* Entry: 1074f5504; end: 1074f556f;  */

void FUN_1074f5504(void)

{
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  func_0x0001074ff8c8();
  func_0x0001074fe628();
  FUN_107324d80();
  func_0x0001074feef8();
  for (; unaff_x23 != unaff_x24; unaff_x24 = unaff_x24 + 1) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      func_0x0001074febe8();
      func_0x0001074fe5d8();
      FUN_1074fe3c0();
      func_0x0001074ff930();
      FUN_1074f5570();
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



/* Entry: 1074f5570; end: 1074f55bf;  */

long FUN_1074f5570(long param_1)

{
  long unaff_x19;
  undefined8 uVar1;
  
  func_0x0001074fecc0();
  uVar1 = *(undefined8 *)(unaff_x19 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(unaff_x19 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  *(undefined8 *)(unaff_x19 + 0x38) = 0;
  *(undefined8 *)(unaff_x19 + 0x40) = 0;
  func_0x0001074febf0();
  func_0x000107283194();
  func_0x0001074fea00();
  return unaff_x19;
}



/* Entry: 1074f55c0; end: 1074f55cf;  */

long FUN_1074f55c0(undefined8 param_1,long param_2)

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



/* Entry: 1074f55d0; end: 1074f55ff;  */

void FUN_1074f55d0(void)

{
  long extraout_x8;
  
  func_0x0001074feb74();
  if (extraout_x8 != 0) {
    FUN_1074f5600();
    func_0x0001074fe63c();
  }
  return;
}



/* Entry: 1074f5600; end: 1074f562f;  */

void FUN_1074f5600(void)

{
  long unaff_x19;
  char *unaff_x20;
  
  func_0x0001074fed78();
  while (unaff_x19 != 0) {
    if (-1 < *unaff_x20) {
      func_0x0001074f559c();
    }
    func_0x0001074fee64();
  }
  return;
}



/* Entry: 1074f5630; end: 1074f564b;  */

bool FUN_1074f5630(long param_1)

{
  FUN_1074f564c();
  return param_1 != 0;
}



/* Entry: 1074f564c; end: 1074f566b;  */

long FUN_1074f564c(undefined8 param_1)

{
  ulong extraout_x8;
  long *unaff_x19;
  long unaff_x27;
  long unaff_x28;
  
  func_0x0001074fe4dc();
  func_0x0001074fe930();
  func_0x0001074feaa4();
  func_0x0001074fe544();
  do {
    func_0x0001074febcc();
    while (unaff_x27 != 0) {
      func_0x0001074fefa8();
      func_0x0001074ffa84();
      FUN_1074f56e4();
      if ((int)param_1 != 0) {
        return *unaff_x19 + unaff_x28;
      }
      func_0x0001074ff5c0();
    }
    func_0x0001074fe824();
  } while ((extraout_x8 & 1) == 0);
  return 0;
}



/* Entry: 1074f566c; end: 1074f56e3;  */

long FUN_1074f566c(undefined8 param_1)

{
  ulong extraout_x8;
  long *unaff_x19;
  long unaff_x27;
  long unaff_x28;
  
  func_0x0001074feaa4();
  func_0x0001074fe544();
  do {
    func_0x0001074febcc();
    while (unaff_x27 != 0) {
      func_0x0001074fefa8();
      func_0x0001074ffa84();
      FUN_1074f56e4();
      if ((int)param_1 != 0) {
        return *unaff_x19 + unaff_x28;
      }
      func_0x0001074ff5c0();
    }
    func_0x0001074fe824();
  } while ((extraout_x8 & 1) == 0);
  return 0;
}



/* Entry: 1074f56e4; end: 1074f56ef;  */

bool FUN_1074f56e4(undefined8 *param_1,long param_2)

{
  long unaff_x20;
  
  func_0x000104c2fe38(param_2,*param_1,param_2 + 0x38);
  func_0x000104c345b0();
  func_0x000104c2fe38();
  return unaff_x20 == param_2;
}



/* Entry: 1074f56f0; end: 1074f570f;  */

long FUN_1074f56f0(undefined8 param_1)

{
  ulong extraout_x8;
  long *unaff_x19;
  long unaff_x27;
  long unaff_x28;
  
  func_0x0001074fe4dc();
  func_0x0001074fe930();
  func_0x0001074feaa4();
  func_0x0001074fe544();
  do {
    func_0x0001074febcc();
    while (unaff_x27 != 0) {
      func_0x0001074fefa8();
      func_0x0001074ffa84();
      FUN_1074f5788();
      if ((int)param_1 != 0) {
        return *unaff_x19 + unaff_x28;
      }
      func_0x0001074ff5c0();
    }
    func_0x0001074fe824();
  } while ((extraout_x8 & 1) == 0);
  return 0;
}



/* Entry: 1074f5710; end: 1074f5787;  */

long FUN_1074f5710(undefined8 param_1)

{
  ulong extraout_x8;
  long *unaff_x19;
  long unaff_x27;
  long unaff_x28;
  
  func_0x0001074feaa4();
  func_0x0001074fe544();
  do {
    func_0x0001074febcc();
    while (unaff_x27 != 0) {
      func_0x0001074fefa8();
      func_0x0001074ffa84();
      FUN_1074f5788();
      if ((int)param_1 != 0) {
        return *unaff_x19 + unaff_x28;
      }
      func_0x0001074ff5c0();
    }
    func_0x0001074fe824();
  } while ((extraout_x8 & 1) == 0);
  return 0;
}



/* Entry: 1074f5788; end: 1074f5793;  */

bool FUN_1074f5788(undefined8 *param_1,long param_2)

{
  long unaff_x20;
  
  func_0x000104c2fe38(param_2,*param_1,param_2 + 0x38);
  func_0x000104c345b0();
  func_0x000104c2fe38();
  return unaff_x20 == param_2;
}



/* Entry: 1074f5794; end: 1074f57e7;  */

undefined8 FUN_1074f5794(long param_1)

{
  undefined8 unaff_x19;
  
  FUN_1074f94f4(param_1 + 0x48);
  FUN_1074f9d98(param_1 + 0x30);
  func_0x0001074fea4c();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 1074f57e8; end: 1074f57f3;  */

void FUN_1074f57e8(ulong param_1)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x9;
  long lVar2;
  long extraout_x9_00;
  long *unaff_x19;
  
  func_0x0001074fe6bc();
  if (param_1 >> 0x3d == 0) {
    func_0x0001074feb68();
    return;
  }
  func_0x000104bd35f4();
  func_0x0001074ff5e4();
  lVar1 = extraout_x8;
  lVar2 = extraout_x9;
  while (lVar2 != lVar1) {
    func_0x0001074ff93c();
    lVar1 = extraout_x8_00;
    lVar2 = extraout_x9_00;
  }
  if (*unaff_x19 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 1074f57f4; end: 1074f58bf;  */

void FUN_1074f57f4(ulong param_1)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x9;
  long lVar2;
  long extraout_x9_00;
  long *unaff_x19;
  
  if (param_1 >> 0x3d == 0) {
    func_0x0001074feb68();
    return;
  }
  func_0x000104bd35f4();
  func_0x0001074ff5e4();
  lVar1 = extraout_x8;
  lVar2 = extraout_x9;
  while (lVar2 != lVar1) {
    func_0x0001074ff93c();
    lVar1 = extraout_x8_00;
    lVar2 = extraout_x9_00;
  }
  if (*unaff_x19 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 1074f58c0; end: 1074f5903;  */

void FUN_1074f58c0(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int extraout_w10;
  undefined8 uVar5;
  
  lVar4 = param_3[1];
  uVar5 = *param_3;
  param_1[1] = param_3[1];
  *param_1 = uVar5;
  if (lVar4 != 0) {
    do {
      func_0x0001074fe68c();
    } while (extraout_w10 != 0);
  }
  if (*param_2 != 0) {
    piVar1 = (int *)(*param_2 + 0x20);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* Entry: 1074f5904; end: 1074f5953;  */

void FUN_1074f5904(undefined8 *param_1,long param_2)

{
  func_0x0001074fe9f4();
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  FUN_10747e850();
  FUN_1074f5954();
  return;
}



/* Entry: 1074f5954; end: 1074f598f;  */

void FUN_1074f5954(undefined8 param_1)

{
  long unaff_x19;
  long *unaff_x20;
  
  func_0x0001074feec8();
  for (; unaff_x20 != (long *)unaff_x19; unaff_x20 = (long *)*unaff_x20) {
    FUN_1074f5990(param_1,unaff_x20 + 2);
  }
  return;
}



/* Entry: 1074f5990; end: 1074f59c3;  */

void FUN_1074f5990(void)

{
  func_0x0001074f59a8();
  return;
}



/* Entry: 1074f59c4; end: 1074f5ba7;  */

undefined1  [16] FUN_1074f59c4(float param_1,float param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  long extraout_x8;
  undefined8 extraout_x9;
  long *unaff_x19;
  long *unaff_x21;
  long *plVar5;
  ulong uVar6;
  ulong unaff_x25;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined8 auStack_68 [3];
  
  func_0x0001074ffad0();
  func_0x00010726364c();
  uVar6 = unaff_x19[1];
  if (uVar6 != 0) {
    uVar7 = uVar6 - 1;
    if ((uVar6 & uVar7) == 0) {
      unaff_x25 = uVar7 & param_3;
    }
    else {
      unaff_x25 = param_3;
      if (uVar6 <= param_3) {
        uVar4 = 0;
        if (uVar6 != 0) {
          uVar4 = param_3 / uVar6;
        }
        unaff_x25 = param_3 - uVar4 * uVar6;
      }
    }
    plVar5 = *(long **)(*unaff_x19 + unaff_x25 * 8);
    unaff_x21 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      do {
        while( true ) {
          unaff_x21 = (long *)*plVar5;
          if (unaff_x21 == (long *)0x0) goto LAB_1074f5a84;
          uVar4 = unaff_x21[1];
          plVar5 = unaff_x21;
          if (uVar4 != param_3) break;
          plVar2 = unaff_x21 + 2;
          func_0x000104c32db4(plVar2,param_4);
          if (((ulong)plVar2 & 1) != 0) {
            uVar3 = 0;
            goto LAB_1074f5b7c;
          }
        }
        if ((uVar6 & uVar7) == 0) {
          uVar4 = uVar4 & uVar7;
        }
        else if (uVar6 <= uVar4) {
          uVar1 = 0;
          if (uVar6 != 0) {
            uVar1 = uVar4 / uVar6;
          }
          uVar4 = uVar4 - uVar1 * uVar6;
        }
      } while (uVar4 == unaff_x25);
    }
  }
LAB_1074f5a84:
  func_0x0001074feb04(auStack_68);
  FUN_1074f5ba8();
  func_0x0001074ffa70();
  if ((uVar6 == 0) || (param_2 * (float)uVar6 < param_1)) {
    func_0x0001074fee28(uVar6 << 1);
    FUN_10747e850();
    uVar6 = unaff_x19[1];
    if ((uVar6 & uVar6 - 1) == 0) {
      unaff_x25 = uVar6 - 1 & param_3;
    }
    else {
      unaff_x25 = param_3;
      if (uVar6 <= param_3) {
        uVar7 = 0;
        if (uVar6 != 0) {
          uVar7 = param_3 / uVar6;
        }
        unaff_x25 = param_3 - uVar7 * uVar6;
      }
    }
  }
  if (*(long *)(*unaff_x19 + unaff_x25 * 8) == 0) {
    func_0x0001074ff4c4();
    *(undefined8 *)(extraout_x8 + unaff_x25 * 8) = extraout_x9;
    if (*unaff_x21 != 0) {
      uVar7 = *(ulong *)(*unaff_x21 + 8);
      if ((uVar6 & uVar6 - 1) == 0) {
        uVar7 = uVar7 & uVar6 - 1;
      }
      else if (uVar6 <= uVar7) {
        uVar4 = 0;
        if (uVar6 != 0) {
          uVar4 = uVar7 / uVar6;
        }
        uVar7 = uVar7 - uVar4 * uVar6;
      }
      *(long **)(extraout_x8 + uVar7 * 8) = unaff_x21;
    }
  }
  else {
    func_0x0001074ff8fc();
  }
  auStack_68[0] = 0;
  unaff_x19[3] = unaff_x19[3] + 1;
  FUN_10747ec4c(auStack_68);
  uVar3 = 1;
LAB_1074f5b7c:
  auVar8._8_8_ = uVar3;
  auVar8._0_8_ = unaff_x21;
  return auVar8;
}



/* Entry: 1074f5ba8; end: 1074f5bf7;  */

void FUN_1074f5ba8(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *extraout_x8;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x0001074feec8();
  puVar1 = (undefined8 *)0x60;
  __Znwm();
  *extraout_x8 = puVar1;
  extraout_x8[1] = param_1 + 0x10;
  extraout_x8[2] = 1;
  puVar2 = puVar1 + 2;
  *puVar1 = 0;
  puVar1[1] = unaff_x20;
  func_0x0001074ff784();
  uVar4 = *(undefined8 *)(unaff_x19 + 0x40);
  uVar3 = *(undefined8 *)(unaff_x19 + 0x38);
  *(undefined4 *)(puVar2 + 9) = *(undefined4 *)(unaff_x19 + 0x48);
  puVar2[8] = uVar4;
  puVar2[7] = uVar3;
  return;
}



/* Entry: 1074f5bf8; end: 1074f5c1f;  */

void FUN_1074f5bf8(long param_1)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0001074ff784();
  uVar2 = *(undefined8 *)(unaff_x19 + 0x40);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x38);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(unaff_x19 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  return;
}



/* Entry: 1074f5c20; end: 1074f5c67;  */

void FUN_1074f5c20(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x0001074ffae8();
  if (unaff_x20 != 0) {
    pcVar1 = (char *)*unaff_x19;
    lVar2 = unaff_x19[1];
    while (unaff_x20 != 0) {
      if (-1 < *pcVar1) {
        FUN_1074f5c68();
      }
      lVar2 = lVar2 + 0x50;
      func_0x0001074ff994(lVar2);
    }
    func_0x0001074fe63c();
  }
  return;
}



/* Entry: 1074f5c68; end: 1074f5c8b;  */

void FUN_1074f5c68(void)

{
  func_0x0001074febf0();
  FUN_10745f898();
  func_0x0001074fea00();
  return;
}



/* Entry: 1074f5c8c; end: 1074f5c97;  */

void FUN_1074f5c8c(long *param_1,long param_2)

{
  func_0x0001074fe6bc();
  func_0x0001074fe980();
  FUN_1074f5d4c(param_1 + 2,*param_1,param_1[1],*(long *)(param_2 + 8) + (*param_1 - param_1[1]));
  func_0x0001074fe430();
  return;
}



/* Entry: 1074f5c98; end: 1074f5ccf;  */

void FUN_1074f5c98(long *param_1,long param_2)

{
  func_0x0001074fe980();
  FUN_1074f5d4c(param_1 + 2,*param_1,param_1[1],*(long *)(param_2 + 8) + (*param_1 - param_1[1]));
  func_0x0001074fe430();
  return;
}



/* Entry: 1074f5cd0; end: 1074f5d2f;  */

void FUN_1074f5cd0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long *unaff_x19;
  long unaff_x20;
  
  func_0x0001074ff464();
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x0001074f5d10();
  }
  lVar1 = param_4 + unaff_x20 * 0x10;
  *unaff_x19 = param_4;
  unaff_x19[1] = lVar1;
  unaff_x19[2] = lVar1;
  unaff_x19[3] = param_4 + param_2 * 0x10;
  return;
}



/* Entry: 1074f5d30; end: 1074f5d4b;  */

void FUN_1074f5d30(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 **ppuStack_58;
  undefined8 **ppuStack_50;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  if ((ulong)param_2 >> 0x3c == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)((long)param_2 << 4);
    return;
  }
  func_0x000104bd35f4();
  ppuStack_58 = &puStack_40;
  ppuStack_50 = &puStack_38;
  puStack_38 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 2) {
    uVar1 = *param_2;
    puStack_38[1] = param_2[1];
    *puStack_38 = uVar1;
    *param_2 = 0;
    param_2[1] = 0;
    puStack_38 = puStack_38 + 2;
  }
  uStack_60 = param_1;
  puStack_40 = param_4;
  func_0x0001074ffa50();
  FUN_1074f5dc0();
  FUN_1074f5df0(&uStack_60);
  return;
}



/* Entry: 1074f5d4c; end: 1074f5dbf;  */

void FUN_1074f5d4c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 **ppuStack_48;
  undefined8 **ppuStack_40;
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  
  ppuStack_48 = &puStack_30;
  ppuStack_40 = &puStack_28;
  puStack_28 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 2) {
    uVar1 = *param_2;
    puStack_28[1] = param_2[1];
    *puStack_28 = uVar1;
    *param_2 = 0;
    param_2[1] = 0;
    puStack_28 = puStack_28 + 2;
  }
  uStack_50 = param_1;
  puStack_30 = param_4;
  func_0x0001074ffa50();
  FUN_1074f5dc0();
  FUN_1074f5df0(&uStack_50);
  return;
}



/* Entry: 1074f5dc0; end: 1074f5def;  */

void FUN_1074f5dc0(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x10) {
    FUN_1073ad37c();
  }
  return;
}



/* Entry: 1074f5df0; end: 1074f5e1b;  */

void FUN_1074f5df0(void)

{
  uint extraout_w8;
  
  func_0x0001074ff5f0();
  if ((extraout_w8 & 1) == 0) {
    FUN_1074f5e1c();
  }
  return;
}



/* Entry: 1074f5e1c; end: 1074f5e3b;  */

void FUN_1074f5e1c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x10;
    FUN_1073ad37c();
  }
  return;
}



/* Entry: 1074f5e3c; end: 1074f5e97;  */

void FUN_1074f5e3c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x10;
    FUN_1073ad37c();
  }
  return;
}



/* Entry: 1074f5e98; end: 1074f5e9f;  */

void FUN_1074f5e98(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001074fe980(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x10;
    FUN_1073ad37c();
  }
  return;
}



/* Entry: 1074f5ea0; end: 1074f5f1f;  */

void FUN_1074f5ea0(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001074fe980();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x10;
    FUN_1073ad37c();
  }
  return;
}



/* Entry: 1074f5f20; end: 1074f5f63;  */

void FUN_1074f5f20(long param_1)

{
  if (*(uint *)(param_1 + 0x18) != 0xffffffff) {
    func_0x0001074ff62c((&PTR_FUN_1109b6028)[*(uint *)(param_1 + 0x18)]);
  }
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  return;
}



/* Entry: 1074f5f64; end: 1074f5fc7;  */

void FUN_1074f5f64(void)

{
  return;
}



/* Entry: 1074f5fc8; end: 1074f5fe7;  */

undefined1  [16] FUN_1074f5fc8(void)

{
  undefined1 auStack_20 [16];
  
  func_0x0001074fef98();
  FUN_1074f638c();
  return auStack_20;
}



/* Entry: 1074f5fe8; end: 1074f6013;  */

void FUN_1074f5fe8(undefined8 param_1)

{
  func_0x0001074ff058();
  func_0x0001074fef8c(param_1,1);
  FUN_1074f638c();
  return;
}



/* Entry: 1074f6014; end: 1074f6057;  */

void FUN_1074f6014(undefined8 param_1,long param_2)

{
  long unaff_x20;
  
  func_0x0001074feec8();
  func_0x0001074ff614();
  func_0x0001074febdc();
  func_0x000107268a34();
  *(undefined1 *)(unaff_x20 + param_2) = 0;
  return;
}



/* Entry: 1074f6058; end: 1074f60bb;  */

void FUN_1074f6058(void)

{
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  func_0x0001074ff8c8();
  func_0x0001074fe628();
  FUN_107367a70();
  func_0x0001074feef8();
  while (unaff_x23 != unaff_x24) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      func_0x0001074febe8();
      func_0x0001074fe5d8();
      FUN_1074fe3c0();
      func_0x0001074ff414();
      FUN_1074f60bc();
    }
    func_0x0001074ff50c();
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 1074f60bc; end: 1074f60fb;  */

void FUN_1074f60bc(void)

{
  long unaff_x19;
  undefined1 uStack_21;
  
  func_0x0001074ff454();
  func_0x0001074f60dc();
  if (*(uint *)(unaff_x19 + 0x28) != 0xffffffff) {
    (*(code *)(&PTR_DAT_1107eb090)[*(uint *)(unaff_x19 + 0x28)])(&uStack_21);
  }
  *(undefined4 *)(unaff_x19 + 0x28) = 0xffffffff;
  return;
}



/* Entry: 1074f60fc; end: 1074f611b;  */

void FUN_1074f60fc(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  FUN_1074f611c(&uStack_18);
  return;
}



/* Entry: 1074f611c; end: 1074f6123;  */

void FUN_1074f611c(undefined8 param_1,long param_2)

{
  long lStack_20;
  long lStack_18;
  
  lStack_18 = param_2 + 0x38;
  lStack_20 = param_2;
  FUN_1074f6154(param_1,param_2,&UNK_10dd5b8f9,&lStack_20,&lStack_18);
  return;
}



/* Entry: 1074f6124; end: 1074f6153;  */

void FUN_1074f6124(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_2;
  uStack_18 = param_3;
  FUN_1074f6154(param_1,param_2,&UNK_10dd5b8f9,&uStack_20,&uStack_18);
  return;
}



/* Entry: 1074f6154; end: 1074f61cb;  */

void FUN_1074f6154(long *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long *extraout_x8;
  
  func_0x0001074ff8c8();
  lVar2 = *param_1;
  FUN_1074f61cc();
  if ((param_2 & 1) != 0) {
    func_0x0001074f6330(*(long *)(*param_1 + 8) + lVar2 * 0x40,param_3,param_4,param_5);
  }
  lVar1 = ((long *)*param_1)[1];
  *extraout_x8 = *(long *)*param_1 + lVar2;
  extraout_x8[1] = lVar1 + lVar2 * 0x40;
  *(char *)(extraout_x8 + 2) = (char)param_2;
  return;
}



/* Entry: 1074f61cc; end: 1074f624b;  */

undefined1  [16] FUN_1074f61cc(ulong param_1)

{
  undefined8 uVar1;
  ulong extraout_x8;
  ulong unaff_x22;
  long unaff_x27;
  undefined1 auVar2 [16];
  
  func_0x0001074feaa4();
  func_0x0001074fe9f4();
  func_0x0001074fe584();
  func_0x0001074fe870();
  do {
    func_0x0001074febcc();
    while (unaff_x27 != 0) {
      func_0x0001074fefa8();
      func_0x0001074ff590();
      FUN_1074f62b0();
      if ((param_1 & 1) != 0) {
        uVar1 = 0;
        goto LAB_1074f622c;
      }
      func_0x0001074ff5c0();
    }
    func_0x0001074fe824();
  } while ((extraout_x8 & 1) == 0);
  func_0x0001074feae4();
  FUN_1074f624c();
  uVar1 = 1;
  unaff_x22 = param_1;
LAB_1074f622c:
  auVar2._8_8_ = uVar1;
  auVar2._0_8_ = unaff_x22;
  return auVar2;
}



/* Entry: 1074f624c; end: 1074f62af;  */

void FUN_1074f624c(void)

{
  undefined1 in_ZR;
  long extraout_x9;
  long unaff_x19;
  
  func_0x0001074fe9f4();
  func_0x000100061de0();
  func_0x0001074fef44();
  if ((extraout_x9 == 0) && (func_0x0001074ff070(), !(bool)in_ZR)) {
    func_0x0001074f62bc();
    func_0x0001074fe818();
  }
  *(long *)(unaff_x19 + 0x18) = *(long *)(unaff_x19 + 0x18) + 1;
  func_0x0001074fe474();
  return;
}



/* Entry: 1074f62b0; end: 1074f62eb;  */

bool FUN_1074f62b0(undefined8 *param_1,long param_2)

{
  long unaff_x20;
  
  func_0x000104c2fe38(param_2,*param_1,param_2 + 0x38);
  func_0x000104c345b0();
  func_0x000104c2fe38();
  return unaff_x20 == param_2;
}



/* Entry: 1074f62ec; end: 1074f6327;  */

undefined * FUN_1074f62ec(undefined *param_1)

{
  undefined1 in_ZR;
  undefined *puVar1;
  undefined8 extraout_x8;
  undefined *puVar2;
  
  func_0x0001074fe5e8();
  puVar1 = &UNK_1109b6fe0;
  func_0x00010ae6c914();
  func_0x0001074fe49c(extraout_x8);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  puVar2 = *(undefined **)(puVar1 + 0x30);
  if (puVar2 == (undefined *)0xffffffffffffffff) {
    puVar2 = puVar1;
    func_0x000104c2fcd4();
    func_0x000104c2fcf0(puVar1);
    func_0x0001001030f4(puVar2,puVar2 + (long)puVar1);
    func_0x000104c343b0();
    func_0x000104c2ffc0();
  }
  return puVar2;
}



/* Entry: 1074f6328; end: 1074f633b;  */

long FUN_1074f6328(undefined8 param_1,long param_2)

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



/* Entry: 1074f633c; end: 1074f635f;  */

void FUN_1074f633c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_3;
  uStack_18 = param_2;
  FUN_1074f6360(param_1,&uStack_18,&uStack_20);
  return;
}



/* Entry: 1074f6360; end: 1074f638b;  */

void FUN_1074f6360(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  func_0x000104c318bc(param_1,*param_2);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)*param_3;
  return;
}



/* Entry: 1074f638c; end: 1074f63bf;  */

void FUN_1074f638c(undefined8 *param_1)

{
  char *pcVar1;
  char *extraout_x8;
  
  pcVar1 = (char *)*param_1;
  while (*pcVar1 < -1) {
    func_0x0001074fe8fc();
    pcVar1 = extraout_x8;
  }
  if (*pcVar1 != -1) {
    return;
  }
  *param_1 = 0;
  return;
}



/* Entry: 1074f63c0; end: 1074f6403;  */

void FUN_1074f63c0(undefined8 param_1,long param_2)

{
  long unaff_x20;
  
  func_0x0001074feec8();
  func_0x0001074ff614();
  func_0x0001074febdc();
  func_0x000107268a34();
  *(undefined1 *)(unaff_x20 + param_2) = 0;
  return;
}



/* Entry: 1074f6404; end: 1074f6423;  */

void FUN_1074f6404(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    FUN_1074f6424();
  }
  return;
}



/* Entry: 1074f6424; end: 1074f646b;  */

void FUN_1074f6424(long param_1)

{
  func_0x0001074fea4c();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}


