/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107801b60; end: 107801c8f;  */

double FUN_107801b60(double param_1,undefined8 *param_2,long param_3,float *param_4)

{
  ulong uVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  char cVar2;
  char cVar3;
  undefined1 uVar4;
  float *pfVar5;
  undefined8 extraout_x8;
  long extraout_x8_00;
  ulong extraout_x8_01;
  ulong uVar6;
  long extraout_x8_02;
  long extraout_x9;
  long extraout_x10;
  float *extraout_x10_00;
  long extraout_x10_01;
  float *pfVar7;
  uint *extraout_x11;
  uint *puVar8;
  undefined8 uVar9;
  long extraout_x11_00;
  uint *extraout_x11_01;
  long extraout_x11_02;
  long extraout_x11_03;
  long extraout_x12;
  float *unaff_x19;
  uint *unaff_x20;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  float fVar14;
  undefined8 uStack_68;
  
  func_0x0001078087f8();
  func_0x000107809484();
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x000107801b9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10dea61b2)[extraout_x8_00] * 4 + 0x107801ba0))(1);
    return param_1;
  }
  func_0x000107808fd0();
  func_0x000107801a2c();
  func_0x00010780967c();
  puVar8 = extraout_x11;
  while( true ) {
    cVar2 = SBORROW8((long)puVar8,(long)unaff_x20);
    cVar3 = (long)puVar8 - (long)unaff_x20 < 0;
    uVar4 = puVar8 == unaff_x20;
    if ((bool)uVar4) break;
    param_1 = (double)(ulong)*puVar8;
    func_0x0001078096d4();
    if ((bool)cVar3) {
      uVar9 = *(undefined8 *)(extraout_x10 + 4);
      fVar11 = *(float *)(extraout_x10 + 0xc);
      uVar13 = *(undefined8 *)(extraout_x10 + 0x18);
      uVar12 = *(undefined8 *)(extraout_x10 + 0x10);
      cVar3 = true;
      do {
        func_0x00010780996c();
        fVar10 = SUB84(param_1,0);
        if ((bool)uVar4) {
          uVar4 = true;
          pfVar7 = unaff_x19;
          goto LAB_107801c38;
        }
        fVar14 = *(float *)(extraout_x12 + 0x20);
        cVar2 = NAN(fVar10) || NAN(fVar14);
        uVar4 = fVar10 == fVar14;
        cVar3 = fVar10 < fVar14;
      } while ((bool)cVar3);
      pfVar7 = (float *)((long)unaff_x19 + extraout_x11_00 + 0x40);
LAB_107801c38:
      *pfVar7 = fVar10;
      *(undefined8 *)(pfVar7 + 1) = uVar9;
      pfVar7[3] = fVar11;
      *(undefined8 *)(pfVar7 + 6) = uVar13;
      *(undefined8 *)(pfVar7 + 4) = uVar12;
      func_0x000107809798();
      if ((bool)uVar4) {
        func_0x000107809444();
        goto LAB_107801c70;
      }
    }
    func_0x000107809454();
    puVar8 = extraout_x11_01;
  }
  param_2 = (undefined8 *)0x1;
  uVar4 = 1;
LAB_107801c70:
  func_0x0001078087c4(extraout_x8);
  if ((bool)uVar4) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000107808a58();
  func_0x000107809938();
  if (cVar3 == cVar2) {
    uVar6 = extraout_x8_01 >> 1;
    uVar1 = (long)param_4 - (long)param_2 >> 5;
    cVar3 = SBORROW8(uVar6,uVar1);
    cVar2 = (long)(uVar6 - uVar1) < 0;
    uVar4 = uVar6 == uVar1;
    if ((long)uVar1 <= (long)uVar6) {
      func_0x0001078097f8();
      pfVar7 = extraout_x10_00;
      if ((cVar2 != cVar3) && (pfVar7 = extraout_x10_00, *extraout_x10_00 < extraout_x10_00[8])) {
        pfVar7 = extraout_x10_00 + 8;
      }
      fVar11 = *param_4;
      param_1 = (double)(ulong)(uint)fVar11;
      uVar4 = *pfVar7 == fVar11;
      if (fVar11 <= *pfVar7) {
        uVar9 = *(undefined8 *)(param_4 + 1);
        fVar11 = param_4[3];
        uVar13 = *(undefined8 *)(param_4 + 6);
        uVar12 = *(undefined8 *)(param_4 + 4);
        do {
          pfVar5 = pfVar7;
          func_0x000107808ff8();
          *(undefined8 *)(extraout_x11_02 + 0x18) = *(undefined8 *)(pfVar5 + 6);
          uVar4 = extraout_x8_02 == extraout_x9;
          if (extraout_x8_02 < extraout_x9) break;
          func_0x00010780966c();
          pfVar7 = (float *)(param_2 + extraout_x10_01 * 4);
          if ((extraout_x11_03 + 2 < param_3) && (*pfVar7 < pfVar7[8])) {
            pfVar7 = pfVar7 + 8;
          }
          uVar4 = *pfVar7 == SUB84(param_1,0);
        } while (SUB84(param_1,0) <= *pfVar7);
        *pfVar5 = SUB84(param_1,0);
        pfVar5[3] = fVar11;
        *(undefined8 *)(pfVar5 + 1) = uVar9;
        *(undefined8 *)(pfVar5 + 6) = uVar13;
        *(undefined8 *)(pfVar5 + 4) = uVar12;
      }
    }
  }
  func_0x0001078087c4(uStack_68);
  if ((bool)uVar4) {
    return param_1;
  }
  ___stack_chk_fail();
  return (double)((float)param_2[1] - (float)*param_2) *
         (double)((float)((ulong)param_2[1] >> 0x20) - (float)((ulong)*param_2 >> 0x20));
}



/* Entry: 1078025b0; end: 107802ac7;  */

void FUN_1078025b0(undefined8 *param_1,undefined8 param_2,long param_3,uint param_4)

{
  float *pfVar1;
  undefined1 uVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar3;
  char cVar4;
  undefined1 uVar5;
  char cVar6;
  undefined8 *puVar7;
  long lVar8;
  long extraout_x8;
  undefined8 *puVar9;
  undefined8 *extraout_x8_00;
  long extraout_x8_01;
  undefined4 *extraout_x8_02;
  undefined4 *extraout_x8_03;
  undefined4 *extraout_x8_04;
  undefined4 *puVar11;
  undefined8 *extraout_x8_05;
  undefined8 *extraout_x9;
  long extraout_x9_00;
  ulong extraout_x9_01;
  long extraout_x9_02;
  long extraout_x9_03;
  undefined8 extraout_x10;
  undefined8 extraout_x10_00;
  undefined8 extraout_x10_01;
  long extraout_x11;
  undefined8 uVar12;
  long extraout_x12;
  long extraout_x13;
  long extraout_x13_00;
  long extraout_x14;
  long extraout_x14_00;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 *unaff_x26;
  undefined8 *puVar15;
  undefined8 unaff_x30;
  ulong uVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  undefined4 uVar20;
  uint uStack_84;
  long lVar10;
  
  uStack_84 = param_4;
  func_0x000107809a18();
  func_0x00010780907c();
LAB_1078025d8:
  func_0x000107809914();
LAB_1078025dc:
  func_0x0001078095f4();
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x000107802854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)*(byte *)((long)unaff_x26 + 0x10dea61c4) * 4 + 0x107802858))();
    return;
  }
  bVar3 = (undefined8 *)0x16 < unaff_x26;
  uVar5 = (long)((long)unaff_x26 - 0x17U) < 0;
  if ((long)unaff_x26 < 0x18) {
    if ((uStack_84 & 1) != 0) {
      puVar7 = unaff_x19;
      if (unaff_x19 == unaff_x20) goto LAB_107802ab4;
      goto LAB_1078028ec;
    }
    if (unaff_x19 != unaff_x20) {
      while (bVar3 = (long)(unaff_x19 + 4) - (long)unaff_x20 < 0, unaff_x19 + 4 != unaff_x20) {
        fVar19 = *(float *)((long)unaff_x19 + 0x24);
        func_0x000107809608();
        if (bVar3) {
          uVar20 = *(undefined4 *)(unaff_x19 + 4);
          uVar13 = unaff_x19[6];
          uVar18 = unaff_x19[5];
          uVar12 = unaff_x19[7];
          puVar7 = extraout_x8_05;
          do {
            puVar14 = puVar7;
            puVar14[-2] = puVar14[-6];
            puVar14[-3] = puVar14[-7];
            puVar7 = puVar14 + -4;
            puVar14[-1] = puVar14[-5];
            *puVar14 = *puVar7;
          } while (fVar19 < *(float *)((long)puVar14 + -0x54));
          *(undefined4 *)(puVar14 + -7) = uVar20;
          *(float *)((long)puVar14 + -0x34) = fVar19;
          puVar14[-5] = uVar13;
          puVar14[-6] = uVar18;
          *puVar7 = uVar12;
        }
        func_0x00010780a140();
      }
    }
    goto LAB_107802ab4;
  }
  if (param_3 != 0) {
    func_0x0001078095e4();
    if (bVar3) {
      func_0x00010780915c();
      func_0x000107802ac8();
      func_0x0001078095d4();
      func_0x000107802ac8();
      func_0x00010780a078();
      func_0x000107802ac8();
      func_0x0001078091e8();
      func_0x000107802ac8();
      param_1 = unaff_x19;
      func_0x000107808f50();
    }
    else {
      func_0x00010780a0c4();
      func_0x000107802ac8();
    }
    param_3 = param_3 + -1;
    if ((uStack_84 & 1) != 0) {
      fVar19 = *(float *)((long)unaff_x19 + 4);
LAB_107802664:
      lVar8 = 0;
      uVar20 = *(undefined4 *)unaff_x19;
      uVar12 = unaff_x19[1];
      uVar18 = unaff_x19[2];
      uVar13 = unaff_x19[3];
      puVar7 = param_1;
      do {
        uVar2 = uVar5;
        func_0x00010780a14c(*(undefined4 *)((long)unaff_x19 + lVar8 + 0x24));
        uVar5 = 1;
        lVar8 = extraout_x8;
      } while ((bool)uVar2);
      puVar14 = (undefined8 *)((long)unaff_x19 + extraout_x8);
      puVar9 = unaff_x20;
      unaff_x26 = puVar14;
      if (extraout_x8 == 0x20) {
        do {
          puVar15 = puVar9;
          if (puVar9 <= puVar14) break;
          puVar15 = puVar9 + -4;
          pfVar1 = (float *)((long)puVar9 - 0x1c);
          puVar9 = puVar15;
        } while (fVar19 <= *pfVar1);
      }
      else {
        do {
          puVar15 = puVar9 + -4;
          pfVar1 = (float *)((long)puVar9 - 0x1c);
          puVar9 = puVar15;
        } while (fVar19 <= *pfVar1);
      }
      while (bVar3 = unaff_x26 == puVar15, unaff_x26 < puVar15) {
        func_0x000107808c24();
        do {
          pfVar1 = (float *)((long)unaff_x26 + 0x24);
          unaff_x26 = unaff_x26 + 4;
        } while (*pfVar1 < fVar19);
        do {
          pfVar1 = (float *)((long)puVar15 - 0x1c);
          puVar15 = puVar15 + -4;
        } while (fVar19 <= *pfVar1);
      }
      func_0x00010780a090();
      if (!bVar3) {
        func_0x000107808a40(*puVar15);
      }
      *(undefined4 *)(unaff_x26 + -4) = uVar20;
      *(float *)((long)unaff_x26 - 0x1c) = fVar19;
      unaff_x26[-3] = uVar12;
      unaff_x26[-2] = uVar18;
      unaff_x26[-1] = uVar13;
      in_CY = puVar9 <= puVar14;
      in_ZR = puVar14 == puVar9;
      param_1 = puVar7;
      if ((bool)in_CY) {
        func_0x00010780915c();
        func_0x000107802bfc();
        param_1 = puVar7;
        func_0x000107809308();
        func_0x000107802bfc();
        if ((int)param_1 != 0) goto LAB_107802834;
        if (((ulong)puVar7 & 1) != 0) goto LAB_1078025dc;
      }
      func_0x00010780915c();
      FUN_1078025b0();
      uStack_84 = 0;
      goto LAB_1078025dc;
    }
    fVar19 = *(float *)((long)unaff_x19 + 4);
    uVar5 = 1;
    if (*(float *)((long)unaff_x19 - 0x1c) < fVar19) goto LAB_107802664;
    puVar7 = unaff_x19;
    if (*(float *)((long)unaff_x20 - 0x1c) <= fVar19) {
      do {
        unaff_x26 = puVar7 + 4;
        if (unaff_x20 <= unaff_x26) break;
        pfVar1 = (float *)((long)puVar7 + 0x24);
        puVar7 = unaff_x26;
      } while (*pfVar1 <= fVar19);
    }
    else {
      do {
        unaff_x26 = puVar7 + 4;
        pfVar1 = (float *)((long)puVar7 + 0x24);
        puVar7 = unaff_x26;
      } while (*pfVar1 <= fVar19);
    }
    puVar7 = unaff_x20;
    puVar14 = unaff_x20;
    if (unaff_x26 < unaff_x20) {
      do {
        puVar14 = puVar7 + -4;
        pfVar1 = (float *)((long)puVar7 - 0x1c);
        puVar7 = puVar14;
      } while (fVar19 < *pfVar1);
    }
    uVar20 = *(undefined4 *)unaff_x19;
    uVar12 = unaff_x19[1];
    uVar18 = unaff_x19[2];
    uVar13 = unaff_x19[3];
    while( true ) {
      in_CY = puVar14 <= unaff_x26;
      in_ZR = unaff_x26 == puVar14;
      if ((bool)in_CY) break;
      func_0x0001078090dc();
      do {
        pfVar1 = (float *)((long)unaff_x26 + 0x24);
        unaff_x26 = unaff_x26 + 4;
      } while (*pfVar1 <= fVar19);
      do {
        pfVar1 = (float *)((long)puVar14 - 0x1c);
        puVar14 = puVar14 + -4;
      } while (fVar19 < *pfVar1);
    }
    func_0x00010780a084();
    if (!(bool)in_ZR) {
      func_0x000107808a40(*extraout_x8_00);
    }
    uStack_84 = 0;
    *(undefined4 *)(unaff_x26 + -4) = uVar20;
    *(float *)((long)unaff_x26 - 0x1c) = fVar19;
    unaff_x26[-3] = uVar12;
    unaff_x26[-2] = uVar18;
    unaff_x26[-1] = uVar13;
    goto LAB_1078025dc;
  }
  if (unaff_x19 == unaff_x20) goto LAB_107802ab4;
  func_0x000107809b6c();
  lVar8 = 0;
  do {
    func_0x0001078092cc();
    func_0x000107802d00();
    lVar8 = lVar8 + -1;
  } while (-1 < lVar8);
  do {
    if ((long)unaff_x26 < 2) goto LAB_107802ab4;
    func_0x000107808ea4((long)unaff_x26 - 2);
    lVar8 = extraout_x13;
    lVar10 = extraout_x14;
    do {
      lVar8 = lVar8 + lVar10 * 0x20;
      puVar7 = (undefined8 *)(lVar10 * 2 + 2);
      cVar4 = SBORROW8((long)puVar7,(long)unaff_x26);
      cVar6 = (long)puVar7 - (long)unaff_x26 < 0;
      bVar3 = puVar7 == unaff_x26;
      lVar10 = lVar8 + 0x20;
      if ((long)puVar7 < (long)unaff_x26) {
        fVar19 = *(float *)(lVar8 + 0x24);
        fVar17 = *(float *)(lVar8 + 0x44);
        cVar4 = NAN(fVar19) || NAN(fVar17);
        bVar3 = fVar19 == fVar17;
        cVar6 = fVar19 < fVar17;
        if ((bool)cVar6) {
          lVar10 = lVar8 + 0x40;
        }
      }
      func_0x000107808dac(lVar10);
      lVar8 = extraout_x13_00;
      lVar10 = extraout_x14_00;
    } while (bVar3 || cVar6 != cVar4);
    lVar8 = extraout_x9_00 + -0x20;
    cVar6 = SBORROW8(extraout_x8_01,lVar8);
    cVar4 = extraout_x8_01 - lVar8 < 0;
    if (extraout_x8_01 == lVar8) {
      func_0x000107809594();
    }
    else {
      func_0x000107808b30();
      if ((cVar4 == cVar6) &&
         (uVar16 = (ulong)(uint)extraout_x8_02[1],
         *(float *)((long)unaff_x19 + (extraout_x9_01 >> 1) * 0x20 + 4) < (float)extraout_x8_02[1]))
      {
        uVar20 = *extraout_x8_02;
        uVar18 = *(undefined8 *)(extraout_x8_02 + 4);
        uVar12 = *(undefined8 *)(extraout_x8_02 + 2);
        do {
          func_0x0001078097a4();
          fVar19 = (float)uVar16;
          puVar11 = extraout_x8_03;
          uVar13 = extraout_x10_00;
          if (extraout_x9_02 == 0) break;
          func_0x000107809fec();
          fVar19 = (float)uVar16;
          puVar11 = extraout_x8_04;
          uVar13 = extraout_x10_01;
        } while (*(float *)((long)unaff_x19 + extraout_x9_03 * 0x20 + 4) < fVar19);
        *puVar11 = uVar20;
        puVar11[1] = fVar19;
        *(undefined8 *)(puVar11 + 4) = uVar18;
        *(undefined8 *)(puVar11 + 2) = uVar12;
        *(undefined8 *)(puVar11 + 6) = uVar13;
      }
    }
    unaff_x26 = (undefined8 *)((long)unaff_x26 - 1);
  } while( true );
LAB_1078028ec:
  puVar14 = puVar7;
  if (puVar14 + 4 == unaff_x20) {
LAB_107802ab4:
    func_0x000107808f30(unaff_x30);
    return;
  }
  uVar16 = (ulong)(uint)*(float *)((long)puVar14 + 0x24);
  puVar7 = puVar14 + 4;
  if (*(float *)((long)puVar14 + 0x24) < *(float *)((long)puVar14 + 4)) {
    uVar20 = *(undefined4 *)(puVar14 + 4);
    uVar18 = puVar14[6];
    uVar12 = puVar14[5];
    do {
      func_0x000107809c2c();
      puVar7 = unaff_x19;
      if (extraout_x11 == 0) goto LAB_107802940;
    } while ((float)uVar16 < *(float *)(extraout_x12 + -0x1c));
    puVar7 = (undefined8 *)((long)unaff_x19 + extraout_x11);
LAB_107802940:
    *(undefined4 *)puVar7 = uVar20;
    *(float *)((long)puVar7 + 4) = (float)uVar16;
    puVar7[2] = uVar18;
    puVar7[1] = uVar12;
    puVar7[3] = extraout_x10;
    puVar7 = extraout_x9;
  }
  goto LAB_1078028ec;
LAB_107802834:
  unaff_x20 = puVar15;
  if (((ulong)puVar7 & 1) != 0) goto LAB_107802ab4;
  goto LAB_1078025d8;
}



/* Entry: 1078034b8; end: 1078035e7;  */

void FUN_1078034b8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  char cVar2;
  char cVar3;
  undefined1 uVar4;
  undefined8 extraout_x8;
  long extraout_x8_00;
  ulong extraout_x8_01;
  ulong uVar5;
  long extraout_x8_02;
  long extraout_x9;
  undefined8 *extraout_x10;
  long extraout_x10_00;
  long lVar6;
  undefined8 *extraout_x10_01;
  long extraout_x10_02;
  undefined8 *puVar7;
  long extraout_x11;
  undefined8 uVar8;
  long extraout_x11_00;
  long extraout_x11_01;
  long extraout_x11_02;
  long extraout_x11_03;
  long extraout_x12;
  undefined8 *unaff_x19;
  long unaff_x20;
  float fVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  float fVar13;
  undefined8 uStack_68;
  
  func_0x0001078087f8();
  func_0x000107809484();
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078034f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10dea61d6)[extraout_x8_00] * 4 + 0x1078034f8))(1);
    return;
  }
  func_0x000107808fd0();
  func_0x000107803384();
  func_0x00010780967c();
  lVar6 = extraout_x11;
  while( true ) {
    cVar2 = SBORROW8(lVar6,unaff_x20);
    cVar3 = lVar6 - unaff_x20 < 0;
    uVar4 = lVar6 == unaff_x20;
    if ((bool)uVar4) break;
    uVar10 = (ulong)*(uint *)(lVar6 + 0xc);
    func_0x000107809750();
    if ((bool)cVar3) {
      uVar8 = *extraout_x10;
      uVar1 = *(undefined4 *)(extraout_x10 + 1);
      uVar12 = extraout_x10[3];
      uVar11 = extraout_x10[2];
      cVar3 = true;
      do {
        func_0x00010780996c();
        fVar9 = (float)uVar10;
        if ((bool)uVar4) {
          uVar4 = true;
          puVar7 = unaff_x19;
          goto LAB_107803590;
        }
        fVar13 = *(float *)(extraout_x12 + 0x2c);
        cVar2 = NAN(fVar9) || NAN(fVar13);
        uVar4 = fVar9 == fVar13;
        cVar3 = fVar9 < fVar13;
      } while ((bool)cVar3);
      puVar7 = (undefined8 *)((long)unaff_x19 + extraout_x11_00 + 0x40);
LAB_107803590:
      *puVar7 = uVar8;
      *(undefined4 *)(puVar7 + 1) = uVar1;
      *(float *)((long)puVar7 + 0xc) = fVar9;
      puVar7[3] = uVar12;
      puVar7[2] = uVar11;
      func_0x000107809798();
      if ((bool)uVar4) {
        func_0x000107809444();
        goto LAB_1078035c8;
      }
    }
    func_0x000107809454();
    lVar6 = extraout_x11_01;
  }
  param_1 = (undefined8 *)0x1;
  uVar4 = 1;
LAB_1078035c8:
  func_0x0001078087c4(extraout_x8);
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107808a58();
  func_0x000107809938();
  if (cVar3 == cVar2) {
    uVar5 = extraout_x8_01 >> 1;
    uVar10 = (long)param_3 - (long)param_1 >> 5;
    cVar3 = SBORROW8(uVar5,uVar10);
    cVar2 = (long)(uVar5 - uVar10) < 0;
    uVar4 = uVar5 == uVar10;
    if ((long)uVar10 <= (long)uVar5) {
      func_0x0001078097f8();
      lVar6 = extraout_x10_00;
      if ((cVar2 != cVar3) &&
         (*(float *)(extraout_x10_00 + 0xc) < *(float *)(extraout_x10_00 + 0x2c))) {
        lVar6 = extraout_x10_00 + 0x20;
      }
      fVar9 = *(float *)((long)param_3 + 0xc);
      uVar10 = (ulong)(uint)fVar9;
      uVar4 = *(float *)(lVar6 + 0xc) == fVar9;
      if (fVar9 <= *(float *)(lVar6 + 0xc)) {
        func_0x00010780a100();
        uVar11 = param_3[3];
        uVar8 = param_3[2];
        puVar7 = extraout_x10_01;
        do {
          param_3 = puVar7;
          func_0x000107808ff8();
          *(undefined8 *)(extraout_x11_02 + 0x18) = param_3[3];
          uVar4 = extraout_x8_02 == extraout_x9;
          if (extraout_x8_02 < extraout_x9) break;
          func_0x00010780966c();
          puVar7 = param_1 + extraout_x10_02 * 4;
          if ((extraout_x11_03 + 2 < (long)param_2) &&
             (*(float *)((long)puVar7 + 0xc) < *(float *)((long)puVar7 + 0x2c))) {
            puVar7 = puVar7 + 4;
          }
          uVar4 = *(float *)((long)puVar7 + 0xc) == (float)uVar10;
        } while ((float)uVar10 <= *(float *)((long)puVar7 + 0xc));
        func_0x000107809c14();
        param_3[3] = uVar11;
        param_3[2] = uVar8;
      }
    }
  }
  func_0x0001078087c4(uStack_68);
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
  for (; param_1 != param_2; param_1 = param_1 + 4) {
    uVar8 = *param_1;
    param_3[1] = param_1[1];
    *param_3 = uVar8;
    param_3[2] = param_1[2];
    param_3[3] = param_1[3];
    param_3 = param_3 + 4;
  }
  return;
}



/* Entry: 107803f40; end: 107803f87;  */

undefined4 FUN_107803f40(long param_1,long param_2)

{
  long unaff_x19;
  undefined4 uStack_30;
  
  if (param_1 != param_2) {
    func_0x000107809b3c();
    while (param_1 = param_1 + 0x18, param_1 != unaff_x19) {
      func_0x00010780969c();
    }
    return uStack_30;
  }
  return 0x7f7fffff;
}



/* Entry: 1078054dc; end: 10780560f;  */

/* WARNING: Possible PIC construction at 0x000107805750: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107805758: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107805760: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107805768: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107805884: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010780577c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010780576c) */
/* WARNING: Removing unreachable block (ram,0x000107805780) */
/* WARNING: Removing unreachable block (ram,0x000107805790) */
/* WARNING: Removing unreachable block (ram,0x000107805798) */
/* WARNING: Removing unreachable block (ram,0x00010780579c) */
/* WARNING: Removing unreachable block (ram,0x000107805890) */
/* WARNING: Removing unreachable block (ram,0x000107805898) */
/* WARNING: Removing unreachable block (ram,0x00010780589c) */
/* WARNING: Removing unreachable block (ram,0x0001078058bc) */
/* WARNING: Removing unreachable block (ram,0x0001078058c0) */
/* WARNING: Removing unreachable block (ram,0x0001078058cc) */
/* WARNING: Removing unreachable block (ram,0x0001078058d4) */
/* WARNING: Removing unreachable block (ram,0x0001078058d8) */
/* WARNING: Removing unreachable block (ram,0x0001078058a0) */
/* WARNING: Removing unreachable block (ram,0x0001078058a4) */
/* WARNING: Removing unreachable block (ram,0x0001078058ac) */
/* WARNING: Removing unreachable block (ram,0x0001078058b0) */
/* WARNING: Removing unreachable block (ram,0x0001078058b8) */
/* WARNING: Removing unreachable block (ram,0x0001078058dc) */
/* WARNING: Removing unreachable block (ram,0x0001078058e8) */
/* WARNING: Removing unreachable block (ram,0x0001078058ec) */
/* WARNING: Removing unreachable block (ram,0x0001078058f4) */
/* WARNING: Removing unreachable block (ram,0x0001078058f8) */
/* WARNING: Removing unreachable block (ram,0x000107805900) */
/* WARNING: Removing unreachable block (ram,0x000107805924) */
/* WARNING: Removing unreachable block (ram,0x000107805904) */
/* WARNING: Removing unreachable block (ram,0x000107805908) */
/* WARNING: Removing unreachable block (ram,0x000107805910) */
/* WARNING: Removing unreachable block (ram,0x000107805914) */
/* WARNING: Removing unreachable block (ram,0x000107805918) */
/* WARNING: Removing unreachable block (ram,0x00010780592c) */
/* WARNING: Removing unreachable block (ram,0x000107805938) */
/* WARNING: Removing unreachable block (ram,0x000107805948) */
/* WARNING: Removing unreachable block (ram,0x000107805788) */
/* WARNING: Removing unreachable block (ram,0x0001078057a0) */
/* WARNING: Removing unreachable block (ram,0x0001078057a8) */
/* WARNING: Removing unreachable block (ram,0x0001078057b4) */
/* WARNING: Removing unreachable block (ram,0x0001078057b8) */
/* WARNING: Removing unreachable block (ram,0x0001078057bc) */
/* WARNING: Removing unreachable block (ram,0x0001078057e0) */
/* WARNING: Removing unreachable block (ram,0x0001078057e4) */
/* WARNING: Removing unreachable block (ram,0x000107805800) */
/* WARNING: Removing unreachable block (ram,0x0001078057ec) */
/* WARNING: Removing unreachable block (ram,0x0001078057fc) */
/* WARNING: Removing unreachable block (ram,0x0001078057cc) */
/* WARNING: Removing unreachable block (ram,0x0001078057dc) */
/* WARNING: Removing unreachable block (ram,0x000107805804) */
/* WARNING: Removing unreachable block (ram,0x00010780580c) */
/* WARNING: Removing unreachable block (ram,0x00010780583c) */
/* WARNING: Removing unreachable block (ram,0x000107805844) */
/* WARNING: Removing unreachable block (ram,0x000107805848) */
/* WARNING: Removing unreachable block (ram,0x000107805868) */
/* WARNING: Removing unreachable block (ram,0x000107805968) */
/* WARNING: Removing unreachable block (ram,0x000107805970) */
/* WARNING: Removing unreachable block (ram,0x00010780587c) */
/* WARNING: Removing unreachable block (ram,0x000107805880) */
/* WARNING: Removing unreachable block (ram,0x000107805814) */
/* WARNING: Removing unreachable block (ram,0x000107805818) */
/* WARNING: Removing unreachable block (ram,0x000107805820) */
/* WARNING: Removing unreachable block (ram,0x000107805824) */
/* WARNING: Removing unreachable block (ram,0x000107805828) */
/* WARNING: Removing unreachable block (ram,0x000107805830) */
/* WARNING: Removing unreachable block (ram,0x000107805834) */
/* WARNING: Removing unreachable block (ram,0x000107805838) */
/* WARNING: Removing unreachable block (ram,0x000107805764) */
/* WARNING: Removing unreachable block (ram,0x00010780575c) */
/* WARNING: Removing unreachable block (ram,0x000107805754) */
/* WARNING: Removing unreachable block (ram,0x000107805888) */
/* WARNING: Removing unreachable block (ram,0x000107805ad0) */
/* WARNING: Removing unreachable block (ram,0x000107805ad4) */
/* WARNING: Removing unreachable block (ram,0x000107805adc) */
/* WARNING: Removing unreachable block (ram,0x000107805ae0) */
/* WARNING: Removing unreachable block (ram,0x000107805b04) */
/* WARNING: Removing unreachable block (ram,0x000107805ae8) */
/* WARNING: Removing unreachable block (ram,0x000107805af0) */
/* WARNING: Removing unreachable block (ram,0x000107805af4) */
/* WARNING: Removing unreachable block (ram,0x000107805af8) */
/* WARNING: Removing unreachable block (ram,0x000107805afc) */
/* WARNING: Removing unreachable block (ram,0x000107805b08) */
/* WARNING: Removing unreachable block (ram,0x000107805b10) */
/* WARNING: Removing unreachable block (ram,0x000107805b84) */
/* WARNING: Removing unreachable block (ram,0x000107805b18) */
/* WARNING: Removing unreachable block (ram,0x000107805b20) */
/* WARNING: Removing unreachable block (ram,0x000107805b30) */
/* WARNING: Removing unreachable block (ram,0x000107805b34) */
/* WARNING: Removing unreachable block (ram,0x000107805b38) */
/* WARNING: Removing unreachable block (ram,0x000107805b4c) */
/* WARNING: Removing unreachable block (ram,0x000107805b54) */
/* WARNING: Removing unreachable block (ram,0x000107805b60) */
/* WARNING: Removing unreachable block (ram,0x000107805b64) */
/* WARNING: Removing unreachable block (ram,0x000107805b68) */
/* WARNING: Removing unreachable block (ram,0x000107805b90) */

long FUN_1078054dc(long param_1,long param_2,float *param_3)

{
  uint uVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  long lVar7;
  float *pfVar8;
  undefined8 extraout_x8;
  long extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong uVar9;
  ulong extraout_x8_03;
  undefined8 extraout_x8_04;
  ulong extraout_x8_05;
  undefined8 extraout_x8_06;
  undefined8 extraout_x8_07;
  undefined8 extraout_x8_08;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong uVar10;
  uint *extraout_x9_01;
  uint *extraout_x9_02;
  uint *puVar11;
  long extraout_x10;
  float *extraout_x10_00;
  long extraout_x10_01;
  float *pfVar12;
  undefined8 extraout_x10_02;
  undefined8 extraout_x10_03;
  undefined8 extraout_x10_04;
  uint *extraout_x11;
  ulong uVar13;
  ulong extraout_x11_00;
  uint *extraout_x11_01;
  ulong extraout_x11_02;
  long extraout_x11_03;
  long extraout_x11_04;
  long extraout_x11_05;
  uint *puVar14;
  undefined8 *extraout_x11_06;
  long extraout_x12;
  uint *unaff_x19;
  uint *unaff_x20;
  float *unaff_x21;
  long unaff_x22;
  ulong unaff_x25;
  long unaff_x26;
  undefined *puVar15;
  uint uVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uStack_88;
  
  func_0x0001078087f8();
  func_0x000107808fe4();
  if (!(bool)in_CY || (bool)in_ZR) {
    lVar7 = 1;
                    /* WARNING: Could not recover jumptable at 0x000107805518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10dea61e2)[extraout_x8_00] * 4 + 0x10780551c))(1);
    return lVar7;
  }
  func_0x000107808fa8();
  func_0x000107805384();
  func_0x00010780968c();
  puVar11 = extraout_x11;
  while( true ) {
    uVar2 = unaff_x20 <= puVar11;
    cVar3 = SBORROW8((long)puVar11,(long)unaff_x20);
    cVar4 = (long)puVar11 - (long)unaff_x20 < 0;
    if (puVar11 == unaff_x20) break;
    uVar10 = (ulong)*puVar11;
    func_0x0001078096d4();
    if ((bool)cVar4) {
      uVar22 = *(undefined8 *)(extraout_x10 + 0xc);
      uVar18 = *(undefined8 *)(extraout_x10 + 4);
      uVar1 = *(uint *)(extraout_x10 + 0x14);
      uVar13 = extraout_x8_01;
      do {
        uVar16 = (uint)uVar10;
        *(undefined8 *)((long)unaff_x19 + uVar13 + 0x50) =
             *(undefined8 *)((long)unaff_x19 + uVar13 + 0x38);
        *(undefined8 *)((long)unaff_x19 + uVar13 + 0x48) =
             *(undefined8 *)((long)unaff_x19 + uVar13 + 0x30);
        *(undefined8 *)((long)unaff_x19 + uVar13 + 0x58) =
             *(undefined8 *)((long)unaff_x19 + uVar13 + 0x40);
        uVar2 = 0xffffffffffffffcf < uVar13;
        cVar3 = SCARRY8(uVar13,0x30);
        bVar5 = (long)(uVar13 + 0x30) < 0;
        uVar6 = uVar13 == 0xffffffffffffffd0;
        puVar11 = unaff_x19;
        if ((bool)uVar6) goto LAB_1078055c0;
        func_0x000107809d1c();
        uVar16 = (uint)uVar10;
        uVar13 = extraout_x11_00;
      } while (bVar5);
      puVar11 = (uint *)((long)unaff_x19 + extraout_x11_00 + 0x48);
LAB_1078055c0:
      cVar4 = '\0';
      *puVar11 = uVar16;
      *(undefined8 *)(puVar11 + 3) = uVar22;
      *(undefined8 *)(puVar11 + 1) = uVar18;
      puVar11[5] = uVar1;
      func_0x000107809798();
      if ((bool)uVar6) {
        func_0x000107809614();
        goto LAB_1078055f0;
      }
    }
    func_0x0001078096ec();
    puVar11 = extraout_x11_01;
  }
  param_1 = 1;
  uVar6 = 1;
LAB_1078055f0:
  func_0x0001078087c4(extraout_x8);
  if ((bool)uVar6) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000107808a58();
  func_0x000107809938();
  if ((cVar4 == cVar3) && (func_0x000107808d30(), cVar4 == cVar3)) {
    func_0x000107808ae8();
    uVar10 = extraout_x9;
    pfVar12 = extraout_x10_00;
    if ((cVar4 != cVar3) && (pfVar12 = extraout_x10_00, *extraout_x10_00 < extraout_x10_00[6])) {
      uVar10 = extraout_x11_02;
      pfVar12 = extraout_x10_00 + 6;
    }
    fVar19 = *pfVar12;
    fVar17 = *param_3;
    uVar13 = (ulong)(uint)fVar17;
    uVar2 = fVar17 <= fVar19;
    uVar6 = fVar19 == fVar17;
    if (fVar17 <= fVar19) {
      uVar22 = *(undefined8 *)(param_3 + 3);
      uVar18 = *(undefined8 *)(param_3 + 1);
      fVar17 = param_3[5];
      pfVar8 = param_3;
      uVar9 = extraout_x8_02;
      do {
        param_3 = pfVar12;
        fVar19 = (float)uVar13;
        uVar23 = *(undefined8 *)(param_3 + 2);
        uVar21 = *(undefined8 *)param_3;
        *(undefined8 *)(pfVar8 + 4) = *(undefined8 *)(param_3 + 4);
        *(undefined8 *)(pfVar8 + 2) = uVar23;
        *(undefined8 *)pfVar8 = uVar21;
        uVar2 = uVar10 <= uVar9;
        uVar6 = uVar9 == uVar10;
        if ((long)uVar9 < (long)uVar10) break;
        func_0x00010780966c();
        fVar19 = (float)uVar13;
        pfVar12 = (float *)(param_1 + extraout_x10_01 * extraout_x11_03);
        uVar10 = extraout_x9_00;
        if (((long)(extraout_x12 + 2U) < param_2) &&
           (uVar10 = extraout_x9_00, *pfVar12 < pfVar12[6])) {
          uVar10 = extraout_x12 + 2U;
          pfVar12 = pfVar12 + 6;
        }
        fVar20 = *pfVar12;
        uVar2 = fVar19 <= fVar20;
        uVar6 = fVar20 == fVar19;
        pfVar8 = param_3;
        uVar9 = extraout_x8_03;
      } while (fVar19 <= fVar20);
      *param_3 = fVar19;
      param_3[5] = fVar17;
      *(undefined8 *)(param_3 + 3) = uVar22;
      *(undefined8 *)(param_3 + 1) = uVar18;
    }
  }
  func_0x0001078087c4(uStack_88);
  if ((bool)uVar6) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000107809a18();
  func_0x000107809ce0();
  func_0x000107808a28();
  func_0x000107808d84();
  func_0x000107809020();
  if (!(bool)uVar2 || (bool)uVar6) {
                    /* WARNING: Could not recover jumptable at 0x000107805988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_10780598c + (ulong)(byte)(&UNK_10dea61e8)[unaff_x26] * 4))();
    return param_1;
  }
  bVar5 = 0x23e < extraout_x8_05;
  if ((long)extraout_x8_05 < 0x240) {
    uVar6 = (long)unaff_x20 - (long)unaff_x19 < 0;
    uVar2 = unaff_x20 == unaff_x19;
    if ((unaff_x25 & 1) == 0) {
      if (!(bool)uVar2) {
        while (func_0x000107809f1c(), !(bool)uVar2) {
          uVar10 = (ulong)unaff_x20[8];
          func_0x000107809708();
          if ((bool)uVar6) {
            uVar18 = *(undefined8 *)(unaff_x20 + 9);
            uVar1 = unaff_x20[0xb];
            do {
              func_0x00010780a120();
              func_0x000107809d1c();
            } while ((bool)uVar6);
            *extraout_x11_06 = extraout_x10_04;
            *(int *)(extraout_x11_06 + 1) = (int)uVar10;
            *(uint *)((long)extraout_x11_06 + 0x14) = uVar1;
            *(undefined8 *)((long)extraout_x11_06 + 0xc) = uVar18;
          }
          func_0x000107809f8c();
        }
      }
    }
    else {
      puVar11 = unaff_x20;
      if (!(bool)uVar2) {
        while( true ) {
          puVar14 = puVar11;
          uVar2 = 1;
          if (puVar14 + 6 == unaff_x19) break;
          uVar10 = (ulong)puVar14[8];
          puVar11 = puVar14 + 6;
          if ((float)puVar14[8] < (float)puVar14[2]) {
            uVar18 = *(undefined8 *)(puVar14 + 9);
            uVar1 = puVar14[0xb];
            do {
              uVar2 = 1;
              func_0x000107809d04();
              uVar16 = (uint)uVar10;
              puVar11 = extraout_x9_01;
              uVar22 = extraout_x10_02;
              puVar14 = unaff_x20;
              if (extraout_x11_04 == 0) goto code_r0x000107805a8c;
              func_0x000107809d1c();
              uVar16 = (uint)uVar10;
            } while ((bool)uVar2);
            puVar11 = extraout_x9_02;
            uVar22 = extraout_x10_03;
            puVar14 = (uint *)((long)unaff_x20 + extraout_x11_05 + 0x18);
code_r0x000107805a8c:
            *(undefined8 *)puVar14 = uVar22;
            puVar14[2] = uVar16;
            *(undefined8 *)(puVar14 + 3) = uVar18;
            puVar14[5] = uVar1;
          }
        }
      }
    }
  }
  else {
    if (unaff_x22 != 0) {
      func_0x000107809514();
      if (bVar5) {
        func_0x000107808e08();
        puVar15 = &UNK_107805754;
        unaff_x21 = param_3;
      }
      else {
        func_0x000107809308();
        puVar15 = &UNK_107805780;
      }
      goto code_r0x000107805c00;
    }
    uVar2 = unaff_x20 == unaff_x19;
    if (!(bool)uVar2) {
      func_0x000107809034();
      do {
        func_0x000107808e08();
        func_0x000107805e7c();
        func_0x000107809efc();
      } while( true );
    }
  }
  func_0x0001078087c4(extraout_x8_04);
  if ((bool)uVar2) {
    return param_1;
  }
  puVar15 = &UNK_107805c00;
  ___stack_chk_fail();
  unaff_x21 = param_3;
code_r0x000107805c00:
  fVar17 = *(float *)(param_2 + 8);
  uVar10 = (ulong)(uint)fVar17;
  uVar18 = 0;
  if (*(float *)(param_1 + 8) <= fVar17) {
    if (fVar17 <= unaff_x21[2]) {
      return 0;
    }
    func_0x000107809398();
    *(undefined8 *)(unaff_x21 + 2) = uVar18;
    *(ulong *)unaff_x21 = uVar10;
    *(undefined8 *)(unaff_x21 + 4) = extraout_x8_07;
    if (*(float *)(param_2 + 8) < *(float *)(param_1 + 8)) {
      func_0x000107808e40();
    }
  }
  else {
    if (fVar17 <= unaff_x21[2]) {
      func_0x000107808e40();
      uVar10 = (ulong)(uint)unaff_x21[2];
      uVar18 = 0;
      if (*(float *)(param_2 + 8) <= unaff_x21[2]) {
        return 1;
      }
      func_0x000107809398(puVar15);
      uVar22 = extraout_x8_08;
    }
    else {
      func_0x000107809bf8();
      uVar22 = extraout_x8_06;
    }
    *(undefined8 *)(unaff_x21 + 2) = uVar18;
    *(ulong *)unaff_x21 = uVar10;
    *(undefined8 *)(unaff_x21 + 4) = uVar22;
  }
  return 1;
}



/* Entry: 107805f58; end: 10780649f;  */

/* WARNING: Possible PIC construction at 0x000107805fa4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107805fac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107805fb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107805fbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107805fd0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107805fb8) */
/* WARNING: Removing unreachable block (ram,0x000107805fb0) */
/* WARNING: Removing unreachable block (ram,0x000107805fa8) */
/* WARNING: Removing unreachable block (ram,0x000107805fc0) */
/* WARNING: Removing unreachable block (ram,0x000107805fd4) */
/* WARNING: Removing unreachable block (ram,0x000107805fe4) */
/* WARNING: Removing unreachable block (ram,0x000107805fec) */
/* WARNING: Removing unreachable block (ram,0x000107805ff0) */
/* WARNING: Removing unreachable block (ram,0x000107806108) */
/* WARNING: Removing unreachable block (ram,0x000107806118) */
/* WARNING: Removing unreachable block (ram,0x00010780611c) */
/* WARNING: Removing unreachable block (ram,0x00010780613c) */
/* WARNING: Removing unreachable block (ram,0x000107806140) */
/* WARNING: Removing unreachable block (ram,0x00010780614c) */
/* WARNING: Removing unreachable block (ram,0x000107806154) */
/* WARNING: Removing unreachable block (ram,0x000107806158) */
/* WARNING: Removing unreachable block (ram,0x000107806120) */
/* WARNING: Removing unreachable block (ram,0x000107806124) */
/* WARNING: Removing unreachable block (ram,0x00010780612c) */
/* WARNING: Removing unreachable block (ram,0x000107806130) */
/* WARNING: Removing unreachable block (ram,0x000107806138) */
/* WARNING: Removing unreachable block (ram,0x00010780615c) */
/* WARNING: Removing unreachable block (ram,0x000107806168) */
/* WARNING: Removing unreachable block (ram,0x00010780616c) */
/* WARNING: Removing unreachable block (ram,0x000107806174) */
/* WARNING: Removing unreachable block (ram,0x000107806178) */
/* WARNING: Removing unreachable block (ram,0x000107806180) */
/* WARNING: Removing unreachable block (ram,0x0001078061d4) */
/* WARNING: Removing unreachable block (ram,0x000107806184) */
/* WARNING: Removing unreachable block (ram,0x0001078061b4) */
/* WARNING: Removing unreachable block (ram,0x0001078061bc) */
/* WARNING: Removing unreachable block (ram,0x0001078061c0) */
/* WARNING: Removing unreachable block (ram,0x0001078061c4) */
/* WARNING: Removing unreachable block (ram,0x0001078061cc) */
/* WARNING: Removing unreachable block (ram,0x0001078061d0) */
/* WARNING: Removing unreachable block (ram,0x0001078061dc) */
/* WARNING: Removing unreachable block (ram,0x0001078061e8) */
/* WARNING: Removing unreachable block (ram,0x0001078061f8) */
/* WARNING: Removing unreachable block (ram,0x000107805fdc) */
/* WARNING: Removing unreachable block (ram,0x000107805ff4) */
/* WARNING: Removing unreachable block (ram,0x000107806004) */
/* WARNING: Removing unreachable block (ram,0x000107806010) */
/* WARNING: Removing unreachable block (ram,0x000107806014) */
/* WARNING: Removing unreachable block (ram,0x000107806018) */
/* WARNING: Removing unreachable block (ram,0x000107806034) */
/* WARNING: Removing unreachable block (ram,0x000107806038) */
/* WARNING: Removing unreachable block (ram,0x00010780604c) */
/* WARNING: Removing unreachable block (ram,0x000107806040) */
/* WARNING: Removing unreachable block (ram,0x000107806048) */
/* WARNING: Removing unreachable block (ram,0x000107806028) */
/* WARNING: Removing unreachable block (ram,0x000107806030) */
/* WARNING: Removing unreachable block (ram,0x000107806050) */
/* WARNING: Removing unreachable block (ram,0x000107806058) */
/* WARNING: Removing unreachable block (ram,0x0001078060b4) */
/* WARNING: Removing unreachable block (ram,0x0001078060bc) */
/* WARNING: Removing unreachable block (ram,0x0001078060cc) */
/* WARNING: Removing unreachable block (ram,0x0001078060e0) */
/* WARNING: Removing unreachable block (ram,0x00010780620c) */
/* WARNING: Removing unreachable block (ram,0x000107806214) */
/* WARNING: Removing unreachable block (ram,0x0001078060f4) */
/* WARNING: Removing unreachable block (ram,0x0001078060f8) */
/* WARNING: Removing unreachable block (ram,0x000107806060) */
/* WARNING: Removing unreachable block (ram,0x000107806090) */
/* WARNING: Removing unreachable block (ram,0x000107806098) */
/* WARNING: Removing unreachable block (ram,0x00010780609c) */
/* WARNING: Removing unreachable block (ram,0x0001078060a0) */
/* WARNING: Removing unreachable block (ram,0x0001078060a8) */
/* WARNING: Removing unreachable block (ram,0x0001078060ac) */
/* WARNING: Removing unreachable block (ram,0x0001078060b0) */
/* WARNING: Removing unreachable block (ram,0x000107806374) */
/* WARNING: Removing unreachable block (ram,0x000107806378) */
/* WARNING: Removing unreachable block (ram,0x000107806380) */
/* WARNING: Removing unreachable block (ram,0x000107806384) */
/* WARNING: Removing unreachable block (ram,0x0001078063a8) */
/* WARNING: Removing unreachable block (ram,0x00010780638c) */
/* WARNING: Removing unreachable block (ram,0x000107806394) */
/* WARNING: Removing unreachable block (ram,0x000107806398) */
/* WARNING: Removing unreachable block (ram,0x00010780639c) */
/* WARNING: Removing unreachable block (ram,0x0001078063a0) */
/* WARNING: Removing unreachable block (ram,0x0001078063ac) */
/* WARNING: Removing unreachable block (ram,0x0001078063b4) */
/* WARNING: Removing unreachable block (ram,0x000107806428) */
/* WARNING: Removing unreachable block (ram,0x0001078063bc) */
/* WARNING: Removing unreachable block (ram,0x0001078063c4) */
/* WARNING: Removing unreachable block (ram,0x0001078063d4) */
/* WARNING: Removing unreachable block (ram,0x0001078063d8) */
/* WARNING: Removing unreachable block (ram,0x0001078063dc) */
/* WARNING: Removing unreachable block (ram,0x0001078063e8) */
/* WARNING: Removing unreachable block (ram,0x000107806404) */
/* WARNING: Removing unreachable block (ram,0x000107806410) */
/* WARNING: Removing unreachable block (ram,0x000107806414) */
/* WARNING: Removing unreachable block (ram,0x000107806418) */
/* WARNING: Removing unreachable block (ram,0x000107806434) */

long FUN_107805f58(long param_1,long param_2,ulong *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  long lVar6;
  undefined8 *extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  ulong uVar7;
  undefined4 *puVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  undefined4 *unaff_x19;
  undefined4 *unaff_x20;
  ulong *unaff_x21;
  long unaff_x22;
  ulong unaff_x25;
  long unaff_x26;
  undefined *puVar12;
  float fVar13;
  ulong uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ulong uVar14;
  
  func_0x000107809a18();
  func_0x000107809ce0();
  func_0x000107808a28();
  func_0x000107808d84();
  func_0x000107809020();
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010780622c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10dea61f4)[unaff_x26] * 4 + 0x107806230))();
    return param_1;
  }
  bVar3 = 0x23e < extraout_x8_00;
  if ((long)extraout_x8_00 < 0x240) {
    uVar4 = (long)unaff_x20 - (long)unaff_x19 < 0;
    uVar5 = unaff_x20 == unaff_x19;
    if ((unaff_x25 & 1) == 0) {
      if (!(bool)uVar5) {
        while (func_0x000107809f1c(), !(bool)uVar5) {
          fVar13 = (float)unaff_x20[7];
          func_0x000107809744();
          if ((bool)uVar4) {
            uVar16 = unaff_x20[6];
            uVar18 = *(undefined8 *)(unaff_x20 + 10);
            uVar17 = *(undefined8 *)(unaff_x20 + 8);
            puVar1 = extraout_x8_01;
            do {
              puVar11 = puVar1;
              puVar11[1] = puVar11[-2];
              *puVar11 = puVar11[-3];
              puVar11[2] = puVar11[-1];
              uVar5 = fVar13 == *(float *)((long)puVar11 + -0x2c);
              puVar1 = puVar11 + -3;
            } while (fVar13 < *(float *)((long)puVar11 + -0x2c));
            *(undefined4 *)(puVar11 + -3) = uVar16;
            *(float *)((long)puVar11 + -0x14) = fVar13;
            puVar11[-1] = uVar18;
            puVar11[-2] = uVar17;
          }
          uVar4 = 0;
          func_0x000107809f8c();
        }
      }
    }
    else if (!(bool)uVar5) {
      lVar6 = 0;
      puVar8 = unaff_x20;
      while( true ) {
        uVar5 = 1;
        if (puVar8 + 6 == unaff_x19) break;
        fVar13 = (float)puVar8[7];
        if (fVar13 < (float)puVar8[1]) {
          uVar16 = puVar8[6];
          uVar18 = *(undefined8 *)(puVar8 + 10);
          uVar17 = *(undefined8 *)(puVar8 + 8);
          lVar2 = lVar6;
          do {
            lVar9 = lVar2;
            puVar1 = (undefined8 *)((long)unaff_x20 + lVar9);
            puVar1[4] = puVar1[1];
            puVar1[3] = *puVar1;
            puVar1[5] = puVar1[2];
            puVar10 = unaff_x20;
            if (lVar9 == 0) goto LAB_10780633c;
            lVar2 = lVar9 + -0x18;
          } while (fVar13 < *(float *)((long)puVar1 + -0x14));
          puVar10 = (undefined4 *)((long)unaff_x20 + lVar9);
LAB_10780633c:
          *puVar10 = uVar16;
          puVar10[1] = fVar13;
          *(undefined8 *)(puVar10 + 4) = uVar18;
          *(undefined8 *)(puVar10 + 2) = uVar17;
        }
        lVar6 = lVar6 + 0x18;
        puVar8 = puVar8 + 6;
      }
    }
  }
  else {
    if (unaff_x22 != 0) {
      func_0x000107809514();
      if (bVar3) {
        func_0x000107808e08();
        puVar12 = (undefined *)0x107805fa8;
        unaff_x21 = param_3;
      }
      else {
        func_0x000107809308();
        puVar12 = (undefined *)0x107805fd4;
      }
      goto code_r0x0001078064a0;
    }
    uVar5 = unaff_x20 == unaff_x19;
    if (!(bool)uVar5) {
      func_0x000107809034();
      do {
        func_0x000107808e08();
        func_0x00010780671c();
        func_0x000107809efc();
      } while( true );
    }
  }
  func_0x0001078087c4(extraout_x8);
  if ((bool)uVar5) {
    return param_1;
  }
  puVar12 = &SUB_1078064a0;
  ___stack_chk_fail();
  unaff_x21 = param_3;
code_r0x0001078064a0:
  fVar13 = *(float *)(param_2 + 4);
  uVar14 = (ulong)(uint)fVar13;
  uVar15 = 0;
  if (*(float *)(param_1 + 4) <= fVar13) {
    if (fVar13 <= *(float *)((long)unaff_x21 + 4)) {
      return 0;
    }
    func_0x000107809398();
    unaff_x21[1] = uVar15;
    *unaff_x21 = uVar14;
    unaff_x21[2] = extraout_x8_03;
    if (*(float *)(param_2 + 4) < *(float *)(param_1 + 4)) {
      func_0x000107808e40();
    }
  }
  else {
    if (fVar13 <= *(float *)((long)unaff_x21 + 4)) {
      func_0x000107808e40();
      uVar14 = (ulong)(uint)*(float *)((long)unaff_x21 + 4);
      uVar15 = 0;
      if (*(float *)(param_2 + 4) <= *(float *)((long)unaff_x21 + 4)) {
        return 1;
      }
      func_0x000107809398(puVar12);
      uVar7 = extraout_x8_04;
    }
    else {
      func_0x000107809bf8();
      uVar7 = extraout_x8_02;
    }
    unaff_x21[1] = uVar15;
    *unaff_x21 = uVar14;
    unaff_x21[2] = uVar7;
  }
  return 1;
}



/* Entry: 107806d6c; end: 107806db3;  */

void FUN_107806d6c(void)

{
  undefined1 in_NG;
  
  func_0x000107808810();
  func_0x000107806cc0();
  func_0x000107809464();
  if ((bool)in_NG) {
    func_0x0001078087a0();
    func_0x000107809524();
    if ((bool)in_NG) {
      func_0x00010780877c();
      func_0x000107809534();
      if ((bool)in_NG) {
        func_0x000107808758();
      }
    }
  }
  return;
}



/* Entry: 1078076e0; end: 1078076e3;  */

bool FUN_1078076e0(double *param_1,double *param_2)

{
  return *param_2 < *param_1;
}



/* Entry: 107807b24; end: 107807b9b;  */

long * FUN_107807b24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *plVar3;
  long *plVar4;
  
  func_0x000107808f04();
  plVar2 = *(long **)(unaff_x20 + 8);
  plVar3 = (long *)(unaff_x20 + 8);
  while (plVar4 = plVar3, plVar2 != (long *)0x0) {
    while (plVar4 = plVar2, uVar1 = param_3, func_0x000104c2fc44(param_3,plVar4 + 4),
          (int)uVar1 == 0) {
      plVar2 = plVar4 + 4;
      func_0x000104c2fc44(plVar2,param_3);
      if ((int)plVar2 == 0) goto LAB_107807b8c;
      plVar3 = plVar4 + 1;
      plVar2 = (long *)*plVar3;
      if ((long *)*plVar3 == (long *)0x0) goto LAB_107807b8c;
    }
    plVar3 = plVar4;
    plVar2 = (long *)*plVar4;
  }
LAB_107807b8c:
  *unaff_x19 = plVar4;
  return plVar3;
}



/* Entry: 107807f90; end: 107808003;  */

void FUN_107807f90(void)

{
  long unaff_x22;
  long unaff_x23;
  long lVar1;
  
  func_0x00010780a21c();
  func_0x00010780a198();
  func_0x00010726d624();
  for (lVar1 = 0; unaff_x23 != lVar1; lVar1 = lVar1 + 1) {
    if (-1 < *(char *)(unaff_x22 + lVar1)) {
      func_0x000107809dec();
      func_0x0001078092c0();
      func_0x000100061de0();
      func_0x000107809320();
      func_0x000107808004();
    }
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 1078080e8; end: 10780813b;  */

void FUN_1078080e8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_1109dfb98;
  return;
}



/* Entry: 107808380; end: 1078083b7;  */

undefined8 FUN_107808380(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x48;
  __Znwm(0x48);
  func_0x00010780869c();
  return uVar1;
}



/* Entry: 107809ee8; end: 10780a253;  */

void FUN_107809ee8(void)

{
  return;
}



/* Entry: 10780af44; end: 10780af57;  */

/* WARNING: Possible PIC construction at 0x00010780b0a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010780b0ac) */

void FUN_10780af44(void)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar7;
  undefined1 uVar8;
  char cVar9;
  char cVar10;
  undefined1 uVar11;
  long *plVar12;
  long lVar13;
  ulong extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar14;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w9_01;
  long extraout_x9;
  long extraout_x9_00;
  undefined8 *extraout_x9_01;
  long *extraout_x10;
  long *extraout_x10_00;
  long *extraout_x10_01;
  long *extraout_x10_02;
  long *extraout_x10_03;
  long *plVar15;
  long extraout_x10_04;
  long extraout_x10_05;
  long extraout_x10_06;
  long extraout_x10_07;
  long lVar16;
  undefined8 extraout_x10_08;
  long extraout_x10_09;
  undefined8 extraout_x10_10;
  long *plVar17;
  long *extraout_x11;
  long *extraout_x11_00;
  long extraout_x11_01;
  long *extraout_x11_02;
  long extraout_x11_03;
  undefined8 extraout_x11_04;
  undefined8 extraout_x11_05;
  undefined8 uVar18;
  int extraout_w12;
  int extraout_w12_00;
  long extraout_x12;
  long lVar19;
  long extraout_x12_00;
  long extraout_x12_01;
  int extraout_w13;
  int extraout_w13_00;
  long *extraout_x13;
  long *extraout_x13_00;
  long extraout_x13_01;
  long extraout_x13_02;
  long extraout_x13_03;
  long extraout_x13_04;
  long extraout_x13_05;
  int extraout_w14;
  int extraout_w14_00;
  int extraout_w14_01;
  ulong extraout_x14;
  ulong uVar20;
  long extraout_x14_00;
  long extraout_x14_01;
  int extraout_w15;
  int extraout_w15_00;
  undefined8 *extraout_x15;
  undefined8 *extraout_x15_00;
  undefined8 *puVar21;
  int extraout_w16;
  long lVar22;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  ulong unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  ulong unaff_x28;
  undefined *puVar23;
  undefined8 *in_stack_00000040;
  undefined *in_stack_00000048;
  
  plVar12 = (long *)&DAT_10f62a4d8;
  puVar23 = &UNK_10780af58;
  func_0x000104bd47e8();
  puVar21 = (undefined8 *)&stack0xfffffffffffffff0;
code_r0x00010780af58:
  func_0x00010780dd5c();
  in_stack_00000040 = puVar21;
  in_stack_00000048 = puVar23;
  func_0x00010780d974();
code_r0x00010780af70:
  func_0x00010780d960();
code_r0x00010780af74:
  while( true ) {
    func_0x00010780d94c();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010780b170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_10780b174 + (ulong)(byte)(&UNK_10dea65f0)[extraout_x8] * 4))();
      return;
    }
    bVar7 = 0x16 < extraout_x8;
    cVar9 = SBORROW8(extraout_x8,0x17);
    cVar10 = (long)(extraout_x8 - 0x17) < 0;
    uVar11 = extraout_x8 == 0x17;
    if ((long)extraout_x8 < 0x18) {
      uVar11 = unaff_x20 == unaff_x19;
      if ((unaff_x25 & 1) == 0) {
        uVar8 = 0;
        if ((bool)uVar11) {
          return;
        }
        while (func_0x00010780dc48(), !(bool)uVar8) {
          iVar5 = *(int *)(unaff_x20[1] + 0xc) * *(int *)(unaff_x20[1] + 8);
          iVar6 = *(int *)(*unaff_x20 + 0xc) * *(int *)(*unaff_x20 + 8);
          uVar8 = iVar5 == iVar6;
          if (iVar6 < iVar5) {
            do {
              func_0x00010780dbd4();
              uVar8 = extraout_w12_00 == extraout_w15_00 * extraout_w14_01;
            } while (!(bool)uVar8 && extraout_w15_00 * extraout_w14_01 <= extraout_w12_00);
            *(undefined8 *)(extraout_x13_05 + -8) = extraout_x10_10;
          }
          func_0x00010780dce4();
        }
        return;
      }
      if ((bool)uVar11) {
        return;
      }
      func_0x00010780dd50();
      goto code_r0x00010780b1e0;
    }
    if (unaff_x22 == 0) {
      if (unaff_x20 == unaff_x19) {
        return;
      }
      func_0x00010780dab0();
      lVar22 = extraout_x8_01;
      lVar14 = extraout_x9;
      lVar16 = extraout_x10_06;
      lVar13 = extraout_x9;
      goto joined_r0x00010780b244;
    }
    func_0x00010780daf0();
    if (bVar7) {
      func_0x00010780da00();
      func_0x00010780b434();
      func_0x00010780d938();
      func_0x00010780b434();
      func_0x00010780dae0();
      func_0x00010780b434();
      func_0x00010780dad0();
      func_0x00010780b434();
      func_0x00010780d924();
    }
    else {
      func_0x00010780dac0();
      func_0x00010780b434();
    }
    func_0x00010780dcf0();
    if ((unaff_x25 & 1) != 0) break;
    uVar3 = *(int *)(unaff_x20[-1] + 0xc) * *(int *)(unaff_x20[-1] + 8);
    uVar4 = *(int *)(extraout_x8_00 + 0xc) * *(int *)(extraout_x8_00 + 8);
    cVar9 = SBORROW4(uVar3,uVar4);
    cVar10 = (int)(uVar3 - uVar4) < 0;
    uVar11 = uVar3 == uVar4;
    if ((int)uVar4 < (int)uVar3) break;
    uVar3 = *(int *)(*unaff_x21 + 0xc) * *(int *)(*unaff_x21 + 8);
    uVar8 = uVar3 <= uVar4;
    cVar9 = SBORROW4(uVar4,uVar3);
    cVar10 = (int)(uVar4 - uVar3) < 0;
    uVar11 = uVar4 == uVar3;
    plVar15 = unaff_x20;
    if ((int)uVar3 < (int)uVar4) {
      do {
        unaff_x26 = plVar15 + 1;
        uVar3 = *(int *)(*unaff_x26 + 0xc) * *(int *)(*unaff_x26 + 8);
        uVar8 = uVar3 <= uVar4;
        cVar9 = SBORROW4(uVar4,uVar3);
        cVar10 = (int)(uVar4 - uVar3) < 0;
        uVar11 = uVar4 == uVar3;
        plVar15 = unaff_x26;
      } while ((int)uVar4 <= (int)uVar3);
    }
    else {
      do {
        func_0x00010780dcb4();
        if ((bool)uVar8) break;
        func_0x00010780dc60();
        func_0x00010780db60();
      } while ((bool)uVar11 || cVar10 != cVar9);
    }
    func_0x00010780dc54();
    plVar15 = extraout_x10_01;
    if (!(bool)uVar8) {
      do {
        func_0x00010780db60();
        plVar15 = extraout_x10_02;
      } while (!(bool)uVar11 && cVar10 == cVar9);
    }
    while( true ) {
      in_CY = plVar15 <= unaff_x26;
      cVar9 = SBORROW8((long)unaff_x26,(long)plVar15);
      cVar10 = (long)unaff_x26 - (long)plVar15 < 0;
      in_ZR = unaff_x26 == plVar15;
      if ((bool)in_CY) break;
      func_0x00010780d884();
      do {
        unaff_x26 = unaff_x26 + 1;
        func_0x00010780db60();
      } while ((bool)in_ZR || cVar10 != cVar9);
      do {
        func_0x00010780db60();
        plVar15 = extraout_x10_03;
      } while (!(bool)in_ZR && cVar10 == cVar9);
    }
    func_0x00010780dc3c();
    if (!(bool)in_ZR) {
      func_0x00010780dc30();
    }
    func_0x00010780dc78();
  }
  do {
    func_0x00010780dc04();
    func_0x00010780ddcc();
  } while (!(bool)uVar11 && cVar10 == cVar9);
  func_0x00010780daa0();
  plVar15 = extraout_x10;
  plVar17 = unaff_x19;
  if ((bool)uVar11) {
    do {
      if (plVar17 <= plVar15) break;
      func_0x00010780dbb8();
      plVar15 = extraout_x10_00;
      plVar17 = extraout_x11;
    } while (extraout_w13_00 * extraout_w14_00 <= extraout_w9_00);
  }
  else {
    do {
      func_0x00010780dbb8();
    } while (extraout_w13 * extraout_w14 <= extraout_w9);
  }
  func_0x00010780dcc0();
  plVar15 = extraout_x13;
  while( true ) {
    in_CY = plVar15 <= unaff_x26;
    in_ZR = unaff_x26 == plVar15;
    if ((bool)in_CY) break;
    func_0x00010780da60();
    do {
      unaff_x26 = unaff_x26 + 1;
      plVar15 = extraout_x13_00;
    } while (extraout_w9_01 < *(int *)(*unaff_x26 + 0xc) * *(int *)(*unaff_x26 + 8));
    do {
      plVar15 = plVar15 + -1;
    } while (*(int *)(*plVar15 + 0xc) * *(int *)(*plVar15 + 8) <= extraout_w9_01);
  }
  func_0x00010780dd2c();
  if (!(bool)in_ZR) {
    func_0x00010780dc90();
  }
  func_0x00010780dc84();
  if ((bool)in_CY) {
    func_0x00010780db10();
    func_0x00010780b568();
    func_0x00010780da30();
    func_0x00010780b568();
    if ((int)plVar12 != 0) goto code_r0x00010780b150;
    if ((unaff_x28 & 1) != 0) goto code_r0x00010780af74;
  }
  func_0x00010780d8c0();
  puVar23 = &UNK_10780b0ac;
  puVar21 = &stack0x00000040;
  goto code_r0x00010780af58;
code_r0x00010780b1e0:
  func_0x00010780dd44();
  if ((bool)uVar11) {
    return;
  }
  iVar5 = *(int *)(extraout_x11_00[1] + 0xc) * *(int *)(extraout_x11_00[1] + 8);
  iVar6 = *(int *)(*extraout_x11_00 + 0xc) * *(int *)(*extraout_x11_00 + 8);
  cVar9 = SBORROW4(iVar5,iVar6);
  cVar10 = iVar5 - iVar6 < 0;
  uVar11 = iVar5 == iVar6;
  if (iVar6 < iVar5) {
    do {
      func_0x00010780dd08();
      lVar22 = extraout_x10_04;
      plVar12 = unaff_x20;
      if ((bool)uVar11) goto code_r0x00010780b22c;
      func_0x00010780dc14();
      func_0x00010780ddd8();
    } while (!(bool)uVar11 && cVar10 == cVar9);
    lVar22 = extraout_x10_05;
    plVar12 = (long *)((long)unaff_x20 + extraout_x13_01);
code_r0x00010780b22c:
    *plVar12 = lVar22;
  }
  func_0x00010780dcd8();
  goto code_r0x00010780b1e0;
joined_r0x00010780b244:
  if (lVar13 < 0) {
    do {
      if (lVar22 < 2) {
        return;
      }
      func_0x00010780d8e8();
      lVar14 = extraout_x8_03;
      lVar22 = extraout_x12_00;
      lVar16 = extraout_x14_00;
      do {
        lVar22 = lVar22 + lVar16 * 8;
        lVar13 = *(long *)(lVar22 + 8);
        lVar16 = lVar16 * 2 + 2;
        cVar9 = SBORROW8(lVar16,lVar14);
        cVar10 = lVar16 - lVar14 < 0;
        bVar7 = lVar16 == lVar14;
        if (lVar16 < lVar14) {
          lVar22 = *(long *)(lVar22 + 0x10);
          iVar5 = *(int *)(lVar13 + 0xc) * *(int *)(lVar13 + 8);
          iVar6 = *(int *)(lVar22 + 0xc) * *(int *)(lVar22 + 8);
          cVar9 = SBORROW4(iVar5,iVar6);
          cVar10 = iVar5 - iVar6 < 0;
          bVar7 = iVar5 == iVar6;
        }
        func_0x00010780da50();
        lVar14 = extraout_x8_04;
        lVar22 = extraout_x12_01;
        lVar16 = extraout_x14_01;
      } while (bVar7 || cVar10 != cVar9);
      func_0x00010780dc9c();
      if (bVar7) {
        *extraout_x9_01 = extraout_x10_08;
        lVar22 = extraout_x8_05;
      }
      else {
        func_0x00010780d7d0();
        lVar22 = extraout_x8_06;
        if ((cVar10 == cVar9) &&
           (func_0x00010780d8d4(), lVar22 = extraout_x8_07,
           *(int *)(extraout_x11_03 + 0xc) * *(int *)(extraout_x11_03 + 8) <
           *(int *)(extraout_x13_03 + 0xc) * *(int *)(extraout_x13_03 + 8))) {
          do {
            func_0x00010780dc6c();
            lVar22 = extraout_x8_08;
            uVar18 = extraout_x11_04;
            puVar21 = extraout_x15;
            if (extraout_x10_09 == 0) break;
            func_0x00010780d898();
            lVar22 = extraout_x8_09;
            uVar18 = extraout_x11_05;
            puVar21 = extraout_x15_00;
          } while (extraout_w12 < *(int *)(extraout_x13_04 + 0xc) * *(int *)(extraout_x13_04 + 8));
          *puVar21 = uVar18;
        }
      }
      lVar22 = lVar22 + -1;
    } while( true );
  }
  cVar9 = SBORROW8(lVar14,lVar16);
  cVar10 = lVar14 - lVar16 < 0;
  if (lVar16 <= lVar14) {
    func_0x00010780d99c();
    if (cVar10 != cVar9) {
      plVar12 = (long *)(ulong)(uint)(*(int *)(*(long *)(extraout_x11_01 + 8) + 0xc) *
                                     *(int *)(*(long *)(extraout_x11_01 + 8) + 8));
    }
    func_0x00010780dbf4();
    iVar5 = *(int *)(extraout_x13_02 + 0xc) * *(int *)(extraout_x13_02 + 8);
    lVar22 = extraout_x8_02;
    lVar14 = extraout_x9_00;
    lVar16 = extraout_x10_07;
    plVar15 = extraout_x11_02;
    lVar13 = extraout_x12;
    uVar20 = extraout_x14;
    if (extraout_w16 * extraout_w15 <= iVar5) {
      do {
        plVar17 = plVar15;
        *plVar12 = lVar13;
        if (extraout_x9_00 < (long)uVar20) break;
        uVar2 = uVar20 << 1 | 1;
        plVar12 = unaff_x20 + uVar2;
        uVar1 = uVar20 * 2 + 2;
        lVar19 = *plVar12;
        plVar15 = plVar12;
        lVar13 = lVar19;
        uVar20 = uVar2;
        if ((long)uVar1 < extraout_x8_02) {
          lVar13 = plVar12[1];
          plVar15 = plVar12 + 1;
          uVar20 = uVar1;
          if (*(int *)(lVar19 + 0xc) * *(int *)(lVar19 + 8) <=
              *(int *)(lVar13 + 0xc) * *(int *)(lVar13 + 8)) {
            plVar15 = plVar12;
            lVar13 = lVar19;
            uVar20 = uVar2;
          }
        }
        plVar12 = plVar17;
      } while (*(int *)(lVar13 + 0xc) * *(int *)(lVar13 + 8) <= iVar5);
      *plVar17 = extraout_x13_02;
    }
  }
  lVar16 = lVar16 + -1;
  lVar13 = lVar16;
  goto joined_r0x00010780b244;
code_r0x00010780b150:
  unaff_x19 = unaff_x27;
  if ((unaff_x28 & 1) != 0) {
    return;
  }
  goto code_r0x00010780af70;
}



/* Entry: 10780bbf4; end: 10780bc3b;  */

void FUN_10780bbf4(void)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  
  func_0x00010780d818();
  func_0x00010780bb58();
  func_0x00010780db1c();
  func_0x00010780d768();
  if (!(bool)in_ZR && in_NG == in_OV) {
    func_0x00010780d804();
    func_0x00010780d768();
    if (!(bool)in_ZR && in_NG == in_OV) {
      func_0x00010780d7f0();
      func_0x00010780d768();
      if (!(bool)in_ZR && in_NG == in_OV) {
        func_0x00010780db28();
      }
    }
  }
  return;
}



/* Entry: 10780c540; end: 10780c9d3;  */

void FUN_10780c540(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar7;
  undefined1 uVar8;
  char cVar9;
  char cVar10;
  undefined1 uVar11;
  long *plVar12;
  ulong extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar13;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long lVar14;
  long *extraout_x8_10;
  int extraout_w9;
  int extraout_w9_00;
  long extraout_x9;
  long extraout_x9_00;
  undefined8 *extraout_x9_01;
  long *extraout_x10;
  long *extraout_x10_00;
  long *extraout_x10_01;
  long *extraout_x10_02;
  long *plVar15;
  long extraout_x10_03;
  long extraout_x10_04;
  long extraout_x10_05;
  long extraout_x10_06;
  long lVar16;
  undefined8 extraout_x10_07;
  long extraout_x10_08;
  long *extraout_x11;
  long *extraout_x11_00;
  long *extraout_x11_01;
  long *plVar17;
  long extraout_x11_02;
  undefined8 extraout_x11_03;
  undefined8 extraout_x11_04;
  undefined8 uVar18;
  int extraout_w12;
  long extraout_x12;
  long lVar19;
  long extraout_x12_00;
  long extraout_x12_01;
  long *extraout_x13;
  long *extraout_x13_00;
  long extraout_x13_01;
  ulong extraout_x13_02;
  long lVar20;
  long extraout_x13_03;
  long extraout_x13_04;
  long extraout_x14;
  long extraout_x14_00;
  ulong extraout_x15;
  ulong uVar21;
  undefined8 *extraout_x15_00;
  undefined8 *extraout_x15_01;
  undefined8 *puVar22;
  long lVar23;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  ulong unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  ulong unaff_x28;
  
  func_0x00010780dd5c();
  func_0x00010780d974();
LAB_10780c558:
  func_0x00010780d960();
LAB_10780c55c:
  while( true ) {
    func_0x00010780d94c();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010780c740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10dea6614)[extraout_x8] * 4 + 0x10780c744))();
      return;
    }
    bVar7 = 0x16 < extraout_x8;
    cVar9 = SBORROW8(extraout_x8,0x17);
    cVar10 = (long)(extraout_x8 - 0x17) < 0;
    uVar11 = extraout_x8 == 0x17;
    if ((long)extraout_x8 < 0x18) {
      uVar11 = unaff_x20 == unaff_x19;
      if ((unaff_x25 & 1) == 0) {
        uVar8 = 0;
        if ((bool)uVar11) {
          return;
        }
        while (func_0x00010780dc48(), !(bool)uVar8) {
          lVar14 = *unaff_x20;
          lVar13 = unaff_x20[1];
          iVar5 = *(int *)(lVar13 + 8);
          uVar8 = iVar5 == *(int *)(lVar14 + 8);
          plVar15 = extraout_x8_10;
          if (*(int *)(lVar14 + 8) < iVar5) {
            do {
              *plVar15 = lVar14;
              lVar14 = plVar15[-2];
              plVar15 = plVar15 + -1;
              uVar8 = iVar5 == *(int *)(lVar14 + 8);
            } while (!(bool)uVar8 && *(int *)(lVar14 + 8) <= iVar5);
            *plVar15 = lVar13;
          }
          func_0x00010780dce4();
        }
        return;
      }
      if ((bool)uVar11) {
        return;
      }
      func_0x00010780dd50();
      goto LAB_10780c7b0;
    }
    if (unaff_x22 == 0) {
      if (unaff_x20 == unaff_x19) {
        return;
      }
      func_0x00010780dab0();
      lVar14 = extraout_x8_01;
      lVar13 = extraout_x9;
      lVar16 = extraout_x10_05;
      lVar23 = extraout_x9;
      goto joined_r0x00010780c810;
    }
    func_0x00010780daf0();
    if (bVar7) {
      func_0x00010780da00();
      func_0x00010780c9d4();
      func_0x00010780d938();
      func_0x00010780c9d4();
      func_0x00010780dae0();
      func_0x00010780c9d4();
      func_0x00010780dad0();
      func_0x00010780c9d4();
      func_0x00010780d924();
    }
    else {
      func_0x00010780dac0();
      func_0x00010780c9d4();
    }
    func_0x00010780dcf0();
    if ((unaff_x25 & 1) != 0) break;
    uVar3 = *(uint *)(unaff_x20[-1] + 8);
    uVar4 = *(uint *)(extraout_x8_00 + 8);
    cVar9 = SBORROW4(uVar3,uVar4);
    cVar10 = (int)(uVar3 - uVar4) < 0;
    uVar11 = uVar3 == uVar4;
    if ((int)uVar4 < (int)uVar3) break;
    uVar3 = *(uint *)(*unaff_x21 + 8);
    uVar8 = uVar3 <= uVar4;
    cVar9 = SBORROW4(uVar4,uVar3);
    cVar10 = (int)(uVar4 - uVar3) < 0;
    uVar11 = uVar4 == uVar3;
    plVar15 = unaff_x20;
    if ((int)uVar3 < (int)uVar4) {
      do {
        unaff_x26 = plVar15 + 1;
        uVar3 = *(uint *)(*unaff_x26 + 8);
        uVar8 = uVar3 <= uVar4;
        cVar9 = SBORROW4(uVar4,uVar3);
        cVar10 = (int)(uVar4 - uVar3) < 0;
        uVar11 = uVar4 == uVar3;
        plVar15 = unaff_x26;
      } while ((int)uVar4 <= (int)uVar3);
    }
    else {
      do {
        func_0x00010780dcb4();
        if ((bool)uVar8) break;
        func_0x00010780dc60();
        func_0x00010780ddc0();
      } while ((bool)uVar11 || cVar10 != cVar9);
    }
    func_0x00010780dc54();
    plVar15 = extraout_x10_00;
    if (!(bool)uVar8) {
      do {
        func_0x00010780ddc0();
        plVar15 = extraout_x10_01;
      } while (!(bool)uVar11 && cVar10 == cVar9);
    }
    while( true ) {
      in_CY = plVar15 <= unaff_x26;
      cVar9 = SBORROW8((long)unaff_x26,(long)plVar15);
      cVar10 = (long)unaff_x26 - (long)plVar15 < 0;
      in_ZR = unaff_x26 == plVar15;
      if ((bool)in_CY) break;
      func_0x00010780d884();
      do {
        unaff_x26 = unaff_x26 + 1;
        func_0x00010780ddc0();
      } while ((bool)in_ZR || cVar10 != cVar9);
      do {
        func_0x00010780ddc0();
        plVar15 = extraout_x10_02;
      } while (!(bool)in_ZR && cVar10 == cVar9);
    }
    func_0x00010780dc3c();
    if (!(bool)in_ZR) {
      func_0x00010780dc30();
    }
    func_0x00010780dc78();
  }
  do {
    func_0x00010780ddcc();
  } while (!(bool)uVar11 && cVar10 == cVar9);
  func_0x00010780daa0();
  plVar15 = unaff_x19;
  plVar12 = extraout_x11;
  if ((bool)uVar11) {
    do {
      if (plVar15 <= extraout_x10) break;
      plVar15 = plVar15 + -1;
    } while (*(int *)(*plVar15 + 8) <= extraout_w9);
  }
  else {
    do {
      plVar12 = plVar12 + -1;
    } while (*(int *)(*plVar12 + 8) <= extraout_w9);
  }
  func_0x00010780dcc0();
  plVar15 = extraout_x13;
  while( true ) {
    in_CY = plVar15 <= unaff_x26;
    in_ZR = unaff_x26 == plVar15;
    if ((bool)in_CY) break;
    func_0x00010780da60();
    do {
      unaff_x26 = unaff_x26 + 1;
      plVar15 = extraout_x13_00;
    } while (extraout_w9_00 < *(int *)(*unaff_x26 + 8));
    do {
      plVar15 = plVar15 + -1;
    } while (*(int *)(*plVar15 + 8) <= extraout_w9_00);
  }
  func_0x00010780dd2c();
  if (!(bool)in_ZR) {
    func_0x00010780dc90();
  }
  func_0x00010780dc84();
  if ((bool)in_CY) {
    func_0x00010780db10();
    func_0x00010780caf8();
    func_0x00010780da30();
    func_0x00010780caf8();
    if ((int)param_1 != 0) goto LAB_10780c720;
    if ((unaff_x28 & 1) != 0) goto LAB_10780c55c;
  }
  func_0x00010780d8c0();
  FUN_10780c540();
  unaff_x25 = 0;
  goto LAB_10780c55c;
LAB_10780c7b0:
  func_0x00010780dd44();
  if ((bool)uVar11) {
    return;
  }
  iVar5 = *(int *)(extraout_x11_00[1] + 8);
  iVar6 = *(int *)(*extraout_x11_00 + 8);
  cVar9 = SBORROW4(iVar5,iVar6);
  cVar10 = iVar5 - iVar6 < 0;
  uVar11 = iVar5 == iVar6;
  if (iVar6 < iVar5) {
    do {
      func_0x00010780dd08();
      lVar14 = extraout_x10_03;
      plVar15 = unaff_x20;
      if ((bool)uVar11) goto LAB_10780c7f8;
      func_0x00010780ddd8();
    } while (!(bool)uVar11 && cVar10 == cVar9);
    lVar14 = extraout_x10_04;
    plVar15 = (long *)((long)unaff_x20 + extraout_x13_01);
LAB_10780c7f8:
    *plVar15 = lVar14;
  }
  func_0x00010780dcd8();
  goto LAB_10780c7b0;
joined_r0x00010780c810:
  if (lVar23 < 0) {
    do {
      if (lVar14 < 2) {
        return;
      }
      func_0x00010780d8e8();
      lVar13 = extraout_x8_03;
      lVar14 = extraout_x12_00;
      lVar16 = extraout_x14;
      do {
        lVar14 = lVar14 + lVar16 * 8;
        lVar16 = lVar16 * 2 + 2;
        cVar9 = SBORROW8(lVar16,lVar13);
        cVar10 = lVar16 - lVar13 < 0;
        bVar7 = lVar16 == lVar13;
        if (lVar16 < lVar13) {
          iVar5 = *(int *)(*(long *)(lVar14 + 8) + 8);
          iVar6 = *(int *)(*(long *)(lVar14 + 0x10) + 8);
          cVar9 = SBORROW4(iVar5,iVar6);
          cVar10 = iVar5 - iVar6 < 0;
          bVar7 = iVar5 == iVar6;
        }
        func_0x00010780da50();
        lVar13 = extraout_x8_04;
        lVar14 = extraout_x12_01;
        lVar16 = extraout_x14_00;
      } while (bVar7 || cVar10 != cVar9);
      func_0x00010780dc9c();
      if (bVar7) {
        *extraout_x9_01 = extraout_x10_07;
        lVar14 = extraout_x8_05;
      }
      else {
        func_0x00010780d7d0();
        lVar14 = extraout_x8_06;
        if ((cVar10 == cVar9) &&
           (func_0x00010780d8d4(), lVar14 = extraout_x8_07,
           *(int *)(extraout_x11_02 + 8) < *(int *)(extraout_x13_03 + 8))) {
          do {
            func_0x00010780dc6c();
            lVar14 = extraout_x8_08;
            uVar18 = extraout_x11_03;
            puVar22 = extraout_x15_00;
            if (extraout_x10_08 == 0) break;
            func_0x00010780d898();
            lVar14 = extraout_x8_09;
            uVar18 = extraout_x11_04;
            puVar22 = extraout_x15_01;
          } while (extraout_w12 < *(int *)(extraout_x13_04 + 8));
          *puVar22 = uVar18;
        }
      }
      lVar14 = lVar14 + -1;
    } while( true );
  }
  cVar9 = SBORROW8(lVar13,lVar16);
  cVar10 = lVar13 - lVar16 < 0;
  if (lVar16 <= lVar13) {
    func_0x00010780db90();
    plVar15 = extraout_x11_01;
    lVar23 = extraout_x12;
    uVar21 = extraout_x15;
    if (cVar10 != cVar9) {
      plVar15 = extraout_x11_01 + 1;
      lVar23 = *plVar15;
      uVar21 = extraout_x13_02;
      if (*(int *)(extraout_x12 + 8) <= *(int *)(lVar23 + 8)) {
        plVar15 = extraout_x11_01;
        lVar23 = extraout_x12;
        uVar21 = extraout_x15;
      }
    }
    lVar20 = unaff_x20[extraout_x10_06];
    iVar5 = *(int *)(lVar20 + 8);
    plVar12 = unaff_x20 + extraout_x10_06;
    lVar14 = extraout_x8_02;
    lVar13 = extraout_x9_00;
    lVar16 = extraout_x10_06;
    if (*(int *)(lVar23 + 8) <= iVar5) {
      do {
        plVar17 = plVar15;
        *plVar12 = lVar23;
        if (extraout_x9_00 < (long)uVar21) break;
        uVar2 = uVar21 << 1 | 1;
        plVar12 = unaff_x20 + uVar2;
        uVar1 = uVar21 * 2 + 2;
        lVar19 = *plVar12;
        plVar15 = plVar12;
        lVar23 = lVar19;
        uVar21 = uVar2;
        if ((long)uVar1 < extraout_x8_02) {
          lVar23 = plVar12[1];
          plVar15 = plVar12 + 1;
          uVar21 = uVar1;
          if (*(int *)(lVar19 + 8) <= *(int *)(lVar23 + 8)) {
            plVar15 = plVar12;
            lVar23 = lVar19;
            uVar21 = uVar2;
          }
        }
        plVar12 = plVar17;
      } while (*(int *)(lVar23 + 8) <= iVar5);
      *plVar17 = lVar20;
    }
  }
  lVar16 = lVar16 + -1;
  lVar23 = lVar16;
  goto joined_r0x00010780c810;
LAB_10780c720:
  unaff_x19 = unaff_x27;
  if ((unaff_x28 & 1) != 0) {
    return;
  }
  goto LAB_10780c558;
}



/* Entry: 10780d138; end: 10780d193;  */

void FUN_10780d138(void)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  
  func_0x00010780d818();
  func_0x00010780d0f0();
  func_0x00010780dcfc();
  func_0x00010780d9bc();
  if (!(bool)in_ZR && in_NG == in_OV) {
    func_0x00010780d910();
    func_0x00010780d9bc();
    if (!(bool)in_ZR && in_NG == in_OV) {
      func_0x00010780d804();
      func_0x00010780d9bc();
      if (!(bool)in_ZR && in_NG == in_OV) {
        func_0x00010780d7f0();
        func_0x00010780d9bc();
        if (!(bool)in_ZR && in_NG == in_OV) {
          func_0x00010780db28();
        }
      }
    }
  }
  return;
}



/* Entry: 10780dde4; end: 10780decb;  */

long FUN_10780dde4(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x000104c2f64c();
  *(undefined **)(lVar1 + 0x38) = &UNK_10e52b660;
  *(undefined8 *)(lVar1 + 0x48) = 0;
  *(undefined8 *)(lVar1 + 0x50) = 0;
  *(undefined8 *)(lVar1 + 0x40) = 0;
  *(undefined **)(lVar1 + 0x58) = &UNK_10e52b660;
  *(undefined8 *)(lVar1 + 0x68) = 0;
  *(undefined8 *)(lVar1 + 0x70) = 0;
  *(undefined8 *)(lVar1 + 0x60) = 0;
  lVar1 = lVar1 + 0x78;
  __ZNSt3__119__shared_mutex_baseC1Ev();
  *(undefined ***)(param_1 + 0x120) = &PTR_PTR_1131ada48;
  *(undefined8 *)(param_1 + 0x128) = param_2;
  uVar2 = *param_3;
  *param_3 = 0;
  *(undefined8 *)(param_1 + 0x130) = uVar2;
  FUN_10785f1f4();
  *(long *)(param_1 + 0x138) = lVar1;
  uVar2 = *param_4;
  *(undefined8 *)(param_1 + 0x148) = param_4[1];
  *(undefined8 *)(param_1 + 0x140) = uVar2;
  *param_4 = 0;
  param_4[1] = 0;
  func_0x00010726ed14(param_1 + 0x150);
  *(long *)(param_1 + 0x160) = param_1;
  return param_1;
}



/* Entry: 10780ee10; end: 10780ee7f;  */

void FUN_10780ee10(void)

{
  long extraout_x8;
  
  func_0x000107812384();
  if (extraout_x8 != 0) {
    func_0x00010781222c();
  }
  return;
}



/* Entry: 10780f50c; end: 10780f53b;  */

void FUN_10780f50c(void)

{
  long extraout_x8;
  
  func_0x000107812384();
  if (extraout_x8 != 0) {
    func_0x00010780f53c();
    func_0x00010781222c();
  }
  return;
}



/* Entry: 10780f838; end: 10780f88b;  */

undefined8 * FUN_10780f838(undefined8 *param_1)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = param_1[2];
  if (lVar3 != 0) {
    pcVar1 = (char *)*param_1;
    lVar2 = param_1[1] + 8;
    for (; lVar3 != 0; lVar3 = lVar3 + -1) {
      if (-1 < *pcVar1) {
        func_0x00010780f88c(lVar2);
      }
      lVar2 = lVar2 + 0x28;
      pcVar1 = pcVar1 + 1;
    }
    func_0x00010781222c();
  }
  return param_1;
}



/* Entry: 10780fc6c; end: 10780fc7b;  */

void FUN_10780fc6c(long param_1)

{
  func_0x000107812518(&PTR_LOOP_110c8acd8,param_1 + 8);
  return;
}



/* Entry: 10780fe80; end: 10780fe93;  */

uint * FUN_10780fe80(undefined8 param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long extraout_x8;
  int *extraout_x8_00;
  long *extraout_x9;
  
  if ((ulong)*(uint *)(param_2 + 0xc) * (ulong)*(uint *)(param_2 + 8) != 0) {
    func_0x0001073c893c();
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x9,0x10);
      if (bVar2) {
        *extraout_x9 = *extraout_x9 - extraout_x8;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    func_0x0001073c88ec();
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_00,0x10);
      if (bVar2) {
        *extraout_x8_00 = *extraout_x8_00 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  func_0x00010724e5b8(param_2 + 0x10);
  return (uint *)(param_2 + 8);
}



/* Entry: 107810004; end: 107810017;  */

void FUN_107810004(void)

{
  func_0x000107810040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107810344; end: 10781037b;  */

void FUN_107810344(undefined8 param_1,ushort *param_2)

{
  func_0x0001078125a0((long)&PTR_LOOP_110c8acd8 + (ulong)*param_2);
  return;
}



/* Entry: 107810708; end: 10781078b;  */

void FUN_107810708(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined8 extraout_x8;
  long extraout_x9;
  
  func_0x0001078121d4();
  func_0x000100061de0();
  func_0x000107812464();
  if ((extraout_x9 == 0) && (func_0x000107812494(), !(bool)in_ZR)) {
    func_0x000107812458();
    if (((bool)in_CY) && (func_0x0001078121f8(), (bool)in_CY)) {
      func_0x000107812398();
    }
    else {
      func_0x0001078122ac();
      func_0x0001078107c0();
    }
    func_0x00010781220c();
  }
  func_0x00010781212c();
  func_0x0001078121c0(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107812518(&PTR_LOOP_110c8acd8);
  return;
}



/* Entry: 107810904; end: 10781093b;  */

undefined8 FUN_107810904(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x80;
  __Znwm(0x80);
  func_0x000107810b68();
  return uVar1;
}



/* Entry: 107810d20; end: 107810d33;  */

void FUN_107810d20(void)

{
  func_0x000107810cf4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107810fa0; end: 107810fdf;  */

void FUN_107810fa0(long *param_1,undefined8 *param_2,long param_3)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  func_0x0001078100a8(param_3 + 8);
  uVar1 = param_1[2];
  param_1[3] = param_1[3] + -1;
  lVar3 = *param_1;
  uVar6 = *param_2;
  uVar4 = CONCAT17(-((char)((ulong)uVar6 >> 0x38) == -0x80),
                   CONCAT16(-((char)((ulong)uVar6 >> 0x30) == -0x80),
                            CONCAT15(-((char)((ulong)uVar6 >> 0x28) == -0x80),
                                     CONCAT14(-((char)((ulong)uVar6 >> 0x20) == -0x80),
                                              CONCAT13(-((char)((ulong)uVar6 >> 0x18) == -0x80),
                                                       CONCAT12(-((char)((ulong)uVar6 >> 0x10) ==
                                                                 -0x80),CONCAT11(-((char)((ulong)
                                                  uVar6 >> 8) == -0x80),-((char)uVar6 == -0x80))))))
                           ));
  uVar6 = *(undefined8 *)(lVar3 + ((ulong)((long)param_2 + (-8 - lVar3)) & uVar1));
  lVar7 = CONCAT17(-((char)((ulong)uVar6 >> 0x38) == -0x80),
                   CONCAT16(-((char)((ulong)uVar6 >> 0x30) == -0x80),
                            CONCAT15(-((char)((ulong)uVar6 >> 0x28) == -0x80),
                                     CONCAT14(-((char)((ulong)uVar6 >> 0x20) == -0x80),
                                              CONCAT13(-((char)((ulong)uVar6 >> 0x18) == -0x80),
                                                       CONCAT12(-((char)((ulong)uVar6 >> 0x10) ==
                                                                 -0x80),CONCAT11(-((char)((ulong)
                                                  uVar6 >> 8) == -0x80),-((char)uVar6 == -0x80))))))
                           ));
  if (lVar7 == 0 || uVar4 == 0) {
    uVar4 = 0;
    uVar5 = 0xfe;
  }
  else {
    uVar4 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
    uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
    uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
    uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
    bVar2 = ((ulong)LZCOUNT(lVar7) >> 3) + ((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 3) < 8;
    uVar4 = (ulong)bVar2;
    uVar5 = 0x80;
    if (!bVar2) {
      uVar5 = 0xfe;
    }
  }
  *(undefined1 *)param_2 = uVar5;
  *(undefined1 *)(lVar3 + ((ulong)((long)param_2 + (-7 - lVar3)) & uVar1) + (uVar1 & 7)) = uVar5;
  *(ulong *)(lVar3 + -8) = *(long *)(lVar3 + -8) + uVar4;
  return;
}



/* Entry: 1078111a4; end: 1078111a7;  */

void FUN_1078111a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109dfed8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10781191c; end: 107811947;  */

void FUN_10781191c(undefined8 param_1,undefined8 param_2)

{
  func_0x0001078124f8(param_2,param_1,&PTR_DAT_1109dff88);
  func_0x000107812448();
  return;
}



/* Entry: 107811a80; end: 107811abf;  */

void FUN_107811a80(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x00010780f7a4(param_2 + 0x28);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 107811c80; end: 107811c8b;  */

void FUN_107811c80(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x0001078124b8();
  func_0x0001078122e0();
  lVar1 = *(long *)(param_2 + 8) + (*param_1 - param_1[1]);
  func_0x000107811d88(param_1 + 2,*param_1,param_1[1],lVar1);
  unaff_x19[1] = lVar1;
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



/* Entry: 107811f18; end: 107811f53;  */

long FUN_107811f18(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    func_0x000107811f54();
    lVar2 = uVar1 + 0x10;
  }
  else {
    lVar2 = param_1;
    func_0x000107811f88();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x10;
}



/* Entry: 1078120f8; end: 10781212b;  */

void FUN_1078120f8(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001078122e0();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x10;
    func_0x00010726b09c();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 107812bb0; end: 107812ce3;  */

void FUN_107812bb0(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  int *piVar4;
  ulong uVar5;
  long *plStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  lVar1 = param_2;
  func_0x0001096f6e38();
  lStack_48 = lVar1;
  func_0x000107813830();
  func_0x0001096f69f4(lVar1);
  func_0x0001078138ac(param_2,lStack_48);
  uVar5 = (ulong)*(uint *)(lStack_48 + 0x60);
  piVar4 = *(int **)(lStack_48 + 0x70);
  lStack_58 = 0;
  lStack_50 = 0;
  plStack_60 = &lStack_58;
  do {
    if (uVar5 == 0) {
      *param_1 = (long)plStack_60;
      plVar3 = param_1 + 1;
      *plVar3 = lStack_58;
      param_1[2] = lStack_50;
      if (lStack_50 == 0) {
        *param_1 = (long)plVar3;
      }
      else {
        *(long **)(lStack_58 + 0x10) = plVar3;
        lStack_58 = 0;
        lStack_50 = 0;
        plStack_60 = &lStack_58;
      }
LAB_107812ca0:
      func_0x00010002c948(&plStack_60);
      func_0x00010781311c(&lStack_48);
      return;
    }
    if (*piVar4 == 0) {
      uVar2 = (ulong)(uint)piVar4[2];
      func_0x000107812b68(uVar2,param_3);
      if ((uVar2 & 1) == 0) {
        param_1[2] = 0;
        param_1[1] = 0;
        *param_1 = (long)(param_1 + 1);
        goto LAB_107812ca0;
      }
    }
    else {
      func_0x000107426444(&plStack_60,piVar4);
    }
    piVar4 = piVar4 + 5;
    uVar5 = uVar5 - 1;
  } while( true );
}



/* Entry: 10781327c; end: 107813287;  */

void FUN_10781327c(void)

{
  func_0x0001078138d0();
  func_0x0001078132ac();
  return;
}



/* Entry: 107813454; end: 107813493;  */

long * FUN_107813454(long *param_1,long *param_2)

{
  long *plVar1;
  
  if ((ulong)param_2 >> 0x39 == 0) {
    plVar1 = (long *)(param_1[2] - *param_1 >> 6);
    if (plVar1 <= param_2) {
      plVar1 = param_2;
    }
    if (0x7fffffffffffff7f < (ulong)(param_1[2] - *param_1)) {
      plVar1 = (long *)0x1ffffffffffffff;
    }
    return plVar1;
  }
  func_0x0001078134cc();
  func_0x0001078138fc();
  plVar1 = param_1 + 2;
  func_0x000107813560(plVar1,*param_1,param_1[1],param_2[1] + (*param_1 - param_1[1]));
  func_0x000107813840();
  return plVar1;
}



/* Entry: 1078136a8; end: 1078136c7;  */

void FUN_1078136a8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = **(long **)(param_1 + 8);
  for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != lVar2; lVar1 = lVar1 + -0x80) {
    func_0x00010724b3d8(lVar1 + -0x48);
  }
  return;
}



/* Entry: 107813b7c; end: 107813e23;  */

long * FUN_107813b7c(long *param_1)

{
  undefined8 *puVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined ***pppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  long lVar6;
  int extraout_w10;
  undefined **appuStack_b0 [3];
  long *plStack_98;
  undefined **ppuStack_90;
  long lStack_88;
  undefined ***pppuStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  func_0x000107821e20();
  puVar2 = (undefined8 *)0x128;
  uStack_48 = extraout_x8;
  __Znwm();
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_DAT_1109e01d0;
  pppuStack_78 = &ppuStack_90;
  appuStack_b0[0] = &PTR_DAT_1109e0300;
  ppuStack_90 = &PTR_DAT_1109e0220;
  plStack_98 = (long *)appuStack_b0;
  __ZNSt3__119__shared_mutex_baseC1Ev(puVar2 + 3);
  puVar2[0x19] = 1;
  puVar2[0x18] = 2;
  pppuVar3 = pppuStack_78;
  if (pppuStack_78 == (undefined ***)0x0) {
LAB_107813c1c:
    puVar2[0x1d] = pppuVar3;
  }
  else {
    in_ZR = pppuStack_78 == &ppuStack_90;
    if (!(bool)in_ZR) {
      (*(code *)(*pppuStack_78)[2])();
      goto LAB_107813c1c;
    }
    puVar2[0x1d] = puVar2 + 0x1a;
    func_0x000107822650();
    (*extraout_x8_00)();
  }
  plVar4 = plStack_98;
  if (plStack_98 != (long *)0x0) {
    in_ZR = (undefined ***)plStack_98 == appuStack_b0;
    if ((bool)in_ZR) {
      puVar2[0x21] = puVar2 + 0x1e;
      func_0x000107822650();
      (*extraout_x8_01)();
      goto LAB_107813c70;
    }
    (**(code **)(*plStack_98 + 0x10))();
  }
  puVar2[0x21] = plVar4;
LAB_107813c70:
  puVar2[0x22] = 0;
  puVar2[0x23] = 0;
  puVar2[0x24] = 0;
  puStack_50 = puVar2 + 0x24;
  puVar5 = (undefined8 *)0x20;
  __Znwm();
  puStack_58 = puVar5 + 4;
  puStack_68 = puVar5;
  puStack_60 = puVar5;
  func_0x00010781bde0(puVar2 + 0x22,&uStack_70);
  func_0x00010781be00(&uStack_70);
  func_0x00010781bea4(appuStack_b0);
  func_0x00010781bee0(&ppuStack_90);
  *param_1 = (long)(puVar2 + 3);
  param_1[1] = (long)puVar2;
  func_0x00010781bf28(0);
  func_0x000107822e34(&uStack_70);
  puVar5 = puStack_60;
  lVar6 = param_1[1];
  lStack_88 = param_1[1];
  ppuStack_90 = (undefined **)*param_1;
  puStack_60[1] = 0;
  puStack_60[2] = 0;
  *puStack_60 = &PTR_DAT_1109e04f0;
  if (lVar6 != 0) {
    do {
      func_0x000107821f0c();
    } while (extraout_w10 != 0);
  }
  func_0x0001078144f4(puVar5 + 3,&ppuStack_90);
  func_0x0001078221d8();
  puVar1 = puStack_60;
  puStack_60 = (undefined8 *)0x0;
  func_0x00010781f874(&uStack_70);
  uStack_70 = 0;
  puStack_68 = (undefined8 *)0x0;
  puVar5 = &uStack_70;
  func_0x0001074f6448();
  param_1[2] = (long)(puVar1 + 3);
  param_1[3] = (long)puVar1;
  func_0x000107822064();
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 10) = 1;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined4 *)(param_1 + 0x11) = 1;
  param_1[0x13] = 30000000;
  param_1[0x12] = 300000000;
  *(undefined1 *)(param_1 + 0x17) = 0;
  param_1[0x14] = 30000000;
  param_1[0x15] = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  func_0x000107821dac(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010781bee0(puVar2 + 0x1a);
    func_0x000107276ba4(puVar1 + 3);
    func_0x00010781bea4(appuStack_b0);
    func_0x00010781bee0(&ppuStack_90);
    __ZNSt3__119__shared_weak_countD2Ev(puVar1);
    func_0x00010781bf28();
    __Unwind_Resume();
    plVar4 = puVar5 + 2;
    FUN_10781bf34(plVar4);
    if (*(char *)(puVar5 + 0x17) == '\x01') {
      *(undefined1 *)(puVar5 + 0x17) = 0;
    }
    *(int *)(puVar5 + 0x15) = *(int *)(puVar5 + 0x15) + 1;
    return plVar4;
  }
  return param_1;
}



/* Entry: 1078143fc; end: 1078144cf;  */

void FUN_1078143fc(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long unaff_x19;
  undefined8 *unaff_x20;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  func_0x0001078220d8();
  uStack_38 = 1;
  uStack_40 = param_2;
  __ZNSt3__119__shared_mutex_base4lockEv(param_2);
  lVar2 = *(long *)(unaff_x19 + 0x100);
  if (*(long *)(unaff_x19 + 0xf8) == lVar2) {
    uVar3 = 0;
    while( true ) {
      uVar1 = 0;
      if (*(long *)(unaff_x19 + 0xb0) != 0) {
        uVar1 = *(long *)(unaff_x19 + 0xb0) - 1;
      }
      if (uVar1 <= uVar3) break;
      func_0x00010781f95c(auStack_50,*(undefined8 *)(unaff_x19 + 0xd0));
      func_0x000107822c2c();
      func_0x00010781f884();
      func_0x00010781f6d4(auStack_50);
      uVar3 = uVar3 + 1;
    }
    func_0x00010781f95c();
  }
  else {
    uVar4 = *(undefined8 *)(lVar2 + -0x10);
    unaff_x20[1] = *(undefined8 *)(lVar2 + -8);
    *unaff_x20 = uVar4;
    *(undefined8 *)(lVar2 + -0x10) = 0;
    *(undefined8 *)(lVar2 + -8) = 0;
    func_0x00010781be70((long *)(unaff_x19 + 0xf8),*(long *)(unaff_x19 + 0x100) + -0x10);
  }
  func_0x0001078228e4();
  return;
}



/* Entry: 1078150a4; end: 1078152eb;  */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x000107815a88 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1078150a4(undefined8 param_1,float param_2,undefined4 param_3,long *param_4,
                  undefined8 *param_5)

{
  uint uVar1;
  uint *puVar2;
  undefined8 *puVar3;
  long *****ppppplVar4;
  long lVar5;
  byte bVar6;
  ushort uVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  float fVar10;
  undefined8 uVar11;
  double dVar12;
  float fVar13;
  undefined8 uVar14;
  double dVar15;
  undefined *puVar16;
  byte bVar17;
  char cVar18;
  code *pcVar19;
  bool bVar20;
  undefined1 uVar21;
  bool bVar22;
  int iVar23;
  long ****pppplVar24;
  long *****ppppplVar25;
  undefined8 *puVar26;
  long ***ppplVar27;
  ulong *puVar28;
  long lVar29;
  undefined4 *extraout_x8;
  undefined8 extraout_x8_00;
  long *****extraout_x8_01;
  code *extraout_x8_02;
  ulong extraout_x8_03;
  code *extraout_x8_04;
  code *extraout_x8_05;
  double extraout_x8_06;
  long *****extraout_x8_07;
  code *extraout_x8_08;
  ulong extraout_x8_09;
  long *****ppppplVar30;
  long lVar31;
  long *****extraout_x8_10;
  code *extraout_x8_11;
  long ****extraout_x8_12;
  long *****ppppplVar32;
  ulong extraout_x8_13;
  double extraout_x8_14;
  code *extraout_x8_15;
  long extraout_x8_16;
  long extraout_x8_17;
  ulong extraout_x8_18;
  double extraout_x8_19;
  code *extraout_x8_20;
  long extraout_x8_21;
  long extraout_x8_22;
  long *****ppppplVar33;
  long *****extraout_x8_23;
  long extraout_x8_24;
  long extraout_x8_25;
  ulong extraout_x8_26;
  long *****extraout_x8_27;
  ulong extraout_x8_28;
  undefined8 uVar34;
  long extraout_x9;
  long *****extraout_x9_00;
  long *****extraout_x9_01;
  ulong extraout_x9_02;
  ulong extraout_x9_03;
  long ****extraout_x9_04;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  int extraout_w10_08;
  int extraout_w10_09;
  long *extraout_x10;
  long *plVar35;
  long *extraout_x10_00;
  long *****extraout_x10_01;
  long *****extraout_x11;
  long *****extraout_x11_00;
  ulong uVar36;
  long extraout_x12;
  long *plVar37;
  long *****extraout_x13;
  undefined8 extraout_x13_00;
  long lVar38;
  ulong uVar39;
  uint uVar40;
  uint uVar41;
  long *****ppppplVar42;
  long *****ppppplVar43;
  ulong uVar44;
  long *****ppppplVar45;
  undefined8 *puVar46;
  long *****ppppplVar47;
  long *****ppppplVar48;
  long ***ppplVar49;
  long *plVar50;
  long ***ppplVar51;
  long lVar52;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  undefined1 in_register_00005004;
  undefined1 in_register_00005005;
  undefined1 in_register_00005006;
  undefined1 in_register_00005007;
  undefined4 uVar53;
  undefined8 uVar54;
  byte bStack_d78;
  long ****pppplStack_d70;
  long ****apppplStack_d60 [2];
  long ****pppplStack_d50;
  long ***ppplStack_d48;
  long ***ppplStack_d40;
  long *plStack_d30;
  long *plStack_d28;
  undefined1 auStack_d18 [808];
  undefined8 uStack_9f0;
  undefined8 uStack_9e8;
  undefined8 uStack_9e0;
  undefined8 uStack_9d0;
  long lStack_9c8;
  undefined8 uStack_9c0;
  long ****apppplStack_9b0 [2];
  long ****pppplStack_9a0;
  double dStack_998;
  long ****pppplStack_990;
  long ****pppplStack_988;
  long ***ppplStack_980;
  char cStack_958;
  undefined1 auStack_950 [8];
  undefined1 auStack_948 [40];
  undefined1 auStack_920 [8];
  long lStack_918;
  undefined1 auStack_298 [74];
  byte bStack_24e;
  char cStack_24d;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  float fStack_218;
  undefined4 uStack_214;
  byte bStack_1f8;
  undefined1 auStack_1f0 [56];
  undefined2 uStack_1b8;
  undefined1 auStack_1b0 [56];
  undefined1 auStack_178 [56];
  undefined4 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 uStack_128;
  undefined1 uStack_118;
  undefined8 uStack_110;
  long ***ppplStack_88;
  long ***ppplStack_80;
  long ***ppplStack_78;
  long ***ppplStack_70;
  ulong *puStack_68;
  
  func_0x00010782304c();
  puVar28 = (ulong *)(param_4 + 2);
  uVar44 = param_4[1];
  if (uVar44 < *puVar28) {
    func_0x000107822e3c(uVar44);
    lVar52 = uVar44 + 0xb0;
    param_4[1] = lVar52;
  }
  else {
    lVar52 = *param_4;
    uVar39 = (long)(uVar44 - lVar52) / 0xb0 + 1;
    if (0x1745d1745d1745d < uVar39) {
      FUN_10781c3f8();
LAB_1078152cc:
      func_0x000104bd35f4();
      ppppplVar25 = (long *****)&ppplStack_88;
      func_0x00010781c42c();
      func_0x000107822108();
      func_0x000107821e20();
      lStack_9c8 = 0;
      uStack_9d0 = 0;
      uStack_9c0 = 0;
      uStack_9e8 = 0;
      uStack_9f0 = 0;
      uStack_9e0 = 0;
      uStack_110 = extraout_x8_00;
      func_0x0001074d0f04(&uStack_9d0,0x20);
      func_0x0001074d2c98(&uStack_9f0,0x20);
      plVar50 = (long *)*param_5;
      lVar52 = *plVar50;
      func_0x00010740b5f8(auStack_d18,plVar50[1] + 0x10,ppppplVar25 + 8);
      lVar38 = plVar50[1];
      ppppplVar42 = ppppplVar25 + 0x22f;
      func_0x0001078139a8(ppppplVar42,plVar50 + 4);
      func_0x00010781c4b0(auStack_950,ppppplVar42);
      (*(code *)(*ppppplVar25)[0xb])(&uStack_230,ppppplVar25,lVar52,auStack_d18,0x2000);
      func_0x00010781c4d8(auStack_920,lVar52,lVar38,ppppplVar25 + 8,auStack_950,&uStack_230);
      FUN_1077f79bc(auStack_948);
      FUN_1078175f0(&plStack_d30,*plVar50,plVar50 + 0x12);
      if ((*(char *)(ppppplVar25 + 0x22d) == '\x01') &&
         (ppppplVar42 = (long *****)ppppplVar25[0x22b], ppppplVar42 != (long *****)0x0)) {
        iVar23 = (int)ppppplVar25[1];
        func_0x0001078173dc();
        plVar35 = plStack_d28;
        plVar37 = plStack_d30;
        puVar16 = PTR___ZSt7nothrow_1103469d8;
        if (iVar23 != 0) {
          ppppplVar47 = (long *****)((long)plStack_d28 - (long)plStack_d30 >> 3);
          uStack_228 = (long *****)0x0;
          uStack_230 = (long *****)0x0;
          pppplStack_d50 = (long ****)ppppplVar42;
          ppppplVar42 = ppppplVar47;
          if ((long)ppppplVar47 < 0x81) {
            ppppplVar42 = (long *****)0x0;
          }
          else {
            for (; ppppplVar42 != (long *****)0x0;
                ppppplVar42 = (long *****)((ulong)ppppplVar42 >> 1)) {
              lVar38 = (long)ppppplVar42 << 3;
              __ZnwmRKSt9nothrow_t(lVar38,puVar16);
              if (lVar38 != 0) goto code_r0x000107815494;
            }
            lVar38 = 0;
code_r0x000107815494:
            pppplStack_990 = (long ****)0x0;
            pppplStack_988 = (long ****)ppppplVar42;
            FUN_107820b10(&uStack_230,lVar38);
            uStack_228 = ppppplVar42;
            func_0x000107820b28(&pppplStack_990);
          }
          func_0x000107820928(plVar37,plVar35,&pppplStack_d50,ppppplVar47,uStack_230,ppppplVar42);
          func_0x000107820b28(&uStack_230);
        }
      }
      uVar44 = 0;
      for (plVar37 = plStack_d30; plVar37 != plStack_d28; plVar37 = plVar37 + 1) {
        uVar44 = (ulong)(uint)((int)uVar44 +
                              (int)(((*(long **)(*plVar37 + 0x5b8))[1] -
                                    **(long **)(*plVar37 + 0x5b8)) / 0x38));
      }
      uVar7 = *(ushort *)(lVar52 + 0x74);
      ppppplVar43 = (long *****)(ulong)uVar7;
      puVar2 = (uint *)param_5[6];
      puVar28 = (ulong *)param_5[7];
      uVar39 = param_5[8];
      bVar6 = *(byte *)(plVar50[1] + 4);
      ppppplVar47 = (long *****)param_5[4];
      ppppplVar4 = (long *****)param_5[5];
      func_0x00010781ca54(ppppplVar47,
                          (long)((float)((long)ppppplVar47[3] + uVar44) /
                                *(float *)(ppppplVar47 + 4)));
      pppplStack_d70 = (long ****)0x0;
      ppplVar49 = (long ***)&uStack_230;
      ppppplVar42 = ppppplVar4 + 2;
      uVar40 = (uint)uVar7;
      ppppplVar45 = ppppplVar4;
      do {
        ppppplVar32 = (long *****)((long)plStack_d28 - (long)plStack_d30 >> 3);
        uVar21 = (long *****)pppplStack_d70 == ppppplVar32;
        if (ppppplVar32 <= pppplStack_d70) {
          func_0x000107822bb4();
          if ((extraout_x8_28 & 1) == 0) {
            *(ushort *)(lVar52 + 0x74) = *(ushort *)(lVar52 + 0x74) & 0xff7f;
          }
          pppplStack_990 = (long ****)(lVar52 + 0xa5c);
          uStack_220 = *(long *)(lStack_918 + 0x218) + 0xc;
          uStack_228 = (long *****)(plVar50 + 2);
          uStack_230 = (long *****)pppplStack_990;
          func_0x0001074a113c(ppppplVar25 + 0x24c,&UNK_10dd5b8f9,&pppplStack_990,&uStack_230);
          *extraout_x8 = 1;
          *(undefined8 *)(extraout_x8 + 4) = uStack_9e8;
          *(undefined8 *)(extraout_x8 + 2) = uStack_9f0;
          *(undefined8 *)(extraout_x8 + 6) = uStack_9e0;
          uStack_9f0 = 0;
          uStack_9e8 = 0;
          uStack_9e0 = 0;
          *(undefined1 *)(extraout_x8 + 8) = 0;
          *(long *)(extraout_x8 + 0xc) = lStack_9c8;
          *(undefined8 *)(extraout_x8 + 10) = uStack_9d0;
          *(undefined8 *)(extraout_x8 + 0xe) = uStack_9c0;
          uStack_9d0 = 0;
          lStack_9c8 = 0;
          uStack_9c0 = 0;
          *(undefined1 *)(extraout_x8 + 0x10) = 0;
          *(undefined8 *)(extraout_x8 + 0x14) = 0;
          *(undefined8 *)(extraout_x8 + 0x12) = 0;
          *(undefined8 *)(extraout_x8 + 0x18) = 0;
          *(undefined8 *)(extraout_x8 + 0x16) = 0;
          *(undefined8 *)(extraout_x8 + 0x1c) = 0;
          *(undefined8 *)(extraout_x8 + 0x1a) = 0;
          *(undefined8 *)(extraout_x8 + 0x20) = 0;
          *(undefined8 *)(extraout_x8 + 0x1e) = 0;
          extraout_x8[0x22] = 0x3f800000;
          extraout_x8[0x24] = 0;
          func_0x00010745c408(&plStack_d30);
          FUN_1077f79bc(auStack_298);
          func_0x0001074ae918(&uStack_9f0);
          func_0x00010748ab6c(&uStack_9d0);
          func_0x000107821dac(uStack_110);
          if ((bool)uVar21) {
            return;
          }
          ___stack_chk_fail();
code_r0x00010781632c:
          func_0x000104bd35f4();
                    /* WARNING: Does not return */
          pcVar19 = (code *)SoftwareBreakpoint(1,0x107816334);
          (*pcVar19)();
        }
        lVar38 = plStack_d30[(long)pppplStack_d70];
        if ((((uint)ppppplVar43 >> 0xb & 1) == 0) ||
           (uVar21 = *(char *)(lVar38 + 0x655) == '\x01', !(bool)uVar21)) {
          func_0x000107822bb4();
          if ((extraout_x8_03 & 1) == 0) {
            bStack_d78 = 0;
code_r0x000107815604:
            ppppplVar47 = (long *****)param_5[3];
            func_0x0001078201d4(ppppplVar47,*(undefined4 *)(lVar38 + 0x658));
            if (ppppplVar47 == (long *****)0x0) {
              func_0x000107822818(*(undefined8 *)(lVar38 + 0x5b8));
              if ((bool)uVar21) {
code_r0x00010781564c:
                uVar41 = 0;
              }
              else {
                func_0x000107822a94(lStack_918);
                (*extraout_x8_04)();
                if (((ulong)ppppplVar47 & 1) != 0) goto code_r0x00010781564c;
                uVar41 = (uint)ppppplVar47 ^ 1;
                if (*(char *)(lVar38 + 0x5c8) == '\x03') {
                  func_0x000107822bc0();
                  for (ppppplVar43 = (long *****)pppplStack_d70; ppppplVar43 != ppppplVar45;
                      ppppplVar43 = ppppplVar43 + 7) {
                    func_0x000107822e28();
                    func_0x000107822cfc();
                    func_0x000107822e08();
                    if ((ppplVar49 != (long ***)0x0) && (((ulong)ppplVar49[5] & 1) != 0))
                    goto code_r0x000107815618;
                  }
                }
                else {
                  if (*(char *)(lVar38 + 0x5c8) == '\x02') {
                    func_0x000107822bc0();
                    ppppplVar43 = (long *****)pppplStack_d70;
                    do {
                      if (ppppplVar43 == ppppplVar45) goto code_r0x000107815650;
                      func_0x000107822e28();
                      func_0x000107822cfc();
                      func_0x000107822e08();
                      ppppplVar43 = ppppplVar43 + 7;
                    } while (ppplVar49 == (long ***)0x0);
                    goto code_r0x000107815618;
                  }
                  uVar41 = 1;
                }
              }
code_r0x000107815650:
              cVar18 = cStack_24d;
              bVar17 = bStack_24e;
              ppppplVar45 = (long *****)(ulong)bStack_24e;
              ppppplVar47 = ppppplVar25;
              func_0x000107816538(ppppplVar25,lVar38,auStack_920);
              uVar1 = 0;
              if (bVar17 != 1) {
                uVar1 = uVar41;
              }
              ppppplVar43 = ppppplVar47;
              if (uVar1 == 1 && cVar18 != '\x01') {
                plVar37 = *(long **)(lVar38 + 0x5b8);
                lVar5 = plVar37[1];
                for (lVar29 = *plVar37; uVar21 = lVar29 - lVar5 < 0, lVar29 != lVar5;
                    lVar29 = lVar29 + 0x38) {
                  plVar37 = (long *)param_5[4];
                  func_0x00010724ef84(&pppplStack_990,lVar29);
                  ppppplVar43 = (long *****)(plVar37 + 3);
                  func_0x000100102e7c(ppppplVar43,&pppplStack_990);
                  ppppplVar33 = (long *****)plVar37[1];
                  ppppplVar32 = ppppplVar43;
                  if (ppppplVar33 != (long *****)0x0) {
                    uVar44 = (long)ppppplVar33 - 1;
                    if (((ulong)ppppplVar33 & uVar44) == 0) {
                      ppppplVar45 = (long *****)(uVar44 & (ulong)ppppplVar43);
                      uVar21 = false;
                    }
                    else {
                      uVar21 = (long)ppppplVar43 - (long)ppppplVar33 < 0;
                      ppppplVar45 = ppppplVar43;
                      if (ppppplVar33 <= ppppplVar43) {
                        uVar36 = 0;
                        if (ppppplVar33 != (long *****)0x0) {
                          uVar36 = (ulong)ppppplVar43 / (ulong)ppppplVar33;
                        }
                        ppppplVar45 = (long *****)((long)ppppplVar43 - uVar36 * (long)ppppplVar33);
                      }
                    }
                    ppppplVar48 = *(long ******)(*plVar37 + (long)ppppplVar45 * 8);
                    if (ppppplVar48 != (long *****)0x0) {
                      do {
                        while( true ) {
                          ppppplVar48 = (long *****)*ppppplVar48;
                          if (ppppplVar48 == (long *****)0x0) goto code_r0x000107815a34;
                          ppppplVar30 = (long *****)ppppplVar48[1];
                          uVar21 = (long)ppppplVar30 - (long)ppppplVar43 < 0;
                          if (ppppplVar30 != ppppplVar43) break;
                          ppppplVar32 = ppppplVar48 + 2;
                          func_0x0001000e107c(ppppplVar32,&pppplStack_990);
                          if (((ulong)ppppplVar32 & 1) != 0) goto code_r0x000107815b58;
                        }
                        if (((ulong)ppppplVar33 & uVar44) == 0) {
                          ppppplVar30 = (long *****)((ulong)ppppplVar30 & uVar44);
                        }
                        else if (ppppplVar33 <= ppppplVar30) {
                          uVar36 = 0;
                          if (ppppplVar33 != (long *****)0x0) {
                            uVar36 = (ulong)ppppplVar30 / (ulong)ppppplVar33;
                          }
                          ppppplVar30 = (long *****)((long)ppppplVar30 - uVar36 * (long)ppppplVar33)
                          ;
                        }
                        uVar21 = (long)ppppplVar30 - (long)ppppplVar45 < 0;
                      } while (ppppplVar30 == ppppplVar45);
                    }
                  }
code_r0x000107815a34:
                  func_0x000107822558();
                  ppppplVar48 = (long *****)(plVar37 + 2);
                  uStack_220 = 1;
                  *ppppplVar32 = (long ****)0x0;
                  ppppplVar32[1] = (long ****)ppppplVar43;
                  ppppplVar32[4] = (long ****)ppplStack_980;
                  ppppplVar32[3] = pppplStack_988;
                  ppppplVar32[2] = pppplStack_990;
                  pppplStack_988 = (long ****)0x0;
                  pppplStack_990 = (long ****)0x0;
                  ppplStack_980 = (long ***)0x0;
                  *(undefined1 *)(ppppplVar32 + 5) = 0;
                  uStack_230 = ppppplVar32;
                  uStack_228 = ppppplVar48;
                  func_0x000107822290(plVar37[3]);
                  if (ppppplVar33 == (long *****)0x0) {
code_r0x000107815a90:
                    func_0x000107821dc0((long)ppppplVar33 << 1);
                    func_0x00010781ca54(plVar37);
                    ppppplVar33 = (long *****)plVar37[1];
                    if (((ulong)ppppplVar33 & (long)ppppplVar33 - 1U) == 0) {
                      ppppplVar45 = (long *****)((long)ppppplVar33 - 1U & (ulong)ppppplVar43);
                    }
                    else {
                      ppppplVar45 = ppppplVar43;
                      if (ppppplVar33 <= ppppplVar43) {
                        uVar44 = 0;
                        if (ppppplVar33 != (long *****)0x0) {
                          uVar44 = (ulong)ppppplVar43 / (ulong)ppppplVar33;
                        }
                        ppppplVar45 = (long *****)((long)ppppplVar43 - uVar44 * (long)ppppplVar33);
                      }
                    }
                  }
                  else {
                    param_2 = (float)ppppplVar33;
                    func_0x000107822234(CONCAT17(in_register_00005007,
                                                 CONCAT16(in_register_00005006,
                                                          CONCAT15(in_register_00005005,
                                                                   CONCAT14(in_register_00005004,
                                                                            CONCAT13(
                                                  in_register_00005003,
                                                  CONCAT12(in_register_00005002,
                                                           CONCAT11(in_register_00005001,in_b0))))))
                                                ),(int)plVar37[4]);
                    if ((bool)uVar21) goto code_r0x000107815a90;
                  }
                  lVar31 = *plVar37;
                  if (*(long *)(lVar31 + (long)ppppplVar45 * 8) == 0) {
                    *ppppplVar32 = *ppppplVar48;
                    *ppppplVar48 = (long ****)ppppplVar32;
                    *(long ******)(lVar31 + (long)ppppplVar45 * 8) = ppppplVar48;
                    if (*ppppplVar32 != (long ****)0x0) {
                      ppppplVar43 = (long *****)(*ppppplVar32)[1];
                      if (((ulong)ppppplVar33 & (long)ppppplVar33 - 1U) == 0) {
                        ppppplVar43 = (long *****)((ulong)ppppplVar43 & (long)ppppplVar33 - 1U);
                      }
                      else if (ppppplVar33 <= ppppplVar43) {
                        uVar44 = 0;
                        if (ppppplVar33 != (long *****)0x0) {
                          uVar44 = (ulong)ppppplVar43 / (ulong)ppppplVar33;
                        }
                        ppppplVar43 = (long *****)((long)ppppplVar43 - uVar44 * (long)ppppplVar33);
                      }
                      *(long ******)(lVar31 + (long)ppppplVar43 * 8) = ppppplVar32;
                    }
                  }
                  else {
                    func_0x000107822b04();
                  }
                  uStack_230 = (long *****)0x0;
                  plVar37[3] = plVar37[3] + 1;
                  FUN_10781cb70(&uStack_230);
                  ppppplVar48 = ppppplVar32;
code_r0x000107815b58:
                  *(byte *)(ppppplVar48 + 5) =
                       ((byte)ppppplVar47 | (byte)((ulong)ppppplVar47 >> 8)) & 1;
                  ppppplVar43 = &pppplStack_990;
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
                }
              }
              if (*(int *)(lVar38 + 0x658) != -1) {
                func_0x000107822a94(lStack_918);
                (*extraout_x8_05)();
                if (((ulong)ppppplVar43 & 1) == 0) {
                  ppppplVar43 = (long *****)param_5[3];
                  func_0x000107426444(ppppplVar43,(int *)(lVar38 + 0x658));
                }
              }
              *(int *)(ppppplVar25 + 0x22a) = *(int *)(ppppplVar25 + 0x22a) + 1;
              if (((ulong)ppppplVar47 & 0x101) != 0) {
                *(int *)((long)ppppplVar25 + 0x1154) = *(int *)((long)ppppplVar25 + 0x1154) + 1;
                func_0x00010782229c();
                ppplVar49 = (long ***)&uStack_230;
                pppplStack_d50 = (long ****)ppppplVar43;
                ppplStack_d48 = (long ***)extraout_x8_06;
                if (extraout_x8_06 != 0.0) {
                  do {
                    func_0x000107821f0c();
                  } while (extraout_w10_00 != 0);
                }
                (*(code *)(*ppppplVar43)[7])(&uStack_230);
                puVar26 = &uStack_230;
                func_0x000107330078();
                pppplStack_990 = (long ****)(double)(int)**(short **)*puVar26;
                pppplStack_988 = (long ****)(double)(int)(*(short **)*puVar26)[1];
                func_0x000107822d68(&uStack_230,&pppplStack_990);
                dVar12 = (double)uStack_230 / (double)CONCAT44(uStack_214,fStack_218);
                dVar15 = (double)uStack_228 / (double)CONCAT44(uStack_214,fStack_218);
                auVar9[8] = SUB81(dVar15,0);
                auVar9._0_8_ = dVar12;
                auVar9[9] = (char)((ulong)dVar15 >> 8);
                auVar9[10] = (char)((ulong)dVar15 >> 0x10);
                auVar9[0xb] = (char)((ulong)dVar15 >> 0x18);
                auVar9[0xc] = (char)((ulong)dVar15 >> 0x20);
                auVar9[0xd] = (char)((ulong)dVar15 >> 0x28);
                auVar9[0xe] = (char)((ulong)dVar15 >> 0x30);
                auVar9[0xf] = (char)((ulong)dVar15 >> 0x38);
                fVar10 = (float)dVar12;
                in_b0 = SUB41(fVar10,0);
                in_register_00005001 = (undefined1)((uint)fVar10 >> 8);
                in_register_00005002 = (undefined1)((uint)fVar10 >> 0x10);
                in_register_00005003 = (undefined1)((uint)fVar10 >> 0x18);
                fVar13 = (float)auVar9._8_8_;
                in_register_00005004 = SUB41(fVar13,0);
                in_register_00005005 = (undefined1)((uint)fVar13 >> 8);
                in_register_00005006 = (undefined1)((uint)fVar13 >> 0x10);
                in_register_00005007 = (undefined1)((uint)fVar13 >> 0x18);
                apppplStack_d60[0] =
                     (long ****)
                     CONCAT17(in_register_00005007,
                              CONCAT16(in_register_00005006,
                                       CONCAT15(in_register_00005005,
                                                CONCAT14(in_register_00005004,fVar10))));
                func_0x000107822d1c(ppppplVar25 + 8,ppppplVar25[0x254],ppppplVar25[0x255]);
                uVar53 = SUB84(uStack_230,0);
                uStack_230 = (long *****)
                             CONCAT44(uVar53,CONCAT13(in_register_00005003,
                                                      CONCAT12(in_register_00005002,
                                                               CONCAT11(in_register_00005001,in_b0))
                                                     ));
                uStack_228 = (long *****)CONCAT44(param_3,param_2);
                func_0x000107822d1c(ppppplVar25 + 8,ppppplVar25[0x251],ppppplVar25[0x252]);
                uStack_220 = CONCAT44(uVar53,CONCAT13(in_register_00005003,
                                                      CONCAT12(in_register_00005002,
                                                               CONCAT11(in_register_00005001,in_b0))
                                                     ));
                fStack_218 = param_2;
                uStack_214 = param_3;
                func_0x0001074b2900(&pppplStack_990,&uStack_230,2);
                dStack_998 = (double)ppplStack_d48;
                pppplStack_9a0 = pppplStack_d50;
                pppplStack_d50 = (long ****)0x0;
                ppplStack_d48 = (long ***)0x0;
                func_0x000107278b70(apppplStack_9b0,(undefined8 *)(lVar38 + 0x5b8));
                ppppplVar43 = (long *****)(ulong)uVar40;
                param_2 = *(float *)(param_5 + 2);
                func_0x0001074d5004(CONCAT17(in_register_00005007,
                                             CONCAT16(in_register_00005006,
                                                      CONCAT15(in_register_00005005,
                                                               CONCAT14(in_register_00005004,
                                                                        CONCAT13(
                                                  in_register_00005003,
                                                  CONCAT12(in_register_00005002,
                                                           CONCAT11(in_register_00005001,in_b0))))))
                                            ),*(undefined4 *)((long)param_5 + 0xc),&uStack_230,
                                    &pppplStack_9a0,apppplStack_d60,&pppplStack_990,apppplStack_9b0)
                ;
                func_0x00010748b9dc(&uStack_9d0,&uStack_230);
                func_0x00010748be00(&uStack_230);
                func_0x00010726b09c(apppplStack_9b0);
                func_0x000107267e44(&pppplStack_9a0);
                *(byte *)(lStack_9c8 + -8) = bStack_d78 & 1;
                ppppplVar47 = &pppplStack_990;
                func_0x00010748be30();
                func_0x000107822ce0();
                if (((uVar7 >> 0xb & 1) == 0) || (*(char *)(lVar38 + 0x655) != '\x01'))
                goto code_r0x000107815dcc;
                func_0x00010782229c();
                pppplStack_990 = (long ****)ppppplVar47;
                pppplStack_988 = (long ****)extraout_x8_07;
                if (extraout_x8_07 != (long *****)0x0) {
                  do {
                    func_0x000107821f0c();
                  } while (extraout_w10_01 != 0);
                }
                func_0x0001078229b8();
                (*extraout_x8_08)();
                func_0x00010726236c(&uStack_230);
                func_0x000107330fdc(&pppplStack_990);
                uVar21 = (int)(bStack_1f8 - 1) < 0;
                if (bStack_1f8 == 1) {
                  func_0x00010724ef84(&pppplStack_d50,&uStack_230);
                  uVar41 = *puVar2;
                  ppppplVar47 = ppppplVar4 + 3;
                  func_0x000100102e7c(ppppplVar47,&pppplStack_d50);
                  ppppplVar43 = (long *****)ppppplVar4[1];
                  ppppplVar32 = ppppplVar47;
                  if (ppppplVar43 != (long *****)0x0) {
                    ppplVar49 = (long ***)((long)ppppplVar43 + -1);
                    if (((ulong)ppppplVar43 & (ulong)ppplVar49) == 0) {
                      ppppplVar45 = (long *****)((ulong)ppplVar49 & (ulong)ppppplVar47);
                      uVar21 = false;
                    }
                    else {
                      uVar21 = (long)ppppplVar47 - (long)ppppplVar43 < 0;
                      ppppplVar45 = ppppplVar47;
                      if (ppppplVar43 <= ppppplVar47) {
                        uVar44 = 0;
                        if (ppppplVar43 != (long *****)0x0) {
                          uVar44 = (ulong)ppppplVar47 / (ulong)ppppplVar43;
                        }
                        ppppplVar45 = (long *****)((long)ppppplVar47 - uVar44 * (long)ppppplVar43);
                      }
                    }
                    ppplVar51 = (*ppppplVar4)[(long)ppppplVar45];
                    if (ppplVar51 != (long ***)0x0) {
                      do {
                        while( true ) {
                          ppplVar51 = (long ***)*ppplVar51;
                          if (ppplVar51 == (long ***)0x0) goto code_r0x000107815f54;
                          ppppplVar33 = (long *****)ppplVar51[1];
                          uVar21 = (long)ppppplVar33 - (long)ppppplVar47 < 0;
                          if (ppppplVar33 != ppppplVar47) break;
                          ppppplVar32 = (long *****)(ppplVar51 + 2);
                          func_0x0001000e107c(ppppplVar32,&pppplStack_d50);
                          if (((ulong)ppppplVar32 & 1) != 0) {
                            func_0x000107822374();
                            func_0x000107822aa4();
                            pppplStack_d70 = (long ****)(ulong)uVar41;
                            goto code_r0x000107816210;
                          }
                        }
                        if (((ulong)ppppplVar43 & (ulong)ppplVar49) == 0) {
                          ppppplVar33 = (long *****)((ulong)ppppplVar33 & (ulong)ppplVar49);
                        }
                        else if (ppppplVar43 <= ppppplVar33) {
                          uVar44 = 0;
                          if (ppppplVar43 != (long *****)0x0) {
                            uVar44 = (ulong)ppppplVar33 / (ulong)ppppplVar43;
                          }
                          ppppplVar33 = (long *****)((long)ppppplVar33 - uVar44 * (long)ppppplVar43)
                          ;
                        }
                        uVar21 = (long)ppppplVar33 - (long)ppppplVar45 < 0;
                      } while (ppppplVar33 == ppppplVar45);
                    }
                  }
code_r0x000107815f54:
                  ppplVar49 = (long ***)&uStack_230;
                  func_0x000107822558();
                  ppplVar51 = ppplStack_d40;
                  ppplStack_980 = (long ***)0x1;
                  *ppppplVar32 = (long ****)0x0;
                  ppppplVar32[1] = (long ****)ppppplVar47;
                  ppppplVar32[3] = (long ****)ppplStack_d48;
                  ppppplVar32[2] = pppplStack_d50;
                  pppplStack_d50 = (long ****)0x0;
                  ppplStack_d48 = (long ***)0x0;
                  ppplStack_d40 = (long ***)0x0;
                  ppppplVar32[4] = (long ****)ppplVar51;
                  ppppplVar32[5] = (long ****)((ulong)bVar6 | (long)(ulong)uVar41 << 0x20);
                  pppplStack_990 = (long ****)ppppplVar32;
                  pppplStack_988 = (long ****)ppppplVar42;
                  func_0x000107822290(ppppplVar4[3]);
                  if (ppppplVar43 == (long *****)0x0) {
code_r0x000107815fac:
                    func_0x00010782245c();
                    bVar20 = (long *****)0x2 < ppppplVar43;
                    bVar22 = ppppplVar43 == (long *****)0x3;
                    func_0x000107821e0c();
                    ppppplVar45 = extraout_x8_23;
                    if (!bVar20 || bVar22) {
                      ppppplVar45 = extraout_x9_00;
                    }
                    if ((long)ppppplVar45 - 1U == 0) {
                      ppppplVar45 = (long *****)0x2;
                    }
                    else if (((ulong)ppppplVar45 & (long)ppppplVar45 - 1U) != 0) {
                      __ZNSt3__112__next_primeEm();
                    }
                    ppppplVar43 = (long *****)ppppplVar4[1];
                    uVar21 = ppppplVar45 == ppppplVar43;
                    if (ppppplVar43 < ppppplVar45) {
code_r0x000107815ff8:
                      ppppplVar43 = ppppplVar45;
                      if ((ulong)ppppplVar43 >> 0x3d != 0) goto code_r0x00010781632c;
                      lVar38 = (long)ppppplVar43 << 3;
                      __Znwm(lVar38);
                      func_0x000107820208(ppppplVar4,lVar38);
                      ppppplVar45 = (long *****)0x0;
                      ppppplVar4[1] = (long ****)ppppplVar43;
                      ppppplVar32 = ppppplVar42;
                      while (bVar22 = ppppplVar45 <= ppppplVar43, ppppplVar43 != ppppplVar45) {
                        func_0x000107822324();
                        ppppplVar45 = extraout_x9_01;
                        ppppplVar32 = extraout_x13;
                      }
                      uVar21 = 1;
                      if (*ppppplVar32 != (long ****)0x0) {
                        func_0x000107823078();
                        ppppplVar45 = extraout_x11;
                        if (bVar22) {
                          ppppplVar45 = (long *****)
                                        ((long)extraout_x11 - extraout_x12 * (long)ppppplVar43);
                        }
                        uVar21 = ((ulong)ppppplVar43 & extraout_x9_02) == 0;
                        if ((bool)uVar21) {
                          ppppplVar45 = (long *****)((ulong)extraout_x11 & extraout_x9_02);
                        }
                        *(undefined8 *)(extraout_x8_24 + (long)ppppplVar45 * 8) = extraout_x13_00;
                        lVar38 = extraout_x8_24;
                        uVar44 = extraout_x9_02;
                        plVar37 = extraout_x10;
                        while (plVar35 = plVar37, plVar37 = (long *)*plVar35, plVar37 != (long *)0x0
                              ) {
                          ppppplVar32 = (long *****)plVar37[1];
                          if (((ulong)ppppplVar43 & uVar44) == 0) {
                            ppppplVar32 = (long *****)((ulong)ppppplVar32 & uVar44);
                          }
                          else if (ppppplVar43 <= ppppplVar32) {
                            uVar36 = 0;
                            if (ppppplVar43 != (long *****)0x0) {
                              uVar36 = (ulong)ppppplVar32 / (ulong)ppppplVar43;
                            }
                            ppppplVar32 = (long *****)
                                          ((long)ppppplVar32 - uVar36 * (long)ppppplVar43);
                          }
                          uVar21 = ppppplVar32 == ppppplVar45;
                          if (!(bool)uVar21) {
                            if (*(long *)(lVar38 + (long)ppppplVar32 * 8) == 0) {
                              *(long **)(lVar38 + (long)ppppplVar32 * 8) = plVar35;
                              ppppplVar45 = ppppplVar32;
                            }
                            else {
                              *plVar35 = *plVar37;
                              func_0x000107821df4();
                              lVar38 = extraout_x8_25;
                              uVar44 = extraout_x9_03;
                              plVar37 = extraout_x10_00;
                              ppppplVar45 = extraout_x11_00;
                            }
                          }
                        }
                      }
                    }
                    else if (ppppplVar45 < ppppplVar43) {
                      ppppplVar32 = (long *****)
                                    (long)((float)ppppplVar4[3] / *(float *)(ppppplVar4 + 4));
                      if ((ppppplVar43 < (long *****)0x3) ||
                         (((ulong)ppppplVar43 & (long)ppppplVar43 - 1U) != 0)) {
                        __ZNSt3__112__next_primeEm();
                      }
                      else {
                        func_0x000107821d54();
                      }
                      if (ppppplVar45 <= ppppplVar32) {
                        ppppplVar45 = ppppplVar32;
                      }
                      uVar21 = ppppplVar45 == ppppplVar43;
                      if (ppppplVar45 < ppppplVar43) {
                        if (ppppplVar45 != (long *****)0x0) goto code_r0x000107815ff8;
                        func_0x000107820208(ppppplVar4,0);
                        ppppplVar43 = (long *****)0x0;
                        ppppplVar4[1] = (long ****)0x0;
                      }
                      else {
                        ppppplVar43 = (long *****)ppppplVar4[1];
                      }
                    }
                    func_0x0001078225d8();
                    if ((bool)uVar21) {
                      ppppplVar45 = (long *****)(extraout_x8_26 & (ulong)ppppplVar47);
                    }
                    else {
                      ppppplVar45 = ppppplVar47;
                      if (ppppplVar43 <= ppppplVar47) {
                        uVar44 = 0;
                        if (ppppplVar43 != (long *****)0x0) {
                          uVar44 = (ulong)ppppplVar47 / (ulong)ppppplVar43;
                        }
                        ppppplVar45 = (long *****)((long)ppppplVar47 - uVar44 * (long)ppppplVar43);
                      }
                    }
                  }
                  else {
                    param_2 = (float)ppppplVar43;
                    func_0x000107822234(CONCAT17(in_register_00005007,
                                                 CONCAT16(in_register_00005006,
                                                          CONCAT15(in_register_00005005,
                                                                   CONCAT14(in_register_00005004,
                                                                            CONCAT13(
                                                  in_register_00005003,
                                                  CONCAT12(in_register_00005002,
                                                           CONCAT11(in_register_00005001,in_b0))))))
                                                ),*(undefined4 *)(extraout_x9 + 0x20));
                    if ((bool)uVar21) goto code_r0x000107815fac;
                  }
                  pppplVar24 = *ppppplVar4;
                  ppplVar51 = pppplVar24[(long)ppppplVar45];
                  if (ppplVar51 == (long ***)0x0) {
                    *pppplStack_990 = (long ***)*ppppplVar42;
                    *ppppplVar42 = pppplStack_990;
                    pppplVar24[(long)ppppplVar45] = (long ***)ppppplVar42;
                    if ((long ****)*pppplStack_990 != (long ****)0x0) {
                      ppppplVar47 = (long *****)(*pppplStack_990)[1];
                      if (((ulong)ppppplVar43 & (long)ppppplVar43 - 1U) == 0) {
                        ppppplVar47 = (long *****)((ulong)ppppplVar47 & (long)ppppplVar43 - 1U);
                      }
                      else if (ppppplVar43 <= ppppplVar47) {
                        func_0x000107822b90();
                        pppplStack_990 = (long ****)extraout_x8_27;
                        pppplVar24 = extraout_x9_04;
                        ppppplVar47 = extraout_x10_01;
                      }
                      pppplVar24[(long)ppppplVar47] = (long ***)pppplStack_990;
                    }
                  }
                  else {
                    *pppplStack_990 = (long ***)*ppplVar51;
                    *ppplVar51 = (long **)pppplStack_990;
                  }
                  pppplStack_990 = (long ****)0x0;
                  ppppplVar4[3] = (long ****)((long)ppppplVar4[3] + 1);
                  func_0x0001074d2d14(&pppplStack_990);
                  func_0x000107822374();
                  *puVar2 = *puVar2 + 1;
                  ppppplVar43 = (long *****)(ulong)uVar40;
                }
code_r0x000107816210:
                *puVar28 = *puVar28 + 1;
                ppppplVar47 = (long *****)&uStack_230;
                goto code_r0x000107815dc8;
              }
              func_0x00010782229c();
              pppplStack_990 = (long ****)ppppplVar43;
              pppplStack_988 = (long ****)extraout_x8_10;
              if (extraout_x8_10 != (long *****)0x0) {
                do {
                  func_0x000107821f0c();
                } while (extraout_w10_02 != 0);
              }
              func_0x0001078229b8();
              (*extraout_x8_11)();
              func_0x000107822df8();
              func_0x00010782229c();
              pppplStack_d50 = (long ****)ppppplVar43;
              ppplStack_d48 = (long ***)extraout_x8_12;
              if (extraout_x8_12 != (long ****)0x0) {
                do {
                  func_0x000107821f0c();
                } while (extraout_w10_03 != 0);
              }
              func_0x0001074d4d04(auStack_1f0);
              uStack_1b8 = 0;
              func_0x000104c2fe00(auStack_1b0,plVar50 + 4);
              func_0x000104c2fe00(auStack_178,plVar50 + 0xb);
              uStack_140 = 7;
              uStack_138 = 0;
              uStack_130 = 0;
              func_0x000107269c1c(&uStack_138);
              uStack_128 = 0;
              uStack_118 = 0;
              func_0x000107822410();
              func_0x000107822950();
              func_0x000107822ce0();
              ppppplVar47 = &pppplStack_990;
              func_0x000107330fdc();
            }
code_r0x000107815618:
            ppplVar49 = (long ***)&uStack_230;
            ppppplVar43 = (long *****)(ulong)uVar40;
          }
        }
        else {
          func_0x00010782229c();
          uStack_230 = ppppplVar47;
          uStack_228 = extraout_x8_01;
          if (extraout_x8_01 != (long *****)0x0) {
            do {
              func_0x000107821f0c();
            } while (extraout_w10 != 0);
          }
          func_0x0001078229b8();
          (*extraout_x8_02)();
          func_0x00010726236c(&pppplStack_990);
          func_0x000107330fdc(&uStack_230);
          if (cStack_958 == '\x01') {
            func_0x00010724ef84(&pppplStack_d50,&pppplStack_990);
          }
          else {
            func_0x00010002b838(&pppplStack_d50,"");
          }
          pppplVar24 = (long ****)ppplStack_d48;
          if (-1 < (long)ppplStack_d40) {
            pppplVar24 = (long ****)((ulong)ppplStack_d40 >> 0x38);
          }
          if (pppplVar24 == (long ****)0x0) {
            func_0x000107822bb4();
            uVar44 = extraout_x8_09;
          }
          else {
            ppppplVar43 = (long *****)ppppplVar4[1];
            if ((ppppplVar43 != (long *****)0x0) && (ppppplVar4[3] != (long ****)0x0)) {
              ppppplVar47 = ppppplVar4 + 3;
              func_0x000100102e7c(ppppplVar47,&pppplStack_d50);
              ppppplVar45 = (long *****)((long)ppppplVar43 + -1);
              if (((ulong)ppppplVar43 & (ulong)ppppplVar45) == 0) {
                pppplStack_d70 = (long ****)((ulong)ppppplVar47 & (ulong)ppppplVar45);
              }
              else {
                pppplStack_d70 = (long ****)ppppplVar47;
                if (ppppplVar43 <= ppppplVar47) {
                  uVar44 = 0;
                  if (ppppplVar43 != (long *****)0x0) {
                    uVar44 = (ulong)ppppplVar47 / (ulong)ppppplVar43;
                  }
                  pppplStack_d70 = (long ****)((long)ppppplVar47 - uVar44 * (long)ppppplVar43);
                }
              }
              ppplVar49 = (long ***)0x0;
              ppplVar51 = (*ppppplVar4)[(long)pppplStack_d70];
              if ((*ppppplVar4)[(long)pppplStack_d70] != (long ***)0x0) {
                do {
                  while( true ) {
                    ppplVar49 = (long ***)*ppplVar51;
                    if (ppplVar49 == (long ***)0x0) goto code_r0x000107815cac;
                    ppppplVar32 = (long *****)ppplVar49[1];
                    ppplVar51 = ppplVar49;
                    if (ppppplVar47 != ppppplVar32) break;
                    ppplVar27 = ppplVar49 + 2;
                    func_0x0001000e107c(ppplVar27,&pppplStack_d50);
                    if (((ulong)ppplVar27 & 1) != 0) {
                      func_0x000107822bb4();
                      func_0x000107822aa4();
                      if ((extraout_x8_18 & 1) == 0) goto code_r0x000107815dc0;
                      bVar22 = true;
                      goto code_r0x000107815cbc;
                    }
                  }
                  if (((ulong)ppppplVar43 & (ulong)ppppplVar45) == 0) {
                    ppppplVar32 = (long *****)((ulong)ppppplVar32 & (ulong)ppppplVar45);
                  }
                  else if (ppppplVar43 <= ppppplVar32) {
                    uVar44 = 0;
                    if (ppppplVar43 != (long *****)0x0) {
                      uVar44 = (ulong)ppppplVar32 / (ulong)ppppplVar43;
                    }
                    ppppplVar32 = (long *****)((long)ppppplVar32 - uVar44 * (long)ppppplVar43);
                  }
                } while (ppppplVar32 == (long *****)pppplStack_d70);
              }
            }
code_r0x000107815cac:
            func_0x000107822bb4();
            func_0x000107822aa4();
            uVar44 = extraout_x8_13;
          }
          bVar22 = uVar39 == 0;
          if ((uVar44 & 1) == 0) {
code_r0x000107815cbc:
            pppplStack_9a0 = (long ****)(double)(float)*(undefined8 *)(lVar38 + 0x10);
            dStack_998 = (double)(float)((ulong)*(undefined8 *)(lVar38 + 0x10) >> 0x20);
            ppppplVar47 = (long *****)&uStack_230;
            func_0x000107822d68(ppppplVar47,&pppplStack_9a0);
            dVar12 = (double)CONCAT44(uStack_214,fStack_218);
            if (((dVar12 <= 0.0) || (1.0 < ABS((float)((double)uStack_230 / dVar12)))) ||
               (uVar21 = ABS((float)((double)uStack_228 / dVar12)) == 1.0,
               1.0 < ABS((float)((double)uStack_228 / dVar12)))) {
              func_0x00010782229c();
              pppplStack_9a0 = (long ****)ppppplVar47;
              dStack_998 = extraout_x8_14;
              if (extraout_x8_14 != 0.0) {
                do {
                  func_0x000107821f0c();
                } while (extraout_w10_04 != 0);
              }
              func_0x0001078229b8();
              (*extraout_x8_15)();
              func_0x000107822df8();
              func_0x00010782229c();
              apppplStack_9b0[0] = (long ****)ppppplVar47;
              if (extraout_x8_16 != 0) {
                do {
                  func_0x000107821f0c();
                } while (extraout_w10_05 != 0);
              }
              func_0x000107822ec0();
              func_0x0001078229d4();
              func_0x000107822ea0();
              uStack_140 = 8;
              func_0x00010782229c();
              apppplStack_d60[0] = (long ****)ppppplVar47;
              if (extraout_x8_17 != 0) {
                do {
                  func_0x000107821f0c();
                } while (extraout_w10_06 != 0);
              }
              (*(code *)(*ppppplVar47)[4])();
              func_0x000107268400(ppplVar49 + 0x1f,ppppplVar47);
              func_0x00010782285c();
              func_0x000107822410();
            }
            else {
              if ((bVar22) || (uVar21 = *puVar28 == uVar39, *puVar28 < uVar39)) {
                func_0x000107822374();
                func_0x00010724b3d8(&pppplStack_990);
                bStack_d78 = *(byte *)(lVar38 + 0x655);
                goto code_r0x000107815604;
              }
              func_0x00010782229c();
              pppplStack_9a0 = (long ****)ppppplVar47;
              dStack_998 = extraout_x8_19;
              if (extraout_x8_19 != 0.0) {
                do {
                  func_0x000107821f0c();
                } while (extraout_w10_07 != 0);
              }
              func_0x0001078229b8();
              (*extraout_x8_20)();
              func_0x000107822df8();
              func_0x00010782229c();
              apppplStack_9b0[0] = (long ****)ppppplVar47;
              if (extraout_x8_21 != 0) {
                do {
                  func_0x000107821f0c();
                } while (extraout_w10_08 != 0);
              }
              func_0x000107822ec0();
              func_0x0001078229d4();
              func_0x000107822ea0();
              uStack_140 = 9;
              func_0x00010782229c();
              apppplStack_d60[0] = (long ****)ppppplVar47;
              if (extraout_x8_22 != 0) {
                do {
                  func_0x000107821f0c();
                } while (extraout_w10_09 != 0);
              }
              (*(code *)(*ppppplVar47)[4])();
              func_0x000107268400(ppplVar49 + 0x1f,ppppplVar47);
              func_0x00010782285c();
              func_0x000107822410();
            }
            func_0x000107822950();
            func_0x000107330fdc(apppplStack_d60);
            func_0x000107330fdc(apppplStack_9b0);
            func_0x000107330fdc(&pppplStack_9a0);
          }
code_r0x000107815dc0:
          func_0x000107822374();
          ppppplVar47 = &pppplStack_990;
code_r0x000107815dc8:
          func_0x00010724b3d8();
        }
code_r0x000107815dcc:
        pppplStack_d70 = (long ****)((long)pppplStack_d70 + 1);
      } while( true );
    }
    uVar8 = (long)(*puVar28 - lVar52) / 0xb0;
    uVar36 = uVar8 * 2;
    if (uVar36 < uVar39 || uVar36 - uVar39 == 0) {
      uVar36 = uVar39;
    }
    if (0xba2e8ba2e8ba2d < uVar8) {
      uVar36 = 0x1745d1745d1745d;
    }
    puStack_68 = puVar28;
    if (uVar36 == 0) {
      pppplVar24 = (long ****)0x0;
    }
    else {
      if (0x1745d1745d1745d < uVar36) goto LAB_1078152cc;
      pppplVar24 = (long ****)(uVar36 * 0xb0);
      __Znwm();
    }
    lVar38 = (long)pppplVar24 + (uVar44 - lVar52);
    ppplStack_88 = (long ***)pppplVar24;
    ppplStack_80 = (long ***)lVar38;
    ppplStack_78 = (long ***)lVar38;
    ppplStack_70 = (long ***)(pppplVar24 + uVar36 * 0x16);
    func_0x000107822e3c(lVar38);
    puVar46 = (undefined8 *)*param_4;
    puVar3 = (undefined8 *)param_4[1];
    lVar29 = (((long)puVar3 - (long)puVar46) / -0xb0) * 0xb0;
    lVar52 = (long)pppplVar24 + ((uVar44 + lVar29) - lVar52) + 0x80;
    for (puVar26 = puVar46; puVar26 != puVar3; puVar26 = puVar26 + 0x16) {
      uVar14 = puVar26[1];
      uVar11 = *puVar26;
      *(undefined8 *)(lVar52 + -0x70) = puVar26[2];
      *(undefined8 *)(lVar52 + -0x78) = uVar14;
      *(undefined8 *)(lVar52 + -0x80) = uVar11;
      puVar26[1] = 0;
      puVar26[2] = 0;
      *puVar26 = 0;
      *(undefined4 *)(lVar52 + -0x68) = *(undefined4 *)(puVar26 + 3);
      *(undefined8 *)(lVar52 + -0x58) = 0;
      *(undefined8 *)(lVar52 + -0x50) = 0;
      *(undefined8 *)(lVar52 + -0x60) = 0;
      uVar11 = puVar26[4];
      *(undefined8 *)(lVar52 + -0x58) = puVar26[5];
      *(undefined8 *)(lVar52 + -0x60) = uVar11;
      *(undefined8 *)(lVar52 + -0x50) = puVar26[6];
      puVar26[5] = 0;
      puVar26[6] = 0;
      puVar26[4] = 0;
      *(undefined1 *)(lVar52 + -0x48) = *(undefined1 *)(puVar26 + 7);
      *(undefined8 *)(lVar52 + -0x38) = 0;
      *(undefined8 *)(lVar52 + -0x30) = 0;
      *(undefined8 *)(lVar52 + -0x40) = 0;
      uVar11 = puVar26[8];
      *(undefined8 *)(lVar52 + -0x38) = puVar26[9];
      *(undefined8 *)(lVar52 + -0x40) = uVar11;
      *(undefined8 *)(lVar52 + -0x30) = puVar26[10];
      puVar26[8] = 0;
      puVar26[9] = 0;
      puVar26[10] = 0;
      uVar14 = puVar26[0xc];
      uVar11 = puVar26[0xb];
      uVar34 = puVar26[0xf];
      uVar54 = puVar26[0xd];
      *(undefined8 *)(lVar52 + -0x10) = puVar26[0xe];
      *(undefined8 *)(lVar52 + -0x18) = uVar54;
      *(undefined8 *)(lVar52 + -8) = uVar34;
      *(undefined8 *)(lVar52 + -0x20) = uVar14;
      *(undefined8 *)(lVar52 + -0x28) = uVar11;
      func_0x0001072638b4(lVar52,puVar26 + 0x10);
      *(undefined4 *)(lVar52 + 0x28) = *(undefined4 *)(puVar26 + 0x15);
      lVar52 = lVar52 + 0xb0;
    }
    for (; puVar46 != puVar3; puVar46 = puVar46 + 0x16) {
      func_0x00010781c404(puVar46);
    }
    lVar52 = lVar38 + 0xb0;
    ppplStack_88 = (long ***)*param_4;
    *param_4 = lVar38 + lVar29;
    param_4[1] = lVar52;
    ppplStack_70 = (long ***)param_4[2];
    param_4[2] = (long)(pppplVar24 + uVar36 * 0x16);
    ppplStack_80 = ppplStack_88;
    ppplStack_78 = ppplStack_88;
    func_0x00010781c42c(&ppplStack_88);
  }
  param_4[1] = lVar52;
  return;
}



/* Entry: 1078175f0; end: 10781766b;  */

ulong * FUN_1078175f0(double param_1,ulong *param_2,ulong *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_3[5] + 0x4ac) != '\x01') {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    func_0x00010745c474();
    return param_2;
  }
  func_0x00010745bcec(param_2,(float)param_1,param_3);
  puVar1 = (undefined8 *)*param_2;
  puVar2 = (undefined8 *)param_2[1];
  if (puVar1 != puVar2) {
    for (; puVar2 = puVar2 + -1, puVar1 < puVar2; puVar1 = puVar1 + 1) {
      uVar3 = *puVar1;
      *puVar1 = *puVar2;
      *puVar2 = uVar3;
    }
  }
  return param_3;
}



/* Entry: 10781906c; end: 1078190ef;  */

void FUN_10781906c(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x18);
  lVar1 = *(long *)(param_1 + 0x88);
  for (lVar2 = *(long *)(param_1 + 0x80); lVar2 != lVar1; lVar2 = lVar2 + 0xa8) {
    if (((*(byte *)(lVar2 + 0x78) & 1) == 0) && (*(char *)(lVar2 + 0x8d) == '\x01')) {
      for (uVar3 = 0; uVar3 < (ulong)(*(long *)(lVar2 + 0x68) - *(long *)(lVar2 + 0x60) >> 2);
          uVar3 = uVar3 + 1) {
        func_0x00010782265c(*(undefined4 *)(lVar2 + 0x90));
        func_0x00010740b938();
      }
    }
    else {
      func_0x0001078229ac(*(undefined8 *)(lVar2 + 0x68));
      func_0x00010740b970();
    }
  }
  return;
}



/* Entry: 107819fd4; end: 10781a00f;  */

void FUN_107819fd4(long param_1,long param_2)

{
  if ((*(byte *)(param_2 + 0x138) & 1) == 0) {
    func_0x000107822724(*(undefined8 *)(param_1 + 0xa38));
  }
  return;
}



/* Entry: 10781a5dc; end: 10781a63f;  */

undefined1 FUN_10781a5dc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1130);
}



/* Entry: 10781b1dc; end: 10781b2a7;  */

bool FUN_10781b1dc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  uint param_5,undefined8 *param_6)

{
  ulong uVar1;
  
  if (*(char *)(param_3 + 0x1438) == '\x01') {
    if (param_5 == **(byte **)*param_6) {
      uVar1 = param_3 + 0x40;
      func_0x000107822d28(0,0,uVar1,param_4,param_5,param_3 + 0x13d8);
      if ((uVar1 & 0xff) != 0) {
        return true;
      }
    }
    if (*(long *)(param_3 + 0x1440) != 0) {
      return false;
    }
  }
  uVar1 = param_3 + 0x40;
  func_0x000107822d28(param_1,param_2,uVar1,param_4);
  return (uVar1 & 0xff) == 0;
}



/* Entry: 10781b740; end: 10781ba23;  */

/* WARNING: Possible PIC construction at 0x00010781b848: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010781b8bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010781b84c) */
/* WARNING: Removing unreachable block (ram,0x00010781b860) */
/* WARNING: Removing unreachable block (ram,0x00010781b8c0) */

void FUN_10781b740(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
                  ulong *param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  long *plVar3;
  undefined8 *extraout_x8;
  undefined8 extraout_x8_00;
  ulong uStack_2e0;
  ulong uStack_2d8;
  undefined1 uStack_2d0;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  undefined1 auStack_2a0 [16];
  long *plStack_290;
  undefined8 uStack_288;
  undefined4 uStack_278;
  undefined **ppuStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined4 uStack_250;
  undefined4 uStack_248;
  undefined1 uStack_244;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined4 auStack_220 [6];
  undefined4 uStack_208;
  undefined **ppuStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1d8;
  undefined1 uStack_1d4;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  ulong auStack_118 [33];
  undefined8 uStack_10;
  
  func_0x0001078227a0();
  func_0x000107821e20();
  plStack_290._0_4_ = 0x8c;
  uStack_278 = 0;
  uStack_260 = 0;
  uStack_258 = 0;
  ppuStack_270 = &PTR_DAT_110996720;
  uStack_268 = 0;
  uStack_250 = 0x8c;
  uStack_248 = 0;
  uStack_244 = 1;
  uStack_238 = 0;
  uStack_230 = 0;
  uStack_240 = 0;
  uStack_10 = extraout_x8_00;
  func_0x00010743cc34(auStack_220,&plStack_290,7);
  func_0x00010743d7bc(auStack_118,auStack_220);
  func_0x000107288cd8(auStack_220);
  func_0x000107262330(&plStack_290);
  auStack_220[0] = 0x8d;
  uStack_208 = 0;
  uStack_1f0 = 0;
  uStack_1e8 = 0;
  ppuStack_200 = &PTR_DAT_110996720;
  uStack_1f8 = 0;
  uStack_1e0 = 0x8d;
  uStack_1d8 = 0;
  uStack_1d4 = 1;
  uStack_1c8 = 0;
  uStack_1c0 = 0;
  uStack_1d0 = 0;
  plStack_290 = (long *)CONCAT44(plStack_290._4_4_,1);
  uStack_288 = (ulong)uStack_288._4_4_ << 0x20;
  func_0x000107823018();
  func_0x00010743fa9c(param_6,auStack_220,&plStack_290,auStack_2a0,7);
  func_0x000107822d8c();
  if ((char)param_5[2] == '\x01') {
    __ZNSt3__16chrono12steady_clock3nowEv();
  }
  else {
    func_0x000107411660(auStack_220,*param_1 + 0xeb8);
    lStack_2a8 = param_1[1];
    lStack_2b0 = *param_1;
    *param_1 = 0;
    param_1[1] = 0;
    uStack_2b8 = param_2[1];
    uStack_2c0 = *param_2;
    *param_2 = 0;
    param_2[1] = 0;
    uStack_2e0 = uStack_2e0 & 0xffffffffffffff00;
    uStack_2d0 = (char)param_5[2] == '\x01';
    if ((bool)uStack_2d0) {
      uStack_2d8 = param_5[1];
      uStack_2e0 = *param_5;
      *param_5 = 0;
      param_5[1] = 0;
    }
    func_0x00010781b548(&plStack_290,&lStack_2b0,&uStack_2c0,&uStack_2e0,param_6);
    func_0x0001078221e0();
    func_0x0001078221d8();
    func_0x0001074fafd0(&lStack_2b0);
    puVar1 = (undefined8 *)param_4[1];
    for (param_4 = (undefined8 *)*param_4; uVar2 = param_4 == puVar1, !(bool)uVar2;
        param_4 = param_4 + 1) {
      (**(code **)(*(long *)*param_4 + 0xb0))();
    }
    plVar3 = plStack_290;
    (**(code **)(*plStack_290 + 0x10))(plStack_290,auStack_220,param_3);
    extraout_x8[1] = uStack_288;
    *extraout_x8 = plStack_290;
    plStack_290 = (long *)0x0;
    uStack_288 = 0;
    *(byte *)(extraout_x8 + 2) = (byte)plVar3 & 1;
    func_0x0001074f6448(&plStack_290);
    func_0x000107410dc8(auStack_220);
    func_0x00010743d7e4(auStack_118);
    func_0x000107821dac(uStack_10);
    if ((bool)uVar2) {
      return;
    }
    ___stack_chk_fail();
    func_0x000107822d8c();
    param_5 = auStack_118;
    func_0x00010743d7e4();
    func_0x000107822028();
  }
  if ((param_5[2] & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
  return;
}



/* Entry: 10781bae8; end: 10781bb23;  */

void FUN_10781bae8(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_1109e0150;
  *(undefined2 *)(param_2 + 1) = *(undefined2 *)(param_1 + 8);
  return;
}



/* Entry: 10781bc1c; end: 10781bc53;  */

void FUN_10781bc1c(long param_1)

{
  func_0x00010781be40(param_1 + 0x110);
  func_0x00010781bea4(param_1 + 0xf0);
  func_0x00010781bee0(param_1 + 0xd0);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x88);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 0x18);
  return;
}



/* Entry: 10781bd5c; end: 10781bd7b;  */

void FUN_10781bd5c(undefined8 *param_1)

{
  func_0x0001078228c4();
  *param_1 = &PTR_DAT_1109e0300;
  return;
}



/* Entry: 10781bf34; end: 10781bf6b;  */

void FUN_10781bf34(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 in_register_00005008;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001078228a8();
  *param_3 = 0;
  param_3[1] = 0;
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  param_2[1] = in_register_00005008;
  *param_2 = param_1;
  func_0x0001074f6424(&uStack_30);
  return;
}



/* Entry: 10781c3f8; end: 10781c403;  */

void FUN_10781c3f8(long param_1)

{
  func_0x000107822090();
  func_0x0001074cfe98(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 10781cb70; end: 10781cba7;  */

void FUN_10781cb70(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107822ae4();
  if (unaff_x20 != 0) {
    if (*(char *)(unaff_x19 + 0x10) == '\x01') {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(unaff_x20 + 0x10);
    }
    func_0x0001078224e8();
  }
  return;
}



/* Entry: 10781ce40; end: 10781cf2f;  */

bool FUN_10781ce40(undefined8 param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  long unaff_x19;
  long unaff_x20;
  long lVar7;
  long *plVar8;
  
  func_0x0001078220d8();
  if ((*(char *)(param_2 + 0x100) == '\x01') &&
     (func_0x00010781cf64(unaff_x19 + 0xe8), *(char *)(unaff_x19 + 0xf8) == '\x01')) {
    lVar7 = *(long *)(unaff_x20 + 8);
    func_0x00010781cf64(unaff_x19 + 0xe8);
    puVar6 = *(ulong **)(lVar7 + 0x5b8);
    uVar1 = puVar6[1];
    for (uVar5 = *puVar6; uVar5 != uVar1; uVar5 = uVar5 + 0x38) {
      lVar7 = **(long **)(unaff_x19 + 0xe8);
      lVar2 = (*(long **)(unaff_x19 + 0xe8))[1];
      while (lVar7 != lVar2) {
        uVar4 = uVar5;
        func_0x000104c32db4(uVar5,lVar7);
        lVar7 = lVar7 + 0x38;
        if ((uVar4 & 1) != 0) {
          return false;
        }
      }
    }
  }
  lVar7 = *(long *)(*(long *)(unaff_x20 + 8) + 0x5d0);
  if (*(long *)(lVar7 + 0x18) == 0) {
    bVar3 = true;
  }
  else {
    plVar8 = (long *)(lVar7 + 0x10);
    do {
      plVar8 = (long *)*plVar8;
      bVar3 = plVar8 == (long *)0x0;
      if (plVar8 == (long *)0x0) {
        return true;
      }
      uVar5 = unaff_x19 + 0x80;
      func_0x000107262364(uVar5,plVar8 + 2);
      if ((uVar5 & 1) != 0) {
        return bVar3;
      }
      lVar7 = unaff_x19 + 0x90;
      func_0x000107262364(lVar7,plVar8 + 2);
    } while ((int)lVar7 == 0);
  }
  return bVar3;
}



/* Entry: 10781d020; end: 10781d087;  */

/* WARNING: Possible PIC construction at 0x00010781d034: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010781d038) */
/* WARNING: Removing unreachable block (ram,0x00010781d04c) */
/* WARNING: Removing unreachable block (ram,0x00010781d03c) */

void FUN_10781d020(long param_1)

{
  func_0x0001078220d8();
  if (*(long **)(param_1 + 0x20) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001072b04ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x20) + 0x30))();
    return;
  }
  func_0x000104bfeb48();
  return;
}



/* Entry: 10781d958; end: 10781d96f;  */

void FUN_10781d958(long *param_1,long param_2)

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



/* Entry: 10781dbf4; end: 10781dc1b;  */

long FUN_10781dbf4(undefined8 param_1,long param_2)

{
  func_0x000104c318bc();
  func_0x0001078225fc();
  func_0x0001072ba1a8(param_2 + 0x38);
  func_0x000107822ee4();
  return param_2;
}



/* Entry: 10781de44; end: 10781de4b;  */

long FUN_10781de44(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x30);
  if (lVar1 == -1) {
    lVar1 = param_2;
    func_0x000104c2fcd4();
    func_0x000104c2fcf0(param_2);
    func_0x0001001030f4(lVar1,lVar1 + param_2);
    func_0x000104c343b0();
    func_0x000104c2ffc0();
  }
  return lVar1;
}



/* Entry: 10781e28c; end: 10781e397;  */

long * FUN_10781e28c(long *param_1,long *param_2)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  long unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x25;
  
  bVar3 = param_2 <= param_1;
  bVar4 = param_1 == param_2;
  if (!bVar4) {
    func_0x0001078227f8();
    if (!bVar3 || bVar4) {
      unaff_x22 = param_1[1];
      uVar6 = unaff_x22 - unaff_x23;
      if (uVar6 < unaff_x21) {
        if (unaff_x22 != unaff_x23) {
          func_0x000107822dec();
          unaff_x22 = param_1[1];
        }
        lVar1 = unaff_x25 - (unaff_x20 + uVar6);
        if (lVar1 != 0) {
          func_0x000107822904(unaff_x22);
          _memmove();
        }
        unaff_x22 = unaff_x22 + lVar1;
      }
      else {
        if (unaff_x25 != unaff_x20) {
          func_0x000107822110();
        }
        unaff_x22 = unaff_x23 + unaff_x21;
      }
    }
    else {
      if (unaff_x23 != 0) {
        func_0x000107822d80();
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
      }
      plVar5 = param_1;
      func_0x000107408b4c(param_1,(long)unaff_x21 / 0xc);
      if ((long *)0x1555555555555555 < plVar5) {
        func_0x000107408bc4();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10781e394);
        (*pcVar2)();
      }
      func_0x000107408c04();
      *param_1 = unaff_x22;
      param_1[1] = unaff_x22;
      param_1[2] = unaff_x22 + (long)plVar5 * 0xc;
      if (unaff_x25 != unaff_x20) {
        func_0x000107822110(unaff_x22);
      }
      unaff_x22 = unaff_x22 + unaff_x21;
    }
    param_1[1] = unaff_x22;
  }
  return param_1;
}



/* Entry: 10781e77c; end: 10781e83f;  */

bool FUN_10781e77c(long *param_1,long *param_2)

{
  bool bVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  float fVar5;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  if (param_1[0xe0] != param_2[0xe0]) {
    return (ulong)param_1[0xe0] < (ulong)param_2[0xe0];
  }
  if (*(byte *)(param_1 + 0xdf) == *(byte *)(param_2 + 0xdf)) {
    if (*(int *)((long)param_1 + 0x6fc) == *(int *)((long)param_2 + 0x6fc)) {
      lVar4 = *param_1;
      fVar5 = *(float *)(*param_2 + 0x14);
      bVar1 = *(float *)(lVar4 + 0x14) < fVar5;
      if ((*(float *)(lVar4 + 0x14) == fVar5) &&
         (fVar5 = *(float *)(*param_2 + 0x10), bVar1 = *(float *)(lVar4 + 0x10) < fVar5,
         *(float *)(lVar4 + 0x10) == fVar5)) {
        puVar2 = &uStack_21;
        func_0x0001073ecca0(puVar2,lVar4 + 0x5a0);
        puVar3 = &uStack_22;
        func_0x0001073ecca0(puVar3,*param_2 + 0x5a0);
        bVar1 = puVar2 < puVar3;
      }
    }
    else {
      bVar1 = *(int *)((long)param_2 + 0x6fc) < *(int *)((long)param_1 + 0x6fc);
    }
  }
  else {
    bVar1 = *(byte *)(param_2 + 0xdf) < *(byte *)(param_1 + 0xdf);
  }
  return bVar1;
}



/* Entry: 10781ef0c; end: 10781f097;  */

/* WARNING: Possible PIC construction at 0x00010781eff8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010781f0c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010781effc) */
/* WARNING: Removing unreachable block (ram,0x00010781f01c) */
/* WARNING: Removing unreachable block (ram,0x00010781f000) */
/* WARNING: Removing unreachable block (ram,0x00010781f014) */
/* WARNING: Removing unreachable block (ram,0x00010781f020) */
/* WARNING: Removing unreachable block (ram,0x00010781f084) */
/* WARNING: Removing unreachable block (ram,0x00010781f0c8) */
/* WARNING: Removing unreachable block (ram,0x00010781f0ec) */
/* WARNING: Removing unreachable block (ram,0x00010781f0e0) */
/* WARNING: Removing unreachable block (ram,0x000107821e30) */

void FUN_10781ef0c(long param_1,undefined8 *param_2)

{
  char cVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 extraout_x8;
  undefined8 uVar8;
  undefined8 *puVar9;
  code *extraout_x8_00;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *puVar10;
  undefined8 *unaff_x22;
  undefined8 ***pppuVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 **in_stack_00000050;
  undefined8 auStack_e50 [226];
  undefined8 *puStack_740;
  undefined8 *puStack_738;
  undefined8 *puStack_730;
  undefined8 **ppuStack_720;
  undefined *puStack_718;
  undefined1 auStack_710 [1800];
  undefined8 uStack_8;
  
  func_0x0001078227a0();
  puVar3 = (undefined8 *)auStack_710;
  func_0x0001078221e8();
  func_0x000107821e20();
  lVar2 = ((long)param_2 - param_1) / 0x708;
  uVar4 = lVar2 == 5;
  iVar5 = 1;
  uStack_8 = extraout_x8;
  switch(lVar2) {
  case 0:
  case 1:
    break;
  case 2:
    unaff_x20 = unaff_x20 + -0xe1;
    func_0x0001078224f0();
    if (iVar5 != 0) {
      func_0x000107822f04();
    }
    break;
  case 3:
    param_2 = (undefined8 *)(unaff_x19 + 0x708);
    func_0x00010781e840();
    break;
  case 4:
    param_2 = (undefined8 *)(unaff_x19 + 0x708);
    func_0x00010781e8b8();
    break;
  case 5:
    param_2 = (undefined8 *)(unaff_x19 + 0x708);
    func_0x00010781e918();
    break;
  default:
    param_2 = (undefined8 *)(unaff_x19 + 0x708);
    func_0x00010781e840();
    puVar9 = (undefined8 *)(unaff_x19 + 0x1518);
    puVar7 = (undefined8 *)(unaff_x19 + 0xe10);
    while (puVar10 = puVar9, uVar4 = puVar10 == unaff_x20, unaff_x22 = puVar7, !(bool)uVar4) {
      puVar9 = puVar10;
      func_0x000107822430();
      if ((int)puVar9 != 0) {
        func_0x000107822eac();
        puVar9 = puVar7 + 0xe1;
        puVar12 = (undefined *)0x10781effc;
        pppuVar11 = &stack0x00000050;
        goto code_r0x00010781f0f0;
      }
      unaff_x21 = puVar10;
      puVar7 = puVar10;
      puVar9 = puVar10 + 0xe1;
    }
  }
  puVar7 = param_2;
  puVar9 = (undefined8 *)0x1;
  func_0x000107821dac(uStack_8);
  if ((bool)uVar4) {
    func_0x00010782233c();
    return;
  }
  ___stack_chk_fail();
  puStack_718 = &UNK_10781f098;
  pppuVar11 = &ppuStack_720;
  puVar3 = auStack_e50;
  puVar10 = auStack_e50;
  puStack_740 = unaff_x22;
  puStack_738 = unaff_x21;
  puStack_730 = unaff_x20;
  ppuStack_720 = &stack0x00000050;
  func_0x0001078220d8();
  func_0x000107821e20();
  func_0x0001078220fc();
  func_0x00010782265c();
  puVar12 = &UNK_10781f0c8;
code_r0x00010781f0f0:
  *(undefined8 **)((long)puVar3 + -0x30) = unaff_x22;
  *(undefined8 **)((long)puVar3 + -0x28) = puVar10;
  *(undefined8 **)((long)puVar3 + -0x20) = unaff_x20;
  *(long *)((long)puVar3 + -0x18) = unaff_x19;
  *(undefined8 ****)((long)puVar3 + -0x10) = pppuVar11;
  *(undefined **)((long)puVar3 + -8) = puVar12;
  func_0x0001078221e8();
  *puVar9 = *puVar7;
  func_0x000107822eb8(puVar9 + 1,puVar7 + 1);
  *(undefined2 *)(unaff_x19 + 0x688) = *(undefined2 *)(unaff_x20 + 0xd1);
  lVar2 = unaff_x19 + 0x690;
  cVar1 = *(char *)(unaff_x19 + 0x6b0);
  if (cVar1 != *(char *)(unaff_x20 + 0xd6)) {
    if (cVar1 == '\0') {
      func_0x00010781bb90(lVar2,unaff_x20 + 0xd2);
    }
    else {
      func_0x0001077f828c();
      *(undefined1 *)(unaff_x19 + 0x6b0) = 0;
    }
    goto code_r0x00010781f1b0;
  }
  if (cVar1 == '\0') goto code_r0x00010781f1b0;
  lVar6 = *(long *)(unaff_x19 + 0x6a8);
  *(undefined8 *)(unaff_x19 + 0x6a8) = 0;
  if (lVar6 == lVar2) {
    uVar8 = 0x20;
code_r0x00010781f174:
    func_0x000107822498(uVar8);
  }
  else if (lVar6 != 0) {
    uVar8 = 0x28;
    goto code_r0x00010781f174;
  }
  puVar9 = (undefined8 *)unaff_x20[0xd5];
  if (puVar9 == (undefined8 *)0x0) {
    *(undefined8 *)(unaff_x19 + 0x6a8) = 0;
  }
  else if (puVar9 == unaff_x20 + 0xd2) {
    *(long *)(unaff_x19 + 0x6a8) = lVar2;
    func_0x000107822650(unaff_x20[0xd5]);
    (*extraout_x8_00)();
  }
  else {
    *(undefined8 **)(unaff_x19 + 0x6a8) = puVar9;
    unaff_x20[0xd5] = 0;
  }
code_r0x00010781f1b0:
  uVar13 = unaff_x20[0xd8];
  uVar8 = unaff_x20[0xd7];
  uVar15 = unaff_x20[0xda];
  uVar14 = unaff_x20[0xd9];
  uVar17 = unaff_x20[0xdc];
  uVar16 = unaff_x20[0xdb];
  uVar18 = *(undefined8 *)((long)unaff_x20 + 0x6e1);
  *(undefined8 *)(unaff_x19 + 0x6e9) = *(undefined8 *)((long)unaff_x20 + 0x6e9);
  *(undefined8 *)(unaff_x19 + 0x6e1) = uVar18;
  *(undefined8 *)(unaff_x19 + 0x6d0) = uVar15;
  *(undefined8 *)(unaff_x19 + 0x6c8) = uVar14;
  *(undefined8 *)(unaff_x19 + 0x6e0) = uVar17;
  *(undefined8 *)(unaff_x19 + 0x6d8) = uVar16;
  *(undefined8 *)(unaff_x19 + 0x6c0) = uVar13;
  *(undefined8 *)(unaff_x19 + 0x6b8) = uVar8;
  uVar8 = unaff_x20[0xdf];
  *(undefined8 *)(unaff_x19 + 0x700) = unaff_x20[0xe0];
  *(undefined8 *)(unaff_x19 + 0x6f8) = uVar8;
  return;
}



/* Entry: 10781f544; end: 10781f5db;  */

void FUN_10781f544(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long *unaff_x19;
  
  func_0x0001078230cc();
  while (func_0x00010782300c(), !(bool)in_ZR) {
    unaff_x19[2] = extraout_x8 + -0x708;
    FUN_1077f79bc(extraout_x8 + -0x78);
  }
  if (*unaff_x19 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 10781f860; end: 10781f883;  */

void FUN_10781f860(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001078223c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10781fb60; end: 10781fc63;  */

/* WARNING: Possible PIC construction at 0x00010781fba8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010781fc50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010781fbac) */
/* WARNING: Removing unreachable block (ram,0x00010781fbb0) */
/* WARNING: Removing unreachable block (ram,0x00010781fbc0) */
/* WARNING: Removing unreachable block (ram,0x00010781fbc8) */
/* WARNING: Removing unreachable block (ram,0x00010781fbd0) */
/* WARNING: Removing unreachable block (ram,0x00010781fbd8) */
/* WARNING: Removing unreachable block (ram,0x00010781fbe0) */
/* WARNING: Removing unreachable block (ram,0x00010781fbf8) */
/* WARNING: Removing unreachable block (ram,0x00010781fbe8) */
/* WARNING: Removing unreachable block (ram,0x00010781fbf0) */
/* WARNING: Removing unreachable block (ram,0x00010781fbfc) */
/* WARNING: Removing unreachable block (ram,0x00010781fc04) */
/* WARNING: Removing unreachable block (ram,0x00010781fc14) */
/* WARNING: Removing unreachable block (ram,0x00010781fc18) */
/* WARNING: Removing unreachable block (ram,0x00010781fc0c) */
/* WARNING: Removing unreachable block (ram,0x00010781fbb8) */
/* WARNING: Removing unreachable block (ram,0x00010781fc54) */

void FUN_10781fb60(long *param_1,long param_2)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar1;
  long extraout_x8;
  long *unaff_x19;
  
  func_0x000107822620();
  if ((bool)in_ZR) {
    unaff_x19 = (long *)0x2;
  }
  else {
    func_0x000107822584();
    if (!(bool)in_ZR) {
      func_0x00010782227c();
      unaff_x19 = param_1;
    }
  }
  func_0x000107822590();
  if (!(bool)in_CY || (bool)in_ZR) {
    if ((bool)in_CY) {
      return;
    }
    func_0x000107821dd8();
    if (((bool)in_CY) && (func_0x000107822560(), extraout_x8 == 0)) {
      func_0x000107821d54();
    }
    else {
      __ZNSt3__112__next_primeEm();
    }
    func_0x000107821ff0();
    if ((bool)in_CY) {
      return;
    }
    if (unaff_x19 == (long *)0x0) {
      func_0x000107822668();
      goto code_r0x00010781fc64;
    }
  }
  if ((ulong)unaff_x19 >> 0x3d == 0) {
    func_0x00010782224c();
    func_0x0001078225c0();
  }
  else {
    func_0x000104bd35f4();
  }
code_r0x00010781fc64:
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10781ff84; end: 10781ffe3;  */

/* WARNING: Possible PIC construction at 0x000107820044: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078200ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107820048) */
/* WARNING: Removing unreachable block (ram,0x00010782004c) */
/* WARNING: Removing unreachable block (ram,0x00010782005c) */
/* WARNING: Removing unreachable block (ram,0x000107820064) */
/* WARNING: Removing unreachable block (ram,0x00010782006c) */
/* WARNING: Removing unreachable block (ram,0x000107820074) */
/* WARNING: Removing unreachable block (ram,0x00010782007c) */
/* WARNING: Removing unreachable block (ram,0x000107820094) */
/* WARNING: Removing unreachable block (ram,0x000107820084) */
/* WARNING: Removing unreachable block (ram,0x00010782008c) */
/* WARNING: Removing unreachable block (ram,0x000107820098) */
/* WARNING: Removing unreachable block (ram,0x0001078200a0) */
/* WARNING: Removing unreachable block (ram,0x0001078200b0) */
/* WARNING: Removing unreachable block (ram,0x0001078200b4) */
/* WARNING: Removing unreachable block (ram,0x0001078200a8) */
/* WARNING: Removing unreachable block (ram,0x000107820054) */
/* WARNING: Removing unreachable block (ram,0x0001078200f0) */

void FUN_10781ff84(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  long lVar4;
  long lVar5;
  long extraout_x8;
  long *unaff_x19;
  undefined1 auStack_48 [40];
  
  uVar1 = param_1[2] - *param_1 >> 4;
  uVar2 = uVar1 <= param_2;
  uVar3 = param_2 == uVar1;
  if (!(bool)uVar2 || (bool)uVar3) {
    return;
  }
  if (param_2 >> 0x3c == 0) {
    func_0x00010781e480(auStack_48,param_2,param_1[1] - *param_1 >> 4);
    func_0x000107822438();
    func_0x000107822e6c();
    return;
  }
  func_0x00010781e474();
  lVar5 = (long)(64.0 / *(float *)(param_1 + 4));
  func_0x000107822620();
  if ((bool)uVar3) {
    unaff_x19 = (long *)0x2;
  }
  else {
    func_0x000107822584();
    if (!(bool)uVar3) {
      func_0x00010782227c();
      unaff_x19 = param_1;
    }
  }
  func_0x000107822590();
  if (!(bool)uVar2 || (bool)uVar3) {
    if ((bool)uVar2) {
      return;
    }
    func_0x000107821dd8();
    if (((bool)uVar2) && (func_0x000107822560(), extraout_x8 == 0)) {
      func_0x000107821d54();
    }
    else {
      __ZNSt3__112__next_primeEm();
    }
    func_0x000107821ff0();
    if ((bool)uVar2) {
      return;
    }
    if (unaff_x19 == (long *)0x0) {
      func_0x000107822668();
      goto code_r0x000107820100;
    }
  }
  if ((ulong)unaff_x19 >> 0x3d == 0) {
    func_0x00010782224c();
    func_0x0001078225c0();
  }
  else {
    func_0x000104bd35f4();
  }
code_r0x000107820100:
  lVar4 = *param_1;
  *param_1 = lVar5;
  if (lVar4 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078202c0; end: 107820433;  */

long FUN_1078202c0(undefined8 param_1,undefined8 param_2,long *param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 uVar3;
  long *plVar4;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar5;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar6;
  ulong uVar7;
  ulong extraout_x9;
  long extraout_x9_00;
  ulong extraout_x9_01;
  long *unaff_x20;
  long *plVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong unaff_x23;
  
  func_0x000107823144();
  uVar1 = *param_4;
  uVar11 = (ulong)uVar1;
  uVar10 = param_3[1];
  plVar4 = param_3;
  if (uVar10 != 0) {
    func_0x000107823000();
    uVar9 = (uint)uVar10;
    if ((bool)in_ZR) {
      unaff_x23 = (ulong)(uVar9 - 1 & uVar1);
    }
    else {
      in_NG = (long)(uVar10 - uVar11) < 0;
      unaff_x23 = uVar11;
      if (uVar10 <= uVar11) {
        uVar2 = 0;
        if (uVar9 != 0) {
          uVar2 = uVar1 / uVar9;
        }
        unaff_x23 = (ulong)(uVar1 - uVar2 * uVar9);
      }
    }
    plVar8 = *(long **)(*param_3 + unaff_x23 * 8);
    unaff_x20 = (long *)0x0;
    uVar5 = extraout_x8;
    if (plVar8 != (long *)0x0) {
      do {
        while( true ) {
          unaff_x20 = (long *)*plVar8;
          if (unaff_x20 == (long *)0x0) goto LAB_107820364;
          uVar7 = unaff_x20[1];
          plVar8 = unaff_x20;
          if (uVar7 != uVar11) break;
          in_NG = (int)(*(uint *)(unaff_x20 + 2) - uVar1) < 0;
          if (*(uint *)(unaff_x20 + 2) == uVar1) goto LAB_10782041c;
        }
        if ((uVar10 & uVar5) == 0) {
          uVar7 = uVar7 & uVar5;
        }
        else if (uVar10 <= uVar7) {
          func_0x000107822ff4();
          uVar5 = extraout_x8_00;
          uVar7 = extraout_x9;
        }
        in_NG = (long)(uVar7 - unaff_x23) < 0;
      } while (uVar7 == unaff_x23);
    }
  }
LAB_107820364:
  func_0x000107822388();
  func_0x000107822964();
  *(undefined1 *)((long)plVar4 + 0x14) = 0;
  func_0x000107821fc4();
  if ((uVar10 == 0) || (func_0x000107822234(param_1,param_2,(float)uVar10), (bool)in_NG)) {
    func_0x000107822b60();
    uVar3 = uVar10 == 3;
    func_0x000107821dc0();
    func_0x00010781d994(param_3);
    uVar10 = param_3[1];
    func_0x000107823000();
    if ((bool)uVar3) {
      unaff_x23 = (ulong)((int)uVar10 - 1U & uVar1);
    }
    else {
      unaff_x23 = uVar11;
      if (uVar10 <= uVar11) {
        uVar5 = 0;
        if (uVar10 != 0) {
          uVar5 = uVar11 / uVar10;
        }
        unaff_x23 = uVar11 - uVar5 * uVar10;
      }
    }
  }
  if (*(long *)(*param_3 + unaff_x23 * 8) == 0) {
    func_0x000107822b48();
    if (extraout_x9_00 != 0) {
      uVar11 = *(ulong *)(extraout_x9_00 + 8);
      lVar6 = extraout_x8_01;
      if ((uVar10 & uVar10 - 1) == 0) {
        uVar11 = uVar11 & uVar10 - 1;
      }
      else if (uVar10 <= uVar11) {
        func_0x000107822ff4();
        lVar6 = extraout_x8_02;
        uVar11 = extraout_x9_01;
      }
      *(long **)(lVar6 + uVar11 * 8) = unaff_x20;
    }
  }
  else {
    func_0x000107822538();
  }
  func_0x000107821f1c();
  func_0x00010781dab0();
LAB_10782041c:
  return (long)unaff_x20 + 0x14;
}



/* Entry: 107820b10; end: 107820b27;  */

void FUN_107820b10(long *param_1,long param_2)

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



/* Entry: 107821560; end: 107821597;  */

void FUN_107821560(long param_1)

{
  long unaff_x20;
  
  func_0x000107822680();
  while (param_1 != 0) {
    func_0x0001078224e0();
    param_1 = unaff_x20;
  }
  func_0x000107822330();
  if (param_1 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 10782175c; end: 1078217a7;  */

void FUN_10782175c(void)

{
  undefined1 in_ZR;
  
  func_0x000107821f50();
  if ((bool)in_ZR) {
    func_0x000107822484();
  }
  func_0x000107822470();
  func_0x00010781409c();
  func_0x0001078221e0();
  func_0x0001078221d8();
  func_0x000107822274();
  return;
}



/* Entry: 1078218e0; end: 1078218e7;  */

void FUN_1078218e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001078223c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 107821a90; end: 107821ac7;  */

undefined8 * FUN_107821a90(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1109e0590;
  func_0x000107821ae8(param_1 + 3);
  return param_1;
}



/* Entry: 107821ce8; end: 107821d0f;  */

void FUN_107821ce8(void)

{
  func_0x000107822c38();
  func_0x000107821d10();
  return;
}



/* Entry: 107824024; end: 107824043;  */

float FUN_107824024(float param_1,float param_2,float *param_3)

{
  return param_2 * param_3[1] + param_1 * *param_3;
}



/* Entry: 10782428c; end: 107824297;  */

long * FUN_10782428c(long *param_1,ulong param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  func_0x000107824400();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    if (0x2e8ba2e8ba2e8ba < param_2) {
      func_0x000104bd35f4();
      lVar1 = param_1[2];
      while (lVar1 != param_1[1]) {
        lVar1 = lVar1 + -0x58;
        param_1[2] = lVar1;
      }
      if (*param_1 != 0) {
        __ZdlPv();
      }
      return param_1;
    }
    lVar1 = param_2 * 0x58;
    __Znwm();
  }
  lVar2 = lVar1 + param_3 * 0x58;
  *param_1 = lVar1;
  param_1[1] = lVar2;
  param_1[2] = lVar2;
  param_1[3] = lVar1 + param_2 * 0x58;
  return param_1;
}



/* Entry: 107824f6c; end: 107824f7f;  */

void FUN_107824f6c(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  lVar5 = *plVar2;
  lVar1 = plVar2[1];
  lVar6 = param_2[1] + ((lVar1 - lVar5) / -0x30) * 0x30;
  lVar3 = lVar6;
  for (lVar4 = lVar5; lVar4 != lVar1; lVar4 = lVar4 + 0x30) {
    func_0x0001078250b4(lVar3,lVar4);
    lVar3 = lVar3 + 0x30;
  }
  for (; lVar5 != lVar1; lVar5 = lVar5 + 0x30) {
    func_0x000107405908(lVar5 + 0x10);
  }
  param_2[1] = lVar6;
  lVar4 = *plVar2;
  *plVar2 = lVar6;
  plVar2[1] = lVar4;
  param_2[1] = lVar4;
  lVar4 = plVar2[1];
  plVar2[1] = param_2[2];
  param_2[2] = lVar4;
  lVar4 = plVar2[2];
  plVar2[2] = param_2[3];
  param_2[3] = lVar4;
  *param_2 = param_2[1];
  return;
}



/* Entry: 107825388; end: 10782546b;  */

long FUN_107825388(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x30);
  if (lVar1 == -1) {
    lVar1 = param_2;
    func_0x000104c2fcd4();
    func_0x000104c2fcf0(param_2);
    func_0x0001001030f4(lVar1,lVar1 + param_2);
    func_0x000104c343b0();
    func_0x000104c2ffc0();
  }
  return lVar1;
}



/* Entry: 107825c34; end: 107826907;  */

void FUN_107825c34(undefined8 *param_1,undefined8 param_2,float param_3,float param_4,float param_5,
                  float param_6,long *param_7,long *param_8,undefined4 param_9,int param_10,
                  ulong *param_11,int param_12,undefined8 param_13,long param_14,long param_15,
                  long param_16,byte param_17)

{
  undefined2 *puVar1;
  undefined8 *puVar2;
  undefined2 uVar3;
  byte bVar4;
  float fVar5;
  undefined8 uVar6;
  long *plVar7;
  long ****pppplVar8;
  long ****pppplVar9;
  code *pcVar10;
  long *plVar11;
  long *****ppppplVar12;
  undefined8 *puVar13;
  long *****ppppplVar14;
  long *****ppppplVar15;
  long *****ppppplVar16;
  ulong uVar17;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar18;
  undefined8 *puVar19;
  long ****pppplVar20;
  undefined8 *puVar21;
  long *plVar22;
  undefined8 *puVar23;
  long *plVar24;
  long lVar25;
  undefined8 *puVar26;
  ulong uVar27;
  uint uVar28;
  long lVar29;
  long ****pppplVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar41;
  float fVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  long ***appplStack_170 [3];
  undefined1 auStack_158 [24];
  long lStack_140;
  long ****pppplStack_138;
  long ****pppplStack_130;
  long ****pppplStack_128;
  long ****pppplStack_120;
  long ****pppplStack_118;
  float fStack_110;
  undefined4 uStack_10c;
  long *plStack_108;
  ulong uStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e0;
  undefined2 *puStack_d8;
  long ****pppplStack_d0;
  long ****pppplStack_c8;
  long ****pppplStack_c0;
  float fStack_b0;
  ushort auStack_aa [5];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  
  pppplStack_128 = (long ****)0x0;
  pppplStack_120 = (long ****)0x0;
  pppplStack_118 = (long ****)0x0;
  lStack_140 = 0;
  pppplStack_138 = (long ****)0x0;
  pppplStack_130 = (long ****)0x0;
  dVar43 = (double)param_4;
  uVar27 = 0;
  while (func_0x000107827928(), uVar27 < extraout_x8) {
    plVar24 = param_8;
    func_0x000107405150(param_8,uVar27);
    plVar22 = param_8 + 6;
    func_0x0001074083ec(plVar22,(ulong)plVar24 & 0xffffffff);
    if ((char)*plVar22 == '\x01') {
      lVar29 = 1;
      do {
        lVar25 = lVar29;
        uVar17 = uVar27 + lVar25;
        func_0x000107827928();
        if (extraout_x8_00 <= uVar17) break;
        plVar11 = param_8;
        func_0x000107405150(param_8,uVar17);
        lVar29 = lVar25 + 1;
      } while ((int)plVar11 == (int)plVar24);
      func_0x0001077fc1d8(&uStack_f8,param_8,uVar27,lVar25);
      (**(code **)(*param_7 + 0x38))(&fStack_110,param_7,&uStack_f8,plVar22);
      pppplVar9 = pppplStack_138;
      plVar22 = (long *)CONCAT44(uStack_10c,fStack_110);
      lVar29 = (long)plStack_108 - (long)plVar22;
      if (0 < lVar29 >> 3) {
        if ((long)pppplStack_130 - (long)pppplStack_138 < lVar29) {
          plVar24 = &lStack_140;
          func_0x000107813204(plVar24,(lVar29 >> 3) + ((long)pppplStack_138 - lStack_140 >> 3));
          lVar25 = lStack_140;
          if (plVar24 == (long *)0x0) {
            ppppplVar12 = (long *****)0x0;
            pppplStack_c0 = (long ****)&pppplStack_130;
          }
          else {
            ppppplVar12 = &pppplStack_130;
            pppplStack_c0 = (long ****)&pppplStack_130;
            func_0x000107813288();
          }
          plVar11 = (long *)((long)ppppplVar12 + ((long)pppplVar9 - lVar25));
          lVar25 = (long)plVar11 + lVar29;
          plVar7 = plVar11;
          for (; lVar29 != 0; lVar29 = lVar29 + -8) {
            *plVar7 = *plVar22;
            plVar7 = plVar7 + 1;
            plVar22 = plVar22 + 1;
          }
          _memcpy(lVar25,pppplVar9,(long)pppplStack_138 - (long)pppplVar9);
          ppppplVar15 = (long *****)((long)pppplStack_138 + (lVar25 - (long)pppplVar9));
          lVar25 = (long)plVar11 - ((long)pppplVar9 - lStack_140);
          pppplStack_138 = pppplVar9;
          _memcpy(lVar25);
          lVar29 = lStack_140;
          lStack_140 = lVar25;
          pppplStack_138 = (long ****)ppppplVar15;
          pppplStack_130 = (long ****)(ppppplVar12 + (long)plVar24);
          func_0x0001078278e8(lVar29);
        }
        else {
          for (; plVar22 != plStack_108; plVar22 = plVar22 + 1) {
            *pppplStack_138 = (long ***)*plVar22;
            pppplStack_138 = pppplStack_138 + 1;
          }
        }
      }
      func_0x000107813318(&fStack_110);
      func_0x00010089ccb4(&uStack_f8);
      uVar27 = uVar17;
    }
    else {
      plVar24 = (long *)*param_8;
      if (-1 < *(char *)((long)param_8 + 0x17)) {
        plVar24 = param_8;
      }
      uVar3 = *(undefined2 *)((long)plVar24 + uVar27 * 2);
      if ((*(byte *)(plVar22 + 0xf) & 1) == 0) {
        lVar29 = param_14;
        func_0x000107827598(param_14,plVar22[2]);
        fVar31 = 0.0;
        if (param_14 + 8 != lVar29) {
          lVar25 = lVar29 + 0x28;
          func_0x0001078275e4(lVar25,uVar3);
          if ((lVar29 + 0x30 != lVar25) && (*(char *)(lVar25 + 0x38) == '\x01')) {
            dVar34 = (double)NEON_ucvtf((ulong)*(uint *)(*(long *)(lVar25 + 0x28) + 0x30));
            dVar34 = (double)plVar22[1] * dVar34;
            goto LAB_107825e90;
          }
        }
      }
      else {
        lVar29 = param_16;
        func_0x0001073f9894(param_16,plVar22 + 8);
        if (param_16 + 8 == lVar29) {
          fVar31 = 0.0;
        }
        else {
          fVar31 = (float)func_0x0001074827ac(lVar29 + 0x58);
          dVar34 = ((double)plVar22[1] * (double)fVar31 * 24.0) / (double)param_5;
LAB_107825e90:
          fVar31 = (float)(dVar34 + dVar43);
        }
      }
      if (pppplStack_138 < pppplStack_130) {
        *(undefined2 *)pppplStack_138 = uVar3;
        *(float *)((long)pppplStack_138 + 4) = fVar31;
        ppppplVar12 = (long *****)(pppplStack_138 + 1);
      }
      else {
        plVar22 = &lStack_140;
        func_0x000107813204(plVar22,((long)pppplStack_138 - lStack_140 >> 3) + 1);
        lVar29 = (long)pppplStack_138 - lStack_140;
        if (plVar22 == (long *)0x0) {
          ppppplVar12 = (long *****)0x0;
          lVar25 = lVar29;
          pppplStack_c0 = (long ****)&pppplStack_130;
        }
        else {
          ppppplVar12 = &pppplStack_130;
          pppplStack_c0 = (long ****)&pppplStack_130;
          func_0x000107813288();
          lVar25 = (long)pppplStack_138 - lStack_140;
        }
        puVar1 = (undefined2 *)((long)ppppplVar12 + lVar29);
        pppplStack_c8 = (long ****)(ppppplVar12 + (long)plVar22);
        uStack_e0 = ppppplVar12;
        puStack_d8 = puVar1;
        *puVar1 = uVar3;
        *(float *)(puVar1 + 2) = fVar31;
        pppplStack_d0 = (long ****)(puVar1 + 4);
        _memcpy((long)puVar1 - lVar25);
        ppppplVar12 = (long *****)pppplStack_d0;
        lVar29 = lStack_140;
        pppplStack_130 = pppplStack_c8;
        pppplStack_138 = pppplStack_d0;
        lStack_140 = (long)puVar1 - lVar25;
        func_0x0001078278e8(lVar29);
      }
      uVar27 = uVar27 + 1;
      pppplStack_138 = (long ****)ppppplVar12;
    }
  }
  if (param_8[7] - param_8[6] == 0xa8) {
    func_0x0001078278d0(auStack_158);
    func_0x0001078a79bc(&uStack_f8,param_13,param_8,auStack_158);
    func_0x0001074c71cc(auStack_158);
    for (uVar27 = uStack_f8; uVar27 != uStack_f0; uVar27 = uVar27 + 0x18) {
      plVar22 = param_8 + 6;
      func_0x0001074083ec(plVar22,0);
      pppplVar9 = pppplStack_120;
      if (pppplStack_120 < pppplStack_118) {
        func_0x000107827954(pppplStack_120);
        ppppplVar12 = (long *****)(pppplVar9 + 10);
      }
      else {
        func_0x000107827960(((long)pppplStack_120 - (long)pppplStack_128) / 0x50);
        FUN_107827140(&uStack_e0,plVar22,((long)pppplStack_120 - (long)pppplStack_128) / 0x50,
                      &pppplStack_118);
        func_0x000107827954(pppplStack_d0);
        func_0x000107827898();
        ppppplVar12 = (long *****)pppplStack_120;
        func_0x0001078278e0();
      }
      pppplStack_120 = (long ****)ppppplVar12;
    }
    func_0x000107827200(&uStack_f8);
  }
  else {
    func_0x0001078278d0(appplStack_170);
    func_0x0001078a7af4(&uStack_f8,param_13,param_8,appplStack_170);
    ppppplVar12 = (long *****)appplStack_170;
    func_0x0001074c71cc(ppppplVar12);
    for (uVar27 = uStack_f8; pppplVar9 = pppplStack_120, uVar27 != uStack_f0; uVar27 = uVar27 + 0x30
        ) {
      if (pppplStack_120 < pppplStack_118) {
        func_0x0001078272a4(pppplStack_120,uVar27,param_8 + 6);
        ppppplVar15 = (long *****)(pppplVar9 + 10);
        ppppplVar12 = (long *****)pppplStack_120;
      }
      else {
        func_0x000107827960(((long)pppplStack_120 - (long)pppplStack_128) / 0x50);
        FUN_107827140(&uStack_e0,ppppplVar12,((long)pppplStack_120 - (long)pppplStack_128) / 0x50,
                      &pppplStack_118);
        ppppplVar12 = (long *****)pppplStack_d0;
        func_0x0001078272a4(pppplStack_d0,uVar27,param_8 + 6);
        func_0x000107827898();
        ppppplVar15 = (long *****)pppplStack_120;
        func_0x0001078278e0();
      }
      pppplStack_120 = (long ****)ppppplVar15;
    }
    func_0x0001078274ac(&uStack_f8);
  }
  pppplVar9 = pppplStack_120;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  auVar37._0_8_ = *param_11;
  auVar37._8_8_ = 0;
  auVar37 = NEON_rev64(auVar37,4);
  auVar39._12_4_ = auVar37._12_4_;
  auVar39._0_8_ = auVar37._0_8_;
  auVar39._8_4_ = auVar37._4_4_;
  auVar38._8_8_ = auVar39._8_8_;
  auVar38._0_8_ = CONCAT44(auVar37._0_4_,auVar37._0_4_);
  auVar40._0_12_ = auVar38._0_12_;
  auVar40._12_4_ = auVar37._4_4_;
  param_1[4] = auVar40._8_8_;
  param_1[3] = auVar38._0_8_;
  *(char *)(param_1 + 5) = (char)param_12;
  *(undefined2 *)((long)param_1 + 0x29) = 0;
  fStack_110 = 0.0;
  fStack_b0 = -17.0;
  fVar31 = 0.0;
  fVar33 = 0.0;
  if (param_10 != 2) {
    fVar33 = 0.5;
  }
  dVar34 = 5.26354424712089e-315;
  fVar5 = 1.0;
  if (param_10 != 3) {
    fVar5 = fVar33;
  }
  dVar44 = 0.0;
  puVar21 = (undefined8 *)0x0;
  ppppplVar12 = (long *****)pppplStack_128;
  do {
    fVar33 = SUB84(dVar34,0);
    if (ppppplVar12 == (long *****)pppplVar9) {
      fVar41 = (float)func_0x0001078253e8(param_9);
      fVar32 = fStack_b0 + 17.0;
      plVar22 = (long *)*param_1;
      if (param_3 == (float)dVar44) {
        fVar42 = (float)((0.5 - (double)(fVar33 * (float)(ulong)(((long)pppplStack_120 -
                                                                 (long)pppplStack_128) / 0x50))) *
                        (double)param_3);
      }
      else {
        fVar42 = 17.0 - fVar33 * fVar32;
      }
      plVar24 = (long *)param_1[1];
      for (; plVar22 != plVar24; plVar22 = plVar22 + 4) {
        lVar25 = plVar22[1];
        for (lVar29 = *plVar22; lVar29 != lVar25; lVar29 = lVar29 + 0x80) {
          *(ulong *)(lVar29 + 4) =
               CONCAT44(fVar42 + (float)((ulong)*(undefined8 *)(lVar29 + 4) >> 0x20),
                        fVar31 * (fVar5 - fVar41) + (float)*(undefined8 *)(lVar29 + 4));
        }
      }
      fVar33 = *(float *)(param_1 + 3) - fVar32 * fVar33;
      *(float *)(param_1 + 3) = fVar33;
      *(float *)((long)param_1 + 0x1c) = fVar32 + fVar33;
      fVar33 = *(float *)(param_1 + 4) - fVar31 * fVar41;
      *(float *)(param_1 + 4) = fVar33;
      *(float *)((long)param_1 + 0x24) = fVar31 + fVar33;
      func_0x000107813318(&lStack_140);
      func_0x000107827550(&pppplStack_128);
      return;
    }
    FUN_107827b24(ppppplVar12);
    dVar35 = (double)func_0x000107827c74(ppppplVar12);
    if (puVar21 < (undefined8 *)param_1[2]) {
      puVar23 = puVar21 + 4;
      puVar21[1] = 0;
      *puVar21 = 0;
      puVar21[3] = 0;
      puVar21[2] = 0;
    }
    else {
      puVar26 = (undefined8 *)*param_1;
      lVar29 = (long)puVar21 - (long)puVar26 >> 5;
      uVar27 = lVar29 + 1;
      if (uVar27 >> 0x3b != 0) {
        func_0x000107826ae0();
LAB_107826820:
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x107826824);
        (*pcVar10)();
      }
      uVar18 = (long)param_1[2] - (long)puVar26;
      uVar17 = (long)uVar18 >> 4;
      if (uVar17 <= uVar27) {
        uVar17 = uVar27;
      }
      if (0x7fffffffffffffdf < uVar18) {
        uVar17 = 0x7ffffffffffffff;
      }
      if (uVar17 >> 0x3b != 0) {
        func_0x000104bd35f4();
        goto LAB_107826820;
      }
      lVar25 = uVar17 << 5;
      __Znwm();
      puVar2 = (undefined8 *)(lVar25 + ((long)puVar21 - (long)puVar26));
      puVar2[1] = 0;
      *puVar2 = 0;
      puVar2[3] = 0;
      puVar2[2] = 0;
      puVar19 = puVar2 + lVar29 * -4;
      for (puVar23 = puVar26; puVar13 = puVar26, puVar23 != puVar21; puVar23 = puVar23 + 4) {
        uVar6 = *puVar23;
        puVar19[1] = puVar23[1];
        *puVar19 = uVar6;
        puVar19[2] = puVar23[2];
        *puVar23 = 0;
        puVar23[1] = 0;
        puVar23[2] = 0;
        *(undefined4 *)(puVar19 + 3) = *(undefined4 *)(puVar23 + 3);
        puVar19 = puVar19 + 4;
      }
      for (; puVar13 != puVar21; puVar13 = puVar13 + 4) {
        func_0x000107406e9c();
      }
      puVar23 = puVar2 + 4;
      *param_1 = puVar2 + lVar29 * -4;
      param_1[2] = lVar25 + uVar17 * 0x20;
      if (puVar26 != (undefined8 *)0x0) {
        __ZdlPv(puVar26);
      }
    }
    param_1[1] = puVar23;
    bVar4 = *(byte *)((long)ppppplVar12 + 0x17);
    pppplVar20 = (long ****)(ulong)bVar4;
    pppplVar8 = pppplVar20;
    if ((char)bVar4 < '\0') {
      pppplVar8 = ppppplVar12[1];
    }
    if (pppplVar8 == (long ****)0x0) {
      fStack_b0 = param_3 + fStack_b0;
      fVar33 = param_3;
    }
    else {
      dVar45 = (dVar35 + -1.0) * 24.0;
      pppplVar8 = (long ****)0x0;
      while( true ) {
        if ((char)bVar4 < '\0') {
          pppplVar20 = ppppplVar12[1];
        }
        if (pppplVar20 <= pppplVar8) break;
        ppppplVar14 = ppppplVar12;
        func_0x000107405150(ppppplVar12,pppplVar8);
        uVar27 = (ulong)ppppplVar14 & 0xffffffff;
        ppppplVar15 = ppppplVar12 + 6;
        func_0x0001074083ec(ppppplVar15,uVar27);
        if (*(char *)ppppplVar15 == '\x01') {
          lVar29 = 1;
          do {
            lVar25 = lVar29;
            pppplVar30 = (long ****)((long)pppplVar8 + lVar25);
            pppplVar20 = ppppplVar12[1];
            if (-1 < (char)*(byte *)((long)ppppplVar12 + 0x17)) {
              pppplVar20 = (long ****)(ulong)*(byte *)((long)ppppplVar12 + 0x17);
            }
            if (pppplVar20 <= pppplVar30) break;
            ppppplVar16 = ppppplVar12;
            func_0x000107405150(ppppplVar12,pppplVar30);
            lVar29 = lVar25 + 1;
          } while ((int)ppppplVar14 == (int)ppppplVar16);
          func_0x0001077fc1d8(&uStack_e0,ppppplVar12,pppplVar8,lVar25);
          (**(code **)(*param_7 + 0x30))
                    ((dVar35 - (double)ppppplVar15[1]) * 24.0,param_7,&uStack_e0,puVar23 + -4,
                     &fStack_110,&fStack_b0,ppppplVar15,uVar27,param_15);
          func_0x00010089ccb4(&uStack_e0);
        }
        else {
          ppppplVar14 = (long *****)*ppppplVar12;
          if (-1 < *(char *)((long)ppppplVar12 + 0x17)) {
            ppppplVar14 = ppppplVar12;
          }
          auStack_aa[0] = *(ushort *)((long)ppppplVar14 + (long)pppplVar8 * 2);
          uVar17 = (ulong)auStack_aa[0];
          uVar28 = (uint)auStack_aa[0];
          pppplVar20 = ppppplVar15[1];
          uStack_f8 = uVar27;
          if (param_12 == 1) {
LAB_107826464:
            uVar17 = 0;
          }
          else if ((param_17 & 1) == 0) {
            func_0x000107873f80();
          }
          else {
            if ((auStack_aa[0] - 9 < 0x18) &&
               ((0x80001fU >> (ulong)(auStack_aa[0] - 9 & 0x1f) & 1) != 0)) goto LAB_107826464;
            func_0x0001078746a8();
            uVar17 = (ulong)(uVar28 ^ 1);
          }
          if (((ulong)ppppplVar15[0xf] & 1) == 0) {
            lVar29 = param_15;
            func_0x000107813768(param_15,ppppplVar15 + 2);
            if (param_15 + 8 != lVar29) {
              lVar25 = lVar29 + 0x28;
              func_0x0001078137cc(lVar25,auStack_aa);
              if (lVar29 + 0x30 != lVar25) {
                puVar21 = (undefined8 *)(lVar25 + 0x28);
LAB_107826568:
                uStack_e0 = (long *****)*puVar21;
                puStack_d8 = (undefined2 *)puVar21[1];
                uVar28 = *(uint *)(puVar21 + 2);
                pppplStack_d0 = (long ****)CONCAT44(pppplStack_d0._4_4_,uVar28);
                dVar46 = 24.0;
                dVar36 = (dVar35 - (double)pppplVar20) * 24.0;
                goto LAB_107826584;
              }
              lVar29 = param_14;
              func_0x000107827598(param_14,ppppplVar15[2]);
              if (param_14 + 8 != lVar29) {
                lVar25 = lVar29 + 0x28;
                func_0x0001078275e4(lVar25,auStack_aa[0]);
                if ((lVar29 + 0x30 != lVar25) && (*(char *)(lVar25 + 0x38) == '\x01')) {
                  puVar21 = (undefined8 *)(*(long *)(lVar25 + 0x28) + 0x20);
                  goto LAB_107826568;
                }
              }
            }
          }
          else {
            lVar29 = param_16;
            func_0x0001073f9894(param_16,ppppplVar15 + 8);
            fVar33 = SUB84(dVar34,0);
            if (param_16 + 8 != lVar29) {
              *(undefined1 *)((long)param_1 + 0x2a) = 1;
              fVar32 = (float)func_0x0001074827ac(lVar29 + 0x58);
              uStack_e0 = (long *****)CONCAT44((int)fVar33,(int)fVar32);
              puStack_d8 = (undefined2 *)0xfffffffd00000001;
              fVar41 = fVar33;
              if ((int)uVar17 == 0) {
                fVar41 = fVar32;
              }
              uVar28 = (uint)fVar41;
              pppplStack_d0 = (long ****)CONCAT44(pppplStack_d0._4_4_,uVar28);
              pppplVar20 = (long ****)(((double)pppplVar20 * 24.0) / (double)param_6);
              dVar36 = dVar45 + (double)(float)((24.0 - (double)pppplVar20 * (double)fVar33) * 0.5);
              dVar46 = (double)uVar28;
LAB_107826584:
              dVar34 = (double)fStack_b0;
              if ((uVar17 & 1) == 0) {
                func_0x0001078277f8(dVar36 + dVar34);
                func_0x0001078278f8(dVar43 + (double)pppplVar20 * (double)uVar28);
              }
              else {
                func_0x0001078277f8(dVar36 + dVar34);
                func_0x0001078278f8(dVar43 + (double)pppplVar20 * dVar46);
                *(undefined1 *)((long)param_1 + 0x29) = 1;
              }
            }
          }
          pppplVar30 = (long ****)((long)pppplVar8 + 1);
        }
        bVar4 = *(byte *)((long)ppppplVar12 + 0x17);
        pppplVar20 = (long ****)(ulong)bVar4;
        pppplVar8 = pppplVar30;
      }
      lVar29 = puVar23[-4];
      lVar25 = puVar23[-3];
      if ((lVar29 != lVar25) && (fVar31 = fStack_110 - param_4, fVar5 != 0.0)) {
        fVar33 = (float)NEON_ucvtf(*(undefined4 *)(lVar25 + -0x4c));
        fVar41 = *(float *)(lVar25 + -0x68);
        fVar32 = *(float *)(lVar25 + -0x7c);
        for (; lVar29 != lVar25; lVar29 = lVar29 + 0x80) {
          *(ulong *)(lVar29 + 4) =
               CONCAT44((float)((ulong)*(undefined8 *)(lVar29 + 4) >> 0x20) + 0.0,
                        (float)*(undefined8 *)(lVar29 + 4) - fVar5 * (fVar32 + fVar41 * fVar33));
        }
      }
      dVar34 = dVar35 * (double)param_3 + 0.0;
      fStack_110 = 0.0;
      fStack_b0 = (float)(dVar34 + (double)fStack_b0);
      if (dVar45 <= 0.0) {
        dVar45 = 0.0;
      }
      fVar33 = (float)dVar45;
      *(float *)(puVar23 + -1) = fVar33;
      if (dVar44 <= dVar34) {
        dVar44 = dVar34;
      }
    }
    dVar34 = (double)(ulong)(uint)fVar33;
    ppppplVar12 = ppppplVar12 + 10;
    puVar21 = puVar23;
  } while( true );
}



/* Entry: 107826cd8; end: 107826d3b;  */

void FUN_107826cd8(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x0001078278bc();
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  param_2[3] = 0;
  param_2[4] = 0;
  uVar2 = param_2[6];
  uVar1 = param_2[5];
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  param_1[6] = uVar2;
  param_1[5] = uVar1;
  func_0x0001072649c8(param_1 + 8,param_2 + 8);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x88);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x80);
  uVar4 = *(undefined8 *)(unaff_x19 + 0x98);
  uVar3 = *(undefined8 *)(unaff_x19 + 0x90);
  *(undefined1 *)(unaff_x20 + 0xa0) = *(undefined1 *)(unaff_x19 + 0xa0);
  *(undefined8 *)(unaff_x20 + 0x88) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x80) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x98) = uVar4;
  *(undefined8 *)(unaff_x20 + 0x90) = uVar3;
  return;
}



/* Entry: 107826f74; end: 107826fa3;  */

long FUN_107826f74(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    func_0x000107826fa4(param_1);
  }
  return param_1;
}



/* Entry: 107827140; end: 1078271b7;  */

long * FUN_107827140(long *param_1,ulong param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    if (0x333333333333333 < param_2) {
      func_0x000104bd35f4();
      lVar1 = param_1[1];
      while (lVar1 != param_1[2]) {
        param_1[2] = param_1[2] + -0x50;
        func_0x00010740553c();
      }
      if (*param_1 != 0) {
        __ZdlPv();
      }
      return param_1;
    }
    lVar1 = param_2 * 0x50;
    __Znwm();
  }
  lVar2 = lVar1 + param_3 * 0x50;
  *param_1 = lVar1;
  param_1[1] = lVar2;
  param_1[2] = lVar2;
  param_1[3] = lVar1 + param_2 * 0x50;
  return param_1;
}



/* Entry: 10782751c; end: 107827597;  */

void FUN_10782751c(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001078278bc();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x30;
    func_0x0001074055b8();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 107827b24; end: 107827c17;  */

void FUN_107827b24(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = param_1;
  func_0x000107827be0(param_1,&UNK_10dea7378,0);
  if (lVar1 == -1) {
    func_0x000107827c18(param_1);
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x18);
  }
  else {
    lVar2 = param_1;
    func_0x000107827c3c(param_1,&UNK_10dea7378,0xffffffffffffffff);
    func_0x0001077fc1d8(auStack_48,param_1,lVar1,(lVar2 + 1) - lVar1);
    func_0x000107828650();
    func_0x000107405414();
    func_0x00010089ccb4(auStack_48);
    func_0x000105340004(auStack_48,lVar1 + *(long *)(param_1 + 0x18),
                        lVar2 + 1 + *(long *)(param_1 + 0x18));
    func_0x000107828650();
    func_0x00010065acbc();
    func_0x000100100fec(auStack_48);
  }
  return;
}



/* Entry: 107827f54; end: 107827f8b;  */

void FUN_107827f54(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x000107828058(lVar1);
  *(long *)(param_1 + 8) = lVar1 + 0xa8;
  return;
}



/* Entry: 107828450; end: 1078284cf;  */

/* WARNING: Possible PIC construction at 0x000107828484: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107828488) */
/* WARNING: Removing unreachable block (ram,0x0001078284bc) */
/* WARNING: Removing unreachable block (ram,0x0001078284a8) */

undefined1 * FUN_107828450(undefined1 *param_1)

{
  undefined1 auStack_60 [56];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x000104c2fe00(auStack_60);
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0x3ff0000000000000;
  func_0x0001072d124c(param_1 + 0x18);
  param_1[0x28] = 0;
  param_1[0x38] = 0;
  func_0x0001072627ac(param_1 + 0x40,auStack_60);
  param_1[0x80] = 0;
  param_1[0x90] = 0;
  param_1[0x98] = 0;
  param_1[0xa0] = 0;
  return param_1;
}



/* Entry: 1078288b8; end: 1078288db;  */

void FUN_1078288b8(undefined8 param_1,undefined4 param_2)

{
  undefined4 uStack_14;
  
  uStack_14 = param_2;
  func_0x0001078289e4(param_1,&uStack_14);
  return;
}



/* Entry: 107828c28; end: 107828c3b;  */

void FUN_107828c28(void)

{
  func_0x000107828ae0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107829780; end: 10782978f;  */

void FUN_107829780(void)

{
  return;
}



/* Entry: 107829bd8; end: 107829c03;  */

void FUN_107829bd8(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0001072f9a20();
  uVar2 = *(undefined8 *)(param_2 + 0xf8);
  uVar1 = *(undefined8 *)(param_2 + 0xf0);
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_2 + 0x100);
  *(undefined8 *)(param_1 + 0xf8) = uVar2;
  *(undefined8 *)(param_1 + 0xf0) = uVar1;
  return;
}



/* Entry: 107829e7c; end: 107829ec3;  */

void FUN_107829e7c(void)

{
  return;
}



/* Entry: 10782a09c; end: 10782a0bf;  */

void FUN_10782a09c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x00010782a35c();
  *puVar1 = &PTR_DAT_1109e0880;
  uVar3 = param_1[1];
  puVar1[2] = param_1[2];
  puVar1[1] = uVar3;
  lVar2 = param_1[3];
  puVar1[3] = lVar2;
  if (lVar2 != 0) {
    do {
      func_0x00010782a364();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10782a218; end: 10782a27f;  */

void FUN_10782a218(int param_1)

{
  long *plVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  float fVar13;
  long *plStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  func_0x00010782a3e0();
  if (param_1 == 0) {
    return;
  }
  plStack_68 = (long *)((ulong)plStack_68 & 0xffffffffffffff00);
  plVar7 = (long *)(*(long *)(unaff_x20 + 0x220) + 0xb50);
  func_0x00010724e2c8(plVar7,&plStack_68);
  if (((int)plVar7 != 0) && ((*(byte *)(unaff_x20 + 0x1d8) & 1) == 0)) {
    return;
  }
  func_0x00010782a374(*(undefined8 *)(unaff_x20 + 0x220));
  if ((((int)plVar7 != 0) && (*(char *)(unaff_x20 + 0x1d8) == '\x01')) &&
     (unaff_x19 < *(ulong *)(unaff_x20 + 0x1d0))) {
    return;
  }
  if (*(char *)(unaff_x20 + 0x89) != '\x01') goto code_r0x000107829014;
  uVar10 = *(ulong *)(unaff_x20 + 0x1e0);
  uVar11 = *(ulong *)(unaff_x20 + 0x200);
  if (uVar11 != 0) {
    uVar3 = uVar11 - 1;
    if ((uVar11 & uVar3) == 0) {
      unaff_x21 = uVar3 & uVar10;
    }
    else {
      unaff_x21 = uVar10;
      if (uVar11 <= uVar10) {
        uVar5 = 0;
        if (uVar11 != 0) {
          uVar5 = uVar10 / uVar11;
        }
        unaff_x21 = uVar10 - uVar5 * uVar11;
      }
    }
    plVar12 = *(long **)(*(long *)(unaff_x20 + 0x1f8) + unaff_x21 * 8);
    if (plVar12 != (long *)0x0) {
      do {
        while( true ) {
          plVar12 = (long *)*plVar12;
          if (plVar12 == (long *)0x0) goto code_r0x000107828d68;
          uVar5 = plVar12[1];
          if (uVar5 != uVar10) break;
          if (plVar12[2] == uVar10) goto code_r0x000107829010;
        }
        if ((uVar11 & uVar3) == 0) {
          uVar5 = uVar5 & uVar3;
        }
        else if (uVar11 <= uVar5) {
          uVar6 = 0;
          if (uVar11 != 0) {
            uVar6 = uVar5 / uVar11;
          }
          uVar5 = uVar5 - uVar6 * uVar11;
        }
      } while (uVar5 == unaff_x21);
    }
  }
code_r0x000107828d68:
  plVar1 = (long *)(unaff_x20 + 0x208);
  func_0x00010782a35c();
  uStack_58 = 1;
  *plVar7 = 0;
  plVar7[1] = uVar10;
  plVar7[2] = uVar10;
  plVar7[3] = 0;
  fVar13 = (float)(*(long *)(unaff_x20 + 0x210) + 1);
  plStack_68 = plVar7;
  plStack_60 = plVar1;
  if ((uVar11 == 0) || (*(float *)(unaff_x20 + 0x218) * (float)uVar11 < fVar13)) {
    uVar3 = 1;
    if (2 < uVar11) {
      uVar3 = (ulong)((uVar11 & uVar11 - 1) != 0);
    }
    uVar3 = uVar3 | uVar11 << 1;
    uVar5 = (ulong)(fVar13 / *(float *)(unaff_x20 + 0x218));
    if (uVar3 <= uVar5) {
      uVar3 = uVar5;
    }
    if (uVar3 - 1 == 0) {
      uVar3 = 2;
    }
    else if ((uVar3 & uVar3 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar11 = *(ulong *)(unaff_x20 + 0x200);
    }
    if (uVar11 < uVar3) {
code_r0x000107828e08:
      if (uVar3 >> 0x3d != 0) {
        func_0x000104bd35f4();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x107829098);
        (*pcVar2)();
      }
      lVar4 = uVar3 << 3;
      __Znwm(lVar4);
      func_0x000107829eac(unaff_x20 + 0x1f8,lVar4);
      *(ulong *)(unaff_x20 + 0x200) = uVar3;
      lVar4 = *(long *)(unaff_x20 + 0x1f8);
      for (uVar11 = 0; uVar3 != uVar11; uVar11 = uVar11 + 1) {
        *(undefined8 *)(lVar4 + uVar11 * 8) = 0;
      }
      plVar7 = (long *)*plVar1;
      uVar11 = uVar3;
      if (plVar7 != (long *)0x0) {
        uVar8 = plVar7[1];
        uVar6 = uVar3 - 1;
        uVar5 = 0;
        if (uVar3 != 0) {
          uVar5 = uVar8 / uVar3;
        }
        uVar9 = uVar8;
        if (uVar3 <= uVar8) {
          uVar9 = uVar8 - uVar5 * uVar3;
        }
        if ((uVar3 & uVar6) == 0) {
          uVar9 = uVar8 & uVar6;
        }
        *(long **)(lVar4 + uVar9 * 8) = plVar1;
        while (plVar12 = plVar7, plVar7 = (long *)*plVar12, plVar7 != (long *)0x0) {
          uVar5 = plVar7[1];
          if ((uVar3 & uVar6) == 0) {
            uVar5 = uVar5 & uVar6;
          }
          else if (uVar3 <= uVar5) {
            uVar8 = 0;
            if (uVar3 != 0) {
              uVar8 = uVar5 / uVar3;
            }
            uVar5 = uVar5 - uVar8 * uVar3;
          }
          if (uVar5 != uVar9) {
            if (*(long *)(lVar4 + uVar5 * 8) == 0) {
              *(long **)(lVar4 + uVar5 * 8) = plVar12;
              uVar9 = uVar5;
            }
            else {
              *plVar12 = *plVar7;
              *plVar7 = **(undefined8 **)(lVar4 + uVar5 * 8);
              **(long **)(lVar4 + uVar5 * 8) = (long)plVar7;
              plVar7 = plVar12;
            }
          }
        }
      }
    }
    else if (uVar3 < uVar11) {
      uVar5 = (ulong)((float)*(ulong *)(unaff_x20 + 0x210) / *(float *)(unaff_x20 + 0x218));
      if ((uVar11 < 3) || ((uVar11 & uVar11 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar5) {
        uVar5 = 1L << (-LZCOUNT(uVar5 - 1) & 0x3fU);
      }
      if (uVar3 <= uVar5) {
        uVar3 = uVar5;
      }
      if (uVar3 < uVar11) {
        if (uVar3 != 0) goto code_r0x000107828e08;
        func_0x000107829eac(unaff_x20 + 0x1f8,0);
        *(undefined8 *)(unaff_x20 + 0x200) = 0;
        uVar11 = 0;
      }
      else {
        uVar11 = *(ulong *)(unaff_x20 + 0x200);
      }
    }
    if ((uVar11 & uVar11 - 1) == 0) {
      unaff_x21 = uVar11 - 1 & uVar10;
    }
    else {
      unaff_x21 = uVar10;
      if (uVar11 <= uVar10) {
        uVar3 = 0;
        if (uVar11 != 0) {
          uVar3 = uVar10 / uVar11;
        }
        unaff_x21 = uVar10 - uVar3 * uVar11;
      }
    }
  }
  plVar12 = plStack_68;
  lVar4 = *(long *)(unaff_x20 + 0x1f8);
  plVar7 = *(long **)(lVar4 + unaff_x21 * 8);
  if (plVar7 == (long *)0x0) {
    *plStack_68 = *plVar1;
    *plVar1 = (long)plStack_68;
    *(long **)(lVar4 + unaff_x21 * 8) = plVar1;
    if (*plStack_68 != 0) {
      uVar10 = *(ulong *)(*plStack_68 + 8);
      if ((uVar11 & uVar11 - 1) == 0) {
        uVar10 = uVar10 & uVar11 - 1;
      }
      else if (uVar11 <= uVar10) {
        uVar3 = 0;
        if (uVar11 != 0) {
          uVar3 = uVar10 / uVar11;
        }
        uVar10 = uVar10 - uVar3 * uVar11;
      }
      *(long **)(lVar4 + uVar10 * 8) = plStack_68;
    }
  }
  else {
    *plStack_68 = *plVar7;
    *plVar7 = (long)plStack_68;
  }
  plStack_68 = (long *)0x0;
  *(long *)(unaff_x20 + 0x210) = *(long *)(unaff_x20 + 0x210) + 1;
  func_0x000107829ec4(&plStack_68);
code_r0x000107829010:
  plVar12[3] = unaff_x19;
code_r0x000107829014:
  lVar4 = *(long *)(unaff_x20 + 0x1e8);
  if (lVar4 != 0) {
    if (*(char *)(lVar4 + 0x28) == '\x01') {
      uVar11 = *(ulong *)(lVar4 + 0x20);
    }
    else {
      uVar11 = 0;
    }
    uVar10 = unaff_x19;
    if (unaff_x19 <= uVar11) {
      uVar10 = uVar11;
    }
    *(ulong *)(lVar4 + 0x20) = uVar10;
    *(undefined1 *)(lVar4 + 0x28) = 1;
  }
  if (*(char *)(unaff_x20 + 0x1d8) == '\x01') {
    uVar11 = *(ulong *)(unaff_x20 + 0x1d0);
  }
  else {
    uVar11 = 0;
  }
  if (unaff_x19 <= uVar11) {
    unaff_x19 = uVar11;
  }
  *(ulong *)(unaff_x20 + 0x1d0) = unaff_x19;
  *(undefined1 *)(unaff_x20 + 0x1d8) = 1;
  return;
}



/* Entry: 10782a934; end: 10782a983;  */

undefined8 * FUN_10782a934(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = param_1 + -0x25;
  puVar2 = puVar1;
  func_0x00010782ac84();
  func_0x00010782a9b8(puVar2 + 0x6f);
  func_0x00010750c6cc(param_1 + 0x48);
  *puVar1 = &PTR_DAT_1109e0d50;
  *param_1 = &PTR_DAT_1109e0e60;
  param_1[1] = &PTR_DAT_1109e0e88;
  param_1[0xc] = &PTR_DAT_1109e0eb0;
  param_1[0xe] = &PTR_DAT_1109e0ed8;
  param_1[0x10] = &PTR_DAT_1109e0f00;
  *(undefined1 *)(param_1[0x22] + 0x30) = 1;
  func_0x0001073ada2c(*(undefined8 *)(param_1[0x22] + 0x18));
  func_0x00010780f2c0(param_1[0x29],param_1);
  func_0x000107831228(param_1 + 0x44);
  FUN_1078312d4(param_1 + 0x3f);
  func_0x000107518510(param_1 + 0x3a);
  func_0x000107518478(param_1 + 0x35);
  func_0x0001075183b4(param_1 + 0x30);
  func_0x00010751838c(param_1 + 0x2e);
  func_0x0001074f9d98(param_1 + 0x2c);
  func_0x00010724bd50(param_1 + 0x27);
  func_0x000107831700(param_1 + 0x24);
  func_0x0001078316dc(param_1 + 0x22);
  func_0x000107831374(param_1 + 0x1a);
  func_0x000107831640(param_1 + 0x18);
  func_0x0001072c9240(param_1 + 0x12);
  func_0x000107432200(param_1 + 0x10);
  func_0x0001074321c8(param_1 + 0xe);
  func_0x000107432190(param_1 + 0xc);
  func_0x00010747c918(param_1 + 1);
  *puVar1 = &PTR_DAT_1109e1d40;
  func_0x00010750bcd8(param_1 + -0x12);
  func_0x000104c2f714(param_1 + -0x21);
  return puVar1;
}



/* Entry: 10782abf0; end: 10782ac2b;  */

long FUN_10782abf0(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109e0c30);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10782b008; end: 10782b073;  */

long FUN_10782b008(long param_1)

{
  return (((long *)**(undefined8 **)(param_1 + 8))[1] - *(long *)**(undefined8 **)(param_1 + 8)) /
         0x70;
}



/* Entry: 10782b398; end: 10782b3eb;  */

void FUN_10782b398(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_28;
  
  uStack_28 = param_3;
  func_0x00010782b438(&uStack_40,param_2 + 8,&uStack_28,param_2 + 0x18);
  param_1[1] = uStack_38;
  *param_1 = uStack_40;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010737d404(&uStack_40);
  return;
}



/* Entry: 10782b5b0; end: 10782b5d7;  */

long FUN_10782b5b0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10782bdd4; end: 10782bdeb;  */

ulong FUN_10782bdd4(ulong param_1,ulong param_2)

{
  bool bVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  long *plVar7;
  ulong uStack_50;
  ulong uStack_48;
  
  if ((*(byte *)(param_1 + 200) & 1) != 0) {
    return param_1;
  }
  func_0x000104bdc2c8();
  lVar5 = *(long *)(param_1 + 0xe8);
  if (lVar5 == 0) {
    return 0;
  }
  if ((*(byte *)(lVar5 + 0x58) & 1) == 0) {
    uVar2 = param_1;
    if (*(char *)(lVar5 + 0x128) != '\x01') {
code_r0x00010782beac:
      func_0x00010783321c(lVar5);
      uStack_50 = uVar2;
      uStack_48 = param_2;
      while( true ) {
        bVar1 = uStack_50 != 0;
        if (uStack_50 == 0) {
          return 0;
        }
        plVar7 = *(long **)(uStack_48 + 0x38);
        if (((plVar7 != (long *)0x0) &&
            (plVar3 = plVar7, (**(code **)(*plVar7 + 0x48))(), (int)plVar3 != 0)) &&
           (*(char *)((long)plVar7 + 0x1c) != '\x01')) break;
        func_0x00010782bcf8(&uStack_50);
      }
      return (ulong)bVar1;
    }
    uVar4 = 0;
    do {
      lVar5 = *(long *)(param_1 + 0xe8);
      uVar2 = lVar5 + 0x60;
      func_0x00010782bf00();
      uVar6 = (uint)uVar4;
      if ((uint)((*(long *)(lVar5 + 0x68) - *(long *)(lVar5 + 0x60)) / 0x18) <= uVar6) {
        for (lVar5 = *(long *)(*(long *)(param_1 + 8) + 0x20);
            lVar5 != *(long *)(*(long *)(param_1 + 8) + 0x28); lVar5 = lVar5 + 0x20) {
          if ((*(char *)(lVar5 + 0x18) == '\x01') &&
             (*(long *)(param_1 + 0x110) != *(long *)(param_1 + 0x118))) {
            return 1;
          }
        }
        lVar5 = *(long *)(param_1 + 0xe8);
        goto code_r0x00010782beac;
      }
      uVar2 = param_1;
      func_0x00010782bf18();
      param_2 = uVar4;
      uVar4 = (ulong)(uVar6 + 1);
    } while ((uVar2 & 1) == 0);
  }
  return 1;
}



/* Entry: 10782cb2c; end: 10782cb6f;  */

void FUN_10782cb2c(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  func_0x00010782cb70();
  if (param_2 == (undefined8 *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    lVar1 = param_2[1];
    uVar2 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar2;
    if (lVar1 != 0) {
      do {
        func_0x000107832cb4();
      } while (extraout_w10 != 0);
    }
  }
  return;
}



/* Entry: 10782d3b4; end: 10782d3ef;  */

void FUN_10782d3b4(long param_1)

{
  func_0x00010782d270(param_1 + -0x128);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


