/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1024ea8bc; end: 1024ea8e3; -[_TtC32FriendingInterstitialOperaPlugin40FriendingInterstitialLayerViewController initWithCoder:] */

void FUN_1024ea8bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x0001024ea7ac();
  return;
}



/* Entry: 1024ea8e4; end: 1024ea917;  */

void FUN_1024ea8e4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1024ea918; end: 1024ea98f; -[_TtC32FriendingInterstitialOperaPlugin40FriendingInterstitialLayerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024ea918(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea1c40));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ea1c48));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ea1c50));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ea1c60));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ea1c68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ea1c88));
  return;
}



/* Entry: 1024ea990; end: 1024ea9af;  */

void FUN_1024ea990(void)

{
  func_0x000107c61168(&PTR_PTR_112ea1cd0);
  return;
}



/* Entry: 1024ea9b0; end: 1024ea9b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024ea9b0(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + _DAT_112ea1c70) & 1) == 0) {
      lVar2 = lVar1;
      func_0x000107c4aba4();
      func_0x000107c61180();
      if (lVar2 != 0) {
        uVar3 = *(undefined8 *)(lVar2 + _DAT_112ea1b08);
        uVar4 = (ulong)*(byte *)(lVar2 + _DAT_112ea1b38);
        uVar5 = *(undefined8 *)(lVar2 + _DAT_112ea1b40);
        func_0x000107c615f0(uVar3);
        FUN_1024e2694(uVar4,uVar5);
        func_0x000107c615e8(uVar3);
        if (uVar4 == 0) {
          func_0x000107c61170(lVar2);
        }
        else {
          FUN_1024e96ac(uVar4,uVar5);
          func_0x000107c61170(lVar2);
          func_0x000107c6142c(uVar5);
          func_0x000107c6142c(uVar4);
        }
      }
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1024ea9b8; end: 1024eaac7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024ea9b8(undefined8 param_1,undefined8 param_2,ulong *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  
  lVar4 = unaff_x20;
  func_0x000107c4aba4();
  func_0x000107c61180();
  if (lVar4 != 0) {
    *(undefined1 *)(unaff_x20 + _DAT_112ea1c70) = 1;
    FUN_1024e6a40(param_2);
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar1 = uVar2 & 0xffffffffffff;
    if ((uVar3 & 0x2000000000000000) != 0) {
      uVar1 = uVar3 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      func_0x000107c61428(unaff_x20 + _DAT_112ea1c68,auStack_78,0x21,0);
      func_0x000107c61434(uVar3);
      func_0x000100403b00(auStack_60,uVar2,uVar3);
      func_0x000107c614a8(auStack_78);
      func_0x000107c6142c(uStack_58);
    }
    lVar5 = *(long *)(lVar4 + _DAT_112ea1b10);
    if (lVar5 != 0) {
      func_0x000107c6157c(lVar5);
      FUN_1024dd7e0(param_3,param_2);
      func_0x000107c61574(lVar5);
    }
    func_0x000107c61170(lVar4);
  }
  return;
}



/* Entry: 1024eaac8; end: 1024eaef3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024eaac8(undefined8 param_1,long param_2,ulong *param_3)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar7;
  long extraout_x12;
  long lVar8;
  long unaff_x20;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  long alStack_e0 [3];
  undefined8 *puStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined *apuStack_a0 [3];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar11 = 0x112ea1d70;
  func_0x0001000285a8(0x112ea1d70,&UNK_10dab40a0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = 0x112ea1d78;
  lStack_a8 = (long)alStack_e0 - extraout_x8;
  func_0x0001000285a8(0x112ea1d78,&UNK_10dab40a8);
  lStack_b0 = *(long *)(lVar11 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_b0 + 0x40));
  puVar13 = (undefined8 *)
            (((long)alStack_e0 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  *(undefined1 *)(unaff_x20 + _DAT_112ea1c70) = 1;
  lVar3 = _DAT_112ea1c50;
  func_0x000107c61428(unaff_x20 + _DAT_112ea1c50,auStack_78,0,0);
  if (-1 < param_2) {
    lVar15 = *(long *)(unaff_x20 + lVar3);
    lVar12 = *(long *)(lVar15 + 0x10);
    if (param_2 < lVar12) {
      lStack_b8 = lVar3;
      uVar7 = *param_3;
      uVar1 = param_3[1];
      uVar14 = uVar7 & 0xffffffffffff;
      if ((uVar1 & 0x2000000000000000) != 0) {
        uVar14 = uVar1 >> 0x38 & 0xf;
      }
      puStack_c8 = puVar13;
      lStack_c0 = (long)puVar13 - extraout_x12;
      alStack_e0[2] = param_1;
      puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
      lVar3 = _DAT_112ea1c48;
      if (uVar14 != 0) {
        func_0x000107c61428(unaff_x20 + _DAT_112ea1c68,apuStack_a0,0x21,0);
        func_0x000107c61434(uVar1);
        func_0x000100403b00(auStack_88,uVar7,uVar1);
        func_0x000107c614a8(apuStack_a0);
        func_0x000107c6142c(uStack_80);
        lVar15 = *(long *)(unaff_x20 + lStack_b8);
        lVar12 = *(long *)(lVar15 + 0x10);
        puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
        lVar3 = _DAT_112ea1c48;
      }
      PTR___swiftEmptyArrayStorage_11034f1c8 = puVar9;
      _DAT_112ea1c48 = lVar3;
      if (lVar12 != 0) {
        alStack_e0[1] = lVar11;
        func_0x000107c61434(lVar15);
        lVar11 = 0;
        puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
        do {
          if (param_2 != lVar11) {
            uVar14 = *(ulong *)(lVar15 + lVar11 * 8 + 0x20);
            if ((long)uVar14 < 0) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1024eaedc);
              (*pcVar4)();
            }
            lVar8 = *(long *)(unaff_x20 + lVar3);
            if (*(ulong *)(lVar8 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1024eaee0);
              (*pcVar4)();
            }
            lVar5 = 0;
            FUN_1024de864();
            uVar7 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
            if (*(char *)(lVar8 + (uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff)) +
                          *(long *)(*(long *)(lVar5 + -8) + 0x48) * uVar14 +
                         (long)*(int *)(lVar5 + 0x20)) == '\0') {
              puVar6 = puVar9;
              func_0x000107c61558();
              apuStack_a0[0] = puVar9;
              if (((ulong)puVar6 & 1) == 0) {
                func_0x0001024ec120(0,*(long *)(puVar9 + 0x10) + 1,1);
              }
              uVar7 = *(ulong *)(apuStack_a0[0] + 0x10);
              if (*(ulong *)(apuStack_a0[0] + 0x18) >> 1 <= uVar7) {
                func_0x0001024ec120(1 < *(ulong *)(apuStack_a0[0] + 0x18),uVar7 + 1,1);
              }
              *(ulong *)(apuStack_a0[0] + 0x10) = uVar7 + 1;
              *(long *)(apuStack_a0[0] + uVar7 * 0x10 + 0x20) = lVar11;
              *(ulong *)(apuStack_a0[0] + uVar7 * 0x10 + 0x28) = uVar14;
              puVar9 = apuStack_a0[0];
            }
          }
          lVar11 = lVar11 + 1;
        } while (lVar12 != lVar11);
        func_0x000107c6142c(lVar15);
        lVar11 = alStack_e0[1];
      }
      lVar15 = lStack_b8;
      lVar8 = *(long *)(puVar9 + 0x10);
      func_0x000107c61574(puVar9);
      lVar12 = unaff_x20;
      func_0x000107c4aba4();
      func_0x000107c61180();
      lVar3 = lStack_c0;
      puVar13 = puStack_c8;
      if (lVar12 == 0) {
        lVar12 = 0;
      }
      else {
        lVar12 = *(long *)(lVar12 + _DAT_112ea1b40);
        func_0x000107c61170();
      }
      lVar5 = lStack_a8;
      func_0x0001024e9b90(lStack_a8,PTR___swiftEmptySetSingleton_11034f1d8,lVar8 < lVar12);
      lVar12 = lVar5;
      (**(code **)(lStack_b0 + 0x30))(lVar5,1,lVar11);
      if ((int)lVar12 == 1) {
        func_0x0001024ec6ac(lVar5,0x112ea1d70,&UNK_10dab40a0);
        func_0x0001024e6b48(param_2);
      }
      else {
        func_0x0001024ec60c(lVar5,lVar3);
        func_0x0001024ec65c(lVar3,puVar13);
        uVar10 = *puVar13;
        func_0x000107c61428(unaff_x20 + lVar15,apuStack_a0,0x21,0);
        uVar7 = *(ulong *)(unaff_x20 + lVar15);
        uVar14 = uVar7;
        func_0x000107c61558();
        *(ulong *)(unaff_x20 + lVar15) = uVar7;
        if ((uVar14 & 1) == 0) {
          func_0x000102108400();
        }
        if (*(long *)(uVar7 + 0x10) <= param_2) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1024eaef4);
          (*pcVar4)();
        }
        iVar2 = *(int *)(lVar11 + 0x30);
        *(undefined8 *)(uVar7 + param_2 * 8 + 0x20) = uVar10;
        *(ulong *)(unaff_x20 + lVar15) = uVar7;
        func_0x000107c614a8(apuStack_a0);
        func_0x0001024e41b4((long)puVar13 + (long)iVar2);
        FUN_1024e6cdc(param_2,lVar3 + *(int *)(lVar11 + 0x30));
        func_0x0001024e99a8();
        func_0x0001024ec6ac(lVar3,0x112ea1d78,&UNK_10dab40a8);
      }
    }
  }
  return;
}



/* Entry: 1024eaef4; end: 1024eb56f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024eaef4(long param_1)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long extraout_x8;
  ulong uVar10;
  long unaff_x20;
  undefined *puVar11;
  long lVar12;
  ulong uVar13;
  ulong *puVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  long lStack_120;
  ulong uStack_118;
  long lStack_110;
  long lStack_108;
  undefined *puStack_100;
  long lStack_f8;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined1 auStack_b8 [24];
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [32];
  
  lVar3 = 0;
  FUN_1024de864();
  lVar18 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar18 + 0x40));
  lVar15 = (long)&lStack_120 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar16 = unaff_x20;
  func_0x000107c4aba4();
  func_0x000107c61180();
  if (lVar16 == 0) {
    return;
  }
  *(undefined1 *)(unaff_x20 + _DAT_112ea1c70) = 1;
  pcVar2 = *(code **)(lVar16 + _DAT_112ea1b28);
  uVar5 = ((undefined8 *)(lVar16 + _DAT_112ea1b28))[1];
  func_0x000107c6157c(uVar5);
  (*pcVar2)();
  func_0x000107c61574(uVar5);
  lVar12 = _DAT_112ea1c50;
  func_0x000107c61428(unaff_x20 + _DAT_112ea1c50,auStack_90,1,0);
  puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar19 = *(ulong *)(*(long *)(unaff_x20 + lVar12) + 0x10);
  if (uVar19 == 0) {
    func_0x000107c61170(lVar16);
    return;
  }
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_a0 = PTR___swiftEmptySetSingleton_11034f1d8;
  lStack_110 = _DAT_112ea1b40;
  uVar13 = uVar19;
  if ((long)*(ulong *)(lVar16 + _DAT_112ea1b40) <= (long)uVar19) {
    uVar13 = *(ulong *)(lVar16 + _DAT_112ea1b40);
  }
  lStack_108 = lVar16;
  func_0x0001024ebb3c(&puStack_98,&puStack_a0,uVar13,1);
  func_0x0001024eb570(&puStack_98,&puStack_a0,uVar19 - *(long *)(puStack_98 + 0x10),1);
  uVar13 = *(ulong *)(puStack_98 + 0x10);
  if (uVar13 <= uVar19 && uVar19 - uVar13 != 0) {
    func_0x0001024eb570(&puStack_98,&puStack_a0,uVar19 - uVar13,0);
    uVar13 = *(ulong *)(puStack_98 + 0x10);
  }
  lVar16 = _DAT_112ea1c48;
  lStack_f8 = param_1;
  if (uVar13 < uVar19) {
    lStack_120 = lVar12;
    puStack_100 = puStack_98;
    puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uStack_118 = uVar19;
    if (uVar13 != 0) {
      puVar14 = (ulong *)(puStack_98 + 0x20);
      do {
        uVar19 = *puVar14;
        if ((long)uVar19 < 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1024eb53c);
          (*pcVar2)();
        }
        if (*(ulong *)(*(long *)(unaff_x20 + lVar16) + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1024eb540);
          (*pcVar2)();
        }
        if (*(char *)(*(long *)(unaff_x20 + lVar16) +
                      ((ulong)*(byte *)(lVar18 + 0x50) + 0x20 &
                      ((ulong)*(byte *)(lVar18 + 0x50) ^ 0xffffffffffffffff)) +
                      *(long *)(lVar18 + 0x48) * uVar19 + (long)*(int *)(lVar3 + 0x20)) == '\0') {
          puVar4 = puVar11;
          func_0x000107c61558();
          puStack_e8 = puVar11;
          if (((ulong)puVar4 & 1) == 0) {
            func_0x000100dd4260(0,*(long *)(puVar11 + 0x10) + 1,1);
          }
          uVar17 = *(ulong *)(puStack_e8 + 0x10);
          if (*(ulong *)(puStack_e8 + 0x18) >> 1 <= uVar17) {
            func_0x000100dd4260(1 < *(ulong *)(puStack_e8 + 0x18),uVar17 + 1,1);
          }
          *(ulong *)(puStack_e8 + 0x10) = uVar17 + 1;
          *(ulong *)(puStack_e8 + uVar17 * 8 + 0x20) = uVar19;
          puVar11 = puStack_e8;
        }
        uVar13 = uVar13 - 1;
        puVar14 = puVar14 + 1;
      } while (uVar13 != 0);
    }
    lVar3 = *(long *)(puVar11 + 0x10);
    func_0x000107c61574(puVar11);
    lVar16 = lStack_108;
    puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uVar19 = *(long *)(lStack_108 + lStack_110) - lVar3;
    if (SBORROW8(*(long *)(lStack_108 + lStack_110),lVar3)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1024eb570);
      (*pcVar2)();
    }
    uVar19 = uVar19 & ((long)uVar19 >> 0x3f ^ 0xffffffffffffffffU);
    uVar13 = uStack_118 - *(long *)(puStack_100 + 0x10);
    if ((long)uVar19 <= (long)(uStack_118 - *(long *)(puStack_100 + 0x10))) {
      uVar13 = uVar19;
    }
    func_0x0001024ebb3c(&puStack_98,&puStack_a0,uVar13,0,unaff_x20);
    puVar4 = puStack_a0;
    lVar12 = lStack_120;
    if (*(long *)(puStack_98 + 0x10) == 0) {
      func_0x000107c6142c();
      func_0x000107c61170(lVar16);
      goto LAB_1024eb4ec;
    }
  }
  puVar4 = puStack_98;
  lVar3 = lStack_f8;
  uVar5 = *(undefined8 *)(unaff_x20 + lVar12);
  *(undefined **)(unaff_x20 + lVar12) = puStack_98;
  func_0x000107c6142c(uVar5);
  lVar16 = *(long *)(puVar4 + 0x10);
  puStack_100 = puVar4;
  if (lVar16 == 0) {
    func_0x000107c61434(puVar4);
    puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_e8 = puVar11;
    func_0x000107c61434(puVar4);
    FUN_1024ec104(0,lVar16,0);
    lVar12 = _DAT_112ea1c48;
    puVar11 = puStack_e8;
    puVar14 = (ulong *)(puVar4 + 0x20);
    do {
      uVar19 = *puVar14;
      if ((long)uVar19 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1024eb530);
        (*pcVar2)();
      }
      if (*(ulong *)(*(long *)(unaff_x20 + lVar12) + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1024eb534);
        (*pcVar2)();
      }
      uVar13 = (ulong)*(byte *)(lVar18 + 0x50) + 0x20 &
               ((ulong)*(byte *)(lVar18 + 0x50) ^ 0xffffffffffffffff);
      lVar3 = *(long *)(lVar18 + 0x48);
      func_0x0001024e1440(*(long *)(unaff_x20 + lVar12) + uVar13 + lVar3 * uVar19,lVar15);
      uVar19 = *(ulong *)(puVar11 + 0x10);
      puStack_e8 = puVar11;
      if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar19) {
        FUN_1024ec104(1 < *(ulong *)(puVar11 + 0x18),uVar19 + 1,1);
      }
      puVar11 = puStack_e8;
      *(ulong *)(puStack_e8 + 0x10) = uVar19 + 1;
      FUN_1024e4170(lVar15,puStack_e8 + uVar19 * lVar3 + uVar13);
      lVar16 = lVar16 + -1;
      lVar3 = lStack_f8;
      puVar14 = puVar14 + 1;
    } while (lVar16 != 0);
  }
  lVar16 = _DAT_112ea1b90;
  func_0x000107c61428(lVar3 + _DAT_112ea1b90,auStack_b8,0,0);
  uVar19 = *(ulong *)(lVar3 + lVar16);
  if (uVar19 >> 0x3e == 0) {
    uVar13 = *(ulong *)((uVar19 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar13 = uVar19 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar19) {
      uVar13 = uVar19;
    }
    func_0x000107c60480();
  }
  func_0x000107c61434(uVar19);
  if (uVar13 != 0) {
    uVar17 = 0;
    do {
      if ((uVar19 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar19 & 0xffffffffffffff8) + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1024eb538);
          (*pcVar2)();
        }
        uVar6 = *(ulong *)(uVar19 + uVar17 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar6 = uVar17;
        FUN_1024e8488(uVar17,uVar19);
      }
      if (SCARRY8(uVar17,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1024eb374);
        (*pcVar2)();
      }
      uVar10 = uVar17 + 1;
      *(undefined1 *)(uVar6 + _DAT_112ea1870) = 1;
      func_0x000107c61170();
      uVar17 = uVar17 + 1;
    } while (uVar10 != uVar13);
  }
  func_0x000107c6142c(uVar19);
  lVar3 = lStack_f8;
  *(undefined1 *)(lStack_f8 + _DAT_112ea1bf0) = 1;
  uVar13 = *(ulong *)(puVar11 + 0x10);
  uVar19 = *(ulong *)(lStack_f8 + lVar16);
  if (uVar19 >> 0x3e == 0) {
    uVar17 = *(ulong *)((uVar19 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar17 = uVar19 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar19) {
      uVar17 = uVar19;
    }
    func_0x000107c60480();
  }
  if ((long)uVar13 <= (long)uVar17) {
    uVar17 = uVar13;
  }
  puVar7 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
  puVar4 = &UNK_1105179d8;
  func_0x000107c613fc(&UNK_1105179d8,0x18,7);
  *(long *)(puVar4 + 0x10) = lVar3;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_c8 = FUN_1024ec5dc;
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0x42000000;
  puStack_d8 = &UNK_1000f6b44;
  puStack_d0 = &UNK_1105179f0;
  ppuVar8 = &puStack_e8;
  puStack_c0 = puVar4;
  func_0x000107c60bc4(ppuVar8);
  puVar4 = puStack_c0;
  func_0x000107c61174();
  func_0x000107c61574(puVar4);
  puVar4 = &UNK_110517a28;
  func_0x000107c613fc(&UNK_110517a28,0x28,7);
  *(ulong *)(puVar4 + 0x10) = uVar17;
  *(long *)(puVar4 + 0x18) = lVar3;
  *(undefined **)(puVar4 + 0x20) = puVar11;
  pcStack_c8 = (code *)0x1024ec600;
  puStack_e8 = puVar1;
  uStack_e0 = 0x42000000;
  puStack_d8 = &UNK_100288f10;
  puStack_d0 = &UNK_110517a40;
  ppuVar9 = &puStack_e8;
  puStack_c0 = puVar4;
  func_0x000107c60bc4(ppuVar9);
  puVar4 = puStack_c0;
  func_0x000107c61174(lVar3);
  func_0x000107c61434(puVar11);
  func_0x000107c61574(puVar4);
  func_0x000107c3dcd0(0x3fc70a3d70a3d70a,puVar7);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c6142c(puVar11);
  func_0x0001024e99a8();
  func_0x000107c61170(lStack_108);
  puVar4 = puStack_a0;
  func_0x000107c6142c(puStack_100);
LAB_1024eb4ec:
  func_0x000107c6142c(puVar4);
  return;
}



/* Entry: 1024eb570; end: 1024ec103;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024eb570(ulong *param_1,long *param_2,long param_3,uint param_4,long param_5)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  char cVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  undefined1 *puVar10;
  long extraout_x8;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  ulong *puVar18;
  ulong auStack_160 [2];
  ulong *puStack_150;
  uint uStack_144;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long *plStack_128;
  long lStack_120;
  long lStack_118;
  ulong uStack_110;
  long lStack_108;
  long lStack_100;
  ulong uStack_f8;
  undefined1 auStack_f0 [8];
  undefined8 uStack_e8;
  undefined1 auStack_e0 [8];
  undefined8 uStack_d8;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  lVar9 = 0;
  puStack_150 = param_1;
  uStack_144 = param_4;
  plStack_128 = param_2;
  FUN_1024de864();
  lVar14 = *(long *)(lVar9 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  auStack_160[1] = _DAT_112ea1c60;
  lVar7 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar18 = (ulong *)((long)auStack_160 + lVar7);
  if (0 < param_3) {
    lStack_108 = _DAT_112ea1c48;
    uStack_f8 = *(ulong *)(*(long *)(param_5 + _DAT_112ea1c48) + 0x10);
    if (uStack_f8 != 0) {
      auStack_160[0] = _DAT_112ea1c58;
      lStack_118 = *(long *)(param_5 + _DAT_112ea1c58);
      lStack_130 = _DAT_112ea1c68;
      func_0x000107c61428(param_5 + _DAT_112ea1c68,auStack_80,0,0);
      func_0x000107c61428(param_5 + auStack_160[1],auStack_98,0,0);
      uVar16 = 0;
      lStack_100 = 0;
      lStack_140 = lVar9;
      lStack_138 = param_3;
      lStack_120 = param_5;
LAB_1024eb690:
      lVar9 = lStack_138;
      lVar17 = lStack_140;
      uStack_110 = uVar16;
      if (uVar16 <= uStack_f8) {
        uStack_110 = uStack_f8;
      }
      do {
        if (uVar16 == uStack_110) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x1024ebb2c);
          (*pcVar8)();
        }
        if (lVar9 <= lStack_100) {
          return;
        }
        if (SCARRY8(lStack_118,uVar16)) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x1024ebb30);
          (*pcVar8)();
        }
        lVar12 = *(long *)(*(long *)(param_5 + lStack_108) + 0x10);
        if (lVar12 == 0) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x1024ebb34);
          (*pcVar8)();
        }
        lVar6 = 0;
        if (lVar12 != 0) {
          lVar6 = (long)(lStack_118 + uVar16) / lVar12;
        }
        lVar12 = (lStack_118 + uVar16) - lVar6 * lVar12;
        if (lVar12 < 0) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x1024ebb38);
          (*pcVar8)();
        }
        uVar16 = uVar16 + 1;
        func_0x0001024e1440(*(long *)(param_5 + lStack_108) +
                            ((ulong)*(byte *)(lVar14 + 0x50) + 0x20 &
                            ((ulong)*(byte *)(lVar14 + 0x50) ^ 0xffffffffffffffff)) +
                            *(long *)(lVar14 + 0x48) * lVar12,puVar18);
        uVar2 = *puVar18;
        uVar3 = *(ulong *)((long)auStack_160 + lVar7 + 8);
        uVar11 = uVar2 & 0xffffffffffff;
        if ((uVar3 & 0x2000000000000000) != 0) {
          uVar11 = uVar3 >> 0x38 & 0xf;
        }
        if (uVar11 == 0) {
          func_0x0001024e41b4(puVar18);
        }
        else {
          cVar5 = *(char *)((long)puVar18 + (long)*(int *)(lVar17 + 0x20));
          func_0x000107c61434(uVar3);
          if (cVar5 == '\x01') {
            lVar9 = *(long *)(param_5 + lStack_130);
            if (*(long *)(lVar9 + 0x10) != 0) {
              func_0x000107c6068c(auStack_e0,*(undefined8 *)(lVar9 + 0x28));
              func_0x000107c61434(lVar9);
              puVar10 = auStack_e0;
              func_0x000107c5fb58(puVar10,uVar2,uVar3);
              func_0x000107c606a8();
              uVar11 = -1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
              uVar15 = (ulong)puVar10 & (uVar11 ^ 0xffffffffffffffff);
              if ((*(ulong *)(lVar9 + 0x38 + (uVar15 >> 6) * 8) >> (uVar15 & 0x3f) & 1) != 0) {
                do {
                  puVar1 = (ulong *)(*(long *)(lVar9 + 0x30) + uVar15 * 0x10);
                  uVar13 = *puVar1;
                  uVar4 = puVar1[1];
                  if ((uVar13 == uVar2 && uVar4 == uVar3) ||
                     (func_0x000107c605b8(uVar13,uVar4,uVar2,uVar3,0), (uVar13 & 1) != 0))
                  goto LAB_1024eb980;
                  uVar15 = uVar15 + 1 & ~uVar11;
                } while ((*(ulong *)(lVar9 + 0x38 + (uVar15 >> 6) * 8) >> (uVar15 & 0x3f) & 1) != 0)
                ;
              }
              func_0x000107c6142c(lVar9);
            }
            lVar9 = *plStack_128;
            if (*(long *)(lVar9 + 0x10) != 0) {
              func_0x000107c6068c(auStack_e0,*(undefined8 *)(lVar9 + 0x28));
              puVar10 = auStack_e0;
              func_0x000107c5fb58(puVar10,uVar2,uVar3);
              func_0x000107c606a8();
              uVar11 = -1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
              uVar15 = (ulong)puVar10 & (uVar11 ^ 0xffffffffffffffff);
              if ((*(ulong *)(lVar9 + 0x38 + (uVar15 >> 6) * 8) >> (uVar15 & 0x3f) & 1) != 0) {
                do {
                  puVar1 = (ulong *)(*(long *)(lVar9 + 0x30) + uVar15 * 0x10);
                  uVar13 = *puVar1;
                  uVar4 = puVar1[1];
                  if ((uVar13 == uVar2 && uVar4 == uVar3) ||
                     (func_0x000107c605b8(uVar13,uVar4,uVar2,uVar3,0), (uVar13 & 1) != 0))
                  goto LAB_1024eb988;
                  uVar15 = uVar15 + 1 & ~uVar11;
                } while ((*(ulong *)(lVar9 + 0x38 + (uVar15 >> 6) * 8) >> (uVar15 & 0x3f) & 1) != 0)
                ;
              }
            }
            if (((uStack_144 & 1) == 0) ||
               (lVar9 = *(long *)(lStack_120 + auStack_160[1]), *(long *)(lVar9 + 0x10) == 0))
            goto LAB_1024eb9c4;
            func_0x000107c6068c(auStack_e0,*(undefined8 *)(lVar9 + 0x28));
            func_0x000107c61434(lVar9);
            puVar10 = auStack_e0;
            func_0x000107c5fb58(puVar10,uVar2,uVar3);
            func_0x000107c606a8();
            uVar11 = -1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
            uVar15 = (ulong)puVar10 & (uVar11 ^ 0xffffffffffffffff);
            if ((*(ulong *)(lVar9 + 0x38 + (uVar15 >> 6) * 8) >> (uVar15 & 0x3f) & 1) == 0)
            goto LAB_1024eb9b4;
            while( true ) {
              puVar1 = (ulong *)(*(long *)(lVar9 + 0x30) + uVar15 * 0x10);
              uVar13 = *puVar1;
              uVar4 = puVar1[1];
              if ((uVar13 == uVar2 && uVar4 == uVar3) ||
                 (func_0x000107c605b8(uVar13,uVar4,uVar2,uVar3,0), (uVar13 & 1) != 0)) break;
              uVar15 = uVar15 + 1 & ~uVar11;
              if ((*(ulong *)(lVar9 + 0x38 + (uVar15 >> 6) * 8) >> (uVar15 & 0x3f) & 1) == 0)
              goto LAB_1024eb9b4;
            }
LAB_1024eb980:
            func_0x000107c6142c(lVar9);
LAB_1024eb988:
            func_0x000107c6142c(uVar3);
            func_0x0001024e41b4(puVar18);
            lVar9 = lStack_138;
            param_5 = lStack_120;
            lVar17 = lStack_140;
          }
          else {
            func_0x0001024e41b4(puVar18);
            func_0x000107c6142c(uVar3);
          }
        }
      } while (uVar16 != uStack_f8);
    }
  }
  return;
LAB_1024eb9b4:
  func_0x000107c6142c(lVar9);
LAB_1024eb9c4:
  param_5 = lStack_120;
  uVar13 = *puStack_150;
  uVar11 = uVar13;
  func_0x000107c61558();
  uVar15 = uVar13;
  if ((uVar11 & 1) == 0) {
    uVar15 = 0;
    func_0x000101755b54(0,*(long *)(uVar13 + 0x10) + 1,1,uVar13);
  }
  uVar11 = *(ulong *)(uVar15 + 0x10);
  uVar13 = uVar15;
  if (*(ulong *)(uVar15 + 0x18) >> 1 <= uVar11) {
    uVar13 = (ulong)(1 < *(ulong *)(uVar15 + 0x18));
    func_0x000101755b54(uVar13,uVar11 + 1,1,uVar15);
  }
  *(ulong *)(uVar13 + 0x10) = uVar11 + 1;
  *(long *)(uVar13 + uVar11 * 8 + 0x20) = lVar12;
  *puStack_150 = uVar13;
  func_0x000107c61434(uVar3);
  func_0x000100403b00(auStack_e0,uVar2,uVar3);
  func_0x000107c6142c(uStack_d8);
  func_0x000107c61428(param_5 + auStack_160[1],auStack_e0,0x21,0);
  func_0x000100403b00(auStack_f0,uVar2,uVar3);
  func_0x000107c614a8(auStack_e0);
  func_0x000107c6142c(uStack_e8);
  uVar11 = *(ulong *)(*(long *)(param_5 + lStack_108) + 0x10);
  func_0x0001024e41b4(puVar18);
  if (uVar11 == 0) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x1024ebb3c);
    (*pcVar8)();
  }
  lStack_100 = lStack_100 + 1;
  uVar2 = 0;
  if (uVar11 != 0) {
    uVar2 = (lVar12 + 1U) / uVar11;
  }
  *(ulong *)(param_5 + auStack_160[0]) = (lVar12 + 1U) - uVar2 * uVar11;
  if (uVar16 == uStack_f8) {
    return;
  }
  goto LAB_1024eb690;
}



/* Entry: 1024ec104; end: 1024ec13b;  */

void FUN_1024ec104(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1024ec13c();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1024ec13c; end: 1024ec2b7;  */

undefined * FUN_1024ec13c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1024ec2b8);
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
    puVar4 = (undefined *)0x112ea1c38;
    func_0x0001000285a8(0x112ea1c38,&UNK_10dab4050);
    lVar5 = 0;
    FUN_1024de864();
    lVar10 = *(long *)(*(long *)(lVar5 + -8) + 0x48);
    uVar8 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
    uVar11 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
    func_0x000107c613fc(puVar4,uVar11 + lVar10 * uVar7,uVar8 | 7);
    puVar6 = puVar4;
    func_0x000107c610a4();
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1024ec2b0);
      (*pcVar3)();
    }
    lVar5 = (long)puVar6 - uVar11;
    if (lVar5 == -0x8000000000000000 && lVar10 == -1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1024ec2b4);
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
  FUN_1024de864();
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
  func_0x000107c61574(param_4);
  return puVar4;
}



/* Entry: 1024ec2b8; end: 1024ec3b7;  */

undefined * FUN_1024ec2b8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1024ec3b8);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112ea1d80;
    func_0x0001000285a8(0x112ea1d80,&UNK_10dab40b0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c610b4(puVar1,puVar4,uVar6 << 4);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 1024ec3b8; end: 1024ec4df;  */

undefined * FUN_1024ec3b8(undefined8 param_1,long param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  
  param_4 = param_4 >> 1;
  lVar2 = param_4 - param_3;
  if (SBORROW8(param_4,param_3)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1024ec4d8);
    (*pcVar3)();
  }
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar2 != 0) {
    if (0 < lVar2) {
      puVar4 = (undefined *)0x112ea1c38;
      func_0x0001000285a8(0x112ea1c38,&UNK_10dab4050);
      lVar5 = 0;
      FUN_1024de864();
      lVar8 = *(long *)(*(long *)(lVar5 + -8) + 0x48);
      uVar7 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
      uVar9 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
      func_0x000107c613fc(puVar4,uVar9 + lVar8 * lVar2,uVar7 | 7);
      puVar6 = puVar4;
      func_0x000107c610a4();
      if (lVar8 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1024ec4dc);
        (*pcVar3)();
      }
      lVar5 = (long)puVar6 - uVar9;
      if (lVar5 == -0x8000000000000000 && lVar8 == -1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1024ec4e0);
        (*pcVar3)();
      }
      lVar1 = 0;
      if (lVar8 != 0) {
        lVar1 = lVar5 / lVar8;
      }
      *(long *)(puVar4 + 0x10) = lVar2;
      *(long *)(puVar4 + 0x18) = lVar1 << 1;
    }
    if (param_3 == param_4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1024ec4d4);
      (*pcVar3)();
    }
    lVar5 = 0;
    FUN_1024de864();
    uVar7 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
    func_0x000107c6140c(puVar4 + (uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff)),
                        param_2 + *(long *)(*(long *)(lVar5 + -8) + 0x48) * param_3,lVar2,lVar5);
  }
  return puVar4;
}



/* Entry: 1024ec4e0; end: 1024ec5db;  */

undefined * FUN_1024ec4e0(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  lVar3 = param_2 - param_1;
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1024ec5dc);
    (*pcVar4)();
  }
  if (lVar3 == 0) {
    return PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (0 < lVar3) {
    puVar5 = (undefined *)0x112d36020;
    func_0x0001000285a8(0x112d36020,&UNK_10d92f8b0);
    func_0x000107c613fc();
    puVar6 = puVar5;
    func_0x000107c610a4();
    puVar1 = puVar6 + -0x19;
    if (0x1f < (long)puVar6) {
      puVar1 = puVar6 + -0x20;
    }
    *(long *)(puVar5 + 0x10) = lVar3;
    *(long *)(puVar5 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  lVar2 = param_2;
  if (param_2 <= param_1) {
    lVar2 = param_1;
  }
  if (param_1 != param_2) {
    lVar7 = 0;
    do {
      if (param_2 < param_1) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1024ec5d4);
        (*pcVar4)();
      }
      if (lVar2 - param_1 == lVar7) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1024ec5d8);
        (*pcVar4)();
      }
      *(long *)(puVar5 + lVar7 * 8 + 0x20) = param_1 + lVar7;
      if (lVar3 + -1 == lVar7) {
        return puVar5;
      }
      lVar7 = lVar7 + 1;
    } while (lVar3 != lVar7);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1024ec5d0);
  (*pcVar4)();
}



/* Entry: 1024ec5dc; end: 1024ec60b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024ec5dc(void)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x20;
  ulong uVar7;
  ulong uVar8;
  undefined1 auStack_68 [24];
  
  lVar1 = _DAT_112ea1b90;
  lVar4 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar4 + _DAT_112ea1b90,auStack_68,0,0);
  uVar5 = *(ulong *)(lVar4 + lVar1);
  if (uVar5 >> 0x3e == 0) {
    uVar6 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar6 = uVar5 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar5) {
      uVar6 = uVar5;
    }
    func_0x000107c60480();
  }
  func_0x000107c61434(uVar5);
  if (uVar6 != 0) {
    uVar7 = 0;
    do {
      if ((uVar5 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1024e7238);
          (*pcVar2)();
        }
        uVar3 = *(ulong *)(uVar5 + uVar7 * 8 + 0x20);
        func_0x000107c61174(uVar3);
      }
      else {
        uVar3 = uVar7;
        FUN_1024e8488(uVar7,uVar5);
      }
      if (SCARRY8(uVar7,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1024e7210);
        (*pcVar2)();
      }
      uVar8 = uVar7 + 1;
      func_0x000107c526c0(0);
      func_0x000107c61170(uVar3);
      uVar7 = uVar7 + 1;
    } while (uVar8 != uVar6);
  }
  func_0x000107c6142c(uVar5);
  return;
}



/* Entry: 1024ec60c; end: 1024ec6eb;  */

undefined8 FUN_1024ec60c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112ea1d78;
  func_0x0001000285a8(0x112ea1d78,&UNK_10dab40a8);
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1024ec6ec; end: 1024ec6f3;  */

void FUN_1024ec6ec(long param_1,long param_2)

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



/* Entry: 1024ec6f4; end: 1024ec87f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024ec6f4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined1 auStack_68 [24];
  
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112ea1d88);
  func_0x000107c4b940(uVar7);
  lVar1 = _DAT_112ea1d90;
  uVar4 = *(undefined8 *)(param_1 + _DAT_112ea1de8);
  uVar3 = ((undefined8 *)(param_1 + _DAT_112ea1de8))[1];
  func_0x000107c61428(unaff_x20 + _DAT_112ea1d90,auStack_68,0x21,0);
  func_0x000107c61434(uVar3);
  func_0x000107c61174();
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  func_0x000107c61558(uVar2);
  uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = 0x8000000000000000;
  func_0x0001024ed430(param_1,uVar4,uVar3,uVar2);
  func_0x000107c6142c(uVar3);
  *(undefined8 *)(unaff_x20 + lVar1) = uVar5;
  func_0x000107c614a8(auStack_68);
  uVar5 = *(undefined8 *)(param_1 + _DAT_112ea1df0);
  uVar3 = uVar5;
  func_0x000107c4a77c(uVar5);
  func_0x000107c61180();
  uVar2 = uVar3;
  func_0x000107c5faec();
  func_0x000107c61170(uVar3);
  lVar1 = _DAT_112ea1d98;
  func_0x000107c61428(unaff_x20 + _DAT_112ea1d98,auStack_68,0x21,0);
  func_0x000107c61174(uVar5);
  uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
  func_0x000107c61558(uVar3);
  uVar6 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = 0x8000000000000000;
  func_0x0001024ed2e0(uVar5,uVar2,uVar4,uVar3);
  func_0x000107c6142c(uVar4);
  *(undefined8 *)(unaff_x20 + lVar1) = uVar6;
  func_0x000107c614a8(auStack_68);
  func_0x000107c5d278(uVar7);
  return;
}



/* Entry: 1024ec880; end: 1024ec8cf; -[SCFriendingInterstitialOperaDataSource registerGroup:] */

/* WARNING: Possible PIC construction at 0x0001024ec8b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024ec8bc) */

void FUN_1024ec880(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1024ec6f4(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1024ec8d0; end: 1024ec8d7; -[SCFriendingInterstitialOperaDataSource needToPrepareMediaBeforeDisplay] */

undefined8 FUN_1024ec8d0(void)

{
  return 0;
}



/* Entry: 1024ec8d8; end: 1024ec9f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1024ec8d8(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long unaff_x20;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [24];
  
  if (param_1 == 0) {
    return 0;
  }
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112ea1d88);
  func_0x000107c615f0();
  func_0x000107c4b940(uVar6);
  lVar1 = param_1;
  func_0x000107c3b9ac();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5faec();
  func_0x000107c61170(lVar1);
  lVar1 = _DAT_112ea1d98;
  func_0x000107c61428(unaff_x20 + _DAT_112ea1d98,auStack_58,0x20,0);
  uVar5 = *(ulong *)(unaff_x20 + lVar1);
  if (*(long *)(uVar5 + 0x10) != 0) {
    func_0x000107c61434(uVar5);
    uVar4 = param_2;
    func_0x000100029284();
    if ((uVar4 & 1) != 0) {
      uVar3 = *(undefined8 *)(*(long *)(uVar5 + 0x38) + lVar2 * 8);
      func_0x000107c61174(uVar3);
      func_0x000107c6142c(param_2);
      func_0x000107c6142c(uVar5);
      goto LAB_1024ec9c0;
    }
    func_0x000107c6142c(param_2);
    param_2 = uVar5;
  }
  func_0x000107c6142c(param_2);
  uVar3 = 0;
LAB_1024ec9c0:
  func_0x000107c614a8(auStack_58);
  func_0x000107c5d278(uVar6);
  func_0x000107c615e8(param_1);
  return uVar3;
}



/* Entry: 1024ec9f4; end: 1024ec9ff; -[SCFriendingInterstitialOperaDataSource dataModelFor:] */

void FUN_1024ec9f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1024ec8d8(param_3);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1024eca00; end: 1024ecb1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1024eca00(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long unaff_x20;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [24];
  
  if (param_1 == 0) {
    return 0;
  }
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112ea1d88);
  func_0x000107c615f0();
  func_0x000107c4b940(uVar6);
  lVar1 = param_1;
  func_0x000107c3b9ac();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5faec();
  func_0x000107c61170(lVar1);
  lVar1 = _DAT_112ea1d90;
  func_0x000107c61428(unaff_x20 + _DAT_112ea1d90,auStack_58,0x20,0);
  uVar5 = *(ulong *)(unaff_x20 + lVar1);
  if (*(long *)(uVar5 + 0x10) != 0) {
    func_0x000107c61434(uVar5);
    uVar4 = param_2;
    func_0x000100029284();
    if ((uVar4 & 1) != 0) {
      uVar3 = *(undefined8 *)(*(long *)(uVar5 + 0x38) + lVar2 * 8);
      func_0x000107c61174(uVar3);
      func_0x000107c6142c(param_2);
      func_0x000107c6142c(uVar5);
      goto LAB_1024ecae8;
    }
    func_0x000107c6142c(param_2);
    param_2 = uVar5;
  }
  func_0x000107c6142c(param_2);
  uVar3 = 0;
LAB_1024ecae8:
  func_0x000107c614a8(auStack_58);
  func_0x000107c5d278(uVar6);
  func_0x000107c615e8(param_1);
  return uVar3;
}



/* Entry: 1024ecb1c; end: 1024ecb27; -[SCFriendingInterstitialOperaDataSource dataModelForGroup:] */

void FUN_1024ecb1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1024eca00(param_3);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1024ecb28; end: 1024ecb87;  */

void FUN_1024ecb28(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  (*param_4)(param_3);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1024ecb88; end: 1024ecd87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024ecb88(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long unaff_x20;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined1 auStack_58 [24];
  
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112ea1d88);
  func_0x000107c4b940(uVar7);
  lVar6 = param_1;
  func_0x000107c444d0();
  func_0x000107c61180();
  lVar1 = lVar6;
  func_0x000107c3b9ac();
  func_0x000107c61180();
  func_0x000107c615e8(lVar6);
  lVar2 = lVar1;
  func_0x000107c5faec();
  func_0x000107c61170(lVar1);
  lVar6 = _DAT_112ea1d90;
  func_0x000107c61428(unaff_x20 + _DAT_112ea1d90,auStack_58,0x20,0);
  uVar8 = *(ulong *)(unaff_x20 + lVar6);
  if (*(long *)(uVar8 + 0x10) == 0) {
    lVar6 = 0;
  }
  else {
    func_0x000107c61434(uVar8);
    uVar5 = param_2;
    func_0x000100029284();
    if ((uVar5 & 1) == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = *(long *)(*(long *)(uVar8 + 0x38) + lVar2 * 8);
      func_0x000107c61174(lVar6);
    }
    func_0x000107c6142c(param_2);
    param_2 = uVar8;
  }
  func_0x000107c6142c(param_2);
  func_0x000107c614a8(auStack_58);
  func_0x000107c5d278(uVar7);
  if (lVar6 == 0) {
    uVar7 = 0;
    func_0x0001044443ac(0);
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,uVar7);
    func_0x000107c505d4(param_1);
  }
  else {
    puVar3 = &SUB_1044443ac;
    FUN_1024ed0f8(&SUB_1044443ac,0x112ea1de0,&UNK_10dab4120);
    func_0x000107c613fc();
    *(undefined8 *)(puVar3 + 0x18) = 3;
    *(undefined8 *)(puVar3 + 0x10) = 1;
    uVar7 = *(undefined8 *)(lVar6 + _DAT_112ea1df0);
    func_0x000107c61174(lVar6);
    func_0x000107c4e9e0();
    func_0x000107c61180();
    *(undefined8 *)(puVar3 + 0x20) = uVar7;
    uVar7 = 0;
    func_0x0001044443ac(0);
    puVar4 = puVar3;
    func_0x000107c5fc48(puVar3,uVar7);
    func_0x000107c61574(puVar3);
    func_0x000107c505d4(param_1);
    func_0x000107c61170(lVar6);
    func_0x000107c61170(lVar6);
  }
  func_0x000107c61170(puVar4);
  return;
}



/* Entry: 1024ecd88; end: 1024ecdcf; -[SCFriendingInterstitialOperaDataSource resolvePlaylistItemGroupWithMutator:] */

void FUN_1024ecd88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_1024ecb88(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1024ecdd0; end: 1024ece7b; -[SCFriendingInterstitialOperaDataSource pageDataForDataModel:completion:] */

void FUN_1024ecdd0(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puStack_38;
  
  if (param_3 != 0) {
    puStack_38 = PTR_DAT_1126a0dc0;
    lVar1 = param_3;
    func_0x000107c61494(param_3,1,&puStack_38);
    if (lVar1 != 0) {
      func_0x000107c61174(param_3);
      func_0x000107c4e234(lVar1);
      func_0x000107c61180();
      (**(code **)(param_4 + 0x10))(param_4,lVar1);
      func_0x000107c61170(param_3);
      func_0x000107c61170(lVar1);
      return;
    }
  }
  (**(code **)(param_4 + 0x10))(param_4,0);
  return;
}



/* Entry: 1024ece7c; end: 1024ecec7; -[SCFriendingInterstitialOperaDataSource prepareMediaForItem:startWaitingForDownloadCallback:completion:] */

void FUN_1024ece7c(void)

{
  long in_x4;
  
  func_0x000107c60bc4();
  if (in_x4 != 0) {
    (**(code **)(in_x4 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Block_release_11034bcf0)(in_x4);
    return;
  }
  return;
}



/* Entry: 1024ecec8; end: 1024ececb; -[SCFriendingInterstitialOperaDataSource removeMediaForItem:] */

void FUN_1024ecec8(void)

{
  return;
}



/* Entry: 1024ececc; end: 1024ecf4b; -[SCFriendingInterstitialOperaDataSource canResolvePlaylistItemGroupDataModel:] */

uint FUN_1024ececc(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_40);
    func_0x000107c615e8(param_3);
  }
  FUN_1024eea28(&uStack_40);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1024ecf4c; end: 1024ecfcb; -[SCFriendingInterstitialOperaDataSource playlistItemGroupModelForDataModel:] */

void FUN_1024ecf4c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_40);
    func_0x000107c615e8(param_3);
  }
  FUN_1024eeaa8(&uStack_40);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1024ecfcc; end: 1024ed05f; -[SCFriendingInterstitialOperaDataSource init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024ecfcc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  lVar1 = _DAT_112ea1d90;
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_1024dda44();
  *(undefined **)(param_1 + lVar1) = puVar3;
  lVar1 = _DAT_112ea1d98;
  func_0x0001024ddb50();
  *(undefined **)(param_1 + lVar1) = puVar4;
  lVar1 = _DAT_112ea1d88;
  puVar4 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_1 + lVar1) = puVar4;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1024ed060; end: 1024ed093;  */

void FUN_1024ed060(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1024ed094; end: 1024ed0db; -[SCFriendingInterstitialOperaDataSource .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024ed094(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ea1d90));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ea1d98));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ea1d88));
  return;
}



/* Entry: 1024ed0dc; end: 1024ed0f7;  */

void FUN_1024ed0dc(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112ea1dc8;
  plVar5 = (long *)&UNK_10dab40f0;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_1024e12dc();
    if (lVar3 != 0) {
      puVar4 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
    }
  }
  if (*puVar4 == 0 || (*puVar4 & 1) != 0) {
    puVar2 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar2,*plVar5 >> 0x20,0,0);
    *puVar4 = (ulong)puVar2;
  }
  return;
}



/* Entry: 1024ed0f8; end: 1024ed163;  */

void FUN_1024ed0f8(code *param_1,ulong *param_2,long *param_3)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    (*param_1)();
    if (lVar3 != 0) {
      param_2 = (ulong *)0x112d36e60;
      param_3 = (long *)&UNK_10d901170;
    }
  }
  if (*param_2 == 0 || (*param_2 & 1) != 0) {
    puVar2 = (undefined *)((long)param_3 + (long)(int)*param_3);
    func_0x000107c61518(puVar2,*param_3 >> 0x20,0,0);
    *param_2 = (ulong)puVar2;
  }
  return;
}



/* Entry: 1024ed164; end: 1024ed19b;  */

void FUN_1024ed164(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112ea1dd8;
  plVar5 = (long *)&UNK_10dab4118;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_1024e4c9c();
    if (lVar3 != 0) {
      puVar4 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
    }
  }
  if (*puVar4 == 0 || (*puVar4 & 1) != 0) {
    puVar2 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar2,*plVar5 >> 0x20,0,0);
    *puVar4 = (ulong)puVar2;
  }
  return;
}



/* Entry: 1024ed19c; end: 1024ed57f;  */

void FUN_1024ed19c(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  uVar3 = param_3;
  uVar5 = param_2;
  func_0x0001000a7158();
  lVar6 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar5 & 1;
  lVar7 = lVar6 + uVar8;
  if (SCARRY8(lVar6,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1024ed26c);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar7) {
    param_4 = param_4 & 1;
    FUN_1024eddb8(lVar7);
    uVar3 = param_3;
    func_0x0001000a7158();
    if (((uint)uVar5 & 1) != (param_4 & 1)) {
      func_0x000107c60624(PTR___sSON_11034d8b8);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1024ed234);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    FUN_1024ed6b0();
    lVar7 = *unaff_x20;
    goto joined_r0x0001024ed280;
  }
  lVar7 = *unaff_x20;
joined_r0x0001024ed280:
  if ((uVar5 & 1) != 0) {
    puVar1 = (undefined8 *)(*(long *)(lVar7 + 0x38) + uVar3 * 0x10);
    uVar4 = puVar1[1];
    *puVar1 = param_1;
    puVar1[1] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar4);
    return;
  }
  lVar6 = lVar7 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar6 + 0x40) = *(ulong *)(lVar6 + 0x40) | 1L << (uVar3 & 0x3f);
  *(ulong *)(*(long *)(lVar7 + 0x30) + uVar3 * 8) = param_3;
  puVar1 = (undefined8 *)(*(long *)(lVar7 + 0x38) + uVar3 * 0x10);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (SCARRY8(*(long *)(lVar7 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1024ed2e0);
    (*pcVar2)();
  }
  *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
  return;
}



/* Entry: 1024ed580; end: 1024ed6af;  */

void FUN_1024ed580(undefined8 param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar8 = *unaff_x20;
  uVar2 = param_2;
  uVar3 = param_2;
  func_0x00010035a314();
  lVar4 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar3 & 1;
  lVar5 = lVar4 + uVar7;
  if (SCARRY8(lVar4,uVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1024ed644);
    (*pcVar1)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar5) {
    param_3 = param_3 & 1;
    func_0x0001024ee7c4(lVar5);
    uVar2 = param_2;
    func_0x00010035a314();
    if (((uint)uVar3 & 1) != (param_3 & 1)) {
      func_0x000107c60624(PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1024ed610);
      (*pcVar1)();
    }
  }
  else if ((param_3 & 1) == 0) {
    func_0x0001024edc5c();
    lVar5 = *unaff_x20;
    goto joined_r0x0001024ed658;
  }
  lVar5 = *unaff_x20;
joined_r0x0001024ed658:
  if ((uVar3 & 1) != 0) {
    uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8);
    *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar6);
    return;
  }
  lVar4 = lVar5 + (uVar2 >> 6) * 8;
  *(ulong *)(lVar4 + 0x40) = *(ulong *)(lVar4 + 0x40) | 1L << (uVar2 & 0x3f);
  *(ulong *)(*(long *)(lVar5 + 0x30) + uVar2 * 8) = param_2;
  *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1024ed6b0);
    (*pcVar1)();
  }
  *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
  return;
}



/* Entry: 1024ed6b0; end: 1024eddb7;  */

void FUN_1024ed6b0(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *unaff_x20;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  func_0x0001000285a8(0x112ea15b0,&UNK_10dab3bf8);
  lVar10 = *unaff_x20;
  lVar5 = lVar10;
  func_0x000107c6048c();
  if (*(long *)(lVar10 + 0x10) != 0) {
    lVar1 = lVar10 + 0x40;
    uVar7 = (1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar5 != lVar10 || lVar1 + uVar7 * 8 <= lVar5 + 0x40U) {
      func_0x000107c610b8(lVar5 + 0x40U,lVar1,uVar7 << 3);
    }
    lVar11 = 0;
    *(undefined8 *)(lVar5 + 0x10) = *(undefined8 *)(lVar10 + 0x10);
    uVar8 = 1L << ((ulong)*(byte *)(lVar10 + 0x20) & 0x3f);
    uVar7 = 0xffffffffffffffff;
    if ((*(byte *)(lVar10 + 0x20) & 0x3f) < 6) {
      uVar7 = ~(-1L << (uVar8 & 0x3f));
    }
    uVar7 = uVar7 & *(ulong *)(lVar10 + 0x40);
    if (uVar7 == 0) goto LAB_1024ed78c;
    do {
      uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar7 = uVar7 - 1 & uVar7;
      while( true ) {
        uVar9 = LZCOUNT(uVar9) | lVar11 << 6;
        puVar3 = (undefined8 *)(*(long *)(lVar10 + 0x38) + uVar9 * 0x10);
        uVar6 = puVar3[1];
        uVar13 = puVar3[1];
        uVar12 = *puVar3;
        *(undefined8 *)(*(long *)(lVar5 + 0x30) + uVar9 * 8) =
             *(undefined8 *)(*(long *)(lVar10 + 0x30) + uVar9 * 8);
        puVar3 = (undefined8 *)(*(long *)(lVar5 + 0x38) + uVar9 * 0x10);
        puVar3[1] = uVar13;
        *puVar3 = uVar12;
        func_0x000107c6157c(uVar6);
        if (uVar7 != 0) break;
LAB_1024ed78c:
        do {
          lVar2 = lVar11 + 1;
          if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1024ed818);
            (*pcVar4)();
          }
          if ((long)(uVar8 + 0x3f >> 6) <= lVar2) goto LAB_1024ed7f0;
          uVar7 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar11 = lVar11 + 1;
        } while (uVar7 == 0);
        uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
        uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
        uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
        uVar7 = uVar7 - 1 & uVar7;
        lVar11 = lVar2;
      }
    } while( true );
  }
LAB_1024ed7f0:
  func_0x000107c61574(lVar10);
  *unaff_x20 = lVar5;
  return;
}



/* Entry: 1024eddb8; end: 1024eea27;  */

void FUN_1024eddb8(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *unaff_x20;
  long lVar13;
  ulong *puVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  lVar13 = *unaff_x20;
  lVar1 = *(long *)(lVar13 + 0x18);
  if (*(long *)(lVar13 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar15 = 0x112ea15b0;
  func_0x0001000285a8(0x112ea15b0,&UNK_10dab3bf8);
  lVar5 = lVar13;
  func_0x000107c60490(lVar13,lVar1,param_2,uVar15);
  if (*(long *)(lVar13 + 0x10) == 0) {
LAB_1024edff0:
    func_0x000107c61574(lVar13);
    *unaff_x20 = lVar5;
    return;
  }
  puVar14 = (ulong *)(lVar13 + 0x40);
  uVar10 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
    uVar12 = ~(-1L << (uVar10 & 0x3f));
  }
  uVar12 = uVar12 & *puVar14;
  lVar1 = lVar5 + 0x40;
  lVar8 = 0;
  do {
    if (uVar12 == 0) {
      do {
        lVar16 = lVar8 + 1;
        if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1024ee020);
          (*pcVar4)();
        }
        if ((long)(uVar10 + 0x3f >> 6) <= lVar16) {
          if ((param_2 & 1) != 0) {
            uVar12 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
            if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
              *puVar14 = -1L << (uVar12 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar14,uVar12 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar13 + 0x10) = 0;
          }
          goto LAB_1024edff0;
        }
        uVar12 = puVar14[lVar16];
        lVar8 = lVar8 + 1;
      } while (uVar12 == 0);
      uVar7 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
    }
    else {
      uVar7 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
      lVar16 = lVar8;
    }
    uVar7 = LZCOUNT(uVar7) | lVar16 << 6;
    uVar15 = *(undefined8 *)(*(long *)(lVar13 + 0x30) + uVar7 * 8);
    puVar2 = (undefined8 *)(*(long *)(lVar13 + 0x38) + uVar7 * 0x10);
    uVar18 = puVar2[1];
    uVar17 = *puVar2;
    if ((param_2 & 1) == 0) {
      func_0x000107c6157c(puVar2[1]);
    }
    uVar6 = *(ulong *)(lVar5 + 0x28);
    func_0x000107c60688(uVar6,uVar15);
    uVar11 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
    uVar6 = uVar6 & (uVar11 ^ 0xffffffffffffffff);
    uVar9 = uVar6 >> 6;
    uVar7 = -1L << (uVar6 & 0x3f) & (*(ulong *)(lVar1 + uVar9 * 8) ^ 0xffffffffffffffff);
    if (uVar7 == 0) {
      bVar3 = false;
      uVar7 = 0x3f - uVar11 >> 6;
      do {
        uVar6 = uVar9 + 1;
        if ((uVar6 == uVar7) && (bVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1024ee024);
          (*pcVar4)();
        }
        uVar9 = 0;
        if (uVar6 != uVar7) {
          uVar9 = uVar6;
        }
        bVar3 = (bool)(uVar6 == uVar7 | bVar3);
        uVar6 = *(ulong *)(lVar1 + uVar9 * 8);
      } while (uVar6 == 0xffffffffffffffff);
      uVar6 = ~uVar6;
      uVar7 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | uVar9 << 6;
    }
    else {
      uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | uVar6 & 0x7fffffffffffffc0;
    }
    uVar9 = uVar7 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar9) = 1L << (uVar7 & 0x3f) | *(ulong *)(lVar1 + uVar9);
    *(undefined8 *)(*(long *)(lVar5 + 0x30) + uVar7 * 8) = uVar15;
    puVar2 = (undefined8 *)(*(long *)(lVar5 + 0x38) + uVar7 * 0x10);
    puVar2[1] = uVar18;
    *puVar2 = uVar17;
    *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
    lVar8 = lVar16;
  } while( true );
}



/* Entry: 1024eea28; end: 1024eeaa7;  */

bool FUN_1024eea28(undefined8 param_1)

{
  undefined8 uVar1;
  long *plVar2;
  long lStack_48;
  undefined1 auStack_40 [24];
  long lStack_28;
  
  func_0x000100672b50(param_1,auStack_40);
  if (lStack_28 == 0) {
    func_0x00010006e7f4(auStack_40);
  }
  else {
    uVar1 = 0;
    FUN_1024eee0c(0);
    plVar2 = &lStack_48;
    func_0x000107c6147c(plVar2,auStack_40,PTR___sypN_11034f1a8 + 8,uVar1,6);
    if ((int)plVar2 != 0) goto LAB_1024eea88;
  }
  lStack_48 = 0;
LAB_1024eea88:
  func_0x000107c61170();
  return lStack_48 != 0;
}



/* Entry: 1024eeaa8; end: 1024eeb97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1024eeaa8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  func_0x000100672b50(param_1,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
  }
  else {
    uVar2 = 0;
    FUN_1024eee0c(0);
    plVar3 = &lStack_68;
    func_0x000107c6147c(plVar3,auStack_60,PTR___sypN_11034f1a8 + 8,uVar2,6);
    if (((ulong)plVar3 & 1) != 0) {
      uVar2 = *(undefined8 *)(lStack_68 + _DAT_112ea1de8);
      uVar1 = ((undefined8 *)(lStack_68 + _DAT_112ea1de8))[1];
      func_0x000104445170(0);
      func_0x000107c610f8();
      func_0x000107c61434(uVar1);
      func_0x000104444a48(uVar2,uVar1,0xd000000000000015,0x800000010f0a6c00,0,1,1);
      func_0x000107c61170(lStack_68);
      return uVar2;
    }
  }
  return 0;
}



/* Entry: 1024eeb98; end: 1024eebb7;  */

void FUN_1024eeb98(void)

{
  func_0x000107c61168(&PTR_PTR_112849868);
  return;
}



/* Entry: 1024eebb8; end: 1024eebff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024eebb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  func_0x000107c614f0(param_3);
  func_0x000107c610f8();
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ea1de8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ea1df0) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1024eec00; end: 1024eec7f; -[SCFriendingInterstitialOperaGroup initWithId:item:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024eec00(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  lVar3 = param_1;
  func_0x000107c614f0();
  func_0x000107c5faec();
  puVar1 = (undefined8 *)(param_1 + _DAT_112ea1de8);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_112ea1df0) = param_4;
  puVar2 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar3;
  func_0x000107c61174(param_4);
  func_0x000107c61154(&lStack_40,puVar2);
  return;
}



/* Entry: 1024eec80; end: 1024eecfb; -[SCFriendingInterstitialOperaGroup playlistItemGroupModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024eec80(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ea1de8);
  uVar2 = ((undefined8 *)(param_1 + _DAT_112ea1de8))[1];
  func_0x000104445170(0);
  func_0x000107c610f8();
  func_0x000107c61434(uVar2);
  func_0x000104444a48(uVar1,uVar2,0xd000000000000015,0x800000010f0a6c00,0,1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1024eecfc; end: 1024eed5b; -[SCFriendingInterstitialOperaGroup init] */

void FUN_1024eecfc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FriendingInterstitialOperaPlugin.FriendingInterstitialOperaGroup",0x40,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024eed28);
  (*pcVar1)();
}



/* Entry: 1024eed5c; end: 1024eed97; -[SCFriendingInterstitialOperaGroup .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024eed5c(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ea1de8 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ea1df0));
  return;
}



/* Entry: 1024eed98; end: 1024eee0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024eed98(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  func_0x000107c610f8();
  lVar2 = param_4;
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(param_4 + _DAT_112ea1de8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(param_4 + _DAT_112ea1df0) = param_3;
  lStack_40 = param_4;
  lStack_38 = lVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1024eee0c; end: 1024eee2b;  */

void FUN_1024eee0c(void)

{
  func_0x000107c61168(&PTR_PTR_112849930);
  return;
}



/* Entry: 1024eee2c; end: 1024eee77; -[SCFriendingInterstitialPageItem itemId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024eee2c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ea1e20);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112ea1e20))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1024eee78; end: 1024eeeef; -[SCFriendingInterstitialPageItem playlistItemModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024eee78(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ea1e20);
  uVar2 = ((undefined8 *)(param_1 + _DAT_112ea1e20))[1];
  func_0x0001044443ac(0);
  func_0x000107c610f8();
  func_0x000107c61434(uVar2);
  func_0x00010444388c(0xd000000000000015,0x800000010f0a6c00,uVar1,uVar2,
                      PTR___swiftEmptyArrayStorage_11034f1c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1024eeef0; end: 1024ef523;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1024eeef0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  byte bVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  ulong uVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  long unaff_x20;
  long lVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined *apuStack_98 [3];
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  
  uVar9 = 0;
  func_0x0001044410f4();
  uVar10 = uVar9;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar12 = _DAT_112ea1e28;
  puVar14 = *(undefined **)(unaff_x20 + _DAT_112ea1e20);
  lVar4 = ((long *)(unaff_x20 + _DAT_112ea1e20))[1];
  bVar6 = *(byte *)(unaff_x20 + _DAT_112ea1e30);
  uVar21 = *(undefined8 *)(unaff_x20 + _DAT_112ea1e38);
  lVar25 = *(long *)(unaff_x20 + _DAT_112ea1e40);
  uVar7 = *(undefined1 *)(unaff_x20 + _DAT_112ea1e48);
  uVar8 = *(undefined1 *)(unaff_x20 + _DAT_112ea1e50);
  uVar26 = *(undefined8 *)(unaff_x20 + _DAT_112ea1e58);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ea1e68);
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112ea1e70);
  puVar3 = (undefined8 *)(unaff_x20 + _DAT_112ea1e78);
  uVar18 = *(undefined8 *)(unaff_x20 + _DAT_112ea1e60);
  uVar5 = ((undefined8 *)(unaff_x20 + _DAT_112ea1e60))[1];
  lVar11 = 0;
  FUN_1024e4c9c();
  uVar24 = puVar3[1];
  uVar34 = puVar3[1];
  uVar33 = *puVar3;
  uVar22 = puVar2[1];
  uVar30 = puVar2[1];
  uVar27 = *puVar2;
  uVar23 = puVar1[1];
  uVar31 = puVar1[1];
  uVar28 = *puVar1;
  uVar32 = ((undefined8 *)(unaff_x20 + lVar12))[1];
  uVar29 = *(undefined8 *)(unaff_x20 + lVar12);
  lVar12 = lVar11;
  func_0x000107c610f8();
  plVar13 = (long *)(lVar12 + _DAT_112ea1b00);
  *plVar13 = (long)puVar14;
  plVar13[1] = lVar4;
  puVar1 = (undefined8 *)(lVar12 + _DAT_112ea1b08);
  puVar1[1] = uVar32;
  *puVar1 = uVar29;
  *(byte *)(lVar12 + _DAT_112ea1b38) = bVar6;
  *(undefined8 *)(lVar12 + _DAT_112ea1b40) = uVar21;
  *(long *)(lVar12 + _DAT_112ea1b48) = lVar25;
  *(undefined1 *)(lVar12 + _DAT_112ea1b50) = uVar7;
  *(undefined1 *)(lVar12 + _DAT_112ea1b58) = uVar8;
  *(undefined8 *)(lVar12 + _DAT_112ea1b10) = uVar26;
  puVar1 = (undefined8 *)(lVar12 + _DAT_112ea1b18);
  *puVar1 = uVar18;
  puVar1[1] = uVar5;
  puVar1 = (undefined8 *)(lVar12 + _DAT_112ea1b20);
  puVar1[1] = uVar31;
  *puVar1 = uVar28;
  puVar1 = (undefined8 *)(lVar12 + _DAT_112ea1b28);
  puVar1[1] = uVar30;
  *puVar1 = uVar27;
  puVar1 = (undefined8 *)(lVar12 + _DAT_112ea1b30);
  puVar1[1] = uVar34;
  *puVar1 = uVar33;
  func_0x000107c6157c(uVar26);
  func_0x000107c61434(lVar4);
  func_0x000107c615f0(uVar29);
  func_0x000107c6157c(uVar23);
  func_0x000107c6157c(uVar22);
  func_0x000107c6157c(uVar24);
  FUN_1024e7b0c(uVar18,uVar5);
  plVar13 = &lStack_78;
  lStack_78 = lVar12;
  lStack_70 = lVar11;
  func_0x000107c61154(plVar13,PTR_s_init_1125d9248);
  func_0x000104440658(puVar14,lVar4);
  func_0x000107c61170();
  FUN_1024ed164();
  func_0x000107c613fc();
  *(undefined8 *)(puVar14 + 0x18) = 3;
  *(undefined8 *)(puVar14 + 0x10) = 1;
  *(long **)(puVar14 + 0x20) = plVar13;
  uVar18 = 0x112ea1e80;
  puVar17 = &UNK_10dab4160;
  func_0x0001000285a8();
  ppuVar15 = &PTR____CFConstantStringClassReference_110f0e2b8;
  apuStack_98[0] = puVar14;
  uStack_80 = uVar18;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0e2b8);
  func_0x000107c61174(plVar13);
  ppuVar19 = apuStack_98;
  func_0x000104440854(ppuVar19,ppuVar15,puVar17);
  func_0x000107c6142c(puVar17);
  func_0x000107c61170(ppuVar19);
  func_0x00010006e7f4(apuStack_98);
  uVar16 = (ulong)bVar6;
  FUN_1024e2694(uVar16,uVar21);
  if (uVar16 != 0) {
    func_0x0001024ef654();
  }
  puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46ed0();
  uVar18 = 0;
  func_0x0001002ed07c();
  ppuVar15 = &PTR____CFConstantStringClassReference_110f0bc38;
  apuStack_98[0] = puVar17;
  uStack_80 = uVar18;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0bc38);
  ppuVar19 = apuStack_98;
  func_0x000104440854(ppuVar19,ppuVar15,uVar21);
  func_0x000107c6142c(uVar21);
  func_0x000107c61170(ppuVar19);
  func_0x00010006e7f4(apuStack_98);
  puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c45a48();
  ppuVar19 = &PTR____CFConstantStringClassReference_110f0e258;
  apuStack_98[0] = puVar17;
  uStack_80 = uVar18;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0e258);
  ppuVar20 = apuStack_98;
  func_0x000104440854(ppuVar20,ppuVar19,ppuVar15);
  func_0x000107c6142c(ppuVar15);
  func_0x000107c61170(ppuVar20);
  func_0x00010006e7f4(apuStack_98);
  puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c45a48();
  ppuVar15 = &PTR____CFConstantStringClassReference_110f0e278;
  apuStack_98[0] = puVar17;
  uStack_80 = uVar18;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0e278);
  ppuVar20 = apuStack_98;
  func_0x000104440854(ppuVar20,ppuVar15,ppuVar19);
  func_0x000107c6142c(ppuVar19);
  func_0x000107c61170(ppuVar20);
  ppuVar19 = apuStack_98;
  func_0x00010006e7f4(ppuVar19);
  if (0 < lVar25) {
    puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c45a48();
    ppuVar19 = &PTR____CFConstantStringClassReference_110f0bc78;
    apuStack_98[0] = puVar17;
    uStack_80 = uVar18;
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0bc78);
    ppuVar20 = apuStack_98;
    func_0x000104440854(ppuVar20,ppuVar19,ppuVar15);
    func_0x000107c6142c(ppuVar15);
    func_0x000107c61170(ppuVar20);
    func_0x00010006e7f4(apuStack_98);
    puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c46ed0();
    ppuVar15 = &PTR____CFConstantStringClassReference_110f0bc98;
    apuStack_98[0] = puVar17;
    uStack_80 = uVar18;
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0bc98);
    ppuVar20 = apuStack_98;
    func_0x000104440854(ppuVar20,ppuVar15,ppuVar19);
    func_0x000107c6142c(ppuVar19);
    func_0x000107c61170(ppuVar20);
    ppuVar19 = apuStack_98;
    func_0x00010006e7f4(ppuVar19);
  }
  func_0x000104440b54();
  apuStack_98[0] = (undefined *)0x0;
  func_0x000107c5f9e4();
  func_0x000107c61170(ppuVar19);
  puVar17 = apuStack_98[0];
  func_0x000104440b54();
  apuStack_98[0] = (undefined *)0x0;
  func_0x000107c5f9e4();
  func_0x000107c61170(ppuVar19);
  puVar14 = apuStack_98[0];
  uVar18 = 0;
  func_0x000104445474(0);
  func_0x000107c610f8();
  func_0x000104445210(puVar17,puVar14,uVar18);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(plVar13);
  return puVar17;
}



/* Entry: 1024ef524; end: 1024ef557; -[SCFriendingInterstitialPageItem pageData] */

void FUN_1024ef524(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1024eeef0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1024ef558; end: 1024ef5b7; -[SCFriendingInterstitialPageItem init] */

void FUN_1024ef558(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FriendingInterstitialOperaPlugin.FriendingInterstitialPageItem",0x3e,"init()"
                      ,6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024ef584);
  (*pcVar1)();
}



/* Entry: 1024ef5b8; end: 1024ef67f; -[SCFriendingInterstitialPageItem .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001024ef5f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024ef620: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024ef5fc) */
/* WARNING: Removing unreachable block (ram,0x0001024ef624) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024ef5b8(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ea1e20 + 8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ea1e28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ea1e58));
  return;
}



/* Entry: 1024ef680; end: 1024ef69f;  */

void FUN_1024ef680(void)

{
  func_0x000107c61168(&PTR_PTR_1128499f8);
  return;
}



/* Entry: 1024ef6a0; end: 1024ef75b;  */

void FUN_1024ef6a0(long param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x20;
  
  if (param_1 == 0) {
    uVar3 = param_2;
    func_0x00010035a314();
    if ((uVar3 & 1) != 0) {
      iVar1 = (int)*unaff_x20;
      func_0x000107c61558();
      lVar2 = *unaff_x20;
      if (iVar1 == 0) {
        func_0x0001024edc5c();
      }
      func_0x000107c61170(*(undefined8 *)(*(long *)(lVar2 + 0x38) + param_2 * 8));
      func_0x0001024e3b24(param_2,lVar2);
      *unaff_x20 = lVar2;
    }
  }
  else {
    lVar2 = *unaff_x20;
    func_0x000107c61558(lVar2);
    lVar4 = *unaff_x20;
    FUN_1024ed580(param_1,param_2,lVar2);
    *unaff_x20 = lVar4;
  }
  return;
}



/* Entry: 1024ef75c; end: 1024ef90f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024ef75c(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  plVar4 = &lStack_a0;
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  FUN_1024f25bc();
  lVar3 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112ea1eb8) = 0;
  *(undefined8 *)(lVar3 + _DAT_112ea1ec0) = 0;
  *(undefined8 *)(lVar3 + _DAT_112ea1ec8) = 0;
  *(undefined8 *)(lVar3 + _DAT_112ea1ed0) = 1;
  *(undefined8 *)(lVar3 + _DAT_112ea1ed8) = 0;
  *(undefined8 *)(lVar3 + _DAT_112ea1ee0) = 1;
  puVar1 = (undefined8 *)(lVar3 + _DAT_112ea1ee8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar3 + _DAT_112ea1ef0) = uStack_68;
  *(undefined8 *)(lVar3 + _DAT_112ea1ef8) = uStack_70;
  *(undefined8 *)(lVar3 + _DAT_112ea1f00) = param_4;
  *(undefined8 *)(lVar3 + _DAT_112ea1f08) = uStack_78;
  *(undefined8 *)(lVar3 + _DAT_112ea1f10) = uStack_80;
  *(undefined8 *)(lVar3 + _DAT_112ea1f18) = param_7;
  *(undefined8 *)(lVar3 + _DAT_112ea1f20) = uStack_88;
  *(undefined8 *)(lVar3 + _DAT_112ea1f28) = uStack_90;
  puVar2 = PTR_s_init_1125d9248;
  lStack_a0 = lVar3;
  lStack_98 = param_2;
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_7);
  func_0x000107c61154(&lStack_a0,puVar2);
  *param_1 = plVar4;
  return;
}



/* Entry: 1024ef910; end: 1024ef923;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024ef910(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long unaff_x20;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
  plVar7 = &lStack_a0;
  func_0x000100083b20(&uStack_68,lVar5,*(undefined8 *)(unaff_x20 + 0x18),uVar2,
                      *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),uVar3,
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  FUN_1024f25bc();
  lVar6 = lVar5;
  func_0x000107c610f8();
  *(undefined8 *)(lVar6 + _DAT_112ea1eb8) = 0;
  *(undefined8 *)(lVar6 + _DAT_112ea1ec0) = 0;
  *(undefined8 *)(lVar6 + _DAT_112ea1ec8) = 0;
  *(undefined8 *)(lVar6 + _DAT_112ea1ed0) = 1;
  *(undefined8 *)(lVar6 + _DAT_112ea1ed8) = 0;
  *(undefined8 *)(lVar6 + _DAT_112ea1ee0) = 1;
  puVar1 = (undefined8 *)(lVar6 + _DAT_112ea1ee8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar6 + _DAT_112ea1ef0) = uStack_68;
  *(undefined8 *)(lVar6 + _DAT_112ea1ef8) = uStack_70;
  *(undefined8 *)(lVar6 + _DAT_112ea1f00) = uVar2;
  *(undefined8 *)(lVar6 + _DAT_112ea1f08) = uStack_78;
  *(undefined8 *)(lVar6 + _DAT_112ea1f10) = uStack_80;
  *(undefined8 *)(lVar6 + _DAT_112ea1f18) = uVar3;
  *(undefined8 *)(lVar6 + _DAT_112ea1f20) = uStack_88;
  *(undefined8 *)(lVar6 + _DAT_112ea1f28) = uStack_90;
  puVar4 = PTR_s_init_1125d9248;
  lStack_a0 = lVar6;
  lStack_98 = lVar5;
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(&lStack_a0,puVar4);
  *param_1 = plVar7;
  return;
}



/* Entry: 1024ef924; end: 1024efa5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024ef924(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ea1eb8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ea1ec0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ea1ec8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ea1ed0) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112ea1ed8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ea1ee0) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ea1ee8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ea1ef0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ea1ef8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ea1f00) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ea1f08) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112ea1f10) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112ea1f18) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112ea1f20) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112ea1f28) = param_8;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1024efa5c; end: 1024efd2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1024efa5c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uStack_38;
  
  lVar1 = _DAT_112ea1eb8;
  lVar2 = *(long *)(unaff_x20 + _DAT_112ea1eb8);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    func_0x000100083b20(&uStack_38);
    lVar3 = 0;
    func_0x0001024e49d8();
    func_0x000107c613fc();
    *(undefined8 *)(lVar3 + 0x10) = uStack_38;
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c6157c();
    func_0x000107c61574(uVar4);
    lVar2 = 0;
  }
  func_0x000107c6157c(lVar2);
  return lVar3;
}



/* Entry: 1024efd2c; end: 1024efdf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1024efd2c(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  lVar1 = _DAT_112ea1ed8;
  lVar2 = *(long *)(unaff_x20 + _DAT_112ea1ed8);
  lVar4 = lVar2;
  if (lVar2 == 0) {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112ea1f28);
    func_0x000107c4ec80();
    func_0x000107c61180();
    lVar4 = 0;
    func_0x0001024de620();
    func_0x000107c613fc();
    *(undefined8 *)(lVar4 + 0x18) = 0;
    *(code **)(lVar4 + 0x20) = FUN_1024ddebc;
    *(undefined8 *)(lVar4 + 0x28) = 0;
    uVar5 = uVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    *(undefined8 *)(lVar4 + 0x10) = uVar5;
    uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar4;
    func_0x000107c6157c(lVar4);
    func_0x000107c61574(uVar5);
    lVar2 = 0;
  }
  func_0x000107c6157c(lVar2);
  return lVar4;
}



/* Entry: 1024efdf4; end: 1024efe6b;  */

long FUN_1024efdf4(long *param_1,code *param_2,code *param_3,code *param_4)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *param_1;
  lVar2 = *(long *)(unaff_x20 + lVar4);
  lVar1 = lVar2;
  if (lVar2 == 1) {
    lVar1 = unaff_x20;
    (*param_2)();
    uVar3 = *(undefined8 *)(unaff_x20 + lVar4);
    *(long *)(unaff_x20 + lVar4) = lVar1;
    func_0x000107c6157c();
    (*param_3)(uVar3);
  }
  (*param_4)(lVar2);
  return lVar1;
}



/* Entry: 1024efe6c; end: 1024effb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024efe6c(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  puVar2 = &DAT_112ea1ed0;
  FUN_1024efdf4(&DAT_112ea1ed0,0x1024efc0c,0x1024f2768,0x1024f2770);
  if (puVar2 != (undefined *)0x0) {
    lVar3 = *(long *)(param_1 + _DAT_112ea1f10);
    func_0x000107c5b4b4();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1024eff38);
      (*pcVar1)();
    }
    puVar4 = &UNK_110517f28;
    func_0x000107c613fc(&UNK_110517f28,0x18,7);
    puVar5 = puVar4 + 0x10;
    func_0x000107c61644(puVar5,puVar2);
    FUN_1024efa5c();
    func_0x000107c61574(puVar2);
    lVar6 = 0;
    FUN_1024ddc50();
    func_0x000107c613fc();
    *(long *)(lVar6 + 0x10) = lVar3;
    *(undefined8 *)(lVar6 + 0x18) = 0x1024f2730;
    *(undefined **)(lVar6 + 0x20) = puVar4;
    *(undefined **)(lVar6 + 0x28) = puVar5;
  }
  return;
}



/* Entry: 1024effb8; end: 1024f008f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1024effb8(void)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  
  plVar1 = (long *)(unaff_x20 + _DAT_112ea1ee8);
  lVar2 = *plVar1;
  puVar3 = (undefined *)plVar1[1];
  puVar4 = puVar3;
  lVar6 = lVar2;
  if (lVar2 == 0) {
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112ea1ef0);
    uVar5 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112ea1f08) + _DAT_11307d3e0);
    puVar4 = &UNK_110517cd0;
    func_0x000107c613fc(&UNK_110517cd0,0x20,7);
    *(undefined8 *)(puVar4 + 0x10) = uVar5;
    *(undefined8 *)(puVar4 + 0x18) = uVar7;
    *plVar1 = 0x1024f25dc;
    plVar1[1] = (long)puVar4;
    func_0x000107c61174(uVar7);
    func_0x000107c615f0(uVar5);
    func_0x000107c6157c(puVar4);
    func_0x0001024e1734(0,puVar3);
    lVar6 = 0x1024f25dc;
  }
  FUN_1024e7b0c(lVar2,puVar3);
  auVar8._8_8_ = puVar4;
  auVar8._0_8_ = lVar6;
  return auVar8;
}



/* Entry: 1024f0090; end: 1024f08af;  */

void FUN_1024f0090(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,ulong param_6,ulong param_7,ulong param_8,code *param_9,
                  undefined8 param_10,ulong param_11,long param_12)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  undefined1 *puVar12;
  long extraout_x8;
  long extraout_x8_00;
  long lVar13;
  long lVar14;
  undefined1 auStack_c0 [8];
  ulong uStack_b8;
  code *pcStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  uStack_a8 = param_10;
  lVar2 = 0x112d36580;
  uStack_b8 = param_7;
  pcStack_b0 = param_9;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar12 = auStack_c0 + -extraout_x8;
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar14 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar13 = (long)puVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000100029394(param_4,puVar12);
  puVar3 = puVar12;
  (**(code **)(lVar14 + 0x30))(puVar12,1,lVar2);
  if ((int)puVar3 == 1) {
    func_0x0001000293e4(puVar12);
    uVar4 = param_5 & 0xffffffffffff;
    if ((param_6 & 0x2000000000000000) != 0) {
      uVar4 = param_6 >> 0x38 & 0xf;
    }
    if (uVar4 != 0) {
      uVar4 = uStack_b8 & 0xffffffffffff;
      if ((param_8 & 0x2000000000000000) != 0) {
        uVar4 = param_8 >> 0x38 & 0xf;
      }
      if (uVar4 != 0) {
        func_0x000107c51d00();
        func_0x000107c61180();
        lVar2 = param_12;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(param_12);
        if (lVar2 != 0) {
          puVar7 = PTR_PTR_1126afd38;
          func_0x000107c610f8(PTR_PTR_1126afd38);
          func_0x000107c453e4();
          func_0x000107c5fadc(param_2,param_3);
          puVar6 = puVar7;
          func_0x000107c5e868(puVar7);
          func_0x000107c61180();
          func_0x000107c61170(param_2);
          func_0x000107c61170(puVar6);
          func_0x000107c5fadc(param_5,param_6);
          puVar6 = puVar7;
          func_0x000107c5e458(puVar7);
          func_0x000107c61180();
          func_0x000107c61170(param_5);
          func_0x000107c61170(puVar6);
          uVar4 = uStack_b8;
          func_0x000107c5fadc(uStack_b8,param_8);
          puVar6 = puVar7;
          func_0x000107c5e780(puVar7);
          func_0x000107c61180();
          func_0x000107c61170(uVar4);
          func_0x000107c61170(puVar6);
          func_0x000107c5e770(puVar7);
          func_0x000107c61180();
          func_0x000107c61170();
          func_0x000107c5e89c(puVar7);
          func_0x000107c61180();
          func_0x000107c61170();
          puVar8 = puVar7;
          func_0x000107c3ecc8(puVar7);
          func_0x000107c61180();
          uVar5 = 0;
          FUN_1024f2608(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
          func_0x000107c5ffdc();
          puVar6 = &UNK_110517cf8;
          func_0x000107c613fc(&UNK_110517cf8,0x20,7);
          uVar10 = uStack_a8;
          *(code **)(puVar6 + 0x10) = pcStack_b0;
          *(undefined8 *)(puVar6 + 0x18) = uStack_a8;
          uStack_80 = 0x1024f2648;
          puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_98 = 0x42000000;
          pcStack_90 = (code *)&UNK_1010a2bbc;
          puStack_88 = &UNK_110517d10;
          ppuVar11 = &puStack_a0;
          puStack_78 = puVar6;
          func_0x000107c60bc4(ppuVar11);
          puVar6 = puStack_78;
          func_0x000107c6157c(uVar10);
          func_0x000107c61574(puVar6);
          func_0x000107c4329c(lVar2);
          func_0x000107c61180();
          func_0x000107c615e8();
          func_0x000107c60bd0(ppuVar11);
          func_0x000107c615e8(lVar2);
          func_0x000107c61170(puVar7);
          func_0x000107c61170(puVar8);
          func_0x000107c61170(uVar5);
          return;
        }
      }
    }
    (*pcStack_b0)(0);
  }
  else {
    (**(code **)(lVar14 + 0x20))(lVar13,puVar12,lVar2);
    puVar6 = PTR_PTR_1126b08b0;
    func_0x000107c61168(PTR_PTR_1126b08b0);
    puVar7 = puVar6;
    func_0x000107c5ed70();
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar12);
    func_0x000107c3f71c(puVar6);
    func_0x000107c61180();
    func_0x000107c61170(puVar7);
    puVar7 = PTR_PTR_1126b17d8;
    func_0x000107c610f8();
    func_0x000107c61174(puVar6);
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80);
    func_0x000107c460ec();
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar8);
    if (puVar7 == (undefined *)0x0) {
      (*pcStack_b0)(0);
    }
    else {
      puVar8 = puVar7;
      func_0x000107c3ecd0();
      func_0x000107c61180();
      if (puVar8 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1024f065c);
        (*pcVar1)();
      }
      uStack_b8 = param_11;
      func_0x000104479ecc(0);
      func_0x00010447a810(0);
      puVar9 = puVar8;
      func_0x00010447a08c(puVar8);
      func_0x000107c61170(puVar8);
      func_0x0001048b0ec8(0);
      func_0x000107c610f8();
      uVar10 = 0xd000000000000015;
      func_0x0001048b0b48(0xd000000000000015,0x800000010f0a6c00,0x13);
      puVar8 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
      func_0x000107c4c194();
      func_0x000107c61180();
      func_0x000107c51820();
      func_0x000107c61170(puVar8);
      func_0x000104478bf4(param_1,0,0,puVar9,uVar10);
      puVar8 = &UNK_110517d48;
      func_0x000107c613fc(&UNK_110517d48,0x20,7);
      uVar10 = uStack_a8;
      *(code **)(puVar8 + 0x10) = pcStack_b0;
      *(undefined8 *)(puVar8 + 0x18) = uStack_a8;
      uStack_80 = 0x1024f2684;
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0x42000000;
      pcStack_90 = FUN_1024a6e04;
      puStack_88 = &UNK_110517d60;
      ppuVar11 = &puStack_a0;
      puStack_78 = puVar8;
      func_0x000107c60bc4(ppuVar11);
      puVar8 = puStack_78;
      func_0x000107c6157c(uVar10);
      func_0x000107c61574(puVar8);
      func_0x000107c43128(uStack_b8);
      func_0x000107c61180();
      func_0x000107c615e8();
      func_0x000107c61170(puVar7);
      func_0x000107c61170(puVar9);
      func_0x000107c60bd0(ppuVar11);
    }
    func_0x000107c61170(puVar6);
    (**(code **)(lVar14 + 8))(lVar13,lVar2);
  }
  return;
}



/* Entry: 1024f08b0; end: 1024f097f;  */

void FUN_1024f08b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_70;
  puVar1 = &UNK_110517ed8;
  func_0x000107c613fc(&UNK_110517ed8,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  pcStack_50 = FUN_1024f2724;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_110517ef0;
  puStack_48 = puVar1;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c61174(param_1);
  func_0x000107c6157c(param_4);
  func_0x000107c61574(puVar1);
  func_0x000107c4e524(param_2);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 1024f0980; end: 1024f0a8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024f0980(code *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_3 + _DAT_11307d350);
    func_0x000107c61174(uVar1);
  }
  (*param_1)(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1024f0a90; end: 1024f0a9b; -[_TtC32FriendingInterstitialOperaPlugin38FriendingInterstitialPluginServiceImpl isEligibleForPageType:] */

bool FUN_1024f0a90(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 != 0x6a;
}



/* Entry: 1024f0a9c; end: 1024f0d3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1024f0a9c(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  ulong uVar8;
  long unaff_x20;
  long lVar9;
  
  if (param_1 == 0x6a) {
    return 0xffffffffffffffff;
  }
  lVar2 = *(long *)(*(long *)(unaff_x20 + _DAT_112ea1ef8) + _DAT_113021f38);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return 0xffffffffffffffff;
  }
  lVar3 = lVar2;
  func_0x000107c440c4();
  func_0x000107c61180();
  lVar4 = *(long *)(lVar3 + _DAT_113021eb8);
  pcVar1 = *(code **)(lVar3 + _DAT_113021ed0);
  lVar5 = ((undefined8 *)(lVar3 + _DAT_113021ed0))[1];
  func_0x000107c61174();
  func_0x000107c6157c(lVar5);
  (*pcVar1)();
  func_0x000107c61574();
  FUN_1024efd2c();
  lVar9 = *(long *)(lVar4 + _DAT_113021b60);
  lVar6 = *(long *)(lVar4 + _DAT_113021b70);
  if ((*(long *)(lVar4 + _DAT_113021b68) < 1) ||
     (*(long *)(lVar5 + 0x18) < *(long *)(lVar4 + _DAT_113021b68))) {
    if (lVar9 < 1) {
      func_0x000107c61574(lVar5);
    }
    else {
      FUN_1024ddec0();
      func_0x000107c61574(lVar5);
      if (lVar9 <= lVar6) goto LAB_1024f0bbc;
    }
    lVar5 = _DAT_113021ec0;
    if ((*(char *)(lVar3 + _DAT_113021ec8) == '\x01') && (0 < *(long *)(lVar3 + _DAT_113021ec0))) {
      puVar7 = &DAT_112ea1ed0;
      FUN_1024efdf4(&DAT_112ea1ed0,0x1024efc0c,0x1024f2768,0x1024f2770);
      if (puVar7 == (undefined *)0x0) {
LAB_1024f0c70:
        func_0x000107c61170(lVar3);
        func_0x000107c61170(lVar4);
        func_0x000107c615e8(lVar2);
        return 0xffffffffffffffff;
      }
      uVar8 = (ulong)(0 < *(long *)(lVar4 + _DAT_113021b78));
      FUN_1024e22c4();
      func_0x000107c61574(puVar7);
      if ((long)uVar8 < *(long *)(lVar3 + lVar5)) goto LAB_1024f0c70;
    }
    if (*(char *)(lVar4 + _DAT_113021b50) == '\x01') {
      puVar7 = &DAT_112ea1ed0;
      FUN_1024efdf4(&DAT_112ea1ed0,0x1024efc0c,0x1024f2768,0x1024f2770);
      func_0x000107c615e8(lVar2);
      func_0x000107c61170(lVar3);
      if (puVar7 != (undefined *)0x0) {
        func_0x000107c61574(puVar7);
        uVar8 = *(ulong *)(lVar4 + _DAT_113021b58);
        func_0x000107c61170(lVar4);
        return uVar8 & ((long)uVar8 >> 0x3f ^ 0xffffffffffffffffU);
      }
    }
    else {
      func_0x000107c615e8(lVar2);
      func_0x000107c61170(lVar3);
    }
  }
  else {
    func_0x000107c61574(lVar5);
LAB_1024f0bbc:
    func_0x000107c61170(lVar4);
    func_0x000107c615e8(lVar2);
    lVar4 = lVar3;
  }
  func_0x000107c61170(lVar4);
  return 0xffffffffffffffff;
}



/* Entry: 1024f0d40; end: 1024f0d7b; -[_TtC32FriendingInterstitialOperaPlugin38FriendingInterstitialPluginServiceImpl friendingInterstitialInsertionIndexForPageType:] */

undefined8 FUN_1024f0d40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_1024f0a9c(param_3);
  func_0x000107c61170(param_1);
  return param_3;
}



/* Entry: 1024f0d7c; end: 1024f1b77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1024f0d7c(double param_1,long param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  undefined8 uVar19;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  code *pcStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  long *plStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  long lStack_130;
  long lStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  long *plStack_110;
  long lStack_108;
  undefined *puStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [32];
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  lVar3 = 0;
  func_0x000107c5eec8();
  lVar22 = *(long *)(lVar3 + -8);
  lVar4 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar22 + 0x40));
  lVar10 = (long)&pcStack_160 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_1024efa5c();
  FUN_1024e4530();
  func_0x000107c61574(lVar4);
  lVar4 = *(long *)(*(long *)(unaff_x20 + _DAT_112ea1ef8) + _DAT_113021f38);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar4 == 0) {
    uVar20 = *(undefined8 *)(unaff_x20 + _DAT_112ea1eb8);
    func_0x000107c6157c(uVar20);
    FUN_1024e45dc(0);
    goto LAB_1024f1b40;
  }
  lVar5 = lVar4;
  func_0x000107c440c4();
  func_0x000107c61180();
  lVar6 = *(long *)(lVar5 + _DAT_113021eb8);
  func_0x000107c61174();
  lVar15 = param_2;
  func_0x000107c40808();
  if (lVar15 < 1) {
    uVar20 = *(undefined8 *)(unaff_x20 + _DAT_112ea1eb8);
    func_0x000107c6157c(uVar20);
    uVar19 = 1;
  }
  else {
    pcVar2 = *(code **)(lVar5 + _DAT_113021ed0);
    lVar15 = ((undefined8 *)(lVar5 + _DAT_113021ed0))[1];
    func_0x000107c6157c(lVar15);
    (*pcVar2)();
    func_0x000107c61574();
    FUN_1024efd2c();
    lVar21 = *(long *)(lVar6 + _DAT_113021b60);
    lVar7 = *(long *)(lVar6 + _DAT_113021b70);
    if ((*(long *)(lVar6 + _DAT_113021b68) < 1) ||
       (*(long *)(lVar15 + 0x18) < *(long *)(lVar6 + _DAT_113021b68))) {
      lStack_c8 = param_2;
      if (lVar21 < 1) {
        func_0x000107c61574(lVar15);
      }
      else {
        FUN_1024ddec0();
        func_0x000107c61574(lVar15);
        if (lVar21 <= lVar7) goto LAB_1024f0f3c;
      }
      lVar15 = _DAT_113021ec0;
      if ((*(char *)(lVar5 + _DAT_113021ec8) == '\x01') && (0 < *(long *)(lVar5 + _DAT_113021ec0)))
      {
        puVar8 = &DAT_112ea1ed0;
        FUN_1024efdf4(&DAT_112ea1ed0,0x1024efc0c,0x1024f2768,0x1024f2770);
        if (puVar8 != (undefined *)0x0) {
          uVar9 = (ulong)(0 < *(long *)(lVar6 + _DAT_113021b78));
          FUN_1024e22c4();
          if ((long)uVar9 < *(long *)(lVar5 + lVar15)) {
            uVar20 = *(undefined8 *)(unaff_x20 + _DAT_112ea1eb8);
            func_0x000107c6157c(uVar20);
            FUN_1024e45dc(4);
            func_0x000107c615e8(lVar4);
            func_0x000107c61170(lVar5);
            func_0x000107c61170(lVar6);
            func_0x000107c61574(puVar8);
            goto LAB_1024f1b40;
          }
          func_0x000107c61574(puVar8);
          goto LAB_1024f1034;
        }
      }
      else {
LAB_1024f1034:
        if (*(char *)(lVar6 + _DAT_113021b50) != '\x01') {
          uVar20 = *(undefined8 *)(unaff_x20 + _DAT_112ea1eb8);
          func_0x000107c6157c(uVar20);
          uVar19 = 0;
          goto LAB_1024f1b24;
        }
        puVar8 = &DAT_112ea1ed0;
        uVar20 = 0x1024efc0c;
        FUN_1024efdf4(&DAT_112ea1ed0,0x1024efc0c,0x1024f2768,0x1024f2770);
        if (puVar8 != (undefined *)0x0) {
          puStack_e8 = puVar8;
          func_0x000107c5eec4(lVar10);
          func_0x000107c5eeac();
          puStack_d8 = puVar8;
          uStack_d0 = uVar20;
          (**(code **)(lVar22 + 8))(lVar10,lVar3);
          uStack_f0 = *(undefined8 *)(lVar5 + _DAT_113021ec0);
          func_0x00010098a0cc(0);
          uVar20 = 0xe;
          func_0x00010098a590(0xe);
          lVar3 = lVar4;
          func_0x000107c497f8();
          func_0x000107c61170(uVar20);
          lVar10 = 0;
          func_0x0001024e4a08();
          func_0x000107c613fc();
          *(undefined2 *)(lVar10 + 0x10) = 0;
          *(undefined1 *)(lVar10 + 0x12) = 0;
          puVar8 = &UNK_110517aa8;
          puVar11 = puVar8;
          func_0x000107c613fc(&UNK_110517aa8,0x18,7);
          func_0x000107c61614(puVar11 + 0x10);
          puVar12 = &UNK_110517ad0;
          func_0x000107c613fc(&UNK_110517ad0,0x28,7);
          uVar20 = uStack_d0;
          *(undefined **)(puVar12 + 0x10) = puVar11;
          *(undefined **)(puVar12 + 0x18) = puStack_d8;
          *(undefined8 *)(puVar12 + 0x20) = uStack_d0;
          lVar22 = 0;
          func_0x0001024f2f20();
          func_0x000107c613fc();
          *(undefined1 *)(lVar22 + 0x40) = 1;
          *(undefined **)(lVar22 + 0x48) = PTR___swiftEmptyArrayStorage_11034f1c8;
          *(undefined1 *)(lVar22 + 0x50) = 0;
          *(long *)(lVar22 + 0x10) = lVar3;
          *(code **)(lVar22 + 0x18) = FUN_1024f2e0c;
          *(undefined8 *)(lVar22 + 0x20) = 0;
          *(code **)(lVar22 + 0x28) = FUN_1024f24e4;
          *(undefined **)(lVar22 + 0x30) = puVar12;
          *(undefined8 *)(lVar22 + 0x38) = 0;
          plStack_110 = (long *)lVar3;
          func_0x000107c613fc(&UNK_110517aa8,0x18,7);
          func_0x000107c61614(puVar8 + 0x10);
          puVar12 = &UNK_110517af8;
          func_0x000107c613fc(&UNK_110517af8,0x30,7);
          *(long *)(puVar12 + 0x10) = lVar10;
          *(undefined **)(puVar12 + 0x18) = puVar8;
          *(long *)(puVar12 + 0x20) = lVar6;
          *(long *)(puVar12 + 0x28) = lVar22;
          func_0x000107c61174();
          func_0x000107c61434(uVar20);
          func_0x000107c6157c(lVar10);
          lStack_f8 = lVar22;
          func_0x000107c6157c(lVar22);
          func_0x000107c6071c();
          param_1 = param_1 * 1000.0;
          if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1024f1b70);
            (*pcVar2)();
          }
          if (-9.223372036854778e+18 < param_1) {
            puStack_e0 = puVar12;
            if (param_1 < 9.223372036854776e+18) {
              puVar8 = &UNK_110517b20;
              func_0x000107c613fc(&UNK_110517b20,0x18,7);
              *(undefined **)(puVar8 + 0x10) = PTR___swiftEmptySetSingleton_11034f1d8;
              puVar12 = &UNK_110517b48;
              func_0x000107c613fc(&UNK_110517b48,0x18,7);
              *(undefined **)(puVar12 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
              puVar11 = &UNK_110517aa8;
              func_0x000107c613fc(&UNK_110517aa8,0x18,7);
              func_0x000107c61614(puVar11 + 0x10);
              puVar13 = &UNK_110517b70;
              func_0x000107c613fc(&UNK_110517b70,0x38,7);
              *(undefined **)(puVar13 + 0x10) = puVar11;
              *(long *)(puVar13 + 0x18) = lVar10;
              *(undefined **)(puVar13 + 0x20) = puVar12;
              *(undefined **)(puVar13 + 0x28) = puVar8;
              *(long *)(puVar13 + 0x30) = (long)param_1;
              lStack_128 = _DAT_113021b78;
              uStack_138 = CONCAT44(uStack_138._4_4_,(uint)*(byte *)(lVar6 + _DAT_113021b90));
              plStack_148 = (long *)CONCAT44(plStack_148._4_4_,
                                             (uint)(0 < *(long *)(lVar6 + _DAT_113021b78)));
              plStack_140 = (long *)CONCAT44(plStack_140._4_4_,
                                             (uint)*(byte *)(lVar6 + _DAT_113021b88));
              lStack_130 = lVar6;
              puStack_118 = puVar8;
              func_0x000107c61434(uStack_d0);
              func_0x000107c6157c(lVar10);
              func_0x000107c6157c(puVar12);
              func_0x000107c6157c(puVar8);
              func_0x000107c6157c(puStack_e8);
              puVar8 = &DAT_112ea1ee0;
              pcVar2 = FUN_1024efe6c;
              FUN_1024efdf4(&DAT_112ea1ee0,FUN_1024efe6c,0x1024f2764,0x1024f276c);
              puStack_150 = puVar8;
              FUN_1024effb8();
              puVar11 = &UNK_110517b98;
              pcStack_160 = pcVar2;
              puStack_158 = puVar8;
              lStack_108 = lVar10;
              func_0x000107c613fc(&UNK_110517b98,0x28,7);
              *(long *)(puVar11 + 0x10) = lVar10;
              *(undefined8 *)(puVar11 + 0x18) = 0x1024f24f0;
              *(undefined **)(puVar11 + 0x20) = puStack_e0;
              puVar8 = &UNK_110517aa8;
              func_0x000107c613fc(&UNK_110517aa8,0x18,7);
              func_0x000107c61614(puVar8 + 0x10);
              puVar14 = &UNK_110517bc0;
              func_0x000107c613fc(&UNK_110517bc0,0x30,7);
              lVar22 = lStack_f8;
              *(undefined **)(puVar14 + 0x10) = puVar12;
              *(undefined8 *)(puVar14 + 0x18) = 0x1024f24fc;
              *(undefined **)(puVar14 + 0x20) = puVar13;
              *(long *)(puVar14 + 0x28) = lStack_f8;
              lVar15 = 0;
              puStack_120 = puVar12;
              FUN_1024ef680();
              lVar3 = lVar15;
              func_0x000107c610f8();
              lVar10 = lStack_108;
              puVar1 = (undefined8 *)(lVar3 + _DAT_112ea1e20);
              *puVar1 = puStack_d8;
              puVar1[1] = uStack_d0;
              puVar1 = (undefined8 *)(lVar3 + _DAT_112ea1e28);
              *puVar1 = puStack_e8;
              puVar1[1] = &PTR_DAT_110517520;
              *(char *)(lVar3 + _DAT_112ea1e30) = (char)plStack_148;
              *(undefined8 *)(lVar3 + _DAT_112ea1e38) = uStack_f0;
              *(long **)(lVar3 + _DAT_112ea1e40) = plStack_110;
              *(char *)(lVar3 + _DAT_112ea1e48) = (char)uStack_138;
              *(char *)(lVar3 + _DAT_112ea1e50) = (char)plStack_140;
              *(undefined **)(lVar3 + _DAT_112ea1e58) = puStack_150;
              puVar1 = (undefined8 *)(lVar3 + _DAT_112ea1e60);
              *puVar1 = puStack_158;
              puVar1[1] = pcStack_160;
              puVar1 = (undefined8 *)(lVar3 + _DAT_112ea1e68);
              *puVar1 = FUN_1024f250c;
              puVar1[1] = puVar11;
              puVar1 = (undefined8 *)(lVar3 + _DAT_112ea1e70);
              *puVar1 = FUN_1024f2538;
              puVar1[1] = puVar8;
              puVar1 = (undefined8 *)(lVar3 + _DAT_112ea1e78);
              *puVar1 = 0x1024f2540;
              puVar1[1] = puVar14;
              puVar8 = PTR_s_init_1125d9248;
              lStack_78 = lVar3;
              lStack_70 = lVar15;
              func_0x000107c6157c(lStack_108);
              func_0x000107c6157c(lVar22);
              func_0x000107c6157c(puVar12);
              puVar12 = puStack_e0;
              func_0x000107c6157c(puStack_e0);
              puStack_100 = puVar13;
              func_0x000107c6157c(puVar13);
              plVar17 = &lStack_78;
              func_0x000107c61154(plVar17,puVar8);
              uVar20 = 0;
              plStack_110 = plVar17;
              FUN_1024eeb98();
              func_0x000107c610f8();
              func_0x000107c453e4();
              puVar8 = &UNK_110517be8;
              uStack_138 = uVar20;
              func_0x000107c613fc(&UNK_110517be8,0x38,7);
              *(long *)(puVar8 + 0x10) = lVar10;
              *(undefined8 *)(puVar8 + 0x18) = 0x1024f24f0;
              *(undefined **)(puVar8 + 0x20) = puVar12;
              *(undefined8 *)(puVar8 + 0x28) = 0x1024f24fc;
              *(undefined **)(puVar8 + 0x30) = puVar13;
              puVar12 = &UNK_110517c10;
              func_0x000107c613fc(&UNK_110517c10,0x20,7);
              *(long *)(puVar12 + 0x10) = lVar22;
              *(long *)(puVar12 + 0x18) = lVar10;
              lVar15 = 0;
              FUN_1024f3850();
              plStack_140 = (long *)lVar15;
              func_0x000107c610f8();
              func_0x000107c61614(lVar15 + _DAT_112ea20c8,0);
              func_0x000107c61614(lVar15 + _DAT_112ea20d0,0);
              func_0x000107c61614(lVar15 + _DAT_112ea20d8,0);
              lVar3 = _DAT_112ea20e0;
              puVar11 = PTR_PTR_1126ae810;
              func_0x000107c610f8();
              func_0x000107c61580(lVar10,2);
              uVar20 = uStack_d0;
              func_0x000107c61434(uStack_d0);
              func_0x000107c6157c(lVar22);
              func_0x000107c6157c(puStack_e0);
              func_0x000107c6157c(puStack_100);
              uVar19 = uStack_138;
              func_0x000107c61174();
              func_0x000107c453e4();
              *(undefined **)(lVar15 + lVar3) = puVar11;
              *(undefined8 *)(lVar15 + _DAT_112ea20e8) = 0;
              *(undefined8 *)(lVar15 + _DAT_112ea20f0) = uVar19;
              puVar1 = (undefined8 *)(lVar15 + _DAT_112ea20f8);
              *puVar1 = puStack_d8;
              puVar1[1] = uVar20;
              puVar1 = (undefined8 *)(lVar15 + _DAT_112ea2100);
              *puVar1 = FUN_1024f254c;
              puVar1[1] = puVar8;
              puVar1 = (undefined8 *)(lVar15 + _DAT_112ea2108);
              *puVar1 = FUN_1024f2590;
              puVar1[1] = puVar12;
              lStack_80 = (long)plStack_140;
              plVar16 = &lStack_88;
              uStack_138 = uVar19;
              lStack_88 = lVar15;
              func_0x000107c61154(plVar16,PTR_s_init_1125d9248);
              plVar17 = plStack_110;
              uVar20 = *(undefined8 *)((long)plStack_110 + _DAT_112ea1e20);
              uVar19 = ((undefined8 *)((long)plStack_110 + _DAT_112ea1e20))[1];
              lVar10 = 0;
              plStack_148 = plVar16;
              FUN_1024eee0c();
              lVar3 = lVar10;
              func_0x000107c610f8();
              puVar1 = (undefined8 *)(lVar3 + _DAT_112ea1de8);
              *puVar1 = uVar20;
              puVar1[1] = uVar19;
              *(long **)(lVar3 + _DAT_112ea1df0) = plVar17;
              puVar8 = PTR_s_init_1125d9248;
              lStack_98 = lVar3;
              lStack_90 = lVar10;
              func_0x000107c61434(uVar19);
              func_0x000107c61174();
              plVar18 = &lStack_98;
              plStack_110 = plVar17;
              func_0x000107c61154(plVar18,puVar8);
              plStack_140 = plVar18;
              FUN_1024ec6f4();
              lVar3 = lStack_130;
              lVar10 = *(long *)(lStack_130 + lStack_128);
              puVar8 = &UNK_110517c38;
              func_0x000107c613fc(&UNK_110517c38,0x18,7);
              func_0x000107c61614(puVar8 + 0x10,plVar16);
              puVar12 = &UNK_110517c60;
              func_0x000107c613fc(&UNK_110517c60,0x20,7);
              puVar13 = puStack_e8;
              *(undefined ***)(puVar12 + 0x18) = &PTR_DAT_110517520;
              func_0x000107c61614(puVar12 + 0x10,puStack_e8);
              puVar11 = &UNK_110517c88;
              func_0x000107c613fc(&UNK_110517c88,0x40,7);
              uVar19 = uStack_d0;
              *(undefined **)(puVar11 + 0x10) = puVar8;
              *(undefined **)(puVar11 + 0x18) = puVar12;
              puVar11[0x20] = 0 < lVar10;
              *(undefined8 *)(puVar11 + 0x28) = uStack_f0;
              *(undefined **)(puVar11 + 0x30) = puStack_d8;
              *(undefined8 *)(puVar11 + 0x38) = uStack_d0;
              func_0x000107c61434(uStack_d0);
              func_0x000107c6157c(puVar13);
              func_0x000107c6157c(puVar8);
              func_0x000107c6157c(puVar12);
              uVar20 = 0x1024f2598;
              FUN_1024e3588(0x1024f2598,puVar11);
              func_0x000107c61574(puVar8);
              func_0x000107c61574(puVar12);
              func_0x000107c61574(puVar11);
              func_0x000107c6142c(uVar19);
              func_0x000107c61574(puVar13);
              plVar17 = plStack_148;
              uVar19 = *(undefined8 *)((long)plStack_148 + _DAT_112ea20e8);
              *(undefined8 *)((long)plStack_148 + _DAT_112ea20e8) = uVar20;
              func_0x000107c61574(uVar19);
              lVar10 = lStack_c8;
              func_0x000107c40808();
              FUN_1024f2608(0,0x112d538a8,&PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
              func_0x000107c600f8(lVar10);
              plVar16 = plStack_140;
              func_0x000107c49740();
              uVar20 = *(undefined8 *)(unaff_x20 + _DAT_112ea1eb8);
              func_0x000107c6157c(uVar20);
              FUN_1024e47b0();
              func_0x000107c61574(uVar20);
              func_0x000107c61174(plVar17);
              lVar22 = lVar10;
              func_0x000107c40794(lVar10);
              func_0x000107c60234(auStack_b8);
              func_0x000107c615e8(lVar22);
              uVar20 = 0;
              FUN_1024f2608(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
              func_0x000107c6147c(&uStack_c0,auStack_b8,PTR___sypN_11034f1a8 + 8,uVar20,7);
              uVar20 = 0;
              func_0x000103b468a4(0);
              func_0x000107c610f8();
              plVar18 = plVar17;
              func_0x000103b46730(plVar17,uStack_c0,uVar20);
              func_0x000107c61574(puStack_118);
              func_0x000107c61574(puStack_120);
              func_0x000107c615e8(lVar4);
              func_0x000107c61170(lVar5);
              func_0x000107c61170(lVar3);
              func_0x000107c61170(lVar10);
              func_0x000107c61170(plVar17);
              func_0x000107c61170(plVar16);
              func_0x000107c61170(plStack_110);
              func_0x000107c61170(uStack_138);
              func_0x000107c61574(puStack_100);
              func_0x000107c61574(puStack_e0);
              func_0x000107c61574(puVar13);
              func_0x000107c61574(lStack_f8);
              func_0x000107c61574(lStack_108);
              return plVar18;
            }
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1024f1b78);
            (*pcVar2)();
          }
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1024f1b74);
          (*pcVar2)();
        }
      }
      uVar20 = *(undefined8 *)(unaff_x20 + _DAT_112ea1eb8);
      func_0x000107c6157c(uVar20);
      uVar19 = 2;
    }
    else {
      func_0x000107c61574(lVar15);
LAB_1024f0f3c:
      uVar20 = *(undefined8 *)(unaff_x20 + _DAT_112ea1eb8);
      func_0x000107c6157c(uVar20);
      uVar19 = 3;
    }
  }
LAB_1024f1b24:
  FUN_1024e45dc(uVar19);
  func_0x000107c615e8(lVar4);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar6);
LAB_1024f1b40:
  func_0x000107c61574(uVar20);
  return (long *)0x0;
}



/* Entry: 1024f1b78; end: 1024f1c2f;  */

void FUN_1024f1b78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_5 + 0x10,auStack_68,0,0);
  param_5 = param_5 + 0x10;
  func_0x000107c61618();
  if (param_5 != 0) {
    lVar1 = param_5;
    func_0x0001024efb74();
    func_0x000107c61170(param_5);
    FUN_102dcc0b0(4,1,param_6,param_7,param_1,param_2,param_3,param_4);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1024f1c30; end: 1024f1d4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024f1c30(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  if (((*(char *)(param_1 + 0x10) == '\x01') && (*(char *)(param_1 + 0x11) == '\x01')) &&
     ((*(byte *)(param_1 + 0x12) & 1) == 0)) {
    *(undefined1 *)(param_1 + 0x12) = 1;
    func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
    lVar1 = param_2 + 0x10;
    func_0x000107c61618();
    if (lVar1 != 0) {
      lVar2 = lVar1;
      FUN_1024efd2c();
      func_0x000107c61170(lVar1);
      FUN_1024de068(*(undefined8 *)(param_3 + _DAT_113021b70));
      func_0x000107c61574(lVar2);
    }
    func_0x000107c61428(param_2 + 0x10,auStack_70,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    lVar1 = param_2;
    if (param_2 != 0) {
      FUN_1024efa5c();
      func_0x000107c61170(param_2);
      func_0x0001024e485c();
      func_0x000107c61574();
    }
    if (*(char *)(param_4 + 0x40) == '\x01') {
      (**(code **)(param_4 + 0x18))();
      *(long *)(param_4 + 0x38) = lVar1;
      *(undefined1 *)(param_4 + 0x40) = 0;
    }
  }
  return;
}



/* Entry: 1024f1d4c; end: 1024f2133;  */

void FUN_1024f1d4c(long param_1,long param_2,long param_3,ulong param_4,ulong param_5)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  ulong uVar11;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong *puVar15;
  long lVar16;
  ulong auStack_150 [3];
  undefined *puStack_138;
  ulong uStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  undefined1 auStack_110 [8];
  undefined8 uStack_108;
  undefined1 auStack_100 [72];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined *puStack_88;
  undefined1 auStack_80 [32];
  
  lVar8 = 0;
  FUN_1024de864();
  lStack_120 = *(long *)(lVar8 + -8);
  lStack_118 = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_120 + 0x40));
  lVar6 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar15 = (ulong *)((long)auStack_150 + lVar6);
  lVar8 = 0x112ea1f58;
  func_0x0001000285a8(0x112ea1f58,&UNK_10dab4210);
  lStack_128 = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(param_1 + 0x10,auStack_80,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    if (*(char *)(param_2 + 0x11) == '\x01') {
      puVar9 = &DAT_112ea1ed0;
      auStack_150[1] = param_1;
      FUN_1024efdf4(&DAT_112ea1ed0,0x1024efc0c,0x1024f2768,0x1024f2770);
      puStack_138 = puVar9;
      if (puVar9 != (undefined *)0x0) {
        puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
        func_0x0001024dddb8();
        puStack_88 = puVar9;
        func_0x000107c61428(param_3 + 0x10,auStack_a0,0,0);
        lVar8 = *(long *)(param_3 + 0x10);
        uVar13 = *(ulong *)(lVar8 + 0x10);
        func_0x000107c61434(lVar8);
        func_0x000107c61428(param_4 + 0x10,auStack_b8,0,0);
        uStack_130 = uVar13;
        if (uVar13 != 0) {
          uVar13 = 0;
          auStack_150[0] = param_5;
          auStack_150[2] = param_4;
          do {
            if (*(ulong *)(lVar8 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x1024f2134);
              (*pcVar7)();
            }
            iVar5 = *(int *)(lStack_128 + 0x30);
            func_0x0001024e1440(lVar8 + ((ulong)*(byte *)(lStack_120 + 0x50) + 0x20 &
                                        ((ulong)*(byte *)(lStack_120 + 0x50) ^ 0xffffffffffffffff))
                                + *(long *)(lStack_120 + 0x48) * uVar13,
                                (long)puVar15 + (iVar5 - extraout_x8_00));
            FUN_1024e4170((long)puVar15 + (iVar5 - extraout_x8_00),puVar15);
            if (*(char *)((long)puVar15 + (long)*(int *)(lStack_118 + 0x20)) == '\x01') {
              lVar16 = *(long *)(param_4 + 0x10);
              uVar2 = *puVar15;
              uVar3 = *(ulong *)((long)auStack_150 + lVar6 + 8);
              if (*(long *)(lVar16 + 0x10) != 0) {
                func_0x000107c6068c(auStack_100,*(undefined8 *)(lVar16 + 0x28));
                func_0x000107c61434(lVar16);
                puVar10 = auStack_100;
                func_0x000107c5fb58(puVar10,uVar2,uVar3);
                func_0x000107c606a8();
                uVar12 = -1L << ((ulong)*(byte *)(lVar16 + 0x20) & 0x3f);
                uVar14 = (ulong)puVar10 & (uVar12 ^ 0xffffffffffffffff);
                if ((*(ulong *)(lVar16 + 0x38 + (uVar14 >> 6) * 8) >> (uVar14 & 0x3f) & 1) != 0) {
                  do {
                    puVar1 = (ulong *)(*(long *)(lVar16 + 0x30) + uVar14 * 0x10);
                    uVar11 = *puVar1;
                    uVar4 = puVar1[1];
                    if ((uVar11 == uVar2 && uVar4 == uVar3) ||
                       (func_0x000107c605b8(uVar11,uVar4,uVar2,uVar3,0), (uVar11 & 1) != 0)) {
                      func_0x000107c6142c(lVar16);
                      param_4 = auStack_150[2];
                      goto LAB_1024f1ef4;
                    }
                    uVar14 = uVar14 + 1 & ~uVar12;
                  } while ((*(ulong *)(lVar16 + 0x38 + (uVar14 >> 6) * 8) >> (uVar14 & 0x3f) & 1) !=
                           0);
                }
                func_0x000107c6142c(lVar16);
                param_4 = auStack_150[2];
              }
              uVar12 = uVar2;
              FUN_1024e1fe8(uVar2,uVar3);
              if (uVar12 != 0) {
                uVar14 = uVar12;
                func_0x000107c61174();
                FUN_1024ef6a0(uVar12,uVar13);
                func_0x000107c61428(param_4 + 0x10,auStack_100,0x21,0);
                func_0x000107c61434(uVar3);
                func_0x000100403b00(auStack_110,uVar2,uVar3);
                func_0x000107c614a8(auStack_100);
                func_0x000107c61170(uVar14);
                func_0x000107c6142c(uStack_108);
              }
            }
LAB_1024f1ef4:
            func_0x0001024e41b4(puVar15);
            uVar13 = uVar13 + 1;
            param_5 = auStack_150[0];
            puVar9 = puStack_88;
          } while (uVar13 != uStack_130);
        }
        func_0x000107c6142c(lVar8);
        func_0x0001024efaf8();
        FUN_1024f2774(puVar9,param_5);
        func_0x000107c6142c(puVar9);
        func_0x000107c61574(lVar8);
        func_0x000107c61574(puStack_138);
      }
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 1024f2134; end: 1024f219b;  */

void FUN_1024f2134(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = param_1;
    FUN_1024efa5c();
    func_0x000107c61170(param_1);
    func_0x0001024e4908();
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 1024f219c; end: 1024f2227;  */

void FUN_1024f219c(undefined8 param_1,long param_2,code *param_3,undefined8 param_4,long param_5)

{
  undefined8 uVar1;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,1,0);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = param_1;
  func_0x000107c61434(param_1);
  func_0x000107c6142c(uVar1);
  (*param_3)();
  uVar1 = *(undefined8 *)(param_5 + 0x48);
  *(undefined8 *)(param_5 + 0x48) = param_1;
  func_0x000107c61434(param_1);
  func_0x000107c6142c(uVar1);
  return;
}



/* Entry: 1024f2228; end: 1024f231b;  */

void FUN_1024f2228(long param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if ((*(char *)(param_1 + 0x40) != '\x01') && ((*(byte *)(param_1 + 0x50) & 1) == 0)) {
    lVar5 = *(long *)(param_1 + 0x38);
    *(undefined1 *)(param_1 + 0x50) = 1;
    lVar2 = param_1;
    (**(code **)(param_1 + 0x18))();
    if (SBORROW8(lVar2,lVar5)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1024f2318);
      (*pcVar1)();
    }
    pcVar1 = *(code **)(param_1 + 0x28);
    lVar4 = *(long *)(param_1 + 0x10);
    if (lVar4 < 1) {
      uVar6 = 3;
    }
    else {
      if (SUB168(SEXT816(lVar4) * SEXT816(1000),8) != lVar4 * 1000 >> 0x3f) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1024f231c);
        (*pcVar1)();
      }
      uVar6 = 3;
      if (lVar4 * 1000 + -0xfa <= lVar2 - lVar5) {
        uVar6 = 0;
      }
    }
    uVar7 = *(undefined8 *)(param_1 + 0x48);
    uVar3 = uVar7;
    func_0x000107c61434(uVar7);
    FUN_1024f2f40();
    func_0x000107c6142c(uVar7);
    (*pcVar1)(uVar6,lVar5,lVar2,uVar3);
    func_0x000107c6142c(uVar3);
  }
  *(undefined1 *)(param_2 + 0x11) = 0;
  return;
}



/* Entry: 1024f231c; end: 1024f2377; -[_TtC32FriendingInterstitialOperaPlugin38FriendingInterstitialPluginServiceImpl augmentWithBaseDataModels:] */

void FUN_1024f231c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1024f0d7c(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1024f2378; end: 1024f23d7; -[_TtC32FriendingInterstitialOperaPlugin38FriendingInterstitialPluginServiceImpl init] */

void FUN_1024f2378(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FriendingInterstitialOperaPlugin.FriendingInterstitialPluginServiceImpl",0x47
                      ,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024f23a4);
  (*pcVar1)();
}



/* Entry: 1024f23d8; end: 1024f24e3; -[_TtC32FriendingInterstitialOperaPlugin38FriendingInterstitialPluginServiceImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001024f2444: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024f2474: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024f24b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024f2478) */
/* WARNING: Removing unreachable block (ram,0x0001024f2448) */
/* WARNING: Removing unreachable block (ram,0x0001024f24b8) */
/* WARNING: Removing unreachable block (ram,0x0001024e1734) */
/* WARNING: Removing unreachable block (ram,0x0001024e1740) */
/* WARNING: Removing unreachable block (ram,0x0001024e1738) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024f23d8(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea1ef8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea1f10));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea1f28));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea1ef0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea1f08));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ea1f00));
  return;
}



/* Entry: 1024f24e4; end: 1024f250b;  */

void FUN_1024f24e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_68 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar2 + 0x10,auStack_68,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x0001024efb74();
    func_0x000107c61170(lVar2);
    FUN_102dcc0b0(4,1,uVar1,uVar4,param_1,param_2,param_3,param_4);
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 1024f250c; end: 1024f2537;  */

void FUN_1024f250c(void)

{
  code *pcVar1;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  *(undefined1 *)(*(long *)(unaff_x20 + 0x10) + 0x10) = 1;
  (*pcVar1)();
  return;
}



/* Entry: 1024f2538; end: 1024f254b;  */

void FUN_1024f2538(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    FUN_1024efa5c();
    func_0x000107c61170(lVar1);
    func_0x0001024e4908();
    func_0x000107c61574(lVar2);
  }
  return;
}



/* Entry: 1024f254c; end: 1024f258f;  */

void FUN_1024f254c(void)

{
  undefined8 uVar1;
  code *pcVar2;
  code *pcVar3;
  long unaff_x20;
  
  pcVar2 = *(code **)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  pcVar3 = *(code **)(unaff_x20 + 0x28);
  *(undefined1 *)(*(long *)(unaff_x20 + 0x10) + 0x11) = 1;
  (*pcVar2)(uVar1);
  (*pcVar3)();
  return;
}



/* Entry: 1024f2590; end: 1024f25bb;  */

void FUN_1024f2590(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  if ((*(char *)(lVar1 + 0x40) != '\x01') && ((*(byte *)(lVar1 + 0x50) & 1) == 0)) {
    lVar7 = *(long *)(lVar1 + 0x38);
    *(undefined1 *)(lVar1 + 0x50) = 1;
    lVar4 = lVar1;
    (**(code **)(lVar1 + 0x18))();
    if (SBORROW8(lVar4,lVar7)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1024f2318);
      (*pcVar3)();
    }
    pcVar3 = *(code **)(lVar1 + 0x28);
    lVar6 = *(long *)(lVar1 + 0x10);
    if (lVar6 < 1) {
      uVar8 = 3;
    }
    else {
      if (SUB168(SEXT816(lVar6) * SEXT816(1000),8) != lVar6 * 1000 >> 0x3f) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1024f231c);
        (*pcVar3)();
      }
      uVar8 = 3;
      if (lVar6 * 1000 + -0xfa <= lVar4 - lVar7) {
        uVar8 = 0;
      }
    }
    uVar9 = *(undefined8 *)(lVar1 + 0x48);
    uVar5 = uVar9;
    func_0x000107c61434(uVar9);
    FUN_1024f2f40();
    func_0x000107c6142c(uVar9);
    (*pcVar3)(uVar8,lVar7,lVar4,uVar5);
    func_0x000107c6142c(uVar5);
  }
  *(undefined1 *)(lVar2 + 0x11) = 0;
  return;
}



/* Entry: 1024f25bc; end: 1024f2607;  */

void FUN_1024f25bc(void)

{
  func_0x000107c61168(&PTR_PTR_112849b10);
  return;
}



/* Entry: 1024f2608; end: 1024f2667;  */

void FUN_1024f2608(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1024f2668; end: 1024f2697;  */

void FUN_1024f2668(long param_1,long param_2)

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



/* Entry: 1024f2698; end: 1024f26f3;  */

void FUN_1024f2698(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1024f26f4; end: 1024f26ff;  */

void FUN_1024f26f4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  ppuVar4 = &puStack_60;
  puVar3 = &UNK_110517e88;
  func_0x000107c613fc(&UNK_110517e88,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar2;
  *(undefined8 *)(puVar3 + 0x18) = uVar5;
  pcStack_40 = FUN_1024f2700;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_110517ea0;
  puStack_38 = puVar3;
  func_0x000107c60bc4(&puStack_60);
  puVar3 = puStack_38;
  func_0x000107c6157c(uVar5);
  func_0x000107c61574(puVar3);
  func_0x000107c4e524(uVar1);
  func_0x000107c60bd0(ppuVar4);
  return;
}



/* Entry: 1024f2700; end: 1024f2723;  */

void FUN_1024f2700(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(0);
  return;
}



/* Entry: 1024f2724; end: 1024f2773;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024f2724(void)

{
  code *pcVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  if (*(long *)(unaff_x20 + 0x20) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(long *)(unaff_x20 + 0x20) + _DAT_11307d350);
    func_0x000107c61174(uVar2,*(undefined8 *)(unaff_x20 + 0x18));
  }
  (*pcVar1)(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1024f2774; end: 1024f2b3f;  */

void FUN_1024f2774(long param_1,undefined *param_2)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined *puStack_68;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000100083b20(&puStack_68);
    puVar5 = puStack_68;
    puVar4 = puStack_68;
    func_0x000107c51bfc();
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    puVar5 = puVar4;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    if (puVar5 != (undefined *)0x0) {
      puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
      FUN_1024ddcc0();
      uVar11 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
      uVar13 = 0xffffffffffffffff;
      if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
        uVar13 = ~(-1L << (uVar11 & 0x3f));
      }
      uVar13 = uVar13 & *(ulong *)(param_1 + 0x40);
      func_0x000107c61434(param_1);
      lVar14 = 0;
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      while( true ) {
        while (PTR__OBJC_CLASS___NSNumber_1126ae570 = puVar6, uVar13 != 0) {
          uVar12 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
          uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
          uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
          uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
          uVar15 = *(undefined8 *)
                    (*(long *)(param_1 + 0x38) +
                    (lVar14 << 9 | LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) << 3));
          func_0x000107c610f8();
          func_0x000107c61174();
          func_0x000107c46ed0();
          if (((ulong)puVar4 & 0xc000000000000001) == 0) {
            func_0x000107c61174(uVar15);
          }
          else {
            puVar7 = (undefined *)((ulong)puVar4 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar4) {
              puVar7 = puVar4;
            }
            func_0x000107c61174(uVar15);
            puVar4 = puVar7;
            func_0x000107c6042c();
            param_2 = puVar4 + 1;
            if (SCARRY8((long)puVar4,1)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1024f2b1c);
              (*pcVar2)();
            }
            FUN_1024f2b84();
            puVar4 = puVar7;
          }
          puVar7 = puVar4;
          func_0x000107c61558();
          puVar9 = puVar6;
          puStack_68 = puVar4;
          func_0x000100121450();
          uVar12 = (ulong)~(uint)param_2 & 1;
          lVar1 = *(long *)(puVar4 + 0x10) + uVar12;
          if (SCARRY8(*(long *)(puVar4 + 0x10),uVar12)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1024f2b18);
            (*pcVar2)();
          }
          if (*(long *)(puVar4 + 0x18) < lVar1) {
            func_0x0001024ee55c(lVar1);
            puVar9 = puVar6;
            func_0x000100121450();
            puVar10 = puVar7;
            if (((uint)param_2 & 1) != ((uint)puVar7 & 1)) {
              FUN_1024f2dcc(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
              func_0x000107c60624();
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1024f2b40);
              (*pcVar2)();
            }
          }
          else {
            puVar10 = param_2;
            if (((ulong)puVar7 & 1) == 0) {
              func_0x0001024edaf8();
            }
          }
          puVar4 = puStack_68;
          uVar13 = uVar13 - 1 & uVar13;
          if (((ulong)param_2 & 1) == 0) {
            *(ulong *)(puStack_68 + ((ulong)puVar9 >> 6) * 8 + 0x40) =
                 *(ulong *)(puStack_68 + ((ulong)puVar9 >> 6) * 8 + 0x40) |
                 1L << ((ulong)puVar9 & 0x3f);
            *(undefined **)(*(long *)(puStack_68 + 0x30) + (long)puVar9 * 8) = puVar6;
            *(undefined8 *)(*(long *)(puStack_68 + 0x38) + (long)puVar9 * 8) = uVar15;
            func_0x000107c61170(uVar15);
            if (SCARRY8(*(long *)(puVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1024f2b20);
              (*pcVar2)();
            }
            *(long *)(puVar4 + 0x10) = *(long *)(puVar4 + 0x10) + 1;
            param_2 = puVar10;
            puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          }
          else {
            uVar16 = *(undefined8 *)(*(long *)(puStack_68 + 0x38) + (long)puVar9 * 8);
            *(undefined8 *)(*(long *)(puStack_68 + 0x38) + (long)puVar9 * 8) = uVar15;
            func_0x000107c61170(uVar15);
            func_0x000107c61170(puVar6);
            func_0x000107c61170(uVar16);
            param_2 = puVar10;
            puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          }
        }
        bVar3 = SCARRY8(lVar14,1);
        lVar14 = lVar14 + 1;
        if (bVar3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1024f2b14);
          (*pcVar2)();
        }
        if ((long)(uVar11 + 0x3f >> 6) <= lVar14) break;
        uVar13 = ((ulong *)(param_1 + 0x40))[lVar14];
      }
      func_0x000107c61574(param_1);
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c47580();
      puVar7 = PTR_PTR_1126beec8;
      func_0x000107c610f8(PTR_PTR_1126beec8);
      uVar16 = 0;
      FUN_1024f2dcc(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      uVar8 = 0;
      FUN_1024f2dcc(0,0x112d4ed88,&PTR_PTR_1126b15c8);
      uVar15 = uVar8;
      func_0x000100120cb0();
      puVar9 = puVar4;
      func_0x000107c5f9dc(puVar4,uVar16,uVar8,uVar15);
      func_0x000107c46e5c(puVar7);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(puVar9);
      func_0x000107c51e44(puVar5);
      func_0x000107c6142c(puVar4);
      func_0x000107c615e8(puVar5);
      func_0x000107c61170(puVar7);
    }
  }
  return;
}



/* Entry: 1024f2b40; end: 1024f2b83;  */

void FUN_1024f2b40(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1024f2b84; end: 1024f2dcb;  */

undefined * FUN_1024f2b84(undefined *param_1,undefined1 **param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  if (param_2 == (undefined1 **)0x0) {
    func_0x000107c615e8();
    puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  else {
    func_0x0001000285a8(0x112ea15a0,&UNK_10dab3bf0);
    puVar5 = param_1;
    func_0x000107c60494();
    puStack_68 = puVar5;
    func_0x000107c60418();
    puVar7 = param_1;
    func_0x000107c60444();
    if (puVar7 != (undefined *)0x0) {
      uVar6 = 0;
      FUN_1024f2dcc(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      puVar2 = PTR___syXlN_11034f1a0;
      do {
        puStack_78 = puVar7;
        func_0x000107c6147c(&uStack_70,&puStack_78,puVar2 + 8,uVar6,7);
        uVar8 = 0;
        puStack_80 = (undefined1 *)param_2;
        FUN_1024f2dcc(0,0x112d4ed88,&PTR_PTR_1126b15c8);
        param_2 = &puStack_80;
        func_0x000107c6147c(&puStack_78,&puStack_80,puVar2 + 8,uVar8,7);
        uVar8 = uStack_70;
        puVar3 = puStack_78;
        if (*(ulong *)(puVar5 + 0x18) <= *(ulong *)(puVar5 + 0x10)) {
          param_2 = (undefined1 **)0x1;
          func_0x0001024ee55c(*(ulong *)(puVar5 + 0x10) + 1);
          puVar5 = puStack_68;
        }
        puVar7 = *(undefined **)(puVar5 + 0x28);
        func_0x000107c60114();
        uVar12 = -1L << ((ulong)(byte)puVar5[0x20] & 0x3f);
        uVar11 = (ulong)puVar7 & (uVar12 ^ 0xffffffffffffffff);
        uVar9 = uVar11 >> 6;
        uVar10 = -1L << (uVar11 & 0x3f) &
                 (*(ulong *)(puVar5 + uVar9 * 8 + 0x40) ^ 0xffffffffffffffff);
        if (uVar10 == 0) {
          bVar1 = false;
          uVar10 = 0x3f - uVar12 >> 6;
          do {
            uVar11 = uVar9 + 1;
            if ((uVar11 == uVar10) && (bVar1)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1024f2dcc);
              (*pcVar4)();
            }
            uVar9 = 0;
            if (uVar11 != uVar10) {
              uVar9 = uVar11;
            }
            bVar1 = (bool)(uVar11 == uVar10 | bVar1);
          } while (*(ulong *)(puVar5 + uVar9 * 8 + 0x40) == 0xffffffffffffffff);
          uVar10 = ~*(ulong *)(puVar5 + uVar9 * 8 + 0x40);
          uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
          uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
          uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
          uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
          uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar9 << 6;
        }
        else {
          uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
          uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
          uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
          uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
          uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar11 & 0x7fffffffffffffc0;
        }
        uVar9 = uVar10 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(puVar5 + uVar9 + 0x40) =
             1L << (uVar10 & 0x3f) | *(ulong *)(puVar5 + uVar9 + 0x40);
        *(undefined8 *)(*(long *)(puVar5 + 0x30) + uVar10 * 8) = uVar8;
        *(undefined **)(*(long *)(puVar5 + 0x38) + uVar10 * 8) = puVar3;
        *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
        func_0x000107c60444();
      } while (puVar7 != (undefined *)0x0);
    }
    func_0x000107c61574(param_1);
  }
  return puVar5;
}



/* Entry: 1024f2dcc; end: 1024f2e0b;  */

void FUN_1024f2dcc(undefined8 param_1,long *param_2,long *param_3)

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


