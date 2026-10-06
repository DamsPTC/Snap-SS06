/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ae90c60; end: 10ae90c63;  */

void FUN_10ae90c60(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  *(undefined1 *)(param_1 + 0x40) = 1;
  lVar3 = *(long *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x48);
  lVar1 = lVar3 + 0xb8;
  func_0x0001004b9428();
  *(undefined1 *)(lVar2 + 0x20) = 0;
  *(undefined1 *)(lVar2 + 1) = 1;
  *(int *)(lVar2 + 4) = (int)lVar3;
  *(long *)(lVar2 + 0x10) = lVar1;
  return;
}



/* Entry: 10ae90c64; end: 10ae90c97;  */

void FUN_10ae90c64(undefined8 param_1,undefined8 param_2)

{
  long extraout_x9;
  
  func_0x00010ae91308();
  FUN_10ae8d324(param_1,param_2,extraout_x9 + 0x68);
  func_0x00010ae913a0();
  func_0x00010ae913bc();
  return;
}



/* Entry: 10ae90c98; end: 10ae90cf3;  */

void FUN_10ae90c98(void)

{
  undefined1 in_ZR;
  long *plVar1;
  long *plVar2;
  long lVar3;
  code *extraout_x8;
  long extraout_x8_00;
  long unaff_x23;
  undefined1 auStack_100 [16];
  undefined8 uStack_f0;
  long alStack_89 [9];
  
  func_0x00010ae91218();
  func_0x00010ae91364();
  plVar2 = alStack_89;
  lVar3 = unaff_x23 + 0x68;
  func_0x00010ae912f0();
  func_0x00010ae913cc();
  func_0x00010ae913c4();
  func_0x00010ae9133c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010ae91370();
  func_0x00010ae913c4();
  func_0x00010ae913ac();
  func_0x00010ae9140c();
  plVar1 = plVar2;
  (**(code **)(*plVar2 + 0x48))();
  (**(code **)(*plVar2 + 0x18))(auStack_100,plVar2,extraout_x8_00 + 0x68,lVar3,plVar1);
  (**(code **)(*plRam0000000113815c70 + 0x120))(plRam0000000113815c70,uStack_f0);
  func_0x00010ae902b8(plRam0000000113815c70,uStack_f0);
  (*extraout_x8)();
  FUN_10ae8e1dc();
  return;
}



/* Entry: 10ae90cf4; end: 10ae90d27;  */

void FUN_10ae90cf4(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  code *extraout_x8;
  long extraout_x8_00;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  
  func_0x00010ae9140c();
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x48))();
  (**(code **)(*param_1 + 0x18))(auStack_70,param_1,extraout_x8_00 + 0x68,param_3,plVar1);
  (**(code **)(*plRam0000000113815c70 + 0x120))(plRam0000000113815c70,uStack_60);
  func_0x00010ae902b8(plRam0000000113815c70,uStack_60);
  (*extraout_x8)();
  FUN_10ae8e1dc();
  return;
}



/* Entry: 10ae90d28; end: 10ae90d5f;  */

void FUN_10ae90d28(void)

{
  func_0x00010ae91278();
  func_0x00010ae9129c();
  func_0x00010ae913d4();
  func_0x00010ae911e4(&PTR_FUN_110c8c6d8);
  return;
}



/* Entry: 10ae90d60; end: 10ae90d83;  */

undefined8 FUN_10ae90d60(undefined8 param_1)

{
  func_0x00010ae90d08();
  FUN_10ae90d84();
  return param_1;
}



/* Entry: 10ae90d84; end: 10ae90d87;  */

void FUN_10ae90d84(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  *(undefined1 *)(param_1 + 0x40) = 1;
  lVar3 = *(long *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x48);
  lVar1 = lVar3 + 0xb8;
  func_0x0001004b9428();
  *(undefined1 *)(lVar2 + 0x20) = 0;
  *(undefined1 *)(lVar2 + 1) = 1;
  *(int *)(lVar2 + 4) = (int)lVar3;
  *(long *)(lVar2 + 0x10) = lVar1;
  return;
}



/* Entry: 10ae90d88; end: 10ae90dbb;  */

void FUN_10ae90d88(undefined8 param_1,undefined8 param_2)

{
  long extraout_x9;
  
  func_0x00010ae91308();
  FUN_10ae8d324(param_1,param_2,extraout_x9 + 0x88);
  func_0x00010ae913a0();
  func_0x00010ae913bc();
  return;
}



/* Entry: 10ae90dbc; end: 10ae90e17;  */

void FUN_10ae90dbc(void)

{
  undefined1 in_ZR;
  long *plVar1;
  long *plVar2;
  long lVar3;
  code *extraout_x8;
  long extraout_x8_00;
  long unaff_x23;
  undefined1 auStack_100 [16];
  undefined8 uStack_f0;
  long alStack_89 [9];
  
  func_0x00010ae91218();
  func_0x00010ae91364();
  plVar2 = alStack_89;
  lVar3 = unaff_x23 + 0x88;
  func_0x00010ae912f0();
  func_0x00010ae913cc();
  func_0x00010ae913c4();
  func_0x00010ae9133c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010ae91370();
  func_0x00010ae913c4();
  func_0x00010ae913ac();
  func_0x00010ae9140c();
  plVar1 = plVar2;
  (**(code **)(*plVar2 + 0x48))();
  (**(code **)(*plVar2 + 0x18))(auStack_100,plVar2,extraout_x8_00 + 0x88,lVar3,plVar1);
  (**(code **)(*plRam0000000113815c70 + 0x120))(plRam0000000113815c70,uStack_f0);
  func_0x00010ae902b8(plRam0000000113815c70,uStack_f0);
  (*extraout_x8)();
  FUN_10ae8e1dc();
  return;
}



/* Entry: 10ae90e18; end: 10ae90e4b;  */

void FUN_10ae90e18(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  code *extraout_x8;
  long extraout_x8_00;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  
  func_0x00010ae9140c();
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x48))();
  (**(code **)(*param_1 + 0x18))(auStack_70,param_1,extraout_x8_00 + 0x88,param_3,plVar1);
  (**(code **)(*plRam0000000113815c70 + 0x120))(plRam0000000113815c70,uStack_60);
  func_0x00010ae902b8(plRam0000000113815c70,uStack_60);
  (*extraout_x8)();
  FUN_10ae8e1dc();
  return;
}



/* Entry: 10ae90e4c; end: 10ae90e83;  */

void FUN_10ae90e4c(void)

{
  func_0x00010ae91278();
  func_0x00010ae9129c();
  func_0x00010ae913d4();
  func_0x00010ae911e4(&PTR_FUN_110c8c738);
  return;
}



/* Entry: 10ae90e84; end: 10ae90ea7;  */

undefined8 FUN_10ae90e84(undefined8 param_1)

{
  func_0x00010ae90e2c();
  FUN_10ae90ea8();
  return param_1;
}



/* Entry: 10ae90ea8; end: 10ae90eab;  */

void FUN_10ae90ea8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  *(undefined1 *)(param_1 + 0x40) = 1;
  lVar3 = *(long *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x48);
  lVar1 = lVar3 + 0xb8;
  func_0x0001004b9428();
  *(undefined1 *)(lVar2 + 0x20) = 0;
  *(undefined1 *)(lVar2 + 1) = 1;
  *(int *)(lVar2 + 4) = (int)lVar3;
  *(long *)(lVar2 + 0x10) = lVar1;
  return;
}



/* Entry: 10ae90eac; end: 10ae90edf;  */

void FUN_10ae90eac(undefined8 param_1,undefined8 param_2)

{
  long extraout_x9;
  
  func_0x00010ae91308();
  FUN_10ae8d324(param_1,param_2,extraout_x9 + 0xa8);
  func_0x00010ae913a0();
  func_0x00010ae913bc();
  return;
}



/* Entry: 10ae90ee0; end: 10ae90f3b;  */

void FUN_10ae90ee0(void)

{
  undefined1 in_ZR;
  long *plVar1;
  long *plVar2;
  long lVar3;
  code *extraout_x8;
  long extraout_x8_00;
  long unaff_x23;
  undefined1 auStack_100 [16];
  undefined8 uStack_f0;
  long alStack_89 [9];
  
  func_0x00010ae91218();
  func_0x00010ae91364();
  plVar2 = alStack_89;
  lVar3 = unaff_x23 + 0xa8;
  func_0x00010ae912f0();
  func_0x00010ae913cc();
  func_0x00010ae913c4();
  func_0x00010ae9133c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010ae91370();
  func_0x00010ae913c4();
  func_0x00010ae913ac();
  func_0x00010ae9140c();
  plVar1 = plVar2;
  (**(code **)(*plVar2 + 0x48))();
  (**(code **)(*plVar2 + 0x18))(auStack_100,plVar2,extraout_x8_00 + 0xa8,lVar3,plVar1);
  (**(code **)(*plRam0000000113815c70 + 0x120))(plRam0000000113815c70,uStack_f0);
  func_0x00010ae902b8(plRam0000000113815c70,uStack_f0);
  (*extraout_x8)();
  FUN_10ae8e1dc();
  return;
}



/* Entry: 10ae90f3c; end: 10ae90f6f;  */

void FUN_10ae90f3c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  code *extraout_x8;
  long extraout_x8_00;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  
  func_0x00010ae9140c();
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x48))();
  (**(code **)(*param_1 + 0x18))(auStack_70,param_1,extraout_x8_00 + 0xa8,param_3,plVar1);
  (**(code **)(*plRam0000000113815c70 + 0x120))(plRam0000000113815c70,uStack_60);
  func_0x00010ae902b8(plRam0000000113815c70,uStack_60);
  (*extraout_x8)();
  FUN_10ae8e1dc();
  return;
}



/* Entry: 10ae90f70; end: 10ae90fa7;  */

void FUN_10ae90f70(void)

{
  func_0x00010ae91278();
  func_0x00010ae9129c();
  func_0x00010ae913d4();
  func_0x00010ae911e4(&PTR_FUN_110c8c798);
  return;
}



/* Entry: 10ae90fa8; end: 10ae90fcb;  */

undefined8 FUN_10ae90fa8(undefined8 param_1)

{
  func_0x00010ae90f50();
  FUN_10ae90fcc();
  return param_1;
}



/* Entry: 10ae90fcc; end: 10ae90fd3;  */

void FUN_10ae90fcc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  *(undefined1 *)(param_1 + 0x40) = 1;
  lVar3 = *(long *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x48);
  lVar1 = lVar3 + 0xb8;
  func_0x0001004b9428();
  *(undefined1 *)(lVar2 + 0x20) = 0;
  *(undefined1 *)(lVar2 + 1) = 1;
  *(int *)(lVar2 + 4) = (int)lVar3;
  *(long *)(lVar2 + 0x10) = lVar1;
  return;
}



/* Entry: 10ae90fd4; end: 10ae9100f;  */

void FUN_10ae90fd4(void)

{
  func_0x00010ae91434();
  return;
}



/* Entry: 10ae91010; end: 10ae9101f;  */

long FUN_10ae91010(long param_1)

{
  return param_1 + 0x18;
}



/* Entry: 10ae91020; end: 10ae9103b;  */

void FUN_10ae91020(void)

{
  func_0x00010ae912bc();
  func_0x00010ae91428();
  return;
}



/* Entry: 10ae9103c; end: 10ae91053;  */

void FUN_10ae9103c(void)

{
  func_0x00010ae91248();
  return;
}



/* Entry: 10ae91054; end: 10ae91073;  */

void FUN_10ae91054(void)

{
  func_0x00010ae9137c();
  func_0x00010ae913f4();
  return;
}



/* Entry: 10ae91074; end: 10ae9107b;  */

void FUN_10ae91074(void)

{
  func_0x00010ae9137c();
  func_0x00010ae913f4();
  return;
}



/* Entry: 10ae9107c; end: 10ae91097;  */

void FUN_10ae9107c(void)

{
  func_0x00010ae912bc();
  func_0x00010ae91428();
  return;
}



/* Entry: 10ae91098; end: 10ae910af;  */

void FUN_10ae91098(void)

{
  func_0x00010ae91248();
  return;
}



/* Entry: 10ae910b0; end: 10ae910cf;  */

void FUN_10ae910b0(void)

{
  func_0x00010ae9137c();
  func_0x00010ae913f4();
  return;
}



/* Entry: 10ae910d0; end: 10ae910d7;  */

void FUN_10ae910d0(void)

{
  func_0x00010ae9137c();
  func_0x00010ae913f4();
  return;
}



/* Entry: 10ae910d8; end: 10ae910f3;  */

void FUN_10ae910d8(void)

{
  func_0x00010ae912bc();
  func_0x00010ae91428();
  return;
}



/* Entry: 10ae910f4; end: 10ae9110b;  */

void FUN_10ae910f4(void)

{
  func_0x00010ae91248();
  return;
}



/* Entry: 10ae9110c; end: 10ae9112b;  */

void FUN_10ae9110c(void)

{
  func_0x00010ae9137c();
  func_0x00010ae913f4();
  return;
}



/* Entry: 10ae9112c; end: 10ae91133;  */

void FUN_10ae9112c(void)

{
  func_0x00010ae9137c();
  func_0x00010ae913f4();
  return;
}



/* Entry: 10ae91134; end: 10ae9114f;  */

void FUN_10ae91134(void)

{
  func_0x00010ae912bc();
  func_0x00010ae91428();
  return;
}



/* Entry: 10ae91150; end: 10ae91167;  */

void FUN_10ae91150(void)

{
  func_0x00010ae91248();
  return;
}



/* Entry: 10ae91168; end: 10ae91187;  */

void FUN_10ae91168(void)

{
  func_0x00010ae9137c();
  func_0x00010ae913f4();
  return;
}



/* Entry: 10ae91188; end: 10ae9118f;  */

void FUN_10ae91188(void)

{
  func_0x00010ae9137c();
  func_0x00010ae913f4();
  return;
}



/* Entry: 10ae91190; end: 10ae911ab;  */

void FUN_10ae91190(void)

{
  func_0x00010ae912bc();
  func_0x00010ae91428();
  return;
}



/* Entry: 10ae911ac; end: 10ae911c3;  */

void FUN_10ae911ac(void)

{
  func_0x00010ae91248();
  return;
}



/* Entry: 10ae911c4; end: 10ae911e3;  */

void FUN_10ae911c4(void)

{
  func_0x00010ae9137c();
  func_0x00010ae913f4();
  return;
}



/* Entry: 10ae911e4; end: 10ae9143f;  */

void FUN_10ae911e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *extraout_x8;
  code *extraout_x8_00;
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 in_register_00005008;
  undefined8 in_register_00005028;
  undefined8 in_register_00005048;
  undefined8 in_stack_00000040;
  int aiStack_78 [14];
  
  *param_5 = param_1;
  param_5[1] = unaff_x20;
  param_5[3] = in_register_00005048;
  param_5[2] = param_4;
  param_5[5] = in_register_00005028;
  param_5[4] = param_3;
  param_5[7] = in_register_00005008;
  param_5[6] = param_2;
  *(undefined2 *)(param_5 + 8) = 0;
  param_5[10] = 0;
  param_5[0xe] = 0;
  param_5[0x12] = 0;
  lVar2 = lRam0000000113815c70;
  func_0x00010ae902b8(lRam0000000113815c70,in_stack_00000040);
  (*extraout_x8)();
  lVar3 = lVar2;
  func_0x00010ae8f198();
  lVar1 = 0;
  if (lVar3 != 0) {
    lVar1 = lVar3 + 8;
  }
  *(long *)(unaff_x21 + 0x48) = lVar1;
  FUN_10ae8f0f8(aiStack_78,lVar3 + 0x30);
  func_0x00010ae90070();
  if (aiStack_78[0] != 0) {
    func_0x00010ae90028(lRam0000000113815c70);
    (*extraout_x8_00)();
  }
  *(undefined1 *)(lVar2 + 0x71) = 1;
  func_0x00010ae8f100(unaff_x21 + 0x58,aiStack_78);
  func_0x00010ae8f14c(unaff_x21 + 0x78,aiStack_78);
  return;
}



/* Entry: 10ae91440; end: 10ae9148f;  */

void FUN_10ae91440(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x48;
  __Znwm();
  FUN_10ae91490();
  *param_1 = uVar1;
  return;
}



/* Entry: 10ae91490; end: 10ae9151f;  */

undefined8 * FUN_10ae91490(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  int extraout_w10;
  
  *param_1 = &PTR_FUN_110c8c7f8;
  plVar2 = (long *)*param_2;
  lVar1 = param_2[1];
  param_1[1] = plVar2;
  param_1[2] = lVar1;
  if (lVar1 != 0) {
    do {
      func_0x00010ae932b4();
    } while (extraout_w10 != 0);
    plVar2 = (long *)*param_2;
  }
  param_1[3] = &PTR_FUN_110c8c838;
  param_1[4] = param_1;
  uVar3 = *param_3;
  param_1[5] = &UNK_10f6d304d;
  param_1[6] = uVar3;
  *(undefined4 *)(param_1 + 7) = 3;
  (**(code **)(*plVar2 + 0x28))();
  param_1[8] = plVar2;
  return param_1;
}



/* Entry: 10ae91520; end: 10ae91523;  */

void FUN_10ae91520(void)

{
  return;
}



/* Entry: 10ae91524; end: 10ae91667;  */

long * FUN_10ae91524(long param_1,long *param_2)

{
  long *plVar1;
  undefined1 uVar2;
  undefined1 in_ZR;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  undefined8 extraout_x8_01;
  long extraout_x8_02;
  code *extraout_x8_03;
  long *plVar9;
  long *plVar10;
  long lVar11;
  undefined1 auStack_350 [48];
  long *plStack_320;
  long *plStack_318;
  long *plStack_310;
  long *plStack_308;
  undefined1 **ppuStack_300;
  code *pcStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  long lStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long lStack_290;
  undefined **ppuStack_288;
  long *plStack_280;
  undefined ***pppuStack_270;
  undefined **ppuStack_268;
  long *plStack_260;
  undefined ***pppuStack_250;
  undefined **ppuStack_248;
  long *plStack_240;
  undefined ***pppuStack_230;
  undefined **ppuStack_228;
  long *plStack_220;
  undefined ***pppuStack_210;
  undefined8 uStack_208;
  undefined1 *puStack_1c0;
  code *pcStack_1b8;
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 uStack_198;
  long *plStack_190;
  undefined1 uStack_180;
  undefined8 uStack_48;
  
  lVar11 = param_1;
  func_0x00010ae93268();
  plVar10 = *(long **)(lVar11 + 8);
  plVar3 = (long *)0xc8;
  uStack_48 = extraout_x8;
  __Znwm();
  *plVar3 = (long)&PTR_FUN_110c8c8b0;
  plVar3[1] = (long)&PTR_FUN_110c8c900;
  plVar3[2] = (long)&PTR_DAT_110c8c928;
  plVar3[3] = (long)param_2;
  uStack_1a8 = 0x100000002;
  uStack_1a0 = 0;
  uStack_198 = 0;
  func_0x000104c4f3d4(plVar3 + 4,&uStack_1a8);
  puVar6 = (undefined8 *)(param_1 + 0x28);
  plVar5 = param_2;
  (**(code **)(*plVar10 + 0x18))(plVar3 + 0x13);
  if ((*(byte *)(plVar3[3] + 0x150) & 1) == 0) {
    func_0x0001053ad34c(&uStack_1a8);
    plVar5 = param_2 + 0x17;
    func_0x000107c27cc8();
    uStack_180 = 0;
    uStack_1a0._0_2_ = CONCAT11(1,(undefined1)uStack_1a0);
    uStack_19c = SUB84(param_2,0);
    plStack_190 = plVar5;
    func_0x00010ae9328c(plVar3[0x13]);
    puVar6 = &uStack_1a8;
    plVar5 = plVar3 + 0x13;
    (*extraout_x8_00)();
    func_0x00010ae93370();
    func_0x0001053ad5dc();
  }
  func_0x00010ae9321c(uStack_48);
  if ((bool)in_ZR) {
    return plVar3;
  }
  ___stack_chk_fail();
  func_0x000104c4f64c(plVar3 + 4);
  __ZdlPv();
  func_0x00010ae93338();
  pcStack_1b8 = FUN_10ae91668;
  puStack_1c0 = &stack0xfffffffffffffff0;
  func_0x00010ae93268();
  lVar11 = plVar3[1];
  plVar10 = *(long **)(lVar11 + 8);
  plVar3 = plVar10;
  uStack_208 = extraout_x8_01;
  (**(code **)(*plVar10 + 0x48))(plVar10);
  (**(code **)(*plVar10 + 0x18))(&lStack_2b8,plVar10,lVar11 + 0x28,puVar6,plVar3);
  (**(code **)(*plRam0000000113815c70 + 0x120))(plRam0000000113815c70,lStack_2a8);
  plVar4 = plRam0000000113815c70;
  (**(code **)(*plRam0000000113815c70 + 0x130))(plRam0000000113815c70,lStack_2a8,0x9a8);
  lStack_2e8 = lStack_2b0;
  lStack_2f0 = lStack_2b8;
  lStack_2d8 = lStack_2a0;
  lStack_2e0 = lStack_2a8;
  lStack_2c8 = lStack_290;
  lStack_2d0 = lStack_298;
  *plVar4 = (long)&PTR_DAT_110c8ca58;
  plVar4[1] = (long)puVar6;
  plVar4[3] = lStack_2b0;
  plVar4[2] = lStack_2b8;
  plVar4[5] = lStack_2a0;
  plVar4[4] = lStack_2a8;
  plVar4[7] = lStack_290;
  plVar4[6] = lStack_298;
  plVar4[8] = (long)plVar5;
  func_0x000108c7764c(plVar4 + 9);
  plVar3 = plVar4 + 0x37;
  plVar4[0x3a] = 0;
  plVar4[0x3e] = 0;
  uVar2 = *(undefined1 *)(plVar4[1] + 0x150);
  *(undefined1 *)(plVar4 + 0x40) = uVar2;
  *(undefined1 *)((long)plVar4 + 0x201) = uVar2;
  func_0x000108c778ec(plVar4 + 0x41);
  plVar10 = plVar4 + 0x72;
  plVar4[0x75] = 0;
  plVar4[0x79] = 0;
  *(undefined4 *)(plVar4 + 0x7b) = 0;
  plVar4[0x7d] = 0;
  plVar4[0x7c] = 0;
  plVar4[0x7f] = 0;
  plVar4[0x7e] = 0;
  plVar4[0x81] = 0;
  plVar4[0x80] = 0;
  func_0x000107c27ccc(plVar4 + 0x82);
  plVar1 = plVar4 + 0xb7;
  plVar4[0xba] = 0;
  plVar4[0xbe] = 0;
  func_0x000108c77b68(plVar4 + 0xc0);
  plVar4[0xf0] = 0;
  plVar4[0xf4] = 0;
  FUN_10ae925bc(plVar4 + 0xf6);
  plVar9 = plVar4 + 0x121;
  plVar4[0x124] = 0;
  plVar4[0x128] = 0;
  *(undefined2 *)(plVar4 + 0x12a) = 0;
  *(undefined1 *)((long)plVar4 + 0x952) = 0;
  plVar4[299] = 3;
  *(undefined1 *)(plVar4 + 300) = 0;
  (**(code **)(*plRam0000000113815c70 + 0x70))(plRam0000000113815c70,plVar4 + 0x12d);
  plVar5[1] = (long)plVar4;
  ppuStack_228 = &PTR_FUN_110c8cba8;
  pppuStack_210 = &ppuStack_228;
  plStack_220 = plVar4;
  func_0x00010ae9330c(plVar3,plVar4[4],&ppuStack_228,plVar4 + 9);
  FUN_10ae8ebc8(&ppuStack_228);
  func_0x00010ae933e8(plVar4[1]);
  plVar4[0x10] = extraout_x8_02;
  plVar4[0x11] = (long)plVar3;
  ppuStack_248 = &PTR_FUN_110c8cc28;
  pppuStack_230 = &ppuStack_248;
  plStack_240 = plVar4;
  func_0x00010ae9330c(plVar1,plVar4[4],&ppuStack_248,plVar4 + 0x82);
  FUN_10ae8ebc8(&ppuStack_248);
  plVar4[0x91] = (long)plVar1;
  ppuStack_268 = &PTR_DAT_110c8cca8;
  pppuStack_250 = &ppuStack_268;
  plStack_260 = plVar4;
  func_0x00010ae9330c(plVar9,plVar4[4],&ppuStack_268,plVar4 + 0xf6);
  FUN_10ae8ebc8(&ppuStack_268);
  plVar4[0xfb] = (long)plVar9;
  ppuStack_288 = &PTR_DAT_110c8cd28;
  pppuStack_270 = &ppuStack_288;
  plStack_280 = plVar4;
  func_0x00010ae9330c(plVar10,plVar4[4],&ppuStack_288,plVar4 + 0x41);
  FUN_10ae8ebc8(&ppuStack_288);
  plVar5 = plVar4 + 0x42;
  func_0x000107c27cc0(plVar5,plVar4[1],plVar4 + 0x7b);
  plVar4[0x4c] = (long)plVar10;
  func_0x00010ae9321c(uStack_208);
  if ((bool)in_ZR) {
    return plVar5;
  }
  ___stack_chk_fail();
  func_0x000108c76808(plVar4 + 0x12d);
  func_0x000108c7860c(plVar9);
  FUN_10ae92ce4(plVar4 + 0xf6);
  func_0x000108c7860c(plVar4 + 0xed);
  func_0x000108c786b4(plVar4 + 0xc0);
  func_0x000108c7860c(plVar1);
  func_0x000104c01224(plVar4 + 0x82);
  func_0x000107c27cbc(plVar4 + 0x7b);
  func_0x000108c7860c(plVar10);
  func_0x000108c786e4(plVar4 + 0x41);
  func_0x000108c7860c(plVar3);
  func_0x000108c78714(plVar4 + 9);
  func_0x00010ae9328c(plRam0000000113815c70);
  puVar7 = &UNK_10f6d306d;
  puVar8 = &UNK_10f6d2d1f;
  (*extraout_x8_03)();
  __Unwind_Resume(plVar5);
  func_0x000104bd46a0();
  plVar9 = (long *)plVar5[1];
  pcStack_2f8 = FUN_10ae919f8;
  plStack_320 = plVar1;
  plStack_318 = plVar10;
  plStack_310 = plVar3;
  plStack_308 = plVar4;
  ppuStack_300 = &puStack_1c0;
  (**(code **)(*plVar9 + 0x18))(auStack_350,plVar9,plVar5 + 5,puVar7,puVar8);
  func_0x00010ae93258();
  (**(code **)(*plVar9 + 0x130))();
  FUN_10ae92e7c();
  return plVar9;
}



/* Entry: 10ae91668; end: 10ae919f7;  */

long * FUN_10ae91668(long param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined1 uVar2;
  undefined1 in_ZR;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 extraout_x8;
  long extraout_x8_00;
  code *extraout_x8_01;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined1 auStack_1a0 [48];
  long *plStack_170;
  long *plStack_168;
  long *plStack_160;
  long *plStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined **ppuStack_d8;
  long *plStack_d0;
  undefined ***pppuStack_c0;
  undefined **ppuStack_b8;
  long *plStack_b0;
  undefined ***pppuStack_a0;
  undefined **ppuStack_98;
  long *plStack_90;
  undefined ***pppuStack_80;
  undefined **ppuStack_78;
  long *plStack_70;
  undefined ***pppuStack_60;
  undefined8 uStack_58;
  
  func_0x00010ae93268();
  lVar10 = *(long *)(param_1 + 8);
  plVar9 = *(long **)(lVar10 + 8);
  plVar3 = plVar9;
  uStack_58 = extraout_x8;
  (**(code **)(*plVar9 + 0x48))(plVar9);
  (**(code **)(*plVar9 + 0x18))(&lStack_108,plVar9,lVar10 + 0x28,param_2,plVar3);
  (**(code **)(*plRam0000000113815c70 + 0x120))(plRam0000000113815c70,lStack_f8);
  plVar4 = plRam0000000113815c70;
  (**(code **)(*plRam0000000113815c70 + 0x130))(plRam0000000113815c70,lStack_f8,0x9a8);
  lStack_138 = lStack_100;
  lStack_140 = lStack_108;
  lStack_128 = lStack_f0;
  lStack_130 = lStack_f8;
  lStack_118 = lStack_e0;
  lStack_120 = lStack_e8;
  *plVar4 = (long)&PTR_DAT_110c8ca58;
  plVar4[1] = param_2;
  plVar4[3] = lStack_100;
  plVar4[2] = lStack_108;
  plVar4[5] = lStack_f0;
  plVar4[4] = lStack_f8;
  plVar4[7] = lStack_e0;
  plVar4[6] = lStack_e8;
  plVar4[8] = param_3;
  func_0x000108c7764c(plVar4 + 9);
  plVar3 = plVar4 + 0x37;
  plVar4[0x3a] = 0;
  plVar4[0x3e] = 0;
  uVar2 = *(undefined1 *)(plVar4[1] + 0x150);
  *(undefined1 *)(plVar4 + 0x40) = uVar2;
  *(undefined1 *)((long)plVar4 + 0x201) = uVar2;
  func_0x000108c778ec(plVar4 + 0x41);
  plVar9 = plVar4 + 0x72;
  plVar4[0x75] = 0;
  plVar4[0x79] = 0;
  *(undefined4 *)(plVar4 + 0x7b) = 0;
  plVar4[0x7d] = 0;
  plVar4[0x7c] = 0;
  plVar4[0x7f] = 0;
  plVar4[0x7e] = 0;
  plVar4[0x81] = 0;
  plVar4[0x80] = 0;
  func_0x000107c27ccc(plVar4 + 0x82);
  plVar1 = plVar4 + 0xb7;
  plVar4[0xba] = 0;
  plVar4[0xbe] = 0;
  func_0x000108c77b68(plVar4 + 0xc0);
  plVar4[0xf0] = 0;
  plVar4[0xf4] = 0;
  FUN_10ae925bc(plVar4 + 0xf6);
  plVar8 = plVar4 + 0x121;
  plVar4[0x124] = 0;
  plVar4[0x128] = 0;
  *(undefined2 *)(plVar4 + 0x12a) = 0;
  *(undefined1 *)((long)plVar4 + 0x952) = 0;
  plVar4[299] = 3;
  *(undefined1 *)(plVar4 + 300) = 0;
  (**(code **)(*plRam0000000113815c70 + 0x70))(plRam0000000113815c70,plVar4 + 0x12d);
  *(long **)(param_3 + 8) = plVar4;
  ppuStack_78 = &PTR_FUN_110c8cba8;
  pppuStack_60 = &ppuStack_78;
  plStack_70 = plVar4;
  func_0x00010ae9330c(plVar3,plVar4[4],&ppuStack_78,plVar4 + 9);
  FUN_10ae8ebc8(&ppuStack_78);
  func_0x00010ae933e8(plVar4[1]);
  plVar4[0x10] = extraout_x8_00;
  plVar4[0x11] = (long)plVar3;
  ppuStack_98 = &PTR_FUN_110c8cc28;
  pppuStack_80 = &ppuStack_98;
  plStack_90 = plVar4;
  func_0x00010ae9330c(plVar1,plVar4[4],&ppuStack_98,plVar4 + 0x82);
  FUN_10ae8ebc8(&ppuStack_98);
  plVar4[0x91] = (long)plVar1;
  ppuStack_b8 = &PTR_DAT_110c8cca8;
  pppuStack_a0 = &ppuStack_b8;
  plStack_b0 = plVar4;
  func_0x00010ae9330c(plVar8,plVar4[4],&ppuStack_b8,plVar4 + 0xf6);
  FUN_10ae8ebc8(&ppuStack_b8);
  plVar4[0xfb] = (long)plVar8;
  ppuStack_d8 = &PTR_DAT_110c8cd28;
  pppuStack_c0 = &ppuStack_d8;
  plStack_d0 = plVar4;
  func_0x00010ae9330c(plVar9,plVar4[4],&ppuStack_d8,plVar4 + 0x41);
  FUN_10ae8ebc8(&ppuStack_d8);
  plVar5 = plVar4 + 0x42;
  func_0x000107c27cc0(plVar5,plVar4[1],plVar4 + 0x7b);
  plVar4[0x4c] = (long)plVar9;
  func_0x00010ae9321c(uStack_58);
  if ((bool)in_ZR) {
    return plVar5;
  }
  ___stack_chk_fail();
  func_0x000108c76808(plVar4 + 0x12d);
  func_0x000108c7860c(plVar8);
  FUN_10ae92ce4(plVar4 + 0xf6);
  func_0x000108c7860c(plVar4 + 0xed);
  func_0x000108c786b4(plVar4 + 0xc0);
  func_0x000108c7860c(plVar1);
  func_0x000104c01224(plVar4 + 0x82);
  func_0x000107c27cbc(plVar4 + 0x7b);
  func_0x000108c7860c(plVar9);
  func_0x000108c786e4(plVar4 + 0x41);
  func_0x000108c7860c(plVar3);
  func_0x000108c78714(plVar4 + 9);
  func_0x00010ae9328c(plRam0000000113815c70);
  puVar6 = &UNK_10f6d306d;
  puVar7 = &UNK_10f6d2d1f;
  (*extraout_x8_01)();
  __Unwind_Resume(plVar5);
  func_0x000104bd46a0();
  plVar8 = (long *)plVar5[1];
  pcStack_148 = FUN_10ae919f8;
  plStack_170 = plVar1;
  plStack_168 = plVar9;
  plStack_160 = plVar3;
  plStack_158 = plVar4;
  puStack_150 = &stack0xfffffffffffffff0;
  (**(code **)(*plVar8 + 0x18))(auStack_1a0,plVar8,plVar5 + 5,puVar6,puVar7);
  func_0x00010ae93258();
  (**(code **)(*plVar8 + 0x130))();
  FUN_10ae92e7c();
  return plVar8;
}



/* Entry: 10ae919f8; end: 10ae91a1b;  */

long * FUN_10ae919f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 auStack_60 [48];
  
  plVar1 = *(long **)(param_1 + 8);
  (**(code **)(*plVar1 + 0x18))(auStack_60,plVar1,param_1 + 0x28,param_2,param_3);
  func_0x00010ae93258();
  (**(code **)(*plVar1 + 0x130))();
  FUN_10ae92e7c();
  return plVar1;
}



/* Entry: 10ae91a1c; end: 10ae91ac3;  */

long * FUN_10ae91a1c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_60 [48];
  
  (**(code **)(*param_1 + 0x18))(auStack_60,param_1,param_3,param_4,param_2);
  func_0x00010ae93258();
  (**(code **)(*param_1 + 0x130))();
  FUN_10ae92e7c();
  return param_1;
}



/* Entry: 10ae91ac4; end: 10ae91aeb;  */

long * FUN_10ae91ac4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 auStack_60 [48];
  
  plVar1 = *(long **)(param_1 + 8);
  (**(code **)(*plVar1 + 0x18))(auStack_60,plVar1,param_1 + 0x28,param_2,param_3);
  func_0x00010ae93258();
  (**(code **)(*plVar1 + 0x130))();
  FUN_10ae92e7c();
  return plVar1;
}



/* Entry: 10ae91aec; end: 10ae91b27;  */

void FUN_10ae91aec(void)

{
  func_0x00010ae933ac();
  return;
}



/* Entry: 10ae91b28; end: 10ae91b2f;  */

long FUN_10ae91b28(long param_1)

{
  return param_1 + 0x18;
}



/* Entry: 10ae91b30; end: 10ae91b6b;  */

void FUN_10ae91b30(void)

{
  func_0x00010ae933b8();
  return;
}



/* Entry: 10ae91b6c; end: 10ae91c7b;  */

int * FUN_10ae91b6c(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  ulong uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined8 *puVar7;
  undefined8 extraout_x8;
  byte *pbVar8;
  long extraout_x8_00;
  code *extraout_x8_01;
  undefined8 extraout_x8_02;
  long extraout_x8_03;
  undefined8 extraout_x8_04;
  code *extraout_x8_05;
  int aiStack_4c8 [2];
  undefined1 uStack_4bf;
  undefined8 uStack_388;
  int *piStack_380;
  int *piStack_378;
  undefined1 **ppuStack_370;
  code *pcStack_368;
  int aiStack_360 [82];
  undefined8 uStack_218;
  int *piStack_210;
  undefined8 uStack_208;
  undefined1 *puStack_200;
  code *pcStack_1f8;
  int aiStack_1f0 [4];
  byte *pbStack_1e0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  piVar4 = aiStack_1f0;
  func_0x00010ae93268();
  uStack_38 = extraout_x8;
  func_0x000107c27cd4(aiStack_1f0);
  pbVar8 = *(byte **)(param_2 + 0x18);
  if ((*pbVar8 & 1) == 0) {
    pbStack_1e0 = pbVar8 + 0xd0;
    *pbVar8 = 1;
  }
  func_0x00010ae9334c();
  lStack_1c8 = extraout_x8_00 + 0x108;
  uStack_1c0 = param_1;
  (**(code **)(*plRam0000000113815c70 + 0x140))(&uStack_58);
  uStack_1a0 = uStack_50;
  uStack_1a8 = uStack_58;
  uStack_190 = uStack_40;
  uStack_198 = uStack_48;
  puVar7 = (undefined8 *)(param_2 + 0x98);
  func_0x00010ae9328c(*puVar7);
  func_0x00010ae933a4();
  uVar3 = param_2 + 0x20;
  func_0x000105395128(uVar3,aiStack_1f0);
  if ((uVar3 & 1) == 0) {
    func_0x00010ae9328c(plRam0000000113815c70);
    puVar7 = (undefined8 *)&UNK_10f6d3073;
    (*extraout_x8_01)();
  }
  func_0x000104c01188();
  func_0x00010ae9321c(uStack_38);
  if ((bool)in_ZR) {
    return piVar4;
  }
  ___stack_chk_fail();
  piVar5 = piVar4;
  func_0x00010ae93338();
  piVar6 = aiStack_360;
  pcStack_1f8 = FUN_10ae91c7c;
  piStack_210 = piVar4;
  uStack_208 = param_1;
  puStack_200 = &stack0xfffffffffffffff0;
  func_0x00010ae93244();
  uVar2 = **(char **)(piVar5 + 6) == '\x01';
  uStack_218 = extraout_x8_02;
  if ((bool)uVar2) {
    func_0x00010ae93230();
    puVar7 = (undefined8 *)&UNK_10f6d3073;
    (**(code **)(extraout_x8_03 + 0x10))();
  }
  func_0x000107c27cd0(aiStack_360);
  func_0x00010ae933f4();
  func_0x00010ae933e8(puVar7[-0x10]);
  func_0x00010ae9328c();
  func_0x00010ae933a4();
  func_0x00010ae9337c();
  func_0x000104c011f4();
  func_0x00010ae9321c(uStack_218);
  if ((bool)uVar2) {
    return piVar6;
  }
  ___stack_chk_fail();
  func_0x00010ae932c4();
  pcStack_368 = FUN_10ae91d28;
  piStack_380 = piVar4;
  piStack_378 = piVar6;
  ppuStack_370 = &puStack_200;
  func_0x00010ae93244();
  piVar4 = aiStack_4c8;
  uStack_388 = extraout_x8_04;
  func_0x000108c7683c(piVar4);
  uStack_4bf = 1;
  func_0x00010ae933f4();
  func_0x00010ae9328c();
  piVar5 = aiStack_4c8;
  (*extraout_x8_05)();
  func_0x00010ae93370();
  piVar6 = aiStack_4c8;
  func_0x000108c76af8();
  func_0x00010ae9321c(uStack_388);
  if ((bool)uVar2) {
    return piVar4;
  }
  ___stack_chk_fail();
  func_0x00010ae932c4();
  iVar1 = piVar6[0x2c];
  if (iVar1 < 1) {
    iVar1 = -1;
  }
  *piVar5 = iVar1;
  return (int *)0x1;
}



/* Entry: 10ae91c7c; end: 10ae91d27;  */

int * FUN_10ae91c7c(long param_1,undefined8 param_2,undefined *param_3)

{
  int iVar1;
  undefined1 uVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  code *extraout_x8_02;
  int aiStack_2d8 [2];
  undefined1 uStack_2cf;
  undefined8 uStack_198;
  int aiStack_170 [82];
  undefined8 uStack_28;
  
  piVar3 = aiStack_170;
  func_0x00010ae93244();
  uVar2 = **(char **)(param_1 + 0x18) == '\x01';
  uStack_28 = extraout_x8;
  if ((bool)uVar2) {
    func_0x00010ae93230();
    param_3 = &UNK_10f6d3073;
    (**(code **)(extraout_x8_00 + 0x10))();
  }
  func_0x000107c27cd0(aiStack_170);
  func_0x00010ae933f4();
  func_0x00010ae933e8(*(undefined8 *)(param_3 + -0x80));
  func_0x00010ae9328c();
  func_0x00010ae933a4();
  func_0x00010ae9337c();
  func_0x000104c011f4();
  func_0x00010ae9321c(uStack_28);
  if ((bool)uVar2) {
    return piVar3;
  }
  ___stack_chk_fail();
  func_0x00010ae932c4();
  func_0x00010ae93244();
  piVar3 = aiStack_2d8;
  uStack_198 = extraout_x8_01;
  func_0x000108c7683c(piVar3);
  uStack_2cf = 1;
  func_0x00010ae933f4();
  func_0x00010ae9328c();
  piVar5 = aiStack_2d8;
  (*extraout_x8_02)();
  func_0x00010ae93370();
  piVar4 = aiStack_2d8;
  func_0x000108c76af8();
  func_0x00010ae9321c(uStack_198);
  if ((bool)uVar2) {
    return piVar3;
  }
  ___stack_chk_fail();
  func_0x00010ae932c4();
  iVar1 = piVar4[0x2c];
  if (iVar1 < 1) {
    iVar1 = -1;
  }
  *piVar5 = iVar1;
  return (int *)0x1;
}



/* Entry: 10ae91d28; end: 10ae91dab;  */

int * FUN_10ae91d28(void)

{
  int iVar1;
  undefined1 in_ZR;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  int aiStack_168 [2];
  undefined1 uStack_15f;
  undefined8 uStack_28;
  
  func_0x00010ae93244();
  piVar2 = aiStack_168;
  uStack_28 = extraout_x8;
  func_0x000108c7683c(piVar2);
  uStack_15f = 1;
  func_0x00010ae933f4();
  func_0x00010ae9328c();
  piVar4 = aiStack_168;
  (*extraout_x8_00)();
  func_0x00010ae93370();
  piVar3 = aiStack_168;
  func_0x000108c76af8();
  func_0x00010ae9321c(uStack_28);
  if ((bool)in_ZR) {
    return piVar2;
  }
  ___stack_chk_fail();
  func_0x00010ae932c4();
  iVar1 = piVar3[0x2c];
  if (iVar1 < 1) {
    iVar1 = -1;
  }
  *piVar4 = iVar1;
  return (int *)0x1;
}



/* Entry: 10ae91dac; end: 10ae91db3;  */

undefined8 FUN_10ae91dac(long param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xb0);
  if (iVar1 < 1) {
    iVar1 = -1;
  }
  *param_2 = iVar1;
  return 1;
}



/* Entry: 10ae91db4; end: 10ae91e53;  */

undefined8 * FUN_10ae91db4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  uint uVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  code *extraout_x8_01;
  long unaff_x19;
  undefined8 *puVar7;
  ulong uVar8;
  int aiStack_3c8 [14];
  undefined1 auStack_390 [9];
  undefined1 uStack_387;
  undefined4 uStack_384;
  long lStack_378;
  undefined1 uStack_368;
  undefined1 auStack_360 [65];
  undefined1 uStack_31f;
  undefined8 uStack_1e8;
  undefined1 auStack_1a0 [24];
  byte bStack_188;
  undefined8 uStack_180;
  undefined8 uStack_38;
  
  uVar3 = (uint)auStack_1a0;
  puVar4 = auStack_1a0;
  uVar6 = param_2;
  func_0x00010ae93244();
  uStack_38 = extraout_x8;
  FUN_10ae91fa0(auStack_1a0);
  if ((**(byte **)(unaff_x19 + 0x18) & 1) == 0) {
    func_0x00010ae933e8();
  }
  uStack_180 = param_2;
  func_0x00010ae933f4();
  func_0x00010ae9328c();
  func_0x00010ae933a4();
  func_0x00010ae9337c();
  FUN_10ae9203c();
  func_0x00010ae9321c(uStack_38);
  if ((bool)in_ZR) {
    return (undefined8 *)(ulong)(uVar3 & bStack_188);
  }
  ___stack_chk_fail();
  func_0x00010ae932c4();
  func_0x00010ae93244();
  uStack_1e8 = extraout_x8_00;
  func_0x000107c27ccc(auStack_390);
  uVar8 = param_3;
  if ((param_3 >> 0x20 & 1) != 0) {
    uVar8 = param_3 | 1;
    uStack_31f = 1;
  }
  lVar5 = *(long *)(puVar4 + 0x18);
  uVar2 = *(char *)(lVar5 + 0x150) == '\x01';
  if ((bool)uVar2) {
    lVar1 = lVar5 + 0xb8;
    func_0x000107c27cc8();
    uStack_368 = 0;
    uStack_387 = 1;
    uStack_384 = (undefined4)lVar5;
    *(undefined1 *)(*(long *)(puVar4 + 0x18) + 0x150) = 0;
    lStack_378 = lVar1;
  }
  func_0x00010ae92078(aiStack_3c8,auStack_360,uVar6,
                      param_3 & 0xffffffff00000000 | uVar8 & 0xffffffff);
  func_0x00010ae93388();
  if (aiStack_3c8[0] == 0) {
    func_0x00010ae933f4();
    func_0x00010ae9328c();
    (*extraout_x8_01)();
    puVar7 = (undefined8 *)(puVar4 + 0x20);
    func_0x000105395128(puVar7,auStack_390);
  }
  else {
    puVar7 = (undefined8 *)0x0;
  }
  func_0x000104c01224();
  func_0x00010ae9321c(uStack_1e8);
  if ((bool)uVar2) {
    return puVar7;
  }
  ___stack_chk_fail();
  puVar4 = auStack_390;
  func_0x000104c01224();
  func_0x00010ae932c4();
  puVar7 = (undefined8 *)(puVar4 + 0x18);
  *puVar7 = &PTR_DAT_1107ec498;
  (**(code **)(*plRam0000000113815c70 + 0x40))(plRam0000000113815c70,*(undefined8 *)(puVar4 + 0x28))
  ;
  func_0x000104c4f4f4(puVar4 + 0x78);
  (**(code **)(*plRam0000000113815c70 + 0x78))(plRam0000000113815c70,puVar4 + 0x38);
  *puVar7 = &PTR_DAT_1107ec4f0;
  if (puVar4[0x20] == '\x01') {
    if (plRam0000000113815c78 == (long *)0x0) {
      (**(code **)(*plRam0000000113815c70 + 0x10))
                (plRam0000000113815c70,
                 "g_glip && \"gRPC library not initialized. See \" \"grpc::internal::GrpcLibraryInitializer.\""
                 ,
                 "/var/lib/snapci/unsafe_nlo/conan/grpc/1.48.4-63df33afde3bbfd38b8c9d655644ee93bf84f159/_/_/package/a633f1315c67fd3d62ca0fccfe0160352629e3ee/include/S/grpcpp/impl/codegen/grpc_library.h"
                 ,0x38);
    }
    (**(code **)(*plRam0000000113815c78 + 0x18))();
  }
  return puVar7;
}



/* Entry: 10ae91e54; end: 10ae91f67;  */

undefined8 * FUN_10ae91e54(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  undefined1 uVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  long unaff_x19;
  undefined8 *puVar5;
  ulong uVar6;
  int aiStack_228 [14];
  undefined1 auStack_1f0 [9];
  undefined1 uStack_1e7;
  undefined4 uStack_1e4;
  long lStack_1d8;
  undefined1 uStack_1c8;
  undefined1 auStack_1c0 [65];
  undefined1 uStack_17f;
  undefined8 uStack_48;
  
  func_0x00010ae93244();
  uStack_48 = extraout_x8;
  func_0x000107c27ccc(auStack_1f0);
  uVar6 = param_3;
  if ((param_3 >> 0x20 & 1) != 0) {
    uVar6 = param_3 | 1;
    uStack_17f = 1;
  }
  lVar3 = *(long *)(unaff_x19 + 0x18);
  uVar2 = *(char *)(lVar3 + 0x150) == '\x01';
  if ((bool)uVar2) {
    lVar1 = lVar3 + 0xb8;
    func_0x000107c27cc8();
    uStack_1c8 = 0;
    uStack_1e7 = 1;
    uStack_1e4 = (undefined4)lVar3;
    *(undefined1 *)(*(long *)(unaff_x19 + 0x18) + 0x150) = 0;
    lStack_1d8 = lVar1;
  }
  func_0x00010ae92078(aiStack_228,auStack_1c0,param_2,
                      param_3 & 0xffffffff00000000 | uVar6 & 0xffffffff);
  func_0x00010ae93388();
  if (aiStack_228[0] == 0) {
    func_0x00010ae933f4();
    func_0x00010ae9328c();
    (*extraout_x8_00)();
    puVar5 = (undefined8 *)(unaff_x19 + 0x20);
    func_0x000105395128(puVar5,auStack_1f0);
  }
  else {
    puVar5 = (undefined8 *)0x0;
  }
  func_0x000104c01224();
  func_0x00010ae9321c(uStack_48);
  if ((bool)uVar2) {
    return puVar5;
  }
  ___stack_chk_fail();
  puVar4 = auStack_1f0;
  func_0x000104c01224();
  func_0x00010ae932c4();
  puVar5 = (undefined8 *)(puVar4 + 0x18);
  *puVar5 = &PTR_DAT_1107ec498;
  (**(code **)(*plRam0000000113815c70 + 0x40))(plRam0000000113815c70,*(undefined8 *)(puVar4 + 0x28))
  ;
  func_0x000104c4f4f4(puVar4 + 0x78);
  (**(code **)(*plRam0000000113815c70 + 0x78))(plRam0000000113815c70,puVar4 + 0x38);
  *puVar5 = &PTR_DAT_1107ec4f0;
  if (puVar4[0x20] == '\x01') {
    if (plRam0000000113815c78 == (long *)0x0) {
      (**(code **)(*plRam0000000113815c70 + 0x10))
                (plRam0000000113815c70,
                 "g_glip && \"gRPC library not initialized. See \" \"grpc::internal::GrpcLibraryInitializer.\""
                 ,
                 "/var/lib/snapci/unsafe_nlo/conan/grpc/1.48.4-63df33afde3bbfd38b8c9d655644ee93bf84f159/_/_/package/a633f1315c67fd3d62ca0fccfe0160352629e3ee/include/S/grpcpp/impl/codegen/grpc_library.h"
                 ,0x38);
    }
    (**(code **)(*plRam0000000113815c78 + 0x18))();
  }
  return puVar5;
}



/* Entry: 10ae91f68; end: 10ae91f9f;  */

undefined8 * FUN_10ae91f68(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_DAT_1107ec498;
  (**(code **)(*plRam0000000113815c70 + 0x40))
            (plRam0000000113815c70,*(undefined8 *)(param_1 + 0x28));
  func_0x000104c4f4f4(param_1 + 0x78);
  (**(code **)(*plRam0000000113815c70 + 0x78))(plRam0000000113815c70,param_1 + 0x38);
  *puVar1 = &PTR_DAT_1107ec4f0;
  if (*(char *)(param_1 + 0x20) == '\x01') {
    if (plRam0000000113815c78 == (long *)0x0) {
      (**(code **)(*plRam0000000113815c70 + 0x10))
                (plRam0000000113815c70,
                 "g_glip && \"gRPC library not initialized. See \" \"grpc::internal::GrpcLibraryInitializer.\""
                 ,
                 "/var/lib/snapci/unsafe_nlo/conan/grpc/1.48.4-63df33afde3bbfd38b8c9d655644ee93bf84f159/_/_/package/a633f1315c67fd3d62ca0fccfe0160352629e3ee/include/S/grpcpp/impl/codegen/grpc_library.h"
                 ,0x38);
    }
    (**(code **)(*plRam0000000113815c78 + 0x18))();
  }
  return puVar1;
}



/* Entry: 10ae91fa0; end: 10ae91fff;  */

undefined8 * FUN_10ae91fa0(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)((long)param_1 + 0x2f) = 0;
  *param_1 = &PTR_DAT_1107ec7d0;
  param_1[7] = param_1;
  param_1[8] = param_1;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  func_0x000107c27c68(param_1 + 0x10);
  return param_1;
}



/* Entry: 10ae92000; end: 10ae9203b;  */

void FUN_10ae92000(long param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  
  if ((*(long *)(param_1 + 8) != 0) && ((*(byte *)(param_1 + 0x19) & 1) == 0)) {
    lVar1 = *param_3;
    *param_3 = lVar1 + 1;
    puVar2 = (undefined8 *)(param_2 + lVar1 * 0x50);
    *puVar2 = 5;
    puVar2[1] = 0;
    puVar2[2] = param_1 + 0x10;
  }
  return;
}



/* Entry: 10ae9203c; end: 10ae920e3;  */

undefined8 * FUN_10ae9203c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1107ec7d0;
  func_0x000104c00298(param_1 + 0x10);
  func_0x000107c27c64(param_1 + 5);
  return param_1;
}



/* Entry: 10ae920e4; end: 10ae920eb;  */

void FUN_10ae920e4(void)

{
  return;
}



/* Entry: 10ae920ec; end: 10ae92113;  */

void FUN_10ae920ec(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x00010ae93278();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_FUN_110c8c9d8;
  param_1[1] = uVar1;
  return;
}



/* Entry: 10ae92114; end: 10ae9212b;  */

void FUN_10ae92114(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110c8c9d8;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10ae9212c; end: 10ae921bb;  */

void FUN_10ae9212c(undefined4 *param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  undefined4 auStack_60 [2];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  byte bStack_21;
  
  lVar1 = *(long *)(param_2 + 8);
  func_0x000104c55bb4(auStack_60,*param_3,lVar1 + 0x10,&bStack_21);
  if ((bStack_21 & 1) == 0) {
    func_0x000104c00744(lVar1 + 0x10);
  }
  *param_1 = auStack_60[0];
  *(undefined8 *)(param_1 + 4) = uStack_50;
  *(undefined8 *)(param_1 + 2) = uStack_58;
  *(undefined8 *)(param_1 + 6) = uStack_48;
  uStack_58 = 0;
  uStack_50 = 0;
  *(undefined8 *)(param_1 + 10) = uStack_38;
  *(undefined8 *)(param_1 + 8) = uStack_40;
  *(undefined8 *)(param_1 + 0xc) = uStack_30;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  func_0x00010ae93330();
  return;
}



/* Entry: 10ae921bc; end: 10ae921e3;  */

void FUN_10ae921bc(undefined8 param_1)

{
  func_0x00010ae93340();
  func_0x00010ae932f0(param_1,&PTR_DAT_110c8ca38);
  func_0x00010ae93298();
  return;
}



/* Entry: 10ae921e4; end: 10ae921fb;  */

undefined ** FUN_10ae921e4(void)

{
  return &PTR_DAT_110c8ca38;
}



/* Entry: 10ae921fc; end: 10ae922e7;  */

void FUN_10ae921fc(long param_1)

{
  long lVar1;
  undefined8 unaff_x20;
  
  if ((*(byte *)(param_1 + 0x200) & 1) == 0) {
    lVar1 = param_1;
    func_0x00010ae933dc();
    *(undefined1 *)(param_1 + 0x70) = 0;
    *(undefined1 *)(param_1 + 0x51) = 1;
    *(int *)(param_1 + 0x54) = (int)lVar1;
    *(undefined8 *)(param_1 + 0x60) = unaff_x20;
  }
  func_0x00010ae9328c(*(undefined8 *)(param_1 + 0x10));
  func_0x00010ae93314();
  func_0x00010ae93230();
  func_0x00010ae93390();
  if (*(char *)(param_1 + 0x952) == '\x01') {
    func_0x00010ae9328c(*(undefined8 *)(param_1 + 0x10));
    func_0x00010ae93314();
  }
  if (*(char *)(param_1 + 0x950) == '\x01') {
    func_0x00010ae9328c(*(undefined8 *)(param_1 + 0x10));
    func_0x00010ae93314();
  }
  if (*(char *)(param_1 + 0x951) == '\x01') {
    func_0x00010ae9328c(*(undefined8 *)(param_1 + 0x10));
    func_0x00010ae93314();
  }
  func_0x00010ae9328c(*(undefined8 *)(param_1 + 0x10));
  func_0x00010ae93314();
  *(undefined1 *)(param_1 + 0x960) = 1;
  func_0x00010ae932cc();
  FUN_10ae929e0(param_1,0);
  return;
}



/* Entry: 10ae922e8; end: 10ae92403;  */

void FUN_10ae922e8(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  code *extraout_x8;
  code *extraout_x8_00;
  int extraout_w10;
  long alStack_68 [7];
  
  uVar4 = param_3;
  if ((param_3 >> 0x20 & 1) != 0) {
    uVar4 = param_3 | 1;
    *(undefined1 *)(param_1 + 0x481) = 1;
  }
  func_0x00010ae92078(alStack_68,param_1 + 0x440,param_2,
                      param_3 & 0xffffffff00000000 | uVar4 & 0xffffffff);
  iVar2 = (int)alStack_68[0];
  func_0x00010ae93388();
  if (iVar2 != 0) {
    func_0x00010ae9328c(puRam0000000113815c70);
    (*extraout_x8)();
  }
  do {
    func_0x00010ae932b4();
  } while (extraout_w10 != 0);
  if (*(char *)(param_1 + 0x201) == '\x01') {
    lVar3 = *(long *)(param_1 + 8);
    lVar1 = lVar3 + 0xb8;
    func_0x000107c27cc8();
    *(undefined1 *)(param_1 + 0x438) = 0;
    *(undefined1 *)(param_1 + 0x419) = 1;
    *(int *)(param_1 + 0x41c) = (int)lVar3;
    *(long *)(param_1 + 0x428) = lVar1;
    *(undefined1 *)(param_1 + 0x201) = 0;
  }
  if ((*(byte *)(param_1 + 0x960) & 1) == 0) {
    alStack_68[0] = param_1 + 0x968;
    func_0x00010ae93390(*puRam0000000113815c70);
    if ((*(byte *)(param_1 + 0x960) & 1) == 0) {
      *(undefined1 *)(param_1 + 0x950) = 1;
      func_0x00010ae932cc();
      return;
    }
    func_0x00010ae932cc();
  }
  func_0x00010ae9328c(*(undefined8 *)(param_1 + 0x10));
  (*extraout_x8_00)();
  return;
}



/* Entry: 10ae92404; end: 10ae9251b;  */

void FUN_10ae92404(long param_1)

{
  long lVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined ***pppuVar4;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  long extraout_x8_01;
  int extraout_w10;
  long unaff_x19;
  long lStack_50;
  undefined **ppuStack_48;
  long lStack_40;
  undefined ***pppuStack_30;
  undefined8 uStack_28;
  
  func_0x00010ae93244();
  *(undefined1 *)(param_1 + 0x631) = 1;
  lVar1 = param_1 + 0x768;
  ppuStack_48 = &PTR_FUN_110c8cda8;
  pppuStack_30 = &ppuStack_48;
  lStack_40 = param_1;
  uStack_28 = extraout_x8;
  func_0x00010ae9330c(lVar1,*(undefined8 *)(param_1 + 0x20),&ppuStack_48,param_1 + 0x600);
  pppuVar4 = &ppuStack_48;
  FUN_10ae8ebc8();
  *(long *)(unaff_x19 + 0x638) = lVar1;
  do {
    func_0x00010ae932b4();
    uVar3 = SUB84(pppuVar4,0);
  } while (extraout_w10 != 0);
  uVar2 = *(char *)(unaff_x19 + 0x201) == '\x01';
  if ((bool)uVar2) {
    func_0x00010ae933dc();
    *(undefined1 *)(unaff_x19 + 0x628) = 0;
    *(undefined1 *)(unaff_x19 + 0x609) = 1;
    *(undefined4 *)(unaff_x19 + 0x60c) = uVar3;
    *(long *)(unaff_x19 + 0x618) = lVar1;
    *(undefined1 *)(unaff_x19 + 0x201) = 0;
  }
  if ((*(byte *)(unaff_x19 + 0x960) & 1) != 0) {
    while( true ) {
      func_0x00010ae9328c(*(undefined8 *)(unaff_x19 + 0x10));
      (*extraout_x8_00)();
LAB_10ae924b0:
      func_0x00010ae9321c(uStack_28);
      if ((bool)uVar2) break;
      ___stack_chk_fail();
LAB_10ae924f8:
      func_0x000108c787d0(&lStack_50);
    }
    return;
  }
  lStack_50 = unaff_x19 + 0x968;
  func_0x00010ae93230();
  (**(code **)(extraout_x8_01 + 0x80))();
  if ((*(byte *)(unaff_x19 + 0x960) & 1) != 0) goto LAB_10ae924f8;
  *(undefined1 *)(unaff_x19 + 0x951) = 1;
  func_0x000108c787d0(&lStack_50);
  goto LAB_10ae924b0;
}



/* Entry: 10ae9251c; end: 10ae92597;  */

void FUN_10ae9251c(long param_1,undefined8 param_2)

{
  code *extraout_x8;
  int extraout_w10;
  
  *(undefined8 *)(param_1 + 0x7c0) = param_2;
  do {
    func_0x00010ae932b4();
  } while (extraout_w10 != 0);
  if ((*(byte *)(param_1 + 0x960) & 1) == 0) {
    func_0x00010ae93230();
    func_0x00010ae93390();
    if ((*(byte *)(param_1 + 0x960) & 1) == 0) {
      *(undefined1 *)(param_1 + 0x952) = 1;
      func_0x00010ae932cc();
      return;
    }
    func_0x00010ae932cc();
  }
  func_0x00010ae9328c(*(undefined8 *)(param_1 + 0x10));
  (*extraout_x8)();
  return;
}



/* Entry: 10ae92598; end: 10ae925bb;  */

void FUN_10ae92598(long param_1,int param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  
  plVar1 = (long *)(param_1 + 0x958);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + (long)param_2;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return;
}



/* Entry: 10ae925bc; end: 10ae92613;  */

undefined8 * FUN_10ae925bc(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)((long)param_1 + 0x1f) = 0;
  *param_1 = &PTR_DAT_110c8cad0;
  param_1[5] = param_1;
  param_1[6] = param_1;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  func_0x000107c27c68(param_1 + 0xe);
  return param_1;
}



/* Entry: 10ae92614; end: 10ae92627;  */

void FUN_10ae92614(void)

{
  FUN_10ae92ce4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae92628; end: 10ae92787;  */

void FUN_10ae92628(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long *plVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x00010ae93364();
  if (*(char *)(param_1 + 0x68) == '\x01') {
    plVar1 = *(long **)(unaff_x19 + 0x40);
    func_0x000107c27c70();
    *unaff_x20 = *(undefined8 *)(unaff_x19 + 0x30);
    *param_3 = *(undefined1 *)(unaff_x19 + 0x150);
  }
  else {
    func_0x000104c55214(unaff_x19 + 8,param_3);
    *(undefined1 *)(unaff_x19 + 0x150) = *param_3;
    func_0x000107c27c90(unaff_x19 + 0x70);
    if ((*(long *)(unaff_x19 + 0x10) != 0) &&
       (*(undefined1 *)(unaff_x19 + 0x81) = 1, (*(byte *)(unaff_x19 + 8) & 1) == 0)) {
      *(undefined8 *)(unaff_x19 + 0x128) = 0;
      *(undefined8 *)(unaff_x19 + 0x130) = 0;
    }
    plVar1 = (long *)(unaff_x19 + 0x70);
    func_0x000107c27c98();
    if ((int)plVar1 == 0) {
      return;
    }
    *unaff_x20 = *(undefined8 *)(unaff_x19 + 0x30);
  }
  func_0x00010ae93258();
  (**(code **)(*plVar1 + 0x128))();
  return;
}



/* Entry: 10ae92788; end: 10ae927ab;  */

undefined8 FUN_10ae92788(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10ae927ac; end: 10ae92873;  */

void FUN_10ae927ac(long param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  long *plVar2;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  long *unaff_x19;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uStack_230;
  undefined1 auStack_228 [480];
  undefined8 uStack_48;
  
  func_0x00010ae93244();
  uStack_230 = 0;
  uStack_48 = extraout_x8;
  FUN_10ae92000(param_1 + 8,auStack_228,&uStack_230);
  uVar5 = uStack_230;
  plVar6 = plRam0000000113815c70;
  lVar4 = unaff_x19[9];
  (**(code **)(*unaff_x19 + 0x20))();
  plVar1 = plVar6;
  (**(code **)(*plVar6 + 0x108))(plVar6,lVar4,auStack_228,uVar5,unaff_x19,0);
  if ((int)plVar1 != 0) {
    plVar1 = plRam0000000113815c70;
    func_0x00010ae9328c();
    (*extraout_x8_00)();
  }
  func_0x00010ae9321c(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  *(undefined1 *)(plVar1 + 0xd) = 1;
  plVar2 = plRam0000000113815c70;
  lVar3 = plVar1[9];
  (**(code **)(*plVar1 + 0x20))();
  (**(code **)(*plVar2 + 0x108))(plVar2,lVar3,0,0,plVar1,0,in_x6,in_x7,uVar5,lVar4,plVar6);
  if ((int)plVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010ae92904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plRam0000000113815c70 + 0x10))
            (plRam0000000113815c70,
             "g_core_codegen_interface->grpc_call_start_batch( call_.call(), nullptr, 0, core_cq_tag(), nullptr) == GRPC_CALL_OK"
             ,
             "/var/lib/snapci/unsafe_nlo/conan/grpc/1.48.4-63df33afde3bbfd38b8c9d655644ee93bf84f159/_/_/package/a633f1315c67fd3d62ca0fccfe0160352629e3ee/include/S/grpcpp/impl/codegen/call_op_set.h"
             ,0x3e5);
  return;
}



/* Entry: 10ae92874; end: 10ae92907;  */

void FUN_10ae92874(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  *(undefined1 *)(param_1 + 0xd) = 1;
  plVar1 = plRam0000000113815c70;
  lVar2 = param_1[9];
  (**(code **)(*param_1 + 0x20))();
  (**(code **)(*plVar1 + 0x108))(plVar1,lVar2,0,0,param_1,0);
  if ((int)plVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010ae92904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plRam0000000113815c70 + 0x10))
            (plRam0000000113815c70,
             "g_core_codegen_interface->grpc_call_start_batch( call_.call(), nullptr, 0, core_cq_tag(), nullptr) == GRPC_CALL_OK"
             ,
             "/var/lib/snapci/unsafe_nlo/conan/grpc/1.48.4-63df33afde3bbfd38b8c9d655644ee93bf84f159/_/_/package/a633f1315c67fd3d62ca0fccfe0160352629e3ee/include/S/grpcpp/impl/codegen/call_op_set.h"
             ,0x3e5);
  return;
}



/* Entry: 10ae92908; end: 10ae9290f;  */

void FUN_10ae92908(void)

{
  return;
}



/* Entry: 10ae92910; end: 10ae92937;  */

void FUN_10ae92910(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x00010ae93278();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_FUN_110c8cba8;
  param_1[1] = uVar1;
  return;
}



/* Entry: 10ae92938; end: 10ae9294f;  */

void FUN_10ae92938(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110c8cba8;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10ae92950; end: 10ae929d3;  */

void FUN_10ae92950(long param_1,char *param_2)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  long extraout_x8;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined4 auStack_a0 [2];
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  undefined4 auStack_68 [2];
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  plVar6 = *(long **)(*(long *)(param_1 + 8) + 0x40);
  if (*param_2 == '\x01') {
    plVar5 = plVar6;
    (**(code **)(*plVar6 + 0x20))(plVar6,*(undefined8 *)(*(long *)(param_1 + 8) + 0x20));
    uVar3 = (uint)plVar5 ^ 1;
  }
  else {
    uVar3 = 0;
  }
  (**(code **)(*plVar6 + 0x28))();
  func_0x00010ae93400();
  plVar5 = plVar6 + 299;
  do {
    lVar4 = *plVar5;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    lVar4 = plVar6[0x7b];
    lStack_58 = plVar6[0x7d];
    lStack_60 = plVar6[0x7c];
    lStack_50 = plVar6[0x7e];
    plVar6[0x7d] = 0;
    plVar6[0x7c] = 0;
    plVar6[0x7e] = 0;
    lStack_38 = plVar6[0x81];
    lStack_40 = plVar6[0x80];
    lStack_48 = plVar6[0x7f];
    plVar6[0x81] = 0;
    plVar6[0x80] = 0;
    plVar6[0x7f] = 0;
    plVar5 = (long *)plVar6[8];
    auStack_68[0] = (int)lVar4;
    (**(code **)*plVar6)();
    func_0x00010ae93230();
    (**(code **)(extraout_x8 + 0x128))();
    if (uVar3 == 0) {
      lStack_90 = lStack_58;
      lStack_98 = lStack_60;
      lStack_88 = lStack_50;
      lStack_60 = 0;
      lStack_58 = 0;
      lStack_78 = lStack_40;
      lStack_80 = lStack_48;
      lStack_70 = lStack_38;
      lStack_50 = 0;
      lStack_48 = 0;
      lStack_40 = 0;
      lStack_38 = 0;
      auStack_a0[0] = (int)lVar4;
      (**(code **)(*plVar5 + 0x18))(plVar5,auStack_a0);
      func_0x00010ae93330();
    }
    else {
      (**(code **)(*plVar5 + 0x10))(plVar5,auStack_68);
    }
    func_0x000107c27cbc(auStack_68);
  }
  return;
}



/* Entry: 10ae929d4; end: 10ae929df;  */

undefined ** FUN_10ae929d4(void)

{
  return &PTR_DAT_110c8cc08;
}



/* Entry: 10ae929e0; end: 10ae92b1b;  */

void FUN_10ae929e0(undefined8 *param_1,int param_2)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  long extraout_x8;
  long lVar4;
  long *plVar5;
  undefined4 auStack_a0 [2];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 auStack_68 [2];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  plVar5 = param_1 + 299;
  do {
    lVar4 = *plVar5;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = lVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar4 + -1 == 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x7b);
    uStack_58 = param_1[0x7d];
    uStack_60 = param_1[0x7c];
    uStack_50 = param_1[0x7e];
    param_1[0x7d] = 0;
    param_1[0x7c] = 0;
    param_1[0x7e] = 0;
    uStack_38 = param_1[0x81];
    uStack_40 = param_1[0x80];
    uStack_48 = param_1[0x7f];
    param_1[0x81] = 0;
    param_1[0x80] = 0;
    param_1[0x7f] = 0;
    plVar5 = (long *)param_1[8];
    auStack_68[0] = uVar1;
    (**(code **)*param_1)();
    func_0x00010ae93230();
    (**(code **)(extraout_x8 + 0x128))();
    if (param_2 == 0) {
      uStack_90 = uStack_58;
      uStack_98 = uStack_60;
      uStack_88 = uStack_50;
      uStack_60 = 0;
      uStack_58 = 0;
      uStack_78 = uStack_40;
      uStack_80 = uStack_48;
      uStack_70 = uStack_38;
      uStack_50 = 0;
      uStack_48 = 0;
      uStack_40 = 0;
      uStack_38 = 0;
      auStack_a0[0] = uVar1;
      (**(code **)(*plVar5 + 0x18))(plVar5,auStack_a0);
      func_0x00010ae93330();
    }
    else {
      (**(code **)(*plVar5 + 0x10))(plVar5,auStack_68);
    }
    func_0x000107c27cbc(auStack_68);
  }
  return;
}



/* Entry: 10ae92b1c; end: 10ae92b23;  */

void FUN_10ae92b1c(void)

{
  return;
}



/* Entry: 10ae92b24; end: 10ae92b4b;  */

void FUN_10ae92b24(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x00010ae93278();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_FUN_110c8cc28;
  param_1[1] = uVar1;
  return;
}



/* Entry: 10ae92b4c; end: 10ae92b63;  */

void FUN_10ae92b4c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110c8cc28;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10ae92b64; end: 10ae92baf;  */

void FUN_10ae92b64(undefined8 *param_1,int param_2)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  long extraout_x8;
  long extraout_x8_00;
  long lVar4;
  long *plVar5;
  undefined4 auStack_a0 [2];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 auStack_68 [2];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010ae932dc();
  (**(code **)(extraout_x8_00 + 0x38))();
  func_0x00010ae93400();
  plVar5 = param_1 + 299;
  do {
    lVar4 = *plVar5;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = lVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar4 + -1 == 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x7b);
    uStack_58 = param_1[0x7d];
    uStack_60 = param_1[0x7c];
    uStack_50 = param_1[0x7e];
    param_1[0x7d] = 0;
    param_1[0x7c] = 0;
    param_1[0x7e] = 0;
    uStack_38 = param_1[0x81];
    uStack_40 = param_1[0x80];
    uStack_48 = param_1[0x7f];
    param_1[0x81] = 0;
    param_1[0x80] = 0;
    param_1[0x7f] = 0;
    plVar5 = (long *)param_1[8];
    auStack_68[0] = uVar1;
    (**(code **)*param_1)();
    func_0x00010ae93230();
    (**(code **)(extraout_x8 + 0x128))();
    if (param_2 == 0) {
      uStack_90 = uStack_58;
      uStack_98 = uStack_60;
      uStack_88 = uStack_50;
      uStack_60 = 0;
      uStack_58 = 0;
      uStack_78 = uStack_40;
      uStack_80 = uStack_48;
      uStack_70 = uStack_38;
      uStack_50 = 0;
      uStack_48 = 0;
      uStack_40 = 0;
      uStack_38 = 0;
      auStack_a0[0] = uVar1;
      (**(code **)(*plVar5 + 0x18))(plVar5,auStack_a0);
      func_0x00010ae93330();
    }
    else {
      (**(code **)(*plVar5 + 0x10))(plVar5,auStack_68);
    }
    func_0x000107c27cbc(auStack_68);
  }
  return;
}



/* Entry: 10ae92bb0; end: 10ae92bc3;  */

undefined ** FUN_10ae92bb0(void)

{
  return &PTR_DAT_110c8cc88;
}



/* Entry: 10ae92bc4; end: 10ae92beb;  */

void FUN_10ae92bc4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x00010ae93278();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_DAT_110c8cca8;
  param_1[1] = uVar1;
  return;
}



/* Entry: 10ae92bec; end: 10ae92c03;  */

void FUN_10ae92bec(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_110c8cca8;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10ae92c04; end: 10ae92c4f;  */

void FUN_10ae92c04(undefined8 *param_1,int param_2)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  long extraout_x8;
  long extraout_x8_00;
  long lVar4;
  long *plVar5;
  undefined4 auStack_a0 [2];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 auStack_68 [2];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010ae932dc();
  (**(code **)(extraout_x8_00 + 0x30))();
  func_0x00010ae93400();
  plVar5 = param_1 + 299;
  do {
    lVar4 = *plVar5;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = lVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar4 + -1 == 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x7b);
    uStack_58 = param_1[0x7d];
    uStack_60 = param_1[0x7c];
    uStack_50 = param_1[0x7e];
    param_1[0x7d] = 0;
    param_1[0x7c] = 0;
    param_1[0x7e] = 0;
    uStack_38 = param_1[0x81];
    uStack_40 = param_1[0x80];
    uStack_48 = param_1[0x7f];
    param_1[0x81] = 0;
    param_1[0x80] = 0;
    param_1[0x7f] = 0;
    plVar5 = (long *)param_1[8];
    auStack_68[0] = uVar1;
    (**(code **)*param_1)();
    func_0x00010ae93230();
    (**(code **)(extraout_x8 + 0x128))();
    if (param_2 == 0) {
      uStack_90 = uStack_58;
      uStack_98 = uStack_60;
      uStack_88 = uStack_50;
      uStack_60 = 0;
      uStack_58 = 0;
      uStack_78 = uStack_40;
      uStack_80 = uStack_48;
      uStack_70 = uStack_38;
      uStack_50 = 0;
      uStack_48 = 0;
      uStack_40 = 0;
      uStack_38 = 0;
      auStack_a0[0] = uVar1;
      (**(code **)(*plVar5 + 0x18))(plVar5,auStack_a0);
      func_0x00010ae93330();
    }
    else {
      (**(code **)(*plVar5 + 0x10))(plVar5,auStack_68);
    }
    func_0x000107c27cbc(auStack_68);
  }
  return;
}



/* Entry: 10ae92c50; end: 10ae92c63;  */

undefined ** FUN_10ae92c50(void)

{
  return &PTR_DAT_110c8cd08;
}



/* Entry: 10ae92c64; end: 10ae92c8b;  */

void FUN_10ae92c64(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x00010ae93278();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_DAT_110c8cd28;
  param_1[1] = uVar1;
  return;
}



/* Entry: 10ae92c8c; end: 10ae92caf;  */

void FUN_10ae92c8c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_110c8cd28;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10ae92cb0; end: 10ae92cd7;  */

void FUN_10ae92cb0(undefined8 param_1)

{
  func_0x00010ae93340();
  func_0x00010ae932f0(param_1,&PTR_DAT_110c8cd88);
  func_0x00010ae93298();
  return;
}



/* Entry: 10ae92cd8; end: 10ae92ce3;  */

undefined ** FUN_10ae92cd8(void)

{
  return &PTR_DAT_110c8cd88;
}



/* Entry: 10ae92ce4; end: 10ae92dab;  */

undefined8 * FUN_10ae92ce4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c8cad0;
  func_0x000104c00298(param_1 + 0xe);
  func_0x000107c27c64(param_1 + 3);
  return param_1;
}



/* Entry: 10ae92dac; end: 10ae92db3;  */

void FUN_10ae92dac(void)

{
  return;
}


