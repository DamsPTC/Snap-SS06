/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101b605f4; end: 101b608d7;  */

ulong FUN_101b605f4(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101b606d8);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101b606dc);
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
  func_0x000101b6108c(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101b607b0);
  (*pcVar2)();
}



/* Entry: 101b608d8; end: 101b60a2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b608d8(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    if ((*(char *)(lVar1 + _DAT_112e04958) == '\x01') &&
       (*(char *)(lVar1 + _DAT_112e048d8) == '\x01')) {
      FUN_101b5ed64();
    }
    func_0x000101b5ee5c();
    FUN_101b5ef64();
    FUN_101b5f27c();
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 101b60a30; end: 101b60a3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b60a30(double param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined **ppuVar12;
  ulong uVar13;
  undefined *puVar14;
  uint uVar15;
  long extraout_x8;
  undefined1 uVar16;
  undefined *puVar17;
  long unaff_x20;
  undefined8 uVar18;
  byte *pbVar19;
  long lVar20;
  undefined *puVar21;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [24];
  
  lVar5 = 0;
  func_0x000107c5eea4();
  lVar20 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar20 + 0x40));
  func_0x000107c61428(unaff_x20 + 0x10,auStack_88,0,0);
  lVar6 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar6 == 0) {
    return;
  }
  puStack_b8 = (undefined *)0x0;
  uVar7 = 0;
  func_0x000101b6108c(0,0x112d4c900,&PTR_PTR_1126d4dd8);
  ppuVar12 = &puStack_b8;
  func_0x000107c5fc50(param_2,ppuVar12,uVar7);
  puVar14 = puStack_b8;
  uVar15 = (uint)ppuVar12;
  if (puStack_b8 == (undefined *)0x0) {
LAB_101b5fe74:
    func_0x000107c61170(lVar6);
  }
  else {
    if (*(char *)(lVar6 + _DAT_112e048e0) == '\x01') {
      lVar8 = *(long *)(lVar6 + _DAT_112e04940);
      func_0x000107c42eac();
      func_0x000107c61180();
      if (lVar8 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101b5ffb4);
        (*pcVar4)();
      }
      lVar9 = lVar8;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170();
      if (lVar9 != 0) {
        func_0x000101b620e0();
        func_0x000107c61170(lVar9);
        if ((uVar15 & 0xff) != 1) {
          func_0x000107c5eea0(auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
          func_0x000107c5ee8c();
          (**(code **)(lVar20 + 8))(auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar5);
          param_1 = param_1 * 1000.0;
          if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101b5ffa8);
            (*pcVar4)();
          }
          if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101b5ffac);
            (*pcVar4)();
          }
          if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101b5ffb0);
            (*pcVar4)();
          }
          uVar16 = *(undefined1 *)(lVar6 + _DAT_112e048f0);
          *(bool *)(lVar6 + _DAT_112e048f0) = (long)param_1 < lVar8;
          uVar7 = *(undefined8 *)(lVar6 + _DAT_112e048c0);
          puVar21 = &UNK_11044bb90;
          func_0x000107c613fc(&UNK_11044bb90,0x18,7);
          func_0x000107c61614(puVar21 + 0x10,lVar6);
          puVar17 = &UNK_11044bd50;
          func_0x000107c613fc(&UNK_11044bd50,0x19,7);
          *(undefined **)(puVar17 + 0x10) = puVar21;
          puVar17[0x18] = uVar16;
          uStack_98 = 0x101b61140;
          puStack_a0 = &UNK_11044bd68;
          puStack_90 = puVar17;
          goto LAB_101b5fda4;
        }
      }
      func_0x000107c61170(lVar6);
    }
    else {
      puVar21 = (undefined *)((ulong)puStack_b8 & 0xffffffffffffff8);
      if ((ulong)puStack_b8 >> 0x3e == 0) {
        puVar17 = *(undefined **)(puVar21 + 0x10);
        uVar16 = 0;
        if (puVar17 != (undefined *)0x0) {
LAB_101b5fb70:
          uVar13 = 0;
          do {
            if (((ulong)puVar14 & 0xc000000000000001) == 0) {
              if (*(ulong *)(puVar21 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x101b5ff8c);
                (*pcVar4)();
              }
              uVar10 = *(ulong *)(puVar14 + uVar13 * 8 + 0x20);
              func_0x000107c61174();
            }
            else {
              uVar10 = uVar13;
              FUN_101b605f4(uVar13,puVar14,&PTR_PTR_1126d4dd8,0x112d4c900);
            }
            puVar1 = (undefined *)(uVar13 + 1);
            if (SCARRY8(uVar13,1)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x101b5ff88);
              (*pcVar4)();
            }
            uVar11 = uVar10;
            func_0x000107c49ec8();
            if ((uVar11 & 1) != 0) {
              uVar13 = uVar10;
              func_0x000107c44bf4();
              uVar16 = (undefined1)uVar13;
              func_0x000107c61170(uVar10);
              goto LAB_101b5fd14;
            }
            func_0x000107c61170(uVar10);
            uVar13 = uVar13 + 1;
          } while (puVar1 != puVar17);
          uVar16 = 0;
        }
      }
      else {
        puVar17 = puStack_b8;
        if (-1 < (long)puStack_b8) {
          puVar17 = puVar21;
        }
        func_0x000107c60480();
        if (puVar17 != (undefined *)0x0) goto LAB_101b5fb70;
        uVar16 = 0;
      }
LAB_101b5fd14:
      uVar3 = *(undefined1 *)(lVar6 + _DAT_112e048f0);
      *(undefined1 *)(lVar6 + _DAT_112e048f0) = uVar16;
      uVar7 = *(undefined8 *)(lVar6 + _DAT_112e048c0);
      puVar21 = &UNK_11044bb90;
      func_0x000107c613fc(&UNK_11044bb90,0x18,7);
      func_0x000107c61614(puVar21 + 0x10,lVar6);
      puVar17 = &UNK_11044bcb0;
      func_0x000107c613fc(&UNK_11044bcb0,0x19,7);
      *(undefined **)(puVar17 + 0x10) = puVar21;
      puVar17[0x18] = uVar3;
      uStack_98 = 0x101b61134;
      puStack_a0 = &UNK_11044bcc8;
      puStack_90 = puVar17;
LAB_101b5fda4:
      uStack_b0 = 0x42000000;
      puStack_a8 = &UNK_1000f6b44;
      ppuVar12 = &puStack_b8;
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      func_0x000107c60bc4(ppuVar12);
      func_0x000107c61574(puStack_90);
      func_0x000107c4e524(uVar7);
      func_0x000107c60bd0(ppuVar12);
      uVar13 = *(ulong *)(*(long *)(lVar6 + _DAT_112e04920) + _DAT_112fea2a8);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (uVar13 == 0) {
        pbVar19 = (byte *)(lVar6 + _DAT_112e048f0);
      }
      else {
        uVar10 = uVar13;
        func_0x000107c4d7b8();
        func_0x000107c615e8(uVar13);
        pbVar19 = (byte *)(lVar6 + _DAT_112e048f0);
        if ((*pbVar19 == 1) && ((uVar10 & 1) != 0)) {
          if (*(char *)(lVar6 + _DAT_112e04958) == '\x01') {
            FUN_101b5ffb4(puVar14);
          }
          func_0x000107c6142c(puVar14);
          goto LAB_101b5fe74;
        }
      }
      func_0x000107c6142c(puVar14);
      if ((*pbVar19 & 1) != 0) goto LAB_101b5fe74;
      puVar2 = (undefined8 *)(lVar6 + _DAT_112e048f8);
      uVar7 = *puVar2;
      puVar14 = (undefined *)puVar2[1];
      *puVar2 = 0;
      puVar2[1] = 0xe000000000000000;
      uVar18 = *(undefined8 *)(lVar6 + _DAT_112e048c0);
      puVar21 = &UNK_11044bb90;
      func_0x000107c613fc(&UNK_11044bb90,0x18,7);
      func_0x000107c61614(puVar21 + 0x10,lVar6);
      puVar17 = &UNK_11044bd00;
      func_0x000107c613fc(&UNK_11044bd00,0x28,7);
      *(undefined **)(puVar17 + 0x10) = puVar21;
      *(undefined8 *)(puVar17 + 0x18) = uVar7;
      *(undefined **)(puVar17 + 0x20) = puVar14;
      uStack_98 = 0x101b60a38;
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0x42000000;
      puStack_a8 = &UNK_1000f6b44;
      puStack_a0 = &UNK_11044bd18;
      ppuVar12 = &puStack_b8;
      puStack_90 = puVar17;
      func_0x000107c60bc4(ppuVar12);
      puVar21 = puStack_90;
      func_0x000107c61434(puVar14);
      func_0x000107c61574(puVar21);
      func_0x000107c4e524(uVar18);
      func_0x000107c60bd0(ppuVar12);
      func_0x000107c61170(lVar6);
    }
    func_0x000107c6142c(puVar14);
  }
  return;
}



/* Entry: 101b60a40; end: 101b60b3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b60a40(void)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(lVar1 + _DAT_112e048c0);
    puVar2 = &UNK_11044bdc8;
    func_0x000107c613fc(&UNK_11044bdc8,0x18,7);
    *(long *)(puVar2 + 0x10) = lVar1;
    pcStack_58 = FUN_101b60b3c;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    puStack_60 = &UNK_11044bde0;
    ppuVar3 = &puStack_78;
    puStack_50 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    puVar2 = puStack_50;
    func_0x000107c615f0(uVar4);
    func_0x000107c61174(lVar1);
    func_0x000107c61574(puVar2);
    func_0x000107c4e524(uVar4);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c615e8(uVar4);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 101b60b3c; end: 101b60c73;  */

/* WARNING: Possible PIC construction at 0x000101b60b94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b60bd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b60bec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b60bd4) */
/* WARNING: Removing unreachable block (ram,0x000101b60b98) */
/* WARNING: Removing unreachable block (ram,0x000101b60c2c) */
/* WARNING: Removing unreachable block (ram,0x000101b60c34) */
/* WARNING: Removing unreachable block (ram,0x000101b60ba0) */
/* WARNING: Removing unreachable block (ram,0x000101b60c40) */
/* WARNING: Removing unreachable block (ram,0x000101b60bac) */
/* WARNING: Removing unreachable block (ram,0x000101b60c50) */
/* WARNING: Removing unreachable block (ram,0x000101b60bb4) */
/* WARNING: Removing unreachable block (ram,0x000101b60c70) */
/* WARNING: Removing unreachable block (ram,0x000101b60bc0) */
/* WARNING: Removing unreachable block (ram,0x000101b60bc8) */
/* WARNING: Removing unreachable block (ram,0x000107c6142c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0014) */
/* WARNING: Removing unreachable block (ram,0x000101b60bf0) */
/* WARNING: Removing unreachable block (ram,0x000101b60c20) */
/* WARNING: Removing unreachable block (ram,0x000101b60bf4) */
/* WARNING: Removing unreachable block (ram,0x000101b60c04) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b60b3c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112e04950);
  func_0x000107c4e020(uVar1);
  func_0x000107c61180();
  uVar2 = 0;
  func_0x000101b6108c(0,0x112d58220,&PTR_PTR_1126c2d78);
  func_0x000107c5fc54(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 101b60c74; end: 101b60df3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b60c74(ulong param_1)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  puVar8 = auStack_58;
  func_0x000107c61428(unaff_x20 + 0x10,puVar8,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 == 0) {
    return;
  }
  puVar1 = (ulong *)(lVar2 + _DAT_112e048f8);
  uVar4 = *puVar1;
  puVar9 = (undefined1 *)puVar1[1];
  uVar3 = param_1;
  func_0x000107c5faec();
  if (uVar4 != uVar3 || puVar9 != puVar8) {
    func_0x000107c605b8(uVar4,puVar9,uVar3,puVar8,0);
    func_0x000107c6142c(puVar8);
    if ((uVar4 & 1) != 0) goto LAB_101b60dd4;
    func_0x000107c5faec();
    uVar4 = *puVar1;
    puVar8 = (undefined1 *)puVar1[1];
    *puVar1 = param_1;
    puVar1[1] = (ulong)puVar9;
    uVar10 = *(undefined8 *)(lVar2 + _DAT_112e048c0);
    puVar5 = &UNK_11044bb90;
    func_0x000107c613fc(&UNK_11044bb90,0x18,7);
    func_0x000107c61614(puVar5 + 0x10,lVar2);
    puVar6 = &UNK_11044be40;
    func_0x000107c613fc(&UNK_11044be40,0x28,7);
    *(undefined **)(puVar6 + 0x10) = puVar5;
    *(ulong *)(puVar6 + 0x18) = uVar4;
    *(undefined1 **)(puVar6 + 0x20) = puVar8;
    uStack_68 = 0x101b61154;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_1000f6b44;
    puStack_70 = &UNK_11044be58;
    ppuVar7 = &puStack_88;
    puStack_60 = puVar6;
    func_0x000107c60bc4(ppuVar7);
    puVar5 = puStack_60;
    func_0x000107c61434(puVar8);
    func_0x000107c61574(puVar5);
    func_0x000107c4e524(uVar10);
    func_0x000107c60bd0(ppuVar7);
  }
  func_0x000107c6142c(puVar8);
LAB_101b60dd4:
  func_0x000107c61170(lVar2);
  return;
}



/* Entry: 101b60df4; end: 101b60e1f;  */

void FUN_101b60df4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101b60e20; end: 101b61043;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b60e20(void)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined1 auStack_48 [24];
  
  ppuVar4 = &puStack_b0;
  uVar5 = 0;
  ppuVar8 = &puStack_b0;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 == 0) {
    return;
  }
  lVar3 = lVar2;
  func_0x000107c5eba8();
  if (lVar3 == 0) {
    func_0x000107c61170(lVar2);
    uStack_68 = 0;
    uStack_70 = 0;
    lStack_58 = 0;
    uStack_60 = 0;
    goto LAB_101b61018;
  }
  uStack_80 = 0x6174536567646162;
  uStack_78 = 0xeb00000000737574;
  puVar6 = PTR___sSSN_11034da80;
  func_0x000107c602d4(&puStack_b0,&uStack_80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  if (*(long *)(lVar3 + 0x10) == 0) {
LAB_101b60efc:
    uStack_68 = 0;
    uStack_70 = 0;
    lStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    func_0x000107c61434(lVar3);
    func_0x000100df95d0(&puStack_b0);
    if (((ulong)puVar6 & 1) == 0) {
      func_0x000107c6142c(lVar3);
      goto LAB_101b60efc;
    }
    func_0x0001000bb420(*(long *)(lVar3 + 0x38) + (long)ppuVar4 * 0x20,&uStack_70);
    func_0x000107c6142c(lVar3);
  }
  func_0x000107c6142c(lVar3);
  func_0x0001007bbff0(&puStack_b0);
  if (lStack_58 != 0) {
    func_0x000107c6147c(&puStack_b0,&uStack_70,PTR___sypN_11034f1a8 + 8,PTR___sSbN_11034dd40,6);
    if ((uVar5 & 1) != 0) {
      uVar1 = *(undefined1 *)(lVar2 + _DAT_112e048f0);
      *(undefined1 *)(lVar2 + _DAT_112e048f0) = puStack_b0._0_1_;
      uVar9 = *(undefined8 *)(lVar2 + _DAT_112e048c0);
      puVar6 = &UNK_11044bb90;
      func_0x000107c613fc(&UNK_11044bb90,0x18,7);
      func_0x000107c61614(puVar6 + 0x10,lVar2);
      puVar7 = &UNK_11044beb8;
      func_0x000107c613fc(&UNK_11044beb8,0x19,7);
      *(undefined **)(puVar7 + 0x10) = puVar6;
      puVar7[0x18] = uVar1;
      uStack_90 = 0x101b61160;
      puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a8 = 0x42000000;
      puStack_a0 = &UNK_1000f6b44;
      puStack_98 = &UNK_11044bed0;
      puStack_88 = puVar7;
      func_0x000107c60bc4(&puStack_b0);
      func_0x000107c61574(puStack_88);
      func_0x000107c4e524(uVar9);
      func_0x000107c60bd0(ppuVar8);
    }
    func_0x000107c61170(lVar2);
    return;
  }
  func_0x000107c61170(lVar2);
LAB_101b61018:
  FUN_101b6104c(&uStack_70,0x112d387f8,&UNK_10d902650);
  return;
}



/* Entry: 101b61044; end: 101b6104b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b61044(double param_1,undefined8 param_2)

{
  undefined1 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  long extraout_x8;
  long extraout_x8_00;
  long lVar12;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  undefined8 uVar13;
  long *plVar14;
  long lVar15;
  long unaff_x20;
  long lVar16;
  long lVar17;
  long lVar18;
  long alStack_f0 [5];
  long lStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [24];
  
  lVar3 = 0;
  func_0x000107c5f7fc();
  alStack_f0[4] = *(long *)(lVar3 + -8);
  lStack_c8 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(alStack_f0[4] + 0x40));
  lVar12 = (long)alStack_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  alStack_f0[3] = lVar12;
  func_0x000107c5f824();
  alStack_f0[1] = *(long *)(lVar3 + -8);
  alStack_f0[2] = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(alStack_f0[1] + 0x40));
  lVar12 = lVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  alStack_f0[0] = lVar12;
  func_0x000107c5f804();
  lVar17 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar17 + 0x40));
  lVar12 = lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  func_0x000107c5eea4();
  lVar18 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar18 + 0x40));
  lVar15 = lVar12 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  func_0x0001000d0cdc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  plVar14 = (long *)(lVar15 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c61428(unaff_x20 + 0x10,auStack_88,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar3 == 0) {
    return;
  }
  func_0x000107c61174(param_2);
  func_0x0001000d0fb8(plVar14);
  plVar7 = plVar14;
  func_0x000107c614c4(plVar14,lVar6);
  if ((int)plVar7 != 0) {
    func_0x000107c61170(lVar3);
    func_0x0001013d38bc(plVar14);
    return;
  }
  lVar16 = *plVar14;
  lVar6 = 0x112d7af10;
  func_0x0001000285a8(0x112d7af10,&UNK_10dbcce80);
  iVar2 = *(int *)(lVar6 + 0x50);
  if (lVar16 < 0x4c) {
    if (lVar16 == 3) {
      uVar1 = *(undefined1 *)(lVar3 + _DAT_112e048f0);
      *(undefined1 *)(lVar3 + _DAT_112e048f0) = 0;
      uVar13 = *(undefined8 *)(lVar3 + _DAT_112e048c0);
      puVar9 = &UNK_11044bb90;
      func_0x000107c613fc(&UNK_11044bb90,0x18,7);
      func_0x000107c61614(puVar9 + 0x10,lVar3);
      puVar10 = &UNK_11044bf30;
      func_0x000107c613fc(&UNK_11044bf30,0x19,7);
      *(undefined **)(puVar10 + 0x10) = puVar9;
      puVar10[0x18] = uVar1;
      uStack_98 = 0x101b6116c;
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0x42000000;
      puStack_a8 = &UNK_1000f6b44;
      puStack_a0 = &UNK_11044bf48;
      ppuVar11 = &puStack_b8;
      puStack_90 = puVar10;
      func_0x000107c60bc4(ppuVar11);
      func_0x000107c61574(puStack_90);
      func_0x000107c4e524(uVar13);
      func_0x000107c60bd0(ppuVar11);
    }
    else if (lVar16 == 0x1f) {
      lVar6 = plVar14[1];
      func_0x000107c5eea0(lVar15);
      func_0x000107c5ee8c();
      (**(code **)(lVar18 + 8))(lVar15,lVar5);
      puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8();
      func_0x000107c466c0(param_1 * 1000.0);
      uVar13 = *(undefined8 *)(lVar3 + _DAT_112e048c8);
      *(undefined **)(lVar3 + _DAT_112e048c8) = puVar9;
      func_0x000107c61170(uVar13);
      if (((((*(byte *)(lVar3 + _DAT_112e048d8) & 1) == 0) && ((int)lVar6 != 0x8d)) &&
          (*(char *)(lVar3 + _DAT_112e04958) == '\x01')) &&
         ((*(byte *)(lVar3 + _DAT_112e048f0) & 1) == 0)) {
        func_0x000101b6108c(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
        (**(code **)(lVar17 + 0x68))
                  (lVar12,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7utilityyA2EmFWC_11034f7f8
                   ,lVar4);
        lVar15 = lVar12;
        func_0x000107c5fff0(lVar12);
        (**(code **)(lVar17 + 8))(lVar12,lVar4);
        puVar9 = &UNK_11044bf80;
        func_0x000107c613fc(&UNK_11044bf80,0x18,7);
        *(long *)(puVar9 + 0x10) = lVar3;
        uStack_98 = 0x101b610cc;
        puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_b0 = 0x42000000;
        puStack_a8 = &UNK_1000b0c7c;
        puStack_a0 = &UNK_11044bf98;
        ppuVar11 = &puStack_b8;
        puStack_90 = puVar9;
        func_0x000107c60bc4(ppuVar11);
        func_0x000107c61174(lVar3);
        lVar4 = alStack_f0[0];
        lVar12 = lVar3;
        func_0x000107c5f808(alStack_f0[0]);
        puStack_c0 = PTR___swiftEmptyArrayStorage_11034f1c8;
        func_0x0001001c7eec();
        uVar13 = 0x112d4af90;
        func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
        uVar8 = uVar13;
        func_0x0001001c7f30();
        lVar6 = lStack_c8;
        lVar5 = alStack_f0[3];
        func_0x000107c60264(alStack_f0[3],&puStack_c0,uVar13,uVar8,lStack_c8,lVar12);
        func_0x000107c5ffe8(0,lVar4,lVar5,ppuVar11);
        func_0x000107c60bd0(ppuVar11);
        func_0x000107c61170(lVar3);
        func_0x000107c61170(lVar15);
        (**(code **)(alStack_f0[4] + 8))(lVar5,lVar6);
        (**(code **)(alStack_f0[1] + 8))(lVar4,alStack_f0[2]);
        func_0x000107c61574(puStack_90);
        goto LAB_101b5f9e8;
      }
    }
  }
  else if ((lVar16 == 0x4c) || (lVar16 == 0x67)) {
    func_0x000107c5eea0(lVar15);
    func_0x000107c5ee8c();
    (**(code **)(lVar18 + 8))(lVar15,lVar5);
    puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c466c0(param_1 * 1000.0);
    lVar4 = *(long *)(lVar3 + _DAT_112e048c8);
    *(undefined **)(lVar3 + _DAT_112e048c8) = puVar9;
    func_0x000107c61170(lVar3);
    lVar3 = lVar4;
  }
  func_0x000107c61170(lVar3);
LAB_101b5f9e8:
  func_0x000101b6104c((long)plVar14 + (long)iVar2,0x112d373d8,&UNK_10d9014c0);
  return;
}



/* Entry: 101b6104c; end: 101b610eb;  */

undefined8 FUN_101b6104c(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 101b610ec; end: 101b61177;  */

void FUN_101b610ec(long param_1,long param_2)

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



/* Entry: 101b61178; end: 101b611bf;  */

void FUN_101b61178(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c610f8();
  FUN_101b611c0(param_1,param_2,param_3);
  return;
}



/* Entry: 101b611c0; end: 101b614b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101b611c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  long lVar9;
  long lVar10;
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined *puStack_68;
  
  uStack_98 = param_1;
  uStack_90 = param_2;
  uStack_80 = param_3;
  func_0x000107c614f0();
  lVar2 = 0;
  func_0x000107c5ffd8();
  lStack_a8 = *(long *)(lVar2 + -8);
  lStack_a0 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a8 + 0x40));
  puVar8 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5ffc4();
  puVar7 = PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVMa_11034f918;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar9 = (long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5f824();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar10 = lVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar2 = unaff_x20 + _DAT_112e04a68;
  *(undefined8 *)(lVar2 + 8) = 0;
  func_0x000107c61614(lVar2,0);
  *(undefined8 *)(unaff_x20 + _DAT_112e04a70) = 0;
  lStack_b0 = _DAT_112e04a78;
  uVar4 = 0;
  func_0x000101b61eec(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
  uStack_b8 = uVar4;
  func_0x000107c5f81c(lVar10);
  puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar4 = 0x112d4ac68;
  FUN_101b6205c(0x112d4ac68,puVar7,
                PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVs10SetAlgebraACMc_11034f928);
  uVar5 = 0x112d4ac70;
  func_0x0001000285a8(0x112d4ac70,&UNK_10d911480);
  uVar6 = 0x112d4ac78;
  func_0x000101b6209c(0x112d4ac78,0x112d4ac70,&UNK_10d911480);
  func_0x000107c60264(lVar9,&puStack_68,uVar5,uVar6,lVar3,uVar4);
  (**(code **)(lStack_a8 + 0x68))
            (puVar8,*(undefined4 *)
                     PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_11034f960
             ,lStack_a0);
  uVar6 = 0xd000000000000026;
  func_0x000107c5ffec(0xd000000000000026,0x800000010f0000c0,lVar10,lVar9,puVar8,0);
  uVar5 = uStack_90;
  uVar4 = uStack_98;
  *(undefined8 *)(unaff_x20 + lStack_b0) = uVar6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e04a80);
  *puVar1 = 0;
  puVar1[1] = 0xe000000000000000;
  *(undefined8 *)(unaff_x20 + _DAT_112e04a88) = uStack_98;
  *(undefined8 *)(unaff_x20 + _DAT_112e04a90) = uStack_90;
  puVar7 = PTR_PTR_1126a8b08;
  func_0x000107c610f8();
  func_0x000107c61174(uVar4);
  func_0x000107c615f0(uVar5);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + _DAT_112e04a98) = puVar7;
  *(undefined8 *)(unaff_x20 + _DAT_112e04aa0) = uStack_80;
  puVar7 = PTR_s_init_1125d9248;
  uVar6 = uStack_80;
  func_0x000107c61174();
  puVar8 = &stack0xffffffffffffff88;
  func_0x000107c61154(puVar8,puVar7);
  func_0x000107c61180();
  FUN_101b614b4();
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(uVar5);
  func_0x000107c61170(uVar6);
  return puVar8;
}



/* Entry: 101b614b4; end: 101b6163f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b614b4(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long extraout_x8;
  long unaff_x20;
  long lVar6;
  
  lVar1 = 0;
  func_0x000107c5f804();
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  (**(code **)(lVar6 + 0x68))
            (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7utilityyA2EmFWC_11034f7f8,lVar1);
  puVar2 = PTR_PTR_1126ae790;
  func_0x000107c610f8(PTR_PTR_1126ae790);
  uVar3 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f000140);
  func_0x000107c5f800();
  func_0x000107c470d0(puVar2);
  func_0x000107c61170(uVar3);
  (**(code **)(lVar6 + 8))
            (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  puVar4 = PTR_PTR_1126b4ec0;
  func_0x000107c610f8(PTR_PTR_1126b4ec0);
  func_0x000107c47de8();
  lVar1 = *(long *)(unaff_x20 + _DAT_112e04a88);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    uVar3 = 0xd000000000000019;
    func_0x000107c5fadc(0xd000000000000019,0x800000010f000140);
    puVar5 = puVar4;
    func_0x000107c61174(puVar4);
    func_0x000107c4fc24(lVar1);
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(puVar5);
  }
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 101b61640; end: 101b61a7b;  */

/* WARNING: Removing unreachable block (ram,0x000101b61898) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b61640(double param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong *puVar2;
  undefined1 auVar3 [16];
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long extraout_x8;
  long lVar13;
  undefined8 uVar14;
  long unaff_x20;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined1 auStack_90 [32];
  
  lVar5 = 0;
  func_0x000107c5eea4();
  lVar17 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar17 + 0x40));
  lVar13 = (long)&lStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar2 = (ulong *)(unaff_x20 + _DAT_112e04a80);
  uVar6 = *puVar2 & 0xffffffffffff;
  if ((puVar2[1] & 0x2000000000000000) != 0) {
    uVar6 = puVar2[1] >> 0x38 & 0xf;
  }
  if (uVar6 == 0) {
    uVar6 = *(ulong *)(unaff_x20 + _DAT_112e04aa0);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (uVar6 == 0) {
LAB_101b61a5c:
      func_0x0001048d9980(0xd000000000000034,0x800000010f000050);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x101b61a7c);
      (*pcVar4)();
    }
    uVar15 = uVar6;
    func_0x000107c4c244();
    func_0x000107c61180();
    func_0x000107c615e8(uVar6);
    if (uVar15 == 0) goto LAB_101b61a5c;
    uVar6 = 0;
    func_0x000101b61eec(0,0x112d4c900,&PTR_PTR_1126d4dd8);
    uVar8 = uVar15;
    func_0x000107c5fc54();
    func_0x000107c61170(uVar15);
    lStack_b0 = lVar13;
    lStack_a8 = lVar17;
    lStack_a0 = lVar5;
    if (uVar8 >> 0x3e == 0) {
      uVar15 = *(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar15 = uVar8 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar8) {
        uVar15 = uVar8;
      }
      func_0x000107c60480();
    }
    if (uVar15 != 0) {
      lVar13 = 4;
      do {
        uVar16 = lVar13 - 4;
        if ((uVar8 & 0xc000000000000001) == 0) {
          if (*(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101b6181c);
            (*pcVar4)();
          }
          uVar7 = *(ulong *)(uVar8 + lVar13 * 8);
          func_0x000107c61174();
        }
        else {
          uVar7 = uVar16;
          uVar6 = uVar8;
          func_0x000100f32930();
        }
        uVar1 = lVar13 - 3;
        if (SCARRY8(uVar16,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101b61818);
          (*pcVar4)();
        }
        uVar16 = uVar7;
        func_0x000107c49ec8();
        if ((int)uVar16 != 0) {
          uVar15 = uVar7;
          func_0x000107c4f348();
          func_0x000107c61180();
          uVar16 = uVar15;
          func_0x000107c4f38c();
          func_0x000107c61180();
          func_0x000107c61170(uVar15);
          uVar15 = uVar16;
          func_0x000107c5faec();
          func_0x000107c61170(uVar7);
          func_0x000107c61170(uVar16);
          func_0x000107c6142c(uVar8);
          goto LAB_101b61844;
        }
        func_0x000107c61170(uVar7);
        lVar13 = lVar13 + 1;
      } while (uVar1 != uVar15);
    }
    func_0x000107c6142c(uVar8);
    uVar15 = 0;
    uVar6 = 0xe000000000000000;
LAB_101b61844:
    uVar8 = puVar2[1];
    *puVar2 = uVar15;
    puVar2[1] = uVar6;
    func_0x000107c6142c(uVar8);
    lVar13 = lStack_b0;
    lVar5 = lStack_a0;
    lVar17 = lStack_a8;
  }
  func_0x000107c610f8(PTR_PTR_1126bd740);
  func_0x00010006c00c(param_2,param_3);
  lVar9 = param_2;
  FUN_101b61de8(param_2,param_3);
  func_0x00010006c090(param_2,param_3);
  lVar10 = lVar9;
  func_0x000107c5ca64();
  if (lVar10 == 0) {
    func_0x000107c5eea0(lVar13);
    func_0x000107c5ee8c();
    (**(code **)(lVar17 + 8))(lVar13,lVar5);
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x101b61a50);
      (*pcVar4)();
    }
    if (param_1 <= -1.0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x101b61a54);
      (*pcVar4)();
    }
    if (1.8446744073709552e+19 <= param_1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x101b61a58);
      (*pcVar4)();
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (long)param_1;
    if (SUB168(auVar3 * ZEXT816(1000),8) != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x101b61a5c);
      (*pcVar4)();
    }
  }
  else {
    func_0x000107c5ca64(lVar9);
  }
  FUN_101b61a7c();
  lVar13 = lVar9;
  func_0x000107c5d68c();
  if ((int)lVar13 == 2) {
    uVar14 = *(undefined8 *)(unaff_x20 + _DAT_112e04a98);
    uVar11 = 0x6574656c6564;
    uVar12 = 0xe600000000000000;
  }
  else {
    if ((int)lVar13 != 1) goto LAB_101b61a20;
    lVar13 = unaff_x20 + _DAT_112e04a68;
    func_0x000107c61428(lVar13,auStack_90,0,0);
    lVar5 = lVar13;
    func_0x000107c61618();
    if (lVar5 != 0) {
      lVar13 = *(long *)(lVar13 + 8);
      func_0x000107c614f0();
      (**(code **)(lVar13 + 8))();
      func_0x000107c615e8(lVar5);
    }
    uVar14 = *(undefined8 *)(unaff_x20 + _DAT_112e04a98);
    uVar11 = 0x646461;
    uVar12 = 0xe300000000000000;
  }
  func_0x000107c5fadc(uVar11,uVar12);
  func_0x00010571da54(uVar14,uVar11,1);
  func_0x000107c61170(uVar11);
LAB_101b61a20:
  func_0x000107c61170(lVar9);
  return;
}



/* Entry: 101b61a7c; end: 101b61cb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b61a7c(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar10;
  long lVar11;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar2 = 0;
  func_0x000107c5f7fc();
  puVar1 = PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8;
  lStack_a0 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a0 + 0x40));
  lVar10 = (long)&uStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5f824();
  lVar11 = *(long *)(lVar3 + -8);
  lStack_a8 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar3 = lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uStack_b0 = *(undefined8 *)(unaff_x20 + _DAT_112e04a78);
  puVar4 = &UNK_11044c080;
  func_0x000107c613fc(&UNK_11044c080,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  puVar5 = &UNK_11044c0a8;
  func_0x000107c613fc(&UNK_11044c0a8,0x20,7);
  *(undefined **)(puVar5 + 0x10) = puVar4;
  *(undefined8 *)(puVar5 + 0x18) = param_1;
  pcStack_70 = FUN_101b61f2c;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000b0c7c;
  puStack_78 = &UNK_11044c0c0;
  ppuVar6 = &puStack_90;
  puStack_68 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  func_0x000107c6157c(puVar4);
  func_0x000107c5f808(lVar3);
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar7 = 0x112d4af88;
  FUN_101b6205c(0x112d4af88,puVar1,PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
  uVar8 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar9 = 0x112d4af98;
  func_0x000101b6209c(0x112d4af98,0x112d4af90,&UNK_10d914100);
  func_0x000107c60264(lVar10,&puStack_98,uVar8,uVar9,lVar2,uVar7);
  func_0x000107c5ffe8(0,lVar3,lVar10,ppuVar6);
  func_0x000107c60bd0(ppuVar6);
  (**(code **)(lStack_a0 + 8))(lVar10,lVar2);
  (**(code **)(lVar11 + 8))(lVar3,lStack_a8);
  puVar5 = puStack_68;
  func_0x000107c61574(puVar4);
  func_0x000107c61574(puVar5);
  return;
}



/* Entry: 101b61cb4; end: 101b61d27; -[_TtC34ActivityFeedDuplexMessagingHandler34ActivityFeedDuplexMessagingHandler onReceive:] */

/* WARNING: Possible PIC construction at 0x000101b61cf8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b61cfc) */

void FUN_101b61cb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c5ee30(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 101b61d28; end: 101b61d5b;  */

void FUN_101b61d28(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101b61d5c; end: 101b61de7; -[_TtC34ActivityFeedDuplexMessagingHandler34ActivityFeedDuplexMessagingHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b61d5c(long param_1)

{
  FUN_101b61ec8(param_1 + _DAT_112e04a68);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e04a88));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e04a90));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e04a98));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e04aa0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e04a78));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112e04a80 + 8))
  ;
  return;
}



/* Entry: 101b61de8; end: 101b61ea7;  */

undefined1  [16] FUN_101b61de8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c5ee20();
  func_0x000107c4636c();
  func_0x000107c61170(param_1);
  uVar1 = 0;
  if (unaff_x20 == 0) {
    func_0x000107c61174();
    func_0x000107c5ed30(0);
    func_0x000107c61170(uVar1);
    func_0x000107c61654();
  }
  else {
    func_0x000107c61174();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = unaff_x20;
    return auVar4;
  }
  func_0x000107c60e78();
  ppuVar2 = &PTR_PTR_1127fa510;
  func_0x000107c61168(&PTR_PTR_1127fa510);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = ppuVar2;
  return auVar5;
}



/* Entry: 101b61ea8; end: 101b61ec7;  */

void FUN_101b61ea8(void)

{
  func_0x000107c61168(&PTR_PTR_1127fa510);
  return;
}



/* Entry: 101b61ec8; end: 101b61f2b;  */

undefined8 FUN_101b61ec8(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 101b61f2c; end: 101b6203f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b61f2c(void)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined1 auStack_58 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar4 + 0x10,auStack_58,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    if (*(ulong *)(lVar4 + _DAT_112e04a70) < uVar1) {
      *(ulong *)(lVar4 + _DAT_112e04a70) = uVar1;
      uVar7 = *(undefined8 *)(lVar4 + _DAT_112e04a90);
      uVar5 = *(undefined8 *)(lVar4 + _DAT_112e04a80);
      uVar2 = ((undefined8 *)(lVar4 + _DAT_112e04a80))[1];
      func_0x000107c615f0(uVar7);
      func_0x000107c61434(uVar2);
      func_0x000107c5fadc(uVar5,uVar2);
      func_0x000107c6142c(uVar2);
      lVar6 = 0x51;
      func_0x000107c3125c();
      func_0x000107c61180();
      if (lVar6 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101b62040);
        (*pcVar3)();
      }
      func_0x000107c43308(uVar7);
      func_0x000107c61180();
      func_0x000107c61170(lVar6);
      func_0x000107c61170(uVar5);
      func_0x000107c615e8(uVar7);
      func_0x000107c61170(lVar4);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 101b62040; end: 101b6205b;  */

void FUN_101b62040(long param_1,long param_2)

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



/* Entry: 101b6205c; end: 101b62193;  */

void FUN_101b6205c(long *param_1,code *param_2,long param_3)

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



/* Entry: 101b62194; end: 101b622ab;  */

void FUN_101b62194(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  undefined1 auStack_90 [40];
  undefined8 uStack_68;
  undefined1 auStack_60 [40];
  undefined8 uStack_38;
  
  func_0x0001000285a8(0x112d53a98,&UNK_10d91a6a0);
  func_0x000107c613fc();
  func_0x000107c6157c(param_2);
  uVar1 = 0x101b62378;
  func_0x0001000bdd8c(0x101b62378,param_2);
  func_0x000100083b20(&uStack_38);
  func_0x0001039e0ad4(auStack_60);
  func_0x000107c61170(uStack_38);
  func_0x000100083b20(&uStack_68);
  func_0x0001039e0afc(auStack_90);
  func_0x000107c61170(uStack_68);
  lVar2 = 0;
  FUN_101b63018();
  lVar3 = lVar2;
  func_0x000107c613fc();
  pcVar4 = "TurnBasedDataProvider";
  func_0x0001000c10c0();
  func_0x000107c61180();
  *(char **)(lVar3 + 0x68) = pcVar4;
  func_0x000100cc7594(auStack_60,lVar3 + 0x10);
  func_0x000100cc7594(auStack_90,lVar3 + 0x38);
  *(undefined8 *)(lVar3 + 0x60) = uVar1;
  param_1[3] = lVar2;
  param_1[4] = (long)&PTR_DAT_11044c230;
  *param_1 = lVar3;
  return;
}



/* Entry: 101b622ac; end: 101b622b3;  */

void FUN_101b622ac(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  long unaff_x20;
  undefined1 auStack_90 [40];
  undefined8 uStack_68;
  undefined1 auStack_60 [40];
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x0001000285a8(0x112d53a98,&UNK_10d91a6a0);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar1);
  uVar2 = 0x101b62378;
  func_0x0001000bdd8c(0x101b62378,uVar1);
  func_0x000100083b20(&uStack_38);
  func_0x0001039e0ad4(auStack_60);
  func_0x000107c61170(uStack_38);
  func_0x000100083b20(&uStack_68);
  func_0x0001039e0afc(auStack_90);
  func_0x000107c61170(uStack_68);
  lVar3 = 0;
  FUN_101b63018();
  lVar4 = lVar3;
  func_0x000107c613fc();
  pcVar5 = "TurnBasedDataProvider";
  func_0x0001000c10c0();
  func_0x000107c61180();
  *(char **)(lVar4 + 0x68) = pcVar5;
  func_0x000100cc7594(auStack_60,lVar4 + 0x10);
  func_0x000100cc7594(auStack_90,lVar4 + 0x38);
  *(undefined8 *)(lVar4 + 0x60) = uVar2;
  param_1[3] = lVar3;
  param_1[4] = (long)&PTR_DAT_11044c230;
  *param_1 = lVar4;
  return;
}



/* Entry: 101b622b4; end: 101b62367;  */

void FUN_101b622b4(long *param_1)

{
  long lVar1;
  long lVar2;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  lVar1 = lStack_38;
  func_0x000107c3f770();
  func_0x000107c61180();
  func_0x000107c61170(lStack_38);
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x000107c41574();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
  }
  *param_1 = lVar2;
  return;
}



/* Entry: 101b62368; end: 101b623a7;  */

undefined1  [16] FUN_101b62368(void)

{
  return ZEXT816(0x11044c220);
}



/* Entry: 101b623a8; end: 101b62453;  */

void FUN_101b623a8(void)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long unaff_x22;
  
  plVar3 = (long *)0xe0;
  func_0x000107c61434(*(undefined8 *)(unaff_x22 + 0xf0));
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x118) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101b62404;
  plVar1 = *(long **)(unaff_x22 + 0x108);
  lVar2 = *(long *)(unaff_x22 + 0xf8);
  plVar3[0x13] = *(long *)(unaff_x22 + 0x100);
  plVar3[0x14] = (long)plVar1;
  plVar3[0x12] = lVar2;
  plVar3[0x15] = *plVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b627e4,0,0);
  return;
}



/* Entry: 101b62454; end: 101b6261f;  */

void FUN_101b62454(void)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  bool bVar12;
  long *plVar13;
  int *piVar14;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x120);
  lVar8 = *(long *)(unaff_x22 + 0x128);
  lVar5 = *(long *)(unaff_x22 + 0x108);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xf0);
  func_0x000107c61434(lVar8);
  func_0x000107c602fc(0x29);
  func_0x000107c6142c(0xe000000000000000);
  func_0x000107c5fb78(uVar6,uVar10);
  func_0x000107c5fb78(0x20707061202c,0xe600000000000000);
  bVar12 = lVar8 != 0;
  uVar7 = 0;
  if (bVar12) {
    uVar7 = uVar4;
  }
  lVar11 = -0x2000000000000000;
  if (bVar12) {
    lVar11 = lVar8;
  }
  uVar1 = 0x766c6f7365726e75;
  if (bVar12) {
    uVar1 = uVar4;
  }
  lVar2 = -0x15ffffffffff9b9b;
  if (bVar12) {
    lVar2 = lVar8;
  }
  func_0x000107c5fb78(uVar1,lVar2);
  func_0x000107c6142c(lVar2);
  func_0x0001007d6c6c(1,0xd00000000000001f,0x800000010f000180,uVar9,&PTR_DAT_11044c240);
  func_0x000107c6142c(0x800000010f000180);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  lVar8 = *(long *)(lVar5 + 0x30);
  func_0x0001000a8868(lVar5 + 0x10,uVar4);
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar6;
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar10;
  *(undefined8 *)(unaff_x22 + 200) = uVar7;
  *(long *)(unaff_x22 + 0xd0) = lVar11;
  *(undefined8 *)(unaff_x22 + 0xe0) = 0xc000000000000000;
  *(undefined8 *)(unaff_x22 + 0xd8) = 0;
  uVar7 = *(undefined8 *)(lVar5 + 0x50);
  lVar11 = *(long *)(lVar5 + 0x58);
  func_0x0001000a8868(lVar5 + 0x38,uVar7);
  (**(code **)(lVar11 + 8))(unaff_x22 + 0x10,uVar7,lVar11);
  piVar14 = *(int **)(lVar8 + 8);
  iVar3 = *piVar14;
  plVar13 = (long *)(ulong)(uint)piVar14[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x130) = plVar13;
  *plVar13 = unaff_x22;
  plVar13[1] = (long)FUN_101b62620;
                    /* WARNING: Could not recover jumptable at 0x000101b6261c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar3 + (long)piVar14))
            (plVar13,unaff_x22 + 0x70,(undefined8 *)(unaff_x22 + 0xb8),unaff_x22 + 0x10,uVar4,lVar8)
  ;
  return;
}



/* Entry: 101b62620; end: 101b62683;  */

void FUN_101b62620(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x138) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x130));
  func_0x000101327450(lVar2 + 0x10);
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101b62684;
  }
  else {
    pcVar1 = FUN_101b62768;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101b62684; end: 101b62767;  */

void FUN_101b62684(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long unaff_x22;
  undefined8 uVar7;
  
  uVar4 = *(ulong *)(unaff_x22 + 0x70);
  if (*(char *)(unaff_x22 + 0x78) == '\x01') {
    if (uVar4 < 2) {
LAB_101b626dc:
      uVar5 = 0;
      puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
      goto LAB_101b626e8;
    }
  }
  else if (uVar4 != 2) goto LAB_101b626dc;
  puVar6 = *(undefined **)(unaff_x22 + 0x80);
  func_0x000107c61434(puVar6);
  uVar5 = 1;
LAB_101b626e8:
  uVar7 = *(undefined8 *)(unaff_x22 + 0xf0);
  lVar1 = -0x2000000000000000;
  if (*(long *)(unaff_x22 + 0x128) != 0) {
    lVar1 = *(long *)(unaff_x22 + 0x128);
  }
  uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x98);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar2);
  FUN_101b62d18((ulong *)(unaff_x22 + 0x70));
  func_0x000107c6142c(uVar7);
  func_0x000107c6142c(lVar1);
  func_0x00010006c090(0,0xc000000000000000);
                    /* WARNING: Could not recover jumptable at 0x000101b62764. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar3,uVar2,puVar6,uVar5);
  return;
}



/* Entry: 101b62768; end: 101b627bf;  */

void FUN_101b62768(void)

{
  long lVar1;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x128);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0xf0));
  lVar1 = -0x2000000000000000;
  if (lVar2 != 0) {
    lVar1 = lVar2;
  }
  func_0x000107c6142c(lVar1);
  func_0x00010006c090(0,0xc000000000000000);
                    /* WARNING: Could not recover jumptable at 0x000101b627bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101b627c0; end: 101b627e3;  */

void FUN_101b627c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x98) = param_2;
  *(undefined8 **)(unaff_x22 + 0xa0) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x90) = param_1;
  *(undefined8 *)(unaff_x22 + 0xa8) = *unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b627e4,0,0);
  return;
}



/* Entry: 101b627e4; end: 101b629c3;  */

void FUN_101b627e4(void)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x22;
  
  uVar1 = *(ulong *)(unaff_x22 + 0x90) & 0xffffffffffff;
  if ((*(ulong *)(unaff_x22 + 0x98) & 0x2000000000000000) != 0) {
    uVar1 = *(ulong *)(unaff_x22 + 0x98) >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    func_0x0001000d224c(unaff_x22 + 0x80);
    lVar7 = *(long *)(unaff_x22 + 0x80);
    *(long *)(unaff_x22 + 0xb0) = lVar7;
    if (lVar7 != 0) {
      uVar4 = *(undefined8 *)(unaff_x22 + 0x98);
      lVar2 = *(long *)(unaff_x22 + 0xa0);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x90);
      func_0x0001000285a8(0x112d52fb8,&UNK_10d919898);
      func_0x000107c5fadc(uVar8,uVar4);
      func_0x000107c4b288(lVar7);
      func_0x000107c61180();
      func_0x000107c61170(uVar8);
      lVar3 = lVar7;
      func_0x000100759c94(lVar7,0);
      func_0x000107c61170(lVar7);
      uVar8 = *(undefined8 *)(lVar2 + 0x68);
      uVar4 = uVar8;
      func_0x000107c615f0();
      func_0x00010488a484(0x4014000000000000);
      *(undefined8 *)(unaff_x22 + 0xb8) = uVar4;
      func_0x000107c615e8(uVar8);
      func_0x000107c61574(lVar3);
      plVar5 = (long *)0x80;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0xc0) = plVar5;
      *plVar5 = unaff_x22;
      plVar5[1] = (long)FUN_101b629c4;
                    /* WARNING: Could not recover jumptable at 0x000101b62920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      FUN_101b63038();
      return;
    }
    uVar6 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x98);
    func_0x000107c602fc(0x3c);
    func_0x000107c5fb78(0xd00000000000003a,0x800000010f0001a0);
    func_0x000107c5fb78(uVar4,uVar8);
    func_0x0001007d6c6c(3,0,0xe000000000000000,uVar6,&PTR_DAT_11044c240);
    func_0x000107c6142c(0xe000000000000000);
  }
                    /* WARNING: Could not recover jumptable at 0x000101b629c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0,0);
  return;
}



/* Entry: 101b629c4; end: 101b62a17;  */

void FUN_101b629c4(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 200) = param_1;
  *(undefined1 *)(lVar1 + 0xd0) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0xc0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b62a18,0,0);
  return;
}



/* Entry: 101b62a18; end: 101b62d17;  */

void FUN_101b62a18(void)

{
  ulong *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined *puVar6;
  int iVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long unaff_x22;
  
  lVar14 = *(long *)(unaff_x22 + 200);
  if (*(char *)(unaff_x22 + 0xd0) == '\x01') {
    *(long *)(unaff_x22 + 0x88) = lVar14;
    iVar7 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar7 != 0) {
      uVar15 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x88,uVar15,PTR___ss5ErrorWS_11034ee10);
    }
    uVar15 = *(undefined8 *)(unaff_x22 + 200);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xb8));
    func_0x000100fe3224(uVar15,1);
LAB_101b62c48:
    uVar15 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar16 = *(undefined8 *)(unaff_x22 + 0xb0);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x98);
    func_0x000107c602fc(0x2d);
    func_0x000107c6142c(0xe000000000000000);
    func_0x000107c5fb78(uVar3,uVar4);
    func_0x0001007d6c6c(3,0xd00000000000002b,0x800000010f0001e0,uVar15,&PTR_DAT_11044c240);
    func_0x000107c6142c(0x800000010f0001e0);
    func_0x000107c615e8(uVar16);
  }
  else {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xb8));
    if (lVar14 == 0) goto LAB_101b62c48;
    puVar1 = (ulong *)(unaff_x22 + 0x70);
    uVar16 = *(undefined8 *)(unaff_x22 + 200);
    uVar15 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar3 = *(undefined8 *)(unaff_x22 + 0xb0);
    *puVar1 = 0;
    *(undefined8 *)(unaff_x22 + 0x78) = 0;
    uVar5 = *(undefined1 *)(unaff_x22 + 0xd0);
    puVar8 = &UNK_11044c270;
    func_0x000107c613fc(&UNK_11044c270,0x18,7);
    *(ulong **)(puVar8 + 0x10) = puVar1;
    puVar9 = &UNK_11044c298;
    func_0x000107c613fc(&UNK_11044c298,0x20,7);
    *(undefined8 *)(puVar9 + 0x10) = 0x101b63168;
    *(undefined **)(puVar9 + 0x18) = puVar8;
    *(code **)(unaff_x22 + 0x30) = FUN_101b63170;
    *(undefined **)(unaff_x22 + 0x38) = puVar9;
    puVar6 = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined **)(unaff_x22 + 0x10) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x20) = &UNK_100fe2610;
    *(undefined **)(unaff_x22 + 0x28) = &UNK_11044c2b0;
    lVar14 = unaff_x22 + 0x10;
    func_0x000107c60bc4(lVar14);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
    puVar9 = &UNK_11044c2e8;
    func_0x000107c613fc(&UNK_11044c2e8,0x18,7);
    *(undefined8 *)(puVar9 + 0x10) = uVar15;
    puVar10 = &UNK_11044c310;
    func_0x000107c613fc(&UNK_11044c310,0x20,7);
    *(undefined8 *)(puVar10 + 0x10) = 0x101b631ac;
    *(undefined **)(puVar10 + 0x18) = puVar9;
    *(code **)(unaff_x22 + 0x60) = FUN_101b631b4;
    *(undefined **)(unaff_x22 + 0x68) = puVar10;
    *(undefined **)(unaff_x22 + 0x40) = puVar6;
    *(undefined8 *)(unaff_x22 + 0x48) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x50) = &UNK_100fe2654;
    *(undefined **)(unaff_x22 + 0x58) = &UNK_11044c328;
    lVar11 = unaff_x22 + 0x40;
    func_0x000107c60bc4(lVar11);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x68));
    func_0x000107c4c744(uVar16);
    func_0x000100fe3224(uVar16,uVar5);
    func_0x000107c615e8(uVar3);
    func_0x000107c60bd0(lVar11);
    func_0x000107c60bd0(lVar14);
    uVar13 = *(ulong *)(unaff_x22 + 0x78);
    if (uVar13 == 0) {
      func_0x000107c61574(puVar8);
      func_0x000107c61574(puVar9);
    }
    else {
      uVar12 = *puVar1;
      func_0x000107c61574(puVar8);
      func_0x000107c61574(puVar9);
      uVar2 = uVar12 & 0xffffffffffff;
      if ((uVar13 & 0x2000000000000000) != 0) {
        uVar2 = uVar13 >> 0x38 & 0xf;
      }
      if (uVar2 != 0) goto LAB_101b62cd0;
      func_0x000107c6142c(uVar13);
    }
  }
  uVar12 = 0;
  uVar13 = 0;
LAB_101b62cd0:
                    /* WARNING: Could not recover jumptable at 0x000101b62cf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar12,uVar13);
  return;
}



/* Entry: 101b62d18; end: 101b62d4b;  */

undefined8 FUN_101b62d18(undefined8 param_1)

{
  (*(code *)&DAT_103a19524)();
  return param_1;
}



/* Entry: 101b62d4c; end: 101b62dcb;  */

void FUN_101b62d4c(long param_1,long param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c401fc();
  func_0x000107c61180();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x000107c3ddb8();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x000107c5faec();
      func_0x000107c61170(lVar1);
      goto LAB_101b62db4;
    }
  }
  lVar2 = 0;
  param_2 = 0;
LAB_101b62db4:
  lVar1 = param_3[1];
  *param_3 = lVar2;
  param_3[1] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar1);
  return;
}



/* Entry: 101b62dcc; end: 101b62ec7;  */

void FUN_101b62dcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_50 = 0;
  uStack_48 = 0xe000000000000000;
  func_0x000107c602fc(0x2f);
  func_0x000107c5fb78(0xd000000000000029,0x800000010f000210);
  func_0x000107c5fb78(param_1,param_2);
  func_0x000107c5fb78(0x203a,0xe200000000000000);
  uVar1 = 0x112d393f0;
  uStack_58 = param_3;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c603d0(&uStack_58,&uStack_50,uVar1,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  uVar1 = uStack_48;
  func_0x0001007d6c6c(3,uStack_50,uStack_48,param_4,&PTR_DAT_11044c240);
  func_0x000107c6142c(uVar1);
  return;
}



/* Entry: 101b62ec8; end: 101b62f03;  */

void FUN_101b62ec8(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x10);
  func_0x0001000834e4(unaff_x20 + 0x38);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101b62f04; end: 101b62f7b;  */

void FUN_101b62f04(long param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  undefined8 *unaff_x20;
  long *plVar2;
  long unaff_x22;
  
  plVar2 = (long *)*unaff_x20;
  plVar1 = (long *)0x140;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101b62f7c;
  plVar1[0x20] = param_4;
  plVar1[0x21] = (long)plVar2;
  plVar1[0x1e] = param_2;
  plVar1[0x1f] = param_3;
  plVar1[0x1d] = param_1;
  plVar1[0x22] = *plVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b623a8,0,0);
  return;
}



/* Entry: 101b62f7c; end: 101b62ff3;  */

void FUN_101b62f7c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101b62ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101b62ff4; end: 101b63017;  */

void FUN_101b62ff4(void)

{
  long in_x4;
  
                    /* WARNING: Could not recover jumptable at 0x000101b63004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x4 + 0x10))();
  return;
}



/* Entry: 101b63018; end: 101b63037;  */

void FUN_101b63018(void)

{
  func_0x000107c61168(&PTR_PTR_112e04b18);
  return;
}



/* Entry: 101b63038; end: 101b6304f;  */

void FUN_101b63038(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b63050,0,0);
  return;
}



/* Entry: 101b63050; end: 101b63117;  */

void FUN_101b63050(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x22;
  
  func_0x000104888eec(unaff_x22 + 0x60);
  if (*(char *)(unaff_x22 + 0x68) != -1) {
                    /* WARNING: Could not recover jumptable at 0x000101b63098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x60));
    return;
  }
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101b63118;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  puVar2 = &UNK_11044c360;
  func_0x000107c613fc(&UNK_11044c360,0x18,7);
  *(long *)(puVar2 + 0x10) = lVar1;
  func_0x00010075a04c(0,1,FUN_101b631d4,puVar2);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101b63118; end: 101b63157;  */

void FUN_101b63118(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b63158,0,0);
  return;
}



/* Entry: 101b63158; end: 101b6316f;  */

void FUN_101b63158(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000101b63164. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x50),*(undefined1 *)(unaff_x22 + 0x58));
  return;
}



/* Entry: 101b63170; end: 101b6318f;  */

void FUN_101b63170(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101b63190; end: 101b631b3;  */

void FUN_101b63190(long param_1,long param_2)

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



/* Entry: 101b631b4; end: 101b631d3;  */

void FUN_101b631b4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101b631d4; end: 101b6321f;  */

void FUN_101b631d4(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *param_1;
  uVar1 = *(undefined1 *)(param_1 + 1);
  func_0x000100fe3210(uVar4,uVar1);
  puVar2 = *(undefined8 **)(*(long *)(lVar3 + 0x40) + 0x28);
  *puVar2 = uVar4;
  *(undefined1 *)(puVar2 + 1) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar3);
  return;
}



/* Entry: 101b63220; end: 101b63227;  */

void FUN_101b63220(long param_1,long param_2)

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



/* Entry: 101b63228; end: 101b63287;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b63228(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lStack_28;
  
  func_0x0001000d224c(&lStack_28);
  uVar2 = ((undefined8 *)(lStack_28 + _DAT_112e0d428))[1];
  uVar1 = *(undefined8 *)(lStack_28 + _DAT_112e0d428);
  func_0x000107c615f0(uVar1);
  func_0x000107c61170(lStack_28);
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Entry: 101b63288; end: 101b632ef;  */

void FUN_101b63288(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  func_0x0001000d224c(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c4f800(uStack_38,param_3,2,0x2d,1);
  func_0x000107c61180();
  func_0x000107c615e8(uStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101b632f0; end: 101b633ff;  */

void FUN_101b632f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_68;
  
  func_0x0001000d224c(&uStack_68);
  puVar1 = &UNK_11044c418;
  func_0x000107c613fc(&UNK_11044c418,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  puVar2 = &UNK_11044c440;
  func_0x000107c613fc(&UNK_11044c440,0x48,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  *(undefined8 *)(puVar2 + 0x30) = param_4;
  *(undefined8 *)(puVar2 + 0x38) = param_5;
  *(undefined8 *)(puVar2 + 0x40) = param_6;
  uVar3 = 0;
  func_0x000100964acc(0);
  func_0x000107c6157c(puVar1);
  func_0x000107c61434(param_2);
  func_0x000107c61434(param_4);
  func_0x000107c61434(param_6);
  func_0x00010090569c(FUN_101b6447c,puVar2,uVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61170(uStack_68);
  func_0x000107c61574(puVar2);
  return;
}



/* Entry: 101b63400; end: 101b6349f;  */

void FUN_101b63400(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    FUN_101b634a0(param_2,param_3,param_4,param_5,param_6,param_7);
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 101b634a0; end: 101b63d87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b634a0(ulong param_1,ulong param_2,ulong param_3,ulong param_4,byte *param_5,
                  byte *param_6)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  ulong *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  byte *pbVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  byte *pbVar12;
  long lVar13;
  byte **ppbVar14;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long lVar15;
  ulong extraout_x14;
  ulong uVar16;
  ulong *puVar17;
  uint uVar18;
  long unaff_x20;
  ulong uVar19;
  long lVar20;
  byte *pbVar21;
  code *pcVar22;
  ulong auStack_f0 [6];
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  ulong *puStack_a8;
  undefined8 uStack_90;
  long lStack_88;
  byte *pbStack_78;
  ulong uStack_70;
  
  lVar5 = 0;
  func_0x000103c16714();
  lStack_c0 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  uVar19 = (long)auStack_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0x112e04c68;
  func_0x0001000285a8(0x112e04c68,&UNK_10d9d85b8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar13 = uVar19 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  auStack_f0[5] = lVar13;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar13 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar20 = lVar13 - extraout_x12_00;
  lVar5 = 0;
  func_0x000103c15b2c();
  lStack_b0 = *(long *)(lVar5 + -8);
  lStack_b8 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_b0 + 0x40));
  lVar5 = lVar20 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  auStack_f0[4] = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar17 = (ulong *)(lVar5 - extraout_x12_01);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = 0x112d3bc20;
  puStack_a8 = (ulong *)((long)puVar17 - extraout_x12_02);
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = ((long)puVar17 - extraout_x12_02) - extraout_x8_02;
  uVar6 = 0;
  func_0x000107c5eec8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(uVar6 + -8) + 0x40));
  uVar16 = lVar5 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  uVar8 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar8 = param_2 >> 0x38 & 0xf;
  }
  if (uVar8 == 0) {
    return;
  }
  uVar8 = param_3 & 0xffffffffffff;
  if ((param_4 & 0x2000000000000000) != 0) {
    uVar8 = param_4 >> 0x38 & 0xf;
  }
  if (uVar8 == 0) {
    return;
  }
  pbVar11 = (byte *)((ulong)param_5 & 0xffffffffffff);
  pbVar12 = (byte *)((ulong)param_6 >> 0x38 & 0xf);
  pbVar21 = pbVar11;
  if (((ulong)param_6 & 0x2000000000000000) != 0) {
    pbVar21 = pbVar12;
  }
  if (pbVar21 == (byte *)0x0) {
    return;
  }
  if (((ulong)param_6 >> 0x3c & 1) == 0) {
    uVar8 = extraout_x14;
    if (((ulong)param_6 >> 0x3d & 1) != 0) {
      pbStack_78 = param_5;
      uStack_70 = (ulong)param_6 & 0xffffffffffffff;
      uVar18 = (uint)param_5 & 0xff;
      auStack_f0[3] = uVar19;
      if (uVar18 == 0x2b) {
        if (pbVar12 == (byte *)0x0) {
                    /* WARNING: Does not return */
          pcVar22 = (code *)SoftwareBreakpoint(1,0x101b63d88);
          (*pcVar22)();
        }
        pbVar12 = pbVar12 + -1;
        if (pbVar12 == (byte *)0x0) goto LAB_101b638e0;
        pbVar21 = (byte *)0x0;
        pbVar11 = (byte *)((ulong)&pbStack_78 | 1);
        do {
          if (((9 < *pbVar11 - 0x30) ||
              (lVar15 = (long)pbVar21 * 10,
              SUB168(SEXT816((long)pbVar21) * SEXT816(10),8) != lVar15 >> 0x3f)) ||
             (uVar19 = (ulong)(byte)(*pbVar11 - 0x30), pbVar21 = (byte *)(lVar15 + uVar19),
             SCARRY8(lVar15,uVar19))) goto LAB_101b638e0;
          uVar18 = 0;
          pbVar12 = pbVar12 + -1;
          pbVar11 = pbVar11 + 1;
        } while (pbVar12 != (byte *)0x0);
      }
      else if (uVar18 == 0x2d) {
        if (pbVar12 == (byte *)0x0) {
                    /* WARNING: Does not return */
          pcVar22 = (code *)SoftwareBreakpoint(1,0x101b63d80);
          (*pcVar22)();
        }
        pbVar12 = pbVar12 + -1;
        if (pbVar12 == (byte *)0x0) {
LAB_101b638e0:
          uVar18 = 1;
          uVar8 = extraout_x14;
          pbVar21 = (byte *)0x0;
        }
        else {
          pbVar21 = (byte *)0x0;
          pbVar11 = (byte *)((ulong)&pbStack_78 | 1);
          do {
            if (((9 < *pbVar11 - 0x30) ||
                (lVar15 = (long)pbVar21 * 10,
                SUB168(SEXT816((long)pbVar21) * SEXT816(10),8) != lVar15 >> 0x3f)) ||
               (uVar19 = (ulong)(byte)(*pbVar11 - 0x30), pbVar21 = (byte *)(lVar15 - uVar19),
               SBORROW8(lVar15,uVar19))) goto LAB_101b638e0;
            uVar18 = 0;
            pbVar12 = pbVar12 + -1;
            pbVar11 = pbVar11 + 1;
          } while (pbVar12 != (byte *)0x0);
        }
      }
      else {
        if (pbVar12 == (byte *)0x0) goto LAB_101b638e0;
        pbVar21 = (byte *)0x0;
        ppbVar14 = &pbStack_78;
        do {
          if (((9 < *(byte *)ppbVar14 - 0x30) ||
              (lVar15 = (long)pbVar21 * 10,
              SUB168(SEXT816((long)pbVar21) * SEXT816(10),8) != lVar15 >> 0x3f)) ||
             (uVar19 = (ulong)(byte)(*(byte *)ppbVar14 - 0x30), pbVar21 = (byte *)(lVar15 + uVar19),
             SCARRY8(lVar15,uVar19))) goto LAB_101b638e0;
          uVar18 = 0;
          pbVar12 = pbVar12 + -1;
          ppbVar14 = (byte **)((long)ppbVar14 + 1);
        } while (pbVar12 != (byte *)0x0);
      }
      goto LAB_101b638e8;
    }
    if (((ulong)param_5 >> 0x3c & 1) == 0) {
      auStack_f0[3] = uVar19;
      func_0x000107c60358();
      uVar19 = auStack_f0[3];
    }
    else {
      param_5 = (byte *)(((ulong)param_6 & 0xfffffffffffffff) + 0x20);
      param_6 = pbVar11;
    }
    if (*param_5 == 0x2b) {
      pbVar12 = param_6 + -1;
      if ((long)param_6 < 1) {
                    /* WARNING: Does not return */
        pcVar22 = (code *)SoftwareBreakpoint(1,0x101b63d84);
        (*pcVar22)();
      }
      if (pbVar12 == (byte *)0x0) {
        return;
      }
      pbVar21 = (byte *)0x0;
      do {
        param_5 = param_5 + 1;
        if (9 < *param_5 - 0x30) {
          return;
        }
        lVar15 = (long)pbVar21 * 10;
        if (SUB168(SEXT816((long)pbVar21) * SEXT816(10),8) != lVar15 >> 0x3f) {
          return;
        }
        uVar1 = (ulong)(byte)(*param_5 - 0x30);
        pbVar21 = (byte *)(lVar15 + uVar1);
        if (SCARRY8(lVar15,uVar1)) {
          return;
        }
        pbVar12 = pbVar12 + -1;
      } while (pbVar12 != (byte *)0x0);
    }
    else if (*param_5 == 0x2d) {
      pbVar12 = param_6 + -1;
      if ((long)param_6 < 1) {
                    /* WARNING: Does not return */
        pcVar22 = (code *)SoftwareBreakpoint(1,0x101b63d7c);
        (*pcVar22)();
      }
      if (pbVar12 == (byte *)0x0) {
        return;
      }
      pbVar21 = (byte *)0x0;
      do {
        param_5 = param_5 + 1;
        if (9 < *param_5 - 0x30) {
          return;
        }
        lVar15 = (long)pbVar21 * 10;
        if (SUB168(SEXT816((long)pbVar21) * SEXT816(10),8) != lVar15 >> 0x3f) {
          return;
        }
        uVar1 = (ulong)(byte)(*param_5 - 0x30);
        pbVar21 = (byte *)(lVar15 - uVar1);
        if (SBORROW8(lVar15,uVar1)) {
          return;
        }
        pbVar12 = pbVar12 + -1;
      } while (pbVar12 != (byte *)0x0);
    }
    else {
      if (param_6 == (byte *)0x0) {
        return;
      }
      pbVar21 = (byte *)0x0;
      pbVar12 = param_5;
      while (pbVar12 != (byte *)0x0) {
        if (9 < *param_5 - 0x30) {
          return;
        }
        lVar15 = (long)pbVar21 * 10;
        if (SUB168(SEXT816((long)pbVar21) * SEXT816(10),8) != lVar15 >> 0x3f) {
          return;
        }
        uVar1 = (ulong)(byte)(*param_5 - 0x30);
        pbVar21 = (byte *)(lVar15 + uVar1);
        if (SCARRY8(lVar15,uVar1)) {
          return;
        }
        param_6 = param_6 + -1;
        param_5 = param_5 + 1;
        pbVar12 = param_6;
      }
    }
  }
  else {
    auStack_f0[0] = extraout_x14;
    auStack_f0[1] = uVar16;
    auStack_f0[2] = uVar6;
    auStack_f0[3] = uVar19;
    func_0x000107c61434(param_6);
    pbVar21 = param_6;
    func_0x000100fb6b80(param_5,param_6,10);
    uVar18 = (uint)pbVar21;
    func_0x000107c6142c(param_6);
    uVar6 = auStack_f0[2];
    uVar8 = auStack_f0[0];
    uVar16 = auStack_f0[1];
    pbVar21 = param_5;
LAB_101b638e8:
    uVar19 = auStack_f0[3];
    if ((uVar18 & 0xff) == 1) {
      return;
    }
  }
  auStack_f0[1] = uVar16;
  auStack_f0[3] = uVar19;
  func_0x000107c5eea8(lVar5,param_3,param_4);
  lVar15 = lVar5;
  auStack_f0[2] = uVar6;
  (**(code **)(uVar8 + 0x30))(lVar5,1,uVar6);
  uVar16 = auStack_f0[2];
  uVar6 = auStack_f0[1];
  if ((int)lVar15 == 1) {
    FUN_101b64490(lVar5,0x112d3bc20,&UNK_10d904ef0);
    return;
  }
  (**(code **)(uVar8 + 0x20))(auStack_f0[1],lVar5,auStack_f0[2]);
  puVar4 = puStack_a8;
  lVar15 = lStack_b8;
  iVar2 = *(int *)(lStack_b8 + 0x18);
  auStack_f0[0] = uVar8;
  (**(code **)(uVar8 + 0x10))((long)puStack_a8 + (long)iVar2,uVar6,uVar16);
  lVar5 = _DAT_112e04b90;
  *puVar4 = param_1;
  puVar4[1] = param_2;
  puVar4[2] = (ulong)pbVar21;
  func_0x000107c61428(unaff_x20 + _DAT_112e04b90,&pbStack_78,0,0);
  FUN_101b64318(unaff_x20 + lVar5,lVar20);
  pcVar22 = *(code **)(lStack_b0 + 0x30);
  lVar7 = lVar20;
  (*pcVar22)(lVar20,1,lVar15);
  if ((int)lVar7 == 1) {
    func_0x000107c61434(param_2);
    FUN_101b64490(lVar20,0x112e04c68,&UNK_10d9d85b8);
  }
  else {
    func_0x000101b643b8(lVar20,puVar17);
    uVar8 = *puVar17;
    if ((((uVar8 == param_1) && (puVar17[1] == param_2)) ||
        (func_0x000107c605b8(uVar8,puVar17[1],param_1,param_2,0), (uVar8 & 1) != 0)) &&
       ((byte *)puVar17[2] == pbVar21)) {
      iVar3 = *(int *)(lVar15 + 0x18);
      func_0x000107c61434(param_2);
      uVar8 = (long)puVar17 + (long)iVar3;
      func_0x000107c5eeb4(uVar8,(long)puStack_a8 + (long)iVar2);
      func_0x000101b64440(puVar17,&SUB_103c15b2c);
      if ((uVar8 & 1) != 0) {
        (**(code **)(auStack_f0[0] + 8))(auStack_f0[1],auStack_f0[2]);
        puVar17 = puStack_a8;
        goto LAB_101b63ce4;
      }
    }
    else {
      func_0x000107c61434(param_2);
      func_0x000101b64440(puVar17,&SUB_103c15b2c);
    }
  }
  FUN_101b64318(unaff_x20 + lVar5,lVar13);
  lVar20 = lVar13;
  (*pcVar22)(lVar13,1,lVar15);
  uVar8 = auStack_f0[4];
  if ((int)lVar20 == 1) {
    FUN_101b64490(lVar13,0x112e04c68,&UNK_10d9d85b8);
    uVar6 = auStack_f0[3];
    lVar13 = lStack_c0;
  }
  else {
    func_0x000101b643b8(lVar13,auStack_f0[4]);
    func_0x0001000d224c(&uStack_90);
    lVar20 = lStack_88;
    uVar10 = uStack_90;
    uVar9 = uStack_90;
    func_0x000107c614f0(uStack_90);
    uVar6 = auStack_f0[3];
    func_0x000101b643fc(uVar8,auStack_f0[3]);
    lVar13 = lStack_c0;
    func_0x000107c6159c(uVar6,lStack_c0,1);
    (**(code **)(lVar20 + 8))(uVar6,uVar9,lVar20);
    func_0x000107c615e8(uVar10);
    func_0x000101b64440(uVar6,&SUB_103c16714);
    lVar15 = lStack_b8;
    func_0x0001000d224c(&uStack_90);
    lVar20 = lStack_88;
    uVar10 = uStack_90;
    uVar9 = uStack_90;
    func_0x000107c614f0(uStack_90);
    (**(code **)(lVar20 + 8))(1,uVar9,lVar20);
    func_0x000107c615e8(uVar10);
    func_0x000101b64440(uVar8,&SUB_103c15b2c);
  }
  puVar17 = puStack_a8;
  uVar8 = auStack_f0[5];
  func_0x000101b643fc(puStack_a8,auStack_f0[5]);
  (**(code **)(lStack_b0 + 0x38))(uVar8,0,1,lVar15);
  func_0x000107c61428(unaff_x20 + lVar5,&uStack_90,0x21,0);
  func_0x000101b64368(uVar8,unaff_x20 + lVar5);
  func_0x000107c614a8(&uStack_90);
  func_0x0001000d224c(&uStack_90);
  lVar5 = lStack_88;
  uVar10 = uStack_90;
  uVar9 = uStack_90;
  func_0x000107c614f0(uStack_90);
  func_0x000101b643fc(puVar17,uVar6);
  func_0x000107c6159c(uVar6,lVar13,0);
  (**(code **)(lVar5 + 8))(uVar6,uVar9,lVar5);
  func_0x000107c615e8(uVar10);
  func_0x000101b64440(uVar6,&SUB_103c16714);
  func_0x0001000d224c(&uStack_90);
  uVar10 = uStack_90;
  func_0x000107c614f0(uStack_90);
  (**(code **)(lStack_88 + 8))(0,uVar10,lStack_88);
  func_0x000107c615e8(uStack_90);
  (**(code **)(auStack_f0[0] + 8))(auStack_f0[1],auStack_f0[2]);
LAB_101b63ce4:
  func_0x000101b64440(puVar17,&SUB_103c15b2c);
  return;
}



/* Entry: 101b63d88; end: 101b63e37; -[_TtC25GamesPresenceServicesImpl20GamesPresenceHandler gameJoinedWithConversationId:sessionId:lensId:] */

/* WARNING: Possible PIC construction at 0x000101b63e10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b63e14) */

void FUN_101b63d88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c5faec(param_3);
  uVar1 = param_2;
  func_0x000107c5faec(param_4);
  uVar2 = uVar1;
  func_0x000107c5faec(param_5);
  func_0x000107c6157c(param_1);
  FUN_101b632f0(param_3,param_2,param_4,uVar1,param_5,uVar2);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101b63e38; end: 101b63e8b;  */

void FUN_101b63e38(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    FUN_101b63e8c();
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 101b63e8c; end: 101b640fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b63e8c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long unaff_x20;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined1 auStack_78 [24];
  
  lVar1 = 0;
  func_0x000103c16714();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar9 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0x112e04c68;
  func_0x0001000285a8(0x112e04c68,&UNK_10d9d85b8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar8 = (long)puVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar8 - extraout_x12;
  lVar3 = 0;
  func_0x000103c15b2c();
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar2 = _DAT_112e04b90;
  lVar11 = lVar7 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(unaff_x20 + _DAT_112e04b90,auStack_78,0,0);
  FUN_101b64318(unaff_x20 + lVar2,lVar7);
  lVar4 = lVar7;
  (**(code **)(lVar10 + 0x30))(lVar7,1,lVar3);
  if ((int)lVar4 == 1) {
    FUN_101b64490(lVar7,0x112e04c68,&UNK_10d9d85b8);
  }
  else {
    func_0x000101b643b8(lVar7,lVar11);
    func_0x0001000d224c(&uStack_90);
    lVar4 = lStack_88;
    uVar6 = uStack_90;
    uVar5 = uStack_90;
    func_0x000107c614f0();
    uStack_98 = uVar5;
    func_0x000101b643fc(lVar11,puVar9);
    func_0x000107c6159c(puVar9,lVar1,1);
    (**(code **)(lVar4 + 8))(puVar9,uStack_98,lVar4);
    func_0x000107c615e8(uVar6);
    func_0x000101b64440(puVar9,&SUB_103c16714);
    func_0x0001000d224c(&uStack_90);
    uVar6 = uStack_90;
    func_0x000107c614f0(uStack_90);
    (**(code **)(lStack_88 + 8))(1,uVar6,lStack_88);
    func_0x000107c615e8(uStack_90);
    func_0x000101b64440(lVar11,&SUB_103c15b2c);
  }
  (**(code **)(lVar10 + 0x38))(lVar8,1,1,lVar3);
  func_0x000107c61428(unaff_x20 + lVar2,&uStack_90,0x21,0);
  func_0x000101b64368(lVar8,unaff_x20 + lVar2);
  func_0x000107c614a8(&uStack_90);
  return;
}



/* Entry: 101b640fc; end: 101b641a3; -[_TtC25GamesPresenceServicesImpl20GamesPresenceHandler leaveGameIfJoined] */

void FUN_101b640fc(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x000107c6157c();
  func_0x0001000d224c(&uStack_38);
  puVar1 = &UNK_11044c418;
  func_0x000107c613fc(&UNK_11044c418,0x18,7);
  func_0x000107c61644(puVar1 + 0x10,param_1);
  uVar2 = 0;
  func_0x000100964acc(0);
  func_0x000107c6157c(puVar1);
  func_0x00010090569c(FUN_101b64310,puVar1,uVar2);
  func_0x000107c61170(uStack_38);
  func_0x000107c61578(puVar1,2);
  func_0x000107c61574(param_1);
  return;
}



/* Entry: 101b641a4; end: 101b641fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b641a4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  FUN_101b64490(unaff_x20 + _DAT_112e04b90,0x112e04c68,&UNK_10d9d85b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101b641fc; end: 101b64203;  */

void FUN_101b641fc(void)

{
  if (lRam0000000112e04bc0 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e677fd8);
  return;
}



/* Entry: 101b64204; end: 101b6423b;  */

void FUN_101b64204(undefined8 param_1)

{
  if (lRam0000000112e04bc0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e677fd8);
  return;
}



/* Entry: 101b6423c; end: 101b6430f;  */

void FUN_101b6423c(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_40 = PTR___sBoWV_11034d678 + 0x40;
  lVar1 = 0x13f;
  puStack_38 = puStack_40;
  puStack_30 = puStack_40;
  func_0x000101b642bc();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    func_0x000107c61630(param_1,0x100,4,&puStack_40,param_1 + 0x50);
  }
  return;
}



/* Entry: 101b64310; end: 101b64317;  */

void FUN_101b64310(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_101b63e8c();
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 101b64318; end: 101b6447b;  */

undefined8 FUN_101b64318(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112e04c68;
  func_0x0001000285a8(0x112e04c68,&UNK_10d9d85b8);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 101b6447c; end: 101b6448f;  */

void FUN_101b6447c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined1 auStack_68 [24];
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x40);
  func_0x000107c61428(lVar6 + 0x10,auStack_68,0,0);
  lVar6 = lVar6 + 0x10;
  func_0x000107c61648();
  if (lVar6 != 0) {
    FUN_101b634a0(uVar3,uVar1,uVar4,uVar2,uVar5,uVar7);
    func_0x000107c61574(lVar6);
  }
  return;
}



/* Entry: 101b64490; end: 101b644cf;  */

undefined8 FUN_101b64490(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 101b644d0; end: 101b6459b;  */

void FUN_101b644d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_11044c4b0;
  func_0x000107c613fc(&UNK_11044c4b0,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  func_0x0001000285a8(0x112e04c78,&UNK_10d9d85f0);
  func_0x000107c613fc();
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_101b64714;
  func_0x0001000bdd8c(FUN_101b64714,puVar1);
  uVar3 = 0;
  func_0x000100287700(0);
  func_0x000107c610f8();
  func_0x00010335882c(pcVar2,uVar3);
  *param_1 = pcVar2;
  return;
}



/* Entry: 101b6459c; end: 101b645b7;  */

void FUN_101b6459c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar2 = &UNK_11044c4b0;
  func_0x000107c613fc(&UNK_11044c4b0,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar4;
  *(undefined8 *)(puVar2 + 0x18) = uVar1;
  *(undefined8 *)(puVar2 + 0x20) = uVar5;
  func_0x0001000285a8(0x112e04c78,&UNK_10d9d85f0);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar5);
  pcVar3 = FUN_101b64714;
  func_0x0001000bdd8c(FUN_101b64714,puVar2);
  uVar4 = 0;
  func_0x000100287700(0);
  func_0x000107c610f8();
  func_0x00010335882c(pcVar3,uVar4);
  *param_1 = pcVar3;
  return;
}



/* Entry: 101b645b8; end: 101b646df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b645b8(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  func_0x0001000cad14();
  uVar2 = param_2;
  func_0x0001000cad14();
  uVar3 = uVar2;
  func_0x0001000cad14();
  lVar4 = 0;
  FUN_101b64204();
  func_0x000107c613fc();
  lVar1 = _DAT_112e04b90;
  lVar5 = 0;
  func_0x000103c15b2c();
  (**(code **)(*(long *)(lVar5 + -8) + 0x38))(lVar4 + lVar1,1,1,lVar5);
  *(undefined8 *)(lVar4 + 0x10) = param_2;
  func_0x0001000285a8(0x112e04c80,&UNK_10d9d85f8);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar2);
  uVar6 = 0x101b64720;
  func_0x0001000bdd8c(0x101b64720,uVar2);
  *(undefined8 *)(lVar4 + 0x18) = uVar6;
  func_0x0001000285a8(0x112e04c88,&UNK_10d9d8600);
  func_0x000107c613fc();
  uVar6 = 0x101b64728;
  func_0x0001000bdd8c(0x101b64728,uVar3);
  func_0x000107c61574(uVar2);
  *(undefined8 *)(lVar4 + 0x20) = uVar6;
  *param_1 = lVar4;
  return;
}



/* Entry: 101b646e0; end: 101b64713;  */

void FUN_101b646e0(void)

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



/* Entry: 101b64714; end: 101b6472f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b64714(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x0001000cad14(uVar2,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  uVar3 = uVar2;
  func_0x0001000cad14();
  uVar4 = uVar3;
  func_0x0001000cad14();
  lVar5 = 0;
  FUN_101b64204();
  func_0x000107c613fc();
  lVar1 = _DAT_112e04b90;
  lVar6 = 0;
  func_0x000103c15b2c();
  (**(code **)(*(long *)(lVar6 + -8) + 0x38))(lVar5 + lVar1,1,1,lVar6);
  *(undefined8 *)(lVar5 + 0x10) = uVar2;
  func_0x0001000285a8(0x112e04c80,&UNK_10d9d85f8);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar3);
  uVar2 = 0x101b64720;
  func_0x0001000bdd8c(0x101b64720,uVar3);
  *(undefined8 *)(lVar5 + 0x18) = uVar2;
  func_0x0001000285a8(0x112e04c88,&UNK_10d9d8600);
  func_0x000107c613fc();
  uVar2 = 0x101b64728;
  func_0x0001000bdd8c(0x101b64728,uVar4);
  func_0x000107c61574(uVar3);
  *(undefined8 *)(lVar5 + 0x20) = uVar2;
  *param_1 = lVar5;
  return;
}



/* Entry: 101b64730; end: 101b648e7;  */

void FUN_101b64730(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  code *pcVar5;
  undefined1 auStack_108 [24];
  undefined8 uStack_f0;
  long lStack_e8;
  undefined1 auStack_e0 [40];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined2 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined8 uStack_5f;
  
  func_0x000100083b20(&uStack_b8);
  uVar1 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f000240);
  uVar2 = uStack_b8;
  func_0x000107c4e60c(uStack_b8);
  func_0x000107c61180();
  func_0x000107c615e8(uStack_b8);
  func_0x000107c61170(uVar1);
  uStack_b8 = 0xd000000000000014;
  uStack_b0 = 0x800000010ef1be60;
  uStack_a8 = 20000;
  uStack_a0 = 0x200;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 10000;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_5f = 0;
  uStack_67 = 0;
  uStack_60 = 0;
  func_0x000100083b20(auStack_108);
  func_0x0001000a8868(auStack_108,uStack_f0);
  pcVar5 = *(code **)(lStack_e8 + 8);
  func_0x000107c615f0(uVar2);
  (*pcVar5)(auStack_e0,0xd000000000000014,0x800000010f000260,&uStack_b8,uVar2,uStack_f0,lStack_e8);
  func_0x000107c615e8(uVar2);
  func_0x0001000834e4(auStack_108);
  func_0x000100e1b010(auStack_e0,auStack_108);
  lVar3 = 0;
  func_0x0001039f3794();
  func_0x000107c613fc();
  puVar4 = auStack_108;
  func_0x0001039f2194();
  param_1[3] = lVar3;
  param_1[4] = (long)&PTR_DAT_1106ba838;
  func_0x000100e1b054(&uStack_b8);
  func_0x000107c615e8(uVar2);
  *param_1 = (long)puVar4;
  func_0x0001000834e4(auStack_e0);
  return;
}



/* Entry: 101b648e8; end: 101b6491f;  */

void FUN_101b648e8(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  code *pcVar5;
  undefined1 auStack_108 [24];
  undefined8 uStack_f0;
  long lStack_e8;
  undefined1 auStack_e0 [40];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined2 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined8 uStack_5f;
  
  func_0x000100083b20(&uStack_b8,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  uVar1 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f000240);
  uVar2 = uStack_b8;
  func_0x000107c4e60c(uStack_b8);
  func_0x000107c61180();
  func_0x000107c615e8(uStack_b8);
  func_0x000107c61170(uVar1);
  uStack_b8 = 0xd000000000000014;
  uStack_b0 = 0x800000010ef1be60;
  uStack_a8 = 20000;
  uStack_a0 = 0x200;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 10000;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_5f = 0;
  uStack_67 = 0;
  uStack_60 = 0;
  func_0x000100083b20(auStack_108);
  func_0x0001000a8868(auStack_108,uStack_f0);
  pcVar5 = *(code **)(lStack_e8 + 8);
  func_0x000107c615f0(uVar2);
  (*pcVar5)(auStack_e0,0xd000000000000014,0x800000010f000260,&uStack_b8,uVar2,uStack_f0,lStack_e8);
  func_0x000107c615e8(uVar2);
  func_0x0001000834e4(auStack_108);
  func_0x000100e1b010(auStack_e0,auStack_108);
  lVar3 = 0;
  func_0x0001039f3794();
  func_0x000107c613fc();
  puVar4 = auStack_108;
  func_0x0001039f2194();
  param_1[3] = lVar3;
  param_1[4] = (long)&PTR_DAT_1106ba838;
  func_0x000100e1b054(&uStack_b8);
  func_0x000107c615e8(uVar2);
  *param_1 = (long)puVar4;
  func_0x0001000834e4(auStack_e0);
  return;
}



/* Entry: 101b64920; end: 101b64a97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b64920(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uStack_170;
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
  undefined8 uStack_118;
  undefined1 auStack_110 [96];
  undefined *apuStack_b0 [12];
  
  func_0x000100083b20(apuStack_b0);
  puVar5 = apuStack_b0[0];
  uVar1 = *(ulong *)(apuStack_b0[0] + _DAT_1130344b8);
  func_0x000107c61174();
  func_0x000107c61170(puVar5);
  uVar2 = uVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (uVar2 != 0) {
    uVar1 = uVar2;
    func_0x000107c43cd8();
    func_0x000107c61180();
    func_0x000107c615e8(uVar2);
    uVar3 = uVar1;
    func_0x000107c5faec();
    func_0x000107c61170(uVar1);
    uVar2 = uVar3 & 0xffffffffffff;
    if ((param_3 & 0x2000000000000000) != 0) {
      uVar2 = param_3 >> 0x38 & 0xf;
    }
    if (uVar2 == 0) {
      func_0x000107c6142c(param_3);
    }
    else {
      puVar4 = puVar5;
      func_0x000107c61558(puVar5);
      apuStack_b0[0] = puVar5;
      func_0x00010018433c(uVar3,param_3,0xd000000000000010,0x800000010ef1c330,puVar4);
      puVar5 = apuStack_b0[0];
    }
  }
  func_0x00010448a8f4(auStack_110);
  func_0x00010448a92c(apuStack_b0,puVar5);
  func_0x000100e19000(auStack_110);
  func_0x00010448aa5c(&uStack_170);
  func_0x000100e19000(apuStack_b0);
  func_0x000107c6142c(puVar5);
  param_1[5] = uStack_148;
  param_1[4] = uStack_150;
  param_1[7] = uStack_138;
  param_1[6] = uStack_140;
  param_1[9] = uStack_128;
  param_1[8] = uStack_130;
  param_1[0xb] = uStack_118;
  param_1[10] = uStack_120;
  param_1[1] = uStack_168;
  *param_1 = uStack_170;
  param_1[3] = uStack_158;
  param_1[2] = uStack_160;
  return;
}



/* Entry: 101b64a98; end: 101b64adf;  */

void FUN_101b64a98(undefined8 *param_1)

{
  undefined8 *unaff_x20;
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
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_101b64920(&uStack_80,*unaff_x20);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[9] = uStack_38;
  param_1[8] = uStack_40;
  param_1[0xb] = uStack_28;
  param_1[10] = uStack_30;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 101b64ae0; end: 101b64aff;  */

undefined1  [16] FUN_101b64ae0(void)

{
  return ZEXT816(0x11044c5b0);
}



/* Entry: 101b64b00; end: 101b64cb7;  */

void FUN_101b64b00(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  code *pcVar5;
  undefined1 auStack_108 [24];
  undefined8 uStack_f0;
  long lStack_e8;
  undefined1 auStack_e0 [40];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined2 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined8 uStack_5f;
  
  func_0x000100083b20(&uStack_b8);
  uVar1 = 0xd000000000000029;
  func_0x000107c5fadc(0xd000000000000029,0x800000010f000280);
  uVar2 = uStack_b8;
  func_0x000107c4e60c(uStack_b8);
  func_0x000107c61180();
  func_0x000107c615e8(uStack_b8);
  func_0x000107c61170(uVar1);
  uStack_b8 = 0xd000000000000014;
  uStack_b0 = 0x800000010ef1be60;
  uStack_a8 = 20000;
  uStack_a0 = 0x200;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 10000;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_5f = 0;
  uStack_67 = 0;
  uStack_60 = 0;
  func_0x000100083b20(auStack_108);
  func_0x0001000a8868(auStack_108,uStack_f0);
  pcVar5 = *(code **)(lStack_e8 + 8);
  func_0x000107c615f0(uVar2);
  (*pcVar5)(auStack_e0,0xd000000000000012,0x800000010f0002b0,&uStack_b8,uVar2,uStack_f0,lStack_e8);
  func_0x000107c615e8(uVar2);
  func_0x0001000834e4(auStack_108);
  func_0x000100e1b010(auStack_e0,auStack_108);
  lVar3 = 0;
  func_0x000103a19b78();
  func_0x000107c613fc();
  puVar4 = auStack_108;
  func_0x000103a198a8();
  param_1[3] = lVar3;
  param_1[4] = (long)&PTR_DAT_1106ba890;
  func_0x000100e1b054(&uStack_b8);
  func_0x000107c615e8(uVar2);
  *param_1 = (long)puVar4;
  func_0x0001000834e4(auStack_e0);
  return;
}



/* Entry: 101b64cb8; end: 101b64ccf;  */

void FUN_101b64cb8(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  code *pcVar5;
  undefined1 auStack_108 [24];
  undefined8 uStack_f0;
  long lStack_e8;
  undefined1 auStack_e0 [40];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined2 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined8 uStack_5f;
  
  func_0x000100083b20(&uStack_b8,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  uVar1 = 0xd000000000000029;
  func_0x000107c5fadc(0xd000000000000029,0x800000010f000280);
  uVar2 = uStack_b8;
  func_0x000107c4e60c(uStack_b8);
  func_0x000107c61180();
  func_0x000107c615e8(uStack_b8);
  func_0x000107c61170(uVar1);
  uStack_b8 = 0xd000000000000014;
  uStack_b0 = 0x800000010ef1be60;
  uStack_a8 = 20000;
  uStack_a0 = 0x200;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 10000;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_5f = 0;
  uStack_67 = 0;
  uStack_60 = 0;
  func_0x000100083b20(auStack_108);
  func_0x0001000a8868(auStack_108,uStack_f0);
  pcVar5 = *(code **)(lStack_e8 + 8);
  func_0x000107c615f0(uVar2);
  (*pcVar5)(auStack_e0,0xd000000000000012,0x800000010f0002b0,&uStack_b8,uVar2,uStack_f0,lStack_e8);
  func_0x000107c615e8(uVar2);
  func_0x0001000834e4(auStack_108);
  func_0x000100e1b010(auStack_e0,auStack_108);
  lVar3 = 0;
  func_0x000103a19b78();
  func_0x000107c613fc();
  puVar4 = auStack_108;
  func_0x000103a198a8();
  param_1[3] = lVar3;
  param_1[4] = (long)&PTR_DAT_1106ba890;
  func_0x000100e1b054(&uStack_b8);
  func_0x000107c615e8(uVar2);
  *param_1 = (long)puVar4;
  func_0x0001000834e4(auStack_e0);
  return;
}



/* Entry: 101b64cd0; end: 101b64d53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b64cd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e04ca8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e04cb0) = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e04cb8);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101b64d54; end: 101b6501f;  */

/* WARNING: Possible PIC construction at 0x000101b64dcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b64e10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b64e34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b64e58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b64e8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b64eb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b64f04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b64f34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b64fa8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b64ff8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b64f80: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b64fac) */
/* WARNING: Removing unreachable block (ram,0x000101b64fb4) */
/* WARNING: Removing unreachable block (ram,0x000101b64f38) */
/* WARNING: Removing unreachable block (ram,0x000101b64f48) */
/* WARNING: Removing unreachable block (ram,0x000101b64eb8) */
/* WARNING: Removing unreachable block (ram,0x000101b64ec0) */
/* WARNING: Removing unreachable block (ram,0x000101b64ecc) */
/* WARNING: Removing unreachable block (ram,0x000101b64ed4) */
/* WARNING: Removing unreachable block (ram,0x000101b64ee0) */
/* WARNING: Removing unreachable block (ram,0x000101b64f08) */
/* WARNING: Removing unreachable block (ram,0x000101b64f1c) */
/* WARNING: Removing unreachable block (ram,0x000101b64f4c) */
/* WARNING: Removing unreachable block (ram,0x000101b64f54) */
/* WARNING: Removing unreachable block (ram,0x000101b64f84) */
/* WARNING: Removing unreachable block (ram,0x000101b64fc0) */
/* WARNING: Removing unreachable block (ram,0x000101b64fe0) */
/* WARNING: Removing unreachable block (ram,0x000101b64ff4) */
/* WARNING: Removing unreachable block (ram,0x000101b64f98) */
/* WARNING: Removing unreachable block (ram,0x000101b64f68) */
/* WARNING: Removing unreachable block (ram,0x000101b64f34) */
/* WARNING: Removing unreachable block (ram,0x000101b64ee8) */
/* WARNING: Removing unreachable block (ram,0x000101b64e5c) */
/* WARNING: Removing unreachable block (ram,0x000101b64e60) */
/* WARNING: Removing unreachable block (ram,0x000101b64e90) */
/* WARNING: Removing unreachable block (ram,0x000101b64e74) */
/* WARNING: Removing unreachable block (ram,0x000101b64e38) */
/* WARNING: Removing unreachable block (ram,0x000101b64e14) */
/* WARNING: Removing unreachable block (ram,0x000101b64dd0) */
/* WARNING: Removing unreachable block (ram,0x000101b64ffc) */

void FUN_101b64d54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126a8b10;
  func_0x000107c610f8(PTR_PTR_1126a8b10);
  func_0x000107c453e4();
  func_0x000107c5fadc(param_3,param_4);
  func_0x000107c55e70(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 101b65020; end: 101b6512f; -[_TtC27SCInLensCreationLoggingImpl20InLensCreationLogger logLensCustomizationSetEventLensId:lensSessionId:customizationId:tabId:analyticsMetadata:] */

/* WARNING: Possible PIC construction at 0x000101b650f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b65108: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b650fc) */
/* WARNING: Removing unreachable block (ram,0x000101b6510c) */

void FUN_101b65020(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x000107c5faec();
  uVar2 = param_2;
  func_0x000107c5faec(param_4);
  uVar3 = uVar2;
  func_0x000107c5faec(param_5);
  if (param_6 == 0) {
    param_6 = 0;
    uVar4 = 0;
  }
  else {
    uVar4 = uVar3;
    func_0x000107c5faec(param_6);
  }
  uVar1 = param_7;
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_1);
  FUN_101b64d54(param_3,param_2,param_4,uVar2,param_5,uVar3,param_6,uVar4,param_7);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101b65130; end: 101b6528f;  */

/* WARNING: Possible PIC construction at 0x000101b651a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b651c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b651e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b65270: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b651ec) */
/* WARNING: Removing unreachable block (ram,0x000101b65208) */
/* WARNING: Removing unreachable block (ram,0x000101b6523c) */
/* WARNING: Removing unreachable block (ram,0x000101b65258) */
/* WARNING: Removing unreachable block (ram,0x000101b6526c) */
/* WARNING: Removing unreachable block (ram,0x000101b651c8) */
/* WARNING: Removing unreachable block (ram,0x000101b651a4) */
/* WARNING: Removing unreachable block (ram,0x000101b65274) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b65130(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  puVar2 = PTR_PTR_1126a8b18;
  func_0x000107c610f8(PTR_PTR_1126a8b18);
  func_0x000107c453e4();
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112e04cb8);
  uVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e04cb8))[1];
  func_0x000107c61174();
  func_0x000107c5fadc(uVar3,uVar1);
  func_0x000107c5a344(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 101b65290; end: 101b65313; -[_TtC27SCInLensCreationLoggingImpl20InLensCreationLogger logLensCustomizationUnlockedEventLensId:customizationId:] */

/* WARNING: Possible PIC construction at 0x000101b652f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b652fc) */

void FUN_101b65290(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  uVar1 = param_2;
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_1);
  FUN_101b65130(param_3,param_2,param_4,uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101b65314; end: 101b65373; -[_TtC27SCInLensCreationLoggingImpl20InLensCreationLogger init] */

void FUN_101b65314(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCInLensCreationLoggingImpl.InLensCreationLogger",0x30,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101b65340);
  (*pcVar1)();
}



/* Entry: 101b65374; end: 101b653bf; -[_TtC27SCInLensCreationLoggingImpl20InLensCreationLogger .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b65374(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e04ca8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e04cb0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112e04cb8 + 8))
  ;
  return;
}



/* Entry: 101b653c0; end: 101b65423;  */

undefined1  [16] FUN_101b653c0(ulong param_1)

{
  undefined1 auVar1 [16];
  
  if (param_1 == 0) {
    return ZEXT816(1) << 0x40;
  }
  func_0x000107c49820();
  if (param_1 < 4) {
    auVar1._0_8_ = *(ulong *)(&UNK_10d9d8758 + param_1 * 8);
    auVar1._8_8_ = 0;
    return auVar1;
  }
  return ZEXT816(1) << 0x40;
}



/* Entry: 101b65424; end: 101b65467;  */

void FUN_101b65424(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  return;
}



/* Entry: 101b65468; end: 101b65477;  */

void FUN_101b65468(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  return;
}



/* Entry: 101b65478; end: 101b654bb;  */

undefined * FUN_101b65478(undefined8 param_1)

{
  undefined *puVar1;
  
  FUN_101b654bc();
  puVar1 = PTR_PTR_1126a8b20;
  func_0x000107c610f8(PTR_PTR_1126a8b20);
  func_0x000107c46e44();
  func_0x000107c61170(param_1);
  return puVar1;
}



/* Entry: 101b654bc; end: 101b656cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_101b654bc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  code *pcVar5;
  code *pcVar6;
  code *pcVar7;
  long unaff_x20;
  undefined8 uVar8;
  
  uVar1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_113083868);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61174();
  func_0x000107c4af30();
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + _DAT_113083f78);
  func_0x000107c5d984();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c5faec();
  func_0x000107c61170(uVar2);
  puVar4 = &UNK_11044c6c8;
  func_0x000107c613fc(&UNK_11044c6c8,0x30,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar8;
  *(undefined8 *)(puVar4 + 0x20) = uVar3;
  *(undefined8 *)(puVar4 + 0x28) = param_2;
  func_0x0001000285a8(0x112e04dc8,&UNK_10d9d87c8);
  func_0x000107c613fc();
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar8);
  pcVar5 = FUN_101b65824;
  func_0x0001000bdd8c(FUN_101b65824,puVar4);
  uVar3 = 0x112e04dd0;
  func_0x0001000285a8(0x112e04dd0,&UNK_10d9d87d0);
  pcVar6 = FUN_101b656d0;
  func_0x0001000cb480(FUN_101b656d0,0,uVar3);
  pcVar7 = pcVar6;
  func_0x0001003a5b88();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar8);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(pcVar6);
  return pcVar7;
}



/* Entry: 101b656d0; end: 101b656db;  */

void FUN_101b656d0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 101b656dc; end: 101b656ff;  */

/* WARNING: Possible PIC construction at 0x000101b656e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b656ec) */

void FUN_101b656dc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101b65700; end: 101b65753;  */

void FUN_101b65700(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101b65754; end: 101b657d3;  */

void FUN_101b65754(undefined8 param_1)

{
  if (lRam0000000112e04d10 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e678100);
  return;
}


