/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107277054; end: 107277223;  */

void FUN_107277054(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 extraout_x8;
  int extraout_w10;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined **ppuStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 *puStack_168;
  long lStack_160;
  undefined *puStack_158;
  undefined8 auStack_150 [32];
  long lStack_50;
  undefined8 uStack_48;
  
  func_0x00010727a484();
  func_0x00010727a218();
  puVar4 = &UNK_10f406dcf;
  puStack_1a0 = &UNK_10f406dcf;
  uStack_198 = 4;
  uVar3 = param_2;
  uStack_48 = extraout_x8;
  func_0x0001005d466c();
  puStack_190 = &UNK_10de23296;
  uStack_188 = 0;
  puStack_168 = auStack_150;
  puStack_158 = (undefined *)0x100;
  lStack_160 = 0;
  uStack_170 = &PTR_FUN_1109965d0;
  lStack_50 = 0;
  uStack_180 = param_2;
  uStack_178 = uVar3;
  func_0x00010727a648(&uStack_170,&UNK_10f406dcf,4);
  uVar1 = lStack_160 + lStack_50;
  ppuStack_1b8 = &puStack_1a0;
  puStack_1b0 = &UNK_10de23296;
  uVar2 = uVar1 == 0x25;
  if (uVar1 < 0x26) {
    uStack_170 = (undefined **)
                 (CONCAT62((int6)((ulong)uStack_170 >> 0x10),(short)uVar1) & 0xffffffffff00ffff);
    *(undefined1 *)((long)&uStack_170 + 2 + uVar1) = 0;
    func_0x000107277e24(&ppuStack_1b8,(long)&uStack_170 + 2,0x26);
    unaff_x19[1] = puStack_168;
    *unaff_x19 = uStack_170;
    unaff_x19[3] = puStack_158;
    unaff_x19[2] = lStack_160;
    unaff_x19[4] = auStack_150[0];
    *(undefined4 *)(unaff_x19 + 5) = 1;
    unaff_x19[6] = 0xffffffffffffffff;
  }
  else {
    uVar2 = uVar1 == 0x51;
    if (uVar1 < 0x52) {
      func_0x00010727a628(&uStack_170);
      *(short *)uStack_170 = (short)uVar1;
      *(undefined1 *)((long)uStack_170 + uVar1 + 2) = 0;
      func_0x000107277e24(&ppuStack_1b8,(undefined2 *)((long)uStack_170 + 2),0x52);
      unaff_x19[1] = puStack_168;
      *unaff_x19 = uStack_170;
      if (puStack_168 != (undefined8 *)0x0) {
        do {
          func_0x00010727a734();
        } while (extraout_w10 != 0);
      }
      *(undefined4 *)(unaff_x19 + 5) = 2;
      unaff_x19[6] = 0xffffffffffffffff;
      func_0x000104c2f784(&uStack_170);
    }
    else {
      func_0x0001005d466c();
      uStack_170 = (undefined **)&UNK_10de23296;
      puStack_168 = (undefined8 *)0x0;
      lStack_160 = unaff_x20;
      puStack_158 = puVar4;
      func_0x0001003a9204(&puStack_190,puStack_1a0,uStack_198,0xdc,&uStack_170);
      FUN_1072625b4();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_190);
    }
  }
  func_0x00010727a1d4(uStack_48);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x000104c2f784(&uStack_170);
    func_0x00010727a2ac();
    return;
  }
  return;
}



/* Entry: 107277224; end: 10727722b;  */

void FUN_107277224(void)

{
  return;
}



/* Entry: 10727722c; end: 10727725b;  */

void FUN_10727722c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_1109969b0;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 10727725c; end: 10727727f;  */

void FUN_10727725c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_1109969b0;
  param_2[1] = uVar1;
  return;
}



/* Entry: 107277280; end: 1072772a7;  */

void FUN_107277280(long param_1,undefined8 param_2)

{
  undefined1 auStack_30 [31];
  undefined1 uStack_11;
  
  FUN_1072772ec(auStack_30,*(undefined8 *)(param_1 + 8),param_2,&uStack_11);
  return;
}



/* Entry: 1072772a8; end: 1072772df;  */

long FUN_1072772a8(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_110996a10);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1072772e0; end: 1072772eb;  */

undefined ** FUN_1072772e0(void)

{
  return &PTR_DAT_110996a10;
}



/* Entry: 1072772ec; end: 107277373;  */

void FUN_1072772ec(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long extraout_x8;
  byte unaff_w21;
  long unaff_x22;
  undefined8 auStack_b0 [12];
  undefined4 uStack_50;
  undefined8 uStack_48;
  
  func_0x00010727a580();
  func_0x00010727a218();
  func_0x00010727a5c8();
  func_0x00010727a6dc();
  if ((unaff_w21 & 1) == 0) {
    uStack_50 = 0;
    func_0x00010727a5b0(param_1[1] + unaff_x22 * 0xa8);
    puVar1 = auStack_b0;
    FUN_10726af18();
  }
  else {
    puVar1 = param_1;
    func_0x00010727a3a8();
    FUN_107277374();
  }
  func_0x00010727a24c(*param_1);
  *(byte *)(extraout_x8 + 0x10) = unaff_w21;
  func_0x00010727a1d4(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010727a720();
  func_0x000104c2fe00();
  *(undefined4 *)(puVar1 + 0x14) = 0;
  return;
}



/* Entry: 107277374; end: 10727738f;  */

void FUN_107277374(long param_1)

{
  func_0x00010727a720();
  func_0x000104c2fe00();
  *(undefined4 *)(param_1 + 0xa0) = 0;
  return;
}



/* Entry: 107277390; end: 1072773cb;  */

long FUN_107277390(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x18) == param_1) {
    uVar1 = 0x20;
  }
  else {
    if (*(long *)(param_1 + 0x18) == 0) {
      return param_1;
    }
    uVar1 = 0x28;
  }
  func_0x00010727a65c(uVar1);
  return param_1;
}



/* Entry: 1072773cc; end: 10727744b;  */

undefined8 * FUN_1072773cc(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long extraout_x8;
  byte unaff_w21;
  undefined8 auStack_b8 [14];
  undefined8 uStack_48;
  
  func_0x00010727a580();
  func_0x00010727a218();
  func_0x00010727a5c8();
  func_0x00010727a6dc();
  if ((unaff_w21 & 1) == 0) {
    puVar1 = auStack_b8;
    FUN_107277488(puVar1);
    func_0x00010727a260();
    func_0x00010727a654();
  }
  else {
    puVar1 = param_1;
    func_0x00010727a3a8(param_1);
    FUN_10727744c();
  }
  func_0x00010727a24c(*param_1);
  *(byte *)(extraout_x8 + 0x10) = unaff_w21;
  func_0x00010727a1d4(uStack_48);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x00010727a720();
  func_0x00010727a63c();
  FUN_107277488(puVar1 + 7,extraout_x8);
  return param_1;
}



/* Entry: 10727744c; end: 10727745f;  */

void FUN_10727744c(long param_1)

{
  func_0x00010727a720();
  func_0x00010727a63c();
  FUN_107277488(param_1 + 0x38);
  return;
}



/* Entry: 107277460; end: 107277487;  */

void FUN_107277460(long param_1)

{
  func_0x00010727a63c();
  FUN_107277488(param_1 + 0x38);
  return;
}



/* Entry: 107277488; end: 1072774af;  */

long FUN_107277488(long param_1)

{
  FUN_1072774b0(param_1 + 8);
  return param_1;
}



/* Entry: 1072774b0; end: 1072774cb;  */

void FUN_1072774b0(long param_1)

{
  func_0x000104c318bc();
  *(undefined4 *)(param_1 + 0x60) = 3;
  return;
}



/* Entry: 1072774cc; end: 10727754f;  */

void FUN_1072774cc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long extraout_x8;
  byte unaff_w21;
  undefined8 uStack_48;
  
  func_0x00010727a580();
  puVar1 = param_1;
  func_0x00010727a218();
  func_0x00010727a5c8();
  func_0x00010727a6dc();
  if ((unaff_w21 & 1) == 0) {
    func_0x00010727a260();
    func_0x00010727a654();
  }
  else {
    puVar1 = param_1;
    func_0x00010727a3a8();
    FUN_107277550();
  }
  func_0x00010727a24c(*param_1);
  *(byte *)(extraout_x8 + 0x10) = unaff_w21;
  func_0x00010727a1d4(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010727a720();
  func_0x000104c318bc();
  *(undefined1 *)(puVar1 + 8) = *param_4;
  *(undefined4 *)(puVar1 + 0x14) = 1;
  return;
}



/* Entry: 107277550; end: 107277563;  */

void FUN_107277550(long param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  func_0x00010727a720();
  func_0x000104c318bc();
  *(undefined1 *)(param_1 + 0x40) = *param_4;
  *(undefined4 *)(param_1 + 0xa0) = 1;
  return;
}



/* Entry: 107277564; end: 10727758f;  */

void FUN_107277564(long param_1,undefined8 param_2,undefined1 *param_3)

{
  func_0x000104c318bc();
  *(undefined1 *)(param_1 + 0x40) = *param_3;
  *(undefined4 *)(param_1 + 0xa0) = 1;
  return;
}



/* Entry: 107277590; end: 1072775b7;  */

void FUN_107277590(undefined8 param_1,long param_2)

{
  long unaff_x20;
  
  func_0x00010727a448();
  func_0x00010727a370();
  *(undefined1 *)(unaff_x20 + param_2) = 0;
  return;
}



/* Entry: 1072775b8; end: 107277667;  */

long FUN_1072775b8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined1 in_ZR;
  long lVar2;
  undefined8 extraout_x8;
  long unaff_x19;
  undefined8 *unaff_x20;
  byte unaff_w21;
  long unaff_x22;
  undefined8 uVar3;
  
  uVar3 = param_3;
  func_0x00010727a484();
  func_0x00010727a218();
  FUN_10726c9e8(param_2,uVar3);
  func_0x00010727a6dc();
  if ((unaff_w21 & 1) == 0) {
    *param_4 = 0;
    param_4[1] = 0;
    func_0x00010727a260();
    func_0x00010727a654();
  }
  else {
    param_2 = unaff_x20[1] + unaff_x22 * 0xa8;
    func_0x000104c318bc(param_2,param_3);
    uVar3 = *param_4;
    *(undefined8 *)(param_2 + 0x48) = param_4[1];
    *(undefined8 *)(param_2 + 0x40) = uVar3;
    *param_4 = 0;
    param_4[1] = 0;
    *(undefined4 *)(param_2 + 0xa0) = 8;
  }
  func_0x00010727a24c(*unaff_x20);
  *(byte *)(unaff_x19 + 0x10) = unaff_w21;
  func_0x00010727a1d4(extraout_x8);
  if ((bool)in_ZR) {
    return param_2;
  }
  ___stack_chk_fail();
  uVar1 = *(ulong *)(param_2 + 8);
  if (uVar1 < *(ulong *)(param_2 + 0x10)) {
    func_0x0001072776a4();
    lVar2 = uVar1 + 0x70;
  }
  else {
    lVar2 = param_2;
    FUN_1072776d4();
  }
  *(long *)(param_2 + 8) = lVar2;
  return lVar2 + -0x70;
}



/* Entry: 107277668; end: 1072776d3;  */

long FUN_107277668(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    func_0x0001072776a4();
    lVar2 = uVar1 + 0x70;
  }
  else {
    lVar2 = param_1;
    FUN_1072776d4();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x70;
}



/* Entry: 1072776d4; end: 10727776b;  */

long FUN_1072776d4(undefined8 param_1)

{
  long *unaff_x19;
  long lVar1;
  long unaff_x20;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  func_0x00010727a484();
  FUN_10727776c();
  FUN_107277858(auStack_58,param_1,(unaff_x19[1] - *unaff_x19) / 0x70,unaff_x19 + 2);
  FUN_10726cc04(lStack_48 + 8,unaff_x20 + 8);
  lStack_48 = lStack_48 + 0x70;
  FUN_1072777cc();
  lVar1 = unaff_x19[1];
  func_0x000107277a38(auStack_58);
  return lVar1;
}



/* Entry: 10727776c; end: 1072777cb;  */

long * FUN_10727776c(long *param_1,long *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar4;
  
  if (param_2 < (long *)0x24924924924924a) {
    uVar1 = (param_1[2] - *param_1) / 0x70;
    plVar3 = (long *)(uVar1 * 2);
    if (plVar3 < param_2 || (long)plVar3 - (long)param_2 == 0) {
      plVar3 = param_2;
    }
    if (0x124924924924923 < uVar1) {
      plVar3 = (long *)0x249249249249249;
    }
    return plVar3;
  }
  FUN_10727784c();
  func_0x00010727a3f0();
  plVar3 = param_1 + 2;
  lVar4 = param_2[1] + ((param_1[1] - *param_1) / -0x70) * 0x70;
  FUN_1072778f8(plVar3,*param_1,param_1[1],lVar4);
  unaff_x19[1] = lVar4;
  uVar2 = *unaff_x20;
  unaff_x20[1] = uVar2;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar2;
  uVar2 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar2;
  uVar2 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar2;
  *unaff_x19 = unaff_x19[1];
  return plVar3;
}



/* Entry: 1072777cc; end: 10727784b;  */

void FUN_1072777cc(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar2;
  
  func_0x00010727a3f0();
  lVar2 = *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x70) * 0x70;
  FUN_1072778f8(param_1 + 2,*param_1,param_1[1],lVar2);
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



/* Entry: 10727784c; end: 107277857;  */

long * FUN_10727784c(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  func_0x00010727a5e8();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x0001072778a4();
  }
  lVar1 = param_4 + param_3 * 0x70;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x70;
  return param_1;
}



/* Entry: 107277858; end: 1072778c7;  */

long * FUN_107277858(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x0001072778a4();
  }
  lVar1 = param_4 + param_3 * 0x70;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x70;
  return param_1;
}



/* Entry: 1072778c8; end: 1072778f7;  */

void FUN_1072778c8(undefined8 param_1,ulong param_2,undefined8 param_3,long param_4)

{
  ulong unaff_x19;
  undefined1 auStack_70 [24];
  undefined1 uStack_58;
  long lStack_48;
  
  if (param_2 < 0x24924924924924a) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x70);
    return;
  }
  func_0x000104bd35f4();
  func_0x00010014c2bc();
  func_0x00010727a6a8();
  for (; param_2 != unaff_x19; param_2 = param_2 + 0x70) {
    FUN_10726cc04(param_4 + 8,param_2 + 8);
    param_4 = lStack_48 + 0x70;
    lStack_48 = param_4;
  }
  uStack_58 = 1;
  FUN_107277980();
  FUN_1072779b4(auStack_70);
  return;
}



/* Entry: 1072778f8; end: 10727797f;  */

void FUN_1072778f8(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long unaff_x19;
  undefined1 auStack_60 [24];
  undefined1 uStack_48;
  long lStack_38;
  
  func_0x00010014c2bc();
  func_0x00010727a6a8();
  for (; param_2 != unaff_x19; param_2 = param_2 + 0x70) {
    FUN_10726cc04(param_4 + 8,param_2 + 8);
    param_4 = lStack_38 + 0x70;
    lStack_38 = param_4;
  }
  uStack_48 = 1;
  FUN_107277980();
  FUN_1072779b4(auStack_60);
  return;
}



/* Entry: 107277980; end: 1072779b3;  */

void FUN_107277980(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x70) {
    FUN_10726af18(param_2 + 8);
  }
  return;
}



/* Entry: 1072779b4; end: 1072779e3;  */

long FUN_1072779b4(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_1072779e4(param_1);
  }
  return param_1;
}



/* Entry: 1072779e4; end: 107277a03;  */

void FUN_1072779e4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = **(long **)(param_1 + 8);
  for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != lVar2; lVar1 = lVar1 + -0x70) {
    FUN_10726af18(lVar1 + -0x68);
  }
  return;
}



/* Entry: 107277a04; end: 107277a63;  */

void FUN_107277a04(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  for (; param_3 != param_5; param_3 = param_3 + -0x70) {
    FUN_10726af18(param_3 + -0x68);
  }
  return;
}



/* Entry: 107277a64; end: 107277a6b;  */

void FUN_107277a64(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010727a3f0(param_1,*(undefined8 *)(param_1 + 8));
  while (lVar1 = *(long *)(unaff_x20 + 0x10), unaff_x19 != lVar1) {
    *(long *)(unaff_x20 + 0x10) = lVar1 + -0x70;
    FUN_10726af18(lVar1 + -0x68);
  }
  return;
}



/* Entry: 107277a6c; end: 107277aa3;  */

void FUN_107277a6c(void)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010727a3f0();
  while (lVar1 = *(long *)(unaff_x20 + 0x10), unaff_x19 != lVar1) {
    *(long *)(unaff_x20 + 0x10) = lVar1 + -0x70;
    FUN_10726af18(lVar1 + -0x68);
  }
  return;
}



/* Entry: 107277aa4; end: 107277acb;  */

undefined8 FUN_107277aa4(undefined8 param_1)

{
  FUN_107277acc(param_1);
  return param_1;
}



/* Entry: 107277acc; end: 107277ae3;  */

void FUN_107277acc(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  int extraout_w10;
  
  if (*param_3 == param_3[1]) {
    if ((bRam00000001131acf58 & 1) == 0) {
      iVar3 = 0x131acf58;
      ___cxa_guard_acquire();
      if (iVar3 != 0) {
        FUN_107277b70(0x1131acf48);
        ___cxa_guard_release(0x1131acf58);
      }
    }
    lVar2 = lRam00000001131acf50;
    uVar1 = uRam00000001131acf48;
    param_1[1] = lRam00000001131acf50;
    *param_1 = uVar1;
    if (lVar2 != 0) {
      do {
        func_0x00010727a734();
      } while (extraout_w10 != 0);
    }
    return;
  }
  func_0x00010014c49c(param_3);
  FUN_107277cb0();
  return;
}



/* Entry: 107277ae4; end: 107277b6f;  */

void FUN_107277ae4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  int extraout_w10;
  
  if ((bRam00000001131acf58 & 1) == 0) {
    iVar3 = 0x131acf58;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      FUN_107277b70(0x1131acf48);
      ___cxa_guard_release(0x1131acf58);
    }
  }
  lVar2 = lRam00000001131acf50;
  uVar1 = uRam00000001131acf48;
  param_1[1] = lRam00000001131acf50;
  *param_1 = uVar1;
  if (lVar2 != 0) {
    do {
      func_0x00010727a734();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 107277b70; end: 107277b8b;  */

void FUN_107277b70(void)

{
  undefined1 uStack_11;
  
  FUN_107277b8c(&uStack_11);
  return;
}



/* Entry: 107277b8c; end: 107277bf3;  */

long FUN_107277b8c(long param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 extraout_x8;
  undefined8 *puStack_30;
  
  func_0x00010727a218();
  func_0x00010727a5bc();
  puStack_30[1] = 0;
  puStack_30[2] = 0;
  *puStack_30 = &PTR_FUN_110996b80;
  puStack_30[4] = 0;
  puStack_30[3] = 0;
  puStack_30[6] = 0;
  puStack_30[5] = 0;
  func_0x00010727a344();
  func_0x000107277c84();
  func_0x00010727a1d4(extraout_x8);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_107277c1c();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 107277bf4; end: 107277c1b;  */

long FUN_107277bf4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_107277c1c();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 107277c1c; end: 107277c4b;  */

void FUN_107277c1c(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x492492492492493) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x38);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_110996b80;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107277c4c; end: 107277c4f;  */

void FUN_107277c4c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110996b80;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107277c50; end: 107277c63;  */

void FUN_107277c50(void)

{
  func_0x000107277c70();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107277c64; end: 107277c93;  */

long FUN_107277c64(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 0x18;
  func_0x000107277da4(&lStack_28);
  return param_1 + 0x18;
}



/* Entry: 107277c94; end: 107277caf;  */

void FUN_107277c94(void)

{
  func_0x00010014c49c();
  FUN_107277cb0();
  return;
}



/* Entry: 107277cb0; end: 107277d13;  */

undefined8 * FUN_107277cb0(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 *puStack_30;
  
  func_0x00010727a218();
  func_0x00010727a5bc();
  FUN_107277d14(puStack_30,param_2);
  func_0x00010727a344();
  func_0x000107277c84();
  func_0x00010727a1d4(extraout_x8);
  if ((bool)in_ZR) {
    return puStack_30;
  }
  ___stack_chk_fail();
  func_0x00010727a52c();
  func_0x000107277c84();
  func_0x00010727a2ac();
  puStack_30[2] = 0;
  *puStack_30 = &PTR_FUN_110996b80;
  puStack_30[1] = 0;
  FUN_107277d48(puStack_30 + 3);
  return puStack_30;
}



/* Entry: 107277d14; end: 107277d47;  */

undefined8 * FUN_107277d14(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110996b80;
  param_1[1] = 0;
  FUN_107277d48(param_1 + 3);
  return param_1;
}



/* Entry: 107277d48; end: 107277d6f;  */

void FUN_107277d48(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
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
  *(undefined4 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 107277d70; end: 107277ddf;  */

undefined8 FUN_107277d70(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x000107277da4(&uStack_28);
  return param_1;
}



/* Entry: 107277de0; end: 107277de7;  */

void FUN_107277de0(undefined8 *param_1)

{
  long unaff_x19;
  long unaff_x20;
  long lVar1;
  
  func_0x00010727a3f0(param_1,*param_1);
  for (lVar1 = param_1[1]; lVar1 != unaff_x19; lVar1 = lVar1 + -0x70) {
    FUN_10726af18(lVar1 + -0x68);
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 107277de8; end: 107277e4b;  */

void FUN_107277de8(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  long lVar1;
  
  func_0x00010727a3f0();
  for (lVar1 = *(long *)(param_1 + 8); lVar1 != unaff_x19; lVar1 = lVar1 + -0x70) {
    FUN_10726af18(lVar1 + -0x68);
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 107277e4c; end: 107277eaf;  */

void FUN_107277e4c(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  long extraout_x8;
  
  func_0x00010727a580();
  puVar1 = param_1;
  FUN_10726c9e8();
  if ((param_2 & 1) == 0) {
    func_0x00010727a5b0(param_1[1] + (long)puVar1 * 0xa8);
  }
  else {
    func_0x00010727a3a8(param_1);
    FUN_107277eb0();
  }
  func_0x00010727a24c(*param_1);
  *(char *)(extraout_x8 + 0x10) = (char)param_2;
  return;
}



/* Entry: 107277eb0; end: 107277ec3;  */

void FUN_107277eb0(long param_1)

{
  long unaff_x19;
  
  func_0x00010727a720();
  func_0x00010727a63c();
  FUN_10726cc04(param_1 + 0x40,unaff_x19 + 8);
  return;
}



/* Entry: 107277ec4; end: 107277f4f;  */

void FUN_107277ec4(long param_1)

{
  long unaff_x19;
  
  func_0x00010727a63c();
  FUN_10726cc04(param_1 + 0x40,unaff_x19 + 8);
  return;
}



/* Entry: 107277f50; end: 107277f9b;  */

void FUN_107277f50(undefined8 *param_1,long *param_2,undefined8 *param_3)

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
      func_0x00010727a734();
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



/* Entry: 107277f9c; end: 107277fcf;  */

void FUN_107277f9c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  *puVar1 = &PTR_DAT_110996a30;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  return;
}



/* Entry: 107277fd0; end: 107277ff7;  */

void FUN_107277fd0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_DAT_110996a30;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 107277ff8; end: 10727843f;  */

undefined1 * FUN_107277ff8(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  undefined1 in_ZR;
  undefined *puVar1;
  undefined8 extraout_x8;
  undefined1 *puVar2;
  undefined1 auStack_1c8 [24];
  undefined1 auStack_1b0 [32];
  undefined1 auStack_190 [104];
  undefined1 auStack_128 [56];
  undefined auStack_f0 [168];
  undefined8 uStack_48;
  
  puVar2 = param_1;
  func_0x00010727a218();
  puVar1 = &UNK_10de23253;
  uStack_48 = extraout_x8;
  func_0x00010727a35c();
  if ((int)puVar2 == 0) {
    puVar1 = &UNK_10de23580;
    puVar2 = param_2;
    func_0x0001072784b0();
    if (((ulong)puVar2 & 1) != 0) goto LAB_1072780a8;
    puVar1 = &UNK_10de23296;
    puVar2 = param_2;
    func_0x0001072784b0();
    if (((ulong)puVar2 & 1) != 0) goto LAB_1072780a8;
    puVar1 = &UNK_10de23337;
    func_0x00010727a35c();
    if (((ulong)puVar2 & 1) != 0) goto LAB_1072780a8;
    func_0x00010727a35c();
    if ((int)puVar2 == 0) {
      func_0x00010727a35c();
      if ((int)puVar2 == 0) {
        func_0x00010727a35c();
        if ((int)puVar2 == 0) {
          func_0x00010727a35c();
          if ((int)puVar2 == 0) {
            func_0x00010727a35c();
            if ((int)puVar2 == 0) {
              func_0x00010727a35c();
              if ((int)puVar2 == 0) {
                func_0x00010727a35c();
                if ((int)puVar2 == 0) {
                  func_0x00010727a35c();
                  if ((int)puVar2 == 0) {
                    puVar1 = &UNK_10de23580;
                    puVar2 = param_2;
                    FUN_1072784dc(param_2,&UNK_10de23580,0x15,0);
                    in_ZR = puVar2 == (undefined1 *)0xffffffffffffffff;
                    if (!(bool)in_ZR) {
                      FUN_10724ef84(auStack_1b0,param_2);
                      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7replaceEmmPKc
                                (auStack_1b0,puVar2,0x15,&UNK_10de236ac);
                      puVar2 = *(undefined1 **)(param_1 + 8);
                      FUN_107262e9c(auStack_128,auStack_1b0);
                      func_0x00010727a20c();
                      func_0x00010727a1c4();
                      puVar1 = auStack_f0;
                      FUN_107278574(auStack_1c8);
                      func_0x00010727a390();
                      func_0x00010727a4a8();
                      func_0x00010727a3a0();
                      func_0x00010727a4a0();
                    }
                    goto LAB_1072780a8;
                  }
                  puVar1 = &UNK_10de23682;
                  func_0x00010727a314();
                  func_0x00010727a20c();
                  func_0x00010727a1c4();
                  func_0x00010727a1e8();
                }
                else {
                  puVar1 = &UNK_10de23659;
                  func_0x00010727a314();
                  func_0x00010727a20c();
                  func_0x00010727a1c4();
                  func_0x00010727a1e8();
                }
              }
              else {
                func_0x00010727a314();
                puVar2 = auStack_190;
                func_0x00010727a2d8();
                func_0x00010727a1c4();
                func_0x00010727a2f8();
                func_0x00010727a390();
                func_0x00010727a410();
                func_0x00010727a3a0();
                puVar1 = &UNK_10de23637;
                func_0x00010727a314();
                func_0x00010727a20c();
                func_0x00010727a1c4();
                func_0x00010727a1e8();
              }
            }
            else {
              func_0x00010727a314();
              puVar2 = auStack_190;
              func_0x00010727a2d8();
              func_0x00010727a1c4();
              func_0x00010727a2f8();
              func_0x00010727a390();
              func_0x00010727a410();
              func_0x00010727a3a0();
              puVar1 = &UNK_10de23617;
              func_0x00010727a314();
              func_0x00010727a20c();
              func_0x00010727a1c4();
              func_0x00010727a1e8();
            }
          }
          else {
            func_0x00010727a314();
            puVar2 = auStack_190;
            func_0x00010727a2d8();
            func_0x00010727a1c4();
            func_0x00010727a2f8();
            func_0x00010727a390();
            func_0x00010727a410();
            func_0x00010727a3a0();
            puVar1 = &UNK_10de235fa;
            func_0x00010727a314();
            func_0x00010727a20c();
            func_0x00010727a1c4();
            func_0x00010727a1e8();
          }
        }
        else {
          puVar1 = &UNK_10de235d6;
          func_0x00010727a314();
          func_0x00010727a20c();
          func_0x00010727a1c4();
          func_0x00010727a1e8();
        }
      }
      else {
        puVar1 = &UNK_10de235b6;
        func_0x00010727a314();
        func_0x00010727a20c();
        func_0x00010727a1c4();
        func_0x00010727a1e8();
      }
    }
    else {
      puVar1 = &UNK_10de23596;
      func_0x00010727a314();
      func_0x00010727a20c();
      func_0x00010727a1c4();
      func_0x00010727a1e8();
    }
  }
  else {
    in_ZR = *(int *)(param_3 + 0x68) == 3;
    if (!(bool)in_ZR) goto LAB_1072780a8;
    puVar1 = &UNK_10de23562;
    func_0x00010727a314();
    func_0x00010727a20c();
    func_0x00010727a1c4();
    func_0x00010727a1e8();
  }
  func_0x00010727a390();
  func_0x00010727a4a8();
  func_0x00010727a3a0();
LAB_1072780a8:
  func_0x00010727a1d4(uStack_48);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x00010727a390();
  func_0x00010727a4a8();
  func_0x00010727a3a0();
  func_0x00010727a4a0();
  func_0x00010727a2ac();
  func_0x0001004a5364(puVar1,&PTR_DAT_110996ae0);
  puVar2 = puVar2 + 8;
  if ((int)puVar1 == 0) {
    puVar2 = (undefined1 *)0x0;
  }
  return puVar2;
}



/* Entry: 107278440; end: 107278477;  */

long FUN_107278440(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_110996ae0);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 107278478; end: 107278483;  */

undefined ** FUN_107278478(void)

{
  return &PTR_DAT_110996ae0;
}



/* Entry: 107278484; end: 1072784db;  */

bool FUN_107278484(void)

{
  int iVar1;
  bool bVar2;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  
  func_0x00010727a3f0();
  _strlen();
  func_0x00010014c53c();
  func_0x00010014c2bc();
  func_0x000104c2fcd4();
  func_0x000104c2fcf0();
  iVar1 = (int)&stack0xffffffffffffffe0;
  if (unaff_x21 == unaff_x19) {
    func_0x000100067218(&stack0xffffffffffffffe0,unaff_x20,unaff_x19);
    bVar2 = iVar1 == 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}



/* Entry: 1072784dc; end: 10727852f;  */

void FUN_1072784dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  undefined8 *puStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puStack_78 = &uStack_20;
  puStack_70 = &uStack_28;
  puStack_68 = puStack_78;
  puStack_60 = puStack_70;
  puStack_58 = puStack_78;
  puStack_50 = puStack_70;
  puStack_48 = puStack_78;
  puStack_40 = puStack_70;
  puStack_38 = puStack_78;
  puStack_30 = puStack_70;
  uStack_28 = param_4;
  uStack_20 = param_2;
  uStack_18 = param_3;
  FUN_107278e80(param_1,&puStack_38,&puStack_48,&puStack_58,&puStack_68,&puStack_78);
  return;
}



/* Entry: 107278530; end: 107278573;  */

bool FUN_107278530(void)

{
  int iVar1;
  bool bVar2;
  long unaff_x19;
  long unaff_x21;
  
  func_0x00010014c2bc();
  func_0x000104c2fcd4();
  func_0x000104c2fcf0();
  iVar1 = (int)&stack0xffffffffffffffe0;
  if (unaff_x21 == unaff_x19) {
    func_0x000100067218(&stack0xffffffffffffffe0);
    bVar2 = iVar1 == 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}



/* Entry: 107278574; end: 107278593;  */

void FUN_107278574(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  FUN_107278594(&uStack_18);
  return;
}



/* Entry: 107278594; end: 10727859b;  */

void FUN_107278594(undefined8 param_1,long param_2)

{
  long lStack_20;
  long lStack_18;
  
  lStack_18 = param_2 + 0x38;
  lStack_20 = param_2;
  FUN_1072785cc(param_1,param_2,&UNK_10dd5b8f9,&lStack_20,&lStack_18);
  return;
}



/* Entry: 10727859c; end: 1072785cb;  */

void FUN_10727859c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_2;
  uStack_18 = param_3;
  FUN_1072785cc(param_1,param_2,&UNK_10dd5b8f9,&uStack_20,&uStack_18);
  return;
}



/* Entry: 1072785cc; end: 107278657;  */

void FUN_1072785cc(long *param_1,long *param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_2;
  FUN_10726c9e8();
  if ((param_3 & 1) != 0) {
    FUN_107278658(*param_2,lVar2,param_4,param_5,param_6);
  }
  lVar1 = ((long *)*param_2)[1];
  *param_1 = *(long *)*param_2 + lVar2;
  param_1[1] = lVar1 + lVar2 * 0xa8;
  *(char *)(param_1 + 2) = (char)param_3;
  return;
}



/* Entry: 107278658; end: 10727867b;  */

void FUN_107278658(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010727a720();
  uStack_18 = *param_4;
  uStack_20 = *param_5;
  FUN_1072786a0(param_1,&uStack_18,&uStack_20);
  return;
}



/* Entry: 10727867c; end: 10727869f;  */

void FUN_10727867c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_3;
  uStack_18 = param_2;
  FUN_1072786a0(param_1,&uStack_18,&uStack_20);
  return;
}



/* Entry: 1072786a0; end: 1072786d7;  */

long FUN_1072786a0(long param_1,undefined8 *param_2,long *param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000104c318bc(param_1,*param_2);
  FUN_10726cc04(lVar1 + 0x40,*param_3 + 8);
  return param_1;
}



/* Entry: 1072786d8; end: 10727870f;  */

undefined1 * FUN_1072786d8(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  FUN_107278710();
  return param_1;
}



/* Entry: 107278710; end: 10727875f;  */

void FUN_107278710(void)

{
  uint uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010727a484();
  FUN_10726af18();
  uVar1 = *(uint *)(unaff_x20 + 0x60);
  if (uVar1 != 0xffffffff) {
    (*(code *)(&PTR_FUN_110996a90)[uVar1])(&stack0xffffffffffffffc8);
    *(uint *)(unaff_x19 + 0x60) = uVar1;
  }
  return;
}



/* Entry: 107278760; end: 1072787e3;  */

void FUN_107278760(void)

{
  return;
}



/* Entry: 1072787e4; end: 10727881f;  */

undefined8 * FUN_1072787e4(undefined8 *param_1,long *param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_107278820(param_1,*param_2,param_2[1],(param_2[1] - *param_2) / 0x120);
  return param_1;
}



/* Entry: 107278820; end: 107278887;  */

void FUN_107278820(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  if (param_4 != 0) {
    func_0x00010014c4d0();
    FUN_107278888();
    FUN_1072788d4(param_1);
  }
  uStack_38 = 1;
  func_0x000107278c54(&uStack_40);
  return;
}



/* Entry: 107278888; end: 1072788d3;  */

void FUN_107278888(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 < 0xe38e38e38e38e4) {
    plVar1 = param_1 + 2;
    FUN_107278914();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 0x24);
  }
  else {
    FUN_107278908();
    plVar1 = param_1 + 2;
    func_0x000107278968();
    param_1[1] = (long)plVar1;
  }
  return;
}



/* Entry: 1072788d4; end: 107278907;  */

void FUN_1072788d4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x10;
  func_0x000107278968();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 107278908; end: 107278913;  */

void FUN_107278908(void)

{
  func_0x00010727a5e8();
  FUN_107278938();
  return;
}



/* Entry: 107278914; end: 107278937;  */

void FUN_107278914(void)

{
  FUN_107278938();
  return;
}



/* Entry: 107278938; end: 10727897b;  */

void FUN_107278938(undefined8 param_1,ulong param_2)

{
  if (param_2 < 0xe38e38e38e38e4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x120);
    return;
  }
  func_0x000104bd35f4();
  FUN_10727897c();
  return;
}



/* Entry: 10727897c; end: 1072789f7;  */

long FUN_10727897c(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined1 auStack_60 [24];
  undefined1 uStack_48;
  long lStack_38;
  
  func_0x00010727a6a8();
  uStack_48 = 0;
  for (; param_2 != param_3; param_2 = param_2 + 0x120) {
    FUN_1072789f8(param_4,param_2);
    param_4 = lStack_38 + 0x120;
    lStack_38 = param_4;
  }
  uStack_48 = 1;
  FUN_107278bd4(auStack_60);
  return param_4;
}



/* Entry: 1072789f8; end: 107278a67;  */

void FUN_1072789f8(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x00010727a484();
  func_0x000104c2fe00();
  FUN_107278a68(param_1 + 0x38,unaff_x20 + 0x38);
  uVar1 = *(undefined8 *)(unaff_x20 + 0xa0);
  *(undefined8 *)(unaff_x19 + 0xa8) = *(undefined8 *)(unaff_x20 + 0xa8);
  *(undefined8 *)(unaff_x19 + 0xa0) = uVar1;
  FUN_107278b0c(unaff_x19 + 0xb0,unaff_x20 + 0xb0);
  _memcpy(unaff_x19 + 200,unaff_x20 + 200,0x51);
  return;
}



/* Entry: 107278a68; end: 107278a9b;  */

undefined1 * FUN_107278a68(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x60] = 0;
  FUN_107278a9c();
  return param_1;
}



/* Entry: 107278a9c; end: 107278aaf;  */

void FUN_107278a9c(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_107278acc();
    *(undefined1 *)(param_1 + 0x60) = 1;
    return;
  }
  return;
}



/* Entry: 107278ab0; end: 107278acb;  */

void FUN_107278ab0(long param_1)

{
  FUN_107278acc();
  *(undefined1 *)(param_1 + 0x60) = 1;
  return;
}



/* Entry: 107278acc; end: 107278b0b;  */

void FUN_107278acc(long param_1)

{
  long unaff_x20;
  
  func_0x00010727a484();
  func_0x000104c2fe00();
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(unaff_x20 + 0x38);
  func_0x00010028af84(param_1 + 0x40,unaff_x20 + 0x40);
  return;
}



/* Entry: 107278b0c; end: 107278b3f;  */

undefined1 * FUN_107278b0c(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x10] = 0;
  FUN_107278b40();
  return param_1;
}



/* Entry: 107278b40; end: 107278b53;  */

void FUN_107278b40(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    FUN_107278b70();
    *(undefined1 *)(param_1 + 0x10) = 1;
    return;
  }
  return;
}



/* Entry: 107278b54; end: 107278b6f;  */

void FUN_107278b54(long param_1)

{
  FUN_107278b70();
  *(undefined1 *)(param_1 + 0x10) = 1;
  return;
}



/* Entry: 107278b70; end: 107278b8f;  */

void FUN_107278b70(void)

{
  func_0x00010727a6f4();
  FUN_107278b90();
  return;
}



/* Entry: 107278b90; end: 107278bd3;  */

void FUN_107278b90(undefined8 *param_1,long *param_2,undefined8 *param_3)

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
      func_0x00010727a734();
    } while (extraout_w10 != 0);
  }
  if (*param_2 != 0) {
    piVar1 = (int *)(*param_2 + 0x18);
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



/* Entry: 107278bd4; end: 107278c03;  */

long FUN_107278bd4(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_107278c04(param_1);
  }
  return param_1;
}



/* Entry: 107278c04; end: 107278c23;  */

void FUN_107278c04(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x120;
    func_0x00010726b04c();
  }
  return;
}



/* Entry: 107278c24; end: 107278c7f;  */

void FUN_107278c24(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x120;
    func_0x00010726b04c();
  }
  return;
}



/* Entry: 107278c80; end: 107278c8f;  */

void FUN_107278c80(long *param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *param_1;
  func_0x00010727a484();
  func_0x000104c2fe00();
  *(undefined1 *)(lVar1 + 0x38) = *(undefined1 *)(unaff_x20 + 0x38);
  func_0x00010028af84(lVar1 + 0x40,unaff_x20 + 0x40);
  return;
}



/* Entry: 107278c90; end: 107278caf;  */

void FUN_107278c90(void)

{
  func_0x00010727a6f4();
  FUN_107278cb0();
  return;
}



/* Entry: 107278cb0; end: 107278cfb;  */

void FUN_107278cb0(undefined8 *param_1,long *param_2,undefined8 *param_3)

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
      func_0x00010727a734();
    } while (extraout_w10 != 0);
  }
  if (*param_2 != 0) {
    piVar1 = (int *)(*param_2 + 0x18);
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



/* Entry: 107278cfc; end: 107278d7f;  */

void FUN_107278cfc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puStack_48 = &uStack_20;
  puStack_40 = puStack_48;
  puStack_38 = puStack_48;
  puStack_30 = puStack_48;
  puStack_28 = puStack_48;
  uStack_20 = param_2;
  uStack_18 = param_3;
  func_0x000107278d40(param_1,&puStack_28,&puStack_30,&puStack_38,&puStack_40,&puStack_48);
  return;
}



/* Entry: 107278d80; end: 107278dcb;  */

/* WARNING: Possible PIC construction at 0x00010688f29c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010688f2a0) */

undefined8 * FUN_107278d80(ushort **param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  ushort *puStack_20;
  ulong uStack_18;
  
  if (*(int *)((long)param_1 + 0x28) != 0) {
    if (*(int *)((long)param_1 + 0x28) == 1) {
      param_2 = param_2 + 1;
      puStack_20 = (ushort *)((long)param_1 + 2);
      uStack_18 = (ulong)*(ushort *)param_1;
      func_0x00010727a490(param_2);
      return param_2;
    }
    if (*(int *)((long)param_1 + 0x28) == 2) {
      param_2 = param_2 + 2;
      puStack_20 = *param_1 + 1;
      uStack_18 = (ulong)**param_1;
      func_0x00010727a490(param_2);
      return param_2;
    }
    if (*(int *)((long)param_1 + 0x28) != 3) {
      uVar2 = *(undefined8 *)param_2[4];
      uVar3 = ((undefined8 *)param_2[4])[1];
      goto code_r0x000105394f0c;
    }
    param_2 = param_2 + 3;
    param_1 = (ushort **)*param_1;
  }
  uVar2 = *(undefined8 *)*param_2;
  uVar3 = ((undefined8 *)*param_2)[1];
  uStack_18 = (ulong)*(char *)((long)param_1 + 0x17);
  puStack_20 = (ushort *)param_1;
  if ((long)uStack_18 < 0) {
    puStack_20 = *param_1;
    uStack_18 = *(ulong *)((long)param_1 + 8);
  }
  param_1 = &puStack_20;
  unaff_x29 = &stack0xfffffffffffffff0;
  unaff_x30 = 0x10688f2a0;
  register0x00000008 = (BADSPACEBASE *)&puStack_20;
code_r0x000105394f0c:
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (*(ulong *)((long)param_1 + 8) < uVar3) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    func_0x000105394f4c(param_1,0,uVar3,uVar2,uVar3);
    puVar1 = (undefined8 *)(ulong)((int)param_1 == 0);
  }
  return puVar1;
}



/* Entry: 107278dcc; end: 107278def;  */

void FUN_107278dcc(void)

{
  func_0x00010727a490();
  return;
}


