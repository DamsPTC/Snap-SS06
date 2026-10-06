/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1087f2d24; end: 1087f2d2b;  */

void FUN_1087f2d24(void)

{
  return;
}



/* Entry: 1087f2d2c; end: 1087f2d4f;  */

void FUN_1087f2d2c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_FUN_110a72aa0;
  return;
}



/* Entry: 1087f2d50; end: 1087f2d77;  */

void FUN_1087f2d50(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_110a72aa0;
  return;
}



/* Entry: 1087f2d78; end: 1087f2dbf;  */

void FUN_1087f2d78(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined8 uStack_24;
  
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_40 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uStack_38 = param_2[3];
  uStack_30 = (undefined4)param_2[4];
  uStack_24 = *(undefined8 *)((long)param_2 + 0x2c);
  uStack_2c = (undefined4)*(undefined8 *)((long)param_2 + 0x24);
  uStack_28 = (undefined4)((ulong)*(undefined8 *)((long)param_2 + 0x24) >> 0x20);
  func_0x000107c27914(&uStack_50);
  return;
}



/* Entry: 1087f2dc0; end: 1087f2dfb;  */

long FUN_1087f2dc0(long param_1,undefined8 param_2)

{
  func_0x000107c27934(param_2,&PTR_DAT_110a72b00);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1087f2dfc; end: 1087f2e07;  */

undefined ** FUN_1087f2dfc(void)

{
  return &PTR_DAT_110a72b00;
}



/* Entry: 1087f2e08; end: 1087f3527;  */

void FUN_1087f2e08(long param_1)

{
  undefined8 uVar1;
  uint uVar2;
  code *pcVar3;
  char cVar4;
  char cVar5;
  undefined1 uVar6;
  bool bVar7;
  undefined8 *puVar8;
  undefined1 uVar9;
  int extraout_w8;
  int iVar10;
  uint extraout_w8_00;
  uint uVar11;
  undefined4 uVar12;
  long extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  undefined8 extraout_x8_03;
  int extraout_w9;
  undefined8 extraout_x9;
  uint extraout_w10;
  undefined8 extraout_x10;
  long extraout_x10_00;
  undefined8 extraout_x11;
  long lVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  undefined *puVar17;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined1 uStack_80;
  undefined1 uStack_68;
  
  uVar12 = SUB84(&uStack_d0,0);
  puVar8 = &uStack_d0;
  lVar13 = param_1;
  func_0x0001087f3828();
  lVar13 = lVar13 + 0x1f8;
  FUN_1087c6770(lVar13);
  FUN_10877d4b8(param_1 + 0x238,lVar13);
  func_0x0001087f3680();
  func_0x0001087f37cc();
  puVar17 = &UNK_110a60998;
  uVar6 = *(int *)(param_1 + 0x270) == 1;
  if ((bool)uVar6) {
    lVar13 = param_1 + 0x2f0;
    func_0x00010877d53c(lVar13,param_1 + 0x238);
    uVar11 = (uint)lVar13;
    iVar10 = *(int *)(param_1 + 800);
    if (iVar10 == 4) {
      func_0x0001087f35cc();
      uVar6 = extraout_x8 == 1;
      uVar9 = 2;
      if (extraout_x8 < 2) {
        uVar9 = uVar6;
      }
      func_0x0001087f385c(uVar9);
      FUN_1087f2a4c();
LAB_1087f3204:
      uVar12 = 0;
      func_0x0001087f3850();
      uVar16 = extraout_x8_01;
    }
    else {
      cVar4 = SBORROW4(iVar10,3);
      cVar5 = iVar10 + -3 < 0;
      uVar6 = iVar10 == 3;
      if ((bool)uVar6) {
        lVar13 = *(long *)(*(long *)(param_1 + 0x318) + 0x30);
        *(long *)(*(long *)(param_1 + 0x4e8) + 0xb0) = lVar13;
        func_0x0001087f3700();
        if ((bool)uVar6) {
          uStack_b0 = (ulong)(extraout_w10 >> 2 & 1);
          uStack_d0 = &UNK_10f4bbc99;
          uStack_c8 = 0;
          uStack_b8 = 0;
          uStack_a8 = 0;
          func_0x0001087f3808();
          func_0x000107c3173c(param_1 + 0x378);
          func_0x0001087f376c();
          uVar1 = extraout_x11;
          lVar13 = extraout_x10_00;
          if (cVar5 == cVar4) {
            uVar1 = extraout_x8_03;
            lVar13 = param_1 + 0x378;
          }
          func_0x00010bd3f434(param_1 + 0x390,lVar13,uVar1,&UNK_10f4bbca9);
          lVar13 = *(long *)(param_1 + 0x390);
          if (-1 < *(char *)(param_1 + 0x3a7)) {
            lVar13 = param_1 + 0x390;
          }
          func_0x0001087f36f0(lVar13);
          goto LAB_1087f3380;
        }
        lVar15 = *(long *)(param_1 + 0x178);
        if (extraout_w8 == 0) {
          func_0x0001087f3754();
          FUN_108681dcc(param_1 + 0x1f8);
          FUN_108681dcc(&uStack_d0,param_1 + 0x1f8);
          uVar11 = 1;
          uStack_90 = CONCAT71(uStack_90._1_7_,1);
          if (lVar13 - lVar15 < 2) {
            if (lVar13 - lVar15 == 1) {
              uVar11 = 2;
            }
            else {
              uVar11 = 3;
              if (lVar13 != lVar15) {
                uVar11 = 4;
              }
            }
          }
          FUN_1087a47ec(uVar11,&uStack_d0,*(long *)(param_1 + 0x4e0) + 0x60);
          lVar13 = *(long *)(param_1 + 0x4e0);
          func_0x000107c29564(&uStack_d0);
          func_0x0001087f37e8(*(undefined8 *)(**(long **)(lVar13 + 0xa8) + 0x10));
          uVar16 = (ulong)*(uint *)(param_1 + 0x230);
          func_0x0001087f373c();
          func_0x0001087f365c();
          lVar13 = param_1 + 0x4b0;
          func_0x000107c278b8(lVar13);
          func_0x0001087f35ac();
          func_0x000107c28824(&uStack_d0,param_1 + 0x4b0,lVar13);
          func_0x0001087f3650();
          lVar13 = param_1 + 0x498;
          func_0x000107c278b8(lVar13);
          func_0x0001087f35b8();
          func_0x000107c28824(puVar8,param_1 + 0x498,lVar13);
          FUN_1087ceb70(uVar16);
          FUN_1087b95a0(puVar8,uVar16);
          func_0x0001087f3644();
          func_0x000107c278b8(param_1 + 0x480);
          func_0x0001087f3598();
          func_0x000107c28818(puVar8,param_1 + 0x480);
          func_0x000107c2884c(param_1 + 0x328,puVar8);
          lVar13 = *(long *)(param_1 + 0x4e8);
          func_0x0001087f36c0();
          func_0x0001087f36d8();
          func_0x0001087f36e0();
          func_0x000107c2882c(&uStack_d0);
          if ((*(ulong *)(lVar13 + 0x120) >> 0x20 & 1) != 0) {
            func_0x0001087f3564();
            func_0x000107c29054(param_1 + 0x328);
          }
          plVar14 = *(long **)(*(long *)(param_1 + 0x4e0) + 0x40);
          func_0x0001087f37b4();
          func_0x0001087f371c(*(undefined8 *)(*plVar14 + 0x50));
          uVar11 = uVar11 & 0xffff;
          func_0x0001087f36a8();
          func_0x0001087f35c4();
          uVar2 = *(int *)(param_1 + 0x230) - 1;
          if (uVar2 < 0xc) {
            puVar17 = *(undefined **)(&UNK_10df5a170 + (ulong)uVar2 * 8);
          }
          else {
            puVar17 = (undefined *)0xc;
          }
          func_0x0001087f3698();
          uVar6 = uVar11 == 0x100;
          uVar12 = 7;
          if (0xff < uVar11) {
            uVar12 = 3;
          }
          uVar16 = 0x100000000;
          goto LAB_1087f3210;
        }
        bVar7 = lVar13 - lVar15 == 1;
        if (lVar13 - lVar15 < 2) {
          if (bVar7) {
            iVar10 = 2;
          }
          else {
            bVar7 = lVar13 == lVar15;
            iVar10 = 3;
            if (!bVar7) {
              iVar10 = 4;
            }
          }
        }
        else {
          iVar10 = 1;
        }
        func_0x0001087f3814();
        if (bVar7) {
          if (extraout_w8_00 == 10) {
LAB_1087f3034:
            if (iVar10 == 3) {
              iVar10 = 2;
            }
            else if (iVar10 == 2) {
              iVar10 = 1;
            }
            goto LAB_1087f31b0;
          }
LAB_1087f31c8:
          uVar6 = iVar10 == 1;
          uVar9 = 2;
          if (!(bool)uVar6) {
            uVar9 = iVar10 == 2;
          }
        }
        else {
          if (extraout_w9 == 8) {
            if ((extraout_w8_00 & 0xfffffffd) == 8) goto LAB_1087f3034;
            goto LAB_1087f31c8;
          }
LAB_1087f31b0:
          if (extraout_w9 == 5) {
            if (extraout_w8_00 != 10) goto LAB_1087f31c8;
          }
          else if (extraout_w9 != 8 || (extraout_w8_00 & 0xfffffffd) != 8) goto LAB_1087f31c8;
          uVar6 = iVar10 - 1U == 2;
          uVar9 = 2;
          if (1 < iVar10 - 1U) {
            uVar9 = 0;
          }
        }
        func_0x0001087f385c(uVar9);
        FUN_1087f2a4c();
        goto LAB_1087f3204;
      }
      uVar11 = 0;
      func_0x0001087f3850();
      uVar12 = 7;
      uVar16 = extraout_x8_00;
    }
LAB_1087f3210:
    uVar16 = (ulong)puVar17 | uVar16;
    FUN_1088fcbd8(param_1 + 0x2f0);
    if ((uVar11 & 1) != 0) {
      plVar14 = *(long **)(*(long *)(param_1 + 0x4e0) + 0x20);
      uVar6 = *(char *)(*(long *)(param_1 + 0x4e8) + 0xb8) == '\x01';
      if ((bool)uVar6) {
        uStack_d0 = (undefined *)CONCAT26(uStack_d0._6_2_,0x100120099);
        func_0x0001087f37d4();
        func_0x0001087f383c();
        uStack_88 = uStack_88 & 0xffffffffffffff00;
        uStack_b0 = extraout_x8_02;
        uStack_a8 = extraout_x10;
        uStack_90 = extraout_x9;
        func_0x0001087f371c(*(undefined8 *)(*plVar14 + 0x28));
        func_0x0001086cf1c0(&uStack_d0);
      }
      else {
        func_0x0001087f36c8(*(undefined8 *)(*plVar14 + 0x10),plVar14);
      }
    }
LAB_1087f3294:
    *(undefined1 *)(param_1 + 0x278) = 0;
    *(undefined1 *)(param_1 + 0x2b0) = 0;
    uStack_d0 = (undefined *)CONCAT44(uVar12,5);
    func_0x0001087f37a8(&uStack_d0);
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_88 = uVar16;
    FUN_1087e46f8(param_1 + 0x10,&uStack_d0);
    func_0x0001087e49c4(&uStack_d0);
    FUN_1087a33a8(param_1 + 0x278);
    func_0x0001087f3668();
    func_0x0001087f363c();
    func_0x0001087f3620();
    func_0x0001087f35f0();
    func_0x0001087f36b0();
    func_0x0001087f37e0();
    func_0x0001087f3724();
    if ((bool)uVar6) {
      return;
    }
    ___stack_chk_fail();
  }
  else if (*(int *)(param_1 + 0x270) == 0) {
    func_0x0001087f373c();
    func_0x0001087f365c();
    lVar13 = param_1 + 0x450;
    func_0x000107c278b8(lVar13);
    func_0x0001087f35ac();
    func_0x000107c28824(&uStack_d0,param_1 + 0x450,lVar13);
    func_0x0001087f360c();
    func_0x0001087f35b8();
    func_0x0001087f379c();
    func_0x0001087f37c0();
    FUN_1087b95a0();
    func_0x0001087f35f8();
    func_0x0001087f3598();
    func_0x0001087f3790();
    func_0x0001087f3688();
    lVar13 = *(long *)(param_1 + 0x4e8);
    func_0x0001087f3670();
    func_0x0001087f36a0();
    func_0x0001087f36b8();
    func_0x000107c2882c();
    if ((*(ulong *)(lVar13 + 0x120) >> 0x20 & 1) != 0) {
      func_0x0001087f3564();
      func_0x0001087f3690();
    }
    plVar14 = *(long **)(*(long *)(param_1 + 0x4e0) + 0x40);
    func_0x0001087f3784();
    func_0x0001087f371c(*(undefined8 *)(*plVar14 + 0x50));
    func_0x0001087f35c4();
    func_0x0001087f3678();
    func_0x0001087f37fc();
    uVar16 = 0;
    goto LAB_1087f3294;
  }
  func_0x00010563ab98();
LAB_1087f3380:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1087f3384);
  (*pcVar3)();
}



/* Entry: 1087f3528; end: 1087f3563;  */

void FUN_1087f3528(long param_1)

{
  func_0x000107c27f9c(param_1 + 0x1f8);
  func_0x0001087f37cc();
  func_0x0001087f363c();
  func_0x0001087f3620();
  func_0x0001087f35f0();
  func_0x0001087f36b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087f3564; end: 1087f38b3;  */

void FUN_1087f3564(void)

{
  return;
}



/* Entry: 1087f38b4; end: 1087f4287;  */

void FUN_1087f38b4(undefined8 param_1,long param_2,undefined8 *param_3,long *param_4)

{
  byte *pbVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  uint extraout_w8;
  long lVar13;
  long *extraout_x8;
  long *extraout_x8_00;
  int *piVar14;
  int *extraout_x8_01;
  ulong uVar15;
  ulong extraout_x8_02;
  long extraout_x8_03;
  long lVar16;
  long extraout_x8_04;
  int *piVar17;
  int *extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  uint extraout_w10_07;
  uint extraout_w10_08;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar18;
  long lVar19;
  byte *pbVar20;
  long lVar21;
  int *piVar22;
  undefined **ppuVar23;
  undefined **ppuVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  int *piStack_110;
  byte *pbStack_108;
  int *piStack_100;
  undefined **ppuStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined **ppuStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_b0;
  undefined8 uStack_70;
  
  uStack_70 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = (undefined8 *)0x1f0;
  puVar8 = param_3;
  __Znwm();
  *puVar6 = FUN_1087f5800;
  puVar6[1] = FUN_1087f5ba8;
  puVar6[0x3c] = param_3;
  func_0x0001087e472c(puVar6 + 2);
  pbVar7 = (byte *)(puVar6 + 2);
  FUN_1087e46b4(param_1,pbVar7);
  lVar13 = param_3[0x18];
  lVar21 = param_3[0x19];
  uVar5 = lVar13 == lVar21;
  if ((bool)uVar5) {
    uStack_e0 = (code *)0x7;
    func_0x0001087f5bf0();
    func_0x0001087f5edc();
    goto LAB_1087f402c;
  }
  puVar6[0x2c] = 0;
  puVar6[0x2d] = 0;
  puVar6[0x2e] = 0;
  func_0x00010528d190(puVar6 + 0x2c,(lVar21 - lVar13) / 0x18);
  piStack_110 = (int *)(puVar6 + 4);
  pbStack_108 = (byte *)(puVar6 + 0x35);
  lVar21 = param_3[0x19];
  for (lVar13 = param_3[0x18]; lVar13 != lVar21; lVar13 = lVar13 + 0x18) {
    FUN_1086c2e14(puVar6 + 0x2c,lVar13);
  }
  puVar8 = (undefined8 *)0x30;
  __Znwm();
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = &PTR_FUN_110a72b60;
  puVar9 = puVar8 + 3;
  *puVar9 = &PTR_DAT_110a72c30;
  plVar11 = puVar8 + 4;
  *plVar11 = 0;
  uStack_e0 = (code *)0x0;
  func_0x000107c27f9c(&uStack_e0);
  puVar8[5] = 0;
  uStack_e0 = (code *)0x0;
  func_0x000107c27f98(&uStack_e0);
  FUN_1087f49e8(&uStack_e0);
  ppuStack_f8 = ppuStack_d8;
  piStack_100 = (int *)uStack_e0;
  uStack_e8 = 0;
  uStack_e0 = (code *)0x0;
  ppuStack_d8 = (undefined **)0x0;
  uStack_f0 = 0;
  func_0x000107c27f98(&uStack_f0);
  func_0x000107c27f9c(&uStack_e8);
  func_0x000107c27fec(&uStack_e0);
  func_0x000107c288b0(plVar11,&piStack_100);
  func_0x000107c2887c(puVar8 + 5,(ulong)&piStack_100 | 8);
  func_0x000107c27f98((ulong)&piStack_100 | 8);
  func_0x000107c27f9c(&piStack_100);
  *puVar9 = &PTR_FUN_110a72bb0;
  puVar6[0x32] = puVar9;
  puVar6[0x33] = puVar8;
  lVar13 = *plVar11;
  puVar6[0x34] = lVar13;
  if (lVar13 != 0) {
    do {
      func_0x0001087f5c14();
    } while (extraout_w10 != 0);
  }
  puVar8 = *(undefined8 **)(param_2 + 0x10);
  lVar13 = *(long *)(param_2 + 0x28);
  uVar25 = *(undefined8 *)(param_2 + 0x20);
  puVar6[5] = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)piStack_110 = uVar25;
  if (lVar13 != 0) {
    do {
      func_0x0001087f5f88();
    } while (extraout_w10_00 != 0);
  }
  FUN_10865ecd8(puVar6 + 6,param_3 + 4);
  func_0x000107c27994(puVar6 + 10,param_3 + 8);
  func_0x00010869fbb8(puVar6 + 0xd,param_3 + 0xb);
  uVar25 = param_3[0x15];
  puVar6[0x18] = param_3[0x16];
  puVar6[0x17] = uVar25;
  *(undefined1 *)(puVar6 + 0x19) = *(undefined1 *)(param_3 + 0x17);
  FUN_10867be90(puVar6 + 0x1a,param_3 + 0x18);
  uVar3 = *(undefined4 *)(param_3 + 0x1b);
  *(undefined1 *)(puVar6 + 0x1e) = 0;
  *(undefined4 *)(puVar6 + 0x1d) = uVar3;
  *(undefined1 *)((long)puVar6 + 0xec) = *(undefined1 *)((long)param_3 + 0xdc);
  *(undefined1 *)(puVar6 + 0x25) = 0;
  uVar5 = *(char *)(param_3 + 0x23) == '\x01';
  if ((bool)uVar5) {
    func_0x0001087f2c98(puVar6 + 0x1e,param_3 + 0x1c);
  }
  puVar6[0x26] = param_3[0x24];
  puVar9 = puVar6 + 0x27;
  func_0x000108687044(puVar9,puVar6 + 0x2c);
  puVar6[0x2b] = puVar6[0x33];
  puVar6[0x2a] = puVar6[0x32];
  if (puVar6[0x33] != 0) {
    do {
      func_0x0001087f5f88();
    } while (extraout_w10_01 != 0);
  }
  func_0x000107c28150();
  ppuVar23 = (undefined **)puVar8[2];
  __ZNSt3__15mutex4lockEv(ppuVar23 + 1);
  ppuVar24 = (undefined **)ppuVar23[0xe];
  uStack_e0 = FUN_1087f4b9c;
  ppuStack_d8 = &PTR_FUN_110a72c88;
  puVar10 = (undefined8 *)0x140;
  __Znwm();
  uVar25 = *(undefined8 *)piStack_110;
  puVar10[1] = puVar6[5];
  *puVar10 = uVar25;
  piStack_110[0] = 0;
  piStack_110[1] = 0;
  puVar6[5] = 0;
  FUN_1086abe10(puVar10 + 2,puVar6 + 6);
  puVar10[0x23] = puVar6[0x27];
  uVar25 = puVar6[0x28];
  uVar27 = puVar6[0x2b];
  uVar26 = puVar6[0x2a];
  puVar6[0x27] = 0;
  puVar6[0x28] = 0;
  puVar10[0x25] = puVar6[0x29];
  puVar10[0x24] = uVar25;
  puVar10[0x27] = uVar27;
  puVar10[0x26] = uVar26;
  puVar6[0x29] = 0;
  puVar6[0x2a] = 0;
  puVar6[0x2b] = 0;
  puStack_d0 = puVar10;
  puStack_b0 = puVar9;
  func_0x000107c28154(ppuVar23 + 9,&uStack_e0);
  func_0x0001087f5ee4();
  __ZNSt3__15mutex6unlockEv(ppuVar23 + 1);
  if (ppuVar24 == (undefined **)0x0) {
    plVar11 = (long *)*puVar8;
    ppuStack_d8 = (undefined **)puVar8[3];
    uStack_e0 = (code *)puVar8[2];
    if (puVar8[3] != 0) {
      do {
        func_0x0001087f5f88();
      } while (extraout_w10_02 != 0);
    }
    (**(code **)(*plVar11 + 0x10))();
    func_0x000107c27e74(&uStack_e0);
  }
  FUN_1087f4288(piStack_110);
  puVar6[0x36] = puVar6[0x34];
  if (puVar6[0x34] != 0) {
    do {
      func_0x0001087f5c14();
    } while (extraout_w10_03 != 0);
  }
  func_0x000107c314e0(puVar6 + 0x37,*(undefined8 *)(param_2 + 0x40),
                      *(long *)(param_2 + 0x50) * 1000000);
  FUN_1087f42c0(pbStack_108,puVar6 + 0x36,puVar6 + 0x37);
  func_0x000107c27f9c(puVar6 + 0x37);
  func_0x0001087f5db0();
  puVar6[0x3a] = *(long *)pbStack_108;
  if (*(long *)pbStack_108 != 0) {
    do {
      func_0x0001087f5c14();
    } while (extraout_w10_04 != 0);
  }
  lVar13 = *param_4;
  puVar6[0x3b] = lVar13;
  if (lVar13 != 0) {
    do {
      func_0x0001087f5c14();
    } while (extraout_w10_05 != 0);
  }
  func_0x000107c278b8(piStack_110,&UNK_10f4bbcd4);
  pbVar7 = (byte *)(puVar6 + 0x3a);
  puVar8 = puVar6 + 0x3b;
  FUN_1087f44a4(puVar6 + 0x39,pbVar7,puVar8,piStack_110);
  puVar6[0x38] = puVar6[0x39];
  do {
    func_0x0001087f5c14();
  } while (extraout_w10_06 != 0);
  func_0x0001087f5db8(puVar6[0x38]);
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar6 + 0x3d) = 0;
    lVar13 = puVar6[0x38];
    func_0x0001087f5c68();
    lVar21 = *(long *)pbVar7;
    if (lVar21 == 0) {
      func_0x000107c3a5c0();
      lVar21 = *(long *)pbVar7;
    }
    plVar11 = (long *)(lVar13 + 0x10);
    do {
      if (*plVar11 == 0) {
        func_0x0001087f5c9c();
        plVar11 = extraout_x8_00;
        uVar4 = extraout_w10_08;
        uVar18 = extraout_w11_00;
      }
      else {
        func_0x0001087f5e20();
        plVar11 = extraout_x8;
        uVar4 = extraout_w10_07;
        uVar18 = extraout_w11;
      }
      if ((uVar18 & 1) != 0) {
        pbVar20 = *(byte **)(lVar13 + 0x90);
        uVar15 = (ulong)pbVar20[1];
        uVar5 = pbVar20[1] == *pbVar20;
        if ((bool)uVar5) {
          func_0x0001087f5c8c();
          func_0x0001087f5c24();
          func_0x0001087f5c54();
          *(byte **)(pbVar20 + 8) = pbVar7;
          *(byte **)(lVar13 + 0x90) = pbVar7;
          uVar15 = extraout_x8_02;
          pbVar20 = pbVar7;
        }
        uVar15 = uVar15 & 0xffffffff;
        pbVar1 = pbVar20 + uVar15 * 0x18 + 0x10;
        pbVar1[0] = 0;
        pbVar1[1] = 0;
        pbVar1[2] = 0;
        pbVar1[3] = 0;
        pbVar1[4] = 0;
        pbVar1[5] = 0;
        pbVar1[6] = 0;
        pbVar1[7] = 0;
        *(undefined8 **)(pbVar20 + uVar15 * 0x18 + 0x18) = puVar6;
        *(long *)(pbVar20 + uVar15 * 0x18 + 0x20) = lVar21;
        func_0x0001087f5cfc(*(undefined8 *)(lVar13 + 0x90));
        *(undefined8 *)(lVar13 + 0x10) = 0;
        goto LAB_1087f4034;
      }
    } while ((uVar4 >> 1 & 1) == 0);
  }
  puVar8 = puVar6 + 0x38;
  FUN_1087f4690();
  FUN_1087f46fc(puVar6 + 0x2f);
  func_0x0001087f5f30();
  func_0x0001087f5ea4();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(piStack_110);
  func_0x0001087f5e9c();
  func_0x0001087f5eac();
  piVar22 = (int *)puVar6[0x2f];
  piVar2 = (int *)puVar6[0x30];
  func_0x0001087f5eb4((long)piVar2 - (long)piVar22);
  if (!(bool)uVar5) goto LAB_1087f4004;
  uVar5 = piVar22 == piVar2;
  piVar14 = piVar22;
  if (!(bool)uVar5) {
    piVar17 = piVar22 + 0x24;
    while (uVar5 = piVar17 == piVar2, !(bool)uVar5) {
      func_0x0001087f5f0c();
      piVar14 = extraout_x8_01;
      piVar17 = extraout_x9;
    }
  }
  if (*piVar14 == 0) {
    func_0x0001087f6014();
    piVar14 = piVar22;
    for (; piVar22 != piVar2; piVar22 = piVar22 + 0x24) {
      *(undefined1 *)(puVar6 + 4) = 0;
      *(undefined1 *)(puVar6 + 7) = 0;
      if (*piVar22 == 0) {
        if ((char)piVar22[0x19] == '\x01') {
          piStack_100 = piVar14;
          ppuStack_f8 = ppuVar23;
          func_0x000107c2793c(&UNK_10f4bbd1a);
          func_0x0001087f5cdc();
          func_0x0001087f5e14();
          goto LAB_1087f3e9c;
        }
        if (((char)piVar22[8] != '\x01') || (*(long *)(piVar22 + 2) == *(long *)(piVar22 + 4))) {
          piStack_100 = piVar14;
          ppuStack_f8 = ppuVar23;
          func_0x000107c2793c(&UNK_10f4bbd4c);
          func_0x0001087f5cdc();
          func_0x0001087f5e14();
          goto LAB_1087f3e9c;
        }
      }
      else {
        piStack_100 = piVar14;
        ppuStack_f8 = ppuVar23;
        func_0x000107c2793c(&UNK_10f4bbcf4);
        func_0x0001087f5cdc();
        func_0x0001087f5e14();
LAB_1087f3e9c:
        func_0x0001087f5dfc();
      }
      uVar5 = *(char *)(puVar6 + 7) == '\x01';
      if ((bool)uVar5) {
        piStack_100 = piStack_110;
        ppuStack_f8 = ppuVar24;
        func_0x0001087f5ff0();
        func_0x0001087f5cdc();
        puVar8 = &uStack_e0;
        func_0x000107c27b94(piStack_110);
        func_0x0001087f5dfc();
        uStack_e0 = (code *)0x700000007;
        func_0x0001087f5bf0();
        func_0x0001087f5edc();
        func_0x000107c279a4(piStack_110);
        goto LAB_1087f4014;
      }
      func_0x000107c279a4(piStack_110);
      piVar14 = piVar14 + 0x24;
    }
    uVar5 = *(int *)(puVar6[0x3c] + 0xa0) == 0x11;
    if ((bool)uVar5) {
      lVar19 = puVar6[0x2f];
      lVar13 = puVar6[0x3c] + 0x58;
      func_0x0001086ce5d8();
      lVar21 = lVar13;
      FUN_1086bc264();
      lVar12 = lVar21;
      func_0x0001087f48a0();
      uVar5 = *(char *)(lVar19 + 0x58) == '\x01';
      if ((bool)uVar5) {
        func_0x000107c29edc(&uStack_e0,lVar19 + 0x40);
        if ((*(ulong *)(lVar12 + 8) & 1) != 0) {
          func_0x0001087f5f38();
        }
        func_0x0001087f5fb0(lVar12 + 0x20);
        func_0x0001087f5dfc();
        func_0x000107c29edc(&uStack_e0,lVar19 + 0x28);
        if ((*(ulong *)(lVar12 + 8) & 1) != 0) {
          func_0x0001087f5f38();
        }
        func_0x0001087f5fb0(lVar12 + 0x18);
        func_0x0001087f5dfc();
LAB_1087f3fc8:
        func_0x000107c29edc(&uStack_e0,lVar19 + 8);
        if ((*(ulong *)(lVar12 + 8) & 1) != 0) {
          func_0x0001087f5f38();
        }
        func_0x0001087f5fb0(lVar12 + 0x10);
        func_0x0001087f5dfc();
        *(undefined1 *)(lVar21 + 0x10) = 0;
        *(undefined1 *)(lVar13 + 0x34) = 1;
        uStack_e0 = (code *)0x7;
      }
      else {
        func_0x0001087f607c(*(undefined8 *)(lVar12 + 0x18));
        lVar16 = extraout_x8_03;
        if (extraout_x8_03 < 0) {
          lVar16 = *(long *)(extraout_x9_00 + 8);
        }
        if (lVar16 != 0) {
          func_0x0001087f607c(*(undefined8 *)(lVar12 + 0x20));
          lVar16 = extraout_x8_04;
          if (extraout_x8_04 < 0) {
            lVar16 = *(long *)(extraout_x9_01 + 8);
          }
          if (lVar16 != 0) goto LAB_1087f3fc8;
        }
LAB_1087f4004:
        uStack_e0 = (code *)0x700000007;
      }
      goto LAB_1087f400c;
    }
    uStack_e0 = (code *)0x700000007;
    func_0x0001087f5bf0();
    func_0x0001087f5edc();
  }
  else {
    uStack_e0 = (code *)CONCAT44(*piVar14,7);
LAB_1087f400c:
    func_0x0001087f5bf0();
    func_0x0001087f5edc();
  }
LAB_1087f4014:
  func_0x0001087f5f28();
  pbVar7 = pbStack_108;
  func_0x000107c27f9c(pbStack_108);
  func_0x0001087f5e94();
  func_0x0001087f5e8c();
  func_0x0001087f5e84();
LAB_1087f402c:
  while( true ) {
    func_0x0001087f5d0c();
    func_0x0001087f5e04();
LAB_1087f4034:
    func_0x0001087f6050(uStack_70);
    if ((bool)uVar5) break;
    ___stack_chk_fail();
    if ((int)puVar8 == 0) {
      do {
        __Unwind_Resume(pbVar7);
        func_0x000104bd46a0();
      } while ((int)puVar8 == 0);
      func_0x0001087f5dfc();
      func_0x000107c279a4(piStack_110);
    }
    else {
      func_0x0001087f5dfc();
    }
    func_0x0001087f5f28();
    func_0x000107c27f9c(pbStack_108);
    func_0x0001087f5e94();
    func_0x0001087f5e8c();
    func_0x0001087f5e84();
    ___cxa_begin_catch();
    func_0x0001087f5d74();
    ___cxa_end_catch();
  }
  return;
}



/* Entry: 1087f4288; end: 1087f42bf;  */

undefined8 FUN_1087f4288(long param_1)

{
  undefined8 unaff_x19;
  
  FUN_1087f4b74(param_1 + 0x130);
  func_0x000104be1594(param_1 + 0x118);
  FUN_1086a7738(param_1 + 0x10);
  func_0x0001005528ec();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 1087f42c0; end: 1087f44a3;  */

void FUN_1087f42c0(long *param_1,long *param_2)

{
  uint uVar1;
  undefined1 in_ZR;
  long lVar2;
  long *plVar3;
  uint extraout_w8;
  long extraout_x8;
  long lVar4;
  long *plVar5;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long extraout_x8_02;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  uint extraout_w10_04;
  uint extraout_w10_05;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar6;
  long lVar7;
  
  lVar2 = 0x70;
  __Znwm();
  func_0x0001087f5d44(FUN_1087f54c4);
  if (extraout_x8 != 0) {
    do {
      func_0x0001087f5c14();
    } while (extraout_w10 != 0);
  }
  lVar4 = *param_2;
  *(long *)(lVar2 + 0x40) = lVar4;
  if (lVar4 != 0) {
    do {
      func_0x0001087f5c14();
    } while (extraout_w10_00 != 0);
  }
  FUN_1087f4f30(lVar2 + 0x10);
  func_0x0001087f5e44();
  lVar4 = *param_1;
  *(long *)(lVar2 + 0x58) = lVar4;
  if (lVar4 != 0) {
    do {
      func_0x0001087f5c14();
    } while (extraout_w10_01 != 0);
  }
  *(long *)(lVar2 + 0x60) = *(long *)(lVar2 + 0x40);
  if (*(long *)(lVar2 + 0x40) != 0) {
    do {
      func_0x0001087f5c14();
    } while (extraout_w10_02 != 0);
  }
  plVar3 = (long *)(lVar2 + 0x20);
  func_0x000107c278b8(plVar3,&UNK_10f4afc82);
  func_0x0001087f60a8();
  FUN_1087f4cc0();
  func_0x0001087f5e34();
  do {
    func_0x0001087f5c14();
  } while (extraout_w10_03 != 0);
  func_0x0001087f5cbc();
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(lVar2 + 0x68) = 0;
    lVar4 = *(long *)(lVar2 + 0x48);
    func_0x0001087f5c68();
    lVar7 = *plVar3;
    if (lVar7 == 0) {
      func_0x000107c3a5c0();
      lVar7 = *plVar3;
    }
    plVar5 = (long *)(lVar4 + 0x10);
    do {
      if (*plVar5 == 0) {
        func_0x0001087f5c9c();
        plVar5 = extraout_x8_01;
        uVar1 = extraout_w10_05;
        uVar6 = extraout_w11_00;
      }
      else {
        func_0x0001087f5e20();
        plVar5 = extraout_x8_00;
        uVar1 = extraout_w10_04;
        uVar6 = extraout_w11;
      }
      if ((uVar6 & 1) != 0) {
        func_0x0001087f5d34();
        if ((bool)in_ZR) {
          func_0x0001087f5c8c();
          func_0x0001087f5c24();
          func_0x0001087f5c54();
          func_0x0001087f5f4c();
          *(long **)(lVar4 + 0x90) = plVar3;
        }
        func_0x0001087f5d24();
        *(long *)(extraout_x8_02 + 0x20) = lVar7;
        func_0x0001087f5cfc(*(undefined8 *)(lVar4 + 0x90));
        *(undefined8 *)(lVar4 + 0x10) = 0;
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x0001087f5e2c();
  func_0x0001087f5dd4();
  func_0x0001087f5d14();
  func_0x0001087f5d60();
  func_0x0001087f5d1c();
  func_0x0001087f5d7c();
  func_0x0001087f5d84();
  func_0x0001087f5d0c();
  func_0x0001087f5d58();
  func_0x0001087f5db0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar2);
  return;
}



/* Entry: 1087f44a4; end: 1087f468f;  */

void FUN_1087f44a4(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4)

{
  uint uVar1;
  undefined1 in_ZR;
  long lVar2;
  long *plVar3;
  uint extraout_w8;
  long extraout_x8;
  long lVar4;
  long *plVar5;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long extraout_x8_02;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  uint extraout_w10_04;
  uint extraout_w10_05;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar6;
  long lVar7;
  
  lVar2 = 0x70;
  __Znwm();
  func_0x0001087f5d44(FUN_1087f5750);
  if (extraout_x8 != 0) {
    do {
      func_0x0001087f5c14();
    } while (extraout_w10 != 0);
  }
  lVar4 = *param_3;
  *(long *)(lVar2 + 0x40) = lVar4;
  if (lVar4 != 0) {
    do {
      func_0x0001087f5c14();
    } while (extraout_w10_00 != 0);
  }
  FUN_1087f4f30(lVar2 + 0x10);
  FUN_1087f4c44(param_1,*(undefined8 *)(lVar2 + 0x10));
  lVar4 = *param_2;
  *(long *)(lVar2 + 0x58) = lVar4;
  if (lVar4 != 0) {
    do {
      func_0x0001087f5c14();
    } while (extraout_w10_01 != 0);
  }
  *(long *)(lVar2 + 0x60) = *(long *)(lVar2 + 0x40);
  if (*(long *)(lVar2 + 0x40) != 0) {
    do {
      func_0x0001087f5c14();
    } while (extraout_w10_02 != 0);
  }
  plVar3 = (long *)(lVar2 + 0x20);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(plVar3,param_4);
  func_0x0001087f60a8();
  FUN_1087f501c();
  func_0x0001087f5e34();
  do {
    func_0x0001087f5c14();
  } while (extraout_w10_03 != 0);
  func_0x0001087f5cbc();
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(lVar2 + 0x68) = 0;
    lVar4 = *(long *)(lVar2 + 0x48);
    func_0x0001087f5c68();
    lVar7 = *plVar3;
    if (lVar7 == 0) {
      func_0x000107c3a5c0();
      lVar7 = *plVar3;
    }
    plVar5 = (long *)(lVar4 + 0x10);
    do {
      if (*plVar5 == 0) {
        func_0x0001087f5c9c();
        plVar5 = extraout_x8_01;
        uVar1 = extraout_w10_05;
        uVar6 = extraout_w11_00;
      }
      else {
        func_0x0001087f5e20();
        plVar5 = extraout_x8_00;
        uVar1 = extraout_w10_04;
        uVar6 = extraout_w11;
      }
      if ((uVar6 & 1) != 0) {
        func_0x0001087f5d34();
        if ((bool)in_ZR) {
          func_0x0001087f5c8c();
          func_0x0001087f5c24();
          func_0x0001087f5c54();
          func_0x0001087f5f4c();
          *(long **)(lVar4 + 0x90) = plVar3;
        }
        func_0x0001087f5d24();
        *(long *)(extraout_x8_02 + 0x20) = lVar7;
        func_0x0001087f5cfc(*(undefined8 *)(lVar4 + 0x90));
        *(undefined8 *)(lVar4 + 0x10) = 0;
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x0001087f5e2c();
  func_0x0001087f5dd4();
  func_0x0001087f5d14();
  func_0x0001087f5d60();
  func_0x0001087f5d1c();
  func_0x0001087f5d7c();
  func_0x0001087f5d84();
  func_0x0001087f5d0c();
  func_0x0001087f5d58();
  func_0x0001087f5db0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar2);
  return;
}



/* Entry: 1087f4690; end: 1087f46e3;  */

long FUN_1087f4690(long *param_1)

{
  code *pcVar1;
  undefined1 auStack_28 [8];
  
  if (((uint)*(undefined8 *)(*param_1 + 0x10) >> 5 & 1) == 0) {
    return *param_1 + 0x98;
  }
  __ZNSt13exception_ptrC1ERKS_(auStack_28,*param_1 + 0x18);
  __ZSt17rethrow_exceptionSt13exception_ptr(auStack_28);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1087f46d8);
  (*pcVar1)();
}



/* Entry: 1087f46e4; end: 1087f46e7;  */

undefined8 * FUN_1087f46e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a72b20;
  func_0x000107c28868(param_1 + 8);
  func_0x000107c28808(param_1 + 6);
  func_0x000107c286d8(param_1 + 4);
  func_0x000107c2814c(param_1 + 2);
  return param_1;
}



/* Entry: 1087f46e8; end: 1087f46fb;  */

void FUN_1087f46e8(void)

{
  func_0x0001087f48f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087f46fc; end: 1087f4873;  */

undefined8 * FUN_1087f46fc(undefined8 *param_1,long *param_2)

{
  undefined4 *puVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined4 *puVar6;
  undefined8 *puStack_80;
  undefined1 uStack_78;
  undefined8 *puStack_70;
  undefined8 **ppuStack_68;
  undefined8 **ppuStack_60;
  undefined1 uStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar6 = (undefined4 *)*param_2;
  puVar1 = (undefined4 *)param_2[1];
  uStack_78 = 0;
  lVar2 = (long)puVar1 - (long)puVar6;
  puStack_80 = param_1;
  if (lVar2 != 0) {
    uVar5 = lVar2 / 0x90;
    if (0x1c71c71c71c71c7 < uVar5) {
      FUN_1086445cc();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1087f482c);
      (*pcVar3)();
    }
    puVar4 = param_1 + 2;
    func_0x00010864472c();
    *param_1 = puVar4;
    param_1[1] = puVar4;
    param_1[2] = puVar4 + uVar5 * 0x12;
    ppuStack_68 = &puStack_50;
    ppuStack_60 = &puStack_48;
    uStack_58 = 0;
    puStack_70 = param_1 + 2;
    puStack_50 = puVar4;
    for (; puStack_48 = puVar4, puVar6 != puVar1; puVar6 = puVar6 + 0x24) {
      *(undefined4 *)puVar4 = *puVar6;
      func_0x000104be0ccc(puVar4 + 1,puVar6 + 2);
      func_0x000104be0d7c(puVar4 + 5,puVar6 + 10);
      puVar4[0xc] = *(undefined8 *)(puVar6 + 0x18);
      FUN_108643c70(puVar4 + 0xd,puVar6 + 0x1a);
      puVar4 = puStack_48 + 0x12;
    }
    uStack_58 = 1;
    FUN_1086447cc(&puStack_70);
    param_1[1] = puVar4;
  }
  uStack_78 = 1;
  FUN_1087f4874(&puStack_80);
  return param_1;
}



/* Entry: 1087f4874; end: 1087f493f;  */

long FUN_1087f4874(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x000108644408(param_1);
  }
  return param_1;
}



/* Entry: 1087f4940; end: 1087f4943;  */

void FUN_1087f4940(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a72b60;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1087f4944; end: 1087f4957;  */

void FUN_1087f4944(void)

{
  FUN_1087f4b64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087f4958; end: 1087f4967;  */

void FUN_1087f4958(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001087f4960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1087f4968; end: 1087f499f;  */

void FUN_1087f4968(void)

{
  func_0x0001087f5fe4();
  return;
}



/* Entry: 1087f49a0; end: 1087f49e7;  */

void FUN_1087f49a0(void)

{
  long unaff_x19;
  undefined1 auStack_38 [24];
  
  func_0x0001087f6070();
  FUN_1087f46fc();
  FUN_1087f4ac8(*(undefined8 *)(unaff_x19 + 0x10),(undefined8 *)(unaff_x19 + 0x10),auStack_38);
  func_0x0001086443d4(auStack_38);
  return;
}



/* Entry: 1087f49e8; end: 1087f4a47;  */

void FUN_1087f49e8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = (undefined8 *)0xb8;
  __Znwm();
  func_0x000107c31510();
  *puVar1 = &PTR_FUN_110a72c58;
  *(undefined1 *)(puVar1 + 0x13) = 0;
  *(undefined1 *)(puVar1 + 0x16) = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  *param_1 = puVar1;
  param_1[1] = puVar1;
  func_0x000107c27f98(&uStack_30);
  func_0x000107c27f9c(&uStack_28);
  return;
}



/* Entry: 1087f4a48; end: 1087f4a4b;  */

undefined8 * FUN_1087f4a48(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a72c58;
  if (*(char *)(param_1 + 0x16) == '\x01') {
    func_0x0001086443d4(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 1087f4a4c; end: 1087f4a5f;  */

void FUN_1087f4a4c(void)

{
  FUN_1087f4a60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087f4a60; end: 1087f4ac7;  */

undefined8 * FUN_1087f4a60(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a72c58;
  if (*(char *)(param_1 + 0x16) == '\x01') {
    func_0x0001086443d4(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 1087f4ac8; end: 1087f4b63;  */

void FUN_1087f4ac8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uStack_38;
  
  do {
    uStack_38 = 0;
    lVar1 = param_1 + 0x10;
    func_0x000107c27ff0(lVar1,&uStack_38,1,2);
    if ((int)lVar1 != 0) {
      if (*(char *)(param_1 + 0xb0) == '\x01') {
        func_0x0001086443d4(param_1 + 0x98);
        *(undefined1 *)(param_1 + 0xb0) = 0;
      }
      FUN_1087f46fc(param_1 + 0x98,param_3);
      *(undefined1 *)(param_1 + 0xb0) = 1;
      *(undefined8 *)(param_1 + 0x10) = 2;
      func_0x000107c31508(param_1,param_2);
      return;
    }
  } while (((uint)uStack_38 >> 1 & 1) == 0);
  return;
}



/* Entry: 1087f4b64; end: 1087f4b73;  */

void FUN_1087f4b64(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a72b60;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1087f4b74; end: 1087f4b9b;  */

long FUN_1087f4b74(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 1087f4b9c; end: 1087f4c0b;  */

void FUN_1087f4b9c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  plVar4 = (long *)*puVar5;
  uStack_28 = puVar5[0x27];
  uStack_30 = puVar5[0x26];
  if (puVar5[0x27] != 0) {
    plVar1 = (long *)(puVar5[0x27] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  (**(code **)(*plVar4 + 0x18))(plVar4,puVar5 + 0x23,&uStack_30);
  FUN_1086445a4(&uStack_30);
  return;
}



/* Entry: 1087f4c0c; end: 1087f4c2b;  */

void FUN_1087f4c0c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1087f4288();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1087f4c2c; end: 1087f4c43;  */

void FUN_1087f4c2c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1087f4c44; end: 1087f4c8b;  */

void FUN_1087f4c44(long *param_1,long param_2)

{
  int extraout_w10;
  long lStack_18;
  
  lStack_18 = param_2;
  if (param_2 == 0) {
    lStack_18 = 0;
  }
  else {
    do {
      func_0x0001087f5c14();
    } while (extraout_w10 != 0);
  }
  *param_1 = lStack_18;
  lStack_18 = 0;
  func_0x000107c27f9c(&lStack_18);
  return;
}



/* Entry: 1087f4c8c; end: 1087f4cbf;  */

/* WARNING: Removing unreachable block (ram,0x0001005f953c) */
/* WARNING: Removing unreachable block (ram,0x0001005f9544) */
/* WARNING: Removing unreachable block (ram,0x0001005f954c) */

void FUN_1087f4c8c(long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  puVar5 = (undefined8 *)(param_1 + 8);
  FUN_1087f4ac8(*puVar5,puVar5,param_2);
  plVar6 = (long *)*puVar5;
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar4 >> 0x21 == 1) {
      (**(code **)(*plVar6 + 0x10))(plVar6,1,puVar5);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  *puVar5 = 0;
  return;
}



/* Entry: 1087f4cc0; end: 1087f4f2f;  */

void FUN_1087f4cc0(long *param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar3;
  long *plVar4;
  undefined1 extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  uint extraout_w8_02;
  long extraout_x8;
  long lVar5;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long *extraout_x8_03;
  long *plVar6;
  long *extraout_x8_04;
  long *extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  undefined1 extraout_w9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  uint extraout_w10_02;
  uint extraout_w10_03;
  int extraout_w10_04;
  uint extraout_w10_05;
  uint extraout_w10_06;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar7;
  uint extraout_w11_01;
  uint extraout_w11_02;
  undefined8 *unaff_x20;
  long unaff_x22;
  long *unaff_x23;
  
  func_0x0001087f5e50();
  plVar4 = param_1;
  func_0x0001087f5d44(FUN_1087f52e8);
  if (extraout_x8 != 0) {
    do {
      func_0x0001087f5c14();
    } while (extraout_w10 != 0);
  }
  lVar5 = *unaff_x23;
  param_1[8] = lVar5;
  if (lVar5 != 0) {
    do {
      func_0x0001087f5c14();
    } while (extraout_w10_00 != 0);
  }
  func_0x0001087f5ddc();
  func_0x0001087f5e44();
  func_0x0001087f5f58();
  func_0x0001087f5e34();
  do {
    func_0x0001087f5c14();
  } while (extraout_w10_01 != 0);
  func_0x0001087f5cbc();
  if ((extraout_w8_00 >> 1 & 1) == 0) {
    *(undefined1 *)(param_1 + 0xc) = 0;
    func_0x0001087f5cac();
    lVar5 = *plVar4;
    if (lVar5 == 0) {
      func_0x000107c3a5c0();
      lVar5 = *plVar4;
    }
    func_0x0001087f609c();
    plVar6 = extraout_x8_00;
    do {
      if (*plVar6 == 0) {
        func_0x0001087f5c9c();
        plVar6 = extraout_x8_02;
        uVar1 = extraout_w10_03;
        uVar7 = extraout_w11_00;
      }
      else {
        func_0x0001087f5e20();
        plVar6 = extraout_x8_01;
        uVar1 = extraout_w10_02;
        uVar7 = extraout_w11;
      }
      if ((uVar7 & 1) != 0) {
        func_0x0001087f5d34();
        if ((bool)in_ZR) {
          func_0x0001087f5c8c();
          uVar3 = extraout_w8;
          if ((bool)in_CY) {
            uVar3 = extraout_w9;
          }
          func_0x0001087f5ef4();
          *(undefined1 *)plVar4 = uVar3;
          func_0x0001087f5c78(0);
          *(long **)(unaff_x22 + 0x90) = plVar4;
        }
        func_0x0001087f5d24();
        *(long *)(extraout_x8_06 + 0x20) = lVar5;
        goto LAB_1087f4e74;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x0001087f5f68();
  unaff_x22 = *plVar4;
  func_0x0001087f5d14();
  func_0x0001087f5d60();
  uVar3 = unaff_x22 == 1;
  if ((bool)uVar3) {
    func_0x0001087f5db8(param_1[8]);
    if ((extraout_w8_02 >> 5 & 1) == 0) {
      func_0x0001087f5f44();
      FUN_1087c26bc();
      func_0x0001087f6088();
      ___cxa_throw(plVar4);
    }
    else {
      func_0x0001087f5cec();
      func_0x0001087f5f70();
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1087f4ec4);
    (*pcVar2)();
  }
  func_0x0001087f5e68(*unaff_x20);
  do {
    func_0x0001087f5c14();
  } while (extraout_w10_04 != 0);
  func_0x0001087f5cbc();
  if ((extraout_w8_01 >> 1 & 1) == 0) {
    func_0x0001087f6064();
    func_0x0001087f5cac();
    lVar5 = *plVar4;
    if (lVar5 == 0) {
      func_0x000107c3a5c0();
      lVar5 = *plVar4;
    }
    func_0x0001087f609c();
    plVar6 = extraout_x8_03;
    do {
      if (*plVar6 == 0) {
        func_0x0001087f5c9c();
        plVar6 = extraout_x8_05;
        uVar1 = extraout_w10_06;
        uVar7 = extraout_w11_02;
      }
      else {
        func_0x0001087f5e20();
        plVar6 = extraout_x8_04;
        uVar1 = extraout_w10_05;
        uVar7 = extraout_w11_01;
      }
      if ((uVar7 & 1) != 0) {
        func_0x0001087f5d34();
        if ((bool)uVar3) {
          func_0x0001087f5c8c();
          func_0x0001087f5c24();
          func_0x0001087f5c54();
          func_0x0001087f5f4c();
          *(long **)(unaff_x22 + 0x90) = plVar4;
        }
        func_0x0001087f5d24();
        *(long *)(extraout_x8_07 + 0x20) = lVar5;
LAB_1087f4e74:
        func_0x0001087f5cfc(*(undefined8 *)(unaff_x22 + 0x90));
        *(undefined8 *)(unaff_x22 + 0x10) = 0;
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x0001087f5e2c();
  func_0x0001087f5dd4();
  func_0x0001087f5d14();
  func_0x0001087f5d0c();
  func_0x0001087f5d1c();
  func_0x0001087f5d58();
  func_0x0001087f5db0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087f4f30; end: 1087f4f6b;  */

undefined8 * FUN_1087f4f30(undefined8 *param_1)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_1087f49e8(&uStack_30);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x000107c27fec(&uStack_30);
  return param_1;
}



/* Entry: 1087f4f6c; end: 1087f501b;  */

void FUN_1087f4f6c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  long lStack_38;
  
  func_0x000107c28874(&uStack_48);
  func_0x000107c28878(&uStack_50,2);
  uVar1 = uStack_50;
  uStack_50 = 0;
  func_0x000107c28888(lStack_38 + 0x18,uVar1);
  func_0x000107c28890(&uStack_50);
  *(undefined8 *)(lStack_38 + 8) = 2;
  func_0x000107c2887c(lStack_38,auStack_40);
  func_0x000107c28880(lStack_38,0,param_2,param_3);
  uVar1 = uStack_48;
  uStack_50 = 0;
  uStack_48 = 0;
  *param_1 = uVar1;
  func_0x000107c27f9c(&uStack_50);
  func_0x000107c2889c(&uStack_48);
  return;
}



/* Entry: 1087f501c; end: 1087f528b;  */

void FUN_1087f501c(long *param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar3;
  long *plVar4;
  undefined1 extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  uint extraout_w8_02;
  long extraout_x8;
  long lVar5;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long *extraout_x8_03;
  long *plVar6;
  long *extraout_x8_04;
  long *extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  undefined1 extraout_w9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  uint extraout_w10_02;
  uint extraout_w10_03;
  int extraout_w10_04;
  uint extraout_w10_05;
  uint extraout_w10_06;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar7;
  uint extraout_w11_01;
  uint extraout_w11_02;
  undefined8 *unaff_x20;
  long unaff_x22;
  long *unaff_x23;
  
  func_0x0001087f5e50();
  plVar4 = param_1;
  func_0x0001087f5d44(FUN_1087f5574);
  if (extraout_x8 != 0) {
    do {
      func_0x0001087f5c14();
    } while (extraout_w10 != 0);
  }
  lVar5 = *unaff_x23;
  param_1[8] = lVar5;
  if (lVar5 != 0) {
    do {
      func_0x0001087f5c14();
    } while (extraout_w10_00 != 0);
  }
  func_0x0001087f5ddc();
  func_0x0001087f5e44();
  func_0x0001087f5f58();
  func_0x0001087f5e34();
  do {
    func_0x0001087f5c14();
  } while (extraout_w10_01 != 0);
  func_0x0001087f5cbc();
  if ((extraout_w8_00 >> 1 & 1) == 0) {
    *(undefined1 *)(param_1 + 0xc) = 0;
    func_0x0001087f5cac();
    lVar5 = *plVar4;
    if (lVar5 == 0) {
      func_0x000107c3a5c0();
      lVar5 = *plVar4;
    }
    func_0x0001087f609c();
    plVar6 = extraout_x8_00;
    do {
      if (*plVar6 == 0) {
        func_0x0001087f5c9c();
        plVar6 = extraout_x8_02;
        uVar1 = extraout_w10_03;
        uVar7 = extraout_w11_00;
      }
      else {
        func_0x0001087f5e20();
        plVar6 = extraout_x8_01;
        uVar1 = extraout_w10_02;
        uVar7 = extraout_w11;
      }
      if ((uVar7 & 1) != 0) {
        func_0x0001087f5d34();
        if ((bool)in_ZR) {
          func_0x0001087f5c8c();
          uVar3 = extraout_w8;
          if ((bool)in_CY) {
            uVar3 = extraout_w9;
          }
          func_0x0001087f5ef4();
          *(undefined1 *)plVar4 = uVar3;
          func_0x0001087f5c78(0);
          *(long **)(unaff_x22 + 0x90) = plVar4;
        }
        func_0x0001087f5d24();
        *(long *)(extraout_x8_06 + 0x20) = lVar5;
        goto LAB_1087f51d0;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x0001087f5f68();
  unaff_x22 = *plVar4;
  func_0x0001087f5d14();
  func_0x0001087f5d60();
  uVar3 = unaff_x22 == 1;
  if ((bool)uVar3) {
    func_0x0001087f5db8(param_1[8]);
    if ((extraout_w8_02 >> 5 & 1) == 0) {
      func_0x0001087f5f44();
      FUN_1087aead8();
      func_0x0001087f603c();
      ___cxa_throw(plVar4);
    }
    else {
      func_0x0001087f5cec();
      func_0x0001087f5f70();
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1087f5220);
    (*pcVar2)();
  }
  func_0x0001087f5e68(*unaff_x20);
  do {
    func_0x0001087f5c14();
  } while (extraout_w10_04 != 0);
  func_0x0001087f5cbc();
  if ((extraout_w8_01 >> 1 & 1) == 0) {
    func_0x0001087f6064();
    func_0x0001087f5cac();
    lVar5 = *plVar4;
    if (lVar5 == 0) {
      func_0x000107c3a5c0();
      lVar5 = *plVar4;
    }
    func_0x0001087f609c();
    plVar6 = extraout_x8_03;
    do {
      if (*plVar6 == 0) {
        func_0x0001087f5c9c();
        plVar6 = extraout_x8_05;
        uVar1 = extraout_w10_06;
        uVar7 = extraout_w11_02;
      }
      else {
        func_0x0001087f5e20();
        plVar6 = extraout_x8_04;
        uVar1 = extraout_w10_05;
        uVar7 = extraout_w11_01;
      }
      if ((uVar7 & 1) != 0) {
        func_0x0001087f5d34();
        if ((bool)uVar3) {
          func_0x0001087f5c8c();
          func_0x0001087f5c24();
          func_0x0001087f5c54();
          func_0x0001087f5f4c();
          *(long **)(unaff_x22 + 0x90) = plVar4;
        }
        func_0x0001087f5d24();
        *(long *)(extraout_x8_07 + 0x20) = lVar5;
LAB_1087f51d0:
        func_0x0001087f5cfc(*(undefined8 *)(unaff_x22 + 0x90));
        *(undefined8 *)(unaff_x22 + 0x10) = 0;
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x0001087f5e2c();
  func_0x0001087f5dd4();
  func_0x0001087f5d14();
  func_0x0001087f5d0c();
  func_0x0001087f5d1c();
  func_0x0001087f5d58();
  func_0x0001087f5db0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087f528c; end: 1087f52e7;  */

void FUN_1087f528c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_3;
  FUN_1088429f0(auStack_38);
  func_0x000107c28260(uVar1,&DAT_10f2fb62f,auStack_38);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
  *param_3 = uVar1;
  return;
}



/* Entry: 1087f52e8; end: 1087f547b;  */

void FUN_1087f52e8(long *param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined1 uVar3;
  long *plVar4;
  uint extraout_w8;
  uint extraout_w8_00;
  long *plVar5;
  long *extraout_x8;
  long *extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong uVar6;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar7;
  long lVar8;
  long lVar9;
  long *unaff_x22;
  
  if ((*(byte *)(param_1 + 0xc) & 1) == 0) {
    plVar4 = param_1;
    func_0x0001087f5f68();
    lVar8 = *plVar4;
    func_0x0001087f5d14();
    func_0x0001087f5d60();
    uVar3 = lVar8 == 1;
    if ((bool)uVar3) {
      func_0x0001087f5db8(param_1[8]);
      if ((extraout_w8_00 >> 5 & 1) == 0) {
        func_0x0001087f5f44();
        FUN_1087c26bc();
        func_0x0001087f6088();
        ___cxa_throw(plVar4);
      }
      else {
        func_0x0001087f5cec();
        func_0x0001087f5f70();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1087f542c);
      (*pcVar2)();
    }
    func_0x0001087f5e68(param_1[7]);
    do {
      func_0x0001087f5c14();
    } while (extraout_w10 != 0);
    func_0x0001087f5cbc();
    if ((extraout_w8 >> 1 & 1) == 0) {
      func_0x0001087f6064();
      lVar8 = param_1[9];
      func_0x0001087f5c68();
      lVar9 = *plVar4;
      if (lVar9 == 0) {
        func_0x000107c3a5c0();
        lVar9 = *plVar4;
      }
      plVar5 = (long *)(lVar8 + 0x10);
      do {
        if (*plVar5 == 0) {
          func_0x0001087f5c9c();
          plVar5 = extraout_x8_00;
          uVar1 = extraout_w10_01;
          uVar7 = extraout_w11_00;
        }
        else {
          func_0x0001087f5e20();
          plVar5 = extraout_x8;
          uVar1 = extraout_w10_00;
          uVar7 = extraout_w11;
        }
        if ((uVar7 & 1) != 0) {
          func_0x0001087f6028();
          uVar6 = extraout_x8_01;
          if ((bool)uVar3) {
            func_0x0001087f5c8c();
            func_0x0001087f5c24();
            func_0x0001087f5c54();
            unaff_x22[1] = (long)plVar4;
            *(long **)(lVar8 + 0x90) = plVar4;
            uVar6 = extraout_x8_02;
            unaff_x22 = plVar4;
          }
          uVar6 = uVar6 & 0xffffffff;
          unaff_x22[uVar6 * 3 + 2] = 0;
          unaff_x22[uVar6 * 3 + 3] = (long)param_1;
          unaff_x22[uVar6 * 3 + 4] = lVar9;
          func_0x0001087f5cfc(*(undefined8 *)(lVar8 + 0x90));
          *(undefined8 *)(lVar8 + 0x10) = 0;
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  func_0x0001087f5e2c();
  func_0x0001087f5dd4();
  func_0x0001087f5d14();
  func_0x0001087f5d0c();
  func_0x0001087f5d1c();
  func_0x0001087f5d58();
  func_0x0001087f5dcc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087f547c; end: 1087f54c3;  */

void FUN_1087f547c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x48;
  if ((*(byte *)(param_1 + 0x60) & 1) == 0) {
    lVar1 = param_1 + 0x50;
    func_0x000107c27f9c(param_1 + 0x48);
  }
  func_0x000107c27f9c(lVar1);
  func_0x0001087f5d0c();
  func_0x0001087f5d1c();
  func_0x0001087f5d58();
  func_0x0001087f5dcc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087f54c4; end: 1087f553b;  */

void FUN_1087f54c4(long param_1)

{
  FUN_1087f4690(param_1 + 0x48);
  func_0x0001087f5dd4();
  func_0x0001087f5d14();
  func_0x0001087f5d60();
  func_0x0001087f5d1c();
  func_0x0001087f5d7c();
  func_0x0001087f5d84();
  func_0x0001087f5d0c();
  func_0x0001087f5d58();
  func_0x0001087f5dcc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087f553c; end: 1087f5573;  */

void FUN_1087f553c(void)

{
  func_0x0001087f5fd8();
  func_0x0001087f5d60();
  func_0x0001087f5d1c();
  func_0x0001087f5d7c();
  func_0x0001087f5d84();
  func_0x0001087f5d0c();
  func_0x0001087f5d58();
  func_0x0001087f5dcc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087f5574; end: 1087f5707;  */

void FUN_1087f5574(long *param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined1 uVar3;
  long *plVar4;
  uint extraout_w8;
  uint extraout_w8_00;
  long *plVar5;
  long *extraout_x8;
  long *extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong uVar6;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar7;
  long lVar8;
  long lVar9;
  long *unaff_x22;
  
  if ((*(byte *)(param_1 + 0xc) & 1) == 0) {
    plVar4 = param_1;
    func_0x0001087f5f68();
    lVar8 = *plVar4;
    func_0x0001087f5d14();
    func_0x0001087f5d60();
    uVar3 = lVar8 == 1;
    if ((bool)uVar3) {
      func_0x0001087f5db8(param_1[8]);
      if ((extraout_w8_00 >> 5 & 1) == 0) {
        func_0x0001087f5f44();
        FUN_1087aead8();
        func_0x0001087f603c();
        ___cxa_throw(plVar4);
      }
      else {
        func_0x0001087f5cec();
        func_0x0001087f5f70();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1087f56b8);
      (*pcVar2)();
    }
    func_0x0001087f5e68(param_1[7]);
    do {
      func_0x0001087f5c14();
    } while (extraout_w10 != 0);
    func_0x0001087f5cbc();
    if ((extraout_w8 >> 1 & 1) == 0) {
      func_0x0001087f6064();
      lVar8 = param_1[9];
      func_0x0001087f5c68();
      lVar9 = *plVar4;
      if (lVar9 == 0) {
        func_0x000107c3a5c0();
        lVar9 = *plVar4;
      }
      plVar5 = (long *)(lVar8 + 0x10);
      do {
        if (*plVar5 == 0) {
          func_0x0001087f5c9c();
          plVar5 = extraout_x8_00;
          uVar1 = extraout_w10_01;
          uVar7 = extraout_w11_00;
        }
        else {
          func_0x0001087f5e20();
          plVar5 = extraout_x8;
          uVar1 = extraout_w10_00;
          uVar7 = extraout_w11;
        }
        if ((uVar7 & 1) != 0) {
          func_0x0001087f6028();
          uVar6 = extraout_x8_01;
          if ((bool)uVar3) {
            func_0x0001087f5c8c();
            func_0x0001087f5c24();
            func_0x0001087f5c54();
            unaff_x22[1] = (long)plVar4;
            *(long **)(lVar8 + 0x90) = plVar4;
            uVar6 = extraout_x8_02;
            unaff_x22 = plVar4;
          }
          uVar6 = uVar6 & 0xffffffff;
          unaff_x22[uVar6 * 3 + 2] = 0;
          unaff_x22[uVar6 * 3 + 3] = (long)param_1;
          unaff_x22[uVar6 * 3 + 4] = lVar9;
          func_0x0001087f5cfc(*(undefined8 *)(lVar8 + 0x90));
          *(undefined8 *)(lVar8 + 0x10) = 0;
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  func_0x0001087f5e2c();
  func_0x0001087f5dd4();
  func_0x0001087f5d14();
  func_0x0001087f5d0c();
  func_0x0001087f5d1c();
  func_0x0001087f5d58();
  func_0x0001087f5dcc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087f5708; end: 1087f574f;  */

void FUN_1087f5708(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x48;
  if ((*(byte *)(param_1 + 0x60) & 1) == 0) {
    lVar1 = param_1 + 0x50;
    func_0x000107c27f9c(param_1 + 0x48);
  }
  func_0x000107c27f9c(lVar1);
  func_0x0001087f5d0c();
  func_0x0001087f5d1c();
  func_0x0001087f5d58();
  func_0x0001087f5dcc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087f5750; end: 1087f57c7;  */

void FUN_1087f5750(long param_1)

{
  FUN_1087f4690(param_1 + 0x48);
  func_0x0001087f5dd4();
  func_0x0001087f5d14();
  func_0x0001087f5d60();
  func_0x0001087f5d1c();
  func_0x0001087f5d7c();
  func_0x0001087f5d84();
  func_0x0001087f5d0c();
  func_0x0001087f5d58();
  func_0x0001087f5dcc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087f57c8; end: 1087f57ff;  */

void FUN_1087f57c8(void)

{
  func_0x0001087f5fd8();
  func_0x0001087f5d60();
  func_0x0001087f5d1c();
  func_0x0001087f5d7c();
  func_0x0001087f5d84();
  func_0x0001087f5d0c();
  func_0x0001087f5d58();
  func_0x0001087f5dcc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087f5800; end: 1087f5ba7;  */

void FUN_1087f5800(long param_1)

{
  int *piVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  int *piVar8;
  int *extraout_x8;
  long extraout_x8_00;
  long lVar9;
  long extraout_x8_01;
  int *piVar10;
  int *extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long lVar11;
  int *piVar12;
  undefined8 uStack_d8;
  undefined8 uStack_68;
  
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = param_1 + 0x1c0;
  FUN_1087f4690();
  FUN_1087f46fc(param_1 + 0x178);
  func_0x0001087f5f30();
  func_0x0001087f5ea4();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x20);
  func_0x0001087f5e9c();
  func_0x0001087f5eac();
  piVar12 = *(int **)(param_1 + 0x178);
  piVar1 = *(int **)(param_1 + 0x180);
  func_0x0001087f5eb4((long)piVar1 - (long)piVar12);
  uVar2 = 0;
  if ((bool)in_ZR) {
    uVar2 = piVar12 == piVar1;
    piVar8 = piVar12;
    if (!(bool)uVar2) {
      piVar10 = piVar12 + 0x24;
      while (uVar2 = piVar10 == piVar1, !(bool)uVar2) {
        func_0x0001087f5f0c();
        piVar8 = extraout_x8;
        piVar10 = extraout_x9;
      }
    }
    if (*piVar8 != 0) {
      uStack_d8 = CONCAT44(*piVar8,7);
      goto LAB_1087f5a90;
    }
    func_0x0001087f6014();
    for (; piVar12 != piVar1; piVar12 = piVar12 + 0x24) {
      *(undefined1 *)(param_1 + 0x20) = 0;
      *(undefined1 *)(param_1 + 0x38) = 0;
      if (*piVar12 == 0) {
        if ((char)piVar12[0x19] == '\x01') {
          func_0x000107c2793c(&UNK_10f4bbd1a);
          func_0x0001087f5ccc();
          func_0x0001087f5d68();
          goto LAB_1087f594c;
        }
        if (((char)piVar12[8] != '\x01') || (*(long *)(piVar12 + 2) == *(long *)(piVar12 + 4))) {
          func_0x000107c2793c(&UNK_10f4bbd4c);
          func_0x0001087f5ccc();
          func_0x0001087f5d68();
          goto LAB_1087f594c;
        }
      }
      else {
        func_0x000107c2793c(&UNK_10f4bbcf4);
        func_0x0001087f5ccc();
        func_0x0001087f5d68();
LAB_1087f594c:
        func_0x0001087f5e0c();
      }
      uVar2 = *(char *)(param_1 + 0x38) == '\x01';
      if ((bool)uVar2) {
        func_0x0001087f5ff0();
        func_0x0001087f5ccc();
        func_0x0001087f5d68();
        func_0x0001087f5e0c();
        uStack_d8 = 0x700000007;
        func_0x0001087f5d8c();
        puVar7 = &uStack_d8;
        func_0x0001087e49c4(puVar7);
        func_0x0001087f600c();
        goto LAB_1087f5a9c;
      }
      func_0x0001087f600c();
    }
    uVar2 = 0;
    if (*(int *)(*(long *)(param_1 + 0x1e0) + 0xa0) == 0x11) {
      lVar11 = *(long *)(param_1 + 0x178);
      lVar4 = *(long *)(param_1 + 0x1e0) + 0x58;
      func_0x0001086ce5d8();
      lVar5 = lVar4;
      FUN_1086bc264();
      lVar6 = lVar5;
      func_0x0001087f48a0();
      uVar2 = *(char *)(lVar11 + 0x58) == '\x01';
      if ((bool)uVar2) {
        func_0x000107c29edc(&uStack_d8,lVar11 + 0x40);
        if ((*(ulong *)(lVar6 + 8) & 1) != 0) {
          func_0x0001087f5f38();
        }
        func_0x0001087f6004(lVar6 + 0x20);
        func_0x0001087f5e0c();
        func_0x000107c29edc(&uStack_d8,lVar11 + 0x28);
        if ((*(ulong *)(lVar6 + 8) & 1) != 0) {
          func_0x0001087f5f38();
        }
        func_0x0001087f6004(lVar6 + 0x18);
        func_0x0001087f5e0c();
LAB_1087f5a4c:
        func_0x000107c29edc(&uStack_d8,lVar11 + 8);
        if ((*(ulong *)(lVar6 + 8) & 1) != 0) {
          func_0x0001087f5f38();
        }
        func_0x0001087f6004(lVar6 + 0x10);
        func_0x0001087f5e0c();
        *(undefined1 *)(lVar5 + 0x10) = 0;
        *(undefined1 *)(lVar4 + 0x34) = 1;
        uStack_d8 = 7;
        goto LAB_1087f5a90;
      }
      func_0x0001087f607c(*(undefined8 *)(lVar6 + 0x18));
      lVar9 = extraout_x8_00;
      if (extraout_x8_00 < 0) {
        lVar9 = *(long *)(extraout_x9_00 + 8);
      }
      if (lVar9 != 0) {
        func_0x0001087f607c(*(undefined8 *)(lVar6 + 0x20));
        lVar9 = extraout_x8_01;
        if (extraout_x8_01 < 0) {
          lVar9 = *(long *)(extraout_x9_01 + 8);
        }
        if (lVar9 != 0) goto LAB_1087f5a4c;
      }
    }
  }
  uStack_d8 = 0x700000007;
LAB_1087f5a90:
  func_0x0001087f5d8c();
  puVar7 = &uStack_d8;
  func_0x0001087e49c4(puVar7);
LAB_1087f5a9c:
  func_0x0001087f5f28();
  func_0x0001087f5ffc();
  func_0x0001087f5e94();
  func_0x0001087f5e8c();
  func_0x0001087f5e84();
  while( true ) {
    func_0x0001087f5d0c();
    func_0x0001087f5e04();
    func_0x0001087f6050(uStack_68);
    if ((bool)uVar2) {
      return;
    }
    ___stack_chk_fail();
    if ((int)lVar3 == 0) break;
    func_0x0001087f5e0c();
    func_0x0001087f5f28();
    func_0x0001087f5ffc();
    func_0x0001087f5e94();
    func_0x0001087f5e8c();
    func_0x0001087f5e84();
    func_0x0001087f5e74();
    func_0x0001087f5d74();
    ___cxa_end_catch();
  }
  func_0x0001087f5e7c();
  func_0x000107c27f9c(puVar7 + 0x38);
  func_0x0001087f5ea4();
  func_0x0001087f5d1c();
  func_0x0001087f5e9c();
  func_0x0001087f5eac();
  func_0x0001087f5ffc();
  func_0x0001087f5e94();
  func_0x0001087f5e8c();
  func_0x0001087f5e84();
  func_0x0001087f5d0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar7);
  return;
}



/* Entry: 1087f5ba8; end: 1087f5bef;  */

void FUN_1087f5ba8(long param_1)

{
  func_0x000107c27f9c(param_1 + 0x1c0);
  func_0x0001087f5ea4();
  func_0x0001087f5d1c();
  func_0x0001087f5e9c();
  func_0x0001087f5eac();
  func_0x0001087f5ffc();
  func_0x0001087f5e94();
  func_0x0001087f5e8c();
  func_0x0001087f5e84();
  func_0x0001087f5d0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087f5bf0; end: 1087f60ff;  */

/* WARNING: Removing unreachable block (ram,0x0001005f953c) */
/* WARNING: Removing unreachable block (ram,0x0001005f9544) */
/* WARNING: Removing unreachable block (ram,0x0001005f954c) */

void FUN_1087f5bf0(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long unaff_x19;
  long *plVar6;
  undefined1 uStack0000000000000048;
  undefined1 uStack0000000000000080;
  undefined1 uStack0000000000000088;
  undefined1 uStack000000000000008c;
  undefined1 uStack0000000000000090;
  undefined1 uStack00000000000000a8;
  
  uStack0000000000000048 = 0;
  uStack0000000000000080 = 0;
  uStack0000000000000088 = 0;
  uStack000000000000008c = 0;
  uStack0000000000000090 = 0;
  uStack00000000000000a8 = 0;
  puVar5 = (undefined8 *)(unaff_x19 + 0x18);
  FUN_1087e4844(*puVar5,puVar5,&stack0x00000040);
  plVar6 = (long *)*puVar5;
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar4 >> 0x21 == 1) {
      (**(code **)(*plVar6 + 0x10))(plVar6,1,puVar5);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  *puVar5 = 0;
  return;
}



/* Entry: 1087f6100; end: 1087f629f;  */

undefined8 * FUN_1087f6100(undefined8 param_1,long param_2,long param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 auStack_2a8 [3];
  undefined1 auStack_290 [24];
  undefined1 auStack_278 [440];
  byte bStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  undefined1 uStack_78;
  undefined1 uStack_70;
  undefined1 uStack_6c;
  undefined1 uStack_68;
  undefined1 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x0001087e472c(auStack_2a8);
  FUN_1087e46b4(param_1,auStack_2a8);
  func_0x000107c29f64(auStack_290,*(undefined8 *)(param_2 + 0x10),param_3 + 0x40,2);
  if ((bStack_c0 & 1) != 0) {
    ppuVar1 = *(undefined ***)(param_3 + 0x98);
    if (*(int *)(param_3 + 0xa0) != 10) {
      ppuVar1 = &PTR_PTR_11327c140;
    }
    ppuVar2 = &PTR_PTR_11326be38;
    if ((undefined **)ppuVar1[4] != (undefined **)0x0) {
      ppuVar2 = (undefined **)ppuVar1[4];
    }
    if (*(int *)((long)ppuVar2 + 0x24) == 2) {
      puVar6 = ppuVar2[3];
    }
    else {
      puVar6 = (undefined *)0x0;
    }
    uStack_b8 = (ulong)uStack_b8._4_4_ << 0x20;
    puVar3 = auStack_278;
    puVar5 = &uStack_b8;
    FUN_1086a3d00(puVar3,puVar5,param_2 + 0x20);
    if ((((ulong)puVar5 & 1) != 0) && ((long)puVar6 <= (long)puVar3)) {
      uStack_b8 = 3;
      goto LAB_1087f61e4;
    }
  }
  uStack_b8 = 0x700000003;
LAB_1087f61e4:
  uStack_b0 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  puVar5 = &uStack_b8;
  func_0x0001087e46f8(auStack_2a8);
  func_0x0001087e49c4(&uStack_b8);
  func_0x000107c288c8(auStack_290);
  while( true ) {
    puVar4 = auStack_2a8;
    func_0x000107c27fb8();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return puVar4;
    }
    ___stack_chk_fail();
    if ((int)puVar5 == 0) break;
    func_0x000107c288c8(auStack_290);
    ___cxa_begin_catch(puVar4);
    func_0x0001053360b0(auStack_2a8);
    ___cxa_end_catch();
  }
  __Unwind_Resume();
  *puVar4 = &PTR_FUN_110a72cb0;
  func_0x000107c27914(puVar4 + 4);
  func_0x000107c28808(puVar4 + 2);
  return puVar4;
}



/* Entry: 1087f62a0; end: 1087f62a3;  */

undefined8 * FUN_1087f62a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a72cb0;
  func_0x000107c27914(param_1 + 4);
  func_0x000107c28808(param_1 + 2);
  return param_1;
}



/* Entry: 1087f62a4; end: 1087f62b7;  */

void FUN_1087f62a4(void)

{
  FUN_1087f62b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087f62b8; end: 1087f62f7;  */

undefined8 * FUN_1087f62b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a72cb0;
  func_0x000107c27914(param_1 + 4);
  func_0x000107c28808(param_1 + 2);
  return param_1;
}



/* Entry: 1087f62f8; end: 1087f6697;  */

void FUN_1087f62f8(long param_1,undefined *param_2)

{
  uint uVar1;
  undefined ***pppuVar2;
  undefined **ppuVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  undefined *unaff_x20;
  undefined *puVar17;
  uint uVar18;
  undefined *puVar19;
  undefined *unaff_x24;
  float fVar20;
  long *plStack_128;
  long *plStack_120;
  undefined1 uStack_118;
  undefined4 uStack_117;
  undefined3 uStack_113;
  undefined *puStack_110;
  undefined1 *puStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  undefined1 auStack_f0 [40];
  undefined1 auStack_c8 [24];
  undefined **ppuStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined1 auStack_88 [40];
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = param_1 + 0x30;
  FUN_1086d5914();
  if (lVar7 == 0) {
    uStack_60 = *(undefined8 *)(param_2 + 0x18);
    FUN_1086afdec(auStack_88,&uStack_60,1);
    unaff_x20 = param_2;
    FUN_108848654();
    puVar19 = *(undefined **)(param_1 + 0x38);
    if (puVar19 != (undefined *)0x0) {
      puVar17 = puVar19 + -1;
      uVar18 = (uint)puVar19;
      if (((ulong)puVar19 & (ulong)puVar17) == 0) {
        unaff_x24 = (undefined *)((ulong)(uVar18 - 1) & (ulong)unaff_x20);
      }
      else {
        unaff_x24 = unaff_x20;
        if (puVar19 <= unaff_x20) {
          uVar1 = 0;
          if (uVar18 != 0) {
            uVar1 = (uint)unaff_x20 / uVar18;
          }
          unaff_x24 = (undefined *)(ulong)((uint)unaff_x20 - uVar1 * uVar18);
        }
      }
      plVar16 = *(long **)(*(long *)(param_1 + 0x30) + (long)unaff_x24 * 8);
      if (plVar16 != (long *)0x0) {
        do {
          while( true ) {
            plVar16 = (long *)*plVar16;
            if (plVar16 == (long *)0x0) goto LAB_1087f64a4;
            puVar6 = (undefined *)plVar16[1];
            if (puVar6 != unaff_x20) break;
            uVar8 = (ulong)(plVar16 + 2);
            func_0x000107c28078(uVar8,param_2);
            if ((uVar8 & 1) != 0) goto LAB_1087f65e8;
          }
          if (((ulong)puVar19 & (ulong)puVar17) == 0) {
            puVar6 = (undefined *)((ulong)puVar6 & (ulong)puVar17);
          }
          else if (puVar19 <= puVar6) {
            uVar8 = 0;
            if (puVar19 != (undefined *)0x0) {
              uVar8 = (ulong)puVar6 / (ulong)puVar19;
            }
            puVar6 = puVar6 + -(uVar8 * (long)puVar19);
          }
        } while (puVar6 == unaff_x24);
      }
    }
LAB_1087f64a4:
    ppuVar3 = (undefined **)0x50;
    __Znwm();
    plVar16 = (long *)(param_1 + 0x40);
    uStack_a0 = 0;
    *ppuVar3 = (undefined *)0x0;
    ppuVar3[1] = unaff_x20;
    ppuStack_b0 = ppuVar3;
    plStack_a8 = plVar16;
    func_0x000107c27994(ppuVar3 + 2,param_2);
    FUN_1086af1f8(ppuVar3 + 5,auStack_88);
    uStack_a0 = CONCAT71(uStack_a0._1_7_,1);
    fVar20 = (float)(*(long *)(param_1 + 0x48) + 1);
    if ((puVar19 == (undefined *)0x0) || (*(float *)(param_1 + 0x50) * (float)puVar19 < fVar20)) {
      uVar8 = 1;
      if ((undefined *)0x2 < puVar19) {
        uVar8 = (ulong)(((ulong)puVar19 & (ulong)(puVar19 + -1)) != 0);
      }
      uVar8 = uVar8 | (long)puVar19 << 1;
      uVar10 = (ulong)(fVar20 / *(float *)(param_1 + 0x50));
      if (uVar8 <= uVar10) {
        uVar8 = uVar10;
      }
      FUN_1086d5710(param_1 + 0x30,uVar8);
      puVar19 = *(undefined **)(param_1 + 0x38);
      if (((ulong)puVar19 & (ulong)(puVar19 + -1)) == 0) {
        unaff_x24 = (undefined *)((ulong)((int)puVar19 - 1) & (ulong)unaff_x20);
      }
      else {
        unaff_x24 = unaff_x20;
        if (puVar19 <= unaff_x20) {
          uVar8 = 0;
          if (puVar19 != (undefined *)0x0) {
            uVar8 = (ulong)unaff_x20 / (ulong)puVar19;
          }
          unaff_x24 = unaff_x20 + -(uVar8 * (long)puVar19);
        }
      }
    }
    lVar7 = *(long *)(param_1 + 0x30);
    plVar9 = *(long **)(lVar7 + (long)unaff_x24 * 8);
    if (plVar9 == (long *)0x0) {
      *ppuStack_b0 = (undefined *)*plVar16;
      *plVar16 = (long)ppuStack_b0;
      *(long **)(lVar7 + (long)unaff_x24 * 8) = plVar16;
      if (*ppuStack_b0 != (undefined *)0x0) {
        puVar17 = *(undefined **)(*ppuStack_b0 + 8);
        if (((ulong)puVar19 & (ulong)(puVar19 + -1)) == 0) {
          puVar17 = (undefined *)((ulong)puVar17 & (ulong)(puVar19 + -1));
        }
        else if (puVar19 <= puVar17) {
          uVar8 = 0;
          if (puVar19 != (undefined *)0x0) {
            uVar8 = (ulong)puVar17 / (ulong)puVar19;
          }
          puVar17 = puVar17 + -(uVar8 * (long)puVar19);
        }
        *(undefined ***)(lVar7 + (long)puVar17 * 8) = ppuStack_b0;
      }
    }
    else {
      *ppuStack_b0 = (undefined *)*plVar9;
      *plVar9 = (long)ppuStack_b0;
    }
    ppuStack_b0 = (undefined **)0x0;
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + 1;
    FUN_1086d589c(&ppuStack_b0);
LAB_1087f65e8:
    puVar4 = auStack_88;
    func_0x00010867bb84();
  }
  else {
    puVar4 = (undefined1 *)(lVar7 + 0x28);
    puVar19 = param_2 + 0x18;
    FUN_10867b1ac();
    if (((ulong)puVar19 & 1) == 0) {
      param_2 = param_2 + 0x50;
      FUN_108844938();
      unaff_x20 = (&PTR_s_Unknown_110a72e30)[(ulong)param_2 & 0xffffffff];
      uStack_a0 = 0;
      uStack_98 = 0;
      ppuStack_b0 = &PTR_FUN_110a609a8;
      plStack_a8 = (long *)0x0;
      uStack_90 = 0x1ea;
      func_0x000107c278b8(auStack_c8,&UNK_10f4bbd9a);
      pppuVar2 = &ppuStack_b0;
      func_0x000107c28824(pppuVar2,auStack_c8,unaff_x20);
      func_0x000107c2884c(auStack_88,pppuVar2);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c8);
      func_0x000107c2882c(&ppuStack_b0);
      plVar16 = *(long **)(param_1 + 0x20);
      func_0x000107c2884c(auStack_f0,auStack_88);
      (**(code **)(*plVar16 + 0x50))(plVar16,auStack_f0);
      func_0x000107c2882c(auStack_f0);
      puVar4 = auStack_88;
      func_0x000107c2882c();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  FUN_1086d589c(&ppuStack_b0);
  func_0x00010867bb84(auStack_88);
  puVar5 = puVar4;
  __Unwind_Resume();
  pcStack_f8 = FUN_1087f6698;
  plVar16 = (long *)(puVar5 + 0x30);
  puStack_110 = unaff_x20;
  puStack_108 = puVar4;
  puStack_100 = &stack0xfffffffffffffff0;
  FUN_1086d5914();
  if (plVar16 == (long *)0x0) {
    return;
  }
  uVar10 = *(ulong *)(puVar5 + 0x38);
  lVar7 = *plVar16;
  uVar8 = plVar16[1];
  uVar12 = uVar10 - 1;
  if ((uVar10 & uVar12) == 0) {
    uVar8 = uVar12 & uVar8;
  }
  else if (uVar10 <= uVar8) {
    uVar14 = 0;
    if (uVar10 != 0) {
      uVar14 = uVar8 / uVar10;
    }
    uVar8 = uVar8 - uVar14 * uVar10;
  }
  lVar13 = *(long *)(puVar5 + 0x30);
  plVar9 = *(long **)(lVar13 + uVar8 * 8);
  do {
    plVar11 = plVar9;
    plVar9 = (long *)*plVar11;
  } while ((long *)*plVar11 != plVar16);
  plStack_120 = (long *)(puVar5 + 0x40);
  if (plVar11 == plStack_120) {
LAB_1087f67c4:
    if (lVar7 == 0) {
LAB_1087f67f8:
      *(undefined8 *)(lVar13 + uVar8 * 8) = 0;
      lVar7 = *plVar16;
      goto LAB_1087f6800;
    }
    uVar14 = *(ulong *)(lVar7 + 8);
    if ((uVar10 & uVar12) == 0) {
      uVar15 = uVar14 & uVar12;
    }
    else {
      uVar15 = uVar14;
      if (uVar10 <= uVar14) {
        uVar15 = 0;
        if (uVar10 != 0) {
          uVar15 = uVar14 / uVar10;
        }
        uVar15 = uVar14 - uVar15 * uVar10;
      }
    }
    if (uVar15 != uVar8) goto LAB_1087f67f8;
  }
  else {
    uVar14 = plVar11[1];
    if ((uVar10 & uVar12) == 0) {
      uVar14 = uVar14 & uVar12;
    }
    else if (uVar10 <= uVar14) {
      uVar15 = 0;
      if (uVar10 != 0) {
        uVar15 = uVar14 / uVar10;
      }
      uVar14 = uVar14 - uVar15 * uVar10;
    }
    if (uVar14 != uVar8) goto LAB_1087f67c4;
LAB_1087f6800:
    if (lVar7 == 0) goto LAB_1087f6838;
    uVar14 = *(ulong *)(lVar7 + 8);
  }
  if ((uVar10 & uVar12) == 0) {
    uVar14 = uVar14 & uVar12;
  }
  else if (uVar10 <= uVar14) {
    uVar12 = 0;
    if (uVar10 != 0) {
      uVar12 = uVar14 / uVar10;
    }
    uVar14 = uVar14 - uVar12 * uVar10;
  }
  if (uVar14 != uVar8) {
    *(long **)(lVar13 + uVar14 * 8) = plVar11;
    lVar7 = *plVar16;
  }
LAB_1087f6838:
  *plVar11 = lVar7;
  *plVar16 = 0;
  *(long *)(puVar5 + 0x48) = *(long *)(puVar5 + 0x48) + -1;
  uStack_118 = 1;
  uStack_117 = 0;
  uStack_113 = 0;
  plStack_128 = plVar16;
  FUN_1086d589c(&plStack_128);
  return;
}



/* Entry: 1087f6698; end: 1087f66ab;  */

void FUN_1087f6698(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long *plStack_38;
  long *plStack_30;
  undefined1 uStack_28;
  undefined4 uStack_27;
  undefined3 uStack_23;
  
  plVar2 = (long *)(param_1 + 0x30);
  FUN_1086d5914();
  if (plVar2 == (long *)0x0) {
    return;
  }
  uVar5 = *(ulong *)(param_1 + 0x38);
  lVar3 = *plVar2;
  uVar4 = plVar2[1];
  uVar7 = uVar5 - 1;
  if ((uVar5 & uVar7) == 0) {
    uVar4 = uVar7 & uVar4;
  }
  else if (uVar5 <= uVar4) {
    uVar9 = 0;
    if (uVar5 != 0) {
      uVar9 = uVar4 / uVar5;
    }
    uVar4 = uVar4 - uVar9 * uVar5;
  }
  lVar8 = *(long *)(param_1 + 0x30);
  plVar1 = *(long **)(lVar8 + uVar4 * 8);
  do {
    plVar6 = plVar1;
    plVar1 = (long *)*plVar6;
  } while ((long *)*plVar6 != plVar2);
  plStack_30 = (long *)(param_1 + 0x40);
  if (plVar6 == plStack_30) {
LAB_1087f67c4:
    if (lVar3 == 0) {
LAB_1087f67f8:
      *(undefined8 *)(lVar8 + uVar4 * 8) = 0;
      lVar3 = *plVar2;
      goto LAB_1087f6800;
    }
    uVar9 = *(ulong *)(lVar3 + 8);
    if ((uVar5 & uVar7) == 0) {
      uVar10 = uVar9 & uVar7;
    }
    else {
      uVar10 = uVar9;
      if (uVar5 <= uVar9) {
        uVar10 = 0;
        if (uVar5 != 0) {
          uVar10 = uVar9 / uVar5;
        }
        uVar10 = uVar9 - uVar10 * uVar5;
      }
    }
    if (uVar10 != uVar4) goto LAB_1087f67f8;
  }
  else {
    uVar9 = plVar6[1];
    if ((uVar5 & uVar7) == 0) {
      uVar9 = uVar9 & uVar7;
    }
    else if (uVar5 <= uVar9) {
      uVar10 = 0;
      if (uVar5 != 0) {
        uVar10 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar10 * uVar5;
    }
    if (uVar9 != uVar4) goto LAB_1087f67c4;
LAB_1087f6800:
    if (lVar3 == 0) goto LAB_1087f6838;
    uVar9 = *(ulong *)(lVar3 + 8);
  }
  if ((uVar5 & uVar7) == 0) {
    uVar9 = uVar9 & uVar7;
  }
  else if (uVar5 <= uVar9) {
    uVar7 = 0;
    if (uVar5 != 0) {
      uVar7 = uVar9 / uVar5;
    }
    uVar9 = uVar9 - uVar7 * uVar5;
  }
  if (uVar9 != uVar4) {
    *(long **)(lVar8 + uVar9 * 8) = plVar6;
    lVar3 = *plVar2;
  }
LAB_1087f6838:
  *plVar6 = lVar3;
  *plVar2 = 0;
  *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + -1;
  uStack_28 = 1;
  uStack_27 = 0;
  uStack_23 = 0;
  plStack_38 = plVar2;
  FUN_1086d589c(&plStack_38);
  return;
}



/* Entry: 1087f66ac; end: 1087f66bf;  */

void FUN_1087f66ac(void)

{
  FUN_1087f66d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087f66c0; end: 1087f66cf;  */

undefined8 * FUN_1087f66c0(undefined8 *param_1)

{
  param_1[-1] = &PTR_DAT_110a72cf0;
  *param_1 = &PTR_FUN_110a72d20;
  FUN_1086d2c8c(param_1 + 5);
  func_0x000107c288a4(param_1 + 3);
  FUN_108687d5c(param_1);
  return param_1 + -1;
}



/* Entry: 1087f66d0; end: 1087f672b;  */

undefined8 * FUN_1087f66d0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a72cf0;
  param_1[1] = &PTR_FUN_110a72d20;
  FUN_1086d2c8c(param_1 + 6);
  func_0x000107c288a4(param_1 + 4);
  FUN_108687d5c(param_1 + 1);
  return param_1;
}



/* Entry: 1087f672c; end: 1087f68c3;  */

void FUN_1087f672c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long *plStack_38;
  long *plStack_30;
  undefined1 uStack_28;
  undefined4 uStack_27;
  undefined3 uStack_23;
  
  plVar2 = param_1;
  FUN_1086d5914();
  if (plVar2 == (long *)0x0) {
    return;
  }
  uVar5 = param_1[1];
  lVar3 = *plVar2;
  uVar4 = plVar2[1];
  uVar7 = uVar5 - 1;
  if ((uVar5 & uVar7) == 0) {
    uVar4 = uVar7 & uVar4;
  }
  else if (uVar5 <= uVar4) {
    uVar9 = 0;
    if (uVar5 != 0) {
      uVar9 = uVar4 / uVar5;
    }
    uVar4 = uVar4 - uVar9 * uVar5;
  }
  lVar8 = *param_1;
  plVar1 = *(long **)(lVar8 + uVar4 * 8);
  do {
    plVar6 = plVar1;
    plVar1 = (long *)*plVar6;
  } while ((long *)*plVar6 != plVar2);
  plStack_30 = param_1 + 2;
  if (plVar6 == plStack_30) {
LAB_1087f67c4:
    if (lVar3 == 0) {
LAB_1087f67f8:
      *(undefined8 *)(lVar8 + uVar4 * 8) = 0;
      lVar3 = *plVar2;
      goto LAB_1087f6800;
    }
    uVar9 = *(ulong *)(lVar3 + 8);
    if ((uVar5 & uVar7) == 0) {
      uVar10 = uVar9 & uVar7;
    }
    else {
      uVar10 = uVar9;
      if (uVar5 <= uVar9) {
        uVar10 = 0;
        if (uVar5 != 0) {
          uVar10 = uVar9 / uVar5;
        }
        uVar10 = uVar9 - uVar10 * uVar5;
      }
    }
    if (uVar10 != uVar4) goto LAB_1087f67f8;
  }
  else {
    uVar9 = plVar6[1];
    if ((uVar5 & uVar7) == 0) {
      uVar9 = uVar9 & uVar7;
    }
    else if (uVar5 <= uVar9) {
      uVar10 = 0;
      if (uVar5 != 0) {
        uVar10 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar10 * uVar5;
    }
    if (uVar9 != uVar4) goto LAB_1087f67c4;
LAB_1087f6800:
    if (lVar3 == 0) goto LAB_1087f6838;
    uVar9 = *(ulong *)(lVar3 + 8);
  }
  if ((uVar5 & uVar7) == 0) {
    uVar9 = uVar9 & uVar7;
  }
  else if (uVar5 <= uVar9) {
    uVar7 = 0;
    if (uVar5 != 0) {
      uVar7 = uVar9 / uVar5;
    }
    uVar9 = uVar9 - uVar7 * uVar5;
  }
  if (uVar9 != uVar4) {
    *(long **)(lVar8 + uVar9 * 8) = plVar6;
    lVar3 = *plVar2;
  }
LAB_1087f6838:
  *plVar6 = lVar3;
  *plVar2 = 0;
  param_1[3] = param_1[3] + -1;
  uStack_28 = 1;
  uStack_27 = 0;
  uStack_23 = 0;
  plStack_38 = plVar2;
  FUN_1086d589c(&plStack_38);
  return;
}



/* Entry: 1087f68c4; end: 1087f68c7;  */

undefined8 * FUN_1087f68c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a72f40;
  FUN_1087fd494(param_1 + 6);
  func_0x000107c29aa8(param_1 + 5);
  func_0x000107c29ab4(param_1 + 3);
  func_0x000107c29abc(param_1 + 1);
  return param_1;
}



/* Entry: 1087f68c8; end: 1087f68db;  */

void FUN_1087f68c8(void)

{
  func_0x0001087f6878();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087f68dc; end: 1087f6dfb;  */

void FUN_1087f68dc(long param_1,long *param_2,undefined8 param_3,undefined8 param_4,ulong *param_5)

{
  undefined **ppuVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  ulong *puVar5;
  undefined1 *puVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 extraout_x8;
  long extraout_x8_00;
  int extraout_w11;
  uint uVar10;
  undefined8 unaff_x21;
  long *unaff_x22;
  long lVar11;
  undefined1 auStack_a38 [16];
  undefined1 uStack_a28;
  undefined1 auStack_a20 [72];
  undefined1 uStack_9d8;
  ulong uStack_9d0;
  ulong uStack_9c8;
  undefined1 uStack_9c0;
  undefined1 uStack_800;
  undefined1 auStack_7f0 [24];
  undefined1 auStack_7d8 [40];
  undefined1 auStack_7b0 [80];
  undefined1 auStack_760 [24];
  undefined **ppuStack_748;
  byte bStack_608;
  ulong auStack_600 [4];
  undefined4 uStack_5e0;
  int iStack_5c8;
  undefined1 uStack_5b8;
  int iStack_4f8;
  char cStack_430;
  undefined4 uStack_bc;
  ulong uStack_b8;
  undefined8 uStack_58;
  
  func_0x000107c33694();
  uVar3 = *param_2 == param_2[1];
  uStack_58 = extraout_x8;
  if ((bool)uVar3) {
    func_0x0001087ff8c8(*(undefined8 *)(param_1 + 0x18));
    goto LAB_1087f6c00;
  }
  FUN_1086a5ca8(auStack_7b0,*(long *)(param_1 + 0x18) + 0x40);
  uVar3 = bStack_608 == 1;
  uVar10 = (uint)param_4;
  if ((bool)uVar3) {
    auStack_600[0] = auStack_600[0] & 0xffffffffffffff00;
    uStack_5b8 = 0;
    lVar11 = param_1;
    FUN_1087f6dfc(param_1,auStack_7b0,param_4,auStack_600);
    FUN_1087f993c(auStack_600);
    if ((int)lVar11 != 0) {
      param_2 = *(long **)(*(long *)(param_1 + 0x18) + 0xe0);
      func_0x000107c336f4();
      auStack_600[2] = 0;
      auStack_600[3] = 0;
      auStack_600[0] = extraout_x8_00 + 0x10;
      auStack_600[1] = 0;
      uStack_5e0 = 0x1c1;
      func_0x000107c278b8(auStack_7f0,&DAT_10f6389e8);
      puVar5 = auStack_600;
      func_0x000107c28824(puVar5,auStack_7f0,(&PTR_s_Unknown_110a72fe8)[(int)uVar10]);
      func_0x000107c2884c(auStack_7d8,puVar5);
      func_0x0001088001dc(*(undefined8 *)(*param_2 + 0x50));
      func_0x000107c2882c(auStack_7d8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_7f0);
      func_0x000107c2882c(auStack_600);
      uVar9 = 6;
      goto LAB_1087f6be8;
    }
    uVar3 = uVar10 == 0x11;
    if (uVar10 < 0x12) {
      func_0x000107c336cc();
      func_0x000107c29f64(auStack_600);
      uVar3 = cStack_430 == '\x01';
      if (!(bool)uVar3) {
LAB_1087f6a44:
        func_0x0001087ffcbc();
        if (1 < uVar10 - 3) goto LAB_1087f6ad0;
        uVar10 = (uint)auStack_760;
        func_0x000107c29e78();
        uVar3 = (uVar10 & 0xfffffffb) == 1;
        if ((bool)uVar3) {
          lVar11 = *(long *)(param_1 + 0x18);
          uVar9 = *(undefined8 *)(lVar11 + 0x30);
          func_0x000107c287d8(uVar9);
          puVar6 = auStack_760;
          FUN_108844804(puVar6,lVar11,uVar9);
          if (((ulong)puVar6 & 1) == 0) {
            if ((*(byte *)(param_1 + 0x41) & 1) == 0) {
              func_0x000107c336cc();
              func_0x000107c29f60(auStack_600);
              lVar11 = *(long *)(param_1 + 0x18);
              uVar2 = *(undefined1 *)(param_1 + 0x40);
              uVar9 = *(undefined8 *)(lVar11 + 0x30);
              func_0x000107c287d8();
              puVar6 = auStack_7b0;
              func_0x000107c29e10(puVar6,auStack_600,lVar11,lVar11 + 0x18,lVar11 + 0x1a0,
                                  lVar11 + 0x2f0,lVar11 + 0x300,uVar2,uVar9,
                                  *(undefined1 *)(param_1 + 0x42));
              if (((ulong)puVar6 & 1) == 0) {
                func_0x0001087ff8c8(*(undefined8 *)(param_1 + 0x18));
                func_0x000108800060();
                goto LAB_1087f6bf8;
              }
              func_0x000108800060();
            }
            else {
              uVar9 = *(undefined8 *)(param_1 + 0x18);
              uVar3 = ppuStack_748 == (undefined **)0x0;
              ppuVar1 = &PTR_PTR_11326cb58;
              if (!(bool)uVar3) {
                ppuVar1 = ppuStack_748;
              }
              func_0x000107c287fc(uVar9,ppuVar1);
              plVar7 = *(long **)(*(long *)(param_1 + 0x18) + 0x1a0);
              if ((int)uVar9 == 0) {
                (**(code **)(*plVar7 + 0x10))(plVar7,param_2,param_3);
              }
              else {
                (**(code **)(*plVar7 + 0x18))();
              }
              if (((ulong)plVar7 & 1) == 0) goto LAB_1087f6be4;
            }
          }
        }
        goto LAB_1087f6b34;
      }
      iVar4 = (int)auStack_600;
      func_0x0001086a74d4();
      if (iVar4 == 0) goto LAB_1087f6a44;
      func_0x0001087ff8c8(*(undefined8 *)(param_1 + 0x18));
      func_0x0001087ffcbc();
    }
    else {
LAB_1087f6b34:
      lVar11 = *(long *)(param_1 + 0x18);
      uStack_9d0 = uStack_9d0 & 0xffffffffffffff00;
      uStack_800 = 0;
      auStack_a20[0] = 0;
      uStack_9d8 = 0;
      FUN_10869fbc4(auStack_600,lVar11,lVar11 + 0x30,lVar11 + 0x70,param_3,param_4,param_2,
                    &uStack_9d0,auStack_a20);
      func_0x0001087fffc0();
      func_0x0001086a7890(&uStack_9d0);
      plVar7 = *(long **)(*(long *)(param_1 + 0x18) + 0x160);
      uStack_9d0 = uStack_b8;
      (**(code **)(*plVar7 + 0x18))(plVar7,&uStack_9d0,uStack_bc);
      FUN_108800300(&uStack_9d0,*(undefined8 *)(param_1 + 0x30),param_5);
      auStack_a38[0] = 0;
      uStack_a28 = 0;
      func_0x0001087ffe5c();
      FUN_1086ccd68(auStack_a38);
      FUN_1087f995c(&uStack_9d0);
      func_0x0001087f9a18(auStack_600);
    }
  }
  else {
LAB_1087f6ad0:
    uVar3 = uVar10 == 0x10;
    if (!(bool)uVar3) goto LAB_1087f6b34;
    func_0x000107c336cc();
    func_0x000107c29f64(auStack_600);
    uVar3 = cStack_430 == '\x01';
    if (((((bool)uVar3) && (iStack_4f8 == 0)) && (uVar3 = iStack_5c8 == 2, (bool)uVar3)) &&
       ((bStack_608 & 1) != 0)) {
      uVar8 = *(ulong *)(param_1 + 0x18);
      func_0x000107c28f64(uVar8,auStack_600 + 3,auStack_7b0);
      func_0x0001087ffcbc();
      if ((uVar8 & 1) != 0) goto LAB_1087f6b34;
    }
    else {
      func_0x0001087ffcbc();
    }
LAB_1087f6be4:
    uVar9 = 4;
LAB_1087f6be8:
    FUN_1087900b8(*(long *)(param_1 + 0x18) + 0xa0,param_5,uVar9);
  }
LAB_1087f6bf8:
  func_0x000107c288dc(auStack_7b0);
  unaff_x21 = param_4;
  unaff_x22 = param_2;
LAB_1087f6c00:
  while (func_0x000107c3368c(uStack_58), !(bool)uVar3) {
    ___stack_chk_fail();
    func_0x0001087ffb34();
    func_0x000107c288dc(auStack_7b0);
    while (uVar3 = (int)unaff_x22 == 1, !(bool)uVar3) {
      func_0x00010880010c();
      func_0x000104bd46a0(unaff_x21);
      func_0x0001087ffb34();
    }
    func_0x0001087ffb24();
    uStack_9c8 = param_5[1];
    uStack_9d0 = *param_5;
    if (param_5[1] != 0) {
      do {
        func_0x0001087ffad4();
      } while (extraout_w11 != 0);
    }
    uStack_9c0 = 1;
    func_0x0001087ffc20();
    func_0x0001088001ec();
    FUN_1086ccd68(&uStack_9d0);
    ___cxa_end_catch();
  }
  return;
}



/* Entry: 1087f6dfc; end: 1087f736b;  */

uint FUN_1087f6dfc(long param_1,undefined8 param_2,undefined4 param_3,long param_4)

{
  undefined **ppuVar1;
  int iVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  uint uVar6;
  undefined1 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  uint uVar10;
  long lVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined **ppuVar12;
  uint uVar13;
  undefined **ppuVar14;
  undefined **extraout_x9;
  undefined **extraout_x9_00;
  undefined **extraout_x9_01;
  undefined **extraout_x9_02;
  undefined *puVar15;
  undefined **ppuVar16;
  long unaff_x21;
  undefined **ppuVar17;
  long unaff_x22;
  uint uVar18;
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [24];
  
  func_0x0001087ffb34();
  func_0x000107c27994(auStack_68,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c29ee4(auStack_88,*(undefined8 *)(unaff_x21 + 0x18));
  ppuVar1 = &PTR_PTR_113286e08;
  if (*(undefined ***)(unaff_x22 + 0x80) != (undefined **)0x0) {
    ppuVar1 = *(undefined ***)(unaff_x22 + 0x80);
  }
  lVar11 = 0x18;
  switch(param_3) {
  case 1:
    goto code_r0x0001087f70e0;
  case 2:
    lVar11 = 0x30;
    goto code_r0x0001087f70e0;
  case 3:
    lVar11 = 0x48;
    goto code_r0x0001087f70e0;
  case 4:
    puVar7 = auStack_68;
    FUN_1087f98e8(puVar7,ppuVar1 + 9);
    uVar6 = (uint)puVar7 ^ 1;
    goto LAB_1087f72f4;
  case 5:
    ppuVar1 = &PTR_PTR_113280c30;
    if (*(undefined ***)(unaff_x22 + 0x78) != (undefined **)0x0) {
      ppuVar1 = *(undefined ***)(unaff_x22 + 0x78);
    }
    bVar5 = *(int *)(ppuVar1 + 0x15) == 6;
    goto code_r0x0001087f72f0;
  case 6:
    lVar11 = 0x78;
    goto code_r0x0001087f70e0;
  case 7:
    lVar11 = 0x90;
code_r0x0001087f70e0:
    puVar7 = auStack_68;
    FUN_1087f98e8(puVar7,(long)ppuVar1 + lVar11);
    uVar6 = (uint)puVar7;
    goto LAB_1087f72f4;
  case 8:
    uVar4 = *(char *)(param_4 + 0x48) == '\x01';
    if ((bool)uVar4) {
      ppuVar14 = ppuVar1 + 0x1e;
      func_0x0001087ffc80(*ppuVar14);
      ppuVar16 = ppuVar14;
      if (!(bool)uVar4) {
        ppuVar16 = extraout_x9_00;
      }
      ppuVar12 = ppuVar16 + *(int *)(ppuVar1 + 0x1f);
      for (lVar11 = (long)*(int *)(ppuVar1 + 0x1f) << 3; ppuVar17 = ppuVar12, lVar11 != 0;
          lVar11 = lVar11 + -8) {
        uVar4 = *(undefined ***)(*ppuVar16 + 0x18) == (undefined **)0x0;
        ppuVar17 = &PTR_PTR_11326cb58;
        if (!(bool)uVar4) {
          ppuVar17 = *(undefined ***)(*ppuVar16 + 0x18);
        }
        puVar7 = auStack_88;
        func_0x000107c287e8(puVar7,ppuVar17);
        ppuVar17 = ppuVar16;
        if (((ulong)puVar7 & 1) != 0) break;
        ppuVar16 = ppuVar16 + 1;
      }
      func_0x0001087ffc80(ppuVar1[0x1e]);
      if (!(bool)uVar4) {
        ppuVar14 = extraout_x9_02;
      }
      if (ppuVar17 != ppuVar14 + *(int *)(ppuVar1 + 0x1f)) {
        ppuVar1 = *(undefined ***)(param_4 + 0x38);
        if (*(int *)(param_4 + 0x40) != 0xd) {
          ppuVar1 = &PTR_PTR_113286d80;
        }
        uVar6 = (uint)(*(uint *)(ppuVar1 + 2) < *(uint *)(*ppuVar17 + 0x20));
        goto LAB_1087f72f4;
      }
    }
    break;
  case 9:
    if (*(char *)(param_4 + 0x48) == '\x01') {
      ppuVar1 = *(undefined ***)(param_4 + 0x38);
      if (*(int *)(param_4 + 0x40) != 0x10) {
        ppuVar1 = &PTR_PTR_113286d10;
      }
      if (((ulong)ppuVar1[2] & 1) != 0) {
        uVar9 = *(undefined8 *)(unaff_x21 + 0x18);
        func_0x0001087ffe44(uVar9);
        uVar6 = (uint)uVar9;
        func_0x000107c336d0();
        FUN_1087f97f4();
        goto code_r0x0001087f71b4;
      }
    }
    break;
  case 10:
    bVar5 = *(char *)(param_4 + 0x48) == '\x01';
    bVar3 = *(int *)(param_4 + 0x40) == 0x11;
    uVar4 = bVar5 && bVar3;
    if ((bVar5 && bVar3) && ((*(byte *)(*(long *)(param_4 + 0x38) + 0x10) & 1) != 0)) {
      uVar9 = *(undefined8 *)(unaff_x21 + 0x18);
      func_0x0001087ffe44(uVar9);
      uVar6 = (uint)uVar9;
      func_0x000107c336d0();
      FUN_1087f97f4();
      uVar6 = uVar6 ^ 1;
code_r0x0001087f71b4:
      func_0x0001087ffd04();
      goto LAB_1087f72f4;
    }
    ppuVar14 = ppuVar1 + 0x18;
    func_0x0001087ffc80(*ppuVar14);
    ppuVar16 = ppuVar14;
    if (!(bool)uVar4) {
      ppuVar16 = extraout_x9;
    }
    ppuVar12 = ppuVar16 + *(int *)(ppuVar1 + 0x19);
    for (lVar11 = (long)*(int *)(ppuVar1 + 0x19) << 3; ppuVar17 = ppuVar12, lVar11 != 0;
        lVar11 = lVar11 + -8) {
      uVar4 = *(undefined ***)(*ppuVar16 + 0x18) == (undefined **)0x0;
      ppuVar17 = &PTR_PTR_11326cb58;
      if (!(bool)uVar4) {
        ppuVar17 = *(undefined ***)(*ppuVar16 + 0x18);
      }
      puVar7 = auStack_88;
      func_0x000107c287e8(puVar7,ppuVar17);
      ppuVar17 = ppuVar16;
      if (((ulong)puVar7 & 1) != 0) break;
      ppuVar16 = ppuVar16 + 1;
    }
    func_0x0001087ffc80(ppuVar1[0x18]);
    if (!(bool)uVar4) {
      ppuVar14 = extraout_x9_01;
    }
    bVar5 = ppuVar17 == ppuVar14 + *(int *)(ppuVar1 + 0x19);
    goto code_r0x0001087f72f0;
  case 0xb:
    func_0x0001087ff8f4();
    if (*(int *)(extraout_x8_02 + 0xc0) == 0xb) {
      uVar6 = *(byte *)(*(long *)(extraout_x8_02 + 0xb8) + 0x20) ^ 1;
      goto LAB_1087f72f4;
    }
    break;
  case 0xc:
    func_0x0001087ff8f4();
    if (*(int *)(extraout_x8 + 0xc0) == 0xb) {
      uVar6 = (uint)*(byte *)(*(long *)(extraout_x8 + 0xb8) + 0x20);
      goto LAB_1087f72f4;
    }
    break;
  case 0xd:
    func_0x0001087ff8f4();
    if ((*(int *)(extraout_x8_00 + 0xc0) != 0xd) && (*(int *)(extraout_x8_00 + 0xc0) != 0xe)) break;
    bVar5 = *(int *)(*(long *)(extraout_x8_00 + 0xb8) + 0x10) == 2;
    goto code_r0x0001087f72f0;
  case 0xe:
    func_0x0001087ff8f4();
    ppuVar1 = *(undefined ***)(param_4 + 0x38);
    if (*(int *)(param_4 + 0x40) != 0x17) {
      ppuVar1 = &PTR_PTR_113286ca0;
    }
    uVar8 = *(ulong *)(extraout_x8_01 + 0x60) & 0xfffffffffffffffc;
    func_0x000107c278d0(uVar8,(ulong)ppuVar1[3] & 0xfffffffffffffffc);
    if ((int)uVar8 != 0) {
      ppuVar1 = &PTR_PTR_113286e08;
      if (*(undefined ***)(unaff_x22 + 0x80) != (undefined **)0x0) {
        ppuVar1 = *(undefined ***)(unaff_x22 + 0x80);
      }
      if ((*(byte *)(ppuVar1 + 2) >> 2 & 1) != 0) {
        ppuVar16 = *(undefined ***)(param_4 + 0x38);
        if (*(int *)(param_4 + 0x40) != 0x17) {
          ppuVar16 = &PTR_PTR_113286ca0;
        }
        if (((*(byte *)(ppuVar16 + 2) >> 2 & 1) != 0) && (*(int *)(ppuVar16[6] + 0x28) == 2)) {
          uVar10 = (uint)(byte)ppuVar1[0x23][0x20];
          uVar13 = (uint)(byte)ppuVar16[6][0x20];
          goto code_r0x0001087f72ec;
        }
      }
      uVar6 = 1;
      goto LAB_1087f72f4;
    }
    break;
  case 0xf:
    ppuVar1 = &PTR_PTR_113284128;
    if (*(undefined ***)(unaff_x22 + 0x98) != (undefined **)0x0) {
      ppuVar1 = *(undefined ***)(unaff_x22 + 0x98);
    }
    uVar6 = (uint)*(byte *)((long)ppuVar1 + 0x1c);
    goto LAB_1087f72f4;
  case 0x10:
    uVar6 = (uint)*(byte *)((long)ppuVar1 + 0x142);
    goto LAB_1087f72f4;
  case 0x11:
    if (*(char *)(param_4 + 0x48) != '\x01') break;
    ppuVar1 = *(undefined ***)(param_4 + 0x38);
    if (*(int *)(param_4 + 0x40) != 0x1b) {
      ppuVar1 = &PTR_PTR_113284178;
    }
    ppuVar16 = &PTR_PTR_113284358;
    if (*(undefined ***)(unaff_x22 + 0xa8) != (undefined **)0x0) {
      ppuVar16 = *(undefined ***)(unaff_x22 + 0xa8);
    }
    func_0x0001087ffe44(*(undefined8 *)(unaff_x21 + 0x18));
    iVar2 = *(int *)((long)ppuVar16 + 0x34);
    if (iVar2 == 4) {
      ppuVar14 = (undefined **)ppuVar16[5];
code_r0x0001087f728c:
      if (iVar2 != 4) {
        ppuVar14 = &PTR_PTR_1132841f0;
      }
      if (((ulong)ppuVar14[2] & 1) != 0) {
        uVar13 = *(uint *)(ppuVar14[6] + 0x10);
        goto code_r0x0001087f72c0;
      }
code_r0x0001087f72a8:
      uVar13 = 0;
      uVar10 = 0;
      uVar18 = 1;
    }
    else {
      if (iVar2 == 5) {
        ppuVar14 = (undefined **)ppuVar16[5];
      }
      else {
        ppuVar14 = (undefined **)ppuVar16[5];
        if (*(int *)((long)ppuVar16 + 0x24) != 2) goto code_r0x0001087f728c;
      }
      if (iVar2 != 5) {
        ppuVar14 = &PTR_PTR_1132842d0;
      }
      puVar15 = ppuVar14[2];
      ppuVar16 = ppuVar14 + 2;
      if (((ulong)puVar15 & 1) != 0) {
        ppuVar16 = (undefined **)(puVar15 + 7);
      }
      lVar11 = (long)*(int *)(ppuVar14 + 3) << 3;
      do {
        if (lVar11 == 0) goto code_r0x0001087f72a8;
        puVar15 = *ppuVar16;
        ppuVar12 = *(undefined ***)(puVar15 + 0x18);
        ppuVar14 = &PTR_PTR_11326cb58;
        if (ppuVar12 != (undefined **)0x0) {
          ppuVar14 = ppuVar12;
        }
        func_0x000107c287e8(ppuVar14,auStack_a8);
        lVar11 = lVar11 + -8;
        ppuVar16 = ppuVar16 + 1;
      } while ((int)ppuVar14 == 0);
      uVar13 = *(uint *)(puVar15 + 0x20);
code_r0x0001087f72c0:
      uVar18 = 0;
      uVar10 = uVar13 & 0xffffff00;
    }
    func_0x0001087ffd04();
    uVar6 = 0;
    if ((*(uint *)(ppuVar1 + 2) & 1) == 0) {
      uVar6 = uVar18;
    }
    if ((uVar18 != 0) || ((*(uint *)(ppuVar1 + 2) & 1) == 0)) goto LAB_1087f72f4;
    uVar10 = uVar10 | uVar13 & 0xff;
    uVar13 = *(uint *)(ppuVar1[3] + 0x10);
code_r0x0001087f72ec:
    bVar5 = uVar10 == uVar13;
code_r0x0001087f72f0:
    uVar6 = (uint)bVar5;
    goto LAB_1087f72f4;
  }
  uVar6 = 0;
LAB_1087f72f4:
  func_0x000107c2a2e0(auStack_88);
  func_0x000107c27914(auStack_68);
  return uVar6 & 1;
}



/* Entry: 1087f736c; end: 1087f79e3;  */

void FUN_1087f736c(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  code *pcVar4;
  undefined1 uVar5;
  long *plVar6;
  long ****pppplVar7;
  long lVar8;
  undefined8 extraout_x8;
  undefined8 uVar9;
  long ***ppplVar10;
  long ***ppplVar11;
  long **pplVar12;
  ulong uVar13;
  long ***ppplVar14;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  long **pplVar15;
  long **pplVar16;
  long ***ppplVar17;
  long ***ppplVar18;
  long *plVar19;
  ulong uVar20;
  long ***ppplVar21;
  uint uVar22;
  long ***ppplVar23;
  long ***unaff_x25;
  float fVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  float fVar27;
  long **pplStack_1250;
  long **pplStack_1248;
  long **pplStack_1238;
  long **pplStack_1230;
  long **pplStack_1228;
  long lStack_1218;
  long **pplStack_1210;
  long ***ppplStack_1208;
  long ***ppplStack_1200;
  undefined8 uStack_11f8;
  undefined1 auStack_11f0 [24];
  long *aplStack_11d8 [176];
  long **pplStack_c58;
  long **pplStack_c50;
  long ***ppplStack_c48;
  undefined1 auStack_c40 [24];
  undefined8 uStack_c28;
  undefined8 uStack_c20;
  undefined8 uStack_c18;
  undefined1 auStack_c10 [1448];
  long lStack_668;
  long ***ppplStack_660;
  undefined1 uStack_658;
  long **pplStack_650;
  long **pplStack_648;
  long **pplStack_640;
  long **pplStack_638;
  undefined8 uStack_58;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = param_1;
  func_0x000107c33694();
  pplStack_650 = *(long ***)(lVar8 + 8);
  ppplVar21 = *(long ****)(lVar8 + 0x10);
  if ((ppplVar21 == (long ***)0x0) ||
     (uStack_58 = extraout_x8, __ZNSt3__119__shared_weak_count4lockEv(),
     pplStack_648 = (long **)ppplVar21, ppplVar21 == (long ***)0x0)) {
    func_0x00010527822c();
  }
  else {
    uVar5 = *(long *)(param_1 + 0x38) == -1;
    if (!(bool)uVar5) {
      ppplStack_c48 = &pplStack_650;
      ppplStack_1208 = (long ***)&ppplStack_c48;
      __ZNSt3__111__call_onceERVmPvPFvS2_E((long *)(param_1 + 0x38),&ppplStack_1208,FUN_1087fdc8c);
    }
    func_0x000107c29a9c(&pplStack_650);
    ppplVar21 = *(long ****)(param_1 + 0x28);
    FUN_1087fa734(auStack_11f0,param_2);
    uVar26 = param_3[1];
    uVar25 = *param_3;
    uVar9 = param_3[2];
    param_3[1] = 0;
    param_3[2] = 0;
    *param_3 = 0;
    if ((*(byte *)((long)ppplVar21 + 0x44) & 1) == 0) {
      ppplVar14 = ppplVar21 + 3;
      FUN_1087fd568(ppplVar14,aplStack_11d8);
      if (ppplVar14 == (long ***)0x0) {
        func_0x000107c289cc(&lStack_1218);
        pplStack_1230 = pplStack_c58;
        pplStack_1228 = pplStack_c50;
        if ((long ***)pplStack_c50 != (long ***)0x0) {
          do {
            func_0x000107c33690();
          } while (extraout_w10 != 0);
        }
        plVar19 = (*ppplVar21)[2];
        ppplStack_c48 = ppplVar21;
        FUN_1087e70c8(auStack_c40,param_4);
        uStack_c28 = uVar25;
        uStack_c20 = uVar26;
        uStack_c18 = uVar9;
        FUN_1087fa734(auStack_c10,auStack_11f0);
        lStack_668 = lStack_1218;
        if (lStack_1218 != 0) {
          do {
            func_0x0001087ff83c();
          } while (extraout_w10_00 != 0);
        }
        uStack_658 = 0;
        *(int *)(ppplVar21 + 8) = *(int *)(ppplVar21 + 8) + 1;
        ppplStack_660 = ppplVar21;
        FUN_1087fe214(&pplStack_650,&ppplStack_c48);
        FUN_1087fdce8(&pplStack_1238,&pplStack_650,plVar19);
        FUN_1087fe2a8(&pplStack_650);
        FUN_1087fe2a8(&ppplStack_c48);
        pplStack_1248 = pplStack_1228;
        pplStack_1250 = pplStack_1230;
        if ((long ***)pplStack_1228 != (long ***)0x0) {
          do {
            func_0x000107c33690();
          } while (extraout_w10_01 != 0);
        }
        pplStack_650 = pplStack_1210;
        if ((long ***)pplStack_1210 != (long ***)0x0) {
          ppplVar14 = (long ***)(pplStack_1210 + 1);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(ppplVar14,0x10);
            if (bVar2) {
              *ppplVar14 = *ppplVar14 + 0x40000000;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        pplStack_648 = pplStack_1238;
        if ((long ***)pplStack_1238 != (long ***)0x0) {
          do {
            func_0x0001087ff83c();
          } while (extraout_w10_02 != 0);
        }
        pplStack_638 = pplStack_1248;
        pplStack_640 = pplStack_1250;
        pplStack_1250 = (long **)0x0;
        pplStack_1248 = (long **)0x0;
        ppplVar14 = (long ***)aplStack_11d8;
        FUN_108848654();
        ppplVar23 = (long ***)ppplVar21[4];
        if (ppplVar23 != (long ***)0x0) {
          uVar20 = (long)ppplVar23 - 1;
          uVar22 = (uint)ppplVar23;
          if (((ulong)ppplVar23 & uVar20) == 0) {
            unaff_x25 = (long ***)((ulong)(uVar22 - 1) & (ulong)ppplVar14);
          }
          else {
            unaff_x25 = ppplVar14;
            if (ppplVar23 <= ppplVar14) {
              uVar3 = 0;
              if (uVar22 != 0) {
                uVar3 = (uint)ppplVar14 / uVar22;
              }
              unaff_x25 = (long ***)(ulong)((uint)ppplVar14 - uVar3 * uVar22);
            }
          }
          plVar19 = ppplVar21[3][(long)unaff_x25];
          if (plVar19 != (long *)0x0) {
            do {
              while( true ) {
                plVar19 = (long *)*plVar19;
                if (plVar19 == (long *)0x0) goto LAB_1087f760c;
                ppplVar10 = (long ***)plVar19[1];
                uVar5 = ppplVar10 == ppplVar14;
                if (!(bool)uVar5) break;
                plVar6 = plVar19 + 2;
                func_0x000107c28078(plVar6,aplStack_11d8);
                if (((ulong)plVar6 & 1) != 0) goto LAB_1087f78e0;
              }
              if (((ulong)ppplVar23 & uVar20) == 0) {
                ppplVar10 = (long ***)((ulong)ppplVar10 & uVar20);
              }
              else if (ppplVar23 <= ppplVar10) {
                uVar13 = 0;
                if (ppplVar23 != (long ***)0x0) {
                  uVar13 = (ulong)ppplVar10 / (ulong)ppplVar23;
                }
                ppplVar10 = (long ***)((long)ppplVar10 - uVar13 * (long)ppplVar23);
              }
            } while (ppplVar10 == unaff_x25);
          }
        }
LAB_1087f760c:
        pppplVar7 = (long ****)0x48;
        __Znwm();
        ppplVar10 = ppplVar21 + 5;
        uStack_11f8 = 0;
        *pppplVar7 = (long ***)0x0;
        pppplVar7[1] = ppplVar14;
        ppplStack_1208 = (long ***)pppplVar7;
        ppplStack_1200 = ppplVar10;
        func_0x0001088000a4(pppplVar7 + 2);
        pppplVar7[6] = (long ***)pplStack_648;
        pppplVar7[5] = (long ***)pplStack_650;
        pplStack_648 = (long **)0x0;
        pplStack_650 = (long **)0x0;
        pppplVar7[8] = (long ***)pplStack_638;
        pppplVar7[7] = (long ***)pplStack_640;
        pplStack_638 = (long **)0x0;
        pplStack_640 = (long **)0x0;
        uStack_11f8 = CONCAT71(uStack_11f8._1_7_,1);
        fVar24 = (float)((long)ppplVar21[6] + 1);
        if ((ppplVar23 == (long ***)0x0) ||
           (fVar27 = *(float *)(ppplVar21 + 7) * (float)ppplVar23, uVar5 = fVar27 == fVar24,
           fVar27 < fVar24)) {
          uVar20 = 1;
          if ((long ***)0x2 < ppplVar23) {
            uVar20 = (ulong)(((ulong)ppplVar23 & (long)ppplVar23 - 1U) != 0);
          }
          ppplVar11 = (long ***)(uVar20 | (long)ppplVar23 << 1);
          ppplVar23 = (long ***)(long)(fVar24 / *(float *)(ppplVar21 + 7));
          if (ppplVar11 <= ppplVar23) {
            ppplVar11 = ppplVar23;
          }
          if ((long)ppplVar11 - 1U == 0) {
            ppplVar11 = (long ***)0x2;
          }
          else if (((ulong)ppplVar11 & (long)ppplVar11 - 1U) != 0) {
            __ZNSt3__112__next_primeEm();
          }
          ppplVar23 = (long ***)ppplVar21[4];
          if (ppplVar23 < ppplVar11) {
LAB_1087f76d8:
            if ((ulong)ppplVar11 >> 0x3d != 0) goto LAB_1087f7938;
            lVar8 = (long)ppplVar11 << 3;
            __Znwm(lVar8);
            FUN_1087fe314(ppplVar21 + 3,lVar8);
            ppplVar21[4] = (long **)ppplVar11;
            pplVar12 = ppplVar21[3];
            for (ppplVar23 = (long ***)0x0; ppplVar11 != ppplVar23;
                ppplVar23 = (long ***)((long)ppplVar23 + 1)) {
              pplVar12[(long)ppplVar23] = (long *)0x0;
            }
            pplVar15 = *ppplVar10;
            ppplVar23 = ppplVar11;
            if (pplVar15 != (long **)0x0) {
              ppplVar17 = (long ***)pplVar15[1];
              uVar13 = (long)ppplVar11 - 1;
              uVar20 = 0;
              if (ppplVar11 != (long ***)0x0) {
                uVar20 = (ulong)ppplVar17 / (ulong)ppplVar11;
              }
              ppplVar18 = ppplVar17;
              if (ppplVar11 <= ppplVar17) {
                ppplVar18 = (long ***)((long)ppplVar17 - uVar20 * (long)ppplVar11);
              }
              if (((ulong)ppplVar11 & uVar13) == 0) {
                ppplVar18 = (long ***)((ulong)ppplVar17 & uVar13);
              }
              pplVar12[(long)ppplVar18] = (long *)ppplVar10;
              while (pplVar16 = pplVar15, pplVar15 = (long **)*pplVar16, pplVar15 != (long **)0x0) {
                ppplVar17 = (long ***)pplVar15[1];
                if (((ulong)ppplVar11 & uVar13) == 0) {
                  ppplVar17 = (long ***)((ulong)ppplVar17 & uVar13);
                }
                else if (ppplVar11 <= ppplVar17) {
                  uVar20 = 0;
                  if (ppplVar11 != (long ***)0x0) {
                    uVar20 = (ulong)ppplVar17 / (ulong)ppplVar11;
                  }
                  ppplVar17 = (long ***)((long)ppplVar17 - uVar20 * (long)ppplVar11);
                }
                if (ppplVar17 != ppplVar18) {
                  if (pplVar12[(long)ppplVar17] == (long *)0x0) {
                    pplVar12[(long)ppplVar17] = (long *)pplVar16;
                    ppplVar18 = ppplVar17;
                  }
                  else {
                    *pplVar16 = *pplVar15;
                    *pplVar15 = (long *)*pplVar12[(long)ppplVar17];
                    *pplVar12[(long)ppplVar17] = (long)pplVar15;
                    pplVar15 = pplVar16;
                  }
                }
              }
            }
          }
          else if (ppplVar11 < ppplVar23) {
            ppplVar17 = (long ***)(long)((float)ppplVar21[6] / *(float *)(ppplVar21 + 7));
            if ((ppplVar23 < (long ***)0x3) || (((ulong)ppplVar23 & (long)ppplVar23 - 1U) != 0)) {
              __ZNSt3__112__next_primeEm();
            }
            else if ((long ***)0x1 < ppplVar17) {
              ppplVar17 = (long ***)(1L << (-LZCOUNT((long)ppplVar17 + -1) & 0x3fU));
            }
            if (ppplVar11 <= ppplVar17) {
              ppplVar11 = ppplVar17;
            }
            if (ppplVar11 < ppplVar23) {
              if (ppplVar11 != (long ***)0x0) goto LAB_1087f76d8;
              FUN_1087fe314(ppplVar21 + 3,0);
              ppplVar21[4] = (long **)0x0;
              ppplVar23 = (long ***)0x0;
            }
            else {
              ppplVar23 = (long ***)ppplVar21[4];
            }
          }
          if (((ulong)ppplVar23 & (long)ppplVar23 - 1U) == 0) {
            uVar5 = true;
            unaff_x25 = (long ***)((ulong)((int)ppplVar23 - 1) & (ulong)ppplVar14);
          }
          else {
            uVar5 = ppplVar14 == ppplVar23;
            unaff_x25 = ppplVar14;
            if (ppplVar23 <= ppplVar14) {
              uVar20 = 0;
              if (ppplVar23 != (long ***)0x0) {
                uVar20 = (ulong)ppplVar14 / (ulong)ppplVar23;
              }
              unaff_x25 = (long ***)((long)ppplVar14 - uVar20 * (long)ppplVar23);
            }
          }
        }
        pplVar12 = ppplVar21[3];
        plVar19 = pplVar12[(long)unaff_x25];
        if (plVar19 == (long *)0x0) {
          *pppplVar7 = (long ***)*ppplVar10;
          *ppplVar10 = (long **)pppplVar7;
          pplVar12[(long)unaff_x25] = (long *)ppplVar10;
          if (*pppplVar7 != (long ***)0x0) {
            ppplVar14 = (long ***)(*pppplVar7)[1];
            if (((ulong)ppplVar23 & (long)ppplVar23 - 1U) == 0) {
              ppplVar14 = (long ***)((ulong)ppplVar14 & (long)ppplVar23 - 1U);
              uVar5 = true;
            }
            else {
              uVar5 = ppplVar14 == ppplVar23;
              if (ppplVar23 <= ppplVar14) {
                uVar20 = 0;
                if (ppplVar23 != (long ***)0x0) {
                  uVar20 = (ulong)ppplVar14 / (ulong)ppplVar23;
                }
                ppplVar14 = (long ***)((long)ppplVar14 - uVar20 * (long)ppplVar23);
              }
            }
            pplVar12[(long)ppplVar14] = (long *)pppplVar7;
          }
        }
        else {
          *pppplVar7 = (long ***)*plVar19;
          *plVar19 = (long)pppplVar7;
        }
        ppplStack_1208 = (long ***)0x0;
        ppplVar21[6] = (long **)((long)ppplVar21[6] + 1);
        func_0x0001087fe1d4(&ppplStack_1208);
LAB_1087f78e0:
        func_0x0001087fd370(&pplStack_650);
        func_0x000108794594(&pplStack_1250);
        func_0x000107c27f9c(&pplStack_1238);
        func_0x000108794594(&pplStack_1230);
        func_0x000107c289dc(&lStack_1218);
      }
    }
    func_0x0001087ffe24();
    func_0x0001087f9a18(auStack_11f0);
    func_0x000107c3368c(uStack_58);
    if ((bool)uVar5) {
      return;
    }
  }
  ___stack_chk_fail();
LAB_1087f7938:
  func_0x000104bd35f4();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1087f7940);
  (*pcVar4)();
}



/* Entry: 1087f79e4; end: 1087f7e17;  */

void FUN_1087f79e4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4,long *param_5,
                  long *param_6,long *param_7,long *param_8)

{
  undefined1 in_ZR;
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  int extraout_w11;
  uint uVar8;
  long *plVar9;
  long lVar10;
  undefined8 in_stack_00000050;
  long lStack_a80;
  long lStack_a78;
  undefined1 uStack_a70;
  undefined8 uStack_a60;
  undefined8 uStack_a58;
  undefined8 uStack_a50;
  undefined8 uStack_a48;
  undefined1 auStack_a38 [464];
  undefined1 uStack_868;
  undefined8 uStack_860;
  long *plStack_858;
  long *plStack_850;
  long *plStack_848;
  long lStack_840;
  long *plStack_838;
  undefined8 *puStack_830;
  code *pcStack_828;
  long alStack_820 [3];
  undefined1 auStack_808 [24];
  undefined1 auStack_7f0 [80];
  undefined1 auStack_7a0 [24];
  undefined1 auStack_788 [40];
  undefined1 auStack_760 [424];
  char cStack_5b8;
  long lStack_5b0;
  long lStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined4 uStack_590;
  char cStack_3e0;
  undefined4 uStack_6c;
  long lStack_68;
  undefined8 uStack_8;
  
  func_0x000107c33700();
  plVar6 = alStack_820;
  plVar2 = param_4;
  plVar7 = param_5;
  func_0x000107c33694();
  uStack_8 = extraout_x8;
  if ((int)plVar2 != 0) {
    FUN_1086a5ca8(auStack_760,*(long *)(param_1 + 0x18) + 0x40,param_2,param_3);
    in_ZR = cStack_5b8 == '\x01';
    if ((bool)in_ZR) {
      FUN_1087f9a44(&lStack_5b0,param_5);
      plVar2 = &lStack_5b0;
      lVar10 = param_1;
      FUN_1087f6dfc(param_1,auStack_760,param_4,plVar2);
      FUN_1087f993c(&lStack_5b0);
      uVar8 = (uint)param_4;
      plVar5 = param_7;
      if ((int)lVar10 != 0) {
        param_6 = *(long **)(*(long *)(param_1 + 0x18) + 0xe0);
        func_0x000107c336f4();
        uStack_5a0 = 0;
        uStack_598 = 0;
        lStack_5b0 = extraout_x8_00 + 0x10;
        lStack_5a8 = 0;
        uStack_590 = 0x1c1;
        func_0x000107c278b8(auStack_7a0,&DAT_10f6389e8);
        plVar6 = &lStack_5b0;
        func_0x000107c28824(plVar6,auStack_7a0,(&PTR_s_Unknown_110a72fe8)[(int)uVar8]);
        func_0x000107c2884c(auStack_788,plVar6);
        (**(code **)(*param_6 + 0x50))(param_6,auStack_788);
        func_0x000107c2882c(auStack_788);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_7a0);
        func_0x000107c2882c(&lStack_5b0);
        plVar3 = (long *)(*(long *)(param_1 + 0x18) + 0xa0);
        plVar6 = (long *)0x6;
        FUN_1087900b8(plVar3,param_7,6);
        func_0x0001088002b4();
        if ((bool)in_ZR) {
          plVar3 = (long *)(*(long *)(param_1 + 0x18) + 0xa0);
          plVar6 = (long *)0x6;
          plVar5 = param_8;
          FUN_1087900b8(plVar3,param_8,6);
        }
LAB_1087f7b94:
        func_0x0001088001d4();
        plVar9 = param_4;
        goto LAB_1087f7c8c;
      }
      in_ZR = uVar8 == 0x11;
      if (uVar8 < 0x12) {
        func_0x000107c336cc();
        func_0x000107c29f64(&lStack_5b0);
        in_ZR = cStack_3e0 == '\x01';
        if ((bool)in_ZR) {
          iVar1 = (int)&lStack_5b0;
          func_0x0001086a74d4();
          if (iVar1 != 0) {
            plVar3 = (long *)(*(long *)(param_1 + 0x18) + 0xa0);
            plVar6 = (long *)0x4;
            FUN_1087900b8(plVar3,param_7,4);
            func_0x0001088002b4();
            if ((bool)in_ZR) {
              func_0x0001087ff8c8(*(undefined8 *)(param_1 + 0x18));
            }
            func_0x00010880020c();
            goto LAB_1087f7b94;
          }
        }
        func_0x00010880020c();
      }
    }
    func_0x0001088001d4();
  }
  lVar10 = *(long *)(param_1 + 0x18);
  FUN_1087f9a44(auStack_7f0,param_5);
  FUN_10869fbc4(&lStack_5b0,lVar10,lVar10 + 0x30,lVar10 + 0x70,param_3,param_4,param_2,param_6,
                auStack_7f0);
  func_0x0001087fffc0();
  plVar9 = *(long **)(*(long *)(*(long *)(param_1 + 0x18) + 0x40) + 0x18);
  func_0x000107c278b8(auStack_808,"updateMessage");
  func_0x000107c31420(auStack_760,plVar9,auStack_808);
  func_0x0001087fffb8();
  FUN_1087f8d98(&lStack_5b0,*(long *)(param_1 + 0x18) + 0x30,
                *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x40),3);
  func_0x000107c31428(auStack_760);
  plVar2 = *(long **)(*(long *)(param_1 + 0x18) + 0x160);
  alStack_820[0] = lStack_68;
  (**(code **)(*plVar2 + 0x18))(plVar2,alStack_820,uStack_6c);
  FUN_108800300(alStack_820,*(undefined8 *)(param_1 + 0x30),param_7);
  plVar5 = &lStack_5b0;
  plVar2 = param_8;
  FUN_1087f736c(param_1,plVar5,alStack_820,param_8);
  func_0x0001087ffe24();
  func_0x000107c31424(auStack_760);
  plVar3 = &lStack_5b0;
  func_0x0001087f9a18();
  plVar7 = param_4;
LAB_1087f7c8c:
  while( true ) {
    plVar4 = plVar3;
    func_0x000107c3368c(uStack_8);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001087ffaec();
    func_0x00010880020c();
    func_0x0001088001d4();
    in_ZR = (int)param_6 == 1;
    if (!(bool)in_ZR) break;
    func_0x0001087ffacc();
    lStack_5a8 = param_7[1];
    lStack_5b0 = *param_7;
    if (param_7[1] != 0) {
      do {
        func_0x0001087ffad4();
      } while (extraout_w11 != 0);
    }
    uStack_5a0 = CONCAT71(uStack_5a0._1_7_,1);
    func_0x0001087ffc20();
    plVar2 = plVar4;
    func_0x0001088001ec();
    plVar3 = &lStack_5b0;
    FUN_1086ccd68();
    func_0x0001088002b4();
    if ((bool)in_ZR) {
      param_1 = *(long *)(param_1 + 0x18);
      plVar6 = plVar4;
      func_0x000108848514();
      plVar3 = (long *)(param_1 + 0xa0);
      plVar5 = param_8;
      FUN_1087900b8();
    }
    ___cxa_end_catch();
    plVar9 = plVar4;
  }
  func_0x0001087ffd88();
  plVar3 = plVar9;
  func_0x000104bd46a0();
  pcStack_828 = FUN_1087f7e18;
  auStack_a38[0] = 0;
  uStack_868 = 0;
  uStack_860 = param_2;
  plStack_858 = param_6;
  plStack_850 = plVar9;
  plStack_848 = param_7;
  lStack_840 = param_1;
  plStack_838 = param_8;
  puStack_830 = &stack0x00000050;
  FUN_1087e1f60(&uStack_a60);
  uStack_a48 = uStack_a58;
  uStack_a50 = uStack_a60;
  uStack_a60 = 0;
  uStack_a58 = 0;
  lStack_a78 = plVar7[1];
  lStack_a80 = *plVar7;
  if (plVar7[1] != 0) {
    do {
      func_0x000107c33690();
    } while (extraout_w10 != 0);
  }
  uStack_a70 = 1;
  (**(code **)(*plVar3 + 0x20))(plVar3,plVar5,plVar6,0,plVar2,auStack_a38,&uStack_a50,&lStack_a80);
  FUN_1086ccd68(&lStack_a80);
  func_0x000104be3970(&uStack_a50);
  FUN_1087e66c0(&uStack_a60);
  func_0x0001086a7890(auStack_a38);
  return;
}



/* Entry: 1087f7e18; end: 1087f7f07;  */

void FUN_1087f7e18(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  int extraout_w10;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined1 uStack_250;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 auStack_218 [464];
  undefined1 uStack_48;
  
  auStack_218[0] = 0;
  uStack_48 = 0;
  FUN_1087e1f60(&uStack_240);
  uStack_228 = uStack_238;
  uStack_230 = uStack_240;
  uStack_240 = 0;
  uStack_238 = 0;
  uStack_258 = param_5[1];
  uStack_260 = *param_5;
  if (param_5[1] != 0) {
    do {
      func_0x000107c33690();
    } while (extraout_w10 != 0);
  }
  uStack_250 = 1;
  (**(code **)(*param_1 + 0x20))
            (param_1,param_2,param_3,0,param_4,auStack_218,&uStack_230,&uStack_260);
  FUN_1086ccd68(&uStack_260);
  func_0x000104be3970(&uStack_230);
  FUN_1087e66c0(&uStack_240);
  func_0x0001086a7890(auStack_218);
  return;
}



/* Entry: 1087f7f08; end: 1087f8b6f;  */

void FUN_1087f7f08(long param_1,undefined8 param_2,long *param_3,long param_4,undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 **ppuVar5;
  code *pcVar6;
  undefined1 uVar7;
  undefined1 *puVar8;
  undefined ***pppuVar9;
  undefined **ppuVar10;
  undefined ***pppuVar11;
  long *plVar12;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  ulong extraout_x8_01;
  undefined8 extraout_x9;
  int extraout_w10;
  long lVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined8 **ppuVar19;
  undefined8 uVar20;
  undefined8 **ppuStack_8f0;
  undefined8 **ppuStack_8e8;
  undefined8 **ppuStack_8e0;
  long lStack_8d8;
  long lStack_8d0;
  undefined8 uStack_8c8;
  undefined8 uStack_8c0;
  undefined8 uStack_8b8;
  undefined1 auStack_8b0 [464];
  byte bStack_6e0;
  undefined8 *puStack_6d0;
  undefined8 *puStack_6c8;
  undefined8 uStack_6c0;
  long lStack_6a8;
  ulong uStack_6a0;
  ulong uStack_698;
  undefined1 auStack_690 [24];
  undefined8 uStack_678;
  undefined8 *puStack_650;
  undefined8 *puStack_648;
  undefined8 uStack_640;
  undefined **ppuStack_630;
  undefined8 *puStack_628;
  long lStack_620;
  undefined8 **ppuStack_600;
  undefined8 **ppuStack_5f8;
  undefined8 **ppuStack_5f0;
  undefined8 **ppuStack_5e8;
  long lStack_5e0;
  long lStack_5d8;
  undefined **ppuStack_50;
  undefined8 *puStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  undefined4 uStack_18;
  undefined8 uStack_10;
  
  func_0x000107c33700();
  func_0x000107c33694();
  uVar7 = *param_3 == param_3[1];
  uStack_10 = extraout_x8;
  if ((bool)uVar7) {
    func_0x000108800054(*(undefined8 *)(param_1 + 0x18));
LAB_1087f886c:
    func_0x000107c3368c(uStack_10);
    if ((bool)uVar7) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    uVar7 = *(int *)(param_4 + 0x40) == 0x1a;
    if (!(bool)uVar7) {
      FUN_1087900b8(*(long *)(param_1 + 0x18) + 0xa0,param_5,4);
      goto LAB_1087f886c;
    }
    func_0x000107c29f64(auStack_8b0,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x40),param_2,2);
    if ((bStack_6e0 & 1) == 0) {
      FUN_1087900b8(*(long *)(param_1 + 0x18) + 0xa0,param_5,7);
LAB_1087f8864:
      func_0x000107c288c8(auStack_8b0);
      goto LAB_1087f886c;
    }
    lVar13 = *(long *)(param_1 + 0x18);
    ppuVar19 = *(undefined8 ***)(lVar13 + 0x40);
    ppuStack_8e8 = (undefined8 **)0x0;
    ppuStack_8f0 = (undefined8 **)0x0;
    lStack_8d8 = 0;
    ppuStack_8e0 = (undefined8 ***)0x0;
    uStack_8c8 = 0;
    lStack_8d0 = 0;
    uStack_8b8 = 0;
    uStack_8c0 = 0;
    puStack_648 = (undefined8 *)0x0;
    puStack_650 = (undefined8 *)0x0;
    uStack_640 = 0;
    func_0x000107c27acc(&puStack_650,param_3[1] - *param_3 >> 3);
    lVar15 = 0;
    puStack_48 = (undefined8 *)0x0;
    ppuStack_50 = (undefined **)0x0;
    uStack_38 = 0;
    puStack_40 = (undefined8 *)0x0;
    uStack_30 = CONCAT44(uStack_30._4_4_,0x3f800000);
    puVar4 = (undefined8 *)param_3[1];
    for (puVar17 = (undefined8 *)*param_3; puVar17 != puVar4; puVar17 = puVar17 + 1) {
      ppuStack_600 = (undefined8 **)*puVar17;
      uVar14 = 0;
      FUN_10867b1ac(&ppuStack_50);
      if ((uVar14 & 1) == 0) {
        lVar15 = lVar15 + 1;
        lStack_8d8 = lVar15;
      }
      else {
        func_0x000107c28944(&puStack_650,&ppuStack_600);
      }
    }
    FUN_1088620d0(auStack_690,ppuVar19,param_2,&puStack_650,0);
    uStack_6a0 = 0;
    lStack_6a8 = 0;
    uStack_698 = 0;
    FUN_10867d03c(&lStack_6a8,uStack_678);
    puVar4 = puStack_648;
    lVar15 = 0;
    for (puVar17 = puStack_650; puVar17 != puVar4; puVar17 = puVar17 + 1) {
      ppuStack_600 = (undefined8 **)*puVar17;
      puVar8 = auStack_690;
      func_0x000107c294a4(puVar8,&ppuStack_600);
      if (puVar8 == (undefined1 *)0x0) {
        lVar15 = lVar15 + 1;
        lStack_8d0 = lVar15;
      }
      else {
        FUN_10867b444(&lStack_6a8,puVar8 + 0x18);
      }
    }
    func_0x000107c29fb4(&ppuStack_600,ppuVar19,param_2);
    func_0x000107c28ffc(&puStack_6d0,&ppuStack_600);
    FUN_1086a0728(&ppuStack_630,&puStack_6d0);
    func_0x000107c28f98(&puStack_6d0);
    func_0x000107c28fe8(&ppuStack_600);
    FUN_1086a0a58(&puStack_6d0,ppuVar19,param_2);
    if (uStack_6a0 - lStack_6a8 == 0) {
LAB_1087f8178:
      ppuStack_600 = (undefined8 **)FUN_1087f9b04;
      ppuStack_5f8 = (undefined8 **)&PTR_FUN_110a73078;
      ppuStack_5f0 = &puStack_6d0;
      ppuStack_5e8 = &ppuStack_8f0;
      lStack_5e0 = lVar13;
      lStack_5d8 = param_4;
      FUN_1086adbb4(&ppuStack_630,&lStack_6a8,&ppuStack_600);
      func_0x0001087ffea0();
      func_0x0001086a9a34(&puStack_6d0);
      func_0x0001086ac73c(&ppuStack_630);
      func_0x00010867b9fc(&lStack_6a8);
      func_0x000107c291f0(auStack_690);
      func_0x00010867bb84(&ppuStack_50);
      func_0x0001087ffee0();
      uVar20 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0xe0);
      func_0x0001087ffd28(uVar20,0x28e,lStack_8d8);
      func_0x0001087ffd28(uVar20,0x28f,lStack_8d0);
      func_0x0001087ffd28(uVar20,0x290,uStack_8c8);
      func_0x0001087ffd28(uVar20,0x291,uStack_8c0);
      func_0x0001087ffd28(uVar20,0x292,uStack_8b8);
      uVar7 = ppuStack_8f0 == ppuStack_8e8;
      if ((bool)uVar7) {
        func_0x000108800054(*(undefined8 *)(param_1 + 0x18));
      }
      else {
        lVar15 = *(long *)(param_1 + 0x18);
        uVar14 = ((long)ppuStack_8e8 - (long)ppuStack_8f0 >> 4) + 0x13;
        uStack_698 = 0;
        lStack_6a8 = 0;
        uStack_6a0 = 0;
        if (0x13 < uVar14) {
          if (0x3893180b509e693 < uVar14) {
            FUN_1087f9de8();
            goto LAB_1087f889c;
          }
          FUN_1087fa248(&ppuStack_600,uVar14 / 0x14,0,&uStack_698);
          FUN_1087f9df4(&lStack_6a8,&ppuStack_600);
          func_0x0001087fa390(&ppuStack_600);
        }
        lVar13 = 0;
        uVar14 = 0x14;
        uVar16 = 0;
        while (uVar2 = uStack_6a0, lVar18 = lStack_6a8, ppuVar19 = ppuStack_8f0,
              uVar1 = (long)ppuStack_8e8 - (long)ppuStack_8f0 >> 4, uVar16 < uVar1) {
          uVar2 = uVar16 + 0x14;
          uVar3 = uVar2;
          if (uVar1 <= uVar2) {
            uVar3 = uVar1;
          }
          puStack_6c8 = (undefined8 *)0x0;
          puStack_6d0 = (undefined8 *)0x0;
          uStack_6c0 = 0;
          func_0x000107c27acc(&puStack_6d0,uVar3 - uVar16);
          ppuVar19 = ppuVar19 + uVar16 * 2;
          uVar16 = uVar1;
          if (uVar14 <= uVar1) {
            uVar16 = uVar14;
          }
          ppuVar5 = ppuVar19;
          for (lVar18 = lVar13 + uVar16 * 0x10; lVar18 != 0; lVar18 = lVar18 + -0x10) {
            func_0x000107c28944(&puStack_6d0,ppuVar5);
            ppuVar5 = ppuVar5 + 2;
          }
          ppuStack_50 = &PTR_FUN_110a8c518;
          puStack_48 = (undefined8 *)0x0;
          uStack_18 = 0;
          uStack_38 = 0;
          uStack_30 = 0;
          puStack_40 = (undefined8 *)0x0;
          uStack_28 = 0;
          func_0x000107c29ee4(&ppuStack_600,lVar15);
          FUN_1087fa3d8(&ppuStack_50);
          func_0x000107c287d0();
          func_0x000108800128();
          uVar20 = *(undefined8 *)(lVar15 + 0x60);
          func_0x0001087ff9e8();
          (*extraout_x8_00)();
          uStack_30 = uVar20;
          if (*(int *)(param_4 + 0x40) == 0x1a) {
            pppuVar9 = &ppuStack_50;
            func_0x0001087fa420();
            func_0x000107c29ee4(&ppuStack_600,param_2);
            *(uint *)(pppuVar9 + 2) = *(uint *)(pppuVar9 + 2) | 1;
            if (pppuVar9[6] == (undefined **)0x0) {
              ppuVar10 = pppuVar9[1];
              if (((ulong)ppuVar10 & 1) != 0) {
                ppuVar10 = *(undefined ***)((ulong)ppuVar10 & 0xfffffffffffffffe);
              }
              func_0x000107c287e0();
              pppuVar9[6] = ppuVar10;
            }
            func_0x000107c287d0();
            func_0x000108800128();
            if (uVar14 <= uVar1) {
              uVar1 = uVar14;
            }
            for (lVar18 = lVar13 + uVar1 * 0x10; lVar18 != 0; lVar18 = lVar18 + -0x10) {
              pppuVar11 = pppuVar9 + 3;
              FUN_1087fa4c4();
              pppuVar11[2] = (undefined **)ppuVar19[1];
              ppuVar19 = ppuVar19 + 2;
            }
          }
          puStack_648 = puStack_6c8;
          puStack_650 = puStack_6d0;
          uStack_640 = uStack_6c0;
          puStack_6d0 = (undefined8 *)0x0;
          puStack_6c8 = (undefined8 *)0x0;
          uStack_6c0 = 0;
          FUN_1086a0360(auStack_690,&ppuStack_50);
          FUN_10869ffcc(&ppuStack_600,lVar15,lVar15 + 0x30,lVar15 + 0x70,param_2,&puStack_650,
                        auStack_690);
          uVar16 = uStack_6a0;
          if (uStack_6a0 < uStack_698) {
            FUN_1087fa734(uStack_6a0,&ppuStack_600);
            uVar16 = uVar16 + 0x5a8;
          }
          else {
            if (0x2d4279a2a6e520 < (long)(uStack_6a0 - lStack_6a8) / 0x5a8 + 1U) {
              FUN_1087f9de8();
              goto LAB_1087f889c;
            }
            func_0x0001087ffc30((long)(uStack_698 - lStack_6a8) / 0x5a8);
            uVar20 = extraout_x9;
            if (0x16a13cd153728f < extraout_x8_01) {
              uVar20 = 0x2d4279a2a6e520;
            }
            FUN_1087fa248(&ppuStack_630,uVar20);
            FUN_1087fa734(lStack_620,&ppuStack_600);
            lStack_620 = lStack_620 + 0x5a8;
            FUN_1087f9df4(&lStack_6a8,&ppuStack_630);
            uVar16 = uStack_6a0;
            func_0x0001087fa390(&ppuStack_630);
          }
          uStack_6a0 = uVar16;
          func_0x0001087f9a18(&ppuStack_600);
          FUN_1088f050c(auStack_690);
          func_0x0001087ffee0();
          FUN_1088f050c(&ppuStack_50);
          func_0x000107c27ae4(&puStack_6d0);
          lVar13 = lVar13 + -0x140;
          uVar14 = uVar14 + 0x14;
          uVar16 = uVar2;
        }
        FUN_1086d2fbc(&ppuStack_50,1);
        puStack_40[1] = 0;
        puStack_40[2] = 0;
        *puStack_40 = &PTR_FUN_110a64578;
        ppuStack_600 = (undefined8 **)FUN_1087fd4ec;
        ppuStack_5f8 = (undefined8 **)&PTR_DAT_110a733b8;
        FUN_10883fc34(puStack_40 + 3,(long)(uVar2 - lVar18) / 0x5a8,param_5,&ppuStack_600);
        func_0x0001087ff8e4();
        puStack_628 = puStack_40;
        puStack_40 = (undefined8 *)0x0;
        ppuStack_630 = (undefined **)(puStack_628 + 3);
        func_0x0001086d32b4(&ppuStack_50);
        lVar13 = uStack_6a0 - lStack_6a8;
        for (lVar15 = 0; uVar7 = lVar15 == lVar13 / 0x5a8, !(bool)uVar7; lVar15 = lVar15 + 1) {
          lVar18 = lStack_6a8 + lVar15 * 0x5a8;
          func_0x0001088000a4(auStack_690);
          plVar12 = *(long **)(*(long *)(param_1 + 0x18) + 0x160);
          ppuStack_600 = *(undefined8 ***)(lVar18 + 0x548);
          (**(code **)(*plVar12 + 0x18))(plVar12,&ppuStack_600,*(undefined4 *)(lVar18 + 0x544));
          puStack_48 = puStack_628;
          ppuStack_50 = ppuStack_630;
          if (puStack_628 != (undefined8 *)0x0) {
            do {
              func_0x000107c33690();
            } while (extraout_w10 != 0);
          }
          FUN_108800300(&ppuStack_600);
          func_0x000104be3970(&ppuStack_50);
          ppuStack_50 = (undefined **)((ulong)ppuStack_50 & 0xffffffffffffff00);
          puStack_40 = (undefined8 *)((ulong)puStack_40 & 0xffffffffffffff00);
          FUN_1087f736c(param_1,lVar18,&ppuStack_600,&ppuStack_50);
          FUN_1086ccd68(&ppuStack_50);
          FUN_1087f995c(&ppuStack_600);
          func_0x000107c27914(auStack_690);
        }
        FUN_1086d32c4(&ppuStack_630);
        func_0x0001087fa51c(&lStack_6a8);
      }
      FUN_1087f8b70(&ppuStack_8f0);
      goto LAB_1087f8864;
    }
    uVar14 = (long)(uStack_6a0 - lStack_6a8) / 0x1a8;
    if (uVar14 >> 0x3c == 0) {
      FUN_1087f9a6c(&ppuStack_600,uVar14,0,&ppuStack_8e0);
      func_0x0001088000f8(ppuStack_5f8);
      ppuVar5 = ppuStack_8e0;
      ppuStack_8e0 = ppuStack_5e8;
      ppuStack_8e8 = ppuStack_5f0;
      ppuStack_5f0 = ppuStack_8f0;
      ppuStack_5e8 = ppuVar5;
      ppuStack_5f8 = ppuStack_8f0;
      ppuStack_600 = ppuStack_8f0;
      ppuStack_8f0 = ppuVar19;
      FUN_1087f9ac4(&ppuStack_600);
      goto LAB_1087f8178;
    }
  }
  func_0x0001087f9a60();
LAB_1087f889c:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1087f88a0);
  (*pcVar6)();
}



/* Entry: 1087f8b70; end: 1087f8b97;  */

void FUN_1087f8b70(long param_1)

{
  long unaff_x19;
  
  func_0x000107c336d4();
  if (param_1 != 0) {
    *(long *)(unaff_x19 + 8) = param_1;
    __ZdlPv();
  }
  return;
}



/* Entry: 1087f8b98; end: 1087f8bb7;  */

bool FUN_1087f8b98(long param_1)

{
  param_1 = param_1 + 0x18;
  FUN_1087fd568(param_1);
  return param_1 != 0;
}



/* Entry: 1087f8bb8; end: 1087f8c37;  */

void FUN_1087f8bb8(long param_1)

{
  code *extraout_x8;
  undefined1 auStack_778 [904];
  undefined1 uStack_3f0;
  undefined1 auStack_3e8 [24];
  undefined1 auStack_3d0 [944];
  
  func_0x000107c27994(auStack_3e8);
  auStack_778[0] = 0;
  uStack_3f0 = 0;
  FUN_10864094c(auStack_3d0,auStack_3e8,2,auStack_778);
  func_0x00010863f788(auStack_778);
  func_0x000107c27914(auStack_3e8);
  func_0x0001087ff9e8(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x140));
  (*extraout_x8)();
  FUN_108798a4c(auStack_3d0);
  return;
}



/* Entry: 1087f8c38; end: 1087f8d0f;  */

void FUN_1087f8c38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long extraout_x8;
  long *unaff_x19;
  undefined1 auStack_98 [24];
  long alStack_80 [4];
  undefined4 uStack_60;
  undefined1 auStack_58 [40];
  
  func_0x000107c336c0();
  func_0x000107c336f4();
  alStack_80[2] = 0;
  alStack_80[3] = 0;
  alStack_80[0] = extraout_x8 + 0x10;
  alStack_80[1] = 0;
  uStack_60 = 0x2d4;
  func_0x000107c336dc();
  plVar1 = alStack_80;
  func_0x000107c2881c(plVar1,auStack_98,param_3);
  FUN_108787070();
  FUN_1087870d8();
  func_0x000107c2884c(auStack_58,plVar1);
  (**(code **)(*unaff_x19 + 0x50))();
  func_0x000107c2882c(auStack_58);
  func_0x000107c336b8();
  func_0x000107c2882c(alStack_80);
  return;
}



/* Entry: 1087f8d10; end: 1087f8d97;  */

long * FUN_1087f8d10(long *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  if ((*(byte *)(param_1 + 0x16) & 1) == 0) {
    uVar1 = *(undefined8 *)(*param_1 + 8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_50,*param_1 + 0x58);
    func_0x000107c27f54(auStack_38,&UNK_10f2e0451,auStack_50);
    func_0x00010bcc7444(uVar1,0x65,auStack_38);
    func_0x0001087fffb8();
    func_0x0001087ffe2c();
  }
  return param_1 + 1;
}



/* Entry: 1087f8d98; end: 1087f8e33;  */

void FUN_1087f8d98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  code *extraout_x8;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  func_0x0001087ffb34();
  func_0x0001088000a4(auStack_80);
  uStack_68 = *(undefined8 *)(unaff_x21 + 0x30);
  uVar1 = *unaff_x22;
  func_0x0001087ff9e8();
  (*extraout_x8)();
  uStack_54 = *(undefined4 *)(unaff_x21 + 0x548);
  uStack_58 = *(undefined4 *)(unaff_x21 + 0x10);
  uStack_38 = *(undefined4 *)(unaff_x21 + 0x14);
  uStack_50 = *(undefined4 *)(unaff_x21 + 0x540);
  uStack_48 = *(undefined8 *)(unaff_x21 + 0x538);
  uStack_40 = *(undefined4 *)(unaff_x21 + 0x544);
  uStack_60 = uVar1;
  uStack_3c = param_4;
  FUN_10886024c(param_3,auStack_80);
  func_0x000107c27914(auStack_80);
  return;
}



/* Entry: 1087f8e34; end: 1087f9697;  */

void FUN_1087f8e34(long param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  code *pcVar7;
  undefined1 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong ***pppuVar11;
  undefined8 ****ppppuVar12;
  undefined8 ***pppuVar13;
  undefined8 ***pppuVar14;
  undefined8 ***pppuVar15;
  int iVar16;
  ulong ***pppuVar17;
  uint extraout_w8;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 **ppuVar18;
  undefined8 **extraout_x8_02;
  undefined8 **extraout_x8_03;
  ulong extraout_x8_04;
  ulong extraout_x8_05;
  ulong uVar19;
  ulong extraout_x9;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar20;
  ulong ***pppuVar21;
  long lVar22;
  ulong ***pppuVar23;
  undefined8 **ppuVar24;
  ulong **ppuVar25;
  ulong ***pppuVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  long lVar29;
  long lStack_f88;
  undefined8 **appuStack_f80 [2];
  undefined8 **ppuStack_f70;
  undefined1 uStack_f68;
  undefined1 auStack_f60 [64];
  undefined1 auStack_f20 [24];
  undefined8 **ppuStack_f08;
  undefined1 auStack_f00 [24];
  undefined4 uStack_ee8;
  byte bStack_eb0;
  undefined8 ***pppuStack_a88;
  undefined8 ***pppuStack_a80;
  undefined8 ***pppuStack_a78;
  undefined1 auStack_a70 [224];
  undefined8 **ppuStack_990;
  ulong uStack_988;
  undefined8 **ppuStack_8b0;
  ulong uStack_8a8;
  undefined1 uStack_8a0;
  undefined1 uStack_7d8;
  long lStack_7d0;
  long lStack_7c8;
  long alStack_6f0 [3];
  undefined8 **ppuStack_6d8;
  undefined8 **ppuStack_6d0;
  undefined8 **ppuStack_6c8;
  undefined4 uStack_6c0;
  undefined8 **ppuStack_6b8;
  undefined4 uStack_6b0;
  undefined4 uStack_6ac;
  undefined4 uStack_6a8;
  byte bStack_618;
  ulong ***pppuStack_610;
  undefined1 uStack_608;
  ulong uStack_600;
  undefined8 uStack_5f8;
  ulong uStack_5e0;
  undefined8 uStack_5d8;
  undefined1 uStack_5d0;
  ulong **ppuStack_5c0;
  ulong *puStack_5b8;
  undefined1 auStack_5b0 [8];
  undefined1 auStack_5a8 [200];
  char cStack_4e0;
  undefined8 uStack_18;
  
  func_0x000107c33700();
  lVar22 = param_1;
  func_0x000107c33694();
  uStack_18 = extraout_x8;
  FUN_108864e58(&ppuStack_5c0,*(undefined8 *)(*(long *)(lVar22 + 0x18) + 0x40));
  FUN_1086a1ec8(&lStack_7d0,&ppuStack_5c0);
  FUN_1086add20(&ppuStack_5c0);
  lVar22 = lStack_7d0;
  while (lVar10 = lStack_7d0, lVar22 != lStack_7c8) {
    uVar9 = *(undefined8 *)(param_1 + 0x28);
    FUN_1087f8b98(uVar9,lVar22 + 0x80);
    if ((int)uVar9 == 0) {
      lVar22 = lVar22 + 0xc0;
    }
    else {
      FUN_1086af198(lVar22 + 0xc0,lStack_7c8,lVar22);
      FUN_1086a9c00(&lStack_7d0);
    }
  }
  for (; lVar10 != lVar22; lVar10 = lVar10 + 0xc0) {
    func_0x000107c27994(&ppuStack_8b0,lVar10);
    uVar9 = *(undefined8 *)(lVar10 + 0x18);
    FUN_1086a9cbc(alStack_6f0,lVar10 + 0x30);
    FUN_1087fa55c(&lStack_f88,&ppuStack_8b0,uVar9,alStack_6f0);
    FUN_108929390(alStack_6f0);
    func_0x000107c27914(&ppuStack_8b0);
    lVar29 = *(long *)(param_1 + 0x18);
    func_0x000107c27994(&ppuStack_990,lVar10 + 0x80);
    uVar9 = *(undefined8 *)(lVar10 + 0x98);
    uVar27 = *(undefined8 *)(lVar10 + 0xb0);
    uVar4 = *(undefined4 *)(lVar10 + 0xa8);
    uVar28 = *(undefined8 *)(lVar10 + 0x78);
    uVar5 = *(undefined4 *)(lVar10 + 0xa0);
    uVar2 = *(undefined4 *)(lVar10 + 0xb8);
    uVar3 = *(undefined4 *)(lVar10 + 0xbc);
    FUN_10869ffa8();
    FUN_1086a7d9c(&ppuStack_5c0,lVar29 + 0x30,&ppuStack_990,uVar9,uVar27,uVar4,uVar28,uVar2,uVar5,
                  uVar3,2);
    func_0x000107c27914(&ppuStack_990);
    FUN_1087f8bb8(param_1,auStack_5a8);
    uVar9 = *(undefined8 *)(param_1 + 0x30);
    FUN_1087e1f60(&uStack_600);
    uStack_5d8 = uStack_5f8;
    uStack_5e0 = uStack_600;
    uStack_5f8 = 0;
    uStack_600 = 0;
    FUN_108800300(auStack_a70,uVar9,&uStack_5e0);
    func_0x000104be3970(&uStack_5e0);
    FUN_1087e66c0(&uStack_600);
    uStack_5e0 = uStack_5e0 & 0xffffffffffffff00;
    uStack_5d0 = 0;
    func_0x0001087ffe5c();
    FUN_1086ccd68(&uStack_5e0);
    FUN_1087f995c(auStack_a70);
    func_0x0001087ffdfc();
    FUN_1086a78f0(&lStack_f88);
  }
  func_0x0001086a9ba8(&lStack_7d0);
  func_0x000107c336cc();
  FUN_108864efc(&ppuStack_5c0);
  ppuStack_8b0 = (undefined8 **)0x0;
  uStack_8a8 = uStack_8a8 & 0xffffffffffffff00;
  uStack_7d8 = 0;
  if (cStack_4e0 == '\0') {
    ppuVar24 = (undefined8 **)0x0;
  }
  else {
    func_0x0001087fd6dc(&uStack_8a8,auStack_5b0);
    func_0x0001087fd6b8(auStack_5b0);
    ppuVar24 = ppuStack_8b0;
  }
  ppuStack_8b0 = (undefined8 **)puStack_5b8;
  puStack_5b8 = (ulong *)ppuVar24;
  FUN_1087fd740(&lStack_7d0,&ppuStack_8b0);
  _bzero(auStack_a70,0xe0);
  FUN_1087fd740(&ppuStack_990,auStack_a70);
  pppuStack_a78 = (ulong ***)0x0;
  pppuStack_a88 = (ulong ***)0x0;
  pppuStack_a80 = (ulong ***)0x0;
  FUN_1087fda40(&lStack_f88,&lStack_7d0);
  pppuVar17 = &ppuStack_990;
  FUN_1087fda40(alStack_6f0);
  pppuStack_610 = (ulong ***)&pppuStack_a88;
  uStack_608 = 0;
  do {
    if ((((bStack_eb0 & 1) == 0) && ((bStack_618 & 1) == 0)) || (lStack_f88 == alStack_6f0[0])) {
      uStack_608 = 1;
      FUN_1087fda14(&pppuStack_610);
      func_0x0001087ffa64(alStack_6f0);
      FUN_1087fd720(appuStack_f80);
      func_0x0001087ffa64(&ppuStack_990);
      func_0x0001087ffa64(auStack_a70);
      func_0x0001087ffa64(&lStack_7d0);
      func_0x0001087ffa64(&ppuStack_8b0);
      FUN_1087fd644(&ppuStack_5c0);
      pppuVar21 = pppuStack_a88 + 0x1a;
      pppuVar11 = pppuStack_a88;
      while (pppuVar26 = pppuStack_a88, pppuVar11 != pppuStack_a80) {
        iVar16 = (int)*(undefined8 *)(param_1 + 0x28);
        pppuVar17 = pppuVar11 + 0x11;
        FUN_1087f8b98();
        pppuVar15 = pppuStack_a80;
        pppuVar26 = pppuVar11;
        pppuVar23 = pppuVar21;
        if (iVar16 == 0) {
          pppuVar11 = pppuVar11 + 0x1a;
          pppuVar21 = pppuVar21 + 0x1a;
        }
        else {
          for (; pppuVar17 = pppuVar26, pppuVar23 != pppuVar15; pppuVar23 = pppuVar23 + 0x1a) {
            func_0x0001087fa6b0(pppuVar17,pppuVar23);
            pppuVar26 = pppuVar17 + 0x1a;
          }
          func_0x0001087fa650(&pppuStack_a88);
        }
      }
      while( true ) {
        iVar16 = (int)pppuVar17;
        uVar8 = pppuVar26 == pppuVar11;
        if ((bool)uVar8) break;
        func_0x0001088000ac(alStack_6f0);
        ppuStack_6d8 = pppuVar26[0x15];
        ppuStack_6d0 = pppuVar26[0x10];
        ppuStack_6c8 = pppuVar26[0x16];
        uStack_6c0 = *(undefined4 *)(pppuVar26 + 0x17);
        ppuStack_6b8 = pppuVar26[0x18];
        uStack_6b0 = *(undefined4 *)(pppuVar26 + 0x19);
        uStack_6ac = *(undefined4 *)((long)pppuVar26 + 0xa4);
        uStack_6a8 = *(undefined4 *)((long)pppuVar26 + 0xcc);
        func_0x000107c27994(&lStack_f88,pppuVar26);
        ppuStack_f70 = pppuVar26[3];
        uStack_f68 = *(undefined1 *)(pppuVar26 + 4);
        FUN_1086a0454(auStack_f60,pppuVar26 + 5);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (auStack_f20,pppuVar26 + 0xd);
        ppuStack_f08 = pppuVar26[0x10];
        func_0x0001088000ac(auStack_f00);
        uStack_ee8 = *(undefined4 *)(pppuVar26 + 0x14);
        FUN_1086a036c(&ppuStack_5c0,*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x18) + 0x30,
                      alStack_6f0,&lStack_f88);
        FUN_1087f8bb8(param_1,auStack_5a8);
        FUN_1087e1f60(&ppuStack_990);
        uStack_8a8 = uStack_988;
        ppuStack_8b0 = ppuStack_990;
        uStack_988 = 0;
        ppuStack_990 = (ulong **)0x0;
        func_0x000108800114(&lStack_7d0);
        func_0x000104be3970(&ppuStack_8b0);
        FUN_1087e66c0(&ppuStack_990);
        ppuStack_8b0 = (undefined8 **)((ulong)ppuStack_8b0 & 0xffffffffffffff00);
        uStack_8a0 = 0;
        pppuVar17 = &ppuStack_5c0;
        FUN_1087f736c(param_1,pppuVar17,&lStack_7d0,&ppuStack_8b0);
        FUN_1086ccd68(&ppuStack_8b0);
        FUN_1087f995c(&lStack_7d0);
        func_0x0001087ffdfc();
        func_0x0001086a9a00(&lStack_f88);
        func_0x000107c27914(alStack_6f0);
        pppuVar26 = pppuVar26 + 0x1a;
      }
      ppppuVar12 = &pppuStack_a88;
      func_0x0001087fa6dc();
      func_0x000107c3368c(uStack_18);
      if (!(bool)uVar8) {
        ___stack_chk_fail();
        if (iVar16 != 0) {
          func_0x000104bd46a0();
          func_0x0001087ffa64(&lStack_f88);
          func_0x0001087ffa64(&ppuStack_990);
          func_0x0001087ffa64(auStack_a70);
          func_0x0001087ffa64(&lStack_7d0);
          func_0x0001087ffa64(&ppuStack_8b0);
          ppppuVar12 = (undefined8 ****)&ppuStack_5c0;
          FUN_1087fd644();
        }
        func_0x0001087ff95c();
        pppuVar13 = ppppuVar12[5];
        pppuVar14 = pppuVar13;
        func_0x0001088001ac();
        *pppuVar14 = (undefined8 **)FUN_1087ff448;
        pppuVar14[1] = (undefined8 **)FUN_1087ff498;
        func_0x000107c27f94(pppuVar14 + 2);
        pppuVar15 = pppuVar14 + 2;
        func_0x000107c287c4(extraout_x8_01);
        *(undefined1 *)((long)pppuVar13 + 0x44) = 1;
        if (*(int *)(pppuVar13 + 8) == 0) {
          pppuVar15 = pppuVar13 + 10;
          func_0x000107c28850();
        }
        pppuVar14[4] = pppuVar13[9];
        do {
          func_0x0001087ff83c();
        } while (extraout_w10 != 0);
        func_0x0001087ff9f4(pppuVar14[4]);
        if ((extraout_w8 >> 1 & 1) == 0) {
          *(undefined1 *)(pppuVar14 + 5) = 0;
          ppuVar24 = pppuVar14[4];
          func_0x0001087ff82c();
          ppuVar25 = *pppuVar15;
          if (ppuVar25 == (ulong **)0x0) {
            func_0x000107c3a5c0();
            ppuVar25 = *pppuVar15;
          }
          ppuVar18 = ppuVar24 + 2;
          do {
            if (*ppuVar18 == (undefined8 *)0x0) {
              func_0x0001087ff980();
              ppuVar18 = extraout_x8_03;
              uVar6 = extraout_w10_01;
              uVar20 = extraout_w11_00;
            }
            else {
              func_0x0001087fff48();
              ppuVar18 = extraout_x8_02;
              uVar6 = extraout_w10_00;
              uVar20 = extraout_w11;
            }
            if ((uVar20 & 1) != 0) {
              func_0x0001088002a0();
              uVar19 = extraout_x8_04;
              if ((bool)uVar8) {
                func_0x0001087ff8a8();
                func_0x0001087ffee8();
                func_0x0001087ffdcc();
                uVar19 = extraout_x8_05;
              }
              uVar19 = uVar19 & 0xffffffff;
              pppuVar11[uVar19 * 3 + 2] = (ulong **)0x0;
              pppuVar11[uVar19 * 3 + 3] = (ulong **)pppuVar14;
              pppuVar11[uVar19 * 3 + 4] = ppuVar25;
              func_0x0001087ff898(ppuVar24[0x12]);
              ppuVar24[2] = (undefined8 *)0x0;
              return;
            }
          } while ((uVar6 >> 1 & 1) == 0);
        }
        func_0x000107c28834(pppuVar14 + 4);
        func_0x0001087fff40();
        func_0x000107c287c8(pppuVar14 + 2);
        func_0x0001087ff954();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(pppuVar14);
        return;
      }
      return;
    }
    if ((bStack_eb0 & 1) == 0) {
      uVar9 = *(undefined8 *)(lStack_f88 + 8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (&uStack_600,lStack_f88 + 0x58);
      func_0x000107c27f54(&uStack_5e0,&UNK_10f2e0451,&uStack_600);
      func_0x00010bcc7444(uVar9,0x65,&uStack_5e0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_5e0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_600);
    }
    if (pppuStack_a80 < pppuStack_a78) {
      pppuVar17 = appuStack_f80;
      FUN_1087fd6f8();
      pppuVar21 = pppuStack_a80 + 0x1a;
    }
    else {
      lVar22 = (long)pppuStack_a80 - (long)pppuStack_a88;
      if (0x13b13b13b13b13b < lVar22 / 0xd0 + 1U) {
        FUN_1087fd7d4();
LAB_1087f94b0:
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1087f94b4);
        (*pcVar7)();
      }
      func_0x0001087ffc30(((long)pppuStack_a78 - (long)pppuStack_a88) / 0xd0);
      uVar19 = extraout_x9;
      if (0x9d89d89d89d89c < extraout_x8_00) {
        uVar19 = 0x13b13b13b13b13b;
      }
      if (uVar19 == 0) {
        lVar10 = 0;
      }
      else {
        if (0x13b13b13b13b13b < uVar19) {
          func_0x000104bd35f4();
          goto LAB_1087f94b0;
        }
        lVar10 = uVar19 * 0xd0;
        __Znwm();
      }
      lVar22 = lVar10 + lVar22;
      pppuVar17 = appuStack_f80;
      FUN_1087fd6f8(lVar22);
      pppuVar15 = pppuStack_a80;
      pppuVar26 = pppuStack_a88;
      pppuVar23 = (ulong ***)(lVar22 + (((long)pppuStack_a80 - (long)pppuStack_a88) / -0xd0) * 0xd0)
      ;
      pppuVar11 = pppuVar23;
      for (pppuVar21 = pppuStack_a88; pppuVar21 != pppuVar15; pppuVar21 = pppuVar21 + 0x1a) {
        pppuVar17 = pppuVar21;
        FUN_1087fd6f8(pppuVar11);
        pppuVar11 = pppuVar11 + 0x1a;
      }
      for (; pppuVar26 != pppuVar15; pppuVar26 = pppuVar26 + 0x1a) {
        func_0x0001087fa684(pppuVar26);
      }
      pppuVar21 = (ulong ***)(lVar22 + 0xd0);
      pppuStack_a78 = (undefined8 ***)(lVar10 + uVar19 * 0xd0);
      bVar1 = pppuStack_a88 != (ulong ***)0x0;
      pppuStack_a88 = pppuVar23;
      if (bVar1) {
        pppuStack_a80 = pppuVar21;
        __ZdlPv();
      }
    }
    pppuStack_a80 = pppuVar21;
    FUN_1087fd7e0(&lStack_f88);
  } while( true );
}



/* Entry: 1087f9698; end: 1087f969f;  */

void FUN_1087f9698(undefined8 param_1,long param_2)

{
  uint uVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  uint extraout_w8;
  long *extraout_x8;
  long *extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong uVar5;
  long lVar6;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar7;
  long lVar8;
  long lVar9;
  long unaff_x22;
  
  puVar2 = *(undefined8 **)(param_2 + 0x28);
  puVar3 = puVar2;
  func_0x0001088001ac();
  *puVar3 = FUN_1087ff448;
  puVar3[1] = FUN_1087ff498;
  func_0x000107c27f94(puVar3 + 2);
  plVar4 = puVar3 + 2;
  func_0x000107c287c4(param_1);
  *(undefined1 *)((long)puVar2 + 0x44) = 1;
  if (*(int *)(puVar2 + 8) == 0) {
    plVar4 = puVar2 + 10;
    func_0x000107c28850();
  }
  puVar3[4] = puVar2[9];
  do {
    func_0x0001087ff83c();
  } while (extraout_w10 != 0);
  func_0x0001087ff9f4(puVar3[4]);
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar3 + 5) = 0;
    lVar8 = puVar3[4];
    func_0x0001087ff82c();
    lVar9 = *plVar4;
    if (lVar9 == 0) {
      func_0x000107c3a5c0();
      lVar9 = *plVar4;
    }
    plVar4 = (long *)(lVar8 + 0x10);
    do {
      if (*plVar4 == 0) {
        func_0x0001087ff980();
        plVar4 = extraout_x8_00;
        uVar1 = extraout_w10_01;
        uVar7 = extraout_w11_00;
      }
      else {
        func_0x0001087fff48();
        plVar4 = extraout_x8;
        uVar1 = extraout_w10_00;
        uVar7 = extraout_w11;
      }
      if ((uVar7 & 1) != 0) {
        func_0x0001088002a0();
        uVar5 = extraout_x8_01;
        if ((bool)in_ZR) {
          func_0x0001087ff8a8();
          func_0x0001087ffee8();
          func_0x0001087ffdcc();
          uVar5 = extraout_x8_02;
        }
        lVar6 = unaff_x22 + (uVar5 & 0xffffffff) * 0x18;
        *(undefined8 *)(lVar6 + 0x10) = 0;
        *(undefined8 **)(lVar6 + 0x18) = puVar3;
        *(long *)(lVar6 + 0x20) = lVar9;
        func_0x0001087ff898(*(undefined8 *)(lVar8 + 0x90));
        *(undefined8 *)(lVar8 + 0x10) = 0;
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x000107c28834(puVar3 + 4);
  func_0x0001087fff40();
  func_0x000107c287c8(puVar3 + 2);
  func_0x0001087ff954();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar3);
  return;
}



/* Entry: 1087f96a0; end: 1087f97f3;  */

void FUN_1087f96a0(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  long *plVar3;
  uint extraout_w8;
  long *extraout_x8;
  long *extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong uVar4;
  long lVar5;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar6;
  long lVar7;
  long lVar8;
  long unaff_x22;
  
  puVar2 = param_2;
  func_0x0001088001ac();
  *puVar2 = FUN_1087ff448;
  puVar2[1] = FUN_1087ff498;
  func_0x000107c27f94(puVar2 + 2);
  plVar3 = puVar2 + 2;
  func_0x000107c287c4(param_1);
  *(undefined1 *)((long)param_2 + 0x44) = 1;
  if (*(int *)(param_2 + 8) == 0) {
    plVar3 = param_2 + 10;
    func_0x000107c28850();
  }
  puVar2[4] = param_2[9];
  do {
    func_0x0001087ff83c();
  } while (extraout_w10 != 0);
  func_0x0001087ff9f4(puVar2[4]);
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar2 + 5) = 0;
    lVar7 = puVar2[4];
    func_0x0001087ff82c();
    lVar8 = *plVar3;
    if (lVar8 == 0) {
      func_0x000107c3a5c0();
      lVar8 = *plVar3;
    }
    plVar3 = (long *)(lVar7 + 0x10);
    do {
      if (*plVar3 == 0) {
        func_0x0001087ff980();
        plVar3 = extraout_x8_00;
        uVar1 = extraout_w10_01;
        uVar6 = extraout_w11_00;
      }
      else {
        func_0x0001087fff48();
        plVar3 = extraout_x8;
        uVar1 = extraout_w10_00;
        uVar6 = extraout_w11;
      }
      if ((uVar6 & 1) != 0) {
        func_0x0001088002a0();
        uVar4 = extraout_x8_01;
        if ((bool)in_ZR) {
          func_0x0001087ff8a8();
          func_0x0001087ffee8();
          func_0x0001087ffdcc();
          uVar4 = extraout_x8_02;
        }
        lVar5 = unaff_x22 + (uVar4 & 0xffffffff) * 0x18;
        *(undefined8 *)(lVar5 + 0x10) = 0;
        *(undefined8 **)(lVar5 + 0x18) = puVar2;
        *(long *)(lVar5 + 0x20) = lVar8;
        func_0x0001087ff898(*(undefined8 *)(lVar7 + 0x90));
        *(undefined8 *)(lVar7 + 0x10) = 0;
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x000107c28834(puVar2 + 4);
  func_0x0001087fff40();
  func_0x000107c287c8(puVar2 + 2);
  func_0x0001087ff954();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar2);
  return;
}



/* Entry: 1087f97f4; end: 1087f98e7;  */

bool FUN_1087f97f4(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined **ppuVar2;
  undefined1 in_ZR;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined **ppuVar6;
  long *extraout_x9;
  long lVar7;
  long lVar8;
  
  plVar3 = (long *)(param_1 + 0xc0);
  func_0x0001087ffc80(*plVar3);
  plVar1 = plVar3;
  if (!(bool)in_ZR) {
    plVar1 = extraout_x9;
  }
  for (lVar7 = (long)(int)plVar3[1] << 3; lVar7 != 0; lVar7 = lVar7 + -8) {
    lVar8 = *plVar1;
    ppuVar6 = *(undefined ***)(lVar8 + 0x18);
    ppuVar2 = &PTR_PTR_11326cb58;
    if (ppuVar6 != (undefined **)0x0) {
      ppuVar2 = ppuVar6;
    }
    uVar4 = param_2;
    func_0x000107c287e8(param_2,ppuVar2);
    if ((int)uVar4 != 0) {
      ppuVar6 = *(undefined ***)(lVar8 + 0x20);
      ppuVar2 = &PTR_PTR_11326ae28;
      if (ppuVar6 != (undefined **)0x0) {
        ppuVar2 = ppuVar6;
      }
      if (*(int *)(param_3 + 0x1c) == 1) {
        if ((*(int *)((long)ppuVar2 + 0x1c) == 1) && (*(undefined **)(param_3 + 0x10) == ppuVar2[2])
           ) break;
      }
      else if ((*(int *)(param_3 + 0x1c) == 2) && (*(int *)((long)ppuVar2 + 0x1c) == 2)) {
        uVar5 = *(ulong *)(param_3 + 0x10) & 0xfffffffffffffffc;
        func_0x000107c278d0(uVar5,(ulong)ppuVar2[2] & 0xfffffffffffffffc);
        if ((uVar5 & 1) != 0) break;
      }
    }
    plVar1 = plVar1 + 1;
  }
  return lVar7 != 0;
}



/* Entry: 1087f98e8; end: 1087f993b;  */

bool FUN_1087f98e8(undefined8 param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *extraout_x9;
  undefined8 *extraout_x9_00;
  
  puVar2 = param_2;
  func_0x0001087ffc80(*param_2,param_1,param_2,param_1);
  puVar1 = puVar2;
  if (!(bool)in_ZR) {
    puVar1 = extraout_x9;
  }
  func_0x000107c28f0c(puVar1,puVar1 + *(int *)(puVar2 + 1));
  func_0x0001087ffc80(*param_2);
  puVar2 = param_2;
  if (!(bool)in_ZR) {
    puVar2 = extraout_x9_00;
  }
  return puVar2 + *(int *)(param_2 + 1) != puVar1;
}



/* Entry: 1087f993c; end: 1087f995b;  */

void FUN_1087f993c(long param_1)

{
  if (*(char *)(param_1 + 0x48) == '\x01') {
    FUN_10891cac8();
  }
  return;
}



/* Entry: 1087f995c; end: 1087f99b3;  */

void FUN_1087f995c(void)

{
  func_0x0001087fffd8();
  func_0x0001087f9980();
  return;
}



/* Entry: 1087f99b4; end: 1087f99bb;  */

void FUN_1087f99b4(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c336b4(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -8;
    func_0x0001087f99f0();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1087f99bc; end: 1087f9a43;  */

void FUN_1087f99bc(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c336b4();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -8;
    func_0x0001087f99f0();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1087f9a44; end: 1087f9a6b;  */

void FUN_1087f9a44(long param_1)

{
  FUN_1086a7798();
  *(undefined1 *)(param_1 + 0x48) = 1;
  return;
}



/* Entry: 1087f9a6c; end: 1087f9ac3;  */

long * FUN_1087f9a6c(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  ulong unaff_x20;
  
  func_0x000107c336c0();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    if (unaff_x20 >> 0x3c != 0) {
      func_0x000104bd35f4();
      lVar2 = param_1[2];
      while (lVar2 != param_1[1]) {
        lVar2 = lVar2 + -0x10;
        param_1[2] = lVar2;
      }
      if (*param_1 != 0) {
        __ZdlPv();
      }
      return param_1;
    }
    lVar2 = unaff_x20 << 4;
    __Znwm();
  }
  lVar1 = lVar2 + param_3 * 0x10;
  *unaff_x19 = lVar2;
  unaff_x19[1] = lVar1;
  unaff_x19[2] = lVar1;
  unaff_x19[3] = lVar2 + unaff_x20 * 0x10;
  return unaff_x19;
}



/* Entry: 1087f9ac4; end: 1087f9b03;  */

long * FUN_1087f9ac4(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  while (lVar1 != param_1[1]) {
    lVar1 = lVar1 + -0x10;
    param_1[2] = lVar1;
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1087f9b04; end: 1087f9cff;  */

void FUN_1087f9b04(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 uVar5;
  undefined **ppuVar6;
  ulong uVar7;
  undefined **extraout_x9;
  undefined **extraout_x9_00;
  undefined8 *puVar8;
  ulong uVar9;
  long unaff_x19;
  long lVar10;
  long unaff_x20;
  long *plVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  long lStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  long lStack_50;
  
  func_0x000107c336b4();
  FUN_1086a1084();
  if ((*(byte *)(unaff_x20 + 0x28) & 1) == 0) {
    *(long *)(*(long *)(unaff_x19 + 0x18) + 0x28) =
         *(long *)(*(long *)(unaff_x19 + 0x18) + 0x28) + 1;
  }
  else {
    if (*(int *)(*(long *)(unaff_x19 + 0x28) + 0x40) == 0x1a) {
      ppuVar12 = &PTR_PTR_113280c30;
      if (*(undefined ***)(unaff_x20 + 0x78) != (undefined **)0x0) {
        ppuVar12 = *(undefined ***)(unaff_x20 + 0x78);
      }
      if (*(int *)(ppuVar12 + 0x15) == 0x23) {
        if (*(int *)(ppuVar12 + 0x18) == 0x15) {
          func_0x0001087ffe44(*(undefined8 *)(unaff_x19 + 0x20));
          ppuVar12 = &PTR_PTR_113280c30;
          if (*(undefined ***)(unaff_x20 + 0x78) != (undefined **)0x0) {
            ppuVar12 = *(undefined ***)(unaff_x20 + 0x78);
          }
          uVar5 = *(int *)(ppuVar12 + 0x18) == 0x15;
          if ((bool)uVar5) {
            ppuVar12 = (undefined **)ppuVar12[0x17];
          }
          else {
            ppuVar12 = &PTR_PTR_1132809b0;
          }
          ppuVar13 = ppuVar12 + 2;
          func_0x0001087ffc80(*ppuVar13);
          ppuVar6 = ppuVar13;
          if (!(bool)uVar5) {
            ppuVar6 = extraout_x9;
          }
          FUN_1086a30cc(ppuVar6,ppuVar6 + *(int *)(ppuVar12 + 3),&lStack_68);
          func_0x0001087ffc80(ppuVar12[2]);
          if (!(bool)uVar5) {
            ppuVar13 = extraout_x9_00;
          }
          iVar4 = *(int *)(ppuVar12 + 3);
          func_0x0001087ffd04();
          if (ppuVar13 + iVar4 != ppuVar6) {
            *(long *)(*(long *)(unaff_x19 + 0x18) + 0x38) =
                 *(long *)(*(long *)(unaff_x19 + 0x18) + 0x38) + 1;
            return;
          }
        }
        plVar11 = *(long **)(unaff_x19 + 0x18);
        uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
        uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
        puVar8 = (undefined8 *)plVar11[1];
        if (puVar8 < (undefined8 *)plVar11[2]) {
          *puVar8 = uVar2;
          puVar8[1] = uVar3;
          puVar8 = puVar8 + 2;
        }
        else {
          uVar1 = ((long)puVar8 - *plVar11 >> 4) + 1;
          if (uVar1 >> 0x3c != 0) {
            func_0x0001087f9a60();
            func_0x0001087ffd04();
            func_0x0001087ff95c();
            return;
          }
          uVar7 = plVar11[2] - *plVar11;
          uVar9 = (long)uVar7 >> 3;
          if (uVar9 <= uVar1) {
            uVar9 = uVar1;
          }
          if (0x7fffffffffffffef < uVar7) {
            uVar9 = 0xfffffffffffffff;
          }
          FUN_1087f9a6c(&lStack_68,uVar9);
          *puStack_58 = uVar2;
          puStack_58[1] = uVar3;
          puVar8 = puStack_58 + 2;
          lVar10 = lStack_60 - (plVar11[1] - *plVar11);
          _memcpy(lVar10);
          lStack_68 = *plVar11;
          *plVar11 = lVar10;
          plVar11[1] = (long)puVar8;
          lVar10 = plVar11[2];
          plVar11[2] = lStack_50;
          lStack_60 = lStack_68;
          puStack_58 = (undefined8 *)lStack_68;
          lStack_50 = lVar10;
          FUN_1087f9ac4(&lStack_68);
        }
        plVar11[1] = (long)puVar8;
        return;
      }
    }
    *(long *)(*(long *)(unaff_x19 + 0x18) + 0x30) =
         *(long *)(*(long *)(unaff_x19 + 0x18) + 0x30) + 1;
  }
  return;
}



/* Entry: 1087f9d00; end: 1087f9d23;  */

void FUN_1087f9d00(void)

{
  return;
}



/* Entry: 1087f9d24; end: 1087f9de7;  */

void FUN_1087f9d24(long *param_1,uint param_2,long param_3)

{
  long *plVar1;
  long extraout_x8;
  long alStack_70 [4];
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  plVar1 = alStack_70;
  if (param_3 != 0) {
    alStack_70[2] = 0;
    alStack_70[3] = 0;
    func_0x000107c336f4();
    alStack_70[0] = extraout_x8 + 0x10;
    alStack_70[1] = 0;
    uStack_50 = 0x2d7;
    func_0x000107c278b8(auStack_48,PTR_DAT_113268fd0);
    func_0x000107c28824(alStack_70,auStack_48,(&PTR_s_success_113269028)[param_2 & 0x29f]);
    func_0x000107c336f0();
    (**(code **)(*param_1 + 0x58))(param_1,plVar1,param_3);
    func_0x000107c2882c(alStack_70);
  }
  return;
}



/* Entry: 1087f9de8; end: 1087f9df3;  */

void FUN_1087f9de8(long *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  int extraout_w10;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long *plStack_90;
  undefined8 **ppuStack_88;
  undefined8 **ppuStack_80;
  undefined1 uStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  
  func_0x0001087ff8d8();
  func_0x000107c336b4();
  puVar4 = (undefined8 *)*param_1;
  puVar1 = (undefined8 *)param_1[1];
  puVar6 = (undefined8 *)(*(long *)(param_2 + 8) + (((long)puVar1 - (long)puVar4) / -0x5a8) * 0x5a8)
  ;
  plStack_90 = param_1 + 2;
  ppuStack_88 = &puStack_70;
  ppuStack_80 = &puStack_68;
  uStack_78 = 0;
  puVar5 = puVar6;
  puStack_70 = puVar6;
  for (puVar7 = puVar4; puStack_68 = puVar5, puVar7 != puVar1; puVar7 = puVar7 + 0xb5) {
    uVar8 = puVar7[1];
    uVar2 = *puVar7;
    puVar5[2] = puVar7[2];
    puVar5[1] = uVar8;
    *puVar5 = uVar2;
    func_0x000107c27994(puVar5 + 3,puVar7 + 3);
    puVar5[6] = puVar7[6];
    func_0x000107c27994(puVar5 + 7,puVar7 + 7);
    puVar5[10] = puVar7[10];
    FUN_1086a7798(puVar5 + 0xb,puVar7 + 0xb);
    *(undefined1 *)(puVar5 + 0x14) = *(undefined1 *)(puVar7 + 0x14);
    func_0x000107c291e8(puVar5 + 0x15,puVar7 + 0x15);
    FUN_1087fa2b8(puVar5 + 0x18,puVar7 + 0x18);
    FUN_1087fa2b8(puVar5 + 0x21,puVar7 + 0x21);
    *(undefined1 *)(puVar5 + 0x2a) = 0;
    *(undefined1 *)(puVar5 + 0x32) = 0;
    if (*(char *)(puVar7 + 0x32) == '\x01') {
      FUN_1086a0454(puVar5 + 0x2a,puVar7 + 0x2a);
      *(undefined1 *)(puVar5 + 0x32) = 1;
    }
    uVar8 = puVar7[0x34];
    uVar2 = puVar7[0x33];
    puVar5[0x35] = puVar7[0x35];
    puVar5[0x34] = uVar8;
    puVar5[0x33] = uVar2;
    FUN_1086a7830(puVar5 + 0x36,puVar7 + 0x36);
    *(undefined1 *)(puVar5 + 0x71) = 0;
    *(undefined1 *)(puVar5 + 0x75) = 0;
    if (*(char *)(puVar7 + 0x75) == '\x01') {
      FUN_1087fa304(puVar5 + 0x71,puVar7 + 0x71);
      *(undefined1 *)(puVar5 + 0x75) = 1;
    }
    *(undefined1 *)(puVar5 + 0x76) = 0;
    *(undefined1 *)(puVar5 + 0x7d) = 0;
    if (*(char *)(puVar7 + 0x7d) == '\x01') {
      func_0x0001087fa310(puVar5 + 0x76,puVar7 + 0x76);
      *(undefined1 *)(puVar5 + 0x7d) = 1;
    }
    *(undefined1 *)(puVar5 + 0x7e) = 0;
    *(undefined1 *)(puVar5 + 0x82) = 0;
    if (*(char *)(puVar7 + 0x82) == '\x01') {
      func_0x0001087fa31c(puVar5 + 0x7e,puVar7 + 0x7e);
      *(undefined1 *)(puVar5 + 0x82) = 1;
    }
    *(undefined1 *)(puVar5 + 0x83) = 0;
    *(undefined1 *)(puVar5 + 0x88) = 0;
    if (*(char *)(puVar7 + 0x88) == '\x01') {
      func_0x0001087fa328(puVar5 + 0x83,puVar7 + 0x83);
      *(undefined1 *)(puVar5 + 0x88) = 1;
    }
    *(undefined1 *)(puVar5 + 0x89) = 0;
    *(undefined1 *)(puVar5 + 0x8c) = 0;
    if (*(char *)(puVar7 + 0x8c) == '\x01') {
      func_0x0001087fa334(puVar5 + 0x89,puVar7 + 0x89);
      *(undefined1 *)(puVar5 + 0x8c) = 1;
    }
    *(undefined1 *)(puVar5 + 0x8d) = 0;
    *(undefined1 *)(puVar5 + 0x92) = 0;
    if (*(char *)(puVar7 + 0x92) == '\x01') {
      func_0x0001087fa340(puVar5 + 0x8d,puVar7 + 0x8d);
      *(undefined1 *)(puVar5 + 0x92) = 1;
    }
    *(undefined1 *)(puVar5 + 0x93) = 0;
    *(undefined1 *)(puVar5 + 0x9d) = 0;
    if (*(char *)(puVar7 + 0x9d) == '\x01') {
      FUN_10877cff0(puVar5 + 0x93,puVar7 + 0x93);
      *(undefined1 *)(puVar5 + 0x9d) = 1;
    }
    *(undefined1 *)(puVar5 + 0x9e) = 0;
    *(undefined1 *)(puVar5 + 0xa4) = 0;
    if (*(char *)(puVar7 + 0xa4) == '\x01') {
      FUN_1088f0d60(puVar5 + 0x9e,0,puVar7 + 0x9e);
      *(undefined1 *)(puVar5 + 0xa4) = 1;
    }
    uVar2 = puVar7[0xa5];
    *(undefined2 *)(puVar5 + 0xa6) = *(undefined2 *)(puVar7 + 0xa6);
    puVar5[0xa5] = uVar2;
    func_0x000108800264(puVar5 + 0xa7);
    func_0x00010724cbe8(puVar5 + 0xab,puVar7 + 0xab);
    func_0x00010724cbe8(puVar5 + 0xaf,puVar7 + 0xaf);
    puVar5[0xb3] = puVar7[0xb3];
    lVar3 = puVar7[0xb4];
    puVar5[0xb4] = lVar3;
    if (lVar3 != 0) {
      do {
        func_0x000107c33690();
      } while (extraout_w10 != 0);
    }
    puVar5 = puStack_68 + 0xb5;
  }
  uStack_78 = 1;
  for (; puVar4 != puVar1; puVar4 = puVar4 + 0xb5) {
    func_0x0001087f9a18(puVar4);
  }
  FUN_1087fa34c(&plStack_90);
  unaff_x19[1] = puVar6;
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
  return;
}



/* Entry: 1087f9df4; end: 1087fa247;  */

void FUN_1087f9df4(long *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  int extraout_w10;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long *plStack_80;
  undefined8 **ppuStack_78;
  undefined8 **ppuStack_70;
  undefined1 uStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  func_0x000107c336b4();
  puVar4 = (undefined8 *)*param_1;
  puVar1 = (undefined8 *)param_1[1];
  puVar6 = (undefined8 *)(*(long *)(param_2 + 8) + (((long)puVar1 - (long)puVar4) / -0x5a8) * 0x5a8)
  ;
  plStack_80 = param_1 + 2;
  ppuStack_78 = &puStack_60;
  ppuStack_70 = &puStack_58;
  uStack_68 = 0;
  puVar5 = puVar6;
  puStack_60 = puVar6;
  for (puVar7 = puVar4; puStack_58 = puVar5, puVar7 != puVar1; puVar7 = puVar7 + 0xb5) {
    uVar8 = puVar7[1];
    uVar2 = *puVar7;
    puVar5[2] = puVar7[2];
    puVar5[1] = uVar8;
    *puVar5 = uVar2;
    func_0x000107c27994(puVar5 + 3,puVar7 + 3);
    puVar5[6] = puVar7[6];
    func_0x000107c27994(puVar5 + 7,puVar7 + 7);
    puVar5[10] = puVar7[10];
    FUN_1086a7798(puVar5 + 0xb,puVar7 + 0xb);
    *(undefined1 *)(puVar5 + 0x14) = *(undefined1 *)(puVar7 + 0x14);
    func_0x000107c291e8(puVar5 + 0x15,puVar7 + 0x15);
    FUN_1087fa2b8(puVar5 + 0x18,puVar7 + 0x18);
    FUN_1087fa2b8(puVar5 + 0x21,puVar7 + 0x21);
    *(undefined1 *)(puVar5 + 0x2a) = 0;
    *(undefined1 *)(puVar5 + 0x32) = 0;
    if (*(char *)(puVar7 + 0x32) == '\x01') {
      FUN_1086a0454(puVar5 + 0x2a,puVar7 + 0x2a);
      *(undefined1 *)(puVar5 + 0x32) = 1;
    }
    uVar8 = puVar7[0x34];
    uVar2 = puVar7[0x33];
    puVar5[0x35] = puVar7[0x35];
    puVar5[0x34] = uVar8;
    puVar5[0x33] = uVar2;
    FUN_1086a7830(puVar5 + 0x36,puVar7 + 0x36);
    *(undefined1 *)(puVar5 + 0x71) = 0;
    *(undefined1 *)(puVar5 + 0x75) = 0;
    if (*(char *)(puVar7 + 0x75) == '\x01') {
      FUN_1087fa304(puVar5 + 0x71,puVar7 + 0x71);
      *(undefined1 *)(puVar5 + 0x75) = 1;
    }
    *(undefined1 *)(puVar5 + 0x76) = 0;
    *(undefined1 *)(puVar5 + 0x7d) = 0;
    if (*(char *)(puVar7 + 0x7d) == '\x01') {
      func_0x0001087fa310(puVar5 + 0x76,puVar7 + 0x76);
      *(undefined1 *)(puVar5 + 0x7d) = 1;
    }
    *(undefined1 *)(puVar5 + 0x7e) = 0;
    *(undefined1 *)(puVar5 + 0x82) = 0;
    if (*(char *)(puVar7 + 0x82) == '\x01') {
      func_0x0001087fa31c(puVar5 + 0x7e,puVar7 + 0x7e);
      *(undefined1 *)(puVar5 + 0x82) = 1;
    }
    *(undefined1 *)(puVar5 + 0x83) = 0;
    *(undefined1 *)(puVar5 + 0x88) = 0;
    if (*(char *)(puVar7 + 0x88) == '\x01') {
      func_0x0001087fa328(puVar5 + 0x83,puVar7 + 0x83);
      *(undefined1 *)(puVar5 + 0x88) = 1;
    }
    *(undefined1 *)(puVar5 + 0x89) = 0;
    *(undefined1 *)(puVar5 + 0x8c) = 0;
    if (*(char *)(puVar7 + 0x8c) == '\x01') {
      func_0x0001087fa334(puVar5 + 0x89,puVar7 + 0x89);
      *(undefined1 *)(puVar5 + 0x8c) = 1;
    }
    *(undefined1 *)(puVar5 + 0x8d) = 0;
    *(undefined1 *)(puVar5 + 0x92) = 0;
    if (*(char *)(puVar7 + 0x92) == '\x01') {
      func_0x0001087fa340(puVar5 + 0x8d,puVar7 + 0x8d);
      *(undefined1 *)(puVar5 + 0x92) = 1;
    }
    *(undefined1 *)(puVar5 + 0x93) = 0;
    *(undefined1 *)(puVar5 + 0x9d) = 0;
    if (*(char *)(puVar7 + 0x9d) == '\x01') {
      FUN_10877cff0(puVar5 + 0x93,puVar7 + 0x93);
      *(undefined1 *)(puVar5 + 0x9d) = 1;
    }
    *(undefined1 *)(puVar5 + 0x9e) = 0;
    *(undefined1 *)(puVar5 + 0xa4) = 0;
    if (*(char *)(puVar7 + 0xa4) == '\x01') {
      FUN_1088f0d60(puVar5 + 0x9e,0,puVar7 + 0x9e);
      *(undefined1 *)(puVar5 + 0xa4) = 1;
    }
    uVar2 = puVar7[0xa5];
    *(undefined2 *)(puVar5 + 0xa6) = *(undefined2 *)(puVar7 + 0xa6);
    puVar5[0xa5] = uVar2;
    func_0x000108800264(puVar5 + 0xa7);
    func_0x00010724cbe8(puVar5 + 0xab,puVar7 + 0xab);
    func_0x00010724cbe8(puVar5 + 0xaf,puVar7 + 0xaf);
    puVar5[0xb3] = puVar7[0xb3];
    lVar3 = puVar7[0xb4];
    puVar5[0xb4] = lVar3;
    if (lVar3 != 0) {
      do {
        func_0x000107c33690();
      } while (extraout_w10 != 0);
    }
    puVar5 = puStack_58 + 0xb5;
  }
  uStack_68 = 1;
  for (; puVar4 != puVar1; puVar4 = puVar4 + 0xb5) {
    func_0x0001087f9a18(puVar4);
  }
  FUN_1087fa34c(&plStack_80);
  unaff_x19[1] = puVar6;
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
  return;
}



/* Entry: 1087fa248; end: 1087fa2b7;  */

long * FUN_1087fa248(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  ulong unaff_x20;
  
  func_0x000107c336c0();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    if (0x2d4279a2a6e520 < unaff_x20) {
      func_0x000104bd35f4();
      *(undefined1 *)param_1 = 0;
      *(undefined1 *)(param_1 + 8) = 0;
      if (*(char *)(param_2 + 0x40) == '\x01') {
        FUN_1086a9cbc(param_1);
        *(undefined1 *)(param_1 + 8) = 1;
      }
      return param_1;
    }
    lVar1 = unaff_x20 * 0x5a8;
    __Znwm();
  }
  lVar2 = lVar1 + param_3 * 0x5a8;
  *unaff_x19 = lVar1;
  unaff_x19[1] = lVar2;
  unaff_x19[2] = lVar2;
  unaff_x19[3] = lVar1 + unaff_x20 * 0x5a8;
  return unaff_x19;
}



/* Entry: 1087fa2b8; end: 1087fa303;  */

undefined1 * FUN_1087fa2b8(undefined1 *param_1,long param_2)

{
  *param_1 = 0;
  param_1[0x40] = 0;
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_1086a9cbc(param_1);
    param_1[0x40] = 1;
  }
  return param_1;
}



/* Entry: 1087fa304; end: 1087fa34b;  */

undefined8 * FUN_1087fa304(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_110a95410;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[2] = 0;
  FUN_10891c0a0(param_1,param_2);
  return param_1;
}



/* Entry: 1087fa34c; end: 1087fa3d7;  */

long FUN_1087fa34c(long param_1)

{
  long lVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    lVar2 = **(long **)(param_1 + 8);
    lVar1 = **(long **)(param_1 + 0x10);
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x5a8;
      func_0x0001087f9a18();
    }
  }
  return param_1;
}



/* Entry: 1087fa3d8; end: 1087fa3e7;  */

void FUN_1087fa3d8(long param_1)

{
  ulong uVar1;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  if (*(long *)(param_1 + 0x18) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    func_0x000107c287e0();
    *(ulong *)(param_1 + 0x18) = uVar1;
  }
  return;
}



/* Entry: 1087fa3e8; end: 1087fa4c3;  */

void FUN_1087fa3e8(long param_1)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    func_0x000107c287e0();
    *(ulong *)(param_1 + 0x18) = uVar1;
  }
  return;
}



/* Entry: 1087fa4c4; end: 1087fa4cf;  */

void FUN_1087fa4c4(ulong *param_1)

{
  bool bVar1;
  ulong *puVar2;
  ulong *puVar3;
  long unaff_x22;
  
  puVar2 = (ulong *)*param_1;
  if (puVar2 == (ulong *)0x0) {
    func_0x0001000640a4(0,FUN_1087fa4d0);
    func_0x000100627e90();
    *param_1 = (ulong)puVar2;
  }
  else {
    Hint_Prefetch(puVar2,0,0,0);
    if (((ulong)puVar2 & 1) == 0) {
      if ((int)param_1[1] == 0) {
        func_0x0001000640a4(puVar2,FUN_1087fa4d0);
      }
      else {
        func_0x000100064574();
        puVar3 = puVar2;
        func_0x000100627e90();
        *puVar2 = (ulong)puVar3;
        func_0x00010006472c();
      }
    }
    else {
      bVar1 = (int)param_1[1] == *(int *)((long)param_1 + 0xc);
      if (bVar1 || (int)param_1[1] < *(int *)((long)param_1 + 0xc)) {
        func_0x000100064758();
        if (!bVar1) {
          func_0x000107c39c9c();
          return;
        }
      }
      else {
        func_0x000100064574();
        func_0x000100064780();
      }
      func_0x000100064768();
      func_0x000100627e90();
      *(ulong **)(unaff_x22 + 8) = puVar2;
    }
  }
  return;
}



/* Entry: 1087fa4d0; end: 1087fa55b;  */

void FUN_1087fa4d0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x28);
  }
  *puVar1 = &PTR_FUN_110a8c1a8;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}


