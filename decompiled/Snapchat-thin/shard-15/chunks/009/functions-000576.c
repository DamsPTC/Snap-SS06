/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10bd08180; end: 10bd08263;  */

void FUN_10bd08180(void)

{
  ulong uVar1;
  undefined8 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  undefined1 in_ZR;
  char cVar7;
  char cVar8;
  undefined1 uVar9;
  long *plVar10;
  long lVar11;
  long extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 *extraout_x9;
  long *extraout_x9_00;
  undefined8 extraout_x11;
  undefined8 extraout_x11_00;
  long unaff_x19;
  long *unaff_x20;
  int *piVar12;
  undefined1 auStack_448 [16];
  undefined1 auStack_438 [8];
  undefined1 auStack_430 [256];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [56];
  
  func_0x00010bd09f5c();
  func_0x00010bd0b0f0();
  func_0x00010bd0a72c();
  func_0x00010bd0aaac(*(undefined8 *)(unaff_x19 + 8));
  func_0x00010bd0c52c();
  func_0x00010bd09fdc(*extraout_x9);
  FUN_10bd07f44();
  func_0x000107c3a63c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010bd09f5c();
    func_0x00010bd0b0f0();
    func_0x00010bd0a72c();
    func_0x00010bd0aaac(*(undefined8 *)(unaff_x19 + 8));
    func_0x00010bd0c52c();
    func_0x00010bd0a0f8(*(undefined8 *)(*extraout_x9_00 + 8));
    FUN_10bd07f44();
    func_0x000107c3a63c();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      plVar10 = unaff_x20;
      func_0x00010bd0a180();
      lVar11 = *(long *)(*plVar10 + 8);
      FUN_10bcee050(lVar11,*(undefined8 *)(*(long *)plVar10[1] + 0x20),
                    *(undefined4 *)(*(long *)plVar10[1] + 4));
      if (*(long *)(*(long *)unaff_x20[1] + 0x20) == 0) {
        func_0x00010bd0b974();
      }
      else {
        func_0x00010bd0b6e4(*(undefined8 *)(*(long *)(*(long *)unaff_x20[1] + 0x20) + 8),auStack_140
                           );
      }
      func_0x00010bcff8a4(auStack_128,*(undefined4 *)(*(long *)unaff_x20[1] + 4));
      func_0x00010bd0abbc();
      bVar6 = *(byte *)(*(long *)(lVar11 + 8) + 0x2f);
      cVar8 = (char)bVar6 < '\0';
      uVar9 = bVar6 == 0;
      cVar7 = '\0';
      uVar1 = *(ulong *)(*(long *)(lVar11 + 8) + 0x20);
      if (!(bool)cVar8) {
        uVar1 = (ulong)bVar6;
      }
      func_0x00010bd0af98(uVar1);
      FUN_10bd070c8();
      func_0x00010bd0aad4();
      func_0x00010bd09ff8();
      if ((bool)uVar9) {
        return;
      }
      ___stack_chk_fail();
      func_0x00010bd0aa70();
      func_0x00010bd0a974();
      func_0x00010bd09f38();
      func_0x00010bd0aac0();
      func_0x00010bd0a0f8(*(ulong *)(extraout_x8 + 0x20) & 0xfffffffffffffffc);
      uVar2 = extraout_x11;
      if (cVar8 == cVar7) {
        uVar2 = extraout_x8_00;
      }
      func_0x00010bd0a884(uVar2);
      func_0x00010bd09f78();
      func_0x000107c3a63c();
      if (!(bool)uVar9) {
        ___stack_chk_fail();
        func_0x00010bd09f38();
        func_0x00010bd0aac0();
        func_0x00010bd0a0f8(*(ulong *)(extraout_x8_01 + 0x28) & 0xfffffffffffffffc);
        uVar2 = extraout_x11_00;
        if (cVar8 == cVar7) {
          uVar2 = extraout_x8_02;
        }
        func_0x00010bd0a884(uVar2);
        func_0x00010bd09f78();
        func_0x000107c3a63c();
        if (!(bool)uVar9) {
          ___stack_chk_fail();
          func_0x00010bd0ade8();
          func_0x000105680760(auStack_448);
          func_0x00010549023c(auStack_438,&UNK_10f833d50);
          func_0x00010bd0a99c();
          func_0x000107c28084();
          func_0x00010549023c();
          piVar12 = (int *)**(undefined8 **)(lVar11 + 8);
          piVar3 = (int *)(*(undefined8 **)(lVar11 + 8))[1];
          func_0x00010bd0b5a0();
          for (; piVar12 != piVar3; piVar12 = piVar12 + 2) {
            iVar4 = **(int **)(lVar11 + 0x18);
            while( true ) {
              iVar5 = **(int **)(lVar11 + 0x10);
              if (*piVar12 <= iVar5 || iVar4 < 1) break;
              func_0x00010549023c(auStack_438);
              **(int **)(lVar11 + 0x10) = **(int **)(lVar11 + 0x10) + 1;
              __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
              iVar4 = **(int **)(lVar11 + 0x18) + -1;
              **(int **)(lVar11 + 0x18) = iVar4;
            }
            if (iVar4 == 0) break;
            if (iVar5 <= piVar12[1]) {
              iVar5 = piVar12[1];
            }
            **(int **)(lVar11 + 0x10) = iVar5;
          }
          func_0x000105491b64(auStack_430);
          func_0x000105673d7c(auStack_448);
          return;
        }
      }
      return;
    }
  }
  return;
}



/* Entry: 10bd08264; end: 10bd0836b;  */

void FUN_10bd08264(long *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  char cVar7;
  char cVar8;
  undefined1 uVar9;
  long *plVar10;
  long lVar11;
  long extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x11;
  undefined8 extraout_x11_00;
  int *piVar12;
  undefined1 auStack_388 [16];
  undefined1 auStack_378 [8];
  undefined1 auStack_370 [256];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [56];
  
  plVar10 = param_1;
  func_0x00010bd0a180();
  lVar11 = *(long *)(*plVar10 + 8);
  FUN_10bcee050(lVar11,*(undefined8 *)(*(long *)plVar10[1] + 0x20),
                *(undefined4 *)(*(long *)plVar10[1] + 4));
  if (*(long *)(*(long *)param_1[1] + 0x20) == 0) {
    func_0x00010bd0b974();
  }
  else {
    func_0x00010bd0b6e4(*(undefined8 *)(*(long *)(*(long *)param_1[1] + 0x20) + 8),auStack_80);
  }
  func_0x00010bcff8a4(auStack_68,*(undefined4 *)(*(long *)param_1[1] + 4));
  func_0x00010bd0abbc();
  bVar6 = *(byte *)(*(long *)(lVar11 + 8) + 0x2f);
  cVar8 = (char)bVar6 < '\0';
  uVar9 = bVar6 == 0;
  cVar7 = '\0';
  uVar1 = *(ulong *)(*(long *)(lVar11 + 8) + 0x20);
  if (!(bool)cVar8) {
    uVar1 = (ulong)bVar6;
  }
  func_0x00010bd0af98(uVar1);
  FUN_10bd070c8();
  func_0x00010bd0aad4();
  func_0x00010bd09ff8();
  if ((bool)uVar9) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bd0aa70();
  func_0x00010bd0a974();
  func_0x00010bd09f38();
  func_0x00010bd0aac0();
  func_0x00010bd0a0f8(*(ulong *)(extraout_x8 + 0x20) & 0xfffffffffffffffc);
  uVar2 = extraout_x11;
  if (cVar8 == cVar7) {
    uVar2 = extraout_x8_00;
  }
  func_0x00010bd0a884(uVar2);
  func_0x00010bd09f78();
  func_0x000107c3a63c();
  if (!(bool)uVar9) {
    ___stack_chk_fail();
    func_0x00010bd09f38();
    func_0x00010bd0aac0();
    func_0x00010bd0a0f8(*(ulong *)(extraout_x8_01 + 0x28) & 0xfffffffffffffffc);
    uVar2 = extraout_x11_00;
    if (cVar8 == cVar7) {
      uVar2 = extraout_x8_02;
    }
    func_0x00010bd0a884(uVar2);
    func_0x00010bd09f78();
    func_0x000107c3a63c();
    if (!(bool)uVar9) {
      ___stack_chk_fail();
      func_0x00010bd0ade8();
      func_0x000105680760(auStack_388);
      func_0x00010549023c(auStack_378,&UNK_10f833d50);
      func_0x00010bd0a99c();
      func_0x000107c28084();
      func_0x00010549023c();
      piVar12 = (int *)**(undefined8 **)(lVar11 + 8);
      piVar3 = (int *)(*(undefined8 **)(lVar11 + 8))[1];
      func_0x00010bd0b5a0();
      for (; piVar12 != piVar3; piVar12 = piVar12 + 2) {
        iVar4 = **(int **)(lVar11 + 0x18);
        while( true ) {
          iVar5 = **(int **)(lVar11 + 0x10);
          if (*piVar12 <= iVar5 || iVar4 < 1) break;
          func_0x00010549023c(auStack_378);
          **(int **)(lVar11 + 0x10) = **(int **)(lVar11 + 0x10) + 1;
          __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
          iVar4 = **(int **)(lVar11 + 0x18) + -1;
          **(int **)(lVar11 + 0x18) = iVar4;
        }
        if (iVar4 == 0) break;
        if (iVar5 <= piVar12[1]) {
          iVar5 = piVar12[1];
        }
        **(int **)(lVar11 + 0x10) = iVar5;
      }
      func_0x000105491b64(auStack_370);
      func_0x000105673d7c(auStack_388);
      return;
    }
  }
  return;
}



/* Entry: 10bd0836c; end: 10bd083fb;  */

void FUN_10bd0836c(void)

{
  undefined8 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  long extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x11;
  undefined8 extraout_x11_00;
  long unaff_x20;
  int *piVar5;
  undefined1 auStack_2e8 [16];
  undefined1 auStack_2d8 [8];
  undefined1 auStack_2d0 [256];
  
  FUN_10bd09f38();
  func_0x00010bd0aac0();
  func_0x00010bd0a0f8(*(ulong *)(extraout_x8 + 0x20) & 0xfffffffffffffffc);
  uVar1 = extraout_x11;
  if (in_NG == in_OV) {
    uVar1 = extraout_x8_00;
  }
  func_0x00010bd0a884(uVar1);
  func_0x00010bd09f78();
  func_0x000107c3a63c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    FUN_10bd09f38();
    func_0x00010bd0aac0();
    func_0x00010bd0a0f8(*(ulong *)(extraout_x8_01 + 0x28) & 0xfffffffffffffffc);
    uVar1 = extraout_x11_00;
    if (in_NG == in_OV) {
      uVar1 = extraout_x8_02;
    }
    func_0x00010bd0a884(uVar1);
    func_0x00010bd09f78();
    func_0x000107c3a63c();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010bd0ade8();
      func_0x000105680760(auStack_2e8);
      func_0x00010549023c(auStack_2d8,&UNK_10f833d50);
      func_0x00010bd0a99c();
      func_0x000107c28084();
      func_0x00010549023c();
      piVar5 = (int *)**(undefined8 **)(unaff_x20 + 8);
      piVar2 = (int *)(*(undefined8 **)(unaff_x20 + 8))[1];
      func_0x00010bd0b5a0();
      for (; piVar5 != piVar2; piVar5 = piVar5 + 2) {
        iVar3 = **(int **)(unaff_x20 + 0x18);
        while( true ) {
          iVar4 = **(int **)(unaff_x20 + 0x10);
          if (*piVar5 <= iVar4 || iVar3 < 1) break;
          func_0x00010549023c(auStack_2d8);
          **(int **)(unaff_x20 + 0x10) = **(int **)(unaff_x20 + 0x10) + 1;
          __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
          iVar3 = **(int **)(unaff_x20 + 0x18) + -1;
          **(int **)(unaff_x20 + 0x18) = iVar3;
        }
        if (iVar3 == 0) break;
        if (iVar4 <= piVar5[1]) {
          iVar4 = piVar5[1];
        }
        **(int **)(unaff_x20 + 0x10) = iVar4;
      }
      func_0x000105491b64(auStack_2d0);
      func_0x000105673d7c(auStack_2e8);
      return;
    }
  }
  return;
}



/* Entry: 10bd083fc; end: 10bd08523;  */

void FUN_10bd083fc(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  long unaff_x20;
  int *piVar4;
  undefined1 auStack_168 [16];
  undefined1 auStack_158 [8];
  undefined1 auStack_150 [256];
  
  func_0x00010bd0ade8();
  func_0x000105680760(auStack_168);
  func_0x00010549023c(auStack_158,&UNK_10f833d50);
  func_0x00010bd0a99c();
  func_0x000107c28084();
  func_0x00010549023c();
  piVar4 = (int *)**(undefined8 **)(unaff_x20 + 8);
  piVar1 = (int *)(*(undefined8 **)(unaff_x20 + 8))[1];
  func_0x00010bd0b5a0();
  for (; piVar4 != piVar1; piVar4 = piVar4 + 2) {
    iVar2 = **(int **)(unaff_x20 + 0x18);
    while( true ) {
      iVar3 = **(int **)(unaff_x20 + 0x10);
      if (*piVar4 <= iVar3 || iVar2 < 1) break;
      func_0x00010549023c(auStack_158);
      **(int **)(unaff_x20 + 0x10) = **(int **)(unaff_x20 + 0x10) + 1;
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
      iVar2 = **(int **)(unaff_x20 + 0x18) + -1;
      **(int **)(unaff_x20 + 0x18) = iVar2;
    }
    if (iVar2 == 0) break;
    if (iVar3 <= piVar4[1]) {
      iVar3 = piVar4[1];
    }
    **(int **)(unaff_x20 + 0x10) = iVar3;
  }
  func_0x000105491b64(auStack_150);
  func_0x000105673d7c(auStack_168);
  return;
}



/* Entry: 10bd08524; end: 10bd0858b;  */

/* WARNING: Removing unreachable block (ram,0x00010bd08af0) */

void FUN_10bd08524(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  byte bVar6;
  undefined1 in_ZR;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined *puVar9;
  long lVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  ulong uVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  code *pcVar16;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined8 extraout_x9;
  long lVar17;
  long extraout_x9_00;
  undefined **ppuVar18;
  ulong uVar19;
  undefined8 *unaff_x19;
  undefined **unaff_x20;
  undefined **ppuVar20;
  long unaff_x25;
  uint6 uVar21;
  byte bVar22;
  char cVar24;
  char cVar25;
  char cVar26;
  char cVar27;
  char cVar28;
  undefined8 uVar23;
  byte bVar29;
  undefined8 uStack_468;
  undefined8 ****ppppuStack_450;
  code *pcStack_448;
  undefined *puStack_438;
  long lStack_430;
  ulong uStack_428;
  undefined8 ****ppppuStack_420;
  code *pcStack_418;
  undefined **ppuStack_410;
  undefined1 auStack_3e8 [48];
  undefined **ppuStack_3b8;
  undefined **ppuStack_3b0;
  undefined *apuStack_388 [6];
  undefined **ppuStack_358;
  undefined **ppuStack_350;
  undefined8 uStack_328;
  undefined1 ****ppppuStack_2d0;
  code *pcStack_2c8;
  undefined1 ***pppuStack_260;
  code *pcStack_258;
  undefined1 **ppuStack_200;
  code *pcStack_1f8;
  undefined *puStack_1e8;
  ulong uStack_1e0;
  undefined *puStack_188;
  ulong uStack_180;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined *puStack_58;
  undefined8 uStack_50;
  
  func_0x00010bd09f5c();
  puVar9 = &UNK_10f833d6d;
  func_0x000107c284bc();
  lVar10 = *(long *)*unaff_x19;
  uVar13 = (ulong)*(uint *)unaff_x19[1];
  puStack_58 = puVar9;
  uStack_50 = param_2;
  FUN_10bcef2d4();
  func_0x00010bd09fc4(*(undefined8 *)(lVar10 + 8));
  puVar9 = &UNK_10f833df6;
  func_0x000107c284bc();
  func_0x00010bd09f78();
  func_0x000107c3a63c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcStack_c8 = FUN_10bd0858c;
  puStack_d0 = &stack0xfffffffffffffff0;
  func_0x00010bd0a10c();
  func_0x00010bd0ad34();
  func_0x00010bd0ac98();
  func_0x00010bd09fa8(*(undefined8 *)(puVar9 + 8));
  puVar9 = &UNK_10f833e02;
  func_0x000107c284bc();
  puStack_188 = puVar9;
  uStack_180 = uVar13;
  func_0x00010bd0b35c();
  func_0x00010bd09fa8(*(undefined8 *)(*(long *)(extraout_x8 + 0x20) + 8));
  puVar9 = &UNK_10f833e2a;
  func_0x000107c284bc();
  puStack_1e8 = puVar9;
  uStack_1e0 = uVar13;
  func_0x00010bd0a628();
  func_0x00010bd0b1a4();
  func_0x00010bd09ff8();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1f8 = FUN_10bd08610;
  ppuStack_200 = &puStack_d0;
  func_0x00010bd09f5c();
  func_0x00010bd0b0f0();
  func_0x00010bd0a72c();
  func_0x00010bd0add0();
  func_0x00010bd0a43c();
  func_0x00010bd09fdc(*(undefined8 *)(extraout_x8_00 + 0x20));
  FUN_10bd07f44();
  func_0x000107c3a63c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcStack_258 = FUN_10bd08680;
  pppuStack_260 = &ppuStack_200;
  func_0x00010bd09f90();
  func_0x00010bd0b064();
  func_0x00010bd0a43c();
  func_0x00010bd0a72c();
  func_0x00010bd0add0();
  func_0x00010bd09fdc(*(undefined8 *)(extraout_x8_01 + 0x20));
  ppuVar14 = (undefined **)&UNK_10f833eb9;
  ppuVar11 = unaff_x20;
  func_0x00010bd0c220();
  func_0x00010bd09ff8();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcStack_2c8 = FUN_10bd086f8;
  ppppuStack_2d0 = &pppuStack_260;
  func_0x00010bd0ade8();
  lVar10 = 0;
  func_0x00010bd0a2e8(0);
  puStack_438 = &UNK_10e52b660;
  lStack_430 = 0;
  uStack_428 = 0;
  ppppuStack_420 = (undefined8 ****)0x0;
  lVar17 = extraout_x8_02;
  uStack_328 = extraout_x9;
  do {
    if (*(int *)(*(long *)*unaff_x20 + 4) <= lVar10) {
      ppuVar1 = (undefined **)(long)*(int *)(*(long *)unaff_x20[1] + 4);
LAB_10bd08840:
      ppuVar18 = ppuVar1;
      lVar10 = 0;
      ppuVar1 = (undefined **)((long)ppuVar18 + 1);
      Hint_Prefetch(puStack_438,0,2,0);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = (undefined *)((long)ppuVar18 + 0x110c8acd9);
      uVar19 = SUB168(auVar4 * ZEXT816(0x9ddfea08eb382d69),8) ^
               ((long)ppuVar18 + 0x110c8acd9) * -0x622015f714c7d297;
      uVar13 = (ulong)puStack_438 >> 0xc ^ uVar19 >> 7;
      bVar6 = (byte)uVar19;
      uVar21 = CONCAT15(bVar6,CONCAT14(bVar6,CONCAT13(bVar6,CONCAT12(bVar6,CONCAT11(bVar6,bVar6)))))
               & 0x7f7f7f7f7f7f;
      while( true ) {
        uVar13 = uVar13 & uStack_428;
        uVar23 = *(undefined8 *)(puStack_438 + uVar13);
        cVar24 = (char)((ulong)uVar23 >> 8);
        cVar25 = (char)((ulong)uVar23 >> 0x10);
        cVar26 = (char)((ulong)uVar23 >> 0x18);
        cVar27 = (char)((ulong)uVar23 >> 0x20);
        cVar28 = (char)((ulong)uVar23 >> 0x28);
        bVar22 = (byte)((ulong)uVar23 >> 0x30);
        bVar29 = (byte)((ulong)uVar23 >> 0x38);
        for (uVar19 = CONCAT17(-(bVar29 == (bVar6 & 0x7f)),
                               CONCAT16(-(bVar22 == (bVar6 & 0x7f)),
                                        CONCAT15(-(cVar28 == (char)(uVar21 >> 0x28)),
                                                 CONCAT14(-(cVar27 == (char)(uVar21 >> 0x20)),
                                                          CONCAT13(-(cVar26 ==
                                                                    (char)(uVar21 >> 0x18)),
                                                                   CONCAT12(-(cVar25 ==
                                                                             (char)(uVar21 >> 0x10))
                                                                            ,CONCAT11(-(cVar24 ==
                                                                                       (char)(uVar21
                                                                                             >> 8)),
                                                                                      -((char)uVar23
                                                                                       == (char)
                                                  uVar21)))))))) & 0x8080808080808080; uVar19 != 0;
            uVar19 = uVar19 - 1 & uVar19) {
          uVar2 = (uVar19 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar19 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
          if (*(undefined ***)
               (lVar17 + (uVar13 + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) & uStack_428
                         ) * 8) == ppuVar1) {
            ppuVar20 = (undefined **)(long)*(int *)(*(long *)unaff_x20[1] + 4);
            if (puStack_438 != (undefined *)0x0) goto LAB_10bd08840;
            goto LAB_10bd088d4;
          }
        }
        bVar22 = NEON_umaxv(CONCAT17(-(bVar29 == 0x80),
                                     CONCAT16(-(bVar22 == 0x80),
                                              CONCAT15(-(cVar28 == -0x80),
                                                       CONCAT14(-(cVar27 == -0x80),
                                                                CONCAT13(-(cVar26 == -0x80),
                                                                         CONCAT12(-(cVar25 == -0x80)
                                                                                  ,CONCAT11(-(cVar24
                                                                                             == 
                                                  -0x80),-((char)uVar23 == -0x80)))))))),1);
        ppuVar20 = ppuVar18;
        if ((bVar22 & 1) != 0) break;
        lVar10 = lVar10 + 8;
        uVar13 = lVar10 + uVar13;
      }
LAB_10bd088d4:
      func_0x00010bd0a3e4();
      ppuStack_358 = ppuVar11;
      ppuStack_350 = ppuVar14;
      func_0x00010bd0b0c8(unaff_x20[1]);
      func_0x00010bd09fa8();
      ppuVar11 = (undefined **)&UNK_10f833fca;
      func_0x000107c284bc();
      ppuStack_3b8 = ppuVar11;
      ppuStack_3b0 = ppuVar14;
      func_0x00010bd0a06c();
      pcVar16 = (code *)&UNK_10f833fea;
      func_0x000107c284bc();
      ppuVar11 = apuStack_388;
      pcStack_418 = pcVar16;
      ppuStack_410 = ppuVar14;
      func_0x00010bd0b1a4(&ppuStack_358,ppuVar11,&ppuStack_3b8,auStack_3e8,&pcStack_418);
      uVar7 = (undefined **)0x7ffffffc < ppuVar20;
      uVar8 = ppuVar20 == (undefined **)0x7ffffffd;
      if ((long)ppuVar20 < 0x7ffffffe) {
        ppuVar14 = (undefined **)&UNK_10f83403b;
        func_0x000107c284bc();
        ppuVar12 = apuStack_388;
        ppuVar15 = ppuVar1;
        ppuStack_358 = ppuVar14;
        ppuStack_350 = ppuVar11;
        func_0x0001089ed984();
        func_0x00010bd0a408();
        ppuStack_3b8 = ppuVar12;
        ppuStack_3b0 = ppuVar15;
        func_0x00010ae8c9e4();
      }
      FUN_10bd08b18(&puStack_438);
      func_0x000107c3a64c(uStack_328);
      if ((bool)uVar8) {
        return;
      }
      ___stack_chk_fail();
      func_0x00010bd0a688();
      ppuVar14 = &puStack_438;
      FUN_10bd08b18();
      func_0x00010bd0ac48();
      pcStack_448 = FUN_10bd089ec;
      ppppuStack_450 = &ppppuStack_2d0;
      func_0x00010bd0a084();
      func_0x000107c3a698();
      if ((extraout_x9_00 == 0) && (func_0x000107c3a69c(), !(bool)uVar8)) {
        func_0x000107c3a694();
        if (((bool)uVar7) && (func_0x000107c3a654(), (bool)uVar7)) {
          func_0x00010bd0a670();
        }
        else {
          func_0x000107c3a664();
          FUN_10bd08a60();
        }
        func_0x000107c3a660();
      }
      func_0x000107c3a634();
      func_0x000107c3a64c(uStack_468);
      if ((bool)uVar8) {
        return;
      }
      ___stack_chk_fail();
      pcVar16 = FUN_10bd08a60;
      func_0x00010bd0bbbc();
      ppppuStack_420 = &ppppuStack_450;
      pcStack_418 = pcVar16;
      func_0x00010bd0a2f8();
      func_0x000107c3a6a0();
      for (; ppuVar20 != &PTR_LOOP_110c8acd8; ppuVar20 = (undefined **)((long)ppuVar20 + 1)) {
        if (-1 < *(char *)((long)ppuVar1 + (long)ppuVar20)) {
          uVar13 = (long)&PTR_LOOP_110c8acd8 + *(long *)((long)ppuVar20 * 8 + -0x622015f714c7d297);
          auVar5._8_8_ = 0;
          auVar5._0_8_ = uVar13;
          func_0x000107c3a660();
          func_0x000107c3a638((SUB164(auVar5 * ZEXT816(0x9ddfea08eb382d69),8) ^
                              (int)uVar13 * -0x14c7d297) & 0x7f);
          *(undefined8 *)(unaff_x25 + (long)ppuVar14 * 8) =
               *(undefined8 *)((long)ppuVar20 * 8 + -0x622015f714c7d297);
        }
      }
      func_0x00010bd0b600((undefined *)((long)ppuVar18 + -7),pcStack_418);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
    lVar17 = 0;
    unaff_x25 = (long)*(int *)(*(long *)(*(long *)*unaff_x20 + 0x38) + lVar10 * 0x30 + 4);
    Hint_Prefetch(puStack_438,0,2,0);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (long)&PTR_LOOP_110c8acd8 + unaff_x25;
    ppuVar14 = (undefined **)
               (SUB168(auVar3 * ZEXT816(0x9ddfea08eb382d69),8) ^
               ((long)&PTR_LOOP_110c8acd8 + unaff_x25) * -0x622015f714c7d297);
    uVar13 = (ulong)ppuVar14 >> 7 ^ (ulong)puStack_438 >> 0xc;
    bVar6 = (byte)ppuVar14;
    uVar21 = CONCAT15(bVar6,CONCAT14(bVar6,CONCAT13(bVar6,CONCAT12(bVar6,CONCAT11(bVar6,bVar6))))) &
             0x7f7f7f7f7f7f;
    while( true ) {
      uVar13 = uVar13 & uStack_428;
      uVar23 = *(undefined8 *)(puStack_438 + uVar13);
      cVar24 = (char)((ulong)uVar23 >> 8);
      cVar25 = (char)((ulong)uVar23 >> 0x10);
      cVar26 = (char)((ulong)uVar23 >> 0x18);
      cVar27 = (char)((ulong)uVar23 >> 0x20);
      cVar28 = (char)((ulong)uVar23 >> 0x28);
      bVar22 = (byte)((ulong)uVar23 >> 0x30);
      bVar29 = (byte)((ulong)uVar23 >> 0x38);
      for (uVar19 = CONCAT17(-(bVar29 == (bVar6 & 0x7f)),
                             CONCAT16(-(bVar22 == (bVar6 & 0x7f)),
                                      CONCAT15(-(cVar28 == (char)(uVar21 >> 0x28)),
                                               CONCAT14(-(cVar27 == (char)(uVar21 >> 0x20)),
                                                        CONCAT13(-(cVar26 == (char)(uVar21 >> 0x18))
                                                                 ,CONCAT12(-(cVar25 ==
                                                                            (char)(uVar21 >> 0x10)),
                                                                           CONCAT11(-(cVar24 ==
                                                                                     (char)(uVar21 
                                                  >> 8)),-((char)uVar23 == (char)uVar21)))))))) &
                    0x8080808080808080; uVar19 != 0; uVar19 = uVar19 - 1 & uVar19) {
        uVar2 = (uVar19 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar19 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
        if (*(long *)(lStack_430 +
                     (uVar13 + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) & uStack_428) *
                     8) == unaff_x25) goto LAB_10bd08818;
      }
      bVar22 = NEON_umaxv(CONCAT17(-(bVar29 == 0x80),
                                   CONCAT16(-(bVar22 == 0x80),
                                            CONCAT15(-(cVar28 == -0x80),
                                                     CONCAT14(-(cVar27 == -0x80),
                                                              CONCAT13(-(cVar26 == -0x80),
                                                                       CONCAT12(-(cVar25 == -0x80),
                                                                                CONCAT11(-(cVar24 ==
                                                                                          -0x80),-((
                                                  char)uVar23 == -0x80)))))))),1);
      if ((bVar22 & 1) != 0) break;
      lVar17 = lVar17 + 8;
      uVar13 = lVar17 + uVar13;
    }
    ppuVar11 = &puStack_438;
    FUN_10bd089ec();
    *(long *)(lStack_430 + (long)ppuVar11 * 8) = unaff_x25;
LAB_10bd08818:
    lVar10 = lVar10 + 1;
    lVar17 = lStack_430;
  } while( true );
}



/* Entry: 10bd0858c; end: 10bd0860f;  */

/* WARNING: Removing unreachable block (ram,0x00010bd08af0) */

void FUN_10bd0858c(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  byte bVar6;
  undefined1 in_ZR;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  code *pcVar14;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined8 extraout_x9;
  long lVar15;
  long extraout_x9_00;
  ulong uVar16;
  undefined **ppuVar17;
  ulong uVar18;
  undefined **unaff_x20;
  long lVar19;
  undefined **ppuVar20;
  long unaff_x25;
  uint6 uVar21;
  byte bVar22;
  char cVar24;
  char cVar25;
  char cVar26;
  char cVar27;
  char cVar28;
  undefined8 uVar23;
  byte bVar29;
  undefined8 uStack_3a8;
  undefined1 ****ppppuStack_390;
  code *pcStack_388;
  undefined *puStack_378;
  long lStack_370;
  ulong uStack_368;
  undefined8 ****ppppuStack_360;
  code *pcStack_358;
  undefined **ppuStack_350;
  undefined1 auStack_328 [48];
  undefined **ppuStack_2f8;
  undefined **ppuStack_2f0;
  undefined *apuStack_2c8 [6];
  undefined **ppuStack_298;
  undefined **ppuStack_290;
  undefined8 uStack_268;
  undefined1 ***pppuStack_210;
  code *pcStack_208;
  undefined1 **ppuStack_1a0;
  code *pcStack_198;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  
  func_0x00010bd0a10c();
  func_0x00010bd0ad34();
  func_0x00010bd0ac98();
  func_0x00010bd09fa8(*(undefined8 *)(param_1 + 8));
  puVar9 = &UNK_10f833e02;
  func_0x000107c284bc();
  puStack_c8 = puVar9;
  uStack_c0 = param_2;
  func_0x00010bd0b35c();
  func_0x00010bd09fa8(*(undefined8 *)(*(long *)(extraout_x8 + 0x20) + 8));
  puVar9 = &UNK_10f833e2a;
  func_0x000107c284bc();
  puStack_128 = puVar9;
  uStack_120 = param_2;
  func_0x00010bd0a628();
  func_0x00010bd0b1a4();
  func_0x00010bd09ff8();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_10bd08610;
  puStack_140 = &stack0xfffffffffffffff0;
  func_0x00010bd09f5c();
  func_0x00010bd0b0f0();
  func_0x00010bd0a72c();
  func_0x00010bd0add0();
  func_0x00010bd0a43c();
  func_0x00010bd09fdc(*(undefined8 *)(extraout_x8_00 + 0x20));
  FUN_10bd07f44();
  func_0x000107c3a63c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcStack_198 = FUN_10bd08680;
  ppuStack_1a0 = &puStack_140;
  func_0x00010bd09f90();
  func_0x00010bd0b064();
  func_0x00010bd0a43c();
  func_0x00010bd0a72c();
  func_0x00010bd0add0();
  func_0x00010bd09fdc(*(undefined8 *)(extraout_x8_01 + 0x20));
  ppuVar12 = (undefined **)&UNK_10f833eb9;
  ppuVar10 = unaff_x20;
  func_0x00010bd0c220();
  func_0x00010bd09ff8();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcStack_208 = FUN_10bd086f8;
  pppuStack_210 = &ppuStack_1a0;
  func_0x00010bd0ade8();
  lVar19 = 0;
  func_0x00010bd0a2e8(0);
  puStack_378 = &UNK_10e52b660;
  lStack_370 = 0;
  uStack_368 = 0;
  ppppuStack_360 = (undefined8 ****)0x0;
  lVar15 = extraout_x8_02;
  uStack_268 = extraout_x9;
  do {
    if (*(int *)(*(long *)*unaff_x20 + 4) <= lVar19) {
      ppuVar1 = (undefined **)(long)*(int *)(*(long *)unaff_x20[1] + 4);
LAB_10bd08840:
      ppuVar17 = ppuVar1;
      lVar19 = 0;
      ppuVar1 = (undefined **)((long)ppuVar17 + 1);
      Hint_Prefetch(puStack_378,0,2,0);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = (undefined *)((long)ppuVar17 + 0x110c8acd9);
      uVar18 = SUB168(auVar4 * ZEXT816(0x9ddfea08eb382d69),8) ^
               ((long)ppuVar17 + 0x110c8acd9) * -0x622015f714c7d297;
      uVar16 = (ulong)puStack_378 >> 0xc ^ uVar18 >> 7;
      bVar6 = (byte)uVar18;
      uVar21 = CONCAT15(bVar6,CONCAT14(bVar6,CONCAT13(bVar6,CONCAT12(bVar6,CONCAT11(bVar6,bVar6)))))
               & 0x7f7f7f7f7f7f;
      while( true ) {
        uVar16 = uVar16 & uStack_368;
        uVar23 = *(undefined8 *)(puStack_378 + uVar16);
        cVar24 = (char)((ulong)uVar23 >> 8);
        cVar25 = (char)((ulong)uVar23 >> 0x10);
        cVar26 = (char)((ulong)uVar23 >> 0x18);
        cVar27 = (char)((ulong)uVar23 >> 0x20);
        cVar28 = (char)((ulong)uVar23 >> 0x28);
        bVar22 = (byte)((ulong)uVar23 >> 0x30);
        bVar29 = (byte)((ulong)uVar23 >> 0x38);
        for (uVar18 = CONCAT17(-(bVar29 == (bVar6 & 0x7f)),
                               CONCAT16(-(bVar22 == (bVar6 & 0x7f)),
                                        CONCAT15(-(cVar28 == (char)(uVar21 >> 0x28)),
                                                 CONCAT14(-(cVar27 == (char)(uVar21 >> 0x20)),
                                                          CONCAT13(-(cVar26 ==
                                                                    (char)(uVar21 >> 0x18)),
                                                                   CONCAT12(-(cVar25 ==
                                                                             (char)(uVar21 >> 0x10))
                                                                            ,CONCAT11(-(cVar24 ==
                                                                                       (char)(uVar21
                                                                                             >> 8)),
                                                                                      -((char)uVar23
                                                                                       == (char)
                                                  uVar21)))))))) & 0x8080808080808080; uVar18 != 0;
            uVar18 = uVar18 - 1 & uVar18) {
          uVar2 = (uVar18 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar18 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
          if (*(undefined ***)
               (lVar15 + (uVar16 + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) & uStack_368
                         ) * 8) == ppuVar1) {
            ppuVar20 = (undefined **)(long)*(int *)(*(long *)unaff_x20[1] + 4);
            if (puStack_378 != (undefined *)0x0) goto LAB_10bd08840;
            goto LAB_10bd088d4;
          }
        }
        bVar22 = NEON_umaxv(CONCAT17(-(bVar29 == 0x80),
                                     CONCAT16(-(bVar22 == 0x80),
                                              CONCAT15(-(cVar28 == -0x80),
                                                       CONCAT14(-(cVar27 == -0x80),
                                                                CONCAT13(-(cVar26 == -0x80),
                                                                         CONCAT12(-(cVar25 == -0x80)
                                                                                  ,CONCAT11(-(cVar24
                                                                                             == 
                                                  -0x80),-((char)uVar23 == -0x80)))))))),1);
        ppuVar20 = ppuVar17;
        if ((bVar22 & 1) != 0) break;
        lVar19 = lVar19 + 8;
        uVar16 = lVar19 + uVar16;
      }
LAB_10bd088d4:
      func_0x00010bd0a3e4();
      ppuStack_298 = ppuVar10;
      ppuStack_290 = ppuVar12;
      func_0x00010bd0b0c8(unaff_x20[1]);
      func_0x00010bd09fa8();
      ppuVar10 = (undefined **)&UNK_10f833fca;
      func_0x000107c284bc();
      ppuStack_2f8 = ppuVar10;
      ppuStack_2f0 = ppuVar12;
      func_0x00010bd0a06c();
      pcVar14 = (code *)&UNK_10f833fea;
      func_0x000107c284bc();
      ppuVar10 = apuStack_2c8;
      pcStack_358 = pcVar14;
      ppuStack_350 = ppuVar12;
      func_0x00010bd0b1a4(&ppuStack_298,ppuVar10,&ppuStack_2f8,auStack_328,&pcStack_358);
      uVar7 = (undefined **)0x7ffffffc < ppuVar20;
      uVar8 = ppuVar20 == (undefined **)0x7ffffffd;
      if ((long)ppuVar20 < 0x7ffffffe) {
        ppuVar12 = (undefined **)&UNK_10f83403b;
        func_0x000107c284bc();
        ppuVar11 = apuStack_2c8;
        ppuVar13 = ppuVar1;
        ppuStack_298 = ppuVar12;
        ppuStack_290 = ppuVar10;
        func_0x0001089ed984();
        func_0x00010bd0a408();
        ppuStack_2f8 = ppuVar11;
        ppuStack_2f0 = ppuVar13;
        func_0x00010ae8c9e4();
      }
      FUN_10bd08b18(&puStack_378);
      func_0x000107c3a64c(uStack_268);
      if ((bool)uVar8) {
        return;
      }
      ___stack_chk_fail();
      func_0x00010bd0a688();
      ppuVar12 = &puStack_378;
      FUN_10bd08b18();
      func_0x00010bd0ac48();
      pcStack_388 = FUN_10bd089ec;
      ppppuStack_390 = &pppuStack_210;
      func_0x00010bd0a084();
      func_0x000107c3a698();
      if ((extraout_x9_00 == 0) && (func_0x000107c3a69c(), !(bool)uVar8)) {
        func_0x000107c3a694();
        if (((bool)uVar7) && (func_0x000107c3a654(), (bool)uVar7)) {
          func_0x00010bd0a670();
        }
        else {
          func_0x000107c3a664();
          FUN_10bd08a60();
        }
        func_0x000107c3a660();
      }
      func_0x000107c3a634();
      func_0x000107c3a64c(uStack_3a8);
      if ((bool)uVar8) {
        return;
      }
      ___stack_chk_fail();
      pcVar14 = FUN_10bd08a60;
      func_0x00010bd0bbbc();
      ppppuStack_360 = &ppppuStack_390;
      pcStack_358 = pcVar14;
      func_0x00010bd0a2f8();
      func_0x000107c3a6a0();
      for (; ppuVar20 != &PTR_LOOP_110c8acd8; ppuVar20 = (undefined **)((long)ppuVar20 + 1)) {
        if (-1 < *(char *)((long)ppuVar1 + (long)ppuVar20)) {
          uVar16 = (long)&PTR_LOOP_110c8acd8 + *(long *)((long)ppuVar20 * 8 + -0x622015f714c7d297);
          auVar5._8_8_ = 0;
          auVar5._0_8_ = uVar16;
          func_0x000107c3a660();
          func_0x000107c3a638((SUB164(auVar5 * ZEXT816(0x9ddfea08eb382d69),8) ^
                              (int)uVar16 * -0x14c7d297) & 0x7f);
          *(undefined8 *)(unaff_x25 + (long)ppuVar12 * 8) =
               *(undefined8 *)((long)ppuVar20 * 8 + -0x622015f714c7d297);
        }
      }
      func_0x00010bd0b600((undefined *)((long)ppuVar17 + -7),pcStack_358);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
    lVar15 = 0;
    unaff_x25 = (long)*(int *)(*(long *)(*(long *)*unaff_x20 + 0x38) + lVar19 * 0x30 + 4);
    Hint_Prefetch(puStack_378,0,2,0);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (long)&PTR_LOOP_110c8acd8 + unaff_x25;
    ppuVar12 = (undefined **)
               (SUB168(auVar3 * ZEXT816(0x9ddfea08eb382d69),8) ^
               ((long)&PTR_LOOP_110c8acd8 + unaff_x25) * -0x622015f714c7d297);
    uVar16 = (ulong)ppuVar12 >> 7 ^ (ulong)puStack_378 >> 0xc;
    bVar6 = (byte)ppuVar12;
    uVar21 = CONCAT15(bVar6,CONCAT14(bVar6,CONCAT13(bVar6,CONCAT12(bVar6,CONCAT11(bVar6,bVar6))))) &
             0x7f7f7f7f7f7f;
    while( true ) {
      uVar16 = uVar16 & uStack_368;
      uVar23 = *(undefined8 *)(puStack_378 + uVar16);
      cVar24 = (char)((ulong)uVar23 >> 8);
      cVar25 = (char)((ulong)uVar23 >> 0x10);
      cVar26 = (char)((ulong)uVar23 >> 0x18);
      cVar27 = (char)((ulong)uVar23 >> 0x20);
      cVar28 = (char)((ulong)uVar23 >> 0x28);
      bVar22 = (byte)((ulong)uVar23 >> 0x30);
      bVar29 = (byte)((ulong)uVar23 >> 0x38);
      for (uVar18 = CONCAT17(-(bVar29 == (bVar6 & 0x7f)),
                             CONCAT16(-(bVar22 == (bVar6 & 0x7f)),
                                      CONCAT15(-(cVar28 == (char)(uVar21 >> 0x28)),
                                               CONCAT14(-(cVar27 == (char)(uVar21 >> 0x20)),
                                                        CONCAT13(-(cVar26 == (char)(uVar21 >> 0x18))
                                                                 ,CONCAT12(-(cVar25 ==
                                                                            (char)(uVar21 >> 0x10)),
                                                                           CONCAT11(-(cVar24 ==
                                                                                     (char)(uVar21 
                                                  >> 8)),-((char)uVar23 == (char)uVar21)))))))) &
                    0x8080808080808080; uVar18 != 0; uVar18 = uVar18 - 1 & uVar18) {
        uVar2 = (uVar18 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar18 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
        if (*(long *)(lStack_370 +
                     (uVar16 + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) & uStack_368) *
                     8) == unaff_x25) goto LAB_10bd08818;
      }
      bVar22 = NEON_umaxv(CONCAT17(-(bVar29 == 0x80),
                                   CONCAT16(-(bVar22 == 0x80),
                                            CONCAT15(-(cVar28 == -0x80),
                                                     CONCAT14(-(cVar27 == -0x80),
                                                              CONCAT13(-(cVar26 == -0x80),
                                                                       CONCAT12(-(cVar25 == -0x80),
                                                                                CONCAT11(-(cVar24 ==
                                                                                          -0x80),-((
                                                  char)uVar23 == -0x80)))))))),1);
      if ((bVar22 & 1) != 0) break;
      lVar15 = lVar15 + 8;
      uVar16 = lVar15 + uVar16;
    }
    ppuVar10 = &puStack_378;
    FUN_10bd089ec();
    *(long *)(lStack_370 + (long)ppuVar10 * 8) = unaff_x25;
LAB_10bd08818:
    lVar19 = lVar19 + 1;
    lVar15 = lStack_370;
  } while( true );
}



/* Entry: 10bd08610; end: 10bd0867f;  */

/* WARNING: Removing unreachable block (ram,0x00010bd08af0) */

void FUN_10bd08610(void)

{
  undefined **ppuVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  byte bVar6;
  undefined1 in_ZR;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  code *pcVar13;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 extraout_x9;
  long lVar14;
  long extraout_x9_00;
  ulong uVar15;
  undefined **ppuVar16;
  ulong uVar17;
  undefined **unaff_x20;
  long lVar18;
  undefined **ppuVar19;
  long unaff_x25;
  uint6 uVar20;
  byte bVar21;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  char cVar27;
  undefined8 uVar22;
  byte bVar28;
  undefined8 uStack_278;
  undefined1 ***pppuStack_260;
  code *pcStack_258;
  undefined *puStack_248;
  long lStack_240;
  ulong uStack_238;
  undefined1 ****ppppuStack_230;
  code *pcStack_228;
  undefined **ppuStack_220;
  undefined1 auStack_1f8 [48];
  undefined **ppuStack_1c8;
  undefined **ppuStack_1c0;
  undefined *apuStack_198 [6];
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  undefined8 uStack_138;
  undefined1 **ppuStack_e0;
  code *pcStack_d8;
  undefined1 *puStack_70;
  code *pcStack_68;
  
  func_0x00010bd09f5c();
  func_0x00010bd0b0f0();
  func_0x00010bd0a72c();
  func_0x00010bd0add0();
  func_0x00010bd0a43c();
  func_0x00010bd09fdc(*(undefined8 *)(extraout_x8 + 0x20));
  FUN_10bd07f44();
  func_0x000107c3a63c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcStack_68 = FUN_10bd08680;
  puStack_70 = &stack0xfffffffffffffff0;
  func_0x00010bd09f90();
  func_0x00010bd0b064();
  func_0x00010bd0a43c();
  func_0x00010bd0a72c();
  func_0x00010bd0add0();
  func_0x00010bd09fdc(*(undefined8 *)(extraout_x8_00 + 0x20));
  ppuVar11 = (undefined **)&UNK_10f833eb9;
  ppuVar9 = unaff_x20;
  func_0x00010bd0c220();
  func_0x00010bd09ff8();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcStack_d8 = FUN_10bd086f8;
  ppuStack_e0 = &puStack_70;
  func_0x00010bd0ade8();
  lVar18 = 0;
  func_0x00010bd0a2e8(0);
  puStack_248 = &UNK_10e52b660;
  lStack_240 = 0;
  uStack_238 = 0;
  ppppuStack_230 = (undefined1 ****)0x0;
  lVar14 = extraout_x8_01;
  uStack_138 = extraout_x9;
  do {
    if (*(int *)(*(long *)*unaff_x20 + 4) <= lVar18) {
      ppuVar1 = (undefined **)(long)*(int *)(*(long *)unaff_x20[1] + 4);
LAB_10bd08840:
      ppuVar16 = ppuVar1;
      lVar18 = 0;
      ppuVar1 = (undefined **)((long)ppuVar16 + 1);
      Hint_Prefetch(puStack_248,0,2,0);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = (undefined *)((long)ppuVar16 + 0x110c8acd9);
      uVar17 = SUB168(auVar4 * ZEXT816(0x9ddfea08eb382d69),8) ^
               ((long)ppuVar16 + 0x110c8acd9) * -0x622015f714c7d297;
      uVar15 = (ulong)puStack_248 >> 0xc ^ uVar17 >> 7;
      bVar6 = (byte)uVar17;
      uVar20 = CONCAT15(bVar6,CONCAT14(bVar6,CONCAT13(bVar6,CONCAT12(bVar6,CONCAT11(bVar6,bVar6)))))
               & 0x7f7f7f7f7f7f;
      while( true ) {
        uVar15 = uVar15 & uStack_238;
        uVar22 = *(undefined8 *)(puStack_248 + uVar15);
        cVar23 = (char)((ulong)uVar22 >> 8);
        cVar24 = (char)((ulong)uVar22 >> 0x10);
        cVar25 = (char)((ulong)uVar22 >> 0x18);
        cVar26 = (char)((ulong)uVar22 >> 0x20);
        cVar27 = (char)((ulong)uVar22 >> 0x28);
        bVar21 = (byte)((ulong)uVar22 >> 0x30);
        bVar28 = (byte)((ulong)uVar22 >> 0x38);
        for (uVar17 = CONCAT17(-(bVar28 == (bVar6 & 0x7f)),
                               CONCAT16(-(bVar21 == (bVar6 & 0x7f)),
                                        CONCAT15(-(cVar27 == (char)(uVar20 >> 0x28)),
                                                 CONCAT14(-(cVar26 == (char)(uVar20 >> 0x20)),
                                                          CONCAT13(-(cVar25 ==
                                                                    (char)(uVar20 >> 0x18)),
                                                                   CONCAT12(-(cVar24 ==
                                                                             (char)(uVar20 >> 0x10))
                                                                            ,CONCAT11(-(cVar23 ==
                                                                                       (char)(uVar20
                                                                                             >> 8)),
                                                                                      -((char)uVar22
                                                                                       == (char)
                                                  uVar20)))))))) & 0x8080808080808080; uVar17 != 0;
            uVar17 = uVar17 - 1 & uVar17) {
          uVar2 = (uVar17 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar17 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
          if (*(undefined ***)
               (lVar14 + (uVar15 + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) & uStack_238
                         ) * 8) == ppuVar1) {
            ppuVar19 = (undefined **)(long)*(int *)(*(long *)unaff_x20[1] + 4);
            if (puStack_248 != (undefined *)0x0) goto LAB_10bd08840;
            goto LAB_10bd088d4;
          }
        }
        bVar21 = NEON_umaxv(CONCAT17(-(bVar28 == 0x80),
                                     CONCAT16(-(bVar21 == 0x80),
                                              CONCAT15(-(cVar27 == -0x80),
                                                       CONCAT14(-(cVar26 == -0x80),
                                                                CONCAT13(-(cVar25 == -0x80),
                                                                         CONCAT12(-(cVar24 == -0x80)
                                                                                  ,CONCAT11(-(cVar23
                                                                                             == 
                                                  -0x80),-((char)uVar22 == -0x80)))))))),1);
        ppuVar19 = ppuVar16;
        if ((bVar21 & 1) != 0) break;
        lVar18 = lVar18 + 8;
        uVar15 = lVar18 + uVar15;
      }
LAB_10bd088d4:
      func_0x00010bd0a3e4();
      ppuStack_168 = ppuVar9;
      ppuStack_160 = ppuVar11;
      func_0x00010bd0b0c8(unaff_x20[1]);
      func_0x00010bd09fa8();
      ppuVar9 = (undefined **)&UNK_10f833fca;
      func_0x000107c284bc();
      ppuStack_1c8 = ppuVar9;
      ppuStack_1c0 = ppuVar11;
      func_0x00010bd0a06c();
      pcVar13 = (code *)&UNK_10f833fea;
      func_0x000107c284bc();
      ppuVar9 = apuStack_198;
      pcStack_228 = pcVar13;
      ppuStack_220 = ppuVar11;
      func_0x00010bd0b1a4(&ppuStack_168,ppuVar9,&ppuStack_1c8,auStack_1f8,&pcStack_228);
      uVar7 = (undefined **)0x7ffffffc < ppuVar19;
      uVar8 = ppuVar19 == (undefined **)0x7ffffffd;
      if ((long)ppuVar19 < 0x7ffffffe) {
        ppuVar11 = (undefined **)&UNK_10f83403b;
        func_0x000107c284bc();
        ppuVar10 = apuStack_198;
        ppuVar12 = ppuVar1;
        ppuStack_168 = ppuVar11;
        ppuStack_160 = ppuVar9;
        func_0x0001089ed984();
        func_0x00010bd0a408();
        ppuStack_1c8 = ppuVar10;
        ppuStack_1c0 = ppuVar12;
        func_0x00010ae8c9e4();
      }
      FUN_10bd08b18(&puStack_248);
      func_0x000107c3a64c(uStack_138);
      if ((bool)uVar8) {
        return;
      }
      ___stack_chk_fail();
      func_0x00010bd0a688();
      ppuVar11 = &puStack_248;
      FUN_10bd08b18();
      func_0x00010bd0ac48();
      pcStack_258 = FUN_10bd089ec;
      pppuStack_260 = &ppuStack_e0;
      func_0x00010bd0a084();
      func_0x000107c3a698();
      if ((extraout_x9_00 == 0) && (func_0x000107c3a69c(), !(bool)uVar8)) {
        func_0x000107c3a694();
        if (((bool)uVar7) && (func_0x000107c3a654(), (bool)uVar7)) {
          func_0x00010bd0a670();
        }
        else {
          func_0x000107c3a664();
          FUN_10bd08a60();
        }
        func_0x000107c3a660();
      }
      func_0x000107c3a634();
      func_0x000107c3a64c(uStack_278);
      if ((bool)uVar8) {
        return;
      }
      ___stack_chk_fail();
      pcVar13 = FUN_10bd08a60;
      func_0x00010bd0bbbc();
      ppppuStack_230 = &pppuStack_260;
      pcStack_228 = pcVar13;
      func_0x00010bd0a2f8();
      func_0x000107c3a6a0();
      for (; ppuVar19 != &PTR_LOOP_110c8acd8; ppuVar19 = (undefined **)((long)ppuVar19 + 1)) {
        if (-1 < *(char *)((long)ppuVar1 + (long)ppuVar19)) {
          uVar15 = (long)&PTR_LOOP_110c8acd8 + *(long *)((long)ppuVar19 * 8 + -0x622015f714c7d297);
          auVar5._8_8_ = 0;
          auVar5._0_8_ = uVar15;
          func_0x000107c3a660();
          func_0x000107c3a638((SUB164(auVar5 * ZEXT816(0x9ddfea08eb382d69),8) ^
                              (int)uVar15 * -0x14c7d297) & 0x7f);
          *(undefined8 *)(unaff_x25 + (long)ppuVar11 * 8) =
               *(undefined8 *)((long)ppuVar19 * 8 + -0x622015f714c7d297);
        }
      }
      func_0x00010bd0b600((undefined *)((long)ppuVar16 + -7),pcStack_228);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
    lVar14 = 0;
    unaff_x25 = (long)*(int *)(*(long *)(*(long *)*unaff_x20 + 0x38) + lVar18 * 0x30 + 4);
    Hint_Prefetch(puStack_248,0,2,0);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (long)&PTR_LOOP_110c8acd8 + unaff_x25;
    ppuVar11 = (undefined **)
               (SUB168(auVar3 * ZEXT816(0x9ddfea08eb382d69),8) ^
               ((long)&PTR_LOOP_110c8acd8 + unaff_x25) * -0x622015f714c7d297);
    uVar15 = (ulong)ppuVar11 >> 7 ^ (ulong)puStack_248 >> 0xc;
    bVar6 = (byte)ppuVar11;
    uVar20 = CONCAT15(bVar6,CONCAT14(bVar6,CONCAT13(bVar6,CONCAT12(bVar6,CONCAT11(bVar6,bVar6))))) &
             0x7f7f7f7f7f7f;
    while( true ) {
      uVar15 = uVar15 & uStack_238;
      uVar22 = *(undefined8 *)(puStack_248 + uVar15);
      cVar23 = (char)((ulong)uVar22 >> 8);
      cVar24 = (char)((ulong)uVar22 >> 0x10);
      cVar25 = (char)((ulong)uVar22 >> 0x18);
      cVar26 = (char)((ulong)uVar22 >> 0x20);
      cVar27 = (char)((ulong)uVar22 >> 0x28);
      bVar21 = (byte)((ulong)uVar22 >> 0x30);
      bVar28 = (byte)((ulong)uVar22 >> 0x38);
      for (uVar17 = CONCAT17(-(bVar28 == (bVar6 & 0x7f)),
                             CONCAT16(-(bVar21 == (bVar6 & 0x7f)),
                                      CONCAT15(-(cVar27 == (char)(uVar20 >> 0x28)),
                                               CONCAT14(-(cVar26 == (char)(uVar20 >> 0x20)),
                                                        CONCAT13(-(cVar25 == (char)(uVar20 >> 0x18))
                                                                 ,CONCAT12(-(cVar24 ==
                                                                            (char)(uVar20 >> 0x10)),
                                                                           CONCAT11(-(cVar23 ==
                                                                                     (char)(uVar20 
                                                  >> 8)),-((char)uVar22 == (char)uVar20)))))))) &
                    0x8080808080808080; uVar17 != 0; uVar17 = uVar17 - 1 & uVar17) {
        uVar2 = (uVar17 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar17 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
        if (*(long *)(lStack_240 +
                     (uVar15 + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) & uStack_238) *
                     8) == unaff_x25) goto LAB_10bd08818;
      }
      bVar21 = NEON_umaxv(CONCAT17(-(bVar28 == 0x80),
                                   CONCAT16(-(bVar21 == 0x80),
                                            CONCAT15(-(cVar27 == -0x80),
                                                     CONCAT14(-(cVar26 == -0x80),
                                                              CONCAT13(-(cVar25 == -0x80),
                                                                       CONCAT12(-(cVar24 == -0x80),
                                                                                CONCAT11(-(cVar23 ==
                                                                                          -0x80),-((
                                                  char)uVar22 == -0x80)))))))),1);
      if ((bVar21 & 1) != 0) break;
      lVar14 = lVar14 + 8;
      uVar15 = lVar14 + uVar15;
    }
    ppuVar9 = &puStack_248;
    FUN_10bd089ec();
    *(long *)(lStack_240 + (long)ppuVar9 * 8) = unaff_x25;
LAB_10bd08818:
    lVar18 = lVar18 + 1;
    lVar14 = lStack_240;
  } while( true );
}



/* Entry: 10bd08680; end: 10bd086f7;  */

/* WARNING: Removing unreachable block (ram,0x00010bd08af0) */

void FUN_10bd08680(void)

{
  undefined **ppuVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  byte bVar6;
  undefined1 in_ZR;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  code *pcVar13;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x9;
  long lVar14;
  long extraout_x9_00;
  ulong uVar15;
  undefined **ppuVar16;
  ulong uVar17;
  undefined **unaff_x20;
  long lVar18;
  undefined **ppuVar19;
  long unaff_x25;
  uint6 uVar20;
  byte bVar21;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  char cVar27;
  undefined8 uVar22;
  byte bVar28;
  undefined8 uStack_218;
  undefined1 **ppuStack_200;
  code *pcStack_1f8;
  undefined *puStack_1e8;
  long lStack_1e0;
  ulong uStack_1d8;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  undefined **ppuStack_1c0;
  undefined1 auStack_198 [48];
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  undefined *apuStack_138 [6];
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined8 uStack_d8;
  undefined1 *puStack_80;
  code *pcStack_78;
  
  func_0x00010bd09f90();
  func_0x00010bd0b064();
  func_0x00010bd0a43c();
  func_0x00010bd0a72c();
  func_0x00010bd0add0();
  func_0x00010bd09fdc(*(undefined8 *)(extraout_x8 + 0x20));
  ppuVar11 = (undefined **)&UNK_10f833eb9;
  ppuVar9 = unaff_x20;
  func_0x00010bd0c220();
  func_0x00010bd09ff8();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcStack_78 = FUN_10bd086f8;
  puStack_80 = &stack0xfffffffffffffff0;
  func_0x00010bd0ade8();
  lVar18 = 0;
  func_0x00010bd0a2e8(0);
  puStack_1e8 = &UNK_10e52b660;
  lStack_1e0 = 0;
  uStack_1d8 = 0;
  pppuStack_1d0 = (undefined1 ***)0x0;
  lVar14 = extraout_x8_00;
  uStack_d8 = extraout_x9;
  do {
    if (*(int *)(*(long *)*unaff_x20 + 4) <= lVar18) {
      ppuVar1 = (undefined **)(long)*(int *)(*(long *)unaff_x20[1] + 4);
LAB_10bd08840:
      ppuVar16 = ppuVar1;
      lVar18 = 0;
      ppuVar1 = (undefined **)((long)ppuVar16 + 1);
      Hint_Prefetch(puStack_1e8,0,2,0);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = (undefined *)((long)ppuVar16 + 0x110c8acd9);
      uVar17 = SUB168(auVar4 * ZEXT816(0x9ddfea08eb382d69),8) ^
               ((long)ppuVar16 + 0x110c8acd9) * -0x622015f714c7d297;
      uVar15 = (ulong)puStack_1e8 >> 0xc ^ uVar17 >> 7;
      bVar6 = (byte)uVar17;
      uVar20 = CONCAT15(bVar6,CONCAT14(bVar6,CONCAT13(bVar6,CONCAT12(bVar6,CONCAT11(bVar6,bVar6)))))
               & 0x7f7f7f7f7f7f;
      while( true ) {
        uVar15 = uVar15 & uStack_1d8;
        uVar22 = *(undefined8 *)(puStack_1e8 + uVar15);
        cVar23 = (char)((ulong)uVar22 >> 8);
        cVar24 = (char)((ulong)uVar22 >> 0x10);
        cVar25 = (char)((ulong)uVar22 >> 0x18);
        cVar26 = (char)((ulong)uVar22 >> 0x20);
        cVar27 = (char)((ulong)uVar22 >> 0x28);
        bVar21 = (byte)((ulong)uVar22 >> 0x30);
        bVar28 = (byte)((ulong)uVar22 >> 0x38);
        for (uVar17 = CONCAT17(-(bVar28 == (bVar6 & 0x7f)),
                               CONCAT16(-(bVar21 == (bVar6 & 0x7f)),
                                        CONCAT15(-(cVar27 == (char)(uVar20 >> 0x28)),
                                                 CONCAT14(-(cVar26 == (char)(uVar20 >> 0x20)),
                                                          CONCAT13(-(cVar25 ==
                                                                    (char)(uVar20 >> 0x18)),
                                                                   CONCAT12(-(cVar24 ==
                                                                             (char)(uVar20 >> 0x10))
                                                                            ,CONCAT11(-(cVar23 ==
                                                                                       (char)(uVar20
                                                                                             >> 8)),
                                                                                      -((char)uVar22
                                                                                       == (char)
                                                  uVar20)))))))) & 0x8080808080808080; uVar17 != 0;
            uVar17 = uVar17 - 1 & uVar17) {
          uVar2 = (uVar17 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar17 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
          if (*(undefined ***)
               (lVar14 + (uVar15 + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) & uStack_1d8
                         ) * 8) == ppuVar1) {
            ppuVar19 = (undefined **)(long)*(int *)(*(long *)unaff_x20[1] + 4);
            if (puStack_1e8 != (undefined *)0x0) goto LAB_10bd08840;
            goto LAB_10bd088d4;
          }
        }
        bVar21 = NEON_umaxv(CONCAT17(-(bVar28 == 0x80),
                                     CONCAT16(-(bVar21 == 0x80),
                                              CONCAT15(-(cVar27 == -0x80),
                                                       CONCAT14(-(cVar26 == -0x80),
                                                                CONCAT13(-(cVar25 == -0x80),
                                                                         CONCAT12(-(cVar24 == -0x80)
                                                                                  ,CONCAT11(-(cVar23
                                                                                             == 
                                                  -0x80),-((char)uVar22 == -0x80)))))))),1);
        ppuVar19 = ppuVar16;
        if ((bVar21 & 1) != 0) break;
        lVar18 = lVar18 + 8;
        uVar15 = lVar18 + uVar15;
      }
LAB_10bd088d4:
      func_0x00010bd0a3e4();
      ppuStack_108 = ppuVar9;
      ppuStack_100 = ppuVar11;
      func_0x00010bd0b0c8(unaff_x20[1]);
      func_0x00010bd09fa8();
      ppuVar9 = (undefined **)&UNK_10f833fca;
      func_0x000107c284bc();
      ppuStack_168 = ppuVar9;
      ppuStack_160 = ppuVar11;
      func_0x00010bd0a06c();
      pcVar13 = (code *)&UNK_10f833fea;
      func_0x000107c284bc();
      ppuVar9 = apuStack_138;
      pcStack_1c8 = pcVar13;
      ppuStack_1c0 = ppuVar11;
      func_0x00010bd0b1a4(&ppuStack_108,ppuVar9,&ppuStack_168,auStack_198,&pcStack_1c8);
      uVar7 = (undefined **)0x7ffffffc < ppuVar19;
      uVar8 = ppuVar19 == (undefined **)0x7ffffffd;
      if ((long)ppuVar19 < 0x7ffffffe) {
        ppuVar11 = (undefined **)&UNK_10f83403b;
        func_0x000107c284bc();
        ppuVar10 = apuStack_138;
        ppuVar12 = ppuVar1;
        ppuStack_108 = ppuVar11;
        ppuStack_100 = ppuVar9;
        func_0x0001089ed984();
        func_0x00010bd0a408();
        ppuStack_168 = ppuVar10;
        ppuStack_160 = ppuVar12;
        func_0x00010ae8c9e4();
      }
      FUN_10bd08b18(&puStack_1e8);
      func_0x000107c3a64c(uStack_d8);
      if ((bool)uVar8) {
        return;
      }
      ___stack_chk_fail();
      func_0x00010bd0a688();
      ppuVar11 = &puStack_1e8;
      FUN_10bd08b18();
      func_0x00010bd0ac48();
      pcStack_1f8 = FUN_10bd089ec;
      ppuStack_200 = &puStack_80;
      func_0x00010bd0a084();
      func_0x000107c3a698();
      if ((extraout_x9_00 == 0) && (func_0x000107c3a69c(), !(bool)uVar8)) {
        func_0x000107c3a694();
        if (((bool)uVar7) && (func_0x000107c3a654(), (bool)uVar7)) {
          func_0x00010bd0a670();
        }
        else {
          func_0x000107c3a664();
          FUN_10bd08a60();
        }
        func_0x000107c3a660();
      }
      func_0x000107c3a634();
      func_0x000107c3a64c(uStack_218);
      if ((bool)uVar8) {
        return;
      }
      ___stack_chk_fail();
      pcVar13 = FUN_10bd08a60;
      func_0x00010bd0bbbc();
      pppuStack_1d0 = &ppuStack_200;
      pcStack_1c8 = pcVar13;
      func_0x00010bd0a2f8();
      func_0x000107c3a6a0();
      for (; ppuVar19 != &PTR_LOOP_110c8acd8; ppuVar19 = (undefined **)((long)ppuVar19 + 1)) {
        if (-1 < *(char *)((long)ppuVar1 + (long)ppuVar19)) {
          uVar15 = (long)&PTR_LOOP_110c8acd8 + *(long *)((long)ppuVar19 * 8 + -0x622015f714c7d297);
          auVar5._8_8_ = 0;
          auVar5._0_8_ = uVar15;
          func_0x000107c3a660();
          func_0x000107c3a638((SUB164(auVar5 * ZEXT816(0x9ddfea08eb382d69),8) ^
                              (int)uVar15 * -0x14c7d297) & 0x7f);
          *(undefined8 *)(unaff_x25 + (long)ppuVar11 * 8) =
               *(undefined8 *)((long)ppuVar19 * 8 + -0x622015f714c7d297);
        }
      }
      func_0x00010bd0b600((undefined *)((long)ppuVar16 + -7),pcStack_1c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
    lVar14 = 0;
    unaff_x25 = (long)*(int *)(*(long *)(*(long *)*unaff_x20 + 0x38) + lVar18 * 0x30 + 4);
    Hint_Prefetch(puStack_1e8,0,2,0);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (long)&PTR_LOOP_110c8acd8 + unaff_x25;
    ppuVar11 = (undefined **)
               (SUB168(auVar3 * ZEXT816(0x9ddfea08eb382d69),8) ^
               ((long)&PTR_LOOP_110c8acd8 + unaff_x25) * -0x622015f714c7d297);
    uVar15 = (ulong)ppuVar11 >> 7 ^ (ulong)puStack_1e8 >> 0xc;
    bVar6 = (byte)ppuVar11;
    uVar20 = CONCAT15(bVar6,CONCAT14(bVar6,CONCAT13(bVar6,CONCAT12(bVar6,CONCAT11(bVar6,bVar6))))) &
             0x7f7f7f7f7f7f;
    while( true ) {
      uVar15 = uVar15 & uStack_1d8;
      uVar22 = *(undefined8 *)(puStack_1e8 + uVar15);
      cVar23 = (char)((ulong)uVar22 >> 8);
      cVar24 = (char)((ulong)uVar22 >> 0x10);
      cVar25 = (char)((ulong)uVar22 >> 0x18);
      cVar26 = (char)((ulong)uVar22 >> 0x20);
      cVar27 = (char)((ulong)uVar22 >> 0x28);
      bVar21 = (byte)((ulong)uVar22 >> 0x30);
      bVar28 = (byte)((ulong)uVar22 >> 0x38);
      for (uVar17 = CONCAT17(-(bVar28 == (bVar6 & 0x7f)),
                             CONCAT16(-(bVar21 == (bVar6 & 0x7f)),
                                      CONCAT15(-(cVar27 == (char)(uVar20 >> 0x28)),
                                               CONCAT14(-(cVar26 == (char)(uVar20 >> 0x20)),
                                                        CONCAT13(-(cVar25 == (char)(uVar20 >> 0x18))
                                                                 ,CONCAT12(-(cVar24 ==
                                                                            (char)(uVar20 >> 0x10)),
                                                                           CONCAT11(-(cVar23 ==
                                                                                     (char)(uVar20 
                                                  >> 8)),-((char)uVar22 == (char)uVar20)))))))) &
                    0x8080808080808080; uVar17 != 0; uVar17 = uVar17 - 1 & uVar17) {
        uVar2 = (uVar17 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar17 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
        if (*(long *)(lStack_1e0 +
                     (uVar15 + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) & uStack_1d8) *
                     8) == unaff_x25) goto LAB_10bd08818;
      }
      bVar21 = NEON_umaxv(CONCAT17(-(bVar28 == 0x80),
                                   CONCAT16(-(bVar21 == 0x80),
                                            CONCAT15(-(cVar27 == -0x80),
                                                     CONCAT14(-(cVar26 == -0x80),
                                                              CONCAT13(-(cVar25 == -0x80),
                                                                       CONCAT12(-(cVar24 == -0x80),
                                                                                CONCAT11(-(cVar23 ==
                                                                                          -0x80),-((
                                                  char)uVar22 == -0x80)))))))),1);
      if ((bVar21 & 1) != 0) break;
      lVar14 = lVar14 + 8;
      uVar15 = lVar14 + uVar15;
    }
    ppuVar9 = &puStack_1e8;
    FUN_10bd089ec();
    *(long *)(lStack_1e0 + (long)ppuVar9 * 8) = unaff_x25;
LAB_10bd08818:
    lVar18 = lVar18 + 1;
    lVar14 = lStack_1e0;
  } while( true );
}



/* Entry: 10bd086f8; end: 10bd089eb;  */

/* WARNING: Removing unreachable block (ram,0x00010bd08af0) */

void FUN_10bd086f8(undefined **param_1,undefined **param_2)

{
  undefined **ppuVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  byte bVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  code *pcVar13;
  long extraout_x8;
  undefined8 extraout_x9;
  long lVar14;
  long extraout_x9_00;
  ulong uVar15;
  undefined **ppuVar16;
  ulong uVar17;
  undefined8 *unaff_x20;
  long lVar18;
  undefined **ppuVar19;
  long unaff_x25;
  uint6 uVar20;
  byte bVar21;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  char cVar27;
  undefined8 uVar22;
  byte bVar28;
  undefined8 uStack_1a8;
  undefined1 *puStack_190;
  code *pcStack_188;
  undefined *puStack_178;
  long lStack_170;
  ulong uStack_168;
  undefined1 **ppuStack_160;
  code *pcStack_158;
  undefined **ppuStack_150;
  undefined1 auStack_128 [48];
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined *apuStack_c8 [6];
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_68;
  
  func_0x00010bd0ade8();
  lVar18 = 0;
  func_0x00010bd0a2e8(0);
  puStack_178 = &UNK_10e52b660;
  lStack_170 = 0;
  uStack_168 = 0;
  ppuStack_160 = (undefined1 **)0x0;
  lVar14 = extraout_x8;
  uStack_68 = extraout_x9;
  do {
    if (*(int *)(*(long *)*unaff_x20 + 4) <= lVar18) {
      ppuVar1 = (undefined **)(long)*(int *)(*(long *)unaff_x20[1] + 4);
LAB_10bd08840:
      ppuVar16 = ppuVar1;
      lVar18 = 0;
      ppuVar1 = (undefined **)((long)ppuVar16 + 1);
      Hint_Prefetch(puStack_178,0,2,0);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = (long)ppuVar16 + 0x110c8acd9U;
      uVar17 = SUB168(auVar4 * ZEXT816(0x9ddfea08eb382d69),8) ^
               ((long)ppuVar16 + 0x110c8acd9U) * -0x622015f714c7d297;
      uVar15 = (ulong)puStack_178 >> 0xc ^ uVar17 >> 7;
      bVar6 = (byte)uVar17;
      uVar20 = CONCAT15(bVar6,CONCAT14(bVar6,CONCAT13(bVar6,CONCAT12(bVar6,CONCAT11(bVar6,bVar6)))))
               & 0x7f7f7f7f7f7f;
      while( true ) {
        uVar15 = uVar15 & uStack_168;
        uVar22 = *(undefined8 *)(puStack_178 + uVar15);
        cVar23 = (char)((ulong)uVar22 >> 8);
        cVar24 = (char)((ulong)uVar22 >> 0x10);
        cVar25 = (char)((ulong)uVar22 >> 0x18);
        cVar26 = (char)((ulong)uVar22 >> 0x20);
        cVar27 = (char)((ulong)uVar22 >> 0x28);
        bVar21 = (byte)((ulong)uVar22 >> 0x30);
        bVar28 = (byte)((ulong)uVar22 >> 0x38);
        for (uVar17 = CONCAT17(-(bVar28 == (bVar6 & 0x7f)),
                               CONCAT16(-(bVar21 == (bVar6 & 0x7f)),
                                        CONCAT15(-(cVar27 == (char)(uVar20 >> 0x28)),
                                                 CONCAT14(-(cVar26 == (char)(uVar20 >> 0x20)),
                                                          CONCAT13(-(cVar25 ==
                                                                    (char)(uVar20 >> 0x18)),
                                                                   CONCAT12(-(cVar24 ==
                                                                             (char)(uVar20 >> 0x10))
                                                                            ,CONCAT11(-(cVar23 ==
                                                                                       (char)(uVar20
                                                                                             >> 8)),
                                                                                      -((char)uVar22
                                                                                       == (char)
                                                  uVar20)))))))) & 0x8080808080808080; uVar17 != 0;
            uVar17 = uVar17 - 1 & uVar17) {
          uVar2 = (uVar17 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar17 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
          if (*(undefined ***)
               (lVar14 + (uVar15 + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) & uStack_168
                         ) * 8) == ppuVar1) {
            ppuVar19 = (undefined **)(long)*(int *)(*(long *)unaff_x20[1] + 4);
            if (puStack_178 != (undefined *)0x0) goto LAB_10bd08840;
            goto LAB_10bd088d4;
          }
        }
        bVar21 = NEON_umaxv(CONCAT17(-(bVar28 == 0x80),
                                     CONCAT16(-(bVar21 == 0x80),
                                              CONCAT15(-(cVar27 == -0x80),
                                                       CONCAT14(-(cVar26 == -0x80),
                                                                CONCAT13(-(cVar25 == -0x80),
                                                                         CONCAT12(-(cVar24 == -0x80)
                                                                                  ,CONCAT11(-(cVar23
                                                                                             == 
                                                  -0x80),-((char)uVar22 == -0x80)))))))),1);
        ppuVar19 = ppuVar16;
        if ((bVar21 & 1) != 0) break;
        lVar18 = lVar18 + 8;
        uVar15 = lVar18 + uVar15;
      }
LAB_10bd088d4:
      func_0x00010bd0a3e4();
      ppuStack_98 = param_1;
      ppuStack_90 = param_2;
      func_0x00010bd0b0c8(unaff_x20[1]);
      func_0x00010bd09fa8();
      ppuVar9 = (undefined **)&UNK_10f833fca;
      func_0x000107c284bc();
      ppuStack_f8 = ppuVar9;
      ppuStack_f0 = param_2;
      func_0x00010bd0a06c();
      pcVar13 = (code *)&UNK_10f833fea;
      func_0x000107c284bc();
      ppuVar9 = apuStack_c8;
      pcStack_158 = pcVar13;
      ppuStack_150 = param_2;
      func_0x00010bd0b1a4(&ppuStack_98,ppuVar9,&ppuStack_f8,auStack_128,&pcStack_158);
      uVar7 = (undefined **)0x7ffffffc < ppuVar19;
      uVar8 = ppuVar19 == (undefined **)0x7ffffffd;
      if ((long)ppuVar19 < 0x7ffffffe) {
        ppuVar10 = (undefined **)&UNK_10f83403b;
        func_0x000107c284bc();
        ppuVar11 = apuStack_c8;
        ppuVar12 = ppuVar1;
        ppuStack_98 = ppuVar10;
        ppuStack_90 = ppuVar9;
        func_0x0001089ed984();
        func_0x00010bd0a408();
        ppuStack_f8 = ppuVar11;
        ppuStack_f0 = ppuVar12;
        func_0x00010ae8c9e4();
      }
      FUN_10bd08b18(&puStack_178);
      func_0x000107c3a64c(uStack_68);
      if ((bool)uVar8) {
        return;
      }
      ___stack_chk_fail();
      func_0x00010bd0a688();
      ppuVar9 = &puStack_178;
      FUN_10bd08b18();
      func_0x00010bd0ac48();
      pcStack_188 = FUN_10bd089ec;
      puStack_190 = &stack0xfffffffffffffff0;
      func_0x00010bd0a084();
      func_0x000107c3a698();
      if ((extraout_x9_00 == 0) && (func_0x000107c3a69c(), !(bool)uVar8)) {
        func_0x000107c3a694();
        if (((bool)uVar7) && (func_0x000107c3a654(), (bool)uVar7)) {
          func_0x00010bd0a670();
        }
        else {
          func_0x000107c3a664();
          FUN_10bd08a60();
        }
        func_0x000107c3a660();
      }
      func_0x000107c3a634();
      func_0x000107c3a64c(uStack_1a8);
      if ((bool)uVar8) {
        return;
      }
      ___stack_chk_fail();
      pcVar13 = FUN_10bd08a60;
      func_0x00010bd0bbbc();
      ppuStack_160 = &puStack_190;
      pcStack_158 = pcVar13;
      func_0x00010bd0a2f8();
      func_0x000107c3a6a0();
      for (; ppuVar19 != &PTR_LOOP_110c8acd8; ppuVar19 = (undefined **)((long)ppuVar19 + 1)) {
        if (-1 < *(char *)((long)ppuVar1 + (long)ppuVar19)) {
          uVar15 = (long)&PTR_LOOP_110c8acd8 + *(long *)((long)ppuVar19 * 8 + -0x622015f714c7d297);
          auVar5._8_8_ = 0;
          auVar5._0_8_ = uVar15;
          func_0x000107c3a660();
          func_0x000107c3a638((SUB164(auVar5 * ZEXT816(0x9ddfea08eb382d69),8) ^
                              (int)uVar15 * -0x14c7d297) & 0x7f);
          *(undefined8 *)(unaff_x25 + (long)ppuVar9 * 8) =
               *(undefined8 *)((long)ppuVar19 * 8 + -0x622015f714c7d297);
        }
      }
      func_0x00010bd0b600((long)ppuVar16 + -7,pcStack_158);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
    lVar14 = 0;
    unaff_x25 = (long)*(int *)(*(long *)(*(long *)*unaff_x20 + 0x38) + lVar18 * 0x30 + 4);
    Hint_Prefetch(puStack_178,0,2,0);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (long)&PTR_LOOP_110c8acd8 + unaff_x25;
    param_2 = (undefined **)
              (SUB168(auVar3 * ZEXT816(0x9ddfea08eb382d69),8) ^
              ((long)&PTR_LOOP_110c8acd8 + unaff_x25) * -0x622015f714c7d297);
    uVar15 = (ulong)param_2 >> 7 ^ (ulong)puStack_178 >> 0xc;
    bVar6 = (byte)param_2;
    uVar20 = CONCAT15(bVar6,CONCAT14(bVar6,CONCAT13(bVar6,CONCAT12(bVar6,CONCAT11(bVar6,bVar6))))) &
             0x7f7f7f7f7f7f;
    while( true ) {
      uVar15 = uVar15 & uStack_168;
      uVar22 = *(undefined8 *)(puStack_178 + uVar15);
      cVar23 = (char)((ulong)uVar22 >> 8);
      cVar24 = (char)((ulong)uVar22 >> 0x10);
      cVar25 = (char)((ulong)uVar22 >> 0x18);
      cVar26 = (char)((ulong)uVar22 >> 0x20);
      cVar27 = (char)((ulong)uVar22 >> 0x28);
      bVar21 = (byte)((ulong)uVar22 >> 0x30);
      bVar28 = (byte)((ulong)uVar22 >> 0x38);
      for (uVar17 = CONCAT17(-(bVar28 == (bVar6 & 0x7f)),
                             CONCAT16(-(bVar21 == (bVar6 & 0x7f)),
                                      CONCAT15(-(cVar27 == (char)(uVar20 >> 0x28)),
                                               CONCAT14(-(cVar26 == (char)(uVar20 >> 0x20)),
                                                        CONCAT13(-(cVar25 == (char)(uVar20 >> 0x18))
                                                                 ,CONCAT12(-(cVar24 ==
                                                                            (char)(uVar20 >> 0x10)),
                                                                           CONCAT11(-(cVar23 ==
                                                                                     (char)(uVar20 
                                                  >> 8)),-((char)uVar22 == (char)uVar20)))))))) &
                    0x8080808080808080; uVar17 != 0; uVar17 = uVar17 - 1 & uVar17) {
        uVar2 = (uVar17 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar17 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
        if (*(long *)(lStack_170 +
                     (uVar15 + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) & uStack_168) *
                     8) == unaff_x25) goto LAB_10bd08818;
      }
      bVar21 = NEON_umaxv(CONCAT17(-(bVar28 == 0x80),
                                   CONCAT16(-(bVar21 == 0x80),
                                            CONCAT15(-(cVar27 == -0x80),
                                                     CONCAT14(-(cVar26 == -0x80),
                                                              CONCAT13(-(cVar25 == -0x80),
                                                                       CONCAT12(-(cVar24 == -0x80),
                                                                                CONCAT11(-(cVar23 ==
                                                                                          -0x80),-((
                                                  char)uVar22 == -0x80)))))))),1);
      if ((bVar21 & 1) != 0) break;
      lVar14 = lVar14 + 8;
      uVar15 = lVar14 + uVar15;
    }
    param_1 = &puStack_178;
    FUN_10bd089ec();
    *(long *)(lStack_170 + (long)param_1 * 8) = unaff_x25;
LAB_10bd08818:
    lVar18 = lVar18 + 1;
    lVar14 = lStack_170;
  } while( true );
}



/* Entry: 10bd089ec; end: 10bd08a5f;  */

void FUN_10bd089ec(long param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 in_ZR;
  undefined1 in_CY;
  code *pcVar3;
  long extraout_x9;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined8 uStack_28;
  
  func_0x00010bd0a084();
  func_0x000107c3a698();
  if ((extraout_x9 == 0) && (func_0x000107c3a69c(), !(bool)in_ZR)) {
    func_0x000107c3a694();
    if (((bool)in_CY) && (func_0x000107c3a654(), (bool)in_CY)) {
      func_0x00010bd0a670();
    }
    else {
      func_0x000107c3a664();
      FUN_10bd08a60();
    }
    func_0x000107c3a660();
  }
  func_0x000107c3a634();
  func_0x000107c3a64c(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcVar3 = FUN_10bd08a60;
  func_0x00010bd0bbbc();
  func_0x00010bd0a2f8();
  func_0x000107c3a6a0();
  for (; unaff_x23 != unaff_x24; unaff_x24 = unaff_x24 + 1) {
    if (-1 < *(char *)(unaff_x21 + unaff_x24)) {
      uVar1 = (long)&PTR_LOOP_110c8acd8 + *(long *)(unaff_x22 + unaff_x24 * 8);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar1;
      func_0x000107c3a660();
      func_0x000107c3a638((SUB164(auVar2 * ZEXT816(0x9ddfea08eb382d69),8) ^ (int)uVar1 * -0x14c7d297
                          ) & 0x7f);
      *(undefined8 *)(unaff_x25 + param_1 * 8) = *(undefined8 *)(unaff_x22 + unaff_x24 * 8);
    }
  }
  if (unaff_x23 != 0) {
    func_0x00010bd0b600(unaff_x21 + -8,pcVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10bd08a60; end: 10bd08af7;  */

void FUN_10bd08a60(long param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined8 unaff_x30;
  
  func_0x00010bd0bbbc();
  func_0x00010bd0a2f8();
  func_0x000107c3a6a0();
  for (; unaff_x23 != unaff_x24; unaff_x24 = unaff_x24 + 1) {
    if (-1 < *(char *)(unaff_x21 + unaff_x24)) {
      uVar1 = (long)&PTR_LOOP_110c8acd8 + *(long *)(unaff_x22 + unaff_x24 * 8);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar1;
      func_0x000107c3a660();
      func_0x000107c3a638((SUB164(auVar2 * ZEXT816(0x9ddfea08eb382d69),8) ^ (int)uVar1 * -0x14c7d297
                          ) & 0x7f);
      *(undefined8 *)(unaff_x25 + param_1 * 8) = *(undefined8 *)(unaff_x22 + unaff_x24 * 8);
    }
  }
  if (unaff_x23 != 0) {
    func_0x00010bd0b600(unaff_x21 + -8,unaff_x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10bd08af8; end: 10bd08b17;  */

void FUN_10bd08af8(undefined8 param_1,long *param_2)

{
  func_0x00010bd0b0a8((long)&PTR_LOOP_110c8acd8 + *param_2);
  return;
}



/* Entry: 10bd08b18; end: 10bd08c2f;  */

void FUN_10bd08b18(void)

{
  long extraout_x8;
  
  func_0x00010bd0afb0();
  if (extraout_x8 != 0) {
    func_0x00010bd0a3fc();
  }
  return;
}



/* Entry: 10bd08c30; end: 10bd08c6b;  */

void FUN_10bd08c30(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char in_NG;
  char in_OV;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  undefined8 extraout_x10;
  undefined8 extraout_x12;
  undefined8 extraout_x13;
  
  func_0x00010bd0b088();
  uVar1 = extraout_x12;
  uVar2 = extraout_x13;
  if (in_NG == in_OV) {
    uVar1 = extraout_x9;
    uVar2 = extraout_x10;
  }
  func_0x000107c3a6e8(extraout_x8,&UNK_10f83411f,0x35,uVar1,uVar2);
  FUN_10bcefbcc();
  return;
}



/* Entry: 10bd08c6c; end: 10bd08ccf;  */

undefined1 * FUN_10bd08c6c(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  undefined1 auStack_48 [40];
  
  func_0x00010bd0a0d0();
  func_0x00010ae8bc54(*(undefined8 *)*param_2,auStack_48);
  puVar2 = param_1;
  FUN_10bd07154(param_1,&UNK_10f834155,0x2c,auStack_48);
  func_0x000107c3a63c();
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar1 = &UNK_10f834182;
  func_0x00010002b82c(extraout_x8,&UNK_10f834182);
  func_0x000107c613d0(puVar1);
  func_0x000107c60c50(auStack_48,param_1,puVar1);
  return auStack_48;
}



/* Entry: 10bd08cd0; end: 10bd08cdf;  */

void FUN_10bd08cd0(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10f834182;
  func_0x00010002b82c(param_1,&UNK_10f834182);
  func_0x000107c613d0(puVar1);
  func_0x000107c60c50();
  return;
}



/* Entry: 10bd08ce0; end: 10bd08d53;  */

void FUN_10bd08ce0(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined8 uVar1;
  long extraout_x9;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined8 uStack_28;
  
  func_0x00010bd0a084();
  func_0x000107c3a698();
  if ((extraout_x9 == 0) && (func_0x000107c3a69c(), !(bool)in_ZR)) {
    func_0x000107c3a694();
    if (((bool)in_CY) && (func_0x000107c3a654(), (bool)in_CY)) {
      func_0x00010bd0a670();
    }
    else {
      func_0x000107c3a664();
      FUN_10bd08d54();
    }
    func_0x000107c3a660();
  }
  func_0x000107c3a634();
  func_0x000107c3a64c(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107c3a6d8();
  func_0x00010bd0a2f8();
  func_0x000107c3a6a0();
  while (unaff_x23 != unaff_x24) {
    if (-1 < *(char *)(unaff_x21 + unaff_x24)) {
      uVar1 = *(undefined8 *)(*unaff_x22 + 8);
      func_0x00010bd0273c(uVar1);
      func_0x000107c3a660();
      func_0x000107c3a638((uint)uVar1 & 0x7f);
      func_0x00010bd0bb84();
    }
    func_0x00010bd0b98c();
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x21 + -8);
    return;
  }
  return;
}



/* Entry: 10bd08d54; end: 10bd08dbf;  */

void FUN_10bd08d54(void)

{
  undefined8 uVar1;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  func_0x000107c3a6d8();
  func_0x00010bd0a2f8();
  func_0x000107c3a6a0();
  while (unaff_x23 != unaff_x24) {
    if (-1 < *(char *)(unaff_x21 + unaff_x24)) {
      uVar1 = *(undefined8 *)(*unaff_x22 + 8);
      func_0x00010bd0273c(uVar1);
      func_0x000107c3a660();
      func_0x000107c3a638((uint)uVar1 & 0x7f);
      func_0x00010bd0bb84();
    }
    func_0x00010bd0b98c();
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x21 + -8);
    return;
  }
  return;
}



/* Entry: 10bd08dc0; end: 10bd08dc3;  */

ulong FUN_10bd08dc0(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 *puVar4;
  ulong extraout_x8;
  ulong extraout_x10;
  
  puVar4 = *(undefined8 **)(*param_2 + 8);
  ppuVar3 = &PTR_LOOP_110c8acd8;
  uVar1 = puVar4[1];
  puVar2 = (undefined8 *)*puVar4;
  if (-1 < (char)*(byte *)((long)puVar4 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)puVar4 + 0x17);
    puVar2 = puVar4;
  }
  func_0x000100062d4c(&PTR_LOOP_110c8acd8,puVar2);
  func_0x000100061c28((long)ppuVar3 + uVar1);
  return extraout_x8 ^ extraout_x10;
}



/* Entry: 10bd08dc4; end: 10bd08f6b;  */

void FUN_10bd08dc4(void)

{
  undefined1 in_ZR;
  undefined *puVar1;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 *unaff_x19;
  
  func_0x00010bd09f5c();
  func_0x00010bd0acfc();
  func_0x00010bd0a37c();
  func_0x00010bd09fc4();
  func_0x000107c284bc(&UNK_10f8341ec);
  func_0x00010bd09f78();
  func_0x000107c3a63c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010bd09f5c();
    func_0x00010bd0acfc();
    func_0x00010bd0aac0();
    func_0x00010bd0b0c8(*(undefined8 *)(extraout_x8 + 8));
    func_0x00010bd09fc4();
    func_0x000107c284bc(&UNK_10f83421d);
    func_0x00010bd09f78();
    func_0x000107c3a63c();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010bd09f5c();
      func_0x00010bd0acfc();
      func_0x00010bd0aac0();
      func_0x00010bd0b0c8(*(undefined8 *)(extraout_x8_00 + 8));
      func_0x00010bd09fc4();
      func_0x000107c284bc(&UNK_10f834240);
      func_0x00010bd09f78();
      func_0x000107c3a63c();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x00010bd09f5c();
        func_0x00010bd0acfc();
        func_0x00010bd0aac0();
        func_0x00010bd0b0c8(*(undefined8 *)(extraout_x8_01 + 8));
        func_0x00010bd09fc4();
        func_0x000107c284bc(&UNK_10f834267);
        func_0x00010bd09f78();
        func_0x000107c3a63c();
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x00010bd09f5c();
          puVar1 = &UNK_10f83428f;
          func_0x000107c284bc();
          FUN_10bd0c868();
          func_0x00010bd09fc4(*(undefined8 *)
                               (*(long *)(puVar1 + 0x38) + (long)*(int *)*unaff_x19 * 0x30 + 8));
          func_0x00010bd0aa1c();
          func_0x000107c3a63c();
          if ((bool)in_ZR) {
            return;
          }
          ___stack_chk_fail();
          puVar1 = &UNK_10f8342d5;
          func_0x00010002b82c(extraout_x8_02,&UNK_10f8342d5);
          func_0x000107c613d0(puVar1);
          func_0x000107c60c50();
          return;
        }
      }
    }
  }
  return;
}



/* Entry: 10bd08f6c; end: 10bd08f8b;  */

void FUN_10bd08f6c(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10f8342d5;
  func_0x00010002b82c(param_1,&UNK_10f8342d5);
  func_0x000107c613d0(puVar1);
  func_0x000107c60c50();
  return;
}



/* Entry: 10bd08f8c; end: 10bd09067;  */

void FUN_10bd08f8c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_78 [24];
  
  puVar1 = param_2;
  func_0x00010bd0aa30();
  func_0x00010bd0a0f8(*param_2);
  func_0x000107c284bc(&UNK_10f834331);
  func_0x000107c284bc();
  func_0x00010bd0b370(auStack_78,*param_2);
  func_0x00010bd0b1b4(param_1,puVar1);
  func_0x00010bd0b0e8();
  return;
}



/* Entry: 10bd09068; end: 10bd090cb;  */

void FUN_10bd09068(void)

{
  undefined1 in_ZR;
  
  func_0x00010bd09f5c();
  func_0x00010bd0aa30();
  func_0x00010bd0aac0();
  func_0x00010bd09fc4();
  func_0x000107c284bc();
  func_0x000107c284bc();
  func_0x00010bd0b2f4();
  func_0x000107c3a63c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bd0a10c();
  func_0x00010bd0c09c();
  func_0x00010bd0b558();
  func_0x00010bd09fc4();
  func_0x000107c284bc();
  func_0x00010bd0bd3c();
  func_0x00010bd0b0c8();
  func_0x00010bd09fc4();
  func_0x00010bd0a360();
  func_0x00010bd0a628();
  func_0x00010bd0b1a4();
  func_0x00010bd09ff8();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bd09f5c();
  func_0x000107c284bc(&UNK_10f834459);
  func_0x00010bd0aac0();
  func_0x00010bd09fc4();
  func_0x000107c284bc(&UNK_10f834463);
  func_0x00010bd09f78();
  func_0x000107c3a63c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010bd09f5c();
    func_0x00010bd0aa30();
    func_0x00010bd0aac0();
    func_0x00010bd09fc4();
    func_0x000107c284bc(&UNK_10f834495);
    func_0x00010bd09f78();
    func_0x000107c3a63c();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010bd09f5c();
      func_0x00010bd0c09c();
      func_0x00010bd0aac0();
      func_0x00010bd09fc4();
      func_0x000107c284bc(&UNK_10f8344b9);
      func_0x00010bd09f78();
      func_0x000107c3a63c();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x00010bd0bba0();
        FUN_10bd09244();
        return;
      }
    }
  }
  return;
}



/* Entry: 10bd090cc; end: 10bd09137;  */

void FUN_10bd090cc(void)

{
  undefined1 in_ZR;
  
  func_0x00010bd0a10c();
  func_0x00010bd0c09c();
  func_0x00010bd0b558();
  func_0x00010bd09fc4();
  func_0x000107c284bc();
  func_0x00010bd0bd3c();
  func_0x00010bd0b0c8();
  func_0x00010bd09fc4();
  func_0x00010bd0a360();
  func_0x00010bd0a628();
  func_0x00010bd0b1a4();
  func_0x00010bd09ff8();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bd09f5c();
  func_0x000107c284bc(&UNK_10f834459);
  func_0x00010bd0aac0();
  func_0x00010bd09fc4();
  func_0x000107c284bc(&UNK_10f834463);
  func_0x00010bd09f78();
  func_0x000107c3a63c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010bd09f5c();
    func_0x00010bd0aa30();
    func_0x00010bd0aac0();
    func_0x00010bd09fc4();
    func_0x000107c284bc(&UNK_10f834495);
    func_0x00010bd09f78();
    func_0x000107c3a63c();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010bd09f5c();
      func_0x00010bd0c09c();
      func_0x00010bd0aac0();
      func_0x00010bd09fc4();
      func_0x000107c284bc(&UNK_10f8344b9);
      func_0x00010bd09f78();
      func_0x000107c3a63c();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x00010bd0bba0();
        FUN_10bd09244();
        return;
      }
    }
  }
  return;
}



/* Entry: 10bd09138; end: 10bd09243;  */

void FUN_10bd09138(void)

{
  undefined1 in_ZR;
  
  func_0x00010bd09f5c();
  func_0x000107c284bc(&UNK_10f834459);
  func_0x00010bd0aac0();
  func_0x00010bd09fc4();
  func_0x000107c284bc(&UNK_10f834463);
  func_0x00010bd09f78();
  func_0x000107c3a63c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010bd09f5c();
    func_0x00010bd0aa30();
    func_0x00010bd0aac0();
    func_0x00010bd09fc4();
    func_0x000107c284bc(&UNK_10f834495);
    func_0x00010bd09f78();
    func_0x000107c3a63c();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010bd09f5c();
      func_0x00010bd0c09c();
      func_0x00010bd0aac0();
      func_0x00010bd09fc4();
      func_0x000107c284bc(&UNK_10f8344b9);
      func_0x00010bd09f78();
      func_0x000107c3a63c();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x00010bd0bba0();
        FUN_10bd09244();
        return;
      }
    }
  }
  return;
}



/* Entry: 10bd09244; end: 10bd0926b;  */

void FUN_10bd09244(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_10bd02384();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10bd0926c; end: 10bd09317;  */

void FUN_10bd0926c(long *param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined **ppuVar1;
  long extraout_x9;
  
  func_0x000107c3a644();
  func_0x000107c3a698();
  if ((extraout_x9 == 0) && (func_0x000107c3a69c(), !(bool)in_ZR)) {
    func_0x000107c3a694();
    if (((bool)in_CY) && (func_0x000107c3a654(), (bool)in_CY)) {
      func_0x00010bd0a56c();
    }
    else {
      func_0x000107c3a664();
      FUN_10bd09350();
    }
    func_0x000107c3a660();
  }
  func_0x000107c3a634();
  func_0x000107c3a63c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  ppuVar1 = &PTR_LOOP_110c8acd8;
  func_0x000107c28178(&PTR_LOOP_110c8acd8,*param_1,param_1[1] - *param_1);
  func_0x00010bd0b0a8((long)ppuVar1 + (param_1[1] - *param_1 >> 2));
  return;
}



/* Entry: 10bd09318; end: 10bd0934f;  */

bool FUN_10bd09318(long param_1,long param_2,long param_3,long param_4)

{
  if (param_2 - param_1 == param_4 - param_3) {
    _memcmp(param_1,param_3,param_2 - param_1);
    return (int)param_1 == 0;
  }
  return false;
}



/* Entry: 10bd09350; end: 10bd093b7;  */

void FUN_10bd09350(void)

{
  uint unaff_w21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  func_0x000107c3a6d8();
  func_0x000107c3a658();
  func_0x000107c3a6a0();
  while (unaff_x23 != unaff_x24) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      func_0x00010bd092dc();
      func_0x000107c3a65c();
      func_0x000107c3a638(unaff_w21 & 0x7f);
      func_0x000107c3a6d0();
      FUN_10bd093b8();
    }
    func_0x000107c3a6c8();
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 10bd093b8; end: 10bd093ff;  */

void FUN_10bd093b8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  func_0x000107c3a6e8();
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  func_0x000100292090(param_2);
  func_0x0001002920c4();
  return;
}



/* Entry: 10bd09400; end: 10bd0946f;  */

ulong FUN_10bd09400(ulong param_1,undefined *param_2,long *param_3)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar1;
  long extraout_x9;
  
  func_0x000107c3a644();
  func_0x000107c3a698();
  if ((extraout_x9 == 0) && (func_0x000107c3a69c(), !(bool)in_ZR)) {
    func_0x000107c3a694();
    if (((bool)in_CY) && (func_0x000107c3a654(), (bool)in_CY)) {
      param_2 = &UNK_110d9bd48;
      func_0x00010bd0a56c();
    }
    else {
      func_0x000107c3a664();
      FUN_10bd09484();
    }
    func_0x000107c3a660();
  }
  func_0x000107c3a634();
  func_0x000107c3a63c();
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  lVar1 = *param_3;
  if (param_3[1] - lVar1 == (long)param_2 - param_1) {
    _memcmp(lVar1,param_1,param_3[1] - lVar1);
    return (ulong)((int)lVar1 == 0);
  }
  return 0;
}



/* Entry: 10bd09470; end: 10bd09483;  */

bool FUN_10bd09470(long param_1,long param_2,long *param_3)

{
  long lVar1;
  
  lVar1 = *param_3;
  if (param_3[1] - lVar1 == param_2 - param_1) {
    _memcmp(lVar1,param_1,param_3[1] - lVar1);
    return (int)lVar1 == 0;
  }
  return false;
}



/* Entry: 10bd09484; end: 10bd094fb;  */

void FUN_10bd09484(void)

{
  long lVar1;
  long unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  
  func_0x000107c3a6d8();
  func_0x00010bd0a33c();
  func_0x000107c2b154();
  func_0x000107c3a6a0();
  for (; unaff_x23 != unaff_x24; unaff_x24 = unaff_x24 + 1) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      lVar1 = unaff_x20;
      func_0x00010bd092dc(unaff_x20);
      func_0x000107c3a65c();
      func_0x000107c3a638(unaff_w21 & 0x7f);
      FUN_10bd094fc(unaff_x25 + lVar1 * 0x30,unaff_x20);
    }
    unaff_x20 = unaff_x20 + 0x30;
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 10bd094fc; end: 10bd0955b;  */

/* WARNING: Possible PIC construction at 0x00010bd00f30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010bd00f34) */

undefined8 * FUN_10bd094fc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  func_0x000107c3a6e8();
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
  func_0x000100292090(param_2 + 3);
  func_0x0001002920c4();
  return param_2;
}



/* Entry: 10bd0955c; end: 10bd0958b;  */

long * FUN_10bd0955c(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10bd0958c; end: 10bd095ab;  */

void FUN_10bd0958c(ulong *param_1)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  
  if ((int)param_1[1] < 1) {
    return;
  }
  lVar4 = 0;
  uVar3 = param_1[1];
  puVar2 = param_1;
  if ((*param_1 & 1) != 0) {
    puVar2 = (ulong *)(*param_1 + 7);
  }
  do {
    lVar1 = lVar4 + 1;
    (**(code **)(*(long *)puVar2[lVar4] + 0x18))();
    lVar4 = lVar1;
  } while (lVar1 < (int)uVar3);
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 10bd095ac; end: 10bd09633;  */

long FUN_10bd095ac(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010bd0aa10();
  if (param_1 == 0) {
    lVar1 = 0x70;
    __Znwm();
  }
  else {
    param_2 = 0x70;
    lVar1 = unaff_x20;
    func_0x00010b4d80e0();
  }
  func_0x00010bd0ad80();
  func_0x00010bd151f8();
  *(undefined8 *)(lVar1 + 8) = param_2;
  func_0x00010bd15248(&PTR_FUN_110d9be90);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010bd14e1c();
  }
  func_0x00010bd1554c();
  func_0x000107c282d4();
  *(undefined4 *)(unaff_x19 + 0x28) = 0;
  func_0x000107c282d4(unaff_x19 + 0x30,unaff_x20,param_3 + 0x30);
  *(undefined4 *)(unaff_x19 + 0x40) = 0;
  func_0x00010bd15448();
  lVar1 = param_3 + 0x60;
  func_0x00010bd151b4();
  *(long *)(unaff_x19 + 0x60) = lVar1;
  param_3 = param_3 + 0x68;
  func_0x00010bd151b4();
  *(long *)(unaff_x19 + 0x68) = param_3;
  return unaff_x19;
}



/* Entry: 10bd09634; end: 10bd09663;  */

void FUN_10bd09634(undefined8 param_1,undefined8 *param_2)

{
  func_0x00010bd0b0c8(*param_2,param_1);
  func_0x00010bd0aedc();
  func_0x00010bd0c010();
  return;
}



/* Entry: 10bd09664; end: 10bd096df;  */

void FUN_10bd09664(void)

{
  func_0x00010bd0aedc();
  func_0x00010bd0c010();
  return;
}



/* Entry: 10bd096e0; end: 10bd0970f;  */

void FUN_10bd096e0(undefined8 param_1,undefined8 *param_2)

{
  func_0x00010bd0b0c8(*param_2,param_1);
  func_0x00010bd0aedc();
  func_0x00010bd0c010();
  return;
}



/* Entry: 10bd09710; end: 10bd099a7;  */

void FUN_10bd09710(void)

{
  func_0x00010bd0b84c();
  func_0x00010bd0a9ac();
  func_0x00010bd0c010();
  return;
}



/* Entry: 10bd099a8; end: 10bd09b0f;  */

void FUN_10bd099a8(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 *param_4)

{
  undefined1 in_ZR;
  int iVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  int extraout_w10;
  long unaff_x20;
  undefined8 ***pppuStack_500;
  code *pcStack_4f8;
  undefined *puStack_4e8;
  undefined8 ***pppuStack_4e0;
  code *pcStack_4d8;
  undefined8 ***pppuStack_3d0;
  code *pcStack_3c8;
  undefined8 uStack_348;
  undefined8 ***pppuStack_310;
  undefined8 uStack_308;
  undefined8 ***pppuStack_2f0;
  code *pcStack_2e8;
  undefined1 ***pppuStack_250;
  undefined8 uStack_248;
  undefined1 **ppuStack_190;
  undefined8 uStack_188;
  undefined1 *puStack_d0;
  undefined8 uStack_c8;
  
  func_0x00010bd09f5c();
  func_0x000107c284bc(&UNK_10f834598);
  func_0x00010bd0a37c();
  func_0x00010bd09fa8();
  func_0x00010bd0a360();
  func_0x00010bd09f78();
  func_0x000107c3a63c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    uStack_c8 = 0x10bd099f0;
    puStack_d0 = &stack0xfffffffffffffff0;
    func_0x00010bd09f5c();
    func_0x000107c284bc(&UNK_10f8345c0);
    func_0x00010bd0a37c();
    func_0x00010bd09fa8();
    func_0x00010bd0a360();
    func_0x00010bd09f78();
    func_0x000107c3a63c();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      uStack_188 = 0x10bd09a38;
      ppuStack_190 = &puStack_d0;
      func_0x00010bd09f5c();
      func_0x000107c284bc(&UNK_10f8345e9);
      func_0x00010bd0a37c();
      func_0x00010bd09fa8();
      func_0x00010bd0a360();
      func_0x00010bd09f78();
      func_0x000107c3a63c();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        uStack_248 = 0x10bd09a80;
        pppuStack_250 = &ppuStack_190;
        func_0x00010bd09f5c();
        func_0x000107c284bc(&UNK_10f834617);
        func_0x00010bd0a37c();
        func_0x00010bd09fa8();
        func_0x00010bd0a360();
        func_0x00010bd09f78();
        func_0x000107c3a63c();
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          uStack_308 = 0x10bd09ac8;
          pppuStack_310 = &pppuStack_250;
          func_0x00010bd09f5c();
          func_0x000107c284bc(&UNK_10f83464c);
          func_0x00010bd0a37c();
          func_0x00010bd09fa8();
          func_0x00010bd0a360();
          func_0x00010bd09f78();
          func_0x000107c3a63c();
          if (!(bool)in_ZR) {
            ___stack_chk_fail();
            pcVar3 = FUN_10bd09b10;
            func_0x00010bd0bcb4();
            pppuStack_2f0 = &pppuStack_310;
            pcStack_2e8 = pcVar3;
            func_0x00010bd0a198();
            uStack_348 = extraout_x8;
            func_0x00010bd0ad34();
            func_0x00010bd0b35c();
            func_0x00010bd09fdc();
            func_0x00010bd0b44c();
            func_0x00010bd0a0f8(*(undefined8 *)(unaff_x20 + 8));
            func_0x00010bd0bfc8();
            func_0x00010bd0b0c8(*(undefined8 *)(unaff_x20 + 0x10));
            func_0x00010bd0bd48();
            func_0x00010bd09fa8();
            puVar2 = &UNK_10f83468d;
            func_0x000107c284bc();
            func_0x00010bd0a6b0();
            func_0x000107c3a64c(uStack_348);
            if ((bool)in_ZR) {
              return;
            }
            ___stack_chk_fail();
            pcStack_3c8 = FUN_10bd09ba8;
            pppuStack_3d0 = &pppuStack_2f0;
            func_0x00010bd0a10c();
            func_0x00010bd0ad34();
            func_0x00010bd0ac98();
            func_0x00010bd09fa8(*(undefined8 *)(puVar2 + 8));
            func_0x00010bd0b44c();
            func_0x00010bd0bd3c();
            func_0x00010bd09fc4();
            func_0x00010bd0bfc8();
            puStack_4e8 = puVar2;
            pppuStack_4e0 = (undefined8 ***)pcVar3;
            func_0x00010bd0a99c();
            func_0x00010bd0a628();
            FUN_10bd07cbc();
            func_0x00010bd09ff8();
            if ((bool)in_ZR) {
              return;
            }
            ___stack_chk_fail();
            pcStack_4f8 = FUN_10bd09c24;
            pppuStack_500 = &pppuStack_3d0;
            func_0x00010bd09f5c();
            func_0x000107c284bc();
            func_0x00010bd0a37c();
            func_0x00010bd09fa8();
            func_0x00010bd0a360();
            func_0x00010bd09f78();
            func_0x000107c3a63c();
            if (!(bool)in_ZR) {
              ___stack_chk_fail();
              pcVar3 = FUN_10bd09c6c;
              func_0x00010bd0bcb4();
              pppuStack_4e0 = &pppuStack_500;
              pcStack_4d8 = pcVar3;
              func_0x00010bd0a198();
              func_0x00010bd0aa30();
              func_0x00010bd0b35c();
              func_0x00010bd09fdc();
              func_0x000107c284bc(&UNK_10f8346f0);
              func_0x00010bd0a99c();
              func_0x00010bd0a0f8();
              func_0x000107c284bc(&UNK_10f83472d);
              func_0x00010bd0a99c();
              func_0x00010bd0bd48();
              func_0x00010bd09fc4();
              func_0x000107c284bc(&UNK_10f834775);
              func_0x00010bd0a6b0();
              func_0x000107c3a64c(extraout_x8_00);
              if ((bool)in_ZR) {
                return;
              }
              ___stack_chk_fail();
              func_0x00010bd09f5c();
              func_0x000107c284bc(&UNK_10f834784);
              func_0x00010bd0a37c();
              func_0x00010bd09fc4();
              func_0x000107c284bc();
              func_0x00010bd0a06c();
              func_0x00010bd0b2f4();
              func_0x000107c3a63c();
              if ((bool)in_ZR) {
                return;
              }
              ___stack_chk_fail();
              func_0x00010bd09f5c();
              func_0x000107c284bc(&UNK_10f8347ab);
              func_0x00010bd0a37c();
              func_0x00010bd09fc4();
              puVar2 = &UNK_10f8347b3;
              func_0x000107c284bc();
              func_0x00010bd09f78();
              func_0x000107c3a63c();
              if (!(bool)in_ZR) {
                ___stack_chk_fail();
                func_0x00010bd0a230();
                iVar1 = (int)puVar2;
                if ((((ulong)puVar2 & 1) != 0) || (func_0x00010bd0ad50(), iVar1 == 0)) {
                  (*param_3)(*param_4);
                  do {
                    func_0x00010bd0b9c4();
                  } while (extraout_w10 != 0);
                  func_0x00010bd0a78c();
                  if ((bool)in_ZR) {
                    func_0x00010bd0a914();
                  }
                }
                return;
              }
            }
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10bd09b10; end: 10bd09ba7;  */

void FUN_10bd09b10(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 *param_4)

{
  undefined1 in_ZR;
  int iVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  int extraout_w10;
  long unaff_x20;
  undefined8 in_stack_000000d0;
  undefined8 **ppuStack_140;
  code *pcStack_138;
  undefined *puStack_128;
  undefined8 ***pppuStack_120;
  code *pcStack_118;
  undefined8 *puStack_10;
  code *pcStack_8;
  
  func_0x00010bd0bcb4();
  func_0x00010bd0a198();
  func_0x00010bd0ad34();
  func_0x00010bd0b35c();
  func_0x00010bd09fdc();
  func_0x00010bd0b44c();
  func_0x00010bd0a0f8(*(undefined8 *)(unaff_x20 + 8));
  func_0x00010bd0bfc8();
  func_0x00010bd0b0c8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x00010bd0bd48();
  func_0x00010bd09fa8();
  puVar2 = &UNK_10f83468d;
  func_0x000107c284bc();
  func_0x00010bd0a6b0();
  func_0x000107c3a64c(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcStack_8 = FUN_10bd09ba8;
  puStack_10 = &stack0x000000d0;
  func_0x00010bd0a10c();
  func_0x00010bd0ad34();
  func_0x00010bd0ac98();
  func_0x00010bd09fa8(*(undefined8 *)(puVar2 + 8));
  func_0x00010bd0b44c();
  func_0x00010bd0bd3c();
  func_0x00010bd09fc4();
  func_0x00010bd0bfc8();
  puStack_128 = puVar2;
  func_0x00010bd0a99c();
  func_0x00010bd0a628();
  FUN_10bd07cbc();
  func_0x00010bd09ff8();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_10bd09c24;
  ppuStack_140 = &puStack_10;
  func_0x00010bd09f5c();
  func_0x000107c284bc();
  func_0x00010bd0a37c();
  func_0x00010bd09fa8();
  func_0x00010bd0a360();
  func_0x00010bd09f78();
  func_0x000107c3a63c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    pcVar3 = FUN_10bd09c6c;
    func_0x00010bd0bcb4();
    pppuStack_120 = &ppuStack_140;
    pcStack_118 = pcVar3;
    func_0x00010bd0a198();
    func_0x00010bd0aa30();
    func_0x00010bd0b35c();
    func_0x00010bd09fdc();
    func_0x000107c284bc(&UNK_10f8346f0);
    func_0x00010bd0a99c();
    func_0x00010bd0a0f8();
    func_0x000107c284bc(&UNK_10f83472d);
    func_0x00010bd0a99c();
    func_0x00010bd0bd48();
    func_0x00010bd09fc4();
    func_0x000107c284bc(&UNK_10f834775);
    func_0x00010bd0a6b0();
    func_0x000107c3a64c(extraout_x8_00);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010bd09f5c();
    func_0x000107c284bc(&UNK_10f834784);
    func_0x00010bd0a37c();
    func_0x00010bd09fc4();
    func_0x000107c284bc();
    func_0x00010bd0a06c();
    func_0x00010bd0b2f4();
    func_0x000107c3a63c();
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010bd09f5c();
    func_0x000107c284bc(&UNK_10f8347ab);
    func_0x00010bd0a37c();
    func_0x00010bd09fc4();
    puVar2 = &UNK_10f8347b3;
    func_0x000107c284bc();
    func_0x00010bd09f78();
    func_0x000107c3a63c();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010bd0a230();
      iVar1 = (int)puVar2;
      if ((((ulong)puVar2 & 1) != 0) || (func_0x00010bd0ad50(), iVar1 == 0)) {
        (*param_3)(*param_4);
        do {
          func_0x00010bd0b9c4();
        } while (extraout_w10 != 0);
        func_0x00010bd0a78c();
        if ((bool)in_ZR) {
          func_0x00010bd0a914();
        }
      }
      return;
    }
  }
  return;
}



/* Entry: 10bd09ba8; end: 10bd09c23;  */

void FUN_10bd09ba8(long param_1,undefined8 param_2,code *param_3,undefined8 *param_4)

{
  undefined1 in_ZR;
  int iVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 extraout_x8;
  int extraout_w10;
  undefined1 *puStack_140;
  code *pcStack_138;
  long lStack_128;
  undefined1 **ppuStack_120;
  code *pcStack_118;
  
  func_0x00010bd0a10c();
  func_0x00010bd0ad34();
  func_0x00010bd0ac98();
  func_0x00010bd09fa8(*(undefined8 *)(param_1 + 8));
  func_0x00010bd0b44c();
  func_0x00010bd0bd3c();
  func_0x00010bd09fc4();
  func_0x00010bd0bfc8();
  lStack_128 = param_1;
  ppuStack_120 = (undefined1 **)param_2;
  func_0x00010bd0a99c();
  func_0x00010bd0a628();
  FUN_10bd07cbc();
  func_0x00010bd09ff8();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_10bd09c24;
  puStack_140 = &stack0xfffffffffffffff0;
  func_0x00010bd09f5c();
  func_0x000107c284bc();
  func_0x00010bd0a37c();
  func_0x00010bd09fa8();
  func_0x00010bd0a360();
  func_0x00010bd09f78();
  func_0x000107c3a63c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    pcVar3 = FUN_10bd09c6c;
    func_0x00010bd0bcb4();
    ppuStack_120 = &puStack_140;
    pcStack_118 = pcVar3;
    func_0x00010bd0a198();
    func_0x00010bd0aa30();
    func_0x00010bd0b35c();
    func_0x00010bd09fdc();
    func_0x000107c284bc(&UNK_10f8346f0);
    func_0x00010bd0a99c();
    func_0x00010bd0a0f8();
    func_0x000107c284bc(&UNK_10f83472d);
    func_0x00010bd0a99c();
    func_0x00010bd0bd48();
    func_0x00010bd09fc4();
    func_0x000107c284bc(&UNK_10f834775);
    func_0x00010bd0a6b0();
    func_0x000107c3a64c(extraout_x8);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010bd09f5c();
    func_0x000107c284bc(&UNK_10f834784);
    func_0x00010bd0a37c();
    func_0x00010bd09fc4();
    func_0x000107c284bc();
    func_0x00010bd0a06c();
    func_0x00010bd0b2f4();
    func_0x000107c3a63c();
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010bd09f5c();
    func_0x000107c284bc(&UNK_10f8347ab);
    func_0x00010bd0a37c();
    func_0x00010bd09fc4();
    puVar2 = &UNK_10f8347b3;
    func_0x000107c284bc();
    func_0x00010bd09f78();
    func_0x000107c3a63c();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010bd0a230();
      iVar1 = (int)puVar2;
      if ((((ulong)puVar2 & 1) != 0) || (func_0x00010bd0ad50(), iVar1 == 0)) {
        (*param_3)(*param_4);
        do {
          func_0x00010bd0b9c4();
        } while (extraout_w10 != 0);
        func_0x00010bd0a78c();
        if ((bool)in_ZR) {
          func_0x00010bd0a914();
        }
      }
      return;
    }
  }
  return;
}



/* Entry: 10bd09c24; end: 10bd09c6b;  */

void FUN_10bd09c24(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 *param_4)

{
  undefined1 in_ZR;
  int iVar1;
  undefined *puVar2;
  undefined8 extraout_x8;
  int extraout_w10;
  
  func_0x00010bd09f5c();
  func_0x000107c284bc();
  func_0x00010bd0a37c();
  func_0x00010bd09fa8();
  func_0x00010bd0a360();
  func_0x00010bd09f78();
  func_0x000107c3a63c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010bd0bcb4();
    func_0x00010bd0a198();
    func_0x00010bd0aa30();
    func_0x00010bd0b35c();
    func_0x00010bd09fdc();
    func_0x000107c284bc(&UNK_10f8346f0);
    func_0x00010bd0a99c();
    func_0x00010bd0a0f8();
    func_0x000107c284bc(&UNK_10f83472d);
    func_0x00010bd0a99c();
    func_0x00010bd0bd48();
    func_0x00010bd09fc4();
    func_0x000107c284bc(&UNK_10f834775);
    func_0x00010bd0a6b0();
    func_0x000107c3a64c(extraout_x8);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010bd09f5c();
    func_0x000107c284bc(&UNK_10f834784);
    func_0x00010bd0a37c();
    func_0x00010bd09fc4();
    func_0x000107c284bc();
    func_0x00010bd0a06c();
    func_0x00010bd0b2f4();
    func_0x000107c3a63c();
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010bd09f5c();
    func_0x000107c284bc(&UNK_10f8347ab);
    func_0x00010bd0a37c();
    func_0x00010bd09fc4();
    puVar2 = &UNK_10f8347b3;
    func_0x000107c284bc();
    func_0x00010bd09f78();
    func_0x000107c3a63c();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010bd0a230();
      iVar1 = (int)puVar2;
      if ((((ulong)puVar2 & 1) != 0) || (func_0x00010bd0ad50(), iVar1 == 0)) {
        (*param_3)(*param_4);
        do {
          func_0x00010bd0b9c4();
        } while (extraout_w10 != 0);
        func_0x00010bd0a78c();
        if ((bool)in_ZR) {
          func_0x00010bd0a914();
        }
      }
      return;
    }
  }
  return;
}



/* Entry: 10bd09c6c; end: 10bd09d0f;  */

void FUN_10bd09c6c(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 *param_4)

{
  undefined1 in_ZR;
  int iVar1;
  undefined *puVar2;
  undefined8 extraout_x8;
  int extraout_w10;
  
  func_0x00010bd0bcb4();
  func_0x00010bd0a198();
  func_0x00010bd0aa30();
  func_0x00010bd0b35c();
  func_0x00010bd09fdc();
  func_0x000107c284bc(&UNK_10f8346f0);
  func_0x00010bd0a99c();
  func_0x00010bd0a0f8();
  func_0x000107c284bc(&UNK_10f83472d);
  func_0x00010bd0a99c();
  func_0x00010bd0bd48();
  func_0x00010bd09fc4();
  func_0x000107c284bc(&UNK_10f834775);
  func_0x00010bd0a6b0();
  func_0x000107c3a64c(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bd09f5c();
  func_0x000107c284bc(&UNK_10f834784);
  func_0x00010bd0a37c();
  func_0x00010bd09fc4();
  func_0x000107c284bc();
  func_0x00010bd0a06c();
  func_0x00010bd0b2f4();
  func_0x000107c3a63c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010bd09f5c();
    func_0x000107c284bc(&UNK_10f8347ab);
    func_0x00010bd0a37c();
    func_0x00010bd09fc4();
    puVar2 = &UNK_10f8347b3;
    func_0x000107c284bc();
    func_0x00010bd09f78();
    func_0x000107c3a63c();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010bd0a230();
      iVar1 = (int)puVar2;
      if ((((ulong)puVar2 & 1) != 0) || (func_0x00010bd0ad50(), iVar1 == 0)) {
        (*param_3)(*param_4);
        do {
          func_0x00010bd0b9c4();
        } while (extraout_w10 != 0);
        func_0x00010bd0a78c();
        if ((bool)in_ZR) {
          func_0x00010bd0a914();
        }
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 10bd09d10; end: 10bd09dd3;  */

void FUN_10bd09d10(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 *param_4)

{
  undefined1 in_ZR;
  int iVar1;
  undefined *puVar2;
  int extraout_w10;
  
  func_0x00010bd09f5c();
  func_0x000107c284bc(&UNK_10f834784);
  func_0x00010bd0a37c();
  func_0x00010bd09fc4();
  func_0x000107c284bc();
  func_0x00010bd0a06c();
  func_0x00010bd0b2f4();
  func_0x000107c3a63c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bd09f5c();
  func_0x000107c284bc(&UNK_10f8347ab);
  func_0x00010bd0a37c();
  func_0x00010bd09fc4();
  puVar2 = &UNK_10f8347b3;
  func_0x000107c284bc();
  func_0x00010bd09f78();
  func_0x000107c3a63c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bd0a230();
  iVar1 = (int)puVar2;
  if ((((ulong)puVar2 & 1) != 0) || (func_0x00010bd0ad50(), iVar1 == 0)) {
    (*param_3)(*param_4);
    do {
      func_0x00010bd0b9c4();
    } while (extraout_w10 != 0);
    func_0x00010bd0a78c();
    if ((bool)in_ZR) {
      func_0x00010bd0a914();
    }
  }
  return;
}



/* Entry: 10bd09dd4; end: 10bd09e33;  */

void FUN_10bd09dd4(ulong param_1,undefined8 param_2,code *param_3,undefined8 *param_4)

{
  undefined1 in_ZR;
  int iVar1;
  int extraout_w10;
  
  func_0x00010bd0a230();
  iVar1 = (int)param_1;
  if (((param_1 & 1) != 0) || (func_0x00010bd0ad50(), iVar1 == 0)) {
    (*param_3)(*param_4);
    do {
      func_0x00010bd0b9c4();
    } while (extraout_w10 != 0);
    func_0x00010bd0a78c();
    if ((bool)in_ZR) {
      func_0x00010bd0a914();
    }
  }
  return;
}



/* Entry: 10bd09e34; end: 10bd09e87;  */

void FUN_10bd09e34(ulong param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  int iVar1;
  int extraout_w10;
  
  func_0x00010bd0a230();
  iVar1 = (int)param_1;
  if (((param_1 & 1) != 0) || (func_0x00010bd0ad60(), iVar1 == 0)) {
    FUN_10bcfd53c(*param_2);
    do {
      func_0x00010bd0b9c4();
    } while (extraout_w10 != 0);
    func_0x00010bd0a78c();
    if ((bool)in_ZR) {
      func_0x00010bd0a914();
    }
  }
  return;
}



/* Entry: 10bd09e88; end: 10bd09f37;  */

/* WARNING: Removing unreachable block (ram,0x000100066b54) */

undefined1  [16] FUN_10bd09e88(ulong param_1,long param_2)

{
  undefined1 in_ZR;
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  int extraout_w10;
  ulong *puVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  lVar3 = param_2;
  func_0x00010bd0a230();
  if (((param_1 & 1) != 0) || (func_0x00010bd0ad60(), (int)param_1 == 0)) {
    func_0x00010bd0b35c();
    if ((*(byte *)(*(long *)(extraout_x8 + 0x10) + 2) & 1) == 0) {
      func_0x00010bd0a968();
      FUN_10bdb2a88();
      func_0x00010bd0aa9c();
      puVar1 = &DAT_10f3b3c06;
      func_0x000107c613d0(&DAT_10f3b3c06);
      auVar6._8_8_ = puVar1;
      auVar6._0_8_ = &DAT_10f3b3c06;
      return auVar6;
    }
    puVar4 = *(ulong **)(param_2 + 8);
    uVar5 = puVar4[1];
    param_1 = *(ulong *)(*(long *)(extraout_x8 + 0x10) + 0x18);
    lVar2 = uVar5 + 4;
    _strlen(lVar2);
    lVar3 = uVar5 + 4;
    FUN_10bcfd184(param_1,lVar3,lVar2);
    func_0x00010bd0adc4();
    uVar5 = param_1;
    if (!(bool)in_ZR) {
      uVar5 = 0;
    }
    *puVar4 = uVar5;
    do {
      func_0x00010bd0b9c4();
    } while (extraout_w10 != 0);
    func_0x00010bd0a78c();
    if ((bool)in_ZR) {
      func_0x00010bd0a914();
    }
  }
  auVar7._8_8_ = lVar3;
  auVar7._0_8_ = param_1;
  return auVar7;
}



/* Entry: 10bd09f38; end: 10bd0c867;  */

/* WARNING: Removing unreachable block (ram,0x000100066b54) */

undefined1  [16] FUN_10bd09f38(void)

{
  undefined *puVar1;
  long unaff_x29;
  undefined1 auVar2 [16];
  
  *(undefined8 *)(unaff_x29 + -0x18) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = &DAT_10f3b3c06;
  func_0x000107c613d0(&DAT_10f3b3c06);
  auVar2._8_8_ = puVar1;
  auVar2._0_8_ = &DAT_10f3b3c06;
  return auVar2;
}



/* Entry: 10bd0c868; end: 10bd0c89f;  */

undefined8 FUN_10bd0c868(void)

{
  func_0x00010bd15660();
  return uRam0000000113847308;
}



/* Entry: 10bd0c8a0; end: 10bd0c8d7;  */

long FUN_10bd0c8a0(long param_1)

{
  func_0x000107c3a718();
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 10bd0c8d8; end: 10bd0c8db;  */

long FUN_10bd0c8d8(long param_1)

{
  func_0x000107c3a718();
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 10bd0c8dc; end: 10bd0c8ef;  */

void FUN_10bd0c8dc(void)

{
  FUN_10bd0c8a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bd0c8f0; end: 10bd0c8fb;  */

void FUN_10bd0c8f0(void)

{
  Hint_Prefetch(0x113406888,0,0,0);
  Hint_Prefetch(PTR_DAT_113406888,0,0,0);
  return;
}



/* Entry: 10bd0c8fc; end: 10bd0c93f;  */

void FUN_10bd0c8fc(uint param_1)

{
  char in_NG;
  char in_OV;
  
  do {
    func_0x000107c3a748();
    if (in_NG != in_OV) break;
    func_0x000107c3a704();
    func_0x000107c315c0();
  } while ((param_1 & 1) != 0);
  func_0x000107c3a744();
  return;
}



/* Entry: 10bd0c940; end: 10bd0c9bf;  */

void FUN_10bd0c940(ulong *param_1,long *param_2)

{
  long unaff_x20;
  long lVar1;
  long unaff_x22;
  
  func_0x00010bd151f8();
  if ((int)param_2[3] != 0) {
    func_0x00010bd155fc();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010bd14fa0();
    if ((*param_1 & 1) == 0) {
      func_0x00010bd2b26c();
    }
    if (0 < (int)((ulong)(param_2[1] - *param_2) >> 4)) {
      func_0x00010bd374f4();
      for (lVar1 = 0; unaff_x22 * 0x10 - lVar1 != 0; lVar1 = lVar1 + 0x10) {
        func_0x00010bd37570();
        func_0x00010bd375bc();
      }
    }
    return;
  }
  return;
}



/* Entry: 10bd0c9c0; end: 10bd0ca57;  */

long * FUN_10bd0c9c0(long *param_1,long *param_2,long *param_3,long *param_4)

{
  int *piVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  uint uVar7;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  func_0x00010bd14e8c();
  func_0x00010bd1553c();
  while (unaff_w22 != unaff_w21) {
    func_0x00010bd14c28();
    param_1 = (long *)0x1;
    func_0x00010bd150c8();
    func_0x00010bd15288();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x00010bd14d2c();
  lVar10 = 0;
  plVar3 = param_1;
  do {
    if ((int)((ulong)(param_1[1] - *param_1) >> 4) <= lVar10) {
      return param_2;
    }
    piVar1 = (int *)(*param_1 + lVar10 * 0x10);
    func_0x00010bd3caf8();
    plVar6 = plVar3;
    param_2 = plVar3;
    switch(piVar1[1]) {
    case 0:
      plVar6 = *(long **)(piVar1 + 2);
      uVar4 = (ulong)(uint)(*piVar1 << 3);
      func_0x00010bd3c9d8(uVar4);
      func_0x000107c280ac(plVar6,uVar4);
      param_2 = plVar6;
      break;
    case 1:
      iVar2 = piVar1[2];
      plVar6 = (long *)(ulong)(*piVar1 << 3 | 5);
      func_0x00010bd3c9d8();
      *(int *)plVar6 = iVar2;
      param_2 = (long *)((long)plVar6 + 4);
      break;
    case 2:
      lVar8 = *(long *)(piVar1 + 2);
      plVar6 = (long *)(ulong)(*piVar1 << 3 | 1);
      func_0x00010bd3c9d8();
      *plVar6 = lVar8;
      param_2 = plVar6 + 1;
      break;
    case 3:
      iVar2 = *piVar1;
      lVar8 = *(long *)(piVar1 + 2);
      lVar9 = (long)*(char *)(lVar8 + 0x17);
      if ((-1 < lVar9) || (lVar9 = *(long *)(lVar8 + 8), lVar9 < 0x80)) {
        lVar11 = *param_3;
        uVar7 = iVar2 << 3;
        plVar6 = (long *)(ulong)uVar7;
        func_0x000107c280a4();
        if (lVar9 <= lVar11 + ~((long)plVar3 + (long)(int)plVar6) + 0x10) {
          lVar8 = (long)plVar3 + 2;
          for (uVar7 = uVar7 | 2; 0x7f < uVar7; uVar7 = uVar7 >> 7) {
            *(byte *)(lVar8 + -2) = (byte)uVar7 | 0x80;
            lVar8 = lVar8 + 1;
          }
          *(byte *)(lVar8 + -2) = (byte)uVar7;
          *(char *)(lVar8 + -1) = (char)lVar9;
          func_0x00010bd3cc08();
          _memcpy();
          param_2 = (long *)(lVar8 + lVar9);
          break;
        }
      }
      plVar6 = param_3;
      func_0x00010b4d5120(param_3,iVar2,lVar8,plVar3);
      param_2 = plVar6;
      break;
    case 4:
      uVar4 = (ulong)(*piVar1 << 3 | 3);
      func_0x00010bd3c9d8(uVar4);
      uVar5 = *(undefined8 *)(piVar1 + 2);
      FUN_10bd377f0(uVar5,uVar4,param_3);
      func_0x00010bd3ca0c();
      plVar6 = (long *)(ulong)(*piVar1 << 3 | 4);
      func_0x000107c280a8(plVar6,uVar5);
      param_2 = plVar6;
    }
    lVar10 = lVar10 + 1;
    plVar3 = plVar6;
  } while( true );
}



/* Entry: 10bd0ca58; end: 10bd0ca5b;  */

undefined8 FUN_10bd0ca58(undefined8 param_1)

{
  func_0x000100067dc8();
  func_0x000100067e14(param_1);
  return param_1;
}



/* Entry: 10bd0ca5c; end: 10bd0ca6f;  */

void FUN_10bd0ca5c(void)

{
  func_0x000107c315bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bd0ca70; end: 10bd0cbdb;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10bd0ca70(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  ulong *puVar2;
  long *plVar3;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  long lVar4;
  ulong *unaff_x22;
  
  func_0x00010bd14dc0();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x00010bd1521c();
  }
  func_0x00010bd15684();
  func_0x00010598fce8();
  func_0x00010bd15260();
  FUN_10bd0d1cc();
  func_0x00010bd15678();
  func_0x00010bd0d1e4();
  func_0x00010bd0d1fc(unaff_x21 + 0x60,unaff_x20 + 0x60);
  func_0x00010bd0d214(unaff_x21 + 0x78,unaff_x20 + 0x78);
  func_0x000107c282d0(unaff_x21 + 0x90,unaff_x20 + 0x90);
  puVar2 = (ulong *)(unaff_x21 + 0xa0);
  plVar3 = (long *)(unaff_x20 + 0xa0);
  func_0x000107c282d0();
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010bd150b8(*(undefined8 *)(unaff_x20 + 0xb0));
      param_3 = *(ulong *)(unaff_x21 + 8);
      if ((param_3 & 1) != 0) {
        func_0x00010bd1516c();
      }
      puVar2 = (ulong *)(unaff_x21 + 0xb0);
      func_0x00010bd150f0();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010bd152b0(*(undefined8 *)(unaff_x20 + 0xb8));
      if ((param_3 & 1) != 0) {
        func_0x00010bd1516c();
      }
      puVar2 = (ulong *)(unaff_x21 + 0xb8);
      func_0x00010bd150f0();
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x00010bd152b0(*(undefined8 *)(unaff_x20 + 0xc0));
      if ((param_3 & 1) != 0) {
        func_0x00010bd1516c();
      }
      puVar2 = (ulong *)(unaff_x21 + 0xc0);
      func_0x00010bd150f0();
    }
    if ((uVar1 >> 3 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 200);
      plVar3 = *(long **)(unaff_x20 + 200);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        FUN_10bd14030();
        *(ulong **)(unaff_x21 + 200) = puVar2;
      }
      else {
        FUN_10bd0f8dc();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0xd0);
      plVar3 = *(long **)(unaff_x20 + 0xd0);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        FUN_10bd1406c();
        *(ulong **)(unaff_x21 + 0xd0) = puVar2;
      }
      else {
        FUN_10bd133cc();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      *(undefined4 *)(unaff_x21 + 0xd8) = *(undefined4 *)(unaff_x20 + 0xd8);
    }
  }
  func_0x00010bd14e5c();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010bd14ecc();
    if ((*puVar2 & 1) == 0) {
      func_0x00010bd2b26c();
    }
    if (0 < (int)((ulong)(plVar3[1] - *plVar3) >> 4)) {
      func_0x00010bd374f4();
      for (lVar4 = 0; (long)unaff_x22 * 0x10 - lVar4 != 0; lVar4 = lVar4 + 0x10) {
        func_0x00010bd37570();
        func_0x00010bd375bc();
      }
    }
    return;
  }
  return;
}



/* Entry: 10bd0cbdc; end: 10bd0cd2b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10bd0cbdc(void)

{
  uint uVar1;
  ulong extraout_x8;
  long lVar2;
  ulong *unaff_x19;
  long lVar3;
  
  func_0x00010bd14f60();
  func_0x00010bd152d4();
  uVar1 = (uint)unaff_x19[5];
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x000106af6874(unaff_x19 + 9);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x000106af6874(unaff_x19 + 10);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x000106af6874(unaff_x19 + 0xb);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x00010bd1561c();
    }
    if ((uVar1 >> 4 & 1) != 0) {
      func_0x000106af6874(unaff_x19 + 0xd);
    }
    if ((uVar1 >> 5 & 1) != 0) {
      func_0x000106af6874(unaff_x19 + 0xe);
    }
    if ((uVar1 >> 6 & 1) != 0) {
      func_0x000106af6874(unaff_x19 + 0xf);
    }
    if ((uVar1 >> 7 & 1) != 0) {
      func_0x000106af6874(unaff_x19 + 0x10);
    }
  }
  if ((uVar1 & 0x700) != 0) {
    if ((uVar1 >> 8 & 1) != 0) {
      func_0x000106af6874(unaff_x19 + 0x11);
    }
    if ((uVar1 >> 9 & 1) != 0) {
      func_0x000106af6874(unaff_x19 + 0x12);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      FUN_10bd0e0c0(unaff_x19[0x13]);
    }
  }
  if ((uVar1 & 0xf800) != 0) {
    *(undefined1 *)((long)unaff_x19 + 0xa4) = 0;
    *(undefined4 *)(unaff_x19 + 0x14) = 0;
  }
  if ((uVar1 & 0x1f0000) != 0) {
    *(undefined1 *)((long)unaff_x19 + 0xa7) = 0;
    *(undefined2 *)((long)unaff_x19 + 0xa5) = 0;
    *(undefined4 *)(unaff_x19 + 0x15) = 1;
    *(undefined1 *)((long)unaff_x19 + 0xac) = 1;
  }
  func_0x00010bd1536c();
  if ((extraout_x8 & 1) != 0) {
    if ((*unaff_x19 & 1) == 0) {
      func_0x00010bd2b26c();
    }
    else {
      unaff_x19 = (ulong *)((*unaff_x19 & 0xfffffffffffffffe) + 8);
    }
    if (*unaff_x19 == unaff_x19[1]) {
      return;
    }
    lVar2 = (long)((unaff_x19[1] - *unaff_x19) * 0x10000000) >> 0x20;
    lVar3 = lVar2 + 1;
    lVar2 = lVar2 * 0x10;
    do {
      lVar2 = lVar2 + -0x10;
      FUN_10bd36708(*unaff_x19 + lVar2);
      lVar3 = lVar3 + -1;
    } while (1 < lVar3);
    unaff_x19[1] = *unaff_x19;
    return;
  }
  return;
}



/* Entry: 10bd0cd2c; end: 10bd0cfe3;  */

long * FUN_10bd0cd2c(long *param_1,long *param_2,long *param_3,long *param_4)

{
  int *piVar1;
  ulong *puVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  bool bVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  long *plVar12;
  uint uVar13;
  ulong uVar14;
  long *unaff_x19;
  long unaff_x20;
  undefined1 *puVar15;
  long unaff_x22;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  
  func_0x00010bd14e8c();
  uVar13 = *(uint *)(param_1 + 2);
  if ((uVar13 & 1) != 0) {
    func_0x00010bd14dec(*(undefined8 *)(unaff_x20 + 0xb0));
    param_4 = param_1;
  }
  if ((uVar13 >> 1 & 1) != 0) {
    func_0x00010bd14f18(*(undefined8 *)(unaff_x20 + 0xb8));
    param_4 = param_1;
  }
  lVar19 = 8;
  for (uVar18 = (ulong)(*(uint *)(unaff_x20 + 0x20) &
                       ((int)*(uint *)(unaff_x20 + 0x20) >> 0x1f ^ 0xffffffffU)); uVar18 != 0;
      uVar18 = uVar18 - 1) {
    uVar14 = *(ulong *)(unaff_x20 + 0x18);
    bVar8 = (uVar14 & 1) == 0;
    cVar6 = '\0';
    cVar7 = '\0';
    puVar2 = (ulong *)(unaff_x20 + 0x18);
    if (!bVar8) {
      puVar2 = (ulong *)(uVar14 + lVar19 + -1);
    }
    param_3 = (long *)*puVar2;
    cVar5 = *(char *)((long)param_3 + 0x17);
    if ((((long)cVar5 < 0) && (func_0x00010bd156d0(), !bVar8 && cVar6 == cVar7)) ||
       (func_0x00010bd1518c(), cVar6 != cVar7)) {
      param_2 = (long *)0x3;
      param_1 = unaff_x19;
      func_0x00010b4d5120();
      param_4 = param_1;
    }
    else {
      *(undefined1 *)param_4 = 0x1a;
      *(char *)((long)param_4 + 1) = cVar5;
      if (*(char *)((long)param_3 + 0x17) < '\0') {
        param_3 = (long *)*param_3;
      }
      func_0x00010bd14fbc();
      param_4 = (long *)(unaff_x22 + cVar5);
    }
    lVar19 = lVar19 + 8;
  }
  iVar3 = *(int *)(unaff_x20 + 0x38);
  while (iVar3 != 0) {
    func_0x00010bd14ce4(*(undefined8 *)(unaff_x20 + 0x30));
    param_1 = (long *)0x4;
    func_0x00010bd150c8();
    func_0x00010bd15288();
  }
  iVar3 = *(int *)(unaff_x20 + 0x50);
  while (iVar3 != 0) {
    func_0x00010bd14ce4(*(undefined8 *)(unaff_x20 + 0x48));
    param_1 = (long *)0x5;
    func_0x00010bd150c8();
    func_0x00010bd15288();
  }
  iVar3 = *(int *)(unaff_x20 + 0x68);
  while (iVar3 != 0) {
    func_0x00010bd14ce4(*(undefined8 *)(unaff_x20 + 0x60));
    param_1 = (long *)0x6;
    func_0x00010bd150c8();
    func_0x00010bd15288();
  }
  iVar3 = *(int *)(unaff_x20 + 0x80);
  while (iVar3 != 0) {
    func_0x00010bd14ce4(*(undefined8 *)(unaff_x20 + 0x78));
    param_1 = (long *)0x7;
    func_0x00010bd150c8();
    func_0x00010bd15288();
  }
  if ((uVar13 >> 3 & 1) != 0) {
    param_2 = *(long **)(unaff_x20 + 200);
    param_3 = (long *)(ulong)*(uint *)((long)param_2 + 0x2c);
    param_1 = (long *)0x8;
    func_0x00010bd150c8();
    param_4 = param_1;
  }
  if ((uVar13 >> 4 & 1) != 0) {
    param_2 = *(long **)(unaff_x20 + 0xd0);
    param_3 = (long *)(ulong)*(uint *)(param_2 + 5);
    param_1 = (long *)0x9;
    func_0x00010bd150c8();
    param_4 = param_1;
  }
  uVar4 = *(uint *)(unaff_x20 + 0x90);
  for (lVar19 = 0; (ulong)(uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)) << 2 != lVar19;
      lVar19 = lVar19 + 4) {
    func_0x00010bd14e28();
    param_2 = param_1;
    func_0x00010bd155c4();
    func_0x00010bd14e34();
    param_4 = param_1;
  }
  uVar4 = *(uint *)(unaff_x20 + 0xa0);
  for (lVar19 = 0; (ulong)(uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)) << 2 != lVar19;
      lVar19 = lVar19 + 4) {
    func_0x00010bd14e28();
    param_4 = (long *)0x58;
    func_0x000107c280a8(0x58,param_1);
    param_2 = param_1;
    func_0x00010bd14e34();
    param_1 = param_4;
  }
  if ((uVar13 >> 2 & 1) != 0) {
    func_0x00010bd15160(*(undefined8 *)(unaff_x20 + 0xc0));
    param_2 = (long *)0xc;
    func_0x000107c280a0();
    param_4 = param_1;
  }
  plVar9 = param_1;
  if ((uVar13 >> 5 & 1) != 0) {
    func_0x00010bd14e28();
    plVar9 = (long *)0x70;
    func_0x000107c280a8(0x70,param_1);
    func_0x00010bd14e34();
    param_2 = param_1;
    param_4 = plVar9;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x00010bd14d2c();
  lVar19 = 0;
  plVar10 = plVar9;
  do {
    if ((int)((ulong)(plVar9[1] - *plVar9) >> 4) <= lVar19) {
      return param_2;
    }
    piVar1 = (int *)(*plVar9 + lVar19 * 0x10);
    func_0x00010bd3caf8();
    plVar12 = plVar10;
    param_2 = plVar10;
    switch(piVar1[1]) {
    case 0:
      plVar12 = *(long **)(piVar1 + 2);
      uVar18 = (ulong)(uint)(*piVar1 << 3);
      func_0x00010bd3c9d8(uVar18);
      func_0x000107c280ac(plVar12,uVar18);
      param_2 = plVar12;
      break;
    case 1:
      iVar3 = piVar1[2];
      plVar12 = (long *)(ulong)(*piVar1 << 3 | 5);
      func_0x00010bd3c9d8();
      *(int *)plVar12 = iVar3;
      param_2 = (long *)((long)plVar12 + 4);
      break;
    case 2:
      lVar16 = *(long *)(piVar1 + 2);
      plVar12 = (long *)(ulong)(*piVar1 << 3 | 1);
      func_0x00010bd3c9d8();
      *plVar12 = lVar16;
      param_2 = plVar12 + 1;
      break;
    case 3:
      iVar3 = *piVar1;
      lVar16 = *(long *)(piVar1 + 2);
      lVar17 = (long)*(char *)(lVar16 + 0x17);
      if ((-1 < lVar17) || (lVar17 = *(long *)(lVar16 + 8), lVar17 < 0x80)) {
        lVar20 = *param_3;
        uVar13 = iVar3 << 3;
        plVar12 = (long *)(ulong)uVar13;
        func_0x000107c280a4();
        if (lVar17 <= (long)(lVar20 + ~(ulong)((long)plVar10 + (long)(int)plVar12) + 0x10)) {
          puVar15 = (undefined1 *)((long)plVar10 + 2);
          for (uVar13 = uVar13 | 2; 0x7f < uVar13; uVar13 = uVar13 >> 7) {
            puVar15[-2] = (byte)uVar13 | 0x80;
            puVar15 = puVar15 + 1;
          }
          puVar15[-2] = (byte)uVar13;
          puVar15[-1] = (char)lVar17;
          func_0x00010bd3cc08();
          _memcpy();
          param_2 = (long *)(puVar15 + lVar17);
          break;
        }
      }
      plVar12 = param_3;
      func_0x00010b4d5120(param_3,iVar3,lVar16,plVar10);
      param_2 = plVar12;
      break;
    case 4:
      uVar18 = (ulong)(*piVar1 << 3 | 3);
      func_0x00010bd3c9d8(uVar18);
      uVar11 = *(undefined8 *)(piVar1 + 2);
      FUN_10bd377f0(uVar11,uVar18,param_3);
      func_0x00010bd3ca0c();
      plVar12 = (long *)(ulong)(*piVar1 << 3 | 4);
      func_0x000107c280a8(plVar12,uVar11);
      param_2 = plVar12;
    }
    lVar19 = lVar19 + 1;
    plVar10 = plVar12;
  } while( true );
}



/* Entry: 10bd0cfe4; end: 10bd0d177;  */

/* WARNING: Removing unreachable block (ram,0x00010bd0d04c) */
/* WARNING: Removing unreachable block (ram,0x00010bd0d02c) */
/* WARNING: Removing unreachable block (ram,0x00010bd0d070) */
/* WARNING: Type propagation algorithm not settling */

long FUN_10bd0cfe4(long param_1,undefined8 param_2,undefined4 *param_3)

{
  ulong *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  
  uVar4 = (undefined4)((ulong)param_2 >> 0x20);
  uVar3 = (undefined4)param_2;
  uVar2 = *(uint *)(param_1 + 0x20);
  while ((uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)) != 0) {
    func_0x00010bd14e70();
    func_0x00010bd15308();
  }
  func_0x00010bd14ca4();
  func_0x00010bd14ca4();
  func_0x00010bd14ca4();
  uVar5 = *(ulong *)(param_1 + 0x78);
  puVar1 = (ulong *)(param_1 + 0x78);
  if ((uVar5 & 1) != 0) {
    puVar1 = (ulong *)(uVar5 + 7);
  }
  for (lVar6 = (long)*(int *)(param_1 + 0x80) << 3; lVar6 != 0; lVar6 = lVar6 + -8) {
    func_0x00010bd0d1b0(*puVar1);
    puVar1 = puVar1 + 1;
  }
  func_0x00010b4d3e0c(param_1 + 0x90);
  lVar6 = param_1 + 0xa0;
  func_0x00010b4d3e0c();
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 0x3f) != 0) {
    if ((uVar2 & 1) != 0) {
      func_0x00010bd150f8(*(undefined8 *)(param_1 + 0xb0));
      func_0x00010bd15180();
    }
    if ((uVar2 >> 1 & 1) != 0) {
      func_0x00010bd150f8(*(undefined8 *)(param_1 + 0xb8));
      func_0x00010bd15180();
    }
    if ((uVar2 >> 2 & 1) != 0) {
      func_0x00010bd150f8(*(undefined8 *)(param_1 + 0xc0));
      func_0x00010bd15180();
    }
    if ((uVar2 >> 3 & 1) != 0) {
      lVar6 = *(long *)(param_1 + 200);
      FUN_10bd0fe8c();
      func_0x00010bd14c68();
    }
    if ((uVar2 >> 4 & 1) != 0) {
      lVar6 = *(long *)(param_1 + 0xd0);
      func_0x00010bd1345c();
      func_0x00010bd14c68();
    }
    if ((uVar2 >> 5 & 1) != 0) {
      func_0x00010bd14f6c((long)*(int *)(param_1 + 0xd8));
    }
  }
  func_0x00010bd14f84();
  if ((*(byte *)(lVar6 + 8) & 1) != 0) {
    if ((*(ulong *)(lVar6 + 8) & 1) == 0) {
      FUN_10bd36610();
    }
    else {
      lVar6 = (*(ulong *)(lVar6 + 8) & 0xfffffffffffffffe) + 8;
    }
    FUN_10bd37a78();
    lVar6 = lVar6 + CONCAT44(uVar4,uVar3);
    *param_3 = (int)lVar6;
    return lVar6;
  }
  *param_3 = uVar3;
  return CONCAT44(uVar4,uVar3);
}



/* Entry: 10bd0d178; end: 10bd0d1cb;  */

long FUN_10bd0d178(long param_1)

{
  long extraout_x8;
  
  FUN_10bd0da18();
  func_0x00010bd14c8c();
  return param_1 + extraout_x8;
}



/* Entry: 10bd0d1cc; end: 10bd0d22b;  */

void FUN_10bd0d1cc(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long *unaff_x19;
  int unaff_w20;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *unaff_x25;
  long unaff_x26;
  
  if (*(int *)(param_2 + 8) == 0) {
    return;
  }
  func_0x000107c39c98();
  plVar2 = param_1;
  func_0x000107c39ca8();
  func_0x000107c39cb0();
  puVar4 = unaff_x25;
  if (0 < (int)plVar2) {
    func_0x00010b4d38f4();
    param_1 = param_1 + (int)plVar2;
    puVar4 = unaff_x25 + (int)plVar2;
  }
  lVar3 = unaff_x19[2];
  for (; iVar1 = (int)plVar2, puVar4 < unaff_x25 + unaff_x26; puVar4 = puVar4 + 1) {
    plVar2 = (long *)lVar3;
    FUN_10bd140cc(lVar3,*puVar4);
    *param_1 = (long)plVar2;
    param_1 = param_1 + 1;
  }
  func_0x000107c39ca0();
  if (iVar1 < unaff_w20) {
    *(int *)(*unaff_x19 + -1) = unaff_w20;
  }
  return;
}



/* Entry: 10bd0d22c; end: 10bd0d25f;  */

long FUN_10bd0d22c(long param_1)

{
  func_0x000107c3a718();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10bd0df5c();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10bd0d260; end: 10bd0d263;  */

long FUN_10bd0d260(long param_1)

{
  func_0x000107c3a718();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10bd0df5c();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10bd0d264; end: 10bd0d277;  */

void FUN_10bd0d264(void)

{
  FUN_10bd0d22c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bd0d278; end: 10bd0d283;  */

void FUN_10bd0d278(void)

{
  Hint_Prefetch(0x113406bf0,0,0,0);
  Hint_Prefetch(PTR_DAT_113406bf0,0,0,0);
  return;
}



/* Entry: 10bd0d284; end: 10bd0d2ab;  */

void FUN_10bd0d284(long param_1)

{
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_10bd0dfdc();
  }
  return;
}



/* Entry: 10bd0d2ac; end: 10bd0d34f;  */

void FUN_10bd0d2ac(undefined8 param_1,long *param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar4;
  long unaff_x22;
  
  func_0x00010bd14edc();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar3 = *(ulong **)(unaff_x21 + 0x18);
      param_2 = *(long **)(unaff_x20 + 0x18);
      if (puVar3 == (ulong *)0x0) {
        FUN_10bd1449c();
        *(ulong **)(unaff_x21 + 0x18) = puVar2;
      }
      else {
        FUN_10bd0e028();
        puVar2 = puVar3;
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined4 *)(unaff_x21 + 0x20) = *(undefined4 *)(unaff_x20 + 0x20);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined4 *)(unaff_x21 + 0x24) = *(undefined4 *)(unaff_x20 + 0x24);
    }
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  func_0x00010bd14ecc();
  if ((*puVar2 & 1) == 0) {
    func_0x00010bd2b26c();
  }
  if (0 < (int)((ulong)(param_2[1] - *param_2) >> 4)) {
    func_0x00010bd374f4();
    for (lVar4 = 0; unaff_x22 * 0x10 - lVar4 != 0; lVar4 = lVar4 + 0x10) {
      func_0x00010bd37570();
      func_0x00010bd375bc();
    }
  }
  return;
}



/* Entry: 10bd0d350; end: 10bd0d3fb;  */

void FUN_10bd0d350(void)

{
  ulong extraout_x8;
  long lVar1;
  ulong *unaff_x19;
  ulong unaff_x20;
  long lVar2;
  
  func_0x00010bd15254();
  if ((unaff_x20 & 1) != 0) {
    func_0x00010bd0d394(unaff_x19[3]);
  }
  if ((unaff_x20 & 6) != 0) {
    unaff_x19[4] = 0;
  }
  func_0x00010bd1529c();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    func_0x00010bd2b26c();
  }
  else {
    unaff_x19 = (ulong *)((*unaff_x19 & 0xfffffffffffffffe) + 8);
  }
  if (*unaff_x19 != unaff_x19[1]) {
    lVar1 = (long)((unaff_x19[1] - *unaff_x19) * 0x10000000) >> 0x20;
    lVar2 = lVar1 + 1;
    lVar1 = lVar1 * 0x10;
    do {
      lVar1 = lVar1 + -0x10;
      FUN_10bd36708(*unaff_x19 + lVar1);
      lVar2 = lVar2 + -1;
    } while (1 < lVar2);
    unaff_x19[1] = *unaff_x19;
    return;
  }
  return;
}



/* Entry: 10bd0d3fc; end: 10bd0d477;  */

long * FUN_10bd0d3fc(long *param_1,long *param_2,long *param_3,long *param_4)

{
  int *piVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  uint uVar7;
  long unaff_x20;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  func_0x00010bd14e8c();
  uVar7 = *(uint *)(param_1 + 2);
  if ((uVar7 >> 1 & 1) != 0) {
    param_2 = (long *)(ulong)*(uint *)(unaff_x20 + 0x20);
    func_0x00010bd153a0();
    func_0x000107c282e4();
    param_4 = param_1;
  }
  if ((uVar7 >> 2 & 1) != 0) {
    param_2 = (long *)(ulong)*(uint *)(unaff_x20 + 0x24);
    func_0x00010bd153a0();
    func_0x00010598f43c();
    param_4 = param_1;
  }
  if ((uVar7 & 1) != 0) {
    param_2 = *(long **)(unaff_x20 + 0x18);
    func_0x00010bd1508c();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x00010bd14d2c();
  lVar10 = 0;
  plVar3 = param_1;
  do {
    if ((int)((ulong)(param_1[1] - *param_1) >> 4) <= lVar10) {
      return param_2;
    }
    piVar1 = (int *)(*param_1 + lVar10 * 0x10);
    func_0x00010bd3caf8();
    plVar6 = plVar3;
    param_2 = plVar3;
    switch(piVar1[1]) {
    case 0:
      plVar6 = *(long **)(piVar1 + 2);
      uVar4 = (ulong)(uint)(*piVar1 << 3);
      func_0x00010bd3c9d8(uVar4);
      func_0x000107c280ac(plVar6,uVar4);
      param_2 = plVar6;
      break;
    case 1:
      iVar2 = piVar1[2];
      plVar6 = (long *)(ulong)(*piVar1 << 3 | 5);
      func_0x00010bd3c9d8();
      *(int *)plVar6 = iVar2;
      param_2 = (long *)((long)plVar6 + 4);
      break;
    case 2:
      lVar8 = *(long *)(piVar1 + 2);
      plVar6 = (long *)(ulong)(*piVar1 << 3 | 1);
      func_0x00010bd3c9d8();
      *plVar6 = lVar8;
      param_2 = plVar6 + 1;
      break;
    case 3:
      iVar2 = *piVar1;
      lVar8 = *(long *)(piVar1 + 2);
      lVar9 = (long)*(char *)(lVar8 + 0x17);
      if ((-1 < lVar9) || (lVar9 = *(long *)(lVar8 + 8), lVar9 < 0x80)) {
        lVar11 = *param_3;
        uVar7 = iVar2 << 3;
        plVar6 = (long *)(ulong)uVar7;
        func_0x000107c280a4();
        if (lVar9 <= lVar11 + ~((long)plVar3 + (long)(int)plVar6) + 0x10) {
          lVar8 = (long)plVar3 + 2;
          for (uVar7 = uVar7 | 2; 0x7f < uVar7; uVar7 = uVar7 >> 7) {
            *(byte *)(lVar8 + -2) = (byte)uVar7 | 0x80;
            lVar8 = lVar8 + 1;
          }
          *(byte *)(lVar8 + -2) = (byte)uVar7;
          *(char *)(lVar8 + -1) = (char)lVar9;
          func_0x00010bd3cc08();
          _memcpy();
          param_2 = (long *)(lVar8 + lVar9);
          break;
        }
      }
      plVar6 = param_3;
      func_0x00010b4d5120(param_3,iVar2,lVar8,plVar3);
      param_2 = plVar6;
      break;
    case 4:
      uVar4 = (ulong)(*piVar1 << 3 | 3);
      func_0x00010bd3c9d8(uVar4);
      uVar5 = *(undefined8 *)(piVar1 + 2);
      FUN_10bd377f0(uVar5,uVar4,param_3);
      func_0x00010bd3ca0c();
      plVar6 = (long *)(ulong)(*piVar1 << 3 | 4);
      func_0x000107c280a8(plVar6,uVar5);
      param_2 = plVar6;
    }
    lVar10 = lVar10 + 1;
    plVar3 = plVar6;
  } while( true );
}



/* Entry: 10bd0d478; end: 10bd0d4e7;  */

long FUN_10bd0d478(long param_1,undefined8 param_2,undefined4 *param_3)

{
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x9;
  long unaff_x19;
  uint unaff_w20;
  
  func_0x00010bd15254();
  if ((unaff_w20 & 7) == 0) {
    lVar1 = 0;
  }
  else {
    if ((unaff_w20 & 1) == 0) {
      lVar1 = 0;
    }
    else {
      param_1 = *(long *)(unaff_x19 + 0x18);
      func_0x00010bd0e1cc();
      func_0x00010bd14c8c();
      lVar1 = param_1 + extraout_x8 + 1;
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      func_0x00010bd15704(0xfffffff7);
      lVar1 = extraout_x9 + lVar1;
    }
    if ((unaff_w20 >> 2 & 1) != 0) {
      func_0x00010bd155a0();
      lVar1 = extraout_x8_00 + lVar1;
    }
  }
  func_0x00010bd151bc();
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    *param_3 = (int)lVar1;
    return lVar1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_10bd36610();
  }
  else {
    param_1 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
  }
  FUN_10bd37a78();
  *param_3 = (int)(param_1 + lVar1);
  return param_1 + lVar1;
}



/* Entry: 10bd0d4e8; end: 10bd0d50b;  */

undefined8 FUN_10bd0d4e8(undefined8 param_1)

{
  func_0x000107c3a718();
  return param_1;
}



/* Entry: 10bd0d50c; end: 10bd0d50f;  */

undefined8 FUN_10bd0d50c(undefined8 param_1)

{
  func_0x000107c3a718();
  return param_1;
}



/* Entry: 10bd0d510; end: 10bd0d523;  */

void FUN_10bd0d510(void)

{
  FUN_10bd0d4e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bd0d524; end: 10bd0d593;  */

void FUN_10bd0d524(void)

{
  Hint_Prefetch(0x113406cf0,0,0,0);
  Hint_Prefetch(PTR_DAT_113406cf0,0,0,0);
  return;
}



/* Entry: 10bd0d594; end: 10bd0d5df;  */

long * FUN_10bd0d594(long *param_1,long *param_2,long *param_3)

{
  int *piVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  uint uVar7;
  long unaff_x20;
  uint unaff_w21;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  func_0x00010bd156dc();
  if ((unaff_w21 & 1) != 0) {
    func_0x00010bd155f0();
    param_3 = param_1;
  }
  if ((unaff_w21 >> 1 & 1) != 0) {
    func_0x00010bd155e4();
    param_3 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_3;
  }
  func_0x00010bd156f0();
  lVar10 = 0;
  plVar3 = param_1;
  do {
    if ((int)((ulong)(param_1[1] - *param_1) >> 4) <= lVar10) {
      return param_2;
    }
    piVar1 = (int *)(*param_1 + lVar10 * 0x10);
    func_0x00010bd3caf8();
    plVar6 = plVar3;
    param_2 = plVar3;
    switch(piVar1[1]) {
    case 0:
      plVar6 = *(long **)(piVar1 + 2);
      uVar4 = (ulong)(uint)(*piVar1 << 3);
      func_0x00010bd3c9d8(uVar4);
      func_0x000107c280ac(plVar6,uVar4);
      param_2 = plVar6;
      break;
    case 1:
      iVar2 = piVar1[2];
      plVar6 = (long *)(ulong)(*piVar1 << 3 | 5);
      func_0x00010bd3c9d8();
      *(int *)plVar6 = iVar2;
      param_2 = (long *)((long)plVar6 + 4);
      break;
    case 2:
      lVar8 = *(long *)(piVar1 + 2);
      plVar6 = (long *)(ulong)(*piVar1 << 3 | 1);
      func_0x00010bd3c9d8();
      *plVar6 = lVar8;
      param_2 = plVar6 + 1;
      break;
    case 3:
      iVar2 = *piVar1;
      lVar8 = *(long *)(piVar1 + 2);
      lVar9 = (long)*(char *)(lVar8 + 0x17);
      if ((-1 < lVar9) || (lVar9 = *(long *)(lVar8 + 8), lVar9 < 0x80)) {
        lVar11 = *param_3;
        uVar7 = iVar2 << 3;
        plVar6 = (long *)(ulong)uVar7;
        func_0x000107c280a4();
        if (lVar9 <= lVar11 + ~((long)plVar3 + (long)(int)plVar6) + 0x10) {
          lVar8 = (long)plVar3 + 2;
          for (uVar7 = uVar7 | 2; 0x7f < uVar7; uVar7 = uVar7 >> 7) {
            *(byte *)(lVar8 + -2) = (byte)uVar7 | 0x80;
            lVar8 = lVar8 + 1;
          }
          *(byte *)(lVar8 + -2) = (byte)uVar7;
          *(char *)(lVar8 + -1) = (char)lVar9;
          func_0x00010bd3cc08();
          _memcpy();
          param_2 = (long *)(lVar8 + lVar9);
          break;
        }
      }
      plVar6 = param_3;
      func_0x00010b4d5120(param_3,iVar2,lVar8,plVar3);
      param_2 = plVar6;
      break;
    case 4:
      uVar4 = (ulong)(*piVar1 << 3 | 3);
      func_0x00010bd3c9d8(uVar4);
      uVar5 = *(undefined8 *)(piVar1 + 2);
      FUN_10bd377f0(uVar5,uVar4,param_3);
      func_0x00010bd3ca0c();
      plVar6 = (long *)(ulong)(*piVar1 << 3 | 4);
      func_0x000107c280a8(plVar6,uVar5);
      param_2 = plVar6;
    }
    lVar10 = lVar10 + 1;
    plVar3 = plVar6;
  } while( true );
}



/* Entry: 10bd0d5e0; end: 10bd0d64b;  */

ulong FUN_10bd0d5e0(long param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  ulong uVar3;
  long extraout_x8;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 3) == 0) {
    uVar3 = 0;
  }
  else {
    if ((uVar2 & 1) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6);
    }
    if ((uVar2 >> 1 & 1) != 0) {
      func_0x00010bd155a0();
      uVar3 = extraout_x8 + uVar3;
    }
  }
  puVar1 = (undefined4 *)(param_1 + 0x14);
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    *puVar1 = (int)uVar3;
    return uVar3;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_10bd36610();
  }
  else {
    param_1 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
  }
  FUN_10bd37a78();
  *puVar1 = (int)(param_1 + uVar3);
  return param_1 + uVar3;
}



/* Entry: 10bd0d64c; end: 10bd0d727;  */

void FUN_10bd0d64c(void)

{
  undefined1 in_ZR;
  ulong *puVar1;
  long *plVar2;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  long lVar3;
  ulong *unaff_x22;
  uint unaff_w23;
  
  func_0x00010bd14dc0();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x00010bd1521c();
  }
  func_0x00010bd15684();
  func_0x00010bd0d214();
  func_0x00010bd15260();
  func_0x00010bd0d1cc();
  func_0x00010bd15678();
  func_0x00010bd0d1e4();
  FUN_10bd0db80(unaff_x21 + 0x60,unaff_x20 + 0x60);
  func_0x00010bd0d214(unaff_x21 + 0x78,unaff_x20 + 0x78);
  func_0x00010bd0db98(unaff_x21 + 0x90,unaff_x20 + 0x90);
  func_0x00010bd0dbb0(unaff_x21 + 0xa8,unaff_x20 + 0xa8);
  puVar1 = (ulong *)(unaff_x21 + 0xc0);
  plVar2 = (long *)(unaff_x20 + 0xc0);
  func_0x00010598fce8();
  func_0x00010bd1566c();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x00010bd150b8(*(undefined8 *)(unaff_x20 + 0xd8));
      if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
        func_0x00010bd1516c();
      }
      puVar1 = (ulong *)(unaff_x21 + 0xd8);
      func_0x00010bd150f0();
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      puVar1 = *(ulong **)(unaff_x21 + 0xe0);
      plVar2 = *(long **)(unaff_x20 + 0xe0);
      if (puVar1 == (ulong *)0x0) {
        puVar1 = unaff_x22;
        func_0x00010bd144d0();
        *(ulong **)(unaff_x21 + 0xe0) = puVar1;
      }
      else {
        FUN_10bd10198();
      }
    }
  }
  func_0x00010bd14e5c();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010bd14ecc();
    if ((*puVar1 & 1) == 0) {
      func_0x00010bd2b26c();
    }
    if (0 < (int)((ulong)(plVar2[1] - *plVar2) >> 4)) {
      func_0x00010bd374f4();
      for (lVar3 = 0; (long)unaff_x22 * 0x10 - lVar3 != 0; lVar3 = lVar3 + 0x10) {
        func_0x00010bd37570();
        func_0x00010bd375bc();
      }
    }
    return;
  }
  return;
}



/* Entry: 10bd0d728; end: 10bd0d80f;  */

void FUN_10bd0d728(ulong *param_1)

{
  char in_NG;
  char in_OV;
  undefined1 uVar1;
  ulong extraout_x8;
  long lVar2;
  uint unaff_w20;
  long lVar3;
  
  func_0x000107c31650(param_1 + 3);
  func_0x000107c3a76c();
  if (in_NG == in_OV) {
    func_0x0001053936e4(param_1 + 0xc);
  }
  func_0x000107c31650(param_1 + 0xf);
  if (0 < (int)param_1[0x13]) {
    func_0x0001053936e4(param_1 + 0x12);
  }
  uVar1 = (int)param_1[0x16] == 1;
  if (0 < (int)param_1[0x16]) {
    func_0x0001053936e4(param_1 + 0x15);
  }
  func_0x000107c282c0(param_1 + 0x18);
  func_0x00010bd15738();
  if (!(bool)uVar1) {
    if ((unaff_w20 & 1) != 0) {
      func_0x000106af6874(param_1 + 0x1b);
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      func_0x00010bd0d7c4(param_1[0x1c]);
    }
  }
  func_0x00010bd1529c();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*param_1 & 1) == 0) {
    func_0x00010bd2b26c();
  }
  else {
    param_1 = (ulong *)((*param_1 & 0xfffffffffffffffe) + 8);
  }
  if (*param_1 != param_1[1]) {
    lVar2 = (long)((param_1[1] - *param_1) * 0x10000000) >> 0x20;
    lVar3 = lVar2 + 1;
    lVar2 = lVar2 * 0x10;
    do {
      lVar2 = lVar2 + -0x10;
      FUN_10bd36708(*param_1 + lVar2);
      lVar3 = lVar3 + -1;
    } while (1 < lVar3);
    param_1[1] = *param_1;
    return;
  }
  return;
}



/* Entry: 10bd0d810; end: 10bd0da17;  */

/* WARNING: Removing unreachable block (ram,0x00010bd0d9b0) */

long * FUN_10bd0d810(long *param_1,long *param_2,long *param_3,long *param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  int extraout_w8;
  uint uVar8;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w22;
  long lVar9;
  int unaff_w23;
  long lVar10;
  undefined8 *unaff_x24;
  ulong uVar11;
  long lVar12;
  long lVar13;
  
  func_0x00010bd14e8c();
  uVar8 = *(uint *)(param_1 + 2);
  if ((uVar8 & 1) != 0) {
    func_0x00010bd14dec(*(undefined8 *)(unaff_x20 + 0xd8));
    param_4 = param_1;
  }
  func_0x00010bd1550c();
  while (unaff_w23 != unaff_w22) {
    func_0x00010bd14ce4(*unaff_x24);
    param_1 = (long *)0x2;
    func_0x00010bd150c8();
    func_0x00010bd1543c();
  }
  iVar2 = *(int *)(unaff_x20 + 0x38);
  while (iVar2 != 0) {
    func_0x00010bd14ce4(*(undefined8 *)(unaff_x20 + 0x30));
    param_1 = (long *)0x3;
    func_0x00010bd150c8();
    func_0x00010bd1543c();
  }
  iVar2 = *(int *)(unaff_x20 + 0x50);
  while (iVar2 != 0) {
    func_0x00010bd14ce4(*(undefined8 *)(unaff_x20 + 0x48));
    param_1 = (long *)0x4;
    func_0x00010bd150c8();
    func_0x00010bd1543c();
  }
  iVar2 = *(int *)(unaff_x20 + 0x68);
  while (iVar2 != 0) {
    func_0x00010bd14ce4(*(undefined8 *)(unaff_x20 + 0x60));
    param_1 = (long *)0x5;
    func_0x00010bd150c8();
    func_0x00010bd1543c();
  }
  iVar2 = *(int *)(unaff_x20 + 0x80);
  while (iVar2 != 0) {
    func_0x00010bd14ce4(*(undefined8 *)(unaff_x20 + 0x78));
    param_1 = (long *)0x6;
    func_0x00010bd150c8();
    func_0x00010bd1543c();
  }
  if ((uVar8 >> 1 & 1) != 0) {
    param_2 = *(long **)(unaff_x20 + 0xe0);
    param_3 = (long *)(ulong)*(uint *)((long)param_2 + 0x2c);
    param_1 = (long *)0x7;
    func_0x00010bd150c8();
    param_4 = param_1;
  }
  iVar2 = *(int *)(unaff_x20 + 0x98);
  while (iVar2 != 0) {
    func_0x00010bd14c28();
    param_1 = (long *)0x8;
    func_0x00010bd150c8();
    func_0x00010bd15288();
  }
  iVar2 = *(int *)(unaff_x20 + 0xb0);
  while (cVar4 = '\0', iVar2 != 0) {
    func_0x00010bd14c28();
    param_1 = (long *)0x9;
    func_0x00010bd150c8();
    func_0x00010bd15288();
  }
  cVar3 = '\0';
  for (uVar11 = (ulong)(*(uint *)(unaff_x20 + 200) &
                       ((int)*(uint *)(unaff_x20 + 200) >> 0x1f ^ 0xffffffffU)); uVar11 != 0;
      uVar11 = uVar11 - 1) {
    func_0x00010bd150d0();
    func_0x00010bd1518c();
    if (cVar3 == cVar4) {
      func_0x00010bd154fc();
      if (extraout_w8 < 0) {
        param_3 = (long *)*param_3;
      }
      func_0x00010bd14fbc();
      param_4 = (long *)0x0;
    }
    else {
      param_2 = (long *)0xa;
      param_1 = unaff_x19;
      func_0x00010b4d5120();
      param_4 = param_1;
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x00010bd14d2c();
  lVar12 = 0;
  plVar5 = param_1;
  do {
    if ((int)((ulong)(param_1[1] - *param_1) >> 4) <= lVar12) {
      return param_2;
    }
    piVar1 = (int *)(*param_1 + lVar12 * 0x10);
    func_0x00010bd3caf8();
    plVar7 = plVar5;
    param_2 = plVar5;
    switch(piVar1[1]) {
    case 0:
      plVar7 = *(long **)(piVar1 + 2);
      uVar11 = (ulong)(uint)(*piVar1 << 3);
      func_0x00010bd3c9d8(uVar11);
      func_0x000107c280ac(plVar7,uVar11);
      param_2 = plVar7;
      break;
    case 1:
      iVar2 = piVar1[2];
      plVar7 = (long *)(ulong)(*piVar1 << 3 | 5);
      func_0x00010bd3c9d8();
      *(int *)plVar7 = iVar2;
      param_2 = (long *)((long)plVar7 + 4);
      break;
    case 2:
      lVar9 = *(long *)(piVar1 + 2);
      plVar7 = (long *)(ulong)(*piVar1 << 3 | 1);
      func_0x00010bd3c9d8();
      *plVar7 = lVar9;
      param_2 = plVar7 + 1;
      break;
    case 3:
      iVar2 = *piVar1;
      lVar9 = *(long *)(piVar1 + 2);
      lVar10 = (long)*(char *)(lVar9 + 0x17);
      if ((-1 < lVar10) || (lVar10 = *(long *)(lVar9 + 8), lVar10 < 0x80)) {
        lVar13 = *param_3;
        uVar8 = iVar2 << 3;
        plVar7 = (long *)(ulong)uVar8;
        func_0x000107c280a4();
        if (lVar10 <= lVar13 + ~((long)plVar5 + (long)(int)plVar7) + 0x10) {
          lVar9 = (long)plVar5 + 2;
          for (uVar8 = uVar8 | 2; 0x7f < uVar8; uVar8 = uVar8 >> 7) {
            *(byte *)(lVar9 + -2) = (byte)uVar8 | 0x80;
            lVar9 = lVar9 + 1;
          }
          *(byte *)(lVar9 + -2) = (byte)uVar8;
          *(char *)(lVar9 + -1) = (char)lVar10;
          func_0x00010bd3cc08();
          _memcpy();
          param_2 = (long *)(lVar9 + lVar10);
          break;
        }
      }
      plVar7 = param_3;
      func_0x00010b4d5120(param_3,iVar2,lVar9,plVar5);
      param_2 = plVar7;
      break;
    case 4:
      uVar11 = (ulong)(*piVar1 << 3 | 3);
      func_0x00010bd3c9d8(uVar11);
      uVar6 = *(undefined8 *)(piVar1 + 2);
      FUN_10bd377f0(uVar6,uVar11,param_3);
      func_0x00010bd3ca0c();
      plVar7 = (long *)(ulong)(*piVar1 << 3 | 4);
      func_0x000107c280a8(plVar7,uVar6);
      param_2 = plVar7;
    }
    lVar12 = lVar12 + 1;
    plVar5 = plVar7;
  } while( true );
}



/* Entry: 10bd0da18; end: 10bd0db7f;  */

/* WARNING: Removing unreachable block (ram,0x00010bd0daf4) */
/* WARNING: Removing unreachable block (ram,0x00010bd0dab0) */
/* WARNING: Removing unreachable block (ram,0x00010bd0da6c) */
/* WARNING: Removing unreachable block (ram,0x00010bd0da8c) */
/* WARNING: Removing unreachable block (ram,0x00010bd0dad0) */
/* WARNING: Removing unreachable block (ram,0x00010bd0db18) */

long FUN_10bd0da18(ulong param_1,undefined8 param_2,undefined4 *param_3)

{
  long lVar1;
  ulong *puVar2;
  uint uVar3;
  int iVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long extraout_x8;
  ulong uVar8;
  long unaff_x19;
  
  uVar7 = (undefined4)((ulong)param_2 >> 0x20);
  uVar6 = (undefined4)param_2;
  func_0x00010bd153f4();
  uVar8 = *(ulong *)(extraout_x8 + 0x18);
  iVar4 = *(int *)(extraout_x8 + 0x20);
  uVar5 = (uVar8 & 1) == 0;
  puVar2 = (ulong *)(extraout_x8 + 0x18);
  if (!(bool)uVar5) {
    puVar2 = (ulong *)(uVar8 + 7);
  }
  while (((long)iVar4 & 0x1fffffffffffffffU) != 0) {
    param_1 = *puVar2;
    func_0x00010bd0d1b0();
    func_0x00010bd15228();
    puVar2 = puVar2 + 1;
  }
  func_0x00010bd14ca4();
  func_0x00010bd14ca4();
  func_0x00010bd14ca4();
  func_0x00010bd14ca4();
  func_0x00010bd14ca4();
  func_0x00010bd14ca4();
  uVar3 = *(uint *)(unaff_x19 + 200);
  while ((uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU)) != 0) {
    func_0x00010bd14e70();
    func_0x00010bd15308();
  }
  func_0x00010bd15690();
  if (!(bool)uVar5) {
    if ((unaff_x19 + 0xc0U & 1) != 0) {
      func_0x00010bd150f8(*(undefined8 *)(unaff_x19 + 0xd8));
      func_0x00010bd15180();
    }
    if (((uint)(unaff_x19 + 0xc0U) >> 1 & 1) != 0) {
      param_1 = *(ulong *)(unaff_x19 + 0xe0);
      FUN_10bd1037c();
      func_0x00010bd14c68();
    }
  }
  func_0x00010bd14f84();
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    *param_3 = uVar6;
    return CONCAT44(uVar7,uVar6);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_10bd36610();
  }
  else {
    param_1 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
  }
  FUN_10bd37a78();
  lVar1 = param_1 + CONCAT44(uVar7,uVar6);
  *param_3 = (int)lVar1;
  return lVar1;
}



/* Entry: 10bd0db80; end: 10bd0dbdf;  */

void FUN_10bd0db80(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long *unaff_x19;
  int unaff_w20;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *unaff_x25;
  long unaff_x26;
  
  if (*(int *)(param_2 + 8) == 0) {
    return;
  }
  func_0x000107c39c98();
  plVar2 = param_1;
  func_0x000107c39ca8();
  func_0x000107c39cb0();
  puVar4 = unaff_x25;
  if (0 < (int)plVar2) {
    func_0x00010b4d38f4();
    param_1 = param_1 + (int)plVar2;
    puVar4 = unaff_x25 + (int)plVar2;
  }
  lVar3 = unaff_x19[2];
  for (; iVar1 = (int)plVar2, puVar4 < unaff_x25 + unaff_x26; puVar4 = puVar4 + 1) {
    plVar2 = (long *)lVar3;
    FUN_10bd14500(lVar3,*puVar4);
    *param_1 = (long)plVar2;
    param_1 = param_1 + 1;
  }
  func_0x000107c39ca0();
  if (iVar1 < unaff_w20) {
    *(int *)(*unaff_x19 + -1) = unaff_w20;
  }
  return;
}



/* Entry: 10bd0dbe0; end: 10bd0dc0b;  */

undefined8 FUN_10bd0dbe0(undefined8 param_1)

{
  func_0x000107c3a718();
  func_0x000107c3a734();
  func_0x000107c3a750();
  return param_1;
}



/* Entry: 10bd0dc0c; end: 10bd0dc0f;  */

undefined8 FUN_10bd0dc0c(undefined8 param_1)

{
  func_0x000107c3a718();
  func_0x000107c3a734();
  func_0x000107c3a750();
  return param_1;
}



/* Entry: 10bd0dc10; end: 10bd0dc23;  */

void FUN_10bd0dc10(void)

{
  FUN_10bd0dbe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bd0dc24; end: 10bd0dc2f;  */

void FUN_10bd0dc24(void)

{
  Hint_Prefetch(0x113407048,0,0,0);
  Hint_Prefetch(PTR_DAT_113407048,0,0,0);
  return;
}



/* Entry: 10bd0dc30; end: 10bd0dce3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10bd0dc30(ulong *param_1,long *param_2,uint param_3)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long lVar2;
  long unaff_x22;
  
  func_0x00010bd151f8();
  uVar1 = *(uint *)(param_2 + 2);
  if ((uVar1 & 0x1f) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010bd14f38(*(undefined8 *)(unaff_x20 + 0x18));
      if ((param_3 & 1) != 0) {
        func_0x00010bd1516c();
      }
      param_1 = (ulong *)(unaff_x19 + 0x18);
      func_0x00010bd150f0();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010bd152c8(*(undefined8 *)(unaff_x20 + 0x20));
      if ((param_3 & 1) != 0) {
        func_0x00010bd1516c();
      }
      param_1 = (ulong *)(unaff_x19 + 0x20);
      func_0x00010bd150f0();
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined4 *)(unaff_x19 + 0x28) = *(undefined4 *)(unaff_x20 + 0x28);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      *(undefined1 *)(unaff_x19 + 0x2c) = *(undefined1 *)(unaff_x20 + 0x2c);
    }
    if ((uVar1 >> 4 & 1) != 0) {
      *(undefined1 *)(unaff_x19 + 0x2d) = *(undefined1 *)(unaff_x20 + 0x2d);
    }
  }
  func_0x00010bd14f4c();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010bd14fa0();
    if ((*param_1 & 1) == 0) {
      func_0x00010bd2b26c();
    }
    if (0 < (int)((ulong)(param_2[1] - *param_2) >> 4)) {
      func_0x00010bd374f4();
      for (lVar2 = 0; unaff_x22 * 0x10 - lVar2 != 0; lVar2 = lVar2 + 0x10) {
        func_0x00010bd37570();
        func_0x00010bd375bc();
      }
    }
    return;
  }
  return;
}



/* Entry: 10bd0dce4; end: 10bd0dd33;  */

void FUN_10bd0dce4(void)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long lVar1;
  ulong *unaff_x19;
  uint unaff_w20;
  long lVar2;
  
  func_0x00010bd1520c();
  if (!(bool)in_ZR) {
    if ((unaff_w20 & 1) != 0) {
      func_0x00010bd15278();
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      func_0x00010bd155b4();
    }
  }
  if ((unaff_w20 & 0x1c) != 0) {
    *(undefined2 *)((long)unaff_x19 + 0x2c) = 0;
    *(undefined4 *)(unaff_x19 + 5) = 0;
  }
  func_0x00010bd1529c();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    func_0x00010bd2b26c();
  }
  else {
    unaff_x19 = (ulong *)((*unaff_x19 & 0xfffffffffffffffe) + 8);
  }
  if (*unaff_x19 != unaff_x19[1]) {
    lVar1 = (long)((unaff_x19[1] - *unaff_x19) * 0x10000000) >> 0x20;
    lVar2 = lVar1 + 1;
    lVar1 = lVar1 * 0x10;
    do {
      lVar1 = lVar1 + -0x10;
      FUN_10bd36708(*unaff_x19 + lVar1);
      lVar2 = lVar2 + -1;
    } while (1 < lVar2);
    unaff_x19[1] = *unaff_x19;
    return;
  }
  return;
}



/* Entry: 10bd0dd34; end: 10bd0de6b;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_10bd0dd34(long *param_1,long *param_2,long *param_3,long *param_4)

{
  int *piVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  uint uVar7;
  long unaff_x20;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  func_0x00010bd14e8c();
  uVar7 = *(uint *)(param_1 + 2);
  if ((uVar7 >> 2 & 1) != 0) {
    param_2 = (long *)(ulong)*(uint *)(unaff_x20 + 0x28);
    func_0x00010bd153a0();
    func_0x000107c282e4();
    param_4 = param_1;
  }
  if ((uVar7 & 1) != 0) {
    func_0x00010bd14f18(*(undefined8 *)(unaff_x20 + 0x18));
    param_4 = param_1;
  }
  if ((uVar7 >> 1 & 1) != 0) {
    func_0x00010bd14fd0(*(undefined8 *)(unaff_x20 + 0x20));
    param_4 = param_1;
  }
  if ((uVar7 >> 3 & 1) != 0) {
    func_0x00010bd14e28();
    param_2 = param_1;
    func_0x00010bd152dc();
    func_0x00010bd14dfc();
    param_4 = param_1;
  }
  if ((uVar7 >> 4 & 1) != 0) {
    func_0x00010bd14e28();
    param_2 = param_1;
    func_0x00010bd15428();
    func_0x00010bd14dfc();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x00010bd14d2c();
  lVar10 = 0;
  plVar3 = param_1;
  do {
    if ((int)((ulong)(param_1[1] - *param_1) >> 4) <= lVar10) {
      return param_2;
    }
    piVar1 = (int *)(*param_1 + lVar10 * 0x10);
    func_0x00010bd3caf8();
    plVar6 = plVar3;
    param_2 = plVar3;
    switch(piVar1[1]) {
    case 0:
      plVar6 = *(long **)(piVar1 + 2);
      uVar4 = (ulong)(uint)(*piVar1 << 3);
      func_0x00010bd3c9d8(uVar4);
      func_0x000107c280ac(plVar6,uVar4);
      param_2 = plVar6;
      break;
    case 1:
      iVar2 = piVar1[2];
      plVar6 = (long *)(ulong)(*piVar1 << 3 | 5);
      func_0x00010bd3c9d8();
      *(int *)plVar6 = iVar2;
      param_2 = (long *)((long)plVar6 + 4);
      break;
    case 2:
      lVar8 = *(long *)(piVar1 + 2);
      plVar6 = (long *)(ulong)(*piVar1 << 3 | 1);
      func_0x00010bd3c9d8();
      *plVar6 = lVar8;
      param_2 = plVar6 + 1;
      break;
    case 3:
      iVar2 = *piVar1;
      lVar8 = *(long *)(piVar1 + 2);
      lVar9 = (long)*(char *)(lVar8 + 0x17);
      if ((-1 < lVar9) || (lVar9 = *(long *)(lVar8 + 8), lVar9 < 0x80)) {
        lVar11 = *param_3;
        uVar7 = iVar2 << 3;
        plVar6 = (long *)(ulong)uVar7;
        func_0x000107c280a4();
        if (lVar9 <= lVar11 + ~((long)plVar3 + (long)(int)plVar6) + 0x10) {
          lVar8 = (long)plVar3 + 2;
          for (uVar7 = uVar7 | 2; 0x7f < uVar7; uVar7 = uVar7 >> 7) {
            *(byte *)(lVar8 + -2) = (byte)uVar7 | 0x80;
            lVar8 = lVar8 + 1;
          }
          *(byte *)(lVar8 + -2) = (byte)uVar7;
          *(char *)(lVar8 + -1) = (char)lVar9;
          func_0x00010bd3cc08();
          _memcpy();
          param_2 = (long *)(lVar8 + lVar9);
          break;
        }
      }
      plVar6 = param_3;
      func_0x00010b4d5120(param_3,iVar2,lVar8,plVar3);
      param_2 = plVar6;
      break;
    case 4:
      uVar4 = (ulong)(*piVar1 << 3 | 3);
      func_0x00010bd3c9d8(uVar4);
      uVar5 = *(undefined8 *)(piVar1 + 2);
      FUN_10bd377f0(uVar5,uVar4,param_3);
      func_0x00010bd3ca0c();
      plVar6 = (long *)(ulong)(*piVar1 << 3 | 4);
      func_0x000107c280a8(plVar6,uVar5);
      param_2 = plVar6;
    }
    lVar10 = lVar10 + 1;
    plVar3 = plVar6;
  } while( true );
}



/* Entry: 10bd0de6c; end: 10bd0de97;  */

undefined8 * FUN_10bd0de6c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_110d9c480;
  param_1[1] = param_2;
  FUN_10bd0de98();
  return param_1;
}



/* Entry: 10bd0de98; end: 10bd0debf;  */

void FUN_10bd0de98(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x40) = param_2;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = param_2;
  *(undefined4 *)(param_1 + 0x68) = 1;
  *(undefined8 *)(param_1 + 0x60) = 0;
  return;
}



/* Entry: 10bd0dec0; end: 10bd0df5b;  */

void FUN_10bd0dec0(void)

{
  long lVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  
  func_0x00010bd14e08();
  func_0x00010bd15248(&PTR_FUN_110d9c480);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010bd14e1c();
  }
  func_0x00010bd14d54();
  func_0x00010bd13a58(unaff_x22 + 0x20);
  lVar1 = unaff_x19 + 0x48;
  func_0x00010bd13a78();
  func_0x00010bd14e40();
  if ((*(byte *)(unaff_x19 + 0x28) & 1) == 0) {
    lVar1 = 0;
  }
  else {
    func_0x00010bd152a8();
  }
  *(long *)(unaff_x19 + 0x60) = lVar1;
  *(undefined4 *)(unaff_x19 + 0x68) = *(undefined4 *)(unaff_x20 + 0x68);
  return;
}



/* Entry: 10bd0df5c; end: 10bd0df87;  */

undefined8 FUN_10bd0df5c(undefined8 param_1)

{
  func_0x000107c3a718();
  FUN_10bd0df88(param_1);
  return param_1;
}



/* Entry: 10bd0df88; end: 10bd0dfb7;  */

long * FUN_10bd0df88(long param_1)

{
  char cVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (*(long *)(param_1 + 0x60) != 0) {
    FUN_10bd12650();
  }
  __ZdlPv();
  func_0x000107c31644(param_1 + 0x48);
  FUN_10bd13a98(param_1 + 0x30);
  if (*(long *)(param_1 + 0x10) == 0) {
    puVar3 = *(undefined8 **)(param_1 + 0x20);
    if ((long)*(short *)(param_1 + 0x1a) < 0) {
      lVar4 = puVar3[1];
      lVar2 = *(long *)*puVar3;
      cVar1 = *(char *)(lVar4 + 10);
      while (lVar2 != lVar4 || cVar1 != '\0') {
        func_0x000107c30280(lVar2 + 0x18);
        func_0x000107c398e8();
      }
    }
    else {
      for (lVar4 = (long)*(short *)(param_1 + 0x1a) << 5; lVar4 != 0; lVar4 = lVar4 + -0x20) {
        func_0x000107c30280(puVar3 + 1);
        puVar3 = puVar3 + 4;
      }
    }
    if (*(short *)(param_1 + 0x1a) < 0) {
      if (*(long *)(param_1 + 0x20) != 0) {
        func_0x000107c302a0();
      }
      func_0x000107c60e14();
    }
    else {
      func_0x000107c60e10();
    }
  }
  return (long *)(param_1 + 0x10);
}



/* Entry: 10bd0dfb8; end: 10bd0dfbb;  */

undefined8 FUN_10bd0dfb8(undefined8 param_1)

{
  func_0x000107c3a718();
  FUN_10bd0df88(param_1);
  return param_1;
}


