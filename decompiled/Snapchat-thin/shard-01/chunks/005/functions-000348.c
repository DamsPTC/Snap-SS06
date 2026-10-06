/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10115a6c0; end: 10115a6d3;  */

bool FUN_10115a6c0(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10115a6d4; end: 10115a983;  */

void FUN_10115a6d4(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 10115a984; end: 10115ae3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10115a984(undefined8 *param_1)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long extraout_x8;
  ulong uVar10;
  ulong uVar11;
  long extraout_x12;
  long unaff_x20;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_a8;
  undefined1 auStack_a0 [24];
  long lStack_88;
  undefined auStack_80 [24];
  undefined8 uStack_68;
  
  lVar3 = 0;
  func_0x000107c5ed50();
  lStack_d8 = *(long *)(lVar3 + -8);
  lStack_d0 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_d8 + 0x40));
  lVar15 = (long)&lStack_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = _DAT_112d603e8;
  uStack_68 = *param_1;
  uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112d603e8);
  *(undefined8 *)(unaff_x20 + _DAT_112d603e8) = uStack_68;
  FUN_101163c70(&uStack_68,auStack_a0,0x112d60518,&UNK_10d926a60);
  func_0x000107c61170(uVar12);
  uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112d603f0);
  *(undefined8 *)(unaff_x20 + _DAT_112d603f0) = param_1[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar12);
  lVar3 = _DAT_112d603d8;
  uVar13 = param_1[4];
  puVar8 = auStack_80;
  func_0x000107c61428(unaff_x20 + _DAT_112d603d8,puVar8,1,0);
  uVar12 = *(undefined8 *)(unaff_x20 + lVar3);
  *(undefined8 *)(unaff_x20 + lVar3) = uVar13;
  func_0x000107c61434(uVar13);
  func_0x000107c6142c(uVar12);
  lVar16 = param_1[2];
  lVar14 = *(long *)(lVar16 + 0x10);
  func_0x00010115970c();
  if (lVar14 == 0) {
    func_0x000107c550d8(uVar12);
    func_0x000107c61170(uVar12);
  }
  else {
    puVar8 = PTR___sSSN_11034da80;
    func_0x000107c5fc48(lVar16,PTR___sSSN_11034da80);
    func_0x000107c59e54(uVar12);
    func_0x000107c61170(uVar12);
    func_0x000107c61170(lVar16);
    uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112d603c0);
    uVar10 = *(ulong *)(unaff_x20 + lVar3);
    if (uVar10 >> 0x3e != 0) {
      uVar11 = uVar10 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar10) {
        uVar11 = uVar10;
      }
      func_0x000107c60480(uVar11);
    }
    func_0x000107c550d8(uVar12);
  }
  bVar1 = *(byte *)(param_1 + 3);
  if (bVar1 < 2) {
    if (bVar1 == 0) {
LAB_10115ab40:
      func_0x0001011657a8();
      goto LAB_10115ab44;
    }
  }
  else if (bVar1 == 2) goto LAB_10115ab40;
  func_0x000101165874();
LAB_10115ab44:
  puVar9 = puVar8;
  func_0x000107c5fadc();
  func_0x000107c6142c(puVar8);
  func_0x000107c59e18();
  func_0x000107c61170(uVar12);
  func_0x00010115978c();
  uVar13 = uVar12;
  FUN_101165adc();
  func_0x000107c5fadc();
  func_0x000107c6142c(puVar9);
  func_0x000107c59e18(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar13);
  *(byte *)(unaff_x20 + _DAT_112d603f8) = bVar1;
  lVar3 = *(long *)(unaff_x20 + lVar4);
  if (lVar3 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    func_0x000107c61174();
    lVar4 = lVar3;
    func_0x000107c5b6b4();
    func_0x000107c61180();
    func_0x000107c5ff64(lVar15 - extraout_x12);
    func_0x000107c61170(lVar4);
    func_0x000107c5ed4c(auStack_a0);
    puVar2 = PTR___sypN_11034f1a8;
    puVar9 = PTR___sSSN_11034da80;
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    while (lStack_88 != 0) {
      puVar5 = &uStack_c0;
      func_0x000107c6147c(puVar5,auStack_a0,puVar2 + 8,puVar9,6);
      uVar12 = uStack_b8;
      if (((ulong)puVar5 & 1) != 0) {
        uVar13 = uStack_c0;
        func_0x000107c5fadc(uStack_c0,uStack_b8);
        func_0x000107c6142c(uVar12);
        lVar4 = lVar3;
        func_0x000107c5b5d4(lVar3);
        func_0x000107c61180();
        func_0x000107c61170(uVar13);
        func_0x000107c5ff64(lVar15);
        func_0x000107c61170(lVar4);
        func_0x000107c5ed4c(&uStack_c0);
        if (lStack_a8 != 0) {
          uVar12 = 0;
          func_0x000103a2db6c(0);
          do {
            puVar5 = &uStack_c8;
            func_0x000107c6147c(puVar5,&uStack_c0,puVar2 + 8,uVar12,6);
            if (((ulong)puVar5 & 1) != 0) {
              uVar13 = uStack_c8;
              func_0x000107c61174();
              puVar7 = puVar8;
              func_0x000107c61550();
              if ((((int)puVar7 == 0) || ((long)puVar8 < 0)) ||
                 (puVar7 = puVar8, ((ulong)puVar8 >> 0x3e & 1) != 0)) {
                if ((ulong)puVar8 >> 0x3e == 0) {
                  puVar6 = *(undefined **)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
                }
                else {
                  puVar6 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
                  if ((undefined *)0x7fffffffffffffff < puVar8) {
                    puVar6 = puVar8;
                  }
                  func_0x000107c60480(puVar6);
                }
                puVar7 = (undefined *)0x0;
                FUN_101136a20(0,puVar6 + 1,1,puVar8);
              }
              uVar11 = (ulong)puVar7 & 0xffffffffffffff8;
              uVar10 = *(ulong *)(uVar11 + 0x10);
              lVar4 = uVar10 + 1;
              puVar8 = puVar7;
              if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar10) {
                puVar8 = (undefined *)(ulong)(1 < *(ulong *)(uVar11 + 0x18));
                lStack_e0 = lVar4;
                FUN_101136a20(puVar8,lVar4,1,puVar7);
                uVar11 = (ulong)puVar8 & 0xffffffffffffff8;
                lVar4 = lStack_e0;
              }
              *(long *)(uVar11 + 0x10) = lVar4;
              *(undefined8 *)(uVar11 + uVar10 * 8 + 0x20) = uVar13;
              func_0x000107c61170(uVar13);
            }
            func_0x000107c5ed4c(&uStack_c0);
          } while (lStack_a8 != 0);
        }
        (**(code **)(lStack_d8 + 8))(lVar15,lStack_d0);
      }
      func_0x000107c5ed4c(auStack_a0);
    }
    (**(code **)(lStack_d8 + 8))(lVar15 - extraout_x12,lStack_d0);
    func_0x000107c61170(lVar3);
  }
  uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112d603e0);
  *(undefined **)(unaff_x20 + _DAT_112d603e0) = puVar8;
  func_0x000107c6142c(uVar12);
  func_0x000107c4fd7c(*(undefined8 *)(unaff_x20 + _DAT_112d603b0));
  return;
}



/* Entry: 10115ae3c; end: 10115aea3;  */

void FUN_10115ae3c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = param_2;
  func_0x000107c614f0();
  auStack_50[0] = param_2;
  uStack_38 = uVar3;
  func_0x000107c6157c(uVar2);
  func_0x000107c615f0(param_2);
  (*pcVar1)(auStack_50);
  func_0x000107c61574(uVar2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10115aea4; end: 10115b22b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_10115aea4(undefined8 param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_x20;
  ulong auStack_78 [3];
  undefined1 auStack_60 [32];
  
  uVar9 = unaff_x20;
  func_0x000107c44c68();
  func_0x000107c61180();
  if (uVar9 != 0) {
    uVar10 = uVar9;
    func_0x000107c51ac8();
    func_0x000107c61180();
    func_0x000107c61170();
    if (uVar10 != 0) {
      uVar2 = uVar10;
      func_0x000107c5c82c();
      func_0x000107c61180();
      func_0x000107c61170();
      uVar9 = uVar10;
      if (uVar2 != 0) {
        uVar10 = uVar2;
        uVar9 = param_2;
        func_0x000107c5faec();
        func_0x000107c61170(uVar2);
        func_0x000107c5fb5c(uVar10,uVar9);
        func_0x000107c6142c();
        if (0 < (long)uVar10) {
          func_0x000107c5efe4();
          lVar3 = _DAT_112d603d8;
          func_0x000107c61428(unaff_x20 + _DAT_112d603d8,auStack_60,0,0);
          uVar10 = *(ulong *)(unaff_x20 + lVar3);
          if (uVar10 >> 0x3e == 0) {
            uVar2 = *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10);
          }
          else {
            uVar2 = uVar10 & 0xffffffffffffff8;
            if (0x7fffffffffffffff < uVar10) {
              uVar2 = uVar10;
            }
            func_0x000107c60480();
          }
          if ((long)uVar2 <= (long)uVar9) {
            return 0;
          }
          func_0x000107c5efe4();
          func_0x000107c61428(unaff_x20 + lVar3,auStack_78,0x20,0);
          uVar9 = *(ulong *)(unaff_x20 + lVar3);
          if ((uVar9 & 0xc000000000000001) == 0) {
            if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x10115b228);
              (*pcVar1)();
            }
            if (*(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10) <= uVar2) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x10115b22c);
              (*pcVar1)();
            }
            uVar2 = *(ulong *)(uVar9 + uVar2 * 8 + 0x20);
            func_0x000107c61174(uVar2);
          }
          else {
            FUN_10111c5a8(uVar2);
          }
          func_0x000107c614a8(auStack_78);
          return uVar2;
        }
      }
    }
  }
  func_0x000107c5eff4();
  if ((-1 < (long)uVar9) && (uVar9 < *(ulong *)(*(long *)(unaff_x20 + _DAT_112d603f0) + 0x10))) {
    uVar10 = *(ulong *)(*(long *)(unaff_x20 + _DAT_112d603f0) + uVar9 * 0x10 + 0x28);
    uVar9 = uVar10;
    func_0x000107c61434();
    func_0x000107c5efe4();
    if (uVar10 >> 0x3e == 0) {
      uVar2 = *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar2 = uVar10 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar10) {
        uVar2 = uVar10;
      }
      func_0x000107c60480();
    }
    if ((long)uVar9 < (long)uVar2) {
      func_0x000107c5efe4();
      if ((uVar10 & 0xc000000000000001) == 0) {
        if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10115b214);
          (*pcVar1)();
        }
        if (*(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10115b218);
          (*pcVar1)();
        }
        uVar9 = *(ulong *)(uVar10 + uVar9 * 8 + 0x20);
        func_0x000107c61174(uVar9);
      }
      else {
        FUN_10111c5a8();
      }
      func_0x000107c6142c(uVar10);
      return uVar9;
    }
    func_0x000107c6142c(uVar10);
  }
  lVar3 = *(long *)(unaff_x20 + _DAT_112d603e8);
  if (lVar3 == 0) {
    return 0;
  }
  func_0x000107c61174();
  lVar4 = lVar3;
  func_0x000107c5eff4();
  lVar5 = lVar3;
  FUN_10115b22c();
  if (lVar5 != 0) {
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar5);
    lVar5 = lVar3;
    func_0x000107c5b5d4();
    func_0x000107c61180();
    func_0x000107c61170();
    func_0x000107c5efe4();
    lVar6 = lVar5;
    func_0x000107c40808();
    if (lVar4 < lVar6) {
      func_0x000107c5efe4();
      lVar4 = lVar5;
      func_0x000107c4d9a4(lVar5);
      func_0x000107c61180();
      func_0x000107c60234(auStack_60);
      func_0x000107c615e8(lVar4);
      func_0x000107c61170(lVar5);
      func_0x000107c61170(lVar3);
      uVar7 = 0;
      func_0x000103a2db6c(0);
      puVar8 = auStack_78;
      func_0x000107c6147c(puVar8,auStack_60,PTR___sypN_11034f1a8 + 8,uVar7,6);
      if ((int)puVar8 == 0) {
        return 0;
      }
      return auStack_78[0];
    }
    func_0x000107c61170(lVar3);
    lVar3 = lVar5;
  }
  func_0x000107c61170(lVar3);
  return 0;
}



/* Entry: 10115b22c; end: 10115b327;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10115b22c(long param_1,long param_2)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  undefined1 auVar6 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [32];
  
  iVar2 = (int)&uStack_60;
  lVar5 = *(long *)(*(long *)(unaff_x20 + _DAT_112d603f0) + 0x10);
  lVar4 = param_1 - lVar5;
  if (SBORROW8(param_1,lVar5)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10115b328);
    (*pcVar1)();
  }
  if (-1 < lVar4) {
    lVar5 = param_2;
    func_0x000107c5b6b4();
    func_0x000107c61180();
    lVar3 = lVar5;
    func_0x000107c40808();
    func_0x000107c61170(lVar5);
    if (lVar4 < lVar3) {
      func_0x000107c5b6b4(param_2);
      func_0x000107c61180();
      lVar4 = param_2;
      func_0x000107c4d9a4();
      func_0x000107c61180();
      func_0x000107c61170(param_2);
      func_0x000107c60234(auStack_50,lVar4);
      func_0x000107c615e8(lVar4);
      func_0x000107c6147c(&uStack_60,auStack_50,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
      if (iVar2 == 0) {
        uStack_60 = 0;
        uStack_58 = 0;
      }
      goto LAB_10115b310;
    }
  }
  uStack_60 = 0;
  uStack_58 = 0;
LAB_10115b310:
  auVar6._8_8_ = uStack_58;
  auVar6._0_8_ = uStack_60;
  return auVar6;
}



/* Entry: 10115b328; end: 10115c013;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10115b328(long param_1,undefined8 param_2)

{
  byte *pbVar1;
  ulong uVar2;
  byte bVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long *plVar15;
  ulong uVar16;
  undefined8 uVar17;
  long extraout_x8;
  long lVar18;
  long lVar19;
  long extraout_x8_00;
  long lVar20;
  ulong uVar21;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long unaff_x20;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  long lVar29;
  long alStack_1a0 [4];
  ulong uStack_180;
  long lStack_178;
  long lStack_170;
  ulong uStack_168;
  undefined *puStack_150;
  undefined1 auStack_100 [24];
  long lStack_e8;
  undefined1 auStack_e0 [32];
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lVar22 = 0x112d604e8;
  puVar10 = &UNK_10d926a30;
  func_0x0001000285a8(0x112d604e8,&UNK_10d926a30);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar22 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar18 = (long)alStack_1a0 - extraout_x8;
  lVar7 = 0;
  func_0x000107c5eff8();
  lVar19 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar19 + 0x40));
  lVar20 = lVar18 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  alStack_1a0[3] = lVar20;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar21 = lVar20 - extraout_x12;
  uStack_180 = uVar21;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar20 = uVar21 - extraout_x12_00;
  lStack_170 = lVar20;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar21 = lVar20 - extraout_x12_01;
  uStack_168 = uVar21;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar29 = uVar21 - extraout_x12_02;
  lVar20 = unaff_x20;
  func_0x000107c44c68();
  func_0x000107c61180();
  if (lVar20 != 0) {
    lVar8 = lVar20;
    func_0x000107c51ac8();
    func_0x000107c61180();
    func_0x000107c61170(lVar20);
    if (lVar8 != 0) {
      lVar20 = lVar8;
      func_0x000107c5c82c();
      func_0x000107c61180();
      func_0x000107c61170(lVar8);
      if (lVar20 != 0) {
        lVar8 = lVar20;
        func_0x000107c5faec();
        func_0x000107c61170(lVar20);
        func_0x000107c5fb5c(lVar8,puVar10);
        func_0x000107c6142c(puVar10);
        lVar20 = _DAT_112d603d8;
        if (0 < lVar8) {
          func_0x000107c61428(unaff_x20 + _DAT_112d603d8,&lStack_90,0,0);
          uVar23 = *(ulong *)(unaff_x20 + lVar20);
          uVar21 = uVar23 & 0xffffffffffffff8;
          if (uVar23 >> 0x3e == 0) {
            uVar25 = *(ulong *)(uVar21 + 0x10);
          }
          else {
            uVar25 = uVar21;
            if (0x7fffffffffffffff < uVar23) {
              uVar25 = uVar23;
            }
            func_0x000107c60480();
          }
          uVar26 = *(ulong *)(param_1 + _DAT_112fcd610);
          uVar28 = ((ulong *)(param_1 + _DAT_112fcd610))[1];
          func_0x000107c61434(uVar23);
          if (uVar25 == 0) {
            puStack_150 = PTR___swiftEmptyArrayStorage_11034f1c8;
          }
          else {
            puStack_150 = PTR___swiftEmptyArrayStorage_11034f1c8;
            uVar24 = 0;
            do {
              while( true ) {
                if ((uVar23 & 0xc000000000000001) == 0) {
                  if (*(ulong *)(uVar21 + 0x10) <= uVar24) {
                    /* WARNING: Does not return */
                    pcVar5 = (code *)SoftwareBreakpoint(1,0x10115bffc);
                    (*pcVar5)();
                  }
                  uVar9 = *(ulong *)(uVar23 + uVar24 * 8 + 0x20);
                  func_0x000107c61174();
                }
                else {
                  uVar9 = uVar24;
                  FUN_10111c5a8(uVar24,uVar23);
                }
                uVar16 = uVar24 + 1;
                if (SCARRY8(uVar24,1)) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x10115bff8);
                  (*pcVar5)();
                }
                uVar27 = *(ulong *)(uVar9 + _DAT_112fcd610);
                uVar11 = ((ulong *)(uVar9 + _DAT_112fcd610))[1];
                if (((uVar27 == uVar26 && uVar11 == uVar28) ||
                    (func_0x000107c605b8(uVar27,uVar11,uVar26,uVar28,0), (uVar27 & 1) != 0)) &&
                   (func_0x000107c5efe4(), uVar24 != uVar27)) break;
                func_0x000107c61170(uVar9);
                uVar24 = uVar24 + 1;
                if (uVar16 == uVar25) goto LAB_10115bfb4;
              }
              func_0x000107c5efe0(lVar29,uVar24,0);
              puVar10 = puStack_150;
              func_0x000107c61558();
              if (((ulong)puVar10 & 1) == 0) {
                plVar15 = (long *)(puStack_150 + 0x10);
                puStack_150 = (undefined *)0x0;
                FUN_101161644(0,*plVar15 + 1,1);
              }
              uVar24 = *(ulong *)(puStack_150 + 0x10);
              if (*(ulong *)(puStack_150 + 0x18) >> 1 <= uVar24) {
                puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puStack_150 + 0x18));
                FUN_101161644(puVar10,uVar24 + 1,1,puStack_150);
                puStack_150 = puVar10;
              }
              *(ulong *)(puStack_150 + 0x10) = uVar24 + 1;
              (**(code **)(lVar19 + 0x20))
                        (puStack_150 +
                         *(long *)(lVar19 + 0x48) * uVar24 +
                         ((ulong)*(byte *)(lVar19 + 0x50) + 0x20 &
                         ((ulong)*(byte *)(lVar19 + 0x50) ^ 0xffffffffffffffff)),lVar29,lVar7);
              func_0x000107c61170(uVar9);
              uVar24 = uVar16;
            } while (uVar16 != uVar25);
          }
LAB_10115bfb4:
          func_0x000107c6142c(uVar23);
          return puStack_150;
        }
      }
    }
  }
  alStack_1a0[2] = _DAT_112d603f0;
  lVar20 = *(long *)(unaff_x20 + _DAT_112d603f0);
  lStack_178 = _DAT_112d603d0;
  uVar25 = *(ulong *)(lVar20 + 0x10);
  uVar21 = *(ulong *)(param_1 + _DAT_112fcd610);
  uVar23 = ((ulong *)(param_1 + _DAT_112fcd610))[1];
  alStack_1a0[1] = lVar22;
  func_0x000107c61434(lVar20);
  if (uVar25 == 0) {
    puStack_150 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar26 = 0;
    puStack_150 = PTR___swiftEmptyArrayStorage_11034f1c8;
    do {
      if (*(ulong *)(lVar20 + 0x10) <= uVar26) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10115bff0);
        (*pcVar5)();
      }
      pbVar1 = (byte *)(lVar20 + 0x20 + uVar26 * 0x10);
      bVar3 = *pbVar1;
      uVar24 = *(ulong *)(pbVar1 + 8);
      uVar28 = uVar24 & 0xffffffffffffff8;
      if (uVar24 >> 0x3e == 0) {
        uVar9 = *(ulong *)(uVar28 + 0x10);
      }
      else {
        uVar9 = uVar28;
        if ((uVar24 & 0x8000000000000000) != 0) {
          uVar9 = uVar24;
        }
        func_0x000107c60480();
      }
      uVar16 = uVar26 + 1;
      func_0x000107c61434(uVar24);
      uVar27 = 0;
      while (uVar9 != uVar27) {
        if ((uVar24 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar28 + 0x10) <= uVar27) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10115bfa0);
            (*pcVar5)();
          }
          uVar11 = *(ulong *)(uVar24 + uVar27 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar11 = uVar27;
          FUN_10111c5a8(uVar27,uVar24);
        }
        uVar12 = *(ulong *)(uVar11 + _DAT_112fcd610);
        uVar2 = ((ulong *)(uVar11 + _DAT_112fcd610))[1];
        if (uVar12 == uVar21 && uVar2 == uVar23) {
          func_0x000107c61170(uVar11);
LAB_10115b8e8:
          uVar9 = uStack_168;
          func_0x000107c5efe0(uStack_168,uVar27,uVar26);
          uVar13 = 0x112d604f0;
          FUN_101163d44(0x112d604f0,PTR___s10Foundation9IndexPathVMa_110350f00,
                        PTR___s10Foundation9IndexPathVSQAAMc_110350f10);
          uVar26 = uVar9;
          func_0x000107c5fab8(uVar9,param_2,lVar7,uVar13);
          lVar22 = lStack_178;
          if ((uVar26 & 1) == 0) {
            plVar15 = &lStack_90;
            func_0x000107c61428(unaff_x20 + lStack_178,plVar15,0x20,0);
            lVar22 = *(long *)(unaff_x20 + lVar22);
            if (*(long *)(lVar22 + 0x10) == 0) {
LAB_10115b998:
              func_0x000107c614a8(&lStack_90);
              if (uVar24 >> 0x3e == 0) {
                uVar28 = *(ulong *)(uVar28 + 0x10);
              }
              else {
                if ((uVar24 & 0x8000000000000000) != 0) {
                  uVar28 = uVar24;
                }
                func_0x000107c60480();
              }
            }
            else {
              uVar26 = (ulong)bVar3;
              FUN_1011626e0();
              if (((ulong)plVar15 & 1) == 0) goto LAB_10115b998;
              uVar28 = *(ulong *)(*(long *)(lVar22 + 0x38) + uVar26 * 8);
              func_0x000107c614a8(&lStack_90);
            }
            func_0x000107c6142c(uVar24);
            if ((long)uVar27 < (long)uVar28) {
              (**(code **)(lVar19 + 0x10))(lStack_170,uVar9,lVar7);
              puVar10 = puStack_150;
              func_0x000107c61558();
              if (((ulong)puVar10 & 1) == 0) {
                plVar15 = (long *)(puStack_150 + 0x10);
                puStack_150 = (undefined *)0x0;
                FUN_101161644(0,*plVar15 + 1,1);
              }
              uVar26 = *(ulong *)(puStack_150 + 0x10);
              if (*(ulong *)(puStack_150 + 0x18) >> 1 <= uVar26) {
                puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puStack_150 + 0x18));
                FUN_101161644(puVar10,uVar26 + 1,1,puStack_150);
                puStack_150 = puVar10;
              }
              *(ulong *)(puStack_150 + 0x10) = uVar26 + 1;
              (**(code **)(lVar19 + 0x20))
                        (puStack_150 +
                         *(long *)(lVar19 + 0x48) * uVar26 +
                         ((ulong)*(byte *)(lVar19 + 0x50) + 0x20 &
                         ((ulong)*(byte *)(lVar19 + 0x50) ^ 0xffffffffffffffff)),lStack_170,lVar7);
              (**(code **)(lVar19 + 8))(uVar9,lVar7);
            }
            else {
              (**(code **)(lVar19 + 8))(uVar9,lVar7);
            }
          }
          else {
            (**(code **)(lVar19 + 8))(uVar9,lVar7);
            func_0x000107c6142c(uVar24);
          }
          goto joined_r0x00010115b7b8;
        }
        func_0x000107c605b8(uVar12,uVar2,uVar21,uVar23,0);
        func_0x000107c61170(uVar11);
        if ((uVar12 & 1) != 0) goto LAB_10115b8e8;
        bVar6 = SCARRY8(uVar27,1);
        uVar27 = uVar27 + 1;
        if (bVar6) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10115bfa4);
          (*pcVar5)();
        }
      }
      func_0x000107c6142c(uVar24);
joined_r0x00010115b7b8:
      uVar26 = uVar16;
    } while (uVar16 != uVar25);
  }
  func_0x000107c6142c(lVar20);
  uVar25 = *(ulong *)(unaff_x20 + _DAT_112d603e8);
  if (uVar25 != 0) {
    func_0x000107c61174();
    uVar26 = uVar25;
    func_0x000107c5b6b4();
    func_0x000107c61180();
    func_0x000107c5ff64(lVar18);
    func_0x000107c61170(uVar26);
    iVar4 = *(int *)(alStack_1a0[1] + 0x24);
    *(undefined8 *)(lVar18 + iVar4) = 0;
    uVar14 = 0;
    func_0x000107c5ed50();
    uVar13 = 0x112d38ec0;
    FUN_101163d44(0x112d38ec0,PTR___s10Foundation25NSFastEnumerationIteratorVMa_110350880,
                  PTR___s10Foundation25NSFastEnumerationIteratorVStAAMc_110350890);
    lVar22 = 0;
LAB_10115bbc8:
    func_0x000107c601c0(auStack_100,uVar14,uVar13);
    if (lStack_e8 == 0) {
      func_0x000101163cb8(auStack_100,0x112d387f8,&UNK_10d902650);
      uStack_b8 = 0;
      lStack_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      lStack_a0 = 0;
    }
    else {
      func_0x000100102924(auStack_100,auStack_e0);
      lStack_c0 = lVar22;
      func_0x000100102924(auStack_e0,&uStack_b8);
      bVar6 = SCARRY8(lVar22,1);
      lVar22 = lVar22 + 1;
      if (bVar6) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10115bff4);
        (*pcVar5)();
      }
      *(long *)(lVar18 + iVar4) = lVar22;
    }
    lVar20 = lStack_c0;
    puVar10 = PTR___sypN_11034f1a8;
    uStack_88 = uStack_b8;
    lStack_90 = lStack_c0;
    uStack_78 = uStack_a8;
    uStack_80 = uStack_b0;
    lStack_70 = lStack_a0;
    if (lStack_a0 != 0) {
      plVar15 = &lStack_c0;
      func_0x000107c6147c(plVar15,&uStack_88,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
      uVar17 = uStack_b8;
      if (((ulong)plVar15 & 1) != 0) {
        lVar29 = lStack_c0;
        func_0x000107c5fadc(lStack_c0,uStack_b8);
        func_0x000107c6142c(uVar17);
        uVar26 = uVar25;
        func_0x000107c5b5d4();
        func_0x000107c61180();
        func_0x000107c61170(lVar29);
        uVar28 = uVar26;
        func_0x000107c3e15c();
        func_0x000107c61180();
        func_0x000107c61170(uVar26);
        uVar26 = uVar28;
        func_0x000107c5fc54(uVar28,puVar10 + 8);
        func_0x000107c61170(uVar28);
        uVar28 = uVar26;
        FUN_1011590e8();
        func_0x000107c6142c(uVar26);
        if (uVar28 != 0) {
          uVar26 = uVar28 & 0xffffffffffffff8;
          if (uVar28 >> 0x3e == 0) {
            uVar24 = *(ulong *)(uVar26 + 0x10);
          }
          else {
            uVar24 = uVar28;
            if (-1 < (long)uVar28) {
              uVar24 = uVar26;
            }
            func_0x000107c60480();
          }
          uVar9 = 0;
          while (uVar24 != uVar9) {
            if ((uVar28 & 0xc000000000000001) == 0) {
              if (*(ulong *)(uVar26 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x10115bfe8);
                (*pcVar5)();
              }
              uVar16 = *(ulong *)(uVar28 + uVar9 * 8 + 0x20);
              func_0x000107c61174();
            }
            else {
              uVar16 = uVar9;
              FUN_10111c5a8(uVar9,uVar28);
            }
            uVar27 = *(ulong *)(uVar16 + _DAT_112fcd610);
            uVar11 = ((ulong *)(uVar16 + _DAT_112fcd610))[1];
            if (uVar27 == uVar21 && uVar11 == uVar23) {
              func_0x000107c6142c(uVar28);
              func_0x000107c61170(uVar16);
LAB_10115bdc4:
              uVar26 = uStack_180;
              lVar29 = *(long *)(*(long *)(unaff_x20 + alStack_1a0[2]) + 0x10);
              if (SCARRY8(lVar20,lVar29)) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x10115c000);
                (*pcVar5)();
              }
              func_0x000107c5efe0(uStack_180,uVar9,lVar20 + lVar29);
              uVar17 = 0x112d604f0;
              FUN_101163d44(0x112d604f0,PTR___s10Foundation9IndexPathVMa_110350f00,
                            PTR___s10Foundation9IndexPathVSQAAMc_110350f10);
              uVar28 = uVar26;
              func_0x000107c5fab8(uVar26,param_2,lVar7,uVar17);
              if ((uVar28 & 1) == 0) {
                (**(code **)(lVar19 + 0x10))(alStack_1a0[3],uVar26,lVar7);
                puVar10 = puStack_150;
                func_0x000107c61558();
                if (((ulong)puVar10 & 1) == 0) {
                  plVar15 = (long *)(puStack_150 + 0x10);
                  puStack_150 = (undefined *)0x0;
                  FUN_101161644(0,*plVar15 + 1,1);
                }
                uVar26 = *(ulong *)(puStack_150 + 0x10);
                if (*(ulong *)(puStack_150 + 0x18) >> 1 <= uVar26) {
                  puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puStack_150 + 0x18));
                  FUN_101161644(puVar10,uVar26 + 1,1,puStack_150);
                  puStack_150 = puVar10;
                }
                *(ulong *)(puStack_150 + 0x10) = uVar26 + 1;
                (**(code **)(lVar19 + 0x20))
                          (puStack_150 +
                           *(long *)(lVar19 + 0x48) * uVar26 +
                           ((ulong)*(byte *)(lVar19 + 0x50) + 0x20 &
                           ((ulong)*(byte *)(lVar19 + 0x50) ^ 0xffffffffffffffff)),alStack_1a0[3],
                           lVar7);
                uVar26 = uStack_180;
              }
              (**(code **)(lVar19 + 8))(uVar26,lVar7);
              goto LAB_10115bbc8;
            }
            func_0x000107c605b8(uVar27,uVar11,uVar21,uVar23,0);
            func_0x000107c61170(uVar16);
            if ((uVar27 & 1) != 0) {
              func_0x000107c6142c(uVar28);
              goto LAB_10115bdc4;
            }
            bVar6 = SCARRY8(uVar9,1);
            uVar9 = uVar9 + 1;
            if (bVar6) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x10115bfec);
              (*pcVar5)();
            }
          }
          func_0x000107c6142c(uVar28);
        }
      }
      goto LAB_10115bbc8;
    }
    func_0x000107c61170(uVar25);
    func_0x000101163cb8(lVar18,0x112d604e8,&UNK_10d926a30);
  }
  return puStack_150;
}



/* Entry: 10115c014; end: 10115c0bb; -[_TtC29MapFriendPickerImplementation26FriendPickerViewController textFieldDidBeginEditing] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10115c014(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lStack_40;
  long lStack_38;
  
  plVar5 = &lStack_40;
  uVar6 = *(undefined8 *)(param_1 + _DAT_112d60410);
  lVar3 = 0;
  FUN_101152628();
  lVar4 = lVar3;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar4 + _DAT_112d60160);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined2 *)(puVar1 + 2) = 0x500;
  puVar2 = PTR_s_init_1125d9248;
  lStack_40 = lVar4;
  lStack_38 = lVar3;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&lStack_40,puVar2);
  func_0x000107c424b8(uVar6);
  func_0x000107c61170(param_1);
  func_0x000107c61170(plVar5);
  return;
}



/* Entry: 10115c0bc; end: 10115c217;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10115c0bc(undefined8 param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lVar6;
  undefined2 uVar7;
  long alStack_60 [2];
  long alStack_50 [2];
  
  plVar4 = alStack_60;
  lVar2 = unaff_x20;
  func_0x000107c44c68();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar6 = lVar2;
    func_0x000107c51ac8();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar6 != 0) {
      lVar2 = lVar6;
      func_0x000107c5c82c();
      func_0x000107c61180();
      func_0x000107c61170(lVar6);
      if (lVar2 != 0) {
        lVar6 = lVar2;
        func_0x000107c5faec();
        func_0x000107c61170(lVar2);
        lVar2 = lVar6;
        func_0x000107c5fb5c(lVar6,param_2);
        if (0 < lVar2) {
          uVar7 = 0x8000;
          goto LAB_10115c1a0;
        }
        func_0x000107c6142c(param_2);
      }
    }
  }
  uVar5 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  func_0x000107c59c6c(param_1);
  func_0x000107c61170(uVar5);
  param_2 = 0;
  plVar4 = alStack_50;
  uVar7 = 0xc000;
  lVar6 = 1;
LAB_10115c1a0:
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112d60410);
  lVar3 = 0;
  FUN_101152628();
  lVar2 = lVar3;
  func_0x000107c610f8();
  plVar1 = (long *)(lVar2 + _DAT_112d60160);
  *plVar1 = lVar6;
  plVar1[1] = param_2;
  *(undefined2 *)(plVar1 + 2) = uVar7;
  *plVar4 = lVar2;
  plVar4[1] = lVar3;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c424b8(uVar5);
  func_0x000107c61170(plVar4);
  return;
}



/* Entry: 10115c218; end: 10115c267; -[_TtC29MapFriendPickerImplementation26FriendPickerViewController textFieldDidChange:] */

/* WARNING: Possible PIC construction at 0x00010115c250: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010115c254) */

void FUN_10115c218(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10115c0bc(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10115c268; end: 10115c797;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10115c268(ulong param_1)

{
  ulong *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  bool bVar7;
  code *pcVar8;
  ulong uVar9;
  undefined1 *puVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined *puVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  undefined2 uVar17;
  ulong uVar18;
  long unaff_x20;
  undefined8 uVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  long alStack_100 [2];
  long alStack_f0 [2];
  undefined *apuStack_e0 [3];
  undefined1 auStack_c8 [72];
  undefined1 auStack_80 [32];
  
  if (param_1 >> 0x3e == 0) {
    uVar18 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar18 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar18 = param_1;
    }
    func_0x000107c60480();
  }
  lVar16 = _DAT_112d60400;
  func_0x000107c61428(unaff_x20 + _DAT_112d60400,auStack_80,0,0);
  if (uVar18 != 0) {
    uVar21 = 0;
    do {
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar21) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10115c77c);
          (*pcVar8)();
        }
        uVar9 = *(ulong *)(param_1 + 0x20 + uVar21 * 8);
        func_0x000107c61174();
      }
      else {
        uVar9 = uVar21;
        FUN_10111c5a8(uVar21,param_1);
      }
      if (SCARRY8(uVar21,1)) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x10115c408);
        (*pcVar8)();
      }
      uVar21 = uVar21 + 1;
      lVar22 = *(long *)(unaff_x20 + lVar16);
      if (*(long *)(lVar22 + 0x10) == 0) {
        func_0x000107c61170();
LAB_10115c418:
        puVar12 = &UNK_10d926a08;
        func_0x000107c614e0();
        bVar7 = false;
        goto joined_r0x00010115c434;
      }
      uVar3 = *(ulong *)(uVar9 + _DAT_112fcd610);
      uVar4 = ((ulong *)(uVar9 + _DAT_112fcd610))[1];
      func_0x000107c6068c(auStack_c8,*(undefined8 *)(lVar22 + 0x28));
      func_0x000107c61434(lVar22);
      puVar10 = auStack_c8;
      func_0x000107c5fb58(puVar10,uVar3,uVar4);
      func_0x000107c606a8();
      uVar15 = -1L << ((ulong)*(byte *)(lVar22 + 0x20) & 0x3f);
      uVar20 = (ulong)puVar10 & (uVar15 ^ 0xffffffffffffffff);
      if ((*(ulong *)(lVar22 + 0x38 + (uVar20 >> 6) * 8) >> (uVar20 & 0x3f) & 1) == 0) {
LAB_10115c408:
        func_0x000107c61170(uVar9);
        func_0x000107c6142c(lVar22);
        goto LAB_10115c418;
      }
      while( true ) {
        puVar1 = (ulong *)(*(long *)(lVar22 + 0x30) + uVar20 * 0x10);
        uVar11 = *puVar1;
        uVar5 = puVar1[1];
        if ((uVar11 == uVar3 && uVar5 == uVar4) ||
           (func_0x000107c605b8(uVar11,uVar5,uVar3,uVar4,0), (uVar11 & 1) != 0)) break;
        uVar20 = uVar20 + 1 & ~uVar15;
        if ((*(ulong *)(lVar22 + 0x38 + (uVar20 >> 6) * 8) >> (uVar20 & 0x3f) & 1) == 0)
        goto LAB_10115c408;
      }
      func_0x000107c61170(uVar9);
      func_0x000107c6142c(lVar22);
    } while (uVar21 != uVar18);
  }
  puVar12 = &UNK_10d926a08;
  func_0x000107c614e0();
  bVar7 = true;
joined_r0x00010115c434:
  if (param_1 >> 0x3e == 0) {
    uVar18 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar18 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar18 = param_1;
    }
    func_0x000107c60480();
  }
  if (uVar18 == 0) {
    func_0x000107c61574(puVar12);
    puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (bVar7) goto LAB_10115c65c;
LAB_10115c560:
    func_0x000107c61428(unaff_x20 + lVar16,apuStack_e0,0x21,0);
    func_0x00010040448c(puVar13);
    func_0x000107c614a8(apuStack_e0);
    func_0x000107c6142c();
    uVar19 = *(undefined8 *)(unaff_x20 + _DAT_112d60410);
    func_0x000107c5eff4();
    if ((long)puVar13 < 0) {
      plVar14 = alStack_100;
      uVar17 = 0x100;
    }
    else {
      lVar16 = *(long *)(unaff_x20 + _DAT_112d603f0);
      plVar14 = alStack_100;
      uVar17 = 0x100;
      if (puVar13 < *(undefined **)(lVar16 + 0x10)) {
LAB_10115c6c8:
        uVar18 = (ulong)*(byte *)(lVar16 + (long)puVar13 * 0x10 + 0x20);
        goto LAB_10115c6ec;
      }
    }
  }
  else {
    apuStack_e0[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100403514(0,uVar18 & ((long)uVar18 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar18 < 0) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10115c798);
      (*pcVar8)();
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      plVar14 = (long *)(param_1 + 0x20);
      puVar13 = apuStack_e0[0];
      do {
        puVar2 = (undefined8 *)(*plVar14 + _DAT_112fcd610);
        func_0x000107c61428(puVar2,auStack_c8,0,0);
        uVar19 = *puVar2;
        uVar6 = puVar2[1];
        uVar21 = *(ulong *)(puVar13 + 0x10);
        uVar9 = *(ulong *)(puVar13 + 0x18);
        apuStack_e0[0] = puVar13;
        func_0x000107c61434(uVar6);
        if (uVar9 >> 1 <= uVar21) {
          func_0x000100403514(1 < uVar9,uVar21 + 1,1);
          puVar13 = apuStack_e0[0];
        }
        *(ulong *)(puVar13 + 0x10) = uVar21 + 1;
        *(undefined8 *)(puVar13 + uVar21 * 0x10 + 0x20) = uVar19;
        *(undefined8 *)(puVar13 + uVar21 * 0x10 + 0x28) = uVar6;
        uVar18 = uVar18 - 1;
        plVar14 = plVar14 + 1;
      } while (uVar18 != 0);
    }
    else {
      uVar21 = 0;
      do {
        puVar13 = apuStack_e0[0];
        uVar9 = uVar21;
        FUN_10111c5a8(uVar21,param_1);
        puVar2 = (undefined8 *)(uVar9 + _DAT_112fcd610);
        func_0x000107c61428(puVar2,auStack_c8,0,0);
        uVar19 = *puVar2;
        uVar6 = puVar2[1];
        func_0x000107c61434(uVar6);
        func_0x000107c615e8(uVar9);
        uVar9 = *(ulong *)(puVar13 + 0x10);
        apuStack_e0[0] = puVar13;
        if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar9) {
          func_0x000100403514(1 < *(ulong *)(puVar13 + 0x18),uVar9 + 1,1);
        }
        uVar21 = uVar21 + 1;
        *(ulong *)(apuStack_e0[0] + 0x10) = uVar9 + 1;
        *(undefined8 *)(apuStack_e0[0] + uVar9 * 0x10 + 0x20) = uVar19;
        *(undefined8 *)(apuStack_e0[0] + uVar9 * 0x10 + 0x28) = uVar6;
        puVar13 = apuStack_e0[0];
      } while (uVar18 != uVar21);
    }
    func_0x000107c61574(puVar12);
    if (!bVar7) goto LAB_10115c560;
LAB_10115c65c:
    func_0x000107c61428(unaff_x20 + lVar16,apuStack_e0,0x21,0);
    FUN_10115c798(puVar13);
    func_0x000107c614a8(apuStack_e0);
    func_0x000107c6142c();
    uVar19 = *(undefined8 *)(unaff_x20 + _DAT_112d60410);
    func_0x000107c5eff4();
    if (-1 < (long)puVar13) {
      lVar16 = *(long *)(unaff_x20 + _DAT_112d603f0);
      plVar14 = alStack_f0;
      uVar17 = 0x200;
      if (*(undefined **)(lVar16 + 0x10) <= puVar13) goto LAB_10115c6e8;
      goto LAB_10115c6c8;
    }
    plVar14 = alStack_f0;
    uVar17 = 0x200;
  }
LAB_10115c6e8:
  uVar18 = 5;
LAB_10115c6ec:
  lVar22 = 0;
  FUN_101152628();
  lVar16 = lVar22;
  func_0x000107c610f8();
  puVar1 = (ulong *)(lVar16 + _DAT_112d60160);
  *puVar1 = uVar18;
  puVar1[1] = 0;
  *(undefined2 *)(puVar1 + 2) = uVar17;
  *plVar14 = lVar16;
  plVar14[1] = lVar22;
  func_0x000107c61154(plVar14,PTR_s_init_1125d9248);
  func_0x000107c424b8(uVar19);
  func_0x000107c61170(plVar14);
  func_0x000107c4fd7c(*(undefined8 *)(unaff_x20 + _DAT_112d603b0));
  return;
}



/* Entry: 10115c798; end: 10115c80f;  */

void FUN_10115c798(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  long lVar4;
  undefined8 *puVar5;
  
  if ((*(long *)(*unaff_x20 + 0x10) != 0) && (lVar4 = *(long *)(param_1 + 0x10), lVar4 != 0)) {
    puVar5 = (undefined8 *)(param_1 + 0x28);
    do {
      uVar1 = puVar5[-1];
      uVar2 = *puVar5;
      func_0x000107c61434(uVar2);
      uVar3 = uVar2;
      FUN_1010af1e4(uVar1,uVar2);
      func_0x000107c6142c(uVar2);
      func_0x000107c6142c(uVar3);
      puVar5 = puVar5 + 2;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



/* Entry: 10115c810; end: 10115ce97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10115c810(ulong param_1)

{
  undefined8 *puVar1;
  ulong *puVar2;
  undefined8 **ppuVar3;
  undefined8 **ppuVar4;
  undefined8 **ppuVar5;
  undefined8 **ppuVar6;
  code *pcVar7;
  ulong uVar8;
  undefined8 ***pppuVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  long unaff_x20;
  long lVar14;
  ulong uVar15;
  undefined8 ***pppuVar16;
  undefined8 ***pppuVar17;
  ulong uVar18;
  long lStack_a0;
  long lStack_98;
  undefined8 **appuStack_90 [3];
  undefined1 auStack_78 [24];
  
  if (param_1 >> 0x3e == 0) {
    uVar15 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar15 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar15 = param_1;
    }
    func_0x000107c60480();
  }
  pppuVar9 = (undefined8 ***)PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar15 != 0) {
    appuStack_90[0] = (undefined8 **)PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100403514(0,uVar15 & ((long)uVar15 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar15 < 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10115cbb8);
      (*pcVar7)();
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      pppuVar9 = (undefined8 ***)appuStack_90[0];
      plVar12 = (long *)(param_1 + 0x20);
      do {
        puVar1 = (undefined8 *)(*plVar12 + _DAT_112fcd610);
        func_0x000107c61428(puVar1,auStack_78,0,0);
        ppuVar3 = (undefined8 **)*puVar1;
        ppuVar5 = (undefined8 **)puVar1[1];
        ppuVar4 = pppuVar9[2];
        ppuVar6 = pppuVar9[3];
        appuStack_90[0] = pppuVar9;
        func_0x000107c61434(ppuVar5);
        if ((undefined8 **)((ulong)ppuVar6 >> 1) <= ppuVar4) {
          func_0x000100403514((undefined8 **)0x1 < ppuVar6,(undefined8 **)((long)ppuVar4 + 1U),1);
          pppuVar9 = (undefined8 ***)appuStack_90[0];
        }
        pppuVar9[2] = (undefined8 **)((long)ppuVar4 + 1U);
        pppuVar9[(long)ppuVar4 * 2 + 4] = ppuVar3;
        pppuVar9[(long)ppuVar4 * 2 + 5] = ppuVar5;
        uVar15 = uVar15 - 1;
        plVar12 = plVar12 + 1;
      } while (uVar15 != 0);
    }
    else {
      uVar18 = 0;
      do {
        ppuVar6 = appuStack_90[0];
        uVar8 = uVar18;
        FUN_10111c5a8(uVar18,param_1);
        puVar1 = (undefined8 *)(uVar8 + _DAT_112fcd610);
        func_0x000107c61428(puVar1,auStack_78,0,0);
        ppuVar3 = (undefined8 **)*puVar1;
        ppuVar5 = (undefined8 **)puVar1[1];
        func_0x000107c61434(ppuVar5);
        func_0x000107c615e8(uVar8);
        ppuVar4 = (undefined8 **)ppuVar6[2];
        appuStack_90[0] = ppuVar6;
        if ((undefined8 **)((ulong)ppuVar6[3] >> 1) <= ppuVar4) {
          func_0x000100403514((undefined8 **)0x1 < ppuVar6[3],(undefined8 **)((long)ppuVar4 + 1U),1)
          ;
        }
        uVar18 = uVar18 + 1;
        appuStack_90[0][2] = (undefined8 **)((long)ppuVar4 + 1U);
        appuStack_90[0][(long)ppuVar4 * 2 + 4] = ppuVar3;
        appuStack_90[0][(long)ppuVar4 * 2 + 5] = ppuVar5;
        pppuVar9 = (undefined8 ***)appuStack_90[0];
      } while (uVar15 != uVar18);
    }
  }
  func_0x000107c61428(unaff_x20 + _DAT_112d60400,appuStack_90,0x21,0);
  func_0x00010040448c(pppuVar9);
  func_0x000107c614a8(appuStack_90);
  func_0x000107c6142c();
  func_0x000107c5eff4();
  lVar11 = _DAT_112d603d0;
  if ((-1 < (long)pppuVar9) &&
     (pppuVar9 < *(undefined8 ****)(*(long *)(unaff_x20 + _DAT_112d603f0) + 0x10))) {
    lVar14 = *(long *)(unaff_x20 + _DAT_112d603f0) + (long)pppuVar9 * 0x10;
    uVar15 = (ulong)*(byte *)(lVar14 + 0x20);
    pppuVar16 = *(undefined8 ****)(lVar14 + 0x28);
    pppuVar9 = appuStack_90;
    func_0x000107c61428(unaff_x20 + _DAT_112d603d0,pppuVar9,0x20,0);
    lVar14 = *(long *)(unaff_x20 + lVar11);
    if ((*(long *)(lVar14 + 0x10) == 0) ||
       (uVar18 = uVar15, FUN_1011626e0(), ((ulong)pppuVar9 & 1) == 0)) {
      pppuVar9 = appuStack_90;
      func_0x000107c614a8();
    }
    else {
      lVar14 = *(long *)(*(long *)(lVar14 + 0x38) + uVar18 * 8);
      pppuVar9 = appuStack_90;
      func_0x000107c614a8();
      if ((ulong)pppuVar16 >> 0x3e == 0) {
        pppuVar17 = *(undefined8 ****)(((ulong)pppuVar16 & 0xffffffffffffff8) + 0x10);
        if ((long)pppuVar17 <= lVar14) goto LAB_10115cad8;
      }
      else {
        pppuVar17 = (undefined8 ***)((ulong)pppuVar16 & 0xffffffffffffff8);
        if ((undefined8 ***)0x7fffffffffffffff < pppuVar16) {
          pppuVar17 = pppuVar16;
        }
        pppuVar9 = pppuVar17;
        func_0x000107c60480();
        if ((long)pppuVar9 <= lVar14) goto LAB_10115cad8;
        func_0x000107c60480(pppuVar17);
      }
      func_0x000107c61428(unaff_x20 + lVar11,appuStack_90,0x21,0);
      func_0x000107c61434(pppuVar16);
      uVar10 = *(undefined8 *)(unaff_x20 + lVar11);
      func_0x000107c61558(uVar10);
      uVar13 = *(undefined8 *)(unaff_x20 + lVar11);
      *(undefined8 *)(unaff_x20 + lVar11) = 0x8000000000000000;
      FUN_1011627a0(pppuVar17,uVar15,uVar10);
      *(undefined8 *)(unaff_x20 + lVar11) = uVar13;
      func_0x000107c614a8(appuStack_90);
      func_0x000107c6142c();
      pppuVar9 = pppuVar16;
    }
  }
LAB_10115cad8:
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112d60410);
  func_0x000107c5eff4();
  if (((long)pppuVar9 < 0) ||
     (*(undefined8 ****)(*(long *)(unaff_x20 + _DAT_112d603f0) + 0x10) <= pppuVar9)) {
    uVar15 = 5;
  }
  else {
    uVar15 = (ulong)*(byte *)(*(long *)(unaff_x20 + _DAT_112d603f0) + (long)pppuVar9 * 0x10 + 0x20);
  }
  lVar14 = 0;
  FUN_101152628();
  lVar11 = lVar14;
  func_0x000107c610f8();
  puVar2 = (ulong *)(lVar11 + _DAT_112d60160);
  *puVar2 = uVar15;
  puVar2[1] = 0;
  *(undefined2 *)(puVar2 + 2) = 0x100;
  plVar12 = &lStack_a0;
  lStack_a0 = lVar11;
  lStack_98 = lVar14;
  func_0x000107c61154(plVar12,PTR_s_init_1125d9248);
  func_0x000107c424b8(uVar10);
  func_0x000107c61170(plVar12);
  func_0x000107c4fd7c(*(undefined8 *)(unaff_x20 + _DAT_112d603b0));
  return;
}



/* Entry: 10115ce98; end: 10115d0d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10115ce98(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar3 = unaff_x20;
  func_0x000107c44c68();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar2 = lVar3;
    func_0x000107c51ac8();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar2 != 0) {
      lVar3 = lVar2;
      func_0x000107c5c82c();
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      if (lVar3 != 0) {
        lVar2 = lVar3;
        func_0x000107c5faec();
        func_0x000107c61170(lVar3);
        func_0x000107c5fb5c(lVar2,param_2);
        func_0x000107c6142c(param_2);
        lVar3 = _DAT_112d603d8;
        if (0 < lVar2) {
          func_0x000107c61428(unaff_x20 + _DAT_112d603d8,auStack_58,0,0);
          uVar4 = *(ulong *)(unaff_x20 + lVar3);
          if (uVar4 >> 0x3e == 0) {
            return;
          }
          uVar1 = uVar4 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar4) {
            uVar1 = uVar4;
          }
          func_0x000107c60480(uVar1);
          return;
        }
      }
    }
  }
  if (((long)param_1 < 0) || (*(ulong *)(*(long *)(unaff_x20 + _DAT_112d603f0) + 0x10) <= param_1))
  {
    lVar3 = *(long *)(unaff_x20 + _DAT_112d603e8);
    if (lVar3 != 0) {
      func_0x000107c61174();
      lVar2 = lVar3;
      FUN_10115b22c(param_1);
      if (lVar2 == 0) {
        func_0x000107c61170(lVar3);
      }
      else {
        func_0x000107c5fadc();
        func_0x000107c6142c(lVar2);
        lVar2 = lVar3;
        func_0x000107c5b5d4(lVar3);
        func_0x000107c61180();
        func_0x000107c61170(param_1);
        func_0x000107c40808(lVar2);
        func_0x000107c61170(lVar3);
        func_0x000107c61170(lVar2);
      }
    }
  }
  else {
    if (*(ulong *)(*(long *)(unaff_x20 + _DAT_112d603f0) + param_1 * 0x10 + 0x28) >> 0x3e != 0) {
      func_0x000107c60480();
    }
    lVar3 = _DAT_112d603d0;
    func_0x000107c61428(unaff_x20 + _DAT_112d603d0,auStack_58,0x20,0);
    if (*(long *)(*(long *)(unaff_x20 + lVar3) + 0x10) != 0) {
      FUN_1011626e0();
    }
    func_0x000107c614a8(auStack_58);
  }
  return;
}



/* Entry: 10115d0d4; end: 10115d4cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10115d0d4(ulong param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  code *pcVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long unaff_x20;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  undefined1 auStack_c0 [72];
  undefined1 auStack_78 [24];
  
  func_0x000107c5eff4();
  if (((long)param_1 < 0) || (*(ulong *)(*(long *)(unaff_x20 + _DAT_112d603f0) + 0x10) <= param_1))
  {
    uVar11 = *(ulong *)(unaff_x20 + _DAT_112d603e0);
    if (uVar11 == 0) {
      return 0;
    }
    uVar10 = uVar11 & 0xffffffffffffff8;
    if (uVar11 >> 0x3e == 0) {
      uVar13 = *(ulong *)(uVar10 + 0x10);
    }
    else {
      uVar13 = uVar11;
      if (-1 < (long)uVar11) {
        uVar13 = uVar10;
      }
      func_0x000107c60480();
    }
    lVar4 = _DAT_112d60400;
    func_0x000107c61434(uVar11);
    func_0x000107c61428(unaff_x20 + lVar4,auStack_78,0,0);
    if (uVar13 != 0) {
      uVar14 = 0;
      do {
        if ((uVar11 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar10 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10115d49c);
            (*pcVar5)();
          }
          uVar8 = *(ulong *)(uVar11 + 0x20 + uVar14 * 8);
          func_0x000107c61174();
        }
        else {
          uVar8 = uVar14;
          FUN_10111c5a8(uVar14,uVar11);
        }
        if (SCARRY8(uVar14,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10115d304);
          (*pcVar5)();
        }
        uVar14 = uVar14 + 1;
        lVar15 = *(long *)(unaff_x20 + lVar4);
        if (*(long *)(lVar15 + 0x10) == 0) goto LAB_10115d480;
        uVar3 = *(ulong *)(uVar8 + _DAT_112fcd610);
        uVar9 = ((ulong *)(uVar8 + _DAT_112fcd610))[1];
        func_0x000107c6068c(auStack_c0,*(undefined8 *)(lVar15 + 0x28));
        func_0x000107c61434(lVar15);
        puVar6 = auStack_c0;
        func_0x000107c5fb58(puVar6,uVar3,uVar9);
        func_0x000107c606a8();
        uVar12 = -1L << ((ulong)*(byte *)(lVar15 + 0x20) & 0x3f);
        uVar16 = (ulong)puVar6 & (uVar12 ^ 0xffffffffffffffff);
        if ((*(ulong *)(lVar15 + 0x38 + (uVar16 >> 6) * 8) >> (uVar16 & 0x3f) & 1) == 0) {
LAB_10115d434:
          func_0x000107c6142c(uVar11);
          goto LAB_10115d450;
        }
        while( true ) {
          puVar1 = (ulong *)(*(long *)(lVar15 + 0x30) + uVar16 * 0x10);
          uVar7 = *puVar1;
          uVar2 = puVar1[1];
          if ((uVar7 == uVar3 && uVar2 == uVar9) ||
             (func_0x000107c605b8(uVar7,uVar2,uVar3,uVar9,0), (uVar7 & 1) != 0)) break;
          uVar16 = uVar16 + 1 & ~uVar12;
          if ((*(ulong *)(lVar15 + 0x38 + (uVar16 >> 6) * 8) >> (uVar16 & 0x3f) & 1) == 0)
          goto LAB_10115d434;
        }
        func_0x000107c61170(uVar8);
        func_0x000107c6142c(lVar15);
      } while (uVar14 != uVar13);
    }
  }
  else {
    uVar11 = *(ulong *)(*(long *)(unaff_x20 + _DAT_112d603f0) + param_1 * 0x10 + 0x28);
    if (uVar11 >> 0x3e == 0) {
      uVar10 = *(ulong *)((uVar11 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar10 = uVar11 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar11) {
        uVar10 = uVar11;
      }
      func_0x000107c60480();
    }
    lVar4 = _DAT_112d60400;
    func_0x000107c61434(uVar11);
    func_0x000107c61428(unaff_x20 + lVar4,auStack_78,0,0);
    if (uVar10 != 0) {
      uVar13 = 0;
      do {
        if ((uVar11 & 0xc000000000000001) == 0) {
          if (*(ulong *)((uVar11 & 0xffffffffffffff8) + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10115d4a0);
            (*pcVar5)();
          }
          uVar8 = *(ulong *)(uVar11 + 0x20 + uVar13 * 8);
          func_0x000107c61174();
        }
        else {
          uVar8 = uVar13;
          FUN_10111c5a8(uVar13,uVar11);
        }
        if (SCARRY8(uVar13,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10115d424);
          (*pcVar5)();
        }
        uVar13 = uVar13 + 1;
        lVar15 = *(long *)(unaff_x20 + lVar4);
        if (*(long *)(lVar15 + 0x10) == 0) {
LAB_10115d480:
          func_0x000107c6142c(uVar11);
          func_0x000107c61170(uVar8);
          return 0;
        }
        uVar14 = *(ulong *)(uVar8 + _DAT_112fcd610);
        uVar3 = ((ulong *)(uVar8 + _DAT_112fcd610))[1];
        func_0x000107c6068c(auStack_c0,*(undefined8 *)(lVar15 + 0x28));
        func_0x000107c61434(lVar15);
        puVar6 = auStack_c0;
        func_0x000107c5fb58(puVar6,uVar14,uVar3);
        func_0x000107c606a8();
        uVar9 = -1L << ((ulong)*(byte *)(lVar15 + 0x20) & 0x3f);
        uVar12 = (ulong)puVar6 & (uVar9 ^ 0xffffffffffffffff);
        if ((*(ulong *)(lVar15 + 0x38 + (uVar12 >> 6) * 8) >> (uVar12 & 0x3f) & 1) == 0) {
LAB_10115d444:
          func_0x000107c6142c(uVar11);
LAB_10115d450:
          func_0x000107c61170(uVar8);
          func_0x000107c6142c(lVar15);
          return 0;
        }
        while( true ) {
          puVar1 = (ulong *)(*(long *)(lVar15 + 0x30) + uVar12 * 0x10);
          uVar16 = *puVar1;
          uVar7 = puVar1[1];
          if ((uVar16 == uVar14 && uVar7 == uVar3) ||
             (func_0x000107c605b8(uVar16,uVar7,uVar14,uVar3,0), (uVar16 & 1) != 0)) break;
          uVar12 = uVar12 + 1 & ~uVar9;
          if ((*(ulong *)(lVar15 + 0x38 + (uVar12 >> 6) * 8) >> (uVar12 & 0x3f) & 1) == 0)
          goto LAB_10115d444;
        }
        func_0x000107c61170(uVar8);
        func_0x000107c6142c(lVar15);
      } while (uVar13 != uVar10);
    }
  }
  func_0x000107c6142c(uVar11);
  return 1;
}



/* Entry: 10115d4cc; end: 10115d657;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10115d4cc(undefined8 param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  undefined1 *puVar3;
  ulong unaff_x20;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auStack_58 [24];
  
  uVar5 = unaff_x20;
  func_0x000107c44c68();
  func_0x000107c61180();
  if (uVar5 != 0) {
    uVar6 = uVar5;
    func_0x000107c51ac8();
    func_0x000107c61180();
    func_0x000107c61170();
    if (uVar6 != 0) {
      uVar2 = uVar6;
      func_0x000107c5c82c();
      func_0x000107c61180();
      func_0x000107c61170();
      uVar5 = uVar6;
      if (uVar2 != 0) {
        uVar6 = uVar2;
        uVar5 = param_2;
        func_0x000107c5faec();
        func_0x000107c61170(uVar2);
        func_0x000107c5fb5c(uVar6,uVar5);
        func_0x000107c6142c();
        if (0 < (long)uVar6) {
          return false;
        }
      }
    }
  }
  func_0x000107c5eff4();
  lVar4 = _DAT_112d603d0;
  if ((-1 < (long)uVar5) && (uVar5 < *(ulong *)(*(long *)(unaff_x20 + _DAT_112d603f0) + 0x10))) {
    lVar1 = *(long *)(unaff_x20 + _DAT_112d603f0) + uVar5 * 0x10;
    uVar5 = (ulong)*(byte *)(lVar1 + 0x20);
    uVar6 = *(ulong *)(lVar1 + 0x28);
    puVar3 = auStack_58;
    func_0x000107c61428(unaff_x20 + _DAT_112d603d0,puVar3,0x20,0);
    lVar4 = *(long *)(unaff_x20 + lVar4);
    if ((*(long *)(lVar4 + 0x10) == 0) || (FUN_1011626e0(), ((ulong)puVar3 & 1) == 0)) {
      func_0x000107c614a8(auStack_58);
    }
    else {
      uVar5 = *(ulong *)(*(long *)(lVar4 + 0x38) + uVar5 * 8);
      func_0x000107c614a8(auStack_58);
      if (uVar6 >> 0x3e == 0) {
        uVar2 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar2 = uVar6 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar6) {
          uVar2 = uVar6;
        }
        func_0x000107c60480();
      }
      if ((long)uVar5 < (long)uVar2) {
        func_0x000107c5efec();
        return uVar2 == uVar5;
      }
    }
  }
  return false;
}



/* Entry: 10115d658; end: 10115d8cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10115d658(undefined8 param_1)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  long unaff_x20;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined1 auStack_a0 [4];
  uint uStack_9c;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  uVar3 = 0;
  func_0x000107c5eff8();
  lVar13 = *(long *)(uVar3 - 8);
  lVar10 = *(long *)(lVar13 + 0x40);
  uVar11 = uVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000107c5eff4();
  if ((-1 < (long)uVar11) && (uVar11 < *(ulong *)(*(long *)(unaff_x20 + _DAT_112d603f0) + 0x10))) {
    lVar1 = *(long *)(unaff_x20 + _DAT_112d603f0) + uVar11 * 0x10;
    uStack_9c = (uint)*(byte *)(lVar1 + 0x20);
    uVar11 = *(ulong *)(lVar1 + 0x28);
    if (uVar11 >> 0x3e == 0) {
      uVar12 = *(ulong *)((uVar11 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar12 = uVar11 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar11) {
        uVar12 = uVar11;
      }
      func_0x000107c60480(uVar12);
    }
    lVar1 = _DAT_112d603d0;
    func_0x000107c61428(unaff_x20 + _DAT_112d603d0,&puStack_98,0x21,0);
    func_0x000107c61434(uVar11);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    func_0x000107c61558(uVar4);
    uStack_68 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined8 *)(unaff_x20 + lVar1) = 0x8000000000000000;
    FUN_1011627a0(uVar12,uStack_9c,uVar4);
    *(undefined8 *)(unaff_x20 + lVar1) = uStack_68;
    func_0x000107c614a8(&puStack_98);
    func_0x000107c6142c(uVar11);
    puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
    (**(code **)(lVar13 + 0x10))(auStack_a0 + -(lVar10 + 0xfU & 0xfffffffffffffff0),param_1,uVar3);
    uVar11 = (ulong)*(byte *)(lVar13 + 0x50);
    uVar12 = uVar11 + 0x18 & (uVar11 ^ 0xffffffffffffffff);
    puVar6 = &UNK_110388a08;
    func_0x000107c613fc(&UNK_110388a08,uVar12 + lVar10,uVar11 | 7);
    *(long *)(puVar6 + 0x10) = unaff_x20;
    (**(code **)(lVar13 + 0x20))
              (puVar6 + uVar12,auStack_a0 + -(lVar10 + 0xfU & 0xfffffffffffffff0),uVar3);
    puVar7 = &UNK_110388a30;
    func_0x000107c613fc(&UNK_110388a30,0x20,7);
    *(undefined8 *)(puVar7 + 0x10) = 0x101163bfc;
    *(undefined **)(puVar7 + 0x18) = puVar6;
    pcStack_78 = FUN_101163c48;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_10006eb60;
    puStack_80 = &UNK_110388a48;
    ppuVar8 = &puStack_98;
    puStack_70 = puVar7;
    func_0x000107c60bc4(ppuVar8);
    puVar9 = puStack_70;
    func_0x000107c61174();
    func_0x000107c6157c(puVar7);
    func_0x000107c61574(puVar9);
    func_0x000107c4e5fc(puVar5);
    func_0x000107c60bd0(ppuVar8);
    puVar9 = puVar7;
    func_0x000107c61544(puVar7,"",0x74,0x212,0x2c,1);
    func_0x000107c61574(puVar7);
    func_0x000107c61574(puVar6);
    if (((ulong)puVar9 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10115d8d0);
      (*pcVar2)();
    }
  }
  return;
}



/* Entry: 10115d8d0; end: 10115da37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10115d8d0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long extraout_x8;
  undefined8 uVar9;
  long lVar10;
  undefined1 auStack_60 [8];
  long lStack_58;
  
  lVar2 = 0;
  func_0x000107c5ef8c();
  puVar1 = PTR___s10Foundation8IndexSetVMa_110350e28;
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  uVar9 = *(undefined8 *)(param_1 + _DAT_112d603b0);
  lVar3 = 0x112d36020;
  func_0x0001000285a8(0x112d36020,&UNK_10d92f8b0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x18) = 2;
  *(undefined8 *)(lVar3 + 0x10) = 1;
  lVar4 = lVar3;
  func_0x000107c5eff4();
  *(long *)(lVar3 + 0x20) = lVar4;
  uVar5 = 0x112d604f8;
  lStack_58 = lVar3;
  FUN_101163d44(0x112d604f8,puVar1,PTR___s10Foundation8IndexSetVs0C7AlgebraAAMc_110350e40);
  uVar6 = 0x112d4b170;
  func_0x0001000285a8(0x112d4b170,&UNK_10d911a80);
  uVar7 = 0x112d60500;
  func_0x000101163d84(0x112d60500,0x112d4b170,&UNK_10d911a80);
  plVar8 = &lStack_58;
  func_0x000107c60264(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),plVar8,uVar6,uVar7,
                      lVar2,uVar5);
  func_0x000107c5ef70();
  (**(code **)(lVar10 + 8))(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
  func_0x000107c4fda4(uVar9);
  func_0x000107c61170(plVar8);
  return;
}



/* Entry: 10115da38; end: 10115de4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10115da38(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long unaff_x20;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined1 auStack_88 [24];
  
  FUN_10115aea4();
  if (param_4 != 0) {
    lVar9 = param_3;
    func_0x000107c5d200(param_3);
    func_0x000107c61180();
    lVar11 = ((undefined8 *)(param_4 + _DAT_112fcd620))[1];
    if (lVar11 == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = *(undefined8 *)(param_4 + _DAT_112fcd620);
      func_0x000107c61434(lVar11);
      func_0x000107c5fadc(uVar10,lVar11);
      func_0x000107c6142c(lVar11);
    }
    func_0x000107c59e44(lVar9);
    func_0x000107c61170(lVar9);
    func_0x000107c61170(uVar10);
    lVar9 = param_3;
    func_0x000107c5d200(param_3);
    func_0x000107c61180();
    uVar10 = 0x635f646e65697266;
    func_0x000107c5fadc(0x635f646e65697266,0xeb000000006c6c65);
    func_0x000107c520f4(lVar9);
    func_0x000107c61170(lVar9);
    func_0x000107c61170(uVar10);
    lVar9 = param_3;
    func_0x000107c5d200(param_3);
    func_0x000107c61180();
    func_0x000107c52170();
    func_0x000107c61170(lVar9);
    lVar9 = param_3;
    func_0x000107c5d200(param_3);
    func_0x000107c61180();
    uVar10 = 0x3ff0000000000000;
    func_0x000107c526c0(0x3ff0000000000000);
    func_0x000107c61170(lVar9);
    lVar9 = *(long *)(unaff_x20 + _DAT_112d60420);
    puVar1 = (ulong *)(param_4 + _DAT_112fcd610);
    uVar3 = *puVar1;
    uVar2 = puVar1[1];
    func_0x000107c61434(uVar2);
    uVar8 = uVar2;
    func_0x000107c5fadc(uVar3,uVar2);
    func_0x000107c6142c(uVar2);
    func_0x000107c4e680();
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    if (lVar9 != 0) {
      lVar11 = lVar9;
      func_0x000107c4b848();
      func_0x000107c61180();
      func_0x000107c61170(lVar9);
      if (lVar11 == 0) {
        lVar11 = 0;
        func_0x000107c5faec(0);
        func_0x000107c5fadc();
        func_0x000107c6142c(uVar8);
      }
      uVar4 = 0xd000000000000015;
      func_0x000107c5fadc(0xd000000000000015,0x800000010ef283e0);
      puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x000107c61168();
      func_0x000107c450cc();
      func_0x000107c61180();
      func_0x000107c61170(uVar4);
      if (puVar5 != (undefined *)0x0) {
        puVar6 = PTR__OBJC_CLASS___NSTextAttachment_1126b2a20;
        func_0x000107c610f8(PTR__OBJC_CLASS___NSTextAttachment_1126b2a20);
        func_0x000107c453e4();
        func_0x000107c55258();
        func_0x000107c5b078(puVar5);
        func_0x000107c5b078(puVar5);
        func_0x000107c52e44(0,0xbff4000000000000,uVar10,param_2,puVar6);
        uVar10 = 0;
        FUN_101164090(0,0x112d604e0,&PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08);
        func_0x000107c614e8();
        func_0x000107c3e36c();
        func_0x000107c61180();
        puVar7 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
        func_0x000107c610f8(PTR__OBJC_CLASS___NSAttributedString_1126af068);
        func_0x000107c48af4();
        func_0x000107c61170(lVar11);
        func_0x000107c3dee8(uVar10);
        func_0x000107c61170(puVar7);
        lVar11 = param_3;
        func_0x000107c5d200(param_3);
        func_0x000107c61180();
        func_0x000107c529bc();
        func_0x000107c61170(puVar5);
        func_0x000107c61170(puVar6);
        func_0x000107c61170(uVar10);
      }
      func_0x000107c61170(lVar11);
    }
    FUN_101164f3c(param_4,*(undefined8 *)(unaff_x20 + _DAT_112d60418));
    lVar9 = _DAT_112d60400;
    func_0x000107c61428(unaff_x20 + _DAT_112d60400,auStack_88,0,0);
    uVar10 = *(undefined8 *)(unaff_x20 + lVar9);
    uVar3 = *puVar1;
    uVar2 = puVar1[1];
    func_0x000107c61434(uVar10);
    func_0x0001000f66f0(uVar3,uVar2,uVar10);
    func_0x000107c6142c(uVar10);
    func_0x000107c5d200(param_3);
    func_0x000107c61180();
    func_0x000107c58ddc();
    func_0x000107c61170(param_3);
    uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112d603b0);
    func_0x000107c5efd4();
    if ((uVar3 & 1) == 0) {
      func_0x000107c41814(uVar10);
    }
    else {
      func_0x000107c51c24();
    }
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
  }
  return;
}



/* Entry: 10115de50; end: 10115e07b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10115de50(undefined8 param_1,long *param_2)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined *puVar8;
  long unaff_x20;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long alStack_68 [3];
  
  lVar9 = _DAT_112d603d0;
  uVar5 = param_1;
  if ((-1 < (long)param_2) && (param_2 < *(long **)(*(long *)(unaff_x20 + _DAT_112d603f0) + 0x10)))
  {
    lVar1 = *(long *)(unaff_x20 + _DAT_112d603f0) + (long)param_2 * 0x10;
    uVar10 = (ulong)*(byte *)(lVar1 + 0x20);
    uVar11 = *(ulong *)(lVar1 + 0x28);
    param_2 = alStack_68;
    func_0x000107c61428(unaff_x20 + _DAT_112d603d0,param_2,0x20,0);
    lVar9 = *(long *)(unaff_x20 + lVar9);
    if ((*(long *)(lVar9 + 0x10) != 0) && (FUN_1011626e0(), ((ulong)param_2 & 1) != 0)) {
      lVar9 = *(long *)(*(long *)(lVar9 + 0x38) + uVar10 * 8);
      func_0x000107c614a8(alStack_68);
      if (uVar11 >> 0x3e == 0) {
        uVar10 = *(ulong *)((uVar11 & 0xffffffffffffff8) + 0x10);
        lVar1 = uVar10 - lVar9;
        plVar7 = param_2;
      }
      else {
        uVar10 = uVar11 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar11) {
          uVar10 = uVar11;
        }
        func_0x000107c60480();
        lVar1 = uVar10 - lVar9;
        plVar7 = param_2;
      }
      if (SBORROW8(uVar10,lVar9)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10115e07c);
        (*pcVar2)();
      }
      func_0x000107c5d200(param_1);
      func_0x000107c61180();
      uVar6 = uVar5;
      func_0x000101165d88();
      lVar9 = 0x112d36008;
      func_0x0001000285a8(0x112d36008,&UNK_10d900720);
      func_0x000107c613fc();
      *(undefined8 *)(lVar9 + 0x18) = 2;
      *(undefined8 *)(lVar9 + 0x10) = 1;
      puVar3 = PTR___sSiN_11034deb0;
      puVar8 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
      alStack_68[0] = lVar1;
      func_0x000107c6057c();
      *(undefined **)(lVar9 + 0x38) = PTR___sSSN_11034da80;
      puVar4 = puVar3;
      func_0x00010075bbf0();
      *(undefined **)(lVar9 + 0x40) = puVar4;
      *(undefined **)(lVar9 + 0x20) = puVar3;
      *(undefined **)(lVar9 + 0x28) = puVar8;
      param_2 = plVar7;
      func_0x000107c5fb00(uVar6,plVar7,lVar9);
      func_0x000107c6142c(plVar7);
      goto LAB_10115dfcc;
    }
    func_0x000107c614a8(alStack_68);
  }
  func_0x000107c5d200(param_1);
  func_0x000107c61180();
  uVar6 = uVar5;
  func_0x000101165dac();
LAB_10115dfcc:
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
  func_0x000107c59e44(uVar5);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  uVar5 = param_1;
  func_0x000107c5d200(param_1);
  func_0x000107c61180();
  func_0x000107c59c9c();
  func_0x000107c61170(uVar5);
  func_0x000107c5d200(param_1);
  func_0x000107c61180();
  func_0x000107c532d8();
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10115e07c; end: 10115f3cb;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10115e07c(long param_1,uint param_2)

{
  ulong *puVar1;
  ulong uVar2;
  undefined1 *puVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined **ppuVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined1 *puVar15;
  long extraout_x8;
  ulong uVar16;
  long extraout_x12;
  long extraout_x12_00;
  ulong uVar17;
  long unaff_x20;
  long lVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  code *pcVar25;
  ulong uVar26;
  long lVar27;
  ulong uVar28;
  undefined1 auStack_190 [8];
  undefined1 *puStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  ulong uStack_140;
  ulong uStack_138;
  long lStack_130;
  ulong *puStack_128;
  undefined *puStack_120;
  uint uStack_114;
  ulong uStack_110;
  undefined1 auStack_e0 [24];
  undefined *apuStack_c8 [9];
  undefined1 auStack_80 [32];
  
  lVar5 = 0;
  uStack_114 = param_2;
  func_0x000107c5eff8();
  lVar27 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar27 + 0x40));
  puStack_188 = auStack_190 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar22 = (long)(auStack_190 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar24 = lVar22 - extraout_x12_00;
  lVar20 = *(long *)(param_1 + 0x10);
  puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar20 != 0) {
    apuStack_c8[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100dd4260(0,lVar20,0);
    param_1 = param_1 + ((ulong)*(byte *)(lVar27 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar27 + 0x50) ^ 0xffffffffffffffff));
    lVar18 = *(long *)(lVar27 + 0x48);
    pcVar25 = *(code **)(lVar27 + 0x10);
    do {
      puVar12 = apuStack_c8[0];
      lVar23 = lVar24;
      (*pcVar25)(lVar24,param_1,lVar5);
      func_0x000107c5eff4();
      (**(code **)(lVar27 + 8))(lVar24,lVar5);
      uVar19 = *(ulong *)(puVar12 + 0x10);
      apuStack_c8[0] = puVar12;
      if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar19) {
        func_0x000100dd4260(1 < *(ulong *)(puVar12 + 0x18),uVar19 + 1,1);
      }
      *(ulong *)(apuStack_c8[0] + 0x10) = uVar19 + 1;
      *(long *)(apuStack_c8[0] + uVar19 * 8 + 0x20) = lVar23;
      param_1 = param_1 + lVar18;
      lVar20 = lVar20 + -1;
      puVar12 = apuStack_c8[0];
    } while (lVar20 != 0);
  }
  puVar6 = puVar12;
  FUN_101164de8();
  func_0x000107c6142c(puVar12);
  lVar20 = _DAT_112d60400;
  puStack_128 = (ulong *)(puVar6 + 0x38);
  uVar16 = 1L << ((ulong)(byte)puVar6[0x20] & 0x3f);
  uVar19 = 0xffffffffffffffff;
  if ((puVar6[0x20] & 0x3f) < 6) {
    uVar19 = ~(-1L << (uVar16 & 0x3f));
  }
  uVar19 = uVar19 & *puStack_128;
  lStack_130 = _DAT_112d603f0;
  lStack_148 = _DAT_112d603e0;
  lStack_158 = *(long *)(unaff_x20 + _DAT_112d603b0);
  uVar16 = uVar16 + 0x3f >> 6;
  uStack_160 = *(undefined8 *)PTR__UICollectionElementKindSectionHeader_110345b00;
  func_0x000107c61434(puVar6);
  lVar18 = 0;
  uStack_110 = uVar16;
  puStack_120 = puVar6;
  lStack_150 = lVar24;
  do {
    while (puVar12 = puStack_120, puVar1 = puStack_128, uVar19 == 0) {
      bVar4 = SCARRY8(lVar18,1);
      lVar18 = lVar18 + 1;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar25 = (code *)SoftwareBreakpoint(1,0x10115eacc);
        (*pcVar25)();
      }
      if ((long)uVar16 <= lVar18) {
        func_0x000107c61574(puStack_120);
        lVar24 = lStack_130;
        puVar3 = puStack_188;
        lVar20 = 0;
        uVar16 = -1L << ((ulong)*(byte *)((long)puVar12 + 0x20) & 0x3f);
        uVar19 = 0xffffffffffffffff;
        if (-uVar16 < 0x40) {
          uVar19 = ~(-1L << (-uVar16 & 0x3f));
        }
        uVar19 = uVar19 & *(ulong *)((long)puVar12 + 0x38);
        uVar17 = uVar19;
        lVar22 = lVar20;
        while( true ) {
          while (uVar10 = lVar22, uVar11 = uVar17, uVar19 != 0) {
            uVar17 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
            uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
            uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
            uVar7 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
            uVar19 = uVar19 - 1 & uVar19;
            uVar17 = uVar19;
            lVar22 = lVar20;
            if (*(long *)(*(long *)(unaff_x20 + lStack_130) + 0x10) <=
                *(long *)(*(long *)((long)puVar12 + 0x30) +
                          LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) * 8 + lVar20 * 0x200)) {
              FUN_101163bf4(puVar12,puVar1,~uVar16,uVar10,uVar11);
              func_0x000107c5efe8(puVar3,0,*(undefined8 *)(*(long *)(unaff_x20 + lVar24) + 0x10));
              puVar15 = puVar3;
              FUN_10115d0d4();
              if (((uStack_114 ^ (uint)puVar15) & 1) == 0) {
                func_0x00010115eae0(puVar3,uStack_114 & 1);
              }
              (**(code **)(lVar27 + 8))(puVar3,lVar5);
              return;
            }
          }
          bVar4 = SCARRY8(lVar20,1);
          lVar20 = lVar20 + 1;
          if (bVar4) break;
          if ((long)(0x3f - uVar16 >> 6) <= lVar20) {
            FUN_101163bf4(puVar12,puVar1,~uVar16,uVar10,0);
            return;
          }
          uVar19 = *(ulong *)((long)puVar1 + lVar20 * 8);
          uVar17 = uVar11;
          lVar22 = uVar10;
        }
                    /* WARNING: Does not return */
        pcVar25 = (code *)SoftwareBreakpoint(1,0x10115ead0);
        (*pcVar25)();
      }
      uVar19 = *(ulong *)((long)puStack_128 + lVar18 * 8);
    }
    uVar17 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
    uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
    uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
    uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
    uVar7 = 0;
    func_0x000107c5efe8(lVar22,0,*(undefined8 *)
                                  (*(long *)((long)puStack_120 + 0x30) +
                                   LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) * 8 + lVar18 * 0x200));
    func_0x000107c5eff4();
    if (((long)uVar7 < 0) || (*(ulong *)(*(long *)(unaff_x20 + lStack_130) + 0x10) <= uVar7)) {
      uVar17 = *(ulong *)(unaff_x20 + lStack_148);
      if (uVar17 != 0) {
        uVar7 = uVar17 & 0xffffffffffffff8;
        if (uVar17 >> 0x3e == 0) {
          uVar21 = *(ulong *)(uVar7 + 0x10);
        }
        else {
          uVar21 = uVar17;
          if (-1 < (long)uVar17) {
            uVar21 = uVar7;
          }
          func_0x000107c60480();
        }
        func_0x000107c61434(uVar17);
        func_0x000107c61428(unaff_x20 + lVar20,auStack_80,0,0);
        if (uVar21 != 0) {
          uVar28 = 0;
          uStack_178 = uVar17 & 0xc000000000000001;
          uStack_138 = uVar17 + 0x20;
          uStack_170 = uVar21;
          uStack_168 = uVar7;
          uStack_140 = uVar17;
          do {
            uVar17 = uStack_140;
            if (uStack_178 == 0) {
              if (*(ulong *)(uStack_168 + 0x10) <= uVar28) {
                    /* WARNING: Does not return */
                pcVar25 = (code *)SoftwareBreakpoint(1,0x10115ead8);
                (*pcVar25)();
              }
              uVar7 = *(ulong *)(uStack_138 + uVar28 * 8);
              func_0x000107c61174();
            }
            else {
              uVar7 = uVar28;
              FUN_10111c5a8(uVar28,uStack_140);
            }
            if (SCARRY8(uVar28,1)) {
                    /* WARNING: Does not return */
              pcVar25 = (code *)SoftwareBreakpoint(1,0x10115ead4);
              (*pcVar25)();
            }
            uVar28 = uVar28 + 1;
            lVar24 = *(long *)(unaff_x20 + lVar20);
            if (*(long *)(lVar24 + 0x10) == 0) {
              func_0x000107c6142c(uVar17);
              func_0x000107c61170(uVar7);
              bVar4 = false;
              lVar24 = lStack_150;
              uVar10 = uStack_160;
              goto joined_r0x00010115e83c;
            }
            uVar16 = *(ulong *)(uVar7 + _DAT_112fcd610);
            uVar17 = ((ulong *)(uVar7 + _DAT_112fcd610))[1];
            func_0x000107c6068c(apuStack_c8,*(undefined8 *)(lVar24 + 0x28));
            func_0x000107c61434(lVar24);
            ppuVar8 = apuStack_c8;
            func_0x000107c5fb58(ppuVar8,uVar16,uVar17);
            func_0x000107c606a8();
            uVar21 = -1L << ((ulong)*(byte *)(lVar24 + 0x20) & 0x3f);
            uVar26 = (ulong)ppuVar8 & (uVar21 ^ 0xffffffffffffffff);
            if ((*(ulong *)(lVar24 + 0x38 + (uVar26 >> 6) * 8) >> (uVar26 & 0x3f) & 1) == 0) {
LAB_10115e708:
              func_0x000107c6142c(uStack_140);
              func_0x000107c61170(uVar7);
              func_0x000107c6142c(lVar24);
              bVar4 = false;
              lVar24 = lStack_150;
              uVar10 = uStack_160;
              uVar16 = uStack_110;
              goto joined_r0x00010115e83c;
            }
            while( true ) {
              puVar1 = (ulong *)(*(long *)(lVar24 + 0x30) + uVar26 * 0x10);
              uVar9 = *puVar1;
              uVar2 = puVar1[1];
              if ((uVar9 == uVar16 && uVar2 == uVar17) ||
                 (func_0x000107c605b8(uVar9,uVar2,uVar16,uVar17,0), (uVar9 & 1) != 0)) break;
              uVar26 = uVar26 + 1 & ~uVar21;
              if ((*(ulong *)(lVar24 + 0x38 + (uVar26 >> 6) * 8) >> (uVar26 & 0x3f) & 1) == 0)
              goto LAB_10115e708;
            }
            func_0x000107c61170(uVar7);
            func_0x000107c6142c(lVar24);
            uVar16 = uStack_110;
            uVar17 = uStack_140;
          } while (uVar28 != uStack_170);
        }
        func_0x000107c6142c(uVar17);
        bVar4 = true;
        lVar24 = lStack_150;
        uVar10 = uStack_160;
        goto joined_r0x00010115e83c;
      }
      lVar24 = lStack_150;
      if ((uStack_114 & 1) == 0) goto LAB_10115e844;
    }
    else {
      uVar17 = *(ulong *)(*(long *)(unaff_x20 + lStack_130) + uVar7 * 0x10 + 0x28);
      if (uVar17 >> 0x3e == 0) {
        uVar7 = *(ulong *)((uVar17 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar7 = uVar17 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar17) {
          uVar7 = uVar17;
        }
        func_0x000107c60480();
      }
      func_0x000107c61434(uVar17);
      func_0x000107c61428(unaff_x20 + lVar20,auStack_e0,0,0);
      if (uVar7 != 0) {
        uVar21 = 0;
        uStack_180 = uVar17 & 0xc000000000000001;
        uStack_140 = uVar17 & 0xffffffffffffff8;
        uStack_168 = uVar17 + 0x20;
        uStack_178 = uVar7;
        uStack_170 = uVar17;
        do {
          uVar17 = uStack_170;
          if (uStack_180 == 0) {
            if (*(ulong *)(uStack_140 + 0x10) <= uVar21) {
                    /* WARNING: Does not return */
              pcVar25 = (code *)SoftwareBreakpoint(1,0x10115eae0);
              (*pcVar25)();
            }
            uVar7 = *(ulong *)(uStack_168 + uVar21 * 8);
            func_0x000107c61174();
          }
          else {
            uVar7 = uVar21;
            FUN_10111c5a8(uVar21,uStack_170);
          }
          if (SCARRY8(uVar21,1)) {
                    /* WARNING: Does not return */
            pcVar25 = (code *)SoftwareBreakpoint(1,0x10115eadc);
            (*pcVar25)();
          }
          uVar21 = uVar21 + 1;
          lVar23 = *(long *)(unaff_x20 + lVar20);
          if (*(long *)(lVar23 + 0x10) == 0) {
            func_0x000107c6142c(uVar17);
            func_0x000107c61170(uVar7);
            bVar4 = false;
            uVar10 = uStack_160;
            goto joined_r0x00010115e83c;
          }
          uVar16 = *(ulong *)(uVar7 + _DAT_112fcd610);
          uVar17 = ((ulong *)(uVar7 + _DAT_112fcd610))[1];
          uStack_138 = uVar7;
          func_0x000107c6068c(apuStack_c8,*(undefined8 *)(lVar23 + 0x28));
          func_0x000107c61434(lVar23);
          ppuVar8 = apuStack_c8;
          func_0x000107c5fb58(ppuVar8,uVar16,uVar17);
          func_0x000107c606a8();
          uVar7 = -1L << ((ulong)*(byte *)(lVar23 + 0x20) & 0x3f);
          uVar28 = (ulong)ppuVar8 & (uVar7 ^ 0xffffffffffffffff);
          if ((*(ulong *)(lVar23 + 0x38 + (uVar28 >> 6) * 8) >> (uVar28 & 0x3f) & 1) == 0) {
LAB_10115e804:
            func_0x000107c6142c(uStack_170);
            func_0x000107c61170(uStack_138);
            func_0x000107c6142c(lVar23);
            bVar4 = false;
            uVar10 = uStack_160;
            uVar16 = uStack_110;
            goto joined_r0x00010115e83c;
          }
          while( true ) {
            puVar1 = (ulong *)(*(long *)(lVar23 + 0x30) + uVar28 * 0x10);
            uVar26 = *puVar1;
            uVar9 = puVar1[1];
            if ((uVar26 == uVar16 && uVar9 == uVar17) ||
               (func_0x000107c605b8(uVar26,uVar9,uVar16,uVar17,0), (uVar26 & 1) != 0)) break;
            uVar28 = uVar28 + 1 & ~uVar7;
            if ((*(ulong *)(lVar23 + 0x38 + (uVar28 >> 6) * 8) >> (uVar28 & 0x3f) & 1) == 0)
            goto LAB_10115e804;
          }
          func_0x000107c61170(uStack_138);
          func_0x000107c6142c(lVar23);
          uVar17 = uStack_170;
          uVar16 = uStack_110;
        } while (uVar21 != uStack_178);
      }
      func_0x000107c6142c(uVar17);
      bVar4 = true;
      uVar10 = uStack_160;
joined_r0x00010115e83c:
      uStack_160 = uVar10;
      if ((uStack_114 & 1) == 0) {
        if (!bVar4) {
LAB_10115e844:
          uVar10 = uStack_160;
          func_0x000107c61174(uStack_160);
          uVar11 = uVar10;
          func_0x000107c5eff4();
          uVar14 = 0;
          func_0x000107c5efe8(lVar24,0,uVar11);
          func_0x000107c5efd4();
          (**(code **)(lVar27 + 8))(lVar24,lVar5);
          lVar23 = lStack_158;
          func_0x000107c5c430();
          func_0x000107c61180();
          func_0x000107c61170(uVar10);
          func_0x000107c61170(uVar14);
          if (lVar23 != 0) {
            puVar12 = PTR_PTR_1126b78f8;
            func_0x000107c61168(PTR_PTR_1126b78f8);
            lVar13 = lVar23;
            func_0x000107c6148c(lVar23,puVar12);
joined_r0x00010115e7f4:
            if (lVar13 != 0) {
              func_0x00010115ec18();
            }
            func_0x000107c61170(lVar23);
          }
        }
      }
      else if (bVar4) {
        func_0x000107c61174(uVar10);
        uVar11 = uVar10;
        func_0x000107c5eff4();
        uVar14 = 0;
        func_0x000107c5efe8(lVar24,0,uVar11);
        func_0x000107c5efd4();
        (**(code **)(lVar27 + 8))(lVar24,lVar5);
        lVar23 = lStack_158;
        func_0x000107c5c430();
        func_0x000107c61180();
        func_0x000107c61170(uVar10);
        func_0x000107c61170(uVar14);
        if (lVar23 != 0) {
          puVar12 = PTR_PTR_1126b78f8;
          func_0x000107c61168(PTR_PTR_1126b78f8);
          lVar13 = lVar23;
          func_0x000107c6148c(lVar23,puVar12);
          goto joined_r0x00010115e7f4;
        }
      }
    }
    uVar19 = uVar19 - 1 & uVar19;
    (**(code **)(lVar27 + 8))(lVar22,lVar5);
  } while( true );
}



/* Entry: 10115f3cc; end: 10115f4db;  */

void FUN_10115f3cc(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    if ((param_2 & 1) == 0) {
      func_0x00010115c810(param_4,param_5);
    }
    else {
      func_0x00010115cbe4();
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 10115f4dc; end: 10115f4df;  */

void FUN_10115f4dc(void)

{
  return;
}



/* Entry: 10115f4e0; end: 10115f4fb; -[_TtC29MapFriendPickerImplementation26FriendPickerViewController themeBackgroundView:didUpdateImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10115f4e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(long *)(param_1 + _DAT_112d60438) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1a9f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + _DAT_112d60438),PTR_s_setImage__1126481e8,param_4);
    return;
  }
  return;
}



/* Entry: 10115f4fc; end: 10115f637; -[_TtC29MapFriendPickerImplementation26FriendPickerViewController collectionView:layout:sizeForItemAtIndexPath:] */

undefined1  [16]
FUN_10115f4fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long extraout_x8;
  long lVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0;
  func_0x000107c5eff8();
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  func_0x000107c5efdc(&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_8)
  ;
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_4);
  func_0x000107c438d4(param_6);
  puVar3 = PTR_PTR_1126b2780;
  func_0x000107c61168();
  puVar4 = puVar3;
  func_0x000107c5efe4();
  if ((long)puVar4 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10115f634);
    (*pcVar1)();
  }
  puVar5 = puVar4;
  func_0x000107c5eff4();
  FUN_10115ce98();
  if (-1 < (long)puVar5) {
    func_0x000107c30a60(2,puVar4,puVar5);
    func_0x000107c44da8(puVar3);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_4);
    (**(code **)(lVar6 + 8))
              (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
    auVar7._8_8_ = param_1;
    auVar7._0_8_ = param_3;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10115f638);
  (*pcVar1)();
}



/* Entry: 10115f638; end: 10115f767; -[_TtC29MapFriendPickerImplementation26FriendPickerViewController collectionView:layout:referenceSizeForHeaderInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_10115f638(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  func_0x000107c61174(param_6);
  func_0x000107c61174();
  lVar1 = param_4;
  func_0x000107c44c68();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c51ac8();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      lVar1 = lVar2;
      func_0x000107c5c82c();
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      if (lVar1 != 0) {
        lVar2 = lVar1;
        func_0x000107c5faec();
        func_0x000107c61170(lVar1);
        func_0x000107c5fb5c(lVar2,param_5);
        func_0x000107c6142c(param_5);
        uVar3 = 0;
        if (0 < lVar2) goto LAB_10115f72c;
      }
    }
  }
  func_0x000107c61168(PTR_PTR_1126b78f0);
  func_0x000107c44db0();
  uVar3 = param_1;
LAB_10115f72c:
  func_0x000107c438d4(param_6);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_4);
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = param_3;
  return auVar4;
}



/* Entry: 10115f768; end: 10115faef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10115f768(undefined8 param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  ushort uVar15;
  long extraout_x8;
  long extraout_x12;
  long lVar16;
  long unaff_x20;
  undefined1 *puVar17;
  ulong uVar18;
  undefined1 *puVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  undefined1 auStack_c0 [8];
  ulong uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  lVar8 = 0;
  func_0x000107c5eff8();
  lVar16 = *(long *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
  puVar17 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar18 = param_2;
  FUN_10115d4cc();
  if ((uVar18 & 1) == 0) {
    uVar18 = param_2;
    FUN_10115aea4();
    if (uVar18 != 0) {
      puVar1 = (undefined8 *)(uVar18 + _DAT_112fcd610);
      uVar5 = *puVar1;
      uVar2 = puVar1[1];
      uStack_b0 = uVar18;
      func_0x000107c61428(unaff_x20 + _DAT_112d60400,&puStack_88,0x21,0);
      func_0x000107c61434(uVar2);
      func_0x000100403b00(&puStack_70,uVar5,uVar2);
      func_0x000107c614a8(&puStack_88);
      func_0x000107c6142c(uStack_68);
      uVar18 = param_2;
      FUN_10115d0d4();
      if ((uVar18 & 1) != 0) {
        func_0x00010115eae0(param_2,1);
      }
      uStack_a0 = *(long *)(unaff_x20 + _DAT_112d60410);
      uVar5 = *puVar1;
      uVar18 = puVar1[1];
      uVar4 = uVar18;
      func_0x000107c61434();
      func_0x000107c5eff4();
      if (((long)uVar4 < 0) || (*(ulong *)(*(long *)(unaff_x20 + _DAT_112d603f0) + 0x10) <= uVar4))
      {
        uVar15 = 5;
      }
      else {
        uVar15 = (ushort)*(byte *)(*(long *)(unaff_x20 + _DAT_112d603f0) + uVar4 * 0x10 + 0x20);
      }
      puVar9 = (undefined *)0x0;
      FUN_101152628();
      puVar10 = puVar9;
      func_0x000107c610f8();
      puVar1 = (undefined8 *)(puVar10 + _DAT_112d60160);
      *puVar1 = uVar5;
      puVar1[1] = uVar18;
      *(ushort *)(puVar1 + 2) = uVar15 | 0x300;
      ppuVar11 = &puStack_98;
      puStack_98 = puVar10;
      puStack_90 = puVar9;
      func_0x000107c61154(ppuVar11,PTR_s_init_1125d9248);
      func_0x000107c424b8(uStack_a0);
      func_0x000107c61170(ppuVar11);
      uVar18 = uStack_b0;
      FUN_10115b328(uStack_b0,param_2);
      lVar22 = *(long *)(uVar18 + 0x10);
      uStack_b8 = uVar18;
      if (lVar22 != 0) {
        puVar19 = *(undefined1 **)(unaff_x20 + _DAT_112d603b0);
        lVar21 = uVar18 + ((ulong)*(byte *)(lVar16 + 0x50) + 0x20 &
                          ((ulong)*(byte *)(lVar16 + 0x50) ^ 0xffffffffffffffff));
        uStack_a0 = *(long *)(lVar16 + 0x48);
        pcVar3 = *(code **)(lVar16 + 0x10);
        do {
          (*pcVar3)((long)puVar17 - extraout_x12,lVar21,lVar8);
          puVar12 = puVar17;
          (**(code **)(lVar16 + 0x20))(puVar17,(long)puVar17 - extraout_x12,lVar8);
          func_0x000107c5efd4();
          puVar13 = puVar19;
          func_0x000107c3f730();
          func_0x000107c61180();
          func_0x000107c61170(puVar12);
          if (puVar13 != (undefined1 *)0x0) {
            uVar5 = 0;
            FUN_101165628(0);
            puVar14 = puVar13;
            func_0x000107c61480(puVar13,uVar5);
            puVar12 = puVar13;
            if (puVar14 != (undefined1 *)0x0) {
              func_0x000107c5d200();
              func_0x000107c61180();
              func_0x000107c58ddc();
              func_0x000107c61170(puVar13);
              puVar12 = puVar14;
            }
            func_0x000107c61170(puVar12);
          }
          func_0x000107c5efd4();
          func_0x000107c51c24(puVar19);
          func_0x000107c61170(puVar12);
          (**(code **)(lVar16 + 8))(puVar17,lVar8);
          lVar21 = lVar21 + uStack_a0;
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
      }
      uVar18 = uStack_b8;
      func_0x00010115e07c(uStack_b8,1);
      func_0x000107c61170(uStack_b0);
      func_0x000107c6142c(uVar18);
    }
    return;
  }
  func_0x000107c5efd4();
  func_0x000107c41814(param_1);
  func_0x000107c61170(uVar18);
  uVar4 = 0;
  func_0x000107c5eff8();
  lVar22 = *(long *)(uVar4 - 8);
  lVar16 = *(long *)(lVar22 + 0x40);
  uVar18 = uVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = (long)&uStack_a0 - (lVar16 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5eff4();
  if ((-1 < (long)uVar18) && (uVar18 < *(ulong *)(*(long *)(unaff_x20 + _DAT_112d603f0) + 0x10))) {
    lVar21 = *(long *)(unaff_x20 + _DAT_112d603f0) + uVar18 * 0x10;
    uStack_a0 = (ulong)CONCAT14(*(undefined1 *)(lVar21 + 0x20),(undefined4)uStack_a0);
    uVar18 = *(ulong *)(lVar21 + 0x28);
    if (uVar18 >> 0x3e == 0) {
      uVar20 = *(ulong *)((uVar18 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar20 = uVar18 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar18) {
        uVar20 = uVar18;
      }
      func_0x000107c60480(uVar20);
    }
    lVar21 = _DAT_112d603d0;
    func_0x000107c61428(unaff_x20 + _DAT_112d603d0,&puStack_98,0x21,0);
    func_0x000107c61434(uVar18);
    uVar5 = *(undefined8 *)(unaff_x20 + lVar21);
    func_0x000107c61558(uVar5);
    uStack_68 = *(undefined8 *)(unaff_x20 + lVar21);
    *(undefined8 *)(unaff_x20 + lVar21) = 0x8000000000000000;
    FUN_1011627a0(uVar20,uStack_a0._4_4_,uVar5);
    *(undefined8 *)(unaff_x20 + lVar21) = uStack_68;
    func_0x000107c614a8(&puStack_98);
    func_0x000107c6142c(uVar18);
    puVar6 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
    (**(code **)(lVar22 + 0x10))(lVar8,param_2,uVar4);
    uVar18 = (ulong)*(byte *)(lVar22 + 0x50);
    uVar20 = uVar18 + 0x18 & (uVar18 ^ 0xffffffffffffffff);
    puVar10 = &UNK_110388a08;
    func_0x000107c613fc(&UNK_110388a08,uVar20 + lVar16,uVar18 | 7);
    *(long *)(puVar10 + 0x10) = unaff_x20;
    (**(code **)(lVar22 + 0x20))(puVar10 + uVar20,lVar8,uVar4);
    puVar9 = &UNK_110388a30;
    func_0x000107c613fc(&UNK_110388a30,0x20,7);
    *(undefined8 *)(puVar9 + 0x10) = 0x101163bfc;
    *(undefined **)(puVar9 + 0x18) = puVar10;
    pcStack_78 = FUN_101163c48;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_90 = (undefined *)0x42000000;
    puStack_88 = &UNK_10006eb60;
    puStack_80 = &UNK_110388a48;
    ppuVar11 = &puStack_98;
    puStack_70 = puVar9;
    func_0x000107c60bc4(ppuVar11);
    puVar7 = puStack_70;
    func_0x000107c61174(unaff_x20);
    func_0x000107c6157c(puVar9);
    func_0x000107c61574(puVar7);
    func_0x000107c4e5fc(puVar6);
    func_0x000107c60bd0(ppuVar11);
    puVar7 = puVar9;
    func_0x000107c61544(puVar9,"",0x74,0x212,0x2c,1);
    func_0x000107c61574(puVar9);
    func_0x000107c61574(puVar10);
    if (((ulong)puVar7 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10115d8d0);
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 10115faf0; end: 10115fbaf; -[_TtC29MapFriendPickerImplementation26FriendPickerViewController collectionView:didSelectItemAtIndexPath:] */

void FUN_10115faf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  
  lVar1 = 0;
  func_0x000107c5eff8();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  puVar2 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5efdc(puVar2,param_4);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10115f768(param_3,puVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
  return;
}



/* Entry: 10115fbb0; end: 10115fc6b; -[_TtC29MapFriendPickerImplementation26FriendPickerViewController collectionView:didDeselectItemAtIndexPath:] */

void FUN_10115fbb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  
  lVar1 = 0;
  func_0x000107c5eff8();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  puVar2 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5efdc(puVar2,param_4);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_101163078(puVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
  return;
}



/* Entry: 10115fc6c; end: 10115fcc3; -[_TtC29MapFriendPickerImplementation26FriendPickerViewController numberOfSectionsInCollectionView:] */

undefined8 FUN_10115fc6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_1;
  FUN_1011633a4();
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 10115fcc4; end: 10115fcff; -[_TtC29MapFriendPickerImplementation26FriendPickerViewController collectionView:numberOfItemsInSection:] */

undefined8
FUN_10115fcc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174();
  FUN_10115ce98(param_4);
  func_0x000107c61170(param_1);
  return param_4;
}



/* Entry: 10115fd00; end: 10115fe7b;  */

long FUN_10115fd00(undefined8 param_1,ulong param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  FUN_10115d4cc();
  if ((param_2 & 1) == 0) {
    lVar2 = 0;
    FUN_101165628();
    func_0x00010257af84();
    FUN_10115da38();
    func_0x000107c61174();
    lVar3 = lVar2;
    func_0x000107c5efe4();
    if (lVar3 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10115fe78);
      (*pcVar1)();
    }
    lVar4 = lVar3;
    func_0x000107c5eff4();
    FUN_10115ce98();
    if (lVar4 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10115fe7c);
      (*pcVar1)();
    }
  }
  else {
    lVar2 = 0;
    FUN_101164090(0,0x112d604d8,&PTR_PTR_1126b2780);
    func_0x00010257af84();
    lVar3 = lVar2;
    func_0x000107c5eff4();
    FUN_10115de50(lVar2,lVar3);
    func_0x000107c61174();
    lVar3 = lVar2;
    func_0x000107c5efe4();
    if (lVar3 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10115fe74);
      (*pcVar1)();
    }
    lVar4 = lVar3;
    func_0x000107c5eff4();
    FUN_10115ce98();
    if (lVar4 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10115fdc0);
      (*pcVar1)();
    }
  }
  func_0x000107c30a60(2,lVar3,lVar4);
  func_0x000107c59a2c(lVar2);
  func_0x000107c61170(lVar2);
  return lVar2;
}



/* Entry: 10115fe7c; end: 10115ff43; -[_TtC29MapFriendPickerImplementation26FriendPickerViewController collectionView:cellForItemAtIndexPath:] */

void FUN_10115fe7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5eff8();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5efdc(puVar3,param_4);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar2 = param_3;
  FUN_10115fd00(param_3,puVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10115ff44; end: 10116015b; -[_TtC29MapFriendPickerImplementation26FriendPickerViewController collectionView:viewForSupplementaryElementOfKind:atIndexPath:] */

void FUN_10115ff44(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined1 *puVar7;
  long extraout_x8;
  undefined1 *puVar8;
  long lVar9;
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  
  lVar1 = 0;
  func_0x000107c5eff8();
  lVar9 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  puVar8 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5faec(param_4);
  uVar5 = param_2;
  func_0x000107c5efdc(puVar8,param_5);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  lVar2 = param_1;
  func_0x000107c44c68();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c51ac8();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar3 != 0) {
      lVar2 = lVar3;
      func_0x000107c5c82c();
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      if (lVar2 != 0) {
        lVar3 = lVar2;
        func_0x000107c5faec();
        func_0x000107c61170(lVar2);
        func_0x000107c5fb5c(lVar3,uVar5);
        func_0x000107c6142c(uVar5);
        if (0 < lVar3) {
          puVar4 = PTR__OBJC_CLASS___UICollectionReusableView_1126b0d20;
          func_0x000107c610f8(PTR__OBJC_CLASS___UICollectionReusableView_1126b0d20);
          func_0x000107c453e4();
          goto LAB_101160110;
        }
      }
    }
  }
  puVar4 = (undefined *)0x0;
  FUN_101164090(0,0x112d604c0,&PTR_PTR_1126b78f8);
  uVar5 = 0x112d604c8;
  puStack_68 = puVar4;
  func_0x0001000285a8(0x112d604c8,&UNK_10d9269e8);
  ppuVar6 = &puStack_68;
  func_0x000107c5fb18(ppuVar6,uVar5);
  func_0x00010257b1cc(puVar4,param_4,param_2,ppuVar6,uVar5,puVar8,puVar4);
  func_0x000107c6142c(uVar5);
  puVar7 = puVar8;
  FUN_10115d0d4(puVar8);
  func_0x00010115ec18(puVar4,puVar8,(uint)puVar7 & 1);
LAB_101160110:
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c61170(param_3);
  (**(code **)(lVar9 + 8))(puVar8,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10116015c; end: 1011601af; -[_TtC29MapFriendPickerImplementation26FriendPickerViewController indexView:userDidSelectTitleAtIndex:] */

/* WARNING: Possible PIC construction at 0x000101160198: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010116019c) */

void FUN_10116015c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1011634ac(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1011601b0; end: 10116021b; -[_TtC29MapFriendPickerImplementation26FriendPickerViewController scrollViewWillBeginDragging:] */

/* WARNING: Possible PIC construction at 0x0001011601f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101160204: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011601f4) */
/* WARNING: Removing unreachable block (ram,0x0001011601f8) */

void FUN_1011601b0(long param_1)

{
  long lVar1;
  
  func_0x000107c61174();
  lVar1 = param_1;
  func_0x000107c44c68();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c51ac8();
    func_0x000107c61180();
    param_1 = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10116021c; end: 101160697;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10116021c(undefined8 param_1,double param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  byte bVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  long extraout_x8;
  undefined8 *puVar15;
  long lVar16;
  ulong uVar17;
  long unaff_x20;
  long lVar18;
  undefined1 *puVar19;
  code *pcVar20;
  long lVar21;
  ulong uVar22;
  code *pcVar23;
  undefined8 uVar24;
  undefined1 auStack_90 [8];
  long lStack_88;
  undefined1 *puStack_80;
  long lStack_78;
  long lStack_70;
  
  lVar7 = 0;
  func_0x000107c5eff8();
  lVar18 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar18 + 0x40));
  uVar24 = param_3;
  func_0x000107c49c80();
  lVar16 = _DAT_112d603f0;
  if ((int)uVar24 != 0) {
    lVar21 = *(long *)(unaff_x20 + _DAT_112d603f0);
    uVar17 = *(ulong *)(lVar21 + 0x10);
    lStack_88 = lVar18;
    puStack_80 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    func_0x000107c61434(lVar21);
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar17 != 0) {
      uVar22 = 0;
      lStack_78 = lVar21 + 0x28;
      lStack_70 = lVar7;
      do {
        lVar6 = lRam0000000112d604a8;
        lVar1 = lRam0000000112d60490;
        lVar18 = lRam0000000112d60478;
        uVar3 = uVar22;
        if (uVar22 <= *(ulong *)(lVar21 + 0x10)) {
          uVar3 = *(ulong *)(lVar21 + 0x10);
        }
        puVar15 = (undefined8 *)(lStack_78 + uVar22 * 0x10);
        uVar22 = uVar22 + 1;
        while( true ) {
          if (uVar22 - uVar3 == 1) {
                    /* WARNING: Does not return */
            pcVar20 = (code *)SoftwareBreakpoint(1,0x101160684);
            (*pcVar20)();
          }
          bVar5 = *(byte *)(puVar15 + -1);
          if (1 < bVar5 - 3) break;
          puVar15 = puVar15 + 2;
          uVar22 = uVar22 + 1;
          lVar7 = lStack_70;
          if (uVar22 - uVar17 == 1) goto LAB_10116048c;
        }
        if (bVar5 == 0) {
          uVar24 = *puVar15;
          func_0x000107c61438(uVar24,2);
          if (lVar6 != -1) {
            func_0x000107c61568(0x112d604a8,0x10115a668);
          }
          puVar15 = (undefined8 *)0x112d604b0;
        }
        else if (bVar5 == 1) {
          uVar24 = *puVar15;
          func_0x000107c61438(uVar24,2);
          if (lVar1 != -1) {
            func_0x000107c61568(0x112d60490,0x10115a63c);
          }
          puVar15 = (undefined8 *)0x112d60498;
        }
        else {
          uVar24 = *puVar15;
          func_0x000107c61438(uVar24,2);
          if (lVar18 != -1) {
            func_0x000107c61568(0x112d60478,0x10115a694);
          }
          puVar15 = (undefined8 *)0x112d60480;
        }
        uVar2 = *puVar15;
        uVar4 = puVar15[1];
        func_0x000107c61434(uVar4);
        func_0x000107c61430(uVar24,2);
        puVar8 = puVar10;
        func_0x000107c61558();
        puVar9 = puVar10;
        if (((ulong)puVar8 & 1) == 0) {
          puVar9 = (undefined *)0x0;
          func_0x000101162478(0,*(long *)(puVar10 + 0x10) + 1,1,puVar10,
                              PTR__swift_bridgeObjectRelease_11034f258);
        }
        uVar3 = *(ulong *)(puVar9 + 0x10);
        puVar10 = puVar9;
        if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar3) {
          puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
          func_0x000101162478(puVar10,uVar3 + 1,1,puVar9,PTR__swift_bridgeObjectRelease_11034f258);
        }
        *(ulong *)(puVar10 + 0x10) = uVar3 + 1;
        *(undefined8 *)(puVar10 + uVar3 * 0x10 + 0x20) = uVar2;
        *(undefined8 *)(puVar10 + uVar3 * 0x10 + 0x28) = uVar4;
        lVar7 = lStack_70;
      } while (uVar22 != uVar17);
    }
LAB_10116048c:
    func_0x000107c6142c(lVar21);
    lVar21 = *(long *)(puVar10 + 0x10);
    func_0x000107c6142c(puVar10);
    puVar19 = (undefined1 *)(*(long *)(*(long *)(unaff_x20 + lVar16) + 0x10) - lVar21);
    puVar11 = *(undefined1 **)(unaff_x20 + _DAT_112d603b0);
    func_0x000107c45358();
    func_0x000107c61180();
    puVar14 = puVar11;
    func_0x000107c5fc54();
    func_0x000107c61170(puVar11);
    func_0x000107c404a0(param_3);
    puVar13 = puStack_80;
    lVar18 = lStack_88;
    puVar11 = puVar19;
    if ((param_2 <= 0.0) || (*(ulong *)(puVar14 + 0x10) < 2)) {
      func_0x000107c6142c(puVar14);
      lVar7 = 0;
      puVar13 = puVar14;
    }
    else {
      lVar1 = ((ulong)*(byte *)(lStack_88 + 0x50) + 0x20 &
              ((ulong)*(byte *)(lStack_88 + 0x50) ^ 0xffffffffffffffff)) +
              *(long *)(lStack_88 + 0x48);
      pcVar20 = *(code **)(lStack_88 + 0x10);
      puVar12 = puStack_80;
      (*pcVar20)(puStack_80,puVar14 + lVar1,lVar7);
      func_0x000107c5eff4();
      pcVar23 = *(code **)(lVar18 + 8);
      (*pcVar23)(puVar13,lVar7);
      if ((long)puVar19 < (long)puVar12) {
        (*pcVar20)(puVar13,puVar14 + lVar1,lVar7);
        func_0x000107c6142c();
        func_0x000107c5eff4();
        (*pcVar23)(puVar13,lVar7);
        puVar11 = puVar14;
      }
      else {
        func_0x000107c6142c(puVar14);
        puVar13 = puVar14;
      }
      lVar7 = (long)puVar11 - (long)puVar19;
    }
    if (SBORROW8((long)puVar11,(long)puVar19)) {
                    /* WARNING: Does not return */
      pcVar20 = (code *)SoftwareBreakpoint(1,0x101160680);
      (*pcVar20)();
    }
    if (lVar7 < lVar21) {
      func_0x00010115970c();
      func_0x000107c58df4();
    }
    else {
      puVar14 = *(undefined1 **)(unaff_x20 + _DAT_112d603e8);
      if (puVar14 == (undefined1 *)0x0) {
        return;
      }
      lVar7 = *(long *)(*(long *)(unaff_x20 + lVar16) + 0x10);
      if (SBORROW8((long)puVar11,lVar7)) {
                    /* WARNING: Does not return */
        pcVar20 = (code *)SoftwareBreakpoint(1,0x101160688);
        (*pcVar20)();
      }
      func_0x000107c61174();
      puVar13 = puVar14;
      func_0x000107c5b6b4();
      func_0x000107c61180();
      puVar19 = puVar13;
      func_0x000107c40808();
      func_0x000107c61170(puVar13);
      puVar13 = puVar14;
      if ((long)puVar11 - lVar7 < (long)puVar19) {
        lVar16 = *(long *)(*(long *)(unaff_x20 + lVar16) + 0x10);
        if (SBORROW8((long)puVar11,lVar16)) {
                    /* WARNING: Does not return */
          pcVar20 = (code *)SoftwareBreakpoint(1,0x10116068c);
          (*pcVar20)();
        }
        if ((long)puVar11 - lVar16 < 0) {
                    /* WARNING: Does not return */
          pcVar20 = (code *)SoftwareBreakpoint(1,0x101160690);
          (*pcVar20)();
        }
        puVar11 = puVar14;
        func_0x000107c45338();
        if ((long)puVar11 < 0) {
                    /* WARNING: Does not return */
          pcVar20 = (code *)SoftwareBreakpoint(1,0x101160694);
          (*pcVar20)();
        }
        puVar13 = puVar11;
        func_0x00010115970c();
        if (SCARRY8((long)puVar11,lVar21)) {
                    /* WARNING: Does not return */
          pcVar20 = (code *)SoftwareBreakpoint(1,0x101160698);
          (*pcVar20)();
        }
        func_0x000107c58df4();
        func_0x000107c61170(puVar14);
      }
    }
    func_0x000107c61170(puVar13);
  }
  return;
}



/* Entry: 101160698; end: 1011606e7; -[_TtC29MapFriendPickerImplementation26FriendPickerViewController scrollViewDidScroll:] */

/* WARNING: Possible PIC construction at 0x0001011606d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011606d4) */

void FUN_101160698(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10116021c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1011606e8; end: 1011606ef; -[_TtC29MapFriendPickerImplementation26FriendPickerViewController textFieldDidEndEditing:] */

void FUN_1011606e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c13a0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_resignFirstResponder_11262c258);
  return;
}



/* Entry: 1011606f0; end: 10116083b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1011606f0(ulong param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  plVar6 = &lStack_50;
  lVar2 = unaff_x20;
  func_0x000107c44c68();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar5 = lVar2;
    func_0x000107c51ac8();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar5 != 0) {
      FUN_101164090(0,0x112d60470,&PTR__OBJC_CLASS___UITextField_1126af060);
      func_0x000107c61174();
      uVar3 = param_1;
      func_0x000107c60118();
      func_0x000107c61170(param_1);
      func_0x000107c61170(lVar5);
      if ((uVar3 & 1) != 0) {
        uVar4 = 0;
        func_0x000107c5fadc(0,0xe000000000000000);
        func_0x000107c59c6c(param_1);
        func_0x000107c61170(uVar4);
        uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112d60410);
        lVar5 = 0;
        FUN_101152628();
        lVar2 = lVar5;
        func_0x000107c610f8();
        puVar1 = (undefined8 *)(lVar2 + _DAT_112d60160);
        puVar1[1] = 0;
        *puVar1 = 1;
        *(undefined2 *)(puVar1 + 2) = 0xc000;
        lStack_50 = lVar2;
        lStack_48 = lVar5;
        func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
        func_0x000107c424b8(uVar4);
        func_0x000107c61170(plVar6);
      }
    }
  }
  return 1;
}



/* Entry: 10116083c; end: 101160893; -[_TtC29MapFriendPickerImplementation26FriendPickerViewController textFieldShouldClear:] */

undefined8 FUN_10116083c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1011606f0(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return 1;
}



/* Entry: 101160894; end: 10116096b; -[_TtC29MapFriendPickerImplementation26FriendPickerViewController textFieldShouldReturn:] */

undefined8 FUN_101160894(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  func_0x000107c61174();
  func_0x000107c61174();
  lVar1 = param_1;
  func_0x000107c44c68();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c51ac8();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      FUN_101164090(0,0x112d60470,&PTR__OBJC_CLASS___UITextField_1126af060);
      uVar3 = param_3;
      func_0x000107c61174();
      uVar4 = uVar3;
      func_0x000107c60118();
      func_0x000107c61170(uVar3);
      func_0x000107c61170(lVar2);
      if ((uVar4 & 1) != 0) {
        func_0x000107c50588(uVar3);
      }
    }
  }
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return 0;
}



/* Entry: 10116096c; end: 101160977; -[_TtC29MapFriendPickerImplementation26FriendPickerViewController defaultProjectNameV2] */

void FUN_10116096c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (&PTR____CFConstantStringClassReference_110e607d8);
  return;
}



/* Entry: 101160978; end: 101160983; -[_TtC29MapFriendPickerImplementation26FriendPickerViewController defaultSubProjectName] */

void FUN_101160978(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (&PTR____CFConstantStringClassReference_110da0338);
  return;
}



/* Entry: 101160984; end: 101160bd7;  */

void FUN_101160984(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long extraout_x8;
  long extraout_x8_00;
  long lVar11;
  long lVar12;
  long lStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar2 = 0;
  func_0x000107c5f7fc();
  puVar1 = PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8;
  lStack_98 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_98 + 0x40));
  lVar11 = (long)&lStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5f824();
  lVar12 = *(long *)(lVar3 + -8);
  lStack_a0 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar3 = lVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar4 = 0;
  FUN_101164090(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
  func_0x000107c5ffdc();
  puVar5 = &UNK_110388940;
  func_0x000107c613fc(&UNK_110388940,0x18,7);
  func_0x000107c61614(puVar5 + 0x10);
  puVar6 = &UNK_110388aa8;
  func_0x000107c613fc(&UNK_110388aa8,0x28,7);
  *(undefined **)(puVar6 + 0x10) = puVar5;
  *(undefined8 *)(puVar6 + 0x18) = param_1;
  *(undefined8 *)(puVar6 + 0x20) = param_2;
  pcStack_70 = FUN_101163d38;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_110388ac0;
  ppuVar7 = &puStack_90;
  puStack_68 = puVar6;
  func_0x000107c60bc4(ppuVar7);
  puVar5 = puStack_68;
  func_0x000107c6157c(param_2);
  func_0x000107c61574(puVar5);
  func_0x000107c5f808(lVar3);
  puStack_90 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar8 = 0x112d4af88;
  FUN_101163d44(0x112d4af88,puVar1,PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
  uVar9 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar10 = 0x112d4af98;
  func_0x000101163d84(0x112d4af98,0x112d4af90,&UNK_10d914100);
  func_0x000107c60264(lVar11,&puStack_90,uVar9,uVar10,lVar2,uVar8);
  func_0x000107c5ffe8(0,lVar3,lVar11,ppuVar7);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61170(uVar4);
  (**(code **)(lStack_98 + 8))(lVar11,lVar2);
  (**(code **)(lVar12 + 8))(lVar3,lStack_a0);
  return;
}



/* Entry: 101160bd8; end: 101160c97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101160bd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar1 = param_2;
    FUN_101160c98(param_2,param_3);
    if ((*(byte *)(param_1 + _DAT_112d603f8) & 0xfe) == 2) {
      FUN_101160fd4(param_2,param_3);
      func_0x000107c61170(uVar1);
      uVar1 = param_2;
    }
    func_0x000107c4f018(param_1);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 101160c98; end: 101160fd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101160c98(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  ppuVar2 = &puStack_a0;
  ppuVar6 = &puStack_a0;
  uVar9 = param_1;
  uVar11 = param_2;
  FUN_10116602c();
  puVar1 = &UNK_110388b48;
  func_0x000107c613fc(&UNK_110388b48,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  uVar12 = uVar11;
  func_0x000107c5fadc(uVar9,uVar11);
  func_0x000107c6142c(uVar11);
  puVar7 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0x101163dec;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_100de205c;
  puStack_88 = &UNK_110388b60;
  puStack_78 = puVar1;
  func_0x000107c60bc4(&puStack_a0);
  puVar3 = PTR_PTR_1126aed70;
  func_0x000107c61168();
  puVar4 = puVar3;
  func_0x000107c3dad0();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61170(uVar9);
  puVar5 = puStack_78;
  func_0x000107c61574(puStack_78);
  func_0x000101165aec();
  puVar1 = &UNK_110388b98;
  func_0x000107c613fc(&UNK_110388b98,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  uVar9 = uVar12;
  func_0x000107c5fadc(puVar5,uVar12);
  func_0x000107c6142c(uVar12);
  uStack_80 = 0x101164110;
  puStack_a0 = puVar7;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_100de205c;
  puStack_88 = &UNK_110388bb0;
  puStack_78 = puVar1;
  func_0x000107c60bc4(&puStack_a0);
  func_0x000107c3dad0();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61170(puVar5);
  puVar1 = puStack_78;
  func_0x000107c61574(puStack_78);
  lVar8 = _DAT_112d603f8;
  if (*(char *)(unaff_x20 + _DAT_112d603f8) == '\0') {
    func_0x0001011660e8();
  }
  else {
    func_0x0001011661b4();
  }
  puVar7 = puVar1;
  uVar11 = uVar9;
  if (*(char *)(unaff_x20 + lVar8) == '\0') {
    func_0x000101166284();
  }
  else {
    func_0x000101166350();
  }
  lVar8 = 0x112d360a8;
  FUN_10116149c(0x112d360a8,&PTR_PTR_1126aed70,0x112d36e70,&UNK_10d901a80);
  func_0x000107c613fc();
  *(undefined8 *)(lVar8 + 0x18) = 5;
  *(undefined8 *)(lVar8 + 0x10) = 2;
  *(undefined **)(lVar8 + 0x20) = puVar4;
  *(undefined **)(lVar8 + 0x28) = puVar3;
  puVar5 = PTR_PTR_1126aed78;
  func_0x000107c610f8(PTR_PTR_1126aed78);
  func_0x000107c61174(puVar4);
  func_0x000107c61174(puVar3);
  func_0x000107c5fadc(puVar1,uVar9);
  func_0x000107c6142c(uVar9);
  func_0x000107c5fadc(puVar7,uVar11);
  func_0x000107c6142c(uVar11);
  uVar9 = 0;
  FUN_101164090(0,0x112d360a8,&PTR_PTR_1126aed70);
  lVar10 = lVar8;
  func_0x000107c5fc48(lVar8,uVar9);
  func_0x000107c61574(lVar8);
  func_0x000107c48d50(puVar5);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(lVar10);
  func_0x000107c53dec(puVar5);
  func_0x000107c59bc8(puVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  return puVar5;
}



/* Entry: 101160fd4; end: 10116123b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101160fd4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  ppuVar2 = &puStack_90;
  uVar7 = param_1;
  uVar9 = param_2;
  FUN_10116602c();
  puVar1 = &UNK_110388af8;
  func_0x000107c613fc(&UNK_110388af8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  uVar10 = uVar9;
  func_0x000107c5fadc(uVar7,uVar9);
  func_0x000107c6142c(uVar9);
  uStack_70 = 0x101163dc8;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_100de205c;
  puStack_78 = &UNK_110388b10;
  puStack_68 = puVar1;
  func_0x000107c60bc4(&puStack_90);
  puVar1 = PTR_PTR_1126aed70;
  func_0x000107c61168();
  func_0x000107c3dad0();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61170(uVar7);
  puVar3 = puStack_68;
  func_0x000107c61574(puStack_68);
  func_0x00010116641c();
  puVar4 = puVar3;
  uVar7 = uVar10;
  if (*(char *)(unaff_x20 + _DAT_112d603f8) == '\x02') {
    func_0x0001011664e8();
  }
  else {
    func_0x0001011665b4();
  }
  lVar5 = 0x112d360a8;
  FUN_10116149c(0x112d360a8,&PTR_PTR_1126aed70,0x112d36e70,&UNK_10d901a80);
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x18) = 3;
  *(undefined8 *)(lVar5 + 0x10) = 1;
  *(undefined **)(lVar5 + 0x20) = puVar1;
  puVar6 = PTR_PTR_1126aed78;
  func_0x000107c610f8(PTR_PTR_1126aed78);
  func_0x000107c61174(puVar1);
  func_0x000107c5fadc(puVar3,uVar10);
  func_0x000107c6142c(uVar10);
  func_0x000107c5fadc(puVar4,uVar7);
  func_0x000107c6142c(uVar7);
  uVar7 = 0;
  FUN_101164090(0,0x112d360a8,&PTR_PTR_1126aed70);
  lVar8 = lVar5;
  func_0x000107c5fc48(lVar5,uVar7);
  func_0x000107c61574(lVar5);
  func_0x000107c48d50(puVar6);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(lVar8);
  func_0x000107c53dec(puVar6);
  func_0x000107c59bc8(puVar6);
  func_0x000107c61170(puVar1);
  return puVar6;
}



/* Entry: 10116123c; end: 101161297; -[_TtC29MapFriendPickerImplementation26FriendPickerViewController header:didChangeHeight:] */

/* WARNING: Possible PIC construction at 0x00010116127c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101161280) */

void FUN_10116123c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_2);
  FUN_101163970(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 101161298; end: 1011613ff;  */

int FUN_101161298(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfb < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 4) {
      iVar2 = 4;
    }
    if (param_2 + 4 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_101161314;
        goto LAB_1011612f8;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1011612f8:
      return ((uint)*param_1 | uVar1 << 8) - 4;
    }
  }
LAB_101161314:
  iVar2 = *param_1 - 5;
  if (*param_1 < 5) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 101161400; end: 10116149b;  */

void FUN_101161400(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d60468 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9269a4;
  func_0x000107c61520(&UNK_10d9269a4,&UNK_1103888e8);
  puRam0000000112d60468 = puVar1;
  return;
}



/* Entry: 10116149c; end: 101161513;  */

void FUN_10116149c(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_101164090(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 101161514; end: 101161643;  */

undefined * FUN_101161514(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101161644);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = (undefined *)0x112d60630;
    func_0x0001000285a8(0x112d60630,&UNK_10d926a80);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112d60638;
    func_0x0001000285a8(0x112d60638,&UNK_10d926a88);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 0x10 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 101161644; end: 1011617bf;  */

undefined * FUN_101161644(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  uVar7 = param_2;
  if ((param_3 & 1) != 0) {
    uVar7 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar7 < (long)param_2) {
      if ((long)(uVar7 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1011617c0);
        (*pcVar3)();
      }
      uVar7 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar7 <= (long)param_2) {
        uVar7 = param_2;
      }
    }
  }
  uVar9 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar7 <= (long)uVar9) {
    uVar7 = uVar9;
  }
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar7 != 0) {
    puVar4 = (undefined *)0x112d57310;
    func_0x0001000285a8(0x112d57310,&UNK_10d91df70);
    lVar5 = 0;
    func_0x000107c5eff8();
    lVar10 = *(long *)(*(long *)(lVar5 + -8) + 0x48);
    uVar8 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
    uVar11 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
    func_0x000107c613fc(puVar4,uVar11 + lVar10 * uVar7,uVar8 | 7);
    puVar6 = puVar4;
    func_0x000107c610a4();
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1011617b8);
      (*pcVar3)();
    }
    lVar5 = (long)puVar6 - uVar11;
    if (lVar5 == -0x8000000000000000 && lVar10 == -1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1011617bc);
      (*pcVar3)();
    }
    lVar2 = 0;
    if (lVar10 != 0) {
      lVar2 = lVar5 / lVar10;
    }
    *(ulong *)(puVar4 + 0x10) = uVar9;
    *(long *)(puVar4 + 0x18) = lVar2 << 1;
  }
  lVar5 = 0;
  func_0x000107c5eff8();
  uVar7 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar7 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
  puVar6 = puVar4 + uVar7;
  puVar1 = param_4 + uVar7;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar6,puVar1,uVar9,lVar5);
  }
  else {
    if ((puVar4 < param_4) || (puVar1 + *(long *)(*(long *)(lVar5 + -8) + 0x48) * uVar9 <= puVar6))
    {
      func_0x000107c61414(puVar6,puVar1,uVar9);
    }
    else if (puVar4 != param_4) {
      func_0x000107c61410(puVar6,puVar1,uVar9);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar4;
}



/* Entry: 1011617c0; end: 101161baf;  */

undefined * FUN_1011617c0(undefined *param_1,long param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  if (param_2 == 0) {
    func_0x000107c615e8();
    puVar5 = PTR___swiftEmptySetSingleton_11034f1d8;
  }
  else {
    func_0x0001000285a8(0x112d606b8,&UNK_10d926a98);
    puVar5 = param_1;
    func_0x000107c602e4(param_1,param_2);
    puStack_68 = puVar5;
    func_0x000107c60288();
    puVar7 = param_1;
    func_0x000107c602ac();
    if (puVar7 != (undefined *)0x0) {
      uVar6 = 0;
      func_0x000103a2db6c(0);
      puVar2 = PTR___syXlN_11034f1a0;
      do {
        puStack_78 = puVar7;
        func_0x000107c6147c(&uStack_70,&puStack_78,puVar2 + 8,uVar6,7);
        uVar3 = uStack_70;
        if (*(ulong *)(puVar5 + 0x18) <= *(ulong *)(puVar5 + 0x10)) {
          FUN_101161d00(*(ulong *)(puVar5 + 0x10) + 1);
          puVar5 = puStack_68;
        }
        puVar7 = *(undefined **)(puVar5 + 0x28);
        func_0x000107c60114();
        uVar11 = -1L << ((ulong)(byte)puVar5[0x20] & 0x3f);
        uVar10 = (ulong)puVar7 & (uVar11 ^ 0xffffffffffffffff);
        uVar8 = uVar10 >> 6;
        uVar9 = -1L << (uVar10 & 0x3f) &
                (*(ulong *)(puVar5 + uVar8 * 8 + 0x38) ^ 0xffffffffffffffff);
        if (uVar9 == 0) {
          bVar1 = false;
          uVar9 = 0x3f - uVar11 >> 6;
          do {
            uVar10 = uVar8 + 1;
            if ((uVar10 == uVar9) && (bVar1)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1011619ac);
              (*pcVar4)();
            }
            uVar8 = 0;
            if (uVar10 != uVar9) {
              uVar8 = uVar10;
            }
            bVar1 = (bool)(uVar10 == uVar9 | bVar1);
          } while (*(ulong *)(puVar5 + uVar8 * 8 + 0x38) == 0xffffffffffffffff);
          uVar9 = ~*(ulong *)(puVar5 + uVar8 * 8 + 0x38);
          uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
          uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
          uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
          uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
          uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar8 << 6;
        }
        else {
          uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
          uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
          uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
          uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
          uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar10 & 0x7fffffffffffffc0;
        }
        uVar8 = uVar9 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(puVar5 + uVar8 + 0x38) = 1L << (uVar9 & 0x3f) | *(ulong *)(puVar5 + uVar8 + 0x38)
        ;
        *(undefined8 *)(*(long *)(puVar5 + 0x30) + uVar9 * 8) = uVar3;
        *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
        func_0x000107c602ac();
      } while (puVar7 != (undefined *)0x0);
    }
    func_0x000107c61574(param_1);
  }
  return puVar5;
}



/* Entry: 101161bb0; end: 101161cff;  */

void FUN_101161bb0(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  long lVar9;
  
  func_0x0001000285a8(0x112d606b8,&UNK_10d926a98);
  lVar8 = *unaff_x20;
  lVar4 = lVar8;
  func_0x000107c602dc();
  if (*(long *)(lVar8 + 0x10) != 0) {
    lVar1 = lVar8 + 0x38;
    uVar5 = (1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar4 != lVar8 || lVar1 + uVar5 * 8 <= lVar4 + 0x38U) {
      func_0x000107c610b8(lVar4 + 0x38U,lVar1,uVar5 << 3);
    }
    lVar9 = 0;
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar8 + 0x10);
    uVar6 = 1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
    uVar5 = 0xffffffffffffffff;
    if ((*(byte *)(lVar8 + 0x20) & 0x3f) < 6) {
      uVar5 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar5 = uVar5 & *(ulong *)(lVar8 + 0x38);
    if (uVar5 == 0) goto LAB_101161c8c;
    do {
      uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar5 = uVar5 - 1 & uVar5;
      while( true ) {
        uVar7 = LZCOUNT(uVar7) | lVar9 << 6;
        *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar7 * 8) =
             *(undefined8 *)(*(long *)(lVar8 + 0x30) + uVar7 * 8);
        func_0x000107c61174();
        if (uVar5 != 0) break;
LAB_101161c8c:
        do {
          lVar2 = lVar9 + 1;
          if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101161d00);
            (*pcVar3)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar2) goto LAB_101161cd8;
          uVar5 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar9 = lVar9 + 1;
        } while (uVar5 == 0);
        uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
        uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
        uVar5 = uVar5 - 1 & uVar5;
        lVar9 = lVar2;
      }
    } while( true );
  }
LAB_101161cd8:
  func_0x000107c61574(lVar8);
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 101161d00; end: 101161f2b;  */

void FUN_101161d00(long param_1)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  undefined8 uVar11;
  long lVar12;
  ulong *puVar13;
  long lVar14;
  ulong uVar15;
  
  lVar12 = *unaff_x20;
  lVar1 = *(long *)(lVar12 + 0x18);
  if (*(long *)(lVar12 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar11 = 0x112d606b8;
  func_0x0001000285a8(0x112d606b8,&UNK_10d926a98);
  lVar4 = lVar12;
  func_0x000107c602e0(lVar12,lVar1,1,uVar11);
  if (*(long *)(lVar12 + 0x10) == 0) {
LAB_101161efc:
    func_0x000107c61574(lVar12);
    *unaff_x20 = lVar4;
    return;
  }
  puVar13 = (ulong *)(lVar12 + 0x38);
  uVar9 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar15 = uVar15 & *puVar13;
  lVar1 = lVar4 + 0x38;
  lVar7 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar14 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101161f28);
          (*pcVar3)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar14) {
          uVar15 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
          if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
            *puVar13 = -1L << (uVar15 & 0x3f);
          }
          else {
            func_0x000107c60ee4(puVar13,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(lVar12 + 0x10) = 0;
          goto LAB_101161efc;
        }
        uVar15 = puVar13[lVar14];
        lVar7 = lVar7 + 1;
      } while (uVar15 == 0);
      uVar6 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar6 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar14 = lVar7;
    }
    uVar11 = *(undefined8 *)(*(long *)(lVar12 + 0x30) + (LZCOUNT(uVar6) | lVar14 << 6) * 8);
    uVar5 = *(ulong *)(lVar4 + 0x28);
    func_0x000107c60114();
    uVar10 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
    uVar5 = uVar5 & (uVar10 ^ 0xffffffffffffffff);
    uVar8 = uVar5 >> 6;
    uVar6 = -1L << (uVar5 & 0x3f) & (*(ulong *)(lVar1 + uVar8 * 8) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar2 = false;
      uVar6 = 0x3f - uVar10 >> 6;
      do {
        uVar5 = uVar8 + 1;
        if ((uVar5 == uVar6) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101161f2c);
          (*pcVar3)();
        }
        uVar8 = 0;
        if (uVar5 != uVar6) {
          uVar8 = uVar5;
        }
        bVar2 = (bool)(uVar5 == uVar6 | bVar2);
        uVar5 = *(ulong *)(lVar1 + uVar8 * 8);
      } while (uVar5 == 0xffffffffffffffff);
      uVar5 = ~uVar5;
      uVar6 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar8 << 6;
    }
    else {
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar5 & 0x7fffffffffffffc0;
    }
    uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar8) = 1L << (uVar6 & 0x3f) | *(ulong *)(lVar1 + uVar8);
    *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar6 * 8) = uVar11;
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
    lVar7 = lVar14;
  } while( true );
}



/* Entry: 101161f2c; end: 101161fab;  */

void FUN_101161f2c(undefined8 param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *(ulong *)(param_2 + 0x28);
  func_0x000107c60114();
  lVar1 = param_2 + 0x38;
  uVar3 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar2 = uVar2 & (uVar3 ^ 0xffffffffffffffff);
  func_0x000107c60274(uVar2,lVar1,~uVar3);
  uVar3 = uVar2 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar3) = 1L << (uVar2 & 0x3f) | *(ulong *)(lVar1 + uVar3);
  *(undefined8 *)(*(long *)(param_2 + 0x30) + uVar2 * 8) = param_1;
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + 1;
  return;
}



/* Entry: 101161fac; end: 10116231b;  */

undefined8 FUN_101161fac(ulong *param_1,ulong param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *unaff_x20;
  ulong uVar7;
  ulong uStack_68;
  
  uVar7 = *unaff_x20;
  if ((uVar7 & 0xc000000000000001) == 0) {
    func_0x000103a2db6c(0);
    uVar3 = *(ulong *)(uVar7 + 0x28);
    func_0x000107c60114();
    uVar6 = -1L << ((ulong)*(byte *)(uVar7 + 0x20) & 0x3f);
    uVar3 = uVar3 & (uVar6 ^ 0xffffffffffffffff);
    if ((*(ulong *)(uVar7 + 0x38 + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1) != 0) {
      do {
        uVar4 = *(ulong *)(*(long *)(uVar7 + 0x30) + uVar3 * 8);
        func_0x000107c61174();
        uVar5 = uVar4;
        func_0x000107c60118();
        func_0x000107c61170(uVar4);
        if ((uVar5 & 1) != 0) {
          func_0x000107c61170(param_2);
          *param_1 = *(ulong *)(*(long *)(uVar7 + 0x30) + uVar3 * 8);
          func_0x000107c61174();
          return 0;
        }
        uVar3 = uVar3 + 1 & ~uVar6;
      } while ((*(ulong *)(uVar7 + 0x38 + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1) != 0);
    }
    func_0x000107c61558(*unaff_x20);
    uStack_68 = *unaff_x20;
    func_0x000107c61174();
    func_0x0001011621d4();
    *unaff_x20 = uStack_68;
  }
  else {
    uVar3 = uVar7 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar7) {
      uVar3 = uVar7;
    }
    func_0x000107c61174();
    func_0x000107c61434(uVar7);
    uVar6 = param_2;
    func_0x000107c602a0(param_2,uVar3);
    func_0x000107c61170(param_2);
    if (uVar6 != 0) {
      func_0x000107c6142c(uVar7);
      func_0x000107c61170(param_2);
      uVar2 = 0;
      uStack_68 = uVar6;
      func_0x000103a2db6c(0);
      func_0x000107c6147c(param_1,&uStack_68,PTR___syXlN_11034f1a0 + 8,uVar2,7);
      return 0;
    }
    uVar6 = uVar3;
    func_0x000107c6029c();
    if (SCARRY8(uVar6,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1011621d4);
      (*pcVar1)();
    }
    FUN_1011617c0(uVar3,uVar6 + 1);
    uVar6 = *(ulong *)(uVar3 + 0x10);
    uStack_68 = uVar3;
    if (uVar6 < *(ulong *)(uVar3 + 0x18)) {
      func_0x000107c61174(param_2);
    }
    else {
      func_0x000107c61174(param_2);
      FUN_101161d00(uVar6 + 1);
      uVar3 = uStack_68;
    }
    FUN_101161f2c(param_2,uVar3);
    func_0x000107c6142c(uVar7);
    *unaff_x20 = uVar3;
  }
  *param_1 = param_2;
  return 1;
}



/* Entry: 10116231c; end: 101162353;  */

void FUN_10116231c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_101162354();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 101162354; end: 1011626df;  */

undefined * FUN_101162354(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101162478);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = param_1;
    func_0x000101161440();
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0;
    func_0x000103a2db6c(0);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 1011626e0; end: 101162737;  */

void FUN_1011626e0(byte param_1)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  func_0x000107c6068c(auStack_78,*(undefined8 *)(unaff_x20 + 0x28));
  uVar1 = (ulong)param_1;
  func_0x000107c60690();
  func_0x000107c606a8();
  uVar2 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar1 = uVar1 & (uVar2 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) == 0) {
    return;
  }
  do {
    if (*(byte *)(*(long *)(unaff_x20 + 0x30) + uVar1) == param_1) {
      return;
    }
    uVar1 = uVar1 + 1 & ~uVar2;
  } while ((*(ulong *)(unaff_x20 + 0x40 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0);
  return;
}



/* Entry: 101162738; end: 10116279f;  */

void FUN_101162738(char param_1,ulong param_2)

{
  ulong uVar1;
  long unaff_x20;
  
  uVar1 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar1 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) == 0) {
    return;
  }
  do {
    if (*(char *)(*(long *)(unaff_x20 + 0x30) + param_2) == param_1) {
      return;
    }
    param_2 = param_2 + 1 & ~uVar1;
  } while ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
  return;
}



/* Entry: 1011627a0; end: 1011628b7;  */

void FUN_1011627a0(undefined8 param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *unaff_x20;
  long lVar7;
  
  lVar7 = *unaff_x20;
  uVar2 = param_2;
  uVar3 = param_2;
  FUN_1011626e0();
  lVar4 = *(long *)(lVar7 + 0x10);
  uVar6 = (ulong)~(uint)uVar3 & 1;
  lVar5 = lVar4 + uVar6;
  if (SCARRY8(lVar4,uVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10116284c);
    (*pcVar1)();
  }
  if (*(long *)(lVar7 + 0x18) < lVar5) {
    param_3 = param_3 & 1;
    FUN_101162a04(lVar5);
    uVar2 = param_2;
    FUN_1011626e0();
    if (((uint)uVar3 & 1) != (param_3 & 1)) {
      func_0x000107c60624(&UNK_1103888e8);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101162830);
      (*pcVar1)();
    }
  }
  else if ((param_3 & 1) == 0) {
    FUN_1011628b8();
    lVar5 = *unaff_x20;
    goto joined_r0x000101162860;
  }
  lVar5 = *unaff_x20;
joined_r0x000101162860:
  if ((uVar3 & 1) == 0) {
    lVar4 = lVar5 + (uVar2 >> 6) * 8;
    *(ulong *)(lVar4 + 0x40) = *(ulong *)(lVar4 + 0x40) | 1L << (uVar2 & 0x3f);
    *(char *)(*(long *)(lVar5 + 0x30) + uVar2) = (char)param_2;
    *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8) = param_1;
    if (SCARRY8(*(long *)(lVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1011628b8);
      (*pcVar1)();
    }
    *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
  }
  else {
    *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8) = param_1;
  }
  return;
}



/* Entry: 1011628b8; end: 101162a03;  */

void FUN_1011628b8(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *unaff_x20;
  long lVar10;
  
  func_0x0001000285a8(0x112d604d0,&UNK_10d9269f8);
  lVar10 = *unaff_x20;
  lVar3 = lVar10;
  func_0x000107c6048c();
  if (*(long *)(lVar10 + 0x10) != 0) {
    lVar1 = lVar10 + 0x40;
    uVar4 = (1L << ((ulong)*(byte *)(lVar3 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar3 != lVar10 || lVar1 + uVar4 * 8 <= lVar3 + 0x40U) {
      func_0x000107c610b8(lVar3 + 0x40U,lVar1,uVar4 << 3);
    }
    lVar5 = 0;
    *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar10 + 0x10);
    uVar6 = 1L << ((ulong)*(byte *)(lVar10 + 0x20) & 0x3f);
    uVar4 = 0xffffffffffffffff;
    if ((*(byte *)(lVar10 + 0x20) & 0x3f) < 6) {
      uVar4 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar4 = uVar4 & *(ulong *)(lVar10 + 0x40);
    lVar7 = lVar5;
    if (uVar4 == 0) goto LAB_101162990;
    do {
      uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar4 = uVar4 - 1 & uVar4;
      uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 << 6;
      while( true ) {
        uVar9 = *(undefined8 *)(*(long *)(lVar10 + 0x38) + uVar8 * 8);
        *(undefined1 *)(*(long *)(lVar3 + 0x30) + uVar8) =
             *(undefined1 *)(*(long *)(lVar10 + 0x30) + uVar8);
        *(undefined8 *)(*(long *)(lVar3 + 0x38) + uVar8 * 8) = uVar9;
        lVar7 = lVar5;
        if (uVar4 != 0) break;
LAB_101162990:
        do {
          lVar5 = lVar7 + 1;
          if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101162a04);
            (*pcVar2)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar5) goto LAB_1011629e4;
          uVar4 = *(ulong *)(lVar1 + lVar5 * 8);
          lVar7 = lVar7 + 1;
        } while (uVar4 == 0);
        uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar4 - 1 & uVar4;
        uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 * 0x40;
      }
    } while( true );
  }
LAB_1011629e4:
  func_0x000107c61574(lVar10);
  *unaff_x20 = lVar3;
  return;
}



/* Entry: 101162a04; end: 101162c77;  */

void FUN_101162a04(long param_1,ulong param_2)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined1 auStack_a8 [72];
  
  lVar11 = *unaff_x20;
  lVar1 = *(long *)(lVar11 + 0x18);
  if (*(long *)(lVar11 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar16 = 0x112d604d0;
  func_0x0001000285a8(0x112d604d0,&UNK_10d9269f8);
  lVar5 = lVar11;
  func_0x000107c60490(lVar11,lVar1,param_2,uVar16);
  if (*(long *)(lVar11 + 0x10) == 0) {
LAB_101162c44:
    func_0x000107c61574(lVar11);
    *unaff_x20 = lVar5;
    return;
  }
  puVar13 = (ulong *)(lVar11 + 0x40);
  uVar9 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
    uVar12 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar12 = uVar12 & *puVar13;
  lVar1 = lVar5 + 0x40;
  lVar7 = 0;
  do {
    if (uVar12 == 0) {
      do {
        lVar15 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101162c74);
          (*pcVar4)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar15) {
          if ((param_2 & 1) != 0) {
            uVar12 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
            if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
              *puVar13 = -1L << (uVar12 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar13,uVar12 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar11 + 0x10) = 0;
          }
          goto LAB_101162c44;
        }
        uVar12 = puVar13[lVar15];
        lVar7 = lVar7 + 1;
      } while (uVar12 == 0);
      uVar6 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
    }
    else {
      uVar6 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
      lVar15 = lVar7;
    }
    uVar6 = LZCOUNT(uVar6) | lVar15 << 6;
    bVar2 = *(byte *)(*(long *)(lVar11 + 0x30) + uVar6);
    uVar14 = (ulong)bVar2;
    uVar16 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar6 * 8);
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar5 + 0x28));
    func_0x000107c60690();
    func_0x000107c606a8();
    uVar10 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
    uVar14 = uVar14 & (uVar10 ^ 0xffffffffffffffff);
    uVar8 = uVar14 >> 6;
    uVar6 = -1L << (uVar14 & 0x3f) & (*(ulong *)(lVar1 + uVar8 * 8) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar3 = false;
      uVar6 = 0x3f - uVar10 >> 6;
      do {
        uVar14 = uVar8 + 1;
        if ((uVar14 == uVar6) && (bVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101162c78);
          (*pcVar4)();
        }
        uVar8 = 0;
        if (uVar14 != uVar6) {
          uVar8 = uVar14;
        }
        bVar3 = (bool)(uVar14 == uVar6 | bVar3);
        uVar14 = *(ulong *)(lVar1 + uVar8 * 8);
      } while (uVar14 == 0xffffffffffffffff);
      uVar14 = ~uVar14;
      uVar6 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar8 << 6;
    }
    else {
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar14 & 0x7fffffffffffffc0;
    }
    uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar8) = 1L << (uVar6 & 0x3f) | *(ulong *)(lVar1 + uVar8);
    *(byte *)(*(long *)(lVar5 + 0x30) + uVar6) = bVar2;
    *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar6 * 8) = uVar16;
    *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
    lVar7 = lVar15;
  } while( true );
}



/* Entry: 101162c78; end: 101162d4f;  */

undefined * FUN_101162c78(long param_1)

{
  byte bVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  
  puVar6 = *(undefined **)(param_1 + 0x10);
  puVar3 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar6 != (undefined *)0x0) {
    uVar4 = 0;
    func_0x0001000285a8(0x112d604d0);
    puVar3 = puVar6;
    func_0x000107c60498();
    puVar8 = (undefined8 *)(param_1 + 0x28);
    do {
      bVar1 = *(byte *)(puVar8 + -1);
      uVar7 = (ulong)bVar1;
      uVar9 = *puVar8;
      FUN_1011626e0();
      if ((uVar4 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101162d4c);
        (*pcVar2)();
      }
      uVar5 = uVar7 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar3 + uVar5 + 0x40) = *(ulong *)(puVar3 + uVar5 + 0x40) | 1L << (uVar7 & 0x3f);
      *(byte *)(*(long *)(puVar3 + 0x30) + uVar7) = bVar1;
      *(undefined8 *)(*(long *)(puVar3 + 0x38) + uVar7 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101162d50);
        (*pcVar2)();
      }
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
      puVar6 = puVar6 + -1;
      puVar8 = puVar8 + 2;
    } while (puVar6 != (undefined *)0x0);
  }
  return puVar3;
}



/* Entry: 101162d50; end: 101162faf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101162d50(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  lVar2 = _DAT_112d603b0;
  FUN_1011591fc();
  *(undefined8 *)(unaff_x20 + lVar2) = param_1;
  lVar2 = _DAT_112d603b8;
  FUN_1011593ec();
  *(undefined8 *)(unaff_x20 + lVar2) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112d603c0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d603c8) = 0;
  lVar2 = _DAT_112d603d0;
  uVar4 = 0x112d60598;
  func_0x0001000285a8(0x112d60598,&UNK_10d926a68);
  func_0x000107c61538();
  FUN_101162c78();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar4;
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(unaff_x20 + _DAT_112d603d8) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(unaff_x20 + _DAT_112d603e0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d603e8) = 0;
  *(undefined **)(unaff_x20 + _DAT_112d603f0) = puVar1;
  *(undefined1 *)(unaff_x20 + _DAT_112d603f8) = 4;
  *(undefined1 *)(unaff_x20 + _DAT_112d60408) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d60430) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d60438) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000049,0x800000010ef28480,
                      "MapFriendPickerImplementation/FriendPickerViewController.swift",0x3e,2,0x7b,0
                     );
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101162e80);
  (*pcVar3)();
}



/* Entry: 101162fb0; end: 101163077;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101162fb0(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  long lStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  *(undefined1 *)(unaff_x20 + _DAT_112d60408) = 1;
  lVar4 = _DAT_112d60400;
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112d60410);
  func_0x000107c61428(unaff_x20 + _DAT_112d60400,auStack_48,0,0);
  uVar7 = *(undefined8 *)(unaff_x20 + lVar4);
  lVar3 = 0;
  FUN_101152628();
  lVar4 = lVar3;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar4 + _DAT_112d60160);
  *puVar1 = uVar7;
  puVar1[1] = 0;
  *(undefined2 *)(puVar1 + 2) = 0x4000;
  puVar2 = PTR_s_init_1125d9248;
  lStack_58 = lVar4;
  lStack_50 = lVar3;
  func_0x000107c61434(uVar7);
  plVar5 = &lStack_58;
  func_0x000107c61154(plVar5,puVar2);
  func_0x000107c424b8(uVar6);
  func_0x000107c61170(plVar5);
  return;
}



/* Entry: 101163078; end: 1011633a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101163078(ulong param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  ushort uVar11;
  long extraout_x8;
  long lVar12;
  long extraout_x12;
  code *pcVar13;
  long unaff_x20;
  undefined1 *puVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined1 *puVar18;
  undefined1 auStack_b0 [8];
  ulong uStack_a8;
  ulong uStack_a0;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar2 = 0;
  func_0x000107c5eff8();
  lVar15 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  puVar14 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar3 = param_1;
  FUN_10115d4cc();
  if (((uVar3 & 1) == 0) && (uVar3 = param_1, FUN_10115aea4(), uVar3 != 0)) {
    uVar4 = param_1;
    FUN_10115d0d4();
    puVar1 = (undefined8 *)(uVar3 + _DAT_112fcd610);
    uStack_a0 = uVar3;
    func_0x000107c61428(unaff_x20 + _DAT_112d60400,auStack_78,0x21,0);
    uVar9 = puVar1[1];
    FUN_1010af1e4(*puVar1,uVar9);
    func_0x000107c614a8(auStack_78);
    func_0x000107c6142c(uVar9);
    if ((uVar4 & 1) != 0) {
      func_0x00010115eae0(param_1,0);
    }
    uVar17 = *(undefined8 *)(unaff_x20 + _DAT_112d60410);
    uVar9 = *puVar1;
    uVar3 = puVar1[1];
    uVar4 = uVar3;
    func_0x000107c61434();
    func_0x000107c5eff4();
    if (((long)uVar4 < 0) || (*(ulong *)(*(long *)(unaff_x20 + _DAT_112d603f0) + 0x10) <= uVar4)) {
      uVar11 = 5;
    }
    else {
      uVar11 = (ushort)*(byte *)(*(long *)(unaff_x20 + _DAT_112d603f0) + uVar4 * 0x10 + 0x20);
    }
    lVar5 = 0;
    FUN_101152628();
    lVar16 = lVar5;
    func_0x000107c610f8();
    puVar1 = (undefined8 *)(lVar16 + _DAT_112d60160);
    *puVar1 = uVar9;
    puVar1[1] = uVar3;
    *(ushort *)(puVar1 + 2) = uVar11 | 0x400;
    plVar6 = &lStack_88;
    lStack_88 = lVar16;
    lStack_80 = lVar5;
    func_0x000107c61154(plVar6,PTR_s_init_1125d9248);
    func_0x000107c424b8(uVar17);
    func_0x000107c61170(plVar6);
    uVar3 = uStack_a0;
    FUN_10115b328(uStack_a0,param_1);
    lVar16 = *(long *)(uVar3 + 0x10);
    uStack_a8 = uVar3;
    if (lVar16 != 0) {
      puVar18 = *(undefined1 **)(unaff_x20 + _DAT_112d603b0);
      lVar5 = uVar3 + ((ulong)*(byte *)(lVar15 + 0x50) + 0x20 &
                      ((ulong)*(byte *)(lVar15 + 0x50) ^ 0xffffffffffffffff));
      lVar12 = *(long *)(lVar15 + 0x48);
      pcVar13 = *(code **)(lVar15 + 0x10);
      do {
        (*pcVar13)((long)puVar14 - extraout_x12,lVar5,lVar2);
        puVar7 = puVar14;
        (**(code **)(lVar15 + 0x20))(puVar14,(long)puVar14 - extraout_x12,lVar2);
        func_0x000107c5efd4();
        puVar8 = puVar18;
        func_0x000107c3f730();
        func_0x000107c61180();
        func_0x000107c61170(puVar7);
        if (puVar8 != (undefined1 *)0x0) {
          uVar9 = 0;
          FUN_101165628(0);
          puVar10 = puVar8;
          func_0x000107c61480(puVar8,uVar9);
          puVar7 = puVar8;
          if (puVar10 != (undefined1 *)0x0) {
            func_0x000107c5d200();
            func_0x000107c61180();
            func_0x000107c58ddc();
            func_0x000107c61170(puVar8);
            puVar7 = puVar10;
          }
          func_0x000107c61170(puVar7);
        }
        func_0x000107c5efd4();
        func_0x000107c41814(puVar18);
        func_0x000107c61170(puVar7);
        (**(code **)(lVar15 + 8))(puVar14,lVar2);
        lVar5 = lVar5 + lVar12;
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
    }
    uVar3 = uStack_a8;
    func_0x00010115e07c(uStack_a8,0);
    func_0x000107c61170(uStack_a0);
    func_0x000107c6142c(uVar3);
  }
  return;
}



/* Entry: 1011633a4; end: 1011634ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1011633a4(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar2 = unaff_x20;
  func_0x000107c44c68();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c51ac8();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar3 != 0) {
      lVar2 = lVar3;
      func_0x000107c5c82c();
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      if (lVar2 != 0) {
        lVar3 = lVar2;
        func_0x000107c5faec();
        func_0x000107c61170(lVar2);
        func_0x000107c5fb5c(lVar3,param_2);
        func_0x000107c6142c(param_2);
        if (0 < lVar3) {
          return 1;
        }
      }
    }
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_112d603e8);
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    func_0x000107c5b6b4();
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x000107c40808();
    func_0x000107c61170(lVar2);
  }
  lVar2 = *(long *)(*(long *)(unaff_x20 + _DAT_112d603f0) + 0x10);
  if (!SCARRY8(lVar3,lVar2)) {
    return lVar3 + lVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011634ac);
  (*pcVar1)();
}



/* Entry: 1011634ac; end: 10116396f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011634ac(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  byte bVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  long *plVar12;
  long extraout_x8;
  undefined8 *puVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long unaff_x20;
  undefined8 uVar17;
  long lVar18;
  ulong uVar19;
  undefined1 *puVar20;
  undefined1 auStack_c0 [8];
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 auStack_90 [32];
  
  lVar6 = 0;
  func_0x000107c5eff8();
  lStack_a0 = *(long *)(lVar6 + -8);
  lStack_98 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a0 + 0x40));
  puVar20 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar6 = unaff_x20;
  func_0x000107c44c68();
  func_0x000107c61180();
  if (lVar6 != 0) {
    lVar18 = lVar6;
    func_0x000107c51ac8();
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    if (lVar18 != 0) {
      func_0x000107c50588(lVar18);
      func_0x000107c61170(lVar18);
    }
  }
  lVar6 = _DAT_112d603f0;
  lVar18 = *(long *)(unaff_x20 + _DAT_112d603f0);
  uVar15 = *(ulong *)(lVar18 + 0x10);
  func_0x000107c61434(lVar18);
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar15 != 0) {
    uVar19 = 0;
    lStack_b8 = lVar18 + 0x28;
    lStack_b0 = lVar6;
    lStack_a8 = param_1;
    do {
      lVar4 = lRam0000000112d604a8;
      lVar16 = lRam0000000112d60490;
      lVar14 = lRam0000000112d60478;
      uVar1 = uVar19;
      if (uVar19 <= *(ulong *)(lVar18 + 0x10)) {
        uVar1 = *(ulong *)(lVar18 + 0x10);
      }
      puVar13 = (undefined8 *)(lStack_b8 + uVar19 * 0x10);
      uVar19 = uVar19 + 1;
      while( true ) {
        if (uVar19 - uVar1 == 1) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101163954);
          (*pcVar5)();
        }
        bVar3 = *(byte *)(puVar13 + -1);
        if (1 < bVar3 - 3) break;
        puVar13 = puVar13 + 2;
        uVar19 = uVar19 + 1;
        param_1 = lStack_a8;
        lVar6 = lStack_b0;
        if (uVar19 - uVar15 == 1) goto LAB_101163758;
      }
      if (bVar3 == 0) {
        uVar10 = *puVar13;
        func_0x000107c61438(uVar10,2);
        if (lVar4 != -1) {
          func_0x000107c61568(0x112d604a8,0x10115a668);
        }
        puVar13 = (undefined8 *)0x112d604b0;
      }
      else if (bVar3 == 1) {
        uVar10 = *puVar13;
        func_0x000107c61438(uVar10,2);
        if (lVar16 != -1) {
          func_0x000107c61568(0x112d60490,0x10115a63c);
        }
        puVar13 = (undefined8 *)0x112d60498;
      }
      else {
        uVar10 = *puVar13;
        func_0x000107c61438(uVar10,2);
        if (lVar14 != -1) {
          func_0x000107c61568(0x112d60478,0x10115a694);
        }
        puVar13 = (undefined8 *)0x112d60480;
      }
      uVar17 = *puVar13;
      uVar2 = puVar13[1];
      func_0x000107c61434(uVar2);
      func_0x000107c61430(uVar10,2);
      puVar7 = puVar9;
      func_0x000107c61558();
      puVar8 = puVar9;
      if (((ulong)puVar7 & 1) == 0) {
        puVar8 = (undefined *)0x0;
        func_0x000101162478(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9,
                            PTR__swift_bridgeObjectRelease_11034f258);
      }
      uVar1 = *(ulong *)(puVar8 + 0x10);
      puVar9 = puVar8;
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar1) {
        puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
        func_0x000101162478(puVar9,uVar1 + 1,1,puVar8,PTR__swift_bridgeObjectRelease_11034f258);
      }
      *(ulong *)(puVar9 + 0x10) = uVar1 + 1;
      *(undefined8 *)(puVar9 + uVar1 * 0x10 + 0x20) = uVar17;
      *(undefined8 *)(puVar9 + uVar1 * 0x10 + 0x28) = uVar2;
      param_1 = lStack_a8;
      lVar6 = lStack_b0;
    } while (uVar19 != uVar15);
  }
LAB_101163758:
  func_0x000107c6142c(lVar18);
  lVar16 = *(long *)(puVar9 + 0x10);
  func_0x000107c6142c(puVar9);
  lVar18 = *(long *)(*(long *)(unaff_x20 + lVar6) + 0x10);
  lVar14 = lVar18 - lVar16;
  plVar12 = (long *)(param_1 + lVar14);
  if (SCARRY8(param_1,lVar14)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x101163958);
    (*pcVar5)();
  }
  if ((long)plVar12 < lVar18) {
    uVar10 = 0;
    func_0x000107c5efe0(puVar20,0);
    uVar17 = *(undefined8 *)(unaff_x20 + _DAT_112d603b0);
    func_0x000107c5efd4();
    func_0x000107c51a54(uVar17);
    func_0x000107c61170(uVar10);
    func_0x000107c61168(PTR_PTR_1126b78f0);
    func_0x000107c44db0();
    func_0x000107c404a0(uVar17);
    func_0x000107c53848(uVar17);
  }
  else {
    lVar18 = *(long *)(unaff_x20 + _DAT_112d603e8);
    if (lVar18 == 0) {
      return;
    }
    if (SBORROW8(param_1,lVar16)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10116395c);
      (*pcVar5)();
    }
    if (param_1 - lVar16 < 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x101163960);
      (*pcVar5)();
    }
    func_0x000107c61174();
    lVar14 = lVar18;
    func_0x000107c45354();
    func_0x000107c61180();
    func_0x000107c5efdc(puVar20);
    func_0x000107c61170();
    func_0x000107c5eff4();
    if (lVar14 < 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x101163964);
      (*pcVar5)();
    }
    lVar14 = lVar18;
    func_0x000107c45338();
    if (lVar14 < 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x101163968);
      (*pcVar5)();
    }
    lVar6 = *(long *)(*(long *)(unaff_x20 + lVar6) + 0x10);
    pcVar5 = (code *)auStack_90;
    func_0x000107c5eff0();
    if (SCARRY8(*plVar12,lVar6)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10116396c);
      (*pcVar5)();
    }
    *plVar12 = *plVar12 + lVar6;
    puVar11 = auStack_90;
    (*pcVar5)(puVar11,0);
    uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112d603b0);
    func_0x000107c5efd4();
    func_0x000107c51a54(uVar10);
    func_0x000107c61170(puVar11);
    func_0x000107c61168(PTR_PTR_1126b78f0);
    func_0x000107c44db0();
    func_0x000107c404a0(uVar10);
    func_0x000107c53848(uVar10);
    func_0x00010115970c();
    if (SCARRY8(lVar14,lVar16)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x101163970);
      (*pcVar5)();
    }
    func_0x000107c58df4();
    func_0x000107c61170(uVar10);
    func_0x000107c61170(lVar18);
  }
  (**(code **)(lStack_a0 + 8))(puVar20,lStack_98);
  return;
}



/* Entry: 101163970; end: 101163b8f;  */

/* WARNING: Possible PIC construction at 0x0001011639d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011639f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101163a54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101163a70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101163abc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101163ad0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101163af4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101163b1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101163b44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101163b20) */
/* WARNING: Removing unreachable block (ram,0x000101163ad4) */
/* WARNING: Removing unreachable block (ram,0x000101163ac0) */
/* WARNING: Removing unreachable block (ram,0x000101163a74) */
/* WARNING: Removing unreachable block (ram,0x000101163af8) */
/* WARNING: Removing unreachable block (ram,0x000101163b8c) */
/* WARNING: Removing unreachable block (ram,0x000101163b0c) */
/* WARNING: Removing unreachable block (ram,0x000101163a78) */
/* WARNING: Removing unreachable block (ram,0x000101163a58) */
/* WARNING: Removing unreachable block (ram,0x0001011639fc) */
/* WARNING: Removing unreachable block (ram,0x000101163a10) */
/* WARNING: Removing unreachable block (ram,0x000101163a14) */
/* WARNING: Removing unreachable block (ram,0x000101163b40) */
/* WARNING: Removing unreachable block (ram,0x0001011639d8) */
/* WARNING: Removing unreachable block (ram,0x000101163a1c) */
/* WARNING: Removing unreachable block (ram,0x0001011639dc) */
/* WARNING: Removing unreachable block (ram,0x000101163b48) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101163970(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112d60438);
  if (lVar1 != 0) {
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c4aba4();
    func_0x000107c61180();
    func_0x000107c4c548();
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 101163b90; end: 101163bb7;  */

void FUN_101163b90(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 101163bb8; end: 101163bf3;  */

void FUN_101163bb8(void)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = 0;
  func_0x000107c5eff8();
  uVar4 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  lVar2 = *(long *)(unaff_x20 + 0x10);
  bVar1 = *(byte *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    if ((bVar1 & 1) == 0) {
      func_0x00010115c810(uVar3,unaff_x20 + (uVar4 + 0x30 & (uVar4 ^ 0xffffffffffffffff)));
    }
    else {
      func_0x00010115cbe4();
    }
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 101163bf4; end: 101163c07;  */

void FUN_101163bf4(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 101163c08; end: 101163c47;  */

void FUN_101163c08(code *UNRECOVERED_JUMPTABLE)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  func_0x000107c5eff8();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
                    /* WARNING: Could not recover jumptable at 0x000101163c44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (*(undefined8 *)(unaff_x20 + 0x10),
             unaff_x20 + (uVar2 + 0x18 & (uVar2 ^ 0xffffffffffffffff)));
  return;
}



/* Entry: 101163c48; end: 101163c67;  */

void FUN_101163c48(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101163c68; end: 101163c6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101163c68(undefined8 param_1)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [32];
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  func_0x0001000bb420(param_1,auStack_90);
  uVar1 = 0;
  FUN_1011641c4(0);
  plVar2 = &lStack_70;
  func_0x000107c6147c(plVar2,auStack_90,PTR___sypN_11034f1a8 + 8,uVar1,6);
  lVar3 = lStack_70;
  if (((ulong)plVar2 & 1) != 0) {
    plVar2 = (long *)(lStack_70 + _DAT_112d606c0);
    lStack_68 = plVar2[1];
    lStack_70 = *plVar2;
    lStack_58 = plVar2[3];
    lStack_60 = plVar2[2];
    lStack_50 = plVar2[4];
    lStack_40 = lStack_70;
    lStack_38 = lStack_68;
    lStack_30 = lStack_60;
    lStack_28 = lStack_50;
    FUN_101163c70(&lStack_38,auStack_98,0x112d60508,&UNK_10d926a48);
    FUN_101163c70(&lStack_30,auStack_98,0x112d38270,&UNK_10d905a20);
    FUN_101163c70(&lStack_28,auStack_98,0x112d60510,&UNK_10d926a58);
    FUN_101163c70(&lStack_40,auStack_98,0x112d60518,&UNK_10d926a60);
    func_0x000107c61170(lVar3);
    func_0x000107c61428(unaff_x20 + 0x10,auStack_90,0,0);
    lVar3 = unaff_x20 + 0x10;
    func_0x000107c61618();
    if (lVar3 == 0) {
      func_0x000101163cb8(&lStack_40,0x112d60518,&UNK_10d926a60);
      func_0x000101163cb8(&lStack_38,0x112d60508,&UNK_10d926a48);
      func_0x000101163cb8(&lStack_30,0x112d38270,&UNK_10d905a20);
      func_0x000101163cb8(&lStack_28,0x112d60510,&UNK_10d926a58);
    }
    else {
      FUN_10115a984(&lStack_70);
      func_0x000101163cb8(&lStack_40,0x112d60518,&UNK_10d926a60);
      func_0x000101163cb8(&lStack_38,0x112d60508,&UNK_10d926a48);
      func_0x000101163cb8(&lStack_30,0x112d38270,&UNK_10d905a20);
      func_0x000101163cb8(&lStack_28,0x112d60510,&UNK_10d926a58);
      func_0x000107c61170(lVar3);
    }
  }
  return;
}



/* Entry: 101163c70; end: 101163cf7;  */

undefined8 FUN_101163c70(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 101163cf8; end: 101163d37;  */

void FUN_101163cf8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d605b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = 
  PTR___s10Foundation15AttributeScopesO5UIKitE0D10AttributesV04FontB0OAA19AttributedStringKeyADMc_110351540
  ;
  func_0x000107c61520(PTR___s10Foundation15AttributeScopesO5UIKitE0D10AttributesV04FontB0OAA19AttributedStringKeyADMc_110351540
                      ,
                      PTR___s10Foundation15AttributeScopesO5UIKitE0D10AttributesV04FontB0ON_110351548
                     );
  puRam0000000112d605b0 = puVar1;
  return;
}



/* Entry: 101163d38; end: 101163d43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101163d38(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar1 + 0x10,auStack_48,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar2 = uVar3;
    FUN_101160c98(uVar3,uVar4);
    if ((*(byte *)(lVar1 + _DAT_112d603f8) & 0xfe) == 2) {
      FUN_101160fd4(uVar3,uVar4);
      func_0x000107c61170(uVar2);
      uVar2 = uVar3;
    }
    func_0x000107c4f018(lVar1);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 101163d44; end: 101163e0f;  */

void FUN_101163d44(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    func_0x000107c61520(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 101163e10; end: 10116408f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_101163e10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long lStack_60;
  long lStack_58;
  
  plVar6 = &lStack_60;
  lVar3 = param_6;
  func_0x000107c610f8();
  lVar2 = _DAT_112d603b0;
  lVar4 = lVar3;
  FUN_1011591fc();
  *(long *)(lVar3 + lVar2) = lVar4;
  lVar2 = _DAT_112d603b8;
  FUN_1011593ec();
  *(long *)(lVar3 + lVar2) = lVar4;
  *(undefined8 *)(lVar3 + _DAT_112d603c0) = 0;
  *(undefined8 *)(lVar3 + _DAT_112d603c8) = 0;
  lVar2 = _DAT_112d603d0;
  uVar5 = 0x112d60598;
  func_0x0001000285a8(0x112d60598,&UNK_10d926a68);
  func_0x000107c61538();
  FUN_101162c78();
  *(undefined8 *)(lVar3 + lVar2) = uVar5;
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(lVar3 + _DAT_112d603d8) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(lVar3 + _DAT_112d603e0) = 0;
  *(undefined8 *)(lVar3 + _DAT_112d603e8) = 0;
  *(undefined **)(lVar3 + _DAT_112d603f0) = puVar1;
  *(undefined1 *)(lVar3 + _DAT_112d603f8) = 4;
  *(undefined1 *)(lVar3 + _DAT_112d60408) = 0;
  *(undefined8 *)(lVar3 + _DAT_112d60430) = 0;
  *(undefined8 *)(lVar3 + _DAT_112d60438) = 0;
  *(undefined8 *)(lVar3 + _DAT_112d60410) = param_1;
  *(undefined8 *)(lVar3 + _DAT_112d60418) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112d60400) = param_3;
  *(undefined8 *)(lVar3 + _DAT_112d60420) = param_4;
  *(undefined8 *)(lVar3 + _DAT_112d60428) = param_5;
  puVar1 = PTR_s_initWithNibName_bundle__1125e9850;
  lStack_60 = lVar3;
  lStack_58 = param_6;
  func_0x000107c61174(param_1);
  func_0x000107c615f0(param_2);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61154(&lStack_60,puVar1,0,0);
  func_0x000107c61180();
  func_0x00010083f5a0();
  func_0x000107c59a2c(plVar6);
  puVar7 = (undefined1 *)plVar6;
  func_0x000107c44ca0(plVar6);
  func_0x000107c61180();
  func_0x000107c58d24();
  func_0x000107c61170(puVar7);
  puVar7 = (undefined1 *)plVar6;
  func_0x000107c44c68();
  func_0x000107c61180();
  func_0x000107c61170(plVar6);
  if (puVar7 != (undefined1 *)0x0) {
    puVar8 = puVar7;
    func_0x000107c51ac8();
    func_0x000107c61180();
    func_0x000107c61170(puVar7);
    if (puVar8 != (undefined1 *)0x0) {
      func_0x000107c53fcc(puVar8);
      func_0x000107c61170(puVar8);
    }
  }
  func_0x000107c61174(plVar6);
  func_0x000107c5a304();
  func_0x000107c53dec(plVar6);
  func_0x000107c56778(plVar6);
  func_0x000107c61170(plVar6);
  return (undefined1 *)plVar6;
}



/* Entry: 101164090; end: 1011640cf;  */

void FUN_101164090(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 1011640d0; end: 101164113;  */

void FUN_1011640d0(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 101164114; end: 101164173; -[_TtC29MapFriendPickerImplementation24FriendPickerViewModelBox init] */

void FUN_101164114(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapFriendPickerImplementation.FriendPickerViewModelBox",0x36,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101164140);
  (*pcVar1)();
}



/* Entry: 101164174; end: 1011641c3; -[_TtC29MapFriendPickerImplementation24FriendPickerViewModelBox .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101164174(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112d606c0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  func_0x000107c6142c(puVar1[4]);
  func_0x000107c6142c(uVar4);
  func_0x000107c6142c(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1011641c4; end: 1011641e3;  */

void FUN_1011641c4(void)

{
  func_0x000107c61168(&PTR_PTR_1127b1790);
  return;
}



/* Entry: 1011641e4; end: 101164247;  */

long FUN_1011641e4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101164248; end: 10116433f;  */

undefined8 * FUN_101164248(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[2];
  param_1[2] = uVar2;
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  uVar3 = param_2[4];
  param_1[4] = uVar3;
  func_0x000107c61174();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  return param_1;
}



/* Entry: 101164340; end: 1011643a3;  */

undefined8 * FUN_101164340(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61170(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1011643a4; end: 101164443;  */

int FUN_1011643a4(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101164444; end: 10116493b;  */

void FUN_101164444(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  *(undefined8 *)(unaff_x20 + 0x50) = param_9;
  return;
}



/* Entry: 10116493c; end: 101164a1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10116493c(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  if (*(long *)(unaff_x20 + 0x60) != 0) {
    uVar3 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112f20e78);
    puVar1 = &UNK_110388cc0;
    func_0x000107c613fc(&UNK_110388cc0,0x18,7);
    func_0x000107c61644(puVar1 + 0x10);
    pcStack_40 = FUN_101164ea4;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000b0c7c;
    puStack_48 = &UNK_110388cd8;
    puStack_38 = puVar1;
    func_0x000107c60bc4(&puStack_60);
    puVar1 = puStack_38;
    func_0x000107c615f0(uVar3);
    func_0x000107c61574(puVar1);
    func_0x000107c41864(uVar3);
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c615e8(uVar3);
  }
  return 0;
}



/* Entry: 101164a1c; end: 101164a73;  */

void FUN_101164a1c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = 0;
    func_0x000107c61574();
    func_0x000107c61170(uVar1);
  }
  return;
}



/* Entry: 101164a74; end: 101164aff;  */

void FUN_101164a74(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 101164b00; end: 101164b43;  */

void FUN_101164b00(void)

{
  func_0x0001011644c8();
  return;
}



/* Entry: 101164b44; end: 101164cbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101164b44(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  uVar3 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112f20e78);
  puVar1 = &UNK_110388cc0;
  func_0x000107c613fc(&UNK_110388cc0,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  pcStack_40 = FUN_101164ee8;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000b0c7c;
  puStack_48 = &UNK_110388d28;
  puStack_38 = puVar1;
  func_0x000107c60bc4(&puStack_60);
  puVar1 = puStack_38;
  func_0x000107c615f0(uVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c41864(uVar3);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c615e8(uVar3);
  return;
}



/* Entry: 101164cbc; end: 101164de7;  */

void FUN_101164cbc(ulong param_1)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uStack_60;
  ulong uStack_58;
  
  if (param_1 >> 0x3e == 0) {
    uVar6 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar6 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar6 = param_1;
    }
    func_0x000107c60480();
  }
  uVar3 = 0;
  func_0x000103a2db6c(0);
  uVar4 = uVar3;
  FUN_101164ef0();
  func_0x000107c5fe14(uVar6,uVar3,uVar4);
  uStack_58 = uVar6;
  if (param_1 >> 0x3e == 0) {
    uVar6 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar6 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar6 = param_1;
    }
    func_0x000107c60480();
  }
  if (uVar6 != 0) {
    uVar7 = 0;
    do {
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101164dd4);
          (*pcVar2)();
        }
        uVar5 = *(ulong *)(param_1 + uVar7 * 8 + 0x20);
        func_0x000107c61174(uVar5);
      }
      else {
        uVar5 = uVar7;
        FUN_10111c5a8(uVar7,param_1);
      }
      uVar1 = uVar7 + 1;
      if (SCARRY8(uVar7,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101164dd0);
        (*pcVar2)();
      }
      FUN_101161fac(&uStack_60,uVar5);
      func_0x000107c61170(uStack_60);
      uVar7 = uVar7 + 1;
    } while (uVar1 != uVar6);
  }
  return;
}


