/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1002918e4; end: 10029191f;  */

void FUN_1002918e4(long *param_1)

{
  long in_x9;
  
  *param_1 = in_x9 + 0x10;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  return;
}



/* Entry: 100291920; end: 100291be7;  */

void FUN_100291920(undefined8 param_1,undefined8 param_2,ulong *param_3,ulong param_4,
                  undefined8 *param_5,ulong param_6)

{
  undefined8 *puVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined1 in_ZR;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  undefined1 uVar16;
  uint **ppuVar17;
  ulong *puVar18;
  int iVar19;
  undefined8 *puVar20;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 *extraout_x8_01;
  long extraout_x8_02;
  long lVar21;
  undefined8 extraout_x8_03;
  int *piVar22;
  ulong uVar23;
  int extraout_w10;
  int iVar24;
  undefined8 uVar25;
  int extraout_w11;
  long unaff_x19;
  uint *puVar26;
  long unaff_x22;
  ulong uVar27;
  undefined8 in_register_00005008;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  uint *puStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  
  func_0x00010029190c();
  iVar19 = (int)param_4;
  if ((-1 < iVar19) && (piVar22 = (int *)*param_5, piVar22 != (int *)0x0)) {
    iVar7 = piVar22[1];
    in_ZR = iVar19 == iVar7;
    if (iVar19 <= iVar7) {
      iVar24 = 0x5e;
      if (*piVar22 < 3) {
        iVar24 = 0x5a;
      }
      iVar3 = 0;
      if (iVar19 != 0) {
        iVar3 = iVar19 * 8 + -4;
      }
      iVar3 = iVar24 + piVar22[0x18] + iVar3;
      lVar21 = 8;
      if (iVar19 != 0) {
        lVar21 = 0xc;
      }
      uVar23 = lVar21 + iVar3;
      in_ZR = uVar23 == param_6;
      if (uVar23 <= param_6) {
        uStack_88 = uStack_88 & 0xffffffff00000000;
        uStack_90 = (ulong)(iVar24 + piVar22[0x18] + iVar7 * 8 + 8);
        uStack_a0 = 0;
        lStack_98 = 0;
        puStack_a8 = (uint *)0x0;
        puVar18 = &uStack_90;
        param_4 = (long)&uStack_88 + 4;
        puVar20 = (undefined8 *)0x3;
        FUN_100291be8(&puStack_a8,puVar18,param_4);
        puVar1 = (undefined8 *)((long)param_3 + (long)iVar3);
        if (iVar19 == 0) {
          *(undefined8 *)(puStack_a8 + 1) = *puVar1;
        }
        else {
          uVar25 = *puVar1;
          puStack_a8[2] = *(uint *)(puVar1 + 1);
          *(undefined8 *)puStack_a8 = uVar25;
        }
        uVar4 = *puStack_a8;
        uVar5 = (ulong)uVar4;
        uVar6 = puStack_a8[1];
        uVar23 = (ulong)uVar6;
        uVar8 = puStack_a8[2];
        uVar9 = uVar6 - uVar4;
        uVar16 = uVar9 == 0 || uVar8 == uVar6;
        if ((uVar9 == 0 || uVar8 == uVar6) || ((int)uVar9 < 0)) {
LAB_100291a4c:
          func_0x00010533bd60();
        }
        else {
          uVar6 = uVar8 - uVar6;
          uVar27 = (ulong)uVar6;
          if ((int)uVar6 < 0) goto LAB_100291a4c;
          if ((int)uVar4 < 0) {
LAB_100291a90:
            func_0x00010533bd60();
          }
          else {
            uVar8 = uVar8 - uVar4;
            bVar10 = uVar5 <= param_6;
            bVar13 = param_6 != uVar5;
            uVar2 = uVar5 + uVar9;
            bVar11 = uVar2 < param_6;
            bVar14 = uVar2 == param_6;
            bVar12 = uVar23 <= param_6;
            bVar15 = param_6 != uVar23;
            uVar23 = uVar23 + uVar6;
            uVar16 = ((((uVar8 < 0x77359401 && uVar5 < param_6) && bVar11 ||
                       ((uVar8 < 0x77359401 && bVar10) && (2000000000 < uVar8 || bVar13)) && bVar14)
                      && bVar12) &&
                     (((2000000000 < uVar8 || (!bVar10 || !bVar13)) || !bVar11) &&
                      ((2000000000 < uVar8 || (!bVar10 || !bVar13)) || !bVar14) || bVar15)) &&
                     uVar23 == param_6;
            if ((((((2000000000 < uVar8 || param_6 <= uVar5) || !bVar11) &&
                   ((2000000000 < uVar8 || (!bVar10 || !bVar13)) || !bVar14) || !bVar12) ||
                 ((uVar8 < 0x77359401 && uVar5 < param_6) && uVar2 <= param_6) && !bVar15) ||
                param_6 <= uVar23) &&
                (((((uVar8 >= 0x77359401 || uVar5 >= param_6) || !bVar11) &&
                   ((uVar8 >= 0x77359401 || (!bVar10 || !bVar13)) || !bVar14) || !bVar12) ||
                 ((2000000000 >= uVar8 && (bVar10 && bVar13)) && bVar11 ||
                 (2000000000 >= uVar8 && (bVar10 && bVar13)) && bVar14) && !bVar15) ||
                uVar23 != param_6)) goto LAB_100291a90;
            puVar26 = (uint *)((long)param_3 + uVar5) + 1;
            uVar4 = *(uint *)((long)param_3 + uVar5);
            if ((int)uVar4 < 0) {
              func_0x00010533bd60();
            }
            else {
              uVar23 = (ulong)uVar4 << 3 | 4;
              uVar16 = uVar23 == uVar9;
              if (uVar9 < uVar23) {
                func_0x00010533bd60();
              }
              else {
                FUN_100291ce0(&uStack_c0,(ulong)uVar4 << 1);
                func_0x000107c610b4(uStack_c0,puVar26,uStack_b8 - uStack_c0);
                FUN_100291d50(&lStack_e0,uVar27);
                puVar18 = (ulong *)((long)puVar26 + (ulong)(uVar4 << 3));
                func_0x000107c610b4(lStack_e0,puVar18,uVar27);
                uStack_88 = uStack_b8;
                uStack_90 = uStack_c0;
                lStack_80 = uStack_b0;
                uStack_c0 = 0;
                uStack_b8 = 0;
                uStack_b0 = 0;
                uStack_70 = uStack_d8;
                lStack_78 = lStack_e0;
                uStack_68 = uStack_d0;
                FUN_100291f3c();
                func_0x000100291f48(*param_5,auStack_60);
                FUN_100291fb0(&uStack_90);
                func_0x000100292060(&uStack_90);
                FUN_100100fec(&lStack_e0);
                FUN_1002920a0(&uStack_c0);
                param_4 = uVar27;
              }
            }
          }
        }
        FUN_1002920a0();
        func_0x0001000cb720(extraout_x8_03);
        if ((bool)uVar16) {
          return;
        }
        goto LAB_100291b7c;
      }
    }
  }
  func_0x0001000cb720(extraout_x8_03);
  puVar18 = param_3;
  puVar20 = param_5;
  if ((bool)in_ZR) {
    FUN_100291754();
    FUN_1000cb690();
    FUN_100291898();
    *(undefined8 *)(unaff_x22 + 0x10) = 0;
    func_0x0001002918e4();
    *(undefined8 *)(extraout_x8_00 + 0x40) = in_register_00005008;
    *(undefined8 *)(extraout_x8_00 + 0x38) = param_1;
    *(undefined8 *)(extraout_x8_00 + 0x50) = in_register_00005008;
    *(undefined8 *)(extraout_x8_00 + 0x48) = param_1;
    *(undefined8 *)(extraout_x8_00 + 0x58) = 0;
    func_0x0001000cb6f8();
    func_0x0001002918fc();
    func_0x0001000cb720(extraout_x8);
    if ((bool)in_ZR) {
      return;
    }
    func_0x000107c60e78();
    func_0x000107c60bd8();
    FUN_100291764(&uStack_a0);
    lStack_78 = unaff_x19 + 0x68;
    func_0x000107c61288();
    lVar21 = *(long *)(unaff_x19 + 0x140);
    lStack_80 = *(long *)(unaff_x19 + 0x148);
    uStack_88 = lVar21;
    if (lStack_80 != 0) {
      do {
        FUN_1001078e4();
        lVar21 = extraout_x8_02;
      } while (extraout_w11 != 0);
    }
    if (lVar21 == 0) {
      extraout_x8_01[1] = lStack_98;
      *extraout_x8_01 = uStack_a0;
      if (lStack_98 != 0) {
        do {
          func_0x0001001d7934();
        } while (extraout_w10 != 0);
      }
    }
    else {
      FUN_100291920(extraout_x8_01);
    }
    func_0x0001002920ec();
    FUN_100107b84(&lStack_78);
    FUN_1002920f4(&uStack_a0);
    return;
  }
LAB_100291b7c:
  func_0x000107c60e78();
  func_0x000100292060(&uStack_90);
  FUN_100100fec(&lStack_e0);
  FUN_1002920a0(&uStack_c0);
  ppuVar17 = &puStack_a8;
  FUN_1002920a0(ppuVar17);
  func_0x00010533bbe8();
  FUN_10002b940();
  if (puVar20 != (undefined8 *)0x0) {
    FUN_100291c58();
    FUN_100291c94(ppuVar17,puVar18,param_4,puVar20);
  }
  func_0x00010002b9e0();
  FUN_100291cb4();
  return;
}



/* Entry: 100291be8; end: 100291c57;  */

void FUN_100291be8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  FUN_10002b940();
  if (param_4 != 0) {
    FUN_100291c58();
    FUN_100291c94(param_1,param_2,param_3,param_4);
  }
  func_0x00010002b9e0();
  FUN_100291cb4();
  return;
}



/* Entry: 100291c58; end: 100291c93;  */

void FUN_100291c58(long *param_1,undefined4 *param_2,undefined4 *param_3)

{
  long *plVar1;
  undefined4 *puVar2;
  
  if ((ulong)param_2 >> 0x3e == 0) {
    plVar1 = param_1 + 2;
    func_0x000100161bb8();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)plVar1 + (long)param_2 * 4;
    return;
  }
  func_0x00010507a6b8();
  puVar2 = (undefined4 *)param_1[1];
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    *puVar2 = *param_2;
    puVar2 = puVar2 + 1;
  }
  param_1[1] = (long)puVar2;
  return;
}



/* Entry: 100291c94; end: 100291cb3;  */

void FUN_100291c94(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    *puVar1 = *param_2;
    puVar1 = puVar1 + 1;
  }
  *(undefined4 **)(param_1 + 8) = puVar1;
  return;
}



/* Entry: 100291cb4; end: 100291cdf;  */

long FUN_100291cb4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_1002920c4(param_1);
  }
  return param_1;
}



/* Entry: 100291ce0; end: 100291d2f;  */

void FUN_100291ce0(undefined8 param_1,long param_2)

{
  func_0x00010002b898();
  FUN_10002b940();
  if (param_2 != 0) {
    FUN_100291c58();
    FUN_1000e15c4();
    FUN_100291d30();
  }
  func_0x00010002b9e0();
  FUN_100291cb4();
  return;
}



/* Entry: 100291d30; end: 100291d4f;  */

void FUN_100291d30(long param_1,long param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  
  puVar2 = *(undefined4 **)(param_1 + 8);
  puVar1 = puVar2;
  for (lVar3 = param_2 << 2; lVar3 != 0; lVar3 = lVar3 + -4) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  *(undefined4 **)(param_1 + 8) = puVar2 + param_2;
  return;
}



/* Entry: 100291d50; end: 100291d9f;  */

void FUN_100291d50(undefined8 param_1,long param_2)

{
  func_0x00010002b898();
  FUN_10002b940();
  if (param_2 != 0) {
    FUN_10002b958();
    FUN_1000e15c4();
    FUN_100291da0();
  }
  func_0x00010002b9e0();
  FUN_10002b9fc();
  return;
}



/* Entry: 100291da0; end: 100291dbb;  */

void FUN_100291da0(long param_1,long param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  puVar1 = *(undefined1 **)(param_1 + 8) + param_2;
  puVar2 = *(undefined1 **)(param_1 + 8);
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 **)(param_1 + 8) = puVar1;
  return;
}



/* Entry: 100291dbc; end: 100291ecf;  */

void FUN_100291dbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e38198,&UNK_10da22900);
  puVar1 = &UNK_110495830;
  func_0x000107c613fc(&UNK_110495830,0x60,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  FUN_1000823a8(FUN_1008fac9c,puVar1);
  return;
}



/* Entry: 100291ed0; end: 100291eef;  */

void FUN_100291ed0(void)

{
  func_0x000107c61168(&PTR_PTR_112e38210);
  return;
}



/* Entry: 100291ef0; end: 100291f3b;  */

void FUN_100291ef0(undefined8 param_1)

{
  FUN_1000285a8(0x112e40850,&UNK_10da2e990);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101f1e190,param_1);
  return;
}



/* Entry: 100291f3c; end: 100291f4f;  */

void FUN_100291f3c(void)

{
  return;
}



/* Entry: 100291f50; end: 100291faf;  */

void FUN_100291f50(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined1 uStack_51;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001000cb560();
  FUN_1000cb690();
  FUN_100291898();
  FUN_10029202c(uStack_30,param_2);
  func_0x0001000cb6f8();
  func_0x0001002918fc();
  func_0x0001000cb720(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x00010533bc84();
  func_0x0001002918fc();
  func_0x00010533bbe8();
  pcStack_48 = FUN_100291fb0;
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_100291f50(&uStack_51,uStack_30);
  return;
}



/* Entry: 100291fb0; end: 100291fcf;  */

void FUN_100291fb0(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_100291f50(&uStack_11,param_1);
  return;
}



/* Entry: 100291fd0; end: 10029202b;  */

void FUN_100291fd0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
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
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  param_1[5] = param_2[5];
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  uVar2 = param_2[7];
  uVar1 = param_2[6];
  param_1[8] = param_2[8];
  param_1[7] = uVar2;
  param_1[6] = uVar1;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[6] = 0;
  return;
}



/* Entry: 10029202c; end: 10029208f;  */

undefined8 * FUN_10029202c(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_DAT_11087c568;
  param_1[1] = 0;
  FUN_100291fd0(param_1 + 3);
  return param_1;
}



/* Entry: 100292090; end: 10029209f;  */

undefined1 * FUN_100292090(void)

{
  return &stack0x00000008;
}



/* Entry: 1002920a0; end: 1002920c3;  */

void FUN_1002920a0(void)

{
  FUN_100292090();
  FUN_1002920c4();
  return;
}



/* Entry: 1002920c4; end: 1002920f3;  */

void FUN_1002920c4(undefined8 *param_1)

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



/* Entry: 1002920f4; end: 10029214b;  */

long FUN_1002920f4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      func_0x000107c60d68(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10029214c; end: 100292163;  */

undefined8 FUN_10029214c(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000107c60ca0(param_1 + 0x48);
  FUN_100100fec(param_1 + 0x30);
  FUN_100292090(param_1 + 0x18);
  FUN_1002920c4();
  return unaff_x19;
}



/* Entry: 100292164; end: 1002921c3;  */

void FUN_100292164(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long unaff_x19;
  long unaff_x20;
  long lVar1;
  
  func_0x000100292158();
  if (param_4 != 0) {
    FUN_1002921c4();
    FUN_10002b958(param_1,param_4);
    lVar1 = *(long *)(unaff_x19 + 8);
    if (param_3 - unaff_x20 != 0) {
      func_0x0001002921d0();
    }
    *(long *)(unaff_x19 + 8) = lVar1 + (param_3 - unaff_x20);
  }
  FUN_100292240();
  FUN_10002b9fc();
  return;
}



/* Entry: 1002921c4; end: 1002921df;  */

void FUN_1002921c4(void)

{
  return;
}



/* Entry: 1002921e0; end: 10029221f;  */

void FUN_1002921e0(void)

{
  FUN_1000285a8(0x112e0bae8,&UNK_10d9e5080);
  FUN_1000823a8(&UNK_101c516a0,0);
  return;
}



/* Entry: 100292220; end: 10029223f;  */

void FUN_100292220(void)

{
  func_0x000107c61168(&PTR_PTR_11286d8d8);
  return;
}



/* Entry: 100292240; end: 10029225f;  */

void FUN_100292240(void)

{
  return;
}



/* Entry: 100292260; end: 1002922ab;  */

void FUN_100292260(undefined8 param_1)

{
  FUN_1000285a8(0x112e0bce8,&UNK_10d9e52d0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1004eaa78,param_1);
  return;
}



/* Entry: 1002922ac; end: 1002922cb;  */

void FUN_1002922ac(void)

{
  func_0x000107c61168(&PTR_PTR_11291e250);
  return;
}



/* Entry: 1002922cc; end: 1002922e7;  */

void FUN_1002922cc(undefined8 param_1)

{
  FUN_1000285a8(0x112e37950,&UNK_10da21b50);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1004e9960,param_1);
  return;
}



/* Entry: 1002922e8; end: 100292337;  */

void FUN_1002922e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 100292338; end: 100292357;  */

void FUN_100292338(void)

{
  func_0x000107c61168(&PTR_PTR_112e379c8);
  return;
}



/* Entry: 100292358; end: 100292437;  */

void FUN_100292358(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e0db20,&UNK_10d9e80c0);
  puVar1 = &UNK_1104606b0;
  func_0x000107c613fc(&UNK_1104606b0,0x48,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  FUN_1000823a8(FUN_100963f2c,puVar1);
  return;
}



/* Entry: 100292438; end: 100292457;  */

void FUN_100292438(void)

{
  func_0x000107c61168(&PTR_PTR_112e0db98);
  return;
}



/* Entry: 100292458; end: 1002924a3;  */

void FUN_100292458(undefined8 param_1)

{
  FUN_1000285a8(0x112ffab48,&UNK_10dc68f30);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1003b4190,param_1);
  return;
}



/* Entry: 1002924a4; end: 10029265b;  */

/* WARNING: Removing unreachable block (ram,0x0001002925c4) */

void FUN_1002924a4(long param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long extraout_x8;
  long unaff_x21;
  undefined1 *puVar5;
  long lVar6;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  lVar1 = 0x112da9650;
  uStack_78 = param_3;
  uStack_70 = param_4;
  FUN_1000285a8(0x112da9650,&UNK_10d950c08);
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = auStack_80 + -extraout_x8;
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  FUN_1000a8868(param_1,uVar3);
  FUN_10029a428();
  puVar2 = &UNK_1103ce390;
  func_0x000107c606ec(puVar5,&UNK_1103ce390,&UNK_1103ce390,param_1,uVar3,uVar4);
  uStack_52 = 0;
  uStack_51 = param_2;
  func_0x00010029b564();
  func_0x000107c60554(&uStack_51,&uStack_52,lVar1,&UNK_1103ce408,puVar2);
  if (unaff_x21 == 0) {
    uStack_53 = 1;
    func_0x000107c60520(uStack_78,uStack_70,&uStack_53,lVar1);
    uStack_54 = 2;
    uVar3 = 0x112da9668;
    uStack_68 = param_5;
    FUN_1000285a8(0x112da9668,&UNK_10d950c10);
    uVar4 = uVar3;
    FUN_10029ec90();
    func_0x000107c60554(&uStack_68,&uStack_54,lVar1,uVar3,uVar4);
    (**(code **)(lVar6 + 8))(puVar5,lVar1);
  }
  else {
    (**(code **)(lVar6 + 8))(puVar5,lVar1);
  }
  return;
}



/* Entry: 10029265c; end: 10029267b;  */

void FUN_10029265c(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  FUN_1002924a4(param_1,*unaff_x20,*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 10029267c; end: 10029268b;  */

undefined1  [16] FUN_10029267c(void)

{
  return ZEXT816(0x1103ce390);
}



/* Entry: 10029268c; end: 1002926d7;  */

void FUN_10029268c(undefined8 param_1)

{
  FUN_1000285a8(0x112ffabb0,&UNK_10dc68fc0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100451458,param_1);
  return;
}



/* Entry: 1002926d8; end: 1002926f7;  */

void FUN_1002926d8(void)

{
  func_0x000107c61168(&PTR_PTR_112948328);
  return;
}



/* Entry: 1002926f8; end: 10029279b;  */

void FUN_1002926f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e337f0,&UNK_10da1c970);
  puVar1 = &UNK_11048f690;
  func_0x000107c613fc(&UNK_11048f690,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  FUN_1000823a8(FUN_1004356c4,puVar1);
  return;
}



/* Entry: 10029279c; end: 1002927bb;  */

void FUN_10029279c(void)

{
  func_0x000107c61168(&PTR_PTR_112e33868);
  return;
}



/* Entry: 1002927bc; end: 100292877;  */

void FUN_1002927bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112f8fda0,&UNK_10dc07f10);
  puVar1 = &UNK_11068de58;
  func_0x000107c613fc(&UNK_11068de58,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  FUN_1000823a8(&UNK_10374ce60,puVar1);
  return;
}



/* Entry: 100292878; end: 1002928bb;  */

void FUN_100292878(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1002928bc; end: 1002928bf;  */

void FUN_1002928bc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112da96b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d950c60;
  func_0x000107c61520(&UNK_10d950c60,&UNK_1103ce390);
  puRam0000000112da96b0 = puVar1;
  return;
}



/* Entry: 1002928c0; end: 1002928ff;  */

void FUN_1002928c0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112da96b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d950c60;
  func_0x000107c61520(&UNK_10d950c60,&UNK_1103ce390);
  puRam0000000112da96b0 = puVar1;
  return;
}



/* Entry: 100292900; end: 100292903;  */

void FUN_100292900(void)

{
  undefined *puVar1;
  
  if (puRam0000000112da96b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d950c38;
  func_0x000107c61520(&UNK_10d950c38,&UNK_1103ce390);
  puRam0000000112da96b8 = puVar1;
  return;
}



/* Entry: 100292904; end: 100292943;  */

void FUN_100292904(void)

{
  undefined *puVar1;
  
  if (puRam0000000112da96b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d950c38;
  func_0x000107c61520(&UNK_10d950c38,&UNK_1103ce390);
  puRam0000000112da96b8 = puVar1;
  return;
}



/* Entry: 100292944; end: 100292a2f;  */

void FUN_100292944(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112f8fda8,&UNK_10dc07f18);
  puVar1 = &UNK_11068de80;
  func_0x000107c613fc(&UNK_11068de80,0x50,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  *(undefined8 *)(puVar1 + 0x18) = param_5;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  *(undefined8 *)(puVar1 + 0x28) = param_2;
  *(undefined8 *)(puVar1 + 0x30) = param_3;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  FUN_1000823a8(&UNK_10374d26c,puVar1);
  return;
}



/* Entry: 100292a30; end: 100292a33;  */

void FUN_100292a30(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100292a34; end: 100292a53;  */

void FUN_100292a34(void)

{
  func_0x000107c61168(&PTR_PTR_1128e9778);
  return;
}



/* Entry: 100292a54; end: 100292a6f;  */

void FUN_100292a54(undefined8 param_1)

{
  FUN_1000285a8(0x112e35df0,&UNK_10da1f660);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100b998e4,param_1);
  return;
}



/* Entry: 100292a70; end: 100292abf;  */

void FUN_100292a70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 100292ac0; end: 100292adf;  */

void FUN_100292ac0(void)

{
  func_0x000107c61168(&PTR_PTR_112e35e68);
  return;
}



/* Entry: 100292ae0; end: 100292b77;  */

void FUN_100292ae0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e1d7e8,&UNK_10d9fee80);
  puVar1 = &UNK_110471248;
  func_0x000107c613fc(&UNK_110471248,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(FUN_1004f51d8,puVar1);
  return;
}



/* Entry: 100292b78; end: 100292b97;  */

void FUN_100292b78(void)

{
  func_0x000107c61168(&PTR_PTR_112e1d860);
  return;
}



/* Entry: 100292b98; end: 100292c33;  */

void FUN_100292b98(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c51804(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dbf058);
  func_0x000107c61180();
  func_0x000107c3d798(uVar2);
  func_0x000107c61170(puVar1);
  *(bool *)param_4 = (float)param_3 * -0.1 + 1.0 <= 0.5;
  return;
}



/* Entry: 100292c34; end: 100292ccb;  */

void FUN_100292c34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e37c28,&UNK_10da22010);
  puVar1 = &UNK_110495488;
  func_0x000107c613fc(&UNK_110495488,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(&UNK_101eb234c,puVar1);
  return;
}



/* Entry: 100292ccc; end: 100292d1f;  */

void FUN_100292ccc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100292d20; end: 100292d5f;  */

void FUN_100292d20(void)

{
  FUN_1000285a8(0x112f36650,&UNK_10db7ec50);
  FUN_1000823a8(FUN_1008f1964,0);
  return;
}



/* Entry: 100292d60; end: 100292d7b;  */

void FUN_100292d60(undefined8 param_1)

{
  FUN_1000285a8(0x112e15958,&UNK_10d9f2a90);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101cc2b64,param_1);
  return;
}



/* Entry: 100292d7c; end: 100292dcb;  */

void FUN_100292d7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 100292dcc; end: 100292e33;  */

void FUN_100292dcc(void)

{
  func_0x000107c61168(&PTR_PTR_112e159d0);
  return;
}



/* Entry: 100292e34; end: 100292e4f;  */

void FUN_100292e34(undefined8 param_1)

{
  FUN_1000285a8(0x112e15960,&UNK_10d9f2a98);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101cc2c58,param_1);
  return;
}



/* Entry: 100292e50; end: 100292eb7;  */

void FUN_100292e50(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x000107c5a790(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,
                      &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf3e0);
  func_0x000107c61180();
  uVar1 = puRam00000001136bb4f8;
  puRam00000001136bb4f8 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100292eb8; end: 100292ec7;  */

ulong FUN_100292eb8(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  lVar3 = *(long *)(uVar2 + 8);
  uVar1 = *(uint *)(lVar3 + 0x14);
  if ((int)uVar1 < 0) {
    lVar4 = *(long *)(param_2 + 0x40);
    if (*(int *)(lVar4 + (ulong)-uVar1 * 4) != *(int *)(lVar3 + 0x10)) goto LAB_1001115e8;
  }
  else {
    lVar4 = *(long *)(param_2 + 0x40);
    if ((*(uint *)(lVar4 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) == 0) {
LAB_1001115e8:
      func_0x000107c4163c(uVar2);
      return uVar2;
    }
  }
  return (ulong)*(uint *)(lVar4 + (ulong)*(uint *)(lVar3 + 0x18));
}



/* Entry: 100292ec8; end: 100293c07;  */

void FUN_100292ec8(void)

{
  FUN_1000285a8(0x112d9e8f8,&UNK_10d93ef70);
  FUN_1000823a8(0x10071d920,0);
  return;
}



/* Entry: 100293c08; end: 100293c23;  */

void FUN_100293c08(undefined8 param_1)

{
  FUN_1000285a8(0x112e3a158,&UNK_10da24cd0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101ed3648,param_1);
  return;
}



/* Entry: 100293c24; end: 100293c73;  */

void FUN_100293c24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 100293c74; end: 100293c93;  */

void FUN_100293c74(void)

{
  func_0x000107c61168(&PTR_PTR_112e3a1d0);
  return;
}



/* Entry: 100293c94; end: 100293caf;  */

void FUN_100293c94(undefined8 param_1)

{
  FUN_1000285a8(0x112e12008,&UNK_10d9ed638);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101c9c638,param_1);
  return;
}



/* Entry: 100293cb0; end: 100293cff;  */

void FUN_100293cb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 100293d00; end: 100293d1f;  */

void FUN_100293d00(void)

{
  func_0x000107c61168(&PTR_PTR_11290cd30);
  return;
}



/* Entry: 100293d20; end: 100293db7;  */

void FUN_100293d20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e19220,&UNK_10d9f8a00);
  puVar1 = &UNK_11046cdc0;
  func_0x000107c613fc(&UNK_11046cdc0,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(FUN_10096691c,puVar1);
  return;
}



/* Entry: 100293db8; end: 100293dd7;  */

void FUN_100293db8(void)

{
  func_0x000107c61168(&PTR_PTR_112e19290);
  return;
}



/* Entry: 100293dd8; end: 100293e23;  */

void FUN_100293dd8(undefined8 param_1)

{
  FUN_1000285a8(0x112e02f28,&UNK_10d9d5480);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_10045b98c,param_1);
  return;
}



/* Entry: 100293e24; end: 100293e43;  */

void FUN_100293e24(void)

{
  func_0x000107c61168(&PTR_PTR_112946630);
  return;
}



/* Entry: 100293e44; end: 100293ec3;  */

void FUN_100293e44(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e0ec90,&UNK_10d9e9a40);
  puVar1 = &UNK_110461458;
  func_0x000107c613fc(&UNK_110461458,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_10048ebe4,puVar1);
  return;
}



/* Entry: 100293ec4; end: 100293f03;  */

void FUN_100293ec4(void)

{
  func_0x000107c61168(&PTR_PTR_112e0ed08);
  return;
}



/* Entry: 100293f04; end: 100293fa7;  */

void FUN_100293f04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e19690,&UNK_10d9f9100);
  puVar1 = &UNK_11046d188;
  func_0x000107c613fc(&UNK_11046d188,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  FUN_1000823a8(FUN_100974780,puVar1);
  return;
}



/* Entry: 100293fa8; end: 100293fc7;  */

void FUN_100293fa8(void)

{
  func_0x000107c61168(&PTR_PTR_112e19708);
  return;
}



/* Entry: 100293fc8; end: 100293fe3;  */

void FUN_100293fc8(undefined8 param_1)

{
  FUN_1000285a8(0x112e19698,&UNK_10d9f9108);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100974724,param_1);
  return;
}



/* Entry: 100293fe4; end: 100294033;  */

void FUN_100293fe4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 100294034; end: 100294053;  */

void FUN_100294034(void)

{
  func_0x000107c61168(&PTR_PTR_11295a7d8);
  return;
}



/* Entry: 100294054; end: 1002940d3;  */

void FUN_100294054(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e19788,&UNK_10d9f92d0);
  puVar1 = &UNK_11046d250;
  func_0x000107c613fc(&UNK_11046d250,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1009746a8,puVar1);
  return;
}



/* Entry: 1002940d4; end: 1002940f3;  */

void FUN_1002940d4(void)

{
  func_0x000107c61168(&PTR_PTR_112e197f8);
  return;
}



/* Entry: 1002940f4; end: 10029410f;  */

void FUN_1002940f4(undefined8 param_1)

{
  FUN_1000285a8(0x112d6aed8,&UNK_10d92e398);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_10097464c,param_1);
  return;
}



/* Entry: 100294110; end: 10029415f;  */

void FUN_100294110(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 100294160; end: 10029419f;  */

void FUN_100294160(void)

{
  func_0x000107c61168(&PTR_PTR_11295a898);
  return;
}



/* Entry: 1002941a0; end: 10029421f;  */

void FUN_1002941a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e19868,&UNK_10d9f9410);
  puVar1 = &UNK_11046d318;
  func_0x000107c613fc(&UNK_11046d318,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(&UNK_101cdd514,puVar1);
  return;
}



/* Entry: 100294220; end: 10029426b;  */

void FUN_100294220(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10029426c; end: 100294287;  */

void FUN_10029426c(undefined8 param_1)

{
  FUN_1000285a8(0x112e19870,&UNK_10d9f9418);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101cdd74c,param_1);
  return;
}



/* Entry: 100294288; end: 1002942d7;  */

void FUN_100294288(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002942d8; end: 1002942f7;  */

void FUN_1002942d8(void)

{
  func_0x000107c61168(&PTR_PTR_112911ef0);
  return;
}



/* Entry: 1002942f8; end: 10029438f;  */

void FUN_1002942f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e019a0,&UNK_10d9d2d20);
  puVar1 = &UNK_110445af0;
  func_0x000107c613fc(&UNK_110445af0,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101b264ac,puVar1);
  return;
}



/* Entry: 100294390; end: 1002943e3;  */

void FUN_100294390(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1002943e4; end: 10029447b;  */

void FUN_1002943e4(undefined8 param_1)

{
  FUN_1000285a8(0x112df9af0,&UNK_10d9cada0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101ace49c,param_1);
  return;
}



/* Entry: 10029447c; end: 10029449b;  */

void FUN_10029447c(void)

{
  func_0x000107c61168(&PTR_PTR_112966b20);
  return;
}



/* Entry: 10029449c; end: 10029451b;  */

void FUN_10029449c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e1d8d8,&UNK_10d9ff020);
  puVar1 = &UNK_110471310;
  func_0x000107c613fc(&UNK_110471310,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_10091c3b0,puVar1);
  return;
}


