/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107282364; end: 107282397;  */

void FUN_107282364(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_2 = &PTR_FUN_1109973a8;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  param_2[5] = *(undefined8 *)(param_1 + 0x28);
  param_2[4] = uVar4;
  param_2[3] = uVar3;
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 107282398; end: 107282467;  */

void FUN_107282398(long param_1,double *param_2,double *param_3,double *param_4)

{
  bool bVar1;
  double *extraout_x8;
  long unaff_x20;
  long unaff_x21;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  func_0x000107285b9c();
  dVar4 = *param_2;
  dVar5 = *param_3;
  dVar6 = param_3[1];
  dVar2 = param_4[1];
  bVar1 = false;
  if ((*param_4 == dVar5) && (bVar1 = false, !NAN(dVar2) && !NAN(dVar6))) {
    bVar1 = dVar2 == dVar6;
  }
  if (!bVar1) {
    FUN_107282108(param_1 + 0x10,param_1 + 0x20);
    dVar5 = *(double *)(param_1 + 8);
    func_0x000107285c24();
    dVar6 = dVar2;
  }
  dVar7 = *(double *)(unaff_x21 + 0x10);
  dVar2 = *(double *)(unaff_x21 + 0x18);
  dVar9 = *(double *)(unaff_x20 + 0x10);
  dVar8 = 1.0 - dVar4;
  if (*(double *)(unaff_x20 + 0x18) != dVar2) {
    dVar3 = dVar4 * *(double *)(unaff_x20 + 0x18);
    dVar2 = dVar3 + dVar8 * dVar2;
    func_0x000107285a2c(dVar2,dVar3,0x4076800000000000);
  }
  dVar3 = dVar4 * dVar9 + dVar8 * dVar7;
  if (dVar9 == dVar7) {
    dVar3 = dVar7;
  }
  dVar7 = *(double *)(unaff_x21 + 0x20);
  dVar9 = *(double *)(unaff_x20 + 0x20);
  *extraout_x8 = dVar5;
  extraout_x8[1] = dVar6;
  dVar6 = dVar4 * dVar9 + dVar8 * dVar7;
  if (dVar9 == dVar7) {
    dVar6 = dVar7;
  }
  extraout_x8[2] = dVar3;
  extraout_x8[3] = dVar2;
  extraout_x8[4] = dVar6;
  return;
}



/* Entry: 107282468; end: 10728248f;  */

void FUN_107282468(undefined8 param_1)

{
  func_0x00010728569c();
  func_0x000107285670(param_1,&PTR_DAT_110997408);
  func_0x000107285554();
  return;
}



/* Entry: 107282490; end: 10728249b;  */

undefined ** FUN_107282490(void)

{
  return &PTR_DAT_110997408;
}



/* Entry: 10728249c; end: 1072824bf;  */

undefined8 FUN_10728249c(undefined8 param_1)

{
  func_0x000107285b20();
  FUN_10727d560();
  return param_1;
}



/* Entry: 1072824c0; end: 1072824d3;  */

void FUN_1072824c0(void)

{
  FUN_10728249c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072824d4; end: 10728250b;  */

undefined8 FUN_1072824d4(void)

{
  undefined8 uVar1;
  
  uVar1 = 0xe8;
  __Znwm(0xe8);
  FUN_107282944();
  return uVar1;
}



/* Entry: 10728250c; end: 10728252f;  */

undefined8 FUN_10728250c(long param_1,undefined8 param_2)

{
  func_0x000107285b20(param_2,param_1 + 8);
  FUN_10727d5ac();
  return param_2;
}



/* Entry: 107282530; end: 10728290f;  */

void FUN_107282530(long param_1,double *param_2,undefined8 param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 extraout_x8;
  double *unaff_x19;
  double *unaff_x20;
  double *unaff_x21;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double unaff_d8;
  double dVar11;
  double unaff_d9;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dStack_208;
  double dStack_200;
  undefined1 auStack_1d8 [24];
  undefined1 auStack_1c0 [40];
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 auStack_140 [168];
  undefined8 uStack_98;
  
  func_0x000107285b9c();
  func_0x000107285500();
  dVar5 = *param_2;
  uStack_98 = extraout_x8;
  FUN_10726c7c0(param_3);
  func_0x000107285a80();
  dVar10 = unaff_x20[1];
  bVar1 = false;
  if ((*unaff_x20 == *unaff_x21) && (bVar1 = false, !NAN(dVar10) && !NAN(unaff_x21[1]))) {
    bVar1 = dVar10 == unaff_x21[1];
  }
  dVar6 = 0.0;
  dStack_208 = 0.0;
  dStack_200 = 0.0;
  if (!bVar1) {
    FUN_10726c7c0();
    dStack_200 = dVar10 - unaff_d9;
    dStack_208 = dVar6 - unaff_d8;
  }
  dVar16 = unaff_x20[2];
  dVar13 = unaff_x21[2];
  dVar7 = unaff_x20[3] - unaff_x21[3];
  FUN_107246670();
  dVar10 = unaff_x20[4];
  dVar15 = unaff_x21[4];
  func_0x0001078696e8(auStack_1d8);
  dVar12 = dStack_208 * dStack_208 + dStack_200 * dStack_200;
  dVar11 = SQRT(dVar12);
  dVar10 = dVar10 - dVar15;
  puStack_198 = &UNK_10e52b660;
  uStack_190 = 0;
  uStack_188 = 0;
  uStack_180 = 0;
  func_0x000107285a18();
  func_0x000107285dc8();
  FUN_107282a04();
  func_0x0001072855fc();
  func_0x00010728594c();
  func_0x00010728593c();
  func_0x000107285a18();
  func_0x000107285dc8();
  FUN_107282a04();
  func_0x0001072855fc();
  func_0x00010728594c();
  func_0x00010728593c();
  func_0x000107285a18();
  func_0x000107285dc8();
  FUN_107282a04();
  func_0x0001072855fc();
  func_0x00010728594c();
  func_0x00010728593c();
  func_0x000107285a18();
  func_0x000107285dc8();
  FUN_107282a04();
  func_0x0001072855fc();
  func_0x00010728594c();
  func_0x00010728593c();
  FUN_107278fec(auStack_1c0,&puStack_198);
  FUN_10726ae88(&puStack_198);
  uVar2 = param_1 + 8;
  func_0x0001072856bc();
  uVar3 = param_1 + 0x40;
  func_0x0001072856bc();
  uVar4 = param_1 + 0x78;
  func_0x0001072856bc();
  func_0x0001072856bc(param_1 + 0xb0);
  dVar14 = 1.0;
  dVar6 = 1.0;
  if (uVar4 >> 0x20 != 0) {
    dVar6 = (double)(float)uVar4;
  }
  dVar8 = (double)(float)uVar3;
  bVar1 = uVar3 >> 0x20 == 0;
  dVar17 = 1.0;
  if (!bVar1) {
    dVar17 = dVar8;
  }
  func_0x000107285e08();
  dVar9 = 1.0;
  if (!bVar1) {
    dVar9 = dVar8;
  }
  FUN_10726b264(auStack_1c0);
  FUN_10726b264(auStack_1d8);
  if (dVar12 <= 0.0) {
    dVar14 = *unaff_x21;
    dVar15 = unaff_x21[1];
  }
  else {
    dVar12 = 1.0;
    if (uVar2 >> 0x20 != 0) {
      dVar12 = (double)(float)uVar2;
    }
    dVar8 = dVar11;
    if (dVar5 * dVar12 <= dVar11) {
      dVar8 = dVar5 * dVar12;
    }
    FUN_10726c894(unaff_d8 + dVar8 * (dStack_208 / dVar11),unaff_d9 + dVar8 * (dStack_200 / dVar11),
                  auStack_140);
    FUN_107282968(auStack_140);
    func_0x000107285b84();
  }
  dVar11 = unaff_x21[2];
  if (unaff_x20[2] != dVar11) {
    dVar12 = ABS(dVar16 - dVar13);
    if (dVar5 * dVar17 <= ABS(dVar16 - dVar13)) {
      dVar12 = dVar5 * dVar17;
    }
    dVar13 = 1.0;
    if (unaff_x20[2] <= dVar11) {
      dVar13 = -1.0;
    }
    dVar11 = dVar11 + dVar12 * dVar13;
  }
  dVar12 = unaff_x21[3];
  if (unaff_x20[3] != dVar12) {
    dVar13 = ABS(dVar7);
    if (dVar5 * dVar6 <= ABS(dVar7)) {
      dVar13 = dVar5 * dVar6;
    }
    dVar12 = unaff_x20[3] - dVar12;
    FUN_107246670(dVar12,0xc066800000000000,0x4066800000000000);
    dVar6 = 1.0;
    if (dVar12 <= 0.0) {
      dVar6 = -1.0;
    }
    dVar12 = unaff_x21[3] + dVar13 * dVar6;
    func_0x000107285a2c(dVar12,unaff_x21[3],0x4076800000000000);
  }
  dVar7 = unaff_x21[4];
  dVar13 = unaff_x20[4];
  dVar6 = dVar7;
  if (dVar13 != dVar7) {
    dVar6 = ABS(dVar10);
    if (dVar5 * dVar9 <= ABS(dVar10)) {
      dVar6 = dVar5 * dVar9;
    }
    dVar5 = 1.0;
    if (dVar13 <= dVar7) {
      dVar5 = -1.0;
    }
    dVar6 = dVar7 + dVar6 * dVar5;
  }
  bVar1 = dVar13 == dVar7;
  *unaff_x19 = dVar14;
  unaff_x19[1] = dVar15;
  unaff_x19[2] = dVar11;
  unaff_x19[3] = dVar12;
  unaff_x19[4] = dVar6;
  func_0x0001072854dc(uStack_98);
  if (bVar1) {
    return;
  }
  ___stack_chk_fail();
  FUN_10726b264(auStack_1c0);
  FUN_10726b264(auStack_1d8);
  do {
    func_0x00010728561c();
  } while( true );
}



/* Entry: 107282910; end: 107282937;  */

void FUN_107282910(undefined8 param_1)

{
  func_0x00010728569c();
  func_0x000107285670(param_1,&PTR_DAT_110997488);
  func_0x000107285554();
  return;
}



/* Entry: 107282938; end: 107282943;  */

undefined ** FUN_107282938(void)

{
  return &PTR_DAT_110997488;
}



/* Entry: 107282944; end: 107282967;  */

undefined8 FUN_107282944(undefined8 param_1)

{
  func_0x000107285b20();
  FUN_10727d5ac();
  return param_1;
}



/* Entry: 107282968; end: 107282a03;  */

undefined1  [16] FUN_107282968(double *param_1)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_40 [16];
  
  dVar1 = *param_1 / 6378137.0;
  _exp();
  _atan();
  dVar1 = (double)NEON_fminnm((dVar1 * 2.0 + -1.5707963267948966) * 57.29577951308232,
                              0x40554345b1a549d7);
  if (dVar1 <= -85.0511287798066) {
    dVar1 = -85.0511287798066;
  }
  dVar2 = (double)NEON_fminnm((param_1[1] * 57.29577951308232) / 6378137.0,0x4066800000000000);
  if (dVar2 <= -180.0) {
    dVar2 = -180.0;
  }
  func_0x000107285748(dVar1,dVar2,auStack_40);
  return auStack_40;
}



/* Entry: 107282a04; end: 107282a87;  */

void FUN_107282a04(long param_1,undefined8 param_2,undefined8 *param_3)

{
  func_0x000104c318bc();
  *(undefined8 *)(param_1 + 0x40) = *param_3;
  *(undefined4 *)(param_1 + 0xa0) = 2;
  return;
}



/* Entry: 107282a88; end: 107282a8f;  */

void FUN_107282a88(void)

{
  return;
}



/* Entry: 107282a90; end: 107282ac3;  */

void FUN_107282a90(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = 0x28;
  __Znwm();
  func_0x000107285af0(&PTR_FUN_1109974a8);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(lVar1 + 0x18) = uVar2;
  return;
}



/* Entry: 107282ac4; end: 107282aef;  */

void FUN_107282ac4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_2 = &PTR_FUN_1109974a8;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  param_2[4] = *(undefined8 *)(param_1 + 0x20);
  param_2[3] = uVar3;
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 107282af0; end: 107282c83;  */

void FUN_107282af0(double *param_1,long param_2,double *param_3,double *param_4,double *param_5)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double unaff_d10;
  double unaff_d11;
  double dVar10;
  undefined1 auStack_70 [16];
  
  dVar10 = *param_3;
  FUN_10726c7c0(param_4);
  func_0x000107285b84();
  dVar8 = *param_4;
  dVar9 = param_4[1];
  dVar3 = 0.0;
  bVar1 = false;
  if ((*param_5 == dVar8) && (bVar1 = false, !NAN(param_5[1]) && !NAN(dVar9))) {
    bVar1 = param_5[1] == dVar9;
  }
  dVar2 = 0.0;
  if (!bVar1) {
    FUN_10726c7c0(param_5);
    dVar3 = dVar3 - unaff_d11;
    dVar2 = dVar2 - unaff_d10;
    dVar8 = *param_4;
    dVar9 = param_4[1];
  }
  dVar4 = dVar2 * dVar2 + dVar3 * dVar3;
  if (0.0 < dVar4) {
    dVar4 = SQRT(dVar4);
    dVar7 = dVar10 * *(double *)(param_2 + 8);
    dVar5 = dVar4;
    if (dVar7 <= dVar4) {
      dVar5 = dVar7;
    }
    FUN_10726c894(unaff_d10 + dVar5 * (dVar2 / dVar4),unaff_d11 + dVar5 * (dVar3 / dVar4),auStack_70
                 );
    FUN_107282968(auStack_70);
    func_0x000107285a80();
  }
  dVar2 = param_4[2];
  dVar3 = param_5[2];
  if (dVar3 != dVar2) {
    dVar4 = 1.0;
    if (dVar3 < dVar2) {
      dVar4 = -1.0;
    }
    dVar7 = dVar10 * *(double *)(param_2 + 0x10);
    dVar5 = ABS(dVar3 - dVar2);
    if (dVar7 <= ABS(dVar3 - dVar2)) {
      dVar5 = dVar7;
    }
    dVar2 = dVar2 + dVar5 * dVar4;
  }
  dVar3 = param_4[3];
  if (param_5[3] != dVar3) {
    dVar3 = param_5[3] - dVar3;
    FUN_107246670(dVar3,0xc066800000000000,0x4066800000000000);
    dVar4 = 1.0;
    if (dVar3 <= 0.0) {
      dVar4 = -1.0;
    }
    dVar7 = dVar10 * *(double *)(param_2 + 0x18);
    dVar5 = ABS(dVar3);
    if (dVar7 <= ABS(dVar3)) {
      dVar5 = dVar7;
    }
    dVar3 = param_4[3] + dVar5 * dVar4;
    func_0x000107285a2c(dVar3,dVar4,0x4076800000000000);
  }
  dVar4 = param_4[4];
  dVar5 = param_5[4];
  if (dVar5 != dVar4) {
    dVar7 = 1.0;
    if (dVar5 < dVar4) {
      dVar7 = -1.0;
    }
    dVar10 = dVar10 * *(double *)(param_2 + 0x20);
    dVar6 = ABS(dVar5 - dVar4);
    if (dVar10 <= ABS(dVar5 - dVar4)) {
      dVar6 = dVar10;
    }
    dVar4 = dVar4 + dVar6 * dVar7;
  }
  *param_1 = dVar8;
  param_1[1] = dVar9;
  param_1[2] = dVar2;
  param_1[3] = dVar3;
  param_1[4] = dVar4;
  return;
}



/* Entry: 107282c84; end: 107282cab;  */

void FUN_107282c84(undefined8 param_1)

{
  func_0x00010728569c();
  func_0x000107285670(param_1,&PTR_DAT_110997508);
  func_0x000107285554();
  return;
}



/* Entry: 107282cac; end: 107282cb7;  */

undefined ** FUN_107282cac(void)

{
  return &PTR_DAT_110997508;
}



/* Entry: 107282cb8; end: 107282cfb;  */

void FUN_107282cb8(long param_1)

{
  if (*(uint *)(param_1 + 0x78) != 0xffffffff) {
    func_0x000107285594((&PTR_FUN_110997518)[*(uint *)(param_1 + 0x78)]);
  }
  *(undefined4 *)(param_1 + 0x78) = 0xffffffff;
  return;
}



/* Entry: 107282cfc; end: 107282d13;  */

long * FUN_107282cfc(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_2[3];
  if (plVar1 == param_2) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return param_2;
    }
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
  return param_2;
}



/* Entry: 107282d14; end: 107282df3;  */

/* WARNING: Possible PIC construction at 0x000107282d30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107282d34) */
/* WARNING: Removing unreachable block (ram,0x000107282d60) */
/* WARNING: Removing unreachable block (ram,0x000107282db0) */
/* WARNING: Removing unreachable block (ram,0x000107282da4) */
/* WARNING: Removing unreachable block (ram,0x000107282d54) */
/* WARNING: Removing unreachable block (ram,0x000107285bec) */

void FUN_107282d14(undefined8 param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  long unaff_x19;
  undefined1 auStack_48 [40];
  
  func_0x000107285514();
  puVar1 = auStack_48;
  func_0x000107285e28();
  if (puVar1 == (undefined1 *)0x0) {
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
  }
  else if (puVar1 == param_2) {
    func_0x00010728557c();
  }
  else {
    func_0x0001072856e4();
    *(undefined1 **)(unaff_x19 + 0x18) = puVar1;
  }
  return;
}



/* Entry: 107282df4; end: 107282f0b;  */

void FUN_107282df4(long param_1,long param_2)

{
  undefined1 uVar1;
  long lVar2;
  int iVar3;
  undefined8 extraout_x8;
  long *plVar4;
  code *extraout_x8_00;
  code *extraout_x8_01;
  long *unaff_x19;
  long unaff_x20;
  long alStack_40 [3];
  undefined8 uStack_28;
  
  func_0x000107285528();
  uVar1 = param_2 == param_1;
  uStack_28 = extraout_x8;
  if (!(bool)uVar1) {
    func_0x0001072856b0();
    lVar2 = *(long *)(param_1 + 0x18);
    plVar4 = *(long **)(param_2 + 0x18);
    if (lVar2 == unaff_x20) {
      uVar1 = plVar4 == unaff_x19;
      if ((bool)uVar1) {
        func_0x00010063939c();
        (*extraout_x8_00)();
        func_0x0001072856f0(*(undefined8 *)(unaff_x20 + 0x18));
        *(undefined8 *)(unaff_x20 + 0x18) = 0;
        func_0x00010063939c(unaff_x19[3]);
        param_2 = unaff_x20;
        (*extraout_x8_01)();
        func_0x0001072856f0(unaff_x19[3]);
        unaff_x19[3] = 0;
        *(long *)(unaff_x20 + 0x18) = unaff_x20;
        func_0x0001006393a8(*(undefined8 *)(alStack_40[0] + 0x18),alStack_40);
        (**(code **)(alStack_40[0] + 0x20))(alStack_40);
      }
      else {
        func_0x00010063939c();
        func_0x0001006393a8();
        func_0x0001072856f0(*(undefined8 *)(unaff_x20 + 0x18));
        *(long *)(unaff_x20 + 0x18) = unaff_x19[3];
      }
      unaff_x19[3] = (long)unaff_x19;
    }
    else {
      uVar1 = plVar4 == unaff_x19;
      if ((bool)uVar1) {
        param_2 = unaff_x20;
        (**(code **)(*plVar4 + 0x18))(plVar4);
        func_0x0001072856f0(unaff_x19[3]);
        unaff_x19[3] = *(long *)(unaff_x20 + 0x18);
        *(long *)(unaff_x20 + 0x18) = unaff_x20;
      }
      else {
        *(long **)(unaff_x20 + 0x18) = plVar4;
        unaff_x19[3] = lVar2;
      }
    }
  }
  iVar3 = (int)param_2;
  func_0x0001072854dc(uStack_28);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  if (iVar3 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  func_0x0001006392cc();
  _memcpy();
  func_0x000107282db4(unaff_x19 + 0xd,unaff_x20 + 0x68);
  FUN_10724cbe8(unaff_x19 + 0x11,unaff_x20 + 0x88);
  return;
}



/* Entry: 107282f0c; end: 107282f57;  */

void FUN_107282f0c(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001006392cc();
  _memcpy();
  func_0x000107282db4(unaff_x19 + 0x68,unaff_x20 + 0x68);
  FUN_10724cbe8(unaff_x19 + 0x88,unaff_x20 + 0x88);
  return;
}



/* Entry: 107282f58; end: 107282f9b;  */

void FUN_107282f58(long param_1)

{
  if (*(uint *)(param_1 + 0xe8) != 0xffffffff) {
    func_0x000107285594((&PTR_FUN_110997530)[*(uint *)(param_1 + 0xe8)]);
  }
  *(undefined4 *)(param_1 + 0xe8) = 0xffffffff;
  return;
}



/* Entry: 107282f9c; end: 107282fab;  */

void FUN_107282f9c(void)

{
  return;
}



/* Entry: 107282fac; end: 107282fc7;  */

void FUN_107282fac(void)

{
  func_0x0001072858e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)();
  return;
}



/* Entry: 107282fc8; end: 107282fff;  */

void FUN_107282fc8(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001006392cc();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  func_0x000107285bd4();
  *(undefined8 *)(unaff_x19 + 0x30) = *(undefined8 *)(unaff_x20 + 0x30);
  return;
}



/* Entry: 107283000; end: 10728302b;  */

long FUN_107283000(long param_1)

{
  func_0x00010725ab38(param_1 + 0xf8);
  FUN_107282f58(param_1 + 8);
  return param_1;
}



/* Entry: 10728302c; end: 107283133;  */

ulong * FUN_10728302c(ulong *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  ulong *puVar6;
  int iVar7;
  ulong *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong *puVar12;
  long lVar13;
  ulong *puVar14;
  undefined8 *puVar15;
  long lVar16;
  ulong *puStack_80;
  ulong *puStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  
  puVar15 = (undefined8 *)param_1[1];
  if (puVar15 < (undefined8 *)param_1[2]) {
    *puVar15 = param_2;
    puVar15[1] = param_3;
    if (param_3 != 0) {
      plVar1 = (long *)(param_3 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    puVar15 = puVar15 + 2;
    puVar8 = param_1;
LAB_107283120:
    param_1[1] = (ulong)puVar15;
    return puVar8;
  }
  puVar12 = (ulong *)*param_1;
  lVar13 = (long)puVar15 - (long)puVar12;
  lVar16 = lVar13 >> 4;
  uVar2 = lVar16 + 1;
  puVar8 = param_1;
  if (uVar2 >> 0x3c == 0) {
    uVar10 = (long)param_1[2] - (long)puVar12;
    uVar11 = (long)uVar10 >> 3;
    if (uVar11 <= uVar2) {
      uVar11 = uVar2;
    }
    if (0x7fffffffffffffef < uVar10) {
      uVar11 = 0xfffffffffffffff;
    }
    if (uVar11 >> 0x3c == 0) {
      lVar9 = uVar11 << 4;
      __Znwm();
      puVar3 = (undefined8 *)(lVar9 + lVar13);
      *puVar3 = param_2;
      puVar3[1] = param_3;
      if (param_3 != 0) {
        plVar1 = (long *)(param_3 + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = *plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        puVar12 = (ulong *)*param_1;
        lVar13 = param_1[1] - (long)puVar12;
        lVar16 = lVar13 >> 4;
      }
      puVar15 = puVar3 + 2;
      puVar14 = puVar3 + lVar16 * -2;
      puVar8 = puVar14;
      _memcpy(puVar14,puVar12,lVar13);
      *param_1 = (ulong)puVar14;
      param_1[1] = (ulong)puVar15;
      param_1[2] = lVar9 + uVar11 * 0x10;
      if (puVar12 != (ulong *)0x0) {
        func_0x000107285884();
      }
      goto LAB_107283120;
    }
  }
  else {
    FUN_107283134();
  }
  func_0x000104bd35f4();
  pcStack_58 = FUN_107283134;
  puStack_60 = &stack0xfffffffffffffff0;
  func_0x0001072858a4();
  pcStack_68 = FUN_107283140;
  puStack_80 = puVar12;
  puStack_78 = param_1;
  puStack_70 = (undefined1 *)&puStack_60;
  func_0x0001072856b0();
  func_0x000104c2fcd4();
  func_0x000104c2fcf0();
  puVar14 = (ulong *)param_1[1];
  puVar6 = (ulong *)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    puVar14 = (ulong *)(ulong)*(byte *)((long)param_1 + 0x17);
    puVar6 = param_1;
  }
  iVar7 = (int)&puStack_80;
  if (puVar12 == puVar14) {
    puStack_80 = puVar8;
    puStack_78 = puVar12;
    func_0x000100067218(&puStack_80,puVar6,puVar14);
    puVar8 = (ulong *)(ulong)(iVar7 == 0);
  }
  else {
    puVar8 = (ulong *)0x0;
  }
  return puVar8;
}



/* Entry: 107283134; end: 10728313f;  */

bool FUN_107283134(void)

{
  ulong uVar1;
  undefined8 *puVar2;
  int iVar3;
  bool bVar4;
  undefined8 *unaff_x19;
  ulong unaff_x20;
  
  func_0x0001072858a4();
  func_0x0001072856b0();
  func_0x000104c2fcd4();
  func_0x000104c2fcf0();
  uVar1 = unaff_x19[1];
  puVar2 = (undefined8 *)*unaff_x19;
  if (-1 < (char)*(byte *)((long)unaff_x19 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)unaff_x19 + 0x17);
    puVar2 = unaff_x19;
  }
  iVar3 = (int)&stack0xffffffffffffffd0;
  if (unaff_x20 == uVar1) {
    func_0x000100067218(&stack0xffffffffffffffd0,puVar2,uVar1);
    bVar4 = iVar3 == 0;
  }
  else {
    bVar4 = false;
  }
  return bVar4;
}



/* Entry: 107283140; end: 107283193;  */

bool FUN_107283140(void)

{
  ulong uVar1;
  undefined8 *puVar2;
  int iVar3;
  bool bVar4;
  undefined8 *unaff_x19;
  ulong unaff_x20;
  
  func_0x0001072856b0();
  func_0x000104c2fcd4();
  func_0x000104c2fcf0();
  uVar1 = unaff_x19[1];
  puVar2 = (undefined8 *)*unaff_x19;
  if (-1 < (char)*(byte *)((long)unaff_x19 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)unaff_x19 + 0x17);
    puVar2 = unaff_x19;
  }
  iVar3 = (int)&stack0xffffffffffffffe0;
  if (unaff_x20 == uVar1) {
    func_0x000100067218(&stack0xffffffffffffffe0,puVar2,uVar1);
    bVar4 = iVar3 == 0;
  }
  else {
    bVar4 = false;
  }
  return bVar4;
}



/* Entry: 107283194; end: 1072831f3;  */

void FUN_107283194(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar2 = param_1;
  FUN_1072831f4();
  pcVar1 = pcRam00000001138369a8;
  if ((puVar2 == (undefined8 *)0x1) && (pcRam00000001138369a8 != (code *)0x0)) {
    uStack_28 = param_1[1];
    uStack_30 = *param_1;
    *param_1 = 0;
    param_1[1] = 0;
    (*pcVar1)(&uStack_30);
    func_0x0001000df524(&uStack_30);
  }
  FUN_107283230(param_1);
  return;
}



/* Entry: 1072831f4; end: 10728322f;  */

long FUN_1072831f4(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1[1] == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(param_1[1] + 8) + 1;
  }
  if (*param_1 != 0) {
    piVar1 = (int *)(*param_1 + 0x28);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return lVar4;
}



/* Entry: 107283230; end: 107283277;  */

void FUN_107283230(long param_1)

{
  func_0x000107285ae4();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 107283278; end: 10728328f;  */

void FUN_107283278(undefined8 *param_1)

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



/* Entry: 107283290; end: 1072832ab;  */

void FUN_107283290(long param_1)

{
  FUN_1072832ac();
  *(undefined1 *)(param_1 + 0x1a0) = 1;
  return;
}



/* Entry: 1072832ac; end: 1072832eb;  */

void FUN_1072832ac(long param_1,long param_2)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001006392cc();
  FUN_1072832ec(param_1 + 8,param_2 + 8);
  FUN_107282f0c(unaff_x19 + 0xf8,unaff_x20 + 0xf8);
  return;
}



/* Entry: 1072832ec; end: 10728331b;  */

void FUN_1072832ec(long param_1)

{
  undefined4 extraout_w8;
  
  func_0x00010728560c();
  *(undefined4 *)(param_1 + 0xe8) = extraout_w8;
  FUN_10728331c();
  return;
}



/* Entry: 10728331c; end: 10728335f;  */

void FUN_10728331c(void)

{
  int iVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001006392cc();
  FUN_107282f58();
  iVar1 = *(int *)(unaff_x20 + 0xe8);
  if (iVar1 != -1) {
    func_0x000107285544(&PTR_FUN_110997548);
    *(int *)(unaff_x19 + 0xe8) = iVar1;
  }
  return;
}



/* Entry: 107283360; end: 107283377;  */

void FUN_107283360(undefined8 *param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(*param_1,param_2,0x48);
  return;
}



/* Entry: 107283378; end: 1072833b7;  */

void FUN_107283378(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001006392cc();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  func_0x000107285bd4();
  _memcpy(unaff_x19 + 0x30,unaff_x20 + 0x30,0xb1);
  return;
}



/* Entry: 1072833b8; end: 1072833e7;  */

void FUN_1072833b8(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
  return;
}



/* Entry: 1072833e8; end: 1072833ef;  */

void FUN_1072833e8(void)

{
  return;
}



/* Entry: 1072833f0; end: 10728340f;  */

void FUN_1072833f0(undefined8 *param_1)

{
  func_0x000107285708();
  *param_1 = &PTR_FUN_110997570;
  return;
}



/* Entry: 107283410; end: 10728342f;  */

void FUN_107283410(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_110997570;
  return;
}



/* Entry: 107283430; end: 107283457;  */

void FUN_107283430(undefined8 param_1)

{
  func_0x00010728569c();
  func_0x000107285670(param_1,&PTR_DAT_1109975d0);
  func_0x000107285554();
  return;
}



/* Entry: 107283458; end: 107283463;  */

undefined ** FUN_107283458(void)

{
  return &PTR_DAT_1109975d0;
}



/* Entry: 107283464; end: 10728348f;  */

undefined8 * FUN_107283464(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109975f0;
  FUN_1072835ec(param_1 + 1);
  return param_1;
}



/* Entry: 107283490; end: 1072834a3;  */

void FUN_107283490(void)

{
  FUN_107283464();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072834a4; end: 1072834e3;  */

void FUN_1072834a4(undefined8 *param_1)

{
  long lVar1;
  int extraout_w10;
  long unaff_x19;
  undefined8 uVar2;
  
  func_0x000107285d0c();
  *param_1 = &PTR_FUN_1109975f0;
  lVar1 = *(long *)(unaff_x19 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x19 + 8);
  param_1[2] = *(undefined8 *)(unaff_x19 + 0x10);
  param_1[1] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001072859c0();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 1072834e4; end: 10728353b;  */

void FUN_1072834e4(long param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 unaff_x30;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_1109975f0;
  lVar1 = *(long *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001072859c0(unaff_x30);
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10728353c; end: 107283563;  */

void FUN_10728353c(undefined8 param_1)

{
  func_0x00010728569c();
  func_0x000107285670(param_1,&PTR_DAT_110997650);
  func_0x000107285554();
  return;
}



/* Entry: 107283564; end: 107283577;  */

undefined ** FUN_107283564(void)

{
  return &PTR_DAT_110997650;
}



/* Entry: 107283578; end: 107283597;  */

void FUN_107283578(undefined8 *param_1)

{
  func_0x000107285708();
  *param_1 = &PTR_DAT_110997670;
  return;
}



/* Entry: 107283598; end: 1072835b7;  */

void FUN_107283598(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_110997670;
  return;
}



/* Entry: 1072835b8; end: 1072835df;  */

void FUN_1072835b8(undefined8 param_1)

{
  func_0x00010728569c();
  func_0x000107285670(param_1,&PTR_DAT_1109976d0);
  func_0x000107285554();
  return;
}



/* Entry: 1072835e0; end: 1072835eb;  */

undefined ** FUN_1072835e0(void)

{
  return &PTR_DAT_1109976d0;
}



/* Entry: 1072835ec; end: 10728363b;  */

void FUN_1072835ec(long param_1)

{
  func_0x000107285ae4();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10728363c; end: 107283643;  */

void FUN_10728363c(void)

{
  return;
}



/* Entry: 107283644; end: 107283663;  */

void FUN_107283644(undefined8 *param_1)

{
  func_0x000107285708();
  *param_1 = &PTR_FUN_1109976f0;
  return;
}



/* Entry: 107283664; end: 107283683;  */

void FUN_107283664(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_1109976f0;
  return;
}



/* Entry: 107283684; end: 1072836ab;  */

void FUN_107283684(undefined8 param_1)

{
  func_0x00010728569c();
  func_0x000107285670(param_1,&PTR_DAT_110997750);
  func_0x000107285554();
  return;
}



/* Entry: 1072836ac; end: 1072836bf;  */

undefined ** FUN_1072836ac(void)

{
  return &PTR_DAT_110997750;
}



/* Entry: 1072836c0; end: 1072836df;  */

void FUN_1072836c0(undefined8 *param_1)

{
  func_0x000107285708();
  *param_1 = &PTR_DAT_110997770;
  return;
}



/* Entry: 1072836e0; end: 1072836ff;  */

void FUN_1072836e0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_110997770;
  return;
}



/* Entry: 107283700; end: 107283727;  */

void FUN_107283700(undefined8 param_1)

{
  func_0x00010728569c();
  func_0x000107285670(param_1,&PTR_DAT_1109977d0);
  func_0x000107285554();
  return;
}



/* Entry: 107283728; end: 107283733;  */

undefined ** FUN_107283728(void)

{
  return &PTR_DAT_1109977d0;
}



/* Entry: 107283734; end: 107283787;  */

void FUN_107283734(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  double *unaff_x19;
  double dVar6;
  double dStack_100;
  double dStack_f8;
  double dStack_f0;
  double dStack_e8;
  double dStack_e0;
  double dStack_d8;
  double dStack_d0;
  undefined **appuStack_c8 [3];
  undefined ***pppuStack_b0;
  undefined1 auStack_a8 [32];
  undefined8 uStack_88;
  double adStack_48 [4];
  undefined8 uStack_28;
  
  func_0x000107285500();
  uStack_28 = extraout_x8;
  func_0x000107285c60(*(undefined8 *)*param_1,adStack_48);
  pdVar5 = adStack_48;
  FUN_107283888();
  pdVar2 = adStack_48;
  func_0x0001006393ec();
  func_0x0001072854dc(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pdVar3 = &dStack_100;
  pdVar4 = &dStack_100;
  func_0x000107285500();
  dVar6 = *pdVar5;
  uVar1 = dVar6 == 0.0;
  uStack_88 = extraout_x8_00;
  if (dVar6 <= 0.0) {
    func_0x000107285c60(*(undefined8 *)((long)*pdVar2 + 8),&dStack_100);
    FUN_107283888();
    func_0x0001006393ec();
  }
  else {
    dStack_f0 = pdVar5[2];
    dStack_f8 = pdVar5[1];
    dStack_e0 = pdVar5[4];
    dStack_e8 = pdVar5[3];
    dStack_d0 = pdVar5[6];
    dStack_d8 = pdVar5[5];
    appuStack_c8[0] = &PTR_FUN_110997800;
    dStack_100 = dVar6;
    pppuStack_b0 = appuStack_c8;
    func_0x000107285c60(*(undefined8 *)((long)*pdVar2 + 8),auStack_a8);
    unaff_x19[1] = dStack_f8;
    *unaff_x19 = dStack_100;
    unaff_x19[3] = dStack_e8;
    unaff_x19[2] = dStack_f0;
    unaff_x19[5] = dStack_d8;
    unaff_x19[4] = dStack_e0;
    unaff_x19[6] = dStack_d0;
    FUN_1072839b0(unaff_x19 + 7,appuStack_c8);
    func_0x000105302f48(unaff_x19 + 0xb,auStack_a8);
    *(undefined4 *)(unaff_x19 + 0xf) = 1;
    FUN_1072839fc();
    pdVar4 = pdVar3;
  }
  func_0x0001072854dc(uStack_88);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010728561c();
  func_0x000105302f48();
  *(undefined4 *)((long)pdVar4 + 0x78) = 0;
  return;
}



/* Entry: 107283788; end: 107283887;  */

void FUN_107283788(long *param_1,double *param_2)

{
  undefined1 uVar1;
  double *pdVar2;
  double *pdVar3;
  undefined8 extraout_x8;
  double *unaff_x19;
  double dVar4;
  double dStack_b0;
  double dStack_a8;
  double dStack_a0;
  double dStack_98;
  double dStack_90;
  double dStack_88;
  double dStack_80;
  undefined **appuStack_78 [3];
  undefined ***pppuStack_60;
  undefined1 auStack_58 [32];
  undefined8 uStack_38;
  
  pdVar2 = &dStack_b0;
  pdVar3 = &dStack_b0;
  func_0x000107285500();
  dVar4 = *param_2;
  uVar1 = dVar4 == 0.0;
  uStack_38 = extraout_x8;
  if (dVar4 <= 0.0) {
    func_0x000107285c60(*(undefined8 *)(*param_1 + 8),&dStack_b0);
    FUN_107283888();
    func_0x0001006393ec();
  }
  else {
    dStack_a0 = param_2[2];
    dStack_a8 = param_2[1];
    dStack_90 = param_2[4];
    dStack_98 = param_2[3];
    dStack_80 = param_2[6];
    dStack_88 = param_2[5];
    appuStack_78[0] = &PTR_FUN_110997800;
    dStack_b0 = dVar4;
    pppuStack_60 = appuStack_78;
    func_0x000107285c60(*(undefined8 *)(*param_1 + 8),auStack_58);
    unaff_x19[1] = dStack_a8;
    *unaff_x19 = dStack_b0;
    unaff_x19[3] = dStack_98;
    unaff_x19[2] = dStack_a0;
    unaff_x19[5] = dStack_88;
    unaff_x19[4] = dStack_90;
    unaff_x19[6] = dStack_80;
    FUN_1072839b0(unaff_x19 + 7,appuStack_78);
    func_0x000105302f48(unaff_x19 + 0xb,auStack_58);
    *(undefined4 *)(unaff_x19 + 0xf) = 1;
    FUN_1072839fc();
    pdVar3 = pdVar2;
  }
  func_0x0001072854dc(uStack_38);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010728561c();
  func_0x000105302f48();
  *(undefined4 *)((long)pdVar3 + 0x78) = 0;
  return;
}



/* Entry: 107283888; end: 10728389f;  */

void FUN_107283888(long param_1)

{
  func_0x000105302f48();
  *(undefined4 *)(param_1 + 0x78) = 0;
  return;
}



/* Entry: 1072838a0; end: 1072838a7;  */

void FUN_1072838a0(void)

{
  return;
}



/* Entry: 1072838a8; end: 1072838c7;  */

void FUN_1072838a8(undefined8 *param_1)

{
  func_0x000107285708();
  *param_1 = &PTR_FUN_110997800;
  return;
}



/* Entry: 1072838c8; end: 1072838e3;  */

void FUN_1072838c8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_110997800;
  return;
}



/* Entry: 1072838e4; end: 107283947;  */

undefined8 FUN_1072838e4(undefined8 param_1,double *param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  undefined8 auStack_30 [4];
  
  dVar1 = *param_2;
  dVar2 = 1.0 - dVar1;
  FUN_10725aba0(dVar1 * *param_4 + dVar2 * *param_3,dVar1 * param_4[1] + dVar2 * param_3[1],
                dVar1 * param_4[2] + dVar2 * param_3[2],dVar1 * param_4[3] + dVar2 * param_3[3],
                auStack_30);
  return auStack_30[0];
}



/* Entry: 107283948; end: 10728396f;  */

void FUN_107283948(undefined8 param_1)

{
  func_0x00010728569c();
  func_0x000107285670(param_1,&PTR_DAT_110997870);
  func_0x000107285554();
  return;
}



/* Entry: 107283970; end: 10728397b;  */

undefined ** FUN_107283970(void)

{
  return &PTR_DAT_110997870;
}



/* Entry: 10728397c; end: 1072839af;  */

void FUN_10728397c(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x000107285680();
  if ((bool)in_ZR) {
    uVar1 = 0x20;
  }
  else {
    if (param_1 == 0) {
      return;
    }
    uVar1 = 0x28;
  }
  func_0x0001072855c0(uVar1);
  return;
}



/* Entry: 1072839b0; end: 1072839fb;  */

long FUN_1072839b0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x18);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (lVar1 == param_2) {
    func_0x0001072855a0();
    func_0x0001006393a8();
  }
  else {
    *(long *)(param_1 + 0x18) = lVar1;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  return param_1;
}



/* Entry: 1072839fc; end: 107283a1f;  */

void FUN_1072839fc(void)

{
  long unaff_x19;
  
  func_0x000107285d18();
  FUN_10728397c(unaff_x19 + 0x38);
  return;
}



/* Entry: 107283a20; end: 107283a63;  */

void FUN_107283a20(long param_1)

{
  if (*(uint *)(param_1 + 0x78) != 0xffffffff) {
    func_0x000107285594((&PTR_FUN_110997880)[*(uint *)(param_1 + 0x78)]);
  }
  *(undefined4 *)(param_1 + 0x78) = 0xffffffff;
  return;
}



/* Entry: 107283a64; end: 107283a73;  */

long * FUN_107283a64(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_2[3];
  if (plVar1 == param_2) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return param_2;
    }
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
  return param_2;
}



/* Entry: 107283a74; end: 107283a97;  */

void FUN_107283a74(long param_1)

{
  if (*(char *)(param_1 + 0x1a0) == '\x01') {
    FUN_107283000();
    *(undefined1 *)(param_1 + 0x1a0) = 0;
  }
  return;
}



/* Entry: 107283a98; end: 107283bc3;  */

undefined8 * FUN_107283a98(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110996c50;
  if (param_1[0x8d] != 0) {
    func_0x000107250860();
  }
  FUN_1072508a0(param_1 + 0x8d);
  FUN_1072508cc(param_1 + 0x8d);
  FUN_10727d2fc(param_1 + 0x8a);
  FUN_10727d2fc(param_1 + 0x87);
  FUN_10727d368(param_1 + 0x45);
  FUN_10727d3c0(param_1 + 0x3c);
  FUN_10727d3e4(param_1 + 7);
  func_0x00010725b6e0(param_1 + 4);
  func_0x000107283b14(param_1 + 2);
  return param_1;
}



/* Entry: 107283bc4; end: 107283bcb;  */

void FUN_107283bc4(void)

{
  return;
}



/* Entry: 107283bcc; end: 107283bf7;  */

void FUN_107283bcc(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = param_1;
  func_0x000107285708();
  uVar2 = param_1[1];
  *puVar1 = &PTR_FUN_1109978a0;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 107283bf8; end: 107283c1b;  */

void FUN_107283bf8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_1109978a0;
  param_2[1] = uVar1;
  return;
}



/* Entry: 107283c1c; end: 107283c43;  */

void FUN_107283c1c(undefined8 param_1)

{
  func_0x00010728569c();
  func_0x000107285670(param_1,&PTR_DAT_110997900);
  func_0x000107285554();
  return;
}



/* Entry: 107283c44; end: 107283c57;  */

undefined ** FUN_107283c44(void)

{
  return &PTR_DAT_110997900;
}



/* Entry: 107283c58; end: 107283c7b;  */

void FUN_107283c58(void)

{
  func_0x000107285d0c();
  func_0x000107285af0(&PTR_DAT_110997920);
  return;
}



/* Entry: 107283c7c; end: 107283c9f;  */

void FUN_107283c7c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_DAT_110997920;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 107283ca0; end: 107283ceb;  */

void FUN_107283ca0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x000107283d3c(auStack_38,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18),param_2);
  func_0x000107283d20(*(undefined8 *)(lVar1 + 0x18),auStack_38);
  FUN_107283d64(auStack_38);
  return;
}



/* Entry: 107283cec; end: 107283d13;  */

void FUN_107283cec(undefined8 param_1)

{
  func_0x00010728569c();
  func_0x000107285670(param_1,&PTR_DAT_110997980);
  func_0x000107285554();
  return;
}



/* Entry: 107283d14; end: 107283d1f;  */

undefined ** FUN_107283d14(void)

{
  return &PTR_DAT_110997980;
}



/* Entry: 107283d20; end: 107283d63;  */

void FUN_107283d20(long *param_1,long *param_2,undefined8 param_3)

{
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000107283d2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x30))();
    return;
  }
  func_0x000104bfeb48();
  if (param_2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000107283d54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x30))(param_1,param_2,param_3);
    return;
  }
  func_0x000104bfeb48();
  func_0x000107285b10();
  func_0x000107283d88();
  return;
}



/* Entry: 107283d64; end: 107283dc3;  */

void FUN_107283d64(void)

{
  func_0x000107285b10();
  func_0x000107283d88();
  return;
}



/* Entry: 107283dc4; end: 107283dcb;  */

void FUN_107283dc4(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072856b0(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x108;
    func_0x000107269e60();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 107283dcc; end: 107283e33;  */

void FUN_107283dcc(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072856b0();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x108;
    func_0x000107269e60();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 107283e34; end: 107283e5b;  */

void FUN_107283e34(undefined8 *param_1,undefined8 *param_2)

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
      func_0x0001072859c0();
    } while (extraout_w10 != 0);
  }
  param_1[2] = param_2[2];
  return;
}


