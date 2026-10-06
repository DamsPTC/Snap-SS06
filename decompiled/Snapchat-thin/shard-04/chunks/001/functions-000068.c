/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10309d36c; end: 10309d507;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10309d36c(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long extraout_x8;
  long unaff_x20;
  long lVar7;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  puVar2 = PTR_PTR_1126acb68;
  func_0x000107c610f8(PTR_PTR_1126acb68);
  func_0x000107c453e4();
  func_0x0001000d224c(&uStack_58);
  uVar3 = uStack_58;
  func_0x000107c515cc(uStack_58);
  func_0x000107c61180();
  func_0x000107c615e8(uStack_58);
  func_0x000107c58b58(puVar2);
  func_0x000107c61170(uVar3);
  lVar4 = *(long *)(unaff_x20 + _DAT_112f38f40);
  func_0x000107c3e944();
  func_0x000107c61180();
  lVar5 = lVar4;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  if (lVar5 != 0) {
    lVar4 = lVar5;
    func_0x000107c41050();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    if (lVar4 != 0) {
      func_0x000107c5eea0(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
      func_0x000107c5ee70();
      (**(code **)(lVar7 + 8))(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
      func_0x000107c3da20(lVar4);
      func_0x000107c61170(lVar5);
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c46ed0();
      func_0x000107c5258c(puVar2);
      func_0x000107c61170(lVar4);
      func_0x000107c61170(puVar6);
    }
  }
  return puVar2;
}



/* Entry: 10309d508; end: 10309dd57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10309d508(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  
  lVar18 = *param_2;
  lVar14 = *(long *)(lVar18 + _DAT_113090140);
  uVar21 = NEON_ucvtf(*(undefined8 *)(lVar14 + _DAT_11308ffc8));
  uVar22 = *(undefined8 *)(lVar14 + _DAT_11308ffe0);
  uVar8 = *(undefined8 *)(lVar14 + _DAT_11308ffd0);
  uVar23 = ((undefined8 *)(lVar14 + _DAT_11308ffd0))[1];
  uVar24 = *(undefined8 *)(lVar14 + _DAT_11308ffe8);
  uVar25 = NEON_ucvtf(*(undefined8 *)(lVar14 + _DAT_11308ffd8));
  uVar26 = *(undefined8 *)(lVar14 + _DAT_11308fff0);
  puVar4 = PTR_PTR_1126acb78;
  func_0x000107c610f8();
  func_0x000107c5fadc(uVar8,uVar23);
  func_0x000107c47800(uVar21,uVar25,uVar22,uVar24,uVar26);
  func_0x000107c61170(uVar8);
  uVar20 = *(ulong *)(lVar18 + _DAT_113090148);
  if (uVar20 >> 0x3e == 0) {
    uVar16 = *(ulong *)((uVar20 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar16 = uVar20 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar20) {
      uVar16 = uVar20;
    }
    func_0x000107c60480();
  }
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar16 != 0) {
    func_0x000103094e6c(0,uVar16 & ((long)uVar16 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar16 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10309dd54);
      (*pcVar3)();
    }
    uVar5 = 0;
    do {
      if ((uVar20 & 0xc000000000000001) == 0) {
        if (*(long *)((uVar20 & 0xffffffffffffff8) + 0x10) <= (long)uVar5) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10309dd20);
          (*pcVar3)();
        }
        uVar11 = *(ulong *)(uVar20 + 0x20 + uVar5 * 8);
        func_0x000107c61174();
      }
      else {
        uVar11 = uVar5;
        func_0x0001030b6250(uVar5,uVar20);
      }
      uVar15 = *(ulong *)(uVar11 + _DAT_113090028);
      if (uVar15 >> 0x3e == 0) {
        uVar19 = *(ulong *)((uVar15 & 0xffffffffffffff8) + 0x10);
        puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        uVar19 = uVar15 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar15) {
          uVar19 = uVar15;
        }
        func_0x000107c60480();
        puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      PTR___swiftEmptyArrayStorage_11034f1c8 = puVar10;
      if (uVar19 != 0) {
        func_0x000103094ea0(0,uVar19 & ((long)uVar19 >> 0x3f ^ 0xffffffffffffffffU),0);
        if ((long)uVar19 < 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10309dd1c);
          (*pcVar3)();
        }
        uVar17 = 0;
        do {
          if ((uVar15 & 0xc000000000000001) == 0) {
            uVar6 = *(ulong *)(uVar15 + uVar17 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            uVar6 = uVar17;
            func_0x0001030b63ec();
          }
          uVar8 = *(undefined8 *)(uVar6 + _DAT_113090060);
          uVar21 = ((undefined8 *)(uVar6 + _DAT_113090060))[1];
          uVar23 = *(undefined8 *)(uVar6 + _DAT_113090070);
          uVar22 = ((undefined8 *)(uVar6 + _DAT_113090070))[1];
          puVar7 = PTR_PTR_1126acb10;
          func_0x000107c610f8();
          func_0x000107c5fadc(uVar8,uVar21);
          func_0x000107c5fadc(uVar23,uVar22);
          func_0x000107c49490();
          func_0x000107c61170(uVar6);
          func_0x000107c61170(uVar8);
          func_0x000107c61170(uVar23);
          uVar6 = *(ulong *)(puVar10 + 0x10);
          if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar6) {
            func_0x000103094ea0(1 < *(ulong *)(puVar10 + 0x18),uVar6 + 1,1);
          }
          uVar17 = uVar17 + 1;
          *(ulong *)(puVar10 + 0x10) = uVar6 + 1;
          *(undefined **)(puVar10 + uVar6 * 8 + 0x20) = puVar7;
        } while (uVar19 != uVar17);
      }
      puVar7 = PTR_PTR_1126acb18;
      func_0x000107c610f8();
      uVar8 = 0;
      FUN_1030a471c(0,0x112f38c68,&PTR_PTR_1126acb10);
      puVar9 = puVar10;
      func_0x000107c5fc48(puVar10,uVar8);
      func_0x000107c6142c(puVar10);
      func_0x000107c49488();
      func_0x000107c61170(puVar9);
      if (((undefined8 *)(uVar11 + _DAT_113090020))[1] == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(undefined8 *)(uVar11 + _DAT_113090020);
        func_0x000107c5fadc(uVar8);
      }
      func_0x000107c56954(puVar7);
      func_0x000107c61170(uVar11);
      func_0x000107c61170(uVar8);
      uVar11 = *(ulong *)(puVar1 + 0x10);
      if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar11) {
        func_0x000103094e6c(1 < *(ulong *)(puVar1 + 0x18),uVar11 + 1,1);
      }
      uVar5 = uVar5 + 1;
      *(ulong *)(puVar1 + 0x10) = uVar11 + 1;
      *(undefined **)(puVar1 + uVar11 * 8 + 0x20) = puVar7;
    } while (uVar5 != uVar16);
  }
  lVar14 = *(long *)(lVar18 + _DAT_113090158);
  uVar8 = *(undefined8 *)(lVar14 + _DAT_1130900a0);
  uVar23 = *(undefined8 *)(lVar14 + _DAT_1130900a8);
  uVar21 = NEON_ucvtf(*(undefined8 *)(lVar14 + _DAT_1130900b0));
  puVar10 = PTR_PTR_1126acb80;
  func_0x000107c610f8();
  func_0x000107c48504(uVar8,uVar23,uVar21);
  puVar7 = PTR___sSuN_11034e220;
  puVar9 = PTR___sSus23CustomStringConvertiblesWP_11034e240;
  func_0x000107c6057c(_DAT_113090110);
  uVar8 = *(undefined8 *)(lVar18 + _DAT_113090118);
  uVar23 = ((undefined8 *)(lVar18 + _DAT_113090118))[1];
  uVar21 = *(undefined8 *)(lVar18 + _DAT_113090120);
  uVar20 = *(ulong *)(lVar18 + _DAT_113090150);
  if (uVar20 >> 0x3e == 0) {
    uVar16 = *(ulong *)((uVar20 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar16 = uVar20 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar20) {
      uVar16 = uVar20;
    }
    func_0x000107c60480();
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar16 != 0) {
    func_0x000100403514(0,uVar16 & ((long)uVar16 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar16 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10309dd58);
      (*pcVar3)();
    }
    uVar5 = 0;
    do {
      if ((uVar20 & 0xc000000000000001) == 0) {
        uVar11 = *(ulong *)(uVar20 + uVar5 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar11 = uVar5;
        func_0x0001030b60b4(uVar5,uVar20);
      }
      uVar22 = *(undefined8 *)(uVar11 + _DAT_1130900e0);
      uVar24 = ((undefined8 *)(uVar11 + _DAT_1130900e0))[1];
      func_0x000107c61434(uVar24);
      func_0x000107c61170(uVar11);
      uVar11 = *(ulong *)(puVar2 + 0x10);
      if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar11) {
        func_0x000100403514(1 < *(ulong *)(puVar2 + 0x18),uVar11 + 1,1);
      }
      uVar5 = uVar5 + 1;
      *(ulong *)(puVar2 + 0x10) = uVar11 + 1;
      *(undefined8 *)(puVar2 + uVar11 * 0x10 + 0x20) = uVar22;
      *(undefined8 *)(puVar2 + uVar11 * 0x10 + 0x28) = uVar24;
    } while (uVar16 != uVar5);
  }
  uVar22 = *(undefined8 *)(lVar18 + _DAT_113090130);
  uVar25 = ((undefined8 *)(lVar18 + _DAT_113090130))[1];
  uVar24 = *(undefined8 *)(lVar18 + _DAT_113090138);
  uVar26 = ((undefined8 *)(lVar18 + _DAT_113090138))[1];
  puVar12 = PTR_PTR_1126acb08;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(puVar7,puVar9);
  func_0x000107c6142c(puVar9);
  func_0x000107c5fadc(uVar8,uVar23);
  puVar9 = PTR___sSSN_11034da80;
  func_0x000107c5fc48(uVar21,PTR___sSSN_11034da80);
  puVar13 = puVar2;
  func_0x000107c5fc48(puVar2,puVar9);
  func_0x000107c6142c(puVar2);
  func_0x000107c5fadc(uVar22,uVar25);
  func_0x000107c5fadc(uVar24,uVar26);
  uVar23 = 0;
  FUN_1030a471c(0,0x112f38c70,&PTR_PTR_1126acb18);
  puVar9 = puVar1;
  func_0x000107c5fc48(puVar1,uVar23);
  func_0x000107c6142c(puVar1);
  func_0x000107c48128();
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(puVar9);
  uVar8 = *(undefined8 *)(lVar18 + _DAT_113090160);
  func_0x000107c5fadc(uVar8,((undefined8 *)(lVar18 + _DAT_113090160))[1]);
  func_0x000107c54024(puVar12);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar10);
  *param_1 = puVar12;
  return;
}



/* Entry: 10309dd58; end: 10309de87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10309dd58(long param_1,undefined8 param_2)

{
  long lVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  lVar1 = param_1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar5 = *(undefined8 *)(lVar1 + _DAT_112f38f30);
    func_0x000107c615f0(uVar5);
    func_0x000107c61170(lVar1);
    func_0x00010309a2fc();
    func_0x000107c615e8(uVar5);
  }
  pcVar2 = "createAdProductInstantPageContext()";
  func_0x0001000c10c0("createAdProductInstantPageContext()");
  func_0x000107c61180();
  puVar3 = &UNK_110607ce0;
  func_0x000107c613fc(&UNK_110607ce0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(long *)(puVar3 + 0x18) = param_1;
  pcStack_68 = FUN_1030a4714;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0x42000000;
  puStack_78 = &UNK_1000f6b44;
  puStack_70 = &UNK_110607cf8;
  ppuVar4 = &puStack_88;
  puStack_60 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  puVar3 = puStack_60;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_1);
  func_0x000107c61574(puVar3);
  func_0x000107c4e524(pcVar2);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c615e8(pcVar2);
  return;
}



/* Entry: 10309de88; end: 10309df1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10309de88(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c61428(param_2 + 0x10,auStack_50,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined1 *)(param_2 + _DAT_112f38fc0);
      func_0x000107c61170();
    }
    FUN_103098660(uVar1);
    func_0x000107c615e8(param_1);
  }
  return;
}



/* Entry: 10309df1c; end: 10309e00b;  */

void FUN_10309df1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c61174();
    FUN_1030a250c(param_2,param_3,param_1,param_1);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 10309e00c; end: 10309e86f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10309e00c(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  long extraout_x8;
  long extraout_x8_00;
  long lVar17;
  long lVar18;
  long lVar19;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long lVar20;
  long unaff_x20;
  code *pcVar21;
  long lVar22;
  long lVar23;
  code *pcVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  code *pcVar28;
  long lStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_98;
  ulong uStack_70;
  ulong uStack_68;
  
  lVar4 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar7 = (long)&lStack_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar20 = lVar7 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar26 = lVar20 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar25 = lVar26 - extraout_x12_01;
  lVar5 = 0;
  func_0x000107c5ede0();
  lVar27 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar27 + 0x40));
  lVar23 = lVar25 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar18 = lVar23 - extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar19 = lVar18 - extraout_x12_03;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar17 = lVar19 - extraout_x12_04;
  func_0x000107c5edd0(lVar26,param_1,param_2);
  pcVar21 = *(code **)(lVar27 + 0x30);
  lVar4 = lVar26;
  (*pcVar21)(lVar26,1,lVar5);
  if ((int)lVar4 == 1) {
    FUN_1030a47a0(lVar26,0x112d36580,&UNK_10d9016d0);
    (**(code **)(lVar27 + 0x38))(lVar25,1,1,lVar5);
    FUN_1030a47a0(lVar25,0x112d36580,&UNK_10d9016d0);
    return;
  }
  lStack_c8 = *(long *)(unaff_x20 + _DAT_112f38ee0);
  lVar22 = *(long *)(lStack_c8 + _DAT_1130682c0);
  uStack_d8 = *(undefined8 *)(lStack_c8 + _DAT_1130682e0);
  lVar3 = ((undefined8 *)(lStack_c8 + _DAT_1130682e0))[1];
  plVar1 = (long *)(*(long *)(lStack_c8 + _DAT_113068288) + _DAT_113067eb8);
  lVar4 = *plVar1;
  lStack_98 = plVar1[1];
  lStack_e0 = lVar7;
  pcStack_d0 = pcVar21;
  lStack_c0 = lVar23;
  if (lStack_98 == 0) {
    lStack_98 = 0;
  }
  else {
    func_0x000107c5fb1c(lVar4);
  }
  func_0x000107c61434(lVar3);
  func_0x000107c61434(lVar22);
  func_0x0001000d224c(&uStack_68);
  uVar8 = uStack_68;
  func_0x000107c425e4();
  func_0x000107c615e8(uStack_68);
  func_0x0001000d224c(&uStack_70);
  uVar6 = uStack_70;
  func_0x000107c425e8();
  func_0x000107c615e8(uStack_70);
  lVar23 = *(long *)(lVar22 + 0x10);
  lVar7 = lVar22;
  func_0x000107c61434(lVar22);
  if (lVar23 == 0) {
LAB_10309e2f0:
    lVar23 = lVar7;
    if ((uVar8 & 1) == 0) {
      func_0x000107c5ed74();
      uVar8 = 0x74756f6b63656863;
      func_0x000100077018(0x74756f6b63656863,0xe900000000000073,lVar7);
      func_0x000107c6142c(lVar7);
      lVar23 = lVar7;
      if ((uVar8 & 1) == 0) {
        func_0x000107c5ed74();
        uVar8 = 0x74726163;
        lVar15 = -0x1c00000000000000;
        func_0x000100077018(0x74726163,0xe400000000000000,lVar7);
        func_0x000107c6142c(lVar7);
        lVar23 = lVar7;
        if ((uVar8 & 1) == 0) {
          lVar23 = lVar15;
          func_0x000107c5ed70();
          uVar8 = 0;
          func_0x000107c5fbb4(0xd00000000000001a,0x800000010f11d230,lVar7,lVar23);
          func_0x000107c6142c(lVar23);
          lVar7 = lVar23;
          if ((uVar8 & 1) == 0) goto LAB_10309e3f4;
        }
      }
    }
    lVar7 = lVar23;
    if (lStack_98 != 0) {
      lVar7 = lVar22;
      func_0x000107c61558(lVar22);
      func_0x000107c61434(lStack_98);
      func_0x00010018433c(lVar4,lStack_98,0x6469436353,0xe500000000000000,lVar7);
      lVar7 = lVar4;
    }
  }
  else {
    lVar7 = 0x6469436353;
    uVar14 = 0;
    func_0x000100029284(0x6469436353);
    if ((uVar14 & 1) == 0) goto LAB_10309e2f0;
  }
LAB_10309e3f4:
  if ((uVar6 & 1) == 0) {
    func_0x000107c5ed74();
    uVar8 = 0x74756f6b63656863;
    func_0x000100077018(0x74756f6b63656863,0xe900000000000073,lVar7);
    func_0x000107c6142c(lVar7);
    if ((uVar8 & 1) != 0) goto LAB_10309e4a4;
    func_0x000107c5ed74();
    uVar8 = 0x74726163;
    uVar16 = 0xe400000000000000;
    func_0x000100077018(0x74726163,0xe400000000000000,lVar7);
    func_0x000107c6142c(lVar7);
    if ((uVar8 & 1) != 0) goto LAB_10309e4a4;
    func_0x000107c5ed70();
    uVar8 = 0;
    func_0x000107c5fbb4(0xd00000000000001a,0x800000010f11d230,lVar7,uVar16);
    func_0x000107c6142c(uVar16);
    if ((uVar8 & 1) != 0) goto LAB_10309e4a4;
  }
  else {
LAB_10309e4a4:
    lVar4 = lVar22;
    func_0x000107c61558(lVar22);
    func_0x00010018433c(0x7461686370616e73,0xe800000000000000,0x72756f735f6d7475,0xea00000000006563,
                        lVar4);
  }
  lVar4 = lVar22;
  FUN_10309b048(lVar22);
  func_0x000103c4e488(lVar19);
  func_0x000107c6142c(lVar4);
  if (lVar3 == 0) {
    func_0x000107c6142c(lVar22);
    func_0x000107c6142c(lStack_98);
  }
  else {
    func_0x000107c5edd0(lVar20,uStack_d8,lVar3);
    lVar4 = lVar20;
    (*pcStack_d0)(lVar20,1,lVar5);
    if ((int)lVar4 != 1) {
      pcVar28 = *(code **)(lVar27 + 0x20);
      (*pcVar28)(lVar18,lVar20,lVar5);
      lVar4 = 0x112d38280;
      func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
      func_0x000107c61538();
      lVar20 = lVar4;
      func_0x000103c4eaa0();
      func_0x000107c61408(lVar4 + 0x20,7,PTR___sSSN_11034da80);
      func_0x000103c4e488(lVar25,lVar20,0);
      func_0x000107c6142c(lVar22);
      func_0x000107c6142c(lVar3);
      func_0x000107c6142c(lVar20);
      func_0x000107c6142c(lStack_98);
      pcVar21 = *(code **)(lVar27 + 8);
      (*pcVar21)(lVar18,lVar5);
      (*pcVar21)(lVar19,lVar5);
      func_0x000107c6142c(lVar22);
      goto LAB_10309e66c;
    }
    func_0x000107c6142c(lVar22);
    func_0x000107c6142c(lVar3);
    func_0x000107c6142c(lStack_98);
    FUN_1030a47a0(lVar20,0x112d36580,&UNK_10d9016d0);
  }
  pcVar28 = *(code **)(lVar27 + 0x20);
  (*pcVar28)(lVar25,lVar19,lVar5);
  func_0x000107c6142c(lVar22);
  pcVar21 = *(code **)(lVar27 + 8);
LAB_10309e66c:
  (*pcVar21)(lVar26,lVar5);
  pcVar24 = *(code **)(lVar27 + 0x38);
  (*pcVar24)(lVar25,0,1,lVar5);
  (*pcVar28)(lVar17,lVar25,lVar5);
  lVar4 = lStack_c0;
  FUN_1030a0c90(lStack_c0,lVar17);
  func_0x000107c5ed70();
  FUN_10309a550();
  func_0x000107c6142c(lVar25);
  puVar9 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
  func_0x000107c5a9c4();
  func_0x000107c61180();
  puVar10 = puVar9;
  func_0x000107c5ed90();
  puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100dfa5c8(PTR___swiftEmptyArrayStorage_11034f1c8);
  uVar12 = 0;
  func_0x000100dfa6ec(0);
  uVar16 = 0x112d377a8;
  FUN_1030a45a4(0x112d377a8,&SUB_100dfa6ec,&UNK_10d901780);
  puVar13 = puVar11;
  func_0x000107c5f9dc(puVar11,uVar12,PTR___sypN_11034f1a8 + 8,uVar16);
  func_0x000107c6142c(puVar11);
  func_0x000107c4de70(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar13);
  if (*(long *)(lStack_c8 + _DAT_1130682b8) != 0) {
    puVar2 = (undefined8 *)(*(long *)(lStack_c8 + _DAT_1130682b8) + _DAT_1130679d0);
    pcVar28 = (code *)*puVar2;
    if (pcVar28 != (code *)0x0) {
      uVar16 = puVar2[1];
      func_0x000107c6157c(uVar16);
      (*pcVar28)();
      lVar25 = lStack_e0;
      (**(code **)(lVar27 + 0x10))(lStack_e0,lVar4,lVar5);
      (*pcVar24)(lVar25,0,1,lVar5);
      FUN_1030a1bb4(lVar25);
      func_0x000100d33b80(pcVar28,uVar16);
      FUN_1030a47a0(lVar25,0x112d36580,&UNK_10d9016d0);
    }
  }
  (*pcVar21)(lVar17,lVar5);
  (*pcVar21)(lVar4,lVar5);
  return;
}



/* Entry: 10309e870; end: 10309e8c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10309e870(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + _DAT_112f38fc0) = 1;
    func_0x000107c61170();
  }
  return;
}



/* Entry: 10309e8c8; end: 10309e937;  */

void FUN_10309e8c8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    FUN_10309e938(param_1,param_2);
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 10309e938; end: 10309f1bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10309e938(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long extraout_x8;
  long lVar12;
  long lVar13;
  code *pcVar14;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long unaff_x20;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  code *pcVar24;
  long lVar25;
  long lVar26;
  long alStack_100 [2];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_88;
  ulong uStack_70;
  ulong uStack_68;
  
  lVar4 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar7 = (long)&uStack_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar17 = lVar7 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar23 = lVar17 - extraout_x12_00;
  lVar5 = 0;
  func_0x000107c5ede0();
  lVar26 = *(long *)(lVar5 + -8);
  lVar25 = *(long *)(lVar26 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar19 = lVar23 - (lVar25 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar19 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar12 - extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar22 = lVar13 - extraout_x12_03;
  func_0x000107c5edd0(lVar17,param_1,param_2);
  pcVar14 = *(code **)(lVar26 + 0x30);
  lVar4 = lVar17;
  (*pcVar14)(lVar17,1,lVar5);
  if ((int)lVar4 == 1) {
    FUN_1030a47a0(lVar17,0x112d36580,&UNK_10d9016d0);
    (**(code **)(lVar26 + 0x38))(lVar23,1,1,lVar5);
    FUN_1030a47a0(lVar23,0x112d36580,&UNK_10d9016d0);
    return;
  }
  lStack_d0 = *(long *)(unaff_x20 + _DAT_112f38ee0);
  lVar20 = *(long *)(lStack_d0 + _DAT_1130682c0);
  uStack_e0 = *(undefined8 *)(lStack_d0 + _DAT_1130682e0);
  lVar3 = ((undefined8 *)(lStack_d0 + _DAT_1130682e0))[1];
  plVar1 = (long *)(*(long *)(lStack_d0 + _DAT_113068288) + _DAT_113067eb8);
  lVar4 = *plVar1;
  lStack_88 = plVar1[1];
  uStack_f0 = param_1;
  uStack_e8 = param_2;
  lStack_d8 = lVar23;
  lStack_c8 = lVar19;
  if (lStack_88 == 0) {
    lStack_88 = 0;
  }
  else {
    func_0x000107c5fb1c(lVar4);
  }
  func_0x000107c61434(lVar3);
  func_0x000107c61434(lVar20);
  func_0x0001000d224c(&uStack_68);
  uVar6 = uStack_68;
  func_0x000107c425e4();
  func_0x000107c615e8(uStack_68);
  func_0x0001000d224c(&uStack_70);
  uVar16 = uStack_70;
  func_0x000107c425e8();
  func_0x000107c615e8(uStack_70);
  lVar23 = *(long *)(lVar20 + 0x10);
  lVar19 = lVar20;
  func_0x000107c61434(lVar20);
  if (lVar23 == 0) {
LAB_10309ec0c:
    lVar23 = lVar19;
    if ((uVar6 & 1) == 0) {
      func_0x000107c5ed74();
      uVar6 = 0x74756f6b63656863;
      func_0x000100077018(0x74756f6b63656863,0xe900000000000073,lVar19);
      func_0x000107c6142c(lVar19);
      lVar23 = lVar19;
      if ((uVar6 & 1) == 0) {
        func_0x000107c5ed74();
        uVar6 = 0x74726163;
        lVar9 = -0x1c00000000000000;
        func_0x000100077018(0x74726163,0xe400000000000000,lVar19);
        func_0x000107c6142c(lVar19);
        lVar23 = lVar19;
        if ((uVar6 & 1) == 0) {
          lVar23 = lVar9;
          func_0x000107c5ed70();
          uVar6 = 0;
          func_0x000107c5fbb4(0xd00000000000001a,0x800000010f11d230,lVar19,lVar23);
          func_0x000107c6142c(lVar23);
          lVar19 = lVar23;
          if ((uVar6 & 1) == 0) goto LAB_10309ed10;
        }
      }
    }
    lVar19 = lVar23;
    if (lStack_88 != 0) {
      lVar19 = lVar20;
      func_0x000107c61558(lVar20);
      func_0x000107c61434(lStack_88);
      func_0x00010018433c(lVar4,lStack_88,0x6469436353,0xe500000000000000,lVar19);
      lVar19 = lVar4;
    }
  }
  else {
    lVar19 = 0x6469436353;
    uVar18 = 0;
    func_0x000100029284(0x6469436353);
    if ((uVar18 & 1) == 0) goto LAB_10309ec0c;
  }
LAB_10309ed10:
  if ((uVar16 & 1) == 0) {
    func_0x000107c5ed74();
    uVar6 = 0x74756f6b63656863;
    func_0x000100077018(0x74756f6b63656863,0xe900000000000073,lVar19);
    func_0x000107c6142c(lVar19);
    if ((uVar6 & 1) != 0) goto LAB_10309edc0;
    func_0x000107c5ed74();
    uVar6 = 0x74726163;
    uVar10 = 0xe400000000000000;
    func_0x000100077018(0x74726163,0xe400000000000000,lVar19);
    func_0x000107c6142c(lVar19);
    if ((uVar6 & 1) != 0) goto LAB_10309edc0;
    func_0x000107c5ed70();
    uVar6 = 0;
    func_0x000107c5fbb4(0xd00000000000001a,0x800000010f11d230,lVar19,uVar10);
    func_0x000107c6142c(uVar10);
    if ((uVar6 & 1) != 0) goto LAB_10309edc0;
  }
  else {
LAB_10309edc0:
    lVar4 = lVar20;
    func_0x000107c61558(lVar20);
    func_0x00010018433c(0x7461686370616e73,0xe800000000000000,0x72756f735f6d7475,0xea00000000006563,
                        lVar4);
  }
  lVar4 = lVar20;
  FUN_10309b048(lVar20);
  func_0x000103c4e488(lVar13);
  func_0x000107c6142c(lVar4);
  if (lVar3 == 0) {
    func_0x000107c6142c(lVar20);
    func_0x000107c6142c(lStack_88);
  }
  else {
    func_0x000107c5edd0(lVar7,uStack_e0,lVar3);
    lVar4 = lVar7;
    (*pcVar14)(lVar7,1,lVar5);
    if ((int)lVar4 != 1) {
      pcVar24 = *(code **)(lVar26 + 0x20);
      (*pcVar24)(lVar12,lVar7,lVar5);
      lVar4 = 0x112d38280;
      func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
      func_0x000107c61538();
      lVar7 = lVar4;
      func_0x000103c4eaa0();
      func_0x000107c61408(lVar4 + 0x20,7,PTR___sSSN_11034da80);
      lVar4 = lStack_d8;
      func_0x000103c4e488(lStack_d8,lVar7,0);
      func_0x000107c6142c(lVar20);
      func_0x000107c6142c(lVar3);
      func_0x000107c6142c(lVar7);
      func_0x000107c6142c(lStack_88);
      pcVar14 = *(code **)(lVar26 + 8);
      (*pcVar14)(lVar12,lVar5);
      (*pcVar14)(lVar13,lVar5);
      func_0x000107c6142c(lVar20);
      goto LAB_10309ef90;
    }
    func_0x000107c6142c(lVar20);
    func_0x000107c6142c(lVar3);
    func_0x000107c6142c(lStack_88);
    FUN_1030a47a0(lVar7,0x112d36580,&UNK_10d9016d0);
  }
  lVar4 = lStack_d8;
  pcVar24 = *(code **)(lVar26 + 0x20);
  (*pcVar24)(lStack_d8,lVar13,lVar5);
  func_0x000107c6142c(lVar20);
  pcVar14 = *(code **)(lVar26 + 8);
LAB_10309ef90:
  (*pcVar14)(lVar17,lVar5);
  (**(code **)(lVar26 + 0x38))(lVar4,0,1,lVar5);
  (*pcVar24)(lVar22,lVar4,lVar5);
  func_0x000107c5ed70();
  func_0x00010309a558();
  func_0x000107c6142c(lVar4);
  lVar4 = lStack_c8;
  (**(code **)(lVar26 + 0x10))(lStack_c8,lVar22,lVar5);
  uVar6 = (ulong)*(byte *)(lVar26 + 0x50);
  uVar16 = uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff);
  uVar18 = lVar25 + uVar16 + 7 & 0xfffffffffffffff8;
  puVar8 = &UNK_110607bc8;
  func_0x000107c613fc(&UNK_110607bc8,uVar18 + 8,uVar6 | 7);
  (*pcVar24)(puVar8 + uVar16,lVar4,lVar5);
  *(long *)(puVar8 + uVar18) = unaff_x20;
  func_0x000107c61174();
  *(undefined **)(lVar22 + -0x10) = PTR___sytN_11034f1b0 + 8;
  uVar10 = 6;
  func_0x0001001ca524(6,0,8,3,0,0,&UNK_10db84538,puVar8);
  func_0x000107c61574(puVar8);
  func_0x000107c61574(uVar10);
  if (*(long *)(lStack_d0 + _DAT_1130682b8) != 0) {
    puVar2 = (undefined8 *)(*(long *)(lStack_d0 + _DAT_1130682b8) + _DAT_1130679c8);
    pcVar24 = (code *)*puVar2;
    if (pcVar24 != (code *)0x0) {
      uVar21 = puVar2[1];
      func_0x000107c6157c(uVar21);
      uVar10 = uStack_f0;
      uVar11 = uStack_e8;
      (*pcVar24)(uStack_f0,uStack_e8);
      FUN_10309c554();
      uVar15 = uVar10;
      func_0x000107c5ed70();
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar11);
      func_0x000107c5a26c(uVar10);
      func_0x000107c61170(uVar15);
      uVar15 = *(undefined8 *)(unaff_x20 + _DAT_112f38fa0);
      puVar8 = PTR_PTR_1126acb20;
      func_0x000107c610f8(PTR_PTR_1126acb20);
      func_0x000107c467ec();
      func_0x000107c4bc34(uVar15);
      func_0x000100d33b80(pcVar24,uVar21);
      func_0x000107c61170(uVar10);
      func_0x000107c61170(puVar8);
    }
  }
  (*pcVar14)(lVar22,lVar5);
  return;
}



/* Entry: 10309f1c0; end: 10309f37b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10309f1c0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  puVar2 = (undefined *)(param_1 + 0x10);
  func_0x000107c61618();
  if (puVar2 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126b1588;
    func_0x000107c610f8(PTR_PTR_1126b1588);
    func_0x000107c453e4();
    FUN_1030a471c(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    puVar2 = (undefined *)0x0;
    func_0x000107c6010c(0);
    func_0x000107c43b74(puVar1);
  }
  else {
    puVar1 = puVar2;
    func_0x0001000d224c(&uStack_50);
    func_0x00010309f294();
    func_0x000107c615e8(uStack_50);
  }
  func_0x000107c61170(puVar2);
  return puVar1;
}



/* Entry: 10309f37c; end: 10309f81f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10309f37c(long param_1,undefined *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong *puVar6;
  undefined8 uVar7;
  long lVar8;
  long extraout_x12;
  long extraout_x12_00;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar1 = 0;
  func_0x000107c5eb08();
  lStack_d0 = *(long *)(lVar1 + -8);
  lStack_c8 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_d0 + 0x40));
  lVar11 = (long)&lStack_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  lStack_d8 = lVar11;
  func_0x000107c5eb9c();
  lStack_c0 = *(long *)(lVar1 + -8);
  lStack_b8 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_c0 + 0x40));
  lVar11 = lVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar8 = lVar11 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_e0 = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar8 - extraout_x12;
  lVar1 = 0x112d36580;
  lStack_b0 = lVar8;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar8 = lVar8 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar9 = (undefined *)(lVar8 - extraout_x12_00);
  func_0x000107c61428(param_1 + 0x10,auStack_78,0,0);
  lVar1 = param_1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    puVar6 = *(ulong **)(lVar1 + _DAT_112f38f10);
    func_0x000107c61174();
    func_0x000107c61170(lVar1);
    (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar6) + 0xf8))(puVar9);
    func_0x000107c61170(puVar6);
    lVar1 = 1;
    puVar3 = puVar9;
    (**(code **)(lVar10 + 0x30))(puVar9,1,lVar2);
    if ((int)puVar3 == 1) {
      FUN_1030a47a0(puVar9,0x112d36580,&UNK_10d9016d0);
    }
    else {
      func_0x000107c5ed70();
      (**(code **)(lVar10 + 8))(puVar9,lVar2);
      if ((puVar3 == param_2) && (lVar1 == param_3)) {
        func_0x000107c6142c(lVar1);
        return;
      }
      func_0x000107c605b8(puVar3,lVar1,param_2,param_3,0);
      func_0x000107c6142c(lVar1);
      if (((ulong)puVar3 & 1) != 0) {
        return;
      }
    }
  }
  func_0x000107c61428(param_1 + 0x10,auStack_90,0,0);
  lVar1 = param_1 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    (**(code **)(lVar10 + 0x38))(lVar8,1,1,lVar2);
    goto LAB_10309f7bc;
  }
  func_0x000107c61170();
  func_0x000107c5eb78(lVar11);
  lVar4 = 0x2b;
  func_0x000107c5eb8c(0x2b,0xe100000000000000);
  puStack_a8 = param_2;
  lStack_a0 = param_3;
  func_0x000100e8b654();
  puVar9 = PTR___sSSN_11034da80;
  lVar1 = lVar4;
  func_0x000107c60208();
  if (lVar1 == 0) {
LAB_10309f678:
    (**(code **)(lStack_c0 + 8))(lVar11,lStack_b8);
    lVar1 = lStack_b0;
    (**(code **)(lVar10 + 0x38))(lVar8,1,1,lVar2);
  }
  else {
    lVar5 = lVar11;
    puVar3 = PTR___sSSN_11034da80;
    puStack_a8 = puVar9;
    lStack_a0 = lVar1;
    func_0x000107c60200(lVar11,PTR___sSSN_11034da80,lVar4);
    func_0x000107c6142c(lVar1);
    if (puVar3 == (undefined *)0x0) goto LAB_10309f678;
    func_0x000107c5edd0(lVar8,lVar5,puVar3);
    func_0x000107c6142c(puVar3);
    (**(code **)(lStack_c0 + 8))(lVar11,lStack_b8);
    lVar1 = lStack_b0;
  }
  lVar11 = lVar8;
  (**(code **)(lVar10 + 0x30))(lVar8,1,lVar2);
  if ((int)lVar11 != 1) {
    (**(code **)(lVar10 + 0x20))(lVar1,lVar8,lVar2);
    func_0x000107c61428(param_1 + 0x10,&puStack_a8,0,0);
    param_1 = param_1 + 0x10;
    func_0x000107c61618();
    if (param_1 != 0) {
      uVar7 = *(undefined8 *)(param_1 + _DAT_112f38f10);
      func_0x000107c61174(uVar7);
      func_0x000107c61170(param_1);
      lVar11 = lStack_e0;
      (**(code **)(lVar10 + 0x10))(lStack_e0,lVar1,lVar2);
      lVar8 = lStack_d8;
      func_0x000107c5eaec(lStack_d8,0x404e000000000000,lVar11,0);
      func_0x000107c5eae0();
      (**(code **)(lStack_d0 + 8))(lVar8,lStack_c8);
      func_0x000107c4b768(uVar7);
      func_0x000107c61180();
      func_0x000107c61170();
      func_0x000107c61170(uVar7);
      func_0x000107c61170(lVar11);
    }
    (**(code **)(lVar10 + 8))(lVar1,lVar2);
    return;
  }
LAB_10309f7bc:
  FUN_1030a47a0(lVar8,0x112d36580,&UNK_10d9016d0);
  return;
}



/* Entry: 10309f820; end: 10309f96f;  */

void FUN_10309f820(undefined8 param_1,undefined *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long extraout_x8;
  long lVar7;
  long lVar8;
  undefined *puStack_60;
  long lStack_58;
  
  lVar1 = 0;
  func_0x000107c5eb9c();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)&puStack_60 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5eb78(lVar7);
  lVar2 = 0x2b;
  func_0x000107c5eb8c(0x2b,0xe100000000000000);
  if (param_3 != 0) {
    puStack_60 = param_2;
    lStack_58 = param_3;
    func_0x000100e8b654();
    puVar3 = PTR___sSSN_11034da80;
    lVar5 = lVar2;
    func_0x000107c60208();
    if (lVar5 != 0) {
      lVar4 = lVar7;
      puVar6 = PTR___sSSN_11034da80;
      puStack_60 = puVar3;
      lStack_58 = lVar5;
      func_0x000107c60200(lVar7,PTR___sSSN_11034da80,lVar2);
      func_0x000107c6142c(lVar5);
      if (puVar6 != (undefined *)0x0) {
        func_0x000107c5edd0(param_1,lVar4,puVar6);
        func_0x000107c6142c(puVar6);
        (**(code **)(lVar8 + 8))(lVar7,lVar1);
        return;
      }
    }
  }
  (**(code **)(lVar8 + 8))(lVar7,lVar1);
  lVar1 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(param_1,1,1,lVar1);
  return;
}



/* Entry: 10309f970; end: 10309fa27;  */

void FUN_10309f970(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar3 = &puStack_60;
  pcVar2 = "createAdProductInstantPageContext()";
  func_0x0001000c10c0("createAdProductInstantPageContext()");
  func_0x000107c61180();
  uStack_40 = 0x1030a44b4;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_110607af0;
  uStack_38 = param_1;
  func_0x000107c60bc4(&puStack_60);
  uVar1 = uStack_38;
  func_0x000107c6157c(param_1);
  func_0x000107c61574(uVar1);
  func_0x000107c4e524(pcVar2,param_2,ppuVar3);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar2);
  return;
}



/* Entry: 10309fa28; end: 10309fab3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10309fa28(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112f38f10);
    func_0x000107c61174(uVar2);
    func_0x000107c61170(param_1);
    uVar1 = uVar2;
    func_0x000107c4fd70(uVar2);
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar1);
  }
  return;
}



/* Entry: 10309fab4; end: 10309fb9f;  */

void FUN_10309fab4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  char *pcVar2;
  undefined **ppuVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  ppuVar3 = &puStack_80;
  pcVar2 = "createAdProductInstantPageContext()";
  func_0x0001000c10c0("createAdProductInstantPageContext()");
  func_0x000107c61180();
  func_0x000107c613fc(param_4,0x28,7);
  *(undefined8 *)(param_4 + 0x10) = param_3;
  *(undefined8 *)(param_4 + 0x18) = param_1;
  *(undefined8 *)(param_4 + 0x20) = param_2;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  uStack_68 = param_6;
  uStack_60 = param_5;
  lStack_58 = param_4;
  func_0x000107c60bc4(&puStack_80);
  lVar1 = lStack_58;
  func_0x000107c6157c(param_3);
  func_0x000107c61434(param_2);
  func_0x000107c61574(lVar1);
  func_0x000107c4e524(pcVar2);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar2);
  return;
}



/* Entry: 10309fba0; end: 10309fd2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10309fba0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112f38f10);
    func_0x000107c61174(uVar1);
    func_0x000107c61170(param_1);
    func_0x000107c5fadc(param_2,param_3);
    func_0x000107c42a80(uVar1);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 10309fd2c; end: 10309fd63;  */

void FUN_10309fd2c(long param_1)

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



/* Entry: 10309fd64; end: 1030a0a77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10309fd64(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined **ppuVar6;
  char *pcVar7;
  undefined *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar9;
  undefined *puVar10;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  long extraout_x12_07;
  undefined8 uVar11;
  long lVar12;
  code *pcVar13;
  long lVar14;
  undefined *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  code *pcVar19;
  code *pcVar20;
  undefined *puStack_190;
  undefined8 uStack_188;
  uint uStack_17c;
  long lStack_178;
  undefined *puStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [32];
  
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar18 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar18 + 0x40));
  lVar9 = (long)&puStack_190 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_130 = lVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar9 - extraout_x12;
  lStack_150 = lVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar9 - extraout_x12_00;
  lStack_140 = lVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar9 - extraout_x12_01;
  lVar12 = 0x112d36580;
  lStack_128 = lVar9;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
  puVar10 = (undefined *)(lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  puStack_118 = puVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = (long)puVar10 - extraout_x12_02;
  lStack_158 = lVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar9 - extraout_x12_03;
  lStack_138 = lVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar9 - extraout_x12_04;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar9 - extraout_x12_05;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar17 = lVar14 - extraout_x12_06;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar16 = lVar17 - extraout_x12_07;
  puVar10 = PTR_PTR_1126b1588;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puStack_120 = puVar10;
  func_0x000107c61428(param_3 + 0x10,auStack_90,0,0);
  lVar12 = param_3 + 0x10;
  func_0x000107c61618();
  if (lVar12 == 0) {
    (**(code **)(lVar18 + 0x38))(lVar17,1,1,lVar2);
  }
  else {
    FUN_10309f820(lVar17,param_1,param_2);
    func_0x000107c61170(lVar12);
  }
  func_0x0001001021cc(lVar17,lVar14);
  pcVar19 = *(code **)(lVar18 + 0x30);
  lVar12 = lVar14;
  (*pcVar19)(lVar14,1,lVar2);
  if ((int)lVar12 == 1) {
    func_0x000107c61428(param_3 + 0x10,auStack_a8,0,0);
    lVar12 = param_3 + 0x10;
    func_0x000107c61618();
    if (lVar12 == 0) {
      pcVar20 = *(code **)(lVar18 + 0x38);
      (*pcVar20)(lVar16,1,1,lVar2);
    }
    else {
      lVar17 = *(long *)(lVar12 + _DAT_112f38f10);
      func_0x000107c61174();
      func_0x000107c61170(lVar12);
      lVar12 = lVar17;
      func_0x000107c3abfc();
      func_0x000107c61180();
      func_0x000107c61170(lVar17);
      if (lVar12 != 0) {
        func_0x000107c5edb4(lVar9,lVar12);
        func_0x000107c61170(lVar12);
      }
      pcVar20 = *(code **)(lVar18 + 0x38);
      (*pcVar20)(lVar9,lVar12 == 0,1,lVar2);
      func_0x0001001021cc(lVar9,lVar16);
    }
    puVar10 = puStack_118;
    lVar12 = lVar14;
    (*pcVar19)(lVar14,1,lVar2);
    if ((int)lVar12 != 1) {
      FUN_1030a47a0(lVar14,0x112d36580,&UNK_10d9016d0);
    }
  }
  else {
    (**(code **)(lVar18 + 0x20))(lVar16,lVar14,lVar2);
    pcVar20 = *(code **)(lVar18 + 0x38);
    (*pcVar20)(lVar16,0,1,lVar2);
    puVar10 = puStack_118;
  }
  func_0x000107c61428(param_3 + 0x10,auStack_c0,0,0);
  lVar12 = param_3 + 0x10;
  func_0x000107c61618();
  if (lVar12 == 0) goto LAB_1030a0738;
  lVar9 = *(long *)(lVar12 + _DAT_112f38ee0);
  func_0x000107c61174();
  func_0x000107c61170(lVar12);
  func_0x000107c61428(param_3 + 0x10,auStack_d8,0,0);
  lVar12 = param_3 + 0x10;
  func_0x000107c61618();
  if (lVar12 == 0) {
    func_0x000107c61170(lVar9);
    goto LAB_1030a0738;
  }
  uVar11 = *(undefined8 *)(lVar12 + _DAT_112f38f08);
  func_0x000107c6157c(uVar11);
  func_0x000107c61170(lVar12);
  func_0x0001000d224c(&puStack_108);
  func_0x000107c61574(uVar11);
  puVar3 = puStack_108;
  lVar12 = lVar16;
  (*pcVar19)(lVar16,1,lVar2);
  if ((int)lVar12 == 0) {
    (**(code **)(lVar18 + 0x10))(lStack_128,lVar16,lVar2);
    puVar15 = *(undefined **)(lVar9 + _DAT_1130682c0);
    uStack_188 = *(undefined8 *)(lVar9 + _DAT_1130682e0);
    lStack_178 = ((undefined8 *)(lVar9 + _DAT_1130682e0))[1];
    puVar1 = (undefined8 *)(*(long *)(lVar9 + _DAT_113068288) + _DAT_113067eb8);
    puStack_190 = (undefined *)*puVar1;
    lStack_160 = puVar1[1];
    lStack_168 = lVar9;
    lStack_148 = lVar18;
    if (lStack_160 == 0) {
      lStack_160 = 0;
    }
    else {
      func_0x000107c5fb1c();
    }
    puVar8 = puVar3;
    func_0x000107c425e4();
    puStack_170 = puVar3;
    func_0x000107c425e8();
    uStack_17c = (uint)puVar3;
    lVar12 = *(long *)(puVar15 + 0x10);
    puVar3 = puVar15;
    func_0x000107c61434(puVar15);
    if (lVar12 == 0) {
LAB_1030a0304:
      puVar4 = puVar3;
      if (((ulong)puVar8 & 1) == 0) {
        func_0x000107c5ed74();
        uVar5 = 0x74756f6b63656863;
        func_0x000100077018(0x74756f6b63656863,0xe900000000000073,puVar3);
        func_0x000107c6142c(puVar3);
        puVar4 = puVar3;
        if ((uVar5 & 1) == 0) {
          func_0x000107c5ed74();
          uVar5 = 0x74726163;
          puVar8 = (undefined *)0xe400000000000000;
          func_0x000100077018(0x74726163,0xe400000000000000,puVar3);
          func_0x000107c6142c(puVar3);
          puVar4 = puVar3;
          if ((uVar5 & 1) == 0) {
            puVar4 = puVar8;
            func_0x000107c5ed70();
            uVar5 = 0;
            func_0x000107c5fbb4(0xd00000000000001a,0x800000010f11d230,puVar3,puVar4);
            func_0x000107c6142c(puVar4);
            if ((uVar5 & 1) == 0) goto LAB_1030a0410;
          }
        }
      }
      lVar12 = lStack_160;
      if (lStack_160 != 0) {
        puVar3 = puVar15;
        func_0x000107c61558(puVar15);
        puStack_108 = puVar15;
        func_0x000107c61434(lVar12);
        puVar4 = puStack_190;
        func_0x00010018433c(puStack_190,lVar12,0x6469436353,0xe500000000000000,puVar3);
        puVar15 = puStack_108;
      }
    }
    else {
      func_0x000107c61434(puVar15);
      uVar5 = 0;
      func_0x000100029284(0x6469436353);
      puVar4 = puVar15;
      func_0x000107c6142c(puVar15);
      puVar3 = puVar4;
      if ((uVar5 & 1) == 0) goto LAB_1030a0304;
    }
LAB_1030a0410:
    lVar18 = lStack_148;
    if ((uStack_17c & 1) == 0) {
      func_0x000107c5ed74();
      uVar5 = 0x74756f6b63656863;
      func_0x000100077018(0x74756f6b63656863,0xe900000000000073,puVar4);
      func_0x000107c6142c(puVar4);
      if ((uVar5 & 1) != 0) goto LAB_1030a04dc;
      func_0x000107c5ed74();
      uVar5 = 0x74726163;
      uVar11 = 0xe400000000000000;
      func_0x000100077018(0x74726163,0xe400000000000000,puVar4);
      func_0x000107c6142c(puVar4);
      if ((uVar5 & 1) != 0) goto LAB_1030a04dc;
      func_0x000107c5ed70();
      uVar5 = 0;
      func_0x000107c5fbb4(0xd00000000000001a,0x800000010f11d230,puVar4,uVar11);
      func_0x000107c6142c(uVar11);
      if ((uVar5 & 1) != 0) goto LAB_1030a04dc;
    }
    else {
LAB_1030a04dc:
      puVar3 = puVar15;
      func_0x000107c61558(puVar15);
      puStack_108 = puVar15;
      func_0x00010018433c(0x7461686370616e73,0xe800000000000000,0x72756f735f6d7475,
                          0xea00000000006563,puVar3);
      puVar15 = puStack_108;
    }
    lVar9 = lStack_128;
    puVar3 = puVar15;
    FUN_10309b048(puVar15);
    func_0x000103c4e488(lStack_140);
    func_0x000107c6142c(puVar3);
    lVar12 = lStack_158;
    if (lStack_178 == 0) {
      func_0x000107c615e8(puStack_170);
      func_0x000107c6142c(lStack_160);
      (**(code **)(lVar18 + 8))(lVar9,lVar2);
LAB_1030a0600:
      lVar12 = lStack_138;
      (**(code **)(lVar18 + 0x20))(lStack_138,lStack_140,lVar2);
    }
    else {
      func_0x000107c5edd0(lStack_158,uStack_188);
      lVar9 = lVar12;
      (*pcVar19)(lVar12,1,lVar2);
      if ((int)lVar9 == 1) {
        func_0x000107c615e8(puStack_170);
        func_0x000107c6142c(lStack_160);
        (**(code **)(lVar18 + 8))(lStack_128,lVar2);
        FUN_1030a47a0(lVar12,0x112d36580,&UNK_10d9016d0);
        goto LAB_1030a0600;
      }
      (**(code **)(lVar18 + 0x20))(lStack_150,lVar12,lVar2);
      lVar12 = 0x112d38280;
      func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
      func_0x000107c61538();
      lVar9 = lVar12;
      func_0x000103c4eaa0();
      func_0x000107c61408(lVar12 + 0x20,7,PTR___sSSN_11034da80);
      lVar12 = lStack_138;
      func_0x000103c4e488(lStack_138,lVar9,0);
      func_0x000107c615e8(puStack_170);
      puVar10 = puStack_118;
      func_0x000107c6142c(lVar9);
      func_0x000107c6142c(lStack_160);
      pcVar13 = *(code **)(lVar18 + 8);
      (*pcVar13)(lStack_150,lVar2);
      (*pcVar13)(lStack_140,lVar2);
      (*pcVar13)(lStack_128,lVar2);
    }
    func_0x000107c61170(lStack_168);
    func_0x000107c6142c(puVar15);
    uVar11 = 0;
  }
  else {
    func_0x000107c61170(lVar9);
    func_0x000107c615e8(puVar3);
    uVar11 = 1;
    lVar12 = lStack_138;
  }
  (*pcVar20)(lVar12,uVar11,1,lVar2);
  func_0x0001014522e4(lVar12,lVar16);
LAB_1030a0738:
  func_0x000100029394(lVar16,puVar10);
  puVar3 = puVar10;
  (*pcVar19)(puVar10,1,lVar2);
  lVar12 = lStack_130;
  if ((int)puVar3 == 1) {
    FUN_1030a47a0(puVar10,0x112d36580,&UNK_10d9016d0);
    puVar15 = puStack_120;
  }
  else {
    (**(code **)(lVar18 + 0x20))(lStack_130,puVar10,lVar2);
    puVar10 = PTR_PTR_1126c9d18;
    func_0x000107c610f8();
    func_0x000107c453e4();
    lVar9 = 0x112d38dc0;
    func_0x0001000285a8(0x112d38dc0,&UNK_10d902c20);
    func_0x000107c613fc();
    *(undefined8 *)(lVar9 + 0x18) = 2;
    *(undefined8 *)(lVar9 + 0x10) = 1;
    *(long *)(lVar9 + 0x38) = lVar2;
    lVar14 = lVar9 + 0x20;
    func_0x0001000a9d90();
    (**(code **)(lVar18 + 0x10))();
    func_0x0001030bae68();
    func_0x000107c613fc();
    *(undefined8 *)(lVar14 + 0x18) = 3;
    *(undefined8 *)(lVar14 + 0x10) = 1;
    *(undefined **)(lVar14 + 0x20) = puVar10;
    puVar8 = PTR_PTR_1126aeb08;
    func_0x000107c610f8();
    lStack_148 = lVar18;
    func_0x000107c61174();
    lVar18 = lVar9;
    puStack_118 = puVar10;
    func_0x000107c5fc48(lVar9,PTR___sypN_11034f1a8 + 8);
    func_0x000107c61574(lVar9);
    uVar11 = 0;
    FUN_1030a471c(0,0x112f39088,&PTR__OBJC_CLASS___UIActivity_1126acb48);
    lVar9 = lVar14;
    func_0x000107c5fc48(lVar14,uVar11);
    func_0x000107c61574(lVar14);
    func_0x000107c4555c();
    func_0x000107c61170(lVar18);
    func_0x000107c61170(lVar9);
    puVar10 = &UNK_110607a10;
    func_0x000107c613fc(&UNK_110607a10,0x18,7);
    puVar15 = puStack_120;
    *(undefined **)(puVar10 + 0x10) = puStack_120;
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e8 = 0x1030a4498;
    puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_100 = 0x42000000;
    puStack_f8 = &UNK_1014fada0;
    puStack_f0 = &UNK_110607a28;
    ppuVar6 = &puStack_108;
    puStack_e0 = puVar10;
    func_0x000107c60bc4(ppuVar6);
    puVar10 = puStack_e0;
    func_0x000107c61174();
    func_0x000107c61174(puVar15);
    func_0x000107c61574(puVar10);
    func_0x000107c5363c(puVar8);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(puVar8);
    pcVar7 = "createAdProductInstantPageContext()";
    func_0x0001000c10c0("createAdProductInstantPageContext()");
    func_0x000107c61180();
    puVar10 = &UNK_110607a60;
    func_0x000107c613fc(&UNK_110607a60,0x20,7);
    *(long *)(puVar10 + 0x10) = param_3;
    *(undefined **)(puVar10 + 0x18) = puVar8;
    uStack_e8 = 0x1030a44a0;
    puStack_108 = puVar3;
    uStack_100 = 0x42000000;
    puStack_f8 = &UNK_1000f6b44;
    puStack_f0 = &UNK_110607a78;
    ppuVar6 = &puStack_108;
    puStack_e0 = puVar10;
    func_0x000107c60bc4(ppuVar6);
    puVar10 = puStack_e0;
    func_0x000107c61174(puVar8);
    func_0x000107c6157c(param_3);
    func_0x000107c61574(puVar10);
    func_0x000107c4e524(pcVar7);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(puStack_118);
    func_0x000107c61170(puVar8);
    func_0x000107c615e8(pcVar7);
    (**(code **)(lStack_148 + 8))(lVar12,lVar2);
  }
  FUN_1030a47a0(lVar16,0x112d36580,&UNK_10d9016d0);
  return puVar15;
}



/* Entry: 1030a0a78; end: 1030a0af3;  */

/* WARNING: Possible PIC construction at 0x0001030a0ae0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030a0ae4) */
/* WARNING: Removing unreachable block (ram,0x000107c61170) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_1030a0a78(char *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  if (((param_2 & 1) == 0) || (param_1 == (char *)0x0)) {
    FUN_1030a471c(0,0x112d4c408,&PTR__OBJC_CLASS___NSString_1126ae4d0);
    param_1 = "";
    func_0x000107c60124("",0,2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfbb710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_5,PTR_s_fulfillWithSuccessValue__1125cc768,param_1);
  return;
}



/* Entry: 1030a0af4; end: 1030a0c1b;  */

void FUN_1030a0af4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c61174();
    lVar2 = param_1;
    func_0x000107c4f078();
    func_0x000107c61180();
    lVar1 = param_1;
    while (lVar2 != 0) {
      func_0x000107c61170(lVar1);
      lVar3 = lVar2;
      func_0x000107c4f078();
      func_0x000107c61180();
      lVar1 = lVar2;
      lVar2 = lVar3;
    }
    func_0x000107c61170(param_1);
    func_0x000107c4f018(lVar1);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1030a0c1c; end: 1030a0c8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1030a0c1c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112f38f10);
    func_0x000107c61174(uVar1);
    func_0x000107c61170(param_1);
  }
  return uVar1;
}



/* Entry: 1030a0c90; end: 1030a0f23;  */

void FUN_1030a0c90(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  undefined1 *puVar12;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  lVar1 = 0;
  func_0x000107c5eb9c();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar12 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar2 = (undefined *)0x112d36580;
  puVar5 = &UNK_10d9016d0;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(puVar2 + -8) + 0x40));
  lVar10 = (long)puVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar10 - extraout_x12;
  func_0x000107c5ed70();
  func_0x000107c5eb78(puVar12);
  puVar3 = (undefined *)0x2b;
  func_0x000107c5eb8c(0x2b,0xe100000000000000);
  puStack_70 = puVar2;
  puStack_68 = puVar5;
  func_0x000100e8b654();
  puVar2 = PTR___sSSN_11034da80;
  puVar6 = puVar3;
  func_0x000107c60208();
  if (puVar6 == (undefined *)0x0) {
    (**(code **)(lVar8 + 8))(puVar12,lVar1);
    func_0x000107c6142c(puVar5);
  }
  else {
    puVar4 = puVar12;
    puVar7 = PTR___sSSN_11034da80;
    uStack_78 = param_2;
    puStack_70 = puVar2;
    puStack_68 = puVar6;
    func_0x000107c60200(puVar12,PTR___sSSN_11034da80,puVar3);
    func_0x000107c6142c(puVar6);
    if (puVar7 != (undefined *)0x0) {
      func_0x000107c5edd0(lVar11,puVar4,puVar7);
      func_0x000107c6142c(puVar5);
      func_0x000107c6142c(puVar7);
      (**(code **)(lVar8 + 8))(puVar12,lVar1);
      param_2 = uStack_78;
      goto LAB_1030a0e70;
    }
    func_0x000107c6142c(puVar5);
    (**(code **)(lVar8 + 8))(puVar12,lVar1);
    param_2 = uStack_78;
  }
  lVar1 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(lVar11,1,1,lVar1);
LAB_1030a0e70:
  func_0x0001001021cc(lVar11,lVar10);
  lVar8 = 0;
  func_0x000107c5ede0();
  lVar11 = *(long *)(lVar8 + -8);
  pcVar9 = *(code **)(lVar11 + 0x30);
  lVar1 = lVar10;
  (*pcVar9)(lVar10,1,lVar8);
  if ((int)lVar1 == 1) {
    (**(code **)(lVar11 + 0x10))(param_1,param_2,lVar8);
    lVar1 = lVar10;
    (*pcVar9)(lVar10,1,lVar8);
    if ((int)lVar1 != 1) {
      FUN_1030a47a0(lVar10,0x112d36580,&UNK_10d9016d0);
    }
  }
  else {
    (**(code **)(lVar11 + 0x20))(param_1,lVar10,lVar8);
  }
  return;
}



/* Entry: 1030a0f24; end: 1030a0fc3;  */

void FUN_1030a0f24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
  *(undefined8 *)(unaff_x22 + 0x18) = param_3;
  lVar1 = 0;
  func_0x000107c5ede0();
  *(long *)(unaff_x22 + 0x20) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x28) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x30) = uVar2;
  lVar1 = 0;
  func_0x000107c5eb08();
  *(long *)(unaff_x22 + 0x38) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x40) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x48) = uVar2;
  uVar3 = 0;
  func_0x000107c5fcec();
  *(undefined8 *)(unaff_x22 + 0x50) = uVar3;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x58) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1030a0fc4,0,0);
  return;
}



/* Entry: 1030a0fc4; end: 1030a103f;  */

void FUN_1030a0fc4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x60) = param_1;
  uVar1 = 0x112d45220;
  FUN_1030a45a4(0x112d45220,PTR___sScMMa_11034fc70,PTR___sScMScAsMc_11034fc78);
  *(undefined8 *)(unaff_x22 + 0x68) = uVar1;
  func_0x000107c5fca8(uVar2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1030a1040,uVar2,uVar1);
  return;
}



/* Entry: 1030a1040; end: 1030a1147;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030a1040(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x22;
  
  uVar10 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar1 = *(long *)(unaff_x22 + 0x40);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x20);
  lVar5 = *(long *)(unaff_x22 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x10);
  lVar6 = *(long *)(unaff_x22 + 0x18);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x60));
  (**(code **)(lVar5 + 0x10))(uVar8,uVar2,uVar7);
  func_0x000107c5eaec(uVar3,0x404e000000000000,uVar8,0);
  uVar7 = *(undefined8 *)(lVar6 + _DAT_112f38f20);
  func_0x000107c61174(uVar7);
  uVar8 = uVar7;
  func_0x000107c5eae0();
  func_0x000107c4b768(uVar7);
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar7);
  (**(code **)(lVar1 + 8))(uVar3,uVar4);
  func_0x000107c5fca8(uVar9,uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1030a1148,uVar9,uVar10);
  return;
}



/* Entry: 1030a1148; end: 1030a118f;  */

void FUN_1030a1148(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x30);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x58));
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001030a118c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1030a1190; end: 1030a1287;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1030a1190(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lStack_38;
  
  func_0x0001000d224c(&lStack_38);
  if (lStack_38 != 0) {
    func_0x000107c61174();
    lVar1 = unaff_x20;
    func_0x000107c4f078();
    func_0x000107c61180();
    while (lVar1 != 0) {
      func_0x000107c61170(unaff_x20);
      lVar2 = lVar1;
      func_0x000107c4f078();
      func_0x000107c61180();
      unaff_x20 = lVar1;
      lVar1 = lVar2;
    }
    lVar1 = lStack_38;
    func_0x000107c409cc();
    func_0x000107c61180();
    func_0x000107c61170(unaff_x20);
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x000107c40978(lVar1);
      func_0x000107c61180();
      func_0x000107c615e8(lStack_38);
      func_0x000107c615e8(lVar1);
      return lVar2;
    }
    func_0x000107c615e8(lStack_38);
  }
  return 0;
}



/* Entry: 1030a1288; end: 1030a128b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1030a1288(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lStack_38;
  
  func_0x0001000d224c(&lStack_38);
  if (lStack_38 != 0) {
    func_0x000107c61174();
    lVar1 = unaff_x20;
    func_0x000107c4f078();
    func_0x000107c61180();
    while (lVar1 != 0) {
      func_0x000107c61170(unaff_x20);
      lVar2 = lVar1;
      func_0x000107c4f078();
      func_0x000107c61180();
      unaff_x20 = lVar1;
      lVar1 = lVar2;
    }
    lVar1 = lStack_38;
    func_0x000107c409cc();
    func_0x000107c61180();
    func_0x000107c61170(unaff_x20);
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x000107c40978(lVar1);
      func_0x000107c61180();
      func_0x000107c615e8(lStack_38);
      func_0x000107c615e8(lVar1);
      return lVar2;
    }
    func_0x000107c615e8(lStack_38);
  }
  return 0;
}



/* Entry: 1030a128c; end: 1030a1317;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030a128c(undefined8 param_1)

{
  undefined8 uVar1;
  ulong *puVar2;
  long unaff_x20;
  ulong *puVar3;
  code *pcVar4;
  
  puVar3 = *(ulong **)(unaff_x20 + _DAT_112f38f10);
  uVar1 = 0;
  func_0x000103c43334(0);
  puVar2 = puVar3;
  func_0x000107c61480(puVar3,uVar1);
  if (puVar2 != (ulong *)0x0) {
    pcVar4 = *(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar2) + 0x220);
    func_0x000107c61174(puVar3);
    (*pcVar4)(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar3);
    return;
  }
  return;
}



/* Entry: 1030a1318; end: 1030a132b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030a1318(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010c0b0330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(unaff_x20 + _DAT_112f38fa0),
             PTR_s_logSpectrumAutofillEventWithEven_112609ad8,param_1);
  return;
}



/* Entry: 1030a132c; end: 1030a13c3; -[_TtC40SCAdAttachmentHandlerImplementationSwift27AdInstantPageViewController webView:decidePolicyForNavigationAction:decisionHandler:] */

/* WARNING: Possible PIC construction at 0x0001030a13a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030a13a8) */

void FUN_1030a132c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c60bc4(param_5);
  func_0x000107c60bc4();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_1030a36b8(param_3,param_4,param_1,param_5);
  func_0x000107c60bd0(param_5);
  func_0x000107c60bd0(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1030a13c4; end: 1030a13f7; -[_TtC40SCAdAttachmentHandlerImplementationSwift27AdInstantPageViewController webView:didCommitNavigation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030a13c4(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x000103c4657c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1030a13f8; end: 1030a1483; -[_TtC40SCAdAttachmentHandlerImplementationSwift27AdInstantPageViewController userContentController:didReceive:webView:] */

/* WARNING: Possible PIC construction at 0x0001030a1458: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030a1468: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030a145c) */
/* WARNING: Removing unreachable block (ram,0x0001030a146c) */

void FUN_1030a13f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  FUN_1030a4188(param_4,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1030a1484; end: 1030a1513;  */

void FUN_1030a1484(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa8) = param_2;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar3;
  uVar3 = 0x112d45220;
  FUN_1030a45a4(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar2;
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1030a1514,uVar2,uVar3);
  return;
}



/* Entry: 1030a1514; end: 1030a164b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030a1514(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  puVar1 = (undefined8 *)(*(long *)(*(long *)(unaff_x22 + 0xa8) + _DAT_112f38ee0) + _DAT_1130682a8);
  lVar2 = puVar1[1];
  if (lVar2 != 0) {
    uVar4 = *puVar1;
    func_0x000107c61434(lVar2);
    func_0x0001000d224c(unaff_x22 + 0xa0);
    uVar3 = *(undefined8 *)(unaff_x22 + 0xa0);
    *(undefined8 *)(unaff_x22 + 200) = uVar3;
    func_0x000107c5fadc(uVar4,lVar2);
    *(undefined8 *)(unaff_x22 + 0xd0) = uVar4;
    func_0x000107c6142c(lVar2);
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x90;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_1030a164c;
    lVar2 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar2,0);
    uVar4 = 0x112eaf898;
    func_0x0001000285a8(0x112eaf898,&UNK_10db84550);
    *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x88) = uVar4;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x60) = &UNK_102602e3c;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_110607d48;
    *(long *)(unaff_x22 + 0x70) = lVar2;
    func_0x000107c43324(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xb0));
                    /* WARNING: Could not recover jumptable at 0x0001030a1648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1030a164c; end: 1030a1687;  */

void FUN_1030a164c(void)

{
  long *unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_1030a1688,*(undefined8 *)(*unaff_x22 + 0xb8),*(undefined8 *)(*unaff_x22 + 0xc0));
  return;
}



/* Entry: 1030a1688; end: 1030a17cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030a1688(void)

{
  undefined *puVar1;
  ulong *puVar2;
  long lVar3;
  ulong *puVar4;
  long unaff_x22;
  long lVar5;
  undefined8 uVar6;
  code *pcVar7;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xb0));
  lVar5 = *(long *)(unaff_x22 + 0x98);
  puVar2 = *(ulong **)(unaff_x22 + 0xd0);
  if (lVar5 == 0) {
    func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 200));
  }
  else {
    lVar3 = *(long *)(unaff_x22 + 0xa8);
    puVar4 = *(ulong **)(unaff_x22 + 0x90);
    func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 200));
    func_0x000107c61170(puVar2);
    func_0x000103c55090(0);
    func_0x000103c54ea4(puVar4,lVar5);
    func_0x000107c6142c(lVar5);
    puVar1 = PTR__swift_isaMask_11034f488;
    uVar6 = *(undefined8 *)(lVar3 + _DAT_112f38f30);
    pcVar7 = *(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar4) + 0x90);
    func_0x000107c615f0(uVar6);
    (*pcVar7)();
    func_0x000107c615e8(uVar6);
    (*pcVar7)(lVar3);
    puVar2 = *(ulong **)(lVar3 + _DAT_112f38f20);
    pcVar7 = *(code **)((*(ulong *)puVar1 & *puVar2) + 0x118);
    func_0x000107c61174();
    (*pcVar7)(puVar4);
    func_0x000107c61170(puVar2);
    puVar2 = *(ulong **)(lVar3 + _DAT_112f38f10);
    pcVar7 = *(code **)((*(ulong *)puVar1 & *puVar2) + 0x118);
    func_0x000107c61174();
    (*pcVar7)(puVar4);
    func_0x000107c61170(puVar2);
    puVar2 = puVar4;
  }
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x0001030a17c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1030a17cc; end: 1030a185b;  */

void FUN_1030a17cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xb8) = param_2;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar3;
  uVar3 = 0x112d45220;
  FUN_1030a45a4(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 200) = uVar2;
  *(undefined8 *)(unaff_x22 + 0xd0) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1030a185c,uVar2,uVar3);
  return;
}



/* Entry: 1030a185c; end: 1030a1a0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030a185c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  long lVar6;
  
  puVar1 = PTR_PTR_1126d6d90;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x22 + 0xd8) = puVar1;
  func_0x000107c544a0();
  func_0x0001000d224c(unaff_x22 + 0x50);
  lVar6 = *(long *)(unaff_x22 + 0x50);
  lVar2 = lVar6;
  func_0x000107c423bc();
  func_0x000107c61180();
  func_0x000107c615e8(lVar6);
  if (lVar2 != 0) {
    lVar6 = lVar2;
    func_0x000107c5faec();
    *(long *)(unaff_x22 + 0xa0) = lVar6;
    *(undefined8 *)(unaff_x22 + 0xa8) = param_2;
    func_0x000107c61170(lVar2);
    *(undefined8 *)(unaff_x22 + 0xe0) = param_2;
    func_0x0001000d224c(unaff_x22 + 0xb0);
    uVar3 = *(undefined8 *)(unaff_x22 + 0xb0);
    *(undefined8 *)(unaff_x22 + 0xe8) = uVar3;
    func_0x0001000d224c(unaff_x22 + 0x50);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar5 = uVar4;
    func_0x000107c423c0();
    func_0x000107c61180();
    *(undefined8 *)(unaff_x22 + 0xf0) = uVar5;
    func_0x000107c615e8(uVar4);
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x90;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_1030a1a10;
    lVar2 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar2,0);
    uVar5 = 0x112eaf898;
    func_0x0001000285a8(0x112eaf898,&UNK_10db84550);
    *(undefined8 *)(unaff_x22 + 0x88) = uVar5;
    *(long *)(unaff_x22 + 0x70) = lVar2;
    *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x60) = &UNK_102602e3c;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_110607d20;
    func_0x000107c43324(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
  uVar5 = *(undefined8 *)(unaff_x22 + 0xc0);
  func_0x000107c61170(puVar1);
  func_0x000107c61574(uVar5);
                    /* WARNING: Could not recover jumptable at 0x0001030a1a0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1030a1a10; end: 1030a1a4b;  */

void FUN_1030a1a10(void)

{
  long *unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_1030a1a4c,*(undefined8 *)(*unaff_x22 + 200),*(undefined8 *)(*unaff_x22 + 0xd0));
  return;
}



/* Entry: 1030a1a4c; end: 1030a1b63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030a1a4c(void)

{
  undefined8 uVar1;
  ulong *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  long unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xc0));
  lVar6 = *(long *)(unaff_x22 + 0x98);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xe0);
  if (lVar6 == 0) {
    func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xd8));
    func_0x000107c6142c(uVar4);
    func_0x000107c615e8(uVar1);
  }
  else {
    uVar7 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar8 = *(undefined8 *)(unaff_x22 + 0xd8);
    lVar10 = *(long *)(unaff_x22 + 0xb8);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x90);
    func_0x000107c615e8(uVar1);
    func_0x000107c61170(uVar3);
    func_0x000103c55090(0);
    func_0x000103c54f30(uVar9,lVar6,uVar7,uVar4);
    func_0x000107c6142c(lVar6);
    func_0x000107c6142c(uVar4);
    puVar2 = *(ulong **)(lVar10 + _DAT_112f38f10);
    pcVar5 = *(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar2) + 0x118);
    func_0x000107c61174();
    (*pcVar5)(uVar9);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(puVar2);
    uVar3 = uVar9;
  }
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001030a1b60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1030a1b64; end: 1030a1bb3;  */

void FUN_1030a1b64(long param_1,long param_2)

{
  long lVar1;
  
  if ((param_1 != 0) && (param_2 == 0)) {
    lVar1 = param_1;
    func_0x000107c615f0();
    func_0x000107c5ed90();
    func_0x000107c4b788(param_1);
    func_0x000107c615e8(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1030a1bb4; end: 1030a1d47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030a1bb4(undefined8 param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = &stack0xffffffffffffffb0 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar9 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar8 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000100029394(param_1,puVar6);
  puVar2 = puVar6;
  (**(code **)(lVar9 + 0x30))(puVar6,1,lVar1);
  if ((int)puVar2 == 1) {
    FUN_1030a47a0(puVar6,0x112d36580,&UNK_10d9016d0);
  }
  else {
    lVar3 = lVar8;
    (**(code **)(lVar9 + 0x20))(lVar8,puVar6,lVar1);
    FUN_10309c554();
    lVar4 = lVar3;
    func_0x000107c5ed70();
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar6);
    func_0x000107c5a26c(lVar3);
    func_0x000107c61170(lVar4);
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112f38fa0);
    puVar5 = PTR_PTR_1126acb20;
    func_0x000107c610f8(PTR_PTR_1126acb20);
    func_0x000107c467ec();
    func_0x000107c4bc34(uVar7);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(puVar5);
    (**(code **)(lVar9 + 8))(lVar8,lVar1);
  }
  return;
}



/* Entry: 1030a1d48; end: 1030a1e07; -[_TtC40SCAdAttachmentHandlerImplementationSwift27AdInstantPageViewController webBrowserDidDismiss:] */

/* WARNING: Possible PIC construction at 0x0001030a1d98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030a1dbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030a1dcc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030a1dc0) */
/* WARNING: Removing unreachable block (ram,0x0001030a1d9c) */
/* WARNING: Removing unreachable block (ram,0x0001030a1dd0) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030a1d48(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112f38ed8);
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 == 0) {
    func_0x000107c615e8(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1030a1e08; end: 1030a1f0f; -[_TtC40SCAdAttachmentHandlerImplementationSwift27AdInstantPageViewController webBrowserDidTapOpenInBrowser:] */

void FUN_1030a1e08(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long extraout_x8;
  undefined1 *puVar3;
  
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &stack0xffffffffffffffd0 + -extraout_x8;
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  lVar2 = param_3;
  func_0x000107c41824();
  func_0x000107c61180();
  bVar1 = lVar2 == 0;
  if (bVar1) {
    func_0x000107c5ede0();
  }
  else {
    func_0x000107c5edb4(puVar3);
    func_0x000107c61170(lVar2);
    lVar2 = 0;
    func_0x000107c5ede0();
  }
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(puVar3,bVar1,1);
  FUN_1030a1bb4(puVar3);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
  FUN_1030a47a0(puVar3,0x112d36580,&UNK_10d9016d0);
  return;
}



/* Entry: 1030a1f10; end: 1030a1f17;  */

void FUN_1030a1f10(void)

{
  return;
}



/* Entry: 1030a1f18; end: 1030a2007;  */

void FUN_1030a1f18(int param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long extraout_x8;
  undefined1 *puVar3;
  
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &stack0xffffffffffffffd0 + -extraout_x8;
  if (param_1 == 0xc) {
    func_0x000107c41824();
    func_0x000107c61180();
    bVar1 = param_3 == 0;
    if (bVar1) {
      func_0x000107c5ede0();
    }
    else {
      func_0x000107c5edb4(puVar3);
      func_0x000107c61170(param_3);
      param_3 = 0;
      func_0x000107c5ede0();
    }
    (**(code **)(*(long *)(param_3 + -8) + 0x38))(puVar3,bVar1,1);
    FUN_1030a1bb4(puVar3);
    FUN_1030a47a0(puVar3,0x112d36580,&UNK_10d9016d0);
  }
  return;
}



/* Entry: 1030a2008; end: 1030a20a3; -[_TtC40SCAdAttachmentHandlerImplementationSwift27AdInstantPageViewController webBrowser:onUserInteractionEvent:] */

void FUN_1030a2008(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_1;
  uStack_38 = param_3;
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x00010465d6e4(FUN_1030a1f10,0,0x1030a1f14,0,FUN_1030a2320,auStack_50);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_4);
  return;
}



/* Entry: 1030a20a4; end: 1030a20e7;  */

void FUN_1030a20a4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010406fc98();
  uVar2 = *param_1;
  uVar1 = param_1[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1030a20e8; end: 1030a2113; -[_TtC40SCAdAttachmentHandlerImplementationSwift27AdInstantPageViewController defaultSubProjectName] */

void FUN_1030a20e8(void)

{
  func_0x000107c5fadc(0x6976626557206441,0xea00000000007765);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1030a2114; end: 1030a22b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1030a2114(void)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_50 = 0;
  uStack_48 = 0xe000000000000000;
  func_0x000107c602fc(0x38);
  func_0x000107c5fb78(0x6920646120202020,0xeb00000000203a64);
  lVar3 = _DAT_113068288;
  lVar6 = *(long *)(unaff_x20 + _DAT_112f38ee0);
  puVar1 = (undefined8 *)(*(long *)(lVar6 + _DAT_113068288) + _DAT_113067eb0);
  uStack_58 = puVar1[1];
  uStack_60 = *puVar1;
  func_0x000107c61434(puVar1[1]);
  uVar4 = 0x112d35ff8;
  func_0x0001000285a8(0x112d35ff8,&UNK_10d900cd0);
  uVar5 = uVar4;
  func_0x000107c5fb18(&uStack_60,uVar4);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar5);
  func_0x000107c5fb78(0xd000000000000015,0x800000010f11d1a0);
  puVar1 = (undefined8 *)(*(long *)(lVar6 + lVar3) + _DAT_113067eb8);
  uStack_58 = puVar1[1];
  uStack_60 = *puVar1;
  func_0x000107c61434(puVar1[1]);
  func_0x000107c5fb18(&uStack_60,uVar4);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c5fb78(0xd000000000000012,0x800000010f11d1c0);
  uVar4 = *(undefined8 *)(lVar6 + _DAT_113068298);
  uVar5 = ((undefined8 *)(lVar6 + _DAT_113068298))[1];
  func_0x000107c61434(uVar5);
  func_0x000107c5fb78(uVar4,uVar5);
  func_0x000107c6142c(uVar5);
  auVar2._8_8_ = uStack_48;
  auVar2._0_8_ = uStack_50;
  return auVar2;
}



/* Entry: 1030a22b8; end: 1030a231f; -[_TtC40SCAdAttachmentHandlerImplementationSwift27AdInstantPageViewController jiraMetaInfo] */

void FUN_1030a22b8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1030a2114();
  func_0x000107c61170(param_1);
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x000107c5fadc(uVar1,param_2);
    func_0x000107c6142c(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1030a2320; end: 1030a2327;  */

void FUN_1030a2320(int param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long unaff_x20;
  
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffd0 + -extraout_x8;
  if (param_1 == 0xc) {
    func_0x000107c41824();
    func_0x000107c61180();
    bVar1 = lVar3 == 0;
    if (bVar1) {
      func_0x000107c5ede0();
    }
    else {
      func_0x000107c5edb4(puVar4);
      func_0x000107c61170(lVar3);
      lVar3 = 0;
      func_0x000107c5ede0();
    }
    (**(code **)(*(long *)(lVar3 + -8) + 0x38))(puVar4,bVar1,1);
    FUN_1030a1bb4(puVar4);
    FUN_1030a47a0(puVar4,0x112d36580,&UNK_10d9016d0);
  }
  return;
}



/* Entry: 1030a2328; end: 1030a250b;  */

void FUN_1030a2328(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_90 [80];
  
  puVar6 = auStack_90;
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bfbb710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_fulfillWithSuccessValue__1125cc768,param_1)
    ;
    return;
  }
  if (param_2 != 0) {
    func_0x000107c614b0(param_2);
    lVar1 = param_2;
    func_0x000107c5ed2c(param_2);
    func_0x000107c43b70(param_3);
    func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)(param_2);
    return;
  }
  lVar1 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  *(undefined8 *)(lVar1 + 0x18) = 2;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  uVar2 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  func_0x000107c5faec();
  *(undefined8 *)(lVar1 + 0x20) = uVar2;
  puVar5 = PTR___sSSN_11034da80;
  *(undefined **)(lVar1 + 0x48) = PTR___sSSN_11034da80;
  *(undefined1 **)(lVar1 + 0x28) = puVar6;
  *(undefined8 *)(lVar1 + 0x30) = 0x206e776f6e6b6e75;
  *(undefined8 *)(lVar1 + 0x38) = 0xed0000726f727265;
  lVar3 = lVar1;
  func_0x000100214a84(lVar1);
  func_0x000107c61588(lVar1);
  FUN_1030a47a0((undefined8 *)(lVar1 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
  puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
  uVar2 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  lVar1 = lVar3;
  func_0x000107c5f9dc(lVar3,puVar5,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar3);
  func_0x000107c466bc(puVar4);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(lVar1);
  puVar5 = puVar4;
  func_0x000107c5ed2c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c43b70(param_3);
  func_0x000107c61170(puVar5);
  return;
}



/* Entry: 1030a250c; end: 1030a34fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030a250c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  char *pcVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar20;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar21;
  long lVar22;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  long extraout_x12_07;
  long extraout_x13;
  long extraout_x13_00;
  code *pcVar23;
  long lVar24;
  code *pcVar25;
  ulong uVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  undefined2 auStack_3a0 [4];
  undefined8 uStack_398;
  undefined1 auStack_390 [8];
  undefined8 uStack_388;
  undefined1 auStack_380 [8];
  undefined8 uStack_378;
  undefined1 auStack_370 [8];
  undefined8 auStack_368 [4];
  undefined2 uStack_348;
  undefined1 auStack_346 [6];
  undefined8 auStack_340 [11];
  undefined1 auStack_2e8 [8];
  undefined8 auStack_2e0 [7];
  undefined1 auStack_2a8 [8];
  undefined8 auStack_2a0 [2];
  undefined1 auStack_290 [8];
  undefined8 auStack_288 [2];
  undefined2 auStack_278 [4];
  undefined8 auStack_270 [3];
  undefined1 auStack_258 [8];
  undefined8 uStack_250;
  undefined1 auStack_248 [8];
  undefined8 uStack_240;
  undefined1 auStack_238 [8];
  undefined8 uStack_230;
  undefined1 auStack_228 [8];
  long lStack_220;
  undefined8 auStack_218 [5];
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  code *pcStack_198;
  code *pcStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  undefined8 uStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar8 = 0x112d3ae80;
  uStack_138 = param_3;
  func_0x0001000285a8(0x112d3ae80,&UNK_10d912fe0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar18 = (long)&uStack_1e0 - extraout_x8;
  lVar8 = 0;
  func_0x000104638d5c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  lVar27 = lVar18 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = 0;
  lStack_130 = lVar27 - extraout_x12;
  func_0x000107c5eec8();
  lStack_180 = *(long *)(lVar8 + -8);
  lStack_178 = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_180 + 0x40));
  lVar20 = (lVar27 - extraout_x12) - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar8 = 0;
  lStack_188 = lVar20;
  func_0x0001046305a8();
  lStack_158 = *(long *)(lVar8 + -8);
  lStack_140 = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_158 + 0x40));
  lVar20 = lVar20 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lVar8 = 0x112d36580;
  lStack_118 = lVar20;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  lVar20 = lVar20 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  lStack_168 = lVar20;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar20 = lVar20 - extraout_x12_00;
  lStack_170 = lVar20;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar20 = lVar20 - extraout_x12_01;
  pcStack_198 = (code *)lVar20;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar20 = lVar20 - extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar29 = lVar20 - extraout_x12_03;
  lVar9 = 0;
  func_0x000107c5ede0();
  lVar24 = *(long *)(lVar9 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar21 = lVar29 - (extraout_x13 + 0xfU & 0xfffffffffffffff0);
  lStack_150 = lVar21;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar21 = lVar21 - extraout_x12_04;
  lStack_120 = lVar21;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar21 = lVar21 - extraout_x12_05;
  lStack_1a0 = lVar21;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar21 = lVar21 - extraout_x12_06;
  lStack_160 = extraout_x13_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar22 = lVar21 - extraout_x12_07;
  lStack_110 = lVar22;
  func_0x000107c5edd0(lVar20,param_1,param_2);
  pcVar23 = *(code **)(lVar24 + 0x30);
  lVar8 = lVar20;
  (*pcVar23)(lVar20,1,lVar9);
  if ((int)lVar8 == 1) {
    FUN_1030a47a0(lVar20,0x112d36580,&UNK_10d9016d0);
    (**(code **)(lVar24 + 0x38))(lVar29,1,1,lVar9);
    FUN_1030a47a0(lVar29,0x112d36580,&UNK_10d9016d0);
    return;
  }
  lStack_1c0 = *(long *)(param_4 + _DAT_112f38ee0);
  lVar28 = *(long *)(lStack_1c0 + _DAT_1130682c0);
  uStack_1e0 = *(undefined8 *)(lStack_1c0 + _DAT_1130682e0);
  lVar2 = ((undefined8 *)(lStack_1c0 + _DAT_1130682e0))[1];
  lStack_1c8 = _DAT_113068288;
  plVar1 = (long *)(*(long *)(lStack_1c0 + _DAT_113068288) + _DAT_113067eb8);
  lVar8 = *plVar1;
  lVar17 = plVar1[1];
  lStack_1d0 = lVar29;
  lStack_1b8 = lVar18;
  lStack_1a8 = lVar27;
  pcStack_190 = (code *)lVar21;
  lStack_148 = lVar24;
  if (lVar17 == 0) {
    lStack_128 = 0;
  }
  else {
    func_0x000107c5fb1c(lVar8);
    lStack_128 = lVar17;
  }
  lStack_1b0 = param_4;
  func_0x000107c61434(lVar2);
  func_0x000107c61434(lVar28);
  func_0x0001000d224c(&uStack_a0);
  uVar19 = uStack_a0;
  func_0x000107c425e4();
  func_0x000107c615e8(uStack_a0);
  func_0x0001000d224c(&puStack_108);
  puVar10 = puStack_108;
  func_0x000107c425e8();
  lStack_1d8 = CONCAT44(lStack_1d8._4_4_,(int)puVar10);
  func_0x000107c615e8(puStack_108);
  lVar27 = *(long *)(lVar28 + 0x10);
  lVar21 = lVar28;
  func_0x000107c61434(lVar28);
  lVar24 = lVar28;
  if (lVar27 == 0) {
LAB_1030a29d0:
    lVar27 = lVar21;
    if ((int)uVar19 == 0) {
      func_0x000107c5ed74();
      uVar11 = 0x74756f6b63656863;
      func_0x000100077018(0x74756f6b63656863,0xe900000000000073,lVar21);
      func_0x000107c6142c(lVar21);
      lVar27 = lVar21;
      if ((uVar11 & 1) == 0) {
        func_0x000107c5ed74();
        uVar11 = 0x74726163;
        lVar18 = -0x1c00000000000000;
        func_0x000100077018(0x74726163,0xe400000000000000,lVar21);
        func_0x000107c6142c(lVar21);
        lVar27 = lVar21;
        if ((uVar11 & 1) == 0) {
          lVar27 = lVar18;
          func_0x000107c5ed70();
          uVar11 = 0;
          func_0x000107c5fbb4(0xd00000000000001a,0x800000010f11d230,lVar21,lVar27);
          func_0x000107c6142c(lVar27);
          lVar21 = lVar27;
          if ((uVar11 & 1) == 0) goto LAB_1030a2adc;
        }
      }
    }
    lVar21 = lVar27;
    if (lStack_128 != 0) {
      func_0x000107c61558(lVar28);
      lVar21 = lStack_128;
      lStack_d0 = lVar28;
      func_0x000107c61434(lStack_128);
      func_0x00010018433c(lVar8,lVar21,0x6469436353,0xe500000000000000,lVar24);
      lVar21 = lVar8;
      lVar24 = lStack_d0;
    }
  }
  else {
    lVar21 = 0x6469436353;
    uVar11 = 0;
    func_0x000100029284(0x6469436353);
    if ((uVar11 & 1) == 0) goto LAB_1030a29d0;
  }
LAB_1030a2adc:
  if ((int)lStack_1d8 == 0) {
    func_0x000107c5ed74();
    uVar11 = 0x74756f6b63656863;
    func_0x000100077018(0x74756f6b63656863,0xe900000000000073,lVar21);
    func_0x000107c6142c(lVar21);
    if ((uVar11 & 1) != 0) goto LAB_1030a2b94;
    func_0x000107c5ed74();
    uVar11 = 0x74726163;
    uVar19 = 0xe400000000000000;
    func_0x000100077018(0x74726163,0xe400000000000000,lVar21);
    func_0x000107c6142c(lVar21);
    if ((uVar11 & 1) != 0) goto LAB_1030a2b94;
    func_0x000107c5ed70();
    uVar11 = 0;
    func_0x000107c5fbb4(0xd00000000000001a,0x800000010f11d230,lVar21,uVar19);
    func_0x000107c6142c(uVar19);
    if ((uVar11 & 1) != 0) goto LAB_1030a2b94;
  }
  else {
LAB_1030a2b94:
    lVar8 = lVar24;
    func_0x000107c61558(lVar24);
    lStack_d0 = lVar24;
    func_0x00010018433c(0x7461686370616e73,0xe800000000000000,0x72756f735f6d7475,0xea00000000006563,
                        lVar8);
    lVar24 = lStack_d0;
  }
  lVar8 = lStack_148;
  lVar21 = lVar24;
  FUN_10309b048(lVar24);
  func_0x000103c4e488(pcStack_190);
  func_0x000107c6142c(lVar21);
  pcVar7 = pcStack_198;
  if (lVar2 == 0) {
    func_0x000107c6142c(lVar28);
    func_0x000107c6142c(lStack_128);
  }
  else {
    func_0x000107c5edd0(pcStack_198,uStack_1e0,lVar2);
    pcVar25 = pcVar7;
    (*pcVar23)(pcVar7,1,lVar9);
    if ((int)pcVar25 != 1) {
      pcVar25 = *(code **)(lVar8 + 0x20);
      lStack_1d8 = lVar2;
      (*pcVar25)(lStack_1a0,pcVar7,lVar9);
      lVar21 = 0x112d38280;
      func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
      func_0x000107c61538();
      lVar27 = lVar21;
      func_0x000103c4eaa0();
      func_0x000107c61408(lVar21 + 0x20,7,PTR___sSSN_11034da80);
      pcVar7 = pcStack_190;
      lVar21 = lStack_1d0;
      func_0x000103c4e488(lStack_1d0,lVar27,0);
      func_0x000107c6142c(lVar28);
      func_0x000107c6142c(lStack_1d8);
      func_0x000107c6142c(lVar27);
      func_0x000107c6142c(lStack_128);
      pcVar23 = *(code **)(lVar8 + 8);
      (*pcVar23)(lStack_1a0,lVar9);
      (*pcVar23)(pcVar7,lVar9);
      func_0x000107c6142c(lVar24);
      goto LAB_1030a2d9c;
    }
    func_0x000107c6142c(lVar28);
    func_0x000107c6142c(lVar2);
    func_0x000107c6142c(lStack_128);
    FUN_1030a47a0(pcVar7,0x112d36580,&UNK_10d9016d0);
  }
  lVar21 = lStack_1d0;
  pcVar25 = *(code **)(lVar8 + 0x20);
  (*pcVar25)(lStack_1d0,pcStack_190,lVar9);
  func_0x000107c6142c(lVar24);
  pcVar23 = *(code **)(lVar8 + 8);
LAB_1030a2d9c:
  pcStack_198 = pcVar25;
  pcStack_190 = pcVar23;
  (*pcVar23)(lVar20,lVar9);
  pcVar23 = *(code **)(lVar8 + 0x38);
  (*pcVar23)(lVar21,0,1,lVar9);
  lVar20 = lStack_110;
  (*pcVar25)(lStack_110,lVar21,lVar9);
  lVar8 = lStack_188;
  func_0x000107c5eec4(lStack_188);
  func_0x000107c5eeac();
  lStack_1a0 = lVar21;
  lStack_128 = lVar20;
  (**(code **)(lStack_180 + 8))(lVar8,lStack_178);
  lVar20 = lStack_170;
  (*pcVar23)(lStack_170,1,1,lVar9);
  lVar21 = lStack_168;
  uStack_c8 = 1;
  lStack_d0 = 0;
  uStack_c0 = 0;
  uStack_b0 = 0;
  uStack_b8 = 0;
  lStack_178 = *(undefined8 *)(lStack_1c0 + _DAT_1130682a8);
  uVar16 = ((undefined8 *)(lStack_1c0 + _DAT_1130682a8))[1];
  lStack_180 = *(undefined8 *)(lStack_1c0 + _DAT_1130682b0);
  uVar3 = ((undefined8 *)(lStack_1c0 + _DAT_1130682b0))[1];
  lVar8 = *(long *)(lStack_1c0 + lStack_1c8);
  lStack_188 = *(undefined8 *)(lVar8 + _DAT_113067eb0);
  uVar4 = ((undefined8 *)(lVar8 + _DAT_113067eb0))[1];
  lStack_1c0 = *(undefined8 *)(lVar8 + _DAT_113067eb8);
  uVar5 = ((undefined8 *)(lVar8 + _DAT_113067eb8))[1];
  uVar19 = *(undefined8 *)(lVar8 + _DAT_113067ec0);
  uVar6 = ((undefined8 *)(lVar8 + _DAT_113067ec0))[1];
  (*pcVar23)(lStack_168,1,1,lVar9);
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  func_0x000107c61434(uVar6);
  func_0x000107c61434(uVar16);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar5);
  *(undefined8 **)(lVar22 + -8) = &uStack_a0;
  *(undefined4 *)(lVar22 + -0x10) = 0;
  *(undefined8 *)(lVar22 + -0x28) = 0;
  *(undefined8 *)(lVar22 + -0x30) = 0;
  *(undefined8 *)(lVar22 + -0x18) = 0;
  *(undefined8 *)(lVar22 + -0x20) = 0;
  *(undefined1 *)(lVar22 + -0x38) = 0;
  *(long *)(lVar22 + -0x40) = lVar21;
  *(undefined1 *)(lVar22 + -0x48) = 0;
  *(undefined8 *)(lVar22 + -0x50) = 0;
  *(undefined1 *)(lVar22 + -0x58) = 1;
  *(undefined8 *)(lVar22 + -0x60) = 0;
  *(undefined1 *)(lVar22 + -0x68) = 1;
  *(undefined8 *)(lVar22 + -0x70) = 0;
  *(undefined1 *)(lVar22 + -0x78) = 0;
  *(undefined8 *)(lVar22 + -0x80) = 0;
  *(undefined8 *)(lVar22 + -0x88) = 0;
  *(undefined8 *)(lVar22 + -0x90) = 0;
  *(undefined2 *)(lVar22 + -0x98) = 0;
  *(undefined1 *)(lVar22 + -0xb0) = 1;
  *(undefined8 *)(lVar22 + -0xb8) = 0;
  *(undefined8 *)(lVar22 + -0xc0) = 0;
  *(undefined1 *)(lVar22 + -200) = 0;
  *(undefined8 *)(lVar22 + -0xd8) = uVar6;
  *(undefined8 *)(lVar22 + -0xd0) = 0;
  *(undefined8 *)(lVar22 + -0xe8) = 10;
  *(undefined8 *)(lVar22 + -0xe0) = uVar19;
  *(undefined8 *)(lVar22 + -0xf0) = 0x17;
  *(undefined8 *)(lVar22 + -0xf8) = 0;
  *(undefined8 *)(lVar22 + -0x100) = 0;
  *(undefined1 *)(lVar22 + -0x108) = 1;
  *(undefined8 *)(lVar22 + -0x118) = uVar5;
  *(undefined8 *)(lVar22 + -0x110) = 0;
  *(long *)(lVar22 + -0x120) = lStack_1c0;
  *(undefined8 *)(lVar22 + -0x128) = 0;
  *(undefined8 *)(lVar22 + -0x130) = 0;
  *(undefined8 *)(lVar22 + -0x138) = uVar4;
  lVar8 = lStack_188;
  *(undefined8 *)(lVar22 + -0x148) = uVar3;
  *(long *)(lVar22 + -0x140) = lVar8;
  lVar8 = lStack_180;
  *(undefined8 *)(lVar22 + -0x158) = uVar16;
  *(long *)(lVar22 + -0x150) = lVar8;
  *(long *)(lVar22 + -0x160) = lStack_178;
  *(undefined1 *)(lVar22 + -0x166) = 0;
  *(undefined2 *)(lVar22 + -0x168) = 0;
  *(undefined8 *)(lVar22 + -0x170) = 0;
  *(undefined8 *)(lVar22 + -0x178) = 0;
  *(undefined8 *)(lVar22 + -0x180) = 0;
  *(undefined8 *)(lVar22 + -0x188) = 0;
  *(undefined1 *)(lVar22 + -400) = 1;
  *(undefined8 *)(lVar22 + -0x198) = 0;
  *(undefined1 *)(lVar22 + -0x1a0) = 0;
  *(undefined8 *)(lVar22 + -0x1a8) = 0;
  *(undefined1 *)(lVar22 + -0x1b0) = 0;
  *(undefined8 *)(lVar22 + -0x1b8) = 1;
  *(undefined2 *)(lVar22 + -0x1c0) = 0x100;
  *(undefined8 *)(lVar22 + -0xa0) = 0;
  *(undefined8 *)(lVar22 + -0xa8) = 0;
  lVar24 = lStack_118;
  func_0x0001046306d0(lStack_118,lStack_128,lStack_1a0,lVar20,0,0,&lStack_d0,0,0);
  (*pcVar23)(lVar20,1,1,lVar9);
  (*pcVar23)(lVar21,1,1,lVar9);
  lVar8 = lStack_1b8;
  FUN_1030a4668(lVar24,lStack_1b8,&SUB_1046305a8);
  (**(code **)(lStack_158 + 0x38))(lVar8,0,1,lStack_140);
  *(undefined1 *)(lVar22 + -8) = 0;
  *(undefined8 *)(lVar22 + -0x10) = 0;
  *(undefined8 *)(lVar22 + -0x18) = 0;
  *(undefined8 *)(lVar22 + -0x20) = 0;
  *(undefined8 *)(lVar22 + -0x28) = 0;
  *(undefined8 *)(lVar22 + -0x30) = 0;
  *(undefined8 *)(lVar22 + -0x38) = 0;
  *(long *)(lVar22 + -0x40) = lVar8;
  lVar22 = lStack_130;
  func_0x000104638e24(lStack_130,1,lVar20,0,lVar21,0,0,0,0);
  puVar12 = PTR_PTR_1126ae560;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar24 = lStack_120;
  lVar20 = lStack_1b0;
  FUN_1030a0c90(lStack_120,lStack_110);
  puVar13 = puVar12;
  func_0x000107c43bf4();
  func_0x000107c61180();
  lVar21 = lStack_148;
  lVar8 = lStack_150;
  (**(code **)(lStack_148 + 0x10))(lStack_150,lVar24,lVar9);
  uVar11 = (ulong)*(byte *)(lVar21 + 0x50);
  uVar26 = uVar11 + 0x10 & (uVar11 ^ 0xffffffffffffffff);
  puVar10 = &UNK_110607c90;
  func_0x000107c613fc(&UNK_110607c90,uVar26 + lStack_160,uVar11 | 7);
  lStack_128 = lVar9;
  (*pcStack_198)(puVar10 + uVar26,lVar8,lVar9);
  pcStack_e8 = FUN_1030a461c;
  puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_100 = 0x42000000;
  puStack_f8 = &UNK_100e38b5c;
  puStack_f0 = &UNK_110607ca8;
  ppuVar14 = &puStack_108;
  puStack_e0 = puVar10;
  func_0x000107c60bc4(ppuVar14);
  func_0x000107c61574(puStack_e0);
  pcVar15 = "openInternalBrowser(urlString:delegate:)";
  func_0x0001000c10c0();
  func_0x000107c61180();
  func_0x000107c5dc68(puVar13);
  func_0x000107c615e8(pcVar15);
  func_0x000107c60bd0(ppuVar14);
  func_0x000107c61170(puVar13);
  func_0x000107c61174();
  lVar9 = lVar20;
  func_0x000107c4f078();
  func_0x000107c61180();
  lVar8 = lVar20;
  puVar10 = PTR_PTR_1126aead8;
  while (lVar21 = lVar9, PTR_PTR_1126aead8 = puVar10, lVar21 != 0) {
    func_0x000107c61170(lVar8);
    lVar9 = lVar21;
    func_0x000107c4f078();
    func_0x000107c61180();
    lVar8 = lVar21;
    puVar10 = PTR_PTR_1126aead8;
  }
  func_0x000107c610f8(puVar10);
  func_0x000107c4807c();
  func_0x000107c61170();
  lVar9 = *(long *)(lVar20 + _DAT_112f38f90);
  if (lVar9 == 0) {
    lVar8 = 0;
  }
  else {
    func_0x0001030bae54();
    func_0x000107c613fc();
    *(undefined8 *)(lVar8 + 0x18) = 3;
    *(undefined8 *)(lVar8 + 0x10) = 1;
    *(long *)(lVar8 + 0x20) = lVar9;
  }
  uVar19 = 0;
  func_0x0001000956f0(0);
  func_0x000107c610f8();
  func_0x000107c61174(lVar9);
  func_0x000107c453e4(uVar19);
  lVar9 = lStack_1a8;
  FUN_1030a4668(lVar22,lStack_1a8,&SUB_104638d5c);
  func_0x000104652fec(0);
  func_0x000107c610f8();
  func_0x000104651d90(lVar9);
  func_0x000107c61174(puVar10);
  lVar21 = lVar9;
  puVar13 = puVar12;
  func_0x000103c5d254(lVar9,puVar12,puVar10,uStack_138,lVar8,0,0,0);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(puVar10);
  uVar16 = *(undefined8 *)(lVar20 + _DAT_112f38ed8);
  func_0x000107c42c1c(uVar16);
  FUN_10309c554();
  lVar9 = lStack_120;
  uVar19 = uVar16;
  func_0x000107c5ed70();
  func_0x000107c5fadc();
  func_0x000107c6142c(puVar13);
  func_0x000107c5a26c(uVar16);
  func_0x000107c61170(uVar19);
  uVar19 = *(undefined8 *)(lVar20 + _DAT_112f38fa0);
  puVar13 = PTR_PTR_1126acb20;
  func_0x000107c610f8(PTR_PTR_1126acb20);
  func_0x000107c467ec();
  func_0x000107c4bc34(uVar19);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(lVar21);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(puVar13);
  func_0x000107c6142c(lVar8);
  lVar8 = lStack_128;
  pcVar23 = pcStack_190;
  (*pcStack_190)(lVar9,lStack_128);
  func_0x0001030a46ac(lVar22,&SUB_104638d5c);
  func_0x0001030a46ac(lStack_118,&SUB_1046305a8);
  (*pcVar23)(lStack_110,lVar8);
  return;
}



/* Entry: 1030a34fc; end: 1030a36b7;  */

undefined1  [16] FUN_1030a34fc(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x8_00;
  long lVar6;
  long lVar7;
  undefined1 auVar8 [16];
  long lStack_60;
  long lStack_58;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = (long)&lStack_60 - extraout_x8;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar6 = lVar3 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  if (param_2 != 0) {
    func_0x000107c5edd0(lVar3,param_1);
    lVar5 = lVar3;
    (**(code **)(lVar7 + 0x30))(lVar3,1,lVar1);
    if ((int)lVar5 == 1) {
      FUN_1030a47a0(lVar3,0x112d36580,&UNK_10d9016d0);
    }
    else {
      lVar5 = lVar6;
      (**(code **)(lVar7 + 0x20))(lVar6,lVar3,lVar1);
      func_0x000107c5edc8();
      if (lVar3 == 0) {
        (**(code **)(lVar7 + 8))(lVar6,lVar1);
      }
      else {
        lVar2 = lVar5;
        lVar4 = lVar3;
        func_0x000107c5edbc();
        if (lVar4 != 0) {
          lStack_60 = lVar5;
          lStack_58 = lVar3;
          func_0x000107c5fb78(0x2f2f3a,0xe300000000000000);
          func_0x000107c5fb78(lVar2,lVar4);
          func_0x000107c6142c(lVar4);
          lVar5 = lStack_58;
          lVar3 = lStack_60;
          (**(code **)(lVar7 + 8))(lVar6,lVar1);
          goto LAB_1030a369c;
        }
        (**(code **)(lVar7 + 8))(lVar6,lVar1);
        func_0x000107c6142c(lVar3);
      }
    }
  }
  lVar3 = 0;
  lVar5 = -0x2000000000000000;
LAB_1030a369c:
  auVar8._8_8_ = lVar5;
  auVar8._0_8_ = lVar3;
  return auVar8;
}



/* Entry: 1030a36b8; end: 1030a4187;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030a36b8(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  long extraout_x12_07;
  long lVar12;
  code *pcVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  code *pcVar17;
  code *pcVar18;
  undefined8 uStack_120;
  long lStack_118;
  code *pcStack_110;
  code *pcStack_108;
  long lStack_100;
  long lStack_f8;
  code *pcStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  ulong uStack_78;
  ulong auStack_70 [2];
  
  lVar3 = 0x112d36580;
  uStack_c0 = param_1;
  lStack_90 = param_4;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar3 = (long)&uStack_120 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_b0 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar9 = lVar3 - extraout_x12;
  uStack_b8 = uVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar16 = uVar9 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = lVar16 - extraout_x12_01;
  lVar3 = 0;
  func_0x000107c5eb08();
  lVar12 = *(long *)(lVar3 + -8);
  lStack_a0 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar10 = lVar15 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_c8 = lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar10 - extraout_x12_02;
  lVar4 = 0;
  func_0x000107c5ede0();
  lStack_98 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_98 + 0x40));
  lVar11 = lVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_d0 = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar11 - extraout_x12_03;
  lStack_e8 = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar11 - extraout_x12_04;
  lStack_e0 = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar11 - extraout_x12_05;
  lStack_d8 = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar11 - extraout_x12_06;
  lStack_a8 = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar11 - extraout_x12_07;
  lVar3 = param_2;
  func_0x000107c5c744();
  func_0x000107c61180();
  if (lVar3 == 0) {
LAB_1030a396c:
                    /* WARNING: Could not recover jumptable at 0x0001030a3994. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lStack_90 + 0x10))(lStack_90,1);
    return;
  }
  lVar5 = lVar3;
  func_0x000107c4a028();
  func_0x000107c61170(lVar3);
  if ((int)lVar5 == 0) goto LAB_1030a396c;
  func_0x000107c50300(param_2);
  func_0x000107c61180();
  func_0x000107c5eae8(lVar10);
  func_0x000107c61170(param_2);
  func_0x000107c5eaf0(lVar15);
  pcVar13 = *(code **)(lVar12 + 8);
  (*pcVar13)(lVar10,lStack_a0);
  lVar3 = lStack_98;
  pcVar18 = *(code **)(lStack_98 + 0x30);
  lVar10 = lVar15;
  (*pcVar18)(lVar15,1,lVar4);
  if ((int)lVar10 == 1) {
    FUN_1030a47a0(lVar15,0x112d36580,&UNK_10d9016d0);
    (**(code **)(lStack_90 + 0x10))(lStack_90,1);
    return;
  }
  pcVar17 = *(code **)(lVar3 + 0x20);
  lVar10 = lVar11;
  pcStack_f0 = pcVar13;
  (*pcVar17)(lVar11,lVar15,lVar4);
  func_0x000107c5ed70();
  uVar9 = 0xd000000000000015;
  func_0x000107c5fbb4(0xd000000000000015,0x800000010f11d210,lVar10,lVar15);
  func_0x000107c6142c(lVar15);
  lVar15 = lStack_a8;
  if ((uVar9 & 1) != 0) {
    pcVar13 = *(code **)(lVar3 + 0x10);
    (*pcVar13)(lStack_a8,lVar11,lVar4);
    goto LAB_1030a3f68;
  }
  uVar14 = 0x74756f6b63656863;
  pcStack_108 = pcVar17;
  func_0x0001000d224c(auStack_70);
  uVar9 = auStack_70[0];
  uVar6 = auStack_70[0];
  func_0x000107c426c0();
  func_0x000107c615e8(uVar9);
  lVar15 = lStack_a8;
  if ((int)uVar6 == 0) {
    func_0x000107c5ed74();
    func_0x000100077018(0x74756f6b63656863,0xe900000000000073,uVar9);
    func_0x000107c6142c(uVar9);
    if ((uVar14 & 1) != 0) goto LAB_1030a3ac0;
    func_0x000107c5ed74();
    uVar6 = 0x74726163;
    uVar8 = 0xe400000000000000;
    func_0x000100077018(0x74726163,0xe400000000000000,uVar9);
    func_0x000107c6142c(uVar9);
    if ((uVar6 & 1) != 0) goto LAB_1030a3ac0;
    func_0x000107c5ed70();
    uVar6 = 0;
    func_0x000107c5fbb4(0xd00000000000001a,0x800000010f11d230,uVar9,uVar8);
    func_0x000107c6142c(uVar8);
    lVar3 = lStack_98;
    pcVar13 = *(code **)(lStack_98 + 0x10);
    (*pcVar13)(lVar15,lVar11,lVar4);
    if ((uVar6 & 1) == 0) goto LAB_1030a3f68;
  }
  else {
LAB_1030a3ac0:
    pcVar13 = *(code **)(lStack_98 + 0x10);
    (*pcVar13)(lVar15,lVar11,lVar4);
  }
  lVar3 = *(long *)(param_3 + _DAT_112f38ee0);
  lVar12 = *(long *)(lVar3 + _DAT_1130682c0);
  uStack_120 = *(undefined8 *)(lVar3 + _DAT_1130682e0);
  lVar15 = ((undefined8 *)(lVar3 + _DAT_1130682e0))[1];
  plVar1 = (long *)(*(long *)(lVar3 + _DAT_113068288) + _DAT_113067eb8);
  lVar3 = *plVar1;
  lVar10 = plVar1[1];
  pcStack_110 = pcVar13;
  if (lVar10 == 0) {
    lStack_f8 = 0;
  }
  else {
    func_0x000107c5fb1c();
    lStack_f8 = lVar10;
  }
  lStack_118 = lVar15;
  func_0x000107c61434(lVar15);
  func_0x000107c61434(lVar12);
  func_0x0001000d224c(auStack_70);
  uVar9 = auStack_70[0];
  func_0x000107c425e4();
  func_0x000107c615e8(auStack_70[0]);
  func_0x0001000d224c(&uStack_78);
  uVar6 = uStack_78;
  func_0x000107c425e8();
  func_0x000107c615e8(uStack_78);
  lVar10 = *(long *)(lVar12 + 0x10);
  lVar15 = lVar12;
  func_0x000107c61434(lVar12);
  lStack_100 = lVar12;
  if (lVar10 == 0) {
LAB_1030a3bec:
    if ((uVar9 & 1) == 0) {
      func_0x000107c5ed74();
      uVar9 = 0x74756f6b63656863;
      func_0x000100077018(0x74756f6b63656863,0xe900000000000073,lVar15);
      func_0x000107c6142c(lVar15);
      if ((uVar9 & 1) == 0) {
        func_0x000107c5ed74();
        uVar9 = 0x74726163;
        lVar10 = -0x1c00000000000000;
        func_0x000100077018(0x74726163,0xe400000000000000,lVar15);
        func_0x000107c6142c(lVar15);
        if ((uVar9 & 1) == 0) {
          func_0x000107c5ed70();
          uVar9 = 0;
          func_0x000107c5fbb4(0xd00000000000001a,0x800000010f11d230,lVar15,lVar10);
          func_0x000107c6142c(lVar10);
          lVar15 = lVar10;
          lVar12 = lStack_100;
          if ((uVar9 & 1) == 0) goto LAB_1030a3cb0;
        }
      }
    }
    lVar12 = lStack_100;
    lVar10 = lVar15;
    if (lStack_f8 != 0) {
      lVar10 = lStack_100;
      func_0x000107c61558(lStack_100);
      lVar15 = lStack_f8;
      lStack_88 = lVar12;
      func_0x000107c61434(lStack_f8);
      func_0x00010018433c(lVar3,lVar15,0x6469436353,0xe500000000000000,lVar10);
      lVar10 = lVar3;
      lVar12 = lStack_88;
    }
  }
  else {
    lVar15 = 0x6469436353;
    uVar14 = 0;
    func_0x000100029284(0x6469436353);
    lVar10 = lVar15;
    if ((uVar14 & 1) == 0) goto LAB_1030a3bec;
  }
LAB_1030a3cb0:
  if ((uVar6 & 1) == 0) {
    func_0x000107c5ed74();
    uVar9 = 0x74756f6b63656863;
    func_0x000100077018(0x74756f6b63656863,0xe900000000000073,lVar10);
    func_0x000107c6142c(lVar10);
    if ((uVar9 & 1) != 0) goto LAB_1030a3d70;
    func_0x000107c5ed74();
    uVar9 = 0x74726163;
    uVar8 = 0xe400000000000000;
    func_0x000100077018(0x74726163,0xe400000000000000,lVar10);
    func_0x000107c6142c(lVar10);
    if ((uVar9 & 1) != 0) goto LAB_1030a3d70;
    func_0x000107c5ed70();
    uVar9 = 0;
    func_0x000107c5fbb4(0xd00000000000001a,0x800000010f11d230,lVar10,uVar8);
    func_0x000107c6142c(uVar8);
    if ((uVar9 & 1) != 0) goto LAB_1030a3d70;
  }
  else {
LAB_1030a3d70:
    lVar3 = lVar12;
    func_0x000107c61558(lVar12);
    lStack_88 = lVar12;
    func_0x00010018433c(0x7461686370616e73,0xe800000000000000,0x72756f735f6d7475,0xea00000000006563,
                        lVar3);
    lVar12 = lStack_88;
  }
  lVar3 = lStack_98;
  lVar15 = lStack_a8;
  lVar10 = lStack_118;
  lStack_a8 = lVar12;
  FUN_10309b048(lVar12);
  lVar5 = lStack_e0;
  func_0x000103c4e488(lStack_e0);
  func_0x000107c6142c(lVar12);
  if (lVar10 == 0) {
    func_0x000107c6142c(lStack_100);
    func_0x000107c6142c(lStack_f8);
LAB_1030a3e6c:
    lVar10 = lStack_a8;
    lVar16 = lStack_d8;
    (*pcStack_108)(lStack_d8,lVar5,lVar4);
  }
  else {
    func_0x000107c5edd0(lVar16,uStack_120,lVar10);
    lVar7 = lVar16;
    (*pcVar18)(lVar16,1,lVar4);
    lVar12 = lStack_e8;
    if ((int)lVar7 == 1) {
      func_0x000107c6142c(lStack_100);
      func_0x000107c6142c(lVar10);
      func_0x000107c6142c(lStack_f8);
      FUN_1030a47a0(lVar16,0x112d36580,&UNK_10d9016d0);
      goto LAB_1030a3e6c;
    }
    (*pcStack_108)(lStack_e8,lVar16,lVar4);
    lVar3 = 0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c61538();
    lVar7 = lVar3;
    func_0x000103c4eaa0();
    func_0x000107c61408(lVar3 + 0x20,7,PTR___sSSN_11034da80);
    lVar16 = lStack_d8;
    func_0x000103c4e488(lStack_d8,lVar7,0);
    func_0x000107c6142c(lStack_100);
    func_0x000107c6142c(lVar10);
    lVar3 = lStack_98;
    func_0x000107c6142c(lVar7);
    func_0x000107c6142c(lStack_f8);
    pcVar13 = *(code **)(lVar3 + 8);
    (*pcVar13)(lVar12,lVar4);
    (*pcVar13)(lVar5,lVar4);
    lVar10 = lStack_a8;
  }
  func_0x000107c6142c(lVar10);
  (**(code **)(lVar3 + 0x28))(lVar15,lVar16,lVar4);
  pcVar13 = pcStack_110;
LAB_1030a3f68:
  func_0x000103c54da8(0);
  uVar9 = uStack_b8;
  (*pcVar13)(uStack_b8,lVar15,lVar4);
  pcVar18 = *(code **)(lVar3 + 0x38);
  (*pcVar18)(uVar9,0,1,lVar4);
  lVar3 = lStack_b0;
  lStack_a8 = lVar11;
  (*pcVar13)(lStack_b0,lVar11,lVar4);
  (*pcVar18)(lVar3,0,1,lVar4);
  uVar6 = uVar9;
  func_0x000103c54710(uVar9,lVar3);
  FUN_1030a47a0(lVar3,0x112d36580,&UNK_10d9016d0);
  FUN_1030a47a0(uVar9,0x112d36580,&UNK_10d9016d0);
  lVar3 = lStack_d0;
  bVar2 = (uVar6 & 1) != 0;
  if (!bVar2) {
    (*pcVar13)(lStack_d0,lVar15,lVar4);
    lVar10 = lStack_c8;
    func_0x000107c5eaec(lStack_c8,0x404e000000000000,lVar3,0);
    func_0x000107c5eae0();
    (*pcStack_f0)(lVar10,lStack_a0);
    uVar8 = uStack_c0;
    func_0x000107c4b768(uStack_c0);
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    func_0x000107c61170(uVar8);
  }
  (**(code **)(lStack_90 + 0x10))(lStack_90,bVar2);
  pcVar13 = *(code **)(lStack_98 + 8);
  (*pcVar13)(lStack_a8,lVar4);
  (*pcVar13)(lVar15,lVar4);
  return;
}



/* Entry: 1030a4188; end: 1030a42f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030a4188(long *param_1,long param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar5 = param_2;
  func_0x000107c4d3e4();
  func_0x000107c61180();
  plVar2 = param_1;
  func_0x000107c5faec();
  func_0x000107c61170();
  func_0x000103c54dc8();
  if (plVar2 == (long *)*param_1 && lVar5 == param_1[1]) {
    func_0x000107c6142c(lVar5);
  }
  else {
    func_0x000107c605b8(plVar2,lVar5,(long *)*param_1,param_1[1],0);
    func_0x000107c6142c(lVar5);
    if (((ulong)plVar2 & 1) == 0) {
      return;
    }
  }
  uStack_50 = 0;
  uStack_48 = 0xe000000000000000;
  func_0x000107c602fc(0x2a);
  func_0x000107c5fb78(0xd000000000000026,0x800000010f11d1e0);
  puVar1 = (undefined8 *)(*(long *)(unaff_x20 + _DAT_112f38ee0) + _DAT_1130682b0);
  uStack_58 = puVar1[1];
  uStack_60 = *puVar1;
  uVar3 = 0x112d35ff8;
  func_0x0001000285a8(0x112d35ff8,&UNK_10d900cd0);
  func_0x000107c603d0(&uStack_60,&uStack_50,uVar3,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c5fb78(0x3b29,0xe200000000000000);
  uVar3 = uStack_48;
  uVar4 = uStack_50;
  func_0x000107c5fadc(uStack_50,uStack_48);
  func_0x000107c6142c(uVar3);
  func_0x000107c42a80(param_2);
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 1030a42f4; end: 1030a434f;  */

void FUN_1030a42f4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_50 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_30 = uStack_50;
  func_0x0001047ec630(param_1,FUN_1030a4350,auStack_40,FUN_10309bd90,0,FUN_1030a4374,auStack_60);
  return;
}



/* Entry: 1030a4350; end: 1030a4373;  */

void FUN_1030a4350(void)

{
  FUN_10309b92c();
  return;
}



/* Entry: 1030a4374; end: 1030a439f;  */

/* WARNING: Possible PIC construction at 0x00010309be4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010309be6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010309be50) */
/* WARNING: Removing unreachable block (ram,0x00010309be70) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030a4374(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_112f38ee0) + _DAT_1130682d8);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  puVar4 = PTR_PTR_1126acb30;
  func_0x000107c610f8(PTR_PTR_1126acb30);
  func_0x000107c61434(uVar3);
  func_0x000107c4563c(puVar4);
  FUN_10309be8c(param_1,param_2,uVar2,uVar3,puVar4);
  func_0x000107c6142c(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 1030a43a0; end: 1030a43ff;  */

void FUN_1030a43a0(void)

{
  FUN_10309fab4();
  return;
}



/* Entry: 1030a4400; end: 1030a4417;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030a4400(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + _DAT_112f38fc0) = 1;
    func_0x000107c61170();
  }
  return;
}



/* Entry: 1030a4418; end: 1030a4447;  */

void FUN_1030a4418(void)

{
  FUN_10309fab4();
  return;
}



/* Entry: 1030a4448; end: 1030a444f;  */

void FUN_1030a4448(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined **ppuVar2;
  undefined8 unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  
  ppuVar2 = &puStack_60;
  pcVar1 = "createAdProductInstantPageContext()";
  func_0x0001000c10c0("createAdProductInstantPageContext()");
  func_0x000107c61180();
  uStack_40 = 0x1030a44b4;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_110607af0;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c6157c();
  func_0x000107c61574(unaff_x20);
  func_0x000107c4e524(pcVar1,param_2,ppuVar2);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 1030a4450; end: 1030a447f;  */

void FUN_1030a4450(void)

{
  FUN_10309fab4();
  return;
}



/* Entry: 1030a4480; end: 1030a44cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030a4480(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112f38f98);
    func_0x000107c6157c(uVar2);
    func_0x0001000d224c(&lStack_50);
    func_0x000107c61574(uVar2);
    if (lStack_50 != 0) {
      func_0x000103c4e3c4(0);
      uVar2 = *(undefined8 *)(lVar1 + _DAT_112f38f40);
      func_0x000107c61174(uVar2);
      func_0x000103c4b33c(lStack_50,uVar2);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(lStack_50);
      func_0x000107c61170(uVar2);
      return;
    }
    func_0x000107c61170(lVar1);
  }
  func_0x000107c610f8(PTR_PTR_1126d6d68);
  func_0x000107c453e4();
  return;
}



/* Entry: 1030a44d0; end: 1030a455b;  */

void FUN_1030a44d0(void)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  uVar3 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  uVar3 = uVar3 + 0x10 & (uVar3 ^ 0xffffffffffffffff);
  lVar1 = *(long *)(unaff_x20 +
                   (*(long *)(*(long *)(lVar1 + -8) + 0x40) + uVar3 + 7 & 0xffffffffffffff8));
  plVar2 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1030a455c;
  plVar2[2] = unaff_x20 + uVar3;
  plVar2[3] = lVar1;
  lVar1 = 0;
  func_0x000107c5ede0();
  plVar2[4] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar2[5] = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[6] = uVar3;
  lVar1 = 0;
  func_0x000107c5eb08();
  plVar2[7] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar2[8] = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[9] = uVar3;
  lVar1 = 0;
  func_0x000107c5fcec();
  plVar2[10] = lVar1;
  func_0x000107c5fce8();
  plVar2[0xb] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1030a0fc4,0,0);
  return;
}



/* Entry: 1030a455c; end: 1030a4597;  */

void FUN_1030a455c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001030a4594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1030a4598; end: 1030a45a3;  */

void FUN_1030a4598(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    FUN_10309e00c(uVar1,uVar3);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 1030a45a4; end: 1030a45e3;  */

void FUN_1030a45a4(long *param_1,code *param_2,long param_3)

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



/* Entry: 1030a45e4; end: 1030a460f;  */

void FUN_1030a45e4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1030a4610; end: 1030a461b;  */

void FUN_1030a4610(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c61174();
    FUN_1030a250c(uVar1,uVar3,lVar2,lVar2);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 1030a461c; end: 1030a4667;  */

void FUN_1030a461c(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  if ((param_1 != 0) && (param_2 == 0)) {
    lVar1 = param_1;
    func_0x000107c615f0(param_1,0,unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
    func_0x000107c5ed90();
    func_0x000107c4b788(param_1);
    func_0x000107c615e8(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1030a4668; end: 1030a46e7;  */

undefined8 FUN_1030a4668(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_3)();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1030a46e8; end: 1030a4713;  */

void FUN_1030a46e8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1030a4714; end: 1030a471b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030a4714(void)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  long unaff_x20;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar1 + 0x10,auStack_38,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c61428(lVar2 + 0x10,auStack_50,0,0);
    lVar2 = lVar2 + 0x10;
    func_0x000107c61618();
    if (lVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined1 *)(lVar2 + _DAT_112f38fc0);
      func_0x000107c61170();
    }
    FUN_103098660(uVar3);
    func_0x000107c615e8(lVar1);
  }
  return;
}



/* Entry: 1030a471c; end: 1030a477f;  */

void FUN_1030a471c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1030a4780; end: 1030a479f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030a4780(void)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  func_0x0001000d224c(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c5075c(uStack_38);
  func_0x000107c615e8(uVar1);
  func_0x0001000d224c(&uStack_38);
  func_0x000107c5075c(uStack_38);
  func_0x000107c615e8(uStack_38);
  return;
}



/* Entry: 1030a47a0; end: 1030a47df;  */

undefined8 FUN_1030a47a0(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1030a47e0; end: 1030a48a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030a47e0(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + _DAT_112f38f30);
    func_0x000107c615f0(uVar3);
    FUN_103099d60();
    func_0x000107c615e8(uVar3);
    uVar4 = *(undefined8 *)(lVar1 + _DAT_112f38fa0);
    uVar3 = uVar4;
    func_0x000107c615f0(uVar4);
    FUN_10309c554();
    puVar2 = PTR_PTR_1126acb20;
    func_0x000107c610f8(PTR_PTR_1126acb20);
    func_0x000107c467ec();
    func_0x000107c61170(uVar3);
    func_0x000107c4bc34(uVar4);
    func_0x000107c61170(lVar1);
    func_0x000107c615e8(uVar4);
    func_0x000107c61170(puVar2);
  }
  return;
}



/* Entry: 1030a48a4; end: 1030a48a7; -[_TtC40SCAdAttachmentHandlerImplementationSwift27AdInstantPageViewController defaultProjectNameV3] */

void FUN_1030a48a4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010406fc98();
  uVar2 = *param_1;
  uVar1 = param_1[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1030a48a8; end: 1030a48c3; -[_TtC40SCAdAttachmentHandlerImplementationSwift27AdInstantPageViewController defaultProjectNameV2] */

void FUN_1030a48a8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010406fc98();
  uVar2 = *param_1;
  uVar1 = param_1[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1030a48c4; end: 1030a4b7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1030a48c4(ulong param_1,long param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  
  if (param_1 == 0) {
LAB_1030a4a78:
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (param_2 == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      lVar8 = *(long *)(param_2 + 0x10);
      if (lVar8 != 0) {
        func_0x000103094ef0(0,lVar8,0);
        puVar11 = (undefined8 *)(param_2 + 0x28);
        do {
          uVar5 = puVar11[-1];
          uVar1 = *puVar11;
          puVar4 = PTR_PTR_1126acaf8;
          func_0x000107c610f8();
          func_0x000107c61434(uVar1);
          func_0x000107c5fadc(uVar5,uVar1);
          func_0x000107c6142c(uVar1);
          func_0x000107c470c4();
          func_0x000107c61170(uVar5);
          uVar6 = *(ulong *)(puVar7 + 0x10);
          if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar6) {
            func_0x000103094ef0(1 < *(ulong *)(puVar7 + 0x18),uVar6 + 1,1);
          }
          puVar11 = puVar11 + 2;
          *(ulong *)(puVar7 + 0x10) = uVar6 + 1;
          *(undefined **)(puVar7 + uVar6 * 8 + 0x20) = puVar4;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
      }
    }
  }
  else {
    uVar6 = param_1 & 0xffffffffffffff8;
    if (param_1 >> 0x3e == 0) {
      uVar9 = *(ulong *)(uVar6 + 0x10);
      if (uVar9 == 0) goto LAB_1030a4a78;
    }
    else {
      uVar9 = param_1;
      if (-1 < (long)param_1) {
        uVar9 = uVar6;
      }
      uVar10 = uVar9;
      func_0x000107c60480();
      if (uVar10 == 0) goto LAB_1030a4a78;
      func_0x000107c60480();
      if (uVar9 == 0) {
        return PTR___swiftEmptyArrayStorage_11034f1c8;
      }
    }
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000103094ef0(0,uVar9 & ((long)uVar9 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1030a4b7c);
      (*pcVar2)();
    }
    uVar10 = 0;
    do {
      if ((param_1 & 0xc000000000000001) == 0) {
        if ((long)uVar10 < 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1030a4a3c);
          (*pcVar2)();
        }
        if (*(ulong *)(uVar6 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1030a4a40);
          (*pcVar2)();
        }
        uVar3 = *(ulong *)(param_1 + uVar10 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar3 = uVar10;
        func_0x0001030b6588(uVar10,param_1);
      }
      uVar5 = *(undefined8 *)(uVar3 + _DAT_113090378);
      uVar1 = ((undefined8 *)(uVar3 + _DAT_113090378))[1];
      puVar4 = PTR_PTR_1126acaf8;
      func_0x000107c610f8();
      func_0x000107c5fadc(uVar5,uVar1);
      func_0x000107c470c4();
      func_0x000107c61170(uVar3);
      func_0x000107c61170(uVar5);
      uVar3 = *(ulong *)(puVar7 + 0x10);
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar3) {
        func_0x000103094ef0(1 < *(ulong *)(puVar7 + 0x18),uVar3 + 1,1);
      }
      uVar10 = uVar10 + 1;
      *(ulong *)(puVar7 + 0x10) = uVar3 + 1;
      *(undefined **)(puVar7 + uVar3 * 8 + 0x20) = puVar4;
    } while (uVar9 != uVar10);
  }
  return puVar7;
}



/* Entry: 1030a4b7c; end: 1030a4fd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1030a4b7c(double param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long extraout_x8;
  long lVar11;
  long unaff_x20;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined8 uVar17;
  long lVar18;
  ulong auStack_f0 [8];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  
  lVar4 = 0;
  lVar10 = param_3;
  func_0x000107c5eec8();
  lVar18 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar18 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c3ceac(*(undefined8 *)(unaff_x20 + _DAT_112f39300));
  lVar11 = *(long *)(unaff_x20 + _DAT_112f392f0);
  lVar5 = ((long *)(lVar11 + _DAT_113067ec0))[1];
  if (lVar5 == 0) {
    func_0x000107c5eec4((long)&uStack_b0 + lVar1);
    func_0x000107c5eeac();
    (**(code **)(lVar18 + 8))((long)&uStack_b0 + lVar1,lVar4);
    lVar4 = 0;
  }
  else {
    lVar4 = lVar5;
    lVar10 = lVar5;
    lVar5 = *(long *)(lVar11 + _DAT_113067ec0);
  }
  uStack_80 = 0;
  uStack_78 = 0xe000000000000000;
  func_0x000107c61434(lVar4);
  func_0x000107c5fb78(param_2,param_3);
  func_0x000107c5fb78(0x5f,0xe100000000000000);
  func_0x000107c5fb78(lVar5,lVar10);
  func_0x000107c5fb78(0x5f,0xe100000000000000);
  puVar8 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  uStack_88 = param_4;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar8);
  func_0x000107c5fb78(0x5f,0xe100000000000000);
  func_0x000107c5fddc(param_1 * 1000.0,&uStack_80,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  uVar15 = uStack_78;
  uVar7 = uStack_80;
  func_0x0001000d224c(&uStack_80);
  uVar2 = uStack_80;
  if (uStack_80 == 0) {
    uVar14 = 0;
  }
  else {
    lVar4 = lVar5;
    func_0x000107c5fadc(lVar5,lVar10);
    uVar14 = uVar2;
    func_0x000107c5ce1c();
    func_0x000107c615e8(uVar2);
    func_0x000107c61170(lVar4);
  }
  func_0x0001000d224c(&uStack_80);
  uVar2 = uStack_80;
  if (uStack_80 == 0) {
    uVar16 = 1;
  }
  else {
    lVar4 = lVar5;
    func_0x000107c5fadc(lVar5,lVar10);
    uVar16 = uVar2;
    func_0x000107c5df18();
    func_0x000107c615e8(uVar2);
    func_0x000107c61170(lVar4);
  }
  func_0x0001000d224c(&uStack_80);
  uVar2 = uStack_80;
  if (uStack_80 == 0) {
    uVar13 = 1;
  }
  else {
    lVar4 = lVar5;
    func_0x000107c5fadc(lVar5,lVar10);
    uVar13 = uVar2;
    func_0x000107c42f50();
    func_0x000107c615e8(uVar2);
    func_0x000107c61170(lVar4);
  }
  if (-1 < (long)(uVar16 | uVar14 | uVar13)) {
    uStack_b0 = *(undefined8 *)(lVar11 + _DAT_113067eb0);
    lVar18 = ((undefined8 *)(lVar11 + _DAT_113067eb0))[1];
    uVar12 = *(undefined8 *)(lVar11 + _DAT_113067eb8);
    lVar4 = ((undefined8 *)(lVar11 + _DAT_113067eb8))[1];
    uStack_a0 = uVar13;
    uStack_98 = uVar16;
    uStack_90 = uVar14;
    func_0x0001002ed07c(0);
    func_0x000107c61434(lVar18);
    func_0x000107c61434(lVar4);
    uVar6 = 0;
    func_0x000107c60110();
    uStack_a8 = *(undefined8 *)(lVar11 + _DAT_113067ee0);
    uVar17 = *(undefined8 *)(lVar11 + _DAT_113067ed0);
    func_0x000107c5fadc(uVar7,uVar15);
    func_0x000107c6142c(uVar15);
    func_0x000107c5fadc(lVar5,lVar10);
    func_0x000107c6142c(lVar10);
    if (lVar4 == 0) {
      uVar12 = 0;
      uVar15 = uStack_b0;
    }
    else {
      func_0x000107c5fadc(uVar12,lVar4);
      func_0x000107c6142c(lVar4);
      uVar15 = uStack_b0;
    }
    uStack_b0 = uVar15;
    if (lVar18 == 0) {
      uVar15 = 0;
    }
    else {
      func_0x000107c5fadc(uVar15,lVar18);
      func_0x000107c6142c(lVar18);
    }
    puVar8 = PTR_PTR_1126b9150;
    func_0x000107c610f8(PTR_PTR_1126b9150);
    uVar9 = 0x6e65675f6461656c;
    func_0x000107c5fadc(0x6e65675f6461656c,0xef6e6f6974617265);
    *(undefined8 *)((long)auStack_f0 + lVar1 + 0x30) = uVar17;
    *(undefined8 *)((long)auStack_f0 + lVar1 + 0x38) = uVar9;
    *(undefined8 *)((long)auStack_f0 + lVar1 + 0x20) = 0xb;
    *(undefined8 *)((long)auStack_f0 + lVar1 + 0x28) = 0xb;
    *(undefined8 *)((long)auStack_f0 + lVar1 + 0x18) = 0x10;
    uVar17 = uStack_a8;
    *(undefined8 *)((long)auStack_f0 + lVar1 + 8) = uVar6;
    *(undefined8 *)((long)auStack_f0 + lVar1 + 0x10) = uVar17;
    *(ulong *)((long)auStack_f0 + lVar1) = uStack_a0;
    func_0x000107c30ad4(param_1 * 1000.0,puVar8,uVar7,lVar5,uVar12,uVar15,0,uStack_90,uStack_98);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(uVar12);
    func_0x000107c61170(uVar15);
    func_0x000107c61170(uVar9);
    return puVar8;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1030a4fd4);
  (*pcVar3)();
}



/* Entry: 1030a4fd4; end: 1030a5013; -[_TtC40SCAdAttachmentHandlerImplementationSwift30AdLeadGenAttachmentEventLogger adLifecycleEventObservableV2] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030a4fd4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001004575f0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1030a5014; end: 1030a501b; -[_TtC40SCAdAttachmentHandlerImplementationSwift30AdLeadGenAttachmentEventLogger streamsType] */

undefined8 FUN_1030a5014(void)

{
  return 0;
}



/* Entry: 1030a501c; end: 1030a505b; -[_TtC40SCAdAttachmentHandlerImplementationSwift30AdLeadGenAttachmentEventLogger adLeadGenerationEventObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030a501c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001004575f0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1030a505c; end: 1030a5283;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030a505c(undefined8 param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined *puVar9;
  undefined *puVar10;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  ulong uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
  func_0x000107c61168();
  lStack_60 = 0;
  func_0x000107c3e100();
  func_0x000107c61180();
  lVar1 = lStack_60;
  func_0x000107c61174(lStack_60);
  if (puVar10 == (undefined *)0x0) {
    lVar2 = lVar1;
    func_0x000107c5ed30();
    func_0x000107c61170(lVar1);
    func_0x000107c61654();
    func_0x000107c614ac(lVar2);
    puVar9 = (undefined *)0x0;
    param_2 = 0xf000000000000000;
  }
  else {
    puVar9 = puVar10;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar10);
  }
  uVar6 = 0x800000010f11d370;
  lVar2 = -0x2fffffffffffffe8;
  FUN_1030a4b7c(0xd000000000000018,0x800000010f11d370,1);
  lVar1 = lVar2;
  func_0x000107c30ad8();
  func_0x000107c61180();
  if (lVar1 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar6);
  }
  if (param_2 >> 0x3c < 0xf) {
    func_0x00010006c00c(puVar9,param_2);
    puVar10 = puVar9;
    func_0x000107c5ee20(puVar9,param_2);
    func_0x0001000b44c0(puVar9,param_2);
  }
  else {
    puVar10 = (undefined *)0x0;
  }
  puVar3 = PTR_PTR_1126b90f8;
  func_0x000107c610f8(PTR_PTR_1126b90f8);
  func_0x000107c30d98();
  func_0x000107c61170(lVar1);
  func_0x000107c61170(puVar10);
  func_0x000104684570(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  lVar1 = lVar2;
  func_0x000104683e10(lVar2,puVar3);
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112f39308);
  lStack_60 = lVar1;
  func_0x0001002a64a8(&lStack_60);
  uVar7 = param_2;
  func_0x0001000b44c0(puVar9,param_2);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(puVar3);
  lVar4 = lVar2;
  func_0x000107c61170(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  func_0x000107c60e78();
  uVar8 = 0x800000010f11d370;
  lVar5 = -0x2fffffffffffffe8;
  lStack_b0 = lVar2;
  lStack_a8 = lVar1;
  uStack_a0 = param_2;
  puStack_98 = puVar9;
  uStack_90 = uVar6;
  FUN_1030a4b7c(0xd000000000000018,0x800000010f11d370,2);
  lVar1 = lVar5;
  func_0x000107c30ad8();
  func_0x000107c61180();
  if (lVar1 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar8);
  }
  puVar10 = PTR_PTR_1126b90f8;
  func_0x000107c610f8(PTR_PTR_1126b90f8);
  func_0x000107c5ee20(lVar4,uVar7);
  func_0x000107c30d98(puVar10,lVar1,2,0,lVar4);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar4);
  func_0x000104684570(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174(puVar10);
  lVar1 = lVar5;
  func_0x000104683e10(lVar5,puVar10);
  lStack_b8 = lVar1;
  func_0x0001002a64a8(&lStack_b8);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(lVar5);
  return;
}



/* Entry: 1030a5284; end: 1030a54ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030a5284(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lStack_48;
  
  uVar4 = 0x800000010f11d370;
  lVar1 = -0x2fffffffffffffe8;
  FUN_1030a4b7c(0xd000000000000018,0x800000010f11d370,2);
  lVar2 = lVar1;
  func_0x000107c30ad8();
  func_0x000107c61180();
  if (lVar2 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar4);
  }
  puVar3 = PTR_PTR_1126b90f8;
  func_0x000107c610f8(PTR_PTR_1126b90f8);
  func_0x000107c5ee20(param_1,param_2);
  func_0x000107c30d98(puVar3,lVar2,2,0,param_1);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(param_1);
  func_0x000104684570(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  lVar2 = lVar1;
  func_0x000104683e10(lVar1,puVar3);
  lStack_48 = lVar2;
  func_0x0001002a64a8(&lStack_48);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(lVar1);
  return;
}



/* Entry: 1030a5500; end: 1030a555f; -[_TtC40SCAdAttachmentHandlerImplementationSwift30AdLeadGenAttachmentEventLogger init] */

void FUN_1030a5500(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCAdAttachmentHandlerImplementationSwift.AdLeadGenAttachmentEventLogger",0x47
                      ,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1030a552c);
  (*pcVar1)();
}



/* Entry: 1030a5560; end: 1030a55c7; -[_TtC40SCAdAttachmentHandlerImplementationSwift30AdLeadGenAttachmentEventLogger .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001030a558c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030a55ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030a5590) */
/* WARNING: Removing unreachable block (ram,0x0001030a55b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030a5560(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f392f0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f392f8));
  return;
}



/* Entry: 1030a55c8; end: 1030a55e7;  */

void FUN_1030a55c8(void)

{
  func_0x000107c61168(&PTR_PTR_1128b3378);
  return;
}



/* Entry: 1030a55e8; end: 1030a55eb; -[_TtC40SCAdAttachmentHandlerImplementationSwift30AdLeadGenAttachmentEventLogger adInteractionEventObservable] */

void FUN_1030a55e8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 1030a55ec; end: 1030a55ef; -[_TtC40SCAdAttachmentHandlerImplementationSwift30AdLeadGenAttachmentEventLogger adLifecycleEventObservable] */

void FUN_1030a55ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 1030a55f0; end: 1030a564f; -[_TtC40SCAdAttachmentHandlerImplementationSwift28AdLeadGenAttachmentPresenter init] */

void FUN_1030a55f0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCAdAttachmentHandlerImplementationSwift.AdLeadGenAttachmentPresenter",0x45,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1030a561c);
  (*pcVar1)();
}



/* Entry: 1030a5650; end: 1030a57db; -[_TtC40SCAdAttachmentHandlerImplementationSwift28AdLeadGenAttachmentPresenter .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001030a56fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030a575c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030a577c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030a5760) */
/* WARNING: Removing unreachable block (ram,0x0001030a5700) */
/* WARNING: Removing unreachable block (ram,0x0001030a5780) */
/* WARNING: Removing unreachable block (ram,0x000100d33c3c) */
/* WARNING: Removing unreachable block (ram,0x000100d33c48) */
/* WARNING: Removing unreachable block (ram,0x000100d33c40) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030a5650(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f39340));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f39348));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f39350));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f39358));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f39360));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f39368));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f39370));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f39378));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f39380));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f39388));
  return;
}



/* Entry: 1030a57dc; end: 1030a57fb;  */

void FUN_1030a57dc(void)

{
  func_0x000107c61168(&PTR_PTR_1128b3458);
  return;
}



/* Entry: 1030a57fc; end: 1030a59a7;  */

/* WARNING: Possible PIC construction at 0x0001030a594c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030a5950) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030a57fc(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  puStack_60 = *(undefined **)(unaff_x20 + _DAT_112f393e8);
  if (puStack_60 == (undefined *)0x1) {
    uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112f39348);
    puVar2 = &UNK_110607df0;
    func_0x000107c613fc(&UNK_110607df0,0x18,7);
    func_0x000107c61614(puVar2 + 0x10);
    uStack_40 = 0x1030ab0fc;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000b0c7c;
    puStack_48 = &UNK_110608060;
    puStack_38 = puVar2;
    func_0x000107c60bc4(&puStack_60);
    func_0x000107c61574(puStack_38);
    func_0x000107c41864(uVar6);
    func_0x000107c60bd0(ppuVar3);
  }
  else {
    if (puStack_60 != (undefined *)0x0) {
      func_0x000107c60614(&UNK_11074f630,&puStack_60,&UNK_11074f630,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1030a59a8);
      (*pcVar1)();
    }
    lVar4 = unaff_x20 + _DAT_112f393d8;
    func_0x000107c61618();
    if (lVar4 != 0) {
      uVar6 = 0;
      func_0x0001041bb118(0);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f39340);
      func_0x0001041b9710(uVar5,uVar6);
      func_0x000107c61168(PTR_PTR_1126af5d0);
      func_0x000107c5c3c8();
      func_0x000107c61180();
      func_0x0001041bf5c0(0);
      func_0x0001041bf2b0();
      func_0x000107c3d24c(lVar4);
      func_0x000107c615e8(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar5);
      return;
    }
  }
  return;
}



/* Entry: 1030a59a8; end: 1030a5cb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030a59a8(long param_1)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_b8 [24];
  byte abStack_a0 [24];
  undefined8 uStack_88;
  long lStack_80;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  lVar3 = param_1 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    uVar7 = *(undefined8 *)(lVar3 + _DAT_112f393c0);
    func_0x000107c6157c(uVar7);
    func_0x000107c61170(lVar3);
    func_0x0001000d224c(&uStack_88);
    func_0x000107c61574(uVar7);
    func_0x000107c61428(param_1 + 0x10,auStack_70,0,0);
    lVar3 = param_1 + 0x10;
    func_0x000107c61618();
    if (lVar3 != 0) {
      lVar6 = *(long *)(lVar3 + _DAT_112f39340);
      func_0x000107c61174();
      func_0x000107c61170(lVar3);
      lVar3 = *(long *)(lVar6 + _DAT_113068240);
      func_0x000107c61174();
      func_0x000107c61170(lVar6);
      iVar2 = *(int *)(lVar3 + _DAT_113067ed0);
      func_0x000107c61170(lVar3);
      if (iVar2 == 0x16) {
        uVar7 = uStack_88;
        func_0x000107c614f0(uStack_88);
        (**(code **)(lStack_80 + 8))
                  (abStack_a0,&UNK_110607dc8,&UNK_1107383c8,&PTR_DAT_11304a4b0,uVar7,lStack_80);
        func_0x000107c615e8(uStack_88);
        if ((abStack_a0[0] & 1) != 0) goto LAB_1030a5c70;
        goto LAB_1030a5aec;
      }
    }
    func_0x000107c615e8(uStack_88);
  }
LAB_1030a5aec:
  func_0x000107c61428(param_1 + 0x10,&uStack_88,0,0);
  lVar3 = param_1 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    lVar6 = *(long *)(lVar3 + _DAT_112f39340);
    func_0x000107c61174();
    func_0x000107c61170(lVar3);
    lVar8 = *(long *)(lVar6 + _DAT_113068238);
    lVar3 = lVar8;
    func_0x000107c61174();
    func_0x000107c61170(lVar6);
    if (lVar8 != 0) {
      pcVar1 = *(code **)(lVar3 + _DAT_113067a10);
      uVar7 = ((undefined8 *)(lVar3 + _DAT_113067a10))[1];
      func_0x000100b64c10(pcVar1,uVar7);
      func_0x000107c61170(lVar3);
      if (pcVar1 != (code *)0x0) {
        (*pcVar1)();
        func_0x000100d33c3c(pcVar1,uVar7);
      }
    }
  }
  func_0x000107c61428(param_1 + 0x10,abStack_a0,0,0);
  lVar3 = param_1 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    lVar6 = lVar3 + _DAT_112f393d8;
    func_0x000107c61618();
    if (lVar6 != 0) {
      func_0x0001041bb118(0);
      uVar4 = *(undefined8 *)(lVar3 + _DAT_112f39340);
      func_0x000107c61174(uVar4);
      uVar7 = uVar4;
      func_0x0001041b9710();
      func_0x000107c61170(uVar4);
      puVar5 = PTR_PTR_1126af5d0;
      func_0x000107c61168(PTR_PTR_1126af5d0);
      func_0x000107c5c3c8();
      func_0x000107c61180();
      uVar4 = 0;
      func_0x0001041bf5c0(0);
      func_0x0001041bf2b0();
      func_0x000107c3d24c(lVar6);
      func_0x000107c615e8(lVar6);
      func_0x000107c61170(uVar7);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(uVar4);
    }
    func_0x000107c61170(lVar3);
  }
LAB_1030a5c70:
  func_0x000107c61428(param_1 + 0x10,auStack_b8,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + _DAT_112f393e8) = 0;
    func_0x000107c61170();
  }
  return;
}


