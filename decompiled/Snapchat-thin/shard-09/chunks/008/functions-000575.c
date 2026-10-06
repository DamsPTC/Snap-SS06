/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107290040; end: 1072900a7;  */

void FUN_107290040(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 1072900a8; end: 1072900af;  */

void FUN_1072900a8(void)

{
  return;
}



/* Entry: 1072900b0; end: 1072900cf;  */

void FUN_1072900b0(undefined8 *param_1)

{
  func_0x000107290390();
  *param_1 = &PTR_FUN_110997e58;
  return;
}



/* Entry: 1072900d0; end: 1072900ff;  */

void FUN_1072900d0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_110997e58;
  return;
}



/* Entry: 107290100; end: 10729012b;  */

void FUN_107290100(undefined8 param_1,undefined8 param_2)

{
  func_0x0001072903a0(param_2,param_1,&PTR_DAT_110997ec8);
  func_0x000107290368();
  return;
}



/* Entry: 10729012c; end: 107290137;  */

undefined ** FUN_10729012c(void)

{
  return &PTR_DAT_110997ec8;
}



/* Entry: 107290138; end: 10729017b;  */

long * FUN_107290138(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[3];
  if (plVar1 == param_1) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return param_1;
    }
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
  return param_1;
}



/* Entry: 10729017c; end: 107290183;  */

void FUN_10729017c(void)

{
  return;
}



/* Entry: 107290184; end: 1072901a3;  */

void FUN_107290184(undefined8 *param_1)

{
  func_0x000107290390();
  *param_1 = &PTR_FUN_110997ee8;
  return;
}



/* Entry: 1072901a4; end: 1072901d3;  */

void FUN_1072901a4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_110997ee8;
  return;
}



/* Entry: 1072901d4; end: 1072901ff;  */

void FUN_1072901d4(undefined8 param_1,undefined8 param_2)

{
  func_0x0001072903a0(param_2,param_1,&PTR_DAT_110997f48);
  func_0x000107290368();
  return;
}



/* Entry: 107290200; end: 107290213;  */

undefined ** FUN_107290200(void)

{
  return &PTR_DAT_110997f48;
}



/* Entry: 107290214; end: 10729023f;  */

void FUN_107290214(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = param_1;
  func_0x000107290390();
  uVar2 = param_1[1];
  *puVar1 = &PTR_DAT_110997f68;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 107290240; end: 10729027b;  */

void FUN_107290240(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_110997f68;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10729027c; end: 1072902a7;  */

void FUN_10729027c(undefined8 param_1,undefined8 param_2)

{
  func_0x0001072903a0(param_2,param_1,&PTR_DAT_110997fc8);
  func_0x000107290368();
  return;
}



/* Entry: 1072902a8; end: 1072902b3;  */

undefined ** FUN_1072902a8(void)

{
  return &PTR_DAT_110997fc8;
}



/* Entry: 1072902b4; end: 1072902db;  */

long FUN_1072902b4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 1072902dc; end: 1072903a7;  */

void FUN_1072902dc(long param_1)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
  }
  return;
}



/* Entry: 1072903a8; end: 107290b37;  */

undefined *** FUN_1072903a8(undefined ***param_1,undefined **param_2)

{
  undefined1 in_ZR;
  undefined ***pppuVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  ulong uVar6;
  undefined8 extraout_x9;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined ***pppuStack_420;
  undefined **ppuStack_418;
  undefined **ppuStack_410;
  undefined **ppuStack_408;
  char *pcStack_400;
  undefined ***pppuStack_3f8;
  undefined1 **ppuStack_3f0;
  code *pcStack_3e8;
  undefined **ppuStack_3d8;
  undefined **ppuStack_3d0;
  undefined1 *puStack_3c8;
  undefined ***pppuStack_3c0;
  undefined8 uStack_3b8;
  char *pcStack_3b0;
  undefined ***pppuStack_3a8;
  undefined1 *puStack_3a0;
  code *pcStack_398;
  undefined1 auStack_390 [16];
  undefined1 auStack_380 [16];
  undefined1 auStack_370 [16];
  undefined1 auStack_360 [16];
  undefined1 auStack_350 [16];
  undefined1 auStack_340 [16];
  undefined1 auStack_330 [16];
  undefined1 auStack_320 [16];
  undefined1 auStack_310 [16];
  undefined1 auStack_300 [16];
  undefined1 auStack_2f0 [16];
  undefined1 auStack_2e0 [16];
  undefined1 auStack_2d0 [16];
  undefined1 auStack_2c0 [16];
  undefined1 auStack_2b0 [16];
  undefined1 auStack_2a0 [16];
  undefined1 auStack_290 [16];
  undefined1 auStack_280 [16];
  undefined1 auStack_270 [16];
  undefined1 auStack_260 [16];
  undefined1 auStack_250 [16];
  undefined1 auStack_240 [16];
  undefined1 auStack_230 [16];
  undefined1 auStack_220 [16];
  undefined1 auStack_210 [16];
  undefined1 auStack_200 [16];
  undefined1 auStack_1f0 [16];
  undefined1 auStack_1e0 [16];
  undefined1 auStack_1d0 [16];
  undefined1 auStack_1c0 [16];
  undefined1 auStack_1b0 [16];
  undefined1 auStack_1a0 [16];
  undefined1 auStack_190 [16];
  undefined1 auStack_180 [16];
  undefined1 auStack_170 [16];
  undefined1 auStack_160 [16];
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined *puStack_d0;
  undefined *puStack_c8;
  char *pcStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined *puStack_90;
  undefined8 uStack_88;
  char *pcStack_80;
  undefined8 uStack_78;
  undefined8 uStack_48;
  
  puVar3 = auStack_390;
  pppuVar1 = param_1;
  func_0x000107291128();
  *pppuVar1 = &PTR_FUN_110997fe8;
  pppuVar1[1] = param_2;
  puStack_90 = &DAT_10f300ec7;
  uStack_88 = 0x14;
  pcStack_80 = "";
  uStack_78 = 0;
  uStack_48 = extraout_x8;
  func_0x00010785e7f0(auStack_a0,extraout_x9,&puStack_90,0x3c);
  FUN_107290d98(auStack_a0);
  puVar2 = PTR_DAT_1131acf60;
  func_0x0001072910ec();
  pcStack_c0 = "";
  uStack_b8 = 0;
  puStack_c8 = puVar2;
  FUN_107290e28(&puStack_90,"prod");
  func_0x000107291094(auStack_b0);
  func_0x000107290dbc(auStack_b0);
  func_0x0001072910ec(PTR_DAT_1131acf68);
  func_0x0001072910b4();
  func_0x000107291094(auStack_e0);
  func_0x000107290dbc(auStack_e0);
  func_0x0001072910ec(PTR_DAT_1131acf70);
  func_0x0001072910b4();
  func_0x000107291094(auStack_f0);
  func_0x000107290dbc(auStack_f0);
  func_0x0001072910ec(PTR_DAT_1131acf78);
  func_0x0001072910b4();
  func_0x000107291094(auStack_100);
  func_0x000107290dbc(auStack_100);
  func_0x0001072910ec(PTR_DAT_1131acf80);
  func_0x0001072910b4();
  func_0x000107291094(auStack_110);
  func_0x000107290dbc(auStack_110);
  func_0x0001072910ec(PTR_DAT_1131acf88);
  func_0x000107291080();
  func_0x000107291094(auStack_120);
  func_0x000107290dbc(auStack_120);
  func_0x0001072910ec(PTR_DAT_1131acf90);
  func_0x000107291080();
  func_0x000107291094(auStack_130);
  func_0x000107290dbc(auStack_130);
  func_0x0001072910ec(PTR_DAT_1131acf98);
  func_0x000107291080();
  func_0x000107291094(auStack_140);
  func_0x000107290dbc(auStack_140);
  func_0x0001072910ec(PTR_DAT_1131acfa0);
  func_0x000107291080();
  func_0x000107291094(auStack_150);
  func_0x000107290dbc(auStack_150);
  func_0x0001072910ec(PTR_DAT_1131acfa8);
  func_0x000107291080();
  func_0x000107291094(auStack_160);
  func_0x000107290dbc(auStack_160);
  func_0x0001072910ec(PTR_DAT_1131acfb0);
  func_0x000107291080();
  func_0x000107291094(auStack_170);
  func_0x000107290dbc(auStack_170);
  func_0x0001072910ec(PTR_DAT_1131acfb8);
  func_0x000107291080();
  func_0x000107291094(auStack_180);
  func_0x000107290dbc(auStack_180);
  ppuVar8 = param_1[1];
  func_0x0001072910e4(PTR_DAT_1131ad030);
  func_0x000107291108();
  func_0x00010785e73c(auStack_190,ppuVar8,&puStack_90,0);
  func_0x000107290de0(auStack_190);
  func_0x0001072910ec(PTR_DAT_1131acfd0);
  func_0x0001072910b4();
  func_0x000107291094(auStack_1a0);
  func_0x000107290dbc(auStack_1a0);
  ppuVar9 = param_1[1];
  func_0x0001072910ec(PTR_DAT_1131acfd8);
  func_0x0001072910b4();
  func_0x000107291094(auStack_1b0);
  func_0x000107290dbc(auStack_1b0);
  func_0x0001072910ec(PTR_DAT_1131acfc0);
  func_0x000107291080();
  func_0x0001072910d4(auStack_1c0);
  func_0x000107290dbc(auStack_1c0);
  func_0x0001072910ec(PTR_DAT_1131acfc8);
  func_0x000107291080();
  func_0x0001072910d4(auStack_1d0);
  func_0x000107290dbc(auStack_1d0);
  puStack_d0 = &UNK_10f4088a5;
  puStack_c8 = (undefined *)0x1b;
  pcStack_c0 = "";
  uStack_b8 = 0;
  func_0x0001072910c8();
  func_0x0001072910d4(auStack_1e0);
  func_0x000107290dbc(auStack_1e0);
  puStack_d0 = &UNK_10f40888b;
  puStack_c8 = (undefined *)0x19;
  pcStack_c0 = "";
  uStack_b8 = 0;
  func_0x0001072910c8();
  func_0x0001072910d4(auStack_1f0);
  func_0x000107290dbc(auStack_1f0);
  func_0x0001072910e4(PTR_DAT_1131acfe0);
  func_0x000107291108();
  func_0x000107291114(auStack_200);
  func_0x00010785e7f0();
  FUN_107290d98(auStack_200);
  puVar2 = PTR_DAT_1131acfe8;
  func_0x0001072910ec();
  pcStack_c0 = "";
  uStack_b8 = 0;
  puStack_c8 = puVar2;
  FUN_107290e28(&puStack_90,&UNK_10f408b94);
  func_0x0001072910d4(auStack_210);
  func_0x000107290dbc(auStack_210);
  func_0x0001072910e4(PTR_DAT_1131ad0a0);
  func_0x000107291108();
  func_0x000107291114(auStack_220);
  func_0x00010785e7f0();
  FUN_107290d98(auStack_220);
  func_0x0001072910e4(PTR_DAT_1131ad038);
  func_0x000107291108();
  func_0x000107291114(auStack_230);
  func_0x000107291138();
  func_0x000107290de0(auStack_230);
  func_0x0001072910e4(PTR_DAT_1131acff0);
  func_0x000107291108();
  func_0x0001072910a4(auStack_240);
  func_0x000107290de0(auStack_240);
  puStack_90 = &UNK_10f408968;
  uStack_88 = 0x16;
  pcStack_80 = "";
  uStack_78 = 0;
  func_0x000107291138(auStack_250,param_1[1],&puStack_90);
  func_0x000107290de0(auStack_250);
  func_0x0001072910e4(PTR_DAT_1131ad020);
  func_0x000107291108();
  func_0x0001072910a4(auStack_260);
  func_0x000107290de0(auStack_260);
  func_0x0001072910e4(PTR_DAT_1131ad018);
  func_0x000107291108();
  func_0x0001072910a4(auStack_270);
  func_0x000107290de0(auStack_270);
  func_0x0001072910e4(PTR_DAT_1131ad040);
  func_0x000107291108();
  func_0x0001072910a4(auStack_280);
  func_0x000107290de0(auStack_280);
  func_0x0001072910e4(PTR_DAT_1131acff8);
  func_0x000107291108();
  func_0x000107291114(auStack_290);
  func_0x00010785e7f0();
  FUN_107290d98(auStack_290);
  puStack_90 = &UNK_10f4089d7;
  uStack_88 = 0x1f;
  pcStack_80 = "";
  uStack_78 = 0;
  func_0x00010785e73c(auStack_2a0,param_1[1],&puStack_90,0);
  func_0x000107290de0(auStack_2a0);
  func_0x0001072910e4(PTR_DAT_1131ad048);
  func_0x000107291108();
  func_0x000107291114(auStack_2b0);
  func_0x00010785e898();
  func_0x000107290e04(auStack_2b0);
  func_0x0001072910e4(PTR_DAT_1131ad050);
  func_0x000107291108();
  func_0x000107291114(auStack_2c0);
  func_0x00010785e898();
  func_0x000107290e04(auStack_2c0);
  func_0x0001072910e4(PTR_DAT_1131ad058);
  func_0x000107291108();
  func_0x000107291114(auStack_2d0);
  func_0x00010785e898();
  func_0x000107290e04(auStack_2d0);
  func_0x0001072910e4(PTR_DAT_1131ad060);
  func_0x000107291108();
  func_0x0001072910a4(auStack_2e0);
  func_0x000107290de0(auStack_2e0);
  func_0x0001072910e4(PTR_DAT_1131ad068);
  func_0x000107291108();
  func_0x0001072910a4(auStack_2f0);
  func_0x000107290de0(auStack_2f0);
  func_0x0001072910e4(PTR_DAT_1131ad070);
  func_0x000107291108();
  func_0x0001072910a4(auStack_300);
  func_0x000107290de0(auStack_300);
  func_0x0001072910e4(PTR_DAT_1131ad008);
  func_0x000107291108();
  func_0x0001072910a4(auStack_310);
  func_0x000107290de0(auStack_310);
  func_0x0001072910e4(PTR_DAT_1131ad010);
  func_0x000107291108();
  func_0x000107291114(auStack_320);
  func_0x00010785e7f0();
  FUN_107290d98(auStack_320);
  func_0x0001072910e4(PTR_DAT_1131ad078);
  func_0x000107291108();
  func_0x0001072910a4(auStack_330);
  func_0x000107290de0(auStack_330);
  func_0x0001072910e4(PTR_DAT_1131ad080);
  func_0x000107291108();
  func_0x0001072910a4(auStack_340);
  func_0x000107290de0(auStack_340);
  func_0x0001072910e4(PTR_DAT_1131ad088);
  func_0x000107291108();
  func_0x0001072910a4(auStack_350);
  func_0x000107290de0(auStack_350);
  func_0x0001072910e4(PTR_DAT_1131ad090);
  func_0x000107291108();
  func_0x0001072910a4(auStack_360);
  func_0x000107290de0(auStack_360);
  func_0x0001072910e4(PTR_DAT_1131ad098);
  func_0x000107291108();
  func_0x0001072910a4(auStack_370);
  func_0x000107290de0(auStack_370);
  ppuVar7 = param_1[1];
  func_0x0001072910e4(PTR_DAT_1131ad028);
  func_0x000107291108();
  func_0x0001072910a4(auStack_380);
  func_0x000107290de0(auStack_380);
  puStack_90 = &DAT_10f3010a6;
  uStack_88 = 0x23;
  pcStack_80 = "";
  uStack_78 = 0;
  ppuVar8 = &puStack_90;
  func_0x000107291138(auStack_390,param_1[1]);
  func_0x000107290de0();
  func_0x0001072910f4(uStack_48);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_3b0 = "";
  pcStack_398 = FUN_107290b38;
  pppuStack_3a8 = param_1;
  puStack_3a0 = &stack0xfffffffffffffff0;
  func_0x000107291128();
  ppuStack_3d8 = &PTR_FUN_110998078;
  pppuStack_3c0 = &ppuStack_3d8;
  pppuVar1 = &ppuStack_3d8;
  ppuStack_3d0 = ppuVar8;
  puStack_3c8 = puVar3;
  uStack_3b8 = extraout_x8_00;
  func_0x000107865760(*(undefined8 *)(puVar3 + 8));
  pppuVar4 = &ppuStack_3d8;
  func_0x0001006393ec();
  func_0x0001072910f4(uStack_3b8);
  if ((bool)in_ZR) {
    return pppuVar4;
  }
  ___stack_chk_fail();
  func_0x0001006393ec(&ppuStack_3d8);
  pppuVar5 = pppuVar4;
  __Unwind_Resume();
  pppuVar5 = (undefined ***)pppuVar5[1];
  pcStack_400 = "";
  pcStack_3e8 = FUN_107290bb0;
  ppuVar8 = pppuVar5[0x17a] + 2;
  pppuStack_420 = pppuVar1;
  ppuStack_410 = ppuVar9;
  ppuStack_408 = ppuVar7;
  pppuStack_3f8 = pppuVar4;
  ppuStack_3f0 = &puStack_3a0;
  while (ppuVar8 = (undefined **)*ppuVar8, ppuVar8 != (undefined **)0x0) {
    func_0x0001078660bc(ppuVar8 + 4);
    uVar6 = (ulong)*(uint *)(ppuVar8 + 6);
    if (*(uint *)(ppuVar8 + 6) == 0xffffffff) {
      uVar6 = 0xffffffffffffffff;
    }
    pppuVar5 = &ppuStack_418;
    ppuStack_418 = (undefined **)&pppuStack_420;
    (*(code *)(&PTR_DAT_1109e3350)[uVar6])(pppuVar5,ppuVar8 + 4);
  }
  return pppuVar5;
}



/* Entry: 107290b38; end: 107290baf;  */

void FUN_107290b38(long param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined ***pppuVar1;
  undefined ***pppuVar2;
  undefined8 extraout_x8;
  ulong uVar3;
  undefined8 *puVar4;
  undefined ***pppuStack_90;
  undefined1 *puStack_88;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  long lStack_38;
  undefined ***pppuStack_30;
  undefined8 uStack_28;
  
  func_0x000107291128();
  ppuStack_48 = &PTR_FUN_110998078;
  pppuStack_30 = &ppuStack_48;
  pppuVar2 = &ppuStack_48;
  uStack_40 = param_2;
  lStack_38 = param_1;
  uStack_28 = extraout_x8;
  func_0x000107865760(*(undefined8 *)(param_1 + 8));
  pppuVar1 = &ppuStack_48;
  func_0x0001006393ec();
  func_0x0001072910f4(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001006393ec(&ppuStack_48);
  __Unwind_Resume();
  puVar4 = (undefined8 *)(pppuVar1[1][0x17a] + 0x10);
  pppuStack_90 = pppuVar2;
  while (puVar4 = (undefined8 *)*puVar4, puVar4 != (undefined8 *)0x0) {
    func_0x0001078660bc(puVar4 + 4);
    uVar3 = (ulong)*(uint *)(puVar4 + 6);
    if (*(uint *)(puVar4 + 6) == 0xffffffff) {
      uVar3 = 0xffffffffffffffff;
    }
    puStack_88 = (undefined1 *)&pppuStack_90;
    (*(code *)(&PTR_DAT_1109e3350)[uVar3])(&puStack_88,puVar4 + 4);
  }
  return;
}



/* Entry: 107290bb0; end: 107290bcf;  */

void FUN_107290bb0(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uStack_40;
  undefined1 *puStack_38;
  
  plVar2 = (long *)(*(long *)(*(long *)(param_1 + 8) + 0xbd0) + 0x10);
  uStack_40 = param_2;
  while (plVar2 = (long *)*plVar2, plVar2 != (long *)0x0) {
    func_0x0001078660bc(plVar2 + 4);
    uVar1 = (ulong)*(uint *)(plVar2 + 6);
    if (*(uint *)(plVar2 + 6) == 0xffffffff) {
      uVar1 = 0xffffffffffffffff;
    }
    puStack_38 = (undefined1 *)&uStack_40;
    (*(code *)(&PTR_DAT_1109e3350)[uVar1])(&puStack_38,plVar2 + 4);
  }
  return;
}



/* Entry: 107290bd0; end: 107290beb;  */

ulong FUN_107290bd0(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010785eefc(uVar1);
  return uVar1 & 0xffffffffff;
}



/* Entry: 107290bec; end: 107290bf3;  */

void FUN_107290bec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  char in_NG;
  char in_OV;
  long lVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x11;
  
  lVar2 = *(long *)(param_1 + 8);
  func_0x000107868d20();
  uVar1 = extraout_x11;
  if (in_NG == in_OV) {
    uVar1 = extraout_x8;
  }
  func_0x00010786909c(uVar1);
  if ((lVar2 != 0) && (*(int *)(lVar2 + 0x30) == 6)) {
    puVar3 = (undefined8 *)(lVar2 + 0x20);
    func_0x000107868508();
    func_0x000107289c9c(*puVar3,param_3);
    func_0x0001078691fc();
  }
  return;
}



/* Entry: 107290bf4; end: 107290c0f;  */

ulong FUN_107290bf4(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010785ef64(uVar1);
  return uVar1 & 0xffffffffff;
}



/* Entry: 107290c10; end: 107290c17;  */

void FUN_107290c10(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  char in_NG;
  char in_OV;
  long lVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x11;
  
  lVar2 = *(long *)(param_2 + 8);
  func_0x000107868d20();
  uVar1 = extraout_x11;
  if (in_NG == in_OV) {
    uVar1 = extraout_x8;
  }
  func_0x00010786909c(uVar1);
  if ((lVar2 != 0) && (*(int *)(lVar2 + 0x30) == 10)) {
    puVar3 = (undefined8 *)(lVar2 + 0x20);
    func_0x000107868524();
    func_0x00010785ec58(param_1,*puVar3);
    func_0x0001078691fc();
  }
  return;
}



/* Entry: 107290c18; end: 107290c33;  */

void FUN_107290c18(long param_1)

{
  func_0x00010785efcc(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 107290c34; end: 107290cfb;  */

void FUN_107290c34(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined1 in_ZR;
  int iVar2;
  long lVar3;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 extraout_x8_01;
  long lVar4;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_10c [2];
  undefined1 auStack_10a [64];
  byte bStack_ca;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined1 auStack_98 [30];
  undefined1 auStack_7a [66];
  undefined8 uStack_38;
  
  lVar4 = param_1;
  func_0x000107291128();
  iVar2 = (int)*(undefined8 *)(lVar4 + 8);
  uStack_38 = extraout_x8;
  func_0x00010785f194();
  lVar4 = *(long *)(param_1 + 8);
  if (iVar2 == 0) {
    func_0x00010785f1c4(lVar4,param_2);
    if ((int)lVar4 != 0) {
      lVar4 = *(long *)(param_1 + 8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_98,param_3);
      func_0x00010785ed48(lVar4,param_2,auStack_98);
      func_0x00010729114c();
    }
  }
  else {
    FUN_107291018(auStack_7a,param_3);
    func_0x00010785ec90(lVar4,param_2,auStack_7a);
  }
  func_0x0001072910f4(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010729114c();
  lVar3 = lVar4;
  __Unwind_Resume();
  pcStack_a8 = FUN_107290cfc;
  uStack_c0 = param_3;
  lStack_b8 = lVar4;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x000107291128();
  uStack_c8 = extraout_x8_01;
  func_0x00010785f024(auStack_10c,*(undefined8 *)(lVar3 + 8));
  bVar1 = (bStack_ca & 1) == 0;
  if (bVar1) {
    *(undefined1 *)extraout_x8_00 = 0;
  }
  else {
    func_0x00010002b838(&uStack_128,auStack_10a);
    extraout_x8_00[1] = uStack_120;
    *extraout_x8_00 = uStack_128;
    extraout_x8_00[2] = uStack_118;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_128 = 0;
    func_0x00010729114c();
  }
  *(bool *)(extraout_x8_00 + 3) = !bVar1;
  func_0x0001072910f4(uStack_c8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  return;
}



/* Entry: 107290cfc; end: 107290d8f;  */

void FUN_107290cfc(undefined8 *param_1,long param_2)

{
  bool bVar1;
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_6c [2];
  undefined1 auStack_6a [64];
  byte bStack_2a;
  undefined8 uStack_28;
  
  func_0x000107291128();
  uStack_28 = extraout_x8;
  func_0x00010785f024(auStack_6c,*(undefined8 *)(param_2 + 8));
  bVar1 = (bStack_2a & 1) == 0;
  if (bVar1) {
    *(undefined1 *)param_1 = 0;
  }
  else {
    func_0x00010002b838(&uStack_88,auStack_6a);
    param_1[1] = uStack_80;
    *param_1 = uStack_88;
    param_1[2] = uStack_78;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_88 = 0;
    func_0x00010729114c();
  }
  *(bool *)(param_1 + 3) = !bVar1;
  func_0x0001072910f4(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  return;
}



/* Entry: 107290d90; end: 107290d97;  */

void FUN_107290d90(void)

{
  return;
}



/* Entry: 107290d98; end: 107290e27;  */

void FUN_107290d98(long param_1)

{
  func_0x000107291154();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 107290e28; end: 107290e83;  */

undefined2 * FUN_107290e28(undefined2 *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  *param_1 = 0;
  uVar2 = param_2;
  _strlen();
  uVar1 = uVar2;
  if (0x3e < uVar2) {
    uVar1 = 0x3f;
  }
  *param_1 = (short)uVar1;
  if (uVar2 != 0) {
    _memmove(param_1 + 1,param_2,uVar1);
  }
  *(undefined1 *)((long)(param_1 + 1) + uVar1) = 0;
  return param_1;
}



/* Entry: 107290e84; end: 107290e8b;  */

void FUN_107290e84(void)

{
  return;
}



/* Entry: 107290e8c; end: 107290ebf;  */

void FUN_107290e8c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  *puVar1 = &PTR_FUN_110998078;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  return;
}



/* Entry: 107290ec0; end: 107290eef;  */

void FUN_107290ec0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_110998078;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 107290ef0; end: 107290fd3;  */

void FUN_107290ef0(long param_1)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  code *pcVar5;
  long lVar6;
  
  plVar1 = *(long **)(param_1 + 0x10);
  lVar6 = **(long **)(param_1 + 8);
  lVar2 = (*(long **)(param_1 + 8))[1];
  do {
    if (lVar6 == lVar2) {
      return;
    }
    switch(*(undefined4 *)(lVar6 + 0x24)) {
    case 2:
      uVar4 = *(ulong *)(lVar6 + 0x10);
      uVar3 = (uint)*(byte *)(lVar6 + 0x18);
      pcVar5 = *(code **)(*plVar1 + 0x20);
      goto code_r0x000107290fb0;
    case 3:
      uVar4 = *(ulong *)(lVar6 + 0x10);
      uVar3 = *(uint *)(lVar6 + 0x18);
      pcVar5 = *(code **)(*plVar1 + 0x30);
      goto code_r0x000107290fb0;
    case 4:
      (**(code **)(*plVar1 + 0x60))
                (plVar1,*(ulong *)(lVar6 + 0x10) & 0xfffffffffffffffc,
                 *(ulong *)(lVar6 + 0x18) & 0xfffffffffffffffc);
      break;
    case 5:
      uVar4 = *(ulong *)(lVar6 + 0x10);
      uVar3 = *(uint *)(lVar6 + 0x18);
      pcVar5 = *(code **)(*plVar1 + 0x40);
code_r0x000107290fb0:
      (*pcVar5)(plVar1,uVar4 & 0xfffffffffffffffc,uVar3);
      break;
    case 6:
      (**(code **)(*plVar1 + 0x50))
                (*(undefined8 *)(lVar6 + 0x18),plVar1,*(ulong *)(lVar6 + 0x10) & 0xfffffffffffffffc)
      ;
    }
    lVar6 = lVar6 + 0x28;
  } while( true );
}



/* Entry: 107290fd4; end: 10729100b;  */

long FUN_107290fd4(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109980d8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10729100c; end: 107291017;  */

undefined ** FUN_10729100c(void)

{
  return &PTR_DAT_1109980d8;
}



/* Entry: 107291018; end: 10729107f;  */

undefined2 * FUN_107291018(undefined2 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  byte bVar4;
  
  *param_1 = 0;
  bVar4 = *(byte *)((long)param_2 + 0x17);
  puVar3 = (undefined8 *)*param_2;
  uVar1 = param_2[1];
  if (-1 < (char)bVar4) {
    uVar1 = (ulong)bVar4;
  }
  uVar2 = uVar1;
  if (0x3e < uVar1) {
    uVar2 = 0x3f;
  }
  *param_1 = (short)uVar2;
  if (uVar1 != 0) {
    if (-1 < (char)bVar4) {
      puVar3 = param_2;
    }
    _memmove(param_1 + 1,puVar3,uVar2);
  }
  *(undefined1 *)((long)(param_1 + 1) + uVar2) = 0;
  return param_1;
}



/* Entry: 107291080; end: 10729115f;  */

undefined2 * FUN_107291080(undefined8 param_1)

{
  ulong uVar1;
  undefined2 *puVar2;
  ulong unaff_x20;
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -0xb8) = param_1;
  *(ulong *)(unaff_x29 + -0xb0) = unaff_x20;
  *(undefined8 *)(unaff_x29 + -0xa8) = 0;
  puVar2 = (undefined2 *)(unaff_x29 + -0x80);
  *puVar2 = 0;
  _strlen();
  uVar1 = unaff_x20;
  if (0x3e < unaff_x20) {
    uVar1 = 0x3f;
  }
  *puVar2 = (short)uVar1;
  if (unaff_x20 != 0) {
    _memmove(unaff_x29 + -0x7e);
  }
  *(undefined1 *)(unaff_x29 + -0x7e + uVar1) = 0;
  return puVar2;
}



/* Entry: 107291160; end: 1072911e7;  */

void FUN_107291160(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar4 = 1;
  __Znwm();
  uStack_28 = param_3[1];
  uStack_30 = *param_3;
  if (param_3[1] != 0) {
    plVar1 = (long *)(param_3[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = uVar4;
  func_0x00010725b6e0(&uStack_30);
  return;
}



/* Entry: 1072911e8; end: 10729120f;  */

void FUN_1072911e8(long *param_1,long param_2)

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



/* Entry: 107291210; end: 107291253;  */

void FUN_107291210(long param_1,undefined8 *param_2)

{
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_20 = param_2[0x19];
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  uStack_38 = param_2[5];
  uStack_40 = param_2[4];
  uStack_28 = param_2[7];
  uStack_30 = param_2[6];
  (**(code **)(**(long **)(param_1 + 8) + 0x18))(*(long **)(param_1 + 8),&uStack_60);
  return;
}



/* Entry: 107291254; end: 107291273;  */

void FUN_107291254(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107291260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x20))();
  return;
}



/* Entry: 107291274; end: 1072912a7;  */

undefined4 FUN_107291274(long param_1)

{
  undefined4 uVar1;
  long *plVar2;
  undefined4 uVar3;
  
  plVar2 = *(long **)(param_1 + 8);
  (**(code **)(*plVar2 + 0x30))();
  uVar3 = 1;
  if ((int)plVar2 != 1) {
    uVar3 = 2;
  }
  uVar1 = 0;
  if ((int)plVar2 != 0) {
    uVar1 = uVar3;
  }
  return uVar1;
}



/* Entry: 1072912a8; end: 1072912cb;  */

void FUN_1072912a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001072912b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x38))();
  return;
}



/* Entry: 1072912cc; end: 1072912df;  */

void FUN_1072912cc(void)

{
  FUN_1072912e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072912e0; end: 1072912e3;  */

void FUN_1072912e0(void)

{
  return;
}



/* Entry: 1072912e4; end: 10729133f;  */

undefined8 * FUN_1072912e4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109980f8;
  func_0x000107291314(param_1 + 1);
  return param_1;
}



/* Entry: 107291340; end: 1072914cf;  */

/* WARNING: Possible PIC construction at 0x0001072914c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001072914c8) */

undefined8 *
FUN_107291340(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 param_5)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  undefined8 *puStack_60;
  
  puVar5 = param_1;
  func_0x000107291b48();
  uVar9 = *param_2;
  puVar5[1] = param_2[1];
  *puVar5 = uVar9;
  *param_2 = 0;
  param_2[1] = 0;
  uVar9 = *param_3;
  puVar5[3] = param_3[1];
  puVar5[2] = uVar9;
  *param_3 = 0;
  param_3[1] = 0;
  uVar9 = *param_4;
  puVar5[5] = param_4[1];
  puVar5[4] = uVar9;
  *param_4 = 0;
  param_4[1] = 0;
  *(undefined1 *)(puVar5 + 8) = 0;
  puVar5[6] = param_5;
  *(undefined1 *)(puVar5 + 0xf) = 0;
  *(undefined4 *)(puVar5 + 0x10) = 0;
  *(undefined4 *)((long)puVar5 + 0x83) = 0;
  FUN_10726ed14(puVar5 + 0x11);
  param_1[0x13] = param_1;
  plVar7 = (long *)*param_1;
  uVar9 = param_1[0x11];
  lVar2 = param_1[0x12];
  puVar8 = param_1;
  if (lVar2 != 0) {
    plVar1 = (long *)(lVar2 + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    puVar8 = (undefined8 *)param_1[0x13];
  }
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_b8 = uVar9;
  lStack_b0 = lVar2;
  puStack_a8 = puVar8;
  func_0x00010725b1d4(&uStack_88);
  func_0x00010725b1d4(&uStack_98);
  puStack_60 = (undefined8 *)0x0;
  puVar6 = (undefined8 *)0x28;
  puStack_a0 = param_1;
  __Znwm();
  *puVar6 = &PTR_SUB_110998170;
  puVar6[1] = uVar9;
  uStack_b8 = 0;
  lStack_b0 = 0;
  puVar6[2] = lVar2;
  puVar6[3] = puVar8;
  puVar6[4] = param_1;
  puStack_60 = puVar6;
  (**(code **)(*plVar7 + 0x40))(plVar7,auStack_78);
  *(int *)(param_1 + 7) = (int)plVar7;
  func_0x000107270b28(auStack_78);
  func_0x00010725b1d4(&uStack_b8);
  func_0x000107291b28();
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000107270b28(auStack_78);
  func_0x00010725b1d4(&uStack_b8);
  FUN_107291608(puVar5 + 0x11);
  func_0x00010724b3d8(puVar5 + 8);
  func_0x00010726eedc(puVar5 + 4);
  FUN_1072915e0(puVar5 + 2);
  puVar5 = param_1;
  func_0x000107274970();
  if (puVar5 != (undefined8 *)0x0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1072914d0; end: 107291527;  */

undefined8 FUN_1072914d0(undefined8 *param_1)

{
  undefined8 unaff_x19;
  
  (**(code **)(*(long *)*param_1 + 0x48))((long *)*param_1,*(undefined4 *)(param_1 + 7));
  FUN_107291608(param_1 + 0x11);
  func_0x00010724b3d8(param_1 + 8);
  func_0x00010726eedc(param_1 + 4);
  FUN_1072915e0(param_1 + 2);
  func_0x000107274970();
  if (param_1 != (undefined8 *)0x0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 107291528; end: 107291543;  */

bool FUN_107291528(long param_1)

{
  FUN_107291544();
  return param_1 != 0;
}



/* Entry: 107291544; end: 1072915df;  */

long FUN_107291544(long *param_1,int *param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar3 = param_1[1];
  if ((uVar3 != 0) && (param_1[3] != 0)) {
    uVar4 = (ulong)*param_2;
    uVar5 = uVar3 - 1;
    if ((uVar3 & uVar5) == 0) {
      uVar6 = uVar5 & uVar4;
    }
    else {
      uVar6 = uVar4;
      if (uVar3 <= uVar4) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = uVar4 / uVar3;
        }
        uVar6 = uVar4 - uVar6 * uVar3;
      }
    }
    plVar2 = *(long **)(*param_1 + uVar6 * 8);
    if (plVar2 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar2 = (long *)*plVar2;
        if (plVar2 == (long *)0x0) {
          return 0;
        }
        uVar7 = plVar2[1];
        if (uVar7 != uVar4) break;
        if (*(int *)(plVar2 + 2) == *param_2) {
          return (long)plVar2;
        }
      }
      if ((uVar3 & uVar5) == 0) {
        uVar7 = uVar7 & uVar5;
      }
      else if (uVar3 <= uVar7) {
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = uVar7 / uVar3;
        }
        uVar7 = uVar7 - uVar1 * uVar3;
      }
    } while (uVar7 == uVar6);
  }
  return 0;
}



/* Entry: 1072915e0; end: 107291607;  */

long FUN_1072915e0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 107291608; end: 10729162f;  */

long FUN_107291608(long param_1)

{
  FUN_107291630();
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 107291630; end: 107291687;  */

void FUN_107291630(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107250860();
  }
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1072508cc(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 107291688; end: 10729169b;  */

void FUN_107291688(void)

{
  func_0x00010729165c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10729169c; end: 1072916c3;  */

void FUN_10729169c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = (undefined8 *)0x28;
  __Znwm();
  *puVar4 = &PTR_SUB_110998170;
  lVar5 = *(long *)(param_1 + 0x10);
  uVar6 = *(undefined8 *)(param_1 + 8);
  puVar4[2] = *(undefined8 *)(param_1 + 0x10);
  puVar4[1] = uVar6;
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
  puVar4[3] = *(undefined8 *)(param_1 + 0x18);
  puVar4[4] = *(undefined8 *)(param_1 + 0x20);
  return;
}



/* Entry: 1072916c4; end: 1072916ef;  */

void FUN_1072916c4(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_2 = &PTR_SUB_110998170;
  lVar4 = *(long *)(param_1 + 0x10);
  uVar5 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[4] = *(undefined8 *)(param_1 + 0x20);
  return;
}



/* Entry: 1072916f0; end: 107291a97;  */

long ** FUN_1072916f0(long param_1,long **param_2)

{
  ulong uVar1;
  undefined1 in_ZR;
  int iVar2;
  int iVar3;
  long **pplVar4;
  long **pplVar5;
  long **pplVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long **pplVar10;
  ulong uVar11;
  long **pplVar12;
  long *plStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  long *plStack_218;
  undefined8 uStack_210;
  undefined1 auStack_128 [64];
  undefined4 auStack_e8 [2];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long *plStack_c8;
  undefined8 uStack_c0;
  
  lVar8 = param_1;
  pplVar5 = param_2;
  func_0x000107291b48();
  func_0x00010726fc00(&plStack_218,lVar8 + 8);
  if (plStack_218 != (long *)0x0) {
    func_0x00010726fc3c();
    uStack_230 = uStack_210;
    plStack_238 = plStack_218;
    in_ZR = *plStack_218 == -1;
    if (!(bool)in_ZR) {
      plStack_218 = (long *)0x0;
      uStack_210 = 0;
      plStack_c8 = (long *)0x0;
      uStack_c0 = 0;
      FUN_1072508cc(&plStack_c8);
      goto LAB_107291770;
    }
    func_0x00010726fc88();
  }
  func_0x000107291b20();
  plStack_238 = (long *)0x0;
  uStack_230 = 0;
  plStack_218 = (long *)0x0;
  uStack_210 = 0;
LAB_107291770:
  func_0x000107291b20();
  func_0x00010726fc00(&plStack_218,param_1 + 8);
  if (plStack_218 == (long *)0x0) {
    func_0x000107291b20();
  }
  else {
    lVar8 = *plStack_218;
    func_0x000107291b20();
    in_ZR = lVar8 == -1;
    if (!(bool)in_ZR) {
      lVar8 = *(long *)(param_1 + 0x20);
      if (*(char *)(param_2 + 7) == '\x01') {
        pplVar5 = param_2;
        FUN_10726594c(lVar8 + 0x40);
      }
      if (*(char *)((long)param_2 + 0x2b1) == '\x01') {
        *(byte *)(lVar8 + 0x81) = *(byte *)(param_2 + 0x56) & 1;
      }
      if (*(char *)((long)param_2 + 0x2b3) == '\x01') {
        *(byte *)(lVar8 + 0x82) = *(byte *)((long)param_2 + 0x2b2) & 1;
      }
      if (*(char *)((long)param_2 + 0x2a9) == '\x01') {
        *(byte *)(lVar8 + 0x83) = *(byte *)(param_2 + 0x55) & 1;
      }
      if (*(char *)(param_2 + 0x36) == '\x01') {
        *(bool *)(lVar8 + 0x84) = *(int *)(param_2 + 0x35) == 0;
      }
      if (*(char *)(param_2 + 0x31) == '\x01') {
        *(bool *)(lVar8 + 0x85) = param_2[0x2d] != param_2[0x2e];
        *(undefined1 *)(lVar8 + 0x86) = *(undefined1 *)(param_2 + 0x30);
      }
      in_ZR = 0;
      if ((((*(char *)(lVar8 + 0x78) == '\x01') && (in_ZR = 0, *(char *)(param_2 + 0x28) == '\x01'))
          && (in_ZR = *(char *)(lVar8 + 0x80) == '\x01', (bool)in_ZR)) &&
         ((pplVar10 = (long **)param_2[0x24], pplVar10 != (long **)0x0 &&
          (param_2[0x26] != (long *)0x0)))) {
        pplVar4 = param_2 + 0x26;
        pplVar5 = (long **)(lVar8 + 0x40);
        FUN_10726364c();
        uVar11 = (long)pplVar10 - 1;
        if (((ulong)pplVar10 & uVar11) == 0) {
          pplVar12 = (long **)((ulong)pplVar4 & uVar11);
          in_ZR = true;
        }
        else {
          in_ZR = pplVar4 == pplVar10;
          pplVar12 = pplVar4;
          if (pplVar10 <= pplVar4) {
            uVar1 = 0;
            if (pplVar10 != (long **)0x0) {
              uVar1 = (ulong)pplVar4 / (ulong)pplVar10;
            }
            pplVar12 = (long **)((long)pplVar4 - uVar1 * (long)pplVar10);
          }
        }
        plVar9 = (long *)param_2[0x23][(long)pplVar12];
        if (plVar9 != (long *)0x0) {
          do {
            while( true ) {
              plVar9 = (long *)*plVar9;
              if (plVar9 == (long *)0x0) goto LAB_1072918a8;
              pplVar6 = (long **)plVar9[1];
              in_ZR = pplVar4 == pplVar6;
              if (!(bool)in_ZR) break;
              iVar3 = (int)plVar9;
              iVar2 = iVar3 + 0x10;
              pplVar5 = (long **)(lVar8 + 0x40);
              func_0x000104c32db4();
              if (iVar2 != 0) {
                plStack_218 = (long *)((ulong)plStack_218 & 0xffffffff00000000);
                iVar2 = iVar3 + 0x298;
                pplVar5 = &plStack_218;
                FUN_107291528();
                if (iVar2 == 0) {
                  plStack_c8 = (long *)CONCAT44(plStack_c8._4_4_,4);
                  iVar3 = iVar3 + 0x298;
                  pplVar5 = &plStack_c8;
                  FUN_107291528();
                  if (iVar3 == 0) goto LAB_1072918a8;
                }
                in_ZR = *(char *)(lVar8 + 0x81) == '\x01';
                if ((!(bool)in_ZR) || (in_ZR = *(char *)(lVar8 + 0x82) == '\x01', !(bool)in_ZR))
                goto LAB_1072918a8;
                in_ZR = *(char *)(lVar8 + 0x83) == '\x01';
                if ((bool)in_ZR) {
LAB_107291988:
                  if ((*(byte *)(lVar8 + 0x86) & 1) != 0) goto LAB_1072918a8;
                }
                else {
                  in_ZR = false;
                  if (*(char *)(lVar8 + 0x84) == '\x01') {
                    in_ZR = *(char *)(lVar8 + 0x85) == '\x01';
                    if ((bool)in_ZR) goto LAB_107291988;
                    goto LAB_1072918a8;
                  }
                }
                plVar7 = *(long **)(lVar8 + 0x10);
                auStack_e8[0] = 6;
                uStack_d8 = plVar9[0x1c];
                uStack_e0 = plVar9[0x1b];
                uStack_228 = 0;
                uStack_220 = 0;
                FUN_107269c1c(&uStack_228);
                FUN_107269228(auStack_128,plVar9 + 9);
                FUN_10726924c(&plStack_c8,auStack_e8,&uStack_228,auStack_128);
                FUN_1072692d4(&plStack_218,&plStack_c8);
                FUN_107269394(&plStack_c8);
                func_0x000104c319e0(auStack_128);
                func_0x000104c335c0(&uStack_228);
                func_0x000104c3365c(auStack_e8);
                pplVar5 = &plStack_218;
                (**(code **)(*plVar7 + 0x10))(plVar7);
                func_0x000107269e60(&plStack_218);
                goto LAB_1072918a8;
              }
            }
            if (((ulong)pplVar10 & uVar11) == 0) {
              pplVar6 = (long **)((ulong)pplVar6 & uVar11);
            }
            else if (pplVar10 <= pplVar6) {
              uVar1 = 0;
              if (pplVar10 != (long **)0x0) {
                uVar1 = (ulong)pplVar6 / (ulong)pplVar10;
              }
              pplVar6 = (long **)((long)pplVar6 - uVar1 * (long)pplVar10);
            }
            in_ZR = pplVar6 == pplVar12;
          } while ((bool)in_ZR);
        }
      }
    }
  }
LAB_1072918a8:
  pplVar10 = &plStack_238;
  func_0x000107270b00();
  func_0x000107291b28();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107269e60(&plStack_218);
    func_0x000107270b00(&plStack_238);
    __Unwind_Resume(pplVar10);
    func_0x0001004a5364(pplVar5,&PTR_DAT_1109981d0);
    pplVar10 = pplVar10 + 1;
    if ((int)pplVar5 == 0) {
      pplVar10 = (long **)0x0;
    }
    return pplVar10;
  }
  return pplVar10;
}



/* Entry: 107291a98; end: 107291acf;  */

long FUN_107291a98(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109981d0);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 107291ad0; end: 107291b5b;  */

undefined ** FUN_107291ad0(void)

{
  return &PTR_DAT_1109981d0;
}



/* Entry: 107291b5c; end: 107291bcb;  */

void FUN_107291b5c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0x68;
  __Znwm();
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_107291bcc();
  *param_1 = uVar1;
  func_0x00010724b8b8(&uStack_40);
  return;
}



/* Entry: 107291bcc; end: 107291c77;  */

long * FUN_107291bcc(long *param_1,long *param_2)

{
  long *plVar1;
  int extraout_w10;
  long lVar2;
  
  func_0x0001073af260();
  FUN_10725b034(param_1);
  param_1[2] = (long)param_1;
  plVar1 = (long *)*param_1;
  lVar2 = *plVar1;
  param_1[4] = plVar1[1];
  param_1[3] = lVar2;
  if (plVar1[1] != 0) {
    do {
      func_0x000107291d74();
    } while (extraout_w10 != 0);
  }
  lVar2 = *param_2;
  param_1[7] = param_2[1];
  param_1[6] = lVar2;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[8] = (long)param_1;
  param_1[9] = 0;
  FUN_10726ed14(param_1 + 10);
  param_1[0xc] = (long)param_1;
  return param_1;
}



/* Entry: 107291c78; end: 107291c9b;  */

undefined8 FUN_107291c78(undefined8 param_1)

{
  FUN_107291c9c(param_1,0);
  return param_1;
}



/* Entry: 107291c9c; end: 107291cb3;  */

void FUN_107291c9c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_107291cd0(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107291cb4; end: 107291ccf;  */

void FUN_107291cb4(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_107291cd0(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107291cd0; end: 107291d0f;  */

undefined8 FUN_107291cd0(long param_1)

{
  undefined8 unaff_x19;
  
  FUN_107291d10(param_1 + 0x50);
  FUN_10725b238(param_1 + 0x40);
  func_0x00010724b8b8(param_1 + 0x30);
  FUN_10724ae28(param_1 + 0x18);
  func_0x00010724ce4c();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 107291d10; end: 107291d37;  */

long FUN_107291d10(long param_1)

{
  FUN_107291d38();
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 107291d38; end: 107291d63;  */

void FUN_107291d38(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107250860();
  }
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1072508cc(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 107291d64; end: 107291d8b;  */

void FUN_107291d64(void)

{
  return;
}



/* Entry: 107291d8c; end: 107291db3;  */

undefined8 FUN_107291d8c(undefined8 param_1)

{
  FUN_107291db4(param_1,0);
  return param_1;
}



/* Entry: 107291db4; end: 107291dcb;  */

void FUN_107291db4(long *param_1,long param_2)

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



/* Entry: 107291dcc; end: 107291f6b;  */

undefined8 *
FUN_107291dcc(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  *param_1 = &PTR_FUN_1109981f0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0x3f800000;
  param_1[0xb] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[0x10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  uVar2 = *param_2;
  param_1[0x1d] = param_2[1];
  param_1[0x1c] = uVar2;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = param_3;
  *(undefined1 *)(param_1 + 0x20) = 0;
  param_1[0x21] = *param_4;
  lVar1 = param_4[1];
  param_1[0x22] = lVar1;
  if (lVar1 != 0) {
    do {
      func_0x00010729e450();
    } while (extraout_w10 != 0);
  }
  FUN_10726ed14(param_1 + 0x23);
  param_1[0x25] = param_1;
  func_0x00010729eb40();
  FUN_107291f6c(uStack_60,uStack_58,param_1 + 1);
  func_0x00010729ea28();
  func_0x00010729eb40();
  FUN_107291f6c(uStack_60,uStack_58,param_1 + 10);
  func_0x00010729ea28();
  func_0x00010729eb40();
  FUN_107291f6c(uStack_60,uStack_58,param_1 + 0x13);
  func_0x00010729ea28();
  return param_1;
}



/* Entry: 107291f6c; end: 107292023;  */

undefined1 ** FUN_107291f6c(undefined1 *param_1,long param_2,long param_3)

{
  undefined1 in_ZR;
  undefined1 **ppuVar1;
  undefined8 *puVar2;
  undefined1 **ppuVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  undefined1 *puStack_f8;
  long lStack_f0;
  undefined1 *puStack_e8;
  long lStack_e0;
  undefined **ppuStack_d8;
  undefined1 *puStack_d0;
  long lStack_c8;
  undefined ***pppuStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_68 [24];
  undefined1 *puStack_50;
  long lStack_48;
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  func_0x00010729e2fc();
  puStack_50 = param_1;
  lStack_48 = param_2;
  if (param_2 != 0) {
    do {
      func_0x00010729e450();
    } while (extraout_w10 != 0);
  }
  func_0x00010002b838(auStack_40,&DAT_10f34ef3f);
  func_0x0001000e3098(auStack_68,auStack_40,1);
  puVar4 = auStack_68;
  FUN_1072921d8(&puStack_50);
  func_0x0001000e30f4(auStack_68);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_40);
  ppuVar1 = &puStack_50;
  FUN_107293168(ppuVar1);
  func_0x00010729e1e0(uStack_28);
  if ((bool)in_ZR) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  func_0x00010729e6ec();
  func_0x0001000e30f4();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_40);
  ppuVar1 = &puStack_50;
  FUN_107293168();
  func_0x00010729e514();
  puVar5 = puVar4;
  lVar6 = param_3;
  func_0x00010729e310();
  puStack_f8 = puVar5;
  lStack_f0 = lVar6;
  uStack_b8 = extraout_x8;
  if (lVar6 != 0) {
    do {
      func_0x00010729e450();
    } while (extraout_w10_00 != 0);
  }
  puVar2 = (undefined8 *)0x40;
  __Znwm();
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_110998258;
  puStack_e8 = puVar4;
  lStack_e0 = param_3;
  if (param_3 != 0) {
    do {
      func_0x00010729e450();
    } while (extraout_w10_01 != 0);
    do {
      func_0x00010729e450();
    } while (extraout_w10_02 != 0);
  }
  puVar2[3] = &PTR_SUB_110998468;
  ppuStack_d8 = &PTR_FUN_1109982a8;
  pppuStack_c0 = &ppuStack_d8;
  puVar2[4] = &PTR_FUN_1109982a8;
  puVar2[6] = param_3;
  puVar2[7] = puVar2 + 4;
  puVar2[5] = puVar4;
  puStack_d0 = puVar4;
  lStack_c8 = param_3;
  if (param_3 != 0) {
    do {
      func_0x00010729e450();
    } while (extraout_w10_03 != 0);
  }
  FUN_107298114(&ppuStack_d8);
  func_0x00010725b6e0(&puStack_e8);
  *ppuVar1 = (undefined1 *)(puVar2 + 3);
  ppuVar1[1] = (undefined1 *)puVar2;
  ppuVar3 = &puStack_f8;
  func_0x00010725b6e0();
  func_0x00010729e1e0(uStack_b8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010729e6ec();
    func_0x00010725b6e0();
    func_0x00010729e514();
    func_0x00010729ef84();
    if (ppuVar3 != (undefined1 **)0x0) {
      func_0x0001000df548();
    }
    return ppuVar1;
  }
  return ppuVar3;
}



/* Entry: 107292024; end: 10729212b;  */

undefined8 * FUN_107292024(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined **ppuStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined ***pppuStack_50;
  undefined8 uStack_48;
  
  uVar2 = param_2;
  lVar3 = param_3;
  func_0x00010729e310();
  uStack_88 = uVar2;
  lStack_80 = lVar3;
  uStack_48 = extraout_x8;
  if (lVar3 != 0) {
    do {
      func_0x00010729e450();
    } while (extraout_w10 != 0);
  }
  puVar1 = (undefined8 *)0x40;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110998258;
  uStack_78 = param_2;
  lStack_70 = param_3;
  if (param_3 != 0) {
    do {
      func_0x00010729e450();
    } while (extraout_w10_00 != 0);
    do {
      func_0x00010729e450();
    } while (extraout_w10_01 != 0);
  }
  puVar1[3] = &PTR_SUB_110998468;
  ppuStack_68 = &PTR_FUN_1109982a8;
  pppuStack_50 = &ppuStack_68;
  puVar1[4] = &PTR_FUN_1109982a8;
  puVar1[6] = param_3;
  puVar1[7] = puVar1 + 4;
  puVar1[5] = param_2;
  uStack_60 = param_2;
  lStack_58 = param_3;
  if (param_3 != 0) {
    do {
      func_0x00010729e450();
    } while (extraout_w10_02 != 0);
  }
  FUN_107298114(&ppuStack_68);
  func_0x00010725b6e0(&uStack_78);
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  puVar1 = &uStack_88;
  func_0x00010725b6e0();
  func_0x00010729e1e0(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010729e6ec();
    func_0x00010725b6e0();
    func_0x00010729e514();
    func_0x00010729ef84();
    if (puVar1 != (undefined8 *)0x0) {
      func_0x0001000df548();
    }
    return param_1;
  }
  return puVar1;
}



/* Entry: 10729212c; end: 10729218f;  */

void FUN_10729212c(long param_1)

{
  func_0x00010729ef84();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 107292190; end: 1072921cb;  */

void FUN_107292190(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x8;
  __Znwm();
  uVar2 = 1;
  __Znwm();
  *puVar1 = uVar2;
  *param_1 = puVar1;
  return;
}



/* Entry: 1072921cc; end: 1072921d7;  */

void FUN_1072921cc(long param_1,undefined8 *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  undefined8 *puVar7;
  undefined8 **ppuVar8;
  long lVar9;
  long *plVar10;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined8 **ppuVar11;
  long lVar12;
  ulong extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  long extraout_x10;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined1 *puVar16;
  undefined8 *puVar17;
  undefined8 ***pppuVar18;
  undefined8 uVar19;
  long lStack_128;
  undefined8 **ppuStack_120;
  undefined8 **ppuStack_118;
  undefined8 **ppuStack_110;
  undefined1 auStack_108 [40];
  undefined1 auStack_e0 [16];
  undefined8 auStack_d0 [3];
  undefined8 **ppuStack_b8;
  undefined1 uStack_b0;
  undefined8 **ppuStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 ***pppuStack_98;
  undefined8 ***pppuStack_90;
  undefined1 uStack_88;
  undefined8 **ppuStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  
  plVar1 = (long *)(param_1 + 8);
  plVar10 = plVar1;
  func_0x00010729e310();
  uStack_68 = extraout_x8;
  if ((int)plVar10[8] == 1) {
LAB_10729223c:
    lVar12 = *param_3;
    FUN_107298794(auStack_e0,lVar12,param_3[1]);
    uVar15 = 0;
    puVar17 = auStack_d0;
    while (puVar17 = (undefined8 *)*puVar17, puVar17 != (undefined8 *)0x0) {
      puVar7 = puVar17 + 2;
      func_0x000104c2fe38();
      uVar15 = uVar15 * 0x1000 + -0x61c8864680b583eb + (uVar15 >> 4) + (long)puVar7 ^ uVar15;
    }
    lVar13 = uVar15 + 0x9e3779b97f4a7c15;
    plVar10 = (long *)*plVar1;
LAB_107292290:
    if (plVar10 != *(long **)(param_1 + 0x10)) {
      if (lVar13 != *plVar10) goto code_r0x0001072922a4;
      puVar17 = (undefined8 *)plVar10[2];
      bVar5 = (undefined8 *)plVar10[3] <= puVar17;
      uVar6 = puVar17 == (undefined8 *)plVar10[3];
      if (bVar5) {
        lVar13 = plVar10[1];
        if (((long)puVar17 - lVar13 >> 4) + 1U >> 0x3c != 0) {
          FUN_1072988f0();
          goto LAB_1072925b0;
        }
        func_0x00010729ef24();
        lVar9 = extraout_x8_02;
        if (bVar5) {
          lVar9 = 0xfffffffffffffff;
        }
        FUN_1072988fc();
        puVar7 = (undefined8 *)(lVar9 + ((long)puVar17 - lVar13));
        lVar13 = param_2[1];
        uVar19 = *param_2;
        puVar7[1] = param_2[1];
        *puVar7 = uVar19;
        if (lVar13 != 0) {
          plVar1 = (long *)(lVar13 + 8);
          do {
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *plVar1 = *plVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        puVar17 = puVar7 + 2;
        lVar14 = (long)puVar7 - (plVar10[2] - plVar10[1]);
        _memcpy(lVar14);
        lVar13 = plVar10[1];
        plVar10[1] = lVar14;
        plVar10[2] = (long)puVar17;
        plVar10[3] = lVar9 + lVar12 * 0x10;
        if (lVar13 != 0) {
          __ZdlPv();
        }
      }
      else {
        lVar12 = param_2[1];
        uVar19 = *param_2;
        puVar17[1] = param_2[1];
        *puVar17 = uVar19;
        if (lVar12 != 0) {
          plVar1 = (long *)(lVar12 + 8);
          do {
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *plVar1 = *plVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        puVar17 = puVar17 + 2;
      }
      plVar10[2] = (long)puVar17;
      goto LAB_107292568;
    }
    puVar17 = (undefined8 *)*param_2;
    puVar7 = (undefined8 *)param_2[1];
    lStack_128 = lVar13;
    puStack_78 = puVar17;
    puStack_70 = puVar7;
    if (puVar7 != (undefined8 *)0x0) {
      do {
        func_0x00010729e450();
      } while (extraout_w10 != 0);
    }
    ppuStack_120 = (undefined8 **)0x0;
    ppuStack_118 = (undefined8 **)0x0;
    ppuStack_110 = (undefined8 **)0x0;
    uStack_b0 = 0;
    ppuVar8 = (undefined8 **)0x1;
    ppuStack_b8 = &ppuStack_120;
    FUN_1072988fc();
    ppuStack_a0 = &ppuStack_110;
    ppuStack_110 = ppuVar8 + lVar12 * 2;
    pppuStack_98 = &ppuStack_a8;
    pppuStack_90 = &ppuStack_80;
    *ppuVar8 = puVar17;
    ppuVar8[1] = puVar7;
    ppuStack_120 = ppuVar8;
    ppuStack_118 = ppuVar8;
    ppuStack_a8 = ppuVar8;
    if (puVar7 != (undefined8 *)0x0) {
      do {
        func_0x00010729e450();
      } while (extraout_w10_00 != 0);
    }
    uStack_88 = 1;
    ppuStack_80 = ppuVar8 + 2;
    func_0x00010729892c(&ppuStack_a0);
    uStack_b0 = 1;
    ppuStack_118 = ppuVar8 + 2;
    func_0x00010729896c(&ppuStack_b8);
    puVar16 = auStack_e0;
    FUN_107298994(auStack_108);
    ppuVar11 = *(undefined8 ***)(param_1 + 0x18);
    ppuVar8 = *(undefined8 ***)(param_1 + 0x10);
    uVar6 = ppuVar8 == ppuVar11;
    if (ppuVar8 < ppuVar11) {
      FUN_1072987d0(ppuVar8,&lStack_128);
      ppuVar8 = ppuVar8 + 9;
    }
    else {
      func_0x00010729ee28(0xe38e);
      lVar12 = *plVar1;
      if (extraout_x8_00 < ((long)ppuVar8 - lVar12) / 0x48 + 1U) goto LAB_1072925a4;
      func_0x00010729f15c();
      lVar13 = extraout_x10;
      if (0x1c71c71c71c71c6 < extraout_x9) {
        lVar13 = extraout_x8_01;
      }
      if (lVar13 == 0) {
        lVar13 = 0;
        puVar16 = (undefined1 *)0x0;
      }
      else {
        FUN_107298874();
      }
      lVar14 = lVar13 + ((long)ppuVar8 - lVar12);
      FUN_1072987d0(lVar14,&lStack_128);
      lVar9 = *plVar1;
      lVar2 = *(long *)(param_1 + 0x10);
      pppuVar18 = (undefined8 ***)(lVar14 + ((lVar2 - lVar9) / -0x48) * 0x48);
      pppuStack_98 = &ppuStack_80;
      pppuStack_90 = &ppuStack_b8;
      ppuStack_b8 = pppuVar18;
      ppuStack_a0 = (undefined8 ***)(param_1 + 0x18);
      ppuStack_80 = pppuVar18;
      for (lVar12 = lVar9; lVar12 != lVar2; lVar12 = lVar12 + 0x48) {
        FUN_1072987d0(ppuStack_b8,lVar12);
        ppuStack_b8 = ppuStack_b8 + 9;
      }
      uStack_88 = 1;
      for (; uVar6 = lVar9 == lVar2, !(bool)uVar6; lVar9 = lVar9 + 0x48) {
        func_0x00010729829c(lVar9);
      }
      ppuVar8 = (undefined8 **)(lVar14 + 0x48);
      func_0x0001072988b0(&ppuStack_a0);
      lVar12 = *plVar1;
      *plVar1 = (long)pppuVar18;
      *(undefined8 ***)(param_1 + 0x10) = ppuVar8;
      *(long *)(param_1 + 0x18) = lVar13 + (long)puVar16 * 0x48;
      if (lVar12 != 0) {
        __ZdlPv();
      }
    }
    *(undefined8 ***)(param_1 + 0x10) = ppuVar8;
    func_0x00010729829c(&lStack_128);
    FUN_107293168(&puStack_78);
LAB_107292568:
    FUN_1072981bc(auStack_e0);
    func_0x00010729e1e0(uStack_68);
    if ((bool)uVar6) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    if (*param_3 == param_3[1]) {
      FUN_107298370(param_1 + 0x20);
      goto LAB_10729223c;
    }
    if ((int)plVar10[8] == 0) {
      func_0x00010729833c(param_1 + 0x20);
      goto LAB_10729223c;
    }
  }
  func_0x00010563ab98();
LAB_1072925a4:
  FUN_107298868();
LAB_1072925b0:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1072925b4);
  (*pcVar4)();
code_r0x0001072922a4:
  plVar10 = plVar10 + 9;
  goto LAB_107292290;
}



/* Entry: 1072921d8; end: 107292603;  */

void FUN_1072921d8(undefined8 *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  undefined8 *puVar7;
  undefined8 **ppuVar8;
  long lVar9;
  long *plVar10;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined8 **ppuVar11;
  long lVar12;
  ulong extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  long extraout_x10;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined1 *puVar16;
  undefined8 *puVar17;
  undefined8 ***pppuVar18;
  undefined8 uVar19;
  long lStack_128;
  undefined8 **ppuStack_120;
  undefined8 **ppuStack_118;
  undefined8 **ppuStack_110;
  undefined1 auStack_108 [40];
  undefined1 auStack_e0 [16];
  undefined8 auStack_d0 [3];
  undefined8 **ppuStack_b8;
  undefined1 uStack_b0;
  undefined8 **ppuStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 ***pppuStack_98;
  undefined8 ***pppuStack_90;
  undefined1 uStack_88;
  undefined8 **ppuStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  
  plVar10 = param_3;
  func_0x00010729e310();
  uStack_68 = extraout_x8;
  if ((int)plVar10[8] == 1) {
LAB_10729223c:
    lVar12 = *param_2;
    FUN_107298794(auStack_e0,lVar12,param_2[1]);
    uVar15 = 0;
    puVar17 = auStack_d0;
    while (puVar17 = (undefined8 *)*puVar17, puVar17 != (undefined8 *)0x0) {
      puVar7 = puVar17 + 2;
      func_0x000104c2fe38();
      uVar15 = uVar15 * 0x1000 + -0x61c8864680b583eb + (uVar15 >> 4) + (long)puVar7 ^ uVar15;
    }
    lVar13 = uVar15 + 0x9e3779b97f4a7c15;
    plVar10 = (long *)*param_3;
LAB_107292290:
    if (plVar10 != (long *)param_3[1]) {
      if (lVar13 != *plVar10) goto code_r0x0001072922a4;
      puVar17 = (undefined8 *)plVar10[2];
      bVar5 = (undefined8 *)plVar10[3] <= puVar17;
      uVar6 = puVar17 == (undefined8 *)plVar10[3];
      if (bVar5) {
        lVar13 = plVar10[1];
        if (((long)puVar17 - lVar13 >> 4) + 1U >> 0x3c != 0) {
          FUN_1072988f0();
          goto LAB_1072925b0;
        }
        func_0x00010729ef24();
        lVar9 = extraout_x8_02;
        if (bVar5) {
          lVar9 = 0xfffffffffffffff;
        }
        FUN_1072988fc();
        puVar7 = (undefined8 *)(lVar9 + ((long)puVar17 - lVar13));
        lVar13 = param_1[1];
        uVar19 = *param_1;
        puVar7[1] = param_1[1];
        *puVar7 = uVar19;
        if (lVar13 != 0) {
          plVar1 = (long *)(lVar13 + 8);
          do {
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *plVar1 = *plVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        puVar17 = puVar7 + 2;
        lVar14 = (long)puVar7 - (plVar10[2] - plVar10[1]);
        _memcpy(lVar14);
        lVar13 = plVar10[1];
        plVar10[1] = lVar14;
        plVar10[2] = (long)puVar17;
        plVar10[3] = lVar9 + lVar12 * 0x10;
        if (lVar13 != 0) {
          __ZdlPv();
        }
      }
      else {
        lVar12 = param_1[1];
        uVar19 = *param_1;
        puVar17[1] = param_1[1];
        *puVar17 = uVar19;
        if (lVar12 != 0) {
          plVar1 = (long *)(lVar12 + 8);
          do {
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *plVar1 = *plVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        puVar17 = puVar17 + 2;
      }
      plVar10[2] = (long)puVar17;
      goto LAB_107292568;
    }
    puVar17 = (undefined8 *)*param_1;
    puVar7 = (undefined8 *)param_1[1];
    lStack_128 = lVar13;
    puStack_78 = puVar17;
    puStack_70 = puVar7;
    if (puVar7 != (undefined8 *)0x0) {
      do {
        func_0x00010729e450();
      } while (extraout_w10 != 0);
    }
    ppuStack_120 = (undefined8 **)0x0;
    ppuStack_118 = (undefined8 **)0x0;
    ppuStack_110 = (undefined8 **)0x0;
    uStack_b0 = 0;
    ppuVar8 = (undefined8 **)0x1;
    ppuStack_b8 = &ppuStack_120;
    FUN_1072988fc();
    ppuStack_a0 = &ppuStack_110;
    ppuStack_110 = ppuVar8 + lVar12 * 2;
    pppuStack_98 = &ppuStack_a8;
    pppuStack_90 = &ppuStack_80;
    *ppuVar8 = puVar17;
    ppuVar8[1] = puVar7;
    ppuStack_120 = ppuVar8;
    ppuStack_118 = ppuVar8;
    ppuStack_a8 = ppuVar8;
    if (puVar7 != (undefined8 *)0x0) {
      do {
        func_0x00010729e450();
      } while (extraout_w10_00 != 0);
    }
    uStack_88 = 1;
    ppuStack_80 = ppuVar8 + 2;
    func_0x00010729892c(&ppuStack_a0);
    uStack_b0 = 1;
    ppuStack_118 = ppuVar8 + 2;
    func_0x00010729896c(&ppuStack_b8);
    puVar16 = auStack_e0;
    FUN_107298994(auStack_108);
    ppuVar11 = (undefined8 **)param_3[2];
    ppuVar8 = (undefined8 **)param_3[1];
    uVar6 = ppuVar8 == ppuVar11;
    if (ppuVar8 < ppuVar11) {
      FUN_1072987d0(ppuVar8,&lStack_128);
      ppuVar8 = ppuVar8 + 9;
    }
    else {
      func_0x00010729ee28(0xe38e);
      lVar12 = *param_3;
      if (extraout_x8_00 < ((long)ppuVar8 - lVar12) / 0x48 + 1U) goto LAB_1072925a4;
      func_0x00010729f15c();
      lVar13 = extraout_x10;
      if (0x1c71c71c71c71c6 < extraout_x9) {
        lVar13 = extraout_x8_01;
      }
      if (lVar13 == 0) {
        lVar13 = 0;
        puVar16 = (undefined1 *)0x0;
      }
      else {
        FUN_107298874();
      }
      lVar14 = lVar13 + ((long)ppuVar8 - lVar12);
      FUN_1072987d0(lVar14,&lStack_128);
      lVar9 = *param_3;
      lVar2 = param_3[1];
      pppuVar18 = (undefined8 ***)(lVar14 + ((lVar2 - lVar9) / -0x48) * 0x48);
      pppuStack_98 = &ppuStack_80;
      pppuStack_90 = &ppuStack_b8;
      ppuStack_b8 = pppuVar18;
      ppuStack_a0 = (undefined8 **)(param_3 + 2);
      ppuStack_80 = pppuVar18;
      for (lVar12 = lVar9; lVar12 != lVar2; lVar12 = lVar12 + 0x48) {
        FUN_1072987d0(ppuStack_b8,lVar12);
        ppuStack_b8 = ppuStack_b8 + 9;
      }
      uStack_88 = 1;
      for (; uVar6 = lVar9 == lVar2, !(bool)uVar6; lVar9 = lVar9 + 0x48) {
        func_0x00010729829c(lVar9);
      }
      ppuVar8 = (undefined8 **)(lVar14 + 0x48);
      func_0x0001072988b0(&ppuStack_a0);
      lVar12 = *param_3;
      *param_3 = (long)pppuVar18;
      param_3[1] = (long)ppuVar8;
      param_3[2] = lVar13 + (long)puVar16 * 0x48;
      if (lVar12 != 0) {
        __ZdlPv();
      }
    }
    param_3[1] = (long)ppuVar8;
    func_0x00010729829c(&lStack_128);
    FUN_107293168(&puStack_78);
LAB_107292568:
    FUN_1072981bc(auStack_e0);
    func_0x00010729e1e0(uStack_68);
    if ((bool)uVar6) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    if (*param_2 == param_2[1]) {
      FUN_107298370(param_3 + 3);
      goto LAB_10729223c;
    }
    if ((int)plVar10[8] == 0) {
      func_0x00010729833c(param_3 + 3);
      goto LAB_10729223c;
    }
  }
  func_0x00010563ab98();
LAB_1072925a4:
  FUN_107298868();
LAB_1072925b0:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1072925b4);
  (*pcVar4)();
code_r0x0001072922a4:
  plVar10 = plVar10 + 9;
  goto LAB_107292290;
}



/* Entry: 107292604; end: 10729261b;  */

void FUN_107292604(long param_1,undefined8 *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  undefined8 *puVar7;
  undefined8 **ppuVar8;
  long lVar9;
  long *plVar10;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined8 **ppuVar11;
  long lVar12;
  ulong extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  long extraout_x10;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined1 *puVar16;
  undefined8 *puVar17;
  undefined8 ***pppuVar18;
  undefined8 uVar19;
  long lStack_128;
  undefined8 **ppuStack_120;
  undefined8 **ppuStack_118;
  undefined8 **ppuStack_110;
  undefined1 auStack_108 [40];
  undefined1 auStack_e0 [16];
  undefined8 auStack_d0 [3];
  undefined8 **ppuStack_b8;
  undefined1 uStack_b0;
  undefined8 **ppuStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 ***pppuStack_98;
  undefined8 ***pppuStack_90;
  undefined1 uStack_88;
  undefined8 **ppuStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  
  plVar1 = (long *)(param_1 + 0x50);
  plVar10 = plVar1;
  func_0x00010729e310();
  uStack_68 = extraout_x8;
  if ((int)plVar10[8] == 1) {
LAB_10729223c:
    lVar12 = *param_3;
    FUN_107298794(auStack_e0,lVar12,param_3[1]);
    uVar15 = 0;
    puVar17 = auStack_d0;
    while (puVar17 = (undefined8 *)*puVar17, puVar17 != (undefined8 *)0x0) {
      puVar7 = puVar17 + 2;
      func_0x000104c2fe38();
      uVar15 = uVar15 * 0x1000 + -0x61c8864680b583eb + (uVar15 >> 4) + (long)puVar7 ^ uVar15;
    }
    lVar13 = uVar15 + 0x9e3779b97f4a7c15;
    plVar10 = (long *)*plVar1;
LAB_107292290:
    if (plVar10 != *(long **)(param_1 + 0x58)) {
      if (lVar13 != *plVar10) goto code_r0x0001072922a4;
      puVar17 = (undefined8 *)plVar10[2];
      bVar5 = (undefined8 *)plVar10[3] <= puVar17;
      uVar6 = puVar17 == (undefined8 *)plVar10[3];
      if (bVar5) {
        lVar13 = plVar10[1];
        if (((long)puVar17 - lVar13 >> 4) + 1U >> 0x3c != 0) {
          FUN_1072988f0();
          goto LAB_1072925b0;
        }
        func_0x00010729ef24();
        lVar9 = extraout_x8_02;
        if (bVar5) {
          lVar9 = 0xfffffffffffffff;
        }
        FUN_1072988fc();
        puVar7 = (undefined8 *)(lVar9 + ((long)puVar17 - lVar13));
        lVar13 = param_2[1];
        uVar19 = *param_2;
        puVar7[1] = param_2[1];
        *puVar7 = uVar19;
        if (lVar13 != 0) {
          plVar1 = (long *)(lVar13 + 8);
          do {
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *plVar1 = *plVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        puVar17 = puVar7 + 2;
        lVar14 = (long)puVar7 - (plVar10[2] - plVar10[1]);
        _memcpy(lVar14);
        lVar13 = plVar10[1];
        plVar10[1] = lVar14;
        plVar10[2] = (long)puVar17;
        plVar10[3] = lVar9 + lVar12 * 0x10;
        if (lVar13 != 0) {
          __ZdlPv();
        }
      }
      else {
        lVar12 = param_2[1];
        uVar19 = *param_2;
        puVar17[1] = param_2[1];
        *puVar17 = uVar19;
        if (lVar12 != 0) {
          plVar1 = (long *)(lVar12 + 8);
          do {
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *plVar1 = *plVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        puVar17 = puVar17 + 2;
      }
      plVar10[2] = (long)puVar17;
      goto LAB_107292568;
    }
    puVar17 = (undefined8 *)*param_2;
    puVar7 = (undefined8 *)param_2[1];
    lStack_128 = lVar13;
    puStack_78 = puVar17;
    puStack_70 = puVar7;
    if (puVar7 != (undefined8 *)0x0) {
      do {
        func_0x00010729e450();
      } while (extraout_w10 != 0);
    }
    ppuStack_120 = (undefined8 **)0x0;
    ppuStack_118 = (undefined8 **)0x0;
    ppuStack_110 = (undefined8 **)0x0;
    uStack_b0 = 0;
    ppuVar8 = (undefined8 **)0x1;
    ppuStack_b8 = &ppuStack_120;
    FUN_1072988fc();
    ppuStack_a0 = &ppuStack_110;
    ppuStack_110 = ppuVar8 + lVar12 * 2;
    pppuStack_98 = &ppuStack_a8;
    pppuStack_90 = &ppuStack_80;
    *ppuVar8 = puVar17;
    ppuVar8[1] = puVar7;
    ppuStack_120 = ppuVar8;
    ppuStack_118 = ppuVar8;
    ppuStack_a8 = ppuVar8;
    if (puVar7 != (undefined8 *)0x0) {
      do {
        func_0x00010729e450();
      } while (extraout_w10_00 != 0);
    }
    uStack_88 = 1;
    ppuStack_80 = ppuVar8 + 2;
    func_0x00010729892c(&ppuStack_a0);
    uStack_b0 = 1;
    ppuStack_118 = ppuVar8 + 2;
    func_0x00010729896c(&ppuStack_b8);
    puVar16 = auStack_e0;
    FUN_107298994(auStack_108);
    ppuVar11 = *(undefined8 ***)(param_1 + 0x60);
    ppuVar8 = *(undefined8 ***)(param_1 + 0x58);
    uVar6 = ppuVar8 == ppuVar11;
    if (ppuVar8 < ppuVar11) {
      FUN_1072987d0(ppuVar8,&lStack_128);
      ppuVar8 = ppuVar8 + 9;
    }
    else {
      func_0x00010729ee28(0xe38e);
      lVar12 = *plVar1;
      if (extraout_x8_00 < ((long)ppuVar8 - lVar12) / 0x48 + 1U) goto LAB_1072925a4;
      func_0x00010729f15c();
      lVar13 = extraout_x10;
      if (0x1c71c71c71c71c6 < extraout_x9) {
        lVar13 = extraout_x8_01;
      }
      if (lVar13 == 0) {
        lVar13 = 0;
        puVar16 = (undefined1 *)0x0;
      }
      else {
        FUN_107298874();
      }
      lVar14 = lVar13 + ((long)ppuVar8 - lVar12);
      FUN_1072987d0(lVar14,&lStack_128);
      lVar9 = *plVar1;
      lVar2 = *(long *)(param_1 + 0x58);
      pppuVar18 = (undefined8 ***)(lVar14 + ((lVar2 - lVar9) / -0x48) * 0x48);
      pppuStack_98 = &ppuStack_80;
      pppuStack_90 = &ppuStack_b8;
      ppuStack_b8 = pppuVar18;
      ppuStack_a0 = (undefined8 ***)(param_1 + 0x60);
      ppuStack_80 = pppuVar18;
      for (lVar12 = lVar9; lVar12 != lVar2; lVar12 = lVar12 + 0x48) {
        FUN_1072987d0(ppuStack_b8,lVar12);
        ppuStack_b8 = ppuStack_b8 + 9;
      }
      uStack_88 = 1;
      for (; uVar6 = lVar9 == lVar2, !(bool)uVar6; lVar9 = lVar9 + 0x48) {
        func_0x00010729829c(lVar9);
      }
      ppuVar8 = (undefined8 **)(lVar14 + 0x48);
      func_0x0001072988b0(&ppuStack_a0);
      lVar12 = *plVar1;
      *plVar1 = (long)pppuVar18;
      *(undefined8 ***)(param_1 + 0x58) = ppuVar8;
      *(long *)(param_1 + 0x60) = lVar13 + (long)puVar16 * 0x48;
      if (lVar12 != 0) {
        __ZdlPv();
      }
    }
    *(undefined8 ***)(param_1 + 0x58) = ppuVar8;
    func_0x00010729829c(&lStack_128);
    FUN_107293168(&puStack_78);
LAB_107292568:
    FUN_1072981bc(auStack_e0);
    func_0x00010729e1e0(uStack_68);
    if ((bool)uVar6) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    if (*param_3 == param_3[1]) {
      FUN_107298370(param_1 + 0x68);
      goto LAB_10729223c;
    }
    if ((int)plVar10[8] == 0) {
      func_0x00010729833c(param_1 + 0x68);
      goto LAB_10729223c;
    }
  }
  func_0x00010563ab98();
LAB_1072925a4:
  FUN_107298868();
LAB_1072925b0:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1072925b4);
  (*pcVar4)();
code_r0x0001072922a4:
  plVar10 = plVar10 + 9;
  goto LAB_107292290;
}



/* Entry: 10729261c; end: 1072926d3;  */

void FUN_10729261c(long param_1)

{
  long lVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = param_1;
  func_0x00010729ea98();
  func_0x00010729f034(lVar1 + 8);
  func_0x00010729f0d4();
  func_0x00010729ea98();
  func_0x00010729f034(param_1 + 0x50);
  func_0x00010729f0d4();
  func_0x00010729ea98();
  func_0x00010729f034(param_1 + 0x98);
  func_0x00010729f0d4();
  func_0x00010729ea80();
  FUN_107291f6c(uStack_70,uStack_68,param_1 + 8);
  func_0x00010729ea28();
  func_0x00010729ea80();
  FUN_107291f6c(uStack_70,uStack_68,param_1 + 0x50);
  func_0x00010729ea28();
  func_0x00010729ea80();
  FUN_107291f6c(uStack_70,uStack_68,param_1 + 0x98);
  func_0x00010729ea28();
  return;
}



/* Entry: 1072926d4; end: 107292773;  */

void FUN_1072926d4(long *param_1)

{
  uint uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined8 *puStack_28;
  
  func_0x00010729e618();
  if (*param_1 != 0) {
    func_0x000107298268();
    func_0x00010729ecc4();
    *unaff_x19 = 0;
    unaff_x19[1] = 0;
    unaff_x19[2] = 0;
  }
  uVar2 = *unaff_x20;
  unaff_x19[1] = unaff_x20[1];
  *unaff_x19 = uVar2;
  unaff_x19[2] = unaff_x20[2];
  *unaff_x20 = 0;
  unaff_x20[1] = 0;
  unaff_x20[2] = 0;
  uVar1 = *(uint *)(unaff_x20 + 8);
  if (*(int *)(unaff_x19 + 8) != -1 || uVar1 != 0xffffffff) {
    puStack_28 = unaff_x19 + 3;
    if (uVar1 == 0xffffffff) {
      FUN_10729816c(puStack_28);
    }
    else {
      (*(code *)(&PTR_DAT_1109984b8)[uVar1])(&puStack_28,puStack_28,unaff_x20 + 3);
    }
  }
  return;
}



/* Entry: 107292774; end: 1072927cf;  */

void FUN_107292774(long param_1,undefined8 param_2,uint param_3)

{
  func_0x00010740ed34(*(undefined8 *)(param_1 + 0xf0));
  if (param_3 < 4) {
    func_0x00010729eb34();
    FUN_1072927d0();
  }
  return;
}



/* Entry: 1072927d0; end: 107292e3b;  */

/* WARNING: Type propagation algorithm not settling */

undefined *****
FUN_1072927d0(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined *****pppppuVar5;
  undefined ****ppppuVar6;
  undefined *****pppppuVar7;
  undefined *****pppppuVar8;
  undefined *****pppppuVar9;
  undefined **ppuVar10;
  undefined ******ppppppuVar11;
  undefined *****pppppuVar12;
  undefined8 extraout_x8;
  undefined8 uVar13;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 extraout_x8_02;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined ****ppppuVar14;
  undefined4 uVar15;
  undefined ***pppuVar16;
  undefined4 uVar17;
  undefined8 in_stack_00000050;
  undefined **ppuStack_6d8;
  undefined8 uStack_6d0;
  code *pcStack_6c8;
  undefined ***pppuStack_6c0;
  undefined ****ppppuStack_6b8;
  undefined *****pppppuStack_6b0;
  undefined *****pppppuStack_6a8;
  undefined8 ****ppppuStack_6a0;
  code *pcStack_698;
  undefined8 *puStack_690;
  undefined **ppuStack_688;
  undefined ****ppppuStack_680;
  undefined *****pppppuStack_678;
  undefined *****pppppuStack_670;
  undefined *****pppppuStack_668;
  undefined *****pppppuStack_660;
  undefined *****pppppuStack_658;
  undefined ****ppppuStack_650;
  undefined *****pppppuStack_648;
  undefined8 uStack_640;
  undefined ****appppuStack_638 [2];
  undefined1 auStack_628 [16];
  undefined8 uStack_618;
  undefined *****pppppuStack_610;
  undefined *****pppppuStack_608;
  undefined *****pppppuStack_600;
  undefined *****pppppuStack_5f8;
  undefined ***pppuStack_5f0;
  code *pcStack_5e8;
  undefined **appuStack_5d8 [3];
  undefined ***pppuStack_5c0;
  undefined8 uStack_5b8;
  undefined *****pppppuStack_5b0;
  undefined *****pppppuStack_5a8;
  undefined **ppuStack_5a0;
  code *pcStack_598;
  undefined4 uStack_590;
  undefined4 uStack_58c;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  long lStack_568;
  undefined1 auStack_560 [72];
  undefined *****pppppuStack_518;
  undefined ****ppppuStack_510;
  undefined ****ppppuStack_508;
  undefined ****ppppuStack_500;
  undefined ****ppppuStack_4f8;
  undefined ****ppppuStack_4f0;
  undefined ****ppppuStack_4e8;
  undefined ****ppppuStack_4e0;
  undefined ****ppppuStack_4d8;
  undefined ****ppppuStack_4d0;
  undefined ****appppuStack_4c8 [9];
  undefined ****ppppuStack_480;
  undefined1 auStack_470 [16];
  undefined4 uStack_460;
  undefined ****ppppuStack_458;
  undefined1 auStack_450 [16];
  undefined ***pppuStack_440;
  undefined ***pppuStack_438;
  undefined ***pppuStack_430;
  long alStack_420 [2];
  undefined ****appppuStack_410 [3];
  undefined *****pppppuStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined1 auStack_3e0 [32];
  undefined1 auStack_3c0 [104];
  undefined1 uStack_358;
  undefined1 auStack_350 [24];
  undefined1 uStack_338;
  undefined1 auStack_330 [40];
  char cStack_308;
  undefined1 auStack_300 [72];
  long lStack_2b8;
  undefined *****pppppuStack_2b0;
  undefined4 uStack_2a8;
  undefined1 auStack_2a0 [24];
  undefined8 *puStack_288;
  undefined *****pppppuStack_280;
  undefined *****pppppuStack_278;
  undefined1 *puStack_270;
  undefined *****pppppuStack_268;
  undefined1 uStack_1f8;
  undefined1 auStack_1f0 [16];
  undefined4 uStack_1e0;
  undefined1 uStack_1d8;
  undefined ****appppuStack_1a0 [21];
  undefined1 uStack_f8;
  undefined ****appppuStack_f0 [6];
  undefined ****ppppuStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined ***pppuStack_a0;
  undefined ***pppuStack_98;
  undefined ***pppuStack_90;
  undefined1 auStack_88 [32];
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_10;
  
  func_0x00010729f208();
  func_0x00010729f128();
  func_0x00010729e310();
  uStack_10 = extraout_x8;
  _bzero(&pppppuStack_280,0xe0);
  uStack_1e0 = 1;
  uStack_1d8 = 1;
  uStack_460 = 0;
  FUN_1072991b0(auStack_1f0,auStack_470);
  uStack_1f8 = 1;
  FUN_1072994b4(appppuStack_1a0,&pppppuStack_280);
  FUN_107299204(auStack_470);
  pppppuVar9 = (undefined *****)&pppppuStack_280;
  FUN_1072997a8();
  if (*(char *)(param_1 + 0x100) == '\x01') {
    uStack_b0 = 0;
    ppppuStack_c0 = (undefined ****)0x0;
    uStack_b8 = 0;
    func_0x0001077c3898(&puStack_68,*(undefined8 *)(**(long **)(param_1 + 0xf0) + 0x10f8));
    for (; puStack_68 != puStack_60; puStack_68 = puStack_68 + 1) {
      func_0x000107781c60(&pppppuStack_280,*puStack_68);
      FUN_1072999ec(&ppppuStack_c0,&pppppuStack_280);
      func_0x000104c2f714(&pppppuStack_280);
    }
    func_0x000107283254(&puStack_68);
    func_0x0001072997e0(appppuStack_1a0,&ppppuStack_c0);
    pppppuVar9 = &ppppuStack_c0;
    FUN_10726e078();
  }
  else if ((*(int *)(unaff_x20 + 0x40) == 0) && (*(long *)(unaff_x20 + 0x30) != 0)) {
    pppppuVar9 = appppuStack_f0;
    func_0x000107299c44(pppppuVar9,unaff_x20 + 0x18);
  }
  uStack_f8 = 0;
  __ZNSt3__16chrono12steady_clock3nowEv();
  ppppuVar14 = *(undefined *****)(param_1 + 0xe0);
  uStack_3e8 = param_2[1];
  uStack_3f0 = *param_2;
  FUN_1072994b4(auStack_3e0,appppuStack_1a0);
  FUN_10729a184(auStack_300);
  puStack_288 = (undefined8 *)0x0;
  puVar4 = (undefined8 *)0x158;
  lStack_2b8 = param_1;
  pppppuStack_2b0 = pppppuVar9;
  uStack_2a8 = param_5;
  __Znwm();
  *puVar4 = &PTR_FUN_110998880;
  puVar4[2] = uStack_3e8;
  puVar4[1] = uStack_3f0;
  FUN_107270780(puVar4 + 3,auStack_3e0);
  FUN_107284c44(puVar4 + 7,auStack_3c0);
  *(undefined1 *)(puVar4 + 0x14) = uStack_358;
  FUN_10729ba98(puVar4 + 0x15,auStack_350);
  *(undefined1 *)(puVar4 + 0x19) = 0;
  *(undefined1 *)(puVar4 + 0x18) = uStack_338;
  *(undefined1 *)(puVar4 + 0x1e) = 0;
  uVar3 = cStack_308 == '\x01';
  if ((bool)uVar3) {
    FUN_10729881c(puVar4 + 0x19,auStack_330);
    *(undefined1 *)(puVar4 + 0x1e) = 1;
  }
  FUN_10729a184(puVar4 + 0x1f,auStack_300);
  puVar4[0x29] = pppppuStack_2b0;
  puVar4[0x28] = lStack_2b8;
  *(undefined4 *)(puVar4 + 0x2a) = uStack_2a8;
  uStack_590 = 0;
  uStack_580 = param_2[1];
  uStack_588 = *param_2;
  uStack_570 = unaff_x21[1];
  uStack_578 = *unaff_x21;
  uStack_58c = param_5;
  lStack_568 = param_1;
  puStack_288 = puVar4;
  FUN_10729a184(auStack_560);
  ppppuStack_510 = *(undefined *****)(param_1 + 0x118);
  ppppuStack_508 = *(undefined *****)(param_1 + 0x120);
  if (ppppuStack_508 != (undefined ****)0x0) {
    ppppuVar6 = ppppuStack_508 + 2;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppppuVar6,0x10);
      if (bVar2) {
        *ppppuVar6 = (undefined ***)((long)*ppppuVar6 + 1);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  ppppuStack_500 = *(undefined *****)(param_1 + 0x128);
  puStack_68 = (undefined8 *)0x0;
  puStack_60 = (undefined8 *)0x0;
  pppppuStack_278 = (undefined *****)0x0;
  pppppuStack_280 = (undefined *****)0x0;
  pppppuStack_518 = pppppuVar9;
  func_0x00010725b1d4(&pppppuStack_280);
  func_0x00010725b1d4(&puStack_68);
  FUN_10729a42c(&ppppuStack_4f8,&uStack_590);
  pppppuStack_3f8 = (undefined *****)0x0;
  pppppuVar5 = (undefined *****)0xa0;
  __Znwm();
  pppppuVar12 = pppppuVar5 + 1;
  pppppuVar5[2] = ppppuStack_508;
  *pppppuVar12 = ppppuStack_510;
  *pppppuVar5 = (undefined ****)&PTR_SUB_1109989c8;
  ppppuStack_510 = (undefined ****)0x0;
  ppppuStack_508 = (undefined ****)0x0;
  pppppuVar5[3] = ppppuStack_500;
  pppppuVar5[5] = ppppuStack_4f0;
  pppppuVar5[4] = ppppuStack_4f8;
  pppppuVar5[7] = ppppuStack_4e0;
  pppppuVar5[6] = ppppuStack_4e8;
  pppppuVar5[9] = ppppuStack_4d0;
  pppppuVar5[8] = ppppuStack_4d8;
  pppppuVar9 = appppuStack_4c8;
  FUN_10729a184(pppppuVar5 + 10);
  uVar17 = SUB84(ppppuStack_4e8,0);
  uVar15 = SUB84(ppppuStack_4d8,0);
  pppppuVar5[0x13] = ppppuStack_480;
  pppppuStack_3f8 = pppppuVar5;
  if (((ulong)ppppuVar14[1] & 1) == 0) {
    ppppuVar6 = ppppuVar14;
    (*(code *)(*ppppuVar14)[2])();
    uVar17 = SUB84(ppppuStack_4e8,0);
    if ((int)ppppuVar6 == 0) {
      pppuStack_438 = ppppuVar14[4];
      pppuStack_440 = ppppuVar14[3];
      ppppuVar6 = ppppuStack_4e8;
      if (ppppuVar14[4] != (undefined ***)0x0) {
        do {
          func_0x00010729e450();
        } while (extraout_w10 != 0);
      }
      pppuStack_430 = ppppuVar14[5];
      (*(code *)(*ppppuVar14)[4])(&ppppuStack_458,ppppuVar14);
      pppppuVar5 = &ppppuStack_c0;
      func_0x00010729a918(&ppppuStack_c0,auStack_2a0);
      uVar17 = SUB84(ppppuVar6,0);
      pppuStack_98 = pppuStack_438;
      pppuStack_a0 = pppuStack_440;
      pppuVar16 = pppuStack_440;
      if (pppuStack_438 != (undefined ***)0x0) {
        do {
          func_0x00010729e450();
          uVar17 = SUB84(ppppuVar6,0);
        } while (extraout_w10_00 != 0);
      }
      uVar15 = SUB84(pppuVar16,0);
      pppuStack_90 = pppuStack_430;
      pppppuVar9 = appppuStack_410;
      func_0x00010729a95c(auStack_88);
      pppppuVar12 = &ppppuStack_458;
      FUN_10724bb70(alStack_420,auStack_450);
      if (alStack_420[0] != 0) {
        FUN_10729ac7c(&puStack_68,&ppppuStack_c0);
        pppppuVar5 = (undefined *****)0x78;
        __Znwm();
        FUN_10729ac7c(&pppppuStack_280,&puStack_68);
        *pppppuVar5 = (undefined ****)&PTR_FUN_110998740;
        pppppuVar5[1] = ppppuStack_458;
        uVar15 = 0x38;
        pppppuVar5[3] = (undefined ****)0x1;
        pppppuVar5[2] = (undefined ****)0x38;
        FUN_10729ac7c(pppppuVar5 + 4,&pppppuStack_280);
        func_0x00010729a9a0(&pppppuStack_280);
        pppppuStack_280 = pppppuVar5;
        func_0x00010729a9a0(&puStack_68);
        pppppuVar9 = (undefined *****)&pppppuStack_280;
        func_0x0001073ae140(alStack_420[0]);
        pppppuVar7 = pppppuStack_280;
        pppppuStack_280 = (undefined *****)0x0;
        ppppuVar14 = ppppuStack_458;
        if (pppppuVar7 != (undefined *****)0x0) {
          func_0x00010729e708();
        }
      }
      func_0x00010724bcd8(alStack_420);
      func_0x00010729a9a0(&ppppuStack_c0);
      FUN_10724ae28(auStack_450);
      func_0x00010725b1d4(&pppuStack_440);
    }
    else {
      ppppuVar6 = ppppuVar14;
      (*(code *)(*ppppuVar14)[3])();
      if (ppppuVar6 != (undefined ****)0x0) {
        pppppuStack_278 = appppuStack_410;
        pppppuStack_280 = (undefined *****)&PTR_FUN_1109986c0;
        puStack_270 = auStack_2a0;
        pppppuStack_268 = (undefined *****)&pppppuStack_280;
        pppppuVar9 = (undefined *****)&pppppuStack_280;
        (*(code *)(*ppppuVar6)[7])();
        func_0x000107283e00(&pppppuStack_280);
      }
    }
  }
  FUN_107293030(appppuStack_410);
  func_0x000107293064(&ppppuStack_510);
  func_0x000107298148(auStack_560);
  func_0x00010729308c(auStack_2a0);
  func_0x0001072930c0(&uStack_3f0);
  pppppuVar7 = appppuStack_1a0;
  FUN_1072997a8();
  func_0x00010729e1e0(uStack_10);
  if ((bool)uVar3) {
    return pppppuVar7;
  }
  ___stack_chk_fail();
  pppppuVar8 = pppppuStack_280;
  pppppuStack_280 = (undefined *****)0x0;
  if (pppppuVar8 != (undefined *****)0x0) {
    func_0x00010729e708();
  }
  func_0x00010724bcd8(alStack_420);
  func_0x00010729a9a0(&ppppuStack_c0);
  FUN_10724ae28(auStack_450);
  func_0x00010725b1d4(&pppuStack_440);
  FUN_107293030(appppuStack_410);
  func_0x000107293064(&ppppuStack_510);
  func_0x000107298148(auStack_560);
  func_0x00010729308c(auStack_2a0);
  func_0x0001072930c0(&uStack_3f0);
  ppppuVar6 = (undefined ****)appppuStack_1a0;
  FUN_1072997a8();
  func_0x00010729e514();
  pcStack_598 = FUN_107292e3c;
  pppppuStack_5b0 = pppppuVar5;
  pppppuStack_5a8 = pppppuVar7;
  ppuStack_5a0 = (undefined **)&stack0x00000050;
  func_0x00010729e2fc();
  pppppuVar8 = (undefined *****)ppppuVar6[0x1c];
  pppuStack_5c0 = appuStack_5d8;
  appuStack_5d8[0] = &PTR_FUN_110998530;
  func_0x00010729f0a4();
  func_0x00010729e91c();
  func_0x00010729e1e0(uStack_5b8);
  if ((bool)uVar3) {
    return pppppuVar8;
  }
  ___stack_chk_fail();
  func_0x00010729e6ec();
  func_0x000107283e00();
  func_0x00010729e514();
  pcStack_5e8 = FUN_107292e94;
  pppppuStack_600 = pppppuVar5;
  pppppuStack_5f8 = pppppuVar7;
  pppuStack_5f0 = &ppuStack_5a0;
  func_0x00010729e2fc();
  if (((ulong)pppppuVar8[1] & 1) == 0) {
    func_0x00010729e5f0();
    (*(code *)(*pppppuVar8)[2])();
    if ((int)pppppuVar8 == 0) {
      (*(code *)(*pppppuVar5)[4])(&uStack_640,pppppuVar5);
      func_0x00010729916c(auStack_628,pppppuVar7);
      FUN_107298d1c(&uStack_640,0x38,1,auStack_628);
      func_0x00010729ed70();
      pppppuVar8 = appppuStack_638;
      FUN_10724ae28();
    }
    else {
      pppppuVar8 = pppppuVar5;
      (*(code *)(*pppppuVar5)[3])();
      if (pppppuVar8 != (undefined *****)0x0) {
        func_0x00010729e1e0(pppppuStack_608);
        if ((bool)uVar3) {
          func_0x00010729ebf0();
          pppppuVar7 = pppppuStack_5f8;
          pppppuVar5 = pppppuStack_600;
          pppppuVar8 = (undefined *****)pppppuVar8[3];
          if (pppppuVar8 != (undefined *****)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010729f030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(*pppppuVar8)[6])();
            return pppppuVar8;
          }
          func_0x000104bfeb48();
          pppppuStack_610 = pppppuVar5;
          pppppuStack_608 = pppppuVar7;
          pppppuStack_5f8 = (undefined *****)FUN_107298de4;
          pppppuStack_600 = (undefined *****)&pppuStack_5f0;
          func_0x00010729e2fc();
          pppppuStack_648 = pppppuVar9;
          uStack_640 = param_3;
          func_0x00010729916c(appppuStack_638,param_4);
          ppppppuVar11 = &pppppuStack_648;
          ppppuVar6 = (undefined ****)appppuStack_638;
          pppppuVar9 = pppppuVar8;
          FUN_107298e5c(&ppppuStack_650);
          *extraout_x8_00 = ppppuStack_650;
          func_0x00010729ed70();
          func_0x00010729e1e0(uStack_618);
          if (!(bool)uVar3) {
            ___stack_chk_fail();
            func_0x00010729ed70();
            func_0x00010729e514();
            pppppuStack_658 = (undefined *****)FUN_107298e5c;
            puStack_690 = param_2;
            ppuStack_688 = (undefined **)&uStack_590;
            ppppuStack_680 = ppppuVar14;
            pppppuStack_678 = pppppuVar12;
            pppppuStack_670 = pppppuVar8;
            pppppuStack_668 = pppppuVar9;
            pppppuStack_660 = (undefined *****)&pppppuStack_600;
            func_0x00010729e310();
            ppuVar10 = (undefined **)0x40;
            pcStack_698 = (code *)extraout_x8_02;
            __Znwm();
            pppppuVar5 = *ppppppuVar11;
            pppppuVar12 = ppppppuVar11[1];
            pppppuVar9 = &ppppuStack_6b8;
            func_0x00010729916c();
            ppppuVar14 = (undefined ****)&ppppuStack_6b8;
            func_0x00010729ec28();
            FUN_107298f04();
            *extraout_x8_01 = ppuVar10;
            func_0x00010729e91c();
            func_0x00010729e1e0(pcStack_698);
            if (!(bool)uVar3) {
              ___stack_chk_fail();
              func_0x00010729e91c();
              func_0x00010729e93c();
              func_0x00010729e51c();
              pcStack_6c8 = FUN_107298f04;
              ppuStack_6d8 = ppuVar10;
              uStack_6d0 = &pppppuStack_660;
              *pppppuVar9 = (undefined ****)&PTR_FUN_110998c18;
              pppppuVar9[1] = ppppuVar6;
              pppppuVar9[2] = (undefined ****)pppppuVar5;
              pppppuVar9[3] = (undefined ****)pppppuVar12;
              func_0x00010729916c(pppppuVar9 + 4,ppppuVar14);
              return pppppuVar9;
            }
            return pppppuVar9;
          }
          return pppppuVar9;
        }
        goto LAB_107292f50;
      }
    }
  }
  func_0x00010729e1e0(pppppuStack_608);
  if ((bool)uVar3) {
    return pppppuVar8;
  }
LAB_107292f50:
  uVar3 = 0;
  ___stack_chk_fail();
  func_0x00010729ed70();
  ppppuVar14 = (undefined ****)appppuStack_638;
  FUN_10724ae28();
  func_0x00010729e514();
  pppppuStack_648 = (undefined *****)FUN_107292f7c;
  pppppuStack_660 = pppppuVar5;
  pppppuStack_658 = pppppuVar8;
  ppppuStack_650 = &pppuStack_5f0;
  func_0x00010729e2fc();
  pppppuVar9 = (undefined *****)ppppuVar14[0x1c];
  pppppuStack_670 = (undefined *****)&ppuStack_688;
  ppuStack_688 = &PTR_FUN_1109985c0;
  func_0x00010729f0a4();
  func_0x00010729e91c();
  func_0x00010729e1e0(pppppuStack_668);
  if ((bool)uVar3) {
    return pppppuVar9;
  }
  ___stack_chk_fail();
  func_0x00010729e6ec();
  func_0x000107283e00();
  func_0x00010729e514();
  pcStack_698 = FUN_107292fd4;
  pppppuStack_6b0 = pppppuVar5;
  pppppuStack_6a8 = pppppuVar8;
  ppppuStack_6a0 = &ppppuStack_650;
  func_0x00010729e2fc();
  pppppuVar9 = (undefined *****)pppppuVar9[0x1c];
  ppuStack_6d8 = &PTR_DAT_110998640;
  uStack_6d0 = (undefined ******)CONCAT44(uVar17,uVar15);
  pppuStack_6c0 = &ppuStack_6d8;
  func_0x00010729f0a4();
  func_0x00010729e91c();
  func_0x00010729e1e0(ppppuStack_6b8);
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    func_0x00010729e6ec();
    func_0x000107283e00();
    func_0x00010729e514();
    func_0x00010729ee98();
    if ((bool)uVar3) {
      uVar13 = 0x20;
    }
    else {
      if (pppppuVar9 == (undefined *****)0x0) {
        return pppppuVar8;
      }
      uVar13 = 0x28;
    }
    func_0x00010729eac0(uVar13);
    return pppppuVar8;
  }
  return pppppuVar9;
}



/* Entry: 107292e3c; end: 107292e93;  */

long * FUN_107292e3c(undefined4 param_1,undefined4 param_2,long param_3,code *param_4,
                    undefined8 param_5,undefined8 param_6)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  long *plVar2;
  undefined **ppuVar3;
  code **ppcVar4;
  long *plVar5;
  code *pcVar6;
  code *pcVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 extraout_x8_01;
  long *unaff_x20;
  undefined **ppuStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined ***pppuStack_130;
  long lStack_128;
  undefined8 uStack_d8;
  undefined1 **ppuStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  long alStack_a8 [2];
  undefined1 auStack_98 [16];
  undefined8 uStack_88;
  undefined8 uStack_78;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined **appuStack_48 [3];
  undefined ***pppuStack_30;
  undefined8 uStack_28;
  
  func_0x00010729e2fc();
  plVar2 = *(long **)(param_3 + 0xe0);
  pppuStack_30 = appuStack_48;
  appuStack_48[0] = &PTR_FUN_110998530;
  func_0x00010729f0a4();
  func_0x00010729e91c();
  func_0x00010729e1e0(uStack_28);
  if ((bool)in_ZR) {
    return plVar2;
  }
  ___stack_chk_fail();
  func_0x00010729e6ec();
  func_0x000107283e00();
  func_0x00010729e514();
  pcStack_58 = FUN_107292e94;
  puStack_60 = &stack0xfffffffffffffff0;
  func_0x00010729e2fc();
  if ((*(byte *)(plVar2 + 1) & 1) == 0) {
    func_0x00010729e5f0();
    (**(code **)(*plVar2 + 0x10))();
    if ((int)plVar2 == 0) {
      (**(code **)(*unaff_x20 + 0x20))(&uStack_b0);
      func_0x00010729916c(auStack_98);
      FUN_107298d1c(&uStack_b0,0x38,1,auStack_98);
      func_0x00010729ed70();
      plVar2 = alStack_a8;
      FUN_10724ae28();
    }
    else {
      (**(code **)(*unaff_x20 + 0x18))();
      plVar2 = unaff_x20;
      if (unaff_x20 != (long *)0x0) {
        func_0x00010729e1e0(uStack_78);
        if ((bool)in_ZR) {
          func_0x00010729ebf0();
          plVar2 = (long *)unaff_x20[3];
          if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010729f030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar2 + 0x30))();
            return plVar2;
          }
          func_0x000104bfeb48();
          func_0x00010729e2fc();
          pcStack_b8 = param_4;
          uStack_b0 = param_5;
          func_0x00010729916c(alStack_a8,param_6);
          ppcVar4 = &pcStack_b8;
          plVar5 = alStack_a8;
          FUN_107298e5c(&ppuStack_c0);
          *extraout_x8 = ppuStack_c0;
          func_0x00010729ed70();
          func_0x00010729e1e0(uStack_88);
          if (!(bool)in_ZR) {
            ___stack_chk_fail();
            func_0x00010729ed70();
            func_0x00010729e514();
            func_0x00010729e310();
            ppuVar3 = (undefined **)0x40;
            __Znwm();
            pcVar6 = *ppcVar4;
            pcVar7 = ppcVar4[1];
            plVar2 = &lStack_128;
            func_0x00010729916c();
            plVar8 = &lStack_128;
            func_0x00010729ec28();
            FUN_107298f04();
            *extraout_x8_00 = ppuVar3;
            func_0x00010729e91c();
            func_0x00010729e1e0(extraout_x8_01);
            if (!(bool)in_ZR) {
              ___stack_chk_fail();
              func_0x00010729e91c();
              func_0x00010729e93c();
              func_0x00010729e51c();
              pcStack_138 = FUN_107298f04;
              ppuStack_148 = ppuVar3;
              uStack_140 = &stack0xffffffffffffff30;
              *plVar2 = (long)&PTR_FUN_110998c18;
              plVar2[1] = (long)plVar5;
              plVar2[2] = (long)pcVar6;
              plVar2[3] = (long)pcVar7;
              func_0x00010729916c(plVar2 + 4,plVar8);
              return plVar2;
            }
            return plVar2;
          }
          return plVar2;
        }
        goto LAB_107292f50;
      }
    }
  }
  unaff_x20 = plVar2;
  func_0x00010729e1e0(uStack_78);
  if ((bool)in_ZR) {
    return unaff_x20;
  }
LAB_107292f50:
  uVar1 = 0;
  ___stack_chk_fail();
  func_0x00010729ed70();
  plVar2 = alStack_a8;
  FUN_10724ae28();
  func_0x00010729e514();
  pcStack_b8 = FUN_107292f7c;
  ppuStack_c0 = &puStack_60;
  func_0x00010729e2fc();
  plVar2 = (long *)plVar2[0x1c];
  func_0x00010729f0a4();
  func_0x00010729e91c();
  func_0x00010729e1e0(uStack_d8);
  if ((bool)uVar1) {
    return plVar2;
  }
  ___stack_chk_fail();
  func_0x00010729e6ec();
  func_0x000107283e00();
  func_0x00010729e514();
  func_0x00010729e2fc();
  plVar2 = (long *)plVar2[0x1c];
  ppuStack_148 = &PTR_DAT_110998640;
  uStack_140 = (undefined1 *)CONCAT44(param_2,param_1);
  pppuStack_130 = &ppuStack_148;
  func_0x00010729f0a4();
  func_0x00010729e91c();
  func_0x00010729e1e0(lStack_128);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x00010729e6ec();
    func_0x000107283e00();
    func_0x00010729e514();
    func_0x00010729ee98();
    if ((bool)uVar1) {
      uVar9 = 0x20;
    }
    else {
      if (plVar2 == (long *)0x0) {
        return unaff_x20;
      }
      uVar9 = 0x28;
    }
    func_0x00010729eac0(uVar9);
    return unaff_x20;
  }
  return plVar2;
}



/* Entry: 107292e94; end: 107292f7b;  */

long * FUN_107292e94(undefined4 param_1,undefined4 param_2,long *param_3,code *param_4,
                    undefined8 param_5,undefined8 param_6)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  long *plVar2;
  undefined **ppuVar3;
  code **ppcVar4;
  long *plVar5;
  code *pcVar6;
  code *pcVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 extraout_x8_01;
  long *unaff_x20;
  undefined **ppuStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined ***pppuStack_e0;
  long lStack_d8;
  undefined8 uStack_88;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  long alStack_58 [2];
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  undefined8 uStack_28;
  
  func_0x00010729e2fc();
  if ((*(byte *)(param_3 + 1) & 1) == 0) {
    func_0x00010729e5f0();
    (**(code **)(*param_3 + 0x10))();
    if ((int)param_3 == 0) {
      (**(code **)(*unaff_x20 + 0x20))(&uStack_60);
      func_0x00010729916c(auStack_48);
      FUN_107298d1c(&uStack_60,0x38,1,auStack_48);
      func_0x00010729ed70();
      param_3 = alStack_58;
      FUN_10724ae28();
    }
    else {
      (**(code **)(*unaff_x20 + 0x18))();
      param_3 = unaff_x20;
      if (unaff_x20 != (long *)0x0) {
        func_0x00010729e1e0(uStack_28);
        if ((bool)in_ZR) {
          func_0x00010729ebf0();
          plVar2 = (long *)unaff_x20[3];
          if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010729f030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar2 + 0x30))();
            return plVar2;
          }
          func_0x000104bfeb48();
          func_0x00010729e2fc();
          pcStack_68 = param_4;
          uStack_60 = param_5;
          func_0x00010729916c(alStack_58,param_6);
          ppcVar4 = &pcStack_68;
          plVar5 = alStack_58;
          FUN_107298e5c(&puStack_70);
          *extraout_x8 = puStack_70;
          func_0x00010729ed70();
          func_0x00010729e1e0(uStack_38);
          if (!(bool)in_ZR) {
            ___stack_chk_fail();
            func_0x00010729ed70();
            func_0x00010729e514();
            func_0x00010729e310();
            ppuVar3 = (undefined **)0x40;
            __Znwm();
            pcVar6 = *ppcVar4;
            pcVar7 = ppcVar4[1];
            plVar2 = &lStack_d8;
            func_0x00010729916c();
            plVar8 = &lStack_d8;
            func_0x00010729ec28();
            FUN_107298f04();
            *extraout_x8_00 = ppuVar3;
            func_0x00010729e91c();
            func_0x00010729e1e0(extraout_x8_01);
            if (!(bool)in_ZR) {
              ___stack_chk_fail();
              func_0x00010729e91c();
              func_0x00010729e93c();
              func_0x00010729e51c();
              pcStack_e8 = FUN_107298f04;
              ppuStack_f8 = ppuVar3;
              uStack_f0 = &stack0xffffffffffffff80;
              *plVar2 = (long)&PTR_FUN_110998c18;
              plVar2[1] = (long)plVar5;
              plVar2[2] = (long)pcVar6;
              plVar2[3] = (long)pcVar7;
              func_0x00010729916c(plVar2 + 4,plVar8);
              return plVar2;
            }
            return plVar2;
          }
          return plVar2;
        }
        goto LAB_107292f50;
      }
    }
  }
  unaff_x20 = param_3;
  func_0x00010729e1e0(uStack_28);
  if ((bool)in_ZR) {
    return unaff_x20;
  }
LAB_107292f50:
  uVar1 = 0;
  ___stack_chk_fail();
  func_0x00010729ed70();
  plVar2 = alStack_58;
  FUN_10724ae28();
  func_0x00010729e514();
  pcStack_68 = FUN_107292f7c;
  puStack_70 = &stack0xfffffffffffffff0;
  func_0x00010729e2fc();
  plVar2 = (long *)plVar2[0x1c];
  func_0x00010729f0a4();
  func_0x00010729e91c();
  func_0x00010729e1e0(uStack_88);
  if ((bool)uVar1) {
    return plVar2;
  }
  ___stack_chk_fail();
  func_0x00010729e6ec();
  func_0x000107283e00();
  func_0x00010729e514();
  func_0x00010729e2fc();
  plVar2 = (long *)plVar2[0x1c];
  ppuStack_f8 = &PTR_DAT_110998640;
  uStack_f0 = (undefined1 *)CONCAT44(param_2,param_1);
  pppuStack_e0 = &ppuStack_f8;
  func_0x00010729f0a4();
  func_0x00010729e91c();
  func_0x00010729e1e0(lStack_d8);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x00010729e6ec();
    func_0x000107283e00();
    func_0x00010729e514();
    func_0x00010729ee98();
    if ((bool)uVar1) {
      uVar9 = 0x20;
    }
    else {
      if (plVar2 == (long *)0x0) {
        return unaff_x20;
      }
      uVar9 = 0x28;
    }
    func_0x00010729eac0(uVar9);
    return unaff_x20;
  }
  return plVar2;
}



/* Entry: 107292f7c; end: 107292fd3;  */

void FUN_107292f7c(undefined4 param_1,undefined4 param_2,long param_3)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 uVar2;
  undefined **ppuStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined ***pppuStack_80;
  undefined8 uStack_78;
  undefined **appuStack_48 [3];
  undefined ***pppuStack_30;
  undefined8 uStack_28;
  
  func_0x00010729e2fc();
  lVar1 = *(long *)(param_3 + 0xe0);
  pppuStack_30 = appuStack_48;
  appuStack_48[0] = &PTR_FUN_1109985c0;
  func_0x00010729f0a4();
  func_0x00010729e91c();
  func_0x00010729e1e0(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010729e6ec();
  func_0x000107283e00();
  func_0x00010729e514();
  func_0x00010729e2fc();
  lVar1 = *(long *)(lVar1 + 0xe0);
  ppuStack_98 = &PTR_DAT_110998640;
  pppuStack_80 = &ppuStack_98;
  uStack_90 = param_1;
  uStack_8c = param_2;
  func_0x00010729f0a4();
  func_0x00010729e91c();
  func_0x00010729e1e0(uStack_78);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010729e6ec();
    func_0x000107283e00();
    func_0x00010729e514();
    func_0x00010729ee98();
    if ((bool)in_ZR) {
      uVar2 = 0x20;
    }
    else {
      if (lVar1 == 0) {
        return;
      }
      uVar2 = 0x28;
    }
    func_0x00010729eac0(uVar2);
    return;
  }
  return;
}



/* Entry: 107292fd4; end: 10729302f;  */

void FUN_107292fd4(undefined4 param_1,undefined4 param_2,long param_3)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 uVar2;
  undefined **ppuStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined ***pppuStack_30;
  undefined8 uStack_28;
  
  func_0x00010729e2fc();
  lVar1 = *(long *)(param_3 + 0xe0);
  ppuStack_48 = &PTR_DAT_110998640;
  pppuStack_30 = &ppuStack_48;
  uStack_40 = param_1;
  uStack_3c = param_2;
  func_0x00010729f0a4();
  func_0x00010729e91c();
  func_0x00010729e1e0(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010729e6ec();
  func_0x000107283e00();
  func_0x00010729e514();
  func_0x00010729ee98();
  if ((bool)in_ZR) {
    uVar2 = 0x20;
  }
  else {
    if (lVar1 == 0) {
      return;
    }
    uVar2 = 0x28;
  }
  func_0x00010729eac0(uVar2);
  return;
}



/* Entry: 107293030; end: 10729314f;  */

void FUN_107293030(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x00010729ee98();
  if ((bool)in_ZR) {
    uVar1 = 0x20;
  }
  else {
    if (param_1 == 0) {
      return;
    }
    uVar1 = 0x28;
  }
  func_0x00010729eac0(uVar1);
  return;
}



/* Entry: 107293150; end: 107293153;  */

undefined8 * FUN_107293150(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109981f0;
  FUN_10729a4bc(param_1 + 0x23);
  func_0x00010726eedc(param_1 + 0x21);
  func_0x00010729a468(param_1 + 0x1f);
  func_0x00010725b6e0(param_1 + 0x1c);
  func_0x000107298148(param_1 + 0x13);
  func_0x000107298148(param_1 + 10);
  func_0x000107298148(param_1 + 1);
  return param_1;
}



/* Entry: 107293154; end: 107293167;  */

void FUN_107293154(void)

{
  func_0x0001072930ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107293168; end: 10729318b;  */

void FUN_107293168(long param_1)

{
  func_0x00010729ef84();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10729318c; end: 10729319b;  */

void FUN_10729318c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110998258;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10729319c; end: 1072931af;  */

void FUN_10729319c(void)

{
  FUN_10729318c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072931b0; end: 1072931b7;  */

void FUN_1072931b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010729f06c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1072931b8; end: 1072931e3;  */

undefined8 * FUN_1072931b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109982a8;
  func_0x00010725b6e0(param_1 + 1);
  return param_1;
}



/* Entry: 1072931e4; end: 1072931f7;  */

void FUN_1072931e4(void)

{
  FUN_1072931b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072931f8; end: 107293237;  */

void FUN_1072931f8(undefined8 *param_1)

{
  long lVar1;
  int extraout_w10;
  long unaff_x19;
  undefined8 uVar2;
  
  func_0x00010729f0f4();
  *param_1 = &PTR_FUN_1109982a8;
  lVar1 = *(long *)(unaff_x19 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x19 + 8);
  param_1[2] = *(undefined8 *)(unaff_x19 + 0x10);
  param_1[1] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010729e450();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 107293238; end: 10729327f;  */

void FUN_107293238(long param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 unaff_x30;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_1109982a8;
  lVar1 = *(long *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010729e450(unaff_x30);
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 107293280; end: 107293363;  */

void FUN_107293280(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 extraout_x8;
  long lVar2;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined1 auStack_58 [24];
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x00010729e310();
  lVar2 = *(long *)(param_1 + 8);
  uStack_38 = extraout_x8;
  if (lVar2 != 0) {
    FUN_107293398(auStack_88,param_3);
    uStack_68 = param_2[1];
    uStack_70 = *param_2;
    uStack_60 = *(undefined4 *)(param_2 + 2);
    lStack_40 = 0;
    lVar1 = 0x38;
    __Znwm();
    func_0x00010729ee38();
    FUN_107293398();
    *(undefined8 *)(lVar1 + 0x28) = uStack_68;
    *(undefined8 *)(lVar1 + 0x20) = uStack_70;
    *(undefined4 *)(lVar1 + 0x30) = uStack_60;
    lStack_40 = lVar1;
    FUN_107292e94(lVar2,auStack_58);
    func_0x000107283e00(auStack_58);
    FUN_107298098();
  }
  func_0x00010729e1e0(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107283e00(auStack_58);
  FUN_107298098(auStack_88);
  func_0x00010729e514();
  func_0x00010729e9d0();
  func_0x00010729e744();
  func_0x00010729e3dc();
  return;
}


