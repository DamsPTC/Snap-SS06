/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102b92618; end: 102b929ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b92618(ulong *param_1,ulong *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined *puVar15;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined *puStack_58;
  
  uVar14 = *param_2;
  uVar9 = param_2[1];
  puVar15 = (undefined *)(ulong)(byte)uVar9;
  uVar1 = *(ulong *)(param_3 + _DAT_112efadf8);
  lStack_88 = param_3;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (uVar1 == 0) {
    uVar1 = 0;
    lStack_88 = 0;
  }
  else {
    uVar2 = uVar1;
    func_0x000107c5d984();
    func_0x000107c61180();
    func_0x000107c615e8(uVar1);
    if (uVar2 == 0) {
      uVar1 = 0;
      lStack_88 = 0;
    }
    else {
      uVar1 = uVar2;
      func_0x000107c5faec();
      func_0x000107c61170(uVar2);
    }
  }
  uVar2 = *(ulong *)(param_3 + _DAT_112efae00);
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c3d9c0(*(undefined8 *)(param_3 + _DAT_112efad40));
  puVar3 = PTR_PTR_1126c4e78;
  func_0x000107c61168();
  func_0x000107c3e390();
  func_0x000107c61180();
  puVar8 = PTR___sypN_11034f1a8;
  puVar4 = puVar3;
  puVar13 = PTR___ss11AnyHashableVN_11034e448;
  func_0x000107c5f9e8();
  func_0x000107c61170(puVar3);
  puVar3 = puVar4;
  func_0x0001012254e8();
  func_0x000107c6142c(puVar4);
  if (puVar3 == (undefined *)0x0) {
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
LAB_102b92838:
    func_0x000102b970f8(&uStack_80,0x112d387f8,&UNK_10d902650);
LAB_102b92850:
    puVar8 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x000107c61168(PTR__OBJC_CLASS___UIFont_1126aec38);
    func_0x000107c4eca4();
    func_0x000107c61180();
  }
  else {
    lVar5 = *(long *)PTR__NSFontAttributeName_1103457f0;
    func_0x000107c5faec(lVar5);
    if (*(long *)(puVar3 + 0x10) == 0) {
LAB_102b92820:
      uStack_78 = 0;
      uStack_80 = 0;
      lStack_68 = 0;
      uStack_70 = 0;
      func_0x000107c6142c(puVar13);
      func_0x000107c6142c(puVar3);
      goto LAB_102b92838;
    }
    func_0x000107c61434(puVar3);
    puVar4 = puVar13;
    func_0x000100029284(lVar5);
    if (((ulong)puVar4 & 1) == 0) {
      func_0x000107c6142c(puVar3);
      goto LAB_102b92820;
    }
    func_0x0001000bb420(*(long *)(puVar3 + 0x38) + lVar5 * 0x20,&uStack_80);
    func_0x000107c6142c(puVar13);
    func_0x000107c61430(puVar3,2);
    if (lStack_68 == 0) goto LAB_102b92838;
    uVar6 = 0;
    FUN_102b97258(0,0x112d48388,&PTR__OBJC_CLASS___UIFont_1126aec38);
    ppuVar7 = &puStack_58;
    func_0x000107c6147c(ppuVar7,&uStack_80,puVar8 + 8,uVar6,6);
    puVar8 = puStack_58;
    if (((ulong)ppuVar7 & 1) == 0) goto LAB_102b92850;
  }
  if (((byte)uVar9 != 1) || (uVar2 == 0)) {
    FUN_102b8cc6c();
    func_0x000107c615e8(uVar2);
    func_0x000107c61170(puVar8);
    func_0x000107c6142c(lStack_88);
    goto LAB_102b929d8;
  }
  func_0x000107c615f0(uVar2);
  uVar9 = uVar14;
  func_0x000107c61174();
  uVar10 = uVar9;
  func_0x000102b96984();
  uVar11 = uVar9;
  func_0x000107c44520();
  func_0x000107c61180();
  if (uVar11 == 0) {
LAB_102b928f4:
    if (*(long *)(uVar10 + 0x10) == 0) goto LAB_102b92994;
    uVar14 = uVar10;
    puVar15 = PTR___sSSN_11034da80;
    func_0x000107c5fc48(uVar10);
    func_0x000107c6142c(uVar10);
    uVar1 = uVar2;
    func_0x000107c44528(0x4069000000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar14);
    uVar14 = uVar1;
    func_0x000107c5faec();
    func_0x000107c61170(uVar9);
    uVar9 = uVar1;
  }
  else {
    uVar12 = uVar11;
    func_0x000107c5faec();
    func_0x000107c61170(uVar11);
    func_0x000107c6142c(uVar1);
    uVar11 = uVar12 & 0xffffffffffff;
    if ((uVar1 & 0x2000000000000000) != 0) {
      uVar11 = uVar1 >> 0x38 & 0xf;
    }
    if (uVar11 == 0) goto LAB_102b928f4;
LAB_102b92994:
    func_0x000107c6142c(uVar10);
    puVar15 = (undefined *)0x1;
    FUN_102b8cc6c();
  }
  func_0x000107c61170(uVar9);
  func_0x000107c615ec(uVar2,2);
  func_0x000107c61170(puVar8);
  func_0x000107c6142c(lStack_88);
LAB_102b929d8:
  *param_1 = uVar14;
  param_1[1] = (ulong)puVar15;
  return;
}



/* Entry: 102b92a00; end: 102b92ca3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b92a00(ulong param_1)

{
  ulong *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  lVar2 = _DAT_112efad30;
  ppuVar6 = &puStack_70;
  puVar1 = (ulong *)(unaff_x20 + _DAT_112efad48);
  if ((char)puVar1[1] != '\x01') {
    uVar9 = *puVar1;
    uVar7 = *(ulong *)(unaff_x20 + _DAT_112efad30);
    if (uVar7 >> 0x3e == 0) {
      uVar8 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar8 = uVar7 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar7) {
        uVar8 = uVar7;
      }
      func_0x000107c60480();
    }
    if ((long)uVar9 < (long)uVar8) {
      uVar7 = *(ulong *)(unaff_x20 + lVar2);
      if ((param_1 & 1) == 0) {
        if ((uVar7 & 0xc000000000000001) == 0) {
          if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x102b92c74);
            (*pcVar3)();
          }
          if (*(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x102b92c78);
            (*pcVar3)();
          }
          uVar9 = *(ulong *)(uVar7 + uVar9 * 8 + 0x20);
          func_0x000107c61174(uVar9);
        }
        else {
          func_0x000107c61434(uVar7);
          func_0x0001020b13f8(uVar9,uVar7);
          func_0x000107c6142c(uVar7);
        }
        puStack_70 = (undefined *)0x3ff0000000000000;
        uStack_68 = 0;
        puStack_60 = (undefined *)0x0;
        puStack_58 = (undefined *)0x3ff0000000000000;
        uStack_50 = 0;
        puStack_48 = (undefined *)0x0;
        func_0x000107c5a03c(uVar9);
        func_0x000107c61170(uVar9);
      }
      else {
        if (uVar7 >> 0x3e == 0) {
          uVar8 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar8 = uVar7 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar7) {
            uVar8 = uVar7;
          }
          func_0x000107c60480();
        }
        if ((long)uVar9 < (long)uVar8) {
          uVar7 = *(ulong *)(unaff_x20 + lVar2);
          if ((uVar7 & 0xc000000000000001) == 0) {
            if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x102b92ca0);
              (*pcVar3)();
            }
            if (*(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x102b92ca4);
              (*pcVar3)();
            }
            uVar9 = *(ulong *)(uVar7 + uVar9 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            func_0x000107c61434(uVar7);
            func_0x0001020b13f8(uVar9,uVar7);
            func_0x000107c6142c(uVar7);
          }
          puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
          func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
          puVar5 = &UNK_1105a6ca8;
          func_0x000107c613fc(&UNK_1105a6ca8,0x20,7);
          *(ulong *)(puVar5 + 0x10) = uVar9;
          *(undefined8 *)(puVar5 + 0x18) = 0x3ff0000000000000;
          uStack_50 = 0x102b96ee0;
          puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_68 = 0x42000000;
          puStack_60 = &UNK_1000f6b44;
          puStack_58 = &UNK_1105a6cc0;
          puStack_48 = puVar5;
          func_0x000107c60bc4(&puStack_70);
          puVar5 = puStack_48;
          func_0x000107c61174(uVar9);
          func_0x000107c61574(puVar5);
          func_0x000107c3dcd4(0x3fbeb851eb851eb8,0,puVar4);
          func_0x000107c61170(uVar9);
          func_0x000107c60bd0(ppuVar6);
        }
      }
    }
  }
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112efad40);
  func_0x000107c550d8(uVar10);
  func_0x000107c59c6c(uVar10);
  return;
}



/* Entry: 102b92ca4; end: 102b92e2b;  */

void FUN_102b92ca4(undefined8 param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = &stack0xffffffffffffffb0 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar5 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000102b96f6c(param_1,puVar6,0x112d36580,&UNK_10d9016d0);
  puVar2 = puVar6;
  (**(code **)(lVar7 + 0x30))(puVar6,1,lVar1);
  if ((int)puVar2 == 1) {
    func_0x000102b970f8(puVar6,0x112d36580,&UNK_10d9016d0);
    FUN_102b93aec(0,1);
  }
  else {
    (**(code **)(lVar7 + 0x20))(lVar5,puVar6,lVar1);
    puVar3 = PTR__OBJC_CLASS___UIPasteboard_1126b2090;
    func_0x000107c61168(PTR__OBJC_CLASS___UIPasteboard_1126b2090);
    func_0x000107c43d80();
    func_0x000107c61180();
    puVar4 = puVar3;
    func_0x000107c5ed90();
    func_0x000107c5a120(puVar3);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar4);
    FUN_102b93aec(1,1);
    (**(code **)(lVar7 + 8))(lVar5,lVar1);
  }
  return;
}



/* Entry: 102b92e2c; end: 102b93a83;  */

/* WARNING: Removing unreachable block (ram,0x000102b93b1c) */
/* WARNING: Removing unreachable block (ram,0x000102b93b4c) */
/* WARNING: Removing unreachable block (ram,0x000102b93d64) */
/* WARNING: Removing unreachable block (ram,0x000102b93b38) */
/* WARNING: Removing unreachable block (ram,0x000102b93b48) */
/* WARNING: Removing unreachable block (ram,0x000102b93b20) */
/* WARNING: Removing unreachable block (ram,0x000102b93b30) */
/* WARNING: Removing unreachable block (ram,0x000102b93b5c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b92e2c(undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 uVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined **ppuVar16;
  uint uVar17;
  undefined8 *puVar18;
  ulong uVar19;
  undefined8 uVar20;
  char *pcVar21;
  long unaff_x20;
  undefined *puVar22;
  long lVar23;
  undefined8 uVar24;
  long lVar25;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  uVar17 = (uint)param_2;
  if (((uVar17 ^ 0xffffffff) & 0xff) == 0) {
    uVar24 = 0;
    ppuVar16 = &puStack_70;
    lVar23 = unaff_x20;
    func_0x000107c614f0();
    lVar25 = lVar23;
    func_0x000108f5950c();
    func_0x000107c61180();
    if (lVar25 != 0) {
      lVar13 = lVar25;
      func_0x000107c5faec();
      func_0x000107c61170(lVar25);
      puVar22 = PTR_PTR_1126afde0;
      func_0x000107c61168();
      func_0x000107c5fadc(lVar13,uVar24);
      uVar10 = 0xd00000000000001f;
      func_0x000107c5fadc(0xd00000000000001f,0x800000010f0f8590);
      func_0x000107c409d8();
      func_0x000107c61180();
      func_0x000107c61170(lVar13);
      func_0x000107c61170(uVar10);
      uVar10 = 0;
      func_0x000107c60714(lVar23,0);
      puVar14 = &UNK_1105a6b68;
      func_0x000107c613fc(&UNK_1105a6b68,0x18,7);
      func_0x000107c61614(puVar14 + 0x10,unaff_x20);
      puVar15 = &UNK_1105a6b90;
      func_0x000107c613fc(&UNK_1105a6b90,0x20,7);
      *(undefined **)(puVar15 + 0x10) = puVar14;
      *(undefined **)(puVar15 + 0x18) = puVar22;
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_68 = (undefined *)0x42000000;
      func_0x000107c60bc4(&puStack_70);
      func_0x000107c61174(puVar22);
      func_0x000107c61574(puVar15);
      func_0x000107c5fb28(lVar23,uVar10);
      func_0x000107c6142c(uVar10);
      func_0x000100162d98(lVar23 + 0x20,ppuVar16);
      func_0x000107c61170(puVar22);
      func_0x000107c60bd0(ppuVar16);
      func_0x000107c61574(lVar23);
      func_0x000107c6142c(uVar24);
      return;
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x102b93d6c);
    (*pcVar4)();
  }
  lVar23 = *(long *)(unaff_x20 + _DAT_112efade0);
  puVar5 = param_1;
  if (lVar23 == 0) {
    puVar14 = &UNK_1105a6b68;
    func_0x000107c613fc(&UNK_1105a6b68,0x18,7);
    func_0x000107c61614(puVar14 + 0x10);
    func_0x000107c61174();
    puStack_98 = (undefined *)0x0;
    uVar24 = 0x102b96e34;
    if ((uVar17 & 0xff) == 1) goto LAB_102b93280;
LAB_102b92f5c:
    plVar6 = (long *)(unaff_x20 + _DAT_112efadb0);
    puVar18 = (undefined8 *)plVar6[3];
    func_0x000102b97234();
    uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112efadc0);
    uVar2 = *(ulong *)(unaff_x20 + _DAT_112efadc8);
    puVar12 = (undefined8 *)((ulong *)(unaff_x20 + _DAT_112efadc8))[1];
    uVar3 = *(undefined1 *)(unaff_x20 + _DAT_112efadd8);
    lVar23 = *plVar6;
    func_0x000107c6157c(puVar14);
    func_0x000107c5d984();
    func_0x000107c61180();
    if (puVar5 == (undefined8 *)0x0) {
      func_0x000102b8a00c();
      puVar15 = &UNK_1105a6858;
      func_0x000107c613f8(&UNK_1105a6858,puVar5,0,0);
      *puVar5 = 0x6920644972657375;
      puVar5[1] = 0xed00006c696e2073;
      func_0x000107c61428(puVar14 + 0x10,&puStack_90,0,0);
      puVar22 = puVar14 + 0x10;
      func_0x000107c61618();
      if (puVar22 == (undefined *)0x0) {
        func_0x000107c614ac(puVar15);
LAB_102b937cc:
        func_0x000102b96e3c(param_1,param_2);
        puVar15 = puStack_98;
      }
      else {
        FUN_102b93aec(0,0);
        func_0x000107c614ac(puVar15);
LAB_102b9374c:
        func_0x000102b96e3c(param_1,param_2);
        func_0x000107c61170(puVar22);
        puVar15 = puStack_98;
      }
      func_0x000107c61578(puVar14,2);
LAB_102b937e4:
      func_0x000107c61170(puVar15);
      return;
    }
    puVar7 = puVar5;
    func_0x000107c5faec();
    func_0x000107c61170(puVar5);
    uVar20 = 0;
    func_0x000104522c9c(0);
    func_0x00010452281c(puVar7,puVar18);
    func_0x000107c6142c();
    if (puVar12 == (undefined8 *)0x0) {
LAB_102b9352c:
      pcVar21 = "eeded_notification";
      func_0x000102b8a00c();
      puVar15 = &UNK_1105a6858;
      func_0x000107c613f8(&UNK_1105a6858,puVar18,0,0);
      uVar24 = 0xd000000000000018;
    }
    else {
      uVar19 = uVar2 & 0xffffffffffff;
      if (((ulong)puVar12 & 0x2000000000000000) != 0) {
        uVar19 = (ulong)puVar12 >> 0x38 & 0xf;
      }
      if (uVar19 == 0) goto LAB_102b9352c;
      if (puStack_98 == (undefined *)0x0) {
        func_0x000102b8a00c();
        puVar15 = &UNK_1105a6858;
        func_0x000107c613f8(&UNK_1105a6858,puVar18,0,0);
        *puVar18 = 0xd000000000000015;
        puVar18[1] = 0x800000010f0f8600;
        func_0x000107c61428(puVar14 + 0x10,&puStack_90,0,0);
        puStack_98 = puVar14 + 0x10;
        func_0x000107c61618();
        if (puStack_98 == (undefined *)0x0) {
          func_0x000107c614ac(puVar15);
LAB_102b93a18:
          func_0x000107c61170(puVar7);
          func_0x000102b96e3c(param_1,param_2);
          goto LAB_102b93a58;
        }
        FUN_102b93aec(0,0);
        func_0x000107c614ac(puVar15);
LAB_102b938ec:
        func_0x000107c61170(puVar7);
        func_0x000102b96e3c(param_1,param_2);
        goto LAB_102b93a54;
      }
      puVar22 = *(undefined **)(lVar23 + 0x28);
      func_0x000107c61434(puVar12);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (puVar22 != (undefined *)0x0) {
        puVar15 = puVar22;
        func_0x0001011d1d1c();
        func_0x000107c613fc();
        *(undefined8 *)(puVar15 + 0x18) = 3;
        *(undefined8 *)(puVar15 + 0x10) = 1;
        *(undefined8 **)(puVar15 + 0x20) = puVar7;
        func_0x000107c61174();
        puVar8 = puVar15;
        func_0x000107c5fc48(puVar15,uVar20);
        func_0x000107c61574(puVar15);
        puVar15 = puVar22;
        func_0x000107c5b59c(puVar22);
        func_0x000107c61180();
        func_0x000107c61170(puVar8);
        puVar8 = &UNK_1105a6be0;
        func_0x000107c613fc(&UNK_1105a6be0,0x18,7);
        func_0x000107c61644(puVar8 + 0x10,lVar23);
        puVar9 = &UNK_1105a6c58;
        func_0x000107c613fc(&UNK_1105a6c58,0x50,7);
        *(undefined **)(puVar9 + 0x10) = puVar8;
        *(undefined8 *)(puVar9 + 0x18) = uVar10;
        *(ulong *)(puVar9 + 0x20) = uVar2;
        *(undefined8 **)(puVar9 + 0x28) = puVar12;
        puVar9[0x30] = uVar3;
        *(undefined **)(puVar9 + 0x38) = puStack_98;
        *(undefined8 *)(puVar9 + 0x40) = uVar24;
        *(undefined **)(puVar9 + 0x48) = puVar14;
        puStack_70 = (undefined *)0x102b97390;
        puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_88 = 0x42000000;
        puStack_80 = &UNK_1011f2f24;
        puStack_78 = &UNK_1105a6c70;
        ppuVar16 = &puStack_90;
        puStack_68 = puVar9;
        func_0x000107c60bc4(ppuVar16);
        puVar8 = puStack_68;
        func_0x000107c61174(uVar10);
        func_0x000107c61174(puStack_98);
        func_0x000107c6157c(puVar14);
        func_0x000107c61574(puVar8);
        pcVar21 = 
        "shareStoryTo(chatId:story:compositeStoryId:isLongFormShow:platformAnalytics:completion:)";
        func_0x0001000c10c0(
                           "shareStoryTo(chatId:story:compositeStoryId:isLongFormShow:platformAnalytics:completion:)"
                           );
        func_0x000107c61180();
        func_0x000107c5dc64(puVar15);
        func_0x000102b96e3c(param_1,param_2);
        func_0x000107c615e8(pcVar21);
        func_0x000107c61170(puVar7);
        func_0x000107c61578(puVar14,2);
        func_0x000107c60bd0(ppuVar16);
        func_0x000107c61170(puStack_98);
        func_0x000107c615e8(puVar22);
        goto LAB_102b937e4;
      }
      func_0x000107c6142c();
      pcVar21 = "nil platformAnalytics";
      func_0x000102b8a00c();
      puVar15 = &UNK_1105a6858;
      func_0x000107c613f8(&UNK_1105a6858,puVar12,0,0);
      uVar24 = 0xd00000000000001b;
      puVar18 = puVar12;
    }
    *puVar18 = uVar24;
    puVar18[1] = (ulong)pcVar21 | 0x8000000000000000;
    func_0x000107c61428(puVar14 + 0x10,&puStack_90,0,0);
    puVar22 = puVar14 + 0x10;
    func_0x000107c61618();
    if (puVar22 == (undefined *)0x0) {
      func_0x000107c614ac(puVar15);
LAB_102b93788:
      func_0x000107c61170(puVar7);
      func_0x000102b96e3c(param_1,param_2);
      goto LAB_102b93798;
    }
    FUN_102b93aec(0,0);
    func_0x000107c614ac(puVar15);
  }
  else {
    puVar14 = PTR_PTR_1126b1a40;
    func_0x000107c61168();
    func_0x000107c61174(lVar23);
    FUN_102b96ecc(param_1,param_2);
    func_0x000107c4e85c();
    func_0x000107c61180();
    lVar25 = ((undefined8 *)(unaff_x20 + _DAT_112efae28))[1];
    if (lVar25 == 0) {
      uVar24 = 0;
    }
    else {
      uVar24 = *(undefined8 *)(unaff_x20 + _DAT_112efae28);
      func_0x000107c61434(lVar25);
      func_0x000107c5fadc(uVar24,lVar25);
      func_0x000107c6142c(lVar25);
    }
    puVar15 = puVar14;
    func_0x000107c5e748();
    func_0x000107c61180();
    func_0x000107c61170(puVar14);
    func_0x000107c61170(uVar24);
    puStack_98 = puVar15;
    func_0x000107c3ecc8();
    func_0x000107c61180();
    func_0x000107c61170(lVar23);
    func_0x000107c61170(puVar15);
    puVar14 = &UNK_1105a6b68;
    func_0x000107c613fc(&UNK_1105a6b68,0x18,7);
    func_0x000107c61614(puVar14 + 0x10);
    uVar24 = 0x102b97394;
    if ((uVar17 & 0xff) != 1) goto LAB_102b92f5c;
LAB_102b93280:
    plVar6 = (long *)(unaff_x20 + _DAT_112efadb0);
    uVar19 = plVar6[3];
    func_0x000102b97234();
    func_0x000107c6157c(puVar14);
    func_0x000107c444fc();
    func_0x000107c61180();
    puVar7 = puVar5;
    func_0x000107c5faec();
    func_0x000107c61170();
    uVar2 = (ulong)puVar7 & 0xffffffffffff;
    if ((uVar19 & 0x2000000000000000) != 0) {
      uVar2 = uVar19 >> 0x38 & 0xf;
    }
    if (uVar2 == 0) {
      func_0x000102b8a00c();
      puVar15 = &UNK_1105a6858;
      func_0x000107c613f8(&UNK_1105a6858,puVar5,0,0);
      *puVar5 = 0xd000000000000010;
      puVar5[1] = 0x800000010f0f86a0;
      func_0x000107c61428(puVar14 + 0x10,&puStack_90,0,0);
      puVar22 = puVar14 + 0x10;
      func_0x000107c61618();
      if (puVar22 == (undefined *)0x0) {
        func_0x000107c614ac(puVar15);
        func_0x000107c6142c(uVar19);
        goto LAB_102b937cc;
      }
      FUN_102b93aec(0,0);
      func_0x000107c614ac(puVar15);
      func_0x000107c6142c(uVar19);
      goto LAB_102b9374c;
    }
    uVar20 = *(undefined8 *)(unaff_x20 + _DAT_112efadc0);
    uVar2 = *(ulong *)(unaff_x20 + _DAT_112efadc8);
    puVar5 = (undefined8 *)((ulong *)(unaff_x20 + _DAT_112efadc8))[1];
    uVar3 = *(undefined1 *)(unaff_x20 + _DAT_112efadd8);
    lVar23 = *plVar6;
    uVar10 = 0;
    func_0x000104522c9c(0);
    func_0x00010452292c(puVar7,uVar19);
    if (puVar5 != (undefined8 *)0x0) {
      uVar1 = uVar2 & 0xffffffffffff;
      if (((ulong)puVar5 & 0x2000000000000000) != 0) {
        uVar1 = (ulong)puVar5 >> 0x38 & 0xf;
      }
      if (uVar1 == 0) goto LAB_102b935ac;
      if (puStack_98 == (undefined *)0x0) {
        puVar5 = puVar7;
        func_0x000102b8a00c();
        puVar15 = &UNK_1105a6858;
        func_0x000107c613f8(&UNK_1105a6858,puVar5,0,0);
        *puVar5 = 0xd000000000000015;
        puVar5[1] = 0x800000010f0f8600;
        func_0x000107c61428(puVar14 + 0x10,&puStack_90,0,0);
        puStack_98 = puVar14 + 0x10;
        func_0x000107c61618();
        if (puStack_98 == (undefined *)0x0) {
          func_0x000107c614ac(puVar15);
          func_0x000107c6142c(uVar19);
          goto LAB_102b93a18;
        }
        FUN_102b93aec(0,0);
        func_0x000107c614ac(puVar15);
        func_0x000107c6142c(uVar19);
        goto LAB_102b938ec;
      }
      lVar25 = *(long *)(lVar23 + 0x28);
      func_0x000107c61434(puVar5);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar25 != 0) {
        lVar13 = lVar25;
        func_0x0001011d1d1c();
        func_0x000107c613fc();
        *(undefined8 *)(lVar13 + 0x18) = 3;
        *(undefined8 *)(lVar13 + 0x10) = 1;
        *(undefined8 **)(lVar13 + 0x20) = puVar7;
        func_0x000107c61174();
        lVar11 = lVar13;
        func_0x000107c5fc48(lVar13,uVar10);
        func_0x000107c61574(lVar13);
        lVar13 = lVar25;
        func_0x000107c5b59c(lVar25);
        func_0x000107c61180();
        func_0x000107c61170(lVar11);
        puVar15 = &UNK_1105a6be0;
        func_0x000107c613fc(&UNK_1105a6be0,0x18,7);
        func_0x000107c61644(puVar15 + 0x10,lVar23);
        puVar22 = &UNK_1105a6c08;
        func_0x000107c613fc(&UNK_1105a6c08,0x50,7);
        *(undefined **)(puVar22 + 0x10) = puVar15;
        *(undefined8 *)(puVar22 + 0x18) = uVar20;
        *(ulong *)(puVar22 + 0x20) = uVar2;
        *(undefined8 **)(puVar22 + 0x28) = puVar5;
        puVar22[0x30] = uVar3;
        *(undefined **)(puVar22 + 0x38) = puStack_98;
        *(undefined8 *)(puVar22 + 0x40) = uVar24;
        *(undefined **)(puVar22 + 0x48) = puVar14;
        puStack_70 = (undefined *)0x102b96e50;
        puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_88 = 0x42000000;
        puStack_80 = &UNK_1011f2f24;
        puStack_78 = &UNK_1105a6c20;
        ppuVar16 = &puStack_90;
        puStack_68 = puVar22;
        func_0x000107c60bc4(ppuVar16);
        puVar15 = puStack_68;
        func_0x000107c61174(uVar20);
        func_0x000107c61174(puStack_98);
        func_0x000107c6157c(puVar14);
        func_0x000107c61574(puVar15);
        pcVar21 = 
        "shareStoryTo(chatId:story:compositeStoryId:isLongFormShow:platformAnalytics:completion:)";
        func_0x0001000c10c0(
                           "shareStoryTo(chatId:story:compositeStoryId:isLongFormShow:platformAnalytics:completion:)"
                           );
        func_0x000107c61180();
        func_0x000107c5dc64(lVar13);
        func_0x000107c6142c(uVar19);
        func_0x000102b96e3c(param_1,param_2);
        func_0x000107c615e8(pcVar21);
        func_0x000107c61170(puVar7);
        func_0x000107c61578(puVar14,2);
        func_0x000107c60bd0(ppuVar16);
        func_0x000107c61170(puStack_98);
        func_0x000107c615e8(lVar25);
        func_0x000107c61170(lVar13);
        return;
      }
      func_0x000107c6142c();
      func_0x000102b8a00c();
      puVar15 = &UNK_1105a6858;
      func_0x000107c613f8(&UNK_1105a6858,puVar5,0,0);
      *puVar5 = 0xd00000000000001b;
      puVar5[1] = 0x800000010f0f8620;
      func_0x000107c61428(puVar14 + 0x10,&puStack_90,0,0);
      puVar22 = puVar14 + 0x10;
      func_0x000107c61618();
      if (puVar22 == (undefined *)0x0) {
        func_0x000107c614ac(puVar15);
        func_0x000107c6142c(uVar19);
        func_0x000107c61170(puVar7);
        func_0x000102b96e3c(param_1,param_2);
      }
      else {
        FUN_102b93aec(0,0);
        func_0x000107c614ac(puVar15);
        func_0x000107c6142c(uVar19);
        func_0x000107c61170(puVar7);
        func_0x000102b96e3c(param_1,param_2);
        func_0x000107c61170(puVar22);
      }
LAB_102b93a54:
      func_0x000107c61170(puStack_98);
LAB_102b93a58:
      func_0x000107c61578(puVar14,2);
      return;
    }
LAB_102b935ac:
    puVar5 = puVar7;
    func_0x000102b8a00c();
    puVar15 = &UNK_1105a6858;
    func_0x000107c613f8(&UNK_1105a6858,puVar5,0,0);
    *puVar5 = 0xd000000000000018;
    puVar5[1] = 0x800000010f0f85e0;
    func_0x000107c61428(puVar14 + 0x10,&puStack_90,0,0);
    puVar22 = puVar14 + 0x10;
    func_0x000107c61618();
    if (puVar22 == (undefined *)0x0) {
      func_0x000107c614ac(puVar15);
      func_0x000107c6142c(uVar19);
      goto LAB_102b93788;
    }
    FUN_102b93aec(0,0);
    func_0x000107c614ac(puVar15);
    func_0x000107c6142c(uVar19);
  }
  func_0x000107c61170(puVar7);
  func_0x000102b96e3c(param_1,param_2);
  func_0x000107c61170(puVar22);
LAB_102b93798:
  func_0x000107c61578(puVar14,2);
  func_0x000107c61170(puStack_98);
  return;
}



/* Entry: 102b93a84; end: 102b93aeb;  */

void FUN_102b93a84(undefined8 param_1,char param_2,long param_3)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_38,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    FUN_102b93aec(param_2 != '\x01',0);
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 102b93aec; end: 102b93d6b;  */

void FUN_102b93aec(ulong param_1,ulong param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  ulong uVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar7 = &puStack_70;
  uVar8 = param_2;
  func_0x000107c614f0();
  if ((param_1 & 1) == 0) {
    lVar2 = unaff_x20;
    if ((param_2 & 1) == 0) {
      func_0x000108f5950c();
      func_0x000107c61180();
      if (lVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102b93d6c);
        (*pcVar1)();
      }
    }
    else {
      func_0x000108f5953c();
      func_0x000107c61180();
      if (lVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102b93b4c);
        (*pcVar1)();
      }
    }
    lVar3 = lVar2;
    func_0x000107c5faec();
    func_0x000107c61170(lVar2);
    puVar4 = PTR_PTR_1126afde0;
    func_0x000107c61168();
    func_0x000107c5fadc(lVar3,uVar8);
    uVar9 = 0xd00000000000001f;
    func_0x000107c5fadc(0xd00000000000001f,0x800000010f0f8590);
    func_0x000107c409d8();
  }
  else {
    lVar2 = unaff_x20;
    if ((param_2 & 1) == 0) {
      func_0x000108f594f4();
      func_0x000107c61180();
      if (lVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102b93d68);
        (*pcVar1)();
      }
    }
    else {
      func_0x000108f59524();
      func_0x000107c61180();
      if (lVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102b93b34);
        (*pcVar1)();
      }
    }
    lVar3 = lVar2;
    func_0x000107c5faec();
    func_0x000107c61170(lVar2);
    puVar4 = PTR_PTR_1126afde0;
    func_0x000107c61168();
    func_0x000107c5fadc(lVar3,uVar8);
    uVar9 = 0xd000000000000022;
    func_0x000107c5fadc(0xd000000000000022,0x800000010f0f85b0);
    func_0x000107c40930();
  }
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  func_0x000107c61170(uVar9);
  uVar9 = 0;
  func_0x000107c60714(unaff_x20,0);
  puVar5 = &UNK_1105a6b68;
  func_0x000107c613fc(&UNK_1105a6b68,0x18,7);
  func_0x000107c61614(puVar5 + 0x10);
  puVar6 = &UNK_1105a6b90;
  func_0x000107c613fc(&UNK_1105a6b90,0x20,7);
  *(undefined **)(puVar6 + 0x10) = puVar5;
  *(undefined **)(puVar6 + 0x18) = puVar4;
  pcStack_50 = FUN_102b96e10;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_1105a6ba8;
  puStack_48 = puVar6;
  func_0x000107c60bc4(&puStack_70);
  puVar5 = puStack_48;
  func_0x000107c61174(puVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c5fb28(unaff_x20,uVar9);
  func_0x000107c6142c(uVar9);
  func_0x000100162d98(unaff_x20 + 0x20,ppuVar7);
  func_0x000107c61170(puVar4);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61574(unaff_x20);
  func_0x000107c6142c(uVar8);
  return;
}



/* Entry: 102b93d6c; end: 102b93e2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b93d6c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + _DAT_112efad98);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 != 0) {
      func_0x000107c5c2e0();
      func_0x000107c615e8(lVar1);
    }
    lVar1 = param_1 + _DAT_112efada0;
    lVar2 = lVar1;
    func_0x000107c61618();
    if (lVar2 != 0) {
      lVar1 = *(long *)(lVar1 + 8);
      func_0x000107c614f0();
      (**(code **)(lVar1 + 8))();
      func_0x000107c615e8(lVar2);
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102b93e30; end: 102b93e7b; -[_TtC19SpotlightQuickShare33SpotlightQuickShareViewController initWithNibName:bundle:] */

void FUN_102b93e30(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpotlightQuickShare.SpotlightQuickShareViewController",0x35,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b93e5c);
  (*pcVar1)();
}



/* Entry: 102b93e7c; end: 102b93f3b;  */

void FUN_102b93e7c(ulong param_1,ulong param_2,long param_3)

{
  undefined1 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [24];
  
  uVar2 = param_1;
  func_0x000107c444fc();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c5faec();
  func_0x000107c61170(uVar2);
  func_0x000107c6142c(param_2);
  uVar2 = uVar3 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar2 = param_2 >> 0x38 & 0xf;
  }
  if (uVar2 != 0) {
    func_0x000107c61428(param_3 + 0x10,auStack_58,1,0);
    uVar4 = *(undefined8 *)(param_3 + 0x10);
    *(ulong *)(param_3 + 0x10) = param_1;
    uVar1 = *(undefined1 *)(param_3 + 0x18);
    *(undefined1 *)(param_3 + 0x18) = 1;
    func_0x000102b96e3c(uVar4,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_retain_11034d2d8)(param_1);
    return;
  }
  return;
}



/* Entry: 102b93f3c; end: 102b93f8f;  */

void FUN_102b93f3c(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 *in_x5;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(in_x5,auStack_38,1,0);
  uVar2 = *in_x5;
  *in_x5 = param_1;
  uVar1 = *(undefined1 *)(in_x5 + 1);
  *(undefined1 *)(in_x5 + 1) = 0;
  func_0x000102b96e3c(uVar2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_1);
  return;
}



/* Entry: 102b93f90; end: 102b9408f;  */

void FUN_102b93f90(long param_1)

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
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102b94084);
    (*pcVar1)();
  }
  lVar2 = lVar4;
  func_0x000107c61558();
  if (((int)lVar2 == 0) ||
     (uVar3 = *(ulong *)(lVar4 + 0x18) >> 1, (long)uVar3 < (long)(lVar6 + uVar5))) {
    FUN_102b9567c();
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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102b94088);
      (*pcVar1)();
    }
  }
  else {
    if (uVar3 - *(long *)(lVar4 + 0x10) < uVar5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102b9408c);
      (*pcVar1)();
    }
    func_0x000107c6140c(lVar4 + *(long *)(lVar4 + 0x10) * 0x10 + 0x20,param_1 + 0x20,uVar5,
                        &UNK_1105a6b48);
    func_0x000107c6142c(param_1);
    if (uVar5 != 0) {
      if (SCARRY8(*(long *)(lVar4 + 0x10),uVar5)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102b94090);
        (*pcVar1)();
      }
      *(ulong *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + uVar5;
    }
  }
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 102b94090; end: 102b9426f; -[_TtC19SpotlightQuickShare33SpotlightQuickShareViewController operaViewDidSendEvent:page:params:] */

/* WARNING: Possible PIC construction at 0x000102b94128: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b9412c) */

void FUN_102b94090(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  func_0x000107c5faec(param_3);
  if (param_5 != 0) {
    func_0x000107c5f9e8(param_5,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                        PTR___sSSSHsWP_11034da90);
  }
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_102b96d44(param_3,param_2);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102b94270; end: 102b942f3;  */

void FUN_102b94270(undefined8 *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (*(char *)(param_1 + 1) != -1) {
    func_0x000107c61170(*param_1);
  }
  iVar1 = *(int *)(param_2 + 0x18);
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar4 = *(long *)(lVar2 + -8);
  lVar3 = (long)param_1 + (long)iVar1;
  (**(code **)(lVar4 + 0x30))(lVar3,1,lVar2);
  if ((int)lVar3 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000102b942f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))((long)param_1 + (long)iVar1,lVar2);
  return;
}



/* Entry: 102b942f4; end: 102b943f3;  */

undefined8 * FUN_102b942f4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  cVar1 = *(char *)(param_2 + 1);
  if (cVar1 == -1) {
    *param_1 = *param_2;
    *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  }
  else {
    *param_1 = *param_2;
    *(char *)(param_1 + 1) = cVar1;
    func_0x000107c61174();
  }
  *(undefined1 *)((long)param_1 + 9) = *(undefined1 *)((long)param_2 + 9);
  lVar4 = (long)*(int *)(param_3 + 0x18);
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar5 = *(long *)(lVar2 + -8);
  lVar3 = (long)param_2 + lVar4;
  (**(code **)(lVar5 + 0x30))(lVar3,1,lVar2);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar5 + 0x10))((long)param_1 + lVar4,(long)param_2 + lVar4,lVar2);
    (**(code **)(lVar5 + 0x38))((long)param_1 + lVar4,0,1,lVar2);
  }
  else {
    lVar3 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    func_0x000107c610b4((long)param_1 + lVar4,(long)param_2 + lVar4,
                        *(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  }
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  return param_1;
}



/* Entry: 102b943f4; end: 102b9458f;  */

undefined8 * FUN_102b943f4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  char cVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  
  cVar1 = *(char *)(param_2 + 1);
  if (*(char *)(param_1 + 1) == -1) {
    if (cVar1 == -1) {
      uVar6 = *param_2;
      *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
      *param_1 = uVar6;
    }
    else {
      *param_1 = *param_2;
      *(char *)(param_1 + 1) = cVar1;
      func_0x000107c61174();
    }
  }
  else if (cVar1 == -1) {
    FUN_102b94590(param_1);
    uVar2 = *(undefined1 *)(param_2 + 1);
    *param_1 = *param_2;
    *(undefined1 *)(param_1 + 1) = uVar2;
  }
  else {
    uVar6 = *param_1;
    *param_1 = *param_2;
    *(char *)(param_1 + 1) = cVar1;
    func_0x000107c61174();
    func_0x000107c61170(uVar6);
  }
  *(undefined1 *)((long)param_1 + 9) = *(undefined1 *)((long)param_2 + 9);
  lVar7 = (long)*(int *)(param_3 + 0x18);
  lVar3 = 0;
  func_0x000107c5ede0();
  lVar8 = *(long *)(lVar3 + -8);
  pcVar9 = *(code **)(lVar8 + 0x30);
  lVar4 = (long)param_1 + lVar7;
  (*pcVar9)(lVar4,1,lVar3);
  lVar5 = (long)param_2 + lVar7;
  (*pcVar9)(lVar5,1,lVar3);
  if ((int)lVar4 == 0) {
    if ((int)lVar5 == 0) {
      (**(code **)(lVar8 + 0x18))((long)param_1 + lVar7,(long)param_2 + lVar7,lVar3);
      goto LAB_102b94550;
    }
    (**(code **)(lVar8 + 8))((long)param_1 + lVar7,lVar3);
  }
  else if ((int)lVar5 == 0) {
    (**(code **)(lVar8 + 0x10))((long)param_1 + lVar7,(long)param_2 + lVar7,lVar3);
    (**(code **)(lVar8 + 0x38))((long)param_1 + lVar7,0,1,lVar3);
    goto LAB_102b94550;
  }
  lVar4 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  func_0x000107c610b4((long)param_1 + lVar7,(long)param_2 + lVar7,
                      *(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
LAB_102b94550:
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  return param_1;
}



/* Entry: 102b94590; end: 102b945b7;  */

undefined8 * FUN_102b94590(undefined8 *param_1)

{
  func_0x000107c61170(*param_1);
  return param_1;
}



/* Entry: 102b945b8; end: 102b9468f;  */

undefined8 * FUN_102b945b8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = *param_2;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
  lVar3 = (long)*(int *)(param_3 + 0x18);
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar4 = *(long *)(lVar1 + -8);
  lVar2 = (long)param_2 + lVar3;
  (**(code **)(lVar4 + 0x30))(lVar2,1,lVar1);
  if ((int)lVar2 == 0) {
    (**(code **)(lVar4 + 0x20))((long)param_1 + lVar3,(long)param_2 + lVar3,lVar1);
    (**(code **)(lVar4 + 0x38))((long)param_1 + lVar3,0,1,lVar1);
  }
  else {
    lVar2 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    func_0x000107c610b4((long)param_1 + lVar3,(long)param_2 + lVar3,
                        *(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  }
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  return param_1;
}



/* Entry: 102b94690; end: 102b947f3;  */

undefined8 * FUN_102b94690(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  
  if (*(char *)(param_1 + 1) == -1) {
LAB_102b946ec:
    *param_1 = *param_2;
    *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  }
  else {
    cVar1 = *(char *)(param_2 + 1);
    if (cVar1 == -1) {
      FUN_102b94590(param_1);
      goto LAB_102b946ec;
    }
    uVar2 = *param_1;
    *param_1 = *param_2;
    *(char *)(param_1 + 1) = cVar1;
    func_0x000107c61170(uVar2);
  }
  *(undefined1 *)((long)param_1 + 9) = *(undefined1 *)((long)param_2 + 9);
  lVar6 = (long)*(int *)(param_3 + 0x18);
  lVar3 = 0;
  func_0x000107c5ede0();
  lVar7 = *(long *)(lVar3 + -8);
  pcVar8 = *(code **)(lVar7 + 0x30);
  lVar4 = (long)param_1 + lVar6;
  (*pcVar8)(lVar4,1,lVar3);
  lVar5 = (long)param_2 + lVar6;
  (*pcVar8)(lVar5,1,lVar3);
  if ((int)lVar4 == 0) {
    if ((int)lVar5 == 0) {
      (**(code **)(lVar7 + 0x28))((long)param_1 + lVar6,(long)param_2 + lVar6,lVar3);
      goto LAB_102b947b4;
    }
    (**(code **)(lVar7 + 8))((long)param_1 + lVar6,lVar3);
  }
  else if ((int)lVar5 == 0) {
    (**(code **)(lVar7 + 0x20))((long)param_1 + lVar6,(long)param_2 + lVar6,lVar3);
    (**(code **)(lVar7 + 0x38))((long)param_1 + lVar6,0,1,lVar3);
    goto LAB_102b947b4;
  }
  lVar4 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  func_0x000107c610b4((long)param_1 + lVar6,(long)param_2 + lVar6,
                      *(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
LAB_102b947b4:
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  return param_1;
}



/* Entry: 102b947f4; end: 102b9480b;  */

void FUN_102b947f4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 102b9480c; end: 102b94843;  */

void FUN_102b9480c(undefined8 param_1)

{
  if (lRam0000000112efaec8 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e71cb48);
  return;
}



/* Entry: 102b94844; end: 102b948cb;  */

void FUN_102b94844(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_40 = &UNK_10db2ac08;
  puStack_38 = &UNK_10db2ac20;
  lVar1 = 0x13f;
  func_0x0001000ee934();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = PTR___sBi64_WV_11034d670 + 0x40;
    func_0x000107c6153c(param_1,0x100,4,&puStack_40,param_1 + 0x10);
  }
  return;
}



/* Entry: 102b948cc; end: 102b948d3;  */

void FUN_102b948cc(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*param_1);
  return;
}



/* Entry: 102b948d4; end: 102b9494b;  */

undefined8 * FUN_102b948d4(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 1);
  uVar2 = *param_1;
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = uVar1;
  func_0x000107c61174();
  func_0x000107c61170(uVar2);
  return param_1;
}



/* Entry: 102b9494c; end: 102b949fb;  */

int FUN_102b9494c(int *param_1,uint param_2)

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



/* Entry: 102b949fc; end: 102b94a73;  */

void FUN_102b949fc(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_102b97258(0,param_1,param_2);
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



/* Entry: 102b94a74; end: 102b94b03;  */

void FUN_102b94a74(void)

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
    FUN_102b94b28(0,uVar1 + 1,1,uVar3,0x112efad18,&PTR_PTR_1126c93b8,0x112efaf18,&UNK_10db2ac88);
    *unaff_x20 = uVar2;
  }
  return;
}



/* Entry: 102b94b04; end: 102b94b27;  */

ulong FUN_102b94b04(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102b94c88);
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
  FUN_102b94e04(uVar2,uVar4,0x112efad10,&PTR_PTR_1126dc748,0x112efaf08,&UNK_10db2ac58);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102b94c84);
      (*pcVar1)();
    }
    FUN_102b94e94(0,uVar2,uVar3 + 0x20,param_4,0x112efad10,&PTR_PTR_1126dc748);
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



/* Entry: 102b94b28; end: 102b94c87;  */

ulong FUN_102b94b28(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102b94c88);
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
  FUN_102b94e04(uVar2,uVar4,param_5,param_6,param_7,param_8);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102b94c84);
      (*pcVar1)();
    }
    FUN_102b94e94(0,uVar2,uVar3 + 0x20,param_4,param_5,param_6);
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



/* Entry: 102b94c88; end: 102b94e03;  */

undefined * FUN_102b94c88(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102b94e04);
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
    puVar4 = (undefined *)0x112efaf30;
    func_0x0001000285a8(0x112efaf30,&UNK_10db2acb8);
    lVar5 = 0;
    FUN_102b9480c();
    lVar10 = *(long *)(*(long *)(lVar5 + -8) + 0x48);
    uVar8 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
    uVar11 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
    func_0x000107c613fc(puVar4,uVar11 + lVar10 * uVar7,uVar8 | 7);
    puVar6 = puVar4;
    func_0x000107c610a4();
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102b94dfc);
      (*pcVar3)();
    }
    lVar5 = (long)puVar6 - uVar11;
    if (lVar5 == -0x8000000000000000 && lVar10 == -1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102b94e00);
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
  FUN_102b9480c();
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



/* Entry: 102b94e04; end: 102b94e93;  */

undefined *
FUN_102b94e04(long param_1,long param_2,undefined *param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    FUN_102b949fc(param_3,param_4,param_5,param_6);
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



/* Entry: 102b94e94; end: 102b9511f;  */

long FUN_102b94e94(long param_1,long param_2,long param_3,ulong param_4,undefined8 param_5,
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
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102b94fac);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102b94fb0);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_102b97258(0,param_5,param_6);
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
      FUN_102b97258(0,param_5,param_6);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102b94fa8);
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



/* Entry: 102b95120; end: 102b953bb;  */

void FUN_102b95120(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  lVar17 = *unaff_x20;
  lVar1 = *(long *)(lVar17 + 0x18);
  if (*(long *)(lVar17 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar6 = 0x112efaf20;
  func_0x0001000285a8(0x112efaf20,&UNK_10db2ac98);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,uVar6);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_102b95388:
    func_0x000107c61574(lVar17);
    *unaff_x20 = lVar7;
    return;
  }
  puVar16 = (ulong *)(lVar17 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar15 = uVar15 & *puVar16;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar19 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x102b953b8);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) != 0) {
            uVar15 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
            if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
              *puVar16 = -1L << (uVar15 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar17 + 0x10) = 0;
          }
          goto LAB_102b95388;
        }
        uVar15 = puVar16[lVar19];
        lVar10 = lVar10 + 1;
      } while (uVar15 == 0);
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar19 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar19 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar17 + 0x30) + uVar9 * 0x10);
    uVar6 = *puVar2;
    uVar3 = puVar2[1];
    uVar18 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + uVar9 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar3);
      func_0x000107c61174(uVar18);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    func_0x000107c5fb58(puVar8,uVar6,uVar3);
    func_0x000107c606a8();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar4 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x102b953bc);
          (*pcVar5)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar4 = (bool)(uVar13 == uVar9 | bVar4);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar6;
    puVar2[1] = uVar3;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 8) = uVar18;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}



/* Entry: 102b953bc; end: 102b9541b;  */

void FUN_102b953bc(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_102b95530();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 102b9541c; end: 102b9552f;  */

undefined *
FUN_102b9541c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102b95530);
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
    puVar3 = (undefined *)0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
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
    func_0x000107c6140c(puVar1,puVar4,uVar6,PTR___sSSN_11034da80);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*param_5)(param_4);
  return puVar3;
}



/* Entry: 102b95530; end: 102b9567b;  */

undefined *
FUN_102b95530(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,undefined *param_5,
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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102b9567c);
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
    FUN_102b949fc(param_5,param_6,param_7,param_8);
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
    FUN_102b97258(0,param_5,param_6);
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



/* Entry: 102b9567c; end: 102b95863;  */

undefined *
FUN_102b9567c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102b95790);
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
    puVar3 = (undefined *)0x112efaf28;
    func_0x0001000285a8(0x112efaf28,&UNK_10db2acb0);
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
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar3 + 0x20,param_4 + 0x20,uVar6,&UNK_1105a6b48);
  }
  else {
    if (puVar3 != param_4 || param_4 + 0x20 + uVar6 * 0x10 <= puVar3 + 0x20) {
      func_0x000107c610b8();
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*param_5)(param_4);
  return puVar3;
}



/* Entry: 102b95864; end: 102b95963;  */

undefined * FUN_102b95864(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(0x112efaf20,&UNK_10db2ac98);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c61174();
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102b95960);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102b95964);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar10 = puVar10 + 3;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 102b95964; end: 102b95cd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b95964(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  undefined1 *puVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_90;
  undefined4 auStack_88 [2];
  undefined1 auStack_80 [8];
  long lStack_78;
  long lStack_70;
  undefined *puStack_68;
  
  lVar3 = 0;
  func_0x000107c5ffd8();
  lStack_78 = *(long *)(lVar3 + -8);
  lStack_70 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_78 + 0x40));
  puVar11 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  func_0x000107c5ffc4();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar12 = (long)puVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  func_0x000107c5f824();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar3 = _DAT_112efad20;
  lVar13 = lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  FUN_102b8cd48();
  *(long *)(unaff_x20 + lVar3) = lVar5;
  lVar3 = _DAT_112efad28;
  puVar6 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c52b2c();
  func_0x000107c52610(puVar6);
  func_0x000107c59594(0x4020000000000000,puVar6);
  func_0x000107c61174();
  func_0x000107c5a050();
  func_0x000107c55b40(puVar6);
  func_0x000107c55b3c(0,0x4020000000000000,0,0x4020000000000000,puVar6);
  puVar7 = puVar6;
  func_0x000107c61170();
  *(undefined **)(unaff_x20 + lVar3) = puVar6;
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(unaff_x20 + _DAT_112efad30) = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar3 = _DAT_112efad38;
  func_0x000102b8ce00();
  *(undefined **)(unaff_x20 + lVar3) = puVar7;
  lVar3 = _DAT_112efad40;
  func_0x000102b8cf08();
  *(undefined **)(unaff_x20 + lVar3) = puVar7;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112efad48);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112efad50) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112efad58);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  *(undefined1 *)(unaff_x20 + _DAT_112efad60) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112efad68) = 2;
  *(undefined1 *)(unaff_x20 + _DAT_112efad70) = 2;
  *(undefined **)(unaff_x20 + _DAT_112efad80) = puVar6;
  lVar3 = unaff_x20 + _DAT_112efada0;
  *(undefined8 *)(lVar3 + 8) = 0;
  func_0x000107c61614(lVar3,0);
  *(undefined **)(unaff_x20 + _DAT_112efadb8) = puVar6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112efae28);
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c61614(unaff_x20 + _DAT_112efae30,0);
  lVar3 = _DAT_112efae38;
  uVar8 = 0;
  FUN_102b97258(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
  func_0x000107c5f80c(lVar13);
  puStack_68 = puVar6;
  func_0x000100029608();
  uVar9 = 0x112d4ac70;
  func_0x0001000285a8(0x112d4ac70,&UNK_10d911480);
  uVar10 = uVar9;
  func_0x00010002964c();
  func_0x000107c60264(lVar12,&puStack_68,uVar9,uVar10,lVar4,uVar8);
  (**(code **)(lStack_78 + 0x68))
            (puVar11,*(undefined4 *)
                      PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_11034f960
             ,lStack_70);
  uVar9 = 0xd00000000000002c;
  func_0x000107c5ffec(0xd00000000000002c,0x800000010f0f8560,lVar13,lVar12,puVar11,0);
  *(undefined8 *)(unaff_x20 + lVar3) = uVar9;
  lVar3 = _DAT_112efae40;
  puVar6 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar3) = puVar6;
  *(undefined4 *)(lVar13 + -8) = 0;
  *(undefined8 *)(lVar13 + -0x10) = 0x11b;
  func_0x000107c60450("Fatal error",0xb,2,0xd00000000000001d,0x800000010ef19c10,
                      "SpotlightQuickShare/SpotlightQuickShareViewController.swift",0x3b,2);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102b95cd8);
  (*pcVar2)();
}



/* Entry: 102b95cd8; end: 102b95eeb;  */

undefined * FUN_102b95cd8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61174();
  func_0x000107c5af88(puVar2);
  func_0x000107c61180();
  func_0x000107c52b50(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c5a050(puVar1);
  func_0x000107c53840(puVar1);
  puVar2 = puVar1;
  func_0x000107c4aba4(puVar1);
  func_0x000107c61180();
  func_0x000107c562fc();
  func_0x000107c61170(puVar2);
  puVar2 = puVar1;
  func_0x000107c4aba4(puVar1);
  func_0x000107c61180();
  func_0x000107c539d4(0x4034000000000000);
  func_0x000107c61170(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  lVar3 = 0x112d360b8;
  FUN_102b949fc(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                &UNK_10d9011a0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x18) = 5;
  *(undefined8 *)(lVar3 + 0x10) = 2;
  puVar4 = puVar1;
  func_0x000107c44d9c();
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c40290(0x4044000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  *(undefined **)(lVar3 + 0x20) = puVar5;
  puVar4 = puVar1;
  func_0x000107c5e308();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  puVar5 = puVar4;
  func_0x000107c40290(0x4044000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  *(undefined **)(lVar3 + 0x28) = puVar5;
  uVar6 = 0;
  FUN_102b97258(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  lVar7 = lVar3;
  func_0x000107c5fc48(lVar3,uVar6);
  func_0x000107c61574(lVar3);
  func_0x000107c3d048(puVar2);
  func_0x000107c61170(lVar7);
  return puVar1;
}



/* Entry: 102b95eec; end: 102b96283;  */

ulong FUN_102b95eec(ulong param_1,ulong param_2)

{
  long lVar1;
  char cVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  ulong uVar13;
  code *pcVar14;
  undefined *puVar15;
  undefined8 *puVar16;
  long lVar17;
  ulong uStack_c8;
  undefined1 auStack_b8 [24];
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  if (param_1 >> 0x3e == 0) {
    uStack_c8 = 0;
    FUN_102b9567c(0,*(undefined8 *)((param_1 & 0xffffffffffffff8) + 0x10),0,
                  PTR___swiftEmptyArrayStorage_11034f1c8,PTR__swift_bridgeObjectRelease_11034f258);
    uVar4 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar4 = param_1;
    }
    uVar13 = uVar4;
    func_0x000107c60480(uVar4);
    uStack_c8 = 0;
    FUN_102b9567c(0,uVar13 & ((long)uVar13 >> 0x3f ^ 0xffffffffffffffffU),0,
                  PTR___swiftEmptyArrayStorage_11034f1c8,PTR__swift_bridgeObjectRelease_11034f258);
    func_0x000107c60480();
  }
  if (uVar4 == 0) {
    return uStack_c8;
  }
  if ((long)uVar4 < 1) {
                    /* WARNING: Does not return */
    pcVar14 = (code *)SoftwareBreakpoint(1,0x102b96284);
    (*pcVar14)();
  }
  uVar11 = 0;
  puVar10 = (undefined *)0x0;
  lVar17 = 0;
  uVar13 = param_2;
  if ((param_1 & 0xc000000000000001) == 0) goto LAB_102b95f9c;
  do {
    lVar5 = lVar17;
    func_0x000102424840(lVar17,param_1);
    puVar7 = puVar10;
    while( true ) {
      puVar6 = &UNK_1105a71f8;
      func_0x000107c613fc(&UNK_1105a71f8,0x19,7);
      pcVar14 = (code *)0x0;
      puVar16 = (undefined8 *)(puVar6 + 0x10);
      *puVar16 = 0;
      puVar6[0x18] = 0xff;
      puVar15 = (undefined *)0x0;
      if ((uVar13 & 1) != 0) {
        func_0x000107c6157c(puVar6);
        pcVar14 = FUN_102b9722c;
        puVar15 = puVar6;
      }
      puVar10 = &UNK_1105a7220;
      func_0x000107c613fc(&UNK_1105a7220,0x18,7);
      *(undefined8 **)(puVar10 + 0x10) = puVar16;
      func_0x000100d1cbe4(uVar11,puVar7);
      puVar7 = &UNK_1105a7248;
      func_0x000107c613fc(&UNK_1105a7248,0x20,7);
      *(undefined8 *)(puVar7 + 0x10) = 0x102b971e4;
      *(undefined **)(puVar7 + 0x18) = puVar10;
      puVar3 = PTR___NSConcreteStackBlock_11034bd00;
      pcStack_80 = FUN_102b971ec;
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0x42000000;
      puStack_90 = &UNK_10131cd50;
      puStack_88 = &UNK_1105a7260;
      ppuVar8 = &puStack_a0;
      puStack_78 = puVar7;
      func_0x000107c60bc4(ppuVar8);
      func_0x000107c61574(puStack_78);
      if ((uVar13 & 1) == 0) {
        ppuVar12 = (undefined **)0x0;
      }
      else {
        puVar7 = &UNK_1105a7298;
        func_0x000107c613fc(&UNK_1105a7298,0x20,7);
        *(code **)(puVar7 + 0x10) = pcVar14;
        *(undefined **)(puVar7 + 0x18) = puVar15;
        pcStack_80 = (code *)0x102b9720c;
        puStack_a0 = puVar3;
        uStack_98 = 0x42000000;
        puStack_90 = &UNK_10131ce88;
        puStack_88 = &UNK_1105a72b0;
        ppuVar12 = &puStack_a0;
        puStack_78 = puVar7;
        func_0x000107c60bc4(ppuVar12);
        func_0x000107c61574(puStack_78);
      }
      func_0x000107c4c72c(lVar5);
      func_0x000107c60bd0(ppuVar12);
      func_0x000107c60bd0(ppuVar8);
      func_0x000107c61428(puVar16,auStack_b8,0,0);
      cVar2 = puVar6[0x18];
      if (cVar2 == -1) {
        func_0x000100d1cbe4(pcVar14,puVar15);
        func_0x000107c61574(puVar6);
        func_0x000107c61170(lVar5);
      }
      else {
        uVar11 = *(undefined8 *)(puVar6 + 0x10);
        uVar13 = *(ulong *)(uStack_c8 + 0x10);
        uVar9 = *(ulong *)(uStack_c8 + 0x18);
        func_0x000107c61174(uVar11);
        func_0x000107c61174();
        if (uVar9 >> 1 <= uVar13) {
          uVar9 = (ulong)(1 < uVar9);
          FUN_102b9567c(uVar9,uVar13 + 1,1,uStack_c8,PTR__swift_bridgeObjectRelease_11034f258);
          uStack_c8 = uVar9;
        }
        *(ulong *)(uStack_c8 + 0x10) = uVar13 + 1;
        lVar1 = uStack_c8 + uVar13 * 0x10;
        *(undefined8 *)(lVar1 + 0x20) = uVar11;
        *(char *)(lVar1 + 0x28) = cVar2;
        func_0x000107c61170(lVar5);
        func_0x000100d1cbe4(pcVar14,puVar15);
        func_0x000102b96e3c(uVar11,cVar2);
        func_0x000107c61574(puVar6);
        uVar13 = param_2 & 0xffffffff;
      }
      if (uVar4 - 1 == lVar17) {
        func_0x000107c61574(puVar10);
        return uStack_c8;
      }
      lVar17 = lVar17 + 1;
      uVar11 = 0x102b971e4;
      if ((param_1 & 0xc000000000000001) != 0) break;
LAB_102b95f9c:
      lVar5 = *(long *)(param_1 + lVar17 * 8 + 0x20);
      func_0x000107c61174();
      puVar7 = puVar10;
    }
  } while( true );
}



/* Entry: 102b96284; end: 102b965bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_102b96284(undefined8 *param_1,ulong param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  
  puVar2 = param_1;
  uVar8 = param_2;
  FUN_102b95cd8();
  func_0x000107c5a378();
  puVar3 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  func_0x000107c610f8(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x000107c48c2c();
  func_0x000107c61174(puVar2);
  func_0x000107c61174();
  func_0x000107c3d6fc();
  if (*(char *)((long)param_1 + 9) == '\x01') {
    uVar4 = 0xd000000000000022;
    func_0x000107c5fadc(0xd000000000000022,0x800000010f0f86c0);
    func_0x000107c520f4(puVar2);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(uVar4);
    puVar9 = puVar2;
    func_0x000107c61174(puVar2);
    func_0x000107c55528();
    func_0x000107c52100(puVar9);
    func_0x000107c61170(puVar9);
    puVar7 = (undefined8 *)PTR_PTR_1126b0c40;
    func_0x000107c61168();
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c5af88();
    func_0x000107c61180();
    func_0x000107c45098(0x403c000000000000,0x403c000000000000);
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    if (puVar7 != (undefined8 *)0x0) {
      func_0x000107c53840(puVar9);
      puVar6 = puVar9;
      goto LAB_102b9656c;
    }
  }
  else {
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar2);
    puVar9 = (undefined8 *)*param_1;
    bVar1 = *(byte *)(param_1 + 1);
    uVar10 = (ulong)bVar1;
    puVar6 = puVar2;
    func_0x000107c61174(puVar2);
    if (bVar1 == 0xff) {
      func_0x000107c520fc(puVar6);
      func_0x000107c61170(0);
      func_0x000107c55528(puVar6);
      func_0x000107c52100(puVar6);
      puVar9 = puVar6;
      func_0x000107c61170(puVar6);
LAB_102b964f4:
      func_0x00010011df08();
      func_0x000107c61180();
    }
    else {
      puVar7 = puVar9;
      FUN_102b8cc6c(puVar9);
      uVar8 = uVar10;
      if (uVar10 == 0) {
        puVar7 = (undefined8 *)0x0;
      }
      else {
        func_0x000107c5fadc();
        func_0x000107c6142c(uVar10);
      }
      func_0x000107c520fc(puVar6);
      func_0x000107c61170(puVar7);
      func_0x000107c55528(puVar6);
      func_0x000107c52100(puVar6);
      func_0x000107c61170(puVar6);
      if (bVar1 == 1) {
        func_0x000107c61174(puVar9);
        func_0x000102b8f6f8();
        func_0x000102b96e3c(puVar9,1);
        goto LAB_102b96584;
      }
      func_0x000107c5d984();
      func_0x000107c61180();
      if (puVar9 == (undefined8 *)0x0) goto LAB_102b964f4;
    }
    puVar7 = puVar9;
    func_0x000107c5faec();
    func_0x000107c61170(puVar9);
    func_0x000107c5fadc(puVar7,uVar8);
    func_0x000107c6142c(uVar8);
    puVar9 = puVar7;
    func_0x000108ffe710(puVar7);
    func_0x000107c61180();
    func_0x000107c61170(puVar7);
    puVar7 = (undefined8 *)0x1;
    func_0x000108ffef38(1,puVar9,1);
    func_0x000107c61180();
LAB_102b9656c:
    func_0x000107c61170(puVar9);
    func_0x000107c55258(puVar6);
    puVar9 = puVar7;
  }
  func_0x000107c61170(puVar9);
LAB_102b96584:
  func_0x000107c3d5b4(*(undefined8 *)(param_2 + _DAT_112efad28));
  func_0x000107c61170(puVar3);
  return puVar2;
}



/* Entry: 102b965bc; end: 102b96653;  */

void FUN_102b965bc(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  func_0x000107c40cdc();
  func_0x000107c61180();
  if (param_1 != 0) {
    uVar1 = param_1;
    func_0x000107c4f3b8();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    if (uVar1 != 0) {
      uVar2 = uVar1;
      func_0x000107c5faec();
      func_0x000107c61170(uVar1);
      uVar1 = uVar2 & 0xffffffffffff;
      if ((param_2 & 0x2000000000000000) != 0) {
        uVar1 = param_2 >> 0x38 & 0xf;
      }
      if (uVar1 == 0) {
        func_0x000107c6142c(param_2);
      }
    }
  }
  return;
}



/* Entry: 102b96654; end: 102b96d43;  */

ulong FUN_102b96654(long param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  undefined *puVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 *puVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  char *pcVar19;
  ulong uVar20;
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  ulong uStack_70;
  undefined *puStack_68;
  
  puStack_68 = PTR___swiftEmptySetSingleton_11034f1d8;
  lVar18 = *(long *)(param_1 + 0x10);
  if (lVar18 != 0) {
    pcVar19 = (char *)(param_1 + 0x28);
    lVar6 = param_2;
    lVar17 = lVar18;
    do {
      lVar7 = *(long *)(pcVar19 + -8);
      cVar2 = *pcVar19;
      func_0x000107c61174();
      lVar5 = lVar7;
      if (cVar2 == '\x01') {
        func_0x000107c444fc();
        func_0x000107c61180();
        lVar12 = lVar6;
LAB_102b966a8:
        lVar6 = lVar5;
        func_0x000107c5faec();
        func_0x000107c61170(lVar5);
        func_0x000100403b00(auStack_b8,lVar6,lVar12);
        func_0x000107c61170(lVar7);
        func_0x000107c6142c(uStack_b0);
      }
      else {
        func_0x000107c5d984();
        func_0x000107c61180();
        lVar12 = lVar6;
        if (lVar5 != 0) goto LAB_102b966a8;
        func_0x000107c61170(lVar7);
      }
      pcVar19 = pcVar19 + 0x10;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
  }
  lVar17 = *(long *)(param_2 + 0x10);
  if (SCARRY8(lVar18,lVar17)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x102b96984);
    (*pcVar4)();
  }
  uVar13 = lVar18 + lVar17 & (lVar18 + lVar17 >> 0x3f ^ 0xffffffffffffffffU);
  uVar8 = 0;
  FUN_102b9567c(0,uVar13,0,PTR___swiftEmptyArrayStorage_11034f1c8,
                PTR__swift_bridgeObjectRelease_11034f258);
  uStack_70 = uVar8;
  func_0x000107c61434(param_1);
  FUN_102b93f90();
  if (lVar17 != 0) {
    lVar18 = 0;
    do {
      puVar1 = (ulong *)(param_2 + 0x20 + lVar18 * 0x10);
      uVar16 = *puVar1;
      cVar2 = (char)puVar1[1];
      uVar8 = uVar16;
      func_0x000107c61174();
      uVar15 = uVar8;
      if (cVar2 == '\x01') {
        func_0x000107c444fc();
        func_0x000107c61180();
        uVar14 = uVar13;
LAB_102b967dc:
        uVar9 = uVar15;
        func_0x000107c5faec();
        func_0x000107c61170(uVar15);
        puVar3 = puStack_68;
        if (*(long *)(puStack_68 + 0x10) != 0) {
          func_0x000107c6068c(auStack_b8,*(undefined8 *)(puStack_68 + 0x28));
          puVar10 = auStack_b8;
          func_0x000107c5fb58(puVar10,uVar9,uVar14);
          func_0x000107c606a8();
          uVar15 = -1L << ((ulong)(byte)puVar3[0x20] & 0x3f);
          uVar20 = (ulong)puVar10 & (uVar15 ^ 0xffffffffffffffff);
          if ((*(ulong *)(puVar3 + (uVar20 >> 6) * 8 + 0x38) >> (uVar20 & 0x3f) & 1) != 0) {
            do {
              puVar1 = (ulong *)(*(long *)(puVar3 + 0x30) + uVar20 * 0x10);
              uVar11 = *puVar1;
              uVar13 = puVar1[1];
              if ((uVar11 == uVar9 && uVar13 == uVar14) ||
                 (func_0x000107c605b8(uVar11,uVar13,uVar9,uVar14,0), (uVar11 & 1) != 0)) {
                func_0x000107c6142c(uVar14);
                func_0x000107c61170(uVar8);
                goto LAB_102b9678c;
              }
              uVar20 = uVar20 + 1 & ~uVar15;
            } while ((*(ulong *)(puVar3 + (uVar20 >> 6) * 8 + 0x38) >> (uVar20 & 0x3f) & 1) != 0);
          }
        }
        uVar13 = uStack_70;
        func_0x000107c61174(uVar8);
        uVar15 = uVar13;
        func_0x000107c61558();
        uVar20 = uVar13;
        if ((uVar15 & 1) == 0) {
          uVar20 = 0;
          FUN_102b9567c(0,*(long *)(uVar13 + 0x10) + 1,1,uVar13,
                        PTR__swift_bridgeObjectRelease_11034f258);
        }
        uVar13 = *(ulong *)(uVar20 + 0x10);
        uVar15 = uVar20;
        if (*(ulong *)(uVar20 + 0x18) >> 1 <= uVar13) {
          uVar15 = (ulong)(1 < *(ulong *)(uVar20 + 0x18));
          FUN_102b9567c(uVar15,uVar13 + 1,1,uVar20,PTR__swift_bridgeObjectRelease_11034f258);
        }
        *(ulong *)(uVar15 + 0x10) = uVar13 + 1;
        lVar6 = uVar15 + uVar13 * 0x10;
        *(ulong *)(lVar6 + 0x20) = uVar16;
        *(char *)(lVar6 + 0x28) = cVar2;
        uStack_70 = uVar15;
        func_0x000100403b00(auStack_b8,uVar9,uVar14);
        func_0x000107c61170(uVar8);
        func_0x000107c6142c(uStack_b0);
        uVar13 = uVar9;
      }
      else {
        func_0x000107c5d984();
        func_0x000107c61180();
        uVar14 = uVar13;
        if (uVar15 != 0) goto LAB_102b967dc;
        func_0x000107c61170(uVar8);
      }
LAB_102b9678c:
      lVar18 = lVar18 + 1;
    } while (lVar18 != lVar17);
  }
  func_0x000107c6142c(puStack_68);
  return uStack_70;
}



/* Entry: 102b96d44; end: 102b96e0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b96d44(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  
  plVar2 = param_1;
  func_0x000103bb7e3c();
  plVar1 = (long *)*plVar2;
  if ((plVar1 != param_1 || plVar2[1] != param_2) &&
     (func_0x000107c605b8(plVar1,plVar2[1],param_1,param_2,0), ((ulong)plVar1 & 1) == 0)) {
    func_0x000103bb9f54();
    plVar2 = (long *)*plVar1;
    if ((plVar2 != param_1 || plVar1[1] != param_2) &&
       (func_0x000107c605b8(plVar2,plVar1[1],param_1,param_2,0), ((ulong)plVar2 & 1) == 0)) {
      return;
    }
  }
  lVar4 = unaff_x20 + _DAT_112efada0;
  lVar3 = lVar4;
  func_0x000107c61618();
  if (lVar3 == 0) {
    return;
  }
  lVar4 = *(long *)(lVar4 + 8);
  func_0x000107c614f0();
  (**(code **)(lVar4 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar3);
  return;
}



/* Entry: 102b96e10; end: 102b96e53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b96e10(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar1 + 0x10,auStack_48,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + _DAT_112efad98);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 != 0) {
      func_0x000107c5c2e0();
      func_0x000107c615e8(lVar2);
    }
    lVar2 = lVar1 + _DAT_112efada0;
    lVar3 = lVar2;
    func_0x000107c61618();
    if (lVar3 != 0) {
      lVar2 = *(long *)(lVar2 + 8);
      func_0x000107c614f0();
      (**(code **)(lVar2 + 8))();
      func_0x000107c615e8(lVar3);
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 102b96e54; end: 102b96ecb;  */

void FUN_102b96e54(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102b96ecc; end: 102b96eeb;  */

void FUN_102b96ecc(undefined8 param_1,char param_2)

{
  if (param_2 != -1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_retain_11034d2d8)();
    return;
  }
  return;
}



/* Entry: 102b96eec; end: 102b96fb3;  */

undefined8 FUN_102b96eec(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_102b9480c();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 102b96fb4; end: 102b96fc3;  */

void FUN_102b96fb4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_50 [48];
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6088c(auStack_50,0x3feccccccccccccd,0x3feccccccccccccd);
  func_0x000107c5a03c(uVar1,param_2,auStack_50);
  return;
}



/* Entry: 102b96fc4; end: 102b96ff7;  */

void FUN_102b96fc4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_40 = 0x3ff0000000000000;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0x3ff0000000000000;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x000107c5a03c(*(undefined8 *)(unaff_x20 + 0x10),param_2,&uStack_40);
  return;
}



/* Entry: 102b96ff8; end: 102b9700f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b96ff8(void)

{
  ulong *puVar1;
  char cVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *puVar9;
  long extraout_x8;
  ulong uVar10;
  long unaff_x20;
  long lVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong uStack_80;
  char acStack_78 [24];
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  uVar8 = *(ulong *)(unaff_x20 + 0x18);
  uVar10 = *(ulong *)(unaff_x20 + 0x20);
  puVar1 = *(ulong **)(unaff_x20 + 0x28);
  lVar4 = 0;
  FUN_102b9480c();
  lVar11 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar4 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar13 = (ulong *)((long)&uStack_80 + lVar4);
  func_0x000107c61428(lVar5 + 0x10,acStack_78,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61618();
  if (lVar5 == 0) {
    return;
  }
  if (*(long *)(*(long *)(lVar5 + _DAT_112efadb8) + 0x10) <= (long)uVar8) goto LAB_102b90fb0;
  if ((long)uVar8 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102b90f80);
    (*pcVar3)();
  }
  puVar9 = puVar13;
  FUN_102b96eec(*(long *)(lVar5 + _DAT_112efadb8) +
                ((ulong)*(byte *)(lVar11 + 0x50) + 0x20 &
                ((ulong)*(byte *)(lVar11 + 0x50) ^ 0xffffffffffffffff)) +
                *(long *)(lVar11 + 0x48) * uVar8);
  cVar2 = acStack_78[lVar4];
  if ((cVar2 == '\x01') || (cVar2 == -1)) {
    func_0x000107c61170(lVar5);
    func_0x000102b96f30(puVar13);
    return;
  }
  uVar12 = *puVar13;
  uVar7 = uVar12;
  func_0x000107c61174();
  func_0x000102b96f30(puVar13);
  func_0x000107c5d984();
  func_0x000107c61180();
  if (uVar7 == 0) {
LAB_102b90ee4:
    func_0x000102b96e3c(uVar12,cVar2);
  }
  else {
    uVar6 = uVar7;
    func_0x000107c5faec();
    func_0x000107c61170(uVar7);
    if (uVar6 == uVar10 && puVar9 == puVar1) {
      func_0x000107c6142c(puVar9);
    }
    else {
      func_0x000107c605b8(uVar6,puVar9,uVar10,puVar1,0);
      func_0x000107c6142c(puVar9);
      if ((uVar6 & 1) == 0) goto LAB_102b90ee4;
    }
    lVar4 = _DAT_112efad30;
    uVar10 = *(ulong *)(lVar5 + _DAT_112efad30);
    if (uVar10 >> 0x3e == 0) {
      uVar7 = *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar7 = uVar10 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar10) {
        uVar7 = uVar10;
      }
      func_0x000107c60480();
    }
    if ((long)uVar8 < (long)uVar7) {
      uVar10 = *(ulong *)(lVar5 + lVar4);
      if ((uVar10 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102b90ffc);
          (*pcVar3)();
        }
        uVar8 = *(ulong *)(uVar10 + uVar8 * 8 + 0x20);
        func_0x000107c61174(uVar8);
      }
      else {
        func_0x000107c61434(uVar10);
        func_0x0001020b13f8(uVar8,uVar10);
        func_0x000107c6142c(uVar10);
      }
      func_0x000107c55258(uVar8);
      func_0x000102b96e3c(uVar12,cVar2);
      func_0x000107c61170(uVar8);
    }
    else {
      func_0x000102b96e3c(uVar12,cVar2);
    }
  }
LAB_102b90fb0:
  func_0x000107c61170();
  return;
}



/* Entry: 102b97010; end: 102b97043;  */

void FUN_102b97010(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102b97044; end: 102b97063;  */

void FUN_102b97044(ulong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c61428(lVar4 + 0x10,auStack_58,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    if ((param_1 & 1) == 0) {
      FUN_102b906b8(uVar5,uVar1,uVar3,uVar2);
    }
    func_0x000107c61170(lVar4);
  }
  return;
}



/* Entry: 102b97064; end: 102b97137;  */

undefined8 FUN_102b97064(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_102b9480c();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 102b97138; end: 102b97193;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b97138(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar3 = lVar1 + _DAT_112efada0;
    lVar2 = lVar3;
    func_0x000107c61618();
    if (lVar2 != 0) {
      lVar3 = *(long *)(lVar3 + 8);
      func_0x000107c614f0();
      (**(code **)(lVar3 + 8))();
      func_0x000107c615e8(lVar2);
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 102b97194; end: 102b971db;  */

void FUN_102b97194(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  uVar1 = 0;
  FUN_102b97258(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
  param_1[3] = uVar1;
  *param_1 = param_2;
  return;
}



/* Entry: 102b971dc; end: 102b971eb;  */

void FUN_102b971dc(undefined *param_1)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  uint uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long *plVar12;
  ulong uVar13;
  long unaff_x20;
  undefined *puVar14;
  undefined *puVar15;
  undefined1 auStack_a0 [32];
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar5 + 0x10,auStack_78,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61618();
  if (lVar5 != 0) {
    func_0x000107c615f0(param_1);
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x000107c61168(PTR__OBJC_CLASS___NSArray_1126ae530);
    puVar7 = param_1;
    func_0x000107c6148c(param_1,puVar6);
    if (puVar7 == (undefined *)0x0) {
      func_0x000107c615e8(param_1);
      puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x000107c610f8();
      func_0x000107c453e4();
    }
    puVar8 = puVar7;
    func_0x000107c40808();
    puVar6 = PTR___sypN_11034f1a8;
    if ((long)puVar8 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102b8e038);
      (*pcVar3)();
    }
    puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar8 == (undefined *)0x0) {
      uVar4 = 0;
    }
    else {
      puVar15 = (undefined *)0x0;
      do {
        puVar10 = puVar7;
        func_0x000107c4d9a0(puVar7);
        func_0x000107c61180();
        func_0x000107c60234(auStack_a0);
        func_0x000107c615e8(puVar10);
        uVar11 = 0;
        FUN_102b97258(0,0x112d726d8,&PTR_PTR_1126b5438);
        plVar12 = &lStack_80;
        func_0x000107c6147c(plVar12,auStack_a0,puVar6 + 8,uVar11,6);
        lVar2 = lStack_80;
        uVar4 = (uint)plVar12;
        if ((((ulong)plVar12 & 1) != 0) && (lStack_80 != 0)) {
          puVar10 = puVar14;
          func_0x000107c61550();
          if (((int)puVar10 == 0) || (((long)puVar14 < 0 || (((ulong)puVar14 >> 0x3e & 1) != 0)))) {
            if ((ulong)puVar14 >> 0x3e == 0) {
              puVar9 = *(undefined **)(((ulong)puVar14 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar9 = (undefined *)((ulong)puVar14 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puVar14) {
                puVar9 = puVar14;
              }
              func_0x000107c60480(puVar9);
            }
            puVar10 = (undefined *)0x0;
            FUN_102b94b28(0,puVar9 + 1,1,puVar14,0x112d726d8,&PTR_PTR_1126b5438,0x112efaf38,
                          &UNK_10db2acc0);
            puVar14 = puVar10;
          }
          uVar13 = (ulong)puVar14 & 0xffffffffffffff8;
          uVar1 = *(ulong *)(uVar13 + 0x10);
          if (*(ulong *)(uVar13 + 0x18) >> 1 <= uVar1) {
            puVar10 = (undefined *)(ulong)(1 < *(ulong *)(uVar13 + 0x18));
            FUN_102b94b28(puVar10,uVar1 + 1,1,puVar14,0x112d726d8,&PTR_PTR_1126b5438,0x112efaf38,
                          &UNK_10db2acc0);
            uVar13 = (ulong)puVar10 & 0xffffffffffffff8;
            puVar14 = puVar10;
          }
          uVar4 = (uint)puVar10;
          *(ulong *)(uVar13 + 0x10) = uVar1 + 1;
          *(long *)(uVar13 + uVar1 * 8 + 0x20) = lVar2;
        }
        puVar15 = puVar15 + 1;
      } while (puVar8 != puVar15);
    }
    func_0x000102b8d020();
    puVar6 = puVar14;
    FUN_102b95eec(puVar14,uVar4 & 1);
    func_0x000107c6142c(puVar14);
    if (*(ulong *)(puVar6 + 0x10) == 0) {
      func_0x000107c6142c(puVar6);
      FUN_102b8e038();
      func_0x000107c61170(lVar5);
    }
    else {
      if (3 < *(ulong *)(puVar6 + 0x10)) {
        FUN_102b8f070(puVar6);
        func_0x000102b8f430();
        FUN_102b90028();
        func_0x000107c61170(lVar5);
        func_0x000107c61170(puVar7);
        func_0x000107c6142c(puVar6);
        return;
      }
      FUN_102b8e5a8();
      func_0x000107c61170(lVar5);
      func_0x000107c6142c(puVar6);
    }
    func_0x000107c61170(puVar7);
  }
  return;
}



/* Entry: 102b971ec; end: 102b9722b;  */

void FUN_102b971ec(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102b9722c; end: 102b97257;  */

void FUN_102b9722c(ulong param_1,ulong param_2)

{
  undefined1 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  uVar2 = param_1;
  func_0x000107c444fc();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c5faec();
  func_0x000107c61170(uVar2);
  func_0x000107c6142c(param_2);
  uVar2 = uVar3 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar2 = param_2 >> 0x38 & 0xf;
  }
  if (uVar2 != 0) {
    func_0x000107c61428(unaff_x20 + 0x10,auStack_58,1,0);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
    *(ulong *)(unaff_x20 + 0x10) = param_1;
    uVar1 = *(undefined1 *)(unaff_x20 + 0x18);
    *(undefined1 *)(unaff_x20 + 0x18) = 1;
    func_0x000102b96e3c(uVar4,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_retain_11034d2d8)(param_1);
    return;
  }
  return;
}



/* Entry: 102b97258; end: 102b972bb;  */

void FUN_102b97258(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102b972bc; end: 102b9739f;  */

void FUN_102b972bc(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000102b972d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 102b973a0; end: 102b9740b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b973a0(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_102b97794();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112efaf48) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 102b9740c; end: 102b97477;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b9740c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112efaf48) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102b97478; end: 102b974d7; -[_TtC50SpotlightRecommendTrayScopedFactoryServiceProvider38SCSpotlightRecommendTrayScopedServices init] */

void FUN_102b97478(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpotlightRecommendTrayScopedFactoryServiceProvider.SCSpotlightRecommendTrayScopedServices"
                      ,0x59,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b974a4);
  (*pcVar1)();
}



/* Entry: 102b974d8; end: 102b974e7; -[_TtC50SpotlightRecommendTrayScopedFactoryServiceProvider38SCSpotlightRecommendTrayScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b974d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112efaf48));
  return;
}



/* Entry: 102b974e8; end: 102b97553;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b974e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1105a74a0;
  func_0x000107c613fc(&UNK_1105a74a0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_102b9782c,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 102b97554; end: 102b975ef;  */

void FUN_102b97554(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1105a73b0;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1105a73b0;
  return;
}



/* Entry: 102b975f0; end: 102b97627;  */

void FUN_102b975f0(long *param_1)

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



/* Entry: 102b97628; end: 102b9762f;  */

undefined8 FUN_102b97628(void)

{
  return 0x1b;
}



/* Entry: 102b97630; end: 102b97763;  */

void FUN_102b97630(undefined8 *param_1)

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
  puVar1 = &UNK_1105a74c8;
  func_0x000107c613fc(&UNK_1105a74c8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_102b97804;
  func_0x00010058fa64(FUN_102b97804,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102b97764; end: 102b97793;  */

undefined ** FUN_102b97764(void)

{
  return &PTR_DAT_113066fe8;
}



/* Entry: 102b97794; end: 102b977b3;  */

void FUN_102b97794(void)

{
  func_0x000107c61168(&PTR_PTR_1128917a0);
  return;
}



/* Entry: 102b977b4; end: 102b97803;  */

undefined1  [16] FUN_102b977b4(void)

{
  return ZEXT816(0x1105a7400);
}



/* Entry: 102b97804; end: 102b9782b;  */

void FUN_102b97804(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 102b9782c; end: 102b9782f;  */

void FUN_102b9782c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102b97830; end: 102b97987;  */

void FUN_102b97830(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112efafb0,&UNK_10db2af40);
  puVar1 = &UNK_1105a7508;
  func_0x000107c613fc(&UNK_1105a7508,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(FUN_102b97988,puVar1);
  return;
}



/* Entry: 102b97988; end: 102b979a3;  */

/* WARNING: Possible PIC construction at 0x000102b97964: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b97968) */

void FUN_102b97988(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar2 = &UNK_1105a7550;
  func_0x000107c613fc(&UNK_1105a7550,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  *(undefined8 *)(puVar2 + 0x20) = uVar5;
  uVar3 = 0x112efafb8;
  func_0x0001000285a8(0x112efafb8,&UNK_10db2af88);
  func_0x000107c613fc();
  pcVar4 = FUN_102b97cf0;
  func_0x0001000841fc(FUN_102b97cf0,puVar2,uVar3);
  func_0x000100084214(&UNK_10db2af50,0x34,2);
  *param_1 = pcVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 102b979a4; end: 102b97cbb;  */

void FUN_102b979a4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined *puVar3;
  char *pcVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_68;
  
  uVar8 = *param_2;
  func_0x0001000285a8(0x112efafc0,&UNK_10db2af90);
  puVar1 = &uStack_68;
  uStack_68 = uVar8;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar2 = FUN_102b975f0;
  func_0x0001000823a8(FUN_102b975f0,0);
  func_0x000100082720("SCSpotlightRecommendTrayScopedServicesCleanupRelayServiceProvider",0x41,2);
  func_0x0001000285a8(0x112efafc8,&UNK_10db2afa0);
  puVar3 = &UNK_1105a7578;
  func_0x000107c613fc(&UNK_1105a7578,0x30,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = param_4;
  *(undefined8 *)(puVar3 + 0x28) = param_5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  uVar8 = 0x102b97cfc;
  func_0x0001000823a8(0x102b97cfc,puVar3);
  pcVar4 = "SpotlightRecommendTrayEntryPointWrapperServiceProvider";
  func_0x000100082720("SpotlightRecommendTrayEntryPointWrapperServiceProvider",0x36,2);
  FUN_102b98a14();
  func_0x000100082720("SpotlightRecommendTrayScopeGraphBridgeServicesServiceProvider",0x3d,2);
  func_0x0001000285a8(0x112efafd0,&UNK_10db2afa8);
  puVar3 = &UNK_1105a75a0;
  func_0x000107c613fc(&UNK_1105a75a0,0x30,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(code **)(puVar3 + 0x18) = pcVar2;
  *(undefined8 *)(puVar3 + 0x20) = uVar8;
  *(char **)(puVar3 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(pcVar2);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(pcVar4);
  pcVar5 = FUN_102b97d44;
  func_0x0001000823a8(FUN_102b97d44,puVar3);
  func_0x000100082720("SCSpotlightRecommendTrayScopeInitializationPluginRegistryServiceProvider",
                      0x48,2);
  func_0x0001000285a8(0x112efaf50,&UNK_10db2ace0);
  func_0x000107c6157c(pcVar5);
  uVar6 = 0x102b97d50;
  func_0x0001000823a8(0x102b97d50,pcVar5);
  func_0x000100082720("SCSpotlightRecommendTrayScopeInitializationServiceProvider",0x3a,2);
  func_0x0001000285a8(0x112efaf40,&UNK_10db2acd0);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x102b97d58;
  func_0x0001000823a8(0x102b97d58,uVar6);
  func_0x000100082720("SCSpotlightRecommendTrayScopedServicesServiceProvider",0x35,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar3 = &UNK_1105a75c8;
  func_0x000107c613fc(&UNK_1105a75c8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar7;
  *(code **)(puVar3 + 0x18) = pcVar2;
  func_0x000107c6157c(pcVar2);
  uVar7 = 0x102b97d60;
  func_0x0001000823a8(0x102b97d60,puVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(pcVar2);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(uVar6);
  func_0x000100082720("SCSpotlightRecommendTrayScopeEntryPointProvider",0x2f,2);
  *param_1 = uVar7;
  return;
}



/* Entry: 102b97cbc; end: 102b97cef;  */

void FUN_102b97cbc(void)

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



/* Entry: 102b97cf0; end: 102b97d07;  */

void FUN_102b97cf0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  char *pcVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uStack_68;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar9 = *param_2;
  func_0x0001000285a8(0x112efafc0,&UNK_10db2af90);
  puVar1 = &uStack_68;
  uStack_68 = uVar9;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar2 = FUN_102b975f0;
  func_0x0001000823a8(FUN_102b975f0,0);
  func_0x000100082720("SCSpotlightRecommendTrayScopedServicesCleanupRelayServiceProvider",0x41,2);
  func_0x0001000285a8(0x112efafc8,&UNK_10db2afa0);
  puVar3 = &UNK_1105a7578;
  func_0x000107c613fc(&UNK_1105a7578,0x30,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar4;
  *(undefined8 *)(puVar3 + 0x20) = uVar7;
  *(undefined8 *)(puVar3 + 0x28) = uVar8;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(uVar8);
  uVar4 = 0x102b97cfc;
  func_0x0001000823a8(0x102b97cfc,puVar3);
  pcVar5 = "SpotlightRecommendTrayEntryPointWrapperServiceProvider";
  func_0x000100082720("SpotlightRecommendTrayEntryPointWrapperServiceProvider",0x36,2);
  FUN_102b98a14();
  func_0x000100082720("SpotlightRecommendTrayScopeGraphBridgeServicesServiceProvider",0x3d,2);
  func_0x0001000285a8(0x112efafd0,&UNK_10db2afa8);
  puVar3 = &UNK_1105a75a0;
  func_0x000107c613fc(&UNK_1105a75a0,0x30,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(code **)(puVar3 + 0x18) = pcVar2;
  *(undefined8 *)(puVar3 + 0x20) = uVar4;
  *(char **)(puVar3 + 0x28) = pcVar5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(pcVar2);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(pcVar5);
  pcVar6 = FUN_102b97d44;
  func_0x0001000823a8(FUN_102b97d44,puVar3);
  func_0x000100082720("SCSpotlightRecommendTrayScopeInitializationPluginRegistryServiceProvider",
                      0x48,2);
  func_0x0001000285a8(0x112efaf50,&UNK_10db2ace0);
  func_0x000107c6157c(pcVar6);
  uVar7 = 0x102b97d50;
  func_0x0001000823a8(0x102b97d50,pcVar6);
  func_0x000100082720("SCSpotlightRecommendTrayScopeInitializationServiceProvider",0x3a,2);
  func_0x0001000285a8(0x112efaf40,&UNK_10db2acd0);
  func_0x000107c6157c(uVar7);
  uVar8 = 0x102b97d58;
  func_0x0001000823a8(0x102b97d58,uVar7);
  func_0x000100082720("SCSpotlightRecommendTrayScopedServicesServiceProvider",0x35,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar3 = &UNK_1105a75c8;
  func_0x000107c613fc(&UNK_1105a75c8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar8;
  *(code **)(puVar3 + 0x18) = pcVar2;
  func_0x000107c6157c(pcVar2);
  uVar8 = 0x102b97d60;
  func_0x0001000823a8(0x102b97d60,puVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(pcVar2);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(uVar7);
  func_0x000100082720("SCSpotlightRecommendTrayScopeEntryPointProvider",0x2f,2);
  *param_1 = uVar8;
  return;
}



/* Entry: 102b97d08; end: 102b97d43;  */

void FUN_102b97d08(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102b97d44; end: 102b97d67;  */

void FUN_102b97d44(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_102b981d0(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000a7f38("SCSpotlightRecommendTrayScopeInitializationPluginRegistryServiceProvider",
                      0x48,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102b97d68; end: 102b97ecb;  */

void FUN_102b97d68(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  FUN_102b98120();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_60;
  *(undefined8 *)(param_2 + 0x20) = uStack_68;
  *(undefined8 *)(param_2 + 0x28) = uStack_70;
  func_0x000102b99e68(0);
  func_0x000107c613fc();
  uVar1 = uStack_58;
  FUN_102b999c0(uStack_58,uStack_60,uStack_68,uStack_70);
  *(undefined8 *)(param_2 + 0x10) = uVar1;
  uVar2 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar3 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar4 = uStack_70;
  func_0x000107c61174(uStack_70);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  uVar5 = uStack_58;
  func_0x000107c61174(uStack_58);
  func_0x000107c6157c(uVar1);
  FUN_102b999d0();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61574(uVar1);
  *param_1 = param_2;
  return;
}



/* Entry: 102b97ecc; end: 102b97fdf;  */

long FUN_102b97ecc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  func_0x000102b99e68(0);
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_102b999c0(param_1,param_2,param_3,param_4);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c6157c(uVar1);
  FUN_102b999d0();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61574(uVar1);
  return unaff_x20;
}



/* Entry: 102b97fe0; end: 102b9801b;  */

void FUN_102b97fe0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102b9801c; end: 102b98023;  */

undefined8 FUN_102b9801c(void)

{
  return 0x1b;
}



/* Entry: 102b98024; end: 102b980a7;  */

void FUN_102b98024(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x102b98160,param_2,FUN_102b98164,param_2,FUN_102b9818c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 102b980a8; end: 102b980ef;  */

undefined8 FUN_102b980a8(undefined8 param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  FUN_102b99da8();
  func_0x000107c61574(uStack_28);
  return param_1;
}



/* Entry: 102b980f0; end: 102b9811f;  */

undefined ** FUN_102b980f0(void)

{
  return &PTR_DAT_113066fe8;
}



/* Entry: 102b98120; end: 102b9813f;  */

void FUN_102b98120(void)

{
  func_0x000107c61168(&PTR_PTR_112efb040);
  return;
}



/* Entry: 102b98140; end: 102b98163;  */

undefined1  [16] FUN_102b98140(void)

{
  return ZEXT816(0x1105a7620);
}



/* Entry: 102b98164; end: 102b9818b;  */

void FUN_102b98164(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102b9818c; end: 102b98193;  */

undefined8 FUN_102b9818c(void)

{
  undefined8 unaff_x20;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  FUN_102b99da8();
  func_0x000107c61574(uStack_28);
  return unaff_x20;
}



/* Entry: 102b98194; end: 102b981cf;  */

void FUN_102b98194(undefined8 *param_1,undefined8 param_2)

{
  FUN_102b981d0();
  func_0x0001000a7f38("SCSpotlightRecommendTrayScopeInitializationPluginRegistryServiceProvider",
                      0x48,2);
  *param_1 = param_2;
  return;
}



/* Entry: 102b981d0; end: 102b98463;  */

void FUN_102b981d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074dcf8;
  ppuVar4 = &PTR_DAT_113066fe8;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_1105a7670;
  func_0x000107c613fc(&UNK_1105a7670,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112efb0b8;
  func_0x0001000285a8(0x112efb0b8,&UNK_10db2b100);
  func_0x0001000a6ee8(&UNK_1105a7440,
                      "SCSpotlightRecommendTrayScopedServicesScopeInitializationPluginKey",0x42,2,
                      FUN_102b98464,puVar2,uVar3,&UNK_1105a7440,&PTR_DAT_112efaf58);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1105a7620,
                      "SpotlightRecommendTrayEntryPointWrapperScopeInitializationPluginKey",0x43,2,
                      FUN_102b984e0,param_3,uVar3,&UNK_1105a7620,&PTR_DAT_112efafd8);
  func_0x000107c61574(param_3);
  puVar2 = &UNK_1105a7698;
  func_0x000107c613fc(&UNK_1105a7698,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1105a7880,
                      "SpotlightRecommendTrayScopeGraphBridgeScopeInitializationPluginKey",0x42,2,
                      FUN_102b984e8,puVar2,uVar3,&UNK_1105a7880,&PTR_DAT_112efb148);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112efb0c0;
  func_0x0001000285a8(0x112efb0c0,&UNK_10db2b108);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 102b98464; end: 102b9846b;  */

void FUN_102b98464(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1105a76c0;
  func_0x000107c613fc(&UNK_1105a76c0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_102b9855c;
  func_0x0001000823a8(FUN_102b9855c,puVar3);
  func_0x000100082720("SCSpotlightRecommendTrayScopedServicesScopeInitializationPluginProvider",0x47
                      ,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 102b9846c; end: 102b984df;  */

void FUN_102b9846c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  pcVar1 = FUN_102b98528;
  func_0x0001000823a8(FUN_102b98528,param_3);
  func_0x000100082720("SpotlightRecommendTrayEntryPointWrapperScopeInitializationPluginProvider",
                      0x48,2);
  *param_1 = pcVar1;
  return;
}



/* Entry: 102b984e0; end: 102b984e7;  */

void FUN_102b984e0(undefined8 *param_1)

{
  code *pcVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  pcVar1 = FUN_102b98528;
  func_0x0001000823a8();
  func_0x000100082720("SpotlightRecommendTrayEntryPointWrapperScopeInitializationPluginProvider",
                      0x48,2);
  *param_1 = pcVar1;
  return;
}



/* Entry: 102b984e8; end: 102b98527;  */

void FUN_102b984e8(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_102b98af8(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("SpotlightRecommendTrayScopeGraphBridgeScopeInitializationPluginProvider",0x47
                      ,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102b98528; end: 102b9852f;  */

void FUN_102b98528(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  func_0x0001005d8744(0,0x102b98160);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}


