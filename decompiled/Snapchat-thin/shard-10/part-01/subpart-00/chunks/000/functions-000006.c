/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1077b7d88; end: 1077b7d97;  */

bool FUN_1077b7d88(undefined8 param_1,long param_2)

{
  return *(char *)(param_2 + 0x18) == '\0';
}



/* Entry: 1077b801c; end: 1077b803f;  */

void FUN_1077b801c(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  func_0x0001077b8040(&uStack_11,param_1,param_2);
  return;
}



/* Entry: 1077b8158; end: 1077b8193;  */

void FUN_1077b8158(void)

{
  undefined1 auStack_30 [16];
  
  func_0x0001077b8dcc();
  func_0x0001077b9d2c();
  func_0x000107563d0c(auStack_30);
  return;
}



/* Entry: 1077b8310; end: 1077b8317;  */

void FUN_1077b8310(void)

{
  return;
}



/* Entry: 1077b8698; end: 1077b8773;  */

undefined8 * FUN_1077b8698(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  func_0x00010737530c(param_1 + 1,param_2 + 1);
  param_1[4] = param_2[4];
  return param_1;
}



/* Entry: 1077b8a44; end: 1077b8aeb;  */

void FUN_1077b8a44(long param_1,long param_2)

{
  undefined8 uVar1;
  
  FUN_1077b8698();
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  return;
}



/* Entry: 1077b8c5c; end: 1077b8ddf;  */

void FUN_1077b8c5c(void)

{
  return;
}



/* Entry: 1077b9e6c; end: 1077b9e93;  */

void FUN_1077b9e6c(undefined8 param_1)

{
  func_0x0001077beab8();
  func_0x0001077bea20(param_1,&PTR_DAT_1109dbd68);
  func_0x0001077be974();
  return;
}



/* Entry: 1077ba390; end: 1077ba567;  */

void FUN_1077ba390(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x0001077bebe8();
  if ((bool)in_ZR) {
    uVar1 = 0x20;
  }
  else {
    if (param_1 == 0) {
      return;
    }
    uVar1 = 0x28;
  }
  func_0x0001077bea30(uVar1);
  return;
}



/* Entry: 1077ba9ac; end: 1077baa47;  */

void FUN_1077ba9ac(long *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar6 = (undefined8 *)*param_1;
  puVar1 = (undefined8 *)param_1[1];
  puVar7 = (undefined8 *)(*(long *)(param_2 + 8) + (((long)puVar1 - (long)puVar6) / -0x28) * 0x28);
  puVar2 = puVar7;
  for (puVar4 = puVar6; puVar4 != puVar1; puVar4 = puVar4 + 5) {
    uVar8 = puVar4[1];
    uVar5 = *puVar4;
    uVar9 = *(undefined8 *)((long)puVar4 + 0xd);
    *(undefined8 *)((long)puVar2 + 0x15) = *(undefined8 *)((long)puVar4 + 0x15);
    *(undefined8 *)((long)puVar2 + 0xd) = uVar9;
    puVar2[1] = uVar8;
    *puVar2 = uVar5;
    uVar5 = puVar4[4];
    puVar4[4] = 0;
    puVar2[4] = uVar5;
    puVar2 = puVar2 + 5;
  }
  for (; puVar6 != puVar1; puVar6 = puVar6 + 5) {
    func_0x0001077baab4(puVar6 + 4);
  }
  *(undefined8 **)(param_2 + 8) = puVar7;
  lVar3 = *param_1;
  *param_1 = (long)puVar7;
  param_1[1] = lVar3;
  func_0x0001077be9e8();
  return;
}



/* Entry: 1077baccc; end: 1077bad1b;  */

void FUN_1077baccc(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 8) - (param_1[1] - *param_1);
  _memcpy(lVar1);
  *(long *)(param_2 + 8) = lVar1;
  param_1[1] = *param_1;
  *param_1 = *(long *)(param_2 + 8);
  func_0x0001077be9e8();
  return;
}



/* Entry: 1077bb134; end: 1077bb32f;  */

void FUN_1077bb134(undefined8 param_1,undefined8 param_2,ulong param_3,uint param_4,ulong param_5)

{
  double *pdVar1;
  uint uVar2;
  char cVar3;
  undefined1 in_ZR;
  char cVar4;
  bool bVar5;
  bool bVar6;
  long extraout_x8;
  long lVar7;
  long lVar8;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x24;
  double dVar9;
  double dVar10;
  double unaff_d8;
  double unaff_d9;
  double unaff_d11;
  double unaff_d12;
  double unaff_d14;
  double unaff_d15;
  
  func_0x0001077be874();
  func_0x0001077be76c();
  do {
    func_0x0001077beaac();
    if ((bool)in_ZR) {
      return;
    }
    uVar2 = param_4 - (int)param_3;
    bVar5 = *(byte *)(unaff_x21 + 6) <= uVar2;
    bVar6 = uVar2 == *(byte *)(unaff_x21 + 6);
    if (!bVar5 || bVar6) {
      lVar7 = *unaff_x20;
      for (; (uint)param_3 <= param_4; param_3 = (ulong)((uint)param_3 + 1)) {
        pdVar1 = (double *)(extraout_x8 + (param_3 & 0xffffffff) * 0x10);
        dVar9 = *pdVar1 - unaff_d9;
        dVar10 = pdVar1[1] - unaff_d8;
        if ((dVar10 * dVar10 + dVar9 * dVar9 <= unaff_d11) &&
           (lVar8 = *(long *)(lVar7 + 0x38) +
                    (ulong)*(uint *)(*unaff_x21 + (param_3 & 0xffffffff) * 4) * 0x28,
           (*(byte *)(lVar8 + 0x1c) & 1) == 0)) {
          *(int *)unaff_x20[1] = *(int *)unaff_x20[1] + *(int *)(lVar8 + 0x10);
        }
      }
      return;
    }
    func_0x0001077be79c();
    if ((!bVar5 || bVar6) &&
       (lVar7 = *(long *)(*unaff_x20 + 0x38) + (ulong)*(uint *)(*unaff_x21 + unaff_x24 * 4) * 0x28,
       (*(byte *)(lVar7 + 0x1c) & 1) == 0)) {
      *(int *)unaff_x20[1] = *(int *)unaff_x20[1] + *(int *)(lVar7 + 0x10);
    }
    in_ZR = (param_5 & 0xff) == 0;
    cVar3 = '\0';
    bVar6 = false;
    cVar4 = '\0';
    if ((bool)in_ZR) {
      func_0x0001077beb04();
      if (!bVar6 || (bool)in_ZR) goto LAB_1077bb1c8;
LAB_1077bb200:
      func_0x0001077bebcc();
      if (cVar3 != cVar4) {
        return;
      }
    }
    else {
      cVar4 = NAN(unaff_d12) || NAN(unaff_d15);
      in_ZR = unaff_d12 == unaff_d15;
      cVar3 = unaff_d12 < unaff_d15;
      if (unaff_d12 <= unaff_d15) {
LAB_1077bb1c8:
        FUN_1077bb134();
        if ((param_5 & 0xff) == 0) goto LAB_1077bb200;
      }
      in_ZR = unaff_d14 == unaff_d15;
      if (unaff_d14 < unaff_d15) {
        return;
      }
    }
    param_3 = (ulong)((int)unaff_x24 + 1);
    param_5 = (ulong)((uint)param_5 ^ 1);
  } while( true );
}



/* Entry: 1077bb6f8; end: 1077bb83f;  */

void FUN_1077bb6f8(double param_1,double param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6,ulong param_7,uint param_8,byte param_9)

{
  double *pdVar1;
  uint uVar2;
  bool bVar3;
  undefined1 in_ZR;
  bool bVar4;
  undefined1 in_CY;
  bool bVar5;
  bool bVar6;
  long extraout_x8;
  double dVar7;
  double dVar8;
  
  do {
    func_0x0001077beaac();
    if ((bool)in_ZR) {
      return;
    }
    func_0x0001077be8cc();
    if (!(bool)in_CY || (bool)in_ZR) {
      for (; (uint)param_7 <= param_8; param_7 = (ulong)((uint)param_7 + 1)) {
        pdVar1 = (double *)(*(long *)(param_5 + 0x18) + (param_7 & 0xffffffff) * 0x10);
        dVar7 = *pdVar1;
        dVar8 = pdVar1[1];
        bVar4 = false;
        bVar5 = true;
        if (param_1 <= dVar7) {
          bVar4 = false;
          bVar5 = true;
          if (!NAN(dVar7) && !NAN(param_3)) {
            bVar4 = dVar7 == param_3;
            bVar5 = param_3 <= dVar7;
          }
        }
        bVar3 = true;
        bVar6 = false;
        if (!bVar5 || bVar4) {
          bVar3 = false;
          bVar6 = true;
          if (!NAN(dVar8) && !NAN(param_2)) {
            bVar3 = dVar8 < param_2;
            bVar6 = false;
          }
        }
        bVar4 = false;
        bVar5 = true;
        if (bVar3 == bVar6) {
          bVar4 = false;
          bVar5 = true;
          if (!NAN(dVar8) && !NAN(param_4)) {
            bVar4 = dVar8 == param_4;
            bVar5 = param_4 <= dVar8;
          }
        }
        if (!bVar5 || bVar4) {
          func_0x0001077be964();
          func_0x0001077bb840();
        }
      }
      return;
    }
    uVar2 = (int)param_7 + param_8 >> 1;
    pdVar1 = (double *)(extraout_x8 + (ulong)uVar2 * 0x10);
    dVar7 = *pdVar1;
    dVar8 = pdVar1[1];
    bVar4 = false;
    bVar5 = true;
    if (param_1 <= dVar7) {
      bVar4 = false;
      bVar5 = true;
      if (!NAN(dVar7) && !NAN(param_3)) {
        bVar4 = dVar7 == param_3;
        bVar5 = param_3 <= dVar7;
      }
    }
    bVar3 = true;
    bVar6 = false;
    if (!bVar5 || bVar4) {
      bVar3 = false;
      bVar6 = true;
      if (!NAN(dVar8) && !NAN(param_2)) {
        bVar3 = dVar8 < param_2;
        bVar6 = false;
      }
    }
    bVar4 = false;
    bVar5 = true;
    if (bVar3 == bVar6) {
      bVar4 = false;
      bVar5 = true;
      if (!NAN(dVar8) && !NAN(param_4)) {
        bVar4 = dVar8 == param_4;
        bVar5 = param_4 <= dVar8;
      }
    }
    if (!bVar5 || bVar4) {
      func_0x0001077be954();
      func_0x0001077bb840();
    }
    if (param_9 == 0) {
      if (param_1 <= dVar7) goto LAB_1077bb798;
LAB_1077bb7d8:
      in_CY = param_3 <= dVar7;
      in_ZR = dVar7 == param_3;
      if ((bool)in_CY && !(bool)in_ZR) {
        return;
      }
    }
    else {
      if (param_2 <= dVar8) {
LAB_1077bb798:
        FUN_1077bb6f8(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar2 - 1,param_9 ^ 1)
        ;
        if (param_9 == 0) goto LAB_1077bb7d8;
      }
      in_CY = param_4 <= dVar8;
      in_ZR = dVar8 == param_4;
      if ((bool)in_CY && !(bool)in_ZR) {
        return;
      }
    }
    func_0x0001077bebb4();
  } while( true );
}



/* Entry: 1077bc0c0; end: 1077bc20f;  */

/* WARNING: Possible PIC construction at 0x0001077bc2d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001077bc3ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077bc2dc) */
/* WARNING: Removing unreachable block (ram,0x0001077bc320) */
/* WARNING: Removing unreachable block (ram,0x0001077bc2e4) */
/* WARNING: Removing unreachable block (ram,0x0001077bc3b0) */
/* WARNING: Type propagation algorithm not settling */

undefined4 *
FUN_1077bc0c0(undefined4 *param_1,undefined8 *param_2,double *******param_3,undefined4 *param_4,
             ulong param_5,undefined8 param_6)

{
  long lVar1;
  char cVar2;
  char cVar3;
  undefined1 uVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  double *******pppppppdVar10;
  double *******pppppppdVar11;
  undefined4 *puVar12;
  ulong uVar13;
  ulong extraout_x8;
  undefined8 *puVar14;
  undefined4 *unaff_x19;
  long unaff_x20;
  uint uVar15;
  ulong uVar16;
  double *******pppppppdVar17;
  undefined4 *puVar18;
  double dVar19;
  undefined8 unaff_d8;
  double dVar20;
  double unaff_d9;
  double unaff_d12;
  double unaff_d14;
  double unaff_d15;
  undefined8 *puStack_168;
  double *******pppppppdStack_160;
  ulong uStack_158;
  undefined4 *puStack_150;
  undefined8 uStack_148;
  undefined4 uStack_13c;
  undefined8 *puStack_138;
  uint *puStack_130;
  undefined8 **ppuStack_128;
  undefined1 *puStack_120;
  undefined1 uStack_115;
  uint uStack_114;
  double dStack_110;
  undefined8 uStack_108;
  double *******pppppppdStack_e0;
  undefined4 *puStack_d8;
  double ******ppppppdStack_d0;
  undefined *puStack_c8;
  double ******appppppdStack_b8 [2];
  undefined4 auStack_a8 [2];
  ulong uStack_a0;
  undefined8 uStack_68;
  double dStack_60;
  double dStack_58;
  ulong uStack_48;
  
  puVar18 = param_1;
  pppppppdVar10 = param_3;
  func_0x0001077be83c();
  uVar4 = *(int *)(pppppppdVar10 + 2) != 0;
  uVar6 = *(int *)(pppppppdVar10 + 2) == 1;
  if ((bool)uVar6) {
    uVar4 = extraout_x8 <= *(ulong *)PTR____stack_chk_guard_11034bdc0;
    if (*(ulong *)PTR____stack_chk_guard_11034bdc0 == extraout_x8) {
      func_0x0001072747cc(param_1,*(long *)*param_2 + (ulong)*(uint *)((long)param_3 + 0x14) * 0x70)
      ;
      func_0x0001072693c4();
      func_0x000107268400(param_1 + 8,unaff_x20 + 0x20);
      func_0x000107269bac(unaff_x19 + 0xc,unaff_x20 + 0x30);
      return unaff_x19;
    }
  }
  else {
    unaff_d8 = 0x4076800000000000;
    unaff_d9 = ((double)*param_3 + -0.5) * 360.0;
    dVar19 = ((180.0 - (double)param_3[1] * 360.0) * 3.141592653589793) / 180.0;
    uStack_48 = extraout_x8;
    _exp();
    _atan();
    uStack_68._0_4_ = 6;
    dStack_58 = (dVar19 * 360.0) / 3.141592653589793 + -90.0;
    dStack_60 = unaff_d9;
    func_0x0001077bbab8(appppppdStack_b8,param_3);
    uStack_a0 = (ulong)*(uint *)((long)param_3 + 0x14);
    auStack_a8[0] = 3;
    param_2 = &uStack_68;
    pppppppdVar10 = appppppdStack_b8;
    param_4 = auStack_a8;
    func_0x00010726924c(param_1);
    func_0x000104c319e0(auStack_a8);
    func_0x0001077becd8();
    puVar18 = (undefined4 *)&uStack_68;
    func_0x000104c3365c();
    func_0x0001077be7ec(uStack_48);
    if ((bool)uVar6) {
      return puVar18;
    }
  }
  uVar6 = 0;
  ___stack_chk_fail();
  puVar8 = &uStack_68;
  func_0x000104c3365c();
  func_0x0001077be8c4();
  puStack_c8 = &UNK_1077bc210;
  uStack_13c = SUB84(param_4,0);
  puStack_150 = &uStack_13c;
  uStack_114 = (uint)param_2;
  puVar9 = puVar8 + 0xd;
  puStack_168 = puVar8;
  pppppppdStack_160 = pppppppdVar10;
  uStack_158 = param_5;
  uStack_148 = param_6;
  dStack_110 = unaff_d9;
  uStack_108 = unaff_d8;
  pppppppdStack_e0 = param_3;
  puStack_d8 = puVar18;
  ppppppdStack_d0 = (double ******)&stack0xfffffffffffffff0;
  func_0x0001077bb658(puVar9,uStack_114 & 0x1f);
  pppppppdVar17 = &ppppppdStack_d0;
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0001077be94c();
    func_0x0001077be84c();
    puVar8 = puVar9;
  }
  else {
    uVar16 = (ulong)param_2 >> 5 & 0x7ffffff;
    lVar1 = puVar9[10];
    uVar13 = (puVar9[0xb] - lVar1) / 0x28;
    uVar4 = uVar16 <= uVar13;
    uVar6 = uVar13 == uVar16;
    if ((bool)uVar4 && !(bool)uVar6) {
      dVar20 = (double)NEON_ucvtf((ulong)*(ushort *)((long)puVar8 + 0x12));
      dVar19 = (double)(ulong)*(ushort *)((long)puVar8 + 0x14);
      func_0x0001077beba4(dVar19);
      puVar14 = (undefined8 *)(lVar1 + uVar16 * 0x28);
      uStack_115 = 0;
      puVar8 = puVar9 + 3;
      puStack_130 = &uStack_114;
      ppuStack_128 = &puStack_168;
      puStack_120 = &uStack_115;
      puStack_138 = puVar8;
      func_0x0001077bea3c(puVar9[4],*puVar14,puVar14[1],dVar20 / (dVar19 * unaff_d9));
      pppppppdVar10 = (double *******)0x0;
      param_5 = 0;
      puVar18 = (undefined4 *)&UNK_1077bc2dc;
      goto code_r0x0001077bc344;
    }
    func_0x0001077be94c();
    func_0x0001077be84c();
    puVar8 = puVar9;
  }
  func_0x0001077be824();
  func_0x0001077beb68();
  puVar18 = (undefined4 *)&UNK_1077bc344;
  func_0x0001077be8c4();
code_r0x0001077bc344:
  func_0x0001077be874();
  pppppppdVar11 = pppppppdVar10;
  puVar12 = param_4;
  uVar13 = param_5;
  pppppppdStack_e0 = pppppppdVar17;
  puStack_d8 = puVar18;
  func_0x0001077be76c();
  do {
    func_0x0001077beaac();
    if ((bool)uVar6) {
      return (undefined4 *)puVar8;
    }
    func_0x0001077be8cc();
    if (!(bool)uVar4 || (bool)uVar6) {
      while( true ) {
        uVar15 = (uint)pppppppdVar10;
        bVar5 = (uint)param_4 <= uVar15;
        bVar7 = uVar15 == (uint)param_4;
        if (bVar5 && !bVar7) break;
        func_0x0001077be800();
        if (!bVar5 || bVar7) {
          func_0x0001077be964();
          func_0x0001077bc3f4();
        }
        pppppppdVar10 = (double *******)(ulong)(uVar15 + 1);
      }
      return (undefined4 *)puVar8;
    }
    func_0x0001077be79c();
    if (!(bool)uVar4 || (bool)uVar6) {
      func_0x0001077be954();
      func_0x0001077bc3f4();
    }
    uVar6 = (param_5 & 0xff) == 0;
    cVar2 = '\0';
    uVar4 = false;
    cVar3 = '\0';
    if ((bool)uVar6) {
      func_0x0001077beb04();
      if (!(bool)uVar4 || (bool)uVar6) break;
      func_0x0001077bebcc();
      if (cVar2 != cVar3) {
        return (undefined4 *)puVar8;
      }
    }
    else {
      uVar4 = unaff_d15 <= unaff_d12;
      uVar6 = unaff_d12 == unaff_d15;
      if (!(bool)uVar4 || (bool)uVar6) break;
      uVar4 = unaff_d15 <= unaff_d14;
      uVar6 = unaff_d14 == unaff_d15;
      if (unaff_d14 < unaff_d15) {
        return (undefined4 *)puVar8;
      }
    }
    func_0x0001077bebb4();
  } while( true );
  param_5 = uVar13;
  param_4 = puVar12;
  pppppppdVar10 = pppppppdVar11;
  func_0x0001077be7c0();
  puVar18 = (undefined4 *)&UNK_1077bc3b0;
  pppppppdVar17 = (double *******)&pppppppdStack_e0;
  goto code_r0x0001077bc344;
}



/* Entry: 1077bc658; end: 1077bc66b;  */

void FUN_1077bc658(void)

{
  func_0x0001077bd418();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077bd160; end: 1077bd20f;  */

long FUN_1077bd160(long *param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar3 = param_1[1];
  if ((uVar3 != 0) && (param_1[3] != 0)) {
    uVar4 = uVar3 - 1;
    if ((uVar3 & uVar4) == 0) {
      uVar5 = uVar4 & param_2;
    }
    else {
      uVar5 = param_2;
      if (uVar3 <= param_2) {
        uVar5 = 0;
        if (uVar3 != 0) {
          uVar5 = param_2 / uVar3;
        }
        uVar5 = param_2 - uVar5 * uVar3;
      }
    }
    plVar2 = *(long **)(*param_1 + uVar5 * 8);
    if (plVar2 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar2 = (long *)*plVar2;
        if (plVar2 == (long *)0x0) {
          return 0;
        }
        uVar6 = plVar2[1];
        if (uVar6 != param_2) break;
        if (plVar2[2] == param_2) {
          return (long)plVar2;
        }
      }
      if ((uVar3 & uVar4) == 0) {
        uVar6 = uVar6 & uVar4;
      }
      else if (uVar3 <= uVar6) {
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = uVar6 / uVar3;
        }
        uVar6 = uVar6 - uVar1 * uVar3;
      }
    } while (uVar6 == uVar5);
  }
  return 0;
}



/* Entry: 1077bd4a0; end: 1077bd52b;  */

undefined8 * FUN_1077bd4a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  int extraout_w10;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[2] = param_2[2];
  uVar1 = param_2[3];
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  param_1[3] = uVar1;
  lVar2 = param_2[6];
  uVar1 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar1;
  if (lVar2 != 0) {
    do {
      func_0x0001077be93c();
    } while (extraout_w10 != 0);
  }
  func_0x0001077bd444(param_1 + 7,param_2 + 7);
  return param_1;
}



/* Entry: 1077bd8b8; end: 1077bd8db;  */

undefined8 FUN_1077bd8b8(undefined8 param_1)

{
  func_0x0001077bebf8();
  func_0x0001077bdbb0();
  return param_1;
}



/* Entry: 1077bda88; end: 1077bdad3;  */

void FUN_1077bda88(long param_1)

{
  undefined1 auStack_30 [16];
  
  func_0x0001072c8ed8(auStack_30,param_1 + 0x28);
  func_0x0001077bb620(*(undefined8 *)(param_1 + 0x20),auStack_30);
  func_0x0001077beb10();
  return;
}



/* Entry: 1077bdc44; end: 1077bdc67;  */

void FUN_1077bdc44(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_1109dbfa8;
  lVar2 = *(long *)(param_1 + 0x10);
  uVar3 = *puVar1;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x0001077be93c();
    } while (extraout_w10 != 0);
  }
  lVar2 = puVar1[3];
  uVar3 = puVar1[2];
  param_2[4] = puVar1[3];
  param_2[3] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x0001077be93c();
    } while (extraout_w10_00 != 0);
  }
  return;
}



/* Entry: 1077be1b4; end: 1077be1c3;  */

void FUN_1077be1b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001077be1bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1077be37c; end: 1077be39f;  */

void FUN_1077be37c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar4;
  
  puVar1 = param_1;
  func_0x0001077bea4c();
  puVar2 = param_1 + 1;
  *puVar1 = &PTR_DAT_1109dc0f0;
  lVar3 = param_1[2];
  uVar4 = *puVar2;
  puVar1[2] = param_1[2];
  puVar1[1] = uVar4;
  if (lVar3 != 0) {
    do {
      func_0x0001077be93c();
    } while (extraout_w10 != 0);
  }
  lVar3 = puVar2[3];
  uVar4 = puVar2[2];
  puVar1[4] = puVar2[3];
  puVar1[3] = uVar4;
  if (lVar3 != 0) {
    do {
      func_0x0001077be93c();
    } while (extraout_w10_00 != 0);
  }
  return;
}



/* Entry: 1077be654; end: 1077be657;  */

void FUN_1077be654(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077be718; end: 1077be743;  */

long * FUN_1077be718(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    func_0x0001077be700();
  }
  return param_1;
}



/* Entry: 1077bf138; end: 1077bf147;  */

bool FUN_1077bf138(undefined8 param_1,long param_2)

{
  return *(char *)(param_2 + 0x18) == '\x01';
}



/* Entry: 1077bf3bc; end: 1077bf3ff;  */

undefined8 * FUN_1077bf3bc(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1109dc2c8;
  func_0x0001077bf424(param_1 + 3);
  return param_1;
}



/* Entry: 1077bf4bc; end: 1077bf4eb;  */

void FUN_1077bf4bc(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_DAT_1109dc318;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 1077bf8c0; end: 1077bf8c3;  */

undefined8 FUN_1077bf8c0(undefined8 *param_1)

{
  undefined8 extraout_x8;
  undefined8 unaff_x19;
  
  func_0x000107456e48(param_1 + 0x18);
  func_0x0001077b732c();
  *param_1 = extraout_x8;
  func_0x0001072c9240(param_1 + 0xd);
  func_0x000104c2f714(param_1 + 2);
  return unaff_x19;
}



/* Entry: 1077bfca8; end: 1077bfcf7;  */

undefined8 * FUN_1077bfca8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x0001074f7454(&uStack_30);
  func_0x0001074fffc4(&uStack_40);
  return param_1;
}



/* Entry: 1077bff50; end: 1077bff7f;  */

undefined8 * FUN_1077bff50(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0xea0ea0ea0ea0eb) {
    puVar1 = (undefined8 *)(param_2 * 0x118);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1109dc430;
  func_0x0001077bffe8(param_1 + 3);
  return param_1;
}



/* Entry: 1077c00f0; end: 1077c0107;  */

void FUN_1077c00f0(undefined8 *param_1)

{
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x0001000d03a8(*param_1);
  func_0x000104c2feb0();
  *(undefined8 *)(unaff_x19 + 0x30) = 0xffffffffffffffff;
  func_0x000104c2fe38();
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x20;
  return;
}



/* Entry: 1077c04b4; end: 1077c04bf;  */

undefined ** FUN_1077c04b4(void)

{
  return &PTR_DAT_1109dc518;
}



/* Entry: 1077c07c4; end: 1077c087b;  */

void FUN_1077c07c4(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    func_0x00010750fed8();
    *(undefined1 *)(param_1 + 0x70) = 1;
    return;
  }
  return;
}



/* Entry: 1077c0a70; end: 1077c0a73;  */

undefined8 * FUN_1077c0a70(undefined8 *param_1)

{
  func_0x0001077b68e0(param_1 + 7);
  *param_1 = &PTR_DAT_1109db730;
  func_0x000107783268(param_1 + 5);
  func_0x0001074f7454(param_1 + 1);
  return param_1;
}



/* Entry: 1077c0d80; end: 1077c0da7;  */

long FUN_1077c0d80(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1077c0ecc; end: 1077c0ed7;  */

undefined8 FUN_1077c0ecc(long param_1)

{
  undefined8 *puVar1;
  undefined8 extraout_x8;
  undefined8 unaff_x19;
  
  puVar1 = (undefined8 *)(param_1 + 0x18);
  func_0x000107510994(param_1 + 0xa8);
  func_0x0001073267a8(param_1 + 0x98);
  func_0x0001077b732c();
  *puVar1 = extraout_x8;
  func_0x0001072c9240(puVar1 + 0xd);
  func_0x000104c2f714(puVar1 + 2);
  return unaff_x19;
}



/* Entry: 1077c1008; end: 1077c101b;  */

void FUN_1077c1008(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077c1228; end: 1077c1243;  */

void FUN_1077c1228(void)

{
  func_0x0001077c1418();
  func_0x0001077c1244();
  return;
}



/* Entry: 1077c16dc; end: 1077c1707;  */

long FUN_1077c16dc(long param_1)

{
  func_0x00010738ec40(param_1 + 0x20);
  func_0x0001077c101c(param_1 + 0x10);
  return param_1;
}



/* Entry: 1077c1be0; end: 1077c1c1b;  */

void FUN_1077c1be0(undefined8 *param_1)

{
  char *pcVar1;
  char *extraout_x8;
  
  pcVar1 = (char *)*param_1;
  while (*pcVar1 < -1) {
    func_0x0001077c28c4();
    pcVar1 = extraout_x8;
  }
  if (*pcVar1 != -1) {
    return;
  }
  *param_1 = 0;
  return;
}



/* Entry: 1077c1e24; end: 1077c1e4f;  */

long * FUN_1077c1e24(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)(param_1 + 0x18);
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x00010738ec04(plVar1);
    __ZdlPv(*plVar1 + -8);
  }
  return plVar1;
}



/* Entry: 1077c20bc; end: 1077c20f3;  */

undefined8 FUN_1077c20bc(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x88;
  __Znwm(0x88);
  func_0x0001077c22f8();
  return uVar1;
}



/* Entry: 1077c2424; end: 1077c244f;  */

undefined8 * FUN_1077c2424(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109dc790;
  func_0x0001077c239c(param_1 + 1);
  return param_1;
}



/* Entry: 1077c25b8; end: 1077c25d7;  */

void FUN_1077c25b8(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  func_0x0001077c25d8(param_1,param_2,&uStack_11);
  return;
}



/* Entry: 1077c2910; end: 1077c2a03;  */

undefined8 *
FUN_1077c2910(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x0001077c2a04(auStack_50,param_2);
  func_0x0001077c2fe0(&uStack_40,auStack_50);
  *param_1 = &PTR_DAT_1109db730;
  param_1[2] = uStack_38;
  param_1[1] = uStack_40;
  uStack_40 = 0;
  uStack_38 = 0;
  param_1[3] = &PTR_PTR_1131ada40;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = &UNK_107783258;
  func_0x0001074f7454(&uStack_40);
  func_0x0001077c3444();
  *param_1 = &PTR_DAT_1109dc820;
  func_0x0001077c0054(param_1 + 8,param_3 + 8);
  param_1[0x17] = 0;
  param_1[0x18] = param_4;
  param_1[0x19] = param_5;
  func_0x00010726ed14(param_1 + 0x1a);
  param_1[0x1c] = param_1;
  return param_1;
}



/* Entry: 1077c2e2c; end: 1077c2e33;  */

void FUN_1077c2e2c(long param_1)

{
  long extraout_x8;
  int extraout_w11;
  
  func_0x000107346060(param_1 + 0xd0);
  if (extraout_x8 != 0) {
    do {
      func_0x00010734740c();
    } while (extraout_w11 != 0);
  }
  func_0x0001073269a0();
  func_0x0001073460e8();
  return;
}



/* Entry: 1077c2f9c; end: 1077c2faf;  */

void FUN_1077c2f9c(void)

{
  func_0x0001077c2fc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077c33c0; end: 1077c33cb;  */

undefined ** FUN_1077c33c0(void)

{
  return &PTR_DAT_1109dc928;
}



/* Entry: 1077c355c; end: 1077c35b7;  */

undefined8 *
FUN_1077c355c(undefined4 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uStack_24;
  
  *param_2 = 0;
  uStack_24 = param_1;
  func_0x0001077c35b8(param_2 + 1,param_3,param_4,&uStack_24);
  return param_2;
}



/* Entry: 1077c3854; end: 1077c3897;  */

void FUN_1077c3854(long param_1)

{
  func_0x0001077c3a1c();
  func_0x0001077c52ec();
  func_0x0001077c3a54();
  if (param_1 != 0) {
    func_0x0001077c3a10();
  }
  return;
}



/* Entry: 1077c39b8; end: 1077c39db;  */

undefined8 FUN_1077c39b8(undefined8 param_1)

{
  func_0x0001077c39dc(param_1,0);
  return param_1;
}



/* Entry: 1077c4058; end: 1077c406b;  */

void FUN_1077c4058(void)

{
  func_0x0001077c3f44();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077c5258; end: 1077c52eb;  */

void FUN_1077c5258(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *param_2 = 0;
  func_0x0001077c39dc(param_1 + 0x38,uVar1);
  *(long **)(param_1[0x38] + 0x10) = param_1 + 3;
                    /* WARNING: Could not recover jumptable at 0x0001077ca0b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x48))(param_1);
  return;
}



/* Entry: 1077c5aac; end: 1077c5bdf;  */

void FUN_1077c5aac(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  undefined8 *extraout_x8_01;
  long *plVar8;
  ulong uVar9;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  long *plStack_b8;
  undefined1 *puStack_b0;
  undefined *puStack_a8;
  long *plStack_a0;
  undefined1 auStack_90 [56];
  undefined8 uStack_58;
  
  func_0x0001077c9d00();
  uStack_58 = extraout_x8;
  func_0x0001077ca224(*(undefined8 *)(param_1 + 0xa8));
  puVar1 = (undefined8 *)*plStack_a0;
  lVar2 = plStack_a0[1];
  func_0x0001077ca1a0();
  uVar4 = lVar2 - (long)puVar1 >> 4;
  while (puVar3 = puVar1, uVar4 != 0) {
    uVar9 = uVar4 >> 1;
    uVar6 = puVar3[uVar9 * 2];
    func_0x000104c2fc44(uVar6,auStack_90);
    puVar1 = puVar3 + uVar9 * 2 + 2;
    uVar4 = uVar4 + ~uVar9;
    if ((int)uVar6 == 0) {
      puVar1 = puVar3;
      uVar4 = uVar9;
    }
  }
  func_0x0001077ca2a4();
  uVar5 = puVar3 == (undefined8 *)plStack_a0[1];
  if (!(bool)uVar5) {
    plVar8 = (long *)*puVar3;
    func_0x0001077ca1a0();
    func_0x000104c32db4(plVar8,auStack_90);
    plVar7 = plVar8;
    func_0x0001077ca2a4();
    if (((ulong)plVar8 & 1) != 0) {
      func_0x0001077ca2d0();
      goto LAB_1077c5b78;
    }
  }
  plVar7 = plStack_a0;
  func_0x0001077c5c14(plVar7,puVar3,*param_2);
LAB_1077c5b78:
  func_0x0001077ca20c();
  func_0x0001077c9e14();
  (*extraout_x8_00)();
  func_0x0001077c9e6c();
  func_0x0001077c9cec(uStack_58);
  if (!(bool)uVar5) {
    ___stack_chk_fail();
    func_0x0001077ca2a4();
    func_0x0001077c9e6c();
    func_0x0001077c9da4();
    puStack_a8 = &UNK_1077c5be0;
    puStack_c0 = (undefined8 *)(param_1 + 0xa8);
    plStack_b8 = plVar7;
    puStack_b0 = &stack0xfffffffffffffff0;
    func_0x0001077c98e8(&uStack_d0);
    extraout_x8_01[1] = uStack_c8;
    *extraout_x8_01 = uStack_d0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    func_0x0001077c9e6c();
    return;
  }
  return;
}



/* Entry: 1077c5ef8; end: 1077c5f2f;  */

void FUN_1077c5ef8(undefined8 param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  
  func_0x0001077c9de8();
  func_0x0001077ca29c();
  func_0x0001077ca0b8();
  func_0x0001077ca268(*(undefined8 *)(extraout_x8 + 0x18));
  func_0x0001077ca0b8();
                    /* WARNING: Could not recover jumptable at 0x0001077ca0b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(extraout_x8_00 + 0x48))(param_1,&UNK_10de9dfa0);
  return;
}



/* Entry: 1077c6208; end: 1077c62eb;  */

void FUN_1077c6208(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  ulong uVar4;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x9;
  int extraout_w11;
  long unaff_x19;
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [56];
  undefined8 uStack_38;
  
  func_0x0001077c9d00();
  uStack_38 = extraout_x8;
  func_0x000107781c60(auStack_70,param_2);
  uVar4 = unaff_x19 + 0xe0;
  FUN_1077c95fc(uVar4,auStack_70);
  uVar1 = *(long *)(unaff_x19 + 0xe8) - *(long *)(unaff_x19 + 0xe0) >> 3;
  uVar2 = uVar1 <= uVar4;
  uVar3 = uVar4 == uVar1;
  if (!(bool)uVar2) {
    func_0x0001077ca22c(*(undefined8 *)(unaff_x19 + 0xf8));
    func_0x0001077ca2f8();
    if ((bool)uVar2) goto LAB_1077c62cc;
    func_0x0001077ca0f4();
    if (extraout_x9 != 0) {
      do {
        func_0x0001077c9f04();
      } while (extraout_w11 != 0);
    }
    func_0x0001077ca2d8();
    func_0x0001073ad4c4();
    func_0x0001074f4098((undefined8 *)(unaff_x19 + 0xf8),auStack_90);
    func_0x0001077c9eb8();
  }
  func_0x0001077ca090();
  func_0x0001077c9e90();
  UNRECOVERED_JUMPTABLE = *(code **)(extraout_x8_00 + 0x48);
  func_0x0001077c9cec(uStack_38);
  if ((bool)uVar3) {
                    /* WARNING: Could not recover jumptable at 0x0001077c62c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  ___stack_chk_fail();
LAB_1077c62cc:
  func_0x0001077c9cd8();
                    /* WARNING: Does not return */
  UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1077c62d4);
  (*UNRECOVERED_JUMPTABLE)();
}



/* Entry: 1077c64dc; end: 1077c650b;  */

void FUN_1077c64dc(undefined8 *param_1,undefined8 *param_2)

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
      func_0x0001077c9f5c();
    } while (extraout_w10 != 0);
  }
  param_1[2] = param_2[2];
  return;
}



/* Entry: 1077c6cec; end: 1077c6ddb;  */

/* WARNING: Possible PIC construction at 0x0001077c6d54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077c6d58) */
/* WARNING: Removing unreachable block (ram,0x0001077c6d64) */

void FUN_1077c6cec(undefined8 *param_1,ulong *param_2,ulong *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong *unaff_x19;
  ulong *unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar5;
  
  puVar1 = &stack0xfffffffffffffff0;
  uVar3 = *param_2;
  func_0x0001077c9e74();
  iVar2 = (int)*param_3;
  func_0x0001077c9f84();
  if ((uVar3 & 1) != 0) {
    puVar4 = param_3;
    if (iVar2 == 0) {
      unaff_x30 = 0x1077c6d58;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
      puVar4 = param_2;
      unaff_x19 = param_2;
      unaff_x20 = param_3;
      unaff_x29 = puVar1;
    }
code_r0x0001077c6ff4:
    *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    uVar5 = *param_1;
    *(undefined8 *)((long)register0x00000008 + -0x28) = param_1[1];
    *(undefined8 *)((long)register0x00000008 + -0x30) = uVar5;
    *param_1 = 0;
    param_1[1] = 0;
    func_0x00010747cf60(param_1,puVar4);
    func_0x0001077ca318();
    func_0x00010747cf60();
    func_0x0001077c9f94();
    return;
  }
  if (iVar2 != 0) {
    func_0x0001077ca1b8();
    iVar2 = (int)*param_2;
    func_0x0001077c9e74();
    puVar4 = param_2;
    if (iVar2 != 0) goto code_r0x0001077c6ff4;
  }
  return;
}



/* Entry: 1077c71c4; end: 1077c71d7;  */

void FUN_1077c71c4(void)

{
  func_0x0001077c71e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077c72c0; end: 1077c72f7;  */

undefined8 FUN_1077c72c0(undefined8 param_1)

{
  func_0x0001077ca064();
  func_0x0001077c7534();
  return param_1;
}



/* Entry: 1077c7694; end: 1077c76b7;  */

undefined8 * FUN_1077c7694(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  func_0x0001077c9fa4();
  *puVar1 = &PTR_DAT_1109dcd00;
  func_0x0001077c49a0(puVar1 + 1,param_1 + 1);
  return puVar1;
}



/* Entry: 1077c8344; end: 1077c8363;  */

undefined8 * FUN_1077c8344(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_1109dcd90;
  func_0x0001077c49cc(param_2 + 1,param_1 + 8);
  return param_2;
}



/* Entry: 1077c8494; end: 1077c8547;  */

void FUN_1077c8494(void)

{
  int iVar1;
  long unaff_x19;
  long *plVar2;
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [8];
  
  func_0x0001077c9e24();
  iVar1 = (int)auStack_48;
  func_0x0001077ca234();
  func_0x0001077ca248();
  if (iVar1 != 0) {
    plVar2 = *(long **)(unaff_x19 + 0x20);
    *(undefined1 *)((long)plVar2 + 0x22) = 0;
    if (plVar2[6] == 0) {
      __ZNSt13runtime_errorC1EPKc(auStack_38,&UNK_10f42a43d);
      func_0x0001052b2bd0(auStack_28,auStack_38);
      (**(code **)(*plVar2 + 0x18))(plVar2,auStack_28);
      __ZNSt13exception_ptrD1Ev(auStack_28);
      __ZNSt13runtime_errorD1Ev(auStack_38);
    }
    else {
      func_0x000107520cd4(plVar2[0x11]);
    }
  }
  func_0x0001077c9e38();
  return;
}



/* Entry: 1077c8774; end: 1077c8793;  */

undefined8 * FUN_1077c8774(undefined8 *param_1)

{
  long unaff_x19;
  
  func_0x0001077c9d68();
  *param_1 = &PTR_DAT_1109dce90;
  func_0x0001077c49fc(param_1 + 1,unaff_x19 + 8);
  return param_1;
}



/* Entry: 1077c8a5c; end: 1077c8a6f;  */

void FUN_1077c8a5c(void)

{
  func_0x0001077c8a34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077c8bd4; end: 1077c8bf3;  */

undefined8 * FUN_1077c8bd4(undefined8 *param_1)

{
  long unaff_x19;
  
  func_0x0001077c9d68();
  *param_1 = &PTR_DAT_1109dcfb0;
  func_0x0001077c4a2c(param_1 + 1,unaff_x19 + 8);
  return param_1;
}



/* Entry: 1077c8d1c; end: 1077c8d3b;  */

undefined8 * FUN_1077c8d1c(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_1109dd040;
  func_0x0001077c4a44(param_2 + 1,param_1 + 8);
  return param_2;
}



/* Entry: 1077c8ea4; end: 1077c8f0f;  */

void FUN_1077c8ea4(void)

{
  int iVar1;
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [40];
  
  func_0x0001077c9de8();
  iVar1 = (int)auStack_58;
  func_0x0001077ca06c();
  func_0x0001077ca080();
  if (iVar1 != 0) {
    func_0x0001073b04cc(auStack_48);
    func_0x0001073af78c(auStack_48);
    func_0x0001073b0514(auStack_48);
  }
  func_0x0001077c9e38();
  return;
}



/* Entry: 1077c9168; end: 1077c918b;  */

undefined8 FUN_1077c9168(undefined8 param_1)

{
  func_0x0001077c918c(param_1,0);
  return param_1;
}



/* Entry: 1077c93ec; end: 1077c9407;  */

long FUN_1077c93ec(undefined8 param_1,ulong param_2)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  if (param_2 >> 0x3d == 0) {
    lVar1 = param_2 << 3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar1);
    return lVar1;
  }
  func_0x000104bd35f4();
  func_0x0001077c9e9c();
  for (; unaff_x21 != unaff_x20; unaff_x21 = unaff_x21 + 8) {
    func_0x0001077c9ffc();
    func_0x000107563bc8();
    unaff_x19 = unaff_x19 + 8;
  }
  return unaff_x19;
}



/* Entry: 1077c95fc; end: 1077c9673;  */

long FUN_1077c95fc(long param_1,undefined8 param_2)

{
  long *unaff_x19;
  
  func_0x0001077ca0c4(param_1,param_2,param_2);
  func_0x0001077c962c();
  return param_1 - *unaff_x19 >> 3;
}



/* Entry: 1077c9864; end: 1077c9897;  */

void FUN_1077c9864(long param_1)

{
  long unaff_x19;
  
  func_0x0001077c9de8();
  func_0x0001077c9734(unaff_x19 + 8,*(undefined8 *)(param_1 + 8));
  func_0x000107529544();
  return;
}



/* Entry: 1077c9a0c; end: 1077c9a43;  */

undefined8 FUN_1077c9a0c(undefined8 param_1)

{
  func_0x0001077ca064();
  func_0x0001077c9c84();
  return param_1;
}



/* Entry: 1077c9dac; end: 1077c9dc7;  */

void FUN_1077c9dac(long param_1,long param_2)

{
  FUN_1077c64dc();
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  return;
}



/* Entry: 1077caa84; end: 1077cab37;  */

uint FUN_1077caa84(long param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 **ppuVar1;
  undefined8 **ppuVar2;
  uint uVar3;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  func_0x0001077f0954();
  if ((bool)in_ZR) {
    puStack_40 = &uStack_38;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    ppuVar1 = &puStack_40;
    uStack_38 = param_2;
    func_0x0001077cab38(ppuVar1,&UNK_10f42a48b,&uStack_70);
    ppuVar2 = &puStack_40;
    func_0x0001077cab38(ppuVar2,&UNK_10f42a494,&uStack_58);
    uVar3 = (uint)ppuVar1 | (uint)ppuVar2;
    if (uVar3 == 1) {
      func_0x0001077cab94(param_1 + 0x238,&uStack_70);
    }
    func_0x0001072bb90c(&uStack_70);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



/* Entry: 1077cae2c; end: 1077cae9f;  */

void FUN_1077cae2c(void)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  ulong uVar2;
  long unaff_x19;
  undefined8 unaff_x21;
  
  func_0x0001077f0954();
  if ((bool)in_ZR) {
    func_0x0001077eec18();
    uVar1 = unaff_x21;
    func_0x000107327090();
    if ((int)uVar1 != 0) {
      func_0x000107327234();
      func_0x0001077f0b1c();
      uVar2 = 0;
      func_0x0001077caea0();
      if ((uVar2 & 1) != 0) {
        *(undefined8 *)(unaff_x19 + 0x138) = unaff_x21;
      }
      func_0x0001077ef60c();
    }
  }
  return;
}



/* Entry: 1077cb334; end: 1077cb3ab;  */

/* WARNING: Possible PIC construction at 0x0001077cb380: Changing call to branch */

void FUN_1077cb334(long param_1,uint *param_2)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 in_ZR;
  int iVar3;
  int extraout_w8;
  long unaff_x19;
  long unaff_x20;
  long lVar4;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  func_0x0001077f0954();
  if ((bool)in_ZR) {
code_r0x0001077cb3ac:
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    func_0x0001077ef424();
    iVar3 = (int)param_1;
    func_0x0001077f06fc();
    if (iVar3 != 0) {
      func_0x0001077f06f4();
      func_0x0001077af25c((undefined1 *)((long)register0x00000008 + -0x38));
      if (*(long *)(*(long *)((long)register0x00000008 + -0x38) + 0x18) != 0) {
        func_0x0001077d5e30(unaff_x19 + 0x298,(undefined1 *)((long)register0x00000008 + -0x38));
      }
      func_0x00010726b264((undefined1 *)((long)register0x00000008 + -0x38));
    }
    return;
  }
  if (extraout_w8 == 4) {
    unaff_x20 = *(long *)(param_2 + 2);
    lVar4 = (ulong)*param_2 * 0x18;
    lVar2 = (ulong)*param_2 * 3;
    while (lVar2 != 0) {
      if (*(short *)(unaff_x20 + 0x16) == 3) {
        unaff_x30 = 0x1077cb384;
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
        unaff_x19 = param_1;
        unaff_x29 = puVar1;
        goto code_r0x0001077cb3ac;
      }
      unaff_x20 = unaff_x20 + 0x18;
      lVar4 = lVar4 + -0x18;
      lVar2 = lVar4;
    }
  }
  return;
}



/* Entry: 1077d4e94; end: 1077d4ed3;  */

/* WARNING: Possible PIC construction at 0x0001077d52b0: Changing call to branch */

undefined1 * FUN_1077d4e94(undefined8 param_1,undefined ***param_2,undefined8 param_3)

{
  uint uVar1;
  undefined ***pppuVar2;
  ulong uVar3;
  undefined1 in_ZR;
  undefined1 uVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined ***pppuVar8;
  undefined8 extraout_x8;
  undefined1 *unaff_x20;
  undefined ***unaff_x21;
  long lVar9;
  long lVar10;
  undefined1 auStack_520 [8];
  undefined ***pppuStack_518;
  undefined1 auStack_510 [56];
  undefined1 auStack_4d8 [64];
  undefined1 auStack_498 [232];
  undefined **ppuStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  char cStack_358;
  undefined1 auStack_348 [24];
  undefined8 auStack_330 [2];
  char cStack_320;
  undefined1 auStack_318 [8];
  undefined4 uStack_310;
  undefined1 auStack_308 [88];
  undefined **ppuStack_2b0;
  undefined1 *puStack_2a8;
  undefined ***pppuStack_298;
  undefined1 *puStack_1c8;
  undefined **ppuStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined **ppuStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 uStack_b8;
  int iStack_60;
  undefined **ppuStack_58;
  undefined ***pppuStack_50;
  undefined8 uStack_48;
  undefined1 auStack_38 [16];
  undefined8 uStack_28;
  
  func_0x0001077ee468();
  puVar6 = auStack_38;
  func_0x0001077ee1b4();
  func_0x0001077ef55c();
  func_0x0001077ee344(uStack_28);
  if ((bool)in_ZR) {
    return puVar6;
  }
  ___stack_chk_fail();
  func_0x0001077eecd4();
  func_0x0001077ef068();
  func_0x0001077f0928();
  func_0x0001077ee6bc();
  uStack_48 = extraout_x8;
  func_0x0001077f0954();
  uVar4 = 0;
  puVar7 = puVar6;
  if ((bool)in_ZR) {
    pppuVar8 = param_2;
    func_0x0001078696e8(auStack_348);
    lVar10 = *(long *)(puVar6 + 0x2a0);
    for (lVar9 = *(long *)(puVar6 + 0x298); uVar4 = lVar9 == lVar10, !(bool)uVar4;
        lVar9 = lVar9 + 0x18) {
      ppuStack_2b0 = &PTR_FUN_1109dde78;
      pppuVar8 = &ppuStack_2b0;
      puStack_2a8 = auStack_348;
      pppuStack_298 = &ppuStack_2b0;
      func_0x000107869948(lVar9);
      func_0x000107277390(&ppuStack_2b0);
    }
    func_0x000107751284(&ppuStack_2b0);
    puStack_1c8 = auStack_348;
    uVar1 = *(uint *)param_2;
    unaff_x21 = &ppuStack_d8;
    pppuVar2 = (undefined ***)(param_2[1] + 3);
    lVar9 = (ulong)uVar1 * 0x30;
    param_2 = pppuVar8;
    lVar10 = (ulong)uVar1 * 3;
    while (lVar10 != 0) {
      if ((*(ushort *)((long)pppuVar2 + 0x16) >> 10 & 1) == 0) {
        ppuStack_58 = &PTR_DAT_1131ad2e8;
        iVar5 = (int)&ppuStack_58;
        pppuStack_50 = pppuVar2;
        func_0x000107766098();
        if (iVar5 == 0) {
code_r0x0001077d50d8:
          ppuStack_370 = (undefined **)((ulong)ppuStack_370 & 0xffffffffffffff00);
          cStack_358 = '\0';
        }
        else {
          uStack_310 = 3;
          func_0x0001077ef09c(auStack_308,auStack_318);
          func_0x0001072c9884(auStack_318);
          uVar3 = (ulong)ppuStack_120 >> 0x28;
          uVar1 = (uint)ppuStack_120;
          ppuStack_120._0_5_ = (uint5)(uVar1 & 0xffffff00);
          ppuStack_120 = (undefined **)CONCAT35((int3)uVar3,(uint5)ppuStack_120);
          ppuStack_d8 = (undefined **)((ulong)ppuStack_d8 & 0xffffffffffffff00);
          uStack_b8 = 0;
          param_2 = &ppuStack_58;
          func_0x000107771274(auStack_330,auStack_308,param_2,param_3,&ppuStack_120,&ppuStack_d8);
          func_0x0001072c94e0(&ppuStack_d8);
          if (cStack_320 != '\x01') {
code_r0x0001077d50d0:
            func_0x0001077f1330();
            func_0x0001077f1380();
            goto code_r0x0001077d50d8;
          }
          uStack_e0 = 0;
          uStack_f8 = 0;
          uStack_100 = 0;
          uStack_e8 = 0;
          uStack_f0 = 0;
          uStack_118 = 0;
          ppuStack_120 = (undefined **)0x0;
          uStack_108 = 0;
          uStack_110 = 0;
          param_2 = &ppuStack_2b0;
          func_0x000107753050(&ppuStack_d8,auStack_330[0],param_2,&ppuStack_120);
          func_0x00010724b3d8(&ppuStack_120);
          if (iStack_60 != 1) {
code_r0x0001077d50cc:
            func_0x0001077f11fc();
            goto code_r0x0001077d50d0;
          }
          pppuVar8 = &ppuStack_d8;
          func_0x0001073405dc();
          if (*(int *)(pppuVar8 + 0xd) != 3) goto code_r0x0001077d50cc;
          func_0x0001073405dc(&ppuStack_d8);
          func_0x000107573ddc();
          func_0x00010724ef84(&ppuStack_120);
          uStack_368 = uStack_118;
          ppuStack_370 = ppuStack_120;
          uStack_360 = uStack_110;
          uStack_110 = 0;
          ppuStack_120 = (undefined **)0x0;
          uStack_118 = 0;
          cStack_358 = '\x01';
          func_0x0001077ef73c();
          func_0x0001077f11fc();
          func_0x0001077f1330();
          func_0x0001077f1380();
        }
        func_0x0001072f5f6c(&ppuStack_58);
      }
      else {
        param_2 = (undefined ***)pppuVar2[1];
        if ((*(ushort *)((long)pppuVar2 + 0x16) & 0x1000) != 0) {
          param_2 = pppuVar2;
        }
        func_0x00010002b838(&ppuStack_d8);
        uStack_368 = uStack_d0;
        ppuStack_370 = ppuStack_d8;
        uStack_360 = uStack_c8;
        uStack_d0 = 0;
        uStack_c8 = 0;
        ppuStack_d8 = (undefined **)0x0;
        cStack_358 = '\x01';
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      }
      uVar4 = cStack_358 == '\x01';
      if ((bool)uVar4) {
        if ((*(ushort *)((long)pppuVar2 + -2) >> 0xc & 1) == 0) {
          pppuVar8 = (undefined ***)pppuVar2[-2];
        }
        else {
          pppuVar8 = pppuVar2 + -3;
        }
        func_0x00010002b838(&ppuStack_d8,pppuVar8);
        func_0x000100608100(puVar6 + 0x2d0,&ppuStack_d8);
        param_2 = &ppuStack_370;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_d8);
      }
      func_0x0001001148fc(&ppuStack_370);
      pppuVar2 = pppuVar2 + 6;
      lVar9 = lVar9 + -0x30;
      lVar10 = lVar9;
    }
    func_0x000107267da8(&ppuStack_2b0);
    puVar7 = auStack_348;
    func_0x00010726b264();
    unaff_x20 = puVar6;
  }
  func_0x0001077ee344(uStack_48);
  if ((bool)uVar4) {
    return puVar7;
  }
  ___stack_chk_fail();
  puVar6 = auStack_348;
  func_0x00010726b264(puVar6);
  func_0x0001077ef068();
  func_0x0001077ee434();
  uVar4 = *(short *)((long)param_2 + 0x16) == 4;
  if ((bool)uVar4) {
    func_0x0001077eec18();
    func_0x0001077f3c4c();
    func_0x0001077f3790();
    func_0x000100060964(auStack_510,&UNK_10f42a4c8);
    func_0x0001072627ac(auStack_4d8,auStack_510);
    func_0x0001077efb9c();
    pppuStack_518 = unaff_x21;
    func_0x0001077b3ffc(auStack_498,puVar6 + 8,auStack_4d8,auStack_520,unaff_x20);
    func_0x0001072f5f6c(auStack_520);
    func_0x00010724b3d8(auStack_4d8);
    func_0x000104c2f714(auStack_510);
    func_0x0001077f1b58();
    if ((bool)uVar4) goto code_r0x0001077d530c;
    puVar6 = auStack_498;
    func_0x000107266948(puVar6);
  }
  func_0x0001077ee314();
  if ((bool)uVar4) {
    return puVar6;
  }
  ___stack_chk_fail();
  func_0x0001077f086c();
  func_0x000107266948();
  func_0x0001077ef068();
code_r0x0001077d530c:
  func_0x0001077ef34c();
  func_0x0001077da3b8();
  func_0x0001077ef474();
  func_0x00010733ecf0();
  return unaff_x20;
}



/* Entry: 1077d5a70; end: 1077d5b63;  */

long * FUN_1077d5a70(long *param_1,long *param_2)

{
  byte bVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *unaff_x19;
  long *plVar6;
  
  plVar3 = param_2;
  func_0x0001077ee3c0();
  func_0x000100061de0();
  lVar4 = *unaff_x19;
  if ((*(long *)(lVar4 + -8) == 0) && (*(char *)(lVar4 + (long)param_1) != -2)) {
    if (((ulong)unaff_x19[2] < 9) || ((ulong)(unaff_x19[2] * 0x19) < (ulong)(unaff_x19[3] << 5))) {
      func_0x000107552c68();
    }
    else {
      func_0x00010ae6c914();
    }
    param_1 = unaff_x19;
    plVar3 = param_2;
    func_0x000100061de0();
    lVar4 = *unaff_x19;
  }
  unaff_x19[3] = unaff_x19[3] + 1;
  bVar2 = *(char *)(lVar4 + (long)param_1) == -0x80;
  *(ulong *)(lVar4 + -8) = *(long *)(lVar4 + -8) - (ulong)bVar2;
  bVar1 = (byte)param_2 & 0x7f;
  uVar5 = unaff_x19[2];
  *(byte *)(lVar4 + (long)param_1) = bVar1;
  *(byte *)(lVar4 + (uVar5 & (long)param_1 - 7U) + (uVar5 & 7)) = bVar1;
  func_0x0001077ee2e4();
  if (bVar2) {
    return param_1;
  }
  ___stack_chk_fail();
  plVar6 = (long *)plVar3[6];
  if (plVar6 == (long *)0xffffffffffffffff) {
    plVar6 = plVar3;
    func_0x000104c2fcd4();
    func_0x000104c2fcf0(plVar3);
    func_0x0001001030f4(plVar6,(long)plVar6 + (long)plVar3);
    func_0x000104c343b0();
    func_0x000104c2ffc0();
  }
  return plVar6;
}



/* Entry: 1077d5dc4; end: 1077d5def;  */

void FUN_1077d5dc4(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001077ef34c();
  func_0x000100066230();
  func_0x000100066230(unaff_x20 + 0x18,unaff_x19 + 0x18);
  return;
}



/* Entry: 1077d5f98; end: 1077d5fcb;  */

void FUN_1077d5f98(void)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x0001077ef34c();
  *unaff_x19 = 0;
  func_0x000107339b18();
  func_0x00010014d224(unaff_x20 + 8,unaff_x19 + 1);
  return;
}



/* Entry: 1077d7844; end: 1077d78e3;  */

ulong FUN_1077d7844(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  uint unaff_w21;
  uint unaff_w22;
  int unaff_w23;
  
  puVar1 = param_1;
  func_0x0001077ee434();
  func_0x0001077ef734(*puVar1);
  func_0x0001077efcac();
  if ((bool)in_ZR) {
    func_0x0001077ef72c();
    func_0x00010755b848();
    func_0x0001077f1648();
  }
  else {
    unaff_w22 = 0;
    unaff_w21 = 0;
    unaff_w23 = 1;
  }
  func_0x0001077ee79c();
  if (unaff_w23 == 0) {
    param_4 = (ulong)(unaff_w21 | unaff_w22);
  }
  else {
    in_ZR = *(char *)((long)param_1 + 0x2c) == '\x01';
    if ((bool)in_ZR) {
      param_4 = (ulong)*(uint *)(param_1 + 5);
    }
  }
  func_0x0001077ee314();
  if ((bool)in_ZR) {
    return param_4;
  }
  ___stack_chk_fail();
  func_0x0001077ee510();
  func_0x0001077ef068();
  func_0x0001000d03a8();
  func_0x000104c2feb0();
  *(undefined8 *)(param_4 + 0x30) = 0xffffffffffffffff;
  func_0x000104c2fe38();
  *(undefined8 **)(param_4 + 0x30) = param_1;
  return param_4;
}



/* Entry: 1077d7a8c; end: 1077d7a93;  */

void FUN_1077d7a8c(void)

{
  return;
}



/* Entry: 1077d7fc8; end: 1077d802f;  */

void FUN_1077d7fc8(long param_1,long param_2)

{
  uint uVar1;
  undefined4 extraout_w8;
  long unaff_x19;
  
  func_0x0001077ef148();
  *(undefined4 *)(param_1 + 0x30) = extraout_w8;
  func_0x000107560e68();
  uVar1 = *(uint *)(param_2 + 0x30);
  if (uVar1 != 0xffffffff) {
    func_0x0001077eeda0((&PTR_DAT_1109dd508)[uVar1]);
    *(uint *)(unaff_x19 + 0x30) = uVar1;
  }
  return;
}



/* Entry: 1077d849c; end: 1077d850f;  */

void FUN_1077d849c(void)

{
  undefined8 extraout_x9;
  
  func_0x0001077ef100();
  func_0x0001077ef9d8();
  func_0x0001077f10a8();
  func_0x000107339f78(extraout_x9);
  func_0x00010727ecac();
  func_0x0001077f0d9c();
  func_0x0001077efc64();
  return;
}



/* Entry: 1077d8afc; end: 1077d8b37;  */

void FUN_1077d8afc(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  func_0x00010727d6bc(lVar1);
  func_0x00010729963c(lVar1 + 0x28,param_2 + 0x28);
  return;
}



/* Entry: 1077d911c; end: 1077d917b;  */

void FUN_1077d911c(void)

{
  undefined1 in_ZR;
  
  func_0x0001077ee32c();
  func_0x0001077ef048();
  func_0x0001077ee8ac();
  func_0x0001077f05dc();
  func_0x0001077ef7b8();
  func_0x0001077efdf0();
  func_0x0001077efe10();
  func_0x0001077ee28c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001077ef8a8();
  func_0x0001077efe10();
  func_0x0001077ef068();
  func_0x0001077ef1b8();
  func_0x0001077d9344();
  return;
}



/* Entry: 1077d94cc; end: 1077d9513;  */

void FUN_1077d94cc(long param_1)

{
  long unaff_x19;
  
  func_0x0001077ef908();
  *(undefined2 *)(param_1 + 0x28) = *(undefined2 *)(unaff_x19 + 0x28);
  return;
}



/* Entry: 1077d9a38; end: 1077d9a97;  */

void FUN_1077d9a38(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4,
                  undefined1 *param_5)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  ulong extraout_x8;
  undefined1 uStack_71;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [64];
  
  puVar1 = auStack_60;
  func_0x0001077ee3c0();
  func_0x0001077ee774();
  if ((extraout_x8 & 1) == 0) {
    func_0x0001077d9ba4(auStack_60,param_2);
    func_0x000107264c5c(auStack_60);
    func_0x0001077ef230();
    param_1 = puVar1;
  }
  func_0x0001077ee2e4();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001077eea08();
  func_0x0001077ef068();
  puStack_68 = &UNK_1077d9a98;
  puStack_70 = &stack0xfffffffffffffff0;
  func_0x00010755d0c4(&uStack_71,param_1,param_2,param_3,*param_4,*param_5);
  return;
}



/* Entry: 1077d9c48; end: 1077d9ca7;  */

/* WARNING: Possible PIC construction at 0x0001077d9c70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077d9c74) */

void FUN_1077d9c48(void)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  
  func_0x0001077ee3c0();
  func_0x0001077ee774();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001077ee2e4();
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001077eea08();
    func_0x0001077ef068();
  }
  func_0x0001077ef088();
  func_0x0001077ef070();
  return;
}



/* Entry: 1077d9f0c; end: 1077d9f97;  */

long FUN_1077d9f0c(long param_1)

{
  func_0x00010733d014(param_1 + 0x50);
  func_0x0001077f1460();
  return param_1;
}



/* Entry: 1077da314; end: 1077da31b;  */

void FUN_1077da314(void)

{
  return;
}



/* Entry: 1077da554; end: 1077da597;  */

void FUN_1077da554(void)

{
  long *unaff_x19;
  long unaff_x20;
  
  func_0x0001077f0638();
  while (unaff_x20 != unaff_x19[2]) {
    unaff_x19[2] = unaff_x19[2] + -0xa8;
    func_0x00010731f070();
  }
  if (*unaff_x19 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 1077dcb18; end: 1077dcb33;  */

void FUN_1077dcb18(long param_1)

{
  func_0x000107780e58();
  *(undefined1 *)(param_1 + 0x90) = 1;
  return;
}



/* Entry: 1077dd080; end: 1077dd3c3;  */

void FUN_1077dd080(void)

{
  undefined1 in_ZR;
  long unaff_x21;
  undefined1 auStack_528 [72];
  undefined1 auStack_4e0 [72];
  undefined1 auStack_498 [72];
  undefined1 auStack_450 [72];
  undefined1 auStack_408 [72];
  undefined1 auStack_3c0 [72];
  undefined1 auStack_378 [72];
  undefined1 auStack_330 [72];
  undefined1 auStack_2e8 [72];
  undefined1 auStack_2a0 [72];
  undefined1 auStack_258 [72];
  undefined1 auStack_210 [72];
  undefined1 auStack_1c8 [72];
  undefined1 auStack_180 [72];
  undefined1 auStack_138 [72];
  undefined1 auStack_f0 [72];
  undefined1 auStack_a8 [104];
  
  func_0x0001077ee358();
  func_0x0001077eea20(1);
  FUN_1077dec28(auStack_a8);
  func_0x0001077dee94(auStack_f0,unaff_x21 + 8);
  func_0x0001077efdb8();
  func_0x0001077efa50(auStack_138,unaff_x21 + 0xa8);
  func_0x0001077efa50(auStack_180,unaff_x21 + 0xe0);
  func_0x0001077def50(auStack_1c8,unaff_x21 + 0x118);
  func_0x0001077dec90(auStack_a8);
  func_0x0001077dee94(auStack_210,unaff_x21 + 0x158);
  func_0x0001077efdb8();
  func_0x0001077f1348();
  func_0x0001077f1348(auStack_258,unaff_x21 + 0x240);
  func_0x0001077efa50(auStack_2a0,unaff_x21 + 0x288);
  func_0x0001077efa50(auStack_2e8,unaff_x21 + 0x2c0);
  func_0x0001077efa50(auStack_330,unaff_x21 + 0x2f8);
  func_0x0001077efa50(auStack_378,unaff_x21 + 0x330);
  func_0x0001077efa50(auStack_3c0,unaff_x21 + 0x368);
  func_0x0001077def50(auStack_408,unaff_x21 + 0x3a0);
  func_0x0001077efa50(auStack_450,unaff_x21 + 0x3e0);
  func_0x0001077f1348(auStack_498,unaff_x21 + 0x418);
  func_0x0001077efa50(auStack_4e0,unaff_x21 + 0x460);
  func_0x0001077efa50(auStack_528,unaff_x21 + 0x498);
  func_0x0001077f14bc(auStack_2e8);
  func_0x0001073ebef4(auStack_528);
  func_0x0001073ebef4(auStack_4e0);
  func_0x0001073ebef4(auStack_498);
  func_0x0001073ebef4(auStack_450);
  func_0x0001073ebef4(auStack_408);
  func_0x0001073ebef4(auStack_3c0);
  func_0x0001073ebef4(auStack_378);
  func_0x0001073ebef4(auStack_330);
  func_0x0001073ebef4(auStack_2e8);
  func_0x0001073ebef4(auStack_2a0);
  func_0x0001073ebef4(auStack_258);
  func_0x0001073ebef4(auStack_a8);
  func_0x0001073ebef4(auStack_210);
  func_0x0001073ebef4(auStack_1c8);
  func_0x0001073ebef4(auStack_180);
  func_0x0001073ebef4(auStack_138);
  func_0x0001073ebef4(auStack_f0);
  func_0x0001077ee314();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001073ebef4(auStack_528);
  func_0x0001073ebef4(auStack_4e0);
  func_0x0001073ebef4(auStack_498);
  func_0x0001073ebef4(auStack_450);
  func_0x0001073ebef4(auStack_408);
  do {
    func_0x0001073ebef4(auStack_3c0);
    func_0x0001073ebef4(auStack_378);
    func_0x0001073ebef4(auStack_330);
    func_0x0001073ebef4(auStack_2e8);
    func_0x0001073ebef4(auStack_2a0);
    func_0x0001073ebef4(auStack_258);
    func_0x0001073ebef4(auStack_a8);
    func_0x0001073ebef4(auStack_210);
    func_0x0001073ebef4(auStack_1c8);
    func_0x0001073ebef4(auStack_180);
    func_0x0001073ebef4(auStack_138);
    func_0x0001073ebef4(auStack_f0);
    func_0x0001077ef998();
    func_0x0001077ef0b0();
  } while( true );
}



/* Entry: 1077dd758; end: 1077dd7a3;  */

/* WARNING: Possible PIC construction at 0x0001077dd898: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001077dd8f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077dd89c) */
/* WARNING: Removing unreachable block (ram,0x0001077dd8f4) */
/* WARNING: Removing unreachable block (ram,0x0001077dd904) */
/* WARNING: Removing unreachable block (ram,0x0001077dd908) */
/* WARNING: Removing unreachable block (ram,0x0001077dd910) */

undefined1 *
FUN_1077dd758(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined2 *puVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined1 *unaff_x19;
  undefined1 *unaff_x20;
  undefined2 uStack_220;
  undefined1 uStack_21e;
  undefined5 uStack_21d;
  undefined8 uStack_1f8;
  undefined1 auStack_1c0 [32];
  undefined **ppuStack_1a0;
  undefined1 *puStack_198;
  long lStack_190;
  undefined8 uStack_188;
  undefined1 auStack_180 [256];
  long lStack_80;
  long lStack_78;
  undefined1 auStack_3d [21];
  undefined8 uStack_28;
  
  func_0x0001077ee3e4(param_1,param_1);
  puVar5 = auStack_3d;
  uStack_28 = extraout_x8;
  func_0x0001077dd9e0(puVar5);
  puVar3 = unaff_x19;
  func_0x00010015492c();
  func_0x0001077ee344(uStack_28);
  if ((bool)in_ZR) {
    return puVar3;
  }
  ___stack_chk_fail();
  puVar3 = auStack_1c0;
  func_0x0001077ef34c();
  func_0x0001077ee374();
  func_0x000105988308(auStack_1c0,puVar5,param_4);
  puStack_198 = auStack_180;
  uStack_188 = 0x100;
  lStack_190 = 0;
  ppuStack_1a0 = &PTR_DAT_1109965d0;
  lStack_80 = 0;
  puVar5 = (undefined1 *)0xdd;
  func_0x0001003a9984(&ppuStack_1a0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return (undefined1 *)(lStack_190 + lStack_80);
  }
  ___stack_chk_fail();
  puVar4 = unaff_x19;
  func_0x0001077ee3e4();
  if (puVar4 < (undefined1 *)0x26) {
    uStack_21e = 0;
    unaff_x20 = &uStack_21e;
    unaff_x20[(long)unaff_x19] = 0;
    puVar4 = (undefined1 *)0x26;
    uStack_220 = (short)unaff_x19;
  }
  else {
    uVar2 = unaff_x19 == (undefined1 *)0x51;
    if (unaff_x19 < (undefined1 *)0x52) {
      func_0x0001077f12fc(&uStack_220);
      puVar1 = (undefined2 *)CONCAT53(uStack_21d,CONCAT12(uStack_21e,uStack_220));
      *puVar1 = (short)unaff_x19;
      ((undefined1 *)((long)puVar1 + (long)unaff_x19))[2] = 0;
      unaff_x20 = (undefined1 *)(CONCAT53(uStack_21d,CONCAT12(uStack_21e,uStack_220)) + 2);
      puVar4 = (undefined1 *)0x52;
    }
    else {
      uStack_1f8 = extraout_x8_00;
      func_0x0001077dd9a0(&uStack_220);
      func_0x0001077efeb8();
      func_0x0001072625b4();
      func_0x0001077ef56c();
      func_0x0001077ee344(uStack_1f8);
      if ((bool)uVar2) {
        return puVar3;
      }
      ___stack_chk_fail();
      func_0x0001077ef244();
      func_0x000104c2f784();
      func_0x0001077ef068();
      puVar5 = puVar3;
    }
  }
  puVar3 = unaff_x20;
  func_0x0001077ef5bc(puVar4);
  func_0x0001073a3de0();
  unaff_x20[(long)puVar3] = 0;
  return puVar5;
}



/* Entry: 1077ddb5c; end: 1077ddb8b;  */

void FUN_1077ddb5c(long param_1)

{
  undefined4 extraout_w8;
  
  func_0x0001077ef148();
  *(undefined4 *)(param_1 + 0x78) = extraout_w8;
  func_0x0001077ddb8c();
  return;
}



/* Entry: 1077ddd08; end: 1077ddd2f;  */

void FUN_1077ddd08(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x0001077f0638();
  func_0x0001077f0a90();
  func_0x0001077ddd84();
  *(undefined8 *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 1077ddeb0; end: 1077ddefb;  */

void FUN_1077ddeb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  func_0x0001077f0fb8();
  if (param_4 != 0) {
    func_0x0001077eead8();
    func_0x0001077ddefc(param_1,param_4);
    func_0x0001077eeecc();
    func_0x0001077ddf40();
  }
  func_0x0001077efac0();
  func_0x0001077de19c();
  return;
}



/* Entry: 1077de05c; end: 1077de0a7;  */

void FUN_1077de05c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  func_0x0001077f0fb8();
  if (param_4 != 0) {
    func_0x0001077eead8();
    func_0x0001077ddcc8(param_1,param_4);
    func_0x0001077eeecc();
    func_0x0001077de0a8();
  }
  func_0x0001077efac0();
  func_0x0001077dde54();
  return;
}


