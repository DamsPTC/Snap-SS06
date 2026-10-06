/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1077ffa84; end: 1077ffadf;  */

long FUN_1077ffa84(long param_1)

{
  long lVar1;
  
  lVar1 = 0x38;
  __Znwm(0x38);
  func_0x0001077ffb84();
  func_0x00010530126c(lVar1 + 0x10,param_1 + 0x10);
  return lVar1;
}



/* Entry: 1077ffc1c; end: 1077ffc33;  */

uint FUN_1077ffc1c(uint param_1)

{
  func_0x0001077ffc34();
  return param_1 ^ 1;
}



/* Entry: 1077ffd8c; end: 1077ffe03;  */

void FUN_1077ffd8c(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = *param_1;
  for (plVar3 = param_2 + 1; plVar3 != param_2 + 1 + *param_2 * 3; plVar3 = plVar3 + 3) {
    lVar1 = plVar3[2];
    *param_1 = lVar1;
    func_0x0001077ffd2c(lVar1,param_1);
    plVar3[2] = 0;
  }
  func_0x0001077ffd78(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar2);
  return;
}



/* Entry: 1078012fc; end: 1078013ff;  */

undefined4 FUN_1078012fc(long param_1,long param_2)

{
  long unaff_x19;
  undefined4 uStack_30;
  
  if (param_1 != param_2) {
    func_0x000107809b3c();
    while (param_1 = param_1 + 0x20, param_1 != unaff_x19) {
      func_0x00010780969c();
    }
    return uStack_30;
  }
  return 0x7f7fffff;
}



/* Entry: 107801da0; end: 1078022b7;  */

void FUN_107801da0(undefined8 *param_1,undefined8 param_2,long param_3,uint param_4)

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
  long extraout_x8_02;
  undefined8 *extraout_x8_03;
  undefined8 *extraout_x8_04;
  undefined8 *extraout_x8_05;
  undefined8 *extraout_x9;
  long extraout_x9_00;
  ulong extraout_x9_01;
  long extraout_x9_02;
  long extraout_x9_03;
  undefined8 extraout_x10;
  undefined8 extraout_x10_00;
  undefined8 extraout_x10_01;
  undefined8 uVar11;
  long extraout_x11;
  long extraout_x12;
  long extraout_x13;
  long extraout_x13_00;
  long extraout_x14;
  long extraout_x14_00;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *puVar12;
  undefined8 *unaff_x26;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 unaff_x30;
  ulong uVar15;
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  undefined4 uVar19;
  uint uStack_84;
  long lVar10;
  
  uStack_84 = param_4;
  func_0x000107809a18();
  func_0x00010780907c();
LAB_107801dc8:
  func_0x000107809914();
LAB_107801dcc:
  func_0x0001078095f4();
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x000107802044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)*(byte *)(unaff_x26 + 0x21bd4c37) * 4 + 0x107802048))();
    return;
  }
  bVar3 = (undefined8 *)0x16 < unaff_x26;
  uVar5 = (long)unaff_x26 + -0x17 < 0;
  if ((long)unaff_x26 < 0x18) {
    if ((uStack_84 & 1) != 0) {
      puVar7 = unaff_x19;
      if (unaff_x19 == unaff_x20) goto LAB_1078022a4;
      goto LAB_1078020dc;
    }
    if (unaff_x19 != unaff_x20) {
      while (bVar3 = (long)(unaff_x19 + 4) - (long)unaff_x20 < 0, unaff_x19 + 4 != unaff_x20) {
        fVar18 = *(float *)(unaff_x19 + 5);
        func_0x0001078096b8();
        if (bVar3) {
          uVar11 = unaff_x19[4];
          uVar19 = *(undefined4 *)((long)unaff_x19 + 0x2c);
          uVar14 = unaff_x19[7];
          uVar17 = unaff_x19[6];
          puVar7 = extraout_x8_05;
          do {
            puVar12 = puVar7;
            puVar12[-2] = puVar12[-6];
            puVar12[-3] = puVar12[-7];
            puVar12[-1] = puVar12[-5];
            *puVar12 = puVar12[-4];
            puVar7 = puVar12 + -4;
          } while (fVar18 < *(float *)(puVar12 + -10));
          puVar12[-7] = uVar11;
          *(float *)(puVar12 + -6) = fVar18;
          *(undefined4 *)((long)puVar12 + -0x2c) = uVar19;
          puVar12[-4] = uVar14;
          puVar12[-5] = uVar17;
        }
        func_0x00010780a140();
      }
    }
    goto LAB_1078022a4;
  }
  if (param_3 != 0) {
    func_0x0001078095e4();
    if (bVar3) {
      func_0x00010780915c();
      func_0x0001078022b8();
      func_0x0001078095d4();
      func_0x0001078022b8();
      func_0x00010780a078();
      func_0x0001078022b8();
      func_0x0001078091e8();
      func_0x0001078022b8();
      param_1 = unaff_x19;
      func_0x000107808f50();
    }
    else {
      func_0x00010780a0c4();
      func_0x0001078022b8();
    }
    param_3 = param_3 + -1;
    if ((uStack_84 & 1) != 0) {
      fVar18 = *(float *)(unaff_x19 + 1);
LAB_107801e54:
      lVar8 = 0;
      uVar14 = *unaff_x19;
      uVar19 = *(undefined4 *)((long)unaff_x19 + 0xc);
      uVar11 = unaff_x19[2];
      uVar17 = unaff_x19[3];
      puVar7 = param_1;
      do {
        uVar2 = uVar5;
        func_0x00010780a14c(*(undefined4 *)((long)unaff_x19 + lVar8 + 0x28));
        uVar5 = 1;
        lVar8 = extraout_x8;
      } while ((bool)uVar2);
      puVar12 = (undefined8 *)((long)unaff_x19 + extraout_x8);
      puVar9 = unaff_x20;
      unaff_x26 = puVar12;
      if (extraout_x8 == 0x20) {
        do {
          puVar13 = puVar9;
          if (puVar9 <= puVar12) break;
          puVar13 = puVar9 + -4;
          pfVar1 = (float *)(puVar9 + -3);
          puVar9 = puVar13;
        } while (fVar18 <= *pfVar1);
      }
      else {
        do {
          puVar13 = puVar9 + -4;
          pfVar1 = (float *)(puVar9 + -3);
          puVar9 = puVar13;
        } while (fVar18 <= *pfVar1);
      }
      while (bVar3 = unaff_x26 == puVar13, unaff_x26 < puVar13) {
        func_0x000107808c24();
        do {
          pfVar1 = (float *)(unaff_x26 + 5);
          unaff_x26 = unaff_x26 + 4;
        } while (*pfVar1 < fVar18);
        do {
          pfVar1 = (float *)(puVar13 + -3);
          puVar13 = puVar13 + -4;
        } while (fVar18 <= *pfVar1);
      }
      func_0x00010780a090();
      if (!bVar3) {
        func_0x000107808a40(*puVar13);
      }
      unaff_x26[-4] = uVar14;
      *(float *)(unaff_x26 + -3) = fVar18;
      *(undefined4 *)((long)unaff_x26 + -0x14) = uVar19;
      unaff_x26[-2] = uVar11;
      unaff_x26[-1] = uVar17;
      in_CY = puVar9 <= puVar12;
      in_ZR = puVar12 == puVar9;
      param_1 = puVar7;
      if ((bool)in_CY) {
        func_0x00010780915c();
        func_0x0001078023ec();
        param_1 = puVar7;
        func_0x000107809308();
        func_0x0001078023ec();
        if ((int)param_1 != 0) goto LAB_107802024;
        if (((ulong)puVar7 & 1) != 0) goto LAB_107801dcc;
      }
      func_0x00010780915c();
      FUN_107801da0();
      uStack_84 = 0;
      goto LAB_107801dcc;
    }
    fVar18 = *(float *)(unaff_x19 + 1);
    uVar5 = 1;
    if (*(float *)(unaff_x19 + -3) < fVar18) goto LAB_107801e54;
    puVar7 = unaff_x19;
    if (*(float *)(unaff_x20 + -3) <= fVar18) {
      do {
        unaff_x26 = puVar7 + 4;
        if (unaff_x20 <= unaff_x26) break;
        pfVar1 = (float *)(puVar7 + 5);
        puVar7 = unaff_x26;
      } while (*pfVar1 <= fVar18);
    }
    else {
      do {
        unaff_x26 = puVar7 + 4;
        pfVar1 = (float *)(puVar7 + 5);
        puVar7 = unaff_x26;
      } while (*pfVar1 <= fVar18);
    }
    puVar7 = unaff_x20;
    puVar12 = unaff_x20;
    if (unaff_x26 < unaff_x20) {
      do {
        puVar12 = puVar7 + -4;
        pfVar1 = (float *)(puVar7 + -3);
        puVar7 = puVar12;
      } while (fVar18 < *pfVar1);
    }
    uVar14 = *unaff_x19;
    uVar19 = *(undefined4 *)((long)unaff_x19 + 0xc);
    uVar11 = unaff_x19[2];
    uVar17 = unaff_x19[3];
    while( true ) {
      in_CY = puVar12 <= unaff_x26;
      in_ZR = unaff_x26 == puVar12;
      if ((bool)in_CY) break;
      func_0x0001078090dc();
      do {
        pfVar1 = (float *)(unaff_x26 + 5);
        unaff_x26 = unaff_x26 + 4;
      } while (*pfVar1 <= fVar18);
      do {
        pfVar1 = (float *)(puVar12 + -3);
        puVar12 = puVar12 + -4;
      } while (fVar18 < *pfVar1);
    }
    func_0x00010780a084();
    if (!(bool)in_ZR) {
      func_0x000107808a40(*extraout_x8_00);
    }
    uStack_84 = 0;
    unaff_x26[-4] = uVar14;
    *(float *)(unaff_x26 + -3) = fVar18;
    *(undefined4 *)((long)unaff_x26 + -0x14) = uVar19;
    unaff_x26[-2] = uVar11;
    unaff_x26[-1] = uVar17;
    goto LAB_107801dcc;
  }
  if (unaff_x19 == unaff_x20) goto LAB_1078022a4;
  func_0x000107809b6c();
  lVar8 = 0;
  do {
    func_0x0001078092cc();
    func_0x0001078024f0();
    lVar8 = lVar8 + -1;
  } while (-1 < lVar8);
  do {
    if ((long)unaff_x26 < 2) goto LAB_1078022a4;
    func_0x000107808ea4((long)unaff_x26 + -2);
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
        fVar18 = *(float *)(lVar8 + 0x28);
        fVar16 = *(float *)(lVar8 + 0x48);
        cVar4 = NAN(fVar18) || NAN(fVar16);
        bVar3 = fVar18 == fVar16;
        cVar6 = fVar18 < fVar16;
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
         (uVar15 = (ulong)(uint)*(float *)(extraout_x8_02 + 8),
         *(float *)(unaff_x19 + (extraout_x9_01 >> 1) * 4 + 1) < *(float *)(extraout_x8_02 + 8))) {
        uVar19 = *(undefined4 *)(extraout_x8_02 + 0xc);
        uVar17 = *(undefined8 *)(extraout_x8_02 + 0x18);
        uVar11 = *(undefined8 *)(extraout_x8_02 + 0x10);
        do {
          func_0x0001078097a4();
          fVar18 = (float)uVar15;
          puVar7 = extraout_x8_03;
          uVar14 = extraout_x10_00;
          if (extraout_x9_02 == 0) break;
          func_0x000107809fec();
          fVar18 = (float)uVar15;
          puVar7 = extraout_x8_04;
          uVar14 = extraout_x10_01;
        } while (*(float *)(unaff_x19 + extraout_x9_03 * 4 + 1) < fVar18);
        *puVar7 = uVar14;
        *(float *)(puVar7 + 1) = fVar18;
        *(undefined4 *)((long)puVar7 + 0xc) = uVar19;
        puVar7[3] = uVar17;
        puVar7[2] = uVar11;
      }
    }
    unaff_x26 = (undefined8 *)((long)unaff_x26 + -1);
  } while( true );
LAB_1078020dc:
  puVar12 = puVar7;
  if (puVar12 + 4 == unaff_x20) {
LAB_1078022a4:
    func_0x000107808f30(unaff_x30);
    return;
  }
  uVar15 = (ulong)(uint)*(float *)(puVar12 + 5);
  puVar7 = puVar12 + 4;
  if (*(float *)(puVar12 + 5) < *(float *)(puVar12 + 1)) {
    uVar19 = *(undefined4 *)((long)puVar12 + 0x2c);
    uVar17 = puVar12[7];
    uVar11 = puVar12[6];
    do {
      func_0x000107809c2c();
      puVar7 = unaff_x19;
      if (extraout_x11 == 0) goto LAB_107802130;
    } while ((float)uVar15 < *(float *)(extraout_x12 + -0x18));
    puVar7 = (undefined8 *)((long)unaff_x19 + extraout_x11);
LAB_107802130:
    *puVar7 = extraout_x10;
    *(float *)(puVar7 + 1) = (float)uVar15;
    *(undefined4 *)((long)puVar7 + 0xc) = uVar19;
    puVar7[3] = uVar17;
    puVar7[2] = uVar11;
    puVar7 = extraout_x9;
  }
  goto LAB_1078020dc;
LAB_107802024:
  unaff_x20 = puVar13;
  if (((ulong)puVar7 & 1) != 0) goto LAB_1078022a4;
  goto LAB_107801dc8;
}



/* Entry: 107802bfc; end: 107802cff;  */

void FUN_107802bfc(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar1;
  undefined1 uVar2;
  long extraout_x8;
  undefined4 *extraout_x10;
  long extraout_x11;
  long lVar3;
  undefined8 extraout_x11_00;
  long extraout_x11_01;
  long extraout_x12;
  undefined4 *puVar4;
  long extraout_x13;
  undefined4 *unaff_x19;
  long unaff_x20;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  
  func_0x00010780907c();
  func_0x000107809484();
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x000107802c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10dea61ca)[extraout_x8] * 4 + 0x107802c34))(1);
    return;
  }
  func_0x000107808fd0();
  func_0x000107802ac8();
  func_0x00010780967c();
  lVar3 = extraout_x11;
  do {
    bVar1 = lVar3 - unaff_x20 < 0;
    uVar2 = lVar3 == unaff_x20;
    if ((bool)uVar2) {
      return;
    }
    fVar5 = *(float *)(lVar3 + 4);
    func_0x000107809738();
    if (bVar1) {
      uVar8 = *extraout_x10;
      uVar7 = *(undefined8 *)(extraout_x10 + 4);
      uVar6 = *(undefined8 *)(extraout_x10 + 2);
      do {
        func_0x000107809a7c();
        if ((bool)uVar2) {
          uVar2 = true;
          puVar4 = unaff_x19;
          goto LAB_107802cc4;
        }
        uVar2 = fVar5 == *(float *)(extraout_x13 + 0x24);
      } while (fVar5 < *(float *)(extraout_x13 + 0x24));
      puVar4 = (undefined4 *)((long)unaff_x19 + extraout_x12 + 0x40);
LAB_107802cc4:
      *puVar4 = uVar8;
      puVar4[1] = fVar5;
      *(undefined8 *)(puVar4 + 4) = uVar7;
      *(undefined8 *)(puVar4 + 2) = uVar6;
      *(undefined8 *)(puVar4 + 6) = extraout_x11_00;
      func_0x000107809798();
      if ((bool)uVar2) {
        func_0x000107809444();
        return;
      }
    }
    func_0x000107809454();
    lVar3 = extraout_x11_01;
  } while( true );
}



/* Entry: 107803784; end: 1078037e3;  */

undefined4 * FUN_107803784(undefined4 *param_1)

{
  func_0x000107809e90();
  *(undefined8 *)(param_1 + 2) = 0;
  *param_1 = 1;
  func_0x000107809e64();
  return param_1;
}



/* Entry: 107804d50; end: 107804dbb;  */

undefined4 FUN_107804d50(long param_1,long param_2)

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



/* Entry: 107805c00; end: 107805cab;  */

undefined8 FUN_107805c00(long param_1,long param_2,undefined8 *param_3)

{
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 uVar1;
  undefined8 unaff_x30;
  float fVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  fVar2 = *(float *)(param_2 + 8);
  uVar3 = 0;
  uVar4 = 0;
  if (*(float *)(param_1 + 8) <= fVar2) {
    if (fVar2 <= *(float *)(param_3 + 1)) {
      return 0;
    }
    func_0x000107809398();
    param_3[1] = uVar4;
    *param_3 = CONCAT44(uVar3,fVar2);
    param_3[2] = extraout_x8_00;
    if (*(float *)(param_2 + 8) < *(float *)(param_1 + 8)) {
      func_0x000107808e40();
    }
  }
  else {
    if (fVar2 <= *(float *)(param_3 + 1)) {
      func_0x000107808e40();
      fVar2 = *(float *)(param_3 + 1);
      uVar3 = 0;
      uVar4 = 0;
      if (*(float *)(param_2 + 8) <= fVar2) {
        return 1;
      }
      func_0x000107809398(unaff_x30);
      uVar1 = extraout_x8_01;
    }
    else {
      func_0x000107809bf8();
      uVar1 = extraout_x8;
    }
    param_3[1] = uVar4;
    *param_3 = CONCAT44(uVar3,fVar2);
    param_3[2] = uVar1;
  }
  return 1;
}



/* Entry: 107806594; end: 1078065f7;  */

void FUN_107806594(void)

{
  undefined1 uVar1;
  long in_x4;
  long unaff_x22;
  
  func_0x000107808810();
  func_0x00010780654c();
  uVar1 = *(float *)(in_x4 + 4) < *(float *)(unaff_x22 + 4);
  if ((bool)uVar1) {
    func_0x000107808a7c();
    func_0x0001078095b4();
    if ((bool)uVar1) {
      func_0x0001078087a0();
      func_0x0001078095a4();
      if ((bool)uVar1) {
        func_0x00010780877c();
        func_0x0001078095c4();
        if ((bool)uVar1) {
          func_0x000107808758();
        }
      }
    }
  }
  return;
}



/* Entry: 107806f3c; end: 107806ffb;  */

/* WARNING: Possible PIC construction at 0x0001078070b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078071f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078071f4) */
/* WARNING: Removing unreachable block (ram,0x000107807208) */
/* WARNING: Removing unreachable block (ram,0x000107807210) */
/* WARNING: Removing unreachable block (ram,0x000107807220) */
/* WARNING: Removing unreachable block (ram,0x000107807274) */
/* WARNING: Removing unreachable block (ram,0x000107807254) */
/* WARNING: Removing unreachable block (ram,0x0001078072dc) */
/* WARNING: Removing unreachable block (ram,0x000107807218) */
/* WARNING: Removing unreachable block (ram,0x0001078072e8) */
/* WARNING: Removing unreachable block (ram,0x0001078072f0) */
/* WARNING: Removing unreachable block (ram,0x0001078072f8) */
/* WARNING: Removing unreachable block (ram,0x000107807300) */
/* WARNING: Removing unreachable block (ram,0x000107807324) */
/* WARNING: Removing unreachable block (ram,0x000107807360) */
/* WARNING: Removing unreachable block (ram,0x00010780737c) */
/* WARNING: Removing unreachable block (ram,0x0001078073e0) */
/* WARNING: Removing unreachable block (ram,0x000107807424) */
/* WARNING: Removing unreachable block (ram,0x000107807440) */
/* WARNING: Removing unreachable block (ram,0x000107807458) */
/* WARNING: Removing unreachable block (ram,0x000107807470) */
/* WARNING: Removing unreachable block (ram,0x000107807478) */
/* WARNING: Removing unreachable block (ram,0x00010780747c) */
/* WARNING: Removing unreachable block (ram,0x000107807480) */
/* WARNING: Removing unreachable block (ram,0x0001078074b4) */
/* WARNING: Removing unreachable block (ram,0x0001078074c0) */
/* WARNING: Removing unreachable block (ram,0x0001078074c8) */
/* WARNING: Removing unreachable block (ram,0x000107807638) */
/* WARNING: Removing unreachable block (ram,0x000107807644) */
/* WARNING: Removing unreachable block (ram,0x000107807670) */
/* WARNING: Removing unreachable block (ram,0x000107807694) */
/* WARNING: Removing unreachable block (ram,0x0001078076c0) */
/* WARNING: Removing unreachable block (ram,0x0001078076d8) */
/* WARNING: Removing unreachable block (ram,0x0001078076cc) */
/* WARNING: Removing unreachable block (ram,0x000107808a68) */
/* WARNING: Removing unreachable block (ram,0x00010780764c) */
/* WARNING: Removing unreachable block (ram,0x0001078074d0) */
/* WARNING: Removing unreachable block (ram,0x0001078074f0) */
/* WARNING: Removing unreachable block (ram,0x00010780752c) */
/* WARNING: Removing unreachable block (ram,0x000107807510) */
/* WARNING: Removing unreachable block (ram,0x000107807518) */
/* WARNING: Removing unreachable block (ram,0x00010780751c) */
/* WARNING: Removing unreachable block (ram,0x000107807520) */
/* WARNING: Removing unreachable block (ram,0x000107807524) */
/* WARNING: Removing unreachable block (ram,0x000107807534) */
/* WARNING: Removing unreachable block (ram,0x000107807554) */
/* WARNING: Removing unreachable block (ram,0x000107807618) */
/* WARNING: Removing unreachable block (ram,0x000107807560) */
/* WARNING: Removing unreachable block (ram,0x0001078075a0) */
/* WARNING: Removing unreachable block (ram,0x0001078075b0) */
/* WARNING: Removing unreachable block (ram,0x0001078075b4) */
/* WARNING: Removing unreachable block (ram,0x0001078075b8) */
/* WARNING: Removing unreachable block (ram,0x0001078075c8) */
/* WARNING: Removing unreachable block (ram,0x0001078075e4) */
/* WARNING: Removing unreachable block (ram,0x0001078075f4) */
/* WARNING: Removing unreachable block (ram,0x0001078075f8) */
/* WARNING: Removing unreachable block (ram,0x000107807600) */
/* WARNING: Removing unreachable block (ram,0x00010780762c) */
/* WARNING: Removing unreachable block (ram,0x00010780730c) */
/* WARNING: Removing unreachable block (ram,0x0001078003c8) */
/* WARNING: Removing unreachable block (ram,0x0001078003e8) */
/* WARNING: Removing unreachable block (ram,0x0001078003f8) */
/* WARNING: Removing unreachable block (ram,0x000107800410) */
/* WARNING: Removing unreachable block (ram,0x000107800418) */
/* WARNING: Removing unreachable block (ram,0x000107800428) */
/* WARNING: Removing unreachable block (ram,0x00010780042c) */
/* WARNING: Removing unreachable block (ram,0x000107800430) */
/* WARNING: Removing unreachable block (ram,0x000107800434) */
/* WARNING: Removing unreachable block (ram,0x000107800438) */
/* WARNING: Removing unreachable block (ram,0x00010780043c) */
/* WARNING: Removing unreachable block (ram,0x000107800448) */
/* WARNING: Removing unreachable block (ram,0x000107800458) */
/* WARNING: Removing unreachable block (ram,0x00010780045c) */
/* WARNING: Removing unreachable block (ram,0x000107800460) */
/* WARNING: Removing unreachable block (ram,0x000107800474) */
/* WARNING: Removing unreachable block (ram,0x00010780048c) */
/* WARNING: Removing unreachable block (ram,0x00010780049c) */
/* WARNING: Removing unreachable block (ram,0x0001078004c4) */
/* WARNING: Removing unreachable block (ram,0x0001078004cc) */
/* WARNING: Removing unreachable block (ram,0x0001078004e0) */
/* WARNING: Removing unreachable block (ram,0x0001078004e4) */
/* WARNING: Removing unreachable block (ram,0x0001078004e8) */
/* WARNING: Removing unreachable block (ram,0x0001078004ec) */
/* WARNING: Removing unreachable block (ram,0x0001078004f0) */
/* WARNING: Removing unreachable block (ram,0x0001078004f4) */
/* WARNING: Removing unreachable block (ram,0x0001078004fc) */
/* WARNING: Removing unreachable block (ram,0x000107800510) */
/* WARNING: Removing unreachable block (ram,0x000107800528) */
/* WARNING: Removing unreachable block (ram,0x000107800538) */
/* WARNING: Removing unreachable block (ram,0x000107800550) */
/* WARNING: Removing unreachable block (ram,0x000107800558) */
/* WARNING: Removing unreachable block (ram,0x000107800568) */
/* WARNING: Removing unreachable block (ram,0x00010780056c) */
/* WARNING: Removing unreachable block (ram,0x000107800570) */
/* WARNING: Removing unreachable block (ram,0x000107800574) */
/* WARNING: Removing unreachable block (ram,0x000107800578) */
/* WARNING: Removing unreachable block (ram,0x00010780057c) */
/* WARNING: Removing unreachable block (ram,0x000107800588) */
/* WARNING: Removing unreachable block (ram,0x00010780059c) */
/* WARNING: Removing unreachable block (ram,0x0001078005a8) */
/* WARNING: Removing unreachable block (ram,0x0001078005ac) */
/* WARNING: Removing unreachable block (ram,0x0001078005c0) */
/* WARNING: Removing unreachable block (ram,0x0001078005c4) */
/* WARNING: Removing unreachable block (ram,0x0001078005c8) */
/* WARNING: Removing unreachable block (ram,0x0001078005ec) */
/* WARNING: Removing unreachable block (ram,0x0001078005f0) */
/* WARNING: Removing unreachable block (ram,0x0001078007e8) */
/* WARNING: Removing unreachable block (ram,0x0001078007ec) */
/* WARNING: Removing unreachable block (ram,0x0001078007f4) */
/* WARNING: Removing unreachable block (ram,0x0001078007f8) */
/* WARNING: Removing unreachable block (ram,0x000107800800) */
/* WARNING: Removing unreachable block (ram,0x000107800808) */
/* WARNING: Removing unreachable block (ram,0x000107800810) */
/* WARNING: Removing unreachable block (ram,0x000107800f64) */
/* WARNING: Removing unreachable block (ram,0x000107800818) */
/* WARNING: Removing unreachable block (ram,0x000107800f14) */
/* WARNING: Removing unreachable block (ram,0x000107800820) */
/* WARNING: Removing unreachable block (ram,0x000107800fcc) */
/* WARNING: Removing unreachable block (ram,0x000107800fd0) */
/* WARNING: Removing unreachable block (ram,0x000107800fd8) */
/* WARNING: Removing unreachable block (ram,0x000107800fe0) */
/* WARNING: Removing unreachable block (ram,0x000107800fe4) */
/* WARNING: Removing unreachable block (ram,0x000107800fec) */
/* WARNING: Removing unreachable block (ram,0x000107800ffc) */
/* WARNING: Removing unreachable block (ram,0x000107801004) */
/* WARNING: Removing unreachable block (ram,0x000107801008) */
/* WARNING: Removing unreachable block (ram,0x000107800828) */
/* WARNING: Removing unreachable block (ram,0x000107800840) */
/* WARNING: Removing unreachable block (ram,0x000107800844) */
/* WARNING: Removing unreachable block (ram,0x00010780084c) */
/* WARNING: Removing unreachable block (ram,0x000107800854) */
/* WARNING: Removing unreachable block (ram,0x000107800858) */
/* WARNING: Removing unreachable block (ram,0x00010780085c) */
/* WARNING: Removing unreachable block (ram,0x0001078008f8) */
/* WARNING: Removing unreachable block (ram,0x0001078008fc) */
/* WARNING: Removing unreachable block (ram,0x00010780094c) */
/* WARNING: Removing unreachable block (ram,0x000107800908) */
/* WARNING: Removing unreachable block (ram,0x00010780090c) */
/* WARNING: Removing unreachable block (ram,0x000107800910) */
/* WARNING: Removing unreachable block (ram,0x000107800918) */
/* WARNING: Removing unreachable block (ram,0x00010780091c) */
/* WARNING: Removing unreachable block (ram,0x000107800920) */
/* WARNING: Removing unreachable block (ram,0x000107800924) */
/* WARNING: Removing unreachable block (ram,0x00010780092c) */
/* WARNING: Removing unreachable block (ram,0x000107800930) */
/* WARNING: Removing unreachable block (ram,0x000107800934) */
/* WARNING: Removing unreachable block (ram,0x000107800950) */
/* WARNING: Removing unreachable block (ram,0x000107800958) */
/* WARNING: Removing unreachable block (ram,0x000107800964) */
/* WARNING: Removing unreachable block (ram,0x00010780096c) */
/* WARNING: Removing unreachable block (ram,0x000107800974) */
/* WARNING: Removing unreachable block (ram,0x00010780098c) */
/* WARNING: Removing unreachable block (ram,0x0001078009b4) */
/* WARNING: Removing unreachable block (ram,0x0001078009b8) */
/* WARNING: Removing unreachable block (ram,0x0001078009c0) */
/* WARNING: Removing unreachable block (ram,0x0001078009d0) */
/* WARNING: Removing unreachable block (ram,0x000107800994) */
/* WARNING: Removing unreachable block (ram,0x00010780099c) */
/* WARNING: Removing unreachable block (ram,0x0001078009a8) */
/* WARNING: Removing unreachable block (ram,0x0001078009ac) */
/* WARNING: Removing unreachable block (ram,0x0001078009b0) */
/* WARNING: Removing unreachable block (ram,0x000107800978) */
/* WARNING: Removing unreachable block (ram,0x000107800980) */
/* WARNING: Removing unreachable block (ram,0x000107800984) */
/* WARNING: Removing unreachable block (ram,0x00010780093c) */
/* WARNING: Removing unreachable block (ram,0x000107800860) */
/* WARNING: Removing unreachable block (ram,0x000107800868) */
/* WARNING: Removing unreachable block (ram,0x00010780086c) */
/* WARNING: Removing unreachable block (ram,0x000107800870) */
/* WARNING: Removing unreachable block (ram,0x000107800878) */
/* WARNING: Removing unreachable block (ram,0x000107800888) */
/* WARNING: Removing unreachable block (ram,0x000107800880) */
/* WARNING: Removing unreachable block (ram,0x000107800894) */
/* WARNING: Removing unreachable block (ram,0x00010780089c) */
/* WARNING: Removing unreachable block (ram,0x0001078008a0) */
/* WARNING: Removing unreachable block (ram,0x0001078008a4) */
/* WARNING: Removing unreachable block (ram,0x0001078008ac) */
/* WARNING: Removing unreachable block (ram,0x0001078008b0) */
/* WARNING: Removing unreachable block (ram,0x0001078008b4) */
/* WARNING: Removing unreachable block (ram,0x0001078008b8) */
/* WARNING: Removing unreachable block (ram,0x0001078008c0) */
/* WARNING: Removing unreachable block (ram,0x0001078008c4) */
/* WARNING: Removing unreachable block (ram,0x0001078008c8) */
/* WARNING: Removing unreachable block (ram,0x0001078008d8) */
/* WARNING: Removing unreachable block (ram,0x0001078008e4) */
/* WARNING: Removing unreachable block (ram,0x0001078008d0) */
/* WARNING: Removing unreachable block (ram,0x000107800bc4) */
/* WARNING: Removing unreachable block (ram,0x000107800d34) */
/* WARNING: Removing unreachable block (ram,0x000107800d3c) */
/* WARNING: Removing unreachable block (ram,0x000107800d44) */
/* WARNING: Removing unreachable block (ram,0x000107800d4c) */
/* WARNING: Removing unreachable block (ram,0x000107800d54) */
/* WARNING: Removing unreachable block (ram,0x000107800f7c) */
/* WARNING: Removing unreachable block (ram,0x000107800d5c) */
/* WARNING: Removing unreachable block (ram,0x000107800f38) */
/* WARNING: Removing unreachable block (ram,0x000107800f40) */
/* WARNING: Removing unreachable block (ram,0x000107800f44) */
/* WARNING: Removing unreachable block (ram,0x000107800f48) */
/* WARNING: Removing unreachable block (ram,0x000107800d64) */
/* WARNING: Removing unreachable block (ram,0x000107801054) */
/* WARNING: Removing unreachable block (ram,0x000107801058) */
/* WARNING: Removing unreachable block (ram,0x000107801060) */
/* WARNING: Removing unreachable block (ram,0x000107801068) */
/* WARNING: Removing unreachable block (ram,0x00010780106c) */
/* WARNING: Removing unreachable block (ram,0x000107801074) */
/* WARNING: Removing unreachable block (ram,0x000107801080) */
/* WARNING: Removing unreachable block (ram,0x000107801084) */
/* WARNING: Removing unreachable block (ram,0x000107801090) */
/* WARNING: Removing unreachable block (ram,0x000107801098) */
/* WARNING: Removing unreachable block (ram,0x00010780109c) */
/* WARNING: Removing unreachable block (ram,0x000107800d6c) */
/* WARNING: Removing unreachable block (ram,0x000107800d84) */
/* WARNING: Removing unreachable block (ram,0x000107800d88) */
/* WARNING: Removing unreachable block (ram,0x000107800d90) */
/* WARNING: Removing unreachable block (ram,0x000107800d94) */
/* WARNING: Removing unreachable block (ram,0x000107800d98) */
/* WARNING: Removing unreachable block (ram,0x000107800d9c) */
/* WARNING: Removing unreachable block (ram,0x000107800e2c) */
/* WARNING: Removing unreachable block (ram,0x000107800e30) */
/* WARNING: Removing unreachable block (ram,0x000107800e78) */
/* WARNING: Removing unreachable block (ram,0x000107800e3c) */
/* WARNING: Removing unreachable block (ram,0x000107800e40) */
/* WARNING: Removing unreachable block (ram,0x000107800e44) */
/* WARNING: Removing unreachable block (ram,0x000107800e48) */
/* WARNING: Removing unreachable block (ram,0x000107800e4c) */
/* WARNING: Removing unreachable block (ram,0x000107800e50) */
/* WARNING: Removing unreachable block (ram,0x000107800e54) */
/* WARNING: Removing unreachable block (ram,0x000107800e58) */
/* WARNING: Removing unreachable block (ram,0x000107800e5c) */
/* WARNING: Removing unreachable block (ram,0x000107800e60) */
/* WARNING: Removing unreachable block (ram,0x000107800e80) */
/* WARNING: Removing unreachable block (ram,0x000107800e84) */
/* WARNING: Removing unreachable block (ram,0x000107800e8c) */
/* WARNING: Removing unreachable block (ram,0x000107800e98) */
/* WARNING: Removing unreachable block (ram,0x000107800ea0) */
/* WARNING: Removing unreachable block (ram,0x000107800ea8) */
/* WARNING: Removing unreachable block (ram,0x000107800ec0) */
/* WARNING: Removing unreachable block (ram,0x000107800ee8) */
/* WARNING: Removing unreachable block (ram,0x000107800eec) */
/* WARNING: Removing unreachable block (ram,0x000107800ef4) */
/* WARNING: Removing unreachable block (ram,0x000107800f04) */
/* WARNING: Removing unreachable block (ram,0x000107800ec8) */
/* WARNING: Removing unreachable block (ram,0x000107800ed0) */
/* WARNING: Removing unreachable block (ram,0x000107800edc) */
/* WARNING: Removing unreachable block (ram,0x000107800ee0) */
/* WARNING: Removing unreachable block (ram,0x000107800ee4) */
/* WARNING: Removing unreachable block (ram,0x000107800eac) */
/* WARNING: Removing unreachable block (ram,0x000107800eb4) */
/* WARNING: Removing unreachable block (ram,0x000107800eb8) */
/* WARNING: Removing unreachable block (ram,0x000107800e68) */
/* WARNING: Removing unreachable block (ram,0x000107800da0) */
/* WARNING: Removing unreachable block (ram,0x000107800da8) */
/* WARNING: Removing unreachable block (ram,0x000107800dac) */
/* WARNING: Removing unreachable block (ram,0x000107800db0) */
/* WARNING: Removing unreachable block (ram,0x000107800db8) */
/* WARNING: Removing unreachable block (ram,0x000107800dc8) */
/* WARNING: Removing unreachable block (ram,0x000107800dc0) */
/* WARNING: Removing unreachable block (ram,0x000107800dd4) */
/* WARNING: Removing unreachable block (ram,0x000107800ddc) */
/* WARNING: Removing unreachable block (ram,0x000107800de0) */
/* WARNING: Removing unreachable block (ram,0x000107800de4) */
/* WARNING: Removing unreachable block (ram,0x000107800de8) */
/* WARNING: Removing unreachable block (ram,0x000107800dec) */
/* WARNING: Removing unreachable block (ram,0x000107800df0) */
/* WARNING: Removing unreachable block (ram,0x000107800df4) */
/* WARNING: Removing unreachable block (ram,0x000107800df8) */
/* WARNING: Removing unreachable block (ram,0x000107800dfc) */
/* WARNING: Removing unreachable block (ram,0x000107800e00) */
/* WARNING: Removing unreachable block (ram,0x000107800e10) */
/* WARNING: Removing unreachable block (ram,0x000107800e1c) */
/* WARNING: Removing unreachable block (ram,0x000107800e08) */
/* WARNING: Removing unreachable block (ram,0x0001078005f4) */
/* WARNING: Removing unreachable block (ram,0x0001078009d4) */
/* WARNING: Removing unreachable block (ram,0x0001078009dc) */
/* WARNING: Removing unreachable block (ram,0x0001078009e4) */
/* WARNING: Removing unreachable block (ram,0x0001078009ec) */
/* WARNING: Removing unreachable block (ram,0x0001078009f4) */
/* WARNING: Removing unreachable block (ram,0x0001078009fc) */
/* WARNING: Removing unreachable block (ram,0x000107800f70) */
/* WARNING: Removing unreachable block (ram,0x000107800a04) */
/* WARNING: Removing unreachable block (ram,0x000107800f20) */
/* WARNING: Removing unreachable block (ram,0x000107800a0c) */
/* WARNING: Removing unreachable block (ram,0x000107801010) */
/* WARNING: Removing unreachable block (ram,0x000107801014) */
/* WARNING: Removing unreachable block (ram,0x00010780101c) */
/* WARNING: Removing unreachable block (ram,0x000107801024) */
/* WARNING: Removing unreachable block (ram,0x000107801028) */
/* WARNING: Removing unreachable block (ram,0x000107801030) */
/* WARNING: Removing unreachable block (ram,0x000107801040) */
/* WARNING: Removing unreachable block (ram,0x000107801048) */
/* WARNING: Removing unreachable block (ram,0x00010780104c) */
/* WARNING: Removing unreachable block (ram,0x000107800a14) */
/* WARNING: Removing unreachable block (ram,0x000107800a2c) */
/* WARNING: Removing unreachable block (ram,0x000107800a30) */
/* WARNING: Removing unreachable block (ram,0x000107800a38) */
/* WARNING: Removing unreachable block (ram,0x000107800a40) */
/* WARNING: Removing unreachable block (ram,0x000107800a44) */
/* WARNING: Removing unreachable block (ram,0x000107800a48) */
/* WARNING: Removing unreachable block (ram,0x000107800ae0) */
/* WARNING: Removing unreachable block (ram,0x000107800ae4) */
/* WARNING: Removing unreachable block (ram,0x000107800b34) */
/* WARNING: Removing unreachable block (ram,0x000107800af0) */
/* WARNING: Removing unreachable block (ram,0x000107800af4) */
/* WARNING: Removing unreachable block (ram,0x000107800af8) */
/* WARNING: Removing unreachable block (ram,0x000107800b00) */
/* WARNING: Removing unreachable block (ram,0x000107800b04) */
/* WARNING: Removing unreachable block (ram,0x000107800b08) */
/* WARNING: Removing unreachable block (ram,0x000107800b0c) */
/* WARNING: Removing unreachable block (ram,0x000107800b14) */
/* WARNING: Removing unreachable block (ram,0x000107800b18) */
/* WARNING: Removing unreachable block (ram,0x000107800b1c) */
/* WARNING: Removing unreachable block (ram,0x000107800b3c) */
/* WARNING: Removing unreachable block (ram,0x000107800b40) */
/* WARNING: Removing unreachable block (ram,0x000107800b48) */
/* WARNING: Removing unreachable block (ram,0x000107800b54) */
/* WARNING: Removing unreachable block (ram,0x000107800b5c) */
/* WARNING: Removing unreachable block (ram,0x000107800b64) */
/* WARNING: Removing unreachable block (ram,0x000107800b7c) */
/* WARNING: Removing unreachable block (ram,0x000107800ba4) */
/* WARNING: Removing unreachable block (ram,0x000107800ba8) */
/* WARNING: Removing unreachable block (ram,0x000107800bb0) */
/* WARNING: Removing unreachable block (ram,0x000107800bc0) */
/* WARNING: Removing unreachable block (ram,0x000107800b84) */
/* WARNING: Removing unreachable block (ram,0x000107800b8c) */
/* WARNING: Removing unreachable block (ram,0x000107800b98) */
/* WARNING: Removing unreachable block (ram,0x000107800b9c) */
/* WARNING: Removing unreachable block (ram,0x000107800ba0) */
/* WARNING: Removing unreachable block (ram,0x000107800b68) */
/* WARNING: Removing unreachable block (ram,0x000107800b70) */
/* WARNING: Removing unreachable block (ram,0x000107800b74) */
/* WARNING: Removing unreachable block (ram,0x000107800b24) */
/* WARNING: Removing unreachable block (ram,0x000107800a4c) */
/* WARNING: Removing unreachable block (ram,0x000107800a54) */
/* WARNING: Removing unreachable block (ram,0x000107800a58) */
/* WARNING: Removing unreachable block (ram,0x000107800a5c) */
/* WARNING: Removing unreachable block (ram,0x000107800a64) */
/* WARNING: Removing unreachable block (ram,0x000107800a74) */
/* WARNING: Removing unreachable block (ram,0x000107800a6c) */
/* WARNING: Removing unreachable block (ram,0x000107800a80) */
/* WARNING: Removing unreachable block (ram,0x000107800a88) */
/* WARNING: Removing unreachable block (ram,0x000107800a8c) */
/* WARNING: Removing unreachable block (ram,0x000107800a90) */
/* WARNING: Removing unreachable block (ram,0x000107800a98) */
/* WARNING: Removing unreachable block (ram,0x000107800a9c) */
/* WARNING: Removing unreachable block (ram,0x000107800aa0) */
/* WARNING: Removing unreachable block (ram,0x000107800aa4) */
/* WARNING: Removing unreachable block (ram,0x000107800aac) */
/* WARNING: Removing unreachable block (ram,0x000107800ab0) */
/* WARNING: Removing unreachable block (ram,0x000107800ab4) */
/* WARNING: Removing unreachable block (ram,0x000107800ac4) */
/* WARNING: Removing unreachable block (ram,0x000107800ad0) */
/* WARNING: Removing unreachable block (ram,0x000107800abc) */
/* WARNING: Removing unreachable block (ram,0x0001078005f8) */
/* WARNING: Removing unreachable block (ram,0x000107800600) */
/* WARNING: Removing unreachable block (ram,0x000107800608) */
/* WARNING: Removing unreachable block (ram,0x000107800610) */
/* WARNING: Removing unreachable block (ram,0x000107800618) */
/* WARNING: Removing unreachable block (ram,0x000107800620) */
/* WARNING: Removing unreachable block (ram,0x000107800f58) */
/* WARNING: Removing unreachable block (ram,0x000107800628) */
/* WARNING: Removing unreachable block (ram,0x000107800f08) */
/* WARNING: Removing unreachable block (ram,0x000107800f28) */
/* WARNING: Removing unreachable block (ram,0x000107800f2c) */
/* WARNING: Removing unreachable block (ram,0x000107800f30) */
/* WARNING: Removing unreachable block (ram,0x000107800f50) */
/* WARNING: Removing unreachable block (ram,0x000107800630) */
/* WARNING: Removing unreachable block (ram,0x000107800f88) */
/* WARNING: Removing unreachable block (ram,0x000107800f8c) */
/* WARNING: Removing unreachable block (ram,0x000107800f94) */
/* WARNING: Removing unreachable block (ram,0x000107800f9c) */
/* WARNING: Removing unreachable block (ram,0x000107800fa0) */
/* WARNING: Removing unreachable block (ram,0x000107800fa8) */
/* WARNING: Removing unreachable block (ram,0x000107800fb8) */
/* WARNING: Removing unreachable block (ram,0x000107800fc0) */
/* WARNING: Removing unreachable block (ram,0x000107800fc4) */
/* WARNING: Removing unreachable block (ram,0x000107800638) */
/* WARNING: Removing unreachable block (ram,0x000107800650) */
/* WARNING: Removing unreachable block (ram,0x000107800654) */
/* WARNING: Removing unreachable block (ram,0x00010780065c) */
/* WARNING: Removing unreachable block (ram,0x000107800664) */
/* WARNING: Removing unreachable block (ram,0x000107800668) */
/* WARNING: Removing unreachable block (ram,0x00010780066c) */
/* WARNING: Removing unreachable block (ram,0x000107800704) */
/* WARNING: Removing unreachable block (ram,0x000107800708) */
/* WARNING: Removing unreachable block (ram,0x000107800758) */
/* WARNING: Removing unreachable block (ram,0x000107800714) */
/* WARNING: Removing unreachable block (ram,0x000107800718) */
/* WARNING: Removing unreachable block (ram,0x00010780071c) */
/* WARNING: Removing unreachable block (ram,0x000107800724) */
/* WARNING: Removing unreachable block (ram,0x000107800728) */
/* WARNING: Removing unreachable block (ram,0x00010780072c) */
/* WARNING: Removing unreachable block (ram,0x000107800730) */
/* WARNING: Removing unreachable block (ram,0x000107800738) */
/* WARNING: Removing unreachable block (ram,0x00010780073c) */
/* WARNING: Removing unreachable block (ram,0x000107800740) */
/* WARNING: Removing unreachable block (ram,0x000107800760) */
/* WARNING: Removing unreachable block (ram,0x000107800764) */
/* WARNING: Removing unreachable block (ram,0x00010780076c) */
/* WARNING: Removing unreachable block (ram,0x000107800778) */
/* WARNING: Removing unreachable block (ram,0x000107800780) */
/* WARNING: Removing unreachable block (ram,0x000107800788) */
/* WARNING: Removing unreachable block (ram,0x0001078007a0) */
/* WARNING: Removing unreachable block (ram,0x0001078007c8) */
/* WARNING: Removing unreachable block (ram,0x0001078007cc) */
/* WARNING: Removing unreachable block (ram,0x0001078007d4) */
/* WARNING: Removing unreachable block (ram,0x0001078007e4) */
/* WARNING: Removing unreachable block (ram,0x0001078007a8) */
/* WARNING: Removing unreachable block (ram,0x0001078007b0) */
/* WARNING: Removing unreachable block (ram,0x0001078007bc) */
/* WARNING: Removing unreachable block (ram,0x0001078007c0) */
/* WARNING: Removing unreachable block (ram,0x0001078007c4) */
/* WARNING: Removing unreachable block (ram,0x00010780078c) */
/* WARNING: Removing unreachable block (ram,0x000107800794) */
/* WARNING: Removing unreachable block (ram,0x000107800798) */
/* WARNING: Removing unreachable block (ram,0x000107800748) */
/* WARNING: Removing unreachable block (ram,0x000107800670) */
/* WARNING: Removing unreachable block (ram,0x000107800678) */
/* WARNING: Removing unreachable block (ram,0x00010780067c) */
/* WARNING: Removing unreachable block (ram,0x000107800680) */
/* WARNING: Removing unreachable block (ram,0x000107800688) */
/* WARNING: Removing unreachable block (ram,0x000107800698) */
/* WARNING: Removing unreachable block (ram,0x000107800690) */
/* WARNING: Removing unreachable block (ram,0x0001078006a4) */
/* WARNING: Removing unreachable block (ram,0x0001078006ac) */
/* WARNING: Removing unreachable block (ram,0x0001078006b0) */
/* WARNING: Removing unreachable block (ram,0x0001078006b4) */
/* WARNING: Removing unreachable block (ram,0x0001078006bc) */
/* WARNING: Removing unreachable block (ram,0x0001078006c0) */
/* WARNING: Removing unreachable block (ram,0x0001078006c4) */
/* WARNING: Removing unreachable block (ram,0x0001078006c8) */
/* WARNING: Removing unreachable block (ram,0x0001078006d0) */
/* WARNING: Removing unreachable block (ram,0x0001078006d4) */
/* WARNING: Removing unreachable block (ram,0x0001078006d8) */
/* WARNING: Removing unreachable block (ram,0x0001078006e8) */
/* WARNING: Removing unreachable block (ram,0x0001078006f4) */
/* WARNING: Removing unreachable block (ram,0x000107800bcc) */
/* WARNING: Removing unreachable block (ram,0x000107800bd0) */
/* WARNING: Removing unreachable block (ram,0x000107800bd8) */
/* WARNING: Removing unreachable block (ram,0x000107800ca8) */
/* WARNING: Removing unreachable block (ram,0x000107800c74) */
/* WARNING: Removing unreachable block (ram,0x000107800d10) */
/* WARNING: Removing unreachable block (ram,0x000107800d28) */
/* WARNING: Removing unreachable block (ram,0x0001078010a4) */
/* WARNING: Removing unreachable block (ram,0x0001078010e4) */
/* WARNING: Removing unreachable block (ram,0x0001078010f0) */
/* WARNING: Removing unreachable block (ram,0x000107809878) */
/* WARNING: Removing unreachable block (ram,0x00010780987c) */
/* WARNING: Removing unreachable block (ram,0x0001078006e0) */

ulong * FUN_107806f3c(ulong param_1,ulong *param_2,ulong *param_3,ulong param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  int iVar3;
  undefined1 *puVar4;
  char in_NG;
  char cVar5;
  undefined1 in_ZR;
  bool bVar6;
  char in_OV;
  char cVar7;
  bool bVar8;
  undefined8 extraout_x8;
  undefined8 uVar9;
  undefined8 extraout_x8_00;
  ulong *puVar10;
  undefined8 extraout_x8_01;
  double *pdVar11;
  long extraout_x10;
  long lVar12;
  long extraout_x10_00;
  ulong *puVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 extraout_x11;
  long extraout_x12;
  long extraout_x13;
  long unaff_x19;
  ulong *unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  undefined1 *unaff_x23;
  ulong *unaff_x24;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *puVar16;
  undefined *puVar17;
  float fVar18;
  ulong uVar19;
  double dVar20;
  ulong in_register_00005008;
  double dVar21;
  float fVar22;
  double dVar23;
  double unaff_d15;
  undefined1 auStack_30 [24];
  undefined8 uStack_18;
  
  puVar16 = &stack0xfffffffffffffff0;
  func_0x000107808a58();
  func_0x000107809938();
  if ((in_NG == in_OV) && (func_0x000107808d30(), in_NG == in_OV)) {
    func_0x000107808ae8();
    lVar12 = extraout_x10;
    if ((in_NG != in_OV) && (*(float *)(extraout_x10 + 0xc) < *(float *)(extraout_x10 + 0x24))) {
      lVar12 = extraout_x10 + 0x18;
    }
    fVar22 = *(float *)(lVar12 + 0xc);
    fVar18 = *(float *)(param_4 + 0xc);
    param_1 = (ulong)(uint)fVar18;
    in_register_00005008 = 0;
    cVar7 = NAN(fVar22) || NAN(fVar18);
    in_ZR = fVar22 == fVar18;
    cVar5 = fVar22 < fVar18;
    if (!(bool)cVar5) {
      func_0x00010780a100();
      do {
        func_0x0001078098ac();
        if (cVar5 != cVar7) break;
        func_0x00010780966c();
        puVar13 = (ulong *)((long)param_2 + extraout_x10_00 * extraout_x12);
        if ((extraout_x13 + 2 < (long)param_3) &&
           (*(float *)((long)puVar13 + 0xc) < *(float *)((long)puVar13 + 0x24))) {
          puVar13 = puVar13 + 3;
        }
        fVar22 = *(float *)((long)puVar13 + 0xc);
        fVar18 = (float)param_1;
        cVar7 = NAN(fVar22) || NAN(fVar18);
        in_ZR = fVar22 == fVar18;
        cVar5 = fVar22 < fVar18;
      } while (!(bool)cVar5);
      func_0x000107809c14();
      *(undefined8 *)(param_4 + 0x10) = extraout_x11;
    }
  }
  func_0x0001078087c4(uStack_18);
  if ((bool)in_ZR) {
    return param_2;
  }
  puVar17 = &UNK_107806ffc;
  ___stack_chk_fail();
  puVar4 = auStack_30;
code_r0x000107806ffc:
  uVar15 = param_4;
  *(undefined8 *)(puVar4 + -0x50) = unaff_x28;
  *(undefined8 *)(puVar4 + -0x48) = unaff_x27;
  *(ulong **)(puVar4 + -0x40) = unaff_x24;
  *(undefined1 **)(puVar4 + -0x38) = unaff_x23;
  *(long *)(puVar4 + -0x30) = unaff_x22;
  *(ulong *)(puVar4 + -0x28) = unaff_x21;
  *(ulong **)(puVar4 + -0x20) = unaff_x20;
  *(long *)(puVar4 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar4 + -0x10) = puVar16;
  *(undefined **)(puVar4 + -8) = puVar17;
  puVar16 = puVar4 + -0x10;
  func_0x000107808a28();
  *(undefined8 *)(puVar4 + -0x58) = extraout_x8_00;
  unaff_x23 = puVar4 + -0x268;
  unaff_x22 = *param_3 * -0x18;
  unaff_x24 = param_3 + *param_3 * 3 + -2;
  do {
    unaff_x22 = unaff_x22 + 0x18;
    bVar8 = unaff_x22 == 0x18;
    if (bVar8) {
      func_0x0001078087c4(*(undefined8 *)(puVar4 + -0x58));
      if (bVar8) {
        return param_2;
      }
      ___stack_chk_fail();
      func_0x000107809e08();
      puVar17 = &UNK_107807154;
      puVar13 = param_2;
      func_0x000104bd46a0();
      puVar4 = puVar4 + -0x270;
      while( true ) {
        puVar10 = puVar13 + 1;
        iVar3 = (int)*puVar13;
        if (iVar3 == iVar3 >> 0x1f) break;
        if (iVar3 < 0) {
          puVar10 = (ulong *)*puVar10;
        }
        *(ulong **)(puVar4 + -0x40) = unaff_x24;
        *(undefined1 **)(puVar4 + -0x38) = unaff_x23;
        *(undefined8 *)(puVar4 + -0x30) = 0x18;
        *(ulong **)(puVar4 + -0x28) = param_2;
        *(ulong **)(puVar4 + -0x20) = unaff_x20;
        *(long *)(puVar4 + -0x18) = unaff_x19;
        *(undefined1 **)(puVar4 + -0x10) = puVar16;
        *(undefined **)(puVar4 + -8) = puVar17;
        puVar16 = puVar4 + -0x10;
        func_0x0001078087f8();
        *(undefined8 *)(puVar4 + -0x48) = extraout_x8_01;
        func_0x00010780936c();
        func_0x000107809ec0();
        *(ulong *)(puVar4 + -0x68) = in_register_00005008;
        *(ulong *)(puVar4 + -0x70) = param_1;
        *(undefined8 *)(puVar4 + -0x60) = *(undefined8 *)(unaff_x19 + 0x58);
        func_0x0001078099b8();
        puVar17 = &UNK_1078071f4;
        puVar4 = puVar4 + -0xa0;
        puVar13 = param_3;
        param_3 = puVar10;
      }
      if (iVar3 < 0) {
        puVar10 = (ulong *)*puVar10;
      }
      pdVar11 = (double *)*param_3;
      uVar15 = *puVar10;
      dVar23 = *pdVar11;
      dVar21 = pdVar11[3];
      dVar20 = pdVar11[2];
      puVar10[uVar15 * 4 + 2] = (ulong)pdVar11[1];
      puVar10[uVar15 * 4 + 1] = (ulong)dVar23;
      puVar10[uVar15 * 4 + 4] = (ulong)dVar21;
      puVar10[uVar15 * 4 + 3] = (ulong)dVar20;
      *puVar10 = uVar15 + 1;
      if (uVar15 + 1 < 0x11) {
        return puVar13;
      }
      func_0x000107809884();
      *(undefined1 **)(puVar4 + 0x90) = puVar16;
      *(undefined **)(puVar4 + 0x98) = puVar17;
      puVar13 = param_3;
      func_0x000107808a58();
      *(undefined8 *)(puVar4 + -0x10) = extraout_x8;
      *(undefined8 *)(puVar4 + -0x6a8) = 0;
      uVar14 = puVar13[0xc];
      func_0x0001077ffe04();
      uVar15 = uVar14;
      func_0x0001077ffc80();
      puVar13 = puVar10 + 1;
      func_0x000107801344(puVar4 + -0x460,puVar13,puVar13 + *puVar10 * 4);
      func_0x000107801344(puVar4 + -0x688,puVar13,puVar13 + *puVar10 * 4);
      func_0x0001078090c4();
      *(ulong *)(puVar4 + -0x6f0) = uVar14;
      *(ulong **)(puVar4 + -0x6e8) = param_3;
      *(ulong *)(puVar4 + -0x6f8) = uVar15;
      uVar9 = 0;
      if (*(long *)(puVar4 + -0x238) != 0) {
        func_0x000107808c30();
        func_0x000107801438();
        uVar9 = *(undefined8 *)(puVar4 + -0x238);
      }
      func_0x000107808f7c(uVar9);
      *(double *)(puVar4 + -0x6d0) = unaff_d15;
      do {
        func_0x0001078090b8();
        func_0x000107808a04();
        func_0x0001078088cc();
        func_0x0001078087d8();
        if (dVar20 < *(double *)(puVar4 + -0x6d0)) {
code_r0x0001078003ac:
          *(double *)(puVar4 + -0x6d0) = dVar20;
          unaff_d15 = dVar23;
        }
        else {
          bVar8 = false;
          bVar6 = true;
          if (dVar20 == *(double *)(puVar4 + -0x6d0)) {
            bVar8 = false;
            bVar6 = true;
            if (!NAN(dVar23) && !NAN(unaff_d15)) {
              bVar8 = dVar23 == unaff_d15;
              bVar6 = unaff_d15 <= dVar23;
            }
          }
          if (!bVar6 || bVar8) goto code_r0x0001078003ac;
        }
        func_0x000107808730();
        func_0x00010780a04c();
      } while( true );
    }
    puVar1 = (undefined8 *)*unaff_x20;
    plVar2 = (long *)unaff_x20[1];
    uVar14 = unaff_x20[6];
    *(ulong **)(puVar4 + -0x268) = unaff_x24;
    uVar19 = unaff_x20[3];
    *(ulong *)(puVar4 + -0x248) = unaff_x20[4];
    *(ulong *)(puVar4 + -0x250) = uVar19;
    *(ulong *)(puVar4 + -0x240) = uVar15;
    *(ulong *)(puVar4 + -0x238) = *plVar2 - uVar15;
    *(undefined8 **)(puVar4 + -0x230) = puVar1;
    *(long **)(puVar4 + -0x228) = plVar2;
    *(undefined8 *)(puVar4 + -0x218) = 0;
    *(undefined8 *)(puVar4 + -0x210) = 0;
    *(undefined8 *)(puVar4 + -0x220) = 0;
    *(ulong *)(puVar4 + -0x208) = uVar14;
    in_register_00005008 = unaff_x24[1];
    param_1 = *unaff_x24;
    *(ulong *)(puVar4 + -600) = in_register_00005008;
    *(ulong *)(puVar4 + -0x260) = param_1;
    *(undefined8 *)(puVar4 + -0x200) = 0;
    *(undefined8 *)(puVar4 + -0x1f8) = 0;
    param_2 = (ulong *)*puVar1;
    param_3 = (ulong *)(puVar4 + -0x268);
    func_0x000107807804();
    puVar13 = (ulong *)(puVar4 + -0x200);
    if ((*puVar13 < *(ulong *)unaff_x20[1]) && (*(long *)(puVar4 + -0x1f8) != 0)) break;
    unaff_x24 = unaff_x24 + -3;
  } while( true );
  param_3 = (ulong *)(puVar4 + -0x1f8);
  puVar17 = &UNK_1078070bc;
  puVar4 = puVar4 + -0x270;
  param_2 = unaff_x20;
  param_4 = *puVar13;
  unaff_x21 = uVar15;
  goto code_r0x000107806ffc;
}



/* Entry: 107807944; end: 107807a87;  */

undefined8 * FUN_107807944(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 in_ZR;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  long extraout_x9;
  long extraout_x10;
  long extraout_x10_00;
  long unaff_x19;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107808930();
  uStack_58 = 0;
  uStack_38 = extraout_x8;
  func_0x000107803f88(&uStack_58,param_2,&uStack_68,*(undefined8 *)(param_1 + 0x60));
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  uStack_78 = uStack_40;
  uStack_70 = uVar2;
  if (*(long *)(unaff_x19 + 0x48) == 0) {
    func_0x000107803784();
    uStack_80 = *(undefined8 *)(unaff_x19 + 0x60);
    uStack_88 = uVar2;
    func_0x0001077ffa30();
    func_0x000107809574(*(undefined8 *)(unaff_x19 + 0x38));
    *(undefined8 *)(extraout_x10_00 + 0x10) = uStack_60;
    *(undefined8 *)(extraout_x10_00 + 8) = uStack_68;
    func_0x000107809bcc();
    func_0x000107809a58();
    func_0x000107809b7c();
    *(undefined8 *)(extraout_x9 + 0x18) = uStack_40;
    func_0x000107809bbc(uStack_50);
    plVar1 = *(long **)(unaff_x19 + 0x40);
    **(undefined8 **)(unaff_x19 + 0x38) = uVar2;
    *plVar1 = *plVar1 + 1;
    uStack_88 = 0;
    func_0x0001078037b8(&uStack_88);
  }
  else {
    func_0x000107809bac();
    func_0x00010780a09c(uStack_68);
    *(undefined8 *)(extraout_x10 + 0x10) = uStack_48;
    *(undefined8 *)(extraout_x10 + 8) = uStack_50;
    func_0x000107809b1c();
  }
  uStack_78 = 0;
  puVar3 = &uStack_78;
  func_0x0001078037b8();
  func_0x0001078087c4(uStack_38);
  if ((bool)in_ZR) {
    return puVar3;
  }
  ___stack_chk_fail();
  func_0x0001078037b8(&uStack_78);
  func_0x000107808f58();
  func_0x0001078096e0();
  func_0x000107807aac();
  return puVar3;
}



/* Entry: 107807d34; end: 107807ddb;  */

void FUN_107807d34(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  long unaff_x19;
  long unaff_x20;
  long lVar4;
  
  func_0x000107808f04();
  func_0x000104c2fe00();
  func_0x000107807ddc(param_1 + 0x40);
  lVar2 = *(long *)(unaff_x20 + 0x40);
  puVar3 = (undefined8 *)(lVar2 + 0x38);
  *puVar3 = 0;
  *(undefined8 **)(lVar2 + 0x40) = puVar3;
  *(undefined8 **)(lVar2 + 0x48) = puVar3;
  *(long *)(lVar2 + 0x50) = lVar2 + 0x50;
  *(long *)(lVar2 + 0x58) = lVar2 + 0x50;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = *(undefined8 *)(unaff_x19 + 0x40);
  *(long *)(unaff_x19 + 0x40) = lVar2;
  *(undefined8 *)(unaff_x20 + 0x50) = *(undefined8 *)(unaff_x19 + 0x50);
  *(undefined8 *)(unaff_x19 + 0x50) = 0;
  lVar4 = lVar2;
  while (lVar4 != lVar2) {
    plVar1 = (long *)(lVar4 + 0x58);
    lVar4 = 0;
    if (*plVar1 != 0) {
      lVar4 = *plVar1 + -0x50;
    }
    func_0x000107809df4();
    func_0x000107809de4();
    lVar2 = *(long *)(unaff_x19 + 0x40);
  }
  __ZdlPv();
  if (*(uint *)(unaff_x19 + 0x28) != 0xffffffff) {
    (*(code *)(&PTR_DAT_1107eb090)[*(uint *)(unaff_x19 + 0x28)])(&stack0xffffffffffffffdf);
  }
  *(undefined4 *)(unaff_x19 + 0x28) = 0xffffffff;
  return;
}



/* Entry: 107808050; end: 10780807f;  */

void FUN_107808050(long param_1)

{
  long unaff_x19;
  
  func_0x0001078096e0();
  if (param_1 != 0) {
    func_0x000107250860();
  }
  func_0x0001072508a0();
  if (*(long *)(unaff_x19 + 8) != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 107808180; end: 1078081c3;  */

long * FUN_107808180(long *param_1)

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



/* Entry: 107808658; end: 10780868f;  */

long FUN_107808658(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109dfc88);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10780a3fc; end: 10780a667;  */

void FUN_10780a3fc(long *param_1,undefined4 param_2,float param_3,undefined8 param_4,float param_5,
                  undefined4 param_6,float param_7,undefined8 *param_8,undefined8 param_9,
                  ulong param_10,ulong param_11)

{
  long lVar1;
  float fVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  short *psVar7;
  long lVar8;
  ulong unaff_x27;
  float fVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  ulong uStack_a8;
  
  dVar11 = 5.2220990168286e-315;
  func_0x00010780a254();
  fVar9 = SUB84(dVar11,0);
  lVar8 = 0;
  param_3 = param_3 - (float)param_4;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  psVar7 = (short *)*param_8;
  lVar1 = param_8[1];
  fVar15 = (float)(int)param_9;
  fVar18 = 0.0;
  do {
    if (psVar7 == (short *)(lVar1 + -4)) {
      if ((((param_11 & 1) == 0) && ((param_10 & 1) == 0)) && (*param_1 == param_1[1])) {
        FUN_10780a3fc(&uStack_c0,param_2,fVar18 * 0.5,param_4,param_5,param_6,param_7,param_8,
                      param_9,0,1);
        if (*param_1 != 0) {
          param_1[1] = *param_1;
          __ZdlPv();
        }
        param_1[1] = uStack_b8;
        *param_1 = uStack_c0;
        param_1[2] = lStack_b0;
        uStack_b8 = 0;
        lStack_b0 = 0;
        uStack_c0 = 0;
        func_0x0001073e77e8(&uStack_c0);
      }
      return;
    }
    func_0x0001077f4424(psVar7,psVar7 + 2);
    dVar12 = dVar11;
    func_0x0001077f4454(psVar7 + 2,psVar7);
    dVar13 = (double)(ulong)(uint)(float)dVar12;
    fVar16 = fVar18 + SUB84(dVar11,0);
LAB_10780a4b8:
    fVar17 = (float)param_4 + param_3;
    if (fVar17 < fVar16) {
      fVar10 = (fVar17 - fVar18) / SUB84(dVar11,0);
      fVar2 = fVar10 * (float)(int)psVar7[2] + (1.0 - fVar10) * (float)(int)*psVar7;
      dVar13 = (double)(ulong)(uint)fVar2;
      param_3 = fVar17;
      if (0.0 <= fVar2) {
        fVar10 = fVar10 * (float)(int)psVar7[3] + (1.0 - fVar10) * (float)(int)psVar7[1];
        fVar14 = param_7 * 0.5 + fVar17;
        bVar3 = false;
        if ((0.0 <= fVar17 - param_7 * 0.5) && (bVar3 = false, !NAN(fVar2) && !NAN(fVar15))) {
          bVar3 = fVar2 < fVar15;
        }
        if (bVar3) {
          bVar3 = false;
          if ((0.0 <= fVar10) && (bVar3 = false, !NAN(fVar10) && !NAN(fVar15))) {
            bVar3 = fVar10 < fVar15;
          }
          bVar4 = false;
          bVar5 = true;
          if (bVar3) {
            bVar4 = false;
            bVar5 = true;
            if (!NAN(fVar14) && !NAN(fVar9)) {
              bVar4 = fVar14 == fVar9;
              bVar5 = fVar9 <= fVar14;
            }
          }
          if (!bVar5 || bVar4) {
            unaff_x27 = unaff_x27 & 0xffffffffffffff00 | 1;
            uStack_c0 = CONCAT44((int)fVar10,(int)fVar2);
            dVar13 = (double)(ulong)(uint)param_5;
            uStack_b8 = CONCAT44((float)dVar12,param_2);
            lStack_b0 = lVar8;
            uStack_a8 = unaff_x27;
            if (param_5 != 0.0) {
              dVar13 = (double)(ulong)(uint)param_7;
              puVar6 = param_8;
              func_0x0001077f3e84(dVar13,param_5,param_6,param_8,&uStack_c0);
              if ((int)puVar6 == 0) goto LAB_10780a4b8;
            }
            func_0x000107407c70(param_1,&uStack_c0);
          }
        }
      }
      goto LAB_10780a4b8;
    }
    psVar7 = psVar7 + 2;
    lVar8 = lVar8 + 1;
    dVar11 = dVar13;
    fVar18 = fVar16;
  } while( true );
}



/* Entry: 10780b4c4; end: 10780b50b;  */

void FUN_10780b4c4(void)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  
  func_0x00010780d818();
  func_0x00010780b434();
  func_0x00010780db1c();
  func_0x00010780d7b8();
  if (!(bool)in_ZR && in_NG == in_OV) {
    func_0x00010780d804();
    func_0x00010780d7b8();
    if (!(bool)in_ZR && in_NG == in_OV) {
      func_0x00010780d7f0();
      func_0x00010780d7b8();
      if (!(bool)in_ZR && in_NG == in_OV) {
        func_0x00010780db28();
      }
    }
  }
  return;
}



/* Entry: 10780bd84; end: 10780c2e3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10780bd84(long *param_1)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar10;
  bool bVar11;
  char cVar12;
  char cVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  long lVar16;
  ulong extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar17;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w9_01;
  uint extraout_w9_02;
  int extraout_w9_03;
  int extraout_w9_04;
  int extraout_w9_05;
  long extraout_x9;
  long extraout_x9_00;
  undefined8 *extraout_x9_01;
  int extraout_w10;
  long *extraout_x10;
  long *extraout_x10_00;
  long *extraout_x10_01;
  long *extraout_x10_02;
  long *extraout_x10_03;
  long *plVar18;
  long extraout_x10_04;
  long extraout_x10_05;
  long extraout_x10_06;
  long extraout_x10_07;
  long lVar19;
  undefined8 extraout_x10_08;
  long extraout_x10_09;
  undefined8 extraout_x10_10;
  int extraout_w11;
  uint extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  int extraout_w11_03;
  long *plVar20;
  long *extraout_x11;
  long *extraout_x11_00;
  long extraout_x11_01;
  long *extraout_x11_02;
  long extraout_x11_03;
  undefined8 extraout_x11_04;
  undefined8 extraout_x11_05;
  undefined8 uVar21;
  int extraout_w12;
  int extraout_w12_00;
  long extraout_x12;
  long lVar22;
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
  int extraout_w14_02;
  ulong extraout_x14;
  ulong uVar23;
  long extraout_x14_00;
  long extraout_x14_01;
  int extraout_w15;
  int extraout_w15_00;
  int extraout_w15_01;
  undefined8 *extraout_x15;
  undefined8 *extraout_x15_00;
  undefined8 *puVar24;
  int extraout_w16;
  long lVar25;
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
  do {
    func_0x00010780d960();
LAB_10780bda0:
    func_0x00010780d94c();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010780bfd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10dea6608)[extraout_x8] * 4 + 0x10780bfd8))();
      return;
    }
    bVar10 = 0x16 < extraout_x8;
    if ((long)extraout_x8 < 0x18) {
      uVar14 = unaff_x20 == unaff_x19;
      if ((unaff_x25 & 1) == 0) {
        uVar15 = 0;
        if (!(bool)uVar14) {
          while (func_0x00010780dc48(), !(bool)uVar15) {
            iVar4 = *(int *)(unaff_x20[1] + 8);
            iVar7 = *(int *)(unaff_x20[1] + 0xc);
            if (iVar4 <= iVar7) {
              iVar4 = iVar7;
            }
            iVar7 = *(int *)(*unaff_x20 + 8);
            iVar9 = *(int *)(*unaff_x20 + 0xc);
            if (iVar7 <= iVar9) {
              iVar7 = iVar9;
            }
            uVar15 = iVar4 == iVar7;
            if (iVar7 < iVar4) {
              do {
                func_0x00010780dbd4();
                iVar4 = extraout_w14_02;
                if (extraout_w14_02 <= extraout_w15_01) {
                  iVar4 = extraout_w15_01;
                }
                uVar15 = extraout_w12_00 == iVar4;
              } while (!(bool)uVar15 && iVar4 <= extraout_w12_00);
              *(undefined8 *)(extraout_x13_05 + -8) = extraout_x10_10;
            }
            func_0x00010780dce4();
          }
          return;
        }
        return;
      }
      if ((bool)uVar14) {
        return;
      }
      func_0x00010780dd50();
      break;
    }
    if (unaff_x22 == 0) {
      if (unaff_x20 == unaff_x19) {
        return;
      }
      func_0x00010780dab0();
      lVar25 = extraout_x8_01;
      lVar17 = extraout_x9;
      lVar19 = extraout_x10_06;
      lVar16 = extraout_x9;
      goto joined_r0x00010780c0b8;
    }
    func_0x00010780daf0();
    if (bVar10) {
      func_0x00010780da00();
      func_0x00010780c2e4();
      func_0x00010780d938();
      func_0x00010780c2e4();
      func_0x00010780dae0();
      func_0x00010780c2e4();
      func_0x00010780dad0();
      func_0x00010780c2e4();
      func_0x00010780d924();
    }
    else {
      func_0x00010780dac0();
      func_0x00010780c2e4();
    }
    func_0x00010780dcf0();
    if ((unaff_x25 & 1) == 0) {
      iVar4 = *(int *)(unaff_x20[-1] + 8);
      iVar7 = *(int *)(unaff_x20[-1] + 0xc);
      if (iVar4 <= iVar7) {
        iVar4 = iVar7;
      }
      uVar6 = *(uint *)(extraout_x8_00 + 8);
      if ((int)*(uint *)(extraout_x8_00 + 8) <= (int)*(uint *)(extraout_x8_00 + 0xc)) {
        uVar6 = *(uint *)(extraout_x8_00 + 0xc);
      }
      if (iVar4 <= (int)uVar6) {
        uVar5 = *(uint *)(*unaff_x21 + 8);
        uVar8 = *(uint *)(*unaff_x21 + 0xc);
        if ((int)uVar5 <= (int)uVar8) {
          uVar5 = uVar8;
        }
        bVar10 = uVar5 <= uVar6;
        plVar18 = unaff_x20;
        if ((int)uVar5 < (int)uVar6) {
          do {
            unaff_x26 = plVar18 + 1;
            uVar5 = *(uint *)(*unaff_x26 + 8);
            uVar8 = *(uint *)(*unaff_x26 + 0xc);
            if ((int)uVar5 <= (int)uVar8) {
              uVar5 = uVar8;
            }
            bVar11 = uVar5 <= uVar6;
            plVar18 = unaff_x26;
          } while ((int)uVar6 <= (int)uVar5);
        }
        else {
          do {
            func_0x00010780dcb4();
            bVar11 = true;
            if (bVar10) break;
            func_0x00010780dc60();
            func_0x00010780db80();
            bVar11 = extraout_w11_00 <= extraout_w9_02;
            bVar10 = bVar11;
          } while ((int)extraout_w9_02 <= (int)extraout_w11_00);
        }
        func_0x00010780dc54();
        plVar18 = extraout_x10_01;
        if (!bVar11) {
          do {
            func_0x00010780db80();
            plVar18 = extraout_x10_02;
          } while (extraout_w11_01 < extraout_w9_03);
        }
        while( true ) {
          in_CY = plVar18 <= unaff_x26;
          in_ZR = unaff_x26 == plVar18;
          if ((bool)in_CY) break;
          func_0x00010780d884();
          do {
            unaff_x26 = unaff_x26 + 1;
            func_0x00010780db80();
          } while (extraout_w9_04 <= extraout_w11_02);
          do {
            func_0x00010780db80();
            plVar18 = extraout_x10_03;
          } while (extraout_w11_03 < extraout_w9_05);
        }
        func_0x00010780dc3c();
        if (!(bool)in_ZR) {
          func_0x00010780dc30();
        }
        func_0x00010780dc78();
        goto LAB_10780bda0;
      }
    }
    do {
      func_0x00010780dc04();
      cVar12 = SBORROW4(extraout_w10,extraout_w11);
      cVar13 = extraout_w10 - extraout_w11 < 0;
      bVar10 = extraout_w10 == extraout_w11;
      func_0x00010780ddcc();
    } while (!bVar10 && cVar13 == cVar12);
    func_0x00010780daa0();
    plVar18 = extraout_x10;
    plVar20 = unaff_x19;
    if (bVar10) {
      do {
        if (plVar20 <= plVar18) break;
        func_0x00010780dbb8();
        iVar4 = extraout_w14_00;
        if (extraout_w14_00 <= extraout_w13_00) {
          iVar4 = extraout_w13_00;
        }
        plVar18 = extraout_x10_00;
        plVar20 = extraout_x11;
      } while (iVar4 <= extraout_w9_00);
    }
    else {
      do {
        func_0x00010780dbb8();
        iVar4 = extraout_w14;
        if (extraout_w14 <= extraout_w13) {
          iVar4 = extraout_w13;
        }
      } while (iVar4 <= extraout_w9);
    }
    func_0x00010780dcc0();
    plVar18 = extraout_x13;
    while( true ) {
      in_CY = plVar18 <= unaff_x26;
      in_ZR = unaff_x26 == plVar18;
      if ((bool)in_CY) break;
      func_0x00010780da60();
      do {
        unaff_x26 = unaff_x26 + 1;
        iVar4 = *(int *)(*unaff_x26 + 8);
        iVar7 = *(int *)(*unaff_x26 + 0xc);
        if (iVar4 <= iVar7) {
          iVar4 = iVar7;
        }
        plVar18 = extraout_x13_00;
      } while (extraout_w9_01 < iVar4);
      do {
        plVar18 = plVar18 + -1;
        iVar4 = *(int *)(*plVar18 + 8);
        iVar7 = *(int *)(*plVar18 + 0xc);
        if (iVar4 <= iVar7) {
          iVar4 = iVar7;
        }
      } while (iVar4 <= extraout_w9_01);
    }
    func_0x00010780dd2c();
    if (!(bool)in_ZR) {
      func_0x00010780dc90();
    }
    func_0x00010780dc84();
    if (!(bool)in_CY) goto LAB_10780bef0;
    func_0x00010780db10();
    func_0x00010780c448();
    func_0x00010780da30();
    func_0x00010780c448();
    if ((int)param_1 == 0) goto code_r0x00010780beec;
    unaff_x19 = unaff_x27;
    if ((unaff_x28 & 1) != 0) {
      return;
    }
  } while( true );
LAB_10780c048:
  func_0x00010780dd44();
  if ((bool)uVar14) {
    return;
  }
  iVar4 = *(int *)(extraout_x11_00[1] + 8);
  iVar7 = *(int *)(extraout_x11_00[1] + 0xc);
  if (iVar4 <= iVar7) {
    iVar4 = iVar7;
  }
  iVar7 = *(int *)(*extraout_x11_00 + 8);
  iVar9 = *(int *)(*extraout_x11_00 + 0xc);
  if (iVar7 <= iVar9) {
    iVar7 = iVar9;
  }
  uVar14 = iVar4 == iVar7;
  if (iVar7 < iVar4) {
    do {
      func_0x00010780dd08();
      if ((bool)uVar14) {
        uVar14 = 1;
        lVar25 = extraout_x10_04;
        plVar18 = unaff_x20;
        goto LAB_10780c0a0;
      }
      func_0x00010780dc14();
      cVar12 = SBORROW4(extraout_w14_01,extraout_w15);
      cVar13 = extraout_w14_01 - extraout_w15 < 0;
      uVar14 = extraout_w14_01 == extraout_w15;
      func_0x00010780ddd8();
    } while (!(bool)uVar14 && cVar13 == cVar12);
    lVar25 = extraout_x10_05;
    plVar18 = (long *)((long)unaff_x20 + extraout_x13_01);
LAB_10780c0a0:
    *plVar18 = lVar25;
  }
  func_0x00010780dcd8();
  goto LAB_10780c048;
joined_r0x00010780c0b8:
  if (lVar16 < 0) {
    do {
      if (lVar25 < 2) {
        return;
      }
      func_0x00010780d8e8();
      lVar17 = extraout_x8_03;
      lVar25 = extraout_x12_00;
      lVar19 = extraout_x14_00;
      do {
        lVar25 = lVar25 + lVar19 * 8;
        lVar16 = *(long *)(lVar25 + 8);
        lVar19 = lVar19 * 2 + 2;
        cVar12 = SBORROW8(lVar19,lVar17);
        cVar13 = lVar19 - lVar17 < 0;
        bVar10 = lVar19 == lVar17;
        if (lVar19 < lVar17) {
          lVar25 = *(long *)(lVar25 + 0x10);
          iVar4 = *(int *)(lVar16 + 8);
          iVar7 = *(int *)(lVar16 + 0xc);
          if (iVar4 <= iVar7) {
            iVar4 = iVar7;
          }
          iVar7 = *(int *)(lVar25 + 8);
          iVar9 = *(int *)(lVar25 + 0xc);
          if (iVar7 <= iVar9) {
            iVar7 = iVar9;
          }
          cVar12 = SBORROW4(iVar4,iVar7);
          cVar13 = iVar4 - iVar7 < 0;
          bVar10 = iVar4 == iVar7;
        }
        func_0x00010780da50();
        lVar17 = extraout_x8_04;
        lVar25 = extraout_x12_01;
        lVar19 = extraout_x14_01;
      } while (bVar10 || cVar13 != cVar12);
      func_0x00010780dc9c();
      if (bVar10) {
        *extraout_x9_01 = extraout_x10_08;
        lVar25 = extraout_x8_05;
      }
      else {
        func_0x00010780d7d0();
        lVar25 = extraout_x8_06;
        if (cVar13 == cVar12) {
          func_0x00010780d8d4();
          iVar4 = *(int *)(extraout_x13_03 + 8);
          if (*(int *)(extraout_x13_03 + 8) <= *(int *)(extraout_x13_03 + 0xc)) {
            iVar4 = *(int *)(extraout_x13_03 + 0xc);
          }
          iVar7 = *(int *)(extraout_x11_03 + 8);
          if (*(int *)(extraout_x11_03 + 8) <= *(int *)(extraout_x11_03 + 0xc)) {
            iVar7 = *(int *)(extraout_x11_03 + 0xc);
          }
          lVar25 = extraout_x8_07;
          if (iVar7 < iVar4) {
            do {
              func_0x00010780dc6c();
              lVar25 = extraout_x8_08;
              uVar21 = extraout_x11_04;
              puVar24 = extraout_x15;
              if (extraout_x10_09 == 0) break;
              func_0x00010780d898();
              iVar4 = *(int *)(extraout_x13_04 + 8);
              if (*(int *)(extraout_x13_04 + 8) <= *(int *)(extraout_x13_04 + 0xc)) {
                iVar4 = *(int *)(extraout_x13_04 + 0xc);
              }
              lVar25 = extraout_x8_09;
              uVar21 = extraout_x11_05;
              puVar24 = extraout_x15_00;
            } while (extraout_w12 < iVar4);
            *puVar24 = uVar21;
          }
        }
      }
      lVar25 = lVar25 + -1;
    } while( true );
  }
  cVar12 = SBORROW8(lVar17,lVar19);
  cVar13 = lVar17 - lVar19 < 0;
  if (lVar19 <= lVar17) {
    func_0x00010780d99c();
    if (cVar13 != cVar12) {
      uVar6 = *(uint *)(*(long *)(extraout_x11_01 + 8) + 8);
      uVar5 = *(uint *)(*(long *)(extraout_x11_01 + 8) + 0xc);
      if ((int)uVar6 <= (int)uVar5) {
        uVar6 = uVar5;
      }
      param_1 = (long *)(ulong)uVar6;
    }
    func_0x00010780dbf4();
    iVar4 = extraout_w15_00;
    if (extraout_w15_00 <= extraout_w16) {
      iVar4 = extraout_w16;
    }
    iVar7 = *(int *)(extraout_x13_02 + 8);
    if (*(int *)(extraout_x13_02 + 8) <= *(int *)(extraout_x13_02 + 0xc)) {
      iVar7 = *(int *)(extraout_x13_02 + 0xc);
    }
    lVar25 = extraout_x8_02;
    lVar17 = extraout_x9_00;
    lVar19 = extraout_x10_07;
    plVar18 = extraout_x11_02;
    lVar16 = extraout_x12;
    uVar23 = extraout_x14;
    if (iVar4 <= iVar7) {
      do {
        plVar20 = plVar18;
        *param_1 = lVar16;
        if (extraout_x9_00 < (long)uVar23) break;
        uVar3 = uVar23 << 1 | 1;
        plVar2 = unaff_x20 + uVar3;
        uVar1 = uVar23 * 2 + 2;
        lVar22 = *plVar2;
        plVar18 = plVar2;
        lVar16 = lVar22;
        uVar23 = uVar3;
        if ((long)uVar1 < extraout_x8_02) {
          lVar16 = plVar2[1];
          iVar4 = *(int *)(lVar22 + 8);
          if (*(int *)(lVar22 + 8) <= *(int *)(lVar22 + 0xc)) {
            iVar4 = *(int *)(lVar22 + 0xc);
          }
          iVar9 = *(int *)(lVar16 + 8);
          if (*(int *)(lVar16 + 8) <= *(int *)(lVar16 + 0xc)) {
            iVar9 = *(int *)(lVar16 + 0xc);
          }
          plVar18 = plVar2 + 1;
          uVar23 = uVar1;
          if (iVar4 <= iVar9) {
            plVar18 = plVar2;
            lVar16 = lVar22;
            uVar23 = uVar3;
          }
        }
        iVar4 = *(int *)(lVar16 + 8);
        if (*(int *)(lVar16 + 8) <= *(int *)(lVar16 + 0xc)) {
          iVar4 = *(int *)(lVar16 + 0xc);
        }
        param_1 = plVar20;
      } while (iVar4 <= iVar7);
      *plVar20 = extraout_x13_02;
    }
  }
  lVar19 = lVar19 + -1;
  lVar16 = lVar19;
  goto joined_r0x00010780c0b8;
code_r0x00010780beec:
  if ((unaff_x28 & 1) == 0) {
LAB_10780bef0:
    func_0x00010780d8c0();
    FUN_10780bd84();
    unaff_x25 = 0;
  }
  goto LAB_10780bda0;
}



/* Entry: 10780ca9c; end: 10780caf7;  */

void FUN_10780ca9c(void)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  
  func_0x00010780d818();
  func_0x00010780ca54();
  func_0x00010780dcfc();
  func_0x00010780d9cc();
  if (!(bool)in_ZR && in_NG == in_OV) {
    func_0x00010780d910();
    func_0x00010780d9cc();
    if (!(bool)in_ZR && in_NG == in_OV) {
      func_0x00010780d804();
      func_0x00010780d9cc();
      if (!(bool)in_ZR && in_NG == in_OV) {
        func_0x00010780d7f0();
        func_0x00010780d9cc();
        if (!(bool)in_ZR && in_NG == in_OV) {
          func_0x00010780db28();
        }
      }
    }
  }
  return;
}



/* Entry: 10780d34c; end: 10780d41b;  */

long * FUN_10780d34c(long *param_1,ulong *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  
  uVar4 = *param_2;
  plVar2 = (long *)param_1[1];
  plVar3 = param_1 + 1;
  do {
    plVar5 = plVar3;
    if (plVar2 == (long *)0x0) {
LAB_10780d3b0:
      plVar1 = (long *)0x40;
      __Znwm();
      plVar1[7] = 0;
      plVar1[6] = 0;
      plVar1[4] = uVar4;
      plVar1[5] = (long)(plVar1 + 6);
      *plVar1 = 0;
      plVar1[1] = 0;
      plVar1[2] = (long)plVar3;
      *plVar5 = (long)plVar1;
      if (*(long *)*param_1 != 0) {
        *param_1 = *(long *)*param_1;
      }
      func_0x00010002c5b0(param_1[1],plVar1);
      param_1[2] = param_1[2] + 1;
LAB_10780d404:
      return plVar1 + 5;
    }
    while (plVar1 = plVar2, plVar3 = plVar1, (ulong)plVar1[4] <= uVar4) {
      if (uVar4 <= (ulong)plVar1[4]) goto LAB_10780d404;
      plVar2 = (long *)plVar1[1];
      if ((long *)plVar1[1] == (long *)0x0) {
        plVar5 = plVar1 + 1;
        goto LAB_10780d3b0;
      }
    }
    plVar2 = (long *)*plVar1;
  } while( true );
}



/* Entry: 10780e8c0; end: 10780e8eb;  */

long FUN_10780e8c0(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  ulong *puVar4;
  long lVar5;
  ulong uVar6;
  long *unaff_x19;
  ulong *unaff_x20;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  byte bVar11;
  uint6 uVar12;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  undefined8 uVar13;
  byte bVar19;
  
  func_0x0001078122e0();
  func_0x00010781253c();
  puVar4 = unaff_x20;
  func_0x0001078122d4();
  lVar7 = 0;
  uVar1 = puVar4[1];
  uVar2 = puVar4[2];
  uVar8 = *puVar4;
  uVar6 = uVar8 >> 0xc ^ param_1 >> 7;
  bVar3 = (byte)param_1;
  uVar12 = CONCAT15(bVar3,CONCAT14(bVar3,CONCAT13(bVar3,CONCAT12(bVar3,CONCAT11(bVar3,bVar3))))) &
           0x7f7f7f7f7f7f;
  while( true ) {
    uVar6 = uVar6 & uVar2;
    uVar13 = *(undefined8 *)(uVar8 + uVar6);
    cVar14 = (char)((ulong)uVar13 >> 8);
    cVar15 = (char)((ulong)uVar13 >> 0x10);
    cVar16 = (char)((ulong)uVar13 >> 0x18);
    cVar17 = (char)((ulong)uVar13 >> 0x20);
    cVar18 = (char)((ulong)uVar13 >> 0x28);
    bVar11 = (byte)((ulong)uVar13 >> 0x30);
    bVar19 = (byte)((ulong)uVar13 >> 0x38);
    for (uVar9 = CONCAT17(-(bVar19 == (bVar3 & 0x7f)),
                          CONCAT16(-(bVar11 == (bVar3 & 0x7f)),
                                   CONCAT15(-(cVar18 == (char)(uVar12 >> 0x28)),
                                            CONCAT14(-(cVar17 == (char)(uVar12 >> 0x20)),
                                                     CONCAT13(-(cVar16 == (char)(uVar12 >> 0x18)),
                                                              CONCAT12(-(cVar15 ==
                                                                        (char)(uVar12 >> 0x10)),
                                                                       CONCAT11(-(cVar14 ==
                                                                                 (char)(uVar12 >> 8)
                                                                                 ),-((char)uVar13 ==
                                                                                    (char)uVar12))))
                                                    )))) & 0x8080808080808080; uVar9 != 0;
        uVar9 = uVar9 - 1 & uVar9) {
      uVar10 = (uVar9 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar9 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar6 + ((ulong)LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) >> 3) & uVar2;
      lVar5 = uVar1 + uVar10 * 0x40;
      func_0x000107798a7c(lVar5,unaff_x20);
      if ((int)lVar5 != 0) {
        return *unaff_x19 + uVar10;
      }
    }
    bVar11 = NEON_umaxv(CONCAT17(-(bVar19 == 0x80),
                                 CONCAT16(-(bVar11 == 0x80),
                                          CONCAT15(-(cVar18 == -0x80),
                                                   CONCAT14(-(cVar17 == -0x80),
                                                            CONCAT13(-(cVar16 == -0x80),
                                                                     CONCAT12(-(cVar15 == -0x80),
                                                                              CONCAT11(-(cVar14 ==
                                                                                        -0x80),-((
                                                  char)uVar13 == -0x80)))))))),1);
    if ((bVar11 & 1) != 0) break;
    lVar7 = lVar7 + 8;
    uVar6 = lVar7 + uVar6;
  }
  return 0;
}



/* Entry: 10780f2c0; end: 10780f387;  */

void FUN_10780f2c0(long param_1,long param_2)

{
  long lVar1;
  long unaff_x19;
  long lVar2;
  long lStack_40;
  undefined1 uStack_38;
  
  func_0x0001078122d4();
  lStack_40 = param_1 + 0x78;
  uStack_38 = 1;
  __ZNSt3__119__shared_mutex_base4lockEv();
  lVar1 = unaff_x19 + 0x38;
  func_0x00010780f388();
  while (lVar1 != 0) {
    lVar2 = *(long *)(param_2 + 0x10);
    while (lVar2 != param_2 + 0x18) {
      func_0x00010780f3b0(lVar2 + 0x38,&stack0xffffffffffffffa8);
      func_0x00010002c7d4();
    }
    func_0x00010780f3dc(&stack0xffffffffffffffb0);
  }
  func_0x00010780f3b0(unaff_x19 + 0x58,&stack0xffffffffffffffb0);
  func_0x000104c305a0(&lStack_40);
  return;
}



/* Entry: 10780f5ac; end: 10780f73b;  */

void FUN_10780f5ac(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  
  pcVar3 = (char *)*param_1;
  lVar1 = param_1[1];
  for (lVar2 = param_1[2]; lVar2 != 0; lVar2 = lVar2 + -1) {
    if (-1 < *pcVar3) {
      func_0x00010780f5e8(lVar1);
    }
    pcVar3 = pcVar3 + 1;
    lVar1 = lVar1 + 0x40;
  }
  return;
}



/* Entry: 10780f904; end: 10780f953;  */

undefined8 * FUN_10780f904(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  func_0x000107283e34(param_1 + 1,param_2 + 1);
  func_0x00010780f954(param_1 + 4,param_2 + 4);
  return param_1;
}



/* Entry: 10780fcd0; end: 10780fcd7;  */

void FUN_10780fcd0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = param_2[1];
  uVar3 = *param_2;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  *param_2 = &UNK_10e52b660;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_1[1] = uVar4;
  *param_1 = uVar3;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  return;
}



/* Entry: 10780ff34; end: 10780ff87;  */

long * FUN_10780ff34(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    for (lVar1 = param_1[1]; lVar1 != lVar2; lVar1 = lVar1 + -0x20) {
      func_0x0001078108a4(lVar1 + -0x18);
    }
    param_1[1] = lVar2;
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 1078100d0; end: 1078101af;  */

long FUN_1078100d0(ulong *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  long *unaff_x19;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  byte bVar12;
  uint6 uVar13;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  undefined8 uVar14;
  byte bVar20;
  
  uVar6 = (undefined4)((ulong)param_3 >> 0x20);
  uVar5 = (undefined4)param_3;
  func_0x0001078122d4();
  lVar8 = 0;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar9 = *param_1;
  uVar7 = uVar9 >> 0xc ^ CONCAT44(uVar6,uVar5) >> 7;
  bVar3 = (byte)uVar5;
  uVar13 = CONCAT15(bVar3,CONCAT14(bVar3,CONCAT13(bVar3,CONCAT12(bVar3,CONCAT11(bVar3,bVar3))))) &
           0x7f7f7f7f7f7f;
  while( true ) {
    uVar7 = uVar7 & uVar2;
    uVar14 = *(undefined8 *)(uVar9 + uVar7);
    cVar15 = (char)((ulong)uVar14 >> 8);
    cVar16 = (char)((ulong)uVar14 >> 0x10);
    cVar17 = (char)((ulong)uVar14 >> 0x18);
    cVar18 = (char)((ulong)uVar14 >> 0x20);
    cVar19 = (char)((ulong)uVar14 >> 0x28);
    bVar12 = (byte)((ulong)uVar14 >> 0x30);
    bVar20 = (byte)((ulong)uVar14 >> 0x38);
    for (uVar10 = CONCAT17(-(bVar20 == (bVar3 & 0x7f)),
                           CONCAT16(-(bVar12 == (bVar3 & 0x7f)),
                                    CONCAT15(-(cVar19 == (char)(uVar13 >> 0x28)),
                                             CONCAT14(-(cVar18 == (char)(uVar13 >> 0x20)),
                                                      CONCAT13(-(cVar17 == (char)(uVar13 >> 0x18)),
                                                               CONCAT12(-(cVar16 ==
                                                                         (char)(uVar13 >> 0x10)),
                                                                        CONCAT11(-(cVar15 ==
                                                                                  (char)(uVar13 >> 8
                                                                                        )),
                                                                                 -((char)uVar14 ==
                                                                                  (char)uVar13))))))
                                   )) & 0x8080808080808080; uVar10 != 0;
        uVar10 = uVar10 - 1 & uVar10) {
      uVar11 = (uVar10 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar10 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = uVar7 + ((ulong)LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) >> 3) & uVar2;
      iVar4 = (int)uVar1 + (int)uVar11 * 0x40;
      func_0x000107798a7c();
      if (iVar4 != 0) {
        return *unaff_x19 + uVar11;
      }
    }
    bVar12 = NEON_umaxv(CONCAT17(-(bVar20 == 0x80),
                                 CONCAT16(-(bVar12 == 0x80),
                                          CONCAT15(-(cVar19 == -0x80),
                                                   CONCAT14(-(cVar18 == -0x80),
                                                            CONCAT13(-(cVar17 == -0x80),
                                                                     CONCAT12(-(cVar16 == -0x80),
                                                                              CONCAT11(-(cVar15 ==
                                                                                        -0x80),-((
                                                  char)uVar14 == -0x80)))))))),1);
    if ((bVar12 & 1) != 0) break;
    lVar8 = lVar8 + 8;
    uVar7 = lVar8 + uVar7;
  }
  return 0;
}



/* Entry: 1078104f8; end: 107810547;  */

void FUN_1078104f8(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uStack_28;
  
  uStack_28 = *param_2;
  puVar3 = &uStack_28;
  func_0x0001000df370(puVar3,8);
  uVar1 = (long)puVar3 + 0x9e3779b97f4a7c15;
  uVar2 = (ulong)*(ushort *)(param_2 + 1) + 0x9e3779b97f4a7c15;
  func_0x0001078125a0((long)&PTR_LOOP_110c8acd8 +
                      (uVar1 * 0x1000 + (uVar1 >> 4) + -0x61c8864680b583eb +
                       ((ulong)*(ushort *)((long)param_2 + 10) + uVar2 * 0x1000 + (uVar2 >> 4) +
                        0x9e3779b97f4a7c15 ^ uVar2) ^ uVar1));
  return;
}



/* Entry: 1078107c0; end: 10781083f;  */

void FUN_1078107c0(void)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  
  func_0x000107812290();
  func_0x000107810840();
  func_0x0001078124a0();
  for (; unaff_x23 != unaff_x24; unaff_x24 = unaff_x24 + 1) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      lVar1 = unaff_x19;
      func_0x0001078106e4();
      func_0x0001078121e8();
      func_0x000107812174(unaff_w21 & 0x7f);
      func_0x000107810874(unaff_x25 + lVar1 * 0x18,unaff_x20);
    }
    unaff_x20 = unaff_x20 + 0x18;
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 107810b30; end: 107810b5b;  */

void FUN_107810b30(undefined8 param_1,undefined8 param_2)

{
  func_0x0001078124f8(param_2,param_1,&PTR_DAT_1109dfeb8);
  func_0x000107812448();
  return;
}



/* Entry: 107810d90; end: 107810efb;  */

void FUN_107810d90(long param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  long **pplVar5;
  long lVar6;
  undefined1 auStack_70 [16];
  long *plStack_60;
  long lStack_58;
  long lStack_50;
  long *plStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  undefined1 uStack_28;
  
  func_0x000107810bd8(auStack_70,param_1 + 8);
  iVar2 = (int)param_1 + 8;
  func_0x000107810c5c();
  if (iVar2 != 0) {
    lVar6 = *(long *)(param_1 + 0x20);
    lStack_30 = lVar6 + 0x78;
    uStack_28 = 1;
    __ZNSt3__119__shared_mutex_base4lockEv();
    plStack_48 = *(long **)(param_1 + 0x28);
    lVar3 = lVar6 + 0x58;
    pplVar5 = &plStack_48;
    func_0x000107810f74();
    if (lVar3 != 0) {
      if (pplVar5[1] == *(long **)(param_1 + 0x50)) {
        func_0x000107810fa0(lVar6 + 0x58,lVar3,pplVar5);
      }
      if ((*(long *)(param_1 + 0x58) != 0) && (*(long *)(*(long *)(param_1 + 0x58) + 8) == 0)) {
        func_0x00010780ec28(&plStack_48,lVar6,*(undefined8 *)(param_1 + 0x50));
        func_0x000107276998(&lStack_30);
        puVar4 = *(undefined8 **)(param_1 + 0x28);
        plStack_60 = plStack_48;
        lStack_58 = lStack_40;
        lStack_50 = lStack_38;
        plVar1 = &lStack_58;
        if (lStack_38 != 0) {
          *(long **)(lStack_40 + 0x10) = &lStack_58;
          plStack_48 = &lStack_40;
          lStack_40 = 0;
          lStack_38 = 0;
          plVar1 = plStack_60;
        }
        plStack_60 = plVar1;
        (**(code **)*puVar4)(puVar4,&plStack_60);
        func_0x0001078108a4(&plStack_60);
        func_0x0001078108a4(&plStack_48);
      }
    }
    func_0x000104c305a0(&lStack_30);
  }
  func_0x000107270b00(auStack_70);
  return;
}



/* Entry: 1078110a4; end: 1078110db;  */

void FUN_1078110a4(undefined8 *param_1)

{
  char *pcVar1;
  char *extraout_x8;
  
  pcVar1 = (char *)*param_1;
  while (*pcVar1 < -1) {
    func_0x000107812574();
    pcVar1 = extraout_x8;
  }
  if (*pcVar1 != -1) {
    return;
  }
  *param_1 = 0;
  return;
}



/* Entry: 107811224; end: 1078112bb;  */

void FUN_107811224(void)

{
  long extraout_x8;
  long *unaff_x19;
  
  func_0x000107812260();
  if (extraout_x8 != 0) {
    *unaff_x19 = extraout_x8;
  }
  func_0x000107812328();
  func_0x000107812318();
  return;
}



/* Entry: 10781198c; end: 1078119c3;  */

void FUN_10781198c(undefined8 *param_1)

{
  char *pcVar1;
  char *extraout_x8;
  
  pcVar1 = (char *)*param_1;
  while (*pcVar1 < -1) {
    func_0x000107812574();
    pcVar1 = extraout_x8;
  }
  if (*pcVar1 != -1) {
    return;
  }
  *param_1 = 0;
  return;
}



/* Entry: 107811b58; end: 107811b6f;  */

void FUN_107811b58(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    func_0x00010780f7fc(lVar1 + 0x28);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 107811d6c; end: 107811d87;  */

void FUN_107811d6c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 **ppuStack_58;
  undefined8 **ppuStack_50;
  undefined1 uStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  if ((ulong)param_2 >> 0x3c == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)((long)param_2 << 4);
    return;
  }
  func_0x000104bd35f4();
  ppuStack_58 = &puStack_40;
  ppuStack_50 = &puStack_38;
  puStack_38 = param_4;
  for (puVar1 = param_2; puVar1 != param_3; puVar1 = puVar1 + 2) {
    uVar2 = *puVar1;
    puStack_38[1] = puVar1[1];
    *puStack_38 = uVar2;
    *puVar1 = 0;
    puVar1[1] = 0;
    puStack_38 = puStack_38 + 2;
  }
  uStack_48 = 1;
  uStack_60 = param_1;
  puStack_40 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 2) {
    func_0x00010726b09c(param_2);
  }
  func_0x000107811e10(&uStack_60);
  return;
}



/* Entry: 107812008; end: 107812047;  */

long * FUN_107812008(long *param_1,long *param_2,undefined8 param_3)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined1 uVar6;
  long lVar7;
  undefined8 uVar8;
  
  if ((ulong)param_2 >> 0x3c == 0) {
    plVar4 = (long *)(param_1[2] - *param_1 >> 3);
    if (plVar4 <= param_2) {
      plVar4 = param_2;
    }
    if (0x7fffffffffffffef < (ulong)(param_1[2] - *param_1)) {
      plVar4 = (long *)0xfffffffffffffff;
    }
    return plVar4;
  }
  func_0x000107811c80();
  func_0x00010780f5e8(param_3);
  uVar1 = param_1[2];
  param_1[3] = param_1[3] + -1;
  lVar3 = *param_1;
  lVar7 = *param_2;
  uVar5 = CONCAT17(-((char)((ulong)lVar7 >> 0x38) == -0x80),
                   CONCAT16(-((char)((ulong)lVar7 >> 0x30) == -0x80),
                            CONCAT15(-((char)((ulong)lVar7 >> 0x28) == -0x80),
                                     CONCAT14(-((char)((ulong)lVar7 >> 0x20) == -0x80),
                                              CONCAT13(-((char)((ulong)lVar7 >> 0x18) == -0x80),
                                                       CONCAT12(-((char)((ulong)lVar7 >> 0x10) ==
                                                                 -0x80),CONCAT11(-((char)((ulong)
                                                  lVar7 >> 8) == -0x80),-((char)lVar7 == -0x80))))))
                           ));
  uVar8 = *(undefined8 *)(lVar3 + ((ulong)((long)param_2 + (-8 - lVar3)) & uVar1));
  lVar7 = CONCAT17(-((char)((ulong)uVar8 >> 0x38) == -0x80),
                   CONCAT16(-((char)((ulong)uVar8 >> 0x30) == -0x80),
                            CONCAT15(-((char)((ulong)uVar8 >> 0x28) == -0x80),
                                     CONCAT14(-((char)((ulong)uVar8 >> 0x20) == -0x80),
                                              CONCAT13(-((char)((ulong)uVar8 >> 0x18) == -0x80),
                                                       CONCAT12(-((char)((ulong)uVar8 >> 0x10) ==
                                                                 -0x80),CONCAT11(-((char)((ulong)
                                                  uVar8 >> 8) == -0x80),-((char)uVar8 == -0x80))))))
                           ));
  if (lVar7 == 0 || uVar5 == 0) {
    uVar5 = 0;
    uVar6 = 0xfe;
  }
  else {
    uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
    uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
    uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
    uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
    bVar2 = ((ulong)LZCOUNT(lVar7) >> 3) + ((ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 3) < 8;
    uVar5 = (ulong)bVar2;
    uVar6 = 0x80;
    if (!bVar2) {
      uVar6 = 0xfe;
    }
  }
  *(undefined1 *)param_2 = uVar6;
  *(undefined1 *)(lVar3 + ((ulong)((long)param_2 + (-7 - lVar3)) & uVar1) + (uVar1 & 7)) = uVar6;
  *(ulong *)(lVar3 + -8) = *(long *)(lVar3 + -8) + uVar5;
  return param_1;
}



/* Entry: 107812a18; end: 107812a2b;  */

void FUN_107812a18(undefined8 param_1,undefined8 *param_2)

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
  lVar6 = param_2[1] + ((lVar1 - lVar5) / -0x38) * 0x38;
  lVar3 = lVar6;
  for (lVar4 = lVar5; lVar4 != lVar1; lVar4 = lVar4 + 0x38) {
    func_0x0001077ff70c(lVar3,lVar4);
    lVar3 = lVar3 + 0x38;
  }
  for (; lVar5 != lVar1; lVar5 = lVar5 + 0x38) {
    func_0x000107812b60();
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



/* Entry: 107812ea4; end: 10781311b;  */

void FUN_107812ea4(long param_1,undefined8 param_2,long *param_3,float *param_4,float *param_5,
                  long param_6,undefined8 param_7,long param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  undefined4 *puVar12;
  double dVar13;
  long lStack_b8;
  undefined2 auStack_b0 [8];
  long lStack_a0;
  
  lVar6 = param_1;
  func_0x0001096f6e38();
  lStack_b8 = lVar6;
  func_0x000107813830();
  func_0x0001096f69f4(lVar6);
  if (*(int *)(lStack_b8 + 4) != 0) {
    *(undefined4 *)(lStack_b8 + 0x38) = 4;
  }
  func_0x0001078138ac(param_1);
  uVar4 = *(uint *)(lStack_b8 + 0x60);
  puVar12 = *(undefined4 **)(lStack_b8 + 0x70);
  lVar6 = lStack_b8;
  func_0x0001096f6f94(lStack_b8,0);
  lVar6 = lVar6 + 8;
  for (uVar11 = (ulong)uVar4; uVar11 != 0; uVar11 = uVar11 - 1) {
    uVar5 = *puVar12;
    iVar1 = *(int *)(lVar6 + -8);
    iVar2 = *(int *)(lVar6 + -4);
    iVar3 = *(int *)(lVar6 + 4);
    lVar10 = param_8;
    func_0x000107813768(param_8,param_6 + 0x10);
    if (param_8 + 8 != lVar10) {
      auStack_b0[0] = (undefined2)uVar5;
      lVar7 = lVar10 + 0x28;
      func_0x0001078137cc(lVar7,auStack_b0);
      if (lVar10 + 0x30 != lVar7) {
        dVar13 = (double)iVar3 / 64.0;
        uVar8 = param_3[1];
        if (uVar8 < (ulong)param_3[2]) {
          func_0x00010781388c(dVar13 + (double)*param_5,dVar13,*(undefined8 *)(param_6 + 8));
          lVar10 = uVar8 + 0x80;
          param_3[1] = lVar10;
        }
        else {
          plVar9 = param_3;
          func_0x000107813454(dVar13 + (double)*param_5,dVar13,(double)*param_4,param_3,
                              ((long)(uVar8 - *param_3) >> 7) + 1);
          FUN_1078134d8(auStack_b0,plVar9,param_3[1] - *param_3 >> 7,param_3 + 2);
          func_0x00010781388c(lStack_a0);
          lStack_a0 = lStack_a0 + 0x80;
          func_0x000107813494(param_3,auStack_b0);
          lVar10 = param_3[1];
          func_0x0001078136fc(auStack_b0);
        }
        param_3[1] = lVar10;
        *param_4 = (float)((double)*param_4 + *(double *)(param_6 + 8) * ((double)iVar1 / 64.0));
        *param_5 = (float)iVar2 / 64.0 + *param_5;
      }
    }
    puVar12 = puVar12 + 5;
    lVar6 = lVar6 + 0x14;
  }
  func_0x00010781311c(&lStack_b8);
  return;
}



/* Entry: 1078132c8; end: 1078132f3;  */

long * FUN_1078132c8(long *param_1)

{
  func_0x0001078132f4();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1078134d8; end: 107813543;  */

long * FUN_1078134d8(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x000107813520();
  }
  lVar1 = param_4 + param_3 * 0x80;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x80;
  return param_1;
}



/* Entry: 107813730; end: 10781379f;  */

void FUN_107813730(void)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001078138fc();
  while (lVar1 = *(long *)(unaff_x20 + 0x10), unaff_x19 != lVar1) {
    *(long *)(unaff_x20 + 0x10) = lVar1 + -0x80;
    func_0x00010724b3d8(lVar1 + -0x48);
  }
  return;
}



/* Entry: 107813f44; end: 107813f8f;  */

long FUN_107813f44(undefined8 param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined1 in_ZR;
  long lVar2;
  long lVar3;
  long unaff_x19;
  float fVar4;
  double dVar5;
  undefined8 uStack_a8;
  undefined8 uStack_28;
  
  func_0x00010782262c(param_3,param_2);
  func_0x0001078228ec();
  func_0x000107822da0();
  func_0x000107821dac(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107822674();
    func_0x00010724b3d8();
    func_0x000107822028();
    func_0x00010782262c(param_3);
    lVar2 = param_2 + 0x38;
    func_0x0001078228ec();
    func_0x000107822da0();
    func_0x000107821dac(uStack_a8);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x000107822674();
      func_0x00010724b3d8();
      func_0x000107822028();
      lVar3 = *(long *)(param_2 + 0x70);
      plVar1 = (long *)(lVar2 + 0x1110);
      if (*(char *)(lVar2 + 0x1118) == '\0') {
        plVar1 = (long *)(param_2 + 0x70);
      }
      if (lVar3 <= *plVar1) {
        lVar3 = *plVar1;
      }
      dVar5 = *(double *)(param_3 + 0x78);
      _log2(dVar5);
      fVar4 = (float)dVar5;
      func_0x0001078227d8(fVar4,*(undefined4 *)(lVar2 + 0x1148));
      return (long)((1.0 - fVar4) * (float)lVar3);
    }
  }
  return unaff_x19;
}



/* Entry: 1078147d0; end: 1078149a3;  */

long FUN_1078147d0(long param_1)

{
  code *pcVar1;
  long lVar2;
  code *extraout_x8;
  long *plVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  lVar2 = param_1;
  func_0x000107822a84();
  plVar3 = (long *)(lVar2 + 0x30);
  *(long *)(*plVar3 + 0x400000) = *plVar3;
  lVar4 = *(long *)(lVar2 + 0x20);
  uStack_38 = CONCAT71(uStack_38._1_7_,1);
  lStack_40 = lVar4;
  __ZNSt3__119__shared_mutex_base4lockEv(lVar4);
  if ((ulong)(*(long *)(lVar4 + 0x100) - *(long *)(lVar4 + 0xf8) >> 4) < *(ulong *)(lVar4 + 0xa8)) {
    func_0x00010781f884((long *)(lVar4 + 0xf8),plVar3);
  }
  else {
    if (*(long *)(lVar4 + 0xf0) == 0) {
      func_0x000104bfeb48();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10781498c);
      (*pcVar1)();
    }
    func_0x0001078229b8();
    (*extraout_x8)();
  }
  func_0x0001078228e4();
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_38 = *(undefined8 *)(param_1 + 0x38);
  lStack_40 = *(long *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  func_0x00010781f6d4(&lStack_40);
  func_0x00010781f6d4(&uStack_50);
  func_0x00010781f9c8(param_1 + 5000);
  func_0x00010781bf90(param_1 + 0x1368);
  FUN_10781c024(param_1 + 0x1348);
  func_0x0001074ae918(param_1 + 0x1330);
  func_0x000107261dac(param_1 + 0x1310);
  func_0x00010781c0d0(param_1 + 0x12f8);
  func_0x00010781c0d0(param_1 + 0x12e0);
  func_0x00010781c134(param_1 + 0x12b8);
  func_0x0001074c31ac(param_1 + 0x12a0);
  func_0x0001074c31ac(param_1 + 0x1288);
  FUN_10781f980(param_1 + 0x1260);
  func_0x00010781c17c(param_1 + 0x1238);
  func_0x00010781c1b4(param_1 + 0x1210);
  func_0x00010781c1ec(param_1 + 0x11e8);
  func_0x00010781c224(param_1 + 0x11c0);
  func_0x00010781c25c(param_1 + 0x1198);
  func_0x00010781c294(param_1 + 0x1178);
  func_0x0001074f6404(param_1 + 0x1158);
  func_0x00010781c31c(param_1 + 0x40);
  func_0x00010781f6d4(plVar3);
  func_0x0001074fa24c((long *)(lVar2 + 0x20));
  func_0x0001074fafd0(param_1 + 8);
  return param_1;
}



/* Entry: 10781733c; end: 10781735f;  */

long * FUN_10781733c(long *param_1,ulong param_2,ulong param_3)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_3 < (ulong)((long)(param_2 - (long)param_1) / 0xa8)) {
    return param_1 + param_3 * 0x15;
  }
  func_0x00010781cba8();
  if (((((param_2 & 1) == 0) && ((*(byte *)(*param_1 + 0xa60) & 1) != 0)) &&
      (lVar3 = param_1[1], *(char *)(lVar3 + 0x1168) == '\x01')) && (*(long *)(lVar3 + 0x1158) != 0)
     ) {
    lVar4 = param_1[2];
    lVar2 = *(long *)(lVar3 + 0x1158) + 0x1210;
    func_0x000107820220(lVar2,*(undefined4 *)(lVar4 + 0x658));
    param_1 = (long *)0x0;
    if (lVar2 != 0) {
      uVar1 = *(undefined1 *)(lVar2 + 0x14);
      param_1 = (long *)(lVar3 + 0x1210);
      func_0x0001078202c0(param_1,lVar4 + 0x658);
      *(undefined1 *)param_1 = uVar1;
    }
  }
  return param_1;
}



/* Entry: 1078187ec; end: 107818c17;  */

bool FUN_1078187ec(double param_1,ulong param_2,ulong param_3,undefined8 param_4,long param_5)

{
  char cVar1;
  char cVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  bool bVar4;
  ulong *puVar5;
  uint uVar6;
  byte bVar7;
  ulong extraout_x8;
  int extraout_w10;
  long unaff_x19;
  ulong *unaff_x20;
  bool bVar8;
  ulong *puVar9;
  long lVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  float fVar15;
  float fVar16;
  double dVar17;
  double dVar18;
  ulong uVar19;
  double dVar20;
  float fVar21;
  float fVar22;
  ulong uStack_398;
  ulong uStack_390;
  undefined4 uStack_388;
  ulong uStack_380;
  undefined4 uStack_378;
  ulong uStack_370;
  float fStack_368;
  ulong auStack_360 [4];
  undefined4 uStack_340;
  undefined1 auStack_330 [816];
  
  func_0x00010782311c();
  func_0x000107822a74();
  bVar8 = false;
  lVar10 = *(long *)(param_5 + 0x28);
  func_0x000107822818(*(undefined8 *)(lVar10 + 0x778));
  bVar4 = *(long *)(param_5 + 0x168) == *(long *)(param_5 + 0x170);
  uVar3 = (bool)in_ZR || bVar4;
  if ((*(char *)(lVar10 + 0x1b8) != '\0') &&
     ((*(byte *)(param_5 + 0xa60) & 1) != 0 || !(bool)in_ZR && !bVar4)) {
    uVar3 = *(long *)(unaff_x19 + 0x480) == *(long *)(unaff_x19 + 0x488);
    if ((bool)uVar3) {
      uVar3 = *(long *)(unaff_x19 + 0x790) == *(long *)(unaff_x19 + 0x798);
      bVar8 = !(bool)uVar3;
    }
    else {
      bVar8 = true;
    }
  }
  if (extraout_w10 == 0) {
    if ((bool)in_ZR || bVar4) {
      if (*(byte *)(param_5 + 0xa60) == 0) {
        return false;
      }
      if (*(long *)(param_5 + 0x168) == *(long *)(param_5 + 0x170)) {
        return false;
      }
      func_0x00010781906c(unaff_x19 + 0x100);
      if (bVar8) {
        func_0x00010781906c(unaff_x19 + 0x418);
        func_0x00010781906c(unaff_x19 + 0x728);
      }
    }
    else {
      *(undefined8 *)(unaff_x19 + 0x120) = *(undefined8 *)(unaff_x19 + 0x118);
      *(ushort *)(unaff_x19 + 0x74) = *(ushort *)(unaff_x19 + 0x74) & 0xfeff;
      puVar9 = *(ulong **)(unaff_x19 + 0xe0);
      func_0x000107822a40();
      uVar6 = (uint)param_5;
      (**(code **)(*puVar9 + 0x18))((float)param_1);
      dVar17 = (double)(ulong)uVar6;
      puVar5 = puVar9;
      func_0x000107822a40();
      func_0x00010782278c();
      cVar1 = *(char *)(lVar10 + 0x700);
      cVar2 = *(char *)(lVar10 + 0x688);
      func_0x000107822980(auStack_330);
      uVar14 = 0;
      uVar19 = 0;
      auStack_360[1] = 0;
      auStack_360[0] = 0;
      auStack_360[3] = 0;
      auStack_360[2] = 0;
      uStack_340 = 0x3f800000;
      while( true ) {
        uVar13 = (*(long *)(unaff_x19 + 0x188) - *(long *)(unaff_x19 + 0x180)) / 0xa8;
        bVar4 = uVar14 == uVar13;
        if (uVar13 <= uVar14) break;
        puVar11 = (ulong *)(*(long *)(unaff_x19 + 0x180) + uVar14 * 0xa8);
        func_0x000107822c74();
        if (bVar4) {
          bVar7 = *(byte *)((long)puVar11 + 0x8d) ^ 1;
        }
        else {
          bVar7 = 0;
        }
        puVar12 = puVar5;
        if (((puVar11[0xf] & 1) == 0) &&
           (func_0x000107822bd8(bVar7), puVar12 = puVar5, (extraout_x8 & 1) == 0)) {
          func_0x000107822e1c();
          fVar15 = (float)uVar19;
          fVar22 = (float)param_3;
          puVar12 = (ulong *)0x0;
          if (puVar5 == (ulong *)0x0) goto LAB_107818a8c;
          func_0x000107822c98();
          puVar12 = (ulong *)(ulong)*(byte *)((long)puVar5 + 0x24);
          uStack_370 = *puVar11;
          fStack_368 = *(float *)(puVar11 + 1);
          func_0x000107822f48(&uStack_370);
          uVar19 = param_2;
          if (fStack_368 != 0.0) {
            uStack_398 = uStack_370;
            uStack_390 = uStack_390 & 0xffffffff00000000;
            func_0x000107822f48(&uStack_398);
          }
          dVar18 = (double)(ulong)uVar6;
          if (((uint)puVar9 >> 8 & 1) == 0) {
            fVar16 = *(float *)(puVar11 + 3);
            dVar18 = (double)(ulong)(uint)fVar16;
            if (((ulong)puVar9 & 1) == 0) {
              fVar21 = *(float *)((long)puVar11 + 0x1c) - fVar16;
              uVar19 = (ulong)(uint)fVar21;
              dVar18 = (double)(ulong)(uint)(fVar16 + fVar21 * (float)((ulong)puVar9 >> 0x20));
            }
          }
          func_0x00010782287c();
          if (cVar2 == '\0') {
            uVar19 = (ulong)(uint)(float)dVar17;
            dVar18 = (double)(ulong)(uint)(*(float *)(unaff_x19 + 0xa58) / (float)dVar17);
          }
          func_0x0001078224bc();
          uStack_380 = 0;
          uStack_378 = 0;
          fVar16 = SUB84(dVar18,0);
          fVar21 = (float)uVar19;
          if (cVar2 == '\0') {
            uVar19 = (ulong)(uint)(fStack_368 + 0.0);
            param_3 = CONCAT44(fVar21,fVar16);
            param_2 = CONCAT44(fVar21 + (float)(uStack_370 >> 0x20),fVar16 + (float)uStack_370);
            uStack_390 = CONCAT44(uStack_390._4_4_,fStack_368 + 0.0);
            puVar12 = &uStack_398;
            uStack_398 = param_2;
            func_0x00010740b67c(puVar12,1,auStack_330);
          }
          else {
            if (cVar1 == '\0') {
              puVar12 = unaff_x20;
              dVar20 = dVar18;
              func_0x0001074163dc();
              func_0x000107818c8c(dVar18,uVar19,-dVar20);
              fVar16 = SUB84(dVar18,0);
              fVar21 = (float)uVar19;
            }
            param_2 = (ulong)(uint)((float)param_2 + fVar21);
            uVar19 = (ulong)(uint)(fVar15 + fVar16);
            param_3 = (ulong)(uint)(fVar22 + 0.0);
          }
          uStack_380 = CONCAT44((int)param_2,(int)uVar19);
          uStack_378 = (undefined4)param_3;
          if ((bVar8) && ((char)puVar11[0x14] == '\x01')) {
            puVar12 = auStack_360;
            uStack_398 = uVar14;
            uStack_390 = uStack_380;
            uStack_388 = uStack_378;
            func_0x000107818cd4(puVar12,puVar11[0x13],&uStack_398);
          }
          for (uVar13 = 0; uVar13 < (ulong)((long)(puVar11[0xd] - puVar11[0xc]) >> 2);
              uVar13 = uVar13 + 1) {
            uVar19 = (ulong)(uint)puVar11[0x12];
            puVar12 = &uStack_380;
            func_0x00010740b938(puVar12,unaff_x19 + 0x118);
          }
        }
        else {
LAB_107818a8c:
          func_0x0001078229ac(puVar11[0xd]);
          func_0x00010740b970();
        }
        uVar14 = uVar14 + 1;
        puVar5 = puVar12;
      }
      if ((bVar8) && ((*(ushort *)(unaff_x19 + 0x74) >> 8 & 1) != 0)) {
        func_0x000107818ff0();
        func_0x000107818ff0();
      }
      func_0x000107821560(auStack_360);
    }
    bVar8 = true;
  }
  else {
    if (*(char *)(lVar10 + 0x178) == '\0') {
      func_0x000107822364();
      bVar8 = !(bool)uVar3;
      if (!(bool)uVar3) {
        func_0x0001078220b0();
        func_0x00010782209c(unaff_x19 + 0x740,unaff_x19 + 0x7a8);
        func_0x00010740c340();
      }
      func_0x000107822354();
      if (!(bool)uVar3) {
        func_0x0001078220b0();
        bVar8 = true;
        func_0x00010782209c(unaff_x19 + 0x430,unaff_x19 + 0x498);
        func_0x00010740c340();
      }
    }
    else {
      bVar8 = false;
    }
    if ((*(long *)(unaff_x19 + 0x168) != *(long *)(unaff_x19 + 0x170)) &&
       (*(char *)(lVar10 + 0x700) == '\0')) {
      func_0x000107822a48();
      bVar8 = true;
      func_0x000107822cb0();
      func_0x00010740c340();
    }
  }
  return bVar8;
}



/* Entry: 1078195fc; end: 10781962b;  */

bool FUN_1078195fc(long param_1,long param_2,long param_3,long param_4)

{
  if (param_2 - param_1 == param_4 - param_3) {
    func_0x0001078223ac();
    return (int)param_1 == 0;
  }
  return false;
}



/* Entry: 10781a430; end: 10781a48f;  */

bool FUN_10781a430(long param_1,long param_2,long param_3,long param_4)

{
  if (param_2 - param_1 == param_4 - param_3) {
    func_0x0001078223ac();
    return (int)param_1 == 0;
  }
  return false;
}



/* Entry: 10781a884; end: 10781aaa3;  */

byte FUN_10781a884(undefined8 param_1,undefined8 param_2,long *param_3)

{
  byte bVar1;
  bool bVar2;
  long *plVar3;
  code *extraout_x8;
  long *unaff_x20;
  byte bVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined1 auStack_140 [64];
  byte bStack_100;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  
  func_0x0001078220d8();
  func_0x000107822f60();
  func_0x00010781aaa4(unaff_x20 + 0x281);
  func_0x000107821674(unaff_x20 + 0x27e);
  func_0x00010781aad8(unaff_x20 + 0x284);
  bVar4 = 0;
  unaff_x20[0x288] = 0;
  *(undefined1 *)(unaff_x20 + 0x287) = 1;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_70 = 0x3f800000;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  plVar5 = (long *)param_3[1];
  while (plVar5 != (long *)*param_3) {
    plVar5 = plVar5 + -1;
    func_0x000107822770();
    bVar1 = bStack_100;
    func_0x000107822a28(*(undefined8 *)(*plVar5 + 0x18));
    bVar4 = bVar4 | bVar1 & 1;
    func_0x0001074cfe98(auStack_140);
  }
  plVar5 = (long *)unaff_x20[0x284];
  plVar6 = (long *)unaff_x20[0x285];
  if (plVar5 != plVar6) {
    func_0x00010781e518(plVar5,plVar6,LZCOUNT(((long)plVar6 - (long)plVar5) / 0x708) << 1 ^ 0x7e,1);
    plVar5 = (long *)unaff_x20[0x284];
    plVar6 = (long *)unaff_x20[0x285];
  }
  for (plVar5 = plVar5 + 1; plVar5 + -1 != plVar6; plVar5 = plVar5 + 0xe1) {
    lVar7 = plVar5[-1];
    unaff_x20[0x288] = plVar5[0xdf];
    plVar3 = unaff_x20 + 0x27e;
    func_0x0001078201d4(plVar3,*(undefined4 *)(lVar7 + 0x658));
    if (plVar3 == (long *)0x0) {
      plVar3 = unaff_x20;
      func_0x000107816538();
      bVar2 = (char)unaff_x20[0x287] == '\x01';
      if (((!bVar2) || (((ulong)plVar3 & 0x101) != 0)) ||
         (func_0x000107822818(*(undefined8 *)(*(long *)(*plVar5 + 0x28) + 0x778)), bVar2)) {
        func_0x000107426444(unaff_x20 + 0x27e,lVar7 + 0x658);
      }
    }
  }
  *(undefined1 *)(unaff_x20 + 0x287) = 0;
  plVar5 = (long *)param_3[1];
  while (plVar5 != (long *)*param_3) {
    plVar5 = plVar5 + -1;
    func_0x000107822770();
    func_0x000107822a28(*(undefined8 *)(*plVar5 + 0x18));
    func_0x0001074cfe98(auStack_140);
  }
  func_0x00010782265c(*(undefined8 *)(*unaff_x20 + 0x48));
  (*extraout_x8)();
  func_0x00010781c46c(&uStack_a8);
  func_0x000107820168(&uStack_90);
  return bVar4;
}



/* Entry: 10781b630; end: 10781b65b;  */

void FUN_10781b630(void)

{
  undefined8 *unaff_x19;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010782302c();
  func_0x0001078216a4();
  unaff_x19[1] = uStack_28;
  *unaff_x19 = uStack_30;
  func_0x000107822064();
  return;
}



/* Entry: 10781ba5c; end: 10781ba6f;  */

void FUN_10781ba5c(void)

{
  FUN_1078147d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10781bb58; end: 10781bb8f;  */

undefined1 * FUN_10781bb58(undefined1 *param_1,long param_2)

{
  *param_1 = 0;
  param_1[0x20] = 0;
  if (*(char *)(param_2 + 0x20) == '\x01') {
    func_0x00010781bb90(param_1);
  }
  return param_1;
}



/* Entry: 10781bc80; end: 10781bc9f;  */

void FUN_10781bc80(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_1109e0220;
  return;
}



/* Entry: 10781bdc8; end: 10781bdd3;  */

undefined ** FUN_10781bdc8(void)

{
  return &PTR_DAT_1109e0370;
}



/* Entry: 10781c024; end: 10781c06f;  */

void FUN_10781c024(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x0001078230f8();
  if (unaff_x20 != 0) {
    pcVar1 = (char *)*unaff_x19;
    lVar2 = unaff_x19[1];
    for (; unaff_x20 != 0; unaff_x20 = unaff_x20 + -1) {
      if (-1 < *pcVar1) {
        func_0x00010781c070(lVar2);
      }
      lVar2 = lVar2 + 0xe0;
      pcVar1 = pcVar1 + 1;
    }
    func_0x000107822cd4();
  }
  return;
}



/* Entry: 10781c7c0; end: 10781c7e7;  */

undefined2 * FUN_10781c7c0(undefined2 *param_1,undefined2 *param_2)

{
  *param_1 = *param_2;
  FUN_10781bb58(param_1 + 4,param_2 + 4);
  return param_1;
}



/* Entry: 10781ccb8; end: 10781cdbf;  */

/* WARNING: Possible PIC construction at 0x00010781cd50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010781cd70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010781cd9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010781cdd4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010781cda0) */
/* WARNING: Removing unreachable block (ram,0x00010781cdb4) */
/* WARNING: Removing unreachable block (ram,0x00010781cd74) */
/* WARNING: Removing unreachable block (ram,0x00010781cd94) */
/* WARNING: Removing unreachable block (ram,0x00010781cdc0) */
/* WARNING: Removing unreachable block (ram,0x00010781cd80) */
/* WARNING: Removing unreachable block (ram,0x00010781cd54) */
/* WARNING: Removing unreachable block (ram,0x00010781cdd8) */

undefined *** FUN_10781ccb8(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined ***pppuVar1;
  undefined ***pppuVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined1 auStack_b8 [32];
  undefined1 auStack_98 [32];
  undefined **appuStack_78 [3];
  undefined8 *puStack_60;
  undefined **ppuStack_58;
  undefined8 uStack_50;
  undefined ***pppuStack_40;
  
  func_0x000107821e20();
  ppuStack_58 = &PTR_DAT_1109e0390;
  pppuStack_40 = &ppuStack_58;
  uStack_50 = param_3;
  if (*(char *)(param_2 + 0x20) == '\x01') {
    func_0x0001077f795c(auStack_b8);
    func_0x0001077f795c(auStack_98,&ppuStack_58);
    puVar3 = (undefined8 *)0x48;
    __Znwm();
    *puVar3 = &PTR_DAT_1109e0410;
    func_0x00010781bbac(puVar3 + 1,auStack_b8);
    func_0x00010781bbac(puVar3 + 5,auStack_98);
    puStack_60 = puVar3;
    FUN_10781d0e8(param_1,appuStack_78);
    pppuVar1 = appuStack_78;
  }
  else {
    FUN_10781d0e8(param_1,&ppuStack_58);
    pppuVar1 = &ppuStack_58;
  }
  pppuVar2 = (undefined ***)pppuVar1[3];
  if (pppuVar2 == pppuVar1) {
    lVar4 = 0x20;
  }
  else {
    if (pppuVar2 == (undefined ***)0x0) {
      return pppuVar1;
    }
    lVar4 = 0x28;
  }
  (**(code **)((long)*pppuVar2 + lVar4))();
  return pppuVar1;
}



/* Entry: 10781cf64; end: 10781cf7b;  */

undefined8 * FUN_10781cf64(undefined8 *param_1)

{
  if ((*(byte *)(param_1 + 3) & 1) != 0) {
    return param_1;
  }
  func_0x000104bdc2c8();
  *param_1 = &PTR_DAT_1109e0410;
  func_0x00010781cdc0(param_1 + 1);
  return param_1;
}



/* Entry: 10781d0e8; end: 10781d103;  */

void FUN_10781d0e8(long param_1)

{
  func_0x00010781bbac();
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}



/* Entry: 10781da98; end: 10781daaf;  */

void FUN_10781da98(long *param_1,long param_2)

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



/* Entry: 10781dc70; end: 10781dcf7;  */

undefined8 FUN_10781dc70(void)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 *puStack_38;
  
  func_0x0001078221e8();
  func_0x0001075162b0();
  func_0x000107822160();
  func_0x00010781dd18(auStack_48);
  uVar1 = *unaff_x20;
  puStack_38[1] = unaff_x20[1];
  *puStack_38 = uVar1;
  puStack_38 = puStack_38 + 2;
  func_0x0001078225f0();
  func_0x00010781dcf8();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  func_0x00010781dd60(auStack_48);
  return uVar1;
}



/* Entry: 10781df58; end: 10781dfd7;  */

void FUN_10781df58(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x0001078220d8();
  func_0x000104c318bc();
  func_0x0001078225fc();
  func_0x0001074f6868(param_1 + 0x50,unaff_x19 + 0x50);
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  uVar1 = *(undefined8 *)(unaff_x19 + 0x70);
  *(undefined8 *)(unaff_x20 + 0x78) = *(undefined8 *)(unaff_x19 + 0x78);
  *(undefined8 *)(unaff_x20 + 0x70) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x80) = *(undefined8 *)(unaff_x19 + 0x80);
  *(undefined8 *)(unaff_x19 + 0x70) = 0;
  *(undefined8 *)(unaff_x19 + 0x78) = 0;
  *(undefined8 *)(unaff_x19 + 0x80) = 0;
  uVar2 = *(undefined8 *)(unaff_x19 + 0x90);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x88);
  uVar4 = *(undefined8 *)(unaff_x19 + 0xa0);
  uVar3 = *(undefined8 *)(unaff_x19 + 0x98);
  *(undefined8 *)(unaff_x20 + 0xa8) = *(undefined8 *)(unaff_x19 + 0xa8);
  *(undefined8 *)(unaff_x20 + 0xa0) = uVar4;
  *(undefined8 *)(unaff_x20 + 0x98) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x90) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x88) = uVar1;
  func_0x0001072638b4(unaff_x20 + 0xb0,unaff_x19 + 0xb0);
  *(undefined4 *)(unaff_x20 + 0xd8) = *(undefined4 *)(unaff_x19 + 0xd8);
  func_0x00010781c098(unaff_x19 + 0x38);
  func_0x000107822ee4();
  return;
}



/* Entry: 10781e454; end: 10781e473;  */

void FUN_10781e454(void)

{
  func_0x000107821f80();
  func_0x000107821ec8();
  return;
}



/* Entry: 10781e9b0; end: 10781ea83;  */

/* WARNING: Possible PIC construction at 0x00010781ea14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010781ec2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010781eca0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010781ecd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010781ecec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010781ede0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010781eec0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010781eed4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010781eff8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010781f0c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010781eda4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010781ebb0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010781eda8) */
/* WARNING: Removing unreachable block (ram,0x00010781edb4) */
/* WARNING: Removing unreachable block (ram,0x00010781f0c8) */
/* WARNING: Removing unreachable block (ram,0x00010781f0ec) */
/* WARNING: Removing unreachable block (ram,0x00010781f0e0) */
/* WARNING: Removing unreachable block (ram,0x000107821e30) */
/* WARNING: Removing unreachable block (ram,0x00010781effc) */
/* WARNING: Removing unreachable block (ram,0x00010781f01c) */
/* WARNING: Removing unreachable block (ram,0x00010781f000) */
/* WARNING: Removing unreachable block (ram,0x00010781f014) */
/* WARNING: Removing unreachable block (ram,0x00010781f020) */
/* WARNING: Removing unreachable block (ram,0x00010781f084) */
/* WARNING: Removing unreachable block (ram,0x00010781eed8) */
/* WARNING: Removing unreachable block (ram,0x00010781ef08) */
/* WARNING: Removing unreachable block (ram,0x00010781ef38) */
/* WARNING: Removing unreachable block (ram,0x00010781efa8) */
/* WARNING: Removing unreachable block (ram,0x00010781efd0) */
/* WARNING: Removing unreachable block (ram,0x00010781efd8) */
/* WARNING: Removing unreachable block (ram,0x00010781f038) */
/* WARNING: Removing unreachable block (ram,0x00010781efe8) */
/* WARNING: Removing unreachable block (ram,0x00010781eff0) */
/* WARNING: Removing unreachable block (ram,0x00010781ef44) */
/* WARNING: Removing unreachable block (ram,0x00010781ef88) */
/* WARNING: Removing unreachable block (ram,0x00010781f048) */
/* WARNING: Removing unreachable block (ram,0x00010781ef74) */
/* WARNING: Removing unreachable block (ram,0x00010781ef60) */
/* WARNING: Removing unreachable block (ram,0x00010781ef6c) */
/* WARNING: Removing unreachable block (ram,0x00010781f05c) */
/* WARNING: Removing unreachable block (ram,0x00010781f060) */
/* WARNING: Removing unreachable block (ram,0x00010781f094) */
/* WARNING: Removing unreachable block (ram,0x00010781f06c) */
/* WARNING: Removing unreachable block (ram,0x00010781eeec) */
/* WARNING: Removing unreachable block (ram,0x00010781ede4) */
/* WARNING: Removing unreachable block (ram,0x00010781ee08) */
/* WARNING: Removing unreachable block (ram,0x00010781ee38) */
/* WARNING: Removing unreachable block (ram,0x00010781ee4c) */
/* WARNING: Removing unreachable block (ram,0x00010781ee6c) */
/* WARNING: Removing unreachable block (ram,0x00010781ee64) */
/* WARNING: Removing unreachable block (ram,0x00010781ee58) */
/* WARNING: Removing unreachable block (ram,0x00010781ee60) */
/* WARNING: Removing unreachable block (ram,0x00010781ee74) */
/* WARNING: Removing unreachable block (ram,0x00010781ee7c) */
/* WARNING: Removing unreachable block (ram,0x00010781eeb0) */
/* WARNING: Removing unreachable block (ram,0x00010781eec4) */
/* WARNING: Removing unreachable block (ram,0x00010781eebc) */
/* WARNING: Removing unreachable block (ram,0x00010781ee84) */
/* WARNING: Removing unreachable block (ram,0x00010781ee88) */
/* WARNING: Removing unreachable block (ram,0x00010781ee98) */
/* WARNING: Removing unreachable block (ram,0x00010781eeac) */
/* WARNING: Removing unreachable block (ram,0x00010781edf8) */
/* WARNING: Removing unreachable block (ram,0x00010781ecd4) */
/* WARNING: Removing unreachable block (ram,0x00010781eca4) */
/* WARNING: Removing unreachable block (ram,0x00010781eca8) */
/* WARNING: Removing unreachable block (ram,0x00010781ecc8) */
/* WARNING: Removing unreachable block (ram,0x00010781ec30) */
/* WARNING: Removing unreachable block (ram,0x00010781ec40) */
/* WARNING: Removing unreachable block (ram,0x00010781ece4) */
/* WARNING: Removing unreachable block (ram,0x00010781ec4c) */
/* WARNING: Removing unreachable block (ram,0x00010781ec6c) */
/* WARNING: Removing unreachable block (ram,0x00010781ecf0) */
/* WARNING: Removing unreachable block (ram,0x00010781ec88) */
/* WARNING: Removing unreachable block (ram,0x00010781ec94) */
/* WARNING: Removing unreachable block (ram,0x00010781ea18) */
/* WARNING: Removing unreachable block (ram,0x00010781ea3c) */
/* WARNING: Removing unreachable block (ram,0x00010781ea1c) */
/* WARNING: Removing unreachable block (ram,0x00010781ea30) */
/* WARNING: Removing unreachable block (ram,0x00010781ea40) */
/* WARNING: Removing unreachable block (ram,0x00010781ebb4) */
/* WARNING: Recovered jumptable eliminated as dead code */

undefined8 * FUN_10781e9b0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 uVar9;
  code *extraout_x8_03;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  ulong uVar10;
  undefined8 ***pppuVar11;
  undefined8 ***pppuVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 auStack_2410 [226];
  undefined8 *puStack_1d00;
  undefined8 *puStack_1cf8;
  undefined8 *puStack_1cf0;
  undefined8 **ppuStack_1ce0;
  undefined *puStack_1cd8;
  undefined1 auStack_1cd0 [3600];
  undefined8 uStack_ec0;
  undefined8 auStack_eb0 [10];
  undefined8 **ppuStack_e60;
  undefined *puStack_e58;
  undefined8 auStack_820 [15];
  undefined8 uStack_7a8;
  undefined8 **ppuStack_770;
  undefined *puStack_768;
  undefined1 auStack_760 [1800];
  undefined8 uStack_58;
  
  puVar4 = (undefined8 *)auStack_760;
  func_0x000107821e20();
  bVar5 = param_1 == param_2;
  uStack_58 = extraout_x8;
  if (!bVar5) {
    func_0x0001078220d8();
    unaff_x22 = (undefined8 *)0x0;
    param_2 = param_1;
    while( true ) {
      unaff_x21 = param_2 + 0xe1;
      bVar5 = true;
      if (unaff_x21 == unaff_x19) break;
      param_1 = unaff_x21;
      func_0x00010781e77c();
      if ((int)param_1 != 0) {
        func_0x000107822eac();
        puVar8 = (undefined8 *)((long)unaff_x20 + (long)unaff_x22);
        puVar6 = puVar8 + 0xe1;
        puVar13 = (undefined *)0x10781ea18;
        pppuVar12 = (undefined8 ***)&stack0xfffffffffffffff0;
        goto code_r0x00010781f0f0;
      }
      unaff_x22 = unaff_x22 + 0xe1;
      param_2 = unaff_x21;
    }
  }
  func_0x000107821dac(uStack_58);
  if (bVar5) {
    return param_1;
  }
  ___stack_chk_fail();
  puStack_768 = &UNK_10781ea84;
  ppuStack_770 = (undefined8 **)&stack0xfffffffffffffff0;
  func_0x000107821e20();
  bVar5 = param_1 == param_2;
  puVar6 = unaff_x20;
  uStack_7a8 = extraout_x8_00;
  if (!bVar5) {
    func_0x0001078220d8();
    while( true ) {
      unaff_x21 = unaff_x20;
      puVar6 = unaff_x21 + 0xe1;
      bVar5 = true;
      unaff_x22 = auStack_eb0;
      if (puVar6 == unaff_x19) break;
      param_1 = puVar6;
      func_0x000107822170();
      unaff_x20 = puVar6;
      if ((int)param_1 != 0) {
        func_0x0001078220fc();
        do {
          puVar6 = unaff_x21 + 0xe1;
          func_0x000107822910();
          func_0x000107822140();
        } while (((ulong)puVar6 & 1) != 0);
        func_0x000107822e98(unaff_x21 + 0xe1);
        param_1 = auStack_820;
        func_0x0001077f79bc();
      }
    }
  }
  func_0x000107821dac(uStack_7a8);
  if (bVar5) {
    return param_1;
  }
  ___stack_chk_fail();
  puVar13 = &UNK_10781eb20;
  func_0x0001078227a0();
  pppuVar11 = &ppuStack_e60;
  puVar3 = (undefined8 *)auStack_1cd0;
  puVar4 = (undefined8 *)auStack_1cd0;
  ppuStack_e60 = &ppuStack_770;
  puStack_e58 = puVar13;
  func_0x000107821e20();
  bVar5 = true;
  uStack_ec0 = extraout_x8_01;
  if (param_1 == param_2) {
code_r0x00010781ed04:
    func_0x000107821dac(uStack_ec0);
    if (bVar5) {
      return param_1;
    }
    ___stack_chk_fail();
    puStack_1cd8 = &UNK_10781ed20;
    pppuVar12 = &ppuStack_1ce0;
    puVar3 = auStack_2410;
    puVar4 = auStack_2410;
    param_2 = auStack_2410;
    puStack_1d00 = unaff_x22;
    puStack_1cf8 = unaff_x21;
    puStack_1cf0 = puVar6;
    ppuStack_1ce0 = pppuVar11;
    func_0x000107822830();
    func_0x000107821e20();
    FUN_10781f1f0(auStack_2410);
    puVar8 = unaff_x21 + -0xe1;
    func_0x00010781e77c();
    unaff_x20 = unaff_x19;
    if (((ulong)param_2 & 1) == 0) {
      do {
        unaff_x20 = unaff_x20 + 0xe1;
        if (unaff_x21 <= unaff_x20) break;
        func_0x0001078224a4();
      } while ((int)param_2 == 0);
    }
    else {
      do {
        unaff_x20 = unaff_x20 + 0xe1;
        func_0x0001078224a4();
      } while (((ulong)param_2 & 1) == 0);
    }
    if (unaff_x20 < unaff_x21) {
      do {
        func_0x000107822140();
      } while (((ulong)param_2 & 1) != 0);
    }
    if (unaff_x20 < unaff_x21) {
      func_0x00010782289c();
      puVar13 = &UNK_10781eda8;
      pppuVar11 = pppuVar12;
code_r0x00010781f098:
      puVar6 = param_2;
      *(undefined8 **)((long)puVar3 + -0x30) = unaff_x22;
      *(undefined8 **)((long)puVar3 + -0x28) = unaff_x21;
      *(undefined8 **)((long)puVar3 + -0x20) = unaff_x20;
      *(undefined8 **)((long)puVar3 + -0x18) = unaff_x19;
      *(undefined8 ****)((long)puVar3 + -0x10) = pppuVar11;
      *(undefined **)((long)puVar3 + -8) = puVar13;
      pppuVar12 = (undefined8 ***)((long)puVar3 + -0x10);
      puVar4 = (undefined8 *)((long)puVar3 + -0x740);
      unaff_x21 = (undefined8 *)((long)puVar3 + -0x740);
      func_0x0001078220d8();
      func_0x000107821e20();
      *(undefined8 *)((long)puVar3 + -0x38) = extraout_x8_02;
      func_0x0001078220fc();
      func_0x00010782265c();
      puVar13 = &UNK_10781f0c8;
    }
    else {
      unaff_x21 = unaff_x20 + -0xe1;
      puVar6 = param_2;
      if (unaff_x19 != unaff_x21) {
        func_0x000107822910();
        puVar6 = unaff_x19;
      }
      func_0x000107822c2c();
      puVar13 = &UNK_10781ede4;
      unaff_x19 = auStack_2410;
    }
  }
  else {
    func_0x0001078220d8();
    unaff_x21 = (undefined8 *)(((long)param_2 - (long)param_1) / 0x708);
    if (0x708 < (long)param_2 - (long)param_1) {
      uVar10 = (ulong)((long)unaff_x21 + -2) >> 1;
      do {
        func_0x00010782289c();
        func_0x00010781f27c();
        uVar10 = uVar10 - 1;
        param_2 = unaff_x19;
      } while (-1 < (long)uVar10);
    }
    for (; unaff_x20 = puVar6, param_2 != param_3; param_2 = param_2 + 0xe1) {
      param_1 = param_2;
      func_0x0001078224fc();
      if ((int)param_1 != 0) {
        puVar13 = &UNK_10781ebb4;
        puVar8 = puVar6;
        unaff_x22 = param_3;
        goto code_r0x00010781f098;
      }
    }
    unaff_x22 = (undefined8 *)((long)unaff_x21 + -2);
    bVar5 = unaff_x22 == (undefined8 *)0x0;
    if ((long)unaff_x21 < 2) goto code_r0x00010781ed04;
    func_0x0001078220fc();
    puVar1 = puVar6 + 0xe1;
    puVar8 = puVar1;
    if (2 < (long)unaff_x21) {
      puVar7 = puVar1;
      func_0x00010781e77c(puVar1,puVar6 + 0x1c2);
      puVar8 = puVar6 + 0x1c2;
      if ((int)puVar7 == 0) {
        puVar8 = puVar1;
      }
    }
    puVar13 = &UNK_10781ec30;
    unaff_x22 = puVar8;
    pppuVar12 = pppuVar11;
  }
code_r0x00010781f0f0:
  *(undefined8 **)((long)puVar4 + -0x30) = unaff_x22;
  *(undefined8 **)((long)puVar4 + -0x28) = unaff_x21;
  *(undefined8 **)((long)puVar4 + -0x20) = unaff_x20;
  *(undefined8 **)((long)puVar4 + -0x18) = unaff_x19;
  *(undefined8 ****)((long)puVar4 + -0x10) = pppuVar12;
  *(undefined **)((long)puVar4 + -8) = puVar13;
  func_0x0001078221e8();
  *puVar6 = *puVar8;
  func_0x000107822eb8(puVar6 + 1,puVar8 + 1);
  *(undefined2 *)(unaff_x19 + 0xd1) = *(undefined2 *)(unaff_x20 + 0xd1);
  puVar6 = unaff_x19 + 0xd2;
  cVar2 = *(char *)(unaff_x19 + 0xd6);
  if (cVar2 != *(char *)(unaff_x20 + 0xd6)) {
    if (cVar2 == '\0') {
      func_0x00010781bb90(puVar6,unaff_x20 + 0xd2);
    }
    else {
      func_0x0001077f828c();
      *(undefined1 *)(unaff_x19 + 0xd6) = 0;
    }
    goto code_r0x00010781f1b0;
  }
  if (cVar2 == '\0') goto code_r0x00010781f1b0;
  puVar8 = (undefined8 *)unaff_x19[0xd5];
  unaff_x19[0xd5] = 0;
  if (puVar8 == puVar6) {
    uVar9 = 0x20;
code_r0x00010781f174:
    func_0x000107822498(uVar9);
  }
  else if (puVar8 != (undefined8 *)0x0) {
    uVar9 = 0x28;
    goto code_r0x00010781f174;
  }
  puVar8 = (undefined8 *)unaff_x20[0xd5];
  if (puVar8 == (undefined8 *)0x0) {
    unaff_x19[0xd5] = 0;
  }
  else if (puVar8 == unaff_x20 + 0xd2) {
    unaff_x19[0xd5] = puVar6;
    func_0x000107822650(unaff_x20[0xd5]);
    (*extraout_x8_03)();
  }
  else {
    unaff_x19[0xd5] = puVar8;
    unaff_x20[0xd5] = 0;
  }
code_r0x00010781f1b0:
  uVar14 = unaff_x20[0xd8];
  uVar9 = unaff_x20[0xd7];
  uVar16 = unaff_x20[0xda];
  uVar15 = unaff_x20[0xd9];
  uVar18 = unaff_x20[0xdc];
  uVar17 = unaff_x20[0xdb];
  uVar19 = *(undefined8 *)((long)unaff_x20 + 0x6e1);
  *(undefined8 *)((long)unaff_x19 + 0x6e9) = *(undefined8 *)((long)unaff_x20 + 0x6e9);
  *(undefined8 *)((long)unaff_x19 + 0x6e1) = uVar19;
  unaff_x19[0xda] = uVar16;
  unaff_x19[0xd9] = uVar15;
  unaff_x19[0xdc] = uVar18;
  unaff_x19[0xdb] = uVar17;
  unaff_x19[0xd8] = uVar14;
  unaff_x19[0xd7] = uVar9;
  uVar9 = unaff_x20[0xdf];
  unaff_x19[0xe0] = unaff_x20[0xe0];
  unaff_x19[0xdf] = uVar9;
  return unaff_x19;
}



/* Entry: 10781f1f0; end: 10781f27b;  */

void FUN_10781f1f0(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x0001078220d8();
  *param_1 = *param_2;
  func_0x00010781f228(param_1 + 1,param_2 + 1);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x6f8);
  *(undefined8 *)(unaff_x20 + 0x700) = *(undefined8 *)(unaff_x19 + 0x700);
  *(undefined8 *)(unaff_x20 + 0x6f8) = uVar1;
  return;
}



/* Entry: 10781f6f8; end: 10781f76f;  */

long * FUN_10781f6f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *plVar3;
  long *plVar4;
  
  func_0x0001078220d8();
  plVar2 = *(long **)(unaff_x20 + 8);
  plVar3 = (long *)(unaff_x20 + 8);
  while (plVar4 = plVar3, plVar2 != (long *)0x0) {
    while (plVar4 = plVar2, uVar1 = param_3, func_0x000104c2fc44(param_3,plVar4 + 4),
          (int)uVar1 == 0) {
      plVar2 = plVar4 + 4;
      func_0x000104c2fc44(plVar2,param_3);
      if ((int)plVar2 == 0) goto LAB_10781f760;
      plVar3 = plVar4 + 1;
      plVar2 = (long *)*plVar3;
      if ((long *)*plVar3 == (long *)0x0) goto LAB_10781f760;
    }
    plVar3 = plVar4;
    plVar2 = (long *)*plVar4;
  }
LAB_10781f760:
  *unaff_x19 = plVar4;
  return plVar3;
}



/* Entry: 10781f980; end: 10781f9c7;  */

void FUN_10781f980(long param_1)

{
  long *unaff_x20;
  
  func_0x0001078230f8();
  while (unaff_x20 != (long *)0x0) {
    param_1 = (long)(unaff_x20 + 3);
    unaff_x20 = (long *)*unaff_x20;
    func_0x0001074b5130();
    func_0x0001078224e8();
  }
  func_0x000107822330();
  if (param_1 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 10781fdbc; end: 10781fdd3;  */

void FUN_10781fdbc(long *param_1,long param_2)

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



/* Entry: 107820100; end: 107820117;  */

void FUN_107820100(long *param_1,long param_2)

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



/* Entry: 107820654; end: 107820807;  */

long * FUN_107820654(undefined8 param_1,undefined8 param_2,long *param_3,long *param_4)

{
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 uVar1;
  long *plVar2;
  long *plVar3;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar4;
  ulong extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long *plVar5;
  long *extraout_x9;
  long *extraout_x9_00;
  long *extraout_x9_01;
  ulong extraout_x10;
  long *plVar6;
  long *plVar7;
  long *unaff_x24;
  long lVar8;
  
  plVar2 = (long *)*param_4;
  func_0x00010781e16c();
  plVar7 = (long *)param_3[1];
  plVar3 = plVar2;
  if (plVar7 == (long *)0x0) {
    lVar8 = *param_4;
  }
  else {
    func_0x000107822824();
    if ((bool)in_ZR) {
      unaff_x24 = (long *)(extraout_x8 & (ulong)plVar2);
      in_ZR = true;
    }
    else {
      in_NG = (long)plVar2 - (long)plVar7 < 0;
      in_ZR = plVar2 == plVar7;
      unaff_x24 = plVar2;
      if (plVar7 <= plVar2) {
        uVar4 = 0;
        if (plVar7 != (long *)0x0) {
          uVar4 = (ulong)plVar2 / (ulong)plVar7;
        }
        unaff_x24 = (long *)((long)plVar2 - uVar4 * (long)plVar7);
      }
    }
    plVar6 = *(long **)(*param_3 + (long)unaff_x24 * 8);
    lVar8 = *param_4;
    uVar4 = extraout_x8;
    if (plVar6 != (long *)0x0) {
      do {
        while( true ) {
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) goto LAB_107820710;
          plVar5 = (long *)plVar6[1];
          if (plVar5 != plVar2) break;
          in_NG = plVar6[2] - lVar8 < 0;
          in_ZR = false;
          if (plVar6[2] == lVar8) goto LAB_1078207dc;
        }
        if (((ulong)plVar7 & uVar4) == 0) {
          plVar5 = (long *)((ulong)plVar5 & uVar4);
        }
        else if (plVar7 <= plVar5) {
          func_0x00010782306c();
          uVar4 = extraout_x8_00;
          plVar5 = extraout_x9;
        }
        in_NG = (long)plVar5 - (long)unaff_x24 < 0;
        in_ZR = plVar5 == unaff_x24;
      } while ((bool)in_ZR);
    }
  }
LAB_107820710:
  plVar6 = param_3 + 2;
  func_0x000107822558();
  plVar5 = plVar3;
  func_0x0001078229a0();
  *plVar5 = 0;
  plVar5[1] = (long)plVar2;
  plVar5[2] = lVar8;
  plVar5[3] = 0;
  plVar5[4] = 0;
  plVar5[5] = 0;
  func_0x000107821fc4();
  if ((plVar7 == (long *)0x0) || (func_0x000107822234(param_1,param_2,(float)plVar7), (bool)in_NG))
  {
    func_0x000107822180();
    uVar1 = plVar7 == (long *)0x3;
    func_0x000107821dc0();
    func_0x00010781fe68(param_3);
    plVar7 = (long *)param_3[1];
    func_0x000107822824();
    if ((bool)uVar1) {
      in_ZR = 1;
      unaff_x24 = (long *)(extraout_x8_01 & (ulong)plVar2);
    }
    else {
      in_ZR = plVar2 == plVar7;
      unaff_x24 = plVar2;
      if (plVar7 <= plVar2) {
        uVar4 = 0;
        if (plVar7 != (long *)0x0) {
          uVar4 = (ulong)plVar2 / (ulong)plVar7;
        }
        unaff_x24 = (long *)((long)plVar2 - uVar4 * (long)plVar7);
      }
    }
  }
  lVar8 = *param_3;
  if (*(long *)(lVar8 + (long)unaff_x24 * 8) == 0) {
    *plVar3 = *plVar6;
    *plVar6 = (long)plVar3;
    *(long **)(lVar8 + (long)unaff_x24 * 8) = plVar6;
    if (*plVar3 != 0) {
      func_0x000107822af4();
      lVar8 = extraout_x8_02;
      if ((bool)in_ZR) {
        plVar2 = (long *)((ulong)extraout_x9_00 & extraout_x10);
      }
      else {
        plVar2 = extraout_x9_00;
        if (plVar7 <= extraout_x9_00) {
          func_0x00010782306c();
          lVar8 = extraout_x8_03;
          plVar2 = extraout_x9_01;
        }
      }
      *(long **)(lVar8 + (long)plVar2 * 8) = plVar3;
    }
  }
  else {
    func_0x000107822538();
  }
  func_0x000107821f1c();
  func_0x000107820808();
  plVar6 = plVar3;
LAB_1078207dc:
  return plVar6 + 3;
}



/* Entry: 107820bdc; end: 1078212b7;  */

void FUN_107820bdc(long *param_1,long *param_2,undefined8 *param_3,ulong param_4,long *param_5)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 unaff_x30;
  
  if (param_4 == 0) {
    return;
  }
  func_0x0001078227a0();
  if (param_4 == 2) {
    lVar5 = param_2[-1];
    lVar7 = *param_1;
    uVar3 = *param_3;
    func_0x000107820b4c(uVar3,*(undefined4 *)(lVar5 + 0x658),*(undefined4 *)(lVar7 + 0x658));
    if ((int)uVar3 == 0) {
      *param_5 = lVar7;
      lVar5 = param_2[-1];
    }
    else {
      *param_5 = lVar5;
      lVar5 = *param_1;
    }
    param_5[1] = lVar5;
  }
  else if (param_4 == 1) {
    *param_5 = *param_1;
  }
  else if ((long)param_4 < 9) {
    if (param_1 != param_2) {
      lVar5 = 0;
      *param_5 = *param_1;
      plVar4 = param_5;
      while (param_1 = param_1 + 1, param_1 != param_2) {
        plVar6 = plVar4 + 1;
        lVar7 = *param_1;
        lVar9 = *plVar4;
        uVar3 = *param_3;
        func_0x000107820b4c(uVar3,*(undefined4 *)(lVar7 + 0x658),*(undefined4 *)(lVar9 + 0x658));
        if ((int)uVar3 == 0) {
          *plVar6 = lVar7;
        }
        else {
          *plVar6 = lVar9;
          for (lVar7 = lVar5; lVar7 != 0; lVar7 = lVar7 + -8) {
            lVar9 = *param_1;
            lVar10 = ((long *)((long)param_5 + lVar7))[-1];
            uVar3 = *param_3;
            func_0x000107820b4c(uVar3,*(undefined4 *)(lVar9 + 0x658),*(undefined4 *)(lVar10 + 0x658)
                               );
            plVar4 = (long *)((long)param_5 + lVar7);
            if ((int)uVar3 == 0) goto LAB_107820cd8;
            *(long *)((long)param_5 + lVar7) = lVar10;
          }
          lVar9 = *param_1;
          plVar4 = param_5;
LAB_107820cd8:
          *plVar4 = lVar9;
        }
        lVar5 = lVar5 + 8;
        plVar4 = plVar6;
      }
    }
  }
  else {
    uVar8 = param_4 >> 1;
    plVar4 = param_1 + uVar8;
    func_0x000107820928(param_1,plVar4,param_3,uVar8,param_5,uVar8);
    lVar5 = param_4 - (param_4 >> 1);
    func_0x000107820928(plVar4,param_2,param_3,lVar5,param_5 + uVar8,lVar5);
    plVar6 = plVar4;
    while (param_1 != plVar4) {
      if (plVar6 == param_2) goto LAB_107820da4;
      lVar7 = *plVar6;
      lVar9 = *param_1;
      iVar2 = (int)*param_3;
      func_0x000107822cc8();
      bVar1 = iVar2 == 0;
      lVar5 = 8;
      if (bVar1) {
        lVar5 = 0;
      }
      plVar6 = (long *)((long)plVar6 + lVar5);
      lVar5 = 0;
      if (bVar1) {
        lVar5 = 8;
      }
      param_1 = (long *)((long)param_1 + lVar5);
      if (bVar1) {
        lVar7 = lVar9;
      }
      *param_5 = lVar7;
      param_5 = param_5 + 1;
    }
    for (; plVar6 != param_2; plVar6 = plVar6 + 1) {
      *param_5 = *plVar6;
      param_5 = param_5 + 1;
    }
  }
LAB_107820dac:
  func_0x00010782233c(unaff_x30);
  return;
LAB_107820da4:
  for (; param_1 != plVar4; param_1 = param_1 + 1) {
    *param_5 = *param_1;
    param_5 = param_5 + 1;
  }
  goto LAB_107820dac;
}



/* Entry: 1078215d4; end: 107821673;  */

long FUN_1078215d4(long *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar6 = param_1[1];
  if ((uVar6 != 0) && (param_1[3] != 0)) {
    uVar1 = *param_2;
    uVar7 = (ulong)uVar1;
    uVar8 = uVar6 - 1;
    uVar5 = (uint)uVar6;
    if ((uVar6 & uVar8) == 0) {
      uVar9 = (ulong)(uVar5 - 1 & uVar1);
    }
    else {
      uVar9 = uVar7;
      if (uVar6 <= uVar7) {
        uVar2 = 0;
        if (uVar5 != 0) {
          uVar2 = uVar1 / uVar5;
        }
        uVar9 = (ulong)(uVar1 - uVar2 * uVar5);
      }
    }
    plVar4 = *(long **)(*param_1 + uVar9 * 8);
    if (plVar4 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar4 = (long *)*plVar4;
        if (plVar4 == (long *)0x0) {
          return 0;
        }
        uVar10 = plVar4[1];
        if (uVar10 != uVar7) break;
        if (*(uint *)(plVar4 + 2) == uVar1) {
          return (long)plVar4;
        }
      }
      if ((uVar6 & uVar8) == 0) {
        uVar10 = uVar10 & uVar8;
      }
      else if (uVar6 <= uVar10) {
        uVar3 = 0;
        if (uVar6 != 0) {
          uVar3 = uVar10 / uVar6;
        }
        uVar10 = uVar10 - uVar3 * uVar6;
      }
    } while (uVar10 == uVar9);
  }
  return 0;
}



/* Entry: 10782183c; end: 107821863;  */

long FUN_10782183c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  func_0x000107821864();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10782198c; end: 1078219a7;  */

void FUN_10782198c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e0540;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107821ae0; end: 107821ae7;  */

void FUN_107821ae0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001078223c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1078231ac; end: 1078232b3;  */

void FUN_1078231ac(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *unaff_x19;
  long lVar4;
  undefined1 auStack_70 [8];
  undefined1 uStack_68;
  
  plVar3 = param_2;
  func_0x00010782439c();
  puVar2 = (undefined8 *)0x1;
  func_0x000107824050();
  *unaff_x19 = puVar2;
  unaff_x19[2] = puVar2 + (long)plVar3;
  *puVar2 = 0xbf800000;
  unaff_x19[1] = puVar2 + 1;
  uStack_68 = 1;
  func_0x000107824084(auStack_70);
  lVar1 = param_2[1];
  for (lVar4 = *param_2; lVar4 != lVar1; lVar4 = lVar4 + 8) {
    func_0x0001078243e0();
    func_0x0001078243e0();
  }
  func_0x0001078243e0();
  return;
}



/* Entry: 1078240b4; end: 1078240cb;  */

void FUN_1078240b4(long *param_1)

{
  if (*param_1 != 0) {
    param_1[1] = *param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107824358; end: 107824433;  */

void FUN_107824358(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  undefined4 *param_9,undefined8 param_10,undefined1 param_11,undefined1 param_12,
                  undefined8 param_13)

{
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  func_0x000107824368();
  *param_9 = param_1;
  param_9[1] = param_2;
  param_9[2] = param_3;
  param_9[3] = param_4;
  param_9[4] = param_5;
  param_9[5] = param_6;
  param_9[6] = param_7;
  param_9[7] = param_8;
  *(undefined8 *)(param_9 + 8) = param_10;
  *(undefined8 *)(param_9 + 0xc) = in_stack_00000010;
  *(undefined8 *)(param_9 + 10) = in_stack_00000008;
  param_9[0xe] = in_stack_00000000;
  param_9[0xf] = in_stack_00000004;
  *(undefined1 *)(param_9 + 0x10) = param_11;
  *(undefined1 *)((long)param_9 + 0x41) = param_12;
  *(undefined8 *)(param_9 + 0x12) = param_13;
  param_9[0x14] = in_stack_00000018;
  param_9[0x15] = in_stack_0000001c;
  return;
}



/* Entry: 1078250b4; end: 107825133;  */

undefined8 * FUN_1078250b4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = uVar1;
  func_0x0001077fee20(param_1 + 2,param_2 + 2);
  return param_1;
}



/* Entry: 1078256ac; end: 1078256f7;  */

float FUN_1078256ac(float param_1,float param_2,float param_3,int param_4)

{
  float fVar1;
  float fVar2;
  
  fVar2 = (param_1 - param_2) * (param_1 - param_2);
  if (param_4 != 0) {
    fVar1 = fVar2 + fVar2;
    if (param_1 < param_2) {
      fVar1 = fVar2 * 0.5;
    }
    return fVar1;
  }
  fVar1 = param_3 * param_3 + fVar2;
  if (param_3 < 0.0) {
    fVar1 = fVar2 - param_3 * param_3;
  }
  return fVar1;
}



/* Entry: 1078269b4; end: 107826a0b;  */

void FUN_1078269b4(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  if (param_1[2] != 0) {
    plVar1 = (long *)param_1[1];
    plVar2 = *(long **)(*param_1 + 8);
    lVar3 = *plVar1;
    *(long **)(lVar3 + 8) = plVar2;
    *plVar2 = lVar3;
    param_1[2] = 0;
    while (plVar1 != param_1) {
      plVar1 = (long *)plVar1[1];
      __ZdlPv();
    }
  }
  return;
}



/* Entry: 107826df4; end: 107826dff;  */

long * FUN_107826df4(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  func_0x000107827864();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x000107826e4c();
  }
  lVar1 = param_4 + param_3 * 0xa8;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0xa8;
  return param_1;
}



/* Entry: 107827020; end: 107827027;  */

void FUN_107827020(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001078278bc(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0xa8;
    func_0x000107405490();
  }
  return;
}



/* Entry: 107827270; end: 1078272a3;  */

void FUN_107827270(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001078278bc();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x18;
    func_0x00010089ccb4();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1078277ec; end: 10782796b;  */

void FUN_1078277ec(void)

{
  return;
}



/* Entry: 107827c74; end: 107827cd3;  */

double FUN_107827c74(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  double dVar4;
  
  uVar3 = 0;
  dVar4 = 0.0;
  while( true ) {
    uVar2 = (ulong)*(char *)(param_1 + 0x17);
    if ((long)uVar2 < 0) {
      uVar2 = *(ulong *)(param_1 + 8);
    }
    if (uVar2 <= uVar3) break;
    lVar1 = param_1;
    func_0x000107825abc(param_1,uVar3);
    if (dVar4 <= *(double *)(lVar1 + 8)) {
      dVar4 = *(double *)(lVar1 + 8);
    }
    uVar3 = uVar3 + 1;
  }
  return dVar4;
}



/* Entry: 107828110; end: 1078281ab;  */

undefined1 *
FUN_107828110(undefined8 param_1,undefined1 *param_2,undefined1 param_3,undefined8 param_4,
             undefined8 *param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uStack_41;
  
  *param_2 = param_3;
  *(undefined8 *)(param_2 + 8) = param_1;
  puVar1 = &uStack_41;
  func_0x00010786e8ec(puVar1,param_4);
  *(undefined1 **)(param_2 + 0x10) = puVar1;
  func_0x000107278b70(param_2 + 0x18,param_4);
  uVar3 = param_5[1];
  uVar2 = *param_5;
  *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(param_5 + 2);
  *(undefined8 *)(param_2 + 0x30) = uVar3;
  *(undefined8 *)(param_2 + 0x28) = uVar2;
  param_2[0x40] = 0;
  param_2[0x78] = 0;
  uVar3 = param_6[1];
  uVar2 = *param_6;
  *(undefined4 *)(param_2 + 0x90) = *(undefined4 *)(param_6 + 2);
  *(undefined8 *)(param_2 + 0x88) = uVar3;
  *(undefined8 *)(param_2 + 0x80) = uVar2;
  *(undefined8 *)(param_2 + 0x98) = param_7;
  *(undefined8 *)(param_2 + 0xa0) = param_8;
  return param_2;
}



/* Entry: 1078285a0; end: 1078285bb;  */

long FUN_1078285a0(long param_1)

{
  long lVar1;
  
  for (lVar1 = 0; *(short *)(param_1 + lVar1 * 2) != 0; lVar1 = lVar1 + 1) {
  }
  return lVar1;
}



/* Entry: 10782899c; end: 1078289e3;  */

void FUN_10782899c(uint *param_1,long param_2,uint *param_3)

{
  uint *puVar1;
  ulong uVar2;
  uint *puVar3;
  ulong uVar4;
  
  uVar2 = param_2 - (long)param_1 >> 2;
  while (puVar3 = param_1, uVar2 != 0) {
    uVar4 = uVar2 >> 1;
    puVar1 = puVar3 + uVar4;
    uVar2 = uVar2 + (uVar2 >> 1 ^ 0xffffffffffffffff);
    param_1 = puVar1 + 1;
    if (*param_3 <= *puVar1) {
      uVar2 = uVar4;
      param_1 = puVar3;
    }
  }
  return;
}



/* Entry: 1078290a8; end: 10782921b;  */

void FUN_1078290a8(long param_1,int *param_2,ulong param_3)

{
  uint uVar1;
  long lVar2;
  int *piVar3;
  uint *puVar4;
  long lStack_70;
  long alStack_68 [3];
  double dStack_50;
  undefined2 uStack_48;
  short sStack_46;
  undefined2 uStack_44;
  undefined1 uStack_42;
  undefined1 auStack_40 [16];
  
  lVar2 = param_1;
  func_0x00010782a374(*(undefined8 *)(param_1 + 0x220));
  if ((((int)lVar2 == 0) || (*(char *)(param_1 + 0x1d8) != '\x01')) ||
     (*(ulong *)(param_1 + 0x1d0) <= param_3)) {
    func_0x0001072c8f9c(auStack_40);
    if ((*param_2 == 0) &&
       (piVar3 = param_2, func_0x0001072bf8d0(), **(long **)piVar3 != (*(long **)piVar3)[1])) {
      puVar4 = *(uint **)(param_1 + 0x378);
      uVar1 = 0;
      if ((ushort)puVar4[4] != 0) {
        uVar1 = *puVar4 / (uint)(ushort)puVar4[4];
      }
      uStack_44 = 0;
      uStack_42 = 0;
      uStack_48 = (undefined2)*puVar4;
      sStack_46 = *(short *)((long)puVar4 + 0x12) * (short)uVar1;
      dStack_50 = *(double *)(puVar4 + 2) * (double)uVar1;
      func_0x0001072bf928(alStack_68,param_2,*(undefined1 *)(param_1 + 0x10),
                          *(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),&dStack_50
                         );
      func_0x00010735a354(auStack_40,alStack_68);
      func_0x0001072c8f3c(alStack_68);
    }
    func_0x00010782921c(alStack_68,auStack_40,param_1 + 0x1b8);
    lStack_70 = alStack_68[0];
    alStack_68[0] = 0;
    func_0x00010782d44c(param_1,&lStack_70,param_3,1);
    lVar2 = lStack_70;
    lStack_70 = 0;
    if (lVar2 != 0) {
      func_0x00010782a2f0();
    }
    func_0x00010782a40c();
    if (lVar2 != 0) {
      func_0x00010782a2f0();
    }
    func_0x0001072c8f3c(auStack_40);
  }
  return;
}



/* Entry: 107829814; end: 107829843;  */

void FUN_107829814(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  uVar2 = *param_2;
  puVar1[1] = param_2[1];
  *puVar1 = uVar2;
  puVar1[2] = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}



/* Entry: 107829cf0; end: 107829d3b;  */

long * FUN_107829cf0(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x0001072844c8();
  }
  lVar1 = param_4 + param_3 * 0x108;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x108;
  return param_1;
}



/* Entry: 107829f00; end: 107829f57;  */

long FUN_107829f00(long param_1)

{
  func_0x00010724b54c(param_1 + 0x38);
  func_0x00010724ae28(param_1 + 0x20);
  return param_1;
}



/* Entry: 10782a14c; end: 10782a18f;  */

undefined ** FUN_10782a14c(void)

{
  return &PTR_DAT_1109e08f0;
}



/* Entry: 10782a4d8; end: 10782a5eb;  */

/* WARNING: Possible PIC construction at 0x00010782a534: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010782a538) */
/* WARNING: Removing unreachable block (ram,0x00010782a5bc) */
/* WARNING: Removing unreachable block (ram,0x00010782a5d4) */
/* WARNING: Removing unreachable block (ram,0x00010782a5e4) */
/* WARNING: Removing unreachable block (ram,0x00010782a5a8) */

void FUN_10782a4d8(long param_1,undefined8 param_2,int param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  ulong uStack_98;
  undefined1 *puStack_90;
  undefined8 uStack_88;
  long alStack_80 [9];
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x0001077b8a98(param_1 + 0x368);
  if (param_3 != 0) {
    func_0x00010782d5f0(param_1);
  }
  uStack_98 = (ulong)alStack_80 | 8;
  uStack_88 = 0x10782a538;
  uStack_a8 = *(undefined8 *)(param_1 + 0x380);
  uStack_b0 = *(undefined8 *)(param_1 + 0x378);
  if (*(long *)(param_1 + 0x380) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x380) + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lStack_a0 = param_1;
  puStack_90 = &stack0xfffffffffffffff0;
  alStack_80[0] = param_1;
  func_0x00010782aa0c(uStack_98,&uStack_b0,*(undefined8 *)(param_1 + 0x388));
  func_0x00010782acb8();
  return;
}



/* Entry: 10782a9e0; end: 10782aa7b;  */

void FUN_10782a9e0(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107250860();
  }
  *param_1 = 0;
  param_1[1] = 0;
  func_0x0001072508cc(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 10782ae4c; end: 10782ae57;  */

long FUN_10782ae4c(long param_1,long param_2)

{
  int *piVar1;
  long lVar2;
  int *piVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  int *piStack_60;
  long lStack_58;
  
  lVar6 = 0;
  piVar1 = (int *)((undefined8 *)**(undefined8 **)(param_1 + 8))[1];
  for (piVar7 = *(int **)**(undefined8 **)(param_1 + 8); piVar7 != piVar1; piVar7 = piVar7 + 0x1c) {
    piVar3 = (int *)0x0;
    switch(*piVar7) {
    case 2:
      piVar3 = piVar7 + 2;
      func_0x00010782b040(piVar3);
      break;
    case 3:
    case 5:
      piVar3 = (int *)((long)(piVar7[4] - piVar7[2]) & 0xfffffffffffffffc);
      break;
    case 4:
      piVar3 = piVar7 + 2;
      func_0x00010782b00c(piVar3);
      break;
    case 6:
      piVar3 = (int *)0x4;
      break;
    case 7:
      break;
    default:
      piVar3 = piVar7 + 2;
      if (*piVar7 == 1) {
        func_0x00010782b074();
      }
      else {
        func_0x00010782b0b4(piVar3);
      }
    }
    lVar6 = (long)piVar3 + lVar6;
    piVar3 = piVar7 + 8;
    func_0x000104c2db28();
    piStack_60 = piVar3;
    lVar2 = param_2;
    while (lStack_58 = lVar2, piStack_60 != (int *)0x0) {
      lVar4 = lVar2;
      func_0x000104c2d634(lVar2);
      lVar5 = 0;
      switch(*(int *)(lVar2 + 0x38)) {
      case 2:
        lVar5 = lVar2 + 0x40;
        func_0x000104c2d634(lVar5);
        break;
      case 3:
      case 4:
      case 5:
        lVar5 = 8;
        break;
      case 6:
        lVar5 = 1;
        break;
      case 7:
        break;
      default:
        lVar5 = lVar2 + 0x40;
        if (*(int *)(lVar2 + 0x38) == 1) {
          func_0x00010782b16c();
        }
        else {
          func_0x00010782b22c(lVar5);
        }
      }
      lVar6 = lVar4 + lVar6 + lVar5;
      func_0x000104c2de10(&piStack_60);
      lVar2 = lStack_58;
    }
    piStack_60 = (int *)0x0;
  }
  return lVar6;
}



/* Entry: 10782b354; end: 10782b357;  */

void FUN_10782b354(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e0c68;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10782b438; end: 10782b463;  */

void FUN_10782b438(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uStack_11;
  
  func_0x00010782b464(&uStack_11,param_1,param_2,param_3);
  return;
}


