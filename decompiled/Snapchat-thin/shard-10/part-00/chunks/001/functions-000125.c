/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10750acf4; end: 10750acff;  */

undefined ** FUN_10750acf4(void)

{
  return &PTR_DAT_1109b7d40;
}



/* Entry: 10750ad00; end: 10750ad3b;  */

long FUN_10750ad00(long param_1)

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
  func_0x00010750b5a0(uVar1);
  return param_1;
}



/* Entry: 10750ad3c; end: 10750ad43;  */

void FUN_10750ad3c(void)

{
  return;
}



/* Entry: 10750ad44; end: 10750ad63;  */

void FUN_10750ad44(undefined8 *param_1)

{
  func_0x00010750b504();
  *param_1 = &PTR_FUN_1109b7d70;
  return;
}



/* Entry: 10750ad64; end: 10750ad83;  */

void FUN_10750ad64(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_1109b7d70;
  return;
}



/* Entry: 10750ad84; end: 10750adab;  */

void FUN_10750ad84(undefined8 param_1)

{
  func_0x00010750b4c4();
  func_0x00010750b4bc(param_1,&PTR_DAT_1109b7dd0);
  func_0x00010750b458();
  return;
}



/* Entry: 10750adac; end: 10750adbf;  */

undefined ** FUN_10750adac(void)

{
  return &PTR_DAT_1109b7dd0;
}



/* Entry: 10750adc0; end: 10750adef;  */

void FUN_10750adc0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010750b554();
  func_0x00010750b484(&PTR_DAT_1109b7df0);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(lVar1 + 0x18) = uVar2;
  return;
}



/* Entry: 10750adf0; end: 10750ae1b;  */

void FUN_10750adf0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_2 = &PTR_DAT_1109b7df0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  param_2[4] = *(undefined8 *)(param_1 + 0x20);
  param_2[3] = uVar3;
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10750ae1c; end: 10750aed7;  */

void FUN_10750ae1c(long param_1)

{
  undefined1 uVar1;
  undefined8 extraout_x8;
  long lVar2;
  undefined1 auVar3 [16];
  char cStack_50;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined ***pppuStack_30;
  undefined8 uStack_28;
  
  lVar2 = param_1;
  func_0x00010750b448();
  lVar2 = *(long *)(lVar2 + 0x18);
  uStack_28 = extraout_x8;
  func_0x00010750b5e0();
  uVar1 = cStack_50 == '\x01';
  if ((bool)uVar1) {
    ppuStack_48 = &PTR_DAT_1109b7e60;
    auVar3 = NEON_ext(*(undefined1 (*) [16])(param_1 + 8),*(undefined1 (*) [16])(param_1 + 8),8,1);
    uStack_38 = auVar3._8_8_;
    uStack_40 = auVar3._0_8_;
    pppuStack_30 = &ppuStack_48;
    func_0x00010750b594();
    func_0x00010750b564();
    func_0x00010786a3ec(lVar2 + 0x18,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 8));
    func_0x000107869f68(lVar2,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 8));
  }
  func_0x00010750b534();
  func_0x00010750b428(uStack_28);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010750b564();
  func_0x00010750b534();
  func_0x00010750b494();
  func_0x00010750b4c4();
  func_0x00010750b4bc();
  func_0x00010750b458();
  return;
}



/* Entry: 10750aed8; end: 10750aeff;  */

void FUN_10750aed8(undefined8 param_1)

{
  func_0x00010750b4c4();
  func_0x00010750b4bc(param_1,&PTR_DAT_1109b7ed0);
  func_0x00010750b458();
  return;
}



/* Entry: 10750af00; end: 10750af13;  */

undefined ** FUN_10750af00(void)

{
  return &PTR_DAT_1109b7ed0;
}



/* Entry: 10750af14; end: 10750af37;  */

void FUN_10750af14(void)

{
  func_0x00010750b4d8();
  func_0x00010750b484(&PTR_DAT_1109b7e60);
  return;
}



/* Entry: 10750af38; end: 10750af53;  */

void FUN_10750af38(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_DAT_1109b7e60;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 10750af54; end: 10750afb3;  */

void FUN_10750af54(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  
  func_0x00010750b448();
  func_0x00010750b5d4();
  func_0x00010750b50c();
  func_0x00010750b56c();
  func_0x00010750b428(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010750b56c();
  func_0x00010750b494();
  func_0x00010750b4c4();
  func_0x00010750b4bc();
  func_0x00010750b458();
  return;
}



/* Entry: 10750afb4; end: 10750afdb;  */

void FUN_10750afb4(undefined8 param_1)

{
  func_0x00010750b4c4();
  func_0x00010750b4bc(param_1,&PTR_DAT_1109b7ec0);
  func_0x00010750b458();
  return;
}



/* Entry: 10750afdc; end: 10750afef;  */

undefined ** FUN_10750afdc(void)

{
  return &PTR_DAT_1109b7ec0;
}



/* Entry: 10750aff0; end: 10750b00f;  */

void FUN_10750aff0(undefined8 *param_1)

{
  func_0x00010750b504();
  *param_1 = &PTR_DAT_1109b7ef0;
  return;
}



/* Entry: 10750b010; end: 10750b02f;  */

void FUN_10750b010(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_1109b7ef0;
  return;
}



/* Entry: 10750b030; end: 10750b057;  */

void FUN_10750b030(undefined8 param_1)

{
  func_0x00010750b4c4();
  func_0x00010750b4bc(param_1,&PTR_DAT_1109b7f50);
  func_0x00010750b458();
  return;
}



/* Entry: 10750b058; end: 10750b06b;  */

undefined ** FUN_10750b058(void)

{
  return &PTR_DAT_1109b7f50;
}



/* Entry: 10750b06c; end: 10750b09f;  */

void FUN_10750b06c(long param_1)

{
  long lVar1;
  
  lVar1 = 0x20;
  __Znwm();
  func_0x00010750b484(&PTR_DAT_1109b7f70);
  *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(param_1 + 0x18);
  return;
}



/* Entry: 10750b0a0; end: 10750b0cb;  */

void FUN_10750b0a0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_DAT_1109b7f70;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10750b0cc; end: 10750b167;  */

void FUN_10750b0cc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 in_ZR;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  undefined ***pppuStack_30;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = *(undefined8 *)(param_1 + 8);
  lVar1 = *(long *)(param_1 + 0x10);
  ppuStack_48 = &PTR_DAT_1109b7fe0;
  pppuStack_30 = &ppuStack_48;
  func_0x000107869c04(param_2,&ppuStack_48);
  FUN_10750b370(&ppuStack_48);
  func_0x00010786a368(lVar1 + 0x18,*(undefined8 *)(param_1 + 0x18));
  func_0x000107869f40(lVar1,*(undefined8 *)(param_1 + 0x18));
  func_0x00010750b428(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  FUN_10750b370(&ppuStack_48);
  func_0x00010750b494();
  func_0x00010750b4c4();
  func_0x00010750b4bc();
  func_0x00010750b458();
  return;
}



/* Entry: 10750b168; end: 10750b18f;  */

void FUN_10750b168(undefined8 param_1)

{
  func_0x00010750b4c4();
  func_0x00010750b4bc(param_1,&PTR_DAT_1109b80d0);
  func_0x00010750b458();
  return;
}



/* Entry: 10750b190; end: 10750b1a3;  */

undefined ** FUN_10750b190(void)

{
  return &PTR_DAT_1109b80d0;
}



/* Entry: 10750b1a4; end: 10750b1cf;  */

void FUN_10750b1a4(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = param_1;
  func_0x00010750b504();
  uVar2 = param_1[1];
  *puVar1 = &PTR_DAT_1109b7fe0;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 10750b1d0; end: 10750b1f3;  */

void FUN_10750b1d0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_1109b7fe0;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10750b1f4; end: 10750b25f;  */

void FUN_10750b1f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined ***pppuStack_30;
  undefined8 uStack_28;
  
  func_0x00010750b448();
  uStack_40 = *(undefined8 *)(param_1 + 8);
  ppuStack_48 = &PTR_DAT_1109b8050;
  pppuStack_30 = &ppuStack_48;
  uStack_38 = param_2;
  uStack_28 = extraout_x8;
  func_0x000107869948(param_3,&ppuStack_48);
  func_0x000107277390();
  func_0x00010750b428(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107277390(&ppuStack_48);
  func_0x00010750b494();
  func_0x00010750b4c4();
  func_0x00010750b4bc();
  func_0x00010750b458();
  return;
}



/* Entry: 10750b260; end: 10750b287;  */

void FUN_10750b260(undefined8 param_1)

{
  func_0x00010750b4c4();
  func_0x00010750b4bc(param_1,&PTR_DAT_1109b80c0);
  func_0x00010750b458();
  return;
}



/* Entry: 10750b288; end: 10750b29b;  */

undefined ** FUN_10750b288(void)

{
  return &PTR_DAT_1109b80c0;
}



/* Entry: 10750b29c; end: 10750b2bf;  */

void FUN_10750b29c(void)

{
  func_0x00010750b4d8();
  func_0x00010750b484(&PTR_DAT_1109b8050);
  return;
}



/* Entry: 10750b2c0; end: 10750b2db;  */

void FUN_10750b2c0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_DAT_1109b8050;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 10750b2dc; end: 10750b33b;  */

void FUN_10750b2dc(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  
  func_0x00010750b448();
  func_0x00010750b5d4();
  func_0x00010750b50c();
  func_0x00010750b56c();
  func_0x00010750b428(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010750b56c();
  func_0x00010750b494();
  func_0x00010750b4c4();
  func_0x00010750b4bc();
  func_0x00010750b458();
  return;
}



/* Entry: 10750b33c; end: 10750b363;  */

void FUN_10750b33c(undefined8 param_1)

{
  func_0x00010750b4c4();
  func_0x00010750b4bc(param_1,&PTR_DAT_1109b80b0);
  func_0x00010750b458();
  return;
}



/* Entry: 10750b364; end: 10750b36f;  */

undefined ** FUN_10750b364(void)

{
  return &PTR_DAT_1109b80b0;
}



/* Entry: 10750b370; end: 10750b3ab;  */

long FUN_10750b370(long param_1)

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
  func_0x00010750b5a0(uVar1);
  return param_1;
}



/* Entry: 10750b3ac; end: 10750b3b3;  */

void FUN_10750b3ac(void)

{
  return;
}



/* Entry: 10750b3b4; end: 10750b3d3;  */

void FUN_10750b3b4(undefined8 *param_1)

{
  func_0x00010750b504();
  *param_1 = &PTR_FUN_1109b80f0;
  return;
}



/* Entry: 10750b3d4; end: 10750b3f3;  */

void FUN_10750b3d4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_1109b80f0;
  return;
}



/* Entry: 10750b3f4; end: 10750b41b;  */

void FUN_10750b3f4(undefined8 param_1)

{
  func_0x00010750b4c4();
  func_0x00010750b4bc(param_1,&PTR_DAT_1109b8150);
  func_0x00010750b458();
  return;
}



/* Entry: 10750b41c; end: 10750b5ff;  */

undefined ** FUN_10750b41c(void)

{
  return &PTR_DAT_1109b8150;
}



/* Entry: 10750b600; end: 10750b677;  */

undefined8 * FUN_10750b600(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10750e38c(param_1,&uStack_30);
  FUN_1074f7454(&uStack_30);
  func_0x000107500030(&uStack_40);
  *param_1 = &PTR_FUN_1109b8190;
  param_1[0x2b] = param_1;
  return param_1;
}



/* Entry: 10750b678; end: 10750b84b;  */

void FUN_10750b678(undefined1 *param_1,long param_2,long *param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 *puStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  ulong uStack_160;
  undefined8 *puStack_158;
  undefined1 *puStack_150;
  undefined1 uStack_140;
  undefined7 uStack_13f;
  undefined1 uStack_118;
  undefined8 auStack_110 [4];
  char cStack_f0;
  undefined1 auStack_e8 [24];
  undefined8 *puStack_d0;
  undefined1 auStack_c8 [96];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = (long *)(param_2 + 8);
  lVar5 = *plVar6;
  if (lVar5 != *param_3) {
    FUN_10750b84c(plVar6);
    FUN_1074ffde8(&uStack_140,plVar6);
    FUN_1074ffde8(auStack_110,param_3);
    uVar2 = CONCAT71(uStack_13f,uStack_140);
    func_0x0001077b7498(uVar2,auStack_110[0]);
    if ((int)uVar2 != 0) {
      func_0x000107515b1c(param_2 + 0x90);
    }
    func_0x000107500030(auStack_110);
    func_0x000107500030(&uStack_140);
    lVar5 = *plVar6;
  }
  *(char *)(param_2 + 0x78) = (char)param_5;
  lVar5 = lVar5 + 0x98;
  func_0x0001077b7104(auStack_110,lVar5);
  if (cStack_f0 == '\x01') {
    lVar5 = *plVar6;
    uVar1 = *(ushort *)(lVar5 + 0x90);
    uStack_140 = 0;
    uStack_118 = 0;
    puStack_d0 = (undefined8 *)0x0;
    puVar3 = (undefined8 *)0x20;
    __Znwm();
    *puVar3 = &PTR_FUN_1109b82c8;
    puVar3[1] = param_2;
    puVar3[2] = param_7;
    puVar3[3] = auStack_110;
    puStack_150 = auStack_e8;
    puStack_158 = (undefined8 *)&uStack_140;
    uStack_160 = (ulong)uVar1;
    puStack_d0 = puVar3;
    FUN_107513908(auStack_c8,param_2 + 0x90,param_4,param_5,param_6,param_7,lVar5,param_8,0x200);
    FUN_1074f7534(auStack_c8);
    func_0x00010750bd60(auStack_e8);
    lVar5 = param_4;
  }
  *param_1 = 0;
  param_1[0x58] = 0;
  puVar3 = auStack_110;
  func_0x00010750b900();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107500030(auStack_110);
  puVar4 = (undefined8 *)&uStack_140;
  func_0x000107500030();
  func_0x00010750bdac();
  pcStack_168 = FUN_10750b84c;
  uStack_188 = puVar4[1];
  uStack_190 = *puVar4;
  uStack_180 = param_8;
  puStack_178 = puVar3;
  puStack_170 = &stack0xfffffffffffffff0;
  *puVar4 = 0;
  puVar4[1] = 0;
  func_0x00010750b8bc();
  func_0x00010750b8bc(lVar5,&uStack_190);
  FUN_1074f7454(&uStack_190);
  return;
}



/* Entry: 10750b84c; end: 10750b88b;  */

void FUN_10750b84c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_10750b8bc();
  FUN_10750b8bc(param_2,&uStack_30);
  FUN_1074f7454(&uStack_30);
  return;
}



/* Entry: 10750b88c; end: 10750b88f;  */

undefined8 * FUN_10750b88c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109b8910;
  func_0x0001073ad4a0(param_1 + 0x32);
  func_0x0001073ad4a0(param_1 + 0x30);
  func_0x00010750f0b0(param_1 + 0x2e);
  FUN_107513834(param_1 + 0x12);
  func_0x00010750ff80(param_1 + 0x11);
  *param_1 = &PTR_DAT_1109b7210;
  FUN_1074f5794(param_1 + 4);
  FUN_1074f7454(param_1 + 1);
  return param_1;
}



/* Entry: 10750b890; end: 10750b8a3;  */

void FUN_10750b890(void)

{
  func_0x00010750e580();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10750b8a4; end: 10750b8bb;  */

undefined8 FUN_10750b8a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 10750b8bc; end: 10750b92f;  */

undefined8 * FUN_10750b8bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  FUN_1074f7454(&uStack_30);
  return param_1;
}



/* Entry: 10750b930; end: 10750b97b;  */

void FUN_10750b930(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x18) != 0xffffffff) {
    (*(code *)(&PTR_FUN_1109b82a8)[*(uint *)(param_1 + 0x18)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  return;
}



/* Entry: 10750b97c; end: 10750b98b;  */

void FUN_10750b97c(undefined8 param_1,long param_2)

{
  param_2 = param_2 + 8;
  func_0x00010724ce4c();
  if (param_2 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 10750b98c; end: 10750b9b3;  */

long FUN_10750b98c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10750b9b4; end: 10750b9bb;  */

void FUN_10750b9b4(void)

{
  return;
}



/* Entry: 10750b9bc; end: 10750b9f7;  */

void FUN_10750b9bc(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *puVar1 = &PTR_FUN_1109b82c8;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



/* Entry: 10750b9f8; end: 10750ba2f;  */

void FUN_10750b9f8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_1109b82c8;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10750ba30; end: 10750bb8f;  */

void FUN_10750ba30(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_118 [120];
  undefined8 uStack_a0;
  long lStack_98;
  undefined1 auStack_90 [32];
  undefined8 uStack_70;
  long lStack_68;
  
  uStack_128 = param_4[1];
  uStack_130 = *param_4;
  *param_4 = 0;
  param_4[1] = 0;
  lVar10 = *(long *)(param_2 + 8);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  lVar9 = *(long *)(lVar10 + 8);
  uVar2 = *(undefined8 *)(lVar9 + 0x80);
  lVar4 = *(long *)(lVar9 + 0x88);
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = *plVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  uVar8 = *(undefined8 *)(param_2 + 0x18);
  uStack_140 = 0;
  uStack_138 = 0;
  uStack_a0 = uVar2;
  lStack_98 = lVar4;
  func_0x00010750edb0(auStack_118,lVar10,&uStack_130);
  lVar10 = *(long *)(lVar10 + 8);
  uVar7 = 0x3e0;
  __Znwm();
  uStack_a0 = 0;
  lStack_98 = 0;
  uStack_70 = uVar2;
  lStack_68 = lVar4;
  FUN_10750bbd4(auStack_90,uVar8);
  func_0x000107828a04(uVar7,param_3,lVar9 + 0x10,uVar3,&uStack_70,auStack_90,auStack_118,
                      lVar10 + 0x68);
  FUN_10750b930(auStack_90);
  func_0x00010750bd10(&uStack_70);
  func_0x00010750bcd8(auStack_118);
  func_0x00010750bd38(&uStack_130);
  func_0x00010750bd10(&uStack_a0);
  func_0x00010750bd38(&uStack_140);
  *param_1 = uVar7;
  return;
}



/* Entry: 10750bb90; end: 10750bbc7;  */

long FUN_10750bb90(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109b8348);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10750bbc8; end: 10750bbd3;  */

undefined ** FUN_10750bbc8(void)

{
  return &PTR_DAT_1109b8348;
}



/* Entry: 10750bbd4; end: 10750bc13;  */

undefined1 * FUN_10750bbd4(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  FUN_10750bc14();
  return param_1;
}



/* Entry: 10750bc14; end: 10750bc73;  */

void FUN_10750bc14(long param_1,long param_2)

{
  uint uVar1;
  long lStack_38;
  
  FUN_10750b930();
  uVar1 = *(uint *)(param_2 + 0x18);
  if (uVar1 != 0xffffffff) {
    lStack_38 = param_1;
    (*(code *)(&PTR_FUN_1109b8338)[uVar1])(&lStack_38,param_2);
    *(uint *)(param_1 + 0x18) = uVar1;
  }
  return;
}



/* Entry: 10750bc74; end: 10750bcd7;  */

void FUN_10750bc74(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = (undefined8 *)*param_1;
  uVar6 = *param_2;
  puVar4[1] = param_2[1];
  *puVar4 = uVar6;
  lVar5 = param_2[2];
  puVar4[2] = lVar5;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* Entry: 10750bcd8; end: 10750bda3;  */

undefined8 FUN_10750bcd8(long param_1)

{
  undefined8 unaff_x19;
  
  FUN_1074f9d98(param_1 + 0x60);
  func_0x00010750bd38(param_1 + 0x50);
  FUN_1074f94f4(param_1 + 0x40);
  func_0x0001074fea4c();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 10750bda4; end: 10750bdbf;  */

void FUN_10750bda4(void)

{
  return;
}



/* Entry: 10750bdc0; end: 10750be37;  */

undefined8 * FUN_10750bdc0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10750e38c(param_1,&uStack_30);
  FUN_1074f7454(&uStack_30);
  func_0x0001074fffe8(&uStack_40);
  *param_1 = &PTR_FUN_1109b8368;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  return param_1;
}



/* Entry: 10750be38; end: 10750be5f;  */

undefined8 * FUN_10750be38(undefined8 *param_1)

{
  func_0x00010750c6a4(param_1 + 0x36);
  *param_1 = &PTR_DAT_1109b8910;
  func_0x0001073ad4a0(param_1 + 0x32);
  func_0x0001073ad4a0(param_1 + 0x30);
  func_0x00010750f0b0(param_1 + 0x2e);
  FUN_107513834(param_1 + 0x12);
  func_0x00010750ff80(param_1 + 0x11);
  *param_1 = &PTR_DAT_1109b7210;
  FUN_1074f5794(param_1 + 4);
  FUN_1074f7454(param_1 + 1);
  return param_1;
}



/* Entry: 10750be60; end: 10750be63;  */

undefined8 * FUN_10750be60(undefined8 *param_1)

{
  func_0x00010750c6a4(param_1 + 0x36);
  *param_1 = &PTR_DAT_1109b8910;
  func_0x0001073ad4a0(param_1 + 0x32);
  func_0x0001073ad4a0(param_1 + 0x30);
  func_0x00010750f0b0(param_1 + 0x2e);
  FUN_107513834(param_1 + 0x12);
  func_0x00010750ff80(param_1 + 0x11);
  *param_1 = &PTR_DAT_1109b7210;
  FUN_1074f5794(param_1 + 4);
  FUN_1074f7454(param_1 + 1);
  return param_1;
}



/* Entry: 10750be64; end: 10750be77;  */

void FUN_10750be64(void)

{
  FUN_10750be38();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10750be78; end: 10750c107;  */

void FUN_10750be78(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,long param_6,undefined8 param_7)

{
  byte bVar1;
  undefined2 uVar2;
  ulong uVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  ulong uVar7;
  undefined8 extraout_x8;
  ulong *extraout_x8_00;
  long lVar8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  undefined1 *unaff_x19;
  ulong uStack_140;
  undefined8 uStack_138;
  undefined1 uStack_118;
  ulong uStack_110;
  long lStack_108;
  ulong uStack_100;
  long lStack_f8;
  undefined1 auStack_f0 [24];
  undefined8 *puStack_d8;
  undefined1 auStack_d0 [96];
  undefined8 uStack_70;
  
  lVar8 = param_1;
  func_0x00010750c978();
  uStack_70 = extraout_x8;
  FUN_10750b84c(lVar8 + 8);
  *(char *)(param_1 + 0x78) = (char)param_4;
  lVar8 = *(long *)(param_1 + 8);
  uStack_138 = *(undefined8 *)(lVar8 + 0x98);
  uStack_140 = *(ulong *)(lVar8 + 0x90);
  if (*(long *)(lVar8 + 0x98) != 0) {
    do {
      func_0x00010750c968();
    } while (extraout_w10 != 0);
  }
  FUN_10750c108(&uStack_100,&uStack_140);
  func_0x00010750c6a4(&uStack_140);
  FUN_10750c108(&uStack_140,param_1 + 0x1b0);
  uVar3 = uStack_100;
  uVar7 = uStack_140;
  func_0x00010750c6cc(&uStack_140);
  uVar4 = uVar7 == uVar3;
  if (!(bool)uVar4) {
    uVar7 = uStack_100;
    lVar8 = lStack_f8;
    if (lStack_f8 != 0) {
      do {
        func_0x00010750c968();
      } while (extraout_w10_00 != 0);
    }
    uStack_138 = *(undefined8 *)(param_1 + 0x1b8);
    uStack_140 = *(ulong *)(param_1 + 0x1b0);
    *(long *)(param_1 + 0x1b8) = lVar8;
    *(ulong *)(param_1 + 0x1b0) = uVar7;
    func_0x00010750c6a4(&uStack_140);
    if (*(int *)(param_6 + 0x20) == 0) {
      if (uStack_100 != 0) {
        func_0x00010784aef0(param_1 + 0xf8);
        bVar1 = *(byte *)(*(long *)(*(long *)(param_1 + 8) + 0x80) + 1);
        lVar8 = *(long *)(param_1 + 0xe0);
        while (uVar4 = lVar8 == param_1 + 0xe8, !(bool)uVar4) {
          if (*(byte *)(lVar8 + 0x24) <= bVar1) {
            lStack_108 = lStack_f8;
            uStack_110 = uStack_100;
            if (lStack_f8 != 0) {
              do {
                func_0x00010750c968();
              } while (extraout_w10_02 != 0);
            }
            func_0x00010782a4d8();
            func_0x00010750c6cc(&uStack_110);
          }
          func_0x00010002c7d4();
        }
      }
    }
    else {
      func_0x000107515b1c(param_1 + 0x90);
    }
  }
  if (((param_5 & 1) != 0) || (uStack_100 != 0)) {
    lVar8 = *(long *)(param_1 + 8);
    uVar2 = **(undefined2 **)(lVar8 + 0x80);
    uStack_140 = uStack_140 & 0xffffffffffffff00;
    uStack_118 = 0;
    if (lStack_f8 != 0) {
      do {
        func_0x00010750c968();
      } while (extraout_w10_01 != 0);
    }
    puStack_d8 = (undefined8 *)0x0;
    puVar5 = (undefined8 *)0x28;
    __Znwm();
    *puVar5 = &PTR_SUB_1109b84d8;
    puVar5[1] = uStack_100;
    puVar5[2] = lStack_f8;
    puVar5[4] = param_6;
    puVar5[3] = param_1;
    puStack_d8 = puVar5;
    FUN_107513908(auStack_d0,param_1 + 0x90,param_3,param_4,param_5,param_6,lVar8,param_7,0x200,
                  uVar2,&uStack_140,auStack_f0,param_7,0,0);
    FUN_1074f7534(auStack_d0);
    func_0x00010750bd60(auStack_f0);
    func_0x00010750c99c();
  }
  *unaff_x19 = 0;
  unaff_x19[0x58] = 0;
  func_0x00010750c6cc();
  func_0x00010750c93c(uStack_70);
  if (!(bool)uVar4) {
    ___stack_chk_fail();
    puVar6 = &uStack_100;
    func_0x00010750c6cc();
    func_0x00010750c98c();
    *extraout_x8_00 = 0;
    extraout_x8_00[1] = 0;
    uVar7 = puVar6[1];
    if (uVar7 != 0) {
      __ZNSt3__119__shared_weak_count4lockEv();
      extraout_x8_00[1] = uVar7;
      if (uVar7 != 0) {
        *extraout_x8_00 = *puVar6;
      }
    }
    return;
  }
  return;
}



/* Entry: 10750c108; end: 10750c147;  */

void FUN_10750c108(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = param_2[1];
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      *param_1 = *param_2;
    }
  }
  return;
}



/* Entry: 10750c148; end: 10750c38b;  */

void FUN_10750c148(long param_1,ulong param_2,undefined ***param_3,undefined ***param_4,
                  undefined ***param_5)

{
  undefined1 in_ZR;
  undefined ***pppuVar1;
  long lVar2;
  undefined ***pppuVar3;
  undefined8 ***pppuVar4;
  undefined8 ***pppuVar5;
  char *pcVar6;
  ulong uVar7;
  undefined8 extraout_x8;
  undefined **ppuVar8;
  code *extraout_x9;
  code *extraout_x9_00;
  code *pcVar9;
  code *extraout_x9_01;
  undefined ***unaff_x24;
  undefined8 ***unaff_x25;
  undefined8 unaff_x26;
  ulong uVar10;
  ulong uVar11;
  undefined1 auStack_130 [32];
  undefined8 uStack_110;
  undefined ***pppuStack_108;
  undefined8 **ppuStack_100;
  ulong uStack_f8;
  undefined8 **ppuStack_f0;
  long lStack_e8;
  undefined8 **ppuStack_e0;
  undefined8 **ppuStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined **ppuStack_b8;
  undefined8 *puStack_b0;
  undefined8 **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_68;
  
  func_0x00010750c978();
  pppuVar1 = param_3;
  uStack_68 = extraout_x8;
  func_0x000100152bb8(param_3,&UNK_10f415fc1);
  if (((ulong)param_3 & 1) == 0) {
LAB_10750c320:
    func_0x00010750c9b8();
  }
  else {
    ppuStack_a8 = (undefined8 **)*param_4;
    if (-1 < *(char *)((long)param_4 + 0x17)) {
      ppuStack_a8 = param_4;
    }
    param_3 = &ppuStack_a0;
    pppuVar4 = &ppuStack_a8;
    FUN_10750c5d0();
    uVar7 = 3;
    pppuVar3 = (undefined ***)&PTR_DAT_1109b8480;
    while (param_4 = pppuVar3, uVar10 = uVar7, uVar10 != 0) {
      uVar11 = uVar10 >> 1;
      unaff_x24 = param_4 + uVar11 * 3;
      if (unaff_x24[2] < puStack_98) {
        uVar7 = uVar10 + ~uVar11;
        pppuVar3 = unaff_x24 + 3;
      }
      else {
        uVar7 = uVar11;
        pppuVar3 = param_4;
        if (unaff_x24[2] <= puStack_98) {
          pppuVar4 = (undefined8 ***)&ppuStack_a0;
          param_3 = unaff_x24;
          func_0x00010750c644();
          uVar7 = uVar10 + ~uVar11;
          pppuVar3 = unaff_x24 + 3;
          if (((ulong)param_3 & 1) == 0) {
            uVar7 = uVar11;
            pppuVar3 = param_4;
          }
        }
      }
    }
    unaff_x26 = 0;
    in_ZR = 1;
    unaff_x25 = (undefined8 ***)0x18;
    if (param_4 == (undefined ***)&UNK_1109b84c8) goto LAB_10750c320;
    ppuVar8 = param_4[2];
    in_ZR = (undefined **)puStack_98 == ppuVar8;
    if (puStack_98 < ppuVar8) goto LAB_10750c320;
    in_ZR = ppuVar8 == (undefined **)puStack_98;
    if (puStack_98 <= ppuVar8) {
      unaff_x24 = &ppuStack_a0;
      FUN_10750c678();
      pppuVar1 = param_4;
      pppuVar5 = pppuVar4;
      FUN_10750c678();
      param_3 = unaff_x24;
      func_0x00010006725c(unaff_x24,pppuVar4,pppuVar1,pppuVar5);
      unaff_x25 = pppuVar4;
      if (((uint)param_3 >> 7 & 1) != 0) goto LAB_10750c320;
    }
    func_0x000100060964(&ppuStack_a0,&UNK_10f406adb);
    lVar2 = param_2 + 0x20;
    pppuVar3 = &ppuStack_a0;
    func_0x000107297a3c();
    if (lVar2 == 0) {
LAB_10750c2c4:
      param_2 = 0;
      unaff_x25 = (undefined8 ***)0x0;
      unaff_x24 = (undefined ***)0x0;
    }
    else {
      pppuVar3 = pppuVar3 + 7;
      in_ZR = *(int *)pppuVar3 == 5;
      if (!(bool)in_ZR) goto LAB_10750c2c4;
      func_0x000104c2d934();
      unaff_x24 = (undefined ***)((ulong)*pppuVar3 & 0xffffffffffffff00);
      param_2 = (ulong)*pppuVar3 & 0xff;
      unaff_x25 = (undefined8 ***)0x1;
    }
    param_3 = &ppuStack_a0;
    func_0x000104c2f714();
    if ((int)unaff_x25 == 0) goto LAB_10750c320;
    param_3 = (undefined ***)(param_1 + 0x1b0);
    FUN_10750c108(&ppuStack_a0);
    if ((undefined8 **)ppuStack_a0 == (undefined8 **)0x0) {
      func_0x00010750c9b8();
    }
    else {
      ppuStack_b8 = ppuStack_a0;
      puStack_b0 = puStack_98;
      ppuStack_a0 = (undefined **)0x0;
      puStack_98 = (undefined **)0x0;
      pppuVar1 = param_5;
      (*(code *)param_4[1])(&ppuStack_b8,(ulong)unaff_x24 | param_2);
      param_3 = &ppuStack_b8;
      func_0x00010750c6cc();
    }
    func_0x00010750c99c();
  }
  func_0x00010750c93c(uStack_68);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010750c6cc(&ppuStack_b8);
  func_0x00010750c99c();
  func_0x00010750c98c();
  pcStack_c8 = FUN_10750c38c;
  uStack_110 = unaff_x26;
  pppuStack_108 = (undefined ***)unaff_x25;
  ppuStack_100 = unaff_x24;
  uStack_f8 = param_2;
  ppuStack_f0 = param_4;
  lStack_e8 = param_1;
  ppuStack_e0 = param_5;
  ppuStack_d8 = param_3;
  puStack_d0 = &stack0xfffffffffffffff0;
  if (*(char *)(pppuVar1 + 3) == '\x01') {
    pcVar6 = "limit";
    func_0x00010002b838(auStack_130);
    func_0x00010750c9ac();
    func_0x00010750c9a4();
    uVar7 = 0;
    func_0x00010002b838(auStack_130);
    func_0x00010750c9ac();
    func_0x00010750c9a4();
    if (((ulong)pcVar6 & 1) != 0) {
      if ((uVar7 & 1) == 0) {
        func_0x00010750c924();
        pcVar9 = extraout_x9_01;
      }
      else {
        func_0x00010750c924();
        pcVar9 = extraout_x9;
      }
      goto LAB_10750c428;
    }
  }
  func_0x00010750c924();
  pcVar9 = extraout_x9_00;
LAB_10750c428:
  (*pcVar9)();
  func_0x00010750c950();
  return;
}



/* Entry: 10750c38c; end: 10750c467;  */

void FUN_10750c38c(undefined8 param_1,undefined8 param_2,long param_3)

{
  char *pcVar1;
  ulong uVar2;
  code *extraout_x9;
  code *extraout_x9_00;
  code *pcVar3;
  code *extraout_x9_01;
  undefined1 auStack_70 [32];
  
  if (*(char *)(param_3 + 0x18) == '\x01') {
    pcVar1 = "limit";
    func_0x00010002b838(auStack_70);
    func_0x00010750c9ac();
    func_0x00010750c9a4();
    uVar2 = 0;
    func_0x00010002b838(auStack_70);
    func_0x00010750c9ac();
    func_0x00010750c9a4();
    if (((ulong)pcVar1 & 1) != 0) {
      if ((uVar2 & 1) == 0) {
        func_0x00010750c924();
        pcVar3 = extraout_x9_01;
      }
      else {
        func_0x00010750c924();
        pcVar3 = extraout_x9;
      }
      goto LAB_10750c428;
    }
  }
  func_0x00010750c924();
  pcVar3 = extraout_x9_00;
LAB_10750c428:
  (*pcVar3)();
  func_0x00010750c950();
  return;
}



/* Entry: 10750c468; end: 10750c517;  */

void FUN_10750c468(undefined8 *param_1)

{
  undefined1 auStack_30 [16];
  
  (**(code **)(*(long *)*param_1 + 0x18))(auStack_30);
  func_0x00010750c950();
  return;
}



/* Entry: 10750c518; end: 10750c5cf;  */

undefined1  [16] FUN_10750c518(long param_1,undefined8 param_2)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  ulong *puVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  undefined1 auVar11 [16];
  
  plVar1 = (long *)(param_1 + 8);
  plVar6 = plVar1;
  plVar9 = plVar1;
  while (plVar10 = (long *)*plVar6, plVar10 != (long *)0x0) {
    lVar3 = (long)(plVar10 + 4);
    func_0x000100125af4(lVar3,param_2);
    bVar2 = -1 < (char)lVar3;
    lVar3 = 8;
    if (bVar2) {
      lVar3 = 0;
    }
    plVar6 = (long *)((long)plVar10 + lVar3);
    if (bVar2) {
      plVar9 = plVar10;
    }
  }
  if (((plVar1 == plVar9) ||
      (func_0x000100125af4(param_2,plVar9 + 4), ((uint)param_2 >> 7 & 1) != 0)) ||
     (puVar4 = (ulong *)(plVar9 + 7), (int)*puVar4 != 5)) {
    uVar7 = 0;
    uVar5 = 0;
    uVar8 = 0;
  }
  else {
    func_0x000104c2d934();
    uVar8 = *puVar4 & 0xffffffffffffff00;
    uVar7 = *puVar4 & 0xff;
    uVar5 = 1;
  }
  auVar11._0_8_ = uVar8 | uVar7;
  auVar11._8_8_ = uVar5;
  return auVar11;
}



/* Entry: 10750c5d0; end: 10750c60b;  */

undefined8 * FUN_10750c5d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  undefined1 uStack_21;
  
  *param_1 = *param_2;
  puVar1 = &uStack_21;
  FUN_10750c60c();
  param_1[1] = puVar1;
  return param_1;
}



/* Entry: 10750c60c; end: 10750c677;  */

ulong FUN_10750c60c(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  char *pcVar2;
  
  uVar1 = 0xcbf29ce484222325;
  for (pcVar2 = (char *)*param_2; (long)*pcVar2 != 0; pcVar2 = pcVar2 + 1) {
    uVar1 = (uVar1 ^ (long)*pcVar2) * 0x100000001b3;
  }
  return uVar1;
}



/* Entry: 10750c678; end: 10750c71f;  */

undefined1  [16] FUN_10750c678(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  uVar2 = *param_1;
  uVar1 = uVar2;
  _strlen(uVar2);
  auVar3._8_8_ = uVar1;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* Entry: 10750c720; end: 10750c733;  */

void FUN_10750c720(void)

{
  func_0x00010750c6f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10750c734; end: 10750c75b;  */

void FUN_10750c734(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  int extraout_w10;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)0x28;
  __Znwm();
  puVar2 = (undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_SUB_1109b84d8;
  lVar3 = *(long *)(param_1 + 0x10);
  uVar4 = *puVar2;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar4;
  if (lVar3 != 0) {
    do {
      func_0x00010750c968();
    } while (extraout_w10 != 0);
  }
  uVar4 = puVar2[2];
  puVar1[4] = puVar2[3];
  puVar1[3] = uVar4;
  return;
}



/* Entry: 10750c75c; end: 10750c787;  */

void FUN_10750c75c(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  *param_2 = &PTR_SUB_1109b84d8;
  lVar2 = *(long *)(param_1 + 0x10);
  uVar3 = *puVar1;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x00010750c968();
    } while (extraout_w10 != 0);
  }
  uVar3 = puVar1[2];
  param_2[4] = puVar1[3];
  param_2[3] = uVar3;
  return;
}



/* Entry: 10750c788; end: 10750c8a3;  */

void FUN_10750c788(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int extraout_w10;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [120];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uStack_e8 = param_4[1];
  uStack_f0 = *param_4;
  *param_4 = 0;
  param_4[1] = 0;
  lVar3 = *(long *)(param_2 + 0x18);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = *(long *)(lVar3 + 8);
  uStack_100 = 0;
  uStack_f8 = 0;
  func_0x00010750edb0(auStack_d8,lVar3,&uStack_f0);
  lVar3 = *(long *)(lVar3 + 8);
  lVar5 = *(long *)(param_2 + 0x10);
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  uVar6 = *(undefined8 *)(param_2 + 8);
  uVar2 = 0x390;
  __Znwm();
  uStack_60 = uVar6;
  uStack_58 = uVar7;
  if (lVar5 != 0) {
    do {
      func_0x00010750c968();
    } while (extraout_w10 != 0);
  }
  func_0x00010782a418(uVar2,param_3,lVar4 + 0x10,uVar1,&uStack_60,auStack_d8,lVar3 + 0x68);
  func_0x00010750c6cc(&uStack_60);
  FUN_10750bcd8(auStack_d8);
  func_0x00010750bd38(&uStack_f0);
  func_0x00010750bd38(&uStack_100);
  *param_1 = uVar2;
  return;
}



/* Entry: 10750c8a4; end: 10750c8db;  */

long FUN_10750c8a4(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109b8538);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10750c8dc; end: 10750c9cb;  */

undefined ** FUN_10750c8dc(void)

{
  return &PTR_DAT_1109b8538;
}



/* Entry: 10750c9cc; end: 10750ca07;  */

long FUN_10750c9cc(long param_1)

{
  FUN_107440dd8(param_1 + 0x68);
  func_0x000104c2f714(param_1 + 0x30);
  FUN_10750d99c(param_1 + 0x18);
  FUN_10750db08(param_1 + 8);
  return param_1;
}



/* Entry: 10750ca08; end: 10750ca0b;  */

long FUN_10750ca08(long param_1)

{
  FUN_107440dd8(param_1 + 0x68);
  func_0x000104c2f714(param_1 + 0x30);
  FUN_10750d99c(param_1 + 0x18);
  FUN_10750db08(param_1 + 8);
  return param_1;
}



/* Entry: 10750ca0c; end: 10750ca1f;  */

void FUN_10750ca0c(void)

{
  FUN_10750c9cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10750ca20; end: 10750cb43;  */

void FUN_10750ca20(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  undefined4 uStack_58;
  undefined1 uStack_54;
  undefined1 auStack_50 [16];
  long lStack_40;
  undefined4 uStack_34;
  
  plVar4 = *(long **)(param_1 + 8);
  if (((plVar4 != (long *)0x0) &&
      (plVar3 = plVar4, (**(code **)(*plVar4 + 0x48))(), (int)plVar3 != 0)) &&
     ((*(byte *)((long)plVar4 + 0x1c) & 1) == 0)) {
    FUN_107456470(*(undefined8 *)(param_1 + 8),param_2);
  }
  if ((*(byte *)(param_1 + 0x80) & 1) == 0) {
    uStack_34 = 0;
    if ((bRam00000001136cb948 & 1) == 0) {
      iVar2 = 0x136cb948;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        FUN_10743a370(0x1136cb950,0x100000001,&uStack_34,4);
        ___cxa_guard_release(0x1136cb948);
      }
    }
    uStack_54 = 0;
    uStack_58 = 0;
    FUN_107432024(auStack_50,param_2,0x1136cb950,&uStack_58,0);
    FUN_107440a90(param_1 + 0x68,auStack_50);
    lVar1 = lStack_40;
    lStack_40 = 0;
    if (lVar1 != 0) {
      func_0x00010750dc30();
    }
  }
  return;
}



/* Entry: 10750cb44; end: 10750cef3;  */

void FUN_10750cb44(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,long param_6,long param_7)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  ulong uVar9;
  undefined1 auStack_168 [4];
  float fStack_164;
  undefined8 uStack_160;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined2 uStack_120;
  undefined1 uStack_11e;
  undefined1 uStack_11d;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  uint uStack_110;
  undefined4 uStack_10c;
  undefined2 uStack_108;
  undefined1 uStack_106;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined2 uStack_e8;
  undefined8 *apuStack_90 [2];
  undefined1 auStack_80 [8];
  undefined1 uStack_78;
  
  if ((*(long *)(param_6 + 8) == 0) || ((*(byte *)(param_7 + 0x68) >> 1 & 1) == 0)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    auStack_80[0] = 0;
    uStack_78 = 0;
    uStack_120 = 0x10;
    uStack_11e = 0;
    uStack_11d = 0;
    uStack_118 = 0;
    uStack_114 = 0;
    uVar6 = (uint)*(byte *)(*(long *)(param_7 + 0x28) + 0xa94);
    uStack_10c = *(undefined4 *)(param_7 + 0x78);
    uStack_108 = 0;
    uStack_106 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0x101010100000000;
    uStack_e8 = 0xf01;
    uStack_110 = uVar6;
    FUN_1073ca29c(apuStack_90,*(undefined8 *)(param_7 + 0x90),auStack_80,&uStack_120);
    if (apuStack_90[0] != (undefined8 *)0x0) {
      plVar3 = (long *)*apuStack_90[0];
      (**(code **)(*plVar3 + 0x18))();
      if ((int)plVar3 == 2) {
        uStack_160 = 7;
        uStack_158 = 0x3f800000;
        uStack_11c = 7;
        uStack_118 = 0;
        uStack_114 = 0;
        uStack_110 = CONCAT13(uStack_110._3_1_,0x10101);
        (**(code **)(**(long **)(param_7 + 0x18) + 0x80))
                  (*(long **)(param_7 + 0x18),&uStack_160,&uStack_120);
        uStack_11e = 1;
        uStack_120 = 0x100;
        (**(code **)(**(long **)(param_7 + 0x18) + 0x88))(*(long **)(param_7 + 0x18),&uStack_120);
        (**(code **)(**(long **)(param_7 + 0x18) + 0x40))(*(long **)(param_7 + 0x18),apuStack_90[0])
        ;
        (**(code **)(**(long **)(param_7 + 0x18) + 0x58))
                  (*(long **)(param_7 + 0x18),*(long *)(param_7 + 0x48) + 0x150);
        func_0x00010750dc1c(*(undefined8 *)(**(long **)(param_7 + 0x18) + 0x60));
        uStack_118 = 0;
        uStack_114 = 0x3f800000;
        uStack_120 = 0;
        uStack_11e = 0x80;
        uStack_11d = 0x3f;
        uStack_11c = 0;
        (**(code **)(**(long **)(param_7 + 0x18) + 0xb8))(*(long **)(param_7 + 0x18),6,&uStack_120);
        uVar9 = 0x3f800000;
        (**(code **)(**(long **)(param_7 + 0x18) + 0xa0))(*(long **)(param_7 + 0x18),1);
        plVar3 = *(long **)(param_7 + 0x18);
        FUN_1073b9c0c(param_6 + 0x68);
        func_0x00010750dc1c(*(undefined8 *)(*plVar3 + 0x70),plVar3);
        lVar1 = *(long *)(param_6 + 0x20);
        for (lVar4 = *(long *)(param_6 + 0x18); lVar4 != lVar1; lVar4 = lVar4 + 0x90) {
          _memcpy(&uStack_120,lVar4,0x90);
          plVar3 = *(long **)(param_7 + 0x18);
          func_0x000107482794(&uStack_160,&uStack_110);
          func_0x00010750dc1c(*(undefined8 *)(*plVar3 + 0xd0),plVar3);
          uVar7 = (undefined4)uVar9;
          if (uVar6 != 0) {
            plVar3 = *(long **)(param_7 + 0x18);
            func_0x000107415f50(*(undefined8 *)(param_7 + 0x28),&uStack_120,0x2000);
            uStack_160 = CONCAT44(param_3,uVar7);
            uStack_158 = param_4;
            uStack_154 = param_5;
            (**(code **)(*plVar3 + 0xb8))(plVar3,2,&uStack_160);
            plVar3 = *(long **)(param_7 + 0x18);
            lVar5 = *(long *)(param_7 + 0x28);
            FUN_107416bf8(lVar5);
            func_0x000107482794(&uStack_160,lVar5 + 0xaa0);
            (**(code **)(*plVar3 + 0xd0))(plVar3,3,&uStack_160);
            plVar3 = *(long **)(param_7 + 0x18);
            lVar5 = *(long *)(param_7 + 0x28);
            FUN_107416bf8(lVar5);
            (**(code **)(*plVar3 + 0xb8))(plVar3,4,lVar5 + 0xe30);
            uVar8 = 0;
            if (*(char *)(*(long *)(param_7 + 0x28) + 0xa94) == '\x01') {
              uVar8 = *(uint *)(*(long *)(param_7 + 0x28) + 0xa90);
            }
            uVar9 = (ulong)uVar8;
            (**(code **)(**(long **)(param_7 + 0x18) + 0xa0))(*(long **)(param_7 + 0x18),5);
          }
          FUN_1075004a8(&uStack_160);
          lVar2 = CONCAT44(uStack_154,uStack_158);
          for (lVar5 = uStack_160; lVar5 != lVar2; lVar5 = lVar5 + 0x28) {
            fStack_164 = *(float *)(param_7 + 0x78) * 4.0;
            uVar9 = (ulong)(uint)fStack_164;
            auStack_168[0] = 3;
            (**(code **)(**(long **)(param_7 + 0x18) + 0x138))
                      (*(long **)(param_7 + 0x18),auStack_168,*(undefined4 *)(lVar5 + 0x18),1,
                       *(undefined4 *)(lVar5 + 8));
          }
          FUN_1073eb118(&uStack_160);
        }
      }
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    func_0x00010730b734(apuStack_90);
  }
  return;
}



/* Entry: 10750cef4; end: 10750cf97;  */

undefined8 * FUN_10750cef4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_1074ffe30(param_1,&uStack_30);
  FUN_1074f7454(&uStack_30);
  func_0x00010750000c(&uStack_40);
  *param_1 = &PTR_FUN_1109b8558;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  return param_1;
}



/* Entry: 10750cf98; end: 10750cf9b;  */

undefined8 * FUN_10750cf98(undefined8 *param_1)

{
  func_0x00010728f1b4(param_1 + 0x14);
  func_0x00010750db30(param_1 + 0x13);
  func_0x00010750db08(param_1 + 0x11);
  *param_1 = &PTR_DAT_1109b7210;
  FUN_1074f5794(param_1 + 4);
  FUN_1074f7454(param_1 + 1);
  return param_1;
}



/* Entry: 10750cf9c; end: 10750cfaf;  */

void FUN_10750cf9c(void)

{
  func_0x00010750cf60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10750cfb0; end: 10750cfcf;  */

bool FUN_10750cfb0(long param_1)

{
  return *(long *)(param_1 + 0x88) != 0;
}



/* Entry: 10750cfd0; end: 10750d24b;  */

void FUN_10750cfd0(undefined8 param_1,long param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  code *pcVar3;
  undefined2 *puVar4;
  undefined2 **ppuVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined2 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined2 *puStack_120;
  undefined2 *puStack_118;
  undefined2 *puStack_110;
  undefined1 *puStack_108;
  undefined1 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_68;
  
  ppuVar5 = &puStack_120;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010786a340(param_1);
  if (*(long *)(param_2 + 0x88) == 0) {
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
    FUN_10750d24c(&puStack_120,0,*(undefined8 *)(param_2 + 0x90),&uStack_f8,
                  *(long *)(param_2 + 8) + 0x10);
    puVar2 = puStack_120;
    puStack_120 = (undefined2 *)0x0;
    FUN_10750db54(param_2 + 0x98,puVar2);
    func_0x00010750db30(&puStack_120);
    ppuVar5 = (undefined2 **)&uStack_f8;
  }
  else {
    lVar11 = *(long *)(param_2 + 0xa0);
    lVar9 = *(long *)(param_2 + 0xa8);
    _bzero((long)&uStack_f8 + 3,0x88);
    puStack_120 = (undefined2 *)0x0;
    puStack_118 = (undefined2 *)0x0;
    puStack_110 = (undefined2 *)0x0;
    uStack_100 = 0;
    lVar9 = lVar9 - lVar11;
    puVar2 = puStack_118;
    puStack_108 = (undefined1 *)&puStack_120;
    if (lVar9 != 0) {
      uVar6 = lVar9 >> 4;
      puStack_108 = (undefined1 *)&puStack_120;
      if (0x1c71c71c71c71c7 < uVar6) goto LAB_10750d208;
      puVar8 = (undefined2 *)(uVar6 * 0x90);
      puVar4 = puVar8;
      puStack_108 = (undefined1 *)&puStack_120;
      __Znwm();
      puVar2 = puVar4 + uVar6 * 0x48;
      puStack_110 = puVar2;
      puStack_120 = puVar4;
      for (; puVar8 != (undefined2 *)0x0; puVar8 = puVar8 + -0x48) {
        *puVar4 = 0;
        *(undefined1 *)(puVar4 + 2) = 0;
        _memcpy((long)puVar4 + 5,&uStack_f8,0x8b);
        puVar4 = puVar4 + 0x48;
      }
    }
    puStack_118 = puVar2;
    uStack_100 = 1;
    FUN_10750d9fc(&puStack_108);
    lVar9 = 0;
    lVar10 = *param_3;
    lVar11 = 0x88;
    for (uVar6 = 0; uVar6 < (ulong)(*(long *)(param_2 + 0xa8) - *(long *)(param_2 + 0xa0) >> 4);
        uVar6 = uVar6 + 1) {
      puVar7 = (undefined8 *)((long)puStack_120 + lVar11);
      puVar1 = (undefined8 *)(*(long *)(param_2 + 0xa0) + lVar9);
      uVar12 = *puVar1;
      puVar7[-0x10] = puVar1[1];
      puVar7[-0x11] = uVar12;
      puVar7[-0xd] = 0;
      puVar7[-0xe] = 0;
      puVar7[-0xb] = 0;
      puVar7[-0xc] = 0;
      puVar7[-10] = 0x3ff0000000000000;
      puVar7[-6] = 0;
      puVar7[-7] = 0;
      puVar7[-8] = 0;
      puVar7[-9] = 0;
      puVar7[-5] = 0x3ff0000000000000;
      puVar7[-3] = 0;
      puVar7[-4] = 0;
      puVar7[-1] = 0;
      puVar7[-2] = 0;
      *puVar7 = 0x3ff0000000000000;
      puVar7 = puVar7 + -0xf;
      *puVar7 = 0x3ff0000000000000;
      func_0x000107415eec(lVar10 + 0x180,puVar7,*(long *)(param_2 + 0xa0) + lVar9,0x2000);
      func_0x000107877034(puVar7,lVar10 + 0x80,puVar7);
      lVar11 = lVar11 + 0x90;
      lVar9 = lVar9 + 0x10;
    }
    FUN_10750d24c(&uStack_f8,*(undefined8 *)(param_2 + 0x88),*(undefined8 *)(param_2 + 0x90),
                  &puStack_120,*(long *)(param_2 + 8) + 0x10);
    uVar12 = uStack_f8;
    uStack_f8 = 0;
    FUN_10750db54(param_2 + 0x98,uVar12);
    func_0x00010750db30(&uStack_f8);
  }
  FUN_10750d99c(ppuVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
LAB_10750d208:
  FUN_10750d9e8();
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10750d210);
  (*pcVar3)();
}



/* Entry: 10750d24c; end: 10750d307;  */

void FUN_10750d24c(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar1 = (undefined8 *)0x88;
  __Znwm();
  if (param_3 != 0) {
    do {
      func_0x00010750dbc8();
    } while (extraout_w10 != 0);
  }
  uVar2 = param_4[2];
  uVar4 = param_4[1];
  uVar3 = *param_4;
  param_4[1] = 0;
  param_4[2] = 0;
  *param_4 = 0;
  *puVar1 = &PTR_FUN_1109b8668;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  uStack_50 = 0;
  uStack_48 = 0;
  puVar1[4] = uVar4;
  puVar1[3] = uVar3;
  puVar1[5] = uVar2;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_68 = 0;
  func_0x000104c2fe00(puVar1 + 6,param_5);
  *(undefined1 *)(puVar1 + 0xd) = 0;
  *(undefined1 *)(puVar1 + 0x10) = 0;
  *param_1 = puVar1;
  FUN_10750d99c(&uStack_68);
  FUN_10750db08(&uStack_50);
  return;
}



/* Entry: 10750d308; end: 10750d327;  */

void FUN_10750d308(undefined8 *param_1)

{
  *param_1 = &UNK_10e52b660;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}



/* Entry: 10750d328; end: 10750d943;  */

void FUN_10750d328(undefined1 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  byte param_5,undefined8 param_6,long param_7)

{
  ulong *puVar1;
  bool bVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long extraout_x8;
  uint *extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  ulong *puVar6;
  long *plVar7;
  bool bVar8;
  ulong *puVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  ulong uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined4 uStack_ff8;
  undefined4 uStack_ff4;
  ulong uStack_ff0;
  long lStack_fe8;
  ulong auStack_fe0 [2];
  ulong *puStack_fd0;
  ulong *puStack_fc8;
  ulong *puStack_fb8;
  ulong *puStack_fb0;
  double dStack_fa0;
  double dStack_f98;
  ulong *puStack_f78;
  ulong *puStack_f70;
  undefined8 uStack_f68;
  ulong uStack_f60;
  long lStack_f58;
  ulong auStack_f50 [5];
  undefined8 uStack_f28;
  double dStack_f20;
  undefined8 uStack_f18;
  undefined1 auStack_f10 [120];
  double dStack_e98;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  *(byte *)(param_2 + 0x78) = param_5;
  if ((param_5 & 1) == 0) {
    *param_1 = 0;
    param_1[0x58] = 0;
  }
  else {
    _memcpy(auStack_f10,*(undefined8 *)(param_7 + 8),0xe50);
    FUN_10750b84c(param_2 + 8,param_3);
    lVar5 = *(long *)(param_2 + 8);
    auStack_f50[1] = *(undefined8 *)(lVar5 + 0x88);
    auStack_f50[0] = *(ulong *)(lVar5 + 0x80);
    auStack_f50[3] = *(undefined8 *)(lVar5 + 0x98);
    auStack_f50[2] = *(undefined8 *)(lVar5 + 0x90);
    uStack_f28 = *(undefined8 *)(lVar5 + 0xa8);
    auStack_f50[4] = *(undefined8 *)(lVar5 + 0xa0);
    uStack_f18 = *(undefined8 *)(lVar5 + 0xb8);
    dVar14 = *(double *)(lVar5 + 0xb0);
    uVar13 = *(ulong *)(lVar5 + 0xc0);
    lStack_f58 = *(long *)(lVar5 + 200);
    uStack_f60 = uVar13;
    dStack_f20 = dVar14;
    if (lStack_f58 != 0) {
      do {
        func_0x00010750dbc8();
      } while (extraout_w10 != 0);
    }
    if ((uVar13 == 0) || (FUN_1074344b4(), (uVar13 & 1) == 0)) {
      *(undefined1 *)(param_2 + 0x78) = 0;
      *param_1 = 0;
      param_1[0x58] = 0;
    }
    else {
      puStack_f78 = (ulong *)0x0;
      puStack_f70 = (ulong *)0x0;
      uStack_f68 = 0;
      dVar12 = INFINITY;
      dVar11 = INFINITY;
      dVar16 = -INFINITY;
      dVar15 = -INFINITY;
      for (lVar5 = 0; lVar5 != 0x40; lVar5 = lVar5 + 0x10) {
        uStack_b8 = *(ulong *)((long)auStack_f50 + lVar5 + 8);
        uStack_c0 = *(ulong *)((long)auStack_f50 + lVar5);
        dVar10 = 0.0;
        FUN_10748a478(&uStack_c0);
        dStack_fa0 = dVar10;
        dStack_f98 = dVar14;
        func_0x00010750da28(&puStack_f78,&dStack_fa0);
        dVar14 = (double)-(ulong)(dStack_fa0 < dVar11);
        dVar11 = (double)((ulong)dVar11 ^ ((ulong)dVar11 ^ (ulong)dStack_fa0) & (ulong)dVar14);
        dVar12 = (double)((ulong)dVar12 ^
                         ((ulong)dVar12 ^ (ulong)dStack_f98) & -(ulong)(dStack_f98 < dVar12));
        dVar15 = (double)((ulong)dVar15 ^
                         ((ulong)dVar15 ^ (ulong)dStack_fa0) & -(ulong)(dVar15 < dStack_fa0));
        dVar16 = (double)((ulong)dVar16 ^
                         ((ulong)dVar16 ^ (ulong)dStack_f98) & -(ulong)(dVar16 < dStack_f98));
      }
      dVar14 = dVar16 - dVar12;
      if (dVar16 - dVar12 <= dVar15 - dVar11) {
        dVar14 = dVar15 - dVar11;
      }
      dVar11 = dVar14;
      _log2();
      dVar12 = dStack_e98;
      _log2();
      _exp2();
      dVar14 = dVar14 * dVar12 * 512.0;
      *(bool *)(param_2 + 0x78) = 2.0 < dVar14;
      if (dVar14 <= 2.0) {
        *param_1 = 0;
        param_1[0x58] = 0;
      }
      else {
        func_0x00010725ac68(&dStack_fa0,auStack_f50,auStack_f50 + 2);
        func_0x000107259568(&dStack_fa0,auStack_f50 + 4);
        func_0x000107259568(&dStack_fa0,&dStack_f20);
        dVar14 = (double)(long)-dVar11;
        if (dVar14 <= 0.0) {
          dVar14 = 0.0;
        }
        func_0x00010787ca68(&puStack_fb8,&dStack_fa0,(int)dVar14);
        plVar7 = (long *)(param_2 + 0xa0);
        *(long *)(param_2 + 0xa8) = *plVar7;
        FUN_1074d6d54(plVar7,puStack_fb8);
        _log2(dStack_e98);
        uStack_c0 = uStack_c0 & 0xffffffffffff0000;
        func_0x00010787c6e8(&puStack_fd0,auStack_f10,(int)dStack_e98,&uStack_c0);
        bVar8 = false;
        for (puVar6 = puStack_fd0; puVar1 = puStack_f70, puVar6 != puStack_fc8; puVar6 = puVar6 + 2)
        {
          uStack_88 = puVar6[1];
          uVar13 = *puVar6;
          uStack_90._2_2_ = (short)(uVar13 >> 0x10);
          bVar2 = uStack_90._2_2_ == 0;
          uStack_90 = uVar13;
          if (bVar2) {
LAB_10750d574:
            puVar1 = puStack_fb0;
            if (bVar8) goto LAB_10750d650;
            bVar8 = false;
            for (puVar9 = puStack_fb8; puVar9 != puVar1; puVar9 = puVar9 + 2) {
              uStack_b8 = puVar9[1];
              uVar13 = *puVar9;
              uStack_c0._4_1_ = (char)(uVar13 >> 0x20);
              uStack_c0 = uVar13;
              if (uStack_c0._4_1_ == uStack_90._4_1_) {
                if ((int)uStack_b8 != (int)uStack_88) goto LAB_10750d5c0;
                uStack_b8._4_4_ = (int)(uStack_b8 >> 0x20);
                bVar2 = uStack_b8._4_4_ != uStack_88._4_4_;
                if (bVar2) goto LAB_10750d5c0;
LAB_10750d5e0:
                bVar8 = true;
              }
              else {
LAB_10750d5c0:
                uVar13 = (long)&uStack_c0 + 4;
                FUN_1074980c0(uVar13,(long)&uStack_90 + 4);
                if ((uVar13 & 1) != 0) goto LAB_10750d5e0;
                lVar5 = (long)&uStack_90 + 4;
                FUN_1074980c0(lVar5,(long)&uStack_c0 + 4);
                if ((int)lVar5 != 0) goto LAB_10750d5e0;
              }
            }
          }
          else {
            lVar5 = (long)puStack_fb8 + 4;
            FUN_1074980c0(lVar5,(long)&uStack_90 + 4);
            if ((int)lVar5 == 0) goto LAB_10750d574;
            if (*(ulong *)(param_2 + 0xa8) < *(ulong *)(param_2 + 0xb0)) {
              func_0x00010750dbe8();
              lVar5 = extraout_x8 + 0x10;
            }
            else {
              plVar3 = plVar7;
              FUN_1074934c4(plVar7,((long)(*(ulong *)(param_2 + 0xa8) - *plVar7) >> 4) + 1);
              FUN_10749358c(&uStack_c0,plVar3,
                            *(long *)(param_2 + 0xa8) - *(long *)(param_2 + 0xa0) >> 4,
                            param_2 + 0xb0);
              func_0x00010750dbe8(lStack_b0);
              lStack_b0 = lStack_b0 + 0x10;
              FUN_107493504(plVar7,&uStack_c0);
              lVar5 = *(long *)(param_2 + 0xa8);
              FUN_107493614(&uStack_c0);
            }
            *(long *)(param_2 + 0xa8) = lVar5;
LAB_10750d650:
            bVar8 = true;
          }
        }
        *(bool *)(param_2 + 0x78) = bVar8;
        if (bVar8 == false) {
          *param_1 = 0;
          param_1[0x58] = 0;
        }
        else {
          uStack_c0 = 0;
          uStack_b8 = 0;
          lStack_b0 = 0;
          for (puVar6 = puStack_f78; lVar5 = lStack_f58, uVar13 = uStack_f60, puVar6 != puVar1;
              puVar6 = puVar6 + 2) {
            uStack_88 = puVar6[1];
            uStack_90 = *puVar6;
            lVar5 = *plVar7;
            FUN_10748a3dc(lVar5,&uStack_90,0x2000);
            auStack_fe0[0] = CONCAT44(auStack_fe0[0]._4_4_,(int)lVar5);
            func_0x000104c33ff8(&uStack_c0,auStack_fe0);
          }
          if (*(long *)(param_2 + 0x88) == 0) {
            puVar4 = (undefined8 *)0x1b0;
            __Znwm();
            puVar4[1] = 0;
            puVar4[2] = 0;
            *puVar4 = &PTR_FUN_1109b8708;
            uStack_88 = lVar5;
            uStack_90 = uVar13;
            if (lVar5 != 0) {
              do {
                func_0x00010750dbc8();
              } while (extraout_w10_01 != 0);
            }
            FUN_107456338(puVar4 + 3,&uStack_90);
            FUN_107456e48(&uStack_90);
            auStack_fe0[0] = 0;
            auStack_fe0[1] = 0;
            uStack_88 = *(ulong *)(param_2 + 0x90);
            uStack_90 = *(ulong *)(param_2 + 0x88);
            *(undefined8 **)(param_2 + 0x88) = puVar4 + 3;
            *(undefined8 **)(param_2 + 0x90) = puVar4;
            FUN_10750db08();
            FUN_10750db08(auStack_fe0);
          }
          else {
            FUN_107456728();
            if (uStack_f60 != *(ulong *)(*(long *)(param_2 + 0x88) + 0x28)) {
              uStack_ff0 = uStack_f60;
              lStack_fe8 = lStack_f58;
              if (lStack_f58 != 0) {
                do {
                  func_0x00010750dbc8();
                } while (extraout_w10_00 != 0);
              }
              func_0x0001074567a4();
              FUN_107456e48(&uStack_ff0);
            }
          }
          func_0x00010750dc3c();
          uStack_90 = (ulong)*extraout_x9;
          func_0x00010750dbbc();
          func_0x00010750dc3c();
          uStack_90 = (ulong)*(uint *)(extraout_x9_00 + 4) | 0x200000000000;
          func_0x00010750dbbc();
          func_0x00010750dc3c();
          uStack_90 = (ulong)*(uint *)(extraout_x9_01 + 0xc) | 0x2000000000000000;
          func_0x00010750dbbc();
          func_0x00010750dc3c();
          uStack_90 = (ulong)*(uint *)(extraout_x9_02 + 8) | 0x2000200000000000;
          func_0x00010750dbbc();
          uStack_90._0_6_ = 0x200010000;
          func_0x00010750dc0c(*(undefined8 *)(param_2 + 0x88));
          uStack_90 = CONCAT26(uStack_90._6_2_,0x300020001);
          func_0x00010750dc0c(*(undefined8 *)(param_2 + 0x88));
          uStack_90 = uStack_90 & 0xffffffff00000000;
          auStack_fe0[0] = auStack_fe0[0] & 0xffffffff00000000;
          uStack_ff8 = 6;
          uStack_ff4 = 4;
          FUN_1075004e0(*(long *)(param_2 + 0x88) + 0xf0,&uStack_90,auStack_fe0,&uStack_ff4,
                        &uStack_ff8);
          *param_1 = 0;
          param_1[0x58] = 0;
          func_0x000104c336c8(&uStack_c0);
        }
        func_0x0001072ba1a8(&puStack_fd0);
        func_0x00010728f1b4(&puStack_fb8);
      }
      func_0x000104c31c5c(&puStack_f78);
    }
    FUN_107456e48(&uStack_f60);
  }
  return;
}



/* Entry: 10750d944; end: 10750d99b;  */

void FUN_10750d944(void)

{
  return;
}



/* Entry: 10750d99c; end: 10750d9cf;  */

undefined8 FUN_10750d99c(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  FUN_10750d9d0(&uStack_28);
  return param_1;
}



/* Entry: 10750d9d0; end: 10750d9e7;  */

void FUN_10750d9d0(undefined8 *param_1)

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



/* Entry: 10750d9e8; end: 10750d9fb;  */

undefined * FUN_10750d9e8(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104bd47e8();
  if ((puVar1[8] & 1) == 0) {
    FUN_10750d9d0(puVar1);
  }
  return puVar1;
}



/* Entry: 10750d9fc; end: 10750da6b;  */

long FUN_10750d9fc(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_10750d9d0(param_1);
  }
  return param_1;
}


