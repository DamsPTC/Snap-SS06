/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1019c698c; end: 1019c69bb;  */

void FUN_1019c698c(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112de66f0;
  plVar5 = (long *)&UNK_10d9b1450;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_1019c69bc(0,0x112de6240,&PTR_PTR_1126bb838);
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



/* Entry: 1019c69bc; end: 1019c69fb;  */

void FUN_1019c69bc(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1019c69fc; end: 1019c6a7b;  */

undefined1  [16] FUN_1019c69fc(ulong param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  long unaff_x20;
  long lVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined1 auStack_88 [40];
  
  func_0x000107c6068c(auStack_88,*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c5fb58(auStack_88,param_1,param_2);
  uVar5 = param_3;
  func_0x000107c60690();
  func_0x000107c606a8();
  uVar3 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar5 = uVar5 & (uVar3 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar5 >> 6) * 8) >> (uVar5 & 0x3f) & 1) != 0) {
    lVar6 = *(long *)(unaff_x20 + 0x30);
    do {
      puVar4 = (ulong *)(lVar6 + uVar5 * 0x18);
      uVar1 = *puVar4;
      uVar7 = puVar4[2];
      if (((uVar1 == param_1 && puVar4[1] == param_2) ||
          (func_0x000107c605b8(uVar1,puVar4[1],param_1,param_2,0), (uVar1 & 1) != 0)) &&
         (uVar7 == param_3)) {
        uVar2 = 1;
        goto LAB_1019c6b64;
      }
      uVar5 = uVar5 + 1 & ~uVar3;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (uVar5 >> 6) * 8) >> (uVar5 & 0x3f) & 1) != 0);
  }
  uVar2 = 0;
LAB_1019c6b64:
  auVar8._8_8_ = uVar2;
  auVar8._0_8_ = uVar5;
  return auVar8;
}



/* Entry: 1019c6a7c; end: 1019c6aab;  */

undefined1  [16] FUN_1019c6a7c(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  uint uVar5;
  undefined1 auVar6 [16];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x28);
  func_0x000107c60114();
  uVar4 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar1 = uVar1 & (uVar4 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) == 0) {
    uVar5 = 0;
  }
  else {
    FUN_1019c718c(0);
    do {
      uVar2 = *(ulong *)(*(long *)(unaff_x20 + 0x30) + uVar1 * 8);
      func_0x000107c61174();
      uVar3 = uVar2;
      func_0x000107c60118();
      uVar5 = (uint)uVar3;
      func_0x000107c61170(uVar2);
      if ((uVar3 & 1) != 0) break;
      uVar1 = uVar1 + 1 & ~uVar4;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0);
  }
  auVar6._8_4_ = uVar5 & 1;
  auVar6._0_8_ = uVar1;
  auVar6._12_4_ = 0;
  return auVar6;
}



/* Entry: 1019c6aac; end: 1019c6b83;  */

undefined1  [16] FUN_1019c6aac(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong *puVar4;
  long unaff_x20;
  long lVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  uVar3 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_4 = param_4 & (uVar3 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_4 >> 6) * 8) >> (param_4 & 0x3f) & 1) != 0) {
    lVar5 = *(long *)(unaff_x20 + 0x30);
    do {
      puVar4 = (ulong *)(lVar5 + param_4 * 0x18);
      uVar1 = *puVar4;
      uVar6 = puVar4[2];
      if (((uVar1 == param_1 && puVar4[1] == param_2) ||
          (func_0x000107c605b8(uVar1,puVar4[1],param_1,param_2,0), (uVar1 & 1) != 0)) &&
         (uVar6 == param_3)) {
        uVar2 = 1;
        goto LAB_1019c6b64;
      }
      param_4 = param_4 + 1 & ~uVar3;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (param_4 >> 6) * 8) >> (param_4 & 0x3f) & 1) != 0);
  }
  uVar2 = 0;
LAB_1019c6b64:
  auVar7._8_8_ = uVar2;
  auVar7._0_8_ = param_4;
  return auVar7;
}



/* Entry: 1019c6b84; end: 1019c6c3f;  */

undefined1  [16] FUN_1019c6b84(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  uint uVar4;
  undefined1 auVar5 [16];
  
  uVar3 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar3 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) == 0) {
    uVar4 = 0;
  }
  else {
    FUN_1019c718c(0);
    do {
      uVar1 = *(ulong *)(*(long *)(unaff_x20 + 0x30) + param_2 * 8);
      func_0x000107c61174();
      uVar2 = uVar1;
      func_0x000107c60118();
      uVar4 = (uint)uVar2;
      func_0x000107c61170(uVar1);
      if ((uVar2 & 1) != 0) break;
      param_2 = param_2 + 1 & ~uVar3;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
  }
  auVar5._8_4_ = uVar4 & 1;
  auVar5._0_8_ = param_2;
  auVar5._12_4_ = 0;
  return auVar5;
}



/* Entry: 1019c6c40; end: 1019c6d7b;  */

undefined * FUN_1019c6c40(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_90 [80];
  
  puVar6 = auStack_90;
  lVar2 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  uVar3 = *(undefined8 *)PTR__NSDebugDescriptionErrorKey_110345400;
  func_0x000107c5faec();
  *(undefined8 *)(lVar2 + 0x20) = uVar3;
  puVar1 = PTR___sSSN_11034da80;
  *(undefined **)(lVar2 + 0x48) = PTR___sSSN_11034da80;
  *(undefined1 **)(lVar2 + 0x28) = puVar6;
  *(undefined8 *)(lVar2 + 0x30) = param_1;
  *(undefined8 *)(lVar2 + 0x38) = param_2;
  func_0x000107c61434(param_2);
  lVar4 = lVar2;
  func_0x000100214a84(lVar2);
  func_0x000107c61588(lVar2);
  func_0x000100f15a0c((undefined8 *)(lVar2 + 0x20));
  puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
  uVar3 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010efc7410);
  lVar2 = lVar4;
  func_0x000107c5f9dc(lVar4,puVar1,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar4);
  func_0x000107c466bc(puVar5);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(lVar2);
  return puVar5;
}



/* Entry: 1019c6d7c; end: 1019c6f7b;  */

undefined * FUN_1019c6d7c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 uStack_41;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puVar6 = (undefined *)param_1[8];
  if (puVar6 == (undefined *)0x0) {
    return (undefined *)0x0;
  }
  if (param_2 == 0) {
    func_0x000107c61174(puVar6);
  }
  else {
    puVar2 = puVar6;
    func_0x000107c61174(puVar6);
    lVar3 = param_2;
    func_0x000107c44314();
    if (lVar3 == 0) {
      func_0x000107c4407c();
      func_0x000107c61180();
      if (param_2 != 0) {
        puVar6 = PTR_PTR_1126af5d0;
        func_0x000107c61168(PTR_PTR_1126af5d0);
        func_0x000107c5c3c8();
        func_0x000107c61180();
        func_0x000107c61170(param_2);
        puVar5 = PTR_PTR_1126dfa78;
        func_0x000107c61168(PTR_PTR_1126dfa78);
        func_0x000107c41be4();
        func_0x000107c61180();
        goto LAB_1019c6f58;
      }
    }
  }
  puStack_40 = (undefined *)0x0;
  uStack_38 = 0xe000000000000000;
  func_0x000107c602fc(0x25);
  func_0x000107c5fb78(0xd00000000000001b,0x800000010efc73f0);
  func_0x000107c5fb78(*param_1,param_1[1]);
  func_0x000107c5fb78(0xa2c,0xe200000000000000);
  func_0x000107c5fb78(param_1[2],param_1[3]);
  func_0x000107c5fb78(0x202c,0xe200000000000000);
  uStack_41 = *(undefined1 *)(param_1 + 5);
  func_0x000107c603d0(&uStack_41,&puStack_40,&UNK_110427458,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  uVar1 = uStack_38;
  puVar2 = puStack_40;
  FUN_1019c6c40(puStack_40,uStack_38);
  func_0x000107c6142c(uVar1);
  puVar4 = PTR_PTR_1126af5d0;
  func_0x000107c61168(PTR_PTR_1126af5d0);
  puVar5 = puVar2;
  func_0x000107c5ed2c(puVar2);
  func_0x000107c42d78(puVar4);
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  puVar5 = PTR_PTR_1126dfa78;
  func_0x000107c61168(PTR_PTR_1126dfa78);
  func_0x000107c41be4();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
LAB_1019c6f58:
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar6);
  return puVar5;
}



/* Entry: 1019c6f7c; end: 1019c718b;  */

undefined * FUN_1019c6f7c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 uStack_51;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  puVar6 = (undefined *)param_1[9];
  if (puVar6 == (undefined *)0x0) {
    return (undefined *)0x0;
  }
  if (param_2 == 0) {
    func_0x000107c61174(puVar6);
  }
  else {
    puVar2 = puVar6;
    func_0x000107c61174(puVar6);
    lVar3 = param_2;
    func_0x000107c44314();
    if (lVar3 == 0) {
      func_0x000107c4407c();
      func_0x000107c61180();
      if (param_2 != 0) {
        puVar6 = PTR_PTR_1126af5d0;
        func_0x000107c61168(PTR_PTR_1126af5d0);
        func_0x000107c5c3c8();
        func_0x000107c61180();
        func_0x000107c61170(param_2);
        puVar5 = PTR_PTR_1126dfa70;
        func_0x000107c61168(PTR_PTR_1126dfa70);
        func_0x000107c41bd8();
        func_0x000107c61180();
        goto LAB_1019c7160;
      }
    }
  }
  puStack_50 = (undefined *)0x0;
  uStack_48 = 0xe000000000000000;
  func_0x000107c602fc(0x27);
  func_0x000107c5fb78(0xd00000000000001d,0x800000010efc7430);
  func_0x000107c5fb78(*param_1,param_1[1]);
  func_0x000107c5fb78(0xa2c,0xe200000000000000);
  func_0x000107c5fb78(param_1[2],param_1[3]);
  func_0x000107c5fb78(0x202c,0xe200000000000000);
  uStack_51 = *(undefined1 *)(param_1 + 5);
  func_0x000107c603d0(&uStack_51,&puStack_50,&UNK_110427458,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  uVar1 = uStack_48;
  puVar2 = puStack_50;
  FUN_1019c6c40(puStack_50,uStack_48);
  func_0x000107c6142c(uVar1);
  puVar4 = PTR_PTR_1126af5d0;
  func_0x000107c61168(PTR_PTR_1126af5d0);
  puVar5 = puVar2;
  func_0x000107c5ed2c(puVar2);
  func_0x000107c42d78(puVar4);
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  puVar5 = PTR_PTR_1126dfa70;
  func_0x000107c61168(PTR_PTR_1126dfa70);
  func_0x000107c41bd8();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
LAB_1019c7160:
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar6);
  return puVar5;
}



/* Entry: 1019c718c; end: 1019c71cf;  */

void FUN_1019c718c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5dfd0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126b08b8;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112d5dfd0 = puVar1;
  return;
}



/* Entry: 1019c71d0; end: 1019c7a4b;  */

/* WARNING: Possible PIC construction at 0x0001019c7868: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001019c786c) */

void FUN_1019c71d0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  long unaff_x20;
  ulong uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  long lVar17;
  ulong uVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined *puStack_148;
  ulong uStack_120;
  undefined1 auStack_f0 [16];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [24];
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uVar18 = *(ulong *)(unaff_x20 + 0x10);
  if (uVar18 >> 0x3e == 0) {
    uStack_120 = *(ulong *)((uVar18 & 0xffffffffffffff8) + 0x10);
    if (uStack_120 == 0) {
LAB_1019c7870:
      lVar17 = unaff_x20 + 0x20;
      func_0x000107c61618();
      if (lVar17 == 0) {
        return;
      }
      FUN_1019c352c(param_1,PTR___swiftEmptyArrayStorage_11034f1c8,param_2);
      goto code_r0x000107c615e8;
    }
    puStack_148 = (undefined *)param_1[4];
LAB_1019c721c:
    func_0x000107c61434(puStack_148);
    uVar12 = 0;
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar15 = puStack_148;
    do {
      if ((uVar18 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar18 & 0xffffffffffffff8) + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1019c77c4);
          (*pcVar3)();
        }
        uVar14 = *(ulong *)(uVar18 + 0x20 + uVar12 * 8);
        func_0x000107c6157c(uVar14);
      }
      else {
        uVar14 = uVar12;
        FUN_1019c2828(uVar12,uVar18);
      }
      if (SCARRY8(uVar12,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1019c77bc);
        (*pcVar3)();
      }
      uVar12 = uVar12 + 1;
      func_0x0001000d224c(auStack_b0);
      if ((ulong)puVar15 >> 0x3e == 0) {
        puVar19 = *(undefined **)(((ulong)puVar15 & 0xffffffffffffff8) + 0x10);
        puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        puVar19 = (undefined *)((ulong)puVar15 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar15) {
          puVar19 = puVar15;
        }
        func_0x000107c60480();
        puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      puVar21 = puVar9;
      PTR___swiftEmptyArrayStorage_11034f1c8 = puVar9;
      if (puVar19 != (undefined *)0x0) {
        if ((long)puVar19 < 1) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1019c77c0);
          (*pcVar3)();
        }
        puVar20 = (undefined *)0x0;
        uVar16 = param_1[2];
        do {
          if (((ulong)puVar15 & 0xc000000000000001) == 0) {
            puVar5 = *(undefined **)(puVar15 + (long)puVar20 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            puVar5 = puVar20;
            FUN_1019c2658(puVar20,puVar15);
          }
          lVar17 = lStack_90;
          uVar11 = uStack_98;
          func_0x0001000a8868(auStack_b0,uStack_98);
          puVar6 = puVar5;
          (**(code **)(lVar17 + 8))(puVar5,uVar16,uVar11,lVar17);
          func_0x000107c61174();
          if (((ulong)puVar6 & 1) == 0) {
            puVar6 = puVar21;
            func_0x000107c61550();
            if ((((int)puVar6 == 0) || ((long)puVar21 < 0)) || (((ulong)puVar21 >> 0x3e & 1) != 0))
            {
              if ((ulong)puVar21 >> 0x3e == 0) {
                puVar6 = *(undefined **)(((ulong)puVar21 & 0xffffffffffffff8) + 0x10);
              }
              else {
                puVar6 = (undefined *)((ulong)puVar21 & 0xffffffffffffff8);
                if ((undefined *)0x7fffffffffffffff < puVar21) {
                  puVar6 = puVar21;
                }
                func_0x000107c60480(puVar6);
              }
              puVar4 = (undefined *)0x0;
              FUN_1019c8f94(0,puVar6 + 1,1,puVar21);
              puVar21 = puVar4;
            }
            uVar10 = (ulong)puVar21 & 0xffffffffffffff8;
            uVar13 = *(ulong *)(uVar10 + 0x10);
            lVar17 = uVar13 + 1;
            if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar13) {
              puVar6 = (undefined *)(ulong)(1 < *(ulong *)(uVar10 + 0x18));
              FUN_1019c8f94(puVar6,lVar17,1,puVar21);
              puVar21 = puVar6;
              goto LAB_1019c7464;
            }
          }
          else {
            puVar6 = puVar9;
            func_0x000107c61550();
            if ((((int)puVar6 == 0) || ((long)puVar9 < 0)) || (((ulong)puVar9 >> 0x3e & 1) != 0)) {
              if ((ulong)puVar9 >> 0x3e == 0) {
                puVar6 = *(undefined **)(((ulong)puVar9 & 0xffffffffffffff8) + 0x10);
              }
              else {
                puVar6 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
                if ((undefined *)0x7fffffffffffffff < puVar9) {
                  puVar6 = puVar9;
                }
                func_0x000107c60480(puVar6);
              }
              puVar4 = (undefined *)0x0;
              FUN_1019c8f94(0,puVar6 + 1,1,puVar9);
              puVar9 = puVar4;
            }
            uVar10 = (ulong)puVar9 & 0xffffffffffffff8;
            uVar13 = *(ulong *)(uVar10 + 0x10);
            lVar17 = uVar13 + 1;
            if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar13) {
              puVar6 = (undefined *)(ulong)(1 < *(ulong *)(uVar10 + 0x18));
              FUN_1019c8f94(puVar6,lVar17,1,puVar9);
              puVar9 = puVar6;
LAB_1019c7464:
              uVar10 = (ulong)puVar6 & 0xffffffffffffff8;
            }
          }
          puVar20 = puVar20 + 1;
          *(long *)(uVar10 + 0x10) = lVar17;
          *(undefined **)(uVar10 + uVar13 * 8 + 0x20) = puVar5;
          func_0x000107c61170(puVar5);
        } while (puVar19 != puVar20);
      }
      if ((ulong)puVar9 >> 0x3e == 0) {
        puVar19 = *(undefined **)(((ulong)puVar9 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar19 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar9) {
          puVar19 = puVar9;
        }
        func_0x000107c60480();
      }
      if (puVar19 != (undefined *)0x0) {
        func_0x0001019c7eec(auStack_b0,&uStack_e0);
        puStack_b8 = puVar9;
        func_0x000107c61434(puVar9);
        puVar19 = puVar7;
        func_0x000107c61558();
        puVar20 = puVar7;
        if (((ulong)puVar19 & 1) == 0) {
          puVar20 = (undefined *)0x0;
          FUN_1019c8e50(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7);
        }
        uVar13 = *(ulong *)(puVar20 + 0x10);
        puVar7 = puVar20;
        if (*(ulong *)(puVar20 + 0x18) >> 1 <= uVar13) {
          puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar20 + 0x18));
          FUN_1019c8e50(puVar7,uVar13 + 1,1,puVar20);
        }
        *(ulong *)(puVar7 + 0x10) = uVar13 + 1;
        *(undefined8 *)(puVar7 + uVar13 * 0x30 + 0x38) = uStack_c8;
        *(undefined8 *)(puVar7 + uVar13 * 0x30 + 0x30) = uStack_d0;
        *(undefined **)(puVar7 + uVar13 * 0x30 + 0x48) = puStack_b8;
        *(undefined8 *)(puVar7 + uVar13 * 0x30 + 0x40) = uStack_c0;
        *(undefined8 *)(puVar7 + uVar13 * 0x30 + 0x28) = uStack_d8;
        *(undefined8 *)(puVar7 + uVar13 * 0x30 + 0x20) = uStack_e0;
      }
      func_0x000107c6142c(puVar15);
      if ((ulong)puVar21 >> 0x3e == 0) {
        puVar15 = *(undefined **)(((ulong)puVar21 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar15 = (undefined *)((ulong)puVar21 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar21) {
          puVar15 = puVar21;
        }
        func_0x000107c60480();
      }
      func_0x000107c6142c(puVar9);
      func_0x000107c61574(uVar14);
      func_0x0001000834e4(auStack_b0);
    } while ((puVar15 != (undefined *)0x0) && (puVar15 = puVar21, uVar12 != uStack_120));
    if ((ulong)puVar21 >> 0x3e != 0) goto LAB_1019c781c;
LAB_1019c75f0:
    lVar17 = *(long *)(puVar7 + 0x10);
  }
  else {
    uStack_120 = uVar18 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar18) {
      uStack_120 = uVar18;
    }
    uVar12 = uStack_120;
    func_0x000107c60480();
    if (uVar12 == 0) goto LAB_1019c7870;
    puVar21 = (undefined *)param_1[4];
    func_0x000107c60480();
    puStack_148 = puVar21;
    if (uStack_120 != 0) goto LAB_1019c721c;
    func_0x000107c61434(puVar21);
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if ((ulong)puVar21 >> 0x3e == 0) goto LAB_1019c75f0;
LAB_1019c781c:
    puVar15 = (undefined *)((ulong)puVar21 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar21) {
      puVar15 = puVar21;
    }
    func_0x000107c60480(puVar15);
    lVar17 = *(long *)(puVar7 + 0x10);
  }
  if (lVar17 == 0) {
    lVar17 = unaff_x20 + 0x20;
    func_0x000107c61618();
    if (lVar17 != 0) {
      FUN_1019c352c(param_1,PTR___swiftEmptyArrayStorage_11034f1c8,param_2);
      func_0x000107c6142c(puVar7);
code_r0x000107c615e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar17);
      return;
    }
    func_0x000107c6142c(puVar7);
  }
  else {
    lVar8 = 0;
    func_0x0001019c7ea8();
    func_0x000107c613fc();
    puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
    *(long *)(lVar8 + 0x10) = lVar17;
    *(undefined **)(lVar8 + 0x18) = puVar15;
    *(undefined **)(lVar8 + 0x20) = puVar21;
    uVar11 = *(undefined8 *)(unaff_x20 + 0x18);
    uStack_78 = param_1[1];
    uStack_80 = *param_1;
    uVar16 = param_1[2];
    uStack_88 = param_1[3];
    puVar15 = puVar7 + 0x20;
    func_0x000107c61434(puVar21);
    do {
      FUN_1019c7f70(puVar15,&uStack_e0,0x112de6888,&UNK_10d9b1168);
      puVar20 = puStack_b8;
      FUN_1019c7f30(&uStack_e0,auStack_b0);
      lVar2 = lStack_90;
      uVar1 = uStack_98;
      func_0x0001000a8868(auStack_b0,uStack_98);
      puVar19 = &UNK_110425f28;
      func_0x000107c613fc(&UNK_110425f28,0x18,7);
      func_0x000107c61644(puVar19 + 0x10,unaff_x20);
      puVar9 = &UNK_110425f50;
      func_0x000107c613fc(&UNK_110425f50,0x58,7);
      *(undefined **)(puVar9 + 0x10) = puVar19;
      *(undefined8 *)(puVar9 + 0x18) = uVar11;
      *(long *)(puVar9 + 0x20) = lVar8;
      uVar22 = *param_1;
      uVar24 = param_1[3];
      uVar23 = param_1[2];
      *(undefined8 *)(puVar9 + 0x30) = param_1[1];
      *(undefined8 *)(puVar9 + 0x28) = uVar22;
      *(undefined8 *)(puVar9 + 0x40) = uVar24;
      *(undefined8 *)(puVar9 + 0x38) = uVar23;
      *(undefined8 *)(puVar9 + 0x48) = param_1[4];
      *(undefined8 *)(puVar9 + 0x50) = param_2;
      pcVar3 = *(code **)(lVar2 + 0x10);
      func_0x000107c61434(puStack_148);
      func_0x000107c6157c(puVar19);
      func_0x000107c615f0(uVar11);
      func_0x000107c6157c(lVar8);
      func_0x000100402194(&uStack_80,auStack_f0);
      func_0x000107c61174(uVar16);
      FUN_1019c7f70(&uStack_88,auStack_f0,0x112de64a0,&UNK_10d9b0ef0);
      (*pcVar3)(puVar20,uVar16,0x1019c7f48,puVar9,uVar1,lVar2);
      func_0x000107c61574(puVar19);
      func_0x000107c6142c(puVar20);
      func_0x000107c61574(puVar9);
      func_0x0001000834e4(auStack_b0);
      puVar15 = puVar15 + 0x30;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    func_0x000107c6142c(puVar7);
    func_0x000107c61574(lVar8);
  }
  func_0x000107c6142c(puVar21);
  return;
}



/* Entry: 1019c7a4c; end: 1019c7b23;  */

void FUN_1019c7a4c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  undefined1 auStack_68 [24];
  
  if (!SBORROW8(*(long *)(param_1 + 0x10),1)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -1;
    func_0x000107c61428(param_1 + 0x18,auStack_68,0x21,0);
    func_0x000107c61434(param_2);
    FUN_1019c7b24();
    func_0x000107c614a8(auStack_68);
    func_0x000107c61428(param_1 + 0x20,auStack_68,0x21,0);
    func_0x000107c61434(param_3);
    func_0x0001019c7c20();
    func_0x000107c614a8(auStack_68);
    if (*(long *)(param_1 + 0x10) == 0) {
      func_0x0001019c7d14(param_1,param_5,param_6);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1019c7b24);
  (*pcVar1)();
}



/* Entry: 1019c7b24; end: 1019c7e47;  */

void FUN_1019c7b24(long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x20;
  ulong uVar5;
  long lVar6;
  
  uVar5 = *(ulong *)(param_1 + 0x10);
  lVar4 = *unaff_x20;
  lVar6 = *(long *)(lVar4 + 0x10);
  if (SCARRY8(lVar6,uVar5)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1019c7c14);
    (*pcVar1)();
  }
  lVar2 = lVar4;
  func_0x000107c61558();
  if (((int)lVar2 == 0) ||
     (uVar3 = *(ulong *)(lVar4 + 0x18) >> 1, (long)uVar3 < (long)(lVar6 + uVar5))) {
    FUN_1019c90f8();
    uVar3 = *(ulong *)(lVar2 + 0x18) >> 1;
    lVar6 = *(long *)(param_1 + 0x10);
    lVar4 = lVar2;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x10);
  }
  if (lVar6 == 0) {
    func_0x000107c6142c(param_1);
    if (uVar5 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1019c7c18);
      (*pcVar1)();
    }
  }
  else {
    if (uVar3 - *(long *)(lVar4 + 0x10) < uVar5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1019c7c1c);
      (*pcVar1)();
    }
    func_0x000107c6140c(lVar4 + *(long *)(lVar4 + 0x10) * 0x58 + 0x20,param_1 + 0x20,uVar5,
                        &UNK_110427088);
    func_0x000107c6142c(param_1);
    if (uVar5 != 0) {
      if (SCARRY8(*(long *)(lVar4 + 0x10),uVar5)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1019c7c20);
        (*pcVar1)();
      }
      *(ulong *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + uVar5;
    }
  }
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 1019c7e48; end: 1019c7ec7;  */

void FUN_1019c7e48(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  FUN_1019c7ec8(unaff_x20 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1019c7ec8; end: 1019c7f2f;  */

undefined8 FUN_1019c7ec8(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1019c7f30; end: 1019c7f6f;  */

undefined8 * FUN_1019c7f30(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 1019c7f70; end: 1019c7fb7;  */

undefined8 FUN_1019c7f70(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1019c7fb8; end: 1019c810f;  */

ulong FUN_1019c7fb8(undefined8 *param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  if (param_3 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_3 & 0xffffffffffffff8;
    if ((param_3 & 0x8000000000000000) != 0) {
      uVar5 = param_3;
    }
    func_0x000107c60480();
  }
  if (uVar5 != 0) {
    if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1019c8110);
      (*pcVar1)();
    }
    if (param_3 >> 0x3e == 0) {
      lVar6 = *(long *)((param_3 & 0xffffffffffffff8) + 0x10);
      if (param_2 < lVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1019c8104);
        (*pcVar1)();
      }
      uVar2 = 0;
      FUN_1019c8110(0);
      func_0x000107c6140c(param_1,(param_3 & 0xffffffffffffff8) + 0x20,lVar6,uVar2);
    }
    else {
      uVar7 = param_3 & 0xffffffffffffff8;
      if ((param_3 & 0x8000000000000000) != 0) {
        uVar7 = param_3;
      }
      func_0x000107c60480();
      if (param_2 < (long)uVar7) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1019c8108);
        (*pcVar1)();
      }
      if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1019c810c);
        (*pcVar1)();
      }
      if ((param_3 & 0xc000000000000001) == 0) {
        uVar2 = *(undefined8 *)(param_3 + 0x20);
        *param_1 = uVar2;
        lVar6 = uVar5 - 1;
        if (lVar6 != 0) {
          uVar4 = uVar2;
          puVar8 = (undefined8 *)(param_3 + 0x28);
          do {
            param_1 = param_1 + 1;
            uVar2 = *puVar8;
            *param_1 = uVar2;
            func_0x000107c61174(uVar4);
            lVar6 = lVar6 + -1;
            uVar4 = uVar2;
            puVar8 = puVar8 + 1;
          } while (lVar6 != 0);
        }
        func_0x000107c61174(uVar2);
      }
      else {
        uVar7 = 0;
        do {
          uVar3 = uVar7;
          FUN_1019c2658(uVar7,param_3);
          param_1[uVar7] = uVar3;
          uVar7 = uVar7 + 1;
        } while (uVar5 != uVar7);
      }
    }
  }
  return param_3;
}



/* Entry: 1019c8110; end: 1019c8153;  */

void FUN_1019c8110(void)

{
  undefined *puVar1;
  
  if (puRam0000000112de6240 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126bb838;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112de6240 = puVar1;
  return;
}



/* Entry: 1019c8154; end: 1019c8637;  */

void FUN_1019c8154(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 *unaff_x20;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined8 uVar16;
  ulong uStack_108;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  
  uVar12 = *unaff_x20;
  uVar14 = unaff_x20[6];
  puVar4 = &UNK_110425fb8;
  func_0x000107c613fc(&UNK_110425fb8,0x28,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar14;
  *(undefined8 *)(puVar4 + 0x18) = param_4;
  *(undefined8 *)(puVar4 + 0x20) = param_5;
  if (param_2 >> 0x3e == 0) {
    uVar15 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar15 = param_2 & 0xffffffffffffff8;
    if ((param_2 & 0x8000000000000000) != 0) {
      uVar15 = param_2;
    }
    func_0x000107c60480();
  }
  if (uVar15 == 0) {
    func_0x000107c6157c(param_5);
    func_0x000107c6157c(uVar14);
    func_0x0001000d224c(&puStack_a8);
    puVar10 = puStack_a8;
    func_0x000107c614f0(puStack_a8);
    puVar11 = &UNK_1104260d0;
    func_0x000107c613fc(&UNK_1104260d0,0x30,7);
    *(undefined8 *)(puVar11 + 0x10) = param_4;
    *(undefined8 *)(puVar11 + 0x18) = param_5;
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    *(undefined **)(puVar11 + 0x20) = PTR___swiftEmptyArrayStorage_11034f1c8;
    *(undefined **)(puVar11 + 0x28) = puVar5;
    func_0x000107c6157c(param_5);
    func_0x00010090569c(FUN_1019c97d0,puVar11,puVar10);
    func_0x000107c615e8(puStack_a8);
    func_0x000107c61574(puVar11);
  }
  else {
    func_0x000107c6157c(param_5);
    func_0x000107c6157c(uVar14);
    func_0x0001000d224c(&puStack_a8);
    puVar11 = puStack_a8;
    if (puStack_a8 != (undefined *)0x0) {
      if (param_2 >> 0x3e == 0) {
        uStack_108 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uStack_108 = param_2 & 0xffffffffffffff8;
        if ((param_2 & 0x8000000000000000) != 0) {
          uStack_108 = param_2;
        }
        func_0x000107c60480();
      }
      puVar5 = &UNK_110426008;
      func_0x000107c613fc(&UNK_110426008,0x18,7);
      puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
      *(undefined **)(puVar5 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
      puVar10 = &UNK_110426030;
      func_0x000107c613fc(&UNK_110426030,0x18,7);
      *(undefined **)(puVar10 + 0x10) = puVar6;
      puVar6 = &UNK_110426058;
      func_0x000107c613fc(&UNK_110426058,0x18,7);
      *(undefined8 *)(puVar6 + 0x10) = 0;
      uVar14 = 0;
      func_0x00010006a340();
      func_0x000107c613fc();
      func_0x00010006a360();
      if ((long)uVar15 < 1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1019c8634);
        (*pcVar3)();
      }
      uVar13 = 0;
      uVar1 = unaff_x20[4];
      uVar2 = unaff_x20[5];
      do {
        if ((param_2 & 0xc000000000000001) == 0) {
          uVar9 = *(ulong *)(param_2 + uVar13 * 8 + 0x20);
          func_0x000107c61174();
          uVar16 = param_1;
        }
        else {
          uVar9 = uVar13;
          FUN_1019c2658(uVar13,param_2);
          uVar16 = param_1;
        }
        uVar13 = uVar13 + 1;
        func_0x000107c40fd4(uVar2);
        puVar7 = &UNK_110426080;
        param_1 = uVar16;
        func_0x000107c613fc(&UNK_110426080,0x78,7);
        *(ulong *)(puVar7 + 0x10) = uVar9;
        *(undefined8 *)(puVar7 + 0x18) = param_3;
        *(undefined8 *)(puVar7 + 0x20) = uVar2;
        *(undefined8 *)(puVar7 + 0x28) = uVar16;
        *(undefined8 *)(puVar7 + 0x30) = uVar1;
        *(undefined8 *)(puVar7 + 0x38) = uVar14;
        *(undefined **)(puVar7 + 0x40) = puVar5;
        *(undefined **)(puVar7 + 0x48) = puVar10;
        *(undefined **)(puVar7 + 0x50) = puVar6;
        *(ulong *)(puVar7 + 0x58) = uStack_108;
        *(code **)(puVar7 + 0x60) = FUN_1019c8da0;
        *(undefined **)(puVar7 + 0x68) = puVar4;
        *(undefined8 *)(puVar7 + 0x70) = uVar12;
        pcStack_88 = FUN_1019c9484;
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0x42000000;
        pcStack_98 = FUN_1019c8c80;
        puStack_90 = &UNK_110426098;
        ppuVar8 = &puStack_a8;
        puStack_80 = puVar7;
        func_0x000107c60bc4();
        puVar7 = puStack_80;
        func_0x000107c61174(uVar9);
        func_0x000107c61174(param_3);
        func_0x000107c615f0(uVar2);
        func_0x000107c6157c(uVar1);
        func_0x000107c6157c(uVar14);
        func_0x000107c6157c(puVar5);
        func_0x000107c6157c(puVar10);
        func_0x000107c6157c(puVar6);
        func_0x000107c6157c(puVar4);
        func_0x000107c61574(puVar7);
        func_0x000107c4b3cc(puVar11);
        func_0x000107c60bd0(ppuVar8);
        func_0x000107c61170(uVar9);
      } while (uVar15 != uVar13);
      func_0x000107c61574(puVar5);
      func_0x000107c61574(puVar10);
      func_0x000107c61574(puVar6);
      func_0x000107c61574(uVar14);
      func_0x000107c61574(puVar4);
      func_0x000107c615e8(puVar11);
      return;
    }
    if ((long)uVar15 < 1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1019c8638);
      (*pcVar3)();
    }
    uVar13 = 0;
    do {
      if ((param_2 & 0xc000000000000001) == 0) {
        uVar9 = *(ulong *)(param_2 + uVar13 * 8 + 0x20);
        func_0x000107c61174(uVar9);
      }
      else {
        uVar9 = uVar13;
        FUN_1019c2658(uVar13,param_2);
      }
      func_0x0001000d224c(&puStack_a8);
      puVar11 = puStack_a8;
      if (puStack_a8 != (undefined *)0x0) {
        func_0x000107c502c0(puStack_a8);
        func_0x000107c615e8(puVar11);
      }
      uVar13 = uVar13 + 1;
      func_0x000107c61170(uVar9);
    } while (uVar15 != uVar13);
    func_0x000107c61434(param_2);
    func_0x0001000d224c(&puStack_a8);
    puVar5 = puStack_a8;
    func_0x000107c614f0(puStack_a8);
    puVar11 = &UNK_110425fe0;
    func_0x000107c613fc(&UNK_110425fe0,0x30,7);
    *(undefined8 *)(puVar11 + 0x10) = param_4;
    *(undefined8 *)(puVar11 + 0x18) = param_5;
    *(undefined **)(puVar11 + 0x20) = PTR___swiftEmptyArrayStorage_11034f1c8;
    *(ulong *)(puVar11 + 0x28) = param_2;
    func_0x000107c6157c(param_5);
    func_0x000107c61434(param_2);
    func_0x00010090569c(FUN_1019c945c,puVar11,puVar5);
    func_0x000107c615e8(puStack_a8);
    func_0x000107c61574(puVar11);
    func_0x000107c6142c(param_2);
  }
  func_0x000107c61574(puVar4);
  return;
}



/* Entry: 1019c8638; end: 1019c86f7;  */

void FUN_1019c8638(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_58;
  
  func_0x0001000d224c(&uStack_58);
  uVar1 = uStack_58;
  func_0x000107c614f0(uStack_58);
  puVar2 = &UNK_1104260f8;
  func_0x000107c613fc(&UNK_1104260f8,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = param_4;
  *(undefined8 *)(puVar2 + 0x18) = param_5;
  *(undefined8 *)(puVar2 + 0x20) = param_1;
  *(undefined8 *)(puVar2 + 0x28) = param_2;
  func_0x000107c6157c(param_5);
  func_0x000107c61434(param_1);
  func_0x000107c61434(param_2);
  func_0x00010090569c(0x1019c97d4,puVar2,uVar1);
  func_0x000107c615e8(uStack_58);
  func_0x000107c61574(puVar2);
  return;
}



/* Entry: 1019c86f8; end: 1019c89e3;  */

void FUN_1019c86f8(double param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9,
                  long param_10,long param_11,undefined8 param_12,code *param_13)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  long alStack_1a0 [2];
  double *pdStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  undefined8 uStack_168;
  byte abStack_158 [8];
  long lStack_150;
  undefined8 uStack_148;
  double dStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  double dStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  if ((param_2 != 0) && (param_3 == 0)) {
    lVar3 = param_2;
    func_0x000107c61174();
    lVar4 = param_4;
    func_0x000107c44fdc();
    func_0x000107c61180();
    if (lVar4 != 0) {
      lVar5 = lVar4;
      func_0x000107c5faec();
      func_0x000107c61170(lVar4);
      lVar4 = param_3;
      FUN_1019d16e8(lVar5,param_3);
      func_0x000107c6142c(param_3);
      func_0x000107c61174(param_5);
      func_0x000107c61174(param_4);
      FUN_1019cc684(&dStack_e0,lVar5,lVar4,lVar3,param_5,param_4,2);
      goto LAB_1019c875c;
    }
    func_0x000107c61170(lVar3);
  }
  uStack_90 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  lStack_d8 = 0;
  dStack_e0 = 0.0;
LAB_1019c875c:
  uStack_118 = uStack_b8;
  uStack_120 = uStack_c0;
  uStack_108 = uStack_a8;
  uStack_110 = uStack_b0;
  uStack_f8 = uStack_98;
  uStack_100 = uStack_a0;
  uStack_f0 = uStack_90;
  lStack_138 = lStack_d8;
  dStack_140 = dStack_e0;
  uStack_128 = uStack_c8;
  uStack_130 = uStack_d0;
  dVar6 = dStack_e0;
  func_0x000107c40fd4(param_6);
  dVar6 = (dVar6 - param_1) * 1000.0;
  if (0x7fefffffffffffff < (ulong)ABS(dVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1019c89dc);
    (*pcVar1)();
  }
  if (-9.223372036854778e+18 < dVar6) {
    if (dVar6 < 9.223372036854776e+18) {
      if ((param_2 == 0) || (lStack_d8 == 0)) {
        func_0x0001000d224c(alStack_1a0);
        if (alStack_1a0[0] != 0) {
          func_0x000107c502c0(alStack_1a0[0]);
          func_0x000107c615e8(alStack_1a0[0]);
        }
      }
      else {
        func_0x000107c61174(param_2);
        func_0x0001000d224c(alStack_1a0);
        if (alStack_1a0[0] != 0) {
          lVar3 = param_2;
          func_0x000107c3ac3c(param_2);
          func_0x000107c61180();
          func_0x000107c502c4(alStack_1a0[0]);
          func_0x000107c615e8(alStack_1a0[0]);
          func_0x000107c61170(lVar3);
        }
        func_0x000107c61170(param_2);
      }
      pdStack_190 = &dStack_140;
      uStack_168 = param_12;
      uVar2 = 0x112de6950;
      lStack_188 = param_9 + 0x10;
      lStack_180 = param_10 + 0x10;
      lStack_178 = param_4;
      lStack_170 = param_11 + 0x10;
      func_0x0001000285a8(0x112de6950,&UNK_10d9b11d8);
      func_0x000100087bd4(abStack_158,FUN_1019c94e4,alStack_1a0,uVar2);
      if ((abStack_158[0] & 1) == 0) {
        FUN_1019c9504(&dStack_e0);
        func_0x0001019c954c(lStack_150,uStack_148);
      }
      else {
        if (lStack_150 != 0) {
          (*param_13)(lStack_150,uStack_148);
          func_0x000107c6142c(uStack_148);
          func_0x000107c6142c(lStack_150);
        }
        FUN_1019c9504(&dStack_e0);
      }
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1019c89e4);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1019c89e0);
  (*pcVar1)();
}



/* Entry: 1019c89e4; end: 1019c8c7f;  */

void FUN_1019c89e4(long param_1,undefined8 *param_2,ulong *param_3,ulong *param_4,undefined8 param_5
                  ,long *param_6,long param_7)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auStack_188 [88];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [24];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  lVar4 = param_2[1];
  if (lVar4 == 0) {
    func_0x000107c61428(param_4,&uStack_130,0x21,0);
    FUN_1019c8dac();
    uVar6 = *param_4 & 0xffffffffffffff8;
    uVar5 = *(ulong *)(uVar6 + 0x10);
    if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar5) {
      uVar6 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
      FUN_1019c8fb0(uVar6,uVar5 + 1,1,*param_4,FUN_1019c698c,0x112de6240,&PTR_PTR_1126bb838);
      *param_4 = uVar6;
      uVar6 = uVar6 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar6 + 0x10) = uVar5 + 1;
    *(undefined8 *)(uVar6 + uVar5 * 8 + 0x20) = param_5;
    func_0x000107c614a8(&uStack_130);
    func_0x000107c61174(param_5);
  }
  else {
    uVar2 = *param_2;
    uStack_98 = param_2[7];
    uStack_a0 = param_2[6];
    uStack_88 = param_2[9];
    uStack_90 = param_2[8];
    uStack_80 = param_2[10];
    uStack_b8 = param_2[3];
    uStack_c0 = param_2[2];
    uStack_a8 = param_2[5];
    uStack_b0 = param_2[4];
    func_0x000107c61428(param_3,auStack_d8,0x21,0);
    uVar7 = *param_3;
    uStack_108 = param_2[5];
    uStack_110 = param_2[4];
    uStack_f8 = param_2[7];
    uStack_100 = param_2[6];
    uStack_e8 = param_2[9];
    uStack_f0 = param_2[8];
    uStack_e0 = param_2[10];
    uStack_128 = param_2[1];
    uStack_130 = *param_2;
    uStack_118 = param_2[3];
    uStack_120 = param_2[2];
    FUN_1019c5260(&uStack_130,auStack_188);
    uVar5 = uVar7;
    func_0x000107c61558();
    *param_3 = uVar7;
    uVar6 = uVar7;
    if ((uVar5 & 1) == 0) {
      uVar6 = 0;
      FUN_1019c90f8(0,*(long *)(uVar7 + 0x10) + 1,1,uVar7);
      *param_3 = uVar6;
    }
    uVar5 = *(ulong *)(uVar6 + 0x10);
    uVar7 = uVar6;
    if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar5) {
      uVar7 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
      FUN_1019c90f8(uVar7,uVar5 + 1,1,uVar6);
      *param_3 = uVar7;
    }
    *(ulong *)(uVar7 + 0x10) = uVar5 + 1;
    lVar3 = uVar7 + uVar5 * 0x58;
    *(undefined8 *)(lVar3 + 0x20) = uVar2;
    *(long *)(lVar3 + 0x28) = lVar4;
    *(undefined8 *)(lVar3 + 0x38) = uStack_b8;
    *(undefined8 *)(lVar3 + 0x30) = uStack_c0;
    *(undefined8 *)(lVar3 + 0x70) = uStack_80;
    *(undefined8 *)(lVar3 + 0x58) = uStack_98;
    *(undefined8 *)(lVar3 + 0x50) = uStack_a0;
    *(undefined8 *)(lVar3 + 0x68) = uStack_88;
    *(undefined8 *)(lVar3 + 0x60) = uStack_90;
    *(undefined8 *)(lVar3 + 0x48) = uStack_a8;
    *(undefined8 *)(lVar3 + 0x40) = uStack_b0;
    func_0x000107c614a8(auStack_d8);
  }
  func_0x000107c61428(param_6,&uStack_130,1,0);
  lVar4 = *param_6 + 1;
  if (!SCARRY8(*param_6,1)) {
    *param_6 = lVar4;
    if (lVar4 != param_7) {
      uVar6 = 0;
      uVar5 = 0;
    }
    else {
      func_0x000107c61428(param_3,auStack_188,0,0);
      uVar6 = *param_3;
      func_0x000107c61428(param_4,auStack_d8,0,0);
      uVar5 = *param_4;
      func_0x000107c61434(uVar6);
      func_0x000107c61434(uVar5);
    }
    *(bool *)param_1 = lVar4 == param_7;
    *(ulong *)(param_1 + 8) = uVar6;
    *(ulong *)(param_1 + 0x10) = uVar5;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1019c8c00);
  (*pcVar1)();
}



/* Entry: 1019c8c80; end: 1019c8cf7;  */

/* WARNING: Possible PIC construction at 0x0001019c8cdc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001019c8ce0) */

void FUN_1019c8c80(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1019c8cf8; end: 1019c8d5b;  */

void FUN_1019c8cf8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1019c8d5c; end: 1019c8d9f;  */

uint FUN_1019c8d5c(uint param_1)

{
  FUN_1019c95ac();
  return param_1 & 1;
}



/* Entry: 1019c8da0; end: 1019c8dab;  */

void FUN_1019c8da0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uStack_58;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x0001000d224c(&uStack_58,param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10));
  uVar2 = uStack_58;
  func_0x000107c614f0(uStack_58);
  puVar3 = &UNK_1104260f8;
  func_0x000107c613fc(&UNK_1104260f8,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar4;
  *(undefined8 *)(puVar3 + 0x20) = param_1;
  *(undefined8 *)(puVar3 + 0x28) = param_2;
  func_0x000107c6157c(uVar4);
  func_0x000107c61434(param_1);
  func_0x000107c61434(param_2);
  func_0x00010090569c(0x1019c97d4,puVar3,uVar2);
  func_0x000107c615e8(uStack_58);
  func_0x000107c61574(puVar3);
  return;
}



/* Entry: 1019c8dac; end: 1019c8e33;  */

void FUN_1019c8dac(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  
  uVar3 = *unaff_x20;
  uVar1 = uVar3;
  func_0x000107c61550();
  *unaff_x20 = uVar3;
  if ((((int)uVar1 == 0) || ((long)uVar3 < 0)) || ((uVar3 >> 0x3e & 1) != 0)) {
    if (uVar3 >> 0x3e == 0) {
      uVar1 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar1 = uVar3 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar3) {
        uVar1 = uVar3;
      }
      func_0x000107c60480(uVar1);
    }
    uVar2 = 0;
    FUN_1019c8fb0(0,uVar1 + 1,1,uVar3,FUN_1019c698c,0x112de6240,&PTR_PTR_1126bb838);
    *unaff_x20 = uVar2;
  }
  return;
}



/* Entry: 1019c8e34; end: 1019c8e4f;  */

ulong FUN_1019c8e34(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1019c90f8);
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
  func_0x000100ba06f4(uVar2,uVar4,FUN_1019c68cc);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1019c90f4);
      (*pcVar1)();
    }
    func_0x0001019c9340(0,uVar2,uVar3 + 0x20,param_4,0x112de6110,&PTR_PTR_1126b9f38);
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



/* Entry: 1019c8e50; end: 1019c8f93;  */

undefined * FUN_1019c8e50(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1019c8f94);
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
    puVar3 = (undefined *)0x112de6970;
    func_0x0001000285a8(0x112de6970,&UNK_10d9b11f0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x30) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112de6888;
    func_0x0001000285a8(0x112de6888,&UNK_10d9b1168);
    func_0x000107c6140c(puVar4,puVar1,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar7 * 0x30 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar7 * 0x30);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 1019c8f94; end: 1019c8faf;  */

ulong FUN_1019c8f94(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1019c90f8);
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
  func_0x000100ba06f4(uVar2,uVar4,FUN_1019c698c);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1019c90f4);
      (*pcVar1)();
    }
    func_0x0001019c9340(0,uVar2,uVar3 + 0x20,param_4,0x112de6240,&PTR_PTR_1126bb838);
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



/* Entry: 1019c8fb0; end: 1019c90f7;  */

ulong FUN_1019c8fb0(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1019c90f8);
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
  func_0x000100ba06f4(uVar2,uVar4,param_5);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1019c90f4);
      (*pcVar1)();
    }
    func_0x0001019c9340(0,uVar2,uVar3 + 0x20,param_4,param_6,param_7);
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



/* Entry: 1019c90f8; end: 1019c921b;  */

undefined * FUN_1019c90f8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1019c921c);
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
    puVar3 = (undefined *)0x112de6960;
    func_0x0001000285a8(0x112de6960,&UNK_10d9b1460);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x58) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar4,puVar1,uVar6,&UNK_110427088);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x58 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar6 * 0x58);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 1019c921c; end: 1019c945b;  */

long FUN_1019c921c(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1019c933c);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1019c9340);
        (*pcVar3)();
      }
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        uVar4 = 0x112de6288;
        func_0x0001000285a8(0x112de6288,&UNK_10d9b0f70);
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0x112de6288;
      func_0x0001000285a8(0x112de6288,&UNK_10d9b0f70);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1019c9338);
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



/* Entry: 1019c945c; end: 1019c9483;  */

void FUN_1019c945c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))
            (*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
             *(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 1019c9484; end: 1019c94c7;  */

void FUN_1019c9484(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_1019c86f8(*(undefined8 *)(unaff_x20 + 0x28),param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70));
  return;
}



/* Entry: 1019c94c8; end: 1019c94e3;  */

void FUN_1019c94c8(long param_1,long param_2)

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



/* Entry: 1019c94e4; end: 1019c9503;  */

void FUN_1019c94e4(void)

{
  long unaff_x20;
  
  FUN_1019c89e4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  return;
}



/* Entry: 1019c9504; end: 1019c9577;  */

undefined8 FUN_1019c9504(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112de6958;
  func_0x0001000285a8(0x112de6958,&UNK_10d9b11e0);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1019c9578; end: 1019c95ab;  */

void FUN_1019c9578(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1019c95ac; end: 1019c978f;  */

void FUN_1019c95ac(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uStack_48;
  
  func_0x0001000d224c(&uStack_48);
  uVar2 = uStack_48;
  if (uStack_48 != 0) {
    uVar1 = uStack_48;
    func_0x000107c418e0();
    func_0x000107c615e8(uVar2);
    if (((uVar1 & 1) != 0) && (uVar2 = param_1, func_0x000107c5d0f0(), uVar2 == 7)) {
      func_0x0001000d224c(&uStack_48);
      uVar2 = uStack_48;
      if (uStack_48 != 0) {
        uVar1 = uStack_48;
        func_0x000107c418dc();
        func_0x000107c615e8(uVar2);
        if ((uVar1 & 1) != 0) {
          uVar2 = param_1;
          func_0x000107c5beac();
          func_0x000107c61180();
          if (uVar2 != 0) {
            uVar3 = 0;
            FUN_1019c9790(0,0x112de6968,&PTR_PTR_1126bb840);
            uVar1 = uVar2;
            func_0x000107c5fc54();
            func_0x000107c61170(uVar2);
            uVar2 = uVar1;
            FUN_1019ce2a4();
            func_0x000107c6142c(uVar1);
            param_2 = uVar3;
            if (uVar2 != 0) {
              uVar1 = uVar2;
              func_0x000107c5d7e8();
              func_0x000107c61180();
              func_0x000107c61170(uVar2);
              param_2 = uVar3;
              if (uVar1 != 0) {
                uVar2 = uVar1;
                func_0x000107c5faec();
                param_2 = uVar3;
                func_0x000107c61170(uVar1);
                func_0x000107c6142c(uVar3);
                uVar2 = uVar2 & 0xffffffffffff;
                if ((uVar3 & 0x2000000000000000) != 0) {
                  uVar2 = uVar3 >> 0x38 & 0xf;
                }
                if (uVar2 != 0) {
                  return;
                }
              }
            }
          }
        }
      }
      func_0x000107c44fdc();
      func_0x000107c61180();
      if (param_1 != 0) {
        uVar2 = param_1;
        func_0x000107c5faec();
        uVar2 = uVar2 & 0xffffffffffff;
        if ((param_2 & 0x2000000000000000) != 0) {
          uVar2 = param_2 >> 0x38 & 0xf;
        }
        if (uVar2 == 0) {
          func_0x000107c6142c(param_2);
          func_0x000107c61170(param_1);
        }
        else {
          func_0x0001000d224c(&uStack_48);
          func_0x000107c6142c(param_2);
          if (uStack_48 == 0) {
            func_0x000107c61170(param_1);
          }
          else {
            func_0x000107c418d8(uStack_48);
            func_0x000107c615e8(uStack_48);
            func_0x000107c61170(param_1);
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1019c9790; end: 1019c97cf;  */

void FUN_1019c9790(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1019c97d0; end: 1019c97e7;  */

void FUN_1019c97d0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))
            (*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
             *(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 1019c97e8; end: 1019c9803;  */

bool FUN_1019c97e8(long param_1)

{
  func_0x000107c50428();
  return param_1 == 6;
}



/* Entry: 1019c9804; end: 1019c98cf;  */

void FUN_1019c9804(undefined8 *param_1,long param_2)

{
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  uStack_38 = param_1[5];
  uStack_40 = param_1[4];
  uStack_30 = *(undefined1 *)(param_1 + 6);
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_1019c9a7c(&uStack_60);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 1019c98d0; end: 1019c9a7b;  */

void FUN_1019c98d0(undefined8 *param_1,long param_2)

{
  undefined1 auStack_178 [88];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 uStack_c0;
  undefined1 auStack_b8 [24];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  char cStack_40;
  
  uStack_58 = param_1[9];
  uStack_60 = param_1[8];
  uStack_48 = param_1[0xb];
  uStack_50 = param_1[10];
  cStack_40 = *(char *)(param_1 + 0xc);
  uStack_98 = param_1[1];
  uStack_a0 = *param_1;
  uStack_88 = param_1[3];
  uStack_90 = param_1[2];
  uStack_78 = param_1[5];
  uStack_80 = param_1[4];
  uStack_68 = param_1[7];
  uStack_70 = param_1[6];
  func_0x000107c61428(param_2 + 0x10,auStack_b8,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    if (cStack_40 == '\x01') {
      func_0x000107c61574(param_2);
    }
    else {
      uStack_d8 = param_1[9];
      uStack_e0 = param_1[8];
      uStack_c8 = param_1[0xb];
      uStack_d0 = param_1[10];
      uStack_f8 = param_1[5];
      uStack_100 = param_1[4];
      uStack_e8 = param_1[7];
      uStack_f0 = param_1[6];
      uStack_c0 = *(undefined1 *)(param_1 + 0xc);
      uStack_118 = param_1[1];
      uStack_120 = *param_1;
      uStack_108 = param_1[3];
      uStack_110 = param_1[2];
      FUN_1019c5260(&uStack_120,auStack_178);
      FUN_1019ca30c(param_1);
      func_0x000107c61574(param_2);
      FUN_1019cab00(&uStack_a0,0x112de6b70,&UNK_10d9b1290);
    }
  }
  return;
}



/* Entry: 1019c9a7c; end: 1019c9e03;  */

void FUN_1019c9a7c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *apuStack_140 [11];
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *apuStack_70 [2];
  
  uVar2 = param_1[2];
  puVar3 = (undefined *)param_1[3];
  puVar1 = (undefined *)param_1[4];
  if (*(char *)(param_1 + 6) == '\x01') {
    uVar5 = param_1[5];
    uStack_d8 = param_1[1];
    puStack_e0 = (undefined *)*param_1;
    func_0x000107c61434(param_1[1]);
    func_0x000107c61174(uVar2);
    func_0x000107c61434(puVar3);
    func_0x000107c61434(puVar1);
    func_0x000107c614b0(uVar5);
    func_0x000100bcb1dc(&puStack_e0);
    func_0x000107c61170(uVar2);
    apuStack_140[0] = puVar3;
    FUN_1019cab00(apuStack_140,0x112de64a0,&UNK_10d9b0ef0);
    puStack_80 = puVar1;
    FUN_1019cab00(&puStack_80,0x112de64a8,&UNK_10d9b0ef8);
    func_0x000107c614ac(uVar5);
    return;
  }
  uStack_78 = param_1[1];
  puStack_80 = (undefined *)*param_1;
  lVar6 = *(long *)(puVar3 + 0x10);
  apuStack_70[0] = puVar3;
  if (lVar6 != 0) {
    puVar4 = (undefined8 *)(puVar3 + 0x20);
    func_0x0001019cab40(param_1,&puStack_e0,0x112de6b78,&UNK_10d9b12a0);
    func_0x0001019cab40(apuStack_70,&puStack_e0,0x112de64a0,&UNK_10d9b0ef0);
    do {
      lVar6 = lVar6 + -1;
      uStack_a8 = puVar4[7];
      uStack_b0 = puVar4[6];
      lVar8 = puVar4[9];
      lVar7 = puVar4[8];
      uStack_90 = puVar4[10];
      uStack_b8 = puVar4[5];
      uStack_c0 = puVar4[4];
      uStack_d8 = puVar4[1];
      puStack_e0 = (undefined *)*puVar4;
      uStack_c8 = puVar4[3];
      uStack_d0 = puVar4[2];
      lStack_a0 = lVar7;
      lStack_98 = lVar8;
      if ((byte)uStack_b8 - 2 < 2) {
        if (lVar8 == 0) goto LAB_1019c9d10;
        puVar3 = PTR_PTR_1126dfa70;
        func_0x000107c61168();
        FUN_1019c5260(&puStack_e0,apuStack_140);
        func_0x000107c61174(lVar8);
        func_0x000107c5e3b4();
        func_0x000107c61180();
        apuStack_140[0] = puVar3;
        func_0x000100087c34(apuStack_140);
        FUN_1019c6544(&puStack_e0);
        func_0x000107c61170(puVar3);
LAB_1019c9d0c:
        func_0x000107c61170(lVar8);
      }
      else if ((byte)uStack_b8 == 0) {
        if (lVar7 != 0) {
          puVar3 = PTR_PTR_1126dfa88;
          func_0x000107c61168();
          FUN_1019c5260(&puStack_e0,apuStack_140);
          func_0x000107c61174(lVar7);
          func_0x000107c5e3c4();
          func_0x000107c61180();
          lVar8 = lVar7;
LAB_1019c9cf4:
          apuStack_140[0] = puVar3;
          func_0x000100087c34(apuStack_140);
          FUN_1019c6544(&puStack_e0);
          func_0x000107c61170(puVar3);
          goto LAB_1019c9d0c;
        }
      }
      else if (lVar7 != 0) {
        puVar3 = PTR_PTR_1126dfa78;
        func_0x000107c61168();
        FUN_1019c5260(&puStack_e0,apuStack_140);
        func_0x000107c61174(lVar7);
        func_0x000107c5e3cc();
        func_0x000107c61180();
        lVar8 = lVar7;
        goto LAB_1019c9cf4;
      }
LAB_1019c9d10:
      if (lVar6 == 0) goto LAB_1019c9d20;
      puVar4 = puVar4 + 0xb;
    } while( true );
  }
  func_0x000107c61434(param_1[1]);
  func_0x000107c61174(uVar2);
  func_0x000107c61434(puVar3);
  func_0x000107c61434(puVar1);
LAB_1019c9d60:
  puVar3 = PTR_PTR_1126dfb10;
  func_0x000107c61168();
  func_0x000107c5e3d0();
  func_0x000107c61180();
  puStack_e8 = puVar3;
  func_0x000100087c34(&puStack_e8);
  uStack_d8 = uStack_78;
  puStack_e0 = puStack_80;
  func_0x000100bcb1dc(&puStack_e0);
  func_0x000107c61170(uVar2);
  FUN_1019cab00(apuStack_70,0x112de64a0,&UNK_10d9b0ef0);
  apuStack_140[0] = puVar1;
  FUN_1019cab00(apuStack_140,0x112de64a8,&UNK_10d9b0ef8);
  func_0x000107c61170(puVar3);
  return;
LAB_1019c9d20:
  FUN_1019cab00(apuStack_70,0x112de64a0,&UNK_10d9b0ef0);
  goto LAB_1019c9d60;
}



/* Entry: 1019c9e04; end: 1019c9ee7;  */

void FUN_1019c9e04(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_48;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0x30) == '\x01') {
    func_0x000107c61174(uVar2);
    func_0x000107c5ed2c(uVar3);
    func_0x000107c61180();
    uVar4 = uVar3;
    func_0x000107c5ed2c();
    func_0x000107c61170(uVar3);
  }
  else {
    FUN_1019ca76c(*(undefined8 *)(param_1 + 0x18),uVar3);
    func_0x000107c61174(uVar2);
    uVar4 = 0;
    uVar3 = 0;
  }
  puVar1 = PTR_PTR_1126dfb10;
  func_0x000107c61168();
  func_0x000107c41be8();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  puStack_48 = puVar1;
  func_0x000100087c34(&puStack_48);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 1019c9ee8; end: 1019ca0f3;  */

void FUN_1019c9ee8(undefined *param_1,long param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined *puStack_60;
  undefined *puStack_58;
  
  ppuVar5 = &puStack_60;
  ppuVar1 = &puStack_60;
  if ((byte)param_1[0x28] - 2 < 2) {
    FUN_1019c6f7c();
  }
  else {
    if ((byte)param_1[0x28] == 0) {
      puStack_58 = *(undefined **)(param_1 + 0x40);
      if (puStack_58 == (undefined *)0x0 || param_2 == 0) {
        return;
      }
      func_0x0001019cab40(&puStack_58,&puStack_60,0x112d3b7d8,&UNK_10d920690);
      lVar6 = param_2;
      func_0x000107c615f0();
      func_0x000107c44314();
      if (lVar6 != 0) {
        func_0x000107c615e8(param_2);
LAB_1019c9f78:
        func_0x0001019cab00(&puStack_58,0x112d3b7d8,&UNK_10d920690);
        return;
      }
      lVar6 = param_2;
      func_0x000107c30a1c();
      func_0x000107c61180();
      if (lVar6 == 0) {
        lVar6 = 0;
        lVar4 = 0;
        ppuVar5 = (undefined **)0xf000000000000000;
      }
      else {
        lVar4 = lVar6;
        func_0x000107c5ee30();
        func_0x000107c61170(lVar6);
        func_0x00010006c00c(lVar4,ppuVar5);
        lVar6 = lVar4;
        func_0x000107c5ee20(lVar4,ppuVar5);
        func_0x00010006c090(lVar4,ppuVar5);
      }
      puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x000107c61168();
      func_0x000107c51770();
      func_0x000107c61180();
      func_0x000107c61170(lVar6);
      func_0x0001000b44c0(lVar4,ppuVar5);
      func_0x000107c615e8(param_2);
      if (puVar2 == (undefined *)0x0) goto LAB_1019c9f78;
      puVar3 = PTR_PTR_1126af5d0;
      func_0x000107c61168(PTR_PTR_1126af5d0);
      func_0x000107c5c3c8();
      func_0x000107c61180();
      param_1 = PTR_PTR_1126dfa88;
      func_0x000107c61168();
      func_0x000107c41be0();
      func_0x000107c61180();
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar2);
      func_0x0001019cab00(&puStack_58,0x112d3b7d8,&UNK_10d920690);
      puStack_60 = param_1;
      goto LAB_1019c9fac;
    }
    FUN_1019c6d7c();
  }
  if (param_1 == (undefined *)0x0) {
    return;
  }
  ppuVar1 = &puStack_58;
  puStack_58 = param_1;
LAB_1019c9fac:
  func_0x000100087c34(ppuVar1);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1019ca0f4; end: 1019ca30b;  */

void FUN_1019ca0f4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_48;
  
  lVar3 = *(long *)(param_1 + 0x40);
  if (*(byte *)(param_1 + 0x28) - 2 < 2) {
    lVar3 = *(long *)(param_1 + 0x48);
    if (lVar3 == 0) {
      return;
    }
    puVar1 = PTR_PTR_1126af5d0;
    func_0x000107c61168(PTR_PTR_1126af5d0);
    uVar4 = *(undefined8 *)(param_1 + 0x58);
    func_0x000107c61174(lVar3);
    func_0x000107c5ed2c(uVar4);
    func_0x000107c42d78(puVar1,param_2,uVar4);
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    puVar2 = PTR_PTR_1126dfa70;
    func_0x000107c61168();
    func_0x000107c41bd8();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    func_0x000107c61170(puVar1);
    puStack_48 = puVar2;
    func_0x000100087c34(&puStack_48);
  }
  else {
    if (*(byte *)(param_1 + 0x28) == 0) {
      if (lVar3 == 0) {
        return;
      }
      puVar1 = PTR_PTR_1126af5d0;
      func_0x000107c61168(PTR_PTR_1126af5d0);
      uVar4 = *(undefined8 *)(param_1 + 0x58);
      func_0x000107c61174(lVar3);
      func_0x000107c5ed2c(uVar4);
      func_0x000107c42d78(puVar1,param_2,uVar4);
      func_0x000107c61180();
      func_0x000107c61170(uVar4);
      puVar2 = PTR_PTR_1126dfa88;
      func_0x000107c61168();
      func_0x000107c41be0();
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      func_0x000107c61170(puVar1);
    }
    else {
      if (lVar3 == 0) {
        return;
      }
      puVar1 = PTR_PTR_1126af5d0;
      func_0x000107c61168(PTR_PTR_1126af5d0);
      uVar4 = *(undefined8 *)(param_1 + 0x58);
      func_0x000107c61174(lVar3);
      func_0x000107c5ed2c(uVar4);
      func_0x000107c42d78(puVar1,param_2,uVar4);
      func_0x000107c61180();
      func_0x000107c61170(uVar4);
      puVar2 = PTR_PTR_1126dfa78;
      func_0x000107c61168();
      func_0x000107c41be4();
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      func_0x000107c61170(puVar1);
    }
    puStack_48 = puVar2;
    func_0x000100087c34(&puStack_48);
  }
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 1019ca30c; end: 1019ca43b;  */

void FUN_1019ca30c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_38;
  
  if (*(byte *)(param_1 + 0x28) - 2 < 2) {
    lVar2 = *(long *)(param_1 + 0x48);
    if (lVar2 == 0) {
      return;
    }
    puVar1 = PTR_PTR_1126dfa70;
    func_0x000107c61168();
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    func_0x000107c61174(lVar2);
    func_0x000107c5e3b4(puVar1,param_2,lVar2,uVar3);
    func_0x000107c61180();
  }
  else if (*(byte *)(param_1 + 0x28) == 0) {
    lVar2 = *(long *)(param_1 + 0x40);
    if (lVar2 == 0) {
      return;
    }
    puVar1 = PTR_PTR_1126dfa88;
    func_0x000107c61168();
    func_0x000107c61174(lVar2);
    func_0x000107c5e3c4(puVar1,param_2,lVar2);
    func_0x000107c61180();
  }
  else {
    lVar2 = *(long *)(param_1 + 0x40);
    if (lVar2 == 0) {
      return;
    }
    puVar1 = PTR_PTR_1126dfa78;
    func_0x000107c61168();
    func_0x000107c61174(lVar2);
    func_0x000107c5e3cc(puVar1,param_2,lVar2);
    func_0x000107c61180();
  }
  puStack_38 = puVar1;
  func_0x000100087c34(&puStack_38);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(lVar2);
  return;
}



/* Entry: 1019ca43c; end: 1019ca47f;  */

void FUN_1019ca43c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1019ca480; end: 1019ca4bb;  */

/* WARNING: Possible PIC construction at 0x0001019ca580: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019ca610: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019ca6a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001019ca614) */
/* WARNING: Removing unreachable block (ram,0x0001019ca584) */
/* WARNING: Removing unreachable block (ram,0x0001019ca6a4) */

void FUN_1019ca480(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined *puVar3;
  code *pcVar4;
  code *pcVar5;
  undefined *puVar6;
  long lVar7;
  long *unaff_x20;
  
  lVar7 = *unaff_x20;
  plVar2 = *(long **)(param_1 + 0x18);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,plVar2);
  (**(code **)(lVar1 + 0x18))(plVar2,lVar1);
  puVar3 = &UNK_110426150;
  func_0x000107c613fc(&UNK_110426150,0x18,7);
  func_0x000107c61644(puVar3 + 0x10,lVar7);
  pcVar4 = FUN_1019ca74c;
  puVar6 = puVar3;
  (**(code **)(*plVar2 + 0x60))(FUN_1019ca74c);
  func_0x000107c61574(plVar2);
  func_0x000107c61574(puVar3);
  pcVar5 = pcVar4;
  func_0x000107c614f0(pcVar4);
  (**(code **)(puVar6 + 0x10))(*(undefined8 *)(lVar7 + 0x30),pcVar5,puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(pcVar4);
  return;
}



/* Entry: 1019ca4bc; end: 1019ca74b;  */

/* WARNING: Possible PIC construction at 0x0001019ca580: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019ca610: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019ca6a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001019ca614) */
/* WARNING: Removing unreachable block (ram,0x0001019ca584) */
/* WARNING: Removing unreachable block (ram,0x0001019ca6a4) */

void FUN_1019ca4bc(undefined8 param_1,long param_2,long *param_3,long param_4)

{
  undefined *puVar1;
  code *pcVar2;
  code *pcVar3;
  undefined *puVar4;
  
  (**(code **)(param_4 + 0x18))(param_3,param_4);
  puVar1 = &UNK_110426150;
  func_0x000107c613fc(&UNK_110426150,0x18,7);
  func_0x000107c61644(puVar1 + 0x10,param_2);
  pcVar2 = FUN_1019ca74c;
  puVar4 = puVar1;
  (**(code **)(*param_3 + 0x60))(FUN_1019ca74c);
  func_0x000107c61574(param_3);
  func_0x000107c61574(puVar1);
  pcVar3 = pcVar2;
  func_0x000107c614f0(pcVar2);
  (**(code **)(puVar4 + 0x10))(*(undefined8 *)(param_2 + 0x30),pcVar3,puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(pcVar2);
  return;
}



/* Entry: 1019ca74c; end: 1019ca76b;  */

void FUN_1019ca74c(undefined8 *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  uStack_38 = param_1[5];
  uStack_40 = param_1[4];
  uStack_30 = *(undefined1 *)(param_1 + 6);
  func_0x000107c61428(unaff_x20 + 0x10,auStack_78,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_1019c9a7c(&uStack_60);
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 1019ca76c; end: 1019caaff;  */

void FUN_1019ca76c(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lStack_150;
  undefined8 **ppuStack_140;
  undefined8 *apuStack_128 [11];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long alStack_78 [3];
  
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 != 0) {
    puVar5 = (undefined8 *)(param_1 + 0x20);
    do {
      uStack_a8 = puVar5[5];
      uVar10 = puVar5[4];
      uStack_98 = puVar5[7];
      uStack_a0 = puVar5[6];
      uStack_88 = puVar5[9];
      lStack_90 = puVar5[8];
      uStack_80 = puVar5[10];
      uStack_c8 = puVar5[1];
      uStack_d0 = *puVar5;
      uVar9 = puVar5[3];
      lVar8 = puVar5[2];
      if (*(long *)(param_2 + 0x10) != 0) {
        lStack_c0 = lVar8;
        uStack_b8 = uVar9;
        uStack_b0 = uVar10;
        FUN_1019c5260(&uStack_d0,apuStack_128);
        func_0x000107c61434(uVar9);
        func_0x000107c61434(param_2);
        uVar4 = uVar9;
        FUN_1019c69fc(lVar8,uVar9,uVar10);
        if ((uVar4 & 1) == 0) {
          FUN_1019c6544(&uStack_d0);
          func_0x000107c6142c(uVar9);
          func_0x000107c6142c(param_2);
        }
        else {
          lVar8 = *(long *)(*(long *)(param_2 + 0x38) + lVar8 * 8);
          func_0x000107c615f0(lVar8);
          func_0x000107c6142c(param_2);
          func_0x000107c6142c(uVar9);
          if ((byte)uStack_a8 - 2 < 2) {
            func_0x000107c615f0(lVar8);
            puVar1 = &uStack_d0;
            FUN_1019c6f7c(puVar1,lVar8);
joined_r0x0001019ca938:
            if (puVar1 == (undefined8 *)0x0) {
LAB_1019caac4:
              func_0x000107c615e8(lVar8);
LAB_1019caacc:
              FUN_1019c6544(&uStack_d0);
            }
            else {
              apuStack_128[0] = puVar1;
              func_0x000100087c34(apuStack_128);
              func_0x000107c615e8(lVar8);
              FUN_1019c6544(&uStack_d0);
              func_0x000107c61170(puVar1);
            }
          }
          else {
            if ((byte)uStack_a8 != 0) {
              func_0x000107c615f0(lVar8);
              puVar1 = &uStack_d0;
              FUN_1019c6d7c(puVar1,lVar8);
              goto joined_r0x0001019ca938;
            }
            alStack_78[0] = lStack_90;
            if (lStack_90 == 0) goto LAB_1019caacc;
            func_0x000107c615f4(lVar8,2);
            ppuStack_140 = apuStack_128;
            func_0x0001019cab40(alStack_78,ppuStack_140,0x112d3b7d8,&UNK_10d920690);
            lVar6 = lVar8;
            func_0x000107c44314();
            if (lVar6 != 0) {
              func_0x0001019cab00(alStack_78,0x112d3b7d8,&UNK_10d920690);
              func_0x000107c615e8(lVar8);
              FUN_1019c6544(&uStack_d0);
              func_0x000107c615ec(lVar8,2);
              goto LAB_1019ca7dc;
            }
            lVar6 = lVar8;
            func_0x000107c30a1c();
            func_0x000107c61180();
            if (lVar6 == 0) {
              lVar6 = 0;
              lStack_150 = 0;
              ppuStack_140 = (undefined8 **)0xf000000000000000;
            }
            else {
              lStack_150 = lVar6;
              func_0x000107c5ee30();
              func_0x000107c61170(lVar6);
              func_0x00010006c00c(lStack_150,ppuStack_140);
              lVar6 = lStack_150;
              func_0x000107c5ee20(lStack_150,ppuStack_140);
              func_0x00010006c090(lStack_150,ppuStack_140);
            }
            puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
            func_0x000107c61168();
            func_0x000107c51770();
            func_0x000107c61180();
            func_0x000107c61170(lVar6);
            func_0x0001000b44c0(lStack_150,ppuStack_140);
            func_0x000107c615e8(lVar8);
            if (puVar2 == (undefined *)0x0) {
              func_0x0001019cab00(alStack_78,0x112d3b7d8,&UNK_10d920690);
              goto LAB_1019caac4;
            }
            puVar3 = PTR_PTR_1126af5d0;
            func_0x000107c61168(PTR_PTR_1126af5d0);
            func_0x000107c5c3c8();
            func_0x000107c61180();
            puVar1 = (undefined8 *)PTR_PTR_1126dfa88;
            func_0x000107c61168();
            func_0x000107c41be0();
            func_0x000107c61180();
            func_0x000107c61170(puVar3);
            func_0x000107c61170(puVar2);
            func_0x0001019cab00(alStack_78,0x112d3b7d8,&UNK_10d920690);
            apuStack_128[0] = puVar1;
            func_0x000100087c34(apuStack_128);
            func_0x000107c615e8(lVar8);
            FUN_1019c6544(&uStack_d0);
            func_0x000107c61170(puVar1);
          }
          func_0x000107c615e8(lVar8);
        }
      }
LAB_1019ca7dc:
      puVar5 = puVar5 + 0xb;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}



/* Entry: 1019cab00; end: 1019cab87;  */

undefined8 FUN_1019cab00(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1019cab88; end: 1019cad43;  */

undefined * FUN_1019cab88(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uStack_70;
  
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 != 0) {
    func_0x0001019c1cc4(0,lVar7,0);
    puVar10 = (undefined8 *)(param_1 + 0x70);
    do {
      uVar8 = puVar10[-9];
      uVar9 = puVar10[-7];
      lVar1 = puVar10[-3];
      uVar5 = puVar10[-2];
      uStack_70 = puVar10[-1];
      uVar3 = *puVar10;
      if (lVar1 == 0) {
        func_0x000107c61174();
        func_0x000107c61174(uVar3);
        func_0x000107c61174();
        func_0x000107c61434(uVar8);
        func_0x000107c61434(uVar9);
        func_0x000107c61174(uVar5);
        uVar11 = 0;
      }
      else {
        uVar11 = puVar10[-4];
        func_0x000107c61174();
        func_0x000107c61174(uVar3);
        func_0x000107c61174();
        func_0x000107c61434(uVar8);
        func_0x000107c61434(uVar9);
        func_0x000107c61434(lVar1);
        func_0x000107c61174(uVar5);
        func_0x000107c5fadc(uVar11,lVar1);
      }
      puVar6 = PTR_PTR_1126b9f28;
      func_0x000107c610f8();
      func_0x000107c460c8();
      func_0x000107c61170(uStack_70);
      func_0x000107c61170(uVar5);
      func_0x000107c6142c(lVar1);
      func_0x000107c6142c(uVar9);
      func_0x000107c6142c(uVar8);
      func_0x000107c61170(uVar3);
      func_0x000107c61170(uVar3);
      func_0x000107c61170(uVar11);
      uVar2 = *(ulong *)(puVar4 + 0x10);
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar2) {
        func_0x0001019c1cc4(1 < *(ulong *)(puVar4 + 0x18),uVar2 + 1,1);
      }
      puVar10 = puVar10 + 0xb;
      *(ulong *)(puVar4 + 0x10) = uVar2 + 1;
      *(undefined **)(puVar4 + uVar2 * 8 + 0x20) = puVar6;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return puVar4;
}



/* Entry: 1019cad44; end: 1019cadbb;  */

long FUN_1019cad44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  func_0x000100737120(param_1,unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x38) = param_2;
  *(undefined8 *)(unaff_x20 + 0x40) = param_3;
  *(undefined8 *)(unaff_x20 + 0x48) = param_4;
  *(undefined8 *)(unaff_x20 + 0x50) = param_5;
  *(undefined8 *)(unaff_x20 + 0x58) = param_6;
  return unaff_x20;
}



/* Entry: 1019cadbc; end: 1019cb557;  */

undefined1  [16] FUN_1019cadbc(long param_1,ulong param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  code *pcVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 auVar14 [16];
  undefined *puStack_310;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined *puStack_2e8;
  undefined **ppuStack_2e0;
  undefined1 auStack_2a8 [24];
  undefined8 uStack_290;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar3 = param_1;
  uVar12 = param_2;
  func_0x000107c3e990();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = lVar3;
    func_0x000107c5faec();
    func_0x000107c61170(lVar3);
    uVar13 = uVar12;
    func_0x000107c5fb5c(lVar4,uVar12);
    func_0x000107c6142c(uVar12);
    if ((0 < lVar4) && (func_0x0001000d224c(&lStack_c8), lStack_c8 != 0)) {
      lVar3 = lStack_c8;
      func_0x000107c3ea68();
      func_0x000107c61180();
      func_0x000107c615e8(lStack_c8);
      if (lVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x1019cb42c);
        (*pcVar11)();
      }
      lVar4 = lVar3;
      func_0x000107c3e978();
      func_0x000107c61180();
      func_0x000107c615e8(lVar3);
      if (lVar4 != 0) {
        lVar3 = lVar4;
        func_0x000107c5faec();
        func_0x000107c61170(lVar4);
        func_0x000107c5fb5c(lVar3,uVar13);
        func_0x000107c6142c(uVar13);
        if (0 < lVar3) {
          FUN_1019ce6e8(&lStack_280,param_1);
          lStack_c8 = lStack_280;
          lStack_c0 = lStack_278;
          uStack_b8 = uStack_270;
          uStack_b0 = uStack_268;
          uStack_a8 = uStack_260;
          uStack_a0 = uStack_258;
          uStack_98 = uStack_250;
          uStack_90 = uStack_248;
          uStack_88 = uStack_240;
          uStack_80 = uStack_238;
          uStack_78 = uStack_230;
          goto joined_r0x0001019caef8;
        }
      }
    }
  }
  FUN_1019ceccc(&lStack_280,param_1);
  lStack_c8 = lStack_280;
  lStack_c0 = lStack_278;
  uStack_b8 = uStack_270;
  uStack_b0 = uStack_268;
  uStack_a8 = uStack_260;
  uStack_a0 = uStack_258;
  uStack_98 = uStack_250;
  uStack_90 = uStack_248;
  uStack_88 = uStack_240;
  uStack_80 = uStack_238;
  uStack_78 = uStack_230;
joined_r0x0001019caef8:
  puStack_310 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lStack_c0 != 0) {
    FUN_1019c5260(&lStack_c8,&uStack_120);
    puVar9 = (undefined *)0x0;
    FUN_1019c90f8(0,1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
    uVar12 = *(ulong *)(puVar9 + 0x10);
    puStack_310 = puVar9;
    if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar12) {
      puStack_310 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
      FUN_1019c90f8(puStack_310,uVar12 + 1,1,puVar9);
    }
    *(ulong *)(puStack_310 + 0x10) = uVar12 + 1;
    *(long *)(puStack_310 + uVar12 * 0x58 + 0x28) = lStack_c0;
    *(long *)(puStack_310 + uVar12 * 0x58 + 0x20) = lStack_c8;
    *(undefined8 *)(puStack_310 + uVar12 * 0x58 + 0x38) = uStack_b0;
    *(undefined8 *)(puStack_310 + uVar12 * 0x58 + 0x30) = uStack_b8;
    *(undefined8 *)(puStack_310 + uVar12 * 0x58 + 0x70) = uStack_78;
    *(undefined8 *)(puStack_310 + uVar12 * 0x58 + 0x58) = uStack_90;
    *(undefined8 *)(puStack_310 + uVar12 * 0x58 + 0x50) = uStack_98;
    *(undefined8 *)(puStack_310 + uVar12 * 0x58 + 0x68) = uStack_80;
    *(undefined8 *)(puStack_310 + uVar12 * 0x58 + 0x60) = uStack_88;
    *(undefined8 *)(puStack_310 + uVar12 * 0x58 + 0x48) = uStack_a0;
    *(undefined8 *)(puStack_310 + uVar12 * 0x58 + 0x40) = uStack_a8;
    FUN_1019cba34(&lStack_280,0x112de6958,&UNK_10d9b11e0);
  }
  FUN_1019ceaf8(&uStack_228,param_1);
  if (lStack_220 != 0) {
    uStack_120 = uStack_228;
    lStack_118 = lStack_220;
    uStack_e8 = uStack_1f0;
    uStack_f0 = uStack_1f8;
    uStack_d8 = uStack_1e0;
    uStack_e0 = uStack_1e8;
    uStack_d0 = uStack_1d8;
    uStack_108 = uStack_210;
    uStack_110 = uStack_218;
    uStack_f8 = uStack_200;
    uStack_100 = uStack_208;
    FUN_1019c5260(&uStack_120,&uStack_178);
    puVar9 = puStack_310;
    func_0x000107c61558();
    if (((ulong)puVar9 & 1) == 0) {
      plVar1 = (long *)(puStack_310 + 0x10);
      puStack_310 = (undefined *)0x0;
      FUN_1019c90f8(0,*plVar1 + 1,1);
    }
    uVar12 = *(ulong *)(puStack_310 + 0x10);
    if (*(ulong *)(puStack_310 + 0x18) >> 1 <= uVar12) {
      puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puStack_310 + 0x18));
      FUN_1019c90f8(puVar9,uVar12 + 1,1,puStack_310);
      puStack_310 = puVar9;
    }
    *(ulong *)(puStack_310 + 0x10) = uVar12 + 1;
    *(long *)(puStack_310 + uVar12 * 0x58 + 0x28) = lStack_118;
    *(undefined8 *)(puStack_310 + uVar12 * 0x58 + 0x20) = uStack_120;
    *(undefined8 *)(puStack_310 + uVar12 * 0x58 + 0x38) = uStack_108;
    *(undefined8 *)(puStack_310 + uVar12 * 0x58 + 0x30) = uStack_110;
    *(undefined8 *)(puStack_310 + uVar12 * 0x58 + 0x70) = uStack_d0;
    *(undefined8 *)(puStack_310 + uVar12 * 0x58 + 0x58) = uStack_e8;
    *(undefined8 *)(puStack_310 + uVar12 * 0x58 + 0x50) = uStack_f0;
    *(undefined8 *)(puStack_310 + uVar12 * 0x58 + 0x68) = uStack_d8;
    *(undefined8 *)(puStack_310 + uVar12 * 0x58 + 0x60) = uStack_e0;
    *(undefined8 *)(puStack_310 + uVar12 * 0x58 + 0x48) = uStack_f8;
    *(undefined8 *)(puStack_310 + uVar12 * 0x58 + 0x40) = uStack_100;
    FUN_1019cba34(&uStack_228,0x112de6958,&UNK_10d9b11e0);
  }
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    if (param_2 >> 0x3e == 0) {
      uVar12 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar12 = param_2;
      if (-1 < (long)param_2) {
        uVar12 = param_2 & 0xffffffffffffff8;
      }
      func_0x000107c60480();
      puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    PTR___swiftEmptyArrayStorage_11034f1c8 = puVar9;
    if (uVar12 != 0) {
      if ((long)uVar12 < 1) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x1019cb428);
        (*pcVar11)();
      }
      uVar13 = 0;
      do {
        if ((param_2 & 0xc000000000000001) == 0) {
          uVar5 = *(ulong *)(param_2 + uVar13 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar5 = uVar13;
          FUN_1019cb878(uVar13,param_2,&PTR_PTR_1126bb838,0x112de6240);
        }
        uVar6 = uVar5;
        func_0x0001019cb42c();
        if ((uVar6 & 1) == 0) {
          uVar6 = uVar5;
          func_0x000107c5d0f0();
          if (uVar6 < 3) {
LAB_1019cb19c:
            func_0x000107c61170(uVar5);
            ppuStack_2e0 = (undefined **)0x0;
            uStack_2f8 = 0;
            uStack_300 = 0;
            puStack_2e8 = (undefined *)0x0;
            uStack_2f0 = 0;
LAB_1019cb1b0:
            FUN_1019cba34(&uStack_300,0x112de6b80,&UNK_10d9b13c0);
          }
          else {
            if (uVar6 == 7) {
              FUN_1019cb558(&uStack_300,uVar5,param_1);
              if (puStack_2e8 == (undefined *)0x0) {
                func_0x000107c61170(uVar5);
                goto LAB_1019cb1b0;
              }
            }
            else {
              if (uVar6 != 3) goto LAB_1019cb19c;
              puStack_2e8 = &UNK_110426648;
              ppuStack_2e0 = &PTR_DAT_110426628;
            }
            func_0x000100737120(&uStack_300,auStack_2a8);
            lVar3 = lStack_288;
            uVar2 = uStack_290;
            func_0x0001000a8868(auStack_2a8,uStack_290);
            pcVar11 = *(code **)(lVar3 + 8);
            uVar6 = uVar5;
            func_0x000107c61174(uVar5);
            (*pcVar11)(&uStack_1d0,param_1,uVar5,uVar2,lVar3);
            func_0x000107c61170(uVar6);
            if (lStack_1c8 == 0) {
              func_0x000107c61170(uVar6);
              func_0x0001000834e4(auStack_2a8);
            }
            else {
              uStack_178 = uStack_1d0;
              lStack_170 = lStack_1c8;
              uStack_140 = uStack_198;
              uStack_148 = uStack_1a0;
              uStack_130 = uStack_188;
              uStack_138 = uStack_190;
              uStack_128 = uStack_180;
              uStack_160 = uStack_1b8;
              uStack_168 = uStack_1c0;
              uStack_150 = uStack_1a8;
              uStack_158 = uStack_1b0;
              FUN_1019c5260(&uStack_178,&uStack_300);
              puVar8 = puStack_310;
              func_0x000107c61558();
              if (((ulong)puVar8 & 1) == 0) {
                plVar1 = (long *)(puStack_310 + 0x10);
                puStack_310 = (undefined *)0x0;
                FUN_1019c90f8(0,*plVar1 + 1,1);
              }
              uVar5 = *(ulong *)(puStack_310 + 0x10);
              if (*(ulong *)(puStack_310 + 0x18) >> 1 <= uVar5) {
                puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puStack_310 + 0x18));
                FUN_1019c90f8(puVar8,uVar5 + 1,1,puStack_310);
                puStack_310 = puVar8;
              }
              *(ulong *)(puStack_310 + 0x10) = uVar5 + 1;
              *(long *)(puStack_310 + uVar5 * 0x58 + 0x28) = lStack_170;
              *(undefined8 *)(puStack_310 + uVar5 * 0x58 + 0x20) = uStack_178;
              *(undefined8 *)(puStack_310 + uVar5 * 0x58 + 0x38) = uStack_160;
              *(undefined8 *)(puStack_310 + uVar5 * 0x58 + 0x30) = uStack_168;
              *(undefined8 *)(puStack_310 + uVar5 * 0x58 + 0x70) = uStack_128;
              *(undefined8 *)(puStack_310 + uVar5 * 0x58 + 0x58) = uStack_140;
              *(undefined8 *)(puStack_310 + uVar5 * 0x58 + 0x50) = uStack_148;
              *(undefined8 *)(puStack_310 + uVar5 * 0x58 + 0x68) = uStack_130;
              *(undefined8 *)(puStack_310 + uVar5 * 0x58 + 0x60) = uStack_138;
              *(undefined8 *)(puStack_310 + uVar5 * 0x58 + 0x48) = uStack_150;
              *(undefined8 *)(puStack_310 + uVar5 * 0x58 + 0x40) = uStack_158;
              FUN_1019cba34(&uStack_1d0,0x112de6958,&UNK_10d9b11e0);
              func_0x000107c61170(uVar6);
              func_0x0001000834e4(auStack_2a8);
            }
          }
        }
        else {
          func_0x000107c61174();
          puVar8 = puVar9;
          func_0x000107c61550();
          if ((((int)puVar8 == 0) || ((long)puVar9 < 0)) ||
             (puVar8 = puVar9, ((ulong)puVar9 >> 0x3e & 1) != 0)) {
            if ((ulong)puVar9 >> 0x3e == 0) {
              puVar7 = *(undefined **)(((ulong)puVar9 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar7 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puVar9) {
                puVar7 = puVar9;
              }
              func_0x000107c60480(puVar7);
            }
            puVar8 = (undefined *)0x0;
            FUN_1019c8f94(0,puVar7 + 1,1,puVar9);
          }
          uVar10 = (ulong)puVar8 & 0xffffffffffffff8;
          uVar6 = *(ulong *)(uVar10 + 0x10);
          puVar9 = puVar8;
          if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar6) {
            puVar9 = (undefined *)(ulong)(1 < *(ulong *)(uVar10 + 0x18));
            FUN_1019c8f94(puVar9,uVar6 + 1,1,puVar8);
            uVar10 = (ulong)puVar9 & 0xffffffffffffff8;
          }
          *(ulong *)(uVar10 + 0x10) = uVar6 + 1;
          *(ulong *)(uVar10 + uVar6 * 8 + 0x20) = uVar5;
          func_0x000107c61170(uVar5);
        }
        uVar13 = uVar13 + 1;
      } while (uVar12 != uVar13);
    }
  }
  auVar14._8_8_ = puVar9;
  auVar14._0_8_ = puStack_310;
  return auVar14;
}



/* Entry: 1019cb558; end: 1019cb7f7;  */

void FUN_1019cb558(undefined8 *param_1,ulong param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined1 uVar7;
  long unaff_x20;
  undefined1 uVar8;
  ulong uStack_58;
  
  func_0x0001000d224c(&uStack_58);
  uVar3 = uStack_58;
  if (uStack_58 != 0) {
    uVar4 = uStack_58;
    func_0x000107c418dc();
    if ((int)uVar4 != 0) {
      uVar4 = param_2;
      func_0x000107c5beac();
      func_0x000107c61180();
      if (uVar4 != 0) {
        param_3 = 0;
        func_0x0001019cba74(0,0x112de6968,&PTR_PTR_1126bb840);
        uVar5 = uVar4;
        func_0x000107c5fc54();
        func_0x000107c61170(uVar4);
        uVar4 = uVar5;
        FUN_1019ce2a4();
        func_0x000107c6142c(uVar5);
        if (uVar4 != 0) {
          uVar5 = uVar4;
          func_0x000107c5d7e8();
          func_0x000107c61180();
          func_0x000107c61170(uVar4);
          if (uVar5 != 0) {
            uVar4 = uVar5;
            func_0x000107c5faec();
            uVar4 = uVar4 & 0xffffffffffff;
            if ((param_3 & 0x2000000000000000) != 0) {
              uVar4 = param_3 >> 0x38 & 0xf;
            }
            if (uVar4 != 0) {
              func_0x0001000d224c(&uStack_58);
              func_0x000107c6142c(param_3);
              if (uStack_58 != 0) {
                func_0x000107c502c4(uStack_58);
                func_0x000107c615e8(uStack_58);
              }
              func_0x000107c61170(uVar5);
              param_1[3] = &UNK_110426648;
              param_1[4] = &PTR_DAT_110426628;
              func_0x000107c615e8(uVar3);
              return;
            }
            func_0x000107c6142c(param_3);
            func_0x000107c61170(uVar5);
          }
        }
      }
    }
    uVar4 = uVar3;
    func_0x000107c418d4();
    if ((uVar4 & 1) == 0) {
      func_0x000107c44fdc();
      func_0x000107c61180();
      if (param_2 != 0) {
        uVar4 = param_2;
        func_0x000107c5faec();
        func_0x000107c61170(param_2);
        if (param_3 != 0) {
          uVar5 = uVar4 & 0xffffffffffff;
          if ((param_3 & 0x2000000000000000) != 0) {
            uVar5 = param_3 >> 0x38 & 0xf;
          }
          if (uVar5 != 0) {
            func_0x000107c61434(param_3);
            func_0x000107c5fadc(uVar4,param_3);
            uVar5 = uVar3;
            func_0x000107c418d8();
            uVar7 = (undefined1)uVar5;
            func_0x000107c61430(param_3,2);
            func_0x000107c615e8(uVar3);
            func_0x000107c61170(uVar4);
            uVar8 = 0;
            goto LAB_1019cb784;
          }
          func_0x000107c6142c(param_3);
        }
      }
      func_0x000107c615e8(uVar3);
      uVar8 = 0;
      uVar7 = 0;
      goto LAB_1019cb784;
    }
  }
  func_0x000107c615e8(uVar3);
  uVar7 = 0;
  uVar8 = 1;
LAB_1019cb784:
  param_1[3] = &UNK_110426340;
  param_1[4] = &PTR_DAT_1104262c8;
  puVar6 = &UNK_110426268;
  func_0x000107c613fc(&UNK_110426268,0x50,7);
  *param_1 = puVar6;
  func_0x0001019cbab4(unaff_x20 + 0x10,puVar6 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x50);
  puVar6[0x38] = uVar8;
  puVar6[0x39] = uVar7;
  *(undefined8 *)(puVar6 + 0x40) = uVar1;
  *(undefined8 *)(puVar6 + 0x48) = uVar2;
  func_0x000107c6157c();
  func_0x000107c615f0(uVar2);
  return;
}



/* Entry: 1019cb7f8; end: 1019cb843;  */

void FUN_1019cb7f8(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1019cb844; end: 1019cb863;  */

void FUN_1019cb844(void)

{
  FUN_1019cadbc();
  return;
}



/* Entry: 1019cb864; end: 1019cb877;  */

ulong FUN_1019cb864(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1019cb95c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1019cb960);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126bb840;
    func_0x000107c61168(PTR_PTR_1126bb840);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126bb840;
    func_0x000107c61168(PTR_PTR_1126bb840);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x0001019cba74(0,0x112de6968,&PTR_PTR_1126bb840);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1019cba34);
  (*pcVar2)();
}



/* Entry: 1019cb878; end: 1019cba33;  */

ulong FUN_1019cb878(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1019cb95c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1019cb960);
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
  func_0x0001019cba74(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1019cba34);
  (*pcVar2)();
}



/* Entry: 1019cba34; end: 1019cbaf7;  */

undefined8 FUN_1019cba34(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1019cbaf8; end: 1019cbc23;  */

undefined * FUN_1019cbaf8(undefined **param_1,long param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  func_0x000107c5ed74();
  ppuVar2 = param_1 + 2;
  if (*ppuVar2 < (undefined *)0x3) {
    func_0x000107c6142c();
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar4 = ppuVar2[(long)*ppuVar2 * 2];
    puVar1 = (ppuVar2 + (long)*ppuVar2 * 2)[1];
    func_0x000107c61434(puVar1);
    func_0x000107c6142c();
    func_0x000107c5edbc();
    if (param_2 != 0) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110f630d8;
      lVar5 = param_2;
      func_0x000107c5faec();
      if (param_1 == ppuVar2 && param_2 == lVar5) {
        func_0x000107c6142c(param_2);
        func_0x000107c6142c(lVar5);
      }
      else {
        func_0x000107c605b8(param_1,param_2,ppuVar2,lVar5,0);
        func_0x000107c6142c(param_2);
        func_0x000107c6142c(lVar5);
      }
    }
    puVar3 = PTR_PTR_1126b08b8;
    func_0x000107c610f8(PTR_PTR_1126b08b8);
    func_0x000107c5fadc(puVar4,puVar1);
    func_0x000107c6142c(puVar1);
    func_0x000107c4766c(puVar3);
    func_0x000107c61170(puVar4);
  }
  return puVar3;
}



/* Entry: 1019cbc24; end: 1019cbec3;  */

undefined * FUN_1019cbc24(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long extraout_x8;
  long extraout_x8_00;
  undefined **ppuVar10;
  long lVar11;
  undefined *apuStack_60 [2];
  
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = (long)apuStack_60 - extraout_x8;
  lVar3 = 0;
  func_0x000107c5ede0();
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  ppuVar10 = (undefined **)(lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5edd0(lVar8,param_1,param_2);
  lVar2 = lVar8;
  (**(code **)(lVar11 + 0x30))(lVar8,1,lVar3);
  if ((int)lVar2 == 1) {
    func_0x0001000293e4(lVar8);
  }
  else {
    ppuVar4 = ppuVar10;
    (**(code **)(lVar11 + 0x20))(ppuVar10,lVar8,lVar3);
    func_0x000107c5edc8();
    ppuVar5 = &PTR____CFConstantStringClassReference_110dbdd78;
    lVar2 = lVar8;
    func_0x000107c5faec();
    if (lVar8 == 0) {
      func_0x000107c6142c(lVar2);
LAB_1019cbd7c:
      apuStack_60[0] = (undefined *)0x7461642e736e656c;
      apuStack_60[1] = (undefined *)0xe900000000000061;
      func_0x000107c5fb78(param_1,param_2);
      puVar1 = apuStack_60[1];
      puVar7 = apuStack_60[0];
      puVar6 = PTR_PTR_1126b08b8;
      func_0x000107c610f8(PTR_PTR_1126b08b8);
      func_0x000107c5fadc(puVar7,puVar1);
      func_0x000107c6142c(puVar1);
      func_0x000107c4766c(puVar6);
      func_0x000107c61170(puVar7);
      (**(code **)(lVar11 + 8))(ppuVar10,lVar3);
      return puVar6;
    }
    if (ppuVar4 == ppuVar5 && lVar8 == lVar2) {
      lVar9 = lVar2;
      func_0x000107c6142c(lVar8);
      func_0x000107c6142c(lVar2);
    }
    else {
      lVar9 = lVar8;
      func_0x000107c605b8(ppuVar4,lVar8,ppuVar5,lVar2,0);
      func_0x000107c6142c(lVar8);
      func_0x000107c6142c(lVar2);
      if (((ulong)ppuVar4 & 1) == 0) goto LAB_1019cbd7c;
    }
    ppuVar4 = ppuVar10;
    FUN_1019cbaf8();
    if (ppuVar4 != (undefined **)0x0) {
      ppuVar5 = ppuVar4;
      func_0x000107c4c99c();
      func_0x000107c61180();
      if (ppuVar5 == (undefined **)0x0) {
        func_0x000107c5faec();
        func_0x000107c5fadc();
        func_0x000107c6142c(lVar9);
      }
      puVar7 = PTR_PTR_1126b08b8;
      func_0x000107c610f8(PTR_PTR_1126b08b8);
      func_0x000107c4766c();
      func_0x000107c61170(ppuVar4);
      func_0x000107c61170(ppuVar5);
      (**(code **)(lVar11 + 8))(ppuVar10,lVar3);
      return puVar7;
    }
    (**(code **)(lVar11 + 8))(ppuVar10,lVar3);
  }
  return (undefined *)0x0;
}



/* Entry: 1019cbec4; end: 1019cc137;  */

undefined ** FUN_1019cbec4(long param_1,long param_2,long param_3,long param_4,undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  long lVar7;
  long extraout_x8;
  long extraout_x8_00;
  undefined **ppuVar8;
  long lVar9;
  undefined *apuStack_80 [4];
  
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = (long)apuStack_80 - extraout_x8;
  lVar3 = 0;
  func_0x000107c5ede0();
  lVar9 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  ppuVar8 = (undefined **)(lVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5edd0(lVar7,param_1,param_2);
  lVar2 = lVar7;
  (**(code **)(lVar9 + 0x30))(lVar7,1,lVar3);
  if ((int)lVar2 == 1) {
    func_0x0001000293e4(lVar7);
    return (undefined **)0x0;
  }
  ppuVar4 = ppuVar8;
  apuStack_80[1] = (undefined *)param_5;
  (**(code **)(lVar9 + 0x20))(ppuVar8,lVar7,lVar3);
  func_0x000107c5edc8();
  ppuVar5 = &PTR____CFConstantStringClassReference_110dbdd78;
  lVar2 = lVar7;
  func_0x000107c5faec();
  if (lVar7 == 0) {
    func_0x000107c6142c(lVar2);
LAB_1019cc030:
    if ((param_4 != 0) && (lVar2 = param_3, func_0x000107c5fb5c(param_3,param_4), 0 < lVar2)) {
      param_1 = param_3;
      param_2 = param_4;
    }
    apuStack_80[3] = (undefined *)0xe900000000000061;
    apuStack_80[2] = (undefined *)0x7461642e736e656c;
    func_0x000107c5fb78(param_1,param_2);
    puVar1 = apuStack_80[3];
    puVar6 = apuStack_80[2];
    ppuVar4 = (undefined **)PTR_PTR_1126b08b8;
    func_0x000107c610f8(PTR_PTR_1126b08b8);
    func_0x000107c5fadc(puVar6,puVar1);
    func_0x000107c6142c(puVar1);
    func_0x000107c4766c(ppuVar4);
    func_0x000107c61170(puVar6);
  }
  else {
    if (ppuVar4 == ppuVar5 && lVar7 == lVar2) {
      func_0x000107c6142c(lVar7);
      func_0x000107c6142c(lVar2);
    }
    else {
      func_0x000107c605b8(ppuVar4,lVar7,ppuVar5,lVar2,0);
      func_0x000107c6142c(lVar7);
      func_0x000107c6142c(lVar2);
      if (((ulong)ppuVar4 & 1) == 0) goto LAB_1019cc030;
    }
    ppuVar4 = ppuVar8;
    FUN_1019cbaf8(ppuVar8);
  }
  (**(code **)(lVar9 + 8))(ppuVar8,lVar3);
  return ppuVar4;
}



/* Entry: 1019cc138; end: 1019cc147;  */

undefined1  [16] FUN_1019cc138(void)

{
  return ZEXT816(0x110426298);
}



/* Entry: 1019cc148; end: 1019cc56b;  */

undefined * FUN_1019cc148(byte *param_1,ulong param_2,byte *param_3,byte *param_4)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  code *pcVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  ulong uVar14;
  byte *pbVar15;
  byte *pbVar16;
  long extraout_x8;
  byte *pbVar17;
  byte **ppbVar18;
  ulong uVar19;
  uint uVar20;
  long lVar21;
  long lVar22;
  byte *pbStack_60;
  ulong uStack_58;
  
  lVar9 = 0;
  func_0x000107c5fb10();
  lVar22 = *(long *)(lVar9 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar22 + 0x40));
  lVar21 = (long)&pbStack_60 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar10 = PTR_PTR_1126df9c0;
  func_0x000107c610f8(PTR_PTR_1126df9c0);
  func_0x000107c453e4();
  puVar11 = puVar10;
  pbStack_60 = param_1;
  uStack_58 = param_2;
  func_0x000107c5fb04(lVar21);
  func_0x000100e8b654();
  uVar14 = 0;
  lVar12 = lVar21;
  func_0x000107c60214(lVar21,0,PTR___sSSN_11034da80,puVar11);
  (**(code **)(lVar22 + 8))(lVar21,lVar9);
  lVar9 = 0;
  if (uVar14 >> 0x3c < 0xf) {
    lVar9 = lVar12;
    func_0x000107c5ee20(lVar12,uVar14);
    func_0x0001000b44c0(lVar12,uVar14);
  }
  func_0x000107c533f8(puVar10);
  func_0x000107c61170(lVar9);
  puVar11 = PTR_PTR_1126df9b8;
  func_0x000107c610f8(PTR_PTR_1126df9b8);
  func_0x000107c453e4();
  func_0x000107c533fc();
  if (param_4 == (byte *)0x0) goto LAB_1019cc4f8;
  pbVar15 = (byte *)((ulong)param_3 & 0xffffffffffff);
  pbVar17 = (byte *)((ulong)param_4 >> 0x38 & 0xf);
  pbVar16 = pbVar15;
  if (((ulong)param_4 & 0x2000000000000000) != 0) {
    pbVar16 = pbVar17;
  }
  if (pbVar16 == (byte *)0x0) goto LAB_1019cc4f8;
  if (((ulong)param_4 >> 0x3c & 1) == 0) {
    if (((ulong)param_4 >> 0x3d & 1) != 0) {
      pbStack_60 = param_3;
      uStack_58 = (ulong)param_4 & 0xffffffffffffff;
      uVar20 = (uint)param_3 & 0xff;
      if (uVar20 == 0x2b) {
        if (pbVar17 == (byte *)0x0) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x1019cc56c);
          (*pcVar8)();
        }
        pbVar17 = pbVar17 + -1;
        if (pbVar17 == (byte *)0x0) goto LAB_1019cc4a0;
        uVar14 = 0;
        pbVar16 = (byte *)((ulong)&pbStack_60 | 1);
        do {
          if (((9 < *pbVar16 - 0x30) ||
              (auVar5._8_8_ = 0, auVar5._0_8_ = uVar14, SUB168(auVar5 * ZEXT816(10),8) != 0)) ||
             (uVar19 = uVar14 * 10, uVar1 = (ulong)(byte)(*pbVar16 - 0x30), uVar14 = uVar19 + uVar1,
             CARRY8(uVar19,uVar1))) goto LAB_1019cc4a0;
          uVar20 = 0;
          pbVar17 = pbVar17 + -1;
          pbVar16 = pbVar16 + 1;
        } while (pbVar17 != (byte *)0x0);
      }
      else if (uVar20 == 0x2d) {
        if (pbVar17 == (byte *)0x0) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x1019cc564);
          (*pcVar8)();
        }
        pbVar17 = pbVar17 + -1;
        if (pbVar17 == (byte *)0x0) {
LAB_1019cc4a0:
          uVar20 = 1;
        }
        else {
          uVar14 = 0;
          pbVar16 = (byte *)((ulong)&pbStack_60 | 1);
          do {
            if (((9 < *pbVar16 - 0x30) ||
                (auVar3._8_8_ = 0, auVar3._0_8_ = uVar14, SUB168(auVar3 * ZEXT816(10),8) != 0)) ||
               (uVar19 = uVar14 * 10, uVar1 = (ulong)(byte)(*pbVar16 - 0x30),
               uVar14 = uVar19 - uVar1, uVar19 < uVar1)) goto LAB_1019cc4a0;
            uVar20 = 0;
            pbVar17 = pbVar17 + -1;
            pbVar16 = pbVar16 + 1;
          } while (pbVar17 != (byte *)0x0);
        }
      }
      else {
        if (pbVar17 == (byte *)0x0) goto LAB_1019cc4a0;
        uVar14 = 0;
        ppbVar18 = &pbStack_60;
        do {
          if (((9 < *(byte *)ppbVar18 - 0x30) ||
              (auVar7._8_8_ = 0, auVar7._0_8_ = uVar14, SUB168(auVar7 * ZEXT816(10),8) != 0)) ||
             (uVar19 = uVar14 * 10, uVar1 = (ulong)(byte)(*(byte *)ppbVar18 - 0x30),
             uVar14 = uVar19 + uVar1, CARRY8(uVar19,uVar1))) goto LAB_1019cc4a0;
          uVar20 = 0;
          pbVar17 = pbVar17 + -1;
          ppbVar18 = (byte **)((long)ppbVar18 + 1);
        } while (pbVar17 != (byte *)0x0);
      }
      goto LAB_1019cc4a8;
    }
    if (((ulong)param_3 >> 0x3c & 1) == 0) {
      func_0x000107c60358();
    }
    else {
      param_3 = (byte *)(((ulong)param_4 & 0xfffffffffffffff) + 0x20);
      param_4 = pbVar15;
    }
    if (*param_3 == 0x2b) {
      pbVar16 = param_4 + -1;
      if ((long)param_4 < 1) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x1019cc568);
        (*pcVar8)();
      }
      if (pbVar16 == (byte *)0x0) goto LAB_1019cc4f8;
      uVar14 = 0;
      do {
        param_3 = param_3 + 1;
        if (((9 < *param_3 - 0x30) ||
            (auVar4._8_8_ = 0, auVar4._0_8_ = uVar14, SUB168(auVar4 * ZEXT816(10),8) != 0)) ||
           (uVar19 = uVar14 * 10, uVar1 = (ulong)(byte)(*param_3 - 0x30), uVar14 = uVar19 + uVar1,
           CARRY8(uVar19,uVar1))) goto LAB_1019cc4f8;
        pbVar16 = pbVar16 + -1;
      } while (pbVar16 != (byte *)0x0);
    }
    else if (*param_3 == 0x2d) {
      pbVar16 = param_4 + -1;
      if ((long)param_4 < 1) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x1019cc560);
        (*pcVar8)();
      }
      if (pbVar16 == (byte *)0x0) goto LAB_1019cc4f8;
      uVar14 = 0;
      do {
        param_3 = param_3 + 1;
        if (((9 < *param_3 - 0x30) ||
            (auVar2._8_8_ = 0, auVar2._0_8_ = uVar14, SUB168(auVar2 * ZEXT816(10),8) != 0)) ||
           (uVar19 = uVar14 * 10, uVar1 = (ulong)(byte)(*param_3 - 0x30), uVar14 = uVar19 - uVar1,
           uVar19 < uVar1)) goto LAB_1019cc4f8;
        pbVar16 = pbVar16 + -1;
      } while (pbVar16 != (byte *)0x0);
    }
    else {
      if (param_4 == (byte *)0x0) goto LAB_1019cc4f8;
      uVar14 = 0;
      pbVar16 = param_3;
      while (pbVar16 != (byte *)0x0) {
        if (((9 < *param_3 - 0x30) ||
            (auVar6._8_8_ = 0, auVar6._0_8_ = uVar14, SUB168(auVar6 * ZEXT816(10),8) != 0)) ||
           (uVar19 = uVar14 * 10, uVar1 = (ulong)(byte)(*param_3 - 0x30), uVar14 = uVar19 + uVar1,
           CARRY8(uVar19,uVar1))) goto LAB_1019cc4f8;
        param_4 = param_4 + -1;
        param_3 = param_3 + 1;
        pbVar16 = param_4;
      }
    }
  }
  else {
    func_0x000107c61434(param_4);
    pbVar16 = param_4;
    func_0x000100f5015c(param_3,param_4,10);
    uVar20 = (uint)pbVar16;
    func_0x000107c6142c(param_4);
LAB_1019cc4a8:
    if ((uVar20 & 0xff) == 1) goto LAB_1019cc4f8;
  }
  puVar13 = PTR_PTR_1126c6100;
  func_0x000107c610f8(PTR_PTR_1126c6100);
  func_0x000107c453e4();
  func_0x000107c5a494();
  func_0x000107c61174(puVar13);
  func_0x000107c55d70(puVar11);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(puVar13);
LAB_1019cc4f8:
  func_0x000107c61170(puVar10);
  return puVar11;
}



/* Entry: 1019cc56c; end: 1019cc673;  */

void FUN_1019cc56c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  lVar1 = param_1;
  uVar4 = param_2;
  func_0x000107c5d0f0();
  if (lVar1 - 3U < 2) {
    func_0x000107c3f9b4();
    func_0x000107c61180();
    if (param_1 != 0) {
      lVar1 = param_1;
      func_0x000107c5faec();
      func_0x000107c61170(param_1);
      puVar2 = PTR_PTR_1126b7fa8;
      func_0x000107c610f8();
      func_0x000107c453e4();
      FUN_1019cc148(lVar1,uVar4,param_2,param_3);
      func_0x000107c6142c(uVar4);
      func_0x000107c55cc4(puVar2);
      func_0x000107c61170(lVar1);
      puVar3 = puVar2;
      func_0x000107c41214();
      func_0x000107c61180();
      if (puVar3 == (undefined *)0x0) {
        func_0x000107c61170(puVar2);
      }
      else {
        func_0x000107c5ee30();
        func_0x000107c61170(puVar3);
        func_0x000107c61170(puVar2);
      }
    }
  }
  return;
}



/* Entry: 1019cc674; end: 1019cc683;  */

undefined1  [16] FUN_1019cc674(void)

{
  return ZEXT816(0x1104262b8);
}



/* Entry: 1019cc684; end: 1019cc6d7;  */

void FUN_1019cc684(undefined8 *param_1)

{
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_1019cc6d8(&uStack_78);
  param_1[5] = uStack_50;
  param_1[4] = uStack_58;
  param_1[7] = uStack_40;
  param_1[6] = uStack_48;
  param_1[9] = uStack_30;
  param_1[8] = uStack_38;
  param_1[10] = uStack_28;
  param_1[1] = uStack_70;
  *param_1 = uStack_78;
  param_1[3] = uStack_60;
  param_1[2] = uStack_68;
  return;
}



/* Entry: 1019cc6d8; end: 1019ccb7b;  */

/* WARNING: Removing unreachable block (ram,0x0001019ccb70) */
/* WARNING: Removing unreachable block (ram,0x0001019ccb78) */

void FUN_1019cc6d8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined *param_5,undefined8 param_6,ulong param_7)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined *puStack_70;
  
  if (param_5 == (undefined *)0x0) {
    puStack_70 = (undefined *)0x0;
    uVar15 = 0;
    uVar8 = param_3;
  }
  else {
    puVar11 = param_5;
    uVar15 = param_3;
    func_0x000107c4b1dc();
    func_0x000107c61180();
    puStack_70 = puVar11;
    func_0x000107c5faec();
    uVar8 = uVar15;
    func_0x000107c61170(puVar11);
  }
  lVar3 = param_4;
  func_0x000107c3ac3c();
  func_0x000107c61180();
  if (lVar3 == 0) {
    func_0x000107c61170(param_4);
    func_0x000107c6142c(param_3);
    func_0x000107c61170(param_6);
    func_0x000107c6142c(uVar15);
    func_0x000107c61170(param_5);
  }
  else {
    lVar4 = lVar3;
    func_0x000107c5faec();
    lVar12 = param_4;
    uVar9 = uVar8;
    func_0x000107c3f9b4();
    func_0x000107c61180();
    if (lVar12 == 0) {
      func_0x000107c61170(param_4);
      func_0x000107c6142c(param_3);
      func_0x000107c6142c(uVar8);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(param_6);
      func_0x000107c6142c(uVar15);
      func_0x000107c61170(param_5);
    }
    else {
      lVar5 = lVar12;
      func_0x000107c5faec();
      func_0x000107c61170(lVar12);
      if (param_5 == (undefined *)0x0) {
        puVar11 = (undefined *)0x0;
      }
      else {
        puVar11 = param_5;
        func_0x000107c42ec0(param_5);
      }
      FUN_1019cbec4(lVar4,uVar8,lVar5,uVar9,puVar11);
      func_0x000107c6142c(uVar9);
      func_0x000107c6142c(uVar8);
      if (lVar4 != 0) {
        puVar11 = PTR_PTR_1126b08b0;
        func_0x000107c61168();
        func_0x000107c3f71c();
        func_0x000107c61180();
        func_0x000107c61170(lVar3);
        lVar3 = param_4;
        FUN_1019cc56c(param_4,puStack_70,uVar15);
        puVar16 = puStack_70;
        func_0x000107c6142c();
        iVar2 = (int)uVar15;
        func_0x000107c30a14();
        lVar12 = (long)iVar2 * 0x15180;
        if (SUB168(SEXT816((long)iVar2) * SEXT816(0x15180),8) != lVar12 >> 0x3f) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1019ccb70);
          (*pcVar1)();
        }
        puVar6 = PTR_PTR_1126b9620;
        func_0x000107c610f8();
        func_0x000107c453e4();
        func_0x000107c537f4();
        func_0x000107c4c950();
        if (lVar12 / 0x3c < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1019ccb78);
          (*pcVar1)();
        }
        puVar7 = puVar6;
        func_0x000107c41214();
        func_0x000107c61180();
        if (puVar7 == (undefined *)0x0) {
          puVar14 = (undefined *)0x0;
          puVar16 = (undefined *)0xf000000000000000;
        }
        else {
          puVar14 = puVar7;
          func_0x000107c5ee30();
          func_0x000107c61170(puVar7);
        }
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000100de78a0(lVar3,puStack_70);
        puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
        puVar10 = PTR___sSSN_11034da80;
        func_0x000107c5fc48();
        if ((ulong)puVar16 >> 0x3c < 0xf) {
          puVar13 = puVar14;
          func_0x000107c5ee20(puVar14,puVar16);
          func_0x0001000b44c0(puVar14);
        }
        else {
          puVar13 = (undefined *)0x0;
          puVar16 = puVar10;
        }
        if ((ulong)puStack_70 >> 0x3c < 0xf) {
          lVar12 = lVar3;
          func_0x000107c5ee20(lVar3,puStack_70);
          puVar16 = puStack_70;
          func_0x0001000b44c0(lVar3);
        }
        else {
          lVar12 = 0;
        }
        puVar14 = PTR_PTR_1126e1540;
        func_0x000107c610f8();
        puVar10 = puVar11;
        func_0x000107c460f0();
        func_0x000107c61170(puVar11);
        func_0x000107c61170(lVar4);
        func_0x000107c61170(puVar7);
        func_0x000107c61170(puVar13);
        func_0x000107c61170(lVar12);
        FUN_1019d31e4();
        func_0x000107c61170(puVar11);
        func_0x0001000b44c0(lVar3,puStack_70);
        func_0x000107c61170(puVar6);
        func_0x000107c61170(param_4);
        param_7 = param_7 & 0xff;
        goto LAB_1019ccb34;
      }
      func_0x000107c61170(param_4);
      func_0x000107c6142c(param_3);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(param_6);
      func_0x000107c61170(param_5);
      func_0x000107c6142c(uVar15);
    }
  }
  puVar10 = (undefined *)0x0;
  puVar16 = (undefined *)0x0;
  lVar4 = 0;
  param_2 = 0;
  param_3 = 0;
  param_5 = (undefined *)0x0;
  param_6 = 0;
  puVar14 = (undefined *)0x0;
  param_7 = 0;
LAB_1019ccb34:
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = lVar4;
  param_1[3] = puVar16;
  param_1[4] = puVar10;
  param_1[5] = param_7;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = param_5;
  param_1[9] = param_6;
  param_1[10] = puVar14;
  return;
}



/* Entry: 1019ccb7c; end: 1019cce5f;  */

void FUN_1019ccb7c(long *param_1,double param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long unaff_x20;
  undefined8 uVar10;
  double dVar11;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  
  if (param_4 != 0) {
    uVar5 = param_4;
    uVar9 = param_4;
    func_0x000107c61174();
    uVar6 = uVar5;
    func_0x000107c44fdc();
    func_0x000107c61180();
    if (uVar6 != 0) {
      uVar7 = uVar6;
      func_0x000107c5faec();
      func_0x000107c61170(uVar6);
      uVar6 = uVar7 & 0xffffffffffff;
      if ((uVar9 & 0x2000000000000000) != 0) {
        uVar6 = uVar9 >> 0x38 & 0xf;
      }
      if (uVar6 == 0) {
        func_0x000107c61170(uVar5);
        func_0x000107c6142c(uVar9);
        goto LAB_1019cce04;
      }
      func_0x0001000d224c(&lStack_d0);
      lVar3 = lStack_d0;
      if (((*(byte *)(unaff_x20 + 0x28) & 1) == 0) && (*(char *)(unaff_x20 + 0x29) != '\x01')) {
        func_0x000107c6142c(uVar9);
        if (lStack_d0 != 0) {
          func_0x000107c615f0(lStack_d0);
LAB_1019ccdec:
          func_0x000107c502c0();
          func_0x000107c615ec(lVar3,2);
        }
      }
      else {
        uVar10 = *(undefined8 *)(unaff_x20 + 0x38);
        func_0x000107c40fd4(uVar10);
        uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
        lVar2 = *(long *)(unaff_x20 + 0x20);
        dVar11 = param_2;
        func_0x0001000a8868();
        uVar6 = uVar7;
        (**(code **)(lVar2 + 8))(uVar7,uVar9,uVar1,lVar2);
        if (uVar6 != 0) {
          func_0x000107c40fd4(uVar10);
          dVar11 = (dVar11 - param_2) * 1000.0;
          if (0x7fefffffffffffff < (ulong)ABS(dVar11)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1019cce58);
            (*pcVar4)();
          }
          if (dVar11 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1019cce5c);
            (*pcVar4)();
          }
          if (9.223372036854776e+18 <= dVar11) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1019cce60);
            (*pcVar4)();
          }
          if (lVar3 != 0) {
            func_0x000107c615f0(lVar3);
            uVar8 = uVar6;
            func_0x000107c3ac3c(uVar6);
            func_0x000107c61180();
            func_0x000107c502c4(lVar3);
            func_0x000107c615e8(lVar3);
            func_0x000107c61170(uVar8);
          }
          uVar8 = uVar9;
          FUN_1019d16e8(uVar7,uVar9);
          func_0x000107c6142c(uVar9);
          func_0x000107c61174(uVar5);
          func_0x000107c61174(param_3);
          FUN_1019cc6d8(&lStack_d0,uVar7,uVar8,uVar6,param_3,param_4,2);
          func_0x000107c61170(uVar5);
          func_0x000107c615e8(lVar3);
          goto LAB_1019cce20;
        }
        func_0x000107c6142c(uVar9);
        if (lVar3 != 0) {
          func_0x000107c615f0(lVar3);
          goto LAB_1019ccdec;
        }
      }
    }
    func_0x000107c61170(uVar5);
  }
LAB_1019cce04:
  lStack_90 = 0;
  lStack_88 = 0;
  lStack_80 = 0;
  lStack_d0 = 0;
  lStack_c8 = 0;
  lStack_c0 = 0;
  lStack_b8 = 0;
  lStack_b0 = 0;
  lStack_a8 = 0;
  lStack_a0 = 0;
  lStack_98 = 0;
LAB_1019cce20:
  param_1[1] = lStack_c8;
  *param_1 = lStack_d0;
  param_1[3] = lStack_b8;
  param_1[2] = lStack_c0;
  param_1[5] = lStack_a8;
  param_1[4] = lStack_b0;
  param_1[7] = lStack_98;
  param_1[6] = lStack_a0;
  param_1[8] = lStack_90;
  param_1[9] = lStack_88;
  param_1[10] = lStack_80;
  return;
}



/* Entry: 1019cce60; end: 1019ccf63;  */

void FUN_1019cce60(undefined8 *param_1)

{
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_1019ccb7c(&uStack_78);
  param_1[5] = uStack_50;
  param_1[4] = uStack_58;
  param_1[7] = uStack_40;
  param_1[6] = uStack_48;
  param_1[9] = uStack_30;
  param_1[8] = uStack_38;
  param_1[10] = uStack_28;
  param_1[1] = uStack_70;
  *param_1 = uStack_78;
  param_1[3] = uStack_60;
  param_1[2] = uStack_68;
  return;
}



/* Entry: 1019ccf64; end: 1019ccfd3;  */

long FUN_1019ccf64(long param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x000100083374();
  *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_2 + 0x28);
  *(undefined1 *)(param_1 + 0x29) = *(undefined1 *)(param_2 + 0x29);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  func_0x000107c615f0();
  func_0x000107c615e8(uVar1);
  return param_1;
}



/* Entry: 1019ccfd4; end: 1019cd03b;  */

undefined8 * FUN_1019ccfd4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x0001000834e4();
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  *(undefined1 *)((long)param_1 + 0x29) = *(undefined1 *)((long)param_2 + 0x29);
  uVar1 = param_1[6];
  param_1[6] = param_2[6];
  func_0x000107c61574(uVar1);
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  func_0x000107c615e8(uVar1);
  return param_1;
}



/* Entry: 1019cd03c; end: 1019cd0e3;  */

int FUN_1019cd03c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1019cd0e4; end: 1019cd187;  */

long FUN_1019cd0e4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1019cd188; end: 1019cd19f;  */

/* WARNING: Possible PIC construction at 0x0001019cd1d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019cd1f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001019cd1d8) */
/* WARNING: Removing unreachable block (ram,0x0001019cd1fc) */
/* WARNING: Removing unreachable block (ram,0x000107c614ac) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0194) */

undefined8 FUN_1019cd188(undefined8 *param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  
  uVar3 = param_1[1];
  uVar1 = param_1[3];
  cVar2 = *(char *)(param_1 + 5);
  if (cVar2 == '\x02') {
    func_0x000107c6142c(uVar3,uVar3,param_1[2],uVar1,param_1[4]);
    uVar3 = uVar1;
  }
  else if ((cVar2 != '\x01') && (cVar2 != '\0')) {
    return *param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
  return uVar3;
}



/* Entry: 1019cd1a0; end: 1019cd217;  */

/* WARNING: Possible PIC construction at 0x0001019cd1d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019cd1f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001019cd1d8) */
/* WARNING: Removing unreachable block (ram,0x0001019cd1fc) */
/* WARNING: Removing unreachable block (ram,0x000107c614ac) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0194) */

void FUN_1019cd1a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,char param_6)

{
  if (param_6 == '\x02') {
    func_0x000107c6142c(param_2);
    param_2 = param_4;
  }
  else if ((param_6 != '\x01') && (param_6 != '\0')) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1019cd218; end: 1019cd313;  */

undefined8 * FUN_1019cd218(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar2 = param_2[2];
  uVar4 = param_2[3];
  uVar6 = param_2[4];
  uVar5 = *(undefined1 *)(param_2 + 5);
  func_0x0001019cd110(uVar1,uVar3,uVar2,uVar4,uVar6,uVar5);
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = uVar4;
  param_1[4] = uVar6;
  *(undefined1 *)(param_1 + 5) = uVar5;
  return param_1;
}



/* Entry: 1019cd314; end: 1019cd363;  */

undefined8 * FUN_1019cd314(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar8 = param_2[4];
  uVar5 = *(undefined1 *)(param_2 + 5);
  uVar7 = *param_1;
  uVar1 = param_1[1];
  uVar3 = param_1[2];
  uVar2 = param_1[3];
  uVar4 = param_1[4];
  uVar9 = *param_2;
  uVar11 = param_2[3];
  uVar10 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar9;
  param_1[3] = uVar11;
  param_1[2] = uVar10;
  param_1[4] = uVar8;
  uVar6 = *(undefined1 *)(param_1 + 5);
  *(undefined1 *)(param_1 + 5) = uVar5;
  FUN_1019cd1a0(uVar7,uVar1,uVar3,uVar2,uVar4,uVar6);
  return param_1;
}



/* Entry: 1019cd364; end: 1019cd42f;  */

int FUN_1019cd364(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfd < param_2) && (*(char *)((long)param_1 + 0x29) != '\0')) {
    return *param_1 + 0xfe;
  }
  uVar1 = *(byte *)(param_1 + 10) ^ 0xff;
  if (*(byte *)(param_1 + 10) < 3) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1019cd430; end: 1019cd53f;  */

/* WARNING: Removing unreachable block (ram,0x0001019cd4d0) */
/* WARNING: Removing unreachable block (ram,0x0001019cd508) */
/* WARNING: Removing unreachable block (ram,0x0001019cd51c) */

long FUN_1019cd430(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  uVar3 = param_2;
  func_0x000107c5fadc();
  func_0x000107c5c1e0();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  if (param_3 == 0) {
    lVar2 = 0;
    uVar3 = 0;
  }
  else {
    lVar2 = param_3;
    func_0x000107c5faec(param_3);
    func_0x000107c61170(param_3);
  }
  FUN_1019cda2c(lVar2,uVar3,param_1,param_2);
  func_0x000107c6142c(uVar3);
  return lVar2;
}



/* Entry: 1019cd540; end: 1019cd553;  */

bool FUN_1019cd540(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1019cd554; end: 1019cd5ff;  */

void FUN_1019cd554(void)

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



/* Entry: 1019cd600; end: 1019cd633;  */

undefined1  [16] FUN_1019cd600(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *unaff_x20;
  undefined1 auVar3 [16];
  
  uVar1 = 0x6d75736b63656863;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x6c7275;
  }
  uVar2 = 0xe800000000000000;
  if (*unaff_x20 != '\x01') {
    uVar2 = 0xe300000000000000;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 1019cd634; end: 1019cd70b;  */

void FUN_1019cd634(undefined1 *param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined1 uVar2;
  
  if (param_2 != 0x6c7275 || param_3 != -0x1d00000000000000) {
    uVar1 = 0x6c7275;
    func_0x000107c605b8(0x6c7275,0xe300000000000000,param_2,param_3,0);
    if ((uVar1 & 1) == 0) {
      uVar1 = 0x6d75736b63656863;
      if ((param_2 == 0x6d75736b63656863) && (param_3 == -0x1800000000000000)) {
        func_0x000107c6142c(0xe800000000000000);
        uVar2 = 1;
      }
      else {
        func_0x000107c605b8(0x6d75736b63656863,0xe800000000000000,param_2,param_3,0);
        func_0x000107c6142c(param_3);
        uVar2 = 1;
        if ((uVar1 & 1) == 0) {
          uVar2 = 2;
        }
      }
      goto LAB_1019cd694;
    }
  }
  func_0x000107c6142c(param_3);
  uVar2 = 0;
LAB_1019cd694:
  *param_1 = uVar2;
  return;
}



/* Entry: 1019cd70c; end: 1019cd723;  */

undefined1  [16] FUN_1019cd70c(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 1019cd724; end: 1019cd773;  */

void FUN_1019cd724(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_1019ce034();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 1019cd774; end: 1019cd8b3;  */

void FUN_1019cd774(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x8;
  long unaff_x21;
  long lVar4;
  long lVar5;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  lVar3 = 0x112de6c70;
  uStack_70 = param_4;
  uStack_68 = param_5;
  func_0x0001000285a8(0x112de6c70,&UNK_10d9b1630);
  lVar4 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = (long)&uStack_70 - extraout_x8;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar1);
  FUN_1019ce034();
  func_0x000107c606ec(lVar5,&UNK_110426560,&UNK_110426560,param_1,uVar1,uVar2);
  uStack_51 = 0;
  func_0x000107c6053c(param_2,param_3,&uStack_51,lVar3);
  if (unaff_x21 == 0) {
    uStack_52 = 1;
    func_0x000107c6053c(uStack_70,uStack_68,&uStack_52,lVar3);
    (**(code **)(lVar4 + 8))(lVar5,lVar3);
  }
  else {
    (**(code **)(lVar4 + 8))(lVar5,lVar3);
  }
  return;
}



/* Entry: 1019cd8b4; end: 1019cd8df;  */

void FUN_1019cd8b4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x21;
  
  FUN_1019cdeac();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
    param_1[2] = param_4;
    param_1[3] = param_5;
  }
  return;
}



/* Entry: 1019cd8e0; end: 1019cd8fb;  */

void FUN_1019cd8e0(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1019cd774(param_1,*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3]);
  return;
}



/* Entry: 1019cd8fc; end: 1019cd903;  */

/* WARNING: Removing unreachable block (ram,0x0001019cd4d0) */
/* WARNING: Removing unreachable block (ram,0x0001019cd508) */
/* WARNING: Removing unreachable block (ram,0x0001019cd51c) */

long FUN_1019cd8fc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  lVar2 = *unaff_x20;
  uVar1 = param_1;
  uVar4 = param_2;
  func_0x000107c5fadc();
  func_0x000107c5c1e0();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  if (lVar2 == 0) {
    lVar3 = 0;
    uVar4 = 0;
  }
  else {
    lVar3 = lVar2;
    func_0x000107c5faec(lVar2);
    func_0x000107c61170(lVar2);
  }
  FUN_1019cda2c(lVar3,uVar4,param_1,param_2);
  func_0x000107c6142c(uVar4);
  return lVar3;
}



/* Entry: 1019cd904; end: 1019cda2b;  */

undefined * FUN_1019cd904(undefined8 param_1,undefined *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x21;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar1 = 0;
  func_0x000107c5eb24();
  func_0x000107c613fc();
  func_0x000107c5eb20();
  uVar2 = uVar1;
  func_0x0001019cdc94();
  func_0x000107c5eb1c(&uStack_70,&UNK_1104264c8,param_1,param_2,&UNK_1104264c8,uVar2);
  if (unaff_x21 == 0) {
    param_2 = PTR_PTR_1126de6c8;
    func_0x000107c610f8(PTR_PTR_1126de6c8);
    uVar2 = uStack_70;
    func_0x000107c5fadc(uStack_70,uStack_68);
    uVar3 = uStack_60;
    func_0x000107c5fadc(uStack_60,uStack_58);
    func_0x000107c48eb0(param_2);
    func_0x000107c61574(uVar1);
    func_0x000107c6142c(uStack_58);
    func_0x000107c6142c(uStack_68);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar3);
  }
  else {
    func_0x000107c61574(uVar1);
  }
  return param_2;
}



/* Entry: 1019cda2c; end: 1019cdc43;  */

undefined8 * FUN_1019cda2c(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long extraout_x8;
  long unaff_x21;
  undefined8 *puVar6;
  long lStack_70;
  undefined8 *puStack_68;
  
  puVar1 = (undefined8 *)0x0;
  func_0x000107c5fb10();
  puVar6 = (undefined8 *)puVar1[-1];
  puVar2 = puVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(puVar6[8]);
  puVar4 = (undefined8 *)((long)&lStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  if (param_2 != (undefined8 *)0x0) {
    func_0x000107c61434(param_2);
    lVar3 = param_1;
    func_0x000107c5fb5c(param_1,param_2);
    if (0 < lVar3) {
      lStack_70 = param_1;
      puStack_68 = param_2;
      func_0x000107c5fb04(puVar4);
      func_0x000100e8b654();
      uVar5 = 0;
      puVar2 = puVar4;
      func_0x000107c60214(puVar4,0,PTR___sSSN_11034da80,lVar3);
      (*(code *)puVar6[1])(puVar4,puVar1);
      if (uVar5 >> 0x3c < 0xf) {
        puVar1 = puVar2;
        FUN_1019cd904(puVar2,uVar5);
        if (unaff_x21 != 0) {
          FUN_1019cdc54();
          func_0x000107c613f8(&UNK_1104263f0,puVar1,0,0);
          *puVar1 = param_3;
          puVar1[1] = param_4;
          puVar1[2] = param_1;
          puVar1[3] = param_2;
          puVar1[4] = unaff_x21;
          *(undefined1 *)(puVar1 + 5) = 2;
          func_0x000107c61654();
          func_0x000107c61434(param_4);
          func_0x0001000b44c0(puVar2,uVar5);
          return puVar6;
        }
        func_0x000107c6142c(param_2);
        func_0x0001000b44c0(puVar2,uVar5);
        return puVar1;
      }
      FUN_1019cdc54();
      func_0x000107c613f8(&UNK_1104263f0,puVar4,0,0);
      *puVar4 = param_3;
      puVar4[1] = param_4;
      puVar4[2] = param_1;
      puVar4[3] = param_2;
      puVar4[4] = 0;
      *(undefined1 *)(puVar4 + 5) = 1;
      goto LAB_1019cdb7c;
    }
    func_0x000107c6142c();
    puVar2 = param_2;
  }
  FUN_1019cdc54();
  func_0x000107c613f8(&UNK_1104263f0,puVar2,0,0);
  *puVar2 = param_3;
  puVar2[1] = param_4;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[2] = 0;
  *(undefined1 *)(puVar2 + 5) = 0;
LAB_1019cdb7c:
  func_0x000107c61654();
  func_0x000107c61434(param_4);
  return puVar6;
}



/* Entry: 1019cdc44; end: 1019cdc53;  */

undefined1  [16] FUN_1019cdc44(void)

{
  return ZEXT816(0x110426448);
}


