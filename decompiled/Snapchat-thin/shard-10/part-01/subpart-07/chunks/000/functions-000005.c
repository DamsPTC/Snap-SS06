/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10779b838; end: 10779b84b;  */

void FUN_10779b838(void)

{
  func_0x00010779b8e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10779bc3c; end: 10779bc3f;  */

undefined8 * FUN_10779bc3c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d6e58;
  FUN_10778350c(param_1 + 6);
  FUN_107783268(param_1 + 3);
  func_0x0001073ad4c4(param_1 + 1);
  return param_1;
}



/* Entry: 10779ca14; end: 10779caa3;  */

void FUN_10779ca14(undefined8 param_1,long param_2,long *param_3)

{
  undefined **ppuVar1;
  undefined1 *puVar2;
  long lStack_48;
  undefined1 auStack_40 [16];
  
  lStack_48 = *param_3;
  if (-1 < *(char *)((long)param_3 + 0x17)) {
    lStack_48 = (long)param_3;
  }
  func_0x00010750c5d0(auStack_40,&lStack_48);
  ppuVar1 = &PTR_DAT_1109d97f8;
  func_0x000107785358(&PTR_DAT_1109d97f8,&UNK_1109d9978,auStack_40);
  if (ppuVar1 != (undefined **)&UNK_1109d9978) {
    puVar2 = auStack_40;
    func_0x000107785400(puVar2,ppuVar1);
    if ((int)puVar2 == 0) {
      func_0x00010779c03c(param_1,*(undefined8 *)(param_2 + 8),*(undefined1 *)(ppuVar1 + 1));
      return;
    }
  }
  func_0x00010779d110();
  return;
}



/* Entry: 10779ccfc; end: 10779cd0f;  */

void FUN_10779ccfc(void)

{
  func_0x00010779cd58();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10779cea0; end: 10779cecf;  */

undefined8 FUN_10779cea0(void)

{
  return 1;
}



/* Entry: 10779d2fc; end: 10779d2ff;  */

undefined8 * FUN_10779d2fc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109ab0d0;
  func_0x0001073ad4c4(param_1 + 1);
  return param_1;
}



/* Entry: 10779d44c; end: 10779d677;  */

/* WARNING: Possible PIC construction at 0x00010779d6a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010779d6ac) */

undefined8 * FUN_10779d44c(long *param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long **pplVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 ***pppuVar12;
  undefined *puVar13;
  long *plStack_820;
  long lStack_818;
  undefined8 *puStack_810;
  long *plStack_808;
  undefined8 **ppuStack_800;
  undefined *puStack_7f8;
  undefined1 auStack_7f0 [8];
  undefined8 uStack_7e8;
  long lStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  long lStack_7b0;
  undefined8 uStack_7a8;
  undefined1 auStack_558 [1296];
  undefined8 uStack_48;
  
  func_0x0001077a2d10();
  uStack_48 = extraout_x8;
  func_0x00010779d418(&lStack_7e0,*(undefined8 *)(param_2 + 8));
  func_0x000107262f3c(lStack_7e0 + 8,param_3);
  lVar11 = *(long *)(lStack_7e0 + 0xfd0);
  for (lVar10 = *(long *)(lStack_7e0 + 0xfc8); uVar4 = lVar10 == lVar11, !(bool)uVar4;
      lVar10 = lVar10 + 0xe98) {
    FUN_1077a17f0(&lStack_7b0);
    func_0x0001077a2ed4();
    func_0x0001077a2ed4();
    func_0x0001077a2f44();
    func_0x0001077a2f44();
    func_0x0001077a2ed4();
    func_0x0001077a2f44();
    func_0x000107784a14(lVar10 + 0x988,auStack_558);
    func_0x0001077a2ed4();
    func_0x0001077a2f44();
    func_0x0001077a2ed4();
    func_0x0001077a2ed4();
    func_0x0001077a2f44();
    func_0x0001077a2ed4();
    func_0x0001077a2f44();
    func_0x0001077a2ed4();
    func_0x0001077a2ed4();
    func_0x0001077a2f44();
    func_0x0001077a2ed4();
    func_0x0001077a2ed4();
    func_0x0001074c49d8(&lStack_7b0);
  }
  puVar5 = (undefined8 *)0x48;
  __Znwm();
  uStack_7a8 = uStack_7d8;
  lStack_7b0 = lStack_7e0;
  lStack_7e0 = 0;
  uStack_7d8 = 0;
  uStack_7d0 = 0;
  uStack_7c8 = 0;
  uStack_7c0 = 0;
  uStack_7b8 = 0;
  plVar8 = &lStack_7b0;
  func_0x000107781b94();
  func_0x0001073ad4c4(&lStack_7b0);
  func_0x0001073e6bdc(&uStack_7c0);
  *puVar5 = &PTR_DAT_1109d9af0;
  func_0x0001073e6bdc(&uStack_7d0);
  uStack_7e8 = 0;
  *param_1 = (long)puVar5;
  puVar6 = &uStack_7e8;
  func_0x0001072ca74c(puVar6);
  func_0x0001077a308c();
  func_0x0001077a2ae8(uStack_48);
  if ((bool)uVar4) {
    return puVar6;
  }
  ___stack_chk_fail();
  func_0x0001077a30c4();
  func_0x0001073ad4c4();
  func_0x0001073e6bdc(&uStack_7c0);
  func_0x0001073e6bdc(&uStack_7d0);
  puVar6 = puVar5;
  __ZdlPv();
  func_0x0001077a308c();
  func_0x0001077a2e74();
  pplVar3 = &plStack_820;
  puStack_7f8 = &DAT_10779d678;
  if (puVar6[0x1f9] == puVar6[0x1fa]) {
    puVar7 = puVar6 + 0x2d;
    puVar13 = &DAT_10779d678;
    pplVar3 = (long **)auStack_7f0;
    plVar9 = param_1;
    puVar6 = puVar5;
    pppuVar12 = (undefined8 ***)&stack0xfffffffffffffff0;
  }
  else {
    puVar7 = (undefined8 *)(puVar6[0x1f9] + 0x38);
    puVar13 = &UNK_10779d6ac;
    plVar9 = plVar8;
    pppuVar12 = &ppuStack_800;
  }
  plStack_820 = &lStack_7b0;
  lStack_818 = lVar11;
  puStack_810 = puVar5;
  *(undefined8 **)((long)pplVar3 + -0x20) = puVar6;
  plStack_808 = param_1;
  *(long **)((long)pplVar3 + -0x18) = plVar9;
  ppuStack_800 = (undefined8 **)&stack0xfffffffffffffff0;
  *(undefined8 ****)((long)pplVar3 + -0x10) = pppuVar12;
  *(undefined **)((long)pplVar3 + -8) = puVar13;
  func_0x0001077a2ee8(puVar7,plVar8);
  func_0x00010734936c();
  if (*(int *)(puVar6 + 6) != 0) {
    func_0x0001077a2afc(&DAT_10f429808);
    func_0x00010778f294(plVar9,puVar6);
  }
  if (*(int *)(puVar6 + 0xf) != 0) {
    func_0x0001077a2afc(&DAT_10f429a2c);
    FUN_107798450(plVar9,puVar6 + 7);
  }
  if (*(int *)(puVar6 + 0x16) != 0) {
    func_0x0001077a2afc(&DAT_10f42975d);
    func_0x0001077a2fec();
  }
  if (*(int *)(puVar6 + 0x1d) != 0) {
    func_0x0001077a2afc(&DAT_10f4297b0);
    func_0x0001077a2fec();
  }
  if (*(int *)(puVar6 + 0x26) != 0) {
    func_0x0001077a2afc(&DAT_10f42974a);
    FUN_107798450(plVar9,puVar6 + 0x1e);
  }
  if (*(int *)(puVar6 + 0x2d) != 0) {
    func_0x0001077a2afc(&DAT_10f429987);
    func_0x0001077a2f3c();
  }
  if (*(int *)(puVar6 + 0x34) != 0) {
    func_0x0001077a2afc(&DAT_10f4298c5);
    func_0x0001077a2f3c();
  }
  if (*(int *)(puVar6 + 0x3b) != 0) {
    func_0x0001077a2afc(&DAT_10f4299f4);
    func_0x0001077a2f3c();
  }
  if (*(int *)(puVar6 + 0x42) != 0) {
    func_0x0001077a2afc(&DAT_10f4297d8);
    func_0x0001077a2f3c();
  }
  if (*(int *)(puVar6 + 0x49) != 0) {
    func_0x0001077a2afc(&DAT_10f4298f2);
    *(long **)((long)pplVar3 + -0x30) = plVar9;
    func_0x0001073f687c(puVar6 + 0x43);
    func_0x0001077a3168();
    func_0x0001077a2ef8(*(undefined4 *)(puVar6 + 0x49));
    func_0x0001077a2f4c();
    (*extraout_x8_00)();
  }
  if (*(int *)(puVar6 + 0x50) != 0) {
    func_0x0001077a2afc(&DAT_10f42996a);
    func_0x0001077a2f3c();
  }
  if (*(int *)(puVar6 + 0x57) != 0) {
    func_0x0001077a2afc(&DAT_10f42922d);
    func_0x0001077a2fec();
  }
  if (*(int *)(puVar6 + 0x5e) != 0) {
    func_0x0001077a2afc(&DAT_10f4292fd);
    func_0x0001077a1a28(plVar9,puVar6 + 0x58);
  }
  if (*(int *)(puVar6 + 0x65) != 0) {
    func_0x0001077a2afc(&DAT_10f4295ce);
    func_0x0001077a2fec();
  }
  if (*(int *)(puVar6 + 0x6c) != 0) {
    func_0x0001077a2afc(&DAT_10f42950d);
    func_0x0001077a2fec();
  }
  if (*(int *)(puVar6 + 0x80) != 0) {
    func_0x0001077a2afc(&DAT_10f4291e7);
    FUN_1077a1adc(plVar9,puVar6 + 0x6d);
  }
  if (*(int *)(puVar6 + 0x8f) != 0) {
    func_0x0001077a2afc(&DAT_10f4294f7);
    func_0x00010778bbf8(plVar9,puVar6 + 0x81);
  }
  if (*(int *)(puVar6 + 0x97) != 0) {
    func_0x0001077a2afc(&DAT_10f429713);
    func_0x0001077a1bd4(plVar9,puVar6 + 0x90);
  }
  if (*(int *)(puVar6 + 0xa6) != 0) {
    func_0x0001077a2afc(&DAT_10f429215);
    func_0x00010778bbf8(plVar9,puVar6 + 0x98);
  }
  if (*(int *)(puVar6 + 0xad) != 0) {
    func_0x0001077a2afc(&DAT_10f42972b);
    func_0x0001077a1a28(plVar9,puVar6 + 0xa7);
  }
  if (*(int *)(puVar6 + 0xb4) != 0) {
    func_0x0001077a2afc(&DAT_10f4296ab);
    func_0x0001077a2f3c();
  }
  if (*(int *)(puVar6 + 0xbb) != 0) {
    func_0x0001077a2afc(&DAT_10f42942a);
    func_0x0001077a2f3c();
  }
  if (*(int *)(puVar6 + 0xc2) != 0) {
    func_0x0001077a2afc(&DAT_10f42952f);
    func_0x0001077a2fec();
  }
  if (*(int *)(puVar6 + 0xc9) != 0) {
    func_0x0001077a2afc(&DAT_10f429371);
    *(long **)((long)pplVar3 + -0x30) = plVar9;
    func_0x0001073f7090(puVar6 + 0xc3);
    func_0x0001077a3168();
    func_0x0001077a2ef8(*(undefined4 *)(puVar6 + 0xc9));
    func_0x0001077a2f4c();
    (*extraout_x8_01)();
  }
  if (*(int *)(puVar6 + 0xd0) != 0) {
    func_0x0001077a2afc(&DAT_10f4294ba);
    *(long **)((long)pplVar3 + -0x30) = plVar9;
    func_0x0001073f71c0(puVar6 + 0xca);
    func_0x0001077a3168();
    func_0x0001077a2ef8(*(undefined4 *)(puVar6 + 0xd0));
    func_0x0001077a2f4c();
    (*extraout_x8_02)();
  }
  if (*(int *)(puVar6 + 0xd7) != 0) {
    func_0x0001077a2afc(&DAT_10f4296cf);
    *(long **)((long)pplVar3 + -0x30) = plVar9;
    func_0x0001073f72f4(puVar6 + 0xd1);
    func_0x0001077a3168();
    func_0x0001077a2ef8(*(undefined4 *)(puVar6 + 0xd7));
    func_0x0001077a2f4c();
    (*extraout_x8_03)();
  }
  if (*(int *)(puVar6 + 0xde) != 0) {
    func_0x0001077a2afc(&DAT_10f429299);
    func_0x0001077a2f3c();
  }
  uVar1 = *(undefined8 *)((long)pplVar3 + -0x10);
  uVar2 = *(undefined8 *)((long)pplVar3 + -8);
  plVar9[4] = plVar9[4] + -0x10;
  *(undefined8 *)((long)pplVar3 + -0x10) = uVar1;
  *(undefined8 *)((long)pplVar3 + -8) = uVar2;
  func_0x000107349610(*plVar9,0x7d);
  return (undefined8 *)0x1;
}



/* Entry: 10779e078; end: 10779e0e3;  */

void FUN_10779e078(void)

{
  long extraout_x8;
  long unaff_x19;
  ulong unaff_x20;
  undefined1 auStack_48 [24];
  undefined8 uStack_30;
  
  func_0x0001077a3100();
  func_0x00010779e058();
  func_0x000107785dfc();
  if ((unaff_x20 & 1) == 0) {
    func_0x0001077a30f0();
    if ((extraout_x8 == 0) || (*(long *)(extraout_x8 + 8) != 0)) {
      func_0x0001077a2fd8();
      func_0x0001077a2340(auStack_48,uStack_30);
      func_0x0001077a2fcc();
      func_0x0001077a31c8();
    }
    else {
      func_0x0001077a2340(auStack_48,*(undefined8 *)(unaff_x19 + 8));
    }
    func_0x0001077a2d3c();
  }
  return;
}



/* Entry: 1077a0870; end: 1077a091b;  */

void FUN_1077a0870(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined **ppuVar1;
  undefined1 *puVar2;
  long lStack_58;
  undefined1 auStack_50 [16];
  
  lStack_58 = *param_4;
  if (-1 < *(char *)((long)param_4 + 0x17)) {
    lStack_58 = (long)param_4;
  }
  func_0x00010750c5d0(auStack_50,&lStack_58);
  ppuVar1 = &PTR_DAT_1109d9b68;
  func_0x000107785358(&PTR_DAT_1109d9b68,&PTR_DAT_1109d9f58,auStack_50);
  if (ppuVar1 != &PTR_DAT_1109d9f58) {
    puVar2 = auStack_50;
    func_0x000107785400(puVar2,ppuVar1);
    if ((int)puVar2 == 0) {
      func_0x00010779e3c4(param_1,param_2,param_3,*(undefined1 *)(ppuVar1 + 1));
      return;
    }
  }
  func_0x0001077a2d50();
  return;
}



/* Entry: 1077a0e28; end: 1077a0eaf;  */

long FUN_1077a0e28(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  long lVar1;
  long lVar2;
  undefined8 extraout_x8;
  long lStack_40;
  
  func_0x0001077a2d10();
  func_0x0001077a3208();
  lVar1 = lStack_40;
  func_0x0001077a0f08(lStack_40,param_3,param_4);
  *param_1 = lStack_40 + 0x18;
  param_1[1] = lStack_40;
  func_0x0001077a3074();
  func_0x0001077a2ae8(extraout_x8);
  if ((bool)in_ZR) {
    return lVar1;
  }
  ___stack_chk_fail();
  func_0x0001077a3074();
  func_0x0001077a2e74();
  *(undefined8 *)(lVar1 + 8) = param_3;
  lVar2 = lVar1;
  func_0x0001077a0ed8();
  *(long *)(lVar1 + 0x10) = lVar2;
  return lVar1;
}



/* Entry: 1077a0fac; end: 1077a0fcf;  */

void FUN_1077a0fac(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109da3e0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1077a1208; end: 1077a1253;  */

void FUN_1077a1208(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 < 0x118ab083902bdb) {
    plVar1 = param_1 + 2;
    func_0x0001077a129c();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 0x1d3);
  }
  else {
    func_0x0001077a1288();
    plVar1 = param_1 + 2;
    func_0x0001077a12f0();
    param_1[1] = (long)plVar1;
  }
  return;
}



/* Entry: 1077a13ec; end: 1077a1483;  */

void FUN_1077a13ec(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0xe98;
    func_0x0001074c49a8();
  }
  return;
}



/* Entry: 1077a17f0; end: 1077a1807;  */

void FUN_1077a17f0(void)

{
  func_0x0001077a1808();
  return;
}



/* Entry: 1077a1adc; end: 1077a1afb;  */

void FUN_1077a1adc(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001077a1afc(&uStack_18);
  return;
}



/* Entry: 1077a1c48; end: 1077a1c67;  */

undefined8 FUN_1077a1c48(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 extraout_w8;
  undefined1 *extraout_x9;
  undefined1 *extraout_x9_00;
  undefined1 *extraout_x9_01;
  long extraout_x9_02;
  undefined1 *extraout_x10;
  undefined8 extraout_x11;
  
  uVar1 = *(undefined8 *)*param_1;
  func_0x000107349544(uVar1,0);
  func_0x00010734ac10(uVar1);
  func_0x000107349658();
  func_0x00010734aa78();
  *extraout_x9 = 0x6e;
  func_0x00010734aa78();
  *extraout_x9_00 = 0x75;
  func_0x00010734aa78();
  *extraout_x9_01 = 0x6c;
  func_0x00010734ab28();
  *(undefined8 *)(extraout_x9_02 + 0x18) = extraout_x11;
  *extraout_x10 = extraout_w8;
  return 1;
}



/* Entry: 1077a1d74; end: 1077a1db7;  */

void FUN_1077a1d74(undefined8 *param_1,char *param_2)

{
  undefined *puStack_18;
  
  puStack_18 = &DAT_10f42a790;
  if (*param_2 == '\0') {
    puStack_18 = &DAT_10f42a788;
  }
  func_0x00010778f25c(*(undefined8 *)*param_1,&puStack_18);
  return;
}



/* Entry: 1077a1f48; end: 1077a1f63;  */

void FUN_1077a1f48(void)

{
  func_0x0001077a2d2c();
  func_0x0001077a2a74();
  return;
}



/* Entry: 1077a20a0; end: 1077a20cb;  */

void FUN_1077a20a0(undefined8 param_1,long param_2)

{
  func_0x000107878dcc(param_2,param_2 + 4);
  func_0x0001077a2a74();
  return;
}



/* Entry: 1077a2148; end: 1077a21db;  */

void FUN_1077a2148(void)

{
  func_0x0001077a2d2c();
  func_0x0001077a2a74();
  return;
}



/* Entry: 1077a23ac; end: 1077a240f;  */

void FUN_1077a23ac(undefined8 param_1,long param_2)

{
  bool bVar1;
  long extraout_x8;
  long extraout_x10;
  
  func_0x0001077a30e0();
  if (*(int *)(extraout_x10 + 0x680) != -1 || *(int *)(param_2 + 0x30) != -1) {
    bVar1 = *(int *)(param_2 + 0x30) == -1;
    if (bVar1) {
      func_0x0001074c8ae4(param_2,extraout_x10 + 0x650);
      if (!bVar1) {
        func_0x0001074c8828((&PTR_DAT_1109b4e18)[extraout_x8]);
      }
      func_0x0001074c90d0();
      return;
    }
    func_0x0001077a2f8c();
  }
  return;
}



/* Entry: 1077a264c; end: 1077a26af;  */

void FUN_1077a264c(undefined8 param_1,long param_2)

{
  bool bVar1;
  long extraout_x8;
  long extraout_x10;
  
  func_0x0001077a30e0();
  if (*(int *)(extraout_x10 + 0x6f0) != -1 || *(int *)(param_2 + 0x30) != -1) {
    bVar1 = *(int *)(param_2 + 0x30) == -1;
    if (bVar1) {
      func_0x0001074c8ae4(param_2,extraout_x10 + 0x6c0);
      if (!bVar1) {
        func_0x0001074c8828((&PTR_DAT_1109b4e78)[extraout_x8]);
      }
      func_0x0001074c90d0();
      return;
    }
    func_0x0001077a2f8c();
  }
  return;
}



/* Entry: 1077a28e8; end: 1077a290b;  */

undefined8 FUN_1077a28e8(undefined8 param_1)

{
  func_0x0001077a290c();
  return param_1;
}



/* Entry: 1077a38f8; end: 1077a38fb;  */

long FUN_1077a38f8(undefined8 *param_1)

{
  undefined8 extraout_x8;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  *param_1 = &PTR_FUN_1109da448;
  func_0x0001073e6ca8(param_1 + 0x1fc);
  func_0x0001077a17c4(param_1 + 0x1f9);
  func_0x0001074c49d8(param_1 + 0x10c);
  func_0x0001074c48b8(param_1 + 0x2d);
  func_0x0001077866dc(param_1);
  *unaff_x20 = extraout_x8;
  func_0x000107284db4(param_1 + 0x28);
  func_0x000107284d8c(unaff_x19 + 0xd0);
  func_0x000107283194(unaff_x19 + 0xc0);
  func_0x0001072c9b9c(unaff_x19 + 0xb0);
  func_0x000104c2f714(unaff_x19 + 0x78);
  func_0x000104c2f714(unaff_x19 + 0x40);
  func_0x000104c2f714(unaff_x20 + 1);
  return unaff_x19;
}



/* Entry: 1077a3e2c; end: 1077a3e77;  */

long * FUN_1077a3e2c(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x0001077a129c();
  }
  lVar1 = param_4 + param_3 * 0xe98;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0xe98;
  return param_1;
}



/* Entry: 1077a40d4; end: 1077a40e7;  */

void FUN_1077a40d4(void)

{
  func_0x0001077a40a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077a43e8; end: 1077a441b;  */

void FUN_1077a43e8(undefined8 *param_1)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001077a96f8(&uStack_30);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x0001077acb74();
  return;
}



/* Entry: 1077a6450; end: 1077a8f67;  */

/* WARNING: Possible PIC construction at 0x0001077a858c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077a8590) */
/* WARNING: Removing unreachable block (ram,0x0001077a8754) */
/* WARNING: Removing unreachable block (ram,0x0001077a875c) */
/* WARNING: Removing unreachable block (ram,0x0001077a8770) */
/* WARNING: Removing unreachable block (ram,0x0001077a8598) */
/* WARNING: Removing unreachable block (ram,0x0001077a85ac) */
/* WARNING: Removing unreachable block (ram,0x0001077a85b4) */
/* WARNING: Removing unreachable block (ram,0x0001077a8810) */
/* WARNING: Removing unreachable block (ram,0x0001077a85bc) */
/* WARNING: Removing unreachable block (ram,0x0001077a8818) */
/* WARNING: Removing unreachable block (ram,0x0001077a8820) */
/* WARNING: Removing unreachable block (ram,0x0001077a8824) */

void FUN_1077a6450(long *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 *param_7,undefined **param_8)

{
  byte bVar1;
  undefined1 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined1 *puVar7;
  undefined **ppuVar8;
  undefined1 uVar9;
  undefined1 extraout_w8;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  long extraout_x8_12;
  long extraout_x8_13;
  long extraout_x8_14;
  long extraout_x8_15;
  long extraout_x8_16;
  long extraout_x8_17;
  long extraout_x8_18;
  long extraout_x8_19;
  long extraout_x8_20;
  long extraout_x8_21;
  long extraout_x8_22;
  long extraout_x8_23;
  long extraout_x8_24;
  long extraout_x8_25;
  long extraout_x8_26;
  long extraout_x8_27;
  long extraout_x8_28;
  long extraout_x8_29;
  long extraout_x8_30;
  long extraout_x8_31;
  long extraout_x8_32;
  long extraout_x8_33;
  long extraout_x8_34;
  long extraout_x8_35;
  long extraout_x8_36;
  long extraout_x8_37;
  long extraout_x8_38;
  long extraout_x8_39;
  long extraout_x8_40;
  long extraout_x8_41;
  long extraout_x8_42;
  long extraout_x8_43;
  long extraout_x8_44;
  long extraout_x8_45;
  long extraout_x8_46;
  long extraout_x8_47;
  long extraout_x8_48;
  long extraout_x8_49;
  long extraout_x8_50;
  long extraout_x8_51;
  long extraout_x8_52;
  long extraout_x8_53;
  long extraout_x8_54;
  long extraout_x8_55;
  long extraout_x8_56;
  long extraout_x8_57;
  long extraout_x8_58;
  long extraout_x8_59;
  long extraout_x8_60;
  long extraout_x8_61;
  long extraout_x8_62;
  long extraout_x8_63;
  long extraout_x8_64;
  long extraout_x8_65;
  long extraout_x8_66;
  long extraout_x8_67;
  long extraout_x8_68;
  long extraout_x8_69;
  long extraout_x8_70;
  long extraout_x8_71;
  long extraout_x8_72;
  long extraout_x8_73;
  long extraout_x8_74;
  long extraout_x8_75;
  long extraout_x8_76;
  long extraout_x8_77;
  long extraout_x8_78;
  long extraout_x8_79;
  long extraout_x8_80;
  long extraout_x8_81;
  long extraout_x8_82;
  long extraout_x8_83;
  long extraout_x8_84;
  long extraout_x8_85;
  undefined8 uVar10;
  long extraout_x8_86;
  long extraout_x8_87;
  long extraout_x8_88;
  long extraout_x8_89;
  long extraout_x8_90;
  long extraout_x8_91;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  long extraout_x9_03;
  long extraout_x9_04;
  long extraout_x9_05;
  long extraout_x9_06;
  long extraout_x9_07;
  long extraout_x9_08;
  long extraout_x9_09;
  long extraout_x9_10;
  long extraout_x9_11;
  long extraout_x9_12;
  long lVar11;
  uint uVar12;
  uint uVar13;
  undefined *puVar14;
  undefined8 in_register_00005008;
  undefined8 in_register_00005028;
  undefined1 uStack_171;
  undefined1 *puStack_170;
  undefined *puStack_168;
  undefined *apuStack_148 [3];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  long lStack_118;
  long lStack_110;
  undefined *apuStack_100 [4];
  undefined1 uStack_e0;
  byte bStack_d8;
  byte bStack_c8;
  byte bStack_c0;
  byte bStack_b8;
  byte bStack_60;
  undefined8 uStack_58;
  
  puVar7 = param_7;
  ppuVar8 = param_8;
  func_0x0001077ac8ec();
  uStack_130 = param_5;
  uStack_128 = param_6;
  uStack_58 = extraout_x8;
  func_0x00010772d2fc(apuStack_100,&uStack_130);
  ppuVar3 = &PTR_DAT_1109da590;
  ppuVar5 = (undefined **)&UNK_1109dae48;
  ppuVar6 = apuStack_100;
  func_0x000107785358(&PTR_DAT_1109da590,&UNK_1109dae48,ppuVar6);
  uVar2 = ppuVar3 == (undefined **)&UNK_1109dae48;
  if ((bool)uVar2) {
LAB_1077a64c8:
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 3) = 0;
    goto LAB_1077a84c0;
  }
  ppuVar4 = apuStack_100;
  ppuVar5 = ppuVar3;
  func_0x000107785400(ppuVar4,ppuVar3);
  if ((int)ppuVar4 != 0) goto LAB_1077a64c8;
  bVar1 = *(byte *)(ppuVar3 + 1);
  uVar2 = bVar1 == 0x59;
  uVar12 = (uint)bVar1;
  if (bVar1 < 0x5a) {
    uVar13 = (uint)bVar1;
    switch(bVar1) {
    case 0:
    case 2:
    case 9:
    case 0xb:
      func_0x0001077ac924();
      func_0x0001077ac750();
      func_0x0001077848c0();
      if ((bStack_b8 & 1) == 0) {
        func_0x0001077ac738();
        if (extraout_x8_05 != 0) {
          func_0x0001077ac7d8();
          func_0x0001077ac888();
          func_0x0001077ac7e8();
          func_0x0001077ac8e0();
          func_0x0001077acae0();
        }
        func_0x0001077ac700();
      }
      else {
        uVar2 = uVar12 == 0xb;
        if ((bool)uVar2) {
          func_0x0001077acaac();
          func_0x0001077acc04();
          func_0x000107785bfc();
          if (((ulong)ppuVar4 & 1) == 0) {
            if ((*(long *)(param_4 + 0x10) == 0) || (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0))
            {
              func_0x0001077aca9c(*param_8);
              func_0x0001077aca80(puStack_120);
              func_0x0001077ac85c();
              func_0x0001077aca8c();
            }
            else {
              func_0x0001077aca80(*param_8);
            }
            func_0x0001077ac878();
            func_0x0001077aca94();
          }
        }
        else {
          uVar2 = uVar12 == 2;
          if (!(bool)uVar2) {
            uVar2 = uVar12 == 9;
            if ((bool)uVar2) {
              func_0x0001077acaac();
              func_0x0001077acc04();
              func_0x000107785bfc();
              if (((ulong)ppuVar4 & 1) == 0) {
                if ((*(long *)(param_4 + 0x10) == 0) ||
                   (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0)) {
                  func_0x0001077aca9c(*param_8);
                  func_0x0001077aca80(puStack_120);
                  func_0x0001077ac85c();
                  func_0x0001077aca8c();
                }
                else {
                  func_0x0001077aca80(*param_8);
                }
                func_0x0001077ac878();
                func_0x0001077aca94();
              }
              goto code_r0x0001077a842c;
            }
            if (uVar12 == 0) {
              func_0x0001077acaac();
              ppuVar3 = apuStack_100;
              ppuVar5 = (undefined **)(extraout_x8_03 + 0xf68);
              func_0x000107785bfc(ppuVar3,ppuVar5);
              if (((ulong)ppuVar3 & 1) == 0) {
                if ((*(long *)(param_4 + 0x10) == 0) ||
                   (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0)) {
                  func_0x0001077aca9c(*param_8);
                  func_0x0001077ace98(puStack_120);
                  func_0x0001077ac85c();
                  func_0x0001077aca8c();
                }
                else {
                  func_0x0001077ace98(*param_8);
                }
                func_0x0001077ac878();
                func_0x0001077aca94();
              }
              goto code_r0x0001077a842c;
            }
            ppuVar4 = apuStack_100;
            func_0x00010754e888();
            func_0x0001077acbb0();
            if (10 < uVar12) goto LAB_1077a78cc;
            uVar2 = (1 << (ulong)(uVar12 & 0x1f) & 0x53aU) == 0;
            if (!(bool)uVar2) goto code_r0x0001077a64f8;
            uVar2 = true;
            if (uVar12 == 6) goto code_r0x0001077a6f80;
            goto code_r0x0001077a7098;
          }
          func_0x0001077acaac();
          func_0x0001077acc04();
          func_0x000107785bfc();
          if (((ulong)ppuVar4 & 1) == 0) {
            if ((*(long *)(param_4 + 0x10) == 0) || (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0))
            {
              func_0x0001077aca9c(*param_8);
              func_0x0001077aca80(puStack_120);
              func_0x0001077ac85c();
              func_0x0001077aca8c();
            }
            else {
              func_0x0001077aca80(*param_8);
            }
            func_0x0001077ac878();
            func_0x0001077aca94();
          }
        }
code_r0x0001077a842c:
        func_0x0001077acb4c();
      }
      func_0x0001077acb58();
      func_0x00010754e888();
      break;
    case 1:
    case 3:
    case 4:
    case 5:
    case 8:
    case 10:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0x2c:
    case 0x2e:
    case 0x34:
    case 0x3a:
    case 0x3c:
    case 0x3d:
    case 0x3e:
    case 0x4e:
    case 0x51:
    case 0x56:
    case 0x57:
    case 0x59:
code_r0x0001077a64f8:
      func_0x0001077ac924();
      func_0x0001077ac750();
      func_0x00010733b904();
      if ((bStack_c8 & 1) != 0) {
        uVar2 = uVar12 - 1 == 0xd;
        switch(uVar12 - 1) {
        case 0:
          func_0x0001077acaac();
          ppuVar3 = apuStack_100;
          ppuVar5 = (undefined **)(extraout_x8_02 + 0xfd8);
          func_0x000107786038(ppuVar3,ppuVar5);
          if (((ulong)ppuVar3 & 1) == 0) {
            if ((*(long *)(param_4 + 0x10) == 0) || (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0))
            {
              func_0x0001077aca9c(*param_8);
              func_0x0001077aceb0(puStack_120);
              func_0x0001077ac85c();
              func_0x0001077aca8c();
            }
            else {
              func_0x0001077aceb0(*param_8);
            }
            func_0x0001077ac878();
            func_0x0001077aca94();
          }
          break;
        case 1:
        case 5:
        case 6:
        case 8:
        case 10:
code_r0x0001077a6740:
          func_0x0001077acd58();
          func_0x0001077acbb0();
          uVar2 = uVar12 - 6 == 0x52;
          switch(uVar12 - 6) {
          case 0:
          case 9:
            goto code_r0x0001077a6f80;
          case 1:
          case 10:
            goto code_r0x0001077a70a0;
          case 0x1c:
          case 0x1e:
          case 0x21:
          case 0x23:
          case 0x2c:
          case 0x2d:
          case 0x40:
          case 0x44:
          case 0x47:
          case 0x4d:
            goto code_r0x0001077a676c;
          case 0x1d:
          case 0x41:
            goto code_r0x0001077a71ac;
          case 0x1f:
          case 0x45:
            goto code_r0x0001077a7250;
          case 0x20:
            goto code_r0x0001077a73ac;
          case 0x22:
          case 0x2f:
          case 0x4c:
            goto code_r0x0001077a7350;
          case 0x24:
          case 0x35:
          case 0x3a:
          case 0x3b:
          case 0x3e:
          case 0x49:
          case 0x4a:
          case 0x4e:
            goto code_r0x0001077a74f8;
          case 0x25:
          case 0x27:
          case 0x4f:
          case 0x52:
            goto code_r0x0001077a7628;
          case 0x29:
            goto code_r0x0001077a7968;
          case 0x2a:
            goto code_r0x0001077a7878;
          }
          goto LAB_1077a78cc;
        case 2:
          func_0x0001077acaac();
          func_0x0001077aca2c();
          if (((ulong)ppuVar4 & 1) == 0) {
            if ((*(long *)(param_4 + 0x10) == 0) || (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0))
            {
              func_0x0001077aca9c(*param_8);
              func_0x0001077ac964(puStack_120);
              func_0x0001077ac85c();
              func_0x0001077aca8c();
            }
            else {
              func_0x0001077ac964(*param_8);
            }
            func_0x0001077ac878();
            func_0x0001077aca94();
          }
          break;
        case 3:
          func_0x0001077acaac();
          func_0x0001077aca2c();
          if (((ulong)ppuVar4 & 1) == 0) {
            if ((*(long *)(param_4 + 0x10) == 0) || (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0))
            {
              func_0x0001077aca9c(*param_8);
              func_0x0001077ac964(puStack_120);
              func_0x0001077ac85c();
              func_0x0001077aca8c();
            }
            else {
              func_0x0001077ac964(*param_8);
            }
            func_0x0001077ac878();
            func_0x0001077aca94();
          }
          break;
        case 4:
          func_0x0001077accf8();
          func_0x0001077a58c0();
          break;
        case 7:
          func_0x0001077acaac();
          func_0x0001077aca2c();
          if (((ulong)ppuVar4 & 1) == 0) {
            if ((*(long *)(param_4 + 0x10) == 0) || (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0))
            {
              func_0x0001077aca9c(*param_8);
              func_0x0001077ac964(puStack_120);
              func_0x0001077ac85c();
              func_0x0001077aca8c();
            }
            else {
              func_0x0001077ac964(*param_8);
            }
            func_0x0001077ac878();
            func_0x0001077aca94();
          }
          break;
        case 9:
          func_0x0001077acaac();
          func_0x0001077aca2c();
          if (((ulong)ppuVar4 & 1) == 0) {
            if ((*(long *)(param_4 + 0x10) == 0) || (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0))
            {
              func_0x0001077aca9c(*param_8);
              func_0x0001077ac964(puStack_120);
              func_0x0001077ac85c();
              func_0x0001077aca8c();
            }
            else {
              func_0x0001077ac964(*param_8);
            }
            func_0x0001077ac878();
            func_0x0001077aca94();
          }
          break;
        case 0xb:
          func_0x0001077acaac();
          func_0x0001077aca2c();
          if (((ulong)ppuVar4 & 1) == 0) {
            if ((*(long *)(param_4 + 0x10) == 0) || (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0))
            {
              func_0x0001077aca9c(*param_8);
              func_0x0001077ac964(puStack_120);
              func_0x0001077ac85c();
              func_0x0001077aca8c();
            }
            else {
              func_0x0001077ac964(*param_8);
            }
            func_0x0001077ac878();
            func_0x0001077aca94();
          }
          break;
        case 0xc:
          func_0x0001077acaac();
          func_0x0001077aca2c();
          if (((ulong)ppuVar4 & 1) == 0) {
            if ((*(long *)(param_4 + 0x10) == 0) || (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0))
            {
              func_0x0001077aca9c(*param_8);
              func_0x0001077ac964(puStack_120);
              func_0x0001077ac85c();
              func_0x0001077aca8c();
            }
            else {
              func_0x0001077ac964(*param_8);
            }
            func_0x0001077ac878();
            func_0x0001077aca94();
          }
          break;
        case 0xd:
          func_0x0001077acaac();
          func_0x0001077aca2c();
          if (((ulong)ppuVar4 & 1) == 0) {
            if ((*(long *)(param_4 + 0x10) == 0) || (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0))
            {
              func_0x0001077aca9c(*param_8);
              func_0x0001077ac964(puStack_120);
              func_0x0001077ac85c();
              func_0x0001077aca8c();
            }
            else {
              func_0x0001077ac964(*param_8);
            }
            func_0x0001077ac878();
            func_0x0001077aca94();
          }
          break;
        default:
          uVar2 = uVar12 - 0x34 == 10;
          switch(uVar12 - 0x34) {
          case 0:
            func_0x0001077acaac();
            ppuVar3 = apuStack_100;
            ppuVar5 = (undefined **)(extraout_x8_04 + 0x5e8);
            func_0x000107786038(ppuVar3,ppuVar5);
            if (((ulong)ppuVar3 & 1) == 0) {
              if ((*(long *)(param_4 + 0x10) == 0) ||
                 (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0)) {
                func_0x0001077aca9c(*param_8);
                func_0x0001077acac8(puStack_120 + 0x5e8);
                func_0x0001077ac85c();
                func_0x0001077aca8c();
              }
              else {
                func_0x0001077acac8(*param_8 + 0x5e8);
              }
              func_0x0001077ac878();
              func_0x0001077aca94();
            }
            break;
          case 1:
          case 2:
          case 3:
          case 4:
          case 5:
          case 7:
            goto code_r0x0001077a6740;
          case 6:
            func_0x0001077acaac();
            ppuVar3 = apuStack_100;
            ppuVar5 = (undefined **)(extraout_x8_11 + 0x750);
            func_0x000107786038(ppuVar3,ppuVar5);
            if (((ulong)ppuVar3 & 1) == 0) {
              if ((*(long *)(param_4 + 0x10) == 0) ||
                 (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0)) {
                func_0x0001077aca9c(*param_8);
                func_0x0001077acac8(puStack_120 + 0x750);
                func_0x0001077ac85c();
                func_0x0001077aca8c();
              }
              else {
                func_0x0001077acac8(*param_8 + 0x750);
              }
              func_0x0001077ac878();
              func_0x0001077aca94();
            }
            break;
          case 8:
            func_0x0001077acaac();
            ppuVar3 = apuStack_100;
            ppuVar5 = (undefined **)(extraout_x8_13 + 0x7c0);
            func_0x000107786038(ppuVar3,ppuVar5);
            if (((ulong)ppuVar3 & 1) == 0) {
              if ((*(long *)(param_4 + 0x10) == 0) ||
                 (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0)) {
                func_0x0001077aca9c(*param_8);
                func_0x0001077acac8(puStack_120 + 0x7c0);
                func_0x0001077ac85c();
                func_0x0001077aca8c();
              }
              else {
                func_0x0001077acac8(*param_8 + 0x7c0);
              }
              func_0x0001077ac878();
              func_0x0001077aca94();
            }
            break;
          case 9:
            func_0x0001077acaac();
            ppuVar3 = apuStack_100;
            ppuVar5 = (undefined **)(extraout_x8_12 + 0x7f8);
            func_0x000107786038(ppuVar3,ppuVar5);
            if (((ulong)ppuVar3 & 1) == 0) {
              if ((*(long *)(param_4 + 0x10) == 0) ||
                 (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0)) {
                func_0x0001077aca9c(*param_8);
                func_0x0001077acac8(puStack_120 + 0x7f8);
                func_0x0001077ac85c();
                func_0x0001077aca8c();
              }
              else {
                func_0x0001077acac8(*param_8 + 0x7f8);
              }
              func_0x0001077ac878();
              func_0x0001077aca94();
            }
            break;
          case 10:
            func_0x0001077acaac();
            ppuVar3 = apuStack_100;
            ppuVar5 = (undefined **)(extraout_x8_10 + 0x830);
            func_0x000107786038(ppuVar3,ppuVar5);
            if (((ulong)ppuVar3 & 1) == 0) {
              if ((*(long *)(param_4 + 0x10) == 0) ||
                 (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0)) {
                func_0x0001077aca9c(*param_8);
                func_0x0001077acac8(puStack_120 + 0x830);
                func_0x0001077ac85c();
                func_0x0001077aca8c();
              }
              else {
                func_0x0001077acac8(*param_8 + 0x830);
              }
              func_0x0001077ac878();
              func_0x0001077aca94();
            }
            break;
          default:
            uVar2 = uVar12 - 0x4e == 0xb;
            switch(uVar12 - 0x4e) {
            case 0:
              func_0x0001077acaac();
              ppuVar3 = apuStack_100;
              ppuVar5 = (undefined **)(extraout_x8_00 + 0xbf8);
              func_0x000107786038(ppuVar3,ppuVar5);
              if (((ulong)ppuVar3 & 1) == 0) {
                if ((*(long *)(param_4 + 0x10) == 0) ||
                   (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0)) {
                  func_0x0001077aca9c(*param_8);
                  func_0x0001077acac8(puStack_120 + 0xbf8);
                  func_0x0001077ac85c();
                  func_0x0001077aca8c();
                }
                else {
                  func_0x0001077acac8(*param_8 + 0xbf8);
                }
                func_0x0001077ac878();
                func_0x0001077aca94();
              }
              break;
            case 1:
            case 2:
            case 4:
            case 5:
            case 6:
            case 7:
            case 10:
              goto code_r0x0001077a6740;
            case 3:
              func_0x0001077acaac();
              ppuVar3 = apuStack_100;
              ppuVar5 = (undefined **)(extraout_x8_17 + 0xca0);
              func_0x000107786038(ppuVar3,ppuVar5);
              if (((ulong)ppuVar3 & 1) == 0) {
                if ((*(long *)(param_4 + 0x10) == 0) ||
                   (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0)) {
                  func_0x0001077aca9c(*param_8);
                  func_0x0001077acac8(puStack_120 + 0xca0);
                  func_0x0001077ac85c();
                  func_0x0001077aca8c();
                }
                else {
                  func_0x0001077acac8(*param_8 + 0xca0);
                }
                func_0x0001077ac878();
                func_0x0001077aca94();
              }
              break;
            case 8:
              func_0x0001077acaac();
              ppuVar3 = apuStack_100;
              ppuVar5 = (undefined **)(extraout_x8_19 + 0xdc0);
              func_0x000107786038(ppuVar3,ppuVar5);
              if (((ulong)ppuVar3 & 1) == 0) {
                if ((*(long *)(param_4 + 0x10) == 0) ||
                   (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0)) {
                  func_0x0001077aca9c(*param_8);
                  func_0x0001077acac8(puStack_120 + 0xdc0);
                  func_0x0001077ac85c();
                  func_0x0001077aca8c();
                }
                else {
                  func_0x0001077acac8(*param_8 + 0xdc0);
                }
                func_0x0001077ac878();
                func_0x0001077aca94();
              }
              break;
            case 9:
              func_0x0001077acaac();
              ppuVar3 = apuStack_100;
              ppuVar5 = (undefined **)(extraout_x8_18 + 0xdf8);
              func_0x000107786038(ppuVar3,ppuVar5);
              if (((ulong)ppuVar3 & 1) == 0) {
                if ((*(long *)(param_4 + 0x10) == 0) ||
                   (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0)) {
                  func_0x0001077aca9c(*param_8);
                  func_0x0001077acac8(puStack_120 + 0xdf8);
                  func_0x0001077ac85c();
                  func_0x0001077aca8c();
                }
                else {
                  func_0x0001077acac8(*param_8 + 0xdf8);
                }
                func_0x0001077ac878();
                func_0x0001077aca94();
              }
              break;
            case 0xb:
              func_0x0001077acaac();
              ppuVar3 = apuStack_100;
              ppuVar5 = (undefined **)(extraout_x8_16 + 0xe68);
              func_0x000107786038(ppuVar3,ppuVar5);
              if (((ulong)ppuVar3 & 1) == 0) {
                if ((*(long *)(param_4 + 0x10) == 0) ||
                   (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0)) {
                  func_0x0001077aca9c(*param_8);
                  func_0x0001077acac8(puStack_120 + 0xe68);
                  func_0x0001077ac85c();
                  func_0x0001077aca8c();
                }
                else {
                  func_0x0001077acac8(*param_8 + 0xe68);
                }
                func_0x0001077ac878();
                func_0x0001077aca94();
              }
              break;
            default:
              uVar2 = uVar12 == 0x2c;
              if ((bool)uVar2) {
                func_0x0001077acaac();
                ppuVar3 = apuStack_100;
                ppuVar5 = (undefined **)(extraout_x8_26 + 0x408);
                func_0x000107786038(ppuVar3,ppuVar5);
                if (((ulong)ppuVar3 & 1) == 0) {
                  if ((*(long *)(param_4 + 0x10) == 0) ||
                     (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0)) {
                    func_0x0001077aca9c(*param_8);
                    func_0x0001077acac8(puStack_120 + 0x408);
                    func_0x0001077ac85c();
                    func_0x0001077aca8c();
                  }
                  else {
                    func_0x0001077acac8(*param_8 + 0x408);
                  }
                  func_0x0001077ac878();
                  func_0x0001077aca94();
                }
              }
              else {
                uVar2 = uVar12 == 0x2e;
                if (!(bool)uVar2) goto code_r0x0001077a6740;
                func_0x0001077acaac();
                ppuVar3 = apuStack_100;
                ppuVar5 = (undefined **)(extraout_x8_06 + 0x478);
                func_0x000107786038(ppuVar3,ppuVar5);
                if (((ulong)ppuVar3 & 1) == 0) {
                  if ((*(long *)(param_4 + 0x10) == 0) ||
                     (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0)) {
                    func_0x0001077aca9c(*param_8);
                    func_0x0001077acac8(puStack_120 + 0x478);
                    func_0x0001077ac85c();
                    func_0x0001077aca8c();
                  }
                  else {
                    func_0x0001077acac8(*param_8 + 0x478);
                  }
                  func_0x0001077ac878();
                  func_0x0001077aca94();
                }
              }
            }
          }
        }
        goto code_r0x0001077a84ac;
      }
      func_0x0001077ac738();
      if (extraout_x8_01 != 0) {
        func_0x0001077ac7d8();
        func_0x0001077ac888();
        func_0x0001077ac7e8();
code_r0x0001077a7590:
        func_0x0001077ac8e0();
        func_0x0001077acae0();
      }
code_r0x0001077a7598:
      func_0x0001077ac700();
code_r0x0001077a84b0:
      func_0x0001077acb58();
      func_0x00010727e950();
      break;
    case 6:
    case 0xf:
code_r0x0001077a6f80:
      func_0x0001077aca6c();
      func_0x0001077ac750();
      func_0x0001073398b8();
      if ((bStack_c0 & 1) != 0) {
        uVar2 = uVar12 == 0xf;
        if ((bool)uVar2) {
          func_0x0001077acaac();
          func_0x0001077acc04();
          func_0x000107785dfc();
          if (((ulong)ppuVar4 & 1) == 0) {
            if ((*(long *)(param_4 + 0x10) == 0) || (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0))
            {
              func_0x0001077aca9c(*param_8);
              func_0x0001077acb0c(puStack_120);
              func_0x000107785e68();
              func_0x0001077ac85c();
              func_0x0001077aca8c();
            }
            else {
              func_0x0001077acb0c(*param_8);
              func_0x000107785e68();
            }
            func_0x0001077ac878();
            func_0x0001077aca94();
          }
        }
        else {
          uVar2 = uVar12 == 6;
          if (!(bool)uVar2) {
            func_0x0001077acd60();
            func_0x0001077acbb0();
code_r0x0001077a7098:
            uVar2 = true;
            if (uVar12 == 7) goto code_r0x0001077a70a0;
            goto LAB_1077a78cc;
          }
          func_0x0001077acaac();
          func_0x0001077acc04();
          func_0x000107785dfc();
          if (((ulong)ppuVar4 & 1) == 0) {
            if ((*(long *)(param_4 + 0x10) == 0) || (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0))
            {
              func_0x0001077aca9c(*param_8);
              func_0x0001077acb0c(puStack_120);
              func_0x000107785e68();
              func_0x0001077ac85c();
              func_0x0001077aca8c();
            }
            else {
              func_0x0001077acb0c(*param_8);
              func_0x000107785e68();
            }
            func_0x0001077ac878();
            func_0x0001077aca94();
          }
        }
        goto code_r0x0001077a8558;
      }
      func_0x0001077ac738();
      if (extraout_x8_25 != 0) {
        func_0x0001077ac7d8();
        func_0x0001077ac888();
        func_0x0001077ac7e8();
code_r0x0001077a739c:
        func_0x0001077ac8e0();
        func_0x0001077acae0();
      }
code_r0x0001077a73a4:
      func_0x0001077ac700();
code_r0x0001077a855c:
      func_0x0001077acb58();
      func_0x000107339974();
      break;
    case 7:
    case 0x10:
code_r0x0001077a70a0:
      func_0x0001077aca6c();
      func_0x0001077ac750();
      func_0x00010778ac78();
      if ((bStack_c8 & 1) == 0) {
        func_0x0001077ac738();
        if (extraout_x8_27 != 0) {
          func_0x0001077ac7d8();
          func_0x0001077ac888();
          func_0x0001077ac7e8();
          func_0x0001077ac8e0();
          func_0x0001077acae0();
        }
        func_0x0001077ac700();
      }
      else {
        uVar2 = uVar12 == 0x10;
        if ((bool)uVar2) {
          func_0x0001077acaac();
          func_0x0001077acc04();
          FUN_10778bef0();
          if (((ulong)ppuVar4 & 1) == 0) {
            if ((*(long *)(param_4 + 0x10) == 0) || (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0))
            {
              func_0x0001077aca9c(*param_8);
              func_0x0001077acb0c(puStack_120);
              func_0x00010778bf58();
              func_0x0001077ac85c();
              func_0x0001077aca8c();
            }
            else {
              func_0x0001077acb0c(*param_8);
              func_0x00010778bf58();
            }
            func_0x0001077ac878();
            func_0x0001077aca94();
          }
        }
        else {
          uVar2 = uVar12 == 7;
          if (!(bool)uVar2) {
            ppuVar4 = apuStack_100;
            func_0x00010778b484(ppuVar4);
            func_0x0001077acbb0();
            goto LAB_1077a78cc;
          }
          func_0x0001077acaac();
          func_0x0001077acc04();
          FUN_10778bef0();
          if (((ulong)ppuVar4 & 1) == 0) {
            if ((*(long *)(param_4 + 0x10) == 0) || (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0))
            {
              func_0x0001077aca9c(*param_8);
              func_0x0001077acb0c(puStack_120);
              func_0x00010778bf58();
              func_0x0001077ac85c();
              func_0x0001077aca8c();
            }
            else {
              func_0x0001077acb0c(*param_8);
              func_0x00010778bf58();
            }
            func_0x0001077ac878();
            func_0x0001077aca94();
          }
        }
        func_0x0001077acb4c();
      }
      func_0x0001077acb58();
      func_0x00010778b484();
      break;
    default:
      goto LAB_1077a78cc;
    case 0x22:
    case 0x24:
    case 0x27:
    case 0x29:
    case 0x32:
    case 0x33:
    case 0x46:
    case 0x4a:
    case 0x4d:
    case 0x53:
code_r0x0001077a676c:
      func_0x0001077aca6c();
      func_0x0001077ac750();
      func_0x00010733e5bc();
      if ((bStack_c8 & 1) != 0) {
        uVar2 = uVar12 - 0x22 == 7;
        switch(uVar12 - 0x22) {
        case 0:
          func_0x0001077acaac();
          ppuVar3 = apuStack_100;
          ppuVar5 = (undefined **)(extraout_x8_09 + 0x168);
          func_0x000107785b50(ppuVar3,ppuVar5);
          if (((ulong)ppuVar3 & 1) == 0) {
            if ((*(long *)(param_4 + 0x10) == 0) || (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0))
            {
              func_0x0001077aca9c(*param_8);
              func_0x0001077acaf0(puStack_120 + 0x168);
              func_0x0001077ac85c();
              func_0x0001077aca8c();
            }
            else {
              func_0x0001077acaf0(*param_8 + 0x168);
            }
            func_0x0001077ac878();
            func_0x0001077aca94();
          }
          break;
        case 1:
        case 3:
        case 4:
        case 6:
code_r0x0001077a6880:
          ppuVar4 = apuStack_100;
          func_0x00010733e5d8(ppuVar4);
          func_0x0001077acbb0();
          uVar2 = uVar12 - 0x23 == 0x21;
          switch(uVar12 - 0x23) {
          case 0:
code_r0x0001077a71ac:
            func_0x0001077acb40();
            func_0x0001077ac80c();
            ppuVar8 = (undefined **)0x1;
            func_0x0001075585ec();
            if ((bStack_c8 & 1) == 0) {
              func_0x0001077ac738();
              if (extraout_x8_28 != 0) {
                func_0x0001077ac7d8();
                func_0x0001077ac888();
                func_0x0001077ac7e8();
                func_0x0001077ac8e0();
                func_0x0001077acae0();
              }
              func_0x0001077ac700();
            }
            else {
              uVar2 = uVar13 == 0x47;
              if ((bool)uVar2) {
                func_0x0001077accf8();
                func_0x0001077a5854();
              }
              else {
                uVar2 = uVar12 == 0x23;
                if (!(bool)uVar2) {
                  ppuVar4 = apuStack_100;
                  func_0x0001077a9324(ppuVar4);
                  func_0x0001077acbb0();
                  uVar2 = uVar12 - 0x25 == 0x1f;
                  switch(uVar12 - 0x25) {
                  case 0:
                    goto code_r0x0001077a7250;
                  case 1:
                    goto code_r0x0001077a73ac;
                  case 3:
                  case 0x10:
                    goto code_r0x0001077a7350;
                  case 5:
                  case 0x16:
                  case 0x1b:
                  case 0x1c:
                  case 0x1f:
                    goto code_r0x0001077a74f8;
                  case 6:
                  case 8:
                    goto code_r0x0001077a7628;
                  case 10:
                    goto code_r0x0001077a7968;
                  case 0xb:
                    goto code_r0x0001077a7878;
                  }
                  break;
                }
                func_0x0001077accf8();
                func_0x0001077a5658();
              }
              func_0x0001077acb4c();
            }
            func_0x0001077acb58();
            func_0x0001077a9324();
            goto LAB_1077a84b8;
          case 1:
          case 4:
          case 6:
          case 9:
          case 0xb:
          case 0xe:
          case 0xf:
          case 0x10:
          case 0x11:
          case 0x13:
          case 0x14:
          case 0x15:
          case 0x16:
          case 0x17:
          case 0x19:
          case 0x1a:
          case 0x1b:
          case 0x1c:
          case 0x1f:
          case 0x20:
            break;
          case 2:
code_r0x0001077a7250:
            func_0x0001077acb40();
            func_0x0001077ac790();
            func_0x000107559dac();
            if ((bStack_c8 & 1) == 0) {
              func_0x0001077ac738();
              if (extraout_x8_30 != 0) {
                func_0x0001077ac7d8();
                func_0x0001077ac888();
                func_0x0001077ac7e8();
                func_0x0001077ac8e0();
                func_0x0001077acae0();
              }
              func_0x0001077ac700();
            }
            else {
              uVar2 = uVar12 == 0x4b;
              if ((bool)uVar2) {
                func_0x0001077acaac();
                ppuVar3 = apuStack_100;
                ppuVar5 = (undefined **)(extraout_x8_31 + 0xb50);
                func_0x0001077ab60c(ppuVar3,ppuVar5);
                if (((ulong)ppuVar3 & 1) == 0) {
                  if ((*(long *)(param_4 + 0x10) == 0) ||
                     (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0)) {
                    func_0x0001077aca9c(*param_8);
                    func_0x0001077acd28(puStack_120 + 0xb50);
                    func_0x0001077ac85c();
                    func_0x0001077aca8c();
                  }
                  else {
                    func_0x0001077acd28(*param_8 + 0xb50);
                  }
                  func_0x0001077ac878();
                  func_0x0001077aca94();
                }
              }
              else {
                uVar2 = uVar12 == 0x25;
                if (!(bool)uVar2) {
                  ppuVar4 = apuStack_100;
                  func_0x0001077a934c(ppuVar4);
                  func_0x0001077acbb0();
                  uVar2 = uVar12 - 0x26 == 0x15;
                  switch(uVar12 - 0x26) {
                  case 0:
                    goto code_r0x0001077a73ac;
                  case 1:
                  case 3:
                  case 6:
                  case 8:
                  case 0xb:
                  case 0xc:
                  case 0xd:
                  case 0xe:
                  case 0x10:
                  case 0x11:
                  case 0x12:
                  case 0x13:
                  case 0x14:
                    break;
                  case 2:
                  case 0xf:
                    goto code_r0x0001077a7350;
                  case 4:
                  case 0x15:
                    goto code_r0x0001077a74f8;
                  case 5:
                  case 7:
                    goto code_r0x0001077a7628;
                  case 9:
                    goto code_r0x0001077a7968;
                  case 10:
                    goto code_r0x0001077a7878;
                  default:
                    if ((uVar12 - 0x40 < 5) &&
                       (uVar2 = (1 << (ulong)(uVar12 - 0x40 & 0x1f) & 0x13U) == 0, !(bool)uVar2))
                    goto code_r0x0001077a74f8;
                  }
                  break;
                }
                func_0x0001077acaac();
                ppuVar3 = apuStack_100;
                ppuVar5 = (undefined **)(extraout_x8_29 + 0x210);
                func_0x0001077ab60c(ppuVar3,ppuVar5);
                if (((ulong)ppuVar3 & 1) == 0) {
                  if ((*(long *)(param_4 + 0x10) == 0) ||
                     (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0)) {
                    func_0x0001077aca9c(*param_8);
                    func_0x0001077acd28(puStack_120 + 0x210);
                    func_0x0001077ac85c();
                    func_0x0001077aca8c();
                  }
                  else {
                    func_0x0001077acd28(*param_8 + 0x210);
                  }
                  func_0x0001077ac878();
                  func_0x0001077aca94();
                }
              }
              func_0x0001077acb4c();
            }
            func_0x0001077acb58();
            func_0x0001077a934c();
            goto LAB_1077a84b8;
          case 3:
            goto code_r0x0001077a73ac;
          case 5:
          case 0x12:
code_r0x0001077a7350:
            func_0x0001077ac924();
            func_0x0001077ac750();
            func_0x0001073398b8();
            if ((bStack_c0 & 1) == 0) {
              func_0x0001077ac738();
              if (extraout_x8_32 != 0) {
                func_0x0001077ac7d8();
                func_0x0001077ac888();
                func_0x0001077ac7e8();
                goto code_r0x0001077a739c;
              }
              goto code_r0x0001077a73a4;
            }
            uVar2 = uVar12 == 0x52;
            if ((bool)uVar2) {
              func_0x0001077acaac();
              ppuVar3 = apuStack_100;
              ppuVar5 = (undefined **)(extraout_x8_35 + 0xcd8);
              func_0x000107785dfc(ppuVar3,ppuVar5);
              if (((ulong)ppuVar3 & 1) == 0) {
                if ((*(long *)(param_4 + 0x10) == 0) ||
                   (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0)) {
                  func_0x0001077aca9c(*param_8);
                  func_0x0001077acd30(puStack_120 + 0xcd8);
                  func_0x0001077ac85c();
                  func_0x0001077aca8c();
                }
                else {
                  func_0x0001077acd30(*param_8 + 0xcd8);
                }
                func_0x0001077ac878();
                func_0x0001077aca94();
              }
            }
            else {
              uVar2 = uVar12 == 0x35;
              if ((bool)uVar2) {
                func_0x0001077acaac();
                ppuVar3 = apuStack_100;
                ppuVar5 = (undefined **)(extraout_x8_34 + 0x620);
                func_0x000107785dfc(ppuVar3,ppuVar5);
                if (((ulong)ppuVar3 & 1) == 0) {
                  if ((*(long *)(param_4 + 0x10) == 0) ||
                     (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0)) {
                    func_0x0001077aca9c(*param_8);
                    func_0x0001077acd30(puStack_120 + 0x620);
                    func_0x0001077ac85c();
                    func_0x0001077aca8c();
                  }
                  else {
                    func_0x0001077acd30(*param_8 + 0x620);
                  }
                  func_0x0001077ac878();
                  func_0x0001077aca94();
                }
              }
              else {
                uVar2 = uVar12 == 0x28;
                if (!(bool)uVar2) {
                  func_0x0001077acd60();
                  func_0x0001077acbb0();
                  if ((0x15 < uVar12 - 0x3b) ||
                     (uVar2 = false, (1 << (ulong)(uVar12 - 0x3b & 0x1f) & 0x300261U) == 0)) {
                    uVar2 = uVar13 - 0x2a == 6;
                    switch(uVar13 - 0x2a) {
                    case 0:
                      break;
                    case 1:
                    case 3:
                      goto code_r0x0001077a7628;
                    default:
                      goto LAB_1077a78cc;
                    case 5:
                      goto code_r0x0001077a7968;
                    case 6:
                      goto code_r0x0001077a7878;
                    }
                  }
                  goto code_r0x0001077a74f8;
                }
                func_0x0001077accf8();
                func_0x0001077a578c();
              }
            }
code_r0x0001077a8558:
            func_0x0001077acb4c();
            goto code_r0x0001077a855c;
          case 7:
          case 0x18:
          case 0x1d:
          case 0x1e:
          case 0x21:
code_r0x0001077a74f8:
            func_0x0001077aca6c();
            func_0x0001077ac750();
            func_0x00010733b904();
            if ((bStack_c8 & 1) == 0) {
              func_0x0001077ac738();
              if (extraout_x8_37 != 0) {
                func_0x0001077ac7d8();
                func_0x0001077ac888();
                func_0x0001077ac7e8();
                goto code_r0x0001077a7590;
              }
              goto code_r0x0001077a7598;
            }
            uVar2 = uVar13 - 0x3b == 9;
            switch(uVar13 - 0x3b) {
            case 0:
              func_0x0001077acaac();
              ppuVar3 = apuStack_100;
              ppuVar5 = (undefined **)(extraout_x8_38 + 0x788);
              func_0x000107786038(ppuVar3,ppuVar5);
              if (((ulong)ppuVar3 & 1) == 0) {
                if ((*(long *)(param_4 + 0x10) == 0) ||
                   (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0)) {
                  func_0x0001077aca9c(*param_8);
                  func_0x0001077acac8(puStack_120 + 0x788);
                  func_0x0001077ac85c();
                  func_0x0001077aca8c();
                }
                else {
                  func_0x0001077acac8(*param_8 + 0x788);
                }
                func_0x0001077ac878();
                func_0x0001077aca94();
              }
              break;
            case 1:
            case 2:
            case 3:
            case 4:
            case 7:
            case 8:
code_r0x0001077a75fc:
              func_0x0001077acd58();
              func_0x0001077acbb0();
              uVar2 = uVar12 - 0x2b == 5;
              switch(uVar12 - 0x2b) {
              case 0:
              case 2:
                goto code_r0x0001077a7628;
              case 4:
                goto code_r0x0001077a7968;
              case 5:
                goto code_r0x0001077a7878;
              }
              goto LAB_1077a78cc;
            case 5:
              func_0x0001077acaac();
              ppuVar3 = apuStack_100;
              ppuVar5 = (undefined **)(extraout_x8_43 + 0x8a0);
              func_0x000107786038(ppuVar3,ppuVar5);
              if (((ulong)ppuVar3 & 1) == 0) {
                if ((*(long *)(param_4 + 0x10) == 0) ||
                   (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0)) {
                  func_0x0001077aca9c(*param_8);
                  func_0x0001077acac8(puStack_120 + 0x8a0);
                  func_0x0001077ac85c();
                  func_0x0001077aca8c();
                }
                else {
                  func_0x0001077acac8(*param_8 + 0x8a0);
                }
                func_0x0001077ac878();
                func_0x0001077aca94();
              }
              break;
            case 6:
              func_0x0001077acaac();
              ppuVar3 = apuStack_100;
              ppuVar5 = (undefined **)(extraout_x8_42 + 0x8d8);
              func_0x000107786038(ppuVar3,ppuVar5);
              if (((ulong)ppuVar3 & 1) == 0) {
                if ((*(long *)(param_4 + 0x10) == 0) ||
                   (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0)) {
                  func_0x0001077aca9c(*param_8);
                  func_0x0001077acac8(puStack_120 + 0x8d8);
                  func_0x0001077ac85c();
                  func_0x0001077aca8c();
                }
                else {
                  func_0x0001077acac8(*param_8 + 0x8d8);
                }
                func_0x0001077ac878();
                func_0x0001077aca94();
              }
              break;
            case 9:
              func_0x0001077acaac();
              ppuVar3 = apuStack_100;
              ppuVar5 = (undefined **)(extraout_x8_41 + 0x9a0);
              func_0x000107786038(ppuVar3,ppuVar5);
              if (((ulong)ppuVar3 & 1) == 0) {
                if ((*(long *)(param_4 + 0x10) == 0) ||
                   (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0)) {
                  func_0x0001077aca9c(*param_8);
                  func_0x0001077acac8(puStack_120 + 0x9a0);
                  func_0x0001077ac85c();
                  func_0x0001077aca8c();
                }
                else {
                  func_0x0001077acac8(*param_8 + 0x9a0);
                }
                func_0x0001077ac878();
                func_0x0001077aca94();
              }
              break;
            default:
              uVar2 = uVar12 == 0x54;
              if ((bool)uVar2) {
                func_0x0001077acaac();
                ppuVar3 = apuStack_100;
                ppuVar5 = (undefined **)(extraout_x8_52 + 0xd50);
                func_0x000107786038(ppuVar3,ppuVar5);
                if (((ulong)ppuVar3 & 1) == 0) {
                  if ((*(long *)(param_4 + 0x10) == 0) ||
                     (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0)) {
                    func_0x0001077aca9c(*param_8);
                    func_0x0001077acac8(puStack_120 + 0xd50);
                    func_0x0001077ac85c();
                    func_0x0001077aca8c();
                  }
                  else {
                    func_0x0001077acac8(*param_8 + 0xd50);
                  }
                  func_0x0001077ac878();
                  func_0x0001077aca94();
                }
              }
              else {
                uVar2 = uVar12 == 0x4f;
                if ((bool)uVar2) {
                  func_0x0001077acaac();
                  ppuVar3 = apuStack_100;
                  ppuVar5 = (undefined **)(extraout_x8_54 + 0xc30);
                  func_0x000107786038(ppuVar3,ppuVar5);
                  if (((ulong)ppuVar3 & 1) == 0) {
                    if ((*(long *)(param_4 + 0x10) == 0) ||
                       (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0)) {
                      func_0x0001077aca9c(*param_8);
                      func_0x0001077acac8(puStack_120 + 0xc30);
                      func_0x0001077ac85c();
                      func_0x0001077aca8c();
                    }
                    else {
                      func_0x0001077acac8(*param_8 + 0xc30);
                    }
                    func_0x0001077ac878();
                    func_0x0001077aca94();
                  }
                }
                else {
                  uVar2 = uVar12 == 0x50;
                  if ((bool)uVar2) {
                    func_0x0001077acaac();
                    ppuVar3 = apuStack_100;
                    ppuVar5 = (undefined **)(extraout_x8_53 + 0xc68);
                    func_0x000107786038(ppuVar3,ppuVar5);
                    if (((ulong)ppuVar3 & 1) == 0) {
                      if ((*(long *)(param_4 + 0x10) == 0) ||
                         (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0)) {
                        func_0x0001077aca9c(*param_8);
                        func_0x0001077acac8(puStack_120 + 0xc68);
                        func_0x0001077ac85c();
                        func_0x0001077aca8c();
                      }
                      else {
                        func_0x0001077acac8(*param_8 + 0xc68);
                      }
                      func_0x0001077ac878();
                      func_0x0001077aca94();
                    }
                  }
                  else {
                    uVar2 = uVar12 == 0x2a;
                    if (!(bool)uVar2) goto code_r0x0001077a75fc;
                    func_0x0001077acaac();
                    ppuVar3 = apuStack_100;
                    ppuVar5 = (undefined **)(extraout_x8_36 + 0x398);
                    func_0x000107786038(ppuVar3,ppuVar5);
                    if (((ulong)ppuVar3 & 1) == 0) {
                      if ((*(long *)(param_4 + 0x10) == 0) ||
                         (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0)) {
                        func_0x0001077aca9c(*param_8);
                        func_0x0001077acac8(puStack_120 + 0x398);
                        func_0x0001077ac85c();
                        func_0x0001077aca8c();
                      }
                      else {
                        func_0x0001077acac8(*param_8 + 0x398);
                      }
                      func_0x0001077ac878();
                      func_0x0001077aca94();
                    }
                  }
                }
              }
            }
code_r0x0001077a84ac:
            func_0x0001077acb4c();
            goto code_r0x0001077a84b0;
          case 8:
          case 10:
            goto code_r0x0001077a7628;
          case 0xc:
            goto code_r0x0001077a7968;
          case 0xd:
            goto code_r0x0001077a7878;
          default:
            uVar2 = uVar13 - 0x47 == 0xb;
            switch(uVar13 - 0x47) {
            case 0:
              goto code_r0x0001077a71ac;
            case 4:
              goto code_r0x0001077a7250;
            case 8:
            case 9:
              goto code_r0x0001077a74f8;
            case 0xb:
              goto code_r0x0001077a7350;
            }
          }
          goto LAB_1077a78cc;
        case 2:
          func_0x0001077accf8();
          func_0x0001077a56c4();
          break;
        case 5:
          func_0x0001077acaac();
          ppuVar3 = apuStack_100;
          ppuVar5 = (undefined **)(extraout_x8_15 + 0x2e8);
          func_0x000107785b50(ppuVar3,ppuVar5);
          if (((ulong)ppuVar3 & 1) == 0) {
            if ((*(long *)(param_4 + 0x10) == 0) || (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0))
            {
              func_0x0001077aca9c(*param_8);
              func_0x0001077acaf0(puStack_120 + 0x2e8);
              func_0x0001077ac85c();
              func_0x0001077aca8c();
            }
            else {
              func_0x0001077acaf0(*param_8 + 0x2e8);
            }
            func_0x0001077ac878();
            func_0x0001077aca94();
          }
          break;
        case 7:
          func_0x0001077acaac();
          ppuVar3 = apuStack_100;
          ppuVar5 = (undefined **)(extraout_x8_14 + 0x360);
          func_0x000107785b50(ppuVar3,ppuVar5);
          if (((ulong)ppuVar3 & 1) == 0) {
            if ((*(long *)(param_4 + 0x10) == 0) || (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0))
            {
              func_0x0001077aca9c(*param_8);
              func_0x0001077acaf0(puStack_120 + 0x360);
              func_0x0001077ac85c();
              func_0x0001077aca8c();
            }
            else {
              func_0x0001077acaf0(*param_8 + 0x360);
            }
            func_0x0001077ac878();
            func_0x0001077aca94();
          }
          break;
        default:
          uVar2 = uVar12 == 0x32;
          if ((bool)uVar2) {
            func_0x0001077acaac();
            ppuVar3 = apuStack_100;
            ppuVar5 = (undefined **)(extraout_x8_24 + 0x578);
            func_0x000107785b50(ppuVar3,ppuVar5);
            if (((ulong)ppuVar3 & 1) == 0) {
              if ((*(long *)(param_4 + 0x10) == 0) ||
                 (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0)) {
                func_0x0001077aca9c(*param_8);
                func_0x0001077acaf0(puStack_120 + 0x578);
                func_0x0001077ac85c();
                func_0x0001077aca8c();
              }
              else {
                func_0x0001077acaf0(*param_8 + 0x578);
              }
              func_0x0001077ac878();
              func_0x0001077aca94();
            }
          }
          else {
            uVar2 = uVar12 == 0x33;
            if ((bool)uVar2) {
              func_0x0001077acaac();
              ppuVar3 = apuStack_100;
              ppuVar5 = (undefined **)(extraout_x8_23 + 0x5b0);
              func_0x000107785b50(ppuVar3,ppuVar5);
              if (((ulong)ppuVar3 & 1) == 0) {
                if ((*(long *)(param_4 + 0x10) == 0) ||
                   (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0)) {
                  func_0x0001077aca9c(*param_8);
                  func_0x0001077acaf0(puStack_120 + 0x5b0);
                  func_0x0001077ac85c();
                  func_0x0001077aca8c();
                }
                else {
                  func_0x0001077acaf0(*param_8 + 0x5b0);
                }
                func_0x0001077ac878();
                func_0x0001077aca94();
              }
            }
            else {
              uVar2 = uVar12 == 0x46;
              if ((bool)uVar2) {
                func_0x0001077acaac();
                ppuVar3 = apuStack_100;
                ppuVar5 = (undefined **)(extraout_x8_20 + 0xa10);
                func_0x000107785b50(ppuVar3,ppuVar5);
                if (((ulong)ppuVar3 & 1) == 0) {
                  if ((*(long *)(param_4 + 0x10) == 0) ||
                     (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0)) {
                    func_0x0001077aca9c(*param_8);
                    func_0x0001077acaf0(puStack_120 + 0xa10);
                    func_0x0001077ac85c();
                    func_0x0001077aca8c();
                  }
                  else {
                    func_0x0001077acaf0(*param_8 + 0xa10);
                  }
                  func_0x0001077ac878();
                  func_0x0001077aca94();
                }
              }
              else {
                uVar2 = uVar12 == 0x4a;
                if ((bool)uVar2) {
                  func_0x0001077acaac();
                  ppuVar3 = apuStack_100;
                  ppuVar5 = (undefined **)(extraout_x8_22 + 0xb18);
                  func_0x000107785b50(ppuVar3,ppuVar5);
                  if (((ulong)ppuVar3 & 1) == 0) {
                    if ((*(long *)(param_4 + 0x10) == 0) ||
                       (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0)) {
                      func_0x0001077aca9c(*param_8);
                      func_0x0001077acaf0(puStack_120 + 0xb18);
                      func_0x0001077ac85c();
                      func_0x0001077aca8c();
                    }
                    else {
                      func_0x0001077acaf0(*param_8 + 0xb18);
                    }
                    func_0x0001077ac878();
                    func_0x0001077aca94();
                  }
                }
                else {
                  uVar2 = uVar12 == 0x4d;
                  if ((bool)uVar2) {
                    func_0x0001077acaac();
                    ppuVar3 = apuStack_100;
                    ppuVar5 = (undefined **)(extraout_x8_21 + 0xbc0);
                    func_0x000107785b50(ppuVar3,ppuVar5);
                    if (((ulong)ppuVar3 & 1) == 0) {
                      if ((*(long *)(param_4 + 0x10) == 0) ||
                         (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0)) {
                        func_0x0001077aca9c(*param_8);
                        func_0x0001077acaf0(puStack_120 + 0xbc0);
                        func_0x0001077ac85c();
                        func_0x0001077aca8c();
                      }
                      else {
                        func_0x0001077acaf0(*param_8 + 0xbc0);
                      }
                      func_0x0001077ac878();
                      func_0x0001077aca94();
                    }
                  }
                  else {
                    uVar2 = uVar12 == 0x53;
                    if (!(bool)uVar2) goto code_r0x0001077a6880;
                    func_0x0001077acaac();
                    ppuVar3 = apuStack_100;
                    ppuVar5 = (undefined **)(extraout_x8_07 + 0xd18);
                    func_0x000107785b50(ppuVar3,ppuVar5);
                    if (((ulong)ppuVar3 & 1) == 0) {
                      if ((*(long *)(param_4 + 0x10) == 0) ||
                         (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0)) {
                        func_0x0001077aca9c(*param_8);
                        func_0x0001077acaf0(puStack_120 + 0xd18);
                        func_0x0001077ac85c();
                        func_0x0001077aca8c();
                      }
                      else {
                        func_0x0001077acaf0(*param_8 + 0xd18);
                      }
                      func_0x0001077ac878();
                      func_0x0001077aca94();
                    }
                  }
                }
              }
            }
          }
        }
        goto code_r0x0001077a80e8;
      }
      func_0x0001077ac738();
      if (extraout_x8_08 != 0) {
        func_0x0001077ac7d8();
        func_0x0001077ac888();
        func_0x0001077ac7e8();
        goto code_r0x0001077a6814;
      }
code_r0x0001077a681c:
      func_0x0001077ac700();
      goto code_r0x0001077a80ec;
    case 0x23:
    case 0x47:
      goto code_r0x0001077a71ac;
    case 0x25:
    case 0x4b:
      goto code_r0x0001077a7250;
    case 0x26:
code_r0x0001077a73ac:
      func_0x0001077ac9a0();
      func_0x0001077ac750();
      func_0x0001077848dc();
      if ((bStack_60 & 1) == 0) {
        func_0x0001077ac738();
        if (extraout_x8_33 != 0) {
          func_0x0001077ac7d8();
          func_0x0001077ac888();
          func_0x0001077ac7e8();
          func_0x0001077ac8e0();
          func_0x0001077acae0();
        }
        func_0x0001077ac700();
      }
      else {
        func_0x0001077accf8();
        func_0x0001077a5728();
        func_0x0001077acb4c();
      }
      func_0x0001077acb58();
      func_0x00010754f474();
      break;
    case 0x28:
    case 0x35:
    case 0x52:
      goto code_r0x0001077a7350;
    case 0x2a:
    case 0x3b:
    case 0x40:
    case 0x41:
    case 0x44:
    case 0x4f:
    case 0x50:
    case 0x54:
      goto code_r0x0001077a74f8;
    case 0x2b:
    case 0x2d:
    case 0x55:
    case 0x58:
code_r0x0001077a7628:
      func_0x0001077acb40();
      func_0x0001077ac790();
      func_0x00010755780c();
      if ((bStack_c8 & 1) == 0) {
        func_0x0001077ac738();
        if (extraout_x8_40 != 0) {
          func_0x0001077ac7d8();
          func_0x0001077ac888();
          func_0x0001077ac7e8();
          func_0x0001077ac8e0();
          func_0x0001077acae0();
        }
        func_0x0001077ac700();
      }
      else {
        uVar2 = uVar12 == 0x58;
        if ((bool)uVar2) {
          func_0x0001077acaac();
          ppuVar3 = apuStack_100;
          ppuVar5 = (undefined **)(extraout_x8_46 + 0xe30);
          func_0x0001077ab73c(ppuVar3,ppuVar5);
          if (((ulong)ppuVar3 & 1) == 0) {
            if ((*(long *)(param_4 + 0x10) == 0) || (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0))
            {
              func_0x0001077aca9c(*param_8);
              func_0x0001077acc50(puStack_120 + 0xe30);
              func_0x0001077ac85c();
              func_0x0001077aca8c();
            }
            else {
              func_0x0001077acc50(*param_8 + 0xe30);
            }
            func_0x0001077ac878();
            func_0x0001077aca94();
          }
        }
        else {
          uVar2 = uVar12 == 0x2d;
          if ((bool)uVar2) {
            func_0x0001077acaac();
            ppuVar3 = apuStack_100;
            ppuVar5 = (undefined **)(extraout_x8_44 + 0x440);
            func_0x0001077ab73c(ppuVar3,ppuVar5);
            if (((ulong)ppuVar3 & 1) == 0) {
              if ((*(long *)(param_4 + 0x10) == 0) ||
                 (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0)) {
                func_0x0001077aca9c(*param_8);
                func_0x0001077acc50(puStack_120 + 0x440);
                func_0x0001077ac85c();
                func_0x0001077aca8c();
              }
              else {
                func_0x0001077acc50(*param_8 + 0x440);
              }
              func_0x0001077ac878();
              func_0x0001077aca94();
            }
          }
          else {
            uVar2 = uVar12 == 0x55;
            if ((bool)uVar2) {
              func_0x0001077acaac();
              ppuVar3 = apuStack_100;
              ppuVar5 = (undefined **)(extraout_x8_45 + 0xd88);
              func_0x0001077ab73c(ppuVar3,ppuVar5);
              if (((ulong)ppuVar3 & 1) == 0) {
                if ((*(long *)(param_4 + 0x10) == 0) ||
                   (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0)) {
                  func_0x0001077aca9c(*param_8);
                  func_0x0001077acc50(puStack_120 + 0xd88);
                  func_0x0001077ac85c();
                  func_0x0001077aca8c();
                }
                else {
                  func_0x0001077acc50(*param_8 + 0xd88);
                }
                func_0x0001077ac878();
                func_0x0001077aca94();
              }
            }
            else {
              uVar2 = uVar12 == 0x2b;
              if (!(bool)uVar2) {
                ppuVar4 = apuStack_100;
                func_0x0001077a9370(ppuVar4);
                func_0x0001077acbb0();
                uVar2 = true;
                if (uVar12 == 0x2f) goto code_r0x0001077a7968;
                uVar2 = true;
                if (uVar12 == 0x30) goto code_r0x0001077a7878;
                goto LAB_1077a78cc;
              }
              func_0x0001077acaac();
              ppuVar3 = apuStack_100;
              ppuVar5 = (undefined **)(extraout_x8_39 + 0x3d0);
              func_0x0001077ab73c(ppuVar3,ppuVar5);
              if (((ulong)ppuVar3 & 1) == 0) {
                if ((*(long *)(param_4 + 0x10) == 0) ||
                   (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0)) {
                  func_0x0001077aca9c(*param_8);
                  func_0x0001077acc50(puStack_120 + 0x3d0);
                  func_0x0001077ac85c();
                  func_0x0001077aca8c();
                }
                else {
                  func_0x0001077acc50(*param_8 + 0x3d0);
                }
                func_0x0001077ac878();
                func_0x0001077aca94();
              }
            }
          }
        }
        func_0x0001077acb4c();
      }
      func_0x0001077acb58();
      func_0x0001077a9370();
      break;
    case 0x2f:
code_r0x0001077a7968:
      func_0x0001077acb40();
      func_0x0001077ac790();
      func_0x0001075579e8();
      if ((bStack_c8 & 1) == 0) {
        func_0x0001077ac738();
        if (extraout_x8_51 != 0) {
          func_0x0001077ac7d8();
          func_0x0001077ac888();
          func_0x0001077ac7e8();
          func_0x0001077ac8e0();
          func_0x0001077acae0();
        }
        func_0x0001077ac700();
      }
      else {
        func_0x0001077acaac();
        ppuVar3 = apuStack_100;
        ppuVar5 = (undefined **)(extraout_x8_49 + 0x4b0);
        func_0x0001077ab86c(ppuVar3,ppuVar5);
        if (((ulong)ppuVar3 & 1) == 0) {
          if ((*(long *)(param_4 + 0x10) == 0) || (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0)) {
            func_0x0001077aca9c(*param_8);
            func_0x0001077acea4(puStack_120);
            func_0x0001077ac85c();
            func_0x0001077aca8c();
          }
          else {
            func_0x0001077acea4(*param_8);
          }
          func_0x0001077ac878();
          func_0x0001077aca94();
        }
        func_0x0001077acb4c();
      }
      func_0x0001077acb58();
      func_0x0001077a9394();
      break;
    case 0x30:
code_r0x0001077a7878:
      func_0x0001077aca6c();
      func_0x0001077ac750();
      func_0x000107343028();
      if ((bStack_b8 & 1) == 0) {
        func_0x0001077ac738();
        if (extraout_x8_50 != 0) {
          func_0x0001077ac7d8();
          func_0x0001077ac888();
          func_0x0001077ac7e8();
          func_0x0001077ac8e0();
          func_0x0001077acae0();
        }
        func_0x0001077ac700();
      }
      else {
        func_0x0001077acaac();
        ppuVar3 = apuStack_100;
        ppuVar5 = (undefined **)(extraout_x8_47 + 0x4e8);
        func_0x00010778c12c(ppuVar3,ppuVar5);
        if (((ulong)ppuVar3 & 1) == 0) {
          if ((*(long *)(param_4 + 0x10) == 0) || (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0)) {
            func_0x0001077aca9c(*param_8);
            func_0x0001077aced4(puStack_120);
            func_0x0001077ac85c();
            func_0x0001077aca8c();
          }
          else {
            func_0x0001077aced4(*param_8);
          }
          func_0x0001077ac878();
          func_0x0001077aca94();
        }
        func_0x0001077acb4c();
      }
      func_0x0001077acb58();
      func_0x000107343508();
    }
    goto LAB_1077a84b8;
  }
LAB_1077a78cc:
  uVar2 = uVar12 - 0x31 == 0x1b;
  switch(uVar12 - 0x31) {
  case 0:
  case 6:
  case 0x12:
  case 0x18:
    func_0x0001077ac924();
    func_0x0001077ac750();
    func_0x00010733d400();
    if ((bStack_b8 & 1) == 0) {
      func_0x0001077ac738();
      if (extraout_x8_56 != 0) {
        func_0x0001077ac7d8();
        func_0x0001077ac888();
        func_0x0001077ac7e8();
        func_0x0001077ac8e0();
        func_0x0001077acae0();
      }
      func_0x0001077ac700();
    }
    else {
      uVar2 = uVar12 == 0x49;
      if ((bool)uVar2) {
        func_0x0001077acaac();
        ppuVar3 = apuStack_100;
        ppuVar5 = (undefined **)(extraout_x8_66 + 0xad0);
        func_0x000107798a18(ppuVar3,ppuVar5);
        if (((ulong)ppuVar3 & 1) == 0) {
          if ((*(long *)(param_4 + 0x10) == 0) || (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0)) {
            func_0x0001077aca9c(*param_8);
            func_0x0001077acc58(puStack_120 + 0xad0);
            func_0x0001077ac85c();
            func_0x0001077aca8c();
          }
          else {
            func_0x0001077acc58(*param_8 + 0xad0);
          }
          func_0x0001077ac878();
          func_0x0001077aca94();
        }
      }
      else {
        uVar2 = uVar12 == 0x37;
        if ((bool)uVar2) {
          func_0x0001077acaac();
          ppuVar3 = apuStack_100;
          ppuVar5 = (undefined **)(extraout_x8_64 + 0x698);
          func_0x000107798a18(ppuVar3,ppuVar5);
          if (((ulong)ppuVar3 & 1) == 0) {
            if ((*(long *)(param_4 + 0x10) == 0) || (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0))
            {
              func_0x0001077aca9c(*param_8);
              func_0x0001077acc58(puStack_120 + 0x698);
              func_0x0001077ac85c();
              func_0x0001077aca8c();
            }
            else {
              func_0x0001077acc58(*param_8 + 0x698);
            }
            func_0x0001077ac878();
            func_0x0001077aca94();
          }
        }
        else {
          uVar2 = uVar12 == 0x43;
          if ((bool)uVar2) {
            func_0x0001077acaac();
            ppuVar3 = apuStack_100;
            ppuVar5 = (undefined **)(extraout_x8_65 + 0x958);
            func_0x000107798a18(ppuVar3,ppuVar5);
            if (((ulong)ppuVar3 & 1) == 0) {
              if ((*(long *)(param_4 + 0x10) == 0) ||
                 (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0)) {
                func_0x0001077aca9c(*param_8);
                func_0x0001077acc58(puStack_120 + 0x958);
                func_0x0001077ac85c();
                func_0x0001077aca8c();
              }
              else {
                func_0x0001077acc58(*param_8 + 0x958);
              }
              func_0x0001077ac878();
              func_0x0001077aca94();
            }
          }
          else {
            uVar2 = uVar12 == 0x31;
            if (!(bool)uVar2) {
              ppuVar4 = apuStack_100;
              func_0x00010733d41c(ppuVar4);
              func_0x0001077acbb0();
              uVar2 = uVar12 - 0x36 == 9;
              switch(uVar12 - 0x36) {
              case 0:
                goto code_r0x0001077a81f4;
              case 1:
              case 4:
              case 5:
              case 6:
              case 7:
              case 8:
                break;
              case 2:
                goto code_r0x0001077a826c;
              case 3:
                goto code_r0x0001077a8248;
              case 9:
                goto code_r0x0001077a82c0;
              default:
                uVar2 = true;
                if (uVar12 == 0x42) goto code_r0x0001077a8698;
                uVar2 = true;
                if (uVar12 == 0x45) goto code_r0x0001077a8644;
                uVar2 = false;
                if (uVar12 == 0x48) goto code_r0x0001077a8580;
              }
              goto LAB_1077a85d8;
            }
            func_0x0001077acaac();
            ppuVar3 = apuStack_100;
            ppuVar5 = (undefined **)(extraout_x8_48 + 0x530);
            func_0x000107798a18(ppuVar3,ppuVar5);
            if (((ulong)ppuVar3 & 1) == 0) {
              if ((*(long *)(param_4 + 0x10) == 0) ||
                 (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0)) {
                func_0x0001077aca9c(*param_8);
                func_0x0001077acc58(puStack_120 + 0x530);
                func_0x0001077ac85c();
                func_0x0001077aca8c();
              }
              else {
                func_0x0001077acc58(*param_8 + 0x530);
              }
              func_0x0001077ac878();
              func_0x0001077aca94();
            }
          }
        }
      }
      func_0x0001077acb4c();
    }
    func_0x0001077acb58();
    func_0x00010733d41c();
    break;
  case 1:
  case 2:
  case 3:
  case 4:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xf:
  case 0x10:
  case 0x13:
  case 0x15:
  case 0x16:
  case 0x19:
  case 0x1a:
LAB_1077a85d8:
    puStack_120 = (undefined *)0x0;
    lStack_118 = 0;
    lStack_110 = 0;
    ppuVar5 = &puStack_120;
    func_0x00010754bb48(apuStack_100,param_7,ppuVar5,param_8);
    if ((bStack_d8 & 1) == 0) {
      param_1[1] = lStack_118;
      *param_1 = (long)puStack_120;
      param_1[2] = lStack_110;
      lStack_118 = 0;
      lStack_110 = 0;
      puStack_120 = (undefined *)0x0;
      uVar9 = 1;
      goto LAB_1077a8bd0;
    }
    uVar2 = uVar12 - 0x11 == 0x10;
    switch(uVar12 - 0x11) {
    case 0:
      if ((*(long *)(param_4 + 0x10) == 0) || (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0)) {
        func_0x0001077acb38(*(undefined8 *)(param_4 + 8));
        func_0x0001077ace2c(apuStack_148[0]);
code_r0x0001077a8bb8:
        ppuVar5 = apuStack_148;
        func_0x0001077ab434(param_4 + 8,ppuVar5);
        func_0x0001077a908c(apuStack_148);
      }
      else {
        func_0x0001077ace2c(*(undefined8 *)(param_4 + 8));
      }
      goto LAB_1077a8bcc;
    case 1:
      if ((*(long *)(param_4 + 0x10) == 0) || (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0)) {
        func_0x0001077acb38(*(undefined8 *)(param_4 + 8));
        func_0x0001077acc10(apuStack_148[0]);
        *(undefined8 *)(extraout_x8_83 + 0x1018) = in_register_00005008;
        *(undefined8 *)(extraout_x8_83 + 0x1010) = param_2;
        *(undefined8 *)(extraout_x8_83 + 0x1028) = in_register_00005028;
        *(undefined8 *)(extraout_x8_83 + 0x1020) = param_3;
        lVar11 = extraout_x9_04;
code_r0x0001077a8b1c:
        *(undefined1 *)(lVar11 + 0x20) = uStack_e0;
        goto code_r0x0001077a8bb8;
      }
      func_0x0001077acc10(*(undefined8 *)(param_4 + 8));
      *(undefined8 *)(extraout_x8_90 + 0x1018) = in_register_00005008;
      *(undefined8 *)(extraout_x8_90 + 0x1010) = param_2;
      *(undefined8 *)(extraout_x8_90 + 0x1028) = in_register_00005028;
      *(undefined8 *)(extraout_x8_90 + 0x1020) = param_3;
      lVar11 = extraout_x9_11;
      goto code_r0x0001077a8cc8;
    case 2:
      if ((*(long *)(param_4 + 0x10) == 0) || (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0)) {
        func_0x0001077acb38(*(undefined8 *)(param_4 + 8));
        func_0x0001077acc10(apuStack_148[0]);
        *(undefined8 *)(extraout_x8_80 + 0x1088) = in_register_00005008;
        *(undefined8 *)(extraout_x8_80 + 0x1080) = param_2;
        *(undefined8 *)(extraout_x8_80 + 0x1098) = in_register_00005028;
        *(undefined8 *)(extraout_x8_80 + 0x1090) = param_3;
        lVar11 = extraout_x9_01;
        goto code_r0x0001077a8b1c;
      }
      func_0x0001077acc10(*(undefined8 *)(param_4 + 8));
      *(undefined8 *)(extraout_x8_87 + 0x1088) = in_register_00005008;
      *(undefined8 *)(extraout_x8_87 + 0x1080) = param_2;
      *(undefined8 *)(extraout_x8_87 + 0x1098) = in_register_00005028;
      *(undefined8 *)(extraout_x8_87 + 0x1090) = param_3;
      lVar11 = extraout_x9_08;
      goto code_r0x0001077a8cc8;
    case 3:
      if ((*(long *)(param_4 + 0x10) == 0) || (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0)) {
        func_0x0001077acb38(*(undefined8 *)(param_4 + 8));
        func_0x0001077acc10(apuStack_148[0]);
        *(undefined8 *)(extraout_x8_82 + 0x10e8) = in_register_00005008;
        *(undefined8 *)(extraout_x8_82 + 0x10e0) = param_2;
        *(undefined8 *)(extraout_x8_82 + 0x10f8) = in_register_00005028;
        *(undefined8 *)(extraout_x8_82 + 0x10f0) = param_3;
        lVar11 = extraout_x9_03;
        goto code_r0x0001077a8b1c;
      }
      func_0x0001077acc10(*(undefined8 *)(param_4 + 8));
      *(undefined8 *)(extraout_x8_89 + 0x10e8) = in_register_00005008;
      *(undefined8 *)(extraout_x8_89 + 0x10e0) = param_2;
      *(undefined8 *)(extraout_x8_89 + 0x10f8) = in_register_00005028;
      *(undefined8 *)(extraout_x8_89 + 0x10f0) = param_3;
      lVar11 = extraout_x9_10;
      goto code_r0x0001077a8cc8;
    case 4:
      if ((*(long *)(param_4 + 0x10) == 0) || (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0)) {
        func_0x0001077acb38(*(undefined8 *)(param_4 + 8));
        func_0x0001077acc10(apuStack_148[0]);
        *(undefined8 *)(extraout_x8_79 + 0x1148) = in_register_00005008;
        *(undefined8 *)(extraout_x8_79 + 0x1140) = param_2;
        *(undefined8 *)(extraout_x8_79 + 0x1158) = in_register_00005028;
        *(undefined8 *)(extraout_x8_79 + 0x1150) = param_3;
        lVar11 = extraout_x9_00;
        goto code_r0x0001077a8b1c;
      }
      func_0x0001077acc10(*(undefined8 *)(param_4 + 8));
      *(undefined8 *)(extraout_x8_86 + 0x1148) = in_register_00005008;
      *(undefined8 *)(extraout_x8_86 + 0x1140) = param_2;
      *(undefined8 *)(extraout_x8_86 + 0x1158) = in_register_00005028;
      *(undefined8 *)(extraout_x8_86 + 0x1150) = param_3;
      lVar11 = extraout_x9_07;
      goto code_r0x0001077a8cc8;
    case 5:
      if ((*(long *)(param_4 + 0x10) == 0) || (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0)) {
        func_0x0001077acb38(*(undefined8 *)(param_4 + 8));
        func_0x0001077acc10(apuStack_148[0]);
        *(undefined8 *)(extraout_x8_84 + 0x11a8) = in_register_00005008;
        *(undefined8 *)(extraout_x8_84 + 0x11a0) = param_2;
        *(undefined8 *)(extraout_x8_84 + 0x11b8) = in_register_00005028;
        *(undefined8 *)(extraout_x8_84 + 0x11b0) = param_3;
        lVar11 = extraout_x9_05;
        goto code_r0x0001077a8b1c;
      }
      func_0x0001077acc10(*(undefined8 *)(param_4 + 8));
      *(undefined8 *)(extraout_x8_91 + 0x11a8) = in_register_00005008;
      *(undefined8 *)(extraout_x8_91 + 0x11a0) = param_2;
      *(undefined8 *)(extraout_x8_91 + 0x11b8) = in_register_00005028;
      *(undefined8 *)(extraout_x8_91 + 0x11b0) = param_3;
      lVar11 = extraout_x9_12;
      goto code_r0x0001077a8cc8;
    case 6:
      if ((*(long *)(param_4 + 0x10) == 0) || (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0)) {
        func_0x0001077acb38(*(undefined8 *)(param_4 + 8));
code_r0x0001077a8bb4:
        func_0x0001077ace08(apuStack_148[0]);
        goto code_r0x0001077a8bb8;
      }
      uVar10 = *(undefined8 *)(param_4 + 8);
      break;
    case 7:
      if ((*(long *)(param_4 + 0x10) == 0) || (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0)) {
        func_0x0001077acb38(*(undefined8 *)(param_4 + 8));
        goto code_r0x0001077a8bb4;
      }
      uVar10 = *(undefined8 *)(param_4 + 8);
      break;
    case 8:
      if ((*(long *)(param_4 + 0x10) == 0) || (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0)) {
        func_0x0001077acb38(*(undefined8 *)(param_4 + 8));
        goto code_r0x0001077a8bb4;
      }
      uVar10 = *(undefined8 *)(param_4 + 8);
      break;
    case 9:
      if ((*(long *)(param_4 + 0x10) == 0) || (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0)) {
        func_0x0001077acb38(*(undefined8 *)(param_4 + 8));
        goto code_r0x0001077a8bb4;
      }
      uVar10 = *(undefined8 *)(param_4 + 8);
      break;
    case 10:
      if ((*(long *)(param_4 + 0x10) == 0) || (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0)) {
        func_0x0001077acb38(*(undefined8 *)(param_4 + 8));
        goto code_r0x0001077a8bb4;
      }
      uVar10 = *(undefined8 *)(param_4 + 8);
      break;
    case 0xb:
      if ((*(long *)(param_4 + 0x10) == 0) || (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0)) {
        func_0x0001077acb38(*(undefined8 *)(param_4 + 8));
        goto code_r0x0001077a8bb4;
      }
      uVar10 = *(undefined8 *)(param_4 + 8);
      break;
    case 0xc:
      if ((*(long *)(param_4 + 0x10) == 0) || (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0)) {
        func_0x0001077acb38(*(undefined8 *)(param_4 + 8));
        goto code_r0x0001077a8bb4;
      }
      uVar10 = *(undefined8 *)(param_4 + 8);
      break;
    case 0xd:
      if ((*(long *)(param_4 + 0x10) == 0) || (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0)) {
        func_0x0001077acb38(*(undefined8 *)(param_4 + 8));
        goto code_r0x0001077a8bb4;
      }
      uVar10 = *(undefined8 *)(param_4 + 8);
      break;
    case 0xe:
      if ((*(long *)(param_4 + 0x10) == 0) || (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0)) {
        func_0x0001077acb38(*(undefined8 *)(param_4 + 8));
        goto code_r0x0001077a8bb4;
      }
      uVar10 = *(undefined8 *)(param_4 + 8);
      break;
    case 0xf:
      if ((*(long *)(param_4 + 0x10) == 0) || (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0)) {
        func_0x0001077acb38(*(undefined8 *)(param_4 + 8));
        func_0x0001077acc10(apuStack_148[0]);
        *(undefined8 *)(extraout_x8_81 + 0x1598) = in_register_00005008;
        *(undefined8 *)(extraout_x8_81 + 0x1590) = param_2;
        *(undefined8 *)(extraout_x8_81 + 0x15a8) = in_register_00005028;
        *(undefined8 *)(extraout_x8_81 + 0x15a0) = param_3;
        lVar11 = extraout_x9_02;
        goto code_r0x0001077a8b1c;
      }
      func_0x0001077acc10(*(undefined8 *)(param_4 + 8));
      *(undefined8 *)(extraout_x8_88 + 0x1598) = in_register_00005008;
      *(undefined8 *)(extraout_x8_88 + 0x1590) = param_2;
      *(undefined8 *)(extraout_x8_88 + 0x15a8) = in_register_00005028;
      *(undefined8 *)(extraout_x8_88 + 0x15a0) = param_3;
      lVar11 = extraout_x9_09;
      goto code_r0x0001077a8cc8;
    case 0x10:
      if ((*(long *)(param_4 + 0x10) == 0) || (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0)) {
        func_0x0001077acb38(*(undefined8 *)(param_4 + 8));
        func_0x0001077acc10(apuStack_148[0]);
        *(undefined8 *)(extraout_x8_78 + 0x15f8) = in_register_00005008;
        *(undefined8 *)(extraout_x8_78 + 0x15f0) = param_2;
        *(undefined8 *)(extraout_x8_78 + 0x1608) = in_register_00005028;
        *(undefined8 *)(extraout_x8_78 + 0x1600) = param_3;
        lVar11 = extraout_x9;
        goto code_r0x0001077a8b1c;
      }
      func_0x0001077acc10(*(undefined8 *)(param_4 + 8));
      *(undefined8 *)(extraout_x8_85 + 0x15f8) = in_register_00005008;
      *(undefined8 *)(extraout_x8_85 + 0x15f0) = param_2;
      *(undefined8 *)(extraout_x8_85 + 0x1608) = in_register_00005028;
      *(undefined8 *)(extraout_x8_85 + 0x1600) = param_3;
      lVar11 = extraout_x9_06;
code_r0x0001077a8cc8:
      *(undefined1 *)(lVar11 + 0x20) = uStack_e0;
    default:
      goto LAB_1077a8bcc;
    }
    func_0x0001077ace08(uVar10);
LAB_1077a8bcc:
    func_0x0001077acb4c();
    uVar9 = extraout_w8;
LAB_1077a8bd0:
    *(undefined1 *)(param_1 + 3) = uVar9;
    ppuVar3 = &puStack_120;
    goto LAB_1077a84bc;
  case 5:
code_r0x0001077a81f4:
    func_0x0001077acb40();
    func_0x0001077ac790();
    func_0x000107559818();
    if ((bStack_c8 & 1) == 0) {
      func_0x0001077ac738();
      if (extraout_x8_70 != 0) {
        func_0x0001077ac7d8();
        func_0x0001077ac888();
        func_0x0001077ac7e8();
        func_0x0001077ac8e0();
        func_0x0001077acae0();
      }
      func_0x0001077ac700();
    }
    else {
      func_0x0001077acaac();
      ppuVar3 = apuStack_100;
      ppuVar5 = (undefined **)(extraout_x8_67 + 0x660);
      func_0x0001077ab99c(ppuVar3,ppuVar5);
      if (((ulong)ppuVar3 & 1) == 0) {
        if ((*(long *)(param_4 + 0x10) == 0) || (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0)) {
          func_0x0001077aca9c(*param_8);
          func_0x0001077ace5c(puStack_120);
          func_0x0001077ac85c();
          func_0x0001077aca8c();
        }
        else {
          func_0x0001077ace5c(*param_8);
        }
        func_0x0001077ac878();
        func_0x0001077aca94();
      }
      func_0x0001077acb4c();
    }
    func_0x0001077acb58();
    func_0x0001077a93b8();
    break;
  case 7:
code_r0x0001077a826c:
    func_0x0001077acb40();
    func_0x0001077ac790();
    func_0x000107559bd0();
    if ((bStack_c8 & 1) == 0) {
      func_0x0001077ac738();
      if (extraout_x8_72 != 0) {
        func_0x0001077ac7d8();
        func_0x0001077ac888();
        func_0x0001077ac7e8();
        func_0x0001077ac8e0();
        func_0x0001077acae0();
      }
      func_0x0001077ac700();
    }
    else {
      func_0x0001077acaac();
      ppuVar3 = apuStack_100;
      ppuVar5 = (undefined **)(extraout_x8_68 + 0x6e0);
      func_0x0001077abacc(ppuVar3,ppuVar5);
      if (((ulong)ppuVar3 & 1) == 0) {
        if ((*(long *)(param_4 + 0x10) == 0) || (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0)) {
          func_0x0001077aca9c(*param_8);
          func_0x0001077acfb0(puStack_120);
          func_0x0001077ac85c();
          func_0x0001077aca8c();
        }
        else {
          func_0x0001077acfb0(*param_8);
        }
        func_0x0001077ac878();
        func_0x0001077aca94();
      }
      func_0x0001077acb4c();
    }
    func_0x0001077acb58();
    func_0x0001077a93dc();
    break;
  case 8:
code_r0x0001077a8248:
    func_0x0001077acb40();
    func_0x0001077ac790();
    func_0x0001075599f4();
    if ((bStack_c8 & 1) == 0) {
      func_0x0001077ac738();
      if (extraout_x8_71 != 0) {
        func_0x0001077ac7d8();
        func_0x0001077ac888();
        func_0x0001077ac7e8();
        func_0x0001077ac8e0();
        func_0x0001077acae0();
      }
      func_0x0001077ac700();
    }
    else {
      func_0x0001077accf8();
      func_0x0001077a57f0();
      func_0x0001077acb4c();
    }
    func_0x0001077acb58();
    func_0x0001077a9400();
    break;
  case 0xe:
code_r0x0001077a82c0:
    func_0x0001077ac924();
    func_0x0001077ac750();
    func_0x00010733e5bc();
    if ((bStack_c8 & 1) == 0) {
      func_0x0001077ac738();
      if (extraout_x8_73 != 0) {
        func_0x0001077ac7d8();
        func_0x0001077ac888();
        func_0x0001077ac7e8();
code_r0x0001077a6814:
        func_0x0001077ac8e0();
        func_0x0001077acae0();
      }
      goto code_r0x0001077a681c;
    }
    func_0x0001077acaac();
    ppuVar3 = apuStack_100;
    ppuVar5 = (undefined **)(extraout_x8_69 + 0x868);
    func_0x000107785b50(ppuVar3,ppuVar5);
    if (((ulong)ppuVar3 & 1) == 0) {
      if ((*(long *)(param_4 + 0x10) == 0) || (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0)) {
        func_0x0001077aca9c(*param_8);
        func_0x0001077acaf0(puStack_120 + 0x868);
        func_0x0001077ac85c();
        func_0x0001077aca8c();
      }
      else {
        func_0x0001077acaf0(*param_8 + 0x868);
      }
      func_0x0001077ac878();
      func_0x0001077aca94();
    }
code_r0x0001077a80e8:
    func_0x0001077acb4c();
code_r0x0001077a80ec:
    func_0x0001077acb58();
    func_0x00010733e5d8();
    break;
  case 0x11:
code_r0x0001077a8698:
    func_0x0001077ac924();
    func_0x0001077ac750();
    FUN_1077939c8();
    if ((bStack_b8 & 1) == 0) {
      func_0x0001077ac738();
      if (extraout_x8_77 != 0) {
        func_0x0001077ac7d8();
        func_0x0001077ac888();
        func_0x0001077ac7e8();
        func_0x0001077ac8e0();
        func_0x0001077acae0();
      }
      func_0x0001077ac700();
    }
    else {
      func_0x0001077acaac();
      ppuVar3 = apuStack_100;
      ppuVar5 = (undefined **)(extraout_x8_75 + 0x910);
      func_0x00010779465c(ppuVar3,ppuVar5);
      if (((ulong)ppuVar3 & 1) == 0) {
        if ((*(long *)(param_4 + 0x10) == 0) || (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0)) {
          func_0x0001077aca9c(*param_8);
          func_0x0001077acf1c(puStack_120);
          func_0x0001077ac85c();
          func_0x0001077aca8c();
        }
        else {
          func_0x0001077acf1c(*param_8);
        }
        func_0x0001077ac878();
        func_0x0001077aca94();
      }
      func_0x0001077acb4c();
    }
    func_0x0001077acb58();
    FUN_107793d90();
    break;
  case 0x14:
code_r0x0001077a8644:
    func_0x0001077acb40();
    func_0x0001077ac790();
    func_0x000107559f88();
    if ((bStack_c8 & 1) == 0) {
      func_0x0001077ac738();
      if (extraout_x8_76 != 0) {
        func_0x0001077ac7d8();
        func_0x0001077ac888();
        func_0x0001077ac7e8();
        func_0x0001077ac8e0();
        func_0x0001077acae0();
      }
      func_0x0001077ac700();
    }
    else {
      func_0x0001077acaac();
      ppuVar3 = apuStack_100;
      ppuVar5 = (undefined **)(extraout_x8_74 + 0x9d8);
      func_0x0001077abd5c(ppuVar3,ppuVar5);
      if (((ulong)ppuVar3 & 1) == 0) {
        if ((*(long *)(param_4 + 0x10) == 0) || (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0)) {
          func_0x0001077aca9c(*param_8);
          func_0x0001077acf28(puStack_120);
          func_0x0001077ac85c();
          func_0x0001077aca8c();
        }
        else {
          func_0x0001077acf28(*param_8);
        }
        func_0x0001077ac878();
        func_0x0001077aca94();
      }
      func_0x0001077acb4c();
    }
    func_0x0001077acb58();
    func_0x0001077a9428();
    break;
  case 0x17:
code_r0x0001077a8580:
    func_0x0001077ac9a0();
    func_0x0001077ac750();
    puVar14 = (undefined *)0x1077a8590;
    goto code_r0x0001077a8f68;
  case 0x1b:
    func_0x0001077acb40();
    func_0x0001077ac80c();
    ppuVar8 = (undefined **)0x1;
    func_0x00010755a8dc();
    if ((bStack_c8 & 1) == 0) {
      func_0x0001077ac738();
      if (extraout_x8_60 != 0) {
        func_0x0001077ac7d8();
        func_0x0001077ac888();
        func_0x0001077ac7e8();
        func_0x0001077ac8e0();
        func_0x0001077acae0();
      }
      func_0x0001077ac700();
    }
    else {
      func_0x0001077acaac();
      ppuVar3 = apuStack_100;
      ppuVar5 = (undefined **)(extraout_x8_57 + 0xb88);
      func_0x0001077ac020(ppuVar3,ppuVar5);
      if (((ulong)ppuVar3 & 1) == 0) {
        if ((*(long *)(param_4 + 0x10) == 0) || (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0)) {
          func_0x0001077aca9c(*param_8);
          func_0x0001077ace80(puStack_120);
          func_0x0001077ac85c();
          func_0x0001077aca8c();
        }
        else {
          func_0x0001077ace80(*param_8);
        }
        func_0x0001077ac878();
        func_0x0001077aca94();
      }
      func_0x0001077acb4c();
    }
    func_0x0001077acb58();
    func_0x0001077a9478();
    break;
  default:
    uVar2 = uVar12 == 0x5a;
    if ((bool)uVar2) {
      func_0x0001077acb40();
      func_0x0001077ac80c();
      ppuVar8 = (undefined **)0x1;
      func_0x00010755aab8();
      if ((bStack_c8 & 1) == 0) {
        func_0x0001077ac738();
        if (extraout_x8_62 != 0) {
          func_0x0001077ac7d8();
          func_0x0001077ac888();
          func_0x0001077ac7e8();
          func_0x0001077ac8e0();
          func_0x0001077acae0();
        }
        func_0x0001077ac700();
      }
      else {
        func_0x0001077acaac();
        ppuVar3 = apuStack_100;
        ppuVar5 = (undefined **)(extraout_x8_59 + 0xea0);
        func_0x0001077ac150(ppuVar3,ppuVar5);
        if (((ulong)ppuVar3 & 1) == 0) {
          if ((*(long *)(param_4 + 0x10) == 0) || (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0)) {
            func_0x0001077aca9c(*param_8);
            func_0x0001077ace68(puStack_120);
            func_0x0001077ac85c();
            func_0x0001077aca8c();
          }
          else {
            func_0x0001077ace68(*param_8);
          }
          func_0x0001077ac878();
          func_0x0001077aca94();
        }
        func_0x0001077acb4c();
      }
      func_0x0001077acb58();
      func_0x0001077a949c();
    }
    else {
      uVar2 = uVar12 == 0x5b;
      if ((bool)uVar2) {
        func_0x0001077acb40();
        func_0x0001077ac790();
        func_0x000107558b80();
        if ((bStack_b8 & 1) == 0) {
          func_0x0001077ac738();
          if (extraout_x8_61 != 0) {
            func_0x0001077ac7d8();
            func_0x0001077ac888();
            func_0x0001077ac7e8();
            func_0x0001077ac8e0();
            func_0x0001077acae0();
          }
          func_0x0001077ac700();
        }
        else {
          func_0x0001077acaac();
          ppuVar3 = apuStack_100;
          ppuVar5 = (undefined **)(extraout_x8_58 + 0xed8);
          func_0x0001077ac280(ppuVar3,ppuVar5);
          if (((ulong)ppuVar3 & 1) == 0) {
            if ((*(long *)(param_4 + 0x10) == 0) || (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0))
            {
              func_0x0001077aca9c(*param_8);
              func_0x0001077ace74(puStack_120);
              func_0x0001077ac85c();
              func_0x0001077aca8c();
            }
            else {
              func_0x0001077ace74(*param_8);
            }
            func_0x0001077ac878();
            func_0x0001077aca94();
          }
          func_0x0001077acb4c();
        }
        func_0x0001077acb58();
        func_0x0001077a94c0();
      }
      else {
        uVar2 = uVar12 == 0x5c;
        if (!(bool)uVar2) goto LAB_1077a85d8;
        func_0x0001077acb40();
        func_0x0001077ac790();
        func_0x00010755b23c();
        if ((bStack_b8 & 1) == 0) {
          func_0x0001077ac738();
          if (extraout_x8_63 != 0) {
            func_0x0001077ac7d8();
            func_0x0001077ac888();
            func_0x0001077ac7e8();
            func_0x0001077ac8e0();
            func_0x0001077acae0();
          }
          func_0x0001077ac700();
        }
        else {
          func_0x0001077acaac();
          ppuVar3 = apuStack_100;
          ppuVar5 = (undefined **)(extraout_x8_55 + 0xf20);
          func_0x0001077ac45c(ppuVar3,ppuVar5);
          if (((ulong)ppuVar3 & 1) == 0) {
            if ((*(long *)(param_4 + 0x10) == 0) || (*(long *)(*(long *)(param_4 + 0x10) + 8) != 0))
            {
              func_0x0001077aca9c(*param_8);
              func_0x0001077ace8c(puStack_120);
              func_0x0001077ac85c();
              func_0x0001077aca8c();
            }
            else {
              func_0x0001077ace8c(*param_8);
            }
            func_0x0001077ac878();
            func_0x0001077aca94();
          }
          func_0x0001077acb4c();
        }
        func_0x0001077acb58();
        func_0x0001077a94ec();
      }
    }
  }
LAB_1077a84b8:
  ppuVar3 = apuStack_148;
  param_8 = ppuVar6;
LAB_1077a84bc:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(ppuVar3);
  ppuVar6 = param_8;
LAB_1077a84c0:
  func_0x0001077ac76c(uStack_58);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001077acba4();
  func_0x0001077a9400();
  ppuVar4 = apuStack_148;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(ppuVar4);
  puVar14 = &SUB_1077a8f68;
  func_0x0001077acae8();
code_r0x0001077a8f68:
  puStack_170 = &stack0xfffffffffffffff0;
  puStack_168 = puVar14;
  func_0x00010755ae78(&uStack_171,ppuVar4,ppuVar5,ppuVar6,*puVar7,*(undefined1 *)ppuVar8);
  return;
}



/* Entry: 1077a9518; end: 1077a953b;  */

void FUN_1077a9518(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  func_0x0001077a953c(&uStack_11,param_1,param_2);
  return;
}



/* Entry: 1077a9664; end: 1077a969f;  */

long FUN_1077a9664(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001077839b8();
  func_0x0001077ad024();
  _bzero(lVar1 + 0x168,0xe00);
  func_0x0001077aa760(param_1 + 0xf68);
  *(undefined2 *)(param_1 + 0x1618) = 0;
  return param_1;
}



/* Entry: 1077aa2fc; end: 1077aa30b;  */

void FUN_1077aa2fc(void)

{
  return;
}



/* Entry: 1077aa414; end: 1077aa42f;  */

void FUN_1077aa414(void)

{
  func_0x0001077aca20();
  func_0x0001077acd10();
  return;
}



/* Entry: 1077aa4a4; end: 1077aa4bf;  */

void FUN_1077aa4a4(void)

{
  func_0x0001077aca20();
  func_0x0001077acd10();
  return;
}



/* Entry: 1077aa8dc; end: 1077aa917;  */

void FUN_1077aa8dc(void)

{
  long unaff_x19;
  
  func_0x0001077acdb8();
  func_0x0001074033c8();
  func_0x0001077acc1c();
  func_0x0001077acb00(*(undefined4 *)(unaff_x19 + 0x30));
  func_0x0001077acbc0();
  func_0x0001077acb6c();
  return;
}



/* Entry: 1077aaa98; end: 1077aaa9b;  */

undefined8 FUN_1077aaa98(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 extraout_w8;
  undefined1 *extraout_x9;
  undefined1 *extraout_x9_00;
  undefined1 *extraout_x9_01;
  long extraout_x9_02;
  undefined1 *extraout_x10;
  undefined8 extraout_x11;
  
  uVar1 = *(undefined8 *)*param_1;
  func_0x000107349544(uVar1,0);
  func_0x00010734ac10(uVar1);
  func_0x000107349658();
  func_0x00010734aa78();
  *extraout_x9 = 0x6e;
  func_0x00010734aa78();
  *extraout_x9_00 = 0x75;
  func_0x00010734aa78();
  *extraout_x9_01 = 0x6c;
  func_0x00010734ab28();
  *(undefined8 *)(extraout_x9_02 + 0x18) = extraout_x11;
  *extraout_x10 = extraout_w8;
  return 1;
}



/* Entry: 1077aabd0; end: 1077aac17;  */

undefined8 * FUN_1077aabd0(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  undefined1 extraout_w8;
  undefined1 *extraout_x9;
  undefined1 *extraout_x9_00;
  undefined1 *extraout_x9_01;
  long extraout_x9_02;
  undefined1 *extraout_x10;
  undefined8 extraout_x11;
  undefined8 uStack_28;
  
  func_0x0001077ac6d8();
  func_0x0001077acb30();
  func_0x0001077ac958();
  func_0x0001077acad0();
  func_0x0001077ac76c(uStack_28);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x0001077ac994();
  func_0x0001077acae8();
  uVar1 = *(undefined8 *)*param_1;
  func_0x000107349544(uVar1,0);
  func_0x00010734ac10(uVar1);
  func_0x000107349658();
  func_0x00010734aa78();
  *extraout_x9 = 0x6e;
  func_0x00010734aa78();
  *extraout_x9_00 = 0x75;
  func_0x00010734aa78();
  *extraout_x9_01 = 0x6c;
  func_0x00010734ab28();
  *(undefined8 *)(extraout_x9_02 + 0x18) = extraout_x11;
  *extraout_x10 = extraout_w8;
  return (undefined8 *)0x1;
}



/* Entry: 1077aacfc; end: 1077aad33;  */

void FUN_1077aacfc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 extraout_x8;
  int extraout_w9;
  undefined8 extraout_x10;
  
  func_0x0001077ad010(&UNK_1109debd8,*(undefined8 *)*param_1);
  uVar1 = extraout_x8;
  if (extraout_w9 != 0) {
    uVar1 = extraout_x10;
  }
  func_0x0001077acd70(uVar1);
  return;
}



/* Entry: 1077aae48; end: 1077aae6b;  */

void FUN_1077aae48(void)

{
  func_0x0001077acab8();
  func_0x0001077f2ad8();
  func_0x0001077ac894();
  return;
}



/* Entry: 1077aafbc; end: 1077aafbf;  */

undefined8 FUN_1077aafbc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 extraout_w8;
  undefined1 *extraout_x9;
  undefined1 *extraout_x9_00;
  undefined1 *extraout_x9_01;
  long extraout_x9_02;
  undefined1 *extraout_x10;
  undefined8 extraout_x11;
  
  uVar1 = *(undefined8 *)*param_1;
  func_0x000107349544(uVar1,0);
  func_0x00010734ac10(uVar1);
  func_0x000107349658();
  func_0x00010734aa78();
  *extraout_x9 = 0x6e;
  func_0x00010734aa78();
  *extraout_x9_00 = 0x75;
  func_0x00010734aa78();
  *extraout_x9_01 = 0x6c;
  func_0x00010734ab28();
  *(undefined8 *)(extraout_x9_02 + 0x18) = extraout_x11;
  *extraout_x10 = extraout_w8;
  return 1;
}



/* Entry: 1077ab1d4; end: 1077ab1db;  */

void FUN_1077ab1d4(undefined8 *param_1)

{
  ulong uVar1;
  
  uVar1 = **(ulong **)*param_1;
  **(ulong **)*param_1 = uVar1 * 0x1000 + (uVar1 >> 4) + 0x9e3779b97f4a7c15 ^ uVar1;
  return;
}



/* Entry: 1077ab294; end: 1077ab29b;  */

void FUN_1077ab294(undefined8 *param_1)

{
  ulong uVar1;
  
  uVar1 = **(ulong **)*param_1;
  **(ulong **)*param_1 = uVar1 * 0x1000 + (uVar1 >> 4) + 0x9e3779b97f4a7c15 ^ uVar1;
  return;
}



/* Entry: 1077ab32c; end: 1077ab333;  */

void FUN_1077ab32c(undefined8 *param_1)

{
  ulong uVar1;
  
  uVar1 = **(ulong **)*param_1;
  **(ulong **)*param_1 = uVar1 * 0x1000 + (uVar1 >> 4) + 0x9e3779b97f4a7c15 ^ uVar1;
  return;
}



/* Entry: 1077ab4ac; end: 1077ab4eb;  */

void FUN_1077ab4ac(void)

{
  int extraout_w8;
  int extraout_w9;
  
  func_0x0001077acc34();
  if (extraout_w8 != -1 && extraout_w9 == extraout_w8) {
    func_0x0001077acc28();
    func_0x0001077ac9c8();
  }
  return;
}



/* Entry: 1077ab6a8; end: 1077ab73b;  */

void FUN_1077ab6a8(void)

{
  int extraout_w8;
  long unaff_x19;
  
  func_0x0001077accc4();
  if (extraout_w8 != 0) {
    func_0x0001077acda0();
    *(undefined4 *)(unaff_x19 + 0x30) = 0;
  }
  return;
}



/* Entry: 1077ab908; end: 1077ab99b;  */

void FUN_1077ab908(void)

{
  int extraout_w8;
  long unaff_x19;
  
  func_0x0001077accc4();
  if (extraout_w8 != 0) {
    func_0x0001077acf98();
    *(undefined4 *)(unaff_x19 + 0x30) = 0;
  }
  return;
}



/* Entry: 1077abb68; end: 1077abbfb;  */

void FUN_1077abb68(void)

{
  int extraout_w8;
  long unaff_x19;
  
  func_0x0001077accc4();
  if (extraout_w8 != 0) {
    func_0x0001077acf68();
    *(undefined4 *)(unaff_x19 + 0x30) = 0;
  }
  return;
}



/* Entry: 1077abda8; end: 1077abdf7;  */

void FUN_1077abda8(void)

{
  undefined1 in_ZR;
  int extraout_w8;
  long extraout_x8;
  
  func_0x0001077ac9b4();
  if (!(bool)in_ZR || extraout_w8 != -1) {
    if (extraout_w8 == -1) {
      func_0x0001077acf88();
    }
    else {
      func_0x0001077acc7c();
      func_0x0001077ac9e0((&PTR_DAT_1109db3d8)[extraout_x8]);
    }
  }
  return;
}



/* Entry: 1077ac06c; end: 1077ac0bb;  */

void FUN_1077ac06c(void)

{
  undefined1 in_ZR;
  int extraout_w8;
  long extraout_x8;
  
  func_0x0001077ac9b4();
  if (!(bool)in_ZR || extraout_w8 != -1) {
    if (extraout_w8 == -1) {
      func_0x0001077acf90();
    }
    else {
      func_0x0001077acc7c();
      func_0x0001077ac9e0((&PTR_DAT_1109db438)[extraout_x8]);
    }
  }
  return;
}



/* Entry: 1077ac314; end: 1077ac333;  */

void FUN_1077ac314(void)

{
  func_0x0001077ac334();
  return;
}



/* Entry: 1077ac53c; end: 1077ac58b;  */

void FUN_1077ac53c(void)

{
  undefined1 in_ZR;
  int extraout_w8;
  long extraout_x8;
  
  func_0x0001077acffc();
  if (!(bool)in_ZR || extraout_w8 != -1) {
    if (extraout_w8 == -1) {
      func_0x0001077acf80();
    }
    else {
      func_0x0001077acc7c();
      func_0x0001077ac9e0((&PTR_DAT_1109db4c8)[extraout_x8]);
    }
  }
  return;
}



/* Entry: 1077ada54; end: 1077ada7f;  */

undefined ** FUN_1077ada54(void)

{
  return &PTR_DAT_1109da4e8;
}



/* Entry: 1077ade4c; end: 1077ade67;  */

/* WARNING: Possible PIC construction at 0x00010778d038: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010778d03c) */
/* WARNING: Removing unreachable block (ram,0x00010778d04c) */
/* WARNING: Removing unreachable block (ram,0x00010778d040) */

ulong FUN_1077ade4c(ulong param_1)

{
  ulong uVar1;
  long extraout_x8;
  long unaff_x19;
  long unaff_x20;
  
  if (*(int *)(param_1 + 0x40) == 1) {
    return param_1;
  }
  func_0x00010563ab98();
  uVar1 = unaff_x20 + extraout_x8;
  func_0x00010778d284(uVar1,unaff_x19 + extraout_x8);
  func_0x00010778d1ec();
  if ((int)uVar1 != 0) {
    if (*(int *)(unaff_x20 + 0x30) != 0) {
      return (ulong)((*(byte *)(unaff_x20 + 0x10) & 2) == 0 && *(int *)(unaff_x20 + 0x30) != 1);
    }
    return 0;
  }
  return uVar1;
}



/* Entry: 1077ae158; end: 1077ae18b;  */

void FUN_1077ae158(undefined8 *param_1)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001077aedbc(&uStack_30);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x0001077af230();
  return;
}



/* Entry: 1077ae354; end: 1077ae393;  */

void FUN_1077ae354(void)

{
  undefined8 uStack_30;
  
  func_0x0001077af1dc();
  func_0x0001077af248(uStack_30 + 0x328);
  func_0x0001077af1f8();
  func_0x0001077af210();
  func_0x0001077af240();
  func_0x0001077af230();
  return;
}



/* Entry: 1077ae554; end: 1077ae593;  */

void FUN_1077ae554(void)

{
  undefined8 uStack_30;
  
  func_0x0001077af1dc();
  func_0x0001077af248(uStack_30 + 0x4b0);
  func_0x0001077af1f8();
  func_0x0001077af210();
  func_0x0001077af240();
  func_0x0001077af230();
  return;
}



/* Entry: 1077ae768; end: 1077ae7ab;  */

void FUN_1077ae768(undefined8 param_1,undefined8 param_2)

{
  long extraout_x8;
  undefined1 extraout_w9;
  undefined8 in_register_00005008;
  undefined8 in_register_00005028;
  
  func_0x0001077af1dc();
  func_0x0001077af220();
  *(undefined8 *)(extraout_x8 + 0x40) = in_register_00005028;
  *(undefined8 *)(extraout_x8 + 0x38) = param_2;
  *(undefined8 *)(extraout_x8 + 0x50) = in_register_00005008;
  *(undefined8 *)(extraout_x8 + 0x48) = param_1;
  *(undefined1 *)(extraout_x8 + 0x58) = extraout_w9;
  func_0x0001077af1f8();
  func_0x0001077af210();
  func_0x0001077af240();
  func_0x0001077af230();
  return;
}



/* Entry: 1077ae97c; end: 1077ae9c7;  */

void FUN_1077ae97c(void)

{
  undefined8 *unaff_x19;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack_30;
  
  func_0x0001077af1dc();
  uVar4 = unaff_x19[1];
  uVar3 = *unaff_x19;
  uVar2 = unaff_x19[3];
  uVar1 = unaff_x19[2];
  *(undefined1 *)(lStack_30 + 0x4a8) = *(undefined1 *)(unaff_x19 + 4);
  *(undefined8 *)(lStack_30 + 0x490) = uVar4;
  *(undefined8 *)(lStack_30 + 0x488) = uVar3;
  *(undefined8 *)(lStack_30 + 0x4a0) = uVar2;
  *(undefined8 *)(lStack_30 + 0x498) = uVar1;
  func_0x0001077af1f8();
  func_0x0001077af210();
  func_0x0001077af240();
  func_0x0001077af230();
  return;
}



/* Entry: 1077aeb98; end: 1077aebdb;  */

void FUN_1077aeb98(undefined8 param_1,undefined8 param_2)

{
  long extraout_x8;
  undefined1 extraout_w9;
  undefined8 in_register_00005008;
  undefined8 in_register_00005028;
  
  func_0x0001077af1dc();
  func_0x0001077af220();
  *(undefined8 *)(extraout_x8 + 0x678) = in_register_00005028;
  *(undefined8 *)(extraout_x8 + 0x670) = param_2;
  *(undefined8 *)(extraout_x8 + 0x688) = in_register_00005008;
  *(undefined8 *)(extraout_x8 + 0x680) = param_1;
  *(undefined1 *)(extraout_x8 + 0x690) = extraout_w9;
  func_0x0001077af1f8();
  func_0x0001077af210();
  func_0x0001077af240();
  func_0x0001077af230();
  return;
}



/* Entry: 1077aedb0; end: 1077aedbb;  */

void FUN_1077aedb0(void)

{
  return;
}



/* Entry: 1077af4a8; end: 1077af587;  */

/* WARNING: Possible PIC construction at 0x0001077af53c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001077af714: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001077af804: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001077af6c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001077af668: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077af6c4) */
/* WARNING: Removing unreachable block (ram,0x0001077af6d8) */
/* WARNING: Removing unreachable block (ram,0x0001077af6e8) */
/* WARNING: Removing unreachable block (ram,0x0001077af6fc) */
/* WARNING: Removing unreachable block (ram,0x0001077af808) */
/* WARNING: Removing unreachable block (ram,0x0001077af81c) */
/* WARNING: Removing unreachable block (ram,0x0001077af80c) */
/* WARNING: Removing unreachable block (ram,0x0001077af718) */
/* WARNING: Removing unreachable block (ram,0x0001077af734) */
/* WARNING: Removing unreachable block (ram,0x0001077af784) */
/* WARNING: Removing unreachable block (ram,0x0001077af7ac) */
/* WARNING: Removing unreachable block (ram,0x0001077af71c) */
/* WARNING: Removing unreachable block (ram,0x0001077af540) */
/* WARNING: Removing unreachable block (ram,0x0001077af55c) */
/* WARNING: Removing unreachable block (ram,0x0001077af57c) */
/* WARNING: Removing unreachable block (ram,0x0001077af544) */
/* WARNING: Removing unreachable block (ram,0x0001077af66c) */
/* WARNING: Removing unreachable block (ram,0x0001077af684) */
/* WARNING: Removing unreachable block (ram,0x0001077af6a4) */
/* WARNING: Removing unreachable block (ram,0x0001077af704) */
/* WARNING: Removing unreachable block (ram,0x0001077af5d4) */
/* WARNING: Removing unreachable block (ram,0x0001077af5e4) */
/* WARNING: Removing unreachable block (ram,0x0001077af5dc) */
/* WARNING: Removing unreachable block (ram,0x0001077af5e8) */
/* WARNING: Removing unreachable block (ram,0x0001077af658) */
/* WARNING: Removing unreachable block (ram,0x0001077af588) */
/* WARNING: Removing unreachable block (ram,0x0001077af5f8) */
/* WARNING: Removing unreachable block (ram,0x0001077af6b0) */
/* WARNING: Removing unreachable block (ram,0x0001077af7b8) */
/* WARNING: Removing unreachable block (ram,0x0001077af600) */
/* WARNING: Removing unreachable block (ram,0x0001077af62c) */
/* WARNING: Removing unreachable block (ram,0x0001077af64c) */
/* WARNING: Removing unreachable block (ram,0x0001077af710) */

void FUN_1077af4a8(undefined8 param_1,uint *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined **ppuStack_a0;
  long lStack_98;
  undefined1 auStack_90 [64];
  char cStack_50;
  
  func_0x0001077af874();
  func_0x000107289330();
  lVar2 = *(long *)(param_2 + 2);
  lVar3 = (ulong)*param_2 * 0x18;
  lVar1 = (ulong)*param_2 * 3;
  while (lVar1 != 0) {
    ppuStack_a0 = &PTR_DAT_1131ad2e8;
    lStack_98 = lVar2;
    (*(code *)PTR_DAT_1131ad358)(auStack_90,&lStack_98);
    func_0x0001072f5f6c(&ppuStack_a0);
    if (cStack_50 == '\x01') {
      func_0x0001072d7f0c(param_1,auStack_90);
    }
    func_0x000107267ed0(auStack_90);
    lVar2 = lVar2 + 0x18;
    lVar3 = lVar3 + -0x18;
    lVar1 = lVar3;
  }
  return;
}



/* Entry: 1077afcac; end: 1077afd0b;  */

long FUN_1077afcac(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  long lVar1;
  long lVar2;
  long *unaff_x19;
  long lStack_30;
  
  func_0x0001077b00f4();
  func_0x0001077b013c();
  lVar1 = lStack_30;
  func_0x0001077afd64();
  *unaff_x19 = lStack_30 + 0x18;
  unaff_x19[1] = lStack_30;
  func_0x0001077b00c4();
  func_0x0001077b010c();
  if ((bool)in_ZR) {
    return lVar1;
  }
  ___stack_chk_fail();
  func_0x0001077b00c4();
  __Unwind_Resume();
  *(undefined8 *)(lVar1 + 8) = param_2;
  lVar2 = lVar1;
  func_0x0001077afd34();
  *(long *)(lVar1 + 0x10) = lVar2;
  return lVar1;
}



/* Entry: 1077afde8; end: 1077afe0f;  */

void FUN_1077afde8(undefined8 param_1)

{
  _bzero(param_1,0x2d8);
  func_0x0001077afe28(param_1);
  return;
}



/* Entry: 1077b0050; end: 1077b008b;  */

undefined8 * FUN_1077b0050(undefined8 *param_1,undefined8 *param_2)

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
  func_0x000107433428(&uStack_30);
  return param_1;
}



/* Entry: 1077b0bac; end: 1077b0c3b;  */

undefined1 * FUN_1077b0bac(undefined1 *param_1,undefined1 *param_2,undefined8 *param_3)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long lVar1;
  double dStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 auStack_180 [64];
  undefined1 uStack_140;
  undefined4 auStack_138 [2];
  double dStack_130;
  undefined8 uStack_128;
  undefined8 uStack_f8;
  undefined1 auStack_a8 [56];
  undefined1 auStack_70 [72];
  undefined8 uStack_28;
  
  func_0x0001077b0e08();
  uStack_28 = extraout_x8;
  if (*(int *)(param_2 + 0x70) != 0) {
    func_0x00010778b104(auStack_70,param_2);
    param_1 = auStack_a8;
    func_0x000100060964(param_1,"source");
    func_0x0001077b0f2c();
    param_2 = auStack_70;
    func_0x0001072d80fc();
    func_0x0001077b0ebc();
    func_0x0001077b0e5c();
  }
  func_0x0001077b0de4(uStack_28);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x0001077b0e5c();
  func_0x0001077b0e28();
  func_0x0001077b0e08();
  uStack_f8 = extraout_x8_00;
  if (*(int *)(param_3 + 10) != 0) {
    in_ZR = *(int *)(param_3 + 10) == 1;
    if ((bool)in_ZR) {
      uStack_198 = 0;
      uStack_190 = 0;
      uStack_188 = 0;
      func_0x0001072ac134(&uStack_198,9);
      for (lVar1 = 0; in_ZR = lVar1 == 0x24, !(bool)in_ZR; lVar1 = lVar1 + 4) {
        dStack_130 = (double)*(float *)((long)param_3 + lVar1);
        auStack_138[0] = 3;
        func_0x0001072aad1c(&uStack_198,auStack_138);
        func_0x0001077b0f18();
      }
      func_0x000107327958(&dStack_1b0,&uStack_198);
      auStack_138[0] = 0;
      uStack_128 = uStack_1a8;
      dStack_130 = dStack_1b0;
      dStack_1b0 = 0.0;
      uStack_1a8 = 0;
      func_0x000104c33108(&dStack_1b0);
      func_0x000107269124(&uStack_198);
      func_0x0001077b0f40();
      uStack_140 = 1;
    }
    else {
      (**(code **)(*(long *)*param_3 + 0x28))(auStack_138);
      func_0x0001077b0f40();
      uStack_140 = 2;
    }
    func_0x0001077b0f18();
    func_0x000100060964(auStack_138,param_2);
    func_0x0001077b0f2c();
    param_2 = auStack_180;
    func_0x0001072d80fc();
    func_0x0001077b0eb4();
    param_1 = auStack_180;
    func_0x000104c3323c();
  }
  func_0x0001077b0de4(uStack_f8);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x0001077b0e28();
  func_0x0001074e13c8(param_1 + 8,param_2 + 8);
  param_1[0x138] = 1;
  return param_1;
}



/* Entry: 1077b1188; end: 1077b11a7;  */

void FUN_1077b1188(undefined8 *param_1,undefined8 param_2)

{
  func_0x00010775f648(*param_1,param_2,0);
  return;
}



/* Entry: 1077b1380; end: 1077b1413;  */

/* WARNING: Possible PIC construction at 0x0001077b13b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077b13b4) */
/* WARNING: Removing unreachable block (ram,0x0001077b13f4) */
/* WARNING: Removing unreachable block (ram,0x0001077b140c) */
/* WARNING: Removing unreachable block (ram,0x0001077b13e4) */

undefined1 * FUN_1077b1380(void)

{
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = 1;
  func_0x0001077b143c();
  return auStack_40;
}



/* Entry: 1077b14e4; end: 1077b156f;  */

void FUN_1077b14e4(long param_1,long param_2)

{
  long *plVar1;
  long unaff_x19;
  undefined1 uStack_31;
  undefined1 **ppuStack_30;
  undefined1 *puStack_28;
  
  func_0x0001077b1750();
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x40) = 0;
  if ((*(byte *)(param_2 + 0x40) & 1) == 0) {
    *(undefined8 *)(unaff_x19 + 0x48) = 0;
  }
  else {
    func_0x0001077b1570((undefined1 *)(param_1 + 0x10),param_2 + 0x10);
    plVar1 = (long *)(unaff_x19 + 0x48);
    *plVar1 = 0;
    if ((*(char *)(unaff_x19 + 0x40) == '\x01') && (*plVar1 != -1)) {
      puStack_28 = &uStack_31;
      ppuStack_30 = &puStack_28;
      __ZNSt3__111__call_onceERVmPvPFvS2_E(plVar1,&ppuStack_30,&UNK_1077b15a8);
    }
  }
  return;
}



/* Entry: 1077b1824; end: 1077b189b;  */

void FUN_1077b1824(long param_1)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *unaff_x19;
  
  lVar4 = param_1 + 0x30;
  func_0x0001077b3074();
  if (*(char *)(param_1 + 0x50) == '\x01') {
    func_0x00010785f1f4();
    uVar3 = lVar4 + 0x590;
    func_0x0001072cd2b0();
    uVar1 = 0x10;
    if ((uVar3 & 0x100000000) != 0) {
      uVar1 = uVar3 & 0xffffffff;
    }
    *(ulong *)(param_1 + 200) = uVar1;
    func_0x00010785f1f4();
    uVar2 = (int)uVar3 + 0x5a0;
    func_0x00010724e330();
    *(bool *)(param_1 + 0xd0) = ((uVar2 ^ 0xffffffff) & 0x101) == 0;
    *(undefined1 *)(param_1 + 0xb0) = 1;
    if (*(long *)(param_1 + 0x70) != 0) {
      func_0x0001077b3e80();
      unaff_x19[2] = 0;
      lVar5 = unaff_x19[1];
      for (lVar4 = 0; lVar5 != lVar4; lVar4 = lVar4 + 1) {
        *(undefined8 *)(*unaff_x19 + lVar4 * 8) = 0;
      }
      unaff_x19[3] = 0;
    }
    return;
  }
  return;
}



/* Entry: 1077b2e04; end: 1077b2e2f;  */

void FUN_1077b2e04(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001077b3d80(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0xe8;
    func_0x0001077b356c();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1077b30d8; end: 1077b311f;  */

undefined8 * FUN_1077b30d8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001077b3120(&uStack_40);
  uVar4 = param_1[1];
  uVar3 = *param_1;
  uVar2 = param_1[3];
  uVar1 = param_1[2];
  param_1[1] = uStack_38;
  *param_1 = uStack_40;
  param_1[3] = uStack_28;
  param_1[2] = uStack_30;
  uStack_40 = uVar3;
  uStack_38 = uVar4;
  uStack_30 = uVar1;
  uStack_28 = uVar2;
  func_0x0001073b0384(&uStack_40);
  return param_1;
}



/* Entry: 1077b3354; end: 1077b33c3;  */

long * FUN_1077b3354(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x0001077b33a0();
  }
  lVar1 = param_4 + param_3 * 0xe8;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0xe8;
  return param_1;
}



/* Entry: 1077b3630; end: 1077b3713;  */

long FUN_1077b3630(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1077b386c; end: 1077b38f7;  */

void FUN_1077b386c(long param_1,long param_2,ulong param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 8);
  lVar1 = lVar3;
  for (uVar2 = param_2 + (lVar3 - param_4); uVar2 < param_3; uVar2 = uVar2 + 0xe8) {
    func_0x0001077b3e78();
    lVar1 = lVar1 + 0xe8;
  }
  *(long *)(param_1 + 8) = lVar1;
  for (param_4 = param_4 - lVar3; param_4 != 0; param_4 = param_4 + 0xe8) {
    func_0x0001077b3e38();
  }
  return;
}



/* Entry: 1077b3b0c; end: 1077b3b0f;  */

void FUN_1077b3b0c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109db690;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1077b3f48; end: 1077b3fc7;  */

long FUN_1077b3f48(long param_1,long param_2)

{
  func_0x0001077b4db8();
  func_0x000107263b58();
  *(undefined **)(param_1 + 0x50) = &UNK_10e52b660;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined **)(param_1 + 0x70) = &UNK_10e52b660;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined **)(param_1 + 0x90) = &UNK_10e52b660;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  func_0x0001077b4750(param_1 + 0xb0,param_2 + 0xb0);
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  return param_1;
}



/* Entry: 1077b480c; end: 1077b485b;  */

void FUN_1077b480c(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 < 0x492492492492493) {
    plVar1 = param_1 + 2;
    func_0x0001077b48a8();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 7);
    return;
  }
  func_0x0001077b4894();
  plVar1 = param_1 + 2;
  func_0x0001077b48fc();
  param_1[1] = (long)plVar1;
  return;
}



/* Entry: 1077b4a14; end: 1077b4a23;  */

void FUN_1077b4a14(long *param_1,long param_2,long param_3)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  
  uVar1 = (param_3 - param_2) / 0x38;
  lVar3 = *param_1;
  if ((ulong)((param_1[2] - lVar3) / 0x38) < uVar1) {
    if (lVar3 != 0) {
      func_0x0001072669ec(param_1);
      __ZdlPv(*param_1);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    plVar2 = param_1;
    func_0x0001077b4b2c(param_1,uVar1);
    FUN_1077b480c(param_1,plVar2);
  }
  else {
    lVar3 = param_1[1] - lVar3;
    if (uVar1 <= (ulong)(lVar3 / 0x38)) {
      func_0x0001077b4b8c(param_2,param_3);
      func_0x0001072747d8(param_1,param_2);
      lVar3 = param_1[1];
      while (lVar3 != unaff_x19) {
        lVar3 = lVar3 + -0x38;
        func_0x000107266a30(lVar3);
      }
      *(long *)(unaff_x20 + 8) = unaff_x19;
      return;
    }
    func_0x0001077b4b8c(param_2,param_2 + lVar3);
    param_2 = param_2 + lVar3;
  }
  plVar2 = param_1 + 2;
  func_0x0001077b48fc(plVar2,param_2,param_3,param_1[1]);
  param_1[1] = (long)plVar2;
  return;
}



/* Entry: 1077b4d84; end: 1077b4ddf;  */

void FUN_1077b4d84(void)

{
  return;
}



/* Entry: 1077b5188; end: 1077b51a7;  */

void FUN_1077b5188(void)

{
  func_0x0001077b5468();
  func_0x0001077b51fc();
  return;
}



/* Entry: 1077b52a8; end: 1077b52cb;  */

void FUN_1077b52a8(undefined8 param_1)

{
  undefined1 uStack_11;
  
  func_0x0001077b52cc(&uStack_11,param_1);
  return;
}



/* Entry: 1077b5524; end: 1077b5567;  */

undefined8 FUN_1077b5524(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  func_0x00010750b8bc(param_1,&uStack_30);
  func_0x0001074f7454(&uStack_30);
  return param_1;
}



/* Entry: 1077b57e8; end: 1077b5813;  */

long FUN_1077b57e8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1077b5a5c; end: 1077b5abf;  */

long FUN_1077b5a5c(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_3;
  for (; param_1 != param_2; param_1 = param_1 + 0x58) {
    func_0x000107262f3c(lVar1,param_1);
    func_0x00010737de68(lVar1 + 0x38,param_1 + 0x38);
    param_3 = param_3 + 0x58;
    lVar1 = lVar1 + 0x58;
  }
  return param_3;
}



/* Entry: 1077b60c4; end: 1077b619b;  */

void FUN_1077b60c4(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long extraout_x8;
  int extraout_w10;
  undefined8 uStack_58;
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  uStack_38 = param_4;
  if (*(int *)(param_1 + 0x58) == 0) {
    func_0x0001077b6850(param_1 + 0x48);
    func_0x0001077b7240();
    if (extraout_x8 != 0) {
      do {
        func_0x0001077b7198();
      } while (extraout_w10 != 0);
    }
    func_0x0001077b619c(auStack_50,&SUB_10756603c,0,param_2,param_3,&uStack_38);
    func_0x0001077b7280();
  }
  else {
    plVar1 = (long *)(param_1 + 0x48);
    func_0x0001077b6868();
    lVar2 = *plVar1;
    uStack_58 = *param_3;
    *param_3 = 0;
    func_0x00010756603c(lVar2,param_2,&uStack_58,param_4);
    func_0x0001077b71f4();
    if (lVar2 != 0) {
      func_0x0001077b716c();
    }
  }
  return;
}



/* Entry: 1077b65d0; end: 1077b66d3;  */

void FUN_1077b65d0(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int extraout_w10;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar5 = param_2[1];
  func_0x0001077b7278();
  plVar6 = param_2 + 1;
  *plVar6 = 0;
  param_2[2] = 0;
  *param_2 = &PTR_DAT_1109db860;
  puVar1 = param_2 + 3;
  func_0x0001077b706c(puVar1,lVar5);
  lVar4 = *(long *)(lVar5 + 0x88);
  uVar7 = *(undefined8 *)(lVar5 + 0x80);
  param_2[0x14] = *(undefined8 *)(lVar5 + 0x88);
  param_2[0x13] = uVar7;
  param_2[3] = &PTR_DAT_1109dba00;
  if (lVar4 != 0) {
    do {
      func_0x0001077b7198();
    } while (extraout_w10 != 0);
  }
  *(undefined2 *)(param_2 + 0x15) = *(undefined2 *)(lVar5 + 0x90);
  func_0x0001077b7104(param_2 + 0x16,lVar5 + 0x98);
  puStack_60 = puVar1;
  puStack_58 = param_2;
  func_0x0001077b72d0();
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = *plVar6 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  *param_1 = (long)puVar1;
  param_1[1] = (long)param_2;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_1077b57e8(&uStack_50);
  func_0x0001077b66dc(&puStack_60);
  return;
}



/* Entry: 1077b6850; end: 1077b6883;  */

void FUN_1077b6850(undefined8 *param_1)

{
  if (*(int *)(param_1 + 2) == 0) {
    return;
  }
  func_0x00010563ab98();
  if (*(int *)(param_1 + 2) == 1) {
    return;
  }
  func_0x00010563ab98();
  *param_1 = &PTR_DAT_1109db860;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1077b6964; end: 1077b6987;  */

void FUN_1077b6964(undefined8 param_1)

{
  undefined1 uStack_11;
  
  func_0x0001077b6988(&uStack_11,param_1);
  return;
}



/* Entry: 1077b6bb4; end: 1077b6c1f;  */

void FUN_1077b6bb4(long param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined8 uStack_28;
  
  pcVar2 = *(code **)(param_1 + 0x10);
  plVar1 = (long *)(*(long *)(param_1 + 8) + ((long)*(ulong *)(param_1 + 0x18) >> 1));
  if ((*(ulong *)(param_1 + 0x18) & 1) != 0) {
    pcVar2 = *(code **)(*plVar1 + ((ulong)pcVar2 & 0xffffffff));
  }
  uStack_28 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  (*pcVar2)(plVar1,param_1 + 0x20,&uStack_28,*(undefined8 *)(param_1 + 0x38));
  func_0x0001077b71f4();
  if (plVar1 != (long *)0x0) {
    func_0x0001077b716c();
  }
  return;
}



/* Entry: 1077b6e0c; end: 1077b6e37;  */

undefined8 * FUN_1077b6e0c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109db940;
  func_0x0001073787dc(param_1 + 6);
  return param_1;
}



/* Entry: 1077b6f8c; end: 1077b6fb3;  */

void FUN_1077b6f8c(long param_1)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x10);
  plVar1 = (long *)(*(long *)(param_1 + 8) + ((long)*(ulong *)(param_1 + 0x18) >> 1));
  if ((*(ulong *)(param_1 + 0x18) & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
  }
                    /* WARNING: Could not recover jumptable at 0x0001077b6fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (plVar1,param_1 + 0x20,*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48));
  return;
}



/* Entry: 1077b713c; end: 1077b714f;  */

void FUN_1077b713c(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    func_0x00010750bbd4();
    *(undefined1 *)(param_1 + 0x20) = 1;
    return;
  }
  return;
}



/* Entry: 1077b7508; end: 1077b7533;  */

long FUN_1077b7508(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1077b76b8; end: 1077b76e3;  */

long FUN_1077b76b8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  func_0x0001077b76e4();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 1077b7990; end: 1077b79fb;  */

void FUN_1077b7990(void)

{
  undefined1 auStack_30 [16];
  
  func_0x0001077b801c(auStack_30);
  func_0x0001077b8cdc();
  func_0x0001077b7ed4();
  return;
}



/* Entry: 1077b7c7c; end: 1077b7d87;  */

undefined1 * FUN_1077b7c7c(undefined1 *param_1,long *param_2)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 extraout_x8;
  long lStack_290;
  undefined **ppuStack_288;
  undefined1 *puStack_280;
  undefined ***pppuStack_270;
  undefined1 auStack_268 [56];
  long alStack_230 [63];
  undefined8 uStack_38;
  
  puVar2 = param_1;
  func_0x0001077b8c7c();
  uStack_38 = extraout_x8;
  if ((puVar2[0x70] & 1) == 0) {
    param_1[0x20] = 1;
  }
  else if (*(long *)(param_1 + 0x78) == 0) {
    func_0x000104c2fe00(auStack_268,param_1 + 0x38);
    func_0x000107526c60(alStack_230,auStack_268);
    ppuStack_288 = &PTR_DAT_1109dbb38;
    pppuStack_270 = &ppuStack_288;
    plVar4 = alStack_230;
    puStack_280 = param_1;
    (**(code **)(*param_2 + 0x10))(&lStack_290,param_2,plVar4,&ppuStack_288);
    lVar1 = lStack_290;
    lStack_290 = 0;
    lVar3 = *(long *)(param_1 + 0x78);
    *(long *)(param_1 + 0x78) = lVar1;
    if (lVar3 != 0) {
      func_0x0001077b8cb8();
      lVar1 = lStack_290;
      lStack_290 = 0;
      if (lVar1 != 0) {
        func_0x0001077b8cb8();
      }
    }
    func_0x0001072ad0c8(&ppuStack_288);
    func_0x00010724b374(alStack_230);
    puVar2 = auStack_268;
    func_0x000104c2f714(puVar2);
    param_2 = plVar4;
  }
  func_0x0001077b8c5c(uStack_38);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x0001072ad0c8(&ppuStack_288);
  func_0x00010724b374(alStack_230);
  func_0x000104c2f714(auStack_268);
  func_0x0001077b8cb0();
  return (undefined1 *)(ulong)((char)param_2[3] == '\0');
}



/* Entry: 1077b7fb8; end: 1077b801b;  */

void FUN_1077b7fb8(undefined8 *param_1)

{
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  *(undefined4 *)param_1 = 0x2001200;
  *(undefined2 *)((long)param_1 + 4) = 0x80;
  param_1[1] = 0x3fd8000000000000;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0x2000;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined2 *)((long)param_1 + 0x1a) = 0x32;
  *(undefined1 *)((long)param_1 + 0x1c) = 0x11;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[4] = param_1 + 5;
  return;
}



/* Entry: 1077b814c; end: 1077b8157;  */

undefined8 FUN_1077b814c(long param_1)

{
  undefined8 *puVar1;
  undefined8 extraout_x8;
  undefined8 unaff_x19;
  
  puVar1 = (undefined8 *)(param_1 + 0x18);
  func_0x00010750c6cc(param_1 + 0xa8);
  func_0x000107563d0c(param_1 + 0x98);
  func_0x0001077b732c();
  *puVar1 = extraout_x8;
  func_0x0001072c9240(puVar1 + 0xd);
  func_0x000104c2f714(puVar1 + 2);
  return unaff_x19;
}



/* Entry: 1077b82dc; end: 1077b830f;  */

void FUN_1077b82dc(undefined8 param_1,undefined8 *param_2)

{
  undefined8 in_register_00005008;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001077b8d58();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  param_2[1] = in_register_00005008;
  *param_2 = param_1;
  func_0x0001074f7454(&uStack_30);
  return;
}



/* Entry: 1077b864c; end: 1077b8697;  */

void FUN_1077b864c(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar2;
  
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001077b8c98();
    } while (extraout_w10 != 0);
  }
  lVar1 = param_2[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001077b8c98();
    } while (extraout_w10_00 != 0);
  }
  return;
}



/* Entry: 1077b89e8; end: 1077b8a43;  */

undefined8 * FUN_1077b89e8(undefined8 *param_1,long param_2)

{
  *param_1 = &PTR_DAT_1109dbba8;
  func_0x000107283e34(param_1 + 1);
  FUN_1077b864c(param_1 + 4,param_2 + 0x18);
  func_0x0001077b8698(param_1 + 8,param_2 + 0x38);
  return param_1;
}


