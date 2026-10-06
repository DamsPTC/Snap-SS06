/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1027ad2b8; end: 1027ad437;  */

/* WARNING: Possible PIC construction at 0x0001027ad2d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027ad2dc) */

void FUN_1027ad2b8(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1027ad438; end: 1027ad447;  */

void FUN_1027ad438(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 *puStack_50;
  long lStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  if ((param_1 != (undefined8 *)0x0) && (param_2 != 0)) {
    puStack_50 = param_1;
    lStack_48 = param_2;
    func_0x000107c61174();
    func_0x000107c61174(param_2);
    func_0x000100b60084(&puStack_50);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_1);
    return;
  }
  puVar2 = param_1;
  FUN_1027aa314(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10));
  puVar3 = &UNK_1106acde0;
  func_0x000107c613f8(&UNK_1106acde0,puVar2,0,0);
  *puVar2 = uVar1;
  puVar2[1] = param_1;
  puVar2[2] = param_2;
  *(undefined1 *)(puVar2 + 3) = 1;
  func_0x000107c61174(param_2);
  func_0x000107c615f0(uVar1);
  func_0x000107c61174(param_1);
  func_0x00010488ade0(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(puVar3);
  return;
}



/* Entry: 1027ad448; end: 1027ad52b;  */

double FUN_1027ad448(void)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong unaff_x20;
  
  uVar2 = unaff_x20;
  func_0x000107c4abb4();
  if ((int)uVar2 == 1) {
    uVar2 = unaff_x20;
    func_0x000107c4c930();
    func_0x000107c61180();
    if (uVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1027ad524);
      (*pcVar1)();
    }
    uVar3 = uVar2;
    func_0x000107c44824();
    func_0x000107c61170(uVar2);
    if ((int)uVar3 != 0) {
      func_0x000107c4c930();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1027ad528);
        (*pcVar1)();
      }
      uVar2 = unaff_x20;
      func_0x000107c41e40();
      func_0x000107c61180();
      func_0x000107c61170(unaff_x20);
      if (uVar2 != 0) {
        uVar3 = uVar2;
        func_0x000107c5e304(uVar2);
        func_0x000107c44d98(uVar2);
        func_0x000107c61170(uVar2);
        return (double)(uVar3 & 0xffffffff);
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1027ad52c);
      (*pcVar1)();
    }
  }
  return 0.0;
}



/* Entry: 1027ad52c; end: 1027ad597;  */

undefined1  [16] FUN_1027ad52c(void)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong unaff_x20;
  double dVar4;
  undefined1 auVar5 [16];
  
  uVar2 = unaff_x20;
  func_0x000107c4abb4();
  if ((int)uVar2 == 1) {
    func_0x000107c4c930();
    func_0x000107c61180();
    if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1027ad598);
      (*pcVar1)();
    }
    uVar2 = unaff_x20;
    func_0x000107c4c978();
    func_0x000107c61170(unaff_x20);
    uVar3 = 0;
    dVar4 = (double)(uVar2 & 0xffffffff);
  }
  else {
    dVar4 = 0.0;
    uVar3 = 1;
  }
  auVar5._8_8_ = uVar3;
  auVar5._0_8_ = dVar4;
  return auVar5;
}



/* Entry: 1027ad598; end: 1027ae9f3;  */

/* WARNING: Removing unreachable block (ram,0x0001027ad698) */

undefined1  [16] FUN_1027ad598(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  uint uVar14;
  long extraout_x8;
  undefined1 *puVar15;
  ulong uVar16;
  ulong uVar17;
  long extraout_x12;
  long extraout_x12_00;
  ulong unaff_x20;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  undefined *puVar23;
  undefined1 auVar24 [16];
  ulong uStack_1b0;
  undefined *puStack_1a8;
  ulong uStack_1a0;
  undefined *puStack_198;
  ulong uStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  ulong uStack_160;
  ulong uStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  ulong uStack_138;
  ulong uStack_130;
  long lStack_128;
  undefined *puStack_120;
  code *pcStack_118;
  long lStack_110;
  undefined *puStack_108;
  ulong uStack_100;
  long lStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  ulong uStack_e0;
  undefined1 auStack_d8 [32];
  long lStack_b8;
  undefined1 auStack_b0 [32];
  undefined *apuStack_90 [3];
  long lStack_78;
  
  lVar3 = 0;
  func_0x000107c5ed50();
  lVar18 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar18 + 0x40));
  lVar21 = (long)&uStack_1b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar20 = lVar21 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar19 = lVar20 - extraout_x12_00;
  func_0x000107c41214();
  func_0x000107c61180();
  if (unaff_x20 == 0) {
    uVar22 = 0;
    param_2 = (undefined *)0xf000000000000000;
    goto LAB_1027ad848;
  }
  uVar22 = unaff_x20;
  lStack_e8 = lVar21;
  func_0x000107c5ee30();
  func_0x000107c61170(unaff_x20);
  func_0x000107c610f8(PTR_PTR_1126b25c0);
  func_0x00010006c00c(uVar22,param_2);
  uVar17 = uVar22;
  func_0x0001010282b0(uVar22,param_2);
  func_0x00010006c090(uVar22,param_2);
  if (uVar17 == 0) goto LAB_1027ad848;
  uVar4 = uVar17;
  func_0x000107c44a2c();
  if ((uVar4 & 1) != 0) {
    uStack_160 = uVar17;
    func_0x000107c4e8d8();
    func_0x000107c61180();
    if (uVar17 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1027ae7f0);
      (*pcVar2)();
    }
    uVar4 = uVar17;
    func_0x000107c44980();
    func_0x000107c61170(uVar17);
    if ((int)uVar4 == 0) {
LAB_1027ad83c:
      puVar15 = &stack0xffffffffffffffa0;
    }
    else {
      uVar17 = uStack_160;
      func_0x000107c4e8d8();
      func_0x000107c61180();
      if (uVar17 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1027ae7f4);
        (*pcVar2)();
      }
      uVar4 = uVar17;
      func_0x000107c4c97c();
      func_0x000107c61180();
      func_0x000107c61170(uVar17);
      if (uVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1027ae7f8);
        (*pcVar2)();
      }
      uVar17 = uVar4;
      func_0x000107c44a8c();
      func_0x000107c61170(uVar4);
      if ((int)uVar17 == 0) goto LAB_1027ad83c;
      uVar17 = uStack_160;
      func_0x000107c4e8d8();
      func_0x000107c61180();
      if (uVar17 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1027ae800);
        (*pcVar2)();
      }
      uVar4 = uVar17;
      func_0x000107c4c97c();
      func_0x000107c61180();
      func_0x000107c61170(uVar17);
      if (uVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1027ae804);
        (*pcVar2)();
      }
      uVar17 = uVar4;
      func_0x000107c500bc();
      func_0x000107c61180();
      func_0x000107c61170(uVar4);
      if (uVar17 == 0) goto LAB_1027ad83c;
      uStack_1b0 = uVar17;
      func_0x000107c500c0();
      func_0x000107c61180();
      if (uVar17 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1027ae808);
        (*pcVar2)();
      }
      uVar4 = uVar17;
      lStack_128 = lVar20;
      puStack_120 = param_2;
      func_0x000107c600f4(lVar19);
      func_0x000100e15a08();
      uStack_e0 = uVar4;
      func_0x000107c601c0(apuStack_90,lVar3);
      lStack_110 = lVar3;
      if (lStack_78 == 0) {
        puStack_168 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        puStack_168 = PTR___swiftEmptyArrayStorage_11034f1c8;
        do {
          puVar23 = PTR___sypN_11034f1a8;
          func_0x000100102924(apuStack_90,auStack_b0);
          func_0x000100102924(auStack_b0,auStack_d8);
          uVar7 = 0;
          FUN_1027af0bc(0,0x112df41a0,&PTR_PTR_1126bceb0);
          plVar8 = &lStack_b8;
          func_0x000107c6147c(plVar8,auStack_d8,puVar23 + 8,uVar7,6);
          lVar21 = lStack_b8;
          puVar23 = puStack_168;
          if ((((ulong)plVar8 & 1) != 0) && (lStack_b8 != 0)) {
            puVar6 = puStack_168;
            func_0x000107c61550();
            if (((int)puVar6 == 0) ||
               (((long)puVar23 < 0 || (puVar6 = puVar23, ((ulong)puVar23 >> 0x3e & 1) != 0)))) {
              if ((ulong)puVar23 >> 0x3e == 0) {
                puVar5 = *(undefined **)(((ulong)puVar23 & 0xffffffffffffff8) + 0x10);
              }
              else {
                puVar5 = (undefined *)((ulong)puVar23 & 0xffffffffffffff8);
                if ((undefined *)0x7fffffffffffffff < puVar23) {
                  puVar5 = puVar23;
                }
                func_0x000107c60480(puVar5);
              }
              puVar6 = (undefined *)0x0;
              FUN_1027aea6c(0,puVar5 + 1,1,puVar23,0x112df41a0,&PTR_PTR_1126bceb0,0x112df41a8,
                            &UNK_10d9c2990);
            }
            uVar16 = (ulong)puVar6 & 0xffffffffffffff8;
            uVar4 = *(ulong *)(uVar16 + 0x10);
            puStack_168 = puVar6;
            if (*(ulong *)(uVar16 + 0x18) >> 1 <= uVar4) {
              puVar23 = (undefined *)(ulong)(1 < *(ulong *)(uVar16 + 0x18));
              FUN_1027aea6c(puVar23,uVar4 + 1,1,puVar6,0x112df41a0,&PTR_PTR_1126bceb0,0x112df41a8,
                            &UNK_10d9c2990);
              uVar16 = (ulong)puVar23 & 0xffffffffffffff8;
              puStack_168 = puVar23;
            }
            *(ulong *)(uVar16 + 0x10) = uVar4 + 1;
            *(long *)(uVar16 + uVar4 * 8 + 0x20) = lVar21;
            lVar3 = lStack_110;
          }
          func_0x000107c601c0(apuStack_90,lVar3,uStack_e0);
        } while (lStack_78 != 0);
      }
      func_0x000107c61170(uVar17);
      pcStack_118 = *(code **)(lVar18 + 8);
      (*pcStack_118)(lVar19,lVar3);
      puVar6 = puStack_120;
      puVar23 = puStack_168;
      if ((ulong)puStack_168 >> 0x3e == 0) {
        puVar5 = *(undefined **)(((ulong)puStack_168 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar5 = (undefined *)((ulong)puStack_168 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puStack_168) {
          puVar5 = puStack_168;
        }
        func_0x000107c60480();
      }
      uVar17 = uStack_160;
      uVar4 = uVar22;
      if (puVar5 != (undefined *)0x0) {
        lStack_f8 = 0;
        uStack_190 = (ulong)puVar23 & 0xc000000000000001;
        uStack_1a0 = (ulong)puVar23 & 0xffffffffffffff8;
        puStack_1a8 = puVar23 + 0x20;
        puStack_170 = PTR___swiftEmptyArrayStorage_11034f1c8;
        puVar10 = (undefined *)0x0;
        lVar21 = lStack_128;
        puStack_198 = puVar5;
        uStack_158 = uVar22;
        do {
          if (uStack_190 == 0) {
            if (*(undefined **)(uStack_1a0 + 0x10) <= puVar10) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1027ae7d4);
              (*pcVar2)();
            }
            puVar5 = *(undefined **)(puStack_1a8 + (long)puVar10 * 8);
            func_0x000107c61174();
          }
          else {
            puVar5 = puVar10;
            FUN_1027aef00(puVar10,puVar23,&PTR_PTR_1126bceb0,0x112df41a0);
          }
          puVar23 = puStack_170;
          puStack_178 = puVar10 + 1;
          if (SCARRY8((long)puVar10,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1027ae7d0);
            (*pcVar2)();
          }
          puVar10 = puVar5;
          func_0x000107c518b0();
          if ((int)puVar10 == 2) {
            puStack_188 = puVar5;
            func_0x000107c500b4();
            func_0x000107c61180();
            if (puVar5 == (undefined *)0x0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1027ae7fc);
              (*pcVar2)();
            }
            func_0x000107c600f4(lVar21);
            func_0x000107c601c0(apuStack_90,lVar3,uStack_e0);
            puVar23 = PTR___swiftEmptyArrayStorage_11034f1c8;
            while (lStack_78 != 0) {
              func_0x000100102924(apuStack_90,auStack_b0);
              func_0x000100102924(auStack_b0,auStack_d8);
              uVar7 = 0;
              FUN_1027af0bc(0,0x112df41b0,&PTR_PTR_1126bceb8);
              plVar8 = &lStack_b8;
              func_0x000107c6147c(plVar8,auStack_d8,PTR___sypN_11034f1a8 + 8,uVar7,6);
              lVar18 = lStack_b8;
              if ((((ulong)plVar8 & 1) != 0) && (lStack_b8 != 0)) {
                puVar10 = puVar23;
                func_0x000107c61550();
                if (((int)puVar10 == 0) ||
                   (((long)puVar23 < 0 || (puVar10 = puVar23, ((ulong)puVar23 >> 0x3e & 1) != 0))))
                {
                  if ((ulong)puVar23 >> 0x3e == 0) {
                    puVar9 = *(undefined **)(((ulong)puVar23 & 0xffffffffffffff8) + 0x10);
                  }
                  else {
                    puVar9 = (undefined *)((ulong)puVar23 & 0xffffffffffffff8);
                    if ((undefined *)0x7fffffffffffffff < puVar23) {
                      puVar9 = puVar23;
                    }
                    func_0x000107c60480(puVar9);
                  }
                  puVar10 = (undefined *)0x0;
                  FUN_1027aea6c(0,puVar9 + 1,1,puVar23,0x112df41b0,&PTR_PTR_1126bceb8,0x112df41b8,
                                &UNK_10d9c2998);
                }
                uVar17 = (ulong)puVar10 & 0xffffffffffffff8;
                uVar22 = *(ulong *)(uVar17 + 0x10);
                puVar23 = puVar10;
                if (*(ulong *)(uVar17 + 0x18) >> 1 <= uVar22) {
                  puVar23 = (undefined *)(ulong)(1 < *(ulong *)(uVar17 + 0x18));
                  FUN_1027aea6c(puVar23,uVar22 + 1,1,puVar10,0x112df41b0,&PTR_PTR_1126bceb8,
                                0x112df41b8,&UNK_10d9c2998);
                  uVar17 = (ulong)puVar23 & 0xffffffffffffff8;
                }
                *(ulong *)(uVar17 + 0x10) = uVar22 + 1;
                *(long *)(uVar17 + uVar22 * 8 + 0x20) = lVar18;
              }
              func_0x000107c601c0(apuStack_90,lVar3,uStack_e0);
            }
            func_0x000107c61170(puVar5);
            (*pcStack_118)(lVar21,lVar3);
            if ((ulong)puVar23 >> 0x3e == 0) {
              puVar5 = *(undefined **)(((ulong)puVar23 & 0xffffffffffffff8) + 0x10);
              if (puVar5 != (undefined *)0x0) goto LAB_1027addb0;
LAB_1027ae478:
              puStack_180 = PTR___swiftEmptyArrayStorage_11034f1c8;
            }
            else {
              puVar5 = (undefined *)((ulong)puVar23 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puVar23) {
                puVar5 = puVar23;
              }
              func_0x000107c60480();
              if (puVar5 == (undefined *)0x0) goto LAB_1027ae478;
LAB_1027addb0:
              uStack_130 = (ulong)puVar23 & 0xc000000000000001;
              uStack_138 = (ulong)puVar23 & 0xffffffffffffff8;
              puStack_140 = puVar23 + 0x20;
              puStack_180 = PTR___swiftEmptyArrayStorage_11034f1c8;
              puVar10 = (undefined *)0x0;
              puStack_150 = puVar5;
              puStack_148 = puVar23;
              do {
                lVar21 = lStack_e8;
                puVar23 = PTR___sypN_11034f1a8;
                if (uStack_130 == 0) {
                  if (*(undefined **)(uStack_138 + 0x10) <= puVar10) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x1027ae7c4);
                    (*pcVar2)();
                  }
                  puVar6 = *(undefined **)(puStack_140 + (long)puVar10 * 8);
                  func_0x000107c61174();
                }
                else {
                  puVar6 = puVar10;
                  FUN_1027aef00(puVar10,puStack_148,&PTR_PTR_1126bceb8,0x112df41b0);
                  puVar23 = PTR___sypN_11034f1a8;
                  lVar21 = lStack_e8;
                }
                if (SCARRY8((long)puVar10,1)) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1027ae7c0);
                  (*pcVar2)();
                }
                puStack_108 = puVar10 + 1;
                puVar5 = puVar6;
                func_0x000107c500b8();
                func_0x000107c61180();
                if (puVar5 == (undefined *)0x0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1027ae7ec);
                  (*pcVar2)();
                }
                puStack_f0 = puVar6;
                func_0x000107c600f4(lVar21);
                func_0x000107c601c0(apuStack_90,lVar3,uStack_e0);
                puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
                while (lStack_78 != 0) {
                  func_0x000100102924(apuStack_90,auStack_b0);
                  func_0x000100102924(auStack_b0,auStack_d8);
                  uVar7 = 0;
                  FUN_1027af0bc(0,0x112df41c0,&PTR_PTR_1126bcd28);
                  plVar8 = &lStack_b8;
                  func_0x000107c6147c(plVar8,auStack_d8,puVar23 + 8,uVar7,6);
                  lVar18 = lStack_b8;
                  if ((((ulong)plVar8 & 1) != 0) && (lStack_b8 != 0)) {
                    puVar10 = puVar6;
                    func_0x000107c61550();
                    if (((int)puVar10 == 0) ||
                       (((long)puVar6 < 0 || (puVar10 = puVar6, ((ulong)puVar6 >> 0x3e & 1) != 0))))
                    {
                      if ((ulong)puVar6 >> 0x3e == 0) {
                        puVar9 = *(undefined **)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10);
                      }
                      else {
                        puVar9 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
                        if ((undefined *)0x7fffffffffffffff < puVar6) {
                          puVar9 = puVar6;
                        }
                        func_0x000107c60480(puVar9);
                      }
                      puVar10 = (undefined *)0x0;
                      FUN_1027aea6c(0,puVar9 + 1,1,puVar6,0x112df41c0,&PTR_PTR_1126bcd28,0x112df41c8
                                    ,&UNK_10d9c29a0);
                    }
                    uVar17 = (ulong)puVar10 & 0xffffffffffffff8;
                    uVar22 = *(ulong *)(uVar17 + 0x10);
                    puVar6 = puVar10;
                    if (*(ulong *)(uVar17 + 0x18) >> 1 <= uVar22) {
                      puVar6 = (undefined *)(ulong)(1 < *(ulong *)(uVar17 + 0x18));
                      FUN_1027aea6c(puVar6,uVar22 + 1,1,puVar10,0x112df41c0,&PTR_PTR_1126bcd28,
                                    0x112df41c8,&UNK_10d9c29a0);
                      uVar17 = (ulong)puVar6 & 0xffffffffffffff8;
                    }
                    *(ulong *)(uVar17 + 0x10) = uVar22 + 1;
                    *(long *)(uVar17 + uVar22 * 8 + 0x20) = lVar18;
                  }
                  func_0x000107c601c0(apuStack_90,lVar3,uStack_e0);
                }
                func_0x000107c61170(puVar5);
                (*pcStack_118)(lVar21,lVar3);
                uStack_100 = (ulong)puVar6 >> 0x3e;
                puVar23 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
                if (uStack_100 == 0) {
                  puVar5 = *(undefined **)(puVar23 + 0x10);
                }
                else {
                  puVar5 = puVar23;
                  if (((ulong)puVar6 & 0x8000000000000000) != 0) {
                    puVar5 = puVar6;
                  }
                  func_0x000107c60480();
                }
                puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
                if (puVar5 != (undefined *)0x0) {
                  puVar9 = (undefined *)0x0;
                  do {
                    while( true ) {
                      if (((ulong)puVar6 & 0xc000000000000001) == 0) {
                        if (*(undefined **)(puVar23 + 0x10) <= puVar9) {
                    /* WARNING: Does not return */
                          pcVar2 = (code *)SoftwareBreakpoint(1,0x1027ae698);
                          (*pcVar2)();
                        }
                        puVar11 = *(undefined **)(puVar6 + (long)puVar9 * 8 + 0x20);
                        func_0x000107c61174();
                      }
                      else {
                        puVar11 = puVar9;
                        FUN_1027aef00(puVar9,puVar6,&PTR_PTR_1126bcd28,0x112df41c0);
                      }
                      puVar1 = puVar9 + 1;
                      if (SCARRY8((long)puVar9,1)) {
                    /* WARNING: Does not return */
                        pcVar2 = (code *)SoftwareBreakpoint(1,0x1027ae694);
                        (*pcVar2)();
                      }
                      puVar12 = puVar11;
                      func_0x000107c42444();
                      if ((int)puVar12 == 1) break;
LAB_1027ae10c:
                      puVar9 = puVar10;
                      func_0x000107c61558();
                      apuStack_90[0] = puVar10;
                      if (((ulong)puVar9 & 1) == 0) {
                        FUN_1027aed78(0,*(long *)(puVar10 + 0x10) + 1,1);
                      }
                      uVar22 = *(ulong *)(apuStack_90[0] + 0x10);
                      if (*(ulong *)(apuStack_90[0] + 0x18) >> 1 <= uVar22) {
                        FUN_1027aed78(1 < *(ulong *)(apuStack_90[0] + 0x18),uVar22 + 1,1);
                      }
                      *(ulong *)(apuStack_90[0] + 0x10) = uVar22 + 1;
                      *(undefined **)(apuStack_90[0] + uVar22 * 8 + 0x20) = puVar11;
                      puVar10 = apuStack_90[0];
                      puVar9 = puVar1;
                      if (puVar1 == puVar5) goto LAB_1027ae1d0;
                    }
                    puVar12 = puVar11;
                    func_0x000107c40dc8();
                    func_0x000107c61180();
                    if (puVar12 == (undefined *)0x0) goto LAB_1027ae10c;
                    puVar13 = puVar12;
                    func_0x000107c4a764();
                    func_0x000107c61180();
                    func_0x000107c61170(puVar12);
                    if (puVar13 == (undefined *)0x0) goto LAB_1027ae10c;
                    puVar12 = puVar13;
                    func_0x000107c42924();
                    func_0x000107c61180();
                    func_0x000107c61170(puVar13);
                    if (puVar12 == (undefined *)0x0) goto LAB_1027ae10c;
                    puVar13 = puVar12;
                    func_0x000107c42930();
                    func_0x000107c61170(puVar12);
                    if ((int)puVar13 != 0x1b) goto LAB_1027ae10c;
                    func_0x000107c61170(puVar11);
                    puVar9 = puVar9 + 1;
                  } while (puVar1 != puVar5);
                }
LAB_1027ae1d0:
                if (uStack_100 == 0) {
                  puVar23 = *(undefined **)(puVar23 + 0x10);
                }
                else {
                  if (((ulong)puVar6 & 0x8000000000000000) != 0) {
                    puVar23 = puVar6;
                  }
                  func_0x000107c60480();
                }
                lVar3 = lStack_110;
                func_0x000107c6142c(puVar6);
                uVar4 = uStack_158;
                uVar14 = (uint)((ulong)puVar10 >> 0x3e) & 1;
                if ((long)puVar10 < 0) {
                  uVar14 = 1;
                }
                if (uVar14 == 1) {
                  puVar5 = puVar10;
                  func_0x000107c60480();
                }
                else {
                  puVar5 = *(undefined **)(puVar10 + 0x10);
                }
                puVar6 = puStack_120;
                lVar21 = lStack_128;
                if (SBORROW8((long)puVar23,(long)puVar5)) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1027ae7c8);
                  (*pcVar2)();
                }
                if (SCARRY8(lStack_f8,(long)puVar23 - (long)puVar5)) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1027ae7cc);
                  (*pcVar2)();
                }
                puVar9 = puVar10;
                lStack_f8 = lStack_f8 + ((long)puVar23 - (long)puVar5);
                func_0x0001027ae808(puVar10,&PTR_PTR_1126bcd28,0x112df41c0);
                puVar23 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
                func_0x000107c610f8(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
                puVar5 = puVar9;
                func_0x000107c5fc48(puVar9,PTR___sypN_11034f1a8 + 8);
                func_0x000107c6142c(puVar9);
                func_0x000107c45788(puVar23);
                func_0x000107c61170(puVar5);
                func_0x000107c57cf8(puStack_f0);
                func_0x000107c61170(puVar23);
                if (uVar14 == 0) {
                  puVar23 = *(undefined **)(puVar10 + 0x10);
                }
                else {
                  puVar23 = puVar10;
                  func_0x000107c60480();
                }
                func_0x000107c61574(puVar10);
                puVar5 = puStack_f0;
                if (puVar23 != (undefined *)0x0) {
                  func_0x000107c61174();
                  puVar23 = puStack_180;
                  puVar10 = puStack_180;
                  func_0x000107c61550();
                  if ((((int)puVar10 == 0) || ((long)puVar23 < 0)) ||
                     (puVar10 = puVar23, ((ulong)puVar23 >> 0x3e & 1) != 0)) {
                    if ((ulong)puVar23 >> 0x3e == 0) {
                      puVar9 = *(undefined **)(((ulong)puVar23 & 0xffffffffffffff8) + 0x10);
                    }
                    else {
                      puVar9 = (undefined *)((ulong)puVar23 & 0xffffffffffffff8);
                      if ((undefined *)0x7fffffffffffffff < puVar23) {
                        puVar9 = puVar23;
                      }
                      func_0x000107c60480(puVar9);
                    }
                    puVar10 = (undefined *)0x0;
                    FUN_1027aea6c(0,puVar9 + 1,1,puVar23,0x112df41b0,&PTR_PTR_1126bceb8,0x112df41b8,
                                  &UNK_10d9c2998);
                  }
                  uVar17 = (ulong)puVar10 & 0xffffffffffffff8;
                  uVar22 = *(ulong *)(uVar17 + 0x10);
                  puStack_180 = puVar10;
                  if (*(ulong *)(uVar17 + 0x18) >> 1 <= uVar22) {
                    puVar23 = (undefined *)(ulong)(1 < *(ulong *)(uVar17 + 0x18));
                    FUN_1027aea6c(puVar23,uVar22 + 1,1,puVar10,0x112df41b0,&PTR_PTR_1126bceb8,
                                  0x112df41b8,&UNK_10d9c2998);
                    uVar17 = (ulong)puVar23 & 0xffffffffffffff8;
                    puStack_180 = puVar23;
                  }
                  *(ulong *)(uVar17 + 0x10) = uVar22 + 1;
                  *(undefined **)(uVar17 + uVar22 * 8 + 0x20) = puVar5;
                }
                func_0x000107c61170(puVar5);
                puVar23 = puStack_148;
                puVar10 = puStack_108;
              } while (puStack_108 != puStack_150);
            }
            func_0x000107c6142c(puVar23);
            puVar23 = puStack_180;
            puVar5 = puStack_180;
            func_0x0001027ae808(puStack_180,&PTR_PTR_1126bceb8,0x112df41b0);
            puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
            func_0x000107c610f8(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
            puVar9 = puVar5;
            func_0x000107c5fc48(puVar5,PTR___sypN_11034f1a8 + 8);
            func_0x000107c6142c(puVar5);
            func_0x000107c45788(puVar10);
            func_0x000107c61170(puVar9);
            func_0x000107c57cf4(puStack_188);
            func_0x000107c61170(puVar10);
            if ((ulong)puVar23 >> 0x3e == 0) {
              puVar5 = *(undefined **)(((ulong)puVar23 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar5 = (undefined *)((ulong)puVar23 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puVar23) {
                puVar5 = puVar23;
              }
              func_0x000107c60480();
            }
            uVar17 = uStack_160;
            puVar23 = puStack_168;
            if (puVar5 == (undefined *)0x0) {
              func_0x000107c6142c(puStack_180);
              puVar5 = puStack_188;
            }
            else {
              puVar5 = puStack_188;
              func_0x000107c61174();
              puVar23 = puStack_170;
              puVar10 = puStack_170;
              func_0x000107c61550();
              if ((((int)puVar10 == 0) || ((long)puVar23 < 0)) ||
                 (puVar10 = puVar23, ((ulong)puVar23 >> 0x3e & 1) != 0)) {
                if ((ulong)puVar23 >> 0x3e == 0) {
                  puVar9 = *(undefined **)(((ulong)puVar23 & 0xffffffffffffff8) + 0x10);
                }
                else {
                  puVar9 = (undefined *)((ulong)puVar23 & 0xffffffffffffff8);
                  if ((undefined *)0x7fffffffffffffff < puVar23) {
                    puVar9 = puVar23;
                  }
                  func_0x000107c60480(puVar9);
                }
                puVar10 = (undefined *)0x0;
                FUN_1027aea6c(0,puVar9 + 1,1,puVar23,0x112df41a0,&PTR_PTR_1126bceb0,0x112df41a8,
                              &UNK_10d9c2990);
              }
              uVar17 = (ulong)puVar10 & 0xffffffffffffff8;
              uVar22 = *(ulong *)(uVar17 + 0x10);
              puStack_170 = puVar10;
              if (*(ulong *)(uVar17 + 0x18) >> 1 <= uVar22) {
                puVar23 = (undefined *)(ulong)(1 < *(ulong *)(uVar17 + 0x18));
                FUN_1027aea6c(puVar23,uVar22 + 1,1,puVar10,0x112df41a0,&PTR_PTR_1126bceb0,
                              0x112df41a8,&UNK_10d9c2990);
                uVar17 = (ulong)puVar23 & 0xffffffffffffff8;
                puStack_170 = puVar23;
              }
              *(ulong *)(uVar17 + 0x10) = uVar22 + 1;
              *(undefined **)(uVar17 + uVar22 * 8 + 0x20) = puVar5;
              func_0x000107c6142c(puStack_180);
              puVar5 = puStack_188;
              uVar17 = uStack_160;
              puVar23 = puStack_168;
            }
          }
          else {
            puVar10 = puVar5;
            func_0x000107c61174();
            puVar9 = puVar23;
            func_0x000107c61550();
            if ((((int)puVar9 == 0) || ((long)puVar23 < 0)) ||
               (puVar9 = puVar23, ((ulong)puVar23 >> 0x3e & 1) != 0)) {
              if ((ulong)puVar23 >> 0x3e == 0) {
                puVar11 = *(undefined **)(((ulong)puVar23 & 0xffffffffffffff8) + 0x10);
              }
              else {
                puVar11 = (undefined *)((ulong)puVar23 & 0xffffffffffffff8);
                if ((undefined *)0x7fffffffffffffff < puVar23) {
                  puVar11 = puVar23;
                }
                func_0x000107c60480(puVar11);
              }
              puVar9 = (undefined *)0x0;
              FUN_1027aea6c(0,puVar11 + 1,1,puVar23,0x112df41a0,&PTR_PTR_1126bceb0,0x112df41a8,
                            &UNK_10d9c2990);
            }
            uVar17 = (ulong)puVar9 & 0xffffffffffffff8;
            uVar22 = *(ulong *)(uVar17 + 0x10);
            puStack_170 = puVar9;
            if (*(ulong *)(uVar17 + 0x18) >> 1 <= uVar22) {
              puVar23 = (undefined *)(ulong)(1 < *(ulong *)(uVar17 + 0x18));
              FUN_1027aea6c(puVar23,uVar22 + 1,1,puVar9,0x112df41a0,&PTR_PTR_1126bceb0,0x112df41a8,
                            &UNK_10d9c2990);
              uVar17 = (ulong)puVar23 & 0xffffffffffffff8;
              puStack_170 = puVar23;
            }
            *(ulong *)(uVar17 + 0x10) = uVar22 + 1;
            *(undefined **)(uVar17 + uVar22 * 8 + 0x20) = puVar10;
            uVar17 = uStack_160;
            puVar23 = puStack_168;
          }
          func_0x000107c61170(puVar5);
          puVar10 = puStack_178;
        } while (puStack_178 != puStack_198);
        func_0x000107c6142c(puVar23);
        puVar23 = puStack_170;
        if (0 < lStack_f8) {
          puVar5 = puStack_170;
          func_0x0001027ae808(puStack_170,&PTR_PTR_1126bceb0,0x112df41a0);
          puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          func_0x000107c610f8(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
          param_2 = PTR___sypN_11034f1a8 + 8;
          puVar9 = puVar5;
          func_0x000107c5fc48(puVar5,param_2);
          func_0x000107c6142c(puVar5);
          func_0x000107c45788(puVar10);
          func_0x000107c61170(puVar9);
          func_0x000107c57cfc(uStack_1b0);
          func_0x000107c61170(puVar10);
          uVar17 = uStack_160;
          func_0x000107c41214();
          func_0x000107c61180();
          if (uVar17 != 0) {
            uVar22 = uVar17;
            func_0x000107c5ee30();
            func_0x000107c61170(uVar17);
            func_0x000107c61170(uStack_160);
            func_0x000107c61170(uStack_1b0);
            func_0x00010006c090(uVar4,puVar6);
            func_0x000107c6142c(puVar23);
            goto LAB_1027ad848;
          }
          func_0x000107c6142c(puVar23);
          func_0x000107c61170(uStack_160);
          uVar17 = uStack_1b0;
          param_2 = puVar6;
          uVar22 = uVar4;
          goto LAB_1027ad844;
        }
      }
      func_0x000107c6142c(puVar23);
      func_0x000107c61170(uVar17);
      puVar15 = auStack_b0;
      param_2 = puVar6;
      uVar22 = uVar4;
    }
    uVar17 = *(ulong *)(puVar15 + -0x100);
  }
LAB_1027ad844:
  func_0x000107c61170(uVar17);
LAB_1027ad848:
  auVar24._8_8_ = param_2;
  auVar24._0_8_ = uVar22;
  return auVar24;
}



/* Entry: 1027ae9f4; end: 1027aea6b;  */

void FUN_1027ae9f4(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_1027af0bc(0,param_1,param_2);
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



/* Entry: 1027aea6c; end: 1027aebcb;  */

ulong FUN_1027aea6c(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1027aebcc);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_1027aebcc(uVar2,uVar4,param_5,param_6,param_7,param_8);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1027aebc8);
      (*pcVar1)();
    }
    FUN_1027aec5c(0,uVar2,uVar3 + 0x20,param_4,param_5,param_6);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 1027aebcc; end: 1027aec5b;  */

undefined *
FUN_1027aebcc(long param_1,long param_2,undefined *param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    FUN_1027ae9f4(param_3,param_4,param_5,param_6);
    func_0x000107c613fc();
    puVar1 = param_3;
    func_0x000107c610a4();
    puVar2 = puVar1 + -0x19;
    if (0x1f < (long)puVar1) {
      puVar2 = puVar1 + -0x20;
    }
    *(long *)(param_3 + 0x10) = param_1;
    *(ulong *)(param_3 + 0x18) = ((long)puVar2 >> 3) << 1 | 1;
    puVar2 = param_3;
  }
  return puVar2;
}



/* Entry: 1027aec5c; end: 1027aed77;  */

long FUN_1027aec5c(long param_1,long param_2,long param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1027aed74);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1027aed78);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_1027af0bc(0,param_5,param_6);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      FUN_1027af0bc(0,param_5,param_6);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1027aed70);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 1027aed78; end: 1027aedb3;  */

void FUN_1027aed78(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1027aedb4();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1027aedb4; end: 1027aeeff;  */

undefined *
FUN_1027aedb4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,undefined *param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1027aef00);
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
    puVar3 = param_5;
    FUN_1027ae9f4(param_5,param_6,param_7,param_8);
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
  if ((param_1 & 1) == 0) {
    uVar5 = 0;
    FUN_1027af0bc(0,param_5,param_6);
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



/* Entry: 1027aef00; end: 1027af0bb;  */

ulong FUN_1027aef00(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1027aefe4);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1027aefe8);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_1027af0bc(0,param_4,param_3);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1027af0bc);
  (*pcVar2)();
}



/* Entry: 1027af0bc; end: 1027af0fb;  */

void FUN_1027af0bc(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1027af0fc; end: 1027af183;  */

undefined8 FUN_1027af0fc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  
  func_0x000107c3eea8();
  func_0x000107c61180();
  uVar1 = unaff_x20;
  func_0x000107c5ee30();
  func_0x000107c61170(unaff_x20);
  func_0x000107c610f8(PTR_PTR_1126b25c0);
  uVar2 = uVar1;
  func_0x0001010282b0(uVar1,param_2);
  func_0x00010006c090(uVar1,param_2);
  return uVar2;
}



/* Entry: 1027af184; end: 1027af357;  */

undefined8 FUN_1027af184(undefined8 param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long unaff_x20;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  func_0x000107c4ca10();
  func_0x000107c61180();
  if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1027af358);
    (*pcVar1)();
  }
  puVar2 = &UNK_11054c5e0;
  func_0x000107c613fc(&UNK_11054c5e0,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  puVar3 = &UNK_11054c608;
  func_0x000107c613fc(&UNK_11054c608,0x20,7);
  *(code **)(puVar3 + 0x10) = FUN_1027af3ec;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  pcStack_50 = FUN_1027af3f4;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_1027af418;
  puStack_58 = &UNK_11054c620;
  ppuVar4 = &puStack_70;
  puStack_48 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  puVar6 = puStack_48;
  func_0x000107c61174(param_1);
  func_0x000107c6157c(puVar3);
  func_0x000107c61574(puVar6);
  lVar5 = unaff_x20;
  func_0x000107c4365c();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(unaff_x20);
  puVar6 = puVar3;
  func_0x000107c61544(puVar3,"",0x55,10,0x29,1);
  func_0x000107c61574(puVar3);
  if (((ulong)puVar6 & 1) == 0) {
    if (lVar5 == 0) {
      uStack_88 = 0;
      puStack_90 = (undefined *)0x0;
      lStack_78 = 0;
      uStack_80 = 0;
    }
    else {
      func_0x000107c60234(&puStack_90,lVar5);
      func_0x000107c615e8(lVar5);
    }
    uStack_68 = uStack_88;
    puStack_70 = puStack_90;
    puStack_58 = (undefined *)lStack_78;
    pcStack_60 = (code *)uStack_80;
    if (lStack_78 == 0) {
      func_0x00010006e7f4(&puStack_70);
    }
    else {
      uVar7 = 0;
      func_0x0001012e2f20(0);
      puVar8 = &uStack_98;
      func_0x000107c6147c(puVar8,&puStack_70,PTR___sypN_11034f1a8 + 8,uVar7,6);
      if ((int)puVar8 != 0) {
        func_0x000107c61574(puVar2);
        return uStack_98;
      }
    }
    func_0x000107c61574(puVar2);
    return 0;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027af354);
  (*pcVar1)();
}



/* Entry: 1027af358; end: 1027af3eb;  */

bool FUN_1027af358(undefined8 param_1,long param_2)

{
  bool bVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lStack_58;
  undefined1 auStack_50 [32];
  
  func_0x0001000bb420(param_1,auStack_50);
  uVar2 = 0;
  func_0x0001012e2f20(0);
  plVar3 = &lStack_58;
  func_0x000107c6147c(plVar3,auStack_50,PTR___sypN_11034f1a8 + 8,uVar2,6);
  if (((ulong)plVar3 & 1) == 0) {
    bVar1 = false;
  }
  else {
    lVar4 = lStack_58;
    func_0x000107c4c9b4(lStack_58);
    func_0x000107c4c9b4(param_2);
    func_0x000107c61170(lStack_58);
    bVar1 = lVar4 == param_2;
  }
  return bVar1;
}



/* Entry: 1027af3ec; end: 1027af3f3;  */

bool FUN_1027af3ec(undefined8 param_1)

{
  bool bVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_58;
  undefined1 auStack_50 [32];
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  func_0x0001000bb420(param_1,auStack_50);
  uVar2 = 0;
  func_0x0001012e2f20(0);
  plVar3 = &lStack_58;
  func_0x000107c6147c(plVar3,auStack_50,PTR___sypN_11034f1a8 + 8,uVar2,6);
  if (((ulong)plVar3 & 1) == 0) {
    bVar1 = false;
  }
  else {
    lVar4 = lStack_58;
    func_0x000107c4c9b4(lStack_58);
    func_0x000107c4c9b4(lVar5);
    func_0x000107c61170(lStack_58);
    bVar1 = lVar4 == lVar5;
  }
  return bVar1;
}



/* Entry: 1027af3f4; end: 1027af417;  */

uint FUN_1027af3f4(uint param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return param_1 & 1;
}



/* Entry: 1027af418; end: 1027af477;  */

uint FUN_1027af418(long param_1,undefined8 param_2)

{
  code *pcVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  uVar2 = 0;
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar3 = param_2;
  func_0x000107c614f0();
  auStack_50[0] = param_2;
  uStack_38 = uVar3;
  func_0x000107c615f0(param_2);
  (*pcVar1)(auStack_50);
  func_0x000100183ab8(auStack_50);
  return uVar2 & 1;
}



/* Entry: 1027af478; end: 1027af493;  */

void FUN_1027af478(long param_1,long param_2)

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



/* Entry: 1027af494; end: 1027af713;  */

undefined * FUN_1027af494(void)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long unaff_x20;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puStack_68;
  
  lVar5 = unaff_x20;
  func_0x000107c44a2c();
  if ((int)lVar5 != 0) {
    lVar5 = unaff_x20;
    func_0x000107c4e8d8();
    func_0x000107c61180();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1027af70c);
      (*pcVar4)();
    }
    lVar6 = lVar5;
    func_0x000107c4e928();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1027af710);
      (*pcVar4)();
    }
    lVar5 = lVar6;
    func_0x000107c40808();
    func_0x000107c61170(lVar6);
    if (0 < lVar5) {
      func_0x000107c4e8d8();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1027af714);
        (*pcVar4)();
      }
      lVar5 = unaff_x20;
      func_0x000107c4e928();
      func_0x000107c61180();
      func_0x000107c61170(unaff_x20);
      if (lVar5 != 0) {
        puStack_68 = (undefined *)0x0;
        uVar7 = 0;
        func_0x000101de16dc(0);
        func_0x000107c5fc50(lVar5,&puStack_68,uVar7);
        func_0x000107c61170(lVar5);
        puVar3 = puStack_68;
        if (puStack_68 != (undefined *)0x0) {
          puVar13 = (undefined *)((ulong)puStack_68 & 0xffffffffffffff8);
          if ((ulong)puStack_68 >> 0x3e == 0) {
            puVar12 = *(undefined **)(puVar13 + 0x10);
            puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
          }
          else {
            puVar12 = puStack_68;
            if (-1 < (long)puStack_68) {
              puVar12 = puVar13;
            }
            func_0x000107c60480();
            puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
          }
          PTR___swiftEmptyArrayStorage_11034f1c8 = puVar14;
          if (puVar12 != (undefined *)0x0) {
            puVar11 = (undefined *)0x0;
            do {
              while( true ) {
                if (((ulong)puVar3 & 0xc000000000000001) == 0) {
                  if (*(undefined **)(puVar13 + 0x10) <= puVar11) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x1027af6d8);
                    (*pcVar4)();
                  }
                  puVar8 = *(undefined **)(puVar3 + (long)puVar11 * 8 + 0x20);
                  func_0x000107c61174();
                }
                else {
                  puVar8 = puVar11;
                  func_0x00010121c1ac(puVar11,puVar3);
                }
                puVar1 = puVar11 + 1;
                if (SCARRY8((long)puVar11,1)) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x1027af6d4);
                  (*pcVar4)();
                }
                puVar9 = puVar8;
                func_0x000107c4abb4();
                if ((int)puVar9 == 1) break;
LAB_1027af59c:
                func_0x000107c61170(puVar8);
                puVar11 = puVar11 + 1;
                if (puVar1 == puVar12) goto LAB_1027af6f4;
              }
              puVar9 = puVar8;
              func_0x000107c4c930();
              func_0x000107c61180();
              if (puVar9 == (undefined *)0x0) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x1027af708);
                (*pcVar4)();
              }
              puVar10 = puVar9;
              func_0x000107c3e240();
              func_0x000107c61170(puVar9);
              if ((int)puVar10 != 5) goto LAB_1027af59c;
              puVar11 = puVar14;
              func_0x000107c61558();
              puStack_68 = puVar14;
              if (((ulong)puVar11 & 1) == 0) {
                func_0x000101a17c14(0,*(long *)(puVar14 + 0x10) + 1,1);
              }
              uVar2 = *(ulong *)(puStack_68 + 0x10);
              if (*(ulong *)(puStack_68 + 0x18) >> 1 <= uVar2) {
                func_0x000101a17c14(1 < *(ulong *)(puStack_68 + 0x18),uVar2 + 1,1);
              }
              *(ulong *)(puStack_68 + 0x10) = uVar2 + 1;
              *(undefined **)(puStack_68 + uVar2 * 8 + 0x20) = puVar8;
              puVar11 = puVar1;
              puVar14 = puStack_68;
            } while (puVar1 != puVar12);
          }
LAB_1027af6f4:
          func_0x000107c6142c(puVar3);
          return puVar14;
        }
      }
    }
  }
  return (undefined *)0x0;
}



/* Entry: 1027af714; end: 1027af943;  */

void FUN_1027af714(ulong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  FUN_1027af494();
  if (param_1 == 0) {
    return;
  }
  uVar5 = param_1 & 0xffffffffffffff8;
  if (param_1 >> 0x3e == 0) {
    uVar4 = *(ulong *)(uVar5 + 0x10);
    if (uVar4 == 0) goto LAB_1027af7cc;
  }
  else {
    uVar4 = param_1;
    if (-1 < (long)param_1) {
      uVar4 = uVar5;
    }
    uVar3 = uVar4;
    func_0x000107c60480();
    if (uVar3 == 0) goto LAB_1027af7cc;
    func_0x000107c60480();
  }
  if ((long)uVar4 < 2) {
    if ((param_1 & 0xc000000000000001) == 0) {
      if (*(long *)(uVar5 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1027af800);
        (*pcVar1)();
      }
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      func_0x000107c61174(uVar2);
    }
    else {
      uVar2 = 0;
      func_0x00010121c1ac(0);
    }
    func_0x000107c6142c(param_1);
    func_0x0001027af800(uVar2);
    func_0x000107c61170(uVar2);
    return;
  }
LAB_1027af7cc:
  func_0x000107c6142c();
  return;
}



/* Entry: 1027af944; end: 1027af957;  */

void FUN_1027af944(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1027af958; end: 1027af9a7;  */

undefined8 * FUN_1027af958(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  FUN_1027af944(uVar4,uVar1);
  uVar3 = *param_1;
  *param_1 = uVar4;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  func_0x00010276f658(uVar3,uVar2);
  return param_1;
}



/* Entry: 1027af9a8; end: 1027af9e3;  */

undefined8 * FUN_1027af9a8(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined1 *)(param_2 + 1);
  uVar3 = *param_1;
  *param_1 = *param_2;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  func_0x00010276f658(uVar3,uVar2);
  return param_1;
}



/* Entry: 1027af9e4; end: 1027afa9b;  */

int FUN_1027af9e4(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = *(byte *)(param_1 + 2) ^ 0xff;
  if (*(byte *)(param_1 + 2) < 2) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1027afa9c; end: 1027afb3f;  */

/* WARNING: Possible PIC construction at 0x0001027afb28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027afb2c) */

void FUN_1027afa9c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar2 = &UNK_11054c7b0;
  func_0x000107c613fc(&UNK_11054c7b0,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  uVar3 = 0x112ebeeb8;
  func_0x0001000285a8(0x112ebeeb8,&UNK_10dadb870);
  func_0x000107c613fc();
  pcVar4 = FUN_1027afb7c;
  func_0x0001000841fc(FUN_1027afb7c,puVar2,uVar3);
  func_0x000100084214(&UNK_10dadb840,0x2a,2);
  *param_1 = pcVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1027afb40; end: 1027afb4f;  */

undefined1  [16] FUN_1027afb40(void)

{
  return ZEXT816(0x11054c790);
}



/* Entry: 1027afb50; end: 1027afb7b;  */

void FUN_1027afb50(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1027afb7c; end: 1027afbbb;  */

void FUN_1027afb7c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1027afbbc(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("ChatPollDrawerRouterEntryPointProvider",0x26,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1027afbbc; end: 1027afc3b;  */

void FUN_1027afbbc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ebeec0,&UNK_10dadb880);
  puVar1 = &UNK_11054c858;
  func_0x000107c613fc(&UNK_11054c858,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1027afc3c,puVar1);
  return;
}



/* Entry: 1027afc3c; end: 1027afeb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027afc3c(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  plVar4 = &lStack_60;
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  FUN_1027b0378();
  lVar2 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112ebeec8) = 0;
  lVar1 = _DAT_112ebeed0;
  puVar3 = &UNK_10dadb890;
  func_0x0001000c10c0();
  func_0x000107c61180();
  *(undefined **)(lVar2 + lVar1) = puVar3;
  *(undefined8 *)(lVar2 + _DAT_112ebeed8) = uStack_48;
  *(undefined8 *)(lVar2 + _DAT_112ebeee0) = uStack_50;
  lStack_60 = lVar2;
  lStack_58 = param_2;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  *param_1 = plVar4;
  return;
}



/* Entry: 1027afeb8; end: 1027aff2b; -[_TtC14ChatPollDrawer20ChatPollDrawerRouter handlePresentPollCreationFrom:conversationId:] */

void FUN_1027afeb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x0001027afd9c(param_3,param_4,param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1027aff2c; end: 1027aff63;  */

void FUN_1027aff2c(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1027aff64; end: 1027aff67;  */

void FUN_1027aff64(void)

{
  return;
}



/* Entry: 1027aff68; end: 1027b02bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027aff68(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  long unaff_x20;
  long lVar15;
  undefined8 uVar16;
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar5 = *(long *)(unaff_x20 + 0x18);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar4 + 0x10,auStack_b8,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    func_0x000107c61428(lVar5 + 0x10,auStack_d0,0,0);
    lVar5 = lVar5 + 0x10;
    func_0x000107c61618();
    lVar3 = _DAT_112ebeec8;
    if (lVar5 != 0) {
      if (*(long *)(lVar5 + _DAT_112ebeec8) == 0) {
        lVar15 = *(long *)(lVar5 + _DAT_112ebeed8);
        lVar6 = lVar15;
        func_0x000107c5dbd4();
        func_0x000107c61180();
        lVar7 = lVar6;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(lVar6);
        if (lVar7 != 0) {
          lVar8 = *(long *)(lVar5 + _DAT_112ebeee0);
          func_0x000107c4141c();
          func_0x000107c61180();
          lVar6 = lVar8;
          func_0x000107c41414();
          func_0x000107c61180();
          func_0x000107c615e8(lVar8);
          lVar8 = lVar6;
          func_0x000107c5c734();
          func_0x000107c61180();
          func_0x000107c61170(lVar6);
          if (lVar8 != 0) {
            lVar6 = lVar8;
            func_0x000107c409cc();
            func_0x000107c61180();
            lVar9 = lVar7;
            if (lVar6 != 0) {
              func_0x000107c5dbd4(lVar15);
              func_0x000107c61180();
              lVar9 = lVar6;
              func_0x000107c40978();
              func_0x000107c61180();
              func_0x000107c61170(lVar15);
              uVar16 = *(undefined8 *)(lVar5 + lVar3);
              *(long *)(lVar5 + lVar3) = lVar9;
              func_0x000107c615f0(lVar9);
              func_0x000107c615e8(uVar16);
              puVar10 = PTR_PTR_1126aaf18;
              func_0x000107c610f8();
              func_0x000107c615f0(lVar9);
              func_0x000107c5fadc(uVar11,uVar1);
              func_0x000107c46188();
              func_0x000107c615e8(lVar9);
              func_0x000107c61170(uVar11);
              puVar14 = &UNK_11054c880;
              puVar12 = puVar14;
              func_0x000107c613fc(&UNK_11054c880,0x18,7);
              func_0x000107c61614(puVar12 + 0x10,lVar5);
              puVar2 = PTR___NSConcreteStackBlock_11034bd00;
              pcStack_80 = FUN_1027b0398;
              puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_98 = 0x42000000;
              puStack_90 = &UNK_1000f6b44;
              puStack_88 = &UNK_11054c930;
              ppuVar13 = &puStack_a0;
              puStack_78 = puVar12;
              func_0x000107c60bc4(ppuVar13);
              func_0x000107c61574(puStack_78);
              func_0x000107c56d08(puVar10);
              func_0x000107c60bd0(ppuVar13);
              func_0x000107c613fc(&UNK_11054c880,0x18,7);
              func_0x000107c61614(puVar14 + 0x10,lVar5);
              puVar12 = &UNK_11054c968;
              func_0x000107c613fc(&UNK_11054c968,0x20,7);
              *(undefined **)(puVar12 + 0x10) = puVar14;
              *(undefined **)(puVar12 + 0x18) = puVar10;
              pcStack_80 = FUN_1027b0474;
              puStack_a0 = puVar2;
              uStack_98 = 0x42000000;
              puStack_90 = &UNK_100f1c768;
              puStack_88 = &UNK_11054c980;
              ppuVar13 = &puStack_a0;
              puStack_78 = puVar12;
              func_0x000107c60bc4(ppuVar13);
              puVar14 = puStack_78;
              func_0x000107c61174(puVar10);
              func_0x000107c61574(puVar14);
              func_0x000107c440d8(lVar7);
              func_0x000107c60bd0(ppuVar13);
              func_0x000107c615e8(lVar6);
              func_0x000107c615e8(lVar9);
              func_0x000107c61170(puVar10);
              lVar9 = lVar8;
              lVar8 = lVar7;
            }
            func_0x000107c615e8(lVar9);
            lVar7 = lVar8;
          }
          func_0x000107c615e8(lVar7);
        }
      }
      func_0x000107c61170();
    }
    func_0x000107c61170(lVar4);
  }
  return;
}



/* Entry: 1027b02c0; end: 1027b02db;  */

void FUN_1027b02c0(long param_1,long param_2)

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



/* Entry: 1027b02dc; end: 1027b030f;  */

void FUN_1027b02dc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1027b0310; end: 1027b031f;  */

undefined1  [16] FUN_1027b0310(void)

{
  return ZEXT816(0x11054c920);
}



/* Entry: 1027b0320; end: 1027b0377; -[_TtC14ChatPollDrawer20ChatPollDrawerRouter .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001027b035c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027b0360) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027b0320(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ebeed8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ebeee0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ebeec8));
  return;
}



/* Entry: 1027b0378; end: 1027b0397;  */

void FUN_1027b0378(void)

{
  func_0x000107c61168(&PTR_PTR_1128619a0);
  return;
}



/* Entry: 1027b0398; end: 1027b0473;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027b0398(void)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + _DAT_112ebeed0);
    func_0x000107c615f0(uVar3);
    func_0x000107c61170(lVar1);
    pcStack_58 = FUN_1027b0684;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    puStack_60 = &UNK_11054ca70;
    ppuVar2 = &puStack_78;
    func_0x000107c60bc4(ppuVar2);
    func_0x000107c6157c();
    func_0x000107c61574(unaff_x20);
    func_0x000107c4e524(uVar3);
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c615e8(uVar3);
  }
  return;
}



/* Entry: 1027b0474; end: 1027b0663;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027b0474(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar2 + 0x10,auStack_78,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    if (param_1 == 0) {
      param_1 = *(long *)(lVar2 + _DAT_112ebeed0);
      puVar5 = &UNK_11054c9b8;
      func_0x000107c613fc(&UNK_11054c9b8,0x18,7);
      *(long *)(puVar5 + 0x10) = lVar2;
      pcStack_88 = FUN_1027b0664;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0x42000000;
      pcStack_98 = (code *)&UNK_1000f6b44;
      puStack_90 = &UNK_11054c9d0;
      ppuVar6 = &puStack_a8;
      puStack_80 = puVar5;
      func_0x000107c60bc4(ppuVar6);
      puVar5 = puStack_80;
      func_0x000107c615f0(param_1);
      func_0x000107c61174(lVar2);
      func_0x000107c61574(puVar5);
      func_0x000107c4e524(param_1);
    }
    else {
      puVar3 = PTR_PTR_1126df0c8;
      func_0x000107c61168(PTR_PTR_1126df0c8);
      puVar5 = &UNK_11054ca08;
      func_0x000107c613fc(&UNK_11054ca08,0x18,7);
      *(long *)(puVar5 + 0x10) = param_1;
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      pcStack_88 = (code *)0x1027b067c;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0x42000000;
      pcStack_98 = FUN_1027aff2c;
      puStack_90 = &UNK_11054ca20;
      ppuVar6 = &puStack_a8;
      puStack_80 = puVar5;
      func_0x000107c60bc4(ppuVar6);
      puVar5 = puStack_80;
      func_0x000107c615f4(param_1,2);
      func_0x000107c61574(puVar5);
      pcStack_88 = FUN_1027aff64;
      puStack_80 = (undefined *)0x0;
      puStack_a8 = puVar1;
      uStack_a0 = 0x42000000;
      pcStack_98 = (code *)&UNK_1000b0c7c;
      puStack_90 = &UNK_11054ca48;
      ppuVar4 = &puStack_a8;
      func_0x000107c60bc4(ppuVar4);
      func_0x000107c4994c(puVar3);
      func_0x000107c60bd0(ppuVar4);
    }
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c615e8(param_1);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 1027b0664; end: 1027b0683;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027b0664(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112ebeec8);
  *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112ebeec8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 1027b0684; end: 1027b06df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027b0684(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112ebeec8);
    *(undefined8 *)(lVar1 + _DAT_112ebeec8) = 0;
    func_0x000107c61170();
    func_0x000107c615e8(uVar2);
  }
  return;
}



/* Entry: 1027b06e0; end: 1027b070f;  */

void FUN_1027b06e0(long param_1,long param_2)

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



/* Entry: 1027b0710; end: 1027b077b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027b0710(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1027b0b04();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112ebef18) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1027b077c; end: 1027b07e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027b077c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ebef18) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1027b07e8; end: 1027b0847; -[_TtC38AddToGroupScopedFactoryServiceProvider26SCAddToGroupScopedServices init] */

void FUN_1027b07e8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AddToGroupScopedFactoryServiceProvider.SCAddToGroupScopedServices",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027b0814);
  (*pcVar1)();
}



/* Entry: 1027b0848; end: 1027b0857; -[_TtC38AddToGroupScopedFactoryServiceProvider26SCAddToGroupScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027b0848(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ebef18));
  return;
}



/* Entry: 1027b0858; end: 1027b08c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027b0858(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11054cc60;
  func_0x000107c613fc(&UNK_11054cc60,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_1027b0b9c,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1027b08c4; end: 1027b095f;  */

void FUN_1027b08c4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60);
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_11054cb70;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_11054cb70;
  return;
}



/* Entry: 1027b0960; end: 1027b0997;  */

void FUN_1027b0960(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100094f24();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *param_1 = lVar1;
  return;
}



/* Entry: 1027b0998; end: 1027b099f;  */

undefined8 FUN_1027b0998(void)

{
  return 0x1b;
}



/* Entry: 1027b09a0; end: 1027b0ad3;  */

void FUN_1027b09a0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_11054cc88;
  func_0x000107c613fc(&UNK_11054cc88,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1027b0b74;
  func_0x00010058fa64(FUN_1027b0b74,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1027b0ad4; end: 1027b0b03;  */

undefined ** FUN_1027b0ad4(void)

{
  return &PTR_DAT_113066778;
}



/* Entry: 1027b0b04; end: 1027b0b23;  */

void FUN_1027b0b04(void)

{
  func_0x000107c61168(&PTR_PTR_112861a78);
  return;
}



/* Entry: 1027b0b24; end: 1027b0b73;  */

undefined1  [16] FUN_1027b0b24(void)

{
  return ZEXT816(0x11054cbc0);
}



/* Entry: 1027b0b74; end: 1027b0b9b;  */

void FUN_1027b0b74(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 1027b0b9c; end: 1027b0b9f;  */

void FUN_1027b0b9c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1027b0ba0; end: 1027b0c0b;  */

void FUN_1027b0ba0(undefined8 *param_1)

{
  code *pcVar1;
  
  func_0x0001000285a8(0x112ebef88,&UNK_10dadbb30);
  func_0x000107c613fc();
  pcVar1 = FUN_1027b0c1c;
  func_0x0001000841fc(FUN_1027b0c1c,0);
  func_0x000100084214(&UNK_10dadbb00,0x28,2);
  *param_1 = pcVar1;
  return;
}



/* Entry: 1027b0c0c; end: 1027b0c1b;  */

undefined1  [16] FUN_1027b0c0c(void)

{
  return ZEXT816(0x11054ccc8);
}



/* Entry: 1027b0c1c; end: 1027b0f73;  */

void FUN_1027b0c1c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 uStack_68;
  
  uVar11 = *param_2;
  func_0x0001000285a8(0x112ebef90,&UNK_10dadbb38);
  puVar1 = &uStack_68;
  uStack_68 = uVar11;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_1027b1de4();
  func_0x000100082720("SCCreateChatSelectionScopeExposerSubjectServiceProvider",0x37,2);
  puVar3 = puVar2;
  FUN_1027b1e70();
  func_0x000100082720("SCCreateChatSelectionScopeExposerObservableServiceProvider",0x3a,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_1027b0960;
  func_0x0001000823a8(FUN_1027b0960,0);
  func_0x000100082720("SCAddToGroupScopedServicesCleanupRelayServiceProvider",0x35,2);
  puVar5 = puVar2;
  FUN_1027b1c98();
  func_0x000100082720("AddToGroupScopeGraphBridgeServicesServiceProvider",0x31,2);
  func_0x0001000285a8(0x112ebef98,&UNK_10dadbb50);
  puVar6 = &UNK_11054cce8;
  func_0x000107c613fc(&UNK_11054cce8,0x20,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 **)(puVar6 + 0x18) = puVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar3);
  pcVar7 = FUN_1027b0f74;
  func_0x0001000823a8(FUN_1027b0f74,puVar6);
  func_0x000100082720("SCAddToGroupScopeEntryPointWrapperServiceProvider",0x31,2);
  func_0x0001000285a8(0x112ebefa0,&UNK_10dadbb40);
  puVar6 = &UNK_11054cd10;
  func_0x000107c613fc(&UNK_11054cd10,0x30,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 **)(puVar6 + 0x18) = puVar5;
  *(code **)(puVar6 + 0x20) = pcVar7;
  *(code **)(puVar6 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar5);
  func_0x000107c6157c(pcVar7);
  func_0x000107c6157c(pcVar4);
  uVar11 = 0x1027b0f7c;
  func_0x0001000823a8(0x1027b0f7c,puVar6);
  func_0x000100082720("SCAddToGroupScopeInitializationPluginRegistryServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112ebef20,&UNK_10dadb900);
  func_0x000107c6157c(uVar11);
  uVar8 = 0x1027b0f88;
  func_0x0001000823a8(0x1027b0f88,uVar11);
  func_0x000100082720("SCAddToGroupScopeInitializationServiceProvider",0x2e,2);
  func_0x0001000285a8(0x112ebef10,&UNK_10dadb8f0);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x1027b0f90;
  func_0x0001000823a8(0x1027b0f90,uVar8);
  func_0x000100082720("SCAddToGroupScopedServicesServiceProvider",0x29,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar6 = &UNK_11054cd38;
  func_0x000107c613fc(&UNK_11054cd38,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar9;
  *(code **)(puVar6 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  pcVar10 = FUN_1027b0fc4;
  func_0x0001000823a8(FUN_1027b0fc4,puVar6);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(uVar11);
  func_0x000107c61574(uVar8);
  func_0x000100082720("SCAddToGroupScopeEntryPointProvider",0x23,2);
  *param_1 = pcVar10;
  return;
}



/* Entry: 1027b0f74; end: 1027b0f97;  */

void FUN_1027b0f74(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&uStack_40);
  FUN_1027b1350();
  func_0x000107c613fc();
  uVar1 = uStack_38;
  FUN_1027b11d0(uStack_38,uStack_40);
  func_0x000107c61170(uStack_38);
  func_0x000107c61574(uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 1027b0f98; end: 1027b0fc3;  */

void FUN_1027b0f98(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1027b0fc4; end: 1027b0fcb;  */

void FUN_1027b0fc4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_11054cb70;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_11054cb70;
  return;
}



/* Entry: 1027b0fcc; end: 1027b10b3;  */

void FUN_1027b0fcc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100083b20(&uStack_40);
  FUN_1027b1350();
  func_0x000107c613fc();
  uVar1 = uStack_38;
  FUN_1027b11d0(uStack_38,uStack_40);
  func_0x000107c61170(uStack_38);
  func_0x000107c61574(uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 1027b10b4; end: 1027b10df;  */

void FUN_1027b10b4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1027b10e0; end: 1027b10e7;  */

undefined8 FUN_1027b10e0(void)

{
  return 0x1b;
}



/* Entry: 1027b10e8; end: 1027b116b;  */

void FUN_1027b10e8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1027b1390,param_2,FUN_1027b1394,param_2,FUN_1027b13bc,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1027b116c; end: 1027b11bb;  */

undefined8 FUN_1027b116c(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 1027b11bc; end: 1027b11cf;  */

void FUN_1027b11bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_11054cd50;
  return;
}



/* Entry: 1027b11d0; end: 1027b1333;  */

void FUN_1027b11d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  func_0x0001000285a8(0x112ebf078,&UNK_10dadbc88);
  func_0x000107c610f8();
  func_0x000107c6157c(param_2);
  func_0x00010017da58();
  puVar1 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(param_2);
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  puVar1 = PTR_PTR_1126aaf20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0x6f72476f54646461;
  func_0x000107c5fadc(0x6f72476f54646461,0xef65706f63537075);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  uVar4 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef281c0);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1027b1334; end: 1027b134f;  */

undefined ** FUN_1027b1334(void)

{
  return &PTR_DAT_113066778;
}



/* Entry: 1027b1350; end: 1027b136f;  */

void FUN_1027b1350(void)

{
  func_0x000107c61168(&PTR_PTR_112ebf010);
  return;
}



/* Entry: 1027b1370; end: 1027b1393;  */

undefined1  [16] FUN_1027b1370(void)

{
  return ZEXT816(0x11054cd90);
}



/* Entry: 1027b1394; end: 1027b13bb;  */

void FUN_1027b1394(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1027b13bc; end: 1027b13c3;  */

undefined8 FUN_1027b13bc(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 1027b13c4; end: 1027b13ff;  */

void FUN_1027b13c4(undefined8 *param_1,undefined8 param_2)

{
  FUN_1027b1400();
  func_0x0001000a7f38("SCAddToGroupScopeInitializationPluginRegistryServiceProvider",0x3c,2);
  *param_1 = param_2;
  return;
}



/* Entry: 1027b1400; end: 1027b15eb;  */

void FUN_1027b1400(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074cee8;
  ppuVar4 = &PTR_DAT_113066778;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_11054cde0;
  func_0x000107c613fc(&UNK_11054cde0,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112ebf080;
  func_0x0001000285a8(0x112ebf080,&UNK_10dadbc90);
  func_0x0001000a6ee8(&UNK_11054d030,"AddToGroupScopeGraphBridgeScopeInitializationPluginKey",0x36,2
                      ,FUN_1027b15ec,puVar2,uVar3,&UNK_11054d030,&PTR_DAT_112ebf118);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_11054cd90,
                      "SCAddToGroupScopeEntryPointWrapperScopeInitializationPluginKey",0x3e,2,
                      FUN_1027b16a0,param_3,uVar3,&UNK_11054cd90,&PTR_DAT_112ebefa8);
  func_0x000107c61574(param_3);
  puVar2 = &UNK_11054ce08;
  func_0x000107c613fc(&UNK_11054ce08,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_11054cc00,"SCAddToGroupScopedServicesScopeInitializationPluginKey",0x36,2
                      ,FUN_1027b1750,puVar2,uVar3,&UNK_11054cc00,&PTR_DAT_112ebef28);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112ebf088;
  func_0x0001000285a8(0x112ebf088,&UNK_10dadbc98);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 1027b15ec; end: 1027b162b;  */

void FUN_1027b15ec(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1027b1f18(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("AddToGroupScopeGraphBridgeScopeInitializationPluginProvider",0x3b,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1027b162c; end: 1027b169f;  */

void FUN_1027b162c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x1027b178c;
  func_0x0001000823a8(0x1027b178c,param_3);
  func_0x000100082720("SCAddToGroupScopeEntryPointWrapperScopeInitializationPluginProvider",0x43,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1027b16a0; end: 1027b16a7;  */

void FUN_1027b16a0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x1027b178c;
  func_0x0001000823a8();
  func_0x000100082720("SCAddToGroupScopeEntryPointWrapperScopeInitializationPluginProvider",0x43,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1027b16a8; end: 1027b174f;  */

void FUN_1027b16a8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11054ce30;
  func_0x000107c613fc(&UNK_11054ce30,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_1027b1784;
  func_0x0001000823a8(FUN_1027b1784,puVar1);
  func_0x000100082720("SCAddToGroupScopedServicesScopeInitializationPluginProvider",0x3b,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 1027b1750; end: 1027b1757;  */

void FUN_1027b1750(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_11054ce30;
  func_0x000107c613fc(&UNK_11054ce30,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_1027b1784;
  func_0x0001000823a8(FUN_1027b1784,puVar3);
  func_0x000100082720("SCAddToGroupScopedServicesScopeInitializationPluginProvider",0x3b,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 1027b1758; end: 1027b1783;  */

void FUN_1027b1758(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1027b1784; end: 1027b1793;  */

void FUN_1027b1784(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_11054cc88;
  func_0x000107c613fc(&UNK_11054cc88,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1027b0b74;
  func_0x00010058fa64(FUN_1027b0b74,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1027b1794; end: 1027b186f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1027b1794(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_70 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar3 = auStack_70;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_1027b1ba8();
  if (lVar2 != 0) {
    func_0x000100083b20(&uStack_58);
    uStack_60 = param_2;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uStack_58);
    *(long *)(unaff_x20 + _DAT_112ebf090) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112ebf098) = param_3;
    func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027b1870);
  (*pcVar1)();
}



/* Entry: 1027b1870; end: 1027b18cf; -[_TtC26AddToGroupScopeGraphBridge41AddToGroupScopeGraphBridgeSaberEntryPoint init] */

void FUN_1027b1870(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AddToGroupScopeGraphBridge.AddToGroupScopeGraphBridgeSaberEntryPoint",0x44,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027b189c);
  (*pcVar1)();
}



/* Entry: 1027b18d0; end: 1027b1907; -[_TtC26AddToGroupScopeGraphBridge41AddToGroupScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001027b18ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027b18f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027b18d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ebf090));
  return;
}



/* Entry: 1027b1908; end: 1027b192f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027b1908(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112ebf098),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112ebf090));
  return;
}



/* Entry: 1027b1930; end: 1027b194f;  */

void FUN_1027b1930(void)

{
  func_0x000107c61168(&PTR_PTR_112861b38);
  return;
}



/* Entry: 1027b1950; end: 1027b19d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1027b1950(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ebf0c8) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112ebf0d0);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1027b19d8);
  (*pcVar2)();
}



/* Entry: 1027b19d8; end: 1027b1abf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1027b19d8(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  code *pcVar5;
  
  puVar2 = PTR_PTR_1126afc98;
  func_0x000107c61168();
  func_0x000107c3e26c();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ebf0c8);
  *(undefined **)(unaff_x20 + _DAT_112ebf0c8) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ebf0d0);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112ebf0d0))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_11054cf50;
  func_0x000107c613fc(&UNK_11054cf50,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1027b1ac4,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1027b1ac0; end: 1027b1acb;  */

void FUN_1027b1ac0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1027b1acc; end: 1027b1b2b; -[_TtC26AddToGroupScopeGraphBridge41SCAddToGroupScopedServicesSaberEntryPoint init] */

void FUN_1027b1acc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AddToGroupScopeGraphBridge.SCAddToGroupScopedServicesSaberEntryPoint",0x44,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027b1af8);
  (*pcVar1)();
}



/* Entry: 1027b1b2c; end: 1027b1b63; -[_TtC26AddToGroupScopeGraphBridge41SCAddToGroupScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027b1b2c(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ebf0d0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ebf0c8));
  return;
}



/* Entry: 1027b1b64; end: 1027b1b67;  */

void FUN_1027b1b64(void)

{
  return;
}



/* Entry: 1027b1b68; end: 1027b1b87;  */

void FUN_1027b1b68(void)

{
  FUN_1027b19d8();
  return;
}



/* Entry: 1027b1b88; end: 1027b1ba7;  */

void FUN_1027b1b88(void)

{
  func_0x000107c61168(&PTR_PTR_112861c00);
  return;
}


