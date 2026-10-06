/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b8f7f14; end: 10b8f7f67;  */

void FUN_10b8f7f14(undefined8 *param_1)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x00010b8fdcd4();
  *param_1 = &PTR_DAT_110d73780;
  func_0x00010b8fe214();
  *param_1 = *unaff_x20;
  param_1[1] = unaff_x20[1];
  func_0x00010b8fe0e0(*(undefined8 *)(unaff_x20[2] + 0x18),param_1 + 2);
  *(undefined8 **)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 10b8f7f68; end: 10b8f8083;  */

void FUN_10b8f7f68(undefined8 *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  ulong uStack_78;
  ulong uStack_70;
  undefined1 auStack_68 [16];
  long lStack_58;
  
  lVar6 = *(long *)(param_2 + 0x10);
  if (*(long *)(lVar6 + 0x120) != 0) {
    lStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    lVar1 = *(long *)(lVar6 + 0x110);
    uVar3 = *(undefined8 *)(lVar6 + 0x118);
    FUN_10b8f8084();
    lVar4 = *(long *)(lVar6 + 0x110);
    lVar5 = *(long *)(lVar6 + 0x128);
    lStack_90 = lVar1;
    uStack_88 = uVar3;
    while (uVar3 = uStack_88, lStack_90 != lVar4 + lVar5) {
      if (uStack_78 < uStack_70) {
        FUN_10b8bc3c4(uStack_78,uStack_88);
        uVar7 = uStack_78 + 0x10;
      }
      else {
        plVar2 = &lStack_80;
        FUN_10b8f8120(plVar2,((long)(uStack_78 - lStack_80) >> 4) + 1);
        FUN_10b8f81b8(auStack_68,plVar2,(long)(uStack_78 - lStack_80) >> 4,&uStack_70);
        FUN_10b8bc3c4(lStack_58,uVar3);
        lStack_58 = lStack_58 + 0x10;
        FUN_10b8f8160(&lStack_80,auStack_68);
        uVar7 = uStack_78;
        func_0x00010b8f82a0(auStack_68);
      }
      uStack_78 = uVar7;
      FUN_10b8f80a8(&lStack_90);
    }
    FUN_10b8f2ca8(lVar6,&lStack_80,0,param_1);
    func_0x00010b8f8308(&lStack_80);
  }
  uVar3 = *param_1;
  *(undefined1 *)(lVar6 + 0x448) = 0;
  func_0x00010b8fdac8(uVar3);
  return;
}



/* Entry: 10b8f8084; end: 10b8f80a7;  */

undefined1  [16] FUN_10b8f8084(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_1;
  uStack_18 = param_2;
  func_0x00010b8f80dc(&uStack_20);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = uStack_20;
  return auVar1;
}



/* Entry: 10b8f80a8; end: 10b8f811f;  */

long * FUN_10b8f80a8(long *param_1)

{
  param_1[1] = param_1[1] + 0x20;
  *param_1 = *param_1 + 1;
  func_0x00010b8f80dc();
  return param_1;
}



/* Entry: 10b8f8120; end: 10b8f815f;  */

long * FUN_10b8f8120(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  if ((ulong)param_2 >> 0x3c == 0) {
    plVar2 = (long *)(param_1[2] - *param_1 >> 3);
    if (plVar2 <= param_2) {
      plVar2 = param_2;
    }
    if (0x7fffffffffffffef < (ulong)(param_1[2] - *param_1)) {
      plVar2 = (long *)0xfffffffffffffff;
    }
    return plVar2;
  }
  FUN_10b8f81ac();
  func_0x00010b8fd9d4();
  plVar2 = param_1 + 2;
  lVar1 = param_2[1] + (*param_1 - param_1[1]);
  FUN_10b8f823c(plVar2,*param_1,param_1[1],lVar1);
  *(long *)(unaff_x19 + 8) = lVar1;
  unaff_x20[1] = *unaff_x20;
  *unaff_x20 = *(undefined8 *)(unaff_x19 + 8);
  func_0x00010b8fdc8c();
  return plVar2;
}



/* Entry: 10b8f8160; end: 10b8f81ab;  */

void FUN_10b8f8160(long *param_1,long param_2)

{
  long lVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x00010b8fd9d4();
  lVar1 = *(long *)(param_2 + 8) + (*param_1 - param_1[1]);
  FUN_10b8f823c(param_1 + 2,*param_1,param_1[1],lVar1);
  *(long *)(unaff_x19 + 8) = lVar1;
  unaff_x20[1] = *unaff_x20;
  *unaff_x20 = *(undefined8 *)(unaff_x19 + 8);
  func_0x00010b8fdc8c();
  return;
}



/* Entry: 10b8f81ac; end: 10b8f81b7;  */

long * FUN_10b8f81ac(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  _abort();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010b8f8200();
  }
  lVar1 = param_4 + param_3 * 0x10;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x10;
  return param_1;
}



/* Entry: 10b8f81b8; end: 10b8f821f;  */

long * FUN_10b8f81b8(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010b8f8200();
  }
  lVar1 = param_4 + param_3 * 0x10;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x10;
  return param_1;
}



/* Entry: 10b8f8220; end: 10b8f823b;  */

void FUN_10b8f8220(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  
  if ((ulong)param_2 >> 0x3c != 0) {
    func_0x000104bfe188();
    for (puVar1 = param_2; puVar1 != param_3; puVar1 = puVar1 + 2) {
      *param_4 = *puVar1;
      *puVar1 = 0;
      param_4[1] = puVar1[1];
      puVar1[1] = 0;
      param_4 = param_4 + 2;
    }
    for (; param_2 != param_3; param_2 = param_2 + 2) {
      func_0x00010b8bc430();
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)((long)param_2 << 4);
  return;
}



/* Entry: 10b8f823c; end: 10b8f826f;  */

void FUN_10b8f823c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  
  for (puVar1 = param_2; puVar1 != param_3; puVar1 = puVar1 + 2) {
    *param_4 = *puVar1;
    *puVar1 = 0;
    param_4[1] = puVar1[1];
    puVar1[1] = 0;
    param_4 = param_4 + 2;
  }
  for (; param_2 != param_3; param_2 = param_2 + 2) {
    func_0x00010b8bc430();
  }
  return;
}



/* Entry: 10b8f8270; end: 10b8f82cb;  */

void FUN_10b8f8270(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x10) {
    func_0x00010b8bc430();
  }
  return;
}



/* Entry: 10b8f82cc; end: 10b8f82d3;  */

void FUN_10b8f82cc(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b8fd9d4(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x10;
    func_0x00010b8bc430();
  }
  return;
}



/* Entry: 10b8f82d4; end: 10b8f8367;  */

void FUN_10b8f82d4(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b8fd9d4();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x10;
    func_0x00010b8bc430();
  }
  return;
}



/* Entry: 10b8f8368; end: 10b8f836f;  */

void FUN_10b8f8368(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b8fd9d4(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x10;
    func_0x00010b8bc430();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10b8f8370; end: 10b8f83a3;  */

void FUN_10b8f8370(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b8fd9d4();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x10;
    func_0x00010b8bc430();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10b8f83a4; end: 10b8f83c7;  */

void FUN_10b8f83a4(void)

{
  return;
}



/* Entry: 10b8f83c8; end: 10b8f86a7;  */

undefined8 * FUN_10b8f83c8(undefined8 param_1,long param_2)

{
  long *plVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  bool bVar7;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  long lVar8;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  long lVar9;
  undefined8 *unaff_x20;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  long lStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_118;
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [24];
  long *plStack_f0;
  long *plStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  long alStack_c0 [4];
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar10 = param_2;
  func_0x00010b8fd41c();
  lVar10 = *(long *)(lVar10 + 0x10);
  uStack_70 = extraout_x8;
  FUN_10b8eb398(&puStack_a0,lVar10);
  puVar6 = puStack_98;
  for (; uVar3 = puStack_a0 == puVar6, !(bool)uVar3; puStack_a0 = puStack_a0 + 1) {
    func_0x00010b8f2664(*puStack_a0,param_2 + 0x18);
  }
  FUN_10b8f634c(&puStack_a0);
  if ((*(byte *)(lVar10 + 0x578) & 1) == 0) {
    bVar2 = false;
LAB_10b8f8448:
    do {
      bVar7 = bVar2;
      func_0x00010b8fe178();
      uStack_78 = 0;
      uStack_90 = 0;
      lStack_88 = 0;
      puStack_98 = (undefined8 *)0x0;
      puStack_a0 = extraout_x8_00;
      func_0x00010b8c4290(&plStack_f0,*(undefined8 *)(lVar10 + 0x90));
      plVar1 = plStack_e8;
      for (plVar11 = plStack_f0; plVar11 != plVar1; plVar11 = plVar11 + 1) {
        FUN_10b8fc8d4(&puStack_140,&puStack_a0,*plVar11 + 0x38);
      }
      func_0x0001080d57c4(&plStack_f0);
      puVar6 = *(undefined8 **)(lVar10 + 0x110);
      uVar4 = *(undefined8 *)(lVar10 + 0x118);
      FUN_10b8f8084();
      lVar8 = *(long *)(lVar10 + 0x110);
      lVar9 = *(long *)(lVar10 + 0x128);
      puStack_140 = puVar6;
      puStack_138 = (undefined8 *)uVar4;
      while (puStack_140 != (undefined8 *)(lVar8 + lVar9)) {
        FUN_10b8fc8d4(&plStack_f0,&puStack_a0,puStack_138);
        FUN_10b8f80a8(&puStack_140);
      }
      func_0x00010b9abe10(&lStack_148,uStack_90);
      puVar6 = puStack_a0;
      puVar5 = puStack_98;
      FUN_10b8f2744();
      lVar9 = lStack_148;
      puStack_a0 = (undefined8 *)((long)puStack_a0 + lStack_88);
      lVar8 = lStack_148 + 0x18;
      puStack_140 = puVar6;
      puStack_138 = puVar5;
      while (puVar6 = puStack_138, uVar3 = puStack_140 == puStack_a0, !(bool)uVar3) {
        puVar5 = puStack_140;
        func_0x000107c31084();
        FUN_10b98ea44(&plStack_f0,puVar6);
        func_0x000107c31080(auStack_110,puVar5,&plStack_f0);
        FUN_10b9a8e18(alStack_c0,auStack_110);
        FUN_10b9a9020(lVar8,alStack_c0);
        FUN_10b9a8d98(alStack_c0);
        func_0x00010b8fe658();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&plStack_f0);
        func_0x00010b8fe83c();
        lVar8 = lVar8 + 0x10;
      }
      uVar12 = *unaff_x20;
      func_0x00010b8fe560();
      func_0x00010b9a8f84();
      plStack_f0 = (long *)0x0;
      plStack_e8 = (long *)0x0;
      uStack_e0 = uStack_e0 & 0xffffffffffffff00;
      uStack_d8 = 0;
      uStack_d0 = 0;
      uStack_c8 = 0;
      uVar4 = unaff_x20[1];
      FUN_10b900bd0(alStack_c0,uVar12,&puStack_140,&plStack_f0);
      func_0x00010b8fdbfc();
      func_0x00010b8fdb0c();
      if ((extraout_x8_01 & 1) == 0) {
        func_0x00010b8fe0b0();
LAB_10b8f8660:
        func_0x00010b8fe5fc();
        func_0x000104bddf60(lVar9);
        func_0x00010b8f6018(&puStack_a0);
      }
      else {
        plStack_f0 = (long *)*unaff_x20;
        plStack_e8 = alStack_c0;
        uStack_e0 = 1;
        uStack_d8 = uVar4;
        func_0x0001080e01a8(&uStack_d0);
        FUN_10b8dbbec(auStack_110,*unaff_x20,lVar10 + 0x1b8,lVar10 + 0x1e0,&plStack_f0);
        func_0x00010b8fdb0c();
        if ((extraout_x8_02 & 1) == 0) {
          func_0x00010b8fe0b0();
          func_0x00010b8fddf8();
          goto LAB_10b8f8660;
        }
        func_0x00010b8fe178();
        uStack_118 = 0;
        lStack_130 = 0;
        uStack_128 = 0;
        puStack_138 = (undefined8 *)0x0;
        FUN_10b8f27d8(lVar10,auStack_108,&puStack_140);
        lVar8 = lStack_130;
        func_0x00010b8f6018(&puStack_140);
        func_0x00010b8fddf8();
        func_0x00010b8fe5fc();
        func_0x000104bddf60(lVar9);
        func_0x00010b8f6018(&puStack_a0);
        bVar2 = true;
        if (lVar8 != 0) goto LAB_10b8f8448;
      }
      uVar4 = *unaff_x20;
      *(undefined1 *)(lVar10 + 0x448) = 0;
      func_0x00010b8fdac8(uVar4);
      bVar2 = false;
    } while (bVar7);
  }
  else {
    uVar4 = *unaff_x20;
    *(undefined1 *)(lVar10 + 0x448) = 0;
    func_0x00010b8fdac8(uVar4);
  }
  puVar6 = *(undefined8 **)(param_2 + 0x18);
  func_0x00010b948aa0();
  func_0x00010b8fd3bc(uStack_70);
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    func_0x0001080e5d64(puVar6[2]);
    return puVar6 + 2;
  }
  return puVar6;
}



/* Entry: 10b8f86a8; end: 10b8f86fb;  */

undefined8 * FUN_10b8f86a8(long param_1)

{
  func_0x0001080e5d64(*(undefined8 *)(param_1 + 0x10));
  return (undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b8f86fc; end: 10b8f8803;  */

void FUN_10b8f86fc(long param_1,long param_2)

{
  ulong uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long extraout_x8;
  long extraout_x10;
  long extraout_x10_00;
  long extraout_x10_01;
  long lVar6;
  long extraout_x11;
  long extraout_x11_00;
  long extraout_x11_01;
  long lVar7;
  undefined1 extraout_w12;
  undefined1 extraout_w12_00;
  undefined1 uVar8;
  long extraout_x14;
  long lVar9;
  
  lVar9 = *(long *)(param_2 + 0x10);
  uVar4 = *(ulong *)(lVar9 + 0x2b8);
  uVar5 = *(undefined8 *)(lVar9 + 0x2c0);
  FUN_10b8f2744();
  while( true ) {
    uVar1 = *(long *)(lVar9 + 0x2b8) + *(long *)(lVar9 + 0x2d0);
    uVar2 = uVar4 <= uVar1;
    uVar3 = uVar1 == uVar4;
    if ((bool)uVar3) break;
    func_0x00010b8feaa8();
    func_0x00010b8fe5ac();
    func_0x00010b8fe338();
    if ((*(byte *)(*(long *)(param_1 + 8) + 8) & 1) == 0) {
      func_0x00010b8fe53c();
      FUN_10b8f279c();
    }
    func_0x00010b8fe83c();
    func_0x00010b8bc430(uVar5);
    *(long *)(lVar9 + 0x2c8) = *(long *)(lVar9 + 0x2c8) + -1;
    func_0x00010b8fdf38(0);
    lVar6 = extraout_x10;
    lVar7 = extraout_x11;
    uVar8 = extraout_w12;
    if ((!(bool)uVar3) &&
       (func_0x00010b8fe43c(), lVar6 = extraout_x10_00, lVar7 = extraout_x11_00,
       uVar8 = extraout_w12_00, extraout_x14 != 0)) {
      func_0x00010b8fd9f8();
      uVar8 = 0x80;
      lVar6 = extraout_x10_01;
      lVar7 = extraout_x11_01;
      if ((bool)uVar2) {
        uVar8 = 0xfe;
      }
    }
    *(undefined1 *)(lVar6 + lVar7) = uVar8;
    func_0x00010b8fe4dc();
    *(long *)(lVar9 + 0x2e0) = *(long *)(lVar9 + 0x2e0) + extraout_x8;
  }
  return;
}



/* Entry: 10b8f8804; end: 10b8f8827;  */

void FUN_10b8f8804(void)

{
  return;
}



/* Entry: 10b8f8828; end: 10b8f885f;  */

undefined8 * FUN_10b8f8828(undefined8 *param_1,long *param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10b8f8860(param_1,*param_2,param_2[1],param_2[1] - *param_2 >> 4);
  return param_1;
}



/* Entry: 10b8f8860; end: 10b8f88a7;  */

void FUN_10b8f8860(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    func_0x00010b8fe2d8();
    FUN_10b8f88a8();
    func_0x00010b8fe8e8();
    lVar1 = param_1 + 0x10;
    FUN_10b8f8904();
    *(long *)(param_1 + 8) = lVar1;
    return;
  }
  return;
}



/* Entry: 10b8f88a8; end: 10b8f8903;  */

void FUN_10b8f88a8(long param_1,ulong param_2)

{
  long lVar1;
  long *unaff_x19;
  
  if (param_2 >> 0x3c == 0) {
    func_0x00010b8fdf68();
    func_0x00010b8f8200();
    *unaff_x19 = param_1;
    unaff_x19[1] = param_1;
    unaff_x19[2] = param_1 + param_2 * 0x10;
  }
  else {
    FUN_10b8f81ac();
    lVar1 = param_1 + 0x10;
    FUN_10b8f8904();
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 10b8f8904; end: 10b8f8917;  */

void FUN_10b8f8904(void)

{
  FUN_10b8f8918();
  return;
}



/* Entry: 10b8f8918; end: 10b8f8953;  */

void FUN_10b8f8918(undefined8 param_1,long param_2,long param_3,long param_4)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x10) {
    FUN_10b8bc3c4(param_4,param_2);
    param_4 = param_4 + 0x10;
  }
  return;
}



/* Entry: 10b8f8954; end: 10b8f8a0f;  */

void FUN_10b8f8954(undefined8 param_1,long param_2)

{
  undefined **ppuVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 extraout_x8;
  long lVar4;
  long *plVar5;
  undefined **ppuVar6;
  code *in_stack_00000008;
  undefined **in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000038;
  
  func_0x00010b8feb10();
  func_0x00010b8fd41c();
  plVar5 = *(long **)(param_2 + 0x10);
  lVar4 = *plVar5;
  in_stack_00000038 = extraout_x8;
  FUN_10b8eb398(&stack0x00000008,lVar4);
  ppuVar1 = in_stack_00000010;
  for (ppuVar6 = (undefined **)in_stack_00000008; uVar2 = ppuVar6 == ppuVar1, !(bool)uVar2;
      ppuVar6 = ppuVar6 + 1) {
    FUN_10b8f2c10(*ppuVar6,plVar5 + 1,(char)plVar5[4]);
  }
  FUN_10b8f634c(&stack0x00000008);
  lVar3 = lVar4;
  FUN_10b8f2ca8(lVar4,plVar5 + 1,(char)plVar5[4]);
  if ((*(byte *)(plVar5 + 4) & 1) != 0) {
    in_stack_00000008 = FUN_10b8f86fc;
    in_stack_00000010 = &PTR_FUN_110d737e0;
    in_stack_00000018 = lVar4;
    func_0x00010b8fdcc8();
    FUN_10b8ebbf0();
    func_0x00010b8fd604(in_stack_00000010);
  }
  func_0x00010b8fd3bc(in_stack_00000038);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  lVar4 = *(long *)(lVar3 + 8);
  if (lVar4 != 0) {
    func_0x00010b8f8308(lVar4 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar4);
    return;
  }
  return;
}



/* Entry: 10b8f8a10; end: 10b8f8a3f;  */

void FUN_10b8f8a10(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    func_0x00010b8f8308(lVar1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10b8f8a40; end: 10b8f8a43;  */

void FUN_10b8f8a40(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b8f8a44; end: 10b8f8a83;  */

void FUN_10b8f8a44(long param_1)

{
  long unaff_x19;
  undefined8 *unaff_x21;
  
  func_0x00010b8feac0();
  func_0x00010b8fd934(&PTR_FUN_110d73800);
  func_0x00010b8fe6a8(*unaff_x21);
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(unaff_x21 + 4);
  *(long *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 10b8f8a84; end: 10b8f8d8f;  */

void FUN_10b8f8a84(undefined8 param_1,code **param_2)

{
  ulong uVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  long lVar6;
  long *plVar7;
  undefined1 *puVar8;
  undefined8 extraout_x8;
  code *pcVar9;
  ulong uVar10;
  undefined **extraout_x8_00;
  undefined **extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  int extraout_w9;
  code *extraout_x9;
  code *extraout_x9_00;
  code *extraout_x9_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  undefined8 *puVar11;
  code **unaff_x20;
  code *unaff_x21;
  code *pcVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  undefined1 auStack_1f8 [120];
  code *pcStack_180;
  code *pcStack_178;
  code **ppcStack_170;
  undefined8 *puStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  long lStack_150;
  undefined1 auStack_148 [32];
  code *pcStack_128;
  undefined **ppuStack_120;
  code *pcStack_118;
  undefined1 auStack_108 [32];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 uStack_c0;
  code *pcStack_b8;
  code **ppcStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined1 auStack_88 [32];
  undefined8 uStack_68;
  
  func_0x00010b8fd41c();
  pcVar12 = param_2[2];
  puVar11 = *(undefined8 **)pcVar12;
  lVar13 = *(long *)(pcVar12 + 8);
  pcVar14 = (code *)puVar11[0x97];
  pcVar9 = (code *)puVar11[0x98];
  uVar5 = pcVar14 == pcVar9;
  uStack_68 = extraout_x8;
  if (pcVar14 < pcVar9) {
    if (lVar13 != 0) {
      do {
        func_0x00010b8fd7f4();
      } while (extraout_w10 != 0);
    }
    pcVar9 = pcVar14 + 8;
    *(long *)pcVar14 = lVar13;
LAB_10b8f8ba8:
    puVar11[0x97] = pcVar9;
    (**(code **)(**(long **)(pcVar12 + 8) + 0x20))(&lStack_150);
    pcVar9 = *unaff_x20;
    if (lStack_150 == 0) {
      func_0x00010b8fddb4();
      ppuStack_120 = extraout_x8_01;
      pcStack_128 = extraout_x9_01;
    }
    else {
      func_0x00010b8fdc0c();
      ppuStack_120 = extraout_x8_00;
      pcStack_128 = extraout_x9_00;
    }
    func_0x00010b8fdc80();
    func_0x00010b8fe1fc(auStack_88);
    func_0x00010b8fdb0c();
    if ((extraout_x8_02 & 1) == 0) {
      func_0x00010b8fd990();
    }
    else {
      uStack_d8 = 0;
      uStack_e8 = 0;
      uStack_e0 = 0;
      uStack_d0 = 0;
      uStack_c8 = 0;
      uStack_c0 = 0;
      pcStack_b8 = (code *)&uStack_e8;
      ppcStack_b0 = (code **)0x0;
      uStack_a8 = CONCAT71(uStack_a8._1_7_,1);
      uStack_98 = 0;
      uStack_90 = 0;
      lVar13 = *(long *)(pcVar12 + 8);
      pcStack_a0 = (code *)&lStack_150;
      pcVar12 = (code *)&lStack_150;
      if (lVar13 != 0) {
        do {
          pcStack_a0 = pcVar12;
          func_0x00010b8fd7f4();
          pcVar12 = pcStack_a0;
        } while (extraout_w10_01 != 0);
      }
      func_0x00010b8fe6ec();
      pcStack_128 = FUN_10b8f8d90;
      ppuStack_120 = &PTR_FUN_110d73820;
      pcVar12 = pcVar9;
      func_0x00010b8fe2b8();
      *(undefined8 **)pcVar12 = puVar11;
      if (lVar13 != 0) {
        do {
          func_0x00010b8fd7f4();
        } while (extraout_w10_02 != 0);
      }
      *(long *)(pcVar12 + 8) = lVar13;
      param_2 = &pcStack_b8;
      pcStack_118 = pcVar12;
      FUN_10b8de86c(pcVar9,param_2,&pcStack_128);
      func_0x00010b8fd604(ppuStack_120);
      FUN_10b8f5f88(lVar13);
      pcVar12 = pcVar9 + 8;
      do {
        func_0x00010b8fe3dc();
      } while (extraout_w9 != 0);
      pcStack_128 = pcVar9;
      func_0x00010b8fe1fc(&uStack_e8);
      func_0x0001080e0c4c(pcStack_128);
      func_0x00010b8fdb0c();
      if ((extraout_x8_03 & 1) == 0) {
        func_0x00010b8fd990();
      }
      else {
        func_0x0001080e08ac(&pcStack_128,auStack_88);
        func_0x0001080e08ac(auStack_108,&uStack_e8);
        pcStack_b8 = *unaff_x20;
        pcStack_a0 = unaff_x20[1];
        uStack_a8 = 2;
        ppcStack_b0 = &pcStack_128;
        func_0x00010b8fdb50(&pcStack_b8);
        param_2 = (code **)(puVar11 + 0x37);
        FUN_10b8dbbec(auStack_148,*unaff_x20,param_2,puVar11 + 0x3f,&pcStack_b8);
        func_0x00010b8fdda4();
        func_0x00010b8fdb0c();
        if ((extraout_x8_04 & 1) == 0) {
          func_0x00010b8fd990();
        }
        puVar11 = (undefined8 *)0x20;
        unaff_x20 = &pcStack_128;
        do {
          func_0x00010b8fe020();
          func_0x00010b8fdfcc();
        } while (!(bool)uVar5);
      }
      func_0x00010b8fe194();
      do {
        uVar5 = *(long *)pcVar12 + -1 == 0;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pcVar12,0x10);
        if (bVar4) {
          *(long *)pcVar12 = *(long *)pcVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      unaff_x21 = pcVar9;
      if ((bool)uVar5) {
        func_0x00010b8fd8d8();
      }
    }
    func_0x00010b8fe610();
    func_0x00010b8fe038();
    func_0x00010b8fd3bc(uStack_68);
    if ((bool)uVar5) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    unaff_x21 = (code *)puVar11[0x96];
    lVar15 = (long)pcVar14 - (long)unaff_x21 >> 3;
    uVar1 = lVar15 + 1;
    if (uVar1 >> 0x3d == 0) {
      uVar10 = (long)pcVar9 - (long)unaff_x21;
      uVar2 = (long)uVar10 >> 2;
      if ((ulong)((long)uVar10 >> 2) <= uVar1) {
        uVar2 = uVar1;
      }
      uVar5 = uVar10 == 0x7ffffffffffffff8;
      if (0x7ffffffffffffff7 < uVar10) {
        uVar2 = 0x1fffffffffffffff;
      }
      if (uVar2 == 0) {
        lVar6 = 0;
      }
      else {
        if (uVar2 >> 0x3d != 0) goto LAB_10b8f8d8c;
        lVar6 = uVar2 << 3;
        __Znwm();
      }
      plVar7 = (long *)(lVar6 + ((long)pcVar14 - (long)unaff_x21));
      if (lVar13 != 0) {
        do {
          func_0x00010b8fd7f4();
        } while (extraout_w10_00 != 0);
        pcVar14 = (code *)puVar11[0x97];
        unaff_x21 = (code *)puVar11[0x96];
        lVar15 = (long)pcVar14 - (long)unaff_x21 >> 3;
      }
      *plVar7 = lVar13;
      pcVar9 = unaff_x21;
      while (pcVar9 != pcVar14) {
        func_0x00010b8fe40c();
        pcVar9 = extraout_x9;
      }
      for (; uVar5 = unaff_x21 == pcVar14, !(bool)uVar5; unaff_x21 = unaff_x21 + 8) {
        func_0x00010b8f5f68(unaff_x21);
      }
      pcVar9 = (code *)(plVar7 + 1);
      lVar13 = puVar11[0x96];
      puVar11[0x96] = plVar7 + -lVar15;
      puVar11[0x97] = pcVar9;
      puVar11[0x98] = lVar6 + uVar2 * 8;
      if (lVar13 != 0) {
        __ZdlPv();
      }
      goto LAB_10b8f8ba8;
    }
  }
  func_0x00010bdb3f54();
LAB_10b8f8d8c:
  func_0x000104bfe188();
  pcStack_158 = FUN_10b8f8d90;
  pcStack_180 = pcVar12;
  pcStack_178 = unaff_x21;
  ppcStack_170 = unaff_x20;
  puStack_168 = puVar11;
  puStack_160 = &stack0xfffffffffffffff0;
  func_0x00010b8fe554();
  func_0x00010b8fd3f4();
  pcVar12 = param_2[2];
  FUN_10b8e5870(auStack_1f8,*(long *)pcVar12 + 0x460);
  plVar7 = *(long **)(pcVar12 + 8);
  func_0x00010b8fdcbc(plVar7,*puVar11);
  (**(code **)(*plVar7 + 0x28))(unaff_x20);
  puVar8 = auStack_1f8;
  func_0x00010b8e58cc();
  func_0x00010b8fd38c();
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
  lVar13 = *(long *)(puVar8 + 8);
  if (lVar13 == 0) {
    return;
  }
  func_0x00010b8f5f68(lVar13 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar13);
  return;
}



/* Entry: 10b8f8d90; end: 10b8f8e17;  */

void FUN_10b8f8d90(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 *unaff_x19;
  long lVar2;
  long *plVar3;
  undefined1 auStack_a8 [120];
  
  func_0x00010b8fe554();
  func_0x00010b8fd3f4();
  plVar3 = *(long **)(param_2 + 0x10);
  FUN_10b8e5870(auStack_a8,*plVar3 + 0x460);
  plVar3 = (long *)plVar3[1];
  func_0x00010b8fdcbc(plVar3,*unaff_x19);
  (**(code **)(*plVar3 + 0x28))();
  puVar1 = auStack_a8;
  func_0x00010b8e58cc();
  func_0x00010b8fd38c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  lVar2 = *(long *)(puVar1 + 8);
  if (lVar2 != 0) {
    func_0x00010b8f5f68(lVar2 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10b8f8e18; end: 10b8f8e47;  */

void FUN_10b8f8e18(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    func_0x00010b8f5f68(lVar1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10b8f8e48; end: 10b8f8e4b;  */

void FUN_10b8f8e48(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b8f8e4c; end: 10b8f8ec3;  */

void FUN_10b8f8e4c(undefined8 *param_1)

{
  long lVar1;
  undefined8 extraout_x8;
  undefined8 uVar2;
  int extraout_w11;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x00010b8fdcd4();
  *param_1 = &PTR_FUN_110d73820;
  func_0x00010b8fe2b8();
  lVar1 = unaff_x20[1];
  *param_1 = *unaff_x20;
  uVar2 = 0;
  if (lVar1 != 0) {
    do {
      func_0x00010b8fe168();
      uVar2 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  param_1[1] = uVar2;
  *(undefined8 **)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 10b8f8ec4; end: 10b8f8ec7;  */

void FUN_10b8f8ec4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b8f8ec8; end: 10b8f8f0f;  */

void FUN_10b8f8ec8(undefined8 *param_1)

{
  long lVar1;
  undefined8 extraout_x8;
  undefined8 uVar2;
  int extraout_w11;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x00010b8fdcd4();
  *param_1 = &PTR_DAT_110d73840;
  func_0x00010b8fe2b8();
  lVar1 = unaff_x20[1];
  *param_1 = *unaff_x20;
  uVar2 = 0;
  if (lVar1 != 0) {
    do {
      func_0x00010b8fe168();
      uVar2 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  param_1[1] = uVar2;
  *(undefined8 **)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 10b8f8f10; end: 10b8f9137;  */

void FUN_10b8f8f10(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 extraout_x8;
  undefined8 *puVar8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 uVar9;
  ulong uVar10;
  int extraout_w11;
  int extraout_w11_00;
  long *unaff_x20;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined1 auStack_f0 [16];
  undefined8 auStack_e0 [2];
  long lStack_d0;
  undefined1 auStack_c8 [32];
  long alStack_a8 [6];
  long lStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  
  lVar14 = param_2;
  func_0x00010b8fd41c();
  plVar11 = *(long **)(lVar14 + 0x18);
  uStack_68 = extraout_x8;
  FUN_10b98c5cc(auStack_e0,lVar14 + 0x10);
  plVar7 = plVar11;
  FUN_10b8f1ee8(auStack_f0,plVar11,auStack_e0);
  uVar3 = *(char *)(unaff_x20[1] + 8) == '\x01';
  if ((bool)uVar3) {
    plVar7 = (long *)*unaff_x20;
    FUN_10b8e129c();
    uVar3 = *(char *)(unaff_x20[1] + 8) == '\x01';
    plStack_70 = plVar7;
    if (!(bool)uVar3) goto LAB_10b8f90f8;
    alStack_a8[0] = *unaff_x20;
    alStack_a8[1] = 0;
    alStack_a8[2] = 0;
    alStack_a8[3] = unaff_x20[1];
    func_0x00010b8fdb50(alStack_a8);
    puVar4 = (undefined8 *)*unaff_x20;
    if (lStack_d0 == 0) {
      func_0x00010b8fddb4();
    }
    else {
      func_0x00010b8fdc0c();
    }
    plVar7 = &lStack_78;
    func_0x00010b8dbcac(auStack_c8);
    func_0x00010b8fddec(unaff_x20[1]);
    if (!(bool)uVar3) {
LAB_10b8f90f4:
      func_0x00010b8fdf4c();
      goto LAB_10b8f90f8;
    }
    puVar13 = (undefined8 *)plVar11[0x9a];
    puVar8 = (undefined8 *)plVar11[0x9b];
    uVar3 = puVar13 == puVar8;
    if (puVar13 < puVar8) {
      *puVar13 = 0;
      puVar13[1] = 0;
      puVar13 = puVar13 + 2;
LAB_10b8f90bc:
      plVar11[0x9a] = (long)puVar13;
      func_0x000107c31068(puVar13 + -2,param_2 + 0x20);
      plVar7 = (long *)(param_2 + 0x10);
      func_0x000107c31068(puVar13 + -1);
      if (*(long *)(*unaff_x20 + 0x200) != 0) {
        plVar7 = (long *)(param_2 + 0x20);
        FUN_10b907268(*(long *)(*unaff_x20 + 0x200),plVar7,auStack_c8,unaff_x20[1]);
      }
      goto LAB_10b8f90f4;
    }
    puVar12 = (undefined8 *)plVar11[0x99];
    lVar14 = (long)puVar13 - (long)puVar12 >> 4;
    uVar1 = lVar14 + 1;
    if (uVar1 >> 0x3c == 0) {
      uVar10 = (long)puVar8 - (long)puVar12 >> 3;
      if (uVar10 <= uVar1) {
        uVar10 = uVar1;
      }
      if (0x7fffffffffffffef < (ulong)((long)puVar8 - (long)puVar12)) {
        uVar10 = 0xfffffffffffffff;
      }
      if (uVar10 >> 0x3c != 0) goto LAB_10b8f9134;
      lVar5 = uVar10 << 4;
      __Znwm();
      puVar2 = (undefined8 *)(lVar5 + ((long)puVar13 - (long)puVar12));
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar8 = puVar2 + lVar14 * -2;
      for (puVar4 = puVar12; puVar4 != puVar13; puVar4 = puVar4 + 2) {
        *puVar8 = *puVar4;
        *puVar4 = 0;
        puVar8[1] = puVar4[1];
        puVar4[1] = 0;
        puVar8 = puVar8 + 2;
      }
      for (; uVar3 = puVar12 == puVar13, !(bool)uVar3; puVar12 = puVar12 + 2) {
        func_0x00010b8f5f48(puVar12);
      }
      lVar6 = plVar11[0x99];
      plVar11[0x99] = (long)(puVar2 + lVar14 * -2);
      puVar13 = puVar2 + 2;
      plVar11[0x9a] = (long)puVar13;
      plVar11[0x9b] = lVar5 + uVar10 * 0x10;
      if (lVar6 != 0) {
        __ZdlPv();
      }
      goto LAB_10b8f90bc;
    }
  }
  else {
LAB_10b8f90f8:
    func_0x00010b8fe844();
    puVar4 = auStack_e0;
    func_0x00010b8c2b50();
    func_0x00010b8fd3bc(uStack_68);
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
  }
  func_0x00010bdb3f60();
LAB_10b8f9134:
  func_0x000104bfe188();
  *puVar4 = &PTR_DAT_110d73860;
  uVar9 = 0;
  if (*plVar7 != 0) {
    do {
      func_0x00010b8fdb28();
      uVar9 = extraout_x8_00;
    } while (extraout_w11 != 0);
  }
  puVar4[1] = uVar9;
  lVar14 = plVar7[2];
  puVar4[2] = plVar7[1];
  uVar9 = 0;
  if (lVar14 != 0) {
    do {
      func_0x00010b8fdb28();
      uVar9 = extraout_x8_01;
    } while (extraout_w11_00 != 0);
  }
  puVar4[3] = uVar9;
  return;
}



/* Entry: 10b8f9138; end: 10b8f91eb;  */

void FUN_10b8f9138(undefined8 *param_1,long *param_2)

{
  long lVar1;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uVar2;
  int extraout_w11;
  int extraout_w11_00;
  
  *param_1 = &PTR_DAT_110d73860;
  uVar2 = 0;
  if (*param_2 != 0) {
    do {
      func_0x00010b8fdb28();
      uVar2 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  param_1[1] = uVar2;
  lVar1 = param_2[2];
  param_1[2] = param_2[1];
  uVar2 = 0;
  if (lVar1 != 0) {
    do {
      func_0x00010b8fdb28();
      uVar2 = extraout_x8_00;
    } while (extraout_w11_00 != 0);
  }
  param_1[3] = uVar2;
  return;
}



/* Entry: 10b8f91ec; end: 10b8f92bb;  */

void FUN_10b8f91ec(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 uVar2;
  long unaff_x19;
  long unaff_x21;
  undefined1 auStack_60 [24];
  undefined8 auStack_48 [3];
  
  func_0x00010b8fea3c();
  func_0x00010b8fd3f4();
  lVar1 = *(long *)(param_2 + 0x18);
  uVar2 = **(char **)(param_2 + 0x10) == '\x01';
  if ((bool)uVar2) {
    FUN_10b8fc8d4(auStack_60,lVar1 + 0x288,*(long *)(unaff_x19 + 0x20) + 8);
  }
  FUN_10b8f1ee8(auStack_60,lVar1,*(long *)(unaff_x19 + 0x20) + 8);
  if ((*(byte *)(*(long *)(unaff_x21 + 8) + 8) & 1) == 0) {
    uVar2 = **(char **)(unaff_x19 + 0x10) == '\x01';
    if ((bool)uVar2) {
      FUN_10b8f279c(lVar1,&UNK_10f7cca0d,0xe);
    }
    else {
      func_0x00010b8fe87c();
      auStack_48[0] = 2;
      func_0x0001080c6694(*(undefined8 *)(unaff_x19 + 0x28),auStack_48);
      func_0x0001080c6234(auStack_48);
      func_0x00010b8fdd9c();
    }
  }
  func_0x00010b8fe844();
  func_0x00010b8fd38c();
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 10b8f92bc; end: 10b8f92c7;  */

void FUN_10b8f92bc(void)

{
  return;
}



/* Entry: 10b8f92c8; end: 10b8f93b7;  */

void FUN_10b8f92c8(long param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  long extraout_x8;
  int extraout_w11;
  undefined8 *puVar4;
  undefined1 auStack_50 [8];
  long lStack_48;
  undefined1 auStack_40 [16];
  
  uVar2 = SUB84(auStack_50,0);
  puVar4 = *(undefined8 **)(param_2 + 0x10);
  lVar1 = puVar4[1];
  *(undefined1 *)*puVar4 = 1;
  FUN_10b8f22c4(auStack_40,lVar1,puVar4[2],param_1);
  if ((*(byte *)(*(long *)(param_1 + 8) + 8) & 1) == 0) {
    FUN_10b9a0084(&lStack_48);
    func_0x00010b8fdcc8();
    FUN_10b99ff08();
    func_0x00010b8fdd9c();
  }
  else {
    lVar3 = *(long *)puVar4[4];
    if (lVar3 == 0) {
      func_0x00010b8fe1c4();
      *(int *)puVar4[5] = (int)lVar3;
    }
    else {
      func_0x00010b8fde24();
      func_0x00010b8fe128();
      lStack_48 = *(long *)(lVar3 + 0x10);
      if (lStack_48 == 0) {
        lStack_48 = 0;
        func_0x00010b8c292c(&lStack_48,lVar1 + 0x460);
      }
      else if (*(long *)(lStack_48 + 0x10) != 0) {
        do {
          func_0x00010b8fda68();
          lStack_48 = extraout_x8;
        } while (extraout_w11 != 0);
      }
      func_0x00010b8c3d48(auStack_50,&lStack_48);
      func_0x00010b8fe1c4();
      *(undefined4 *)puVar4[5] = uVar2;
      func_0x00010b8c3d80(auStack_50);
      func_0x00010b8fe108();
    }
  }
  func_0x00010b8fe844();
  return;
}



/* Entry: 10b8f93b8; end: 10b8f93cb;  */

void FUN_10b8f93b8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b8f93cc; end: 10b8f93f7;  */

void FUN_10b8f93cc(undefined8 *param_1)

{
  func_0x00010b8fdcd4();
  *param_1 = &PTR_FUN_110d738a0;
  func_0x00010b8fdd04();
  func_0x00010b8fe4f4();
  return;
}



/* Entry: 10b8f93f8; end: 10b8f9463;  */

void FUN_10b8f93f8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  long unaff_x21;
  undefined8 auStack_40 [2];
  
  func_0x00010b8fd9b8();
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  FUN_10b8f22c4(auStack_40,uVar1,param_2 + 0x18);
  if ((*(byte *)(*(long *)(unaff_x21 + 8) + 8) & 1) == 0) {
    FUN_10b8f279c(uVar1,&UNK_10f7cca1c,9);
  }
  else {
    func_0x00010b8ea248(auStack_40[0],unaff_x20 + 0x20);
  }
  func_0x00010b8fe338();
  return;
}



/* Entry: 10b8f9464; end: 10b8f94af;  */

undefined8 * FUN_10b8f9464(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 extraout_x8;
  undefined8 uVar2;
  int extraout_w11;
  
  uVar2 = *param_2;
  lVar1 = param_2[1];
  *param_1 = &PTR_FUN_110d738c0;
  param_1[1] = uVar2;
  uVar2 = 0;
  if (lVar1 != 0) {
    do {
      func_0x00010b8fdb28();
      uVar2 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  param_1[2] = uVar2;
  FUN_10b9a8f04(param_1 + 3,param_2 + 2);
  return param_1;
}



/* Entry: 10b8f94b0; end: 10b8f94f7;  */

void FUN_10b8f94b0(long param_1)

{
  long unaff_x19;
  
  func_0x00010b8fdf68(param_1 + 8);
  FUN_10b9a8d98();
  func_0x000107c278f4(unaff_x19 + 8);
  return;
}



/* Entry: 10b8f94f8; end: 10b8f961b;  */

undefined1 * FUN_10b8f94f8(int param_1,long param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 extraout_x8;
  undefined1 *extraout_x8_00;
  undefined1 *extraout_x8_01;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  undefined8 *unaff_x19;
  long lVar2;
  undefined1 auStack_138 [32];
  undefined8 uStack_118;
  undefined1 *puStack_110;
  undefined8 uStack_108;
  undefined1 auStack_f8 [16];
  undefined1 auStack_e8 [32];
  undefined1 auStack_c8 [32];
  undefined1 auStack_a8 [88];
  undefined1 uStack_50;
  undefined8 uStack_48;
  
  lVar2 = param_2;
  func_0x00010b8fd408();
  lVar2 = *(long *)(lVar2 + 0x20);
  auStack_a8[0] = 0;
  uStack_50 = 0;
  uStack_48 = extraout_x8;
  func_0x000105c3b044();
  if (param_1 != 0) {
    func_0x00010b9a7520(auStack_e8,&UNK_10f7cca26,0x13,param_2 + 0x10);
    func_0x00010b8a6ed0(auStack_a8,auStack_e8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_e8);
  }
  if (*(long *)(param_2 + 0x10) == 0) {
    func_0x00010b8fddb4(*unaff_x19);
    puStack_110 = extraout_x8_01;
    uStack_118 = extraout_x9_00;
  }
  else {
    func_0x00010b8fdc0c();
    puStack_110 = extraout_x8_00;
    uStack_118 = extraout_x9;
  }
  func_0x00010b8fdc80();
  func_0x00010b8fe1fc(auStack_e8);
  FUN_10b8dba18(auStack_c8,*unaff_x19,*(undefined4 *)(param_2 + 0x18));
  func_0x00010b8fdeac();
  if ((bool)in_ZR) {
    uStack_118 = *unaff_x19;
    uStack_108 = 2;
    puStack_110 = auStack_e8;
    func_0x0001080e01a8(auStack_f8);
    FUN_10b8dbbec(auStack_138,*unaff_x19,lVar2 + 0x1b8,lVar2 + 0x200,&uStack_118);
    func_0x00010b8fdda4();
  }
  do {
    func_0x0001080e0bc0(auStack_c8);
    func_0x00010b8fdfcc();
  } while (!(bool)in_ZR);
  puVar1 = auStack_a8;
  func_0x0001080e8dd4(puVar1);
  func_0x00010b8fd3bc(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010007e5d0(puVar1 + 8);
    func_0x0001003a8cb8();
    return (undefined1 *)0x20;
  }
  return puVar1;
}



/* Entry: 10b8f961c; end: 10b8f967b;  */

void FUN_10b8f961c(long param_1)

{
  func_0x00010007e5d0(param_1 + 8);
  func_0x0001003a8cb8();
  return;
}



/* Entry: 10b8f967c; end: 10b8f9887;  */

void FUN_10b8f967c(int param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 in_ZR;
  undefined1 *puVar5;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined *extraout_x8_01;
  undefined *extraout_x8_02;
  code *extraout_x9;
  undefined *extraout_x9_00;
  code *extraout_x9_01;
  undefined8 *extraout_x9_02;
  undefined8 *extraout_x9_03;
  undefined8 *unaff_x19;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined1 auStack_1a0 [32];
  undefined8 uStack_180;
  undefined1 *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined1 auStack_150 [8];
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [32];
  undefined1 auStack_110 [32];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  undefined1 auStack_d0 [96];
  undefined8 uStack_70;
  
  func_0x00010b8fd408();
  plVar8 = *(long **)(param_2 + 0x10);
  lVar7 = plVar8[4];
  uStack_70 = extraout_x8;
  func_0x00010b8fe63c();
  if (param_1 != 0) {
    FUN_10b8c74ac(auStack_d0,&UNK_10f7cca3a);
  }
  lVar1 = *plVar8;
  lVar3 = plVar8[1];
  plVar2 = (long *)*unaff_x19;
  uVar4 = unaff_x19[1];
  func_0x00010b8fe53c(auStack_150);
  (*extraout_x9)();
  func_0x00010b8feae4();
  if ((bool)in_ZR) {
    for (lVar6 = 0; in_ZR = lVar3 - lVar1 >> 3 == lVar6, !(bool)in_ZR; lVar6 = lVar6 + 1) {
      if (*(long *)(*plVar8 + lVar6 * 8) == 0) {
        uStack_e8 = 0;
        puStack_f0 = &UNK_10f7d0ef0;
      }
      else {
        func_0x00010b8fdc0c();
        uStack_e8 = extraout_x8_00;
        puStack_f0 = extraout_x9_00;
      }
      func_0x00010b8fdc80(*unaff_x19);
      (*extraout_x9_01)(&uStack_180);
      func_0x00010b8feae4();
      if (!(bool)in_ZR) {
LAB_10b8f9798:
        func_0x00010b8fe150();
        uStack_e0 = extraout_x9_03[1];
        uStack_e8 = *extraout_x9_03;
        uStack_d8 = 0;
        puStack_f0 = extraout_x8_02;
        func_0x00010b8fe6d8();
        goto LAB_10b8f97c4;
      }
      (**(code **)(*plVar2 + 0x108))(plVar2,auStack_148,lVar6,&puStack_178,uVar4);
      func_0x00010b8feae4();
      if (!(bool)in_ZR) goto LAB_10b8f9798;
      func_0x00010b8fe6d8();
    }
    func_0x0001080e08ac(&puStack_f0,auStack_150);
  }
  else {
    func_0x00010b8fe150();
    uStack_e0 = extraout_x9_02[1];
    uStack_e8 = *extraout_x9_02;
    uStack_d8 = 0;
    puStack_f0 = extraout_x8_01;
  }
LAB_10b8f97c4:
  func_0x00010b8fe714();
  func_0x00010b8fddec(unaff_x19[1]);
  if ((bool)in_ZR) {
    FUN_10b8dd210(auStack_150,&puStack_f0);
    FUN_10b8dba18(auStack_130,*unaff_x19,(int)plVar8[3]);
    FUN_10b8dba18(auStack_110,*unaff_x19,*(undefined4 *)((long)plVar8 + 0x1c));
    uStack_180 = *unaff_x19;
    uStack_168 = unaff_x19[1];
    uStack_170 = 3;
    puStack_178 = auStack_150;
    func_0x00010b8fdb50(&uStack_180);
    FUN_10b8dbbec(auStack_1a0,*unaff_x19,lVar7 + 0x1b8,lVar7 + 0x208,&uStack_180);
    func_0x0001080e0bc0(auStack_1a0);
    do {
      func_0x00010b8fe020();
      func_0x00010b8fdfcc();
    } while (!(bool)in_ZR);
  }
  func_0x00010b8fe7ac();
  puVar5 = auStack_d0;
  func_0x0001080e8dd4();
  func_0x00010b8fd3bc(uStack_70);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(puVar5 + 8) != 0) {
    func_0x000104bfe1e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b8f9888; end: 10b8f98a7;  */

void FUN_10b8f9888(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000104bfe1e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b8f98a8; end: 10b8f98ab;  */

void FUN_10b8f98a8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b8f98ac; end: 10b8f998f;  */

void FUN_10b8f98ac(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x00010b8fdcd4();
  func_0x00010b8fd934(&PTR_FUN_110d73900);
  func_0x0001080cbe58();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(long *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 10b8f9990; end: 10b8f99ab;  */

long * FUN_10b8f9990(long param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  
  func_0x00010b9abca8();
  if (((bool)in_ZR) && (plVar1 = *(long **)(param_1 + 8), plVar1 != (long *)0x0)) {
    (**(code **)(*plVar1 + 0x18))();
  }
  return (long *)(param_1 + 8);
}



/* Entry: 10b8f99ac; end: 10b8f99cb;  */

void FUN_10b8f99ac(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lStack_28;
  
  lVar1 = *(long *)(param_2 + 0x10);
  if (lVar1 != 0) {
    func_0x00010b8fde24();
    func_0x00010b8fe128();
  }
  lVar2 = *(long *)(lVar1 + 0x10);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar1 + 0x10) = 0;
    lStack_28 = lVar2;
    FUN_10b8c40e4(*(undefined8 *)(lVar1 + 8),&lStack_28);
    func_0x000107c3105c(lVar2);
  }
  return;
}



/* Entry: 10b8f99cc; end: 10b8f9a07;  */

void FUN_10b8f99cc(long param_1)

{
  long lVar1;
  long lStack_28;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    lStack_28 = lVar1;
    FUN_10b8c40e4(*(undefined8 *)(param_1 + 8),&lStack_28);
    func_0x000107c3105c(lVar1);
  }
  return;
}



/* Entry: 10b8f9a08; end: 10b8f9a6f;  */

void FUN_10b8f9a08(long param_1)

{
  param_1 = param_1 + 8;
  func_0x00010b8fe548();
  if (param_1 != 0) {
    func_0x000107c27b90();
  }
  return;
}



/* Entry: 10b8f9a70; end: 10b8f9a93;  */

void FUN_10b8f9a70(long param_1)

{
  func_0x00010b8fe548();
  if (param_1 != 0) {
    func_0x000107c27b90();
  }
  return;
}



/* Entry: 10b8f9a94; end: 10b8f9adf;  */

long FUN_10b8f9a94(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 extraout_x8;
  undefined1 auStack_30 [24];
  undefined8 uStack_18;
  
  func_0x00010b8fd4b8();
  uVar1 = *(char *)(param_2 + 0x18) == '\v';
  uStack_18 = extraout_x8;
  if (((bool)uVar1) && (param_1 = *(long *)(param_2 + 0x10), param_1 != 0)) {
    FUN_10b9ac09c(auStack_30);
    func_0x00010b8fe7e0();
  }
  func_0x00010b8fd3bc(uStack_18);
  if ((bool)uVar1) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010b8fe22c(&PTR_FUN_110d73960);
  return param_1;
}



/* Entry: 10b8f9ae0; end: 10b8f9b07;  */

undefined8 FUN_10b8f9ae0(undefined8 param_1)

{
  func_0x00010b8fe22c(&PTR_FUN_110d73960);
  return param_1;
}



/* Entry: 10b8f9b08; end: 10b8f9b23;  */

long * FUN_10b8f9b08(long param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  
  func_0x00010b9abca8();
  if (((bool)in_ZR) && (plVar1 = *(long **)(param_1 + 8), plVar1 != (long *)0x0)) {
    (**(code **)(*plVar1 + 0x18))();
  }
  return (long *)(param_1 + 8);
}



/* Entry: 10b8f9b24; end: 10b8f9e73;  */

void FUN_10b8f9b24(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  ulong extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  code *extraout_x8_05;
  ulong extraout_x8_06;
  int extraout_w9;
  ulong extraout_x9;
  ulong uVar10;
  ulong extraout_x9_00;
  int extraout_w10;
  int extraout_w10_00;
  long extraout_x10;
  long extraout_x10_00;
  ulong extraout_x11;
  ulong extraout_x11_00;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x13;
  long lVar11;
  long extraout_x13_00;
  ulong extraout_x14;
  ulong uVar12;
  long extraout_x14_00;
  ulong extraout_x15;
  ulong uVar13;
  undefined **ppuVar14;
  undefined ***pppuVar15;
  undefined8 *unaff_x20;
  undefined ****ppppuVar16;
  undefined ***pppuVar17;
  undefined8 uStack_138;
  undefined1 auStack_130 [16];
  code **ppcStack_120;
  long lStack_118;
  undefined8 uStack_e8;
  undefined2 uStack_e0;
  undefined **ppuStack_d8;
  long lStack_d0;
  long lStack_a8;
  undefined1 auStack_a0 [24];
  undefined ***pppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  long lStack_70;
  char cStack_68;
  undefined8 uStack_58;
  
  lVar9 = param_2;
  func_0x00010b8fd41c();
  pppuVar15 = *(undefined ****)(lVar9 + 0x20);
  uStack_e0 = 0;
  uStack_e8 = 0;
  uVar5 = (undefined4)*(undefined8 *)(lVar9 + 0x10);
  uStack_58 = extraout_x8;
  func_0x00010b8fd94c();
  ppuStack_80 = (undefined **)CONCAT62(ppuStack_80._2_6_,4);
  pppuStack_88 = (undefined ***)CONCAT44(pppuStack_88._4_4_,uVar5);
  FUN_10b9aa86c(&uStack_e8,&UNK_10f67f1a3,0xc,&pppuStack_88);
  func_0x00010b8fe18c();
  ppuVar14 = *(undefined ***)(param_2 + 0x10);
  lVar9 = *(long *)(param_2 + 0x18);
  ppuStack_d8 = ppuVar14;
  lStack_d0 = lVar9;
  if (lVar9 != 0) {
    do {
      func_0x00010b8fd9c4();
    } while (extraout_w10 != 0);
  }
  lVar6 = 0x40;
  __Znwm();
  pppuStack_88 = (undefined ***)FUN_10b8f9e74;
  ppuStack_80 = &PTR_FUN_110d73980;
  ppuStack_78 = ppuVar14;
  lStack_70 = lVar9;
  if (lVar9 != 0) {
    do {
      func_0x00010b8fd9c4();
    } while (extraout_w10_00 != 0);
  }
  FUN_10b9ac22c(lVar6,&pppuStack_88);
  func_0x00010b8fd604(ppuStack_80);
  puVar1 = (undefined8 *)(lVar6 + 8);
  do {
    func_0x00010b8fdb60();
  } while (extraout_w9 != 0);
  lStack_a8 = lVar6;
  FUN_10b9a8ef8(&pppuStack_88,&lStack_a8);
  FUN_10b9aa86c(&uStack_e8,&UNK_10f7cca6b,0xd,&pppuStack_88);
  func_0x00010b8fe18c();
  do {
    func_0x00010b8fe9cc();
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar4) {
      *puVar1 = extraout_x8_00;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((bool)in_ZR) {
    func_0x00010b8fd734();
  }
  do {
    func_0x00010b8fe9cc();
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar4) {
      *puVar1 = extraout_x8_01;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((bool)in_ZR) {
    func_0x00010b8fd734();
  }
  pppuVar17 = &ppuStack_d8;
  func_0x00010b8db14c(pppuVar17);
  ppppuVar16 = (undefined ****)0x1137fcfd0;
  if ((bRam00000001137fcfd8 & 1) == 0) {
    pppuVar17 = (undefined ***)0x1137fcfd8;
    ___cxa_guard_acquire();
    if ((int)pppuVar17 != 0) {
      pppuVar17 = (undefined ***)&UNK_10f7cca79;
      func_0x00010b8fe584(&UNK_10f7cca79);
      func_0x00010b8fe77c();
    }
  }
  func_0x00010b8fea6c();
  ppuStack_80 = (undefined **)0x0;
  pppuStack_88 = &ppuStack_d8;
  func_0x00010b8fe9ec(1);
  FUN_10b900bd0(&lStack_a8);
  func_0x00010b8fdb0c();
  if ((extraout_x8_02 & 1) == 0) {
    func_0x00010b8fe050();
  }
  else {
    func_0x0001080e07a8(&pppuStack_88,*unaff_x20,auStack_a0);
    uVar7 = *(undefined8 *)(param_2 + 0x10);
    func_0x00010b8fd94c();
    uVar8 = uVar7;
    FUN_10b8f9f5c();
    func_0x00010b8fe244(0);
    uVar10 = extraout_x9;
    lVar9 = extraout_x10;
    uVar13 = extraout_x11;
    lVar6 = extraout_x12;
    lVar11 = extraout_x13;
    uVar12 = extraout_x14;
    while( true ) {
      uVar13 = *(ulong *)(lVar9 + (uVar12 & uVar10)) ^ uVar13;
      for (uVar13 = uVar13 + lVar6 & (uVar13 ^ 0xffffffffffffffff) & 0x8080808080808080; uVar13 != 0
          ; uVar13 = uVar13 - 1 & uVar13) {
        uVar2 = (uVar13 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar13 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
        ppuVar14 = pppuVar15[0x5e];
        pppuVar17 = (undefined ***)
                    ((uVar12 & uVar10) + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) &
                    uVar10);
        if (*(int *)((long)ppuVar14 + (long)pppuVar17 * lVar11) == (int)uVar7) goto LAB_10b8f9d90;
      }
      func_0x00010b8fea54();
      if ((extraout_x15 & 0x8080808080808080) != 0) break;
      uVar12 = extraout_x8_03 + 8 + extraout_x14_00;
      uVar10 = extraout_x9_00;
      lVar9 = extraout_x10_00;
      uVar13 = extraout_x11_00;
      lVar6 = extraout_x12_00;
      lVar11 = extraout_x13_00;
    }
    pppuVar17 = pppuVar15 + 0x5d;
    FUN_10b8f9f78(pppuVar17,uVar8);
    ppuVar14 = pppuVar15[0x5e] + (long)pppuVar17 * 5;
    *(int *)ppuVar14 = (int)uVar7;
    ppuVar14[4] = (undefined *)0x0;
    ppuVar14[3] = (undefined *)0x0;
    ppuVar14[2] = (undefined *)0x0;
    ppuVar14[1] = (undefined *)0x0;
    func_0x0001080e0180();
    *(byte *)((long)pppuVar15[0x5d] + (long)pppuVar17) = (byte)uVar8 & 0x7f;
    func_0x00010b8fd5c0();
    ppuVar14 = pppuVar15[0x5e];
LAB_10b8f9d90:
    func_0x0001080df8d0(ppuVar14 + (long)pppuVar17 * 5 + 1,&pppuStack_88);
    func_0x00010b8fe194();
    func_0x00010b8fe014();
    ppppuVar16 = &pppuStack_88;
    (**(code **)(extraout_x8_04 + 0x1f0))(&pppuStack_88);
    if (cStack_68 == '\x01') {
      func_0x00010b8fe960(*(undefined8 *)(param_2 + 0x10),(ulong)pppuStack_88 & 0xffff);
      (*extraout_x8_05)();
    }
    ppuStack_d8 = (undefined **)0x0;
    lStack_d0 = 0;
    func_0x0001080e01a8(&ppuStack_d8);
    pppuVar17 = pppuVar15;
    func_0x00010b8fe668(pppuVar15,1,auStack_a0,&ppuStack_d8);
    func_0x00010b8fdb0c();
    if ((extraout_x8_06 & 1) == 0) {
      func_0x00010b8fe050();
    }
    in_ZR = cStack_68 == '\x01';
    if ((bool)in_ZR) {
      pppuVar17 = &ppuStack_80;
      func_0x000104bfe1e0(pppuVar17);
    }
  }
  func_0x00010b8fe37c();
  func_0x00010b8fdf8c();
  func_0x00010b8fd3bc(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  ppcStack_120 = (code **)ppppuVar16;
  lStack_118 = param_2;
  func_0x00010b8fd538();
  FUN_10b9abfa4();
  FUN_10b9a8f04(auStack_130,pppuVar17);
  func_0x00010b9ac080(&uStack_138,param_2,1);
  func_0x00010b8fddec(*(undefined8 *)(param_2 + 0x18));
  if ((bool)in_ZR) {
    (**(code **)(*(long *)unaff_x20[2] + 0x18))((long *)unaff_x20[2],auStack_130,&uStack_138);
  }
  *(undefined2 *)(pppuVar15 + 1) = 1;
  *pppuVar15 = (undefined **)0x0;
  func_0x000104bda3ac(uStack_138);
  func_0x00010b8fdbfc();
  return;
}



/* Entry: 10b8f9e74; end: 10b8f9ef3;  */

void FUN_10b8f9e74(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  
  func_0x00010b8fd538();
  FUN_10b9abfa4();
  FUN_10b9a8f04(auStack_40,param_1);
  func_0x00010b9ac080(&uStack_48);
  func_0x00010b8fddec(*(undefined8 *)(unaff_x21 + 0x18));
  if ((bool)in_ZR) {
    (**(code **)(**(long **)(unaff_x20 + 0x10) + 0x18))
              (*(long **)(unaff_x20 + 0x10),auStack_40,&uStack_48);
  }
  *(undefined2 *)(unaff_x19 + 1) = 1;
  *unaff_x19 = 0;
  func_0x000104bda3ac(uStack_48);
  func_0x00010b8fdbfc();
  return;
}



/* Entry: 10b8f9ef4; end: 10b8f9f5b;  */

void FUN_10b8f9ef4(long param_1)

{
  param_1 = param_1 + 8;
  func_0x00010b8db1d8();
  if (param_1 != 0) {
    func_0x000107c27b90();
  }
  return;
}



/* Entry: 10b8f9f5c; end: 10b8f9f77;  */

void FUN_10b8f9f5c(int param_1)

{
  func_0x00010b8fdc28(param_1,(long)param_1);
  return;
}



/* Entry: 10b8f9f78; end: 10b8f9fe7;  */

void FUN_10b8f9f78(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar1;
  long unaff_x19;
  long unaff_x22;
  
  func_0x00010b8fd6cc();
  FUN_10b8f9fe8();
  lVar1 = *(long *)(unaff_x19 + 0x28);
  if (lVar1 != 0) goto LAB_10b8f9fa4;
  func_0x00010b8fe9a0();
  if ((bool)in_ZR) {
    lVar1 = 0;
    goto LAB_10b8f9fa4;
  }
  if (unaff_x22 == 0) {
    func_0x00010b8feaf0();
LAB_10b8f9fc8:
    FUN_10b8fa010();
  }
  else {
    func_0x00010b8fdf20();
    if ((bool)in_CY && !(bool)in_ZR) {
      func_0x00010b8fdef8();
      goto LAB_10b8f9fc8;
    }
    func_0x00010b8fa0bc();
  }
  func_0x00010b8fda38();
  FUN_10b8f9fe8();
  lVar1 = *(long *)(unaff_x19 + 0x28);
LAB_10b8f9fa4:
  func_0x00010b8fd610(lVar1);
  return;
}



/* Entry: 10b8f9fe8; end: 10b8fa00f;  */

ulong FUN_10b8f9fe8(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 in_ZR;
  long lVar2;
  long extraout_x8;
  long extraout_x9;
  ulong extraout_x10;
  
  lVar2 = 0;
  while (func_0x00010b8feb3c(lVar2), (bool)in_ZR) {
    lVar2 = extraout_x8 + 8;
    in_ZR = 1;
  }
  uVar1 = (extraout_x10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (extraout_x10 & 0x5555555555555555) << 1;
  uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
  uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  return extraout_x9 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & param_2;
}



/* Entry: 10b8fa010; end: 10b8fa1ab;  */

void FUN_10b8fa010(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 in_ZR;
  long lVar2;
  long lVar3;
  long extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  undefined8 extraout_x9;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  byte unaff_w22;
  long unaff_x24;
  long lVar4;
  
  func_0x00010b8fe524();
  lVar2 = extraout_x8 + 0x10 + param_2 * 0x28;
  __Znwm();
  *unaff_x20 = lVar2;
  unaff_x20[1] = lVar2 + extraout_x8 + 0x10;
  func_0x00010b8fdedc();
  lVar4 = 0;
  func_0x00010b8fe4a0();
  uVar1 = extraout_x9;
  if (!(bool)in_ZR) {
    uVar1 = extraout_x8_00;
  }
  func_0x00010b8fe8c0(uVar1);
  for (; unaff_x24 != lVar4; lVar4 = lVar4 + 1) {
    if (-1 < *(char *)(unaff_x19 + lVar4)) {
      lVar3 = unaff_x21;
      FUN_10b8fa1ac();
      func_0x00010b8fe488();
      FUN_10b8f9fe8();
      *(byte *)(lVar2 + lVar3) = unaff_w22 & 0x7f;
      func_0x00010b8fd548();
      FUN_10b8fa1c8(extraout_x8_01 + lVar3 * 0x28,unaff_x21);
    }
    unaff_x21 = unaff_x21 + 0x28;
  }
  if (unaff_x24 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b8fa1ac; end: 10b8fa1c7;  */

void FUN_10b8fa1ac(int *param_1)

{
  func_0x00010b8fdc28(param_1,(long)*param_1);
  return;
}



/* Entry: 10b8fa1c8; end: 10b8fa1f7;  */

/* WARNING: Possible PIC construction at 0x0001080e0bdc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001080e0be0) */
/* WARNING: Removing unreachable block (ram,0x0001080e0c0c) */
/* WARNING: Removing unreachable block (ram,0x0001080e0c00) */
/* WARNING: Removing unreachable block (ram,0x0001080e0d5c) */

void FUN_10b8fa1c8(undefined4 *param_1,undefined4 *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)(param_2 + 2);
  *param_1 = *param_2;
  func_0x0001080e08ac(param_1 + 2,plVar1);
  func_0x0001080e0d20();
  if ((char)plVar1[3] == '\x01') {
    func_0x0001080e0df8();
    (**(code **)(*plVar1 + 0x1c0))();
    *(undefined1 *)(param_2 + 8) = 0;
  }
  return;
}



/* Entry: 10b8fa1f8; end: 10b8fa267;  */

void FUN_10b8fa1f8(long param_1)

{
  param_1 = param_1 + 8;
  func_0x00010b8db1d8();
  if (param_1 != 0) {
    func_0x000107c27b90();
  }
  return;
}



/* Entry: 10b8fa268; end: 10b8fa397;  */

undefined8 * FUN_10b8fa268(undefined8 param_1,undefined *param_2)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong uVar3;
  ulong extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long lVar4;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  ulong extraout_x9_02;
  ulong uVar5;
  ulong extraout_x9_03;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x10_01;
  long extraout_x10_02;
  long extraout_x11;
  long extraout_x11_00;
  long extraout_x11_01;
  long lVar6;
  ulong extraout_x11_02;
  ulong extraout_x11_03;
  undefined1 extraout_w12;
  undefined1 extraout_w12_00;
  undefined1 uVar7;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x13;
  long lVar8;
  long extraout_x13_00;
  long extraout_x14;
  ulong extraout_x14_00;
  long extraout_x14_01;
  ulong extraout_x15;
  ulong uVar9;
  ulong uVar10;
  undefined8 *in_stack_00000028;
  undefined *in_stack_00000030;
  undefined8 in_stack_00000038;
  
  func_0x00010b8feb10();
  func_0x00010b8fd41c();
  puVar2 = *(undefined8 **)(param_2 + 0x10);
  puVar1 = *(undefined8 **)(param_2 + 0x18);
  in_stack_00000038 = extraout_x8;
  func_0x00010b8fd94c();
  func_0x00010b8fe5f0();
  func_0x00010b8fe9b8();
  if (!(bool)in_ZR) {
    FUN_10b8dd210(&stack0x00000008,param_2 + 8);
    in_stack_00000028 = puVar1;
    in_stack_00000030 = param_2;
    FUN_10b8f25ec(&stack0x00000028);
    func_0x0001080e0bc0(param_2 + 8);
    puVar2[0x5f] = puVar2[0x5f] + -1;
    func_0x00010b8fdf38(0);
    uVar3 = extraout_x8_00;
    lVar4 = extraout_x9;
    uVar5 = extraout_x10;
    lVar6 = extraout_x11;
    uVar7 = extraout_w12;
    if ((!(bool)in_ZR) &&
       (func_0x00010b8fe43c(), uVar3 = extraout_x8_01, lVar4 = extraout_x9_00,
       uVar5 = extraout_x10_00, lVar6 = extraout_x11_00, uVar7 = extraout_w12_00, extraout_x14 != 0)
       ) {
      func_0x00010b8fd9f8();
      uVar3 = (ulong)!(bool)in_CY;
      uVar7 = 0x80;
      lVar4 = extraout_x9_01;
      uVar5 = extraout_x10_01;
      lVar6 = extraout_x11_01;
      if ((bool)in_CY) {
        uVar7 = 0xfe;
      }
    }
    *(undefined1 *)(lVar4 + lVar6) = uVar7;
    *(undefined1 *)(puVar2[0x5d] + (puVar2[0x60] & 7) + (puVar2[0x60] & uVar5) + 1) = uVar7;
    puVar2[0x62] = puVar2[0x62] + uVar3;
    in_stack_00000028 = (undefined8 *)0x0;
    in_stack_00000030 = (undefined *)0x0;
    func_0x0001080e01a8(&stack0x00000028);
    param_2 = (undefined *)0x2;
    puVar1 = puVar2;
    func_0x00010b8fe668(puVar2,2,&stack0x00000010,&stack0x00000028);
    func_0x00010b8fdb0c();
    if ((extraout_x8_02 & 1) == 0) {
      param_2 = &UNK_10f7cca9c;
      FUN_10b8f279c(puVar2,&UNK_10f7cca9c,0x18);
      puVar1 = puVar2;
    }
    func_0x00010b8fdda4();
  }
  func_0x00010b8fd3bc(in_stack_00000038);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  FUN_10b8f9f5c(param_2);
  func_0x00010b8fe244(*puVar1);
  lVar4 = extraout_x8_03;
  uVar5 = extraout_x9_02;
  uVar9 = extraout_x11_02;
  lVar6 = extraout_x12;
  lVar8 = extraout_x13;
  uVar3 = extraout_x14_00;
  while( true ) {
    uVar9 = *(ulong *)(lVar4 + (uVar3 & uVar5)) ^ uVar9;
    for (uVar9 = uVar9 + lVar6 & (uVar9 ^ 0xffffffffffffffff) & 0x8080808080808080; uVar9 != 0;
        uVar9 = uVar9 - 1 & uVar9) {
      uVar10 = (uVar9 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar9 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = (uVar3 & uVar5) + ((ulong)LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) >> 3) & uVar5;
      if (*(int *)(puVar1[1] + uVar10 * lVar8) == (int)param_2) goto LAB_10b8fa434;
    }
    func_0x00010b8fea54();
    lVar4 = extraout_x8_04;
    uVar10 = extraout_x9_03;
    if ((extraout_x15 & 0x8080808080808080) != 0) break;
    uVar3 = extraout_x10_02 + 8 + extraout_x14_01;
    uVar5 = extraout_x9_03;
    uVar9 = extraout_x11_03;
    lVar6 = extraout_x12_00;
    lVar8 = extraout_x13_00;
  }
LAB_10b8fa434:
  return (undefined8 *)(lVar4 + uVar10);
}



/* Entry: 10b8fa398; end: 10b8fa43f;  */

long FUN_10b8fa398(undefined8 *param_1,undefined8 param_2)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  ulong extraout_x9;
  ulong uVar2;
  ulong extraout_x9_00;
  long extraout_x10;
  ulong extraout_x11;
  ulong extraout_x11_00;
  long extraout_x12;
  long lVar3;
  long extraout_x12_00;
  long extraout_x13;
  long lVar4;
  long extraout_x13_00;
  ulong extraout_x14;
  ulong uVar5;
  long extraout_x14_00;
  ulong extraout_x15;
  ulong uVar6;
  ulong uVar7;
  
  FUN_10b8f9f5c(param_2);
  func_0x00010b8fe244(*param_1);
  lVar1 = extraout_x8;
  uVar2 = extraout_x9;
  uVar6 = extraout_x11;
  lVar3 = extraout_x12;
  lVar4 = extraout_x13;
  uVar5 = extraout_x14;
  while( true ) {
    uVar6 = *(ulong *)(lVar1 + (uVar5 & uVar2)) ^ uVar6;
    for (uVar6 = uVar6 + lVar3 & (uVar6 ^ 0xffffffffffffffff) & 0x8080808080808080; uVar6 != 0;
        uVar6 = uVar6 - 1 & uVar6) {
      uVar7 = (uVar6 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar6 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = (uVar5 & uVar2) + ((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3) & uVar2;
      if (*(int *)(param_1[1] + uVar7 * lVar4) == (int)param_2) goto LAB_10b8fa434;
    }
    func_0x00010b8fea54();
    lVar1 = extraout_x8_00;
    uVar7 = extraout_x9_00;
    if ((extraout_x15 & 0x8080808080808080) != 0) break;
    uVar5 = extraout_x10 + 8 + extraout_x14_00;
    uVar2 = extraout_x9_00;
    uVar6 = extraout_x11_00;
    lVar3 = extraout_x12_00;
    lVar4 = extraout_x13_00;
  }
LAB_10b8fa434:
  return lVar1 + uVar7;
}



/* Entry: 10b8fa440; end: 10b8fa4a7;  */

void FUN_10b8fa440(long param_1)

{
  param_1 = param_1 + 0x10;
  func_0x00010b8db1d8();
  if (param_1 != 0) {
    func_0x000107c27b90();
  }
  return;
}



/* Entry: 10b8fa4a8; end: 10b8fa623;  */

void FUN_10b8fa4a8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  long extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  code *extraout_x9;
  undefined8 *unaff_x20;
  undefined8 *puVar3;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  char *pcStack_a8;
  undefined8 auStack_a0 [3];
  undefined8 uStack_88;
  undefined8 auStack_80 [3];
  undefined1 auStack_68 [32];
  undefined8 uStack_48;
  
  func_0x00010b8fd41c();
  puVar3 = *(undefined8 **)(param_2 + 0x10);
  uVar1 = *puVar3;
  puVar2 = (undefined1 *)puVar3[1];
  uStack_48 = extraout_x8;
  func_0x00010b8fd94c();
  func_0x00010b8fe5f0();
  func_0x00010b8fe9b8();
  if ((bool)in_ZR) goto LAB_10b8fa600;
  uStack_88 = puVar3[4];
  auStack_80[0] = puVar3[5];
  func_0x00010b8fdc80(*unaff_x20);
  (*extraout_x9)(auStack_68);
  func_0x00010b8fdb0c();
  if ((extraout_x8_00 & 1) == 0) {
    func_0x00010b8fda1c();
    FUN_10b8f279c();
  }
  else {
    func_0x00010b8fe014();
    (**(code **)(extraout_x8_01 + 0x68))(&uStack_88);
    if ((*(byte *)(unaff_x20[1] + 8) & 1) == 0) {
      func_0x00010b8fda1c();
LAB_10b8fa5dc:
      FUN_10b8f279c();
    }
    else {
      pcStack_a8 = "payload";
      auStack_a0[0] = 7;
      func_0x00010b8fe594(auStack_68,*unaff_x20,auStack_80,&pcStack_a8);
      func_0x00010b8fdb0c();
      if ((extraout_x8_02 & 1) == 0) {
        func_0x00010b8fda1c();
        goto LAB_10b8fa5dc;
      }
      FUN_10b8dba18(&pcStack_a8,*unaff_x20,*(undefined4 *)(puVar3 + 6));
      puStack_b8 = &UNK_10f7ccad9;
      uStack_b0 = 0xe;
      func_0x00010b8fda4c(*(undefined8 *)(*(long *)*unaff_x20 + 0xf0),(long *)*unaff_x20,auStack_80,
                          &puStack_b8,auStack_a0,param_5,unaff_x20[1]);
      func_0x00010b8fdb0c();
      if ((extraout_x8_03 & 1) == 0) {
        func_0x00010b8fda1c();
        FUN_10b8f279c();
      }
      else {
        func_0x00010b8fe668(uVar1,3,param_2 + 0x10,auStack_80);
      }
      func_0x0001080e0bc0(&pcStack_a8);
    }
    func_0x00010b8fdf4c();
  }
  puVar2 = auStack_68;
  func_0x0001080e0bc0();
LAB_10b8fa600:
  func_0x00010b8fd3bc(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(puVar2 + 8) != 0) {
    FUN_10b8f456c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b8fa624; end: 10b8fa643;  */

void FUN_10b8fa624(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b8f456c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b8fa644; end: 10b8fa647;  */

void FUN_10b8fa644(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b8fa648; end: 10b8fa6af;  */

void FUN_10b8fa648(undefined8 *param_1)

{
  long lVar1;
  int extraout_w10;
  long unaff_x19;
  undefined8 *unaff_x21;
  undefined8 uVar2;
  
  func_0x00010b8feac0();
  *param_1 = &PTR_FUN_110d739e0;
  func_0x00010b8fe214();
  uVar2 = *unaff_x21;
  param_1[1] = unaff_x21[1];
  *param_1 = uVar2;
  lVar1 = unaff_x21[2];
  param_1[2] = lVar1;
  if (lVar1 != 0) {
    do {
      func_0x00010b8fd9c4();
    } while (extraout_w10 != 0);
  }
  func_0x000104c6257c(param_1 + 3,unaff_x21 + 3);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(unaff_x21 + 6);
  *(undefined8 **)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 10b8fa6b0; end: 10b8faac7;  */

/* WARNING: Possible PIC construction at 0x00010b8faaf8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b8faab0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b8faafc) */
/* WARNING: Removing unreachable block (ram,0x00010b8fab00) */
/* WARNING: Removing unreachable block (ram,0x00010b8fd68c) */
/* WARNING: Removing unreachable block (ram,0x00010b8faab4) */

undefined1 * FUN_10b8fa6b0(undefined8 param_1,undefined1 *param_2)

{
  long lVar1;
  long lVar2;
  undefined1 in_ZR;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  long extraout_x8_01;
  ulong extraout_x8_02;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined **unaff_x20;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uStack_248;
  undefined **ppuStack_240;
  undefined1 *puStack_238;
  undefined1 **ppuStack_230;
  undefined8 uStack_228;
  undefined1 *puStack_220;
  undefined1 uStack_218;
  undefined **ppuStack_210;
  undefined1 *puStack_208;
  undefined1 *puStack_200;
  undefined8 uStack_1f8;
  undefined **ppuStack_1f0;
  undefined **ppuStack_1e8;
  undefined1 auStack_1e0 [8];
  undefined *puStack_1d8;
  undefined **ppuStack_1d0;
  char cStack_1c8;
  undefined1 auStack_1c0 [8];
  byte bStack_1b8;
  undefined8 uStack_1b0;
  ulong uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_188;
  char cStack_180;
  undefined1 auStack_178 [16];
  undefined8 uStack_168;
  undefined8 uStack_160;
  ulong uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 uStack_140;
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [24];
  undefined *puStack_118;
  undefined **ppuStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  
  puVar8 = param_2;
  func_0x00010b8fd41c();
  uVar9 = *(undefined8 *)(puVar8 + 0x20);
  uStack_78 = extraout_x8;
  func_0x000107c31088(&puStack_e8,&UNK_10f7ccae8);
  ppuVar5 = unaff_x20;
  FUN_10b8f22c4(auStack_178,uVar9,&puStack_e8);
  func_0x00010b8fe7b4();
  ppuVar6 = (undefined **)unaff_x20[1];
  if (((ulong)ppuVar6[1] & 1) == 0) {
    param_2 = *(undefined1 **)(param_2 + 0x10);
LAB_10b8fa890:
    FUN_10b9a0084(&puStack_118,ppuVar6);
    func_0x00010b8fdd0c();
    FUN_10b8fab94(&puStack_e8);
    func_0x000104bda960(puStack_118);
  }
  else {
    puVar4 = *unaff_x20;
    FUN_10b8e129c();
    ppuVar6 = ppuVar5;
    puStack_80 = puVar4;
    func_0x00010b8fdb0c();
    if ((extraout_x8_00 & 1) == 0) {
      param_2 = *(undefined1 **)(param_2 + 0x10);
      goto LAB_10b8fa890;
    }
    puStack_e8 = &UNK_10f7ccb03;
    uStack_e0 = 0xf;
    (**(code **)(*(long *)*unaff_x20 + 0xd0))(auStack_a8,*unaff_x20,auStack_88,&puStack_e8);
    if ((unaff_x20[1][8] & 1) == 0) {
      param_2 = *(undefined1 **)(param_2 + 0x10);
      FUN_10b9a0084(&puStack_118);
      func_0x00010b8fdd0c();
      FUN_10b8fab94(&puStack_e8);
      func_0x000104bda960(puStack_118);
    }
    else {
      puStack_118 = *unaff_x20;
      lVar1 = 0xc0;
      if (param_2[0x28] == '\0') {
        lVar1 = 0xe0;
      }
      lVar2 = 200;
      if (param_2[0x28] == '\0') {
        lVar2 = 0xe8;
      }
      puStack_e8 = *(undefined **)(puStack_118 + lVar1);
      uStack_d8 = *(undefined8 *)((long)(puStack_118 + lVar2) + 8);
      uStack_e0 = *(undefined8 *)(puStack_118 + lVar2);
      uStack_d0 = 0;
      in_ZR = param_2[0x29] == '\0';
      lVar1 = 0xc0;
      if ((bool)in_ZR) {
        lVar1 = 0xe0;
      }
      uStack_c8 = *(undefined8 *)(puStack_118 + lVar1);
      lVar1 = 200;
      if ((bool)in_ZR) {
        lVar1 = 0xe8;
      }
      uStack_b8 = *(undefined8 *)((long)(puStack_118 + lVar1) + 8);
      uStack_c0 = *(undefined8 *)(puStack_118 + lVar1);
      uStack_b0 = 0;
      uStack_108 = 2;
      ppuStack_110 = &puStack_e8;
      puStack_100 = unaff_x20[1];
      func_0x00010b8fdb50(&puStack_118);
      func_0x00010b8fe014();
      (**(code **)(extraout_x8_01 + 0x110))(auStack_138);
      func_0x00010b8fdb0c();
      if ((extraout_x8_02 & 1) == 0) {
        FUN_10b9a0084(&uStack_1b0,ppuVar6);
        func_0x00010b8fdd28();
        func_0x00010b8fe73c();
        func_0x00010b8fe660();
      }
      else {
        uStack_168 = 0;
        uStack_160 = 0;
        uStack_158 = uStack_158 & 0xffffffffffffff00;
        uStack_150 = 0;
        uStack_148 = 0;
        uStack_140 = 0;
        FUN_10b9018fc(&lStack_188,*unaff_x20,auStack_130,&uStack_168);
        if ((unaff_x20[1][8] & 1) == 0) {
          FUN_10b9a0084(&uStack_1b0);
        }
        else {
          in_ZR = cStack_180 == '\t';
          if ((((bool)in_ZR) && (lStack_188 != 0)) &&
             (in_ZR = false,
             *(ulong *)(lStack_188 + 0x10) == (*(ulong *)(lStack_188 + 0x10) / 3) * 3)) {
            FUN_10b94a728(&uStack_1b0);
            for (uVar10 = 0; uVar10 < *(ulong *)(lStack_188 + 0x10); uVar10 = uVar10 + 3) {
              FUN_10b9a8f04(&uStack_168,lStack_188 + 0x18 + uVar10 * 0x10);
              FUN_10b9a8f04(auStack_1c0,lStack_188 + 0x28 + uVar10 * 0x10);
              ppuVar5 = (undefined **)(lStack_188 + 0x38 + uVar10 * 0x10);
              FUN_10b9a8f04(&ppuStack_1d0);
              if (((byte)uStack_160 & 0xfe) == 2 && 1 < bStack_1b8) {
                FUN_10b9a9358(auStack_1e0,&uStack_168);
                ppuStack_1f0 = (undefined **)0x10f29ad55;
                ppuStack_1e8 = (undefined **)0x5;
                FUN_10b9a62b4(&puStack_1d8,auStack_1e0,&ppuStack_1f0);
                ppuVar5 = &puStack_1d8;
                FUN_10b94a754(&uStack_1b0,ppuVar5,auStack_1c0);
                func_0x00010b8fdbd0();
                func_0x00010b8fdd60();
              }
              ppuVar6 = ppuStack_1d0;
              if (cStack_1c8 == '\b') {
                ppuVar3 = ppuStack_1d0 + 2;
                func_0x00010527d444();
                puVar4 = ppuVar6[2];
                puVar7 = ppuVar6[5];
                unaff_x20 = ppuVar6;
                ppuStack_1f0 = ppuVar3;
                ppuStack_1e8 = ppuVar5;
                while (ppuVar5 = ppuStack_1e8, ppuStack_1f0 != (undefined **)(puVar4 + (long)puVar7)
                      ) {
                  FUN_10b9a9358(&puStack_1d8,ppuStack_1e8 + 1);
                  func_0x00010b94a7e8(&uStack_1b0,ppuVar5,&puStack_1d8);
                  func_0x00010b8fdbd0();
                  func_0x00010527d4cc(&ppuStack_1f0);
                  unaff_x20 = ppuVar5;
                }
              }
              func_0x00010b8fe08c();
              func_0x00010b8fe118();
              FUN_10b9a8d98(&uStack_168);
            }
            uStack_158 = uStack_1a8;
            uStack_160 = uStack_1b0;
            uStack_168 = 1;
            uStack_150 = uStack_1a0;
            uStack_148 = uStack_198;
            uStack_1b0 = 0;
            uStack_1a8 = 0;
            uStack_1a0 = 0;
            uStack_198 = 0;
            puVar8 = (undefined1 *)**(undefined8 **)(param_2 + 0x10);
            uVar9 = 0x10b8faab4;
            goto FUN_10b8faac8;
          }
          FUN_10b9aa5f0(&uStack_1b0,9);
        }
        func_0x00010b8fdd28();
        func_0x00010b8fe73c();
        func_0x00010b8fe660();
        func_0x00010b8fe18c();
      }
      func_0x0001080e0bc0(auStack_138);
      param_2 = (undefined1 *)0x20;
      unaff_x20 = &puStack_e8;
      do {
        func_0x00010b8fe020();
        func_0x00010b8fdfcc();
      } while (!(bool)in_ZR);
    }
    func_0x0001080e0bc0(auStack_a8);
  }
  puVar8 = auStack_178;
  func_0x00010b8fc594();
  func_0x00010b8fd3bc(uStack_78);
  if ((bool)in_ZR) {
    return puVar8;
  }
  uVar9 = 0x10b8faac8;
  ___stack_chk_fail();
FUN_10b8faac8:
  ppuStack_210 = unaff_x20;
  puStack_208 = param_2;
  puStack_200 = &stack0xfffffffffffffff0;
  uStack_1f8 = uVar9;
  if (puVar8 == (undefined1 *)0x0) {
    uVar9 = 0x10b8fab48;
    _abort();
  }
  else {
    func_0x00010b8fda54();
    puStack_220 = puVar8 + 0x18;
    uStack_218 = 1;
    __ZNSt3__15mutex4lockEv();
    uVar9 = 0x10b8faafc;
    puVar8 = param_2;
  }
  if ((puVar8[0x88] & 1) == 0) {
    uStack_248 = 0;
    puVar8 = (undefined1 *)(ulong)(*(long *)(puVar8 + 0x10) != 0);
    ppuStack_240 = unaff_x20;
    puStack_238 = param_2;
    ppuStack_230 = &puStack_200;
    uStack_228 = uVar9;
    __ZNSt13exception_ptrD1Ev(&uStack_248);
  }
  else {
    puVar8 = (undefined1 *)0x1;
  }
  return puVar8;
}



/* Entry: 10b8faac8; end: 10b8fab93;  */

/* WARNING: Possible PIC construction at 0x00010b8faaf8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b8faafc) */
/* WARNING: Removing unreachable block (ram,0x00010b8fab00) */
/* WARNING: Removing unreachable block (ram,0x00010b8fd68c) */

bool FUN_10b8faac8(long param_1)

{
  bool bVar1;
  long unaff_x19;
  undefined8 uStack_58;
  
  if (param_1 == 0) {
    _abort();
  }
  else {
    func_0x00010b8fda54();
    __ZNSt3__15mutex4lockEv();
    param_1 = unaff_x19;
  }
  if ((*(byte *)(param_1 + 0x88) & 1) == 0) {
    uStack_58 = 0;
    bVar1 = *(long *)(param_1 + 0x10) != 0;
    __ZNSt13exception_ptrD1Ev(&uStack_58);
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 10b8fab94; end: 10b8fac23;  */

long * FUN_10b8fab94(long *param_1)

{
  long *unaff_x19;
  long *plStack_28;
  
  if (*param_1 == 2) {
    func_0x0001003adc0c(param_1 + 1);
    func_0x000104bda960();
    return unaff_x19;
  }
  if (*param_1 == 1) {
    func_0x000104bd4e40(param_1 + 4);
    plStack_28 = param_1 + 1;
    func_0x0001080d5724(&plStack_28);
    return param_1 + 1;
  }
  return param_1;
}



/* Entry: 10b8fac24; end: 10b8fac5b;  */

void FUN_10b8fac24(long param_1)

{
  undefined4 auStack_28 [2];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  auStack_28[0] = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  FUN_10b8ea78c(*(undefined8 *)(param_1 + 0x10),auStack_28);
  func_0x00010b8e30ac(auStack_28);
  func_0x00010b8fe2c0();
  func_0x00010b8fe798();
  return;
}



/* Entry: 10b8fac5c; end: 10b8facf3;  */

void FUN_10b8fac5c(long param_1)

{
  func_0x00010b8fdf5c(param_1 + 8);
  FUN_10b8fb1d4();
  return;
}



/* Entry: 10b8facf4; end: 10b8fad9f;  */

void FUN_10b8facf4(code **param_1)

{
  char cVar1;
  undefined1 in_ZR;
  code *pcVar2;
  undefined8 extraout_x8;
  long lVar3;
  int extraout_w11;
  long unaff_x20;
  undefined8 uVar4;
  long *plVar5;
  undefined1 uStack_271;
  undefined1 auStack_270 [8];
  byte bStack_268;
  undefined1 auStack_188 [112];
  undefined1 auStack_118 [80];
  long *plStack_c8;
  undefined1 *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_a8;
  code *pcStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  code *pcStack_40;
  code *pcStack_38;
  
  func_0x00010b8fd430();
  pcVar2 = param_1[2];
  lVar3 = *(long *)pcVar2;
  if (((*(long *)(lVar3 + 0x80) != 0) && (in_ZR = 0, *(char *)(lVar3 + 0x44a) == '\x01')) &&
     ((in_ZR = *(char *)(lVar3 + 0x368) == '\x01', !(bool)in_ZR ||
      (in_ZR = *(char *)(lVar3 + 0x36a) == '\x01', (bool)in_ZR)))) {
    pcStack_40 = pcVar2 + 0x10;
    *(undefined4 *)(lVar3 + 0x36c) = *(undefined4 *)(*(long *)pcStack_40 + 0x18);
    pcStack_38 = pcVar2 + 0x18;
    pcStack_58 = FUN_10b8fada0;
    ppuStack_50 = &PTR_FUN_110d73a40;
    param_1 = &pcStack_58;
    lStack_48 = lVar3;
    (**(code **)(*(long *)pcStack_40 + 0x30))();
    func_0x00010b8fd664();
  }
  func_0x00010b8fd3a4();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b8fd41c();
  pcVar2 = param_1[2];
  cVar1 = *(char *)(*(long *)(pcVar2 + 0x360) + 0x18);
  uStack_a8 = extraout_x8;
  if (*(long *)(*(long *)param_1[3] + 0x38) != 0) {
    do {
      func_0x00010b8fdb28();
    } while (extraout_w11 != 0);
  }
  (**(code **)(*(long *)pcVar2 + 0xd0))(pcVar2);
  if (cVar1 == '\0') {
    FUN_10b9213e8(auStack_118);
  }
  else {
    FUN_10b921314();
  }
  plVar5 = *(long **)(pcVar2 + 0x80);
  FUN_10b8e5870(auStack_188,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x00010b8ffd54(auStack_270,plVar5);
  uStack_b8 = *(undefined8 *)(unaff_x20 + 0x18);
  plStack_c8 = plVar5;
  puStack_c0 = auStack_270;
  func_0x00010b8fdd78(*(undefined8 *)(*plVar5 + 0x218));
  (*(code *)**(undefined8 **)(unaff_x20 + 0x20))(&plStack_c8);
  (**(code **)(*plStack_c8 + 0x220))(plStack_c8,puStack_c0);
  if ((bStack_268 & 1) == 0) {
    uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
    uStack_271 = 0;
    if (*(long *)(pcVar2 + 0x558) != 0) {
      FUN_10b8ffe04(&plStack_c8,auStack_270);
      FUN_10b8f339c(plVar5,pcVar2 + 0x558,uVar4,&puStack_c0,&uStack_271);
      if (((ulong)plVar5 & 1) != 0) {
        func_0x00010b8fe574();
        goto LAB_10b8faef8;
      }
      FUN_10b90003c(auStack_270,&plStack_c8);
      func_0x00010b8fe574();
    }
    FUN_10b9a0084(&plStack_c8,auStack_270);
    func_0x00010b8fd928();
    func_0x00010b8f3538();
    func_0x000104bda960(plStack_c8);
  }
LAB_10b8faef8:
  func_0x00010b8ffdac(auStack_270);
  func_0x00010b8e58cc(auStack_188);
  func_0x00010b92155c(auStack_118);
  func_0x00010b8fe038();
  func_0x00010b8fd3bc(uStack_a8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    return;
  }
  return;
}



/* Entry: 10b8fada0; end: 10b8faf3b;  */

void FUN_10b8fada0(long param_1)

{
  long *plVar1;
  char cVar2;
  undefined1 in_ZR;
  undefined8 extraout_x8;
  int extraout_w11;
  long unaff_x20;
  undefined8 uVar3;
  long *plVar4;
  undefined1 uStack_211;
  undefined1 auStack_210 [8];
  byte bStack_208;
  undefined1 auStack_128 [112];
  undefined1 auStack_b8 [80];
  long *plStack_68;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_48;
  
  func_0x00010b8fd41c();
  plVar1 = *(long **)(param_1 + 0x10);
  cVar2 = *(char *)(plVar1[0x6c] + 0x18);
  uStack_48 = extraout_x8;
  if (*(long *)(**(long **)(param_1 + 0x18) + 0x38) != 0) {
    do {
      func_0x00010b8fdb28();
    } while (extraout_w11 != 0);
  }
  (**(code **)(*plVar1 + 0xd0))(plVar1);
  if (cVar2 == '\0') {
    FUN_10b9213e8(auStack_b8);
  }
  else {
    FUN_10b921314();
  }
  plVar4 = (long *)plVar1[0x10];
  FUN_10b8e5870(auStack_128,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x00010b8ffd54(auStack_210,plVar4);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x18);
  plStack_68 = plVar4;
  puStack_60 = auStack_210;
  func_0x00010b8fdd78(*(undefined8 *)(*plVar4 + 0x218));
  (*(code *)**(undefined8 **)(unaff_x20 + 0x20))(&plStack_68);
  (**(code **)(*plStack_68 + 0x220))(plStack_68,puStack_60);
  if ((bStack_208 & 1) == 0) {
    uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
    uStack_211 = 0;
    if (plVar1[0xab] != 0) {
      FUN_10b8ffe04(&plStack_68,auStack_210);
      FUN_10b8f339c(plVar4,plVar1 + 0xab,uVar3,&puStack_60,&uStack_211);
      if (((ulong)plVar4 & 1) != 0) {
        func_0x00010b8fe574();
        goto LAB_10b8faef8;
      }
      FUN_10b90003c(auStack_210,&plStack_68);
      func_0x00010b8fe574();
    }
    FUN_10b9a0084(&plStack_68,auStack_210);
    func_0x00010b8fd928();
    func_0x00010b8f3538();
    func_0x000104bda960(plStack_68);
  }
LAB_10b8faef8:
  func_0x00010b8ffdac(auStack_210);
  func_0x00010b8e58cc(auStack_128);
  func_0x00010b92155c(auStack_b8);
  func_0x00010b8fe038();
  func_0x00010b8fd3bc(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    return;
  }
  return;
}



/* Entry: 10b8faf3c; end: 10b8faf57;  */

void FUN_10b8faf3c(void)

{
  return;
}



/* Entry: 10b8faf58; end: 10b8faf77;  */

void FUN_10b8faf58(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x00010b8f4d90();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b8faf78; end: 10b8faf7b;  */

void FUN_10b8faf78(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b8faf7c; end: 10b8faff7;  */

void FUN_10b8faf7c(undefined8 *param_1)

{
  long extraout_x8;
  long lVar1;
  int extraout_w11;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x00010b8fdcd4();
  *param_1 = &PTR_FUN_110d73a60;
  func_0x00010b8fe784();
  lVar1 = unaff_x20[1];
  *param_1 = *unaff_x20;
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x10) != 0)) {
    do {
      func_0x00010b8fda68();
      lVar1 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  param_1[1] = lVar1;
  func_0x00010b8c2ad4(param_1 + 2,unaff_x20 + 2);
  param_1[3] = unaff_x20[3];
  func_0x00010b8fe0e0(*(undefined8 *)(unaff_x20[4] + 0x18),param_1 + 4);
  *(undefined8 **)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 10b8faff8; end: 10b8fb027;  */

/* WARNING: Possible PIC construction at 0x00010b8bc444: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b8bc448) */

long * FUN_10b8faff8(long *param_1)

{
  long *unaff_x19;
  
  if (*param_1 == 2) {
    func_0x0001003adc0c(param_1 + 1);
    func_0x000104bda960();
    return unaff_x19;
  }
  if (*param_1 == 1) {
    func_0x00010007e5d0(param_1 + 2);
    func_0x0001003a8cb8();
    return param_1 + 1;
  }
  return param_1;
}



/* Entry: 10b8fb028; end: 10b8fb047;  */

void FUN_10b8fb028(void)

{
  func_0x00010b8fdf5c();
  FUN_10b8fb048();
  return;
}



/* Entry: 10b8fb048; end: 10b8fb06b;  */

void FUN_10b8fb048(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
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
                    /* WARNING: Could not recover jumptable at 0x00010b8fd960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 10b8fb06c; end: 10b8fb08f;  */

undefined8 FUN_10b8fb06c(undefined8 param_1)

{
  FUN_10b8fb090(param_1,0);
  return param_1;
}



/* Entry: 10b8fb090; end: 10b8fb10b;  */

void FUN_10b8fb090(long *param_1,long param_2)

{
  undefined1 in_ZR;
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  *param_1 = param_2;
  if (lVar2 != 0) {
    lVar1 = lVar2 + 0x30;
    FUN_10b8bb13c();
    if (*(long *)(lVar2 + 0x18) != 0) {
      lVar3 = 0;
      while (func_0x00010b8fe8f4(), !(bool)in_ZR) {
        if (-1 < *(char *)(lVar1 + lVar3)) {
          func_0x00010b8fe9ac();
          func_0x000104bd4e40();
        }
        lVar3 = lVar3 + 1;
      }
      __ZdlPv();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10b8fb10c; end: 10b8fb183;  */

undefined8 FUN_10b8fb10c(undefined8 param_1)

{
  func_0x00010b8fb130(param_1,0);
  return param_1;
}



/* Entry: 10b8fb184; end: 10b8fb1b3;  */

void FUN_10b8fb184(long param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_1 != 0) {
    uStack_18 = *(undefined8 *)(param_1 + 0x10);
    uStack_20 = *(undefined8 *)(param_1 + 8);
    func_0x0001003a90c4(&uStack_20);
    return;
  }
  return;
}



/* Entry: 10b8fb1b4; end: 10b8fb1d3;  */

void FUN_10b8fb1b4(void)

{
  func_0x00010b8fdf5c();
  FUN_10b8fb1d4();
  return;
}



/* Entry: 10b8fb1d4; end: 10b8fb21b;  */

void FUN_10b8fb1d4(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
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
                    /* WARNING: Could not recover jumptable at 0x00010b8fd960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 10b8fb21c; end: 10b8fb25f;  */

void FUN_10b8fb21c(void)

{
  func_0x00010b8fdf5c();
  func_0x00010b8e8bd0();
  return;
}



/* Entry: 10b8fb260; end: 10b8fb263;  */

undefined8 * FUN_10b8fb260(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d73a90;
  func_0x000107c278f4(param_1 + 9);
  *param_1 = &PTR_FUN_110d73b00;
  FUN_10b9a3d64(param_1 + 6);
  return param_1;
}



/* Entry: 10b8fb264; end: 10b8fb277;  */

void FUN_10b8fb264(void)

{
  func_0x00010b8fb328();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


