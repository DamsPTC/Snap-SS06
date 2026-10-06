/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100768ebc; end: 100768f6b;  */

uint FUN_100768ebc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar3 = (uint)*(byte *)(unaff_x20 + 0x18);
  if (*(byte *)(unaff_x20 + 0x18) == 2) {
    uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
    puVar1 = PTR_PTR_1126b2930;
    func_0x000107c61168();
    FUN_107c40efc();
    func_0x000107c61180();
    puVar2 = puVar1;
    func_0x000107c446b4();
    func_0x000107c61180();
    func_0x000107c61170(puVar1);
    puVar1 = puVar2;
    func_0x000107c5faec();
    func_0x000107c61170(puVar2);
    func_0x0001000f66f0(puVar1,param_2,uVar4);
    func_0x000107c6142c(param_2);
    uVar3 = (uint)puVar1 ^ 1;
    *(byte *)(unaff_x20 + 0x18) = (byte)uVar3 & 1;
  }
  return uVar3 & 1;
}



/* Entry: 1012bed68; end: 1012bf203;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1012bed68(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  undefined *puVar17;
  undefined8 uVar18;
  long lVar19;
  long unaff_x20;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  long lVar24;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined1 uStack_a4;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar9 = *(long *)(*(long *)(unaff_x20 + _DAT_112d6fb98) + _DAT_112d6f9a0);
  lStack_78 = param_2;
  func_0x000107c5d984();
  func_0x000107c61180();
  if (lVar9 == 0) {
    lVar24 = 0;
    lStack_78 = -0x2000000000000000;
  }
  else {
    lVar24 = lVar9;
    func_0x000107c5faec();
    func_0x000107c61170(lVar9);
  }
  lVar9 = param_2;
  func_0x000107c40834();
  func_0x000107c61180();
  puVar10 = PTR_PTR_1126b02a8;
  func_0x000107c610f8();
  uVar18 = 0xd000000000000039;
  lVar19 = -0x7ffffffef10cc530;
  func_0x000107c5fadc(0xd000000000000039);
  func_0x000107c46d50();
  func_0x000107c61170(uVar18);
  if (puVar10 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x1012bf1f8);
    (*pcVar8)();
  }
  func_0x000107c44fd8();
  func_0x000107c61180();
  if (param_2 == 0) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x1012bf1fc);
    (*pcVar8)();
  }
  lVar11 = param_2;
  func_0x000107c5faec();
  lVar22 = lVar19;
  func_0x000107c61170(param_2);
  if (lVar9 == 0) {
    uStack_a4 = 0;
    lVar22 = 0;
    lStack_c0 = 0;
    lStack_b8 = 0;
    lStack_b0 = -0x2000000000000000;
    lVar21 = -0x2000000000000000;
  }
  else {
    lVar21 = lVar9;
    FUN_107c4d3e4();
    func_0x000107c61180();
    if (lVar21 == 0) {
      lStack_b8 = 0;
      lVar21 = -0x2000000000000000;
      lStack_b0 = lVar22;
    }
    else {
      lStack_b8 = lVar21;
      func_0x000107c5faec();
      lStack_b0 = lVar22;
      func_0x000107c61170(lVar21);
      lVar21 = lVar22;
    }
    lVar12 = lVar9;
    func_0x000107c40cb8();
    func_0x000107c61180();
    if (lVar12 == 0) {
      lVar22 = 0;
      lStack_b0 = -0x2000000000000000;
    }
    else {
      lVar22 = lVar12;
      func_0x000107c5faec();
      func_0x000107c61170(lVar12);
    }
    lVar12 = lVar9;
    func_0x000107c5bbf4();
    func_0x000107c61180();
    if (lVar12 == 0) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x1012bf204);
      (*pcVar8)();
    }
    lVar13 = lVar12;
    func_0x000107c51b2c();
    func_0x000107c61170(lVar12);
    lStack_c0 = lVar13 * 1000;
    if (SUB168(SEXT816(lVar13) * SEXT816(1000),8) != lStack_c0 >> 0x3f) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x1012bf1f4);
      (*pcVar8)();
    }
    lVar12 = lVar9;
    func_0x000107c4082c();
    func_0x000107c61180();
    if (lVar12 != 0) {
      lVar13 = lVar12;
      func_0x000107c3d2dc();
      func_0x000107c61180();
      func_0x000107c61170(lVar12);
      if (lVar13 != 0) {
        func_0x000107c61170(lVar13);
        uStack_a4 = 1;
        goto LAB_1012befac;
      }
    }
    uStack_a4 = 0;
  }
LAB_1012befac:
  uVar20 = *(undefined8 *)(unaff_x20 + _DAT_112d6fba8);
  uVar23 = *(undefined8 *)(unaff_x20 + _DAT_112d6fbb0);
  uVar18 = *(undefined8 *)(unaff_x20 + _DAT_112d6fba0);
  uVar5 = ((undefined8 *)(unaff_x20 + _DAT_112d6fba0))[1];
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112d6fbc0);
  uVar6 = ((undefined8 *)(unaff_x20 + _DAT_112d6fbc0))[1];
  lVar14 = 0;
  func_0x0001012b6ff4();
  lVar15 = lVar14;
  func_0x000107c610f8();
  lVar12 = _DAT_112d6f880;
  *(undefined8 *)(lVar15 + _DAT_112d6f880) = 0;
  lVar13 = _DAT_112d6f888;
  *(undefined8 *)(lVar15 + _DAT_112d6f888) = 0;
  puVar1 = (undefined8 *)(lVar15 + _DAT_112d6f890);
  *puVar1 = 0;
  puVar1[1] = 0;
  plVar16 = (long *)(lVar15 + _DAT_112d6f850);
  *plVar16 = lVar11;
  plVar16[1] = lVar19;
  plVar16 = (long *)(lVar15 + _DAT_112d6f858);
  *plVar16 = lStack_b8;
  plVar16[1] = lVar21;
  plVar16 = (long *)(lVar15 + _DAT_112d6f860);
  *plVar16 = lVar22;
  plVar16[1] = lStack_b0;
  *(long *)(lVar15 + _DAT_112d6f918) = lStack_c0;
  plVar16 = (long *)(lVar15 + _DAT_112d6f868);
  *plVar16 = lVar24;
  plVar16[1] = lStack_78;
  *(undefined1 *)(lVar15 + _DAT_112d6f920) = uStack_a4;
  *(undefined **)(lVar15 + _DAT_112d6f870) = puVar10;
  puVar2 = (undefined8 *)(lVar15 + _DAT_112d6f878);
  *puVar2 = uVar18;
  puVar2[1] = uVar5;
  *(undefined8 *)(lVar15 + lVar12) = uVar20;
  *(undefined8 *)(lVar15 + lVar13) = uVar23;
  uVar4 = *puVar1;
  uVar7 = puVar1[1];
  *puVar1 = uVar3;
  puVar1[1] = uVar6;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000100cab2f8(uVar3,uVar6);
  func_0x000107c61174(uVar23);
  func_0x000100cab2f8(uVar18,uVar5);
  func_0x000107c61174(uVar20);
  func_0x000100cab2c4(uVar4,uVar7);
  plVar16 = &lStack_70;
  lStack_70 = lVar15;
  lStack_68 = lVar14;
  func_0x000107c61154(plVar16,PTR_s_init_1125d9248);
  func_0x000107c61170(puVar10);
  puVar17 = PTR_PTR_1126aea98;
  func_0x000107c610f8();
  func_0x000107c61174(plVar16);
  uVar18 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef33dc0);
  func_0x000107c45d60();
  func_0x000107c61170(plVar16);
  func_0x000107c61170(uVar18);
  if (puVar17 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x1012bf200);
    (*pcVar8)();
  }
  func_0x000107c61170(lVar9);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(plVar16);
  return puVar17;
}



/* Entry: 10136fb7c; end: 10136fd07;  */

undefined1  [16] FUN_10136fb7c(ulong param_1,long param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  uVar2 = param_1;
  FUN_107c4d3e4();
  func_0x000107c61180();
  lVar5 = param_2;
  if (uVar2 == 0) {
LAB_10136fc2c:
    param_2 = lVar5;
    FUN_107c4d3e4();
    func_0x000107c61180();
    if (param_1 == 0) {
LAB_10136fce0:
      lVar4 = 0;
      lVar5 = -0x2000000000000000;
      goto LAB_10136fce8;
    }
    uVar2 = param_1;
    func_0x000107c5faec();
    lVar5 = param_2;
    func_0x000107c61170(param_1);
    if ((uVar2 == 0xd000000000000035) && (param_2 == -0x7ffffffef10c7240)) {
      func_0x000107c6142c();
    }
    else {
      lVar5 = param_2;
      func_0x000107c605b8(uVar2,param_2,0xd000000000000035,0x800000010ef38dc0,0);
      func_0x000107c6142c();
      if ((uVar2 & 1) == 0) goto LAB_10136fce0;
    }
    func_0x000108ed0530();
    func_0x000107c61180();
    if (param_2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10136fd08);
      (*pcVar1)();
    }
  }
  else {
    uVar3 = uVar2;
    func_0x000107c5faec();
    lVar5 = param_2;
    func_0x000107c61170(uVar2);
    if ((uVar3 == 0xd000000000000031) && (param_2 == -0x7ffffffef10c7200)) {
      func_0x000107c6142c();
    }
    else {
      lVar5 = param_2;
      func_0x000107c605b8(uVar3,param_2,0xd000000000000031,0x800000010ef38e00,0);
      func_0x000107c6142c();
      if ((uVar3 & 1) == 0) goto LAB_10136fc2c;
    }
    func_0x000108ed0518();
    func_0x000107c61180();
    if (param_2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10136fc2c);
      (*pcVar1)();
    }
  }
  lVar4 = param_2;
  func_0x000107c5faec();
  func_0x000107c61170(param_2);
LAB_10136fce8:
  auVar6._8_8_ = lVar5;
  auVar6._0_8_ = lVar4;
  return auVar6;
}



/* Entry: 101371300; end: 1013714a3;  */

undefined8 FUN_101371300(ulong param_1,ulong param_2)

{
  ulong uVar1;
  code *pcVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined **ppuVar8;
  long lVar9;
  
  if (param_1 >> 0x3e == 0) {
    uVar7 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar7 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar7 = param_1;
    }
    func_0x000107c60480();
  }
  if (uVar7 != 0) {
    lVar9 = 4;
    do {
      ppuVar8 = (undefined **)(lVar9 + -4);
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(undefined ***)((param_1 & 0xffffffffffffff8) + 0x10) <= ppuVar8) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101371468);
          (*pcVar2)();
        }
        ppuVar3 = *(undefined ***)(param_1 + lVar9 * 8);
        func_0x000107c61174();
        uVar5 = param_2;
      }
      else {
        ppuVar3 = ppuVar8;
        uVar5 = param_1;
        func_0x00010136f618();
      }
      uVar1 = lVar9 - 3;
      if (SCARRY8((long)ppuVar8,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101371464);
        (*pcVar2)();
      }
      ppuVar8 = ppuVar3;
      FUN_107c4d3e4();
      func_0x000107c61180();
      if (ppuVar8 == (undefined **)0x0) {
        func_0x000107c5faec(&PTR____CFConstantStringClassReference_110da03b8);
        param_2 = uVar5;
LAB_101371360:
        func_0x000107c6142c(param_2);
        func_0x000107c61170(ppuVar3);
      }
      else {
        ppuVar4 = ppuVar8;
        func_0x000107c5faec();
        uVar6 = uVar5;
        func_0x000107c61170(ppuVar8);
        ppuVar8 = &PTR____CFConstantStringClassReference_110da03b8;
        func_0x000107c5faec();
        param_2 = uVar6;
        if (uVar5 == 0) goto LAB_101371360;
        if ((ppuVar4 == ppuVar8) && (uVar5 == uVar6)) {
          func_0x000107c6142c(uVar5);
          func_0x000107c6142c(uVar6);
          func_0x000107c61170(ppuVar3);
          return 1;
        }
        param_2 = uVar5;
        func_0x000107c605b8();
        func_0x000107c6142c(uVar5);
        func_0x000107c6142c(uVar6);
        func_0x000107c61170(ppuVar3);
        if (((ulong)ppuVar4 & 1) != 0) {
          return 1;
        }
      }
      lVar9 = lVar9 + 1;
    } while (uVar1 != uVar7);
  }
  return 0;
}



/* Entry: 1014c0880; end: 1014c0acf;  */

bool FUN_1014c0880(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  func_0x000107c61434(param_2);
  func_0x000100e35e30();
  lVar3 = 0x112da90a0;
  func_0x0001000285a8(0x112da90a0,&UNK_10d950500);
  func_0x000107c61534();
  *(undefined8 *)(lVar3 + 0x18) = 10;
  *(undefined8 *)(lVar3 + 0x10) = 5;
  uVar10 = *(undefined8 *)PTR__kSecClass_1103477e0;
  *(undefined8 *)(lVar3 + 0x20) = uVar10;
  uVar11 = *(undefined8 *)PTR__kSecClassGenericPassword_1103477e8;
  uVar4 = 0;
  func_0x0001014bede8();
  *(undefined8 *)(lVar3 + 0x28) = uVar11;
  uVar12 = *(undefined8 *)PTR__kSecAttrService_1103477d0;
  *(undefined8 *)(lVar3 + 0x40) = uVar4;
  *(undefined8 *)(lVar3 + 0x48) = uVar12;
  puVar1 = PTR___sSSN_11034da80;
  *(undefined8 *)(lVar3 + 0x50) = param_3;
  *(undefined8 *)(lVar3 + 0x58) = param_4;
  puVar2 = PTR___s10Foundation4DataVN_110350ae0;
  uVar13 = *(undefined8 *)PTR__kSecAttrGeneric_1103477c8;
  *(undefined **)(lVar3 + 0x68) = puVar1;
  *(undefined8 *)(lVar3 + 0x70) = uVar13;
  *(undefined8 *)(lVar3 + 0x78) = param_1;
  *(undefined8 *)(lVar3 + 0x80) = param_2;
  uVar7 = *(undefined8 *)PTR__kSecAttrAccount_1103477c0;
  *(undefined **)(lVar3 + 0x90) = puVar2;
  *(undefined8 *)(lVar3 + 0x98) = uVar7;
  *(undefined8 *)(lVar3 + 0xa0) = param_1;
  *(undefined8 *)(lVar3 + 0xa8) = param_2;
  uVar8 = *(undefined8 *)PTR__kSecAttrSynchronizable_1103477d8;
  *(undefined **)(lVar3 + 0xb8) = puVar2;
  *(undefined8 *)(lVar3 + 0xc0) = uVar8;
  uVar9 = *(undefined8 *)PTR__kCFBooleanFalse_11034ab88;
  uVar5 = 0x112da90a8;
  func_0x0001000285a8(0x112da90a8,&UNK_10d950508);
  *(undefined8 *)(lVar3 + 0xe0) = uVar5;
  *(undefined8 *)(lVar3 + 200) = uVar9;
  func_0x00010006c00c(param_1,param_2);
  func_0x00010006c00c(param_1,param_2);
  func_0x000107c61174(uVar9);
  func_0x000107c61174(uVar10);
  func_0x000107c61174(uVar11);
  func_0x000107c61174(uVar12);
  func_0x000107c61434(param_4);
  func_0x000107c61174(uVar13);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar8);
  lVar6 = lVar3;
  func_0x0001014c14a8();
  func_0x000107c61588(lVar3);
  uVar5 = 0x112da90b0;
  func_0x0001000285a8(0x112da90b0,&UNK_10d950510);
  func_0x000107c61408((undefined8 *)(lVar3 + 0x20),5,uVar5);
  uVar5 = 0x112da8f90;
  func_0x0001014c15fc(0x112da8f90,&UNK_10dcb8d78);
  lVar3 = lVar6;
  func_0x000107c5f9dc(lVar6,uVar4,PTR___sypN_11034f1a8 + 8,uVar5);
  func_0x000107c6142c(lVar6);
  lVar6 = lVar3;
  FUN_107c60b60();
  func_0x00010006c090(param_1,param_2);
  func_0x000107c61170(lVar3);
  return (int)lVar6 == 0 || (int)lVar6 == -0x62d4;
}



/* Entry: 101e87c50; end: 101e87ddf;  */

void FUN_101e87c50(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long unaff_x20;
  
  lVar5 = *(long *)(unaff_x20 + 0xa0);
  if (lVar5 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x000107c61168(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    func_0x000107c615f0(lVar5);
    func_0x000107c41570(puVar1);
    func_0x000107c61180();
    func_0x000107c4ffa0();
    func_0x000107c61170(puVar1);
    func_0x000107c615e8(lVar5);
    uVar2 = *(undefined8 *)(unaff_x20 + 0xa0);
    *(undefined8 *)(unaff_x20 + 0xa0) = 0;
    func_0x000107c615e8(uVar2);
  }
  lVar5 = *(long *)(unaff_x20 + 0xa8);
  if (lVar5 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x000107c61168(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    func_0x000107c615f0(lVar5);
    func_0x000107c41570(puVar1);
    func_0x000107c61180();
    func_0x000107c4ffa0();
    func_0x000107c61170(puVar1);
    func_0x000107c615e8(lVar5);
    uVar2 = *(undefined8 *)(unaff_x20 + 0xa8);
    *(undefined8 *)(unaff_x20 + 0xa8) = 0;
    func_0x000107c615e8(uVar2);
  }
  lVar5 = *(long *)(unaff_x20 + 0xb0);
  if (lVar5 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x000107c61168(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    func_0x000107c615f0(lVar5);
    func_0x000107c41570(puVar1);
    func_0x000107c61180();
    func_0x000107c4ffa0();
    func_0x000107c61170(puVar1);
    func_0x000107c615e8(lVar5);
    uVar2 = *(undefined8 *)(unaff_x20 + 0xb0);
    *(undefined8 *)(unaff_x20 + 0xb0) = 0;
    func_0x000107c615e8(uVar2);
  }
  if (*(byte *)(unaff_x20 + 0xb8) != 2) {
    if ((*(byte *)(unaff_x20 + 0xb8) & 1) == 0) {
      puVar1 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
      func_0x000107c61168();
      puVar3 = puVar1;
      FUN_107c40efc();
      func_0x000107c61180();
      puVar4 = puVar3;
      func_0x000107c49a9c();
      func_0x000107c61170(puVar3);
      if ((int)puVar4 != 0) {
        FUN_107c40efc(puVar1);
        func_0x000107c61180();
        func_0x000107c52c24();
        func_0x000107c61170(puVar1);
      }
    }
    *(undefined1 *)(unaff_x20 + 0xb8) = 2;
  }
  return;
}



/* Entry: 102158008; end: 1021580db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102158008(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  
  lVar1 = _DAT_112e5c2e8;
  lVar3 = *(long *)(unaff_x20 + _DAT_112e5c2e8);
  lVar6 = lVar3;
  if (lVar3 == 0) {
    func_0x00010052bbec();
    func_0x000107c61180();
    puVar4 = PTR_PTR_1126affa8;
    func_0x000107c61168();
    FUN_107c5aa04();
    func_0x000107c61180();
    if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1021580dc);
      (*pcVar2)();
    }
    uVar5 = 0;
    func_0x00010215661c(0);
    func_0x000107c610f8();
    func_0x000102154d98(0,0,0,0,lVar3,puVar4,uVar5);
    func_0x000107c5a050();
    uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174(lVar3);
    func_0x000107c61170(uVar5);
    lVar6 = 0;
  }
  func_0x000107c61174(lVar6);
  return lVar3;
}



/* Entry: 102b82e04; end: 102b8300b;  */

/* WARNING: Possible PIC construction at 0x000102b82fb4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b82fb8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b82e04(ulong param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  long unaff_x20;
  code *pcVar10;
  long lVar11;
  long lVar12;
  
  lVar12 = *(long *)(unaff_x20 + _DAT_112efa688);
  if (*(long *)(lVar12 + 0x10) <= (long)param_1) {
    return;
  }
  lVar11 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar11 == 0) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x102b83008);
    (*pcVar10)();
  }
  func_0x000107c5a378();
  func_0x000107c61170(lVar11);
  puVar6 = PTR_PTR_1126affa8;
  func_0x000107c61168();
  FUN_107c5aa04();
  func_0x000107c61180();
  if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x102b8300c);
    (*pcVar10)();
  }
  func_0x000107c4e57c();
  func_0x000107c61170(puVar6);
  uVar7 = param_1;
  func_0x000102b8305c(param_1,param_2);
  lVar11 = *(long *)(unaff_x20 + _DAT_112efa6b0);
  if (lVar11 != 0) {
    uVar8 = uVar7;
    func_0x000107c5f9dc(uVar7,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
    func_0x000107c4bb34(lVar11);
    func_0x000107c61170(uVar8);
  }
  lVar1 = unaff_x20 + _DAT_112efa690;
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  lVar4 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar2);
  if (-1 < (long)param_1) {
    if (param_1 < *(ulong *)(lVar12 + 0x10)) {
      lVar12 = lVar12 + param_1 * 0x10;
      uVar3 = *(undefined8 *)(lVar12 + 0x20);
      uVar5 = *(undefined8 *)(lVar12 + 0x28);
      puVar6 = &UNK_1105a5c88;
      func_0x000107c613fc(&UNK_1105a5c88,0x18,7);
      func_0x000107c61614(puVar6 + 0x10);
      puVar9 = &UNK_1105a5cb0;
      func_0x000107c613fc(&UNK_1105a5cb0,0x28,7);
      *(long *)(puVar9 + 0x10) = lVar11;
      *(ulong *)(puVar9 + 0x18) = uVar7;
      *(undefined **)(puVar9 + 0x20) = puVar6;
      pcVar10 = *(code **)(lVar4 + 8);
      func_0x000107c615f0(lVar11);
      func_0x000107c6157c(puVar6);
      func_0x000107c61434(uVar5);
      (*pcVar10)(uVar3,uVar5,&UNK_102b84e08,puVar9,uVar2,lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_release_11034f4c0)(puVar6);
      return;
    }
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x102b83004);
    (*pcVar10)();
  }
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x102b83000);
  (*pcVar10)();
}



/* Entry: 103145420; end: 103145b97;  */

void FUN_103145420(ulong param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined **ppuVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  puVar3 = &UNK_1106131c8;
  lVar11 = 0x18;
  func_0x000107c613fc(&UNK_1106131c8,0x18,7);
  *(long *)(puVar3 + 0x10) = param_3;
  func_0x000107c60bc4(param_3);
  uVar4 = param_1;
  FUN_107c4d3e4();
  func_0x000107c61180();
  uVar5 = uVar4;
  func_0x000107c5faec();
  lVar10 = lVar11;
  func_0x000107c61170(uVar4);
  if ((uVar5 == 0xd000000000000011) && (lVar11 == -0x7ffffffef0ed7df0)) {
    func_0x000107c6142c(0x800000010f128210);
  }
  else {
    lVar10 = lVar11;
    func_0x000107c605b8(uVar5,lVar11,0xd000000000000011,0x800000010f128210,0);
    func_0x000107c6142c(lVar11);
    if ((uVar5 & 1) == 0) {
      uStack_78 = 0;
      uStack_80 = 0;
      lStack_68 = 0;
      uStack_70 = 0;
      func_0x000103145ba8(&uStack_80,&puStack_a0,0x112d387f8,&UNK_10d902650);
      if (lStack_88 == 0) {
        puVar14 = (undefined1 *)0x0;
      }
      else {
        func_0x0001006732c8(&puStack_a0,lStack_88);
        lVar10 = *(long *)(lStack_88 + -8);
        (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
        puVar15 = auStack_b0 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
        (**(code **)(lVar10 + 0x10))(puVar15);
        puVar14 = puVar15;
        func_0x000107c605b0(puVar15,lStack_88);
        (**(code **)(lVar10 + 8))(puVar15,lStack_88);
        func_0x000100183ab8(&puStack_a0);
      }
      uVar13 = 0xd000000000000015;
      func_0x000107c5fadc(0xd000000000000015,0x800000010f128230);
      (**(code **)(param_3 + 0x10))(param_3,puVar14,uVar13);
      goto LAB_1031459dc;
    }
  }
  uVar4 = param_1;
  puStack_a8 = puVar3;
  func_0x000107c438e0();
  func_0x000107c61180();
  uVar5 = uVar4;
  func_0x000107c51bd4();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  uVar4 = uVar5;
  func_0x000107c4f564();
  func_0x000107c61180();
  uVar6 = uVar4;
  func_0x000107c5faec();
  lVar11 = lVar10;
  func_0x000107c61170(uVar4);
  uVar4 = uVar5;
  func_0x000107c44f08();
  func_0x000107c61180();
  uVar7 = uVar4;
  func_0x000107c5faec();
  lVar12 = lVar11;
  func_0x000107c61170(uVar4);
  uVar4 = param_1;
  func_0x000107c438e0();
  func_0x000107c61180();
  uVar8 = uVar4;
  func_0x000107c4a028();
  func_0x000107c61170(uVar4);
  if (((int)uVar8 == 0) ||
     (((uVar6 != 0x736e656c626577 || (lVar10 != -0x1900000000000000)) &&
      (lVar12 = lVar10, func_0x000107c605b8(uVar6,lVar10,0x736e656c626577,0xe700000000000000,0),
      (uVar6 & 1) == 0)))) {
    func_0x000107c6142c(lVar11);
    func_0x000107c6142c(lVar10);
LAB_103145620:
    uStack_80 = 0;
    uStack_78 = 0xe000000000000000;
    func_0x000107c602fc(0x2b);
    func_0x000107c6142c(uStack_78);
    uStack_80 = 0xd000000000000024;
    uStack_78 = 0x800000010f128250;
    uVar4 = uVar5;
    func_0x000107c4f564(uVar5);
    func_0x000107c61180();
    uVar6 = uVar4;
    func_0x000107c5faec();
    func_0x000107c61170(uVar4);
    func_0x000107c5fb78(uVar6,lVar12);
    func_0x000107c6142c(lVar12);
    uVar13 = 0xe300000000000000;
    func_0x000107c5fb78(0x2f2f3a,0xe300000000000000);
    uVar4 = uVar5;
    func_0x000107c44f08(uVar5);
    func_0x000107c61180();
    uVar6 = uVar4;
    func_0x000107c5faec();
    func_0x000107c61170(uVar4);
    func_0x000107c5fb78(uVar6,uVar13);
    func_0x000107c6142c(uVar13);
    func_0x000107c6142c(uStack_78);
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
    func_0x000103145ba8(&uStack_80,&puStack_a0,0x112d387f8,&UNK_10d902650);
    puVar3 = puStack_a8;
    if (lStack_88 == 0) {
      puVar14 = (undefined1 *)0x0;
    }
    else {
      func_0x0001006732c8(&puStack_a0,lStack_88);
      lVar10 = *(long *)(lStack_88 + -8);
      (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
      puVar15 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
      (**(code **)(lVar10 + 0x10))(puVar15);
      puVar14 = puVar15;
      func_0x000107c605b0(puVar15,lStack_88);
      (**(code **)(lVar10 + 8))(puVar15,lStack_88);
      func_0x000100183ab8(&puStack_a0);
    }
    uVar13 = 0xd000000000000015;
    func_0x000107c5fadc(0xd000000000000015,0x800000010f128230);
    (**(code **)(param_3 + 0x10))(param_3,puVar14,uVar13);
    func_0x000107c61170(uVar5);
LAB_1031459dc:
    func_0x000107c615e8(puVar14);
    func_0x000107c61170(uVar13);
    func_0x000103145c00(&uStack_80,0x112d387f8,&UNK_10d902650);
    func_0x000107c61574(puVar3);
    return;
  }
  if ((uVar7 == 0x736e656c) && (lVar11 == -0x1c00000000000000)) {
    func_0x000107c6142c(0xe400000000000000);
    func_0x000107c6142c(lVar10);
  }
  else {
    lVar12 = lVar11;
    func_0x000107c605b8(uVar7,lVar11,0x736e656c,0xe400000000000000,0);
    func_0x000107c6142c(lVar11);
    func_0x000107c6142c(lVar10);
    if ((uVar7 & 1) == 0) goto LAB_103145620;
  }
  func_0x000107c3eb80(param_1);
  func_0x000107c61180();
  func_0x000107c60234(&uStack_80);
  func_0x000107c615e8(param_1);
  uVar13 = 0x112d472a8;
  func_0x0001000285a8(0x112d472a8,&UNK_10d90e490);
  puVar3 = PTR___sypN_11034f1a8;
  ppuVar9 = &puStack_a0;
  func_0x000107c6147c(ppuVar9,&uStack_80,PTR___sypN_11034f1a8 + 8,uVar13,6);
  puVar2 = puStack_a0;
  puVar1 = puStack_a8;
  if (((int)ppuVar9 == 0) || (puStack_a0 == (undefined *)0x0)) {
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
    func_0x000103145c00(&uStack_80,0x112d387f8,&UNK_10d902650);
    uVar16 = 0;
    puVar17 = (undefined *)0x0;
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
LAB_103145b10:
    func_0x000103145c00(&uStack_80,0x112d387f8,&UNK_10d902650);
  }
  else {
    if (*(long *)(puStack_a0 + 0x10) == 0) {
      uStack_78 = 0;
      uStack_80 = 0;
      lStack_68 = 0;
      uStack_70 = 0;
LAB_103145a68:
      func_0x000103145c00(&uStack_80,0x112d387f8,&UNK_10d902650);
      uVar16 = 0;
      puVar17 = (undefined *)0x0;
      uStack_98 = uVar16;
      if (*(long *)(puVar2 + 0x10) == 0) goto LAB_103145ad4;
LAB_103145a90:
      func_0x000107c61434(puVar2);
      lVar10 = 0x736d61726170;
      uVar4 = 0;
      func_0x000100029284(0x736d61726170);
      if ((uVar4 & 1) == 0) {
        func_0x000107c6142c(puVar2);
        uStack_98 = uVar16;
        goto LAB_103145ad4;
      }
      func_0x0001000bb420(*(long *)(puVar2 + 0x38) + lVar10 * 0x20,&uStack_80);
      func_0x000107c6142c(puVar2);
    }
    else {
      func_0x000107c61434(puStack_a0);
      lVar10 = 0x697275;
      uVar4 = 0;
      func_0x000100029284(0x697275);
      if ((uVar4 & 1) == 0) {
        uStack_78 = 0;
        uStack_80 = 0;
        lStack_68 = 0;
        uStack_70 = 0;
      }
      else {
        func_0x0001000bb420(*(long *)(puVar2 + 0x38) + lVar10 * 0x20,&uStack_80);
      }
      func_0x000107c6142c(puVar2);
      if (lStack_68 == 0) goto LAB_103145a68;
      ppuVar9 = &puStack_a0;
      func_0x000107c6147c(ppuVar9,&uStack_80,puVar3 + 8,PTR___sSSN_11034da80,6);
      puVar17 = puStack_a0;
      if ((int)ppuVar9 == 0) {
        puVar17 = (undefined *)0x0;
        uStack_98 = 0;
      }
      uVar16 = uStack_98;
      if (*(long *)(puVar2 + 0x10) != 0) goto LAB_103145a90;
LAB_103145ad4:
      uStack_78 = 0;
      uStack_80 = 0;
      lStack_68 = 0;
      uStack_70 = 0;
      uVar16 = uStack_98;
    }
    func_0x000107c6142c(puVar2);
    if (lStack_68 == 0) goto LAB_103145b10;
    ppuVar9 = &puStack_a0;
    func_0x000107c6147c(ppuVar9,&uStack_80,puVar3 + 8,uVar13,6);
    puVar3 = puStack_a0;
    if ((int)ppuVar9 != 0) goto LAB_103145b38;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100214a84(PTR___swiftEmptyArrayStorage_11034f1c8);
LAB_103145b38:
  func_0x000103143e54(puVar17,uVar16,puVar3,&UNK_103145b98,puVar1);
  func_0x000107c61574(puVar1);
  func_0x000107c6142c(puVar3);
  func_0x000107c61170(uVar5);
  func_0x000107c6142c(uVar16);
  return;
}



/* Entry: 10314e690; end: 10314e79f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10314e690(ulong param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_70 [32];
  
  uVar1 = param_1;
  FUN_107c4d3e4();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5faec();
  func_0x000107c61170(uVar1);
  if (uVar2 == 0x45736e656c626577 && param_2 == -0x13ffffff8d908d8e) {
    func_0x000107c6142c(param_2);
  }
  else {
    func_0x000107c605b8(uVar2,param_2,0x45736e656c626577,0xec000000726f7272,0);
    func_0x000107c6142c(param_2);
    if ((uVar2 & 1) == 0) {
      return;
    }
  }
  lVar3 = unaff_x20 + _DAT_112f44f50;
  func_0x000107c61618();
  if (lVar3 != 0) {
    func_0x000107c3eb80(param_1);
    func_0x000107c61180();
    func_0x000107c60234(auStack_70);
    func_0x000107c615e8(param_1);
    func_0x00010314d5ec(auStack_70);
    func_0x000107c61170(lVar3);
    func_0x000100183ab8(auStack_70);
  }
  return;
}



/* Entry: 1032b662c; end: 1032b6993;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032b662c(undefined8 ****param_1,undefined8 param_2,long param_3,ulong param_4)

{
  long *plVar1;
  byte bVar2;
  code *pcVar3;
  undefined8 ****ppppuVar4;
  undefined8 ****ppppuVar5;
  undefined8 ****ppppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  char *pcVar10;
  undefined8 unaff_x20;
  long lVar11;
  undefined8 uVar12;
  undefined8 ***pppuStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  byte bStack_61;
  
  ppppuVar4 = param_1;
  func_0x000107c4e330();
  func_0x000107c61180();
  puVar9 = PTR___sypN_11034f1a8;
  ppppuVar5 = ppppuVar4;
  func_0x000107c5f9e8();
  func_0x000107c61170(ppppuVar4);
  if ((param_4 & 1) == 0) {
    puVar9 = (undefined *)0x112d472a8;
    func_0x0001000285a8(0x112d472a8,&UNK_10d90e490);
    ppppuVar4 = &pppuStack_98;
    pppuStack_98 = ppppuVar5;
    puStack_80 = puVar9;
    func_0x0001032b6a2c();
    pcVar10 = (char *)0x112d387f8;
    func_0x0001032b85d8(&pppuStack_98,0x112d387f8,&UNK_10d902650);
  }
  else {
    ppppuVar6 = ppppuVar5;
    func_0x000107c5f9dc(ppppuVar5,PTR___sSSN_11034da80,puVar9 + 8,PTR___sSSSHsWP_11034da90);
    bStack_61 = 0;
    puVar9 = &UNK_110635898;
    func_0x000107c613fc(&UNK_110635898,0x20,7);
    *(byte **)(puVar9 + 0x10) = &bStack_61;
    *(undefined8 *)(puVar9 + 0x18) = unaff_x20;
    puVar7 = &UNK_1106358c0;
    func_0x000107c613fc(&UNK_1106358c0,0x20,7);
    *(undefined **)(puVar7 + 0x10) = &UNK_1032b85a8;
    *(undefined **)(puVar7 + 0x18) = puVar9;
    puStack_78 = &UNK_1032b85b0;
    pppuStack_98 = (undefined8 ***)PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_10168c430;
    puStack_80 = &UNK_1106358d8;
    ppppuVar4 = &pppuStack_98;
    puStack_70 = puVar7;
    func_0x000107c60bc4(ppppuVar4);
    puVar8 = puStack_70;
    func_0x000107c6157c(puVar7);
    func_0x000107c61574(puVar8);
    func_0x000107c429c4(ppppuVar6);
    func_0x000107c60bd0(ppppuVar4);
    pcVar10 = "";
    puVar8 = puVar7;
    func_0x000107c61544(puVar7,"",0x52,0x83,0x26,1);
    func_0x000107c61574(puVar7);
    bVar2 = bStack_61;
    if (((ulong)puVar8 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1032b6994);
      (*pcVar3)();
    }
    func_0x000107c61574(puVar9);
    if ((bVar2 & 1) == 0) {
      ppppuVar4 = ppppuVar5;
      func_0x00010018cc3c();
    }
    else {
      ppppuVar4 = ppppuVar6;
      func_0x0001032b6f7c();
    }
    func_0x000107c61170(ppppuVar6);
    func_0x000107c6142c(ppppuVar5);
  }
  ppppuVar5 = param_1;
  func_0x000107c5dac0();
  if (((int)ppppuVar5 == 0) || (param_3 == 0)) {
    FUN_107c4d3e4();
    func_0x000107c61180();
    ppppuVar5 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170();
    func_0x0001032b8230();
    func_0x000107c610f8();
    func_0x000107c453e4();
    plVar1 = (long *)((long)param_1 + _DAT_112f52dc0);
    lVar11 = plVar1[1];
    *plVar1 = (long)ppppuVar5;
    plVar1[1] = (long)pcVar10;
    func_0x000107c61174();
    func_0x000107c6142c(lVar11);
    *(undefined8 *)((long)param_1 + _DAT_112f52dc8) = 1;
    uVar12 = *(undefined8 *)((long)param_1 + _DAT_112f52dd0);
    *(undefined8 *****)((long)param_1 + _DAT_112f52dd0) = ppppuVar4;
    func_0x000107c61170(param_1);
    func_0x000107c6142c(uVar12);
    func_0x000107c4bf9c(param_2);
  }
  else {
    func_0x000107c615f0(param_3);
    FUN_107c4d3e4();
    func_0x000107c61180();
    ppppuVar5 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170();
    func_0x0001032b7cd0();
    func_0x000107c610f8();
    func_0x000107c453e4();
    plVar1 = (long *)((long)param_1 + _DAT_112f52d80);
    lVar11 = plVar1[1];
    *plVar1 = (long)ppppuVar5;
    plVar1[1] = (long)pcVar10;
    func_0x000107c61174();
    func_0x000107c6142c(lVar11);
    *(undefined8 *)((long)param_1 + _DAT_112f52d88) = 1;
    uVar12 = *(undefined8 *)((long)param_1 + _DAT_112f52d90);
    *(undefined8 *****)((long)param_1 + _DAT_112f52d90) = ppppuVar4;
    func_0x000107c61170(param_1);
    func_0x000107c6142c(uVar12);
    func_0x000107c4bfb0(param_3);
    func_0x000107c615e8(param_3);
  }
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10340af34; end: 10340b553;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10340af34(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  char *pcVar9;
  long extraout_x8;
  long extraout_x12;
  undefined8 uVar10;
  code *pcVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  uint uStack_1cc;
  long lStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined4 uStack_16c;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 uStack_138;
  undefined *puStack_128;
  undefined **ppuStack_120;
  undefined8 uStack_118;
  byte bStack_110;
  undefined *puStack_100;
  undefined **ppuStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [24];
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  long alStack_70 [2];
  
  plStack_150 = param_1;
  func_0x000100083b20(alStack_70);
  lStack_168 = alStack_70[0];
  func_0x000100083b20(&lStack_78);
  func_0x000100083b20(&lStack_80);
  lStack_1c8 = lStack_80;
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&lStack_90);
  lStack_160 = lStack_90;
  func_0x000100083b20(&uStack_98);
  uStack_178 = uStack_98;
  func_0x000100083b20(&uStack_a0);
  uStack_148 = uStack_a0;
  func_0x000100083b20(&lStack_a8);
  lStack_1b0 = lStack_a8;
  func_0x000100083b20(&uStack_b0);
  uStack_1b8 = uStack_b0;
  func_0x00010340bb38();
  func_0x000107c613fc();
  uVar5 = *(undefined8 *)(lStack_78 + _DAT_11306fae0);
  uVar10 = *(undefined8 *)(lStack_78 + _DAT_11306fae8);
  lStack_158 = param_2;
  func_0x000107c61174(uVar5);
  uStack_16c = (int)uVar10;
  func_0x00010341b994();
  func_0x000107c61170(uVar5);
  lVar1 = _DAT_11306fb60;
  uVar14 = *(undefined8 *)(lStack_78 + _DAT_11306faf0);
  uVar15 = *(undefined8 *)(alStack_70[0] + _DAT_11306f9c8);
  uVar13 = *(undefined8 *)(lStack_90 + _DAT_113070ea8);
  uStack_198 = uVar13;
  uStack_190 = uVar15;
  uStack_188 = uVar14;
  func_0x000107c61428(lStack_78 + _DAT_11306fb60,auStack_c8,0,0);
  lStack_200 = lStack_78;
  uVar10 = *(undefined8 *)(lStack_78 + lVar1);
  uVar5 = *(undefined8 *)(lStack_78 + _DAT_11306fb28);
  lVar1 = ((undefined8 *)(lStack_78 + _DAT_11306fb28))[1];
  uStack_180 = uVar10;
  func_0x000107c614f0();
  pcVar11 = *(code **)(lVar1 + 0x18);
  func_0x000107c6157c(uVar10);
  func_0x000107c615f0(uVar14);
  func_0x000107c6157c(uVar15);
  func_0x000107c6157c(uVar13);
  (*pcVar11)(uVar5,lVar1);
  uStack_1a0 = uVar5;
  func_0x0001000285a8(0x112d3b7c8,&UNK_10da59ea0);
  func_0x000107c4b1cc();
  uVar5 = uStack_98;
  func_0x000107c61180();
  uVar10 = uVar5;
  func_0x0001000bda74();
  uStack_1a8 = uVar10;
  func_0x000107c61170(uVar5);
  puVar6 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x000107c61168();
  FUN_107c40efc();
  func_0x000107c61180();
  puVar7 = puVar6;
  FUN_107c5d9bc();
  func_0x000107c61170(puVar6);
  uStack_1cc = (uint)(puVar7 == (undefined *)0x1);
  uStack_1c0 = uStack_88;
  func_0x0001000d224c(&uStack_e0);
  uStack_1d8 = uStack_d8;
  uStack_1e0 = uStack_e0;
  func_0x0001000d224c(&uStack_f0);
  lVar3 = lStack_1c8;
  uVar5 = *(undefined8 *)(lStack_1c8 + _DAT_113091b70);
  uStack_1e8 = uStack_e8;
  uStack_1f0 = uStack_f0;
  func_0x000107c41b80();
  func_0x000107c61180();
  uStack_1f8 = uVar5;
  func_0x0001000285a8(0x112d5a5f8,&UNK_10d921380);
  uVar5 = uStack_148;
  func_0x000107c4b2ec();
  func_0x000107c61180();
  uVar10 = uVar5;
  func_0x0001000bda74();
  func_0x000107c61170(uVar5);
  lVar4 = lStack_1b0;
  uVar5 = uStack_1b8;
  lVar2 = lStack_200;
  uVar13 = *(undefined8 *)(lStack_200 + _DAT_11306fb70);
  uVar14 = *(undefined8 *)(lStack_1b0 + _DAT_113036458);
  func_0x000107c6157c(uVar13);
  func_0x000107c6157c(uVar14);
  func_0x0001000d224c(&uStack_118);
  func_0x0001000a8868(&uStack_118,puStack_100);
  puVar6 = puStack_100;
  (**(code **)((long)ppuStack_f8 + 0xc0))(puStack_100,ppuStack_f8);
  func_0x0001000834e4(&uStack_118);
  puStack_100 = &UNK_1106510b0;
  ppuStack_f8 = &PTR_DAT_1106510c8;
  bStack_110 = (byte)puVar6 & 1;
  lVar8 = 0;
  uStack_118 = uVar14;
  func_0x00010340a658();
  func_0x000107c613fc();
  func_0x0001000c6518(&uStack_118,&UNK_1106510b0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(9);
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar12 = (undefined8 *)((long)&lStack_200 + lVar1);
  (**(code **)(extraout_x12 + 0x10))(puVar12);
  uStack_140 = *puVar12;
  uStack_138 = *(undefined1 *)((long)&uStack_1f8 + lVar1);
  puStack_128 = &UNK_1106510b0;
  ppuStack_120 = &PTR_DAT_1106510c8;
  *(undefined8 *)(lVar8 + 0xb8) = 0;
  *(undefined8 *)(lVar8 + 0xc0) = 0;
  *(undefined8 *)(lVar8 + 0xb0) = 0;
  *(undefined1 *)(lVar8 + 200) = 0;
  pcVar9 = "PlayGamesActionBarController";
  func_0x0001000c10c0();
  func_0x000107c61180();
  *(undefined8 *)(lVar8 + 0xd8) = 0;
  *(undefined8 *)(lVar8 + 0xe0) = 0;
  *(char **)(lVar8 + 0xd0) = pcVar9;
  func_0x00010340bae8(&uStack_140,lVar8 + 0x80);
  *(undefined8 *)(lVar8 + 0xa8) = uVar13;
  *(undefined8 *)(lVar8 + 0x10) = uStack_188;
  *(undefined8 *)(lVar8 + 0x18) = uStack_190;
  *(undefined8 *)(lVar8 + 0x20) = uStack_198;
  *(undefined8 *)(lVar8 + 0x28) = uStack_180;
  *(undefined8 *)(lVar8 + 0x30) = uStack_1a0;
  *(undefined8 *)(lVar8 + 0x38) = uStack_1a8;
  *(char *)(lVar8 + 0x40) = (char)uStack_1cc;
  *(undefined8 *)(lVar8 + 0x50) = uStack_1d8;
  *(undefined8 *)(lVar8 + 0x48) = uStack_1e0;
  *(undefined8 *)(lVar8 + 0x60) = uStack_1e8;
  *(undefined8 *)(lVar8 + 0x58) = uStack_1f0;
  *(char *)(lVar8 + 0x68) = (char)uStack_16c;
  *(undefined8 *)(lVar8 + 0x70) = uStack_1f8;
  *(undefined8 *)(lVar8 + 0x78) = uVar10;
  func_0x0001000834e4(&uStack_118);
  lVar1 = lStack_158;
  *(long *)(lStack_158 + 0x10) = lVar8;
  func_0x000107c6157c(lVar8);
  func_0x00010340993c();
  func_0x000107c61170(lStack_168);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(uStack_1c0);
  func_0x000107c61170(lStack_160);
  func_0x000107c61170(uStack_178);
  func_0x000107c61170(uStack_148);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61574(lVar8);
  *plStack_150 = lVar1;
  plStack_150[1] = (long)&PTR_DAT_110651588;
  return;
}



/* Entry: 1038d8f34; end: 1038d960f;  */

void FUN_1038d8f34(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  char *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  
  puVar2 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x000107c61168(PTR__OBJC_CLASS___UIDevice_1126aeb10);
  FUN_107c40efc();
  func_0x000107c61180();
  FUN_107c5d9bc();
  func_0x000107c61170(puVar2);
  uVar3 = 0x7720732774616857;
  func_0x000107c5fadc(0x7720732774616857,0xed00003f676e6f72);
  puVar4 = PTR__OBJC_CLASS___UIAlertController_1126aeb78;
  func_0x000107c61168();
  func_0x000107c3dac0();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  puVar5 = PTR__OBJC_CLASS___UIAlertAction_1126aeb80;
  func_0x000107c61168(PTR__OBJC_CLASS___UIAlertAction_1126aeb80);
  puVar2 = &UNK_1106a70a8;
  func_0x000107c613fc(&UNK_1106a70a8,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  puVar6 = &UNK_1106a72d8;
  func_0x000107c613fc(&UNK_1106a72d8,0x88,7);
  *(undefined **)(puVar6 + 0x10) = puVar2;
  puVar6[0x18] = 0;
  uVar3 = param_1[4];
  uVar10 = param_1[7];
  uVar9 = param_1[6];
  *(undefined8 *)(puVar6 + 0x48) = param_1[5];
  *(undefined8 *)(puVar6 + 0x40) = uVar3;
  *(undefined8 *)(puVar6 + 0x58) = uVar10;
  *(undefined8 *)(puVar6 + 0x50) = uVar9;
  uVar3 = param_1[8];
  *(undefined8 *)(puVar6 + 0x68) = param_1[9];
  *(undefined8 *)(puVar6 + 0x60) = uVar3;
  uVar3 = *(undefined8 *)((long)param_1 + 0x49);
  *(undefined8 *)(puVar6 + 0x71) = *(undefined8 *)((long)param_1 + 0x51);
  *(undefined8 *)(puVar6 + 0x69) = uVar3;
  uVar3 = *param_1;
  uVar10 = param_1[3];
  uVar9 = param_1[2];
  *(undefined8 *)(puVar6 + 0x28) = param_1[1];
  *(undefined8 *)(puVar6 + 0x20) = uVar3;
  *(undefined8 *)(puVar6 + 0x38) = uVar10;
  *(undefined8 *)(puVar6 + 0x30) = uVar9;
  *(undefined8 *)(puVar6 + 0x80) = param_2;
  func_0x000107c6157c(puVar2);
  func_0x0001038d9ce4(param_1,&puStack_d0);
  func_0x000107c61174();
  uVar3 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f174c10);
  puStack_b0 = &UNK_1038da190;
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0x42000000;
  puStack_c0 = &UNK_100df8ce8;
  puStack_b8 = &UNK_1106a72f0;
  ppuVar7 = &puStack_d0;
  puStack_a8 = puVar6;
  func_0x000107c60bc4(ppuVar7);
  func_0x000107c61574(puStack_a8);
  puVar6 = puVar5;
  func_0x000107c3cffc(puVar5);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61574(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c3d598(puVar4);
  func_0x000107c61170(puVar6);
  puVar2 = &UNK_1106a70a8;
  func_0x000107c613fc(&UNK_1106a70a8,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  puVar6 = &UNK_1106a7328;
  func_0x000107c613fc(&UNK_1106a7328,0x88,7);
  *(undefined **)(puVar6 + 0x10) = puVar2;
  puVar6[0x18] = 1;
  uVar3 = param_1[4];
  uVar10 = param_1[7];
  uVar9 = param_1[6];
  *(undefined8 *)(puVar6 + 0x48) = param_1[5];
  *(undefined8 *)(puVar6 + 0x40) = uVar3;
  *(undefined8 *)(puVar6 + 0x58) = uVar10;
  *(undefined8 *)(puVar6 + 0x50) = uVar9;
  uVar3 = param_1[8];
  *(undefined8 *)(puVar6 + 0x68) = param_1[9];
  *(undefined8 *)(puVar6 + 0x60) = uVar3;
  uVar3 = *(undefined8 *)((long)param_1 + 0x49);
  *(undefined8 *)(puVar6 + 0x71) = *(undefined8 *)((long)param_1 + 0x51);
  *(undefined8 *)(puVar6 + 0x69) = uVar3;
  uVar3 = *param_1;
  uVar10 = param_1[3];
  uVar9 = param_1[2];
  *(undefined8 *)(puVar6 + 0x28) = param_1[1];
  *(undefined8 *)(puVar6 + 0x20) = uVar3;
  *(undefined8 *)(puVar6 + 0x38) = uVar10;
  *(undefined8 *)(puVar6 + 0x30) = uVar9;
  *(undefined8 *)(puVar6 + 0x80) = param_2;
  func_0x0001038d9ce4(param_1,&puStack_d0);
  func_0x000107c61174();
  func_0x000107c6157c(puVar2);
  uVar3 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f174c30);
  puStack_b0 = &UNK_1038da1f0;
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0x42000000;
  puStack_c0 = &UNK_100df8ce8;
  puStack_b8 = &UNK_1106a7340;
  ppuVar7 = &puStack_d0;
  puStack_a8 = puVar6;
  func_0x000107c60bc4(ppuVar7);
  func_0x000107c61574(puStack_a8);
  puVar6 = puVar5;
  func_0x000107c3cffc(puVar5);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61574(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c3d598(puVar4);
  func_0x000107c61170(puVar6);
  puVar2 = &UNK_1106a70a8;
  func_0x000107c613fc(&UNK_1106a70a8,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  puVar6 = &UNK_1106a7378;
  func_0x000107c613fc(&UNK_1106a7378,0x88,7);
  *(undefined **)(puVar6 + 0x10) = puVar2;
  puVar6[0x18] = 2;
  uVar3 = param_1[4];
  uVar10 = param_1[7];
  uVar9 = param_1[6];
  *(undefined8 *)(puVar6 + 0x48) = param_1[5];
  *(undefined8 *)(puVar6 + 0x40) = uVar3;
  *(undefined8 *)(puVar6 + 0x58) = uVar10;
  *(undefined8 *)(puVar6 + 0x50) = uVar9;
  uVar3 = param_1[8];
  *(undefined8 *)(puVar6 + 0x68) = param_1[9];
  *(undefined8 *)(puVar6 + 0x60) = uVar3;
  uVar3 = *(undefined8 *)((long)param_1 + 0x49);
  *(undefined8 *)(puVar6 + 0x71) = *(undefined8 *)((long)param_1 + 0x51);
  *(undefined8 *)(puVar6 + 0x69) = uVar3;
  uVar3 = *param_1;
  uVar10 = param_1[3];
  uVar9 = param_1[2];
  *(undefined8 *)(puVar6 + 0x28) = param_1[1];
  *(undefined8 *)(puVar6 + 0x20) = uVar3;
  *(undefined8 *)(puVar6 + 0x38) = uVar10;
  *(undefined8 *)(puVar6 + 0x30) = uVar9;
  *(undefined8 *)(puVar6 + 0x80) = param_2;
  func_0x0001038d9ce4(param_1,&puStack_d0);
  func_0x000107c61174();
  func_0x000107c6157c(puVar2);
  uVar3 = 0x68746f42;
  func_0x000107c5fadc(0x68746f42,0xe400000000000000);
  puStack_b0 = &UNK_1038da1f4;
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0x42000000;
  puStack_c0 = &UNK_100df8ce8;
  puStack_b8 = &UNK_1106a7390;
  ppuVar7 = &puStack_d0;
  puStack_a8 = puVar6;
  func_0x000107c60bc4(ppuVar7);
  func_0x000107c61574(puStack_a8);
  puVar6 = puVar5;
  func_0x000107c3cffc(puVar5);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61574(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c3d598(puVar4);
  func_0x000107c61170(puVar6);
  puVar2 = &UNK_1106a70a8;
  func_0x000107c613fc(&UNK_1106a70a8,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  puVar6 = &UNK_1106a73c8;
  func_0x000107c613fc(&UNK_1106a73c8,0x88,7);
  *(undefined **)(puVar6 + 0x10) = puVar2;
  puVar6[0x18] = 3;
  uVar3 = param_1[4];
  uVar10 = param_1[7];
  uVar9 = param_1[6];
  *(undefined8 *)(puVar6 + 0x48) = param_1[5];
  *(undefined8 *)(puVar6 + 0x40) = uVar3;
  *(undefined8 *)(puVar6 + 0x58) = uVar10;
  *(undefined8 *)(puVar6 + 0x50) = uVar9;
  uVar3 = param_1[8];
  *(undefined8 *)(puVar6 + 0x68) = param_1[9];
  *(undefined8 *)(puVar6 + 0x60) = uVar3;
  uVar3 = *(undefined8 *)((long)param_1 + 0x49);
  *(undefined8 *)(puVar6 + 0x71) = *(undefined8 *)((long)param_1 + 0x51);
  *(undefined8 *)(puVar6 + 0x69) = uVar3;
  uVar3 = *param_1;
  uVar10 = param_1[3];
  uVar9 = param_1[2];
  *(undefined8 *)(puVar6 + 0x28) = param_1[1];
  *(undefined8 *)(puVar6 + 0x20) = uVar3;
  *(undefined8 *)(puVar6 + 0x38) = uVar10;
  *(undefined8 *)(puVar6 + 0x30) = uVar9;
  *(undefined8 *)(puVar6 + 0x80) = param_2;
  func_0x0001038d9ce4(param_1,&puStack_d0);
  func_0x000107c61174();
  func_0x000107c6157c(puVar2);
  uVar3 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f174c50);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b0 = &UNK_1038da1f8;
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0x42000000;
  puStack_c0 = &UNK_100df8ce8;
  puStack_b8 = &UNK_1106a73e0;
  ppuVar7 = &puStack_d0;
  puStack_a8 = puVar6;
  func_0x000107c60bc4();
  func_0x000107c61574(puStack_a8);
  puVar6 = puVar5;
  func_0x000107c3cffc(puVar5);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61574(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c3d598(puVar4);
  func_0x000107c61170(puVar6);
  uVar3 = 0x6c65636e6143;
  func_0x000107c5fadc(0x6c65636e6143,0xe600000000000000);
  func_0x000107c3cffc();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c3d598(puVar4);
  func_0x000107c61170(puVar5);
  pcVar8 = "present(_:from:)";
  func_0x0001000c10c0("present(_:from:)");
  func_0x000107c61180();
  puVar2 = &UNK_1106a7418;
  func_0x000107c613fc(&UNK_1106a7418,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined **)(puVar2 + 0x18) = puVar4;
  puStack_b0 = &UNK_1038da250;
  puStack_d0 = puVar1;
  uStack_c8 = 0x42000000;
  puStack_c0 = &UNK_1000f6b44;
  puStack_b8 = &UNK_1106a7430;
  ppuVar7 = &puStack_d0;
  puStack_a8 = puVar2;
  func_0x000107c60bc4(ppuVar7);
  puVar2 = puStack_a8;
  func_0x000107c61174(param_2);
  func_0x000107c61174(puVar4);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(pcVar8);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61170(puVar4);
  func_0x000107c615e8(pcVar8);
  return;
}



/* Entry: 103af34a4; end: 103af3607;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103af34a4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112fe9788);
  func_0x000107c550d8(uVar6,param_2,1);
  func_0x000107c5a378(uVar6);
  uVar2 = uVar6;
  func_0x000107c4aba4(uVar6);
  func_0x000107c61180();
  func_0x000107c52e0c(0x4018000000000000);
  func_0x000107c61170(uVar2);
  uVar2 = uVar6;
  func_0x000107c4aba4(uVar6);
  func_0x000107c61180();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  puVar4 = puVar3;
  func_0x000107c3ab24();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  func_0x000107c52df8(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(puVar4);
  uVar2 = uVar6;
  func_0x000107c4aba4(uVar6);
  func_0x000107c61180();
  puVar3 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x000107c61168();
  FUN_107c40efc();
  func_0x000107c61180();
  puVar4 = puVar3;
  FUN_107c5d9bc();
  func_0x000107c61170(puVar3);
  uVar5 = 0x403ccccccccccccc;
  if (puVar4 != (undefined *)0x1) {
    uVar5 = 0x4038000000000000;
  }
  func_0x000107c539d4(uVar5,uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fe9798);
  func_0x000107c54b80(*puVar1,puVar1[1],puVar1[2],puVar1[3],uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10434f9e4; end: 10434fa83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10434f9e4(long param_1)

{
  undefined *puVar1;
  code *pcVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  if ((-1 < *(char *)(unaff_x20 + _DAT_113070730)) && (func_0x00010c252440(), param_1 == 1)) {
    puVar1 = PTR_PTR_1126affa8;
    _objc_opt_self();
    func_0x00010c22bc20();
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10434fa84);
      (*pcVar2)();
    }
    func_0x00010c0f8760();
    _objc_release(puVar1);
    pcVar2 = *(code **)(unaff_x20 + _DAT_113070720);
    if (pcVar2 != (code *)0x0) {
      uVar3 = ((undefined8 *)(unaff_x20 + _DAT_113070720))[1];
      _swift_retain(uVar3);
      (*pcVar2)();
      if (pcVar2 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_release_11034f4c0)(uVar3);
        return;
      }
      return;
    }
  }
  return;
}



/* Entry: 1044e69b0; end: 1044e6a77;  */

bool FUN_1044e69b0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b2930;
  _objc_opt_self();
  puVar2 = puVar1;
  func_0x00010bf5e640();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c075d00();
  _objc_release(puVar2);
  if ((int)puVar3 != 0) {
    func_0x00010bf5e640();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c07e1a0();
    _objc_release(puVar1);
    if ((int)puVar2 != 0) {
      if (lRam0000000113081038 != -1) {
        _swift_once(0x113081038,&UNK_1044e6774);
      }
      return 1080.0 <= dRam0000000113813b90;
    }
  }
  return false;
}



/* Entry: 10540c48c; end: 10540c8f3;  */

void FUN_10540c48c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,long param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  
  _objc_retain(param_4);
  _objc_retain(param_9);
  _objc_retain(param_13);
  _objc_retain(param_12);
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  uVar1 = param_2;
  func_0x00010540baf8(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b8c50;
  func_0x00010c0cb140(PTR_PTR_1126b8c50);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c171a40();
  _objc_release(param_11);
  uVar3 = param_7;
  func_0x00010c269d40(param_7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  uVar4 = uVar3;
  func_0x00010bfc74a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c08c0(puVar2,param_3,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar3 = param_8;
  func_0x00010c269d40(param_8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_8);
  uVar4 = uVar3;
  func_0x00010c15ffa0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16c8e0(puVar2,param_3,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar3 = param_6;
  func_0x00010c269d40(param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  uVar4 = uVar3;
  func_0x00010c25d160(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17de60(puVar2,param_3,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  func_0x00010c1aee20(puVar2,param_3,param_5);
  _objc_release(param_5);
  func_0x00010c1cc560(puVar2,param_3,param_12);
  _objc_release(param_12);
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078c00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,param_4);
  if (((ulong)puVar5 & 1) == 0) {
    puVar5 = PTR_PTR_1126afab0;
    func_0x00010c0cb140(PTR_PTR_1126afab0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a99c0();
    func_0x00010c18cf20(puVar2,param_3,puVar5);
    _objc_release(puVar5);
  }
  uVar3 = param_9;
  func_0x00010c269d40(param_9);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c0df720(param_1 * 1000.0,puVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfbf000(uVar3,param_3,puVar5,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar6);
  _objc_release(uVar3);
  func_0x00010c17ca60(puVar2,param_3,uVar4);
  lVar7 = param_10;
  func_0x00010bfca0e0(param_10,param_3,0x60);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_10;
  func_0x00010bfca0e0(param_10,param_3,0x65);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_10);
  puVar5 = PTR_PTR_1126b7828;
  lVar9 = lVar7;
  func_0x00010bf529e0(lVar7);
  lVar10 = lVar8;
  func_0x00010bf529e0(lVar8);
  func_0x00010bf0a0e0(puVar5,param_3,lVar10 + lVar9);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar7;
  func_0x00010bf529e0();
  if (lVar9 != 0) {
    func_0x00010befc860(puVar5,param_3,lVar7);
  }
  lVar9 = lVar8;
  func_0x00010bf529e0();
  if (lVar9 != 0) {
    func_0x00010befc860(puVar5,param_3,lVar8);
  }
  puVar6 = PTR_PTR_1126b7820;
  func_0x00010c0cb140(PTR_PTR_1126b7820);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fcf40();
  func_0x00010c17de40(puVar2,param_3,puVar6);
  uVar3 = param_13;
  func_0x00010c269d40(param_13);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_13);
  func_0x00010540bb20(param_2);
  uVar11 = uVar3;
  func_0x00010bfc3c20(uVar3,param_3,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17d780(puVar2,param_3,uVar11);
  _objc_release(uVar11);
  _objc_release(uVar3);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(param_9);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1057b1094; end: 1057b117b;  */

void FUN_1057b1094(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010c08fa60();
  if ((lVar1 == 0) || (lVar1 = param_3, func_0x00010c08fa60(), lVar1 == 0)) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126be478;
    func_0x00010c0cb140(PTR_PTR_1126be478);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e620();
    func_0x00010c1e52e0(puVar2);
    func_0x00010c1d9cc0(puVar2);
    func_0x00010c18c9a0(puVar2);
    func_0x00010c1d9ca0(puVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1059ce550; end: 1059ce7bb;  */

void FUN_1059ce550(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar2 = param_1;
  func_0x00010c09a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar2 = param_1;
    func_0x00010c09a140();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf52a60();
    if (lVar3 != 0) {
      lVar12 = *plStack_120;
      do {
        lVar10 = 0;
        do {
          if (*plStack_120 != lVar12) {
            _objc_enumerationMutation(lVar2);
          }
          uVar11 = *(undefined8 *)(lStack_128 + lVar10 * 8);
          uVar4 = uVar11;
          func_0x00010c122de0();
          if ((int)uVar4 != 0) {
            uVar4 = uVar11;
            func_0x00010c122de0(uVar11);
            puVar5 = PTR_PTR_1126c0b60;
            _objc_alloc(PTR_PTR_1126c0b60);
            func_0x00010c122b80(uVar11);
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar11;
            func_0x000109189508();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c055fc0(puVar5,param_2,(int)uVar4 == 2,uVar6);
            _objc_release(uVar6);
            _objc_release(uVar11);
            func_0x00010befa120(puVar1,param_2,puVar5);
            _objc_release(puVar5);
          }
          lVar10 = lVar10 + 1;
        } while (lVar3 != lVar10);
        lVar3 = lVar2;
        func_0x00010bf52a60(lVar2,param_2,&uStack_130,auStack_f0,0x10);
      } while (lVar3 != 0);
    }
    _objc_release(lVar2);
  }
  puVar5 = PTR_PTR_1126c0b48;
  _objc_alloc();
  lVar2 = param_1;
  func_0x00010c09a080();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x000109189508();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  func_0x00010c0d4f60(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010c11f520(param_1);
  lVar7 = param_1;
  func_0x00010bf5aac0(param_1);
  func_0x00010c026300((double)lVar7,puVar5,param_2,lVar3,lVar12,lVar10,puVar1);
  _objc_release(lVar12);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(puVar1);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puVar1 = PTR_PTR_1126ae748;
    func_0x00010bf24820(PTR_PTR_1126ae748);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    ppuVar9 = &PTR____CFConstantStringClassReference_110daafd8;
    func_0x00010c08fa60();
    puVar5 = puVar1;
    if (ppuVar9 != (undefined **)0x0) {
      func_0x00010c1d0640(puVar8,param_2,&PTR____CFConstantStringClassReference_110daafd8,
                          &PTR____CFConstantStringClassReference_110dadcb8);
      func_0x00010bef9140(puVar1,param_2,puVar8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
    }
    _objc_release(puVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105a70bb4; end: 105a70d7f;  */

void FUN_105a70bb4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar1 = PTR_PTR_1126c1c28;
  _objc_retain();
  _objc_alloc(puVar1);
  uVar2 = param_1;
  func_0x00010c27a3a0();
  uVar3 = param_1;
  func_0x00010bf35520();
  uVar4 = param_1;
  func_0x00010bf16f40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bdc3580();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c15e740();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  func_0x00010bf6fd20(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bfb0d20();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_1;
  func_0x00010bf6fd20(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010bfd38e0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_1;
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar15 = uVar14;
  func_0x00010bf40c40();
  func_0x00010c055940(puVar1,param_2,uVar2,uVar3,uVar5,uVar7,uVar10,uVar13,uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106a5ba90; end: 106a5bc53;  */

undefined1 * FUN_106a5ba90(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  undefined **ppuVar6;
  undefined *unaff_x20;
  undefined1 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined *puVar10;
  long lStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  ppuVar6 = &puStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  if (param_1 == 0) {
    puVar7 = (undefined1 *)0x0;
  }
  else {
    unaff_x20 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
    _objc_alloc();
    func_0x00010c057bc0();
    puVar1 = unaff_x20;
    func_0x00010c11d4e0();
    _objc_retainAutoreleasedReturnValue();
    lStack_128 = 0;
    puStack_130 = (undefined *)0x0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    _objc_retain();
    puVar2 = puVar1;
    func_0x00010bf52a60();
    if (puVar2 != (undefined *)0x0) {
      lVar9 = *plStack_120;
      do {
        puVar10 = (undefined *)0x0;
        do {
          if (*plStack_120 != lVar9) {
            _objc_enumerationMutation(puVar1);
          }
          uVar8 = *(ulong *)(lStack_128 + (long)puVar10 * 8);
          uVar3 = uVar8;
          func_0x00010c0d4f60();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          ppuVar6 = &PTR____CFConstantStringClassReference_110f83ad8;
          func_0x00010c0720c0();
          if ((uVar4 & 1) == 0) {
            _objc_release(uVar3);
          }
          else {
            func_0x00010c296d80();
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar8;
            func_0x00010bf1f3c0();
            _objc_release(uVar8);
            _objc_release(uVar3);
            if ((uVar4 & 1) != 0) {
              puVar7 = (undefined1 *)0x1;
              goto LAB_106a5bbf4;
            }
          }
          puVar10 = puVar10 + 1;
        } while (puVar2 != puVar10);
        puVar2 = puVar1;
        ppuVar6 = &puStack_130;
        func_0x00010bf52a60();
      } while (puVar2 != (undefined *)0x0);
    }
    puVar7 = (undefined1 *)0x0;
LAB_106a5bbf4:
    _objc_release(puVar1);
    _objc_release(puVar1);
    _objc_release(unaff_x20);
    param_3 = ppuVar6;
  }
  lVar9 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    plVar5 = &lStack_160;
    puStack_138 = &UNK_106a5bc54;
    puStack_150 = unaff_x20;
    lStack_148 = param_1;
    puStack_140 = &stack0xfffffffffffffff0;
    _objc_retain(param_3);
    puStack_158 = PTR_PTR_1126f47e8;
    lStack_160 = lVar9;
    _objc_msgSendSuper2(&lStack_160,PTR_s_init_1125d9248);
    if (plVar5 != (long *)0x0) {
      _objc_storeWeak((undefined1 *)((long)plVar5 + 8),param_3);
    }
    _objc_release(param_3);
    return (undefined1 *)plVar5;
  }
  return puVar7;
}



/* Entry: 106af0f50; end: 106af0f5b;  */

void FUN_106af0f50(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc06f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__sysctl_11034cca0)();
  return;
}



/* Entry: 106b236f4; end: 106b23797;  */

void FUN_106b236f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126d0988;
  _objc_retain();
  _objc_opt_new(puVar1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar2 = puVar1;
  func_0x00010af82634();
  func_0x00010c0df7c0(puVar3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b5c0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar3);
  func_0x00010c180840(puVar1,param_2,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106c526d4; end: 106c52843;  */

void FUN_106c526d4(undefined8 param_1)

{
  undefined8 uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 unaff_x22;
  
  _objc_retain();
  uVar3 = param_1;
  func_0x00010bf141e0();
  uVar2 = (uint)uVar3;
  uVar3 = param_1;
  if (uVar2 < 2) {
    uVar4 = param_1;
    func_0x00010bfdbd40();
    if ((int)uVar4 == 0) {
LAB_106c52820:
      unaff_x22 = 0;
      goto LAB_106c52824;
    }
    func_0x00010c15a1a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0d4f60();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = uVar4;
    func_0x000106c5323c();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar5 = param_1;
    if (uVar2 == 4) {
      uVar4 = param_1;
      func_0x00010bfdbd40();
      if ((int)uVar4 == 0) goto LAB_106c52820;
      func_0x00010c15a1a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0d4f60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c099480();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (uVar2 != 5) goto LAB_106c52824;
      uVar4 = param_1;
      func_0x00010bfdbd40();
      if ((int)uVar4 == 0) goto LAB_106c52820;
      func_0x00010c15a1a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0d4f60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12a1a0();
      _objc_retainAutoreleasedReturnValue();
    }
    uVar6 = uVar5;
    func_0x00010c070160();
    uVar1 = 1;
    if ((int)uVar6 != 0) {
      uVar1 = 2;
    }
    unaff_x22 = uVar4;
    func_0x000106c5323c(uVar4,uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
  }
  _objc_release(uVar4);
  _objc_release(uVar3);
LAB_106c52824:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x22);
  return;
}



/* Entry: 106c52844; end: 106c529b3;  */

void FUN_106c52844(undefined8 param_1)

{
  undefined8 uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 unaff_x22;
  
  _objc_retain();
  uVar3 = param_1;
  func_0x00010bf141e0();
  uVar2 = (uint)uVar3;
  uVar3 = param_1;
  if (uVar2 < 2) {
    uVar4 = param_1;
    func_0x00010bfd4820();
    if ((int)uVar4 == 0) {
LAB_106c52990:
      unaff_x22 = 0;
      goto LAB_106c52994;
    }
    func_0x00010bf15140(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0d4f60();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = uVar4;
    func_0x000106c5323c();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar5 = param_1;
    if (uVar2 == 4) {
      uVar4 = param_1;
      func_0x00010bfd4820();
      if ((int)uVar4 == 0) goto LAB_106c52990;
      func_0x00010bf15140(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0d4f60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c099480();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (uVar2 != 5) goto LAB_106c52994;
      uVar4 = param_1;
      func_0x00010bfd4820();
      if ((int)uVar4 == 0) goto LAB_106c52990;
      func_0x00010bf15140(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0d4f60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12a1a0();
      _objc_retainAutoreleasedReturnValue();
    }
    uVar6 = uVar5;
    func_0x00010c070160();
    uVar1 = 1;
    if ((int)uVar6 != 0) {
      uVar1 = 2;
    }
    unaff_x22 = uVar4;
    func_0x000106c5323c(uVar4,uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
  }
  _objc_release(uVar4);
  _objc_release(uVar3);
LAB_106c52994:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x22);
  return;
}



/* Entry: 106c529b4; end: 106c52a83;  */

void FUN_106c529b4(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 unaff_x21;
  
  _objc_retain();
  _objc_retain(param_2);
  uVar2 = param_1;
  func_0x00010bf141e0();
  iVar1 = (int)uVar2;
  if ((iVar1 - 4U < 2) || (iVar1 == 0)) {
    unaff_x21 = param_2;
    func_0x000106c52a84(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (iVar1 == 1) {
    uVar2 = param_1;
    func_0x00010bf13d40(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0d4f60();
    _objc_retainAutoreleasedReturnValue();
    unaff_x21 = uVar3;
    func_0x000106c5323c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x21);
  return;
}



/* Entry: 106dee558; end: 106deeb8b;  */

/* WARNING: Possible PIC construction at 0x000106defae4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000106df12bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000106df134c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106df12c0) */
/* WARNING: Removing unreachable block (ram,0x000106df131c) */
/* WARNING: Removing unreachable block (ram,0x000106defae8) */
/* WARNING: Removing unreachable block (ram,0x000106defaf8) */
/* WARNING: Removing unreachable block (ram,0x000106defb04) */
/* WARNING: Removing unreachable block (ram,0x000106df1350) */
/* WARNING: Removing unreachable block (ram,0x000106df137c) */
/* WARNING: Removing unreachable block (ram,0x000106df1328) */
/* WARNING: Removing unreachable block (ram,0x000106df132c) */
/* WARNING: Removing unreachable block (ram,0x000106df133c) */
/* WARNING: Removing unreachable block (ram,0x000106df1344) */
/* WARNING: Removing unreachable block (ram,0x000106df1398) */
/* WARNING: Removing unreachable block (ram,0x000106df13bc) */
/* WARNING: Removing unreachable block (ram,0x000106df1428) */
/* WARNING: Removing unreachable block (ram,0x000106df1434) */
/* WARNING: Removing unreachable block (ram,0x000106df1438) */
/* WARNING: Removing unreachable block (ram,0x000106df144c) */
/* WARNING: Removing unreachable block (ram,0x000106df1454) */
/* WARNING: Removing unreachable block (ram,0x000106df149c) */
/* WARNING: Removing unreachable block (ram,0x000106df1504) */
/* WARNING: Removing unreachable block (ram,0x000106df1510) */
/* WARNING: Removing unreachable block (ram,0x000106df1514) */
/* WARNING: Removing unreachable block (ram,0x000106df1524) */
/* WARNING: Removing unreachable block (ram,0x000106df152c) */
/* WARNING: Removing unreachable block (ram,0x000106df1580) */
/* WARNING: Removing unreachable block (ram,0x000106df15d8) */
/* WARNING: Removing unreachable block (ram,0x000106df15e4) */
/* WARNING: Removing unreachable block (ram,0x000106df1600) */
/* WARNING: Removing unreachable block (ram,0x000106df1608) */
/* WARNING: Removing unreachable block (ram,0x000106df1618) */
/* WARNING: Removing unreachable block (ram,0x000106df1634) */
/* WARNING: Removing unreachable block (ram,0x000106df1648) */
/* WARNING: Removing unreachable block (ram,0x000106df1674) */

undefined **
FUN_106dee558(undefined8 param_1,double param_2,undefined **param_3,undefined **param_4)

{
  undefined ***pppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined **unaff_x19;
  undefined **ppuVar10;
  long lVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined **unaff_x24;
  undefined **unaff_x25;
  long lVar19;
  undefined *puVar20;
  undefined **unaff_x26;
  undefined **unaff_x27;
  long lVar21;
  undefined1 ***pppuVar22;
  undefined *puVar23;
  float fVar24;
  double dVar25;
  double unaff_d8;
  double unaff_d9;
  undefined **ppuStack_790;
  undefined **ppuStack_788;
  undefined *puStack_780;
  long lStack_778;
  long *plStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined *apuStack_740 [16];
  long lStack_6c0;
  undefined **ppuStack_6b0;
  undefined **ppuStack_6a8;
  undefined **ppuStack_6a0;
  undefined **ppuStack_698;
  undefined **ppuStack_690;
  undefined *puStack_688;
  undefined **ppuStack_680;
  undefined **ppuStack_678;
  undefined **ppuStack_670;
  undefined **ppuStack_668;
  undefined1 **ppuStack_660;
  code *pcStack_658;
  undefined **ppuStack_650;
  undefined **ppuStack_648;
  long lStack_640;
  undefined **ppuStack_638;
  undefined8 uStack_630;
  long lStack_628;
  undefined8 *puStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined *puStack_5f0;
  long lStack_5e8;
  long *plStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  long lStack_5a8;
  long *plStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  long lStack_568;
  long *plStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined *apuStack_4b0 [48];
  long lStack_330;
  undefined **ppuStack_320;
  undefined **ppuStack_318;
  undefined **ppuStack_310;
  undefined **ppuStack_308;
  undefined **ppuStack_300;
  undefined **ppuStack_2f8;
  undefined **ppuStack_2f0;
  undefined **ppuStack_2e8;
  undefined **ppuStack_2e0;
  undefined **ppuStack_2d8;
  undefined1 *puStack_2d0;
  undefined *puStack_2c8;
  undefined **ppuStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long lStack_228;
  undefined8 *puStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  ppuVar12 = param_3;
  func_0x00010bfaebe0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar10 = ppuVar12;
  func_0x00010c297ca0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar13 = ppuVar10;
  func_0x00010bf1f3c0();
  _objc_release(ppuVar10);
  _objc_release(ppuVar12);
  if ((int)ppuVar13 != 0) {
    ppuVar13 = param_3;
    func_0x00010bfaebe0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = ppuVar13;
    func_0x00010c297c00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar13);
    ppuVar10 = ppuVar12;
    func_0x00010c15a3e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = ppuVar10;
    func_0x00010c08fa60();
    _objc_release(ppuVar10);
    if (ppuVar13 != (undefined **)0x0) {
      uStack_208 = 0;
      uStack_210 = 0;
      uStack_1f8 = 0;
      uStack_200 = 0;
      lStack_228 = 0;
      uStack_230 = 0;
      uStack_218 = 0;
      puStack_220 = (undefined8 *)0x0;
      ppuVar10 = ppuVar12;
      func_0x00010c2981c0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar16 = ppuVar10;
      func_0x00010bf52a60();
      if (ppuVar16 != (undefined **)0x0) {
        unaff_x27 = (undefined **)*puStack_220;
        do {
          unaff_x19 = (undefined **)0x0;
          do {
            if ((undefined **)*puStack_220 != unaff_x27) {
              _objc_enumerationMutation(ppuVar10);
            }
            ppuVar15 = *(undefined ***)(lStack_228 + (long)unaff_x19 * 8);
            unaff_x24 = ppuVar15;
            func_0x00010c297e20();
            _objc_retainAutoreleasedReturnValue();
            unaff_x25 = ppuVar12;
            func_0x00010c15a3e0();
            _objc_retainAutoreleasedReturnValue();
            unaff_x26 = unaff_x24;
            func_0x00010c0720c0();
            _objc_release(unaff_x25);
            _objc_release(unaff_x24);
            if (((ulong)unaff_x26 & 1) != 0) {
              unaff_x24 = (undefined **)PTR_PTR_1126c0e50;
              _objc_alloc();
              ppuVar13 = ppuVar15;
              func_0x00010c297e20();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c297f60();
              _objc_retainAutoreleasedReturnValue();
              ppuVar16 = unaff_x24;
              func_0x00010c036540();
              unaff_x25 = ppuVar15;
              goto LAB_106deeb28;
            }
            unaff_x19 = (undefined **)((long)unaff_x19 + 1);
          } while (ppuVar16 != unaff_x19);
          ppuVar16 = ppuVar10;
          func_0x00010bf52a60();
          ppuVar13 = (undefined **)0x0;
        } while (ppuVar16 != (undefined **)0x0);
      }
      _objc_release(ppuVar10);
    }
    _objc_release(ppuVar12);
  }
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  lStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  plStack_260 = (long *)0x0;
  ppuStack_2b8 = param_3;
  func_0x00010c2553e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = param_3;
  func_0x00010bf52a60();
  if (ppuVar12 != (undefined **)0x0) {
    lVar21 = *plStack_260;
    do {
      unaff_x19 = (undefined **)0x0;
      do {
        if (*plStack_260 != lVar21) {
          _objc_enumerationMutation(param_3);
        }
        ppuVar13 = *(undefined ***)(lStack_268 + (long)unaff_x19 * 8);
        ppuVar10 = ppuVar13;
        func_0x00010bfedfc0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x24 = ppuVar10;
        func_0x00010c297b40();
        _objc_retainAutoreleasedReturnValue();
        unaff_x25 = unaff_x24;
        func_0x00010c297b40();
        _objc_retainAutoreleasedReturnValue();
        unaff_x26 = unaff_x25;
        func_0x00010c297e20();
        _objc_retainAutoreleasedReturnValue();
        unaff_x27 = unaff_x26;
        func_0x00010c08fa60();
        _objc_release(unaff_x26);
        _objc_release(unaff_x25);
        _objc_release(unaff_x24);
        _objc_release(ppuVar10);
        if (unaff_x27 != (undefined **)0x0) {
          func_0x00010bfedfc0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar12 = ppuVar13;
          func_0x00010c297b40();
          _objc_retainAutoreleasedReturnValue();
          ppuVar10 = ppuVar12;
          func_0x00010c297b40();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar12);
          _objc_release(ppuVar13);
          ppuVar16 = (undefined **)PTR_PTR_1126c0e50;
          _objc_alloc();
          ppuVar13 = ppuVar10;
          func_0x00010c297e20();
          _objc_retainAutoreleasedReturnValue();
          unaff_x24 = ppuVar10;
          func_0x00010c0d4f60();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c036540();
          _objc_release(unaff_x24);
          ppuVar12 = param_3;
          param_3 = ppuStack_2b8;
          goto LAB_106deeb2c;
        }
        unaff_x19 = (undefined **)((long)unaff_x19 + 1);
      } while (ppuVar12 != unaff_x19);
      ppuVar12 = param_3;
      func_0x00010bf52a60();
      ppuVar10 = (undefined **)0x0;
    } while (ppuVar12 != (undefined **)0x0);
  }
  _objc_release(param_3);
  param_3 = ppuStack_2b8;
  uStack_288 = 0;
  uStack_290 = 0;
  uStack_278 = 0;
  uStack_280 = 0;
  lStack_2a8 = 0;
  uStack_2b0 = 0;
  uStack_298 = 0;
  puStack_2a0 = (undefined8 *)0x0;
  ppuVar12 = ppuStack_2b8;
  func_0x00010bf308c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar16 = ppuVar12;
  func_0x00010bf52a60();
  if (ppuVar16 != (undefined **)0x0) {
    unaff_x19 = (undefined **)*puStack_2a0;
LAB_106dee858:
    unaff_x25 = (undefined **)0x0;
LAB_106dee85c:
    if ((undefined **)*puStack_2a0 != unaff_x19) {
      _objc_enumerationMutation(ppuVar12);
    }
    ppuVar13 = *(undefined ***)(lStack_2a8 + (long)unaff_x25 * 8);
    ppuVar10 = ppuVar13;
    func_0x00010c0fd620();
    _objc_retainAutoreleasedReturnValue();
    ppuVar15 = ppuVar10;
    func_0x00010bf529e0();
    _objc_release(ppuVar10);
    if (ppuVar15 == (undefined **)0x0) goto code_r0x000106dee8a4;
    ppuVar16 = ppuVar13;
    func_0x00010c0fd620();
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = ppuVar16;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar16);
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    _objc_retain(ppuVar10);
    ppuVar16 = ppuVar10;
    func_0x00010bf950c0(ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067fc0();
    ppuVar15 = ppuVar10;
    func_0x00010c24ff00(ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067fc0();
    _objc_release(ppuVar15);
    _objc_release(ppuVar16);
    ppuVar16 = ppuVar10;
    func_0x00010c24ff00(ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2827c0();
    ppuVar15 = ppuVar13;
    func_0x00010c260c80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar13);
    _objc_release(ppuVar16);
    ppuVar16 = (undefined **)PTR_PTR_1126c0e50;
    _objc_alloc();
    unaff_x25 = ppuVar10;
    func_0x00010c0fd0e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar10);
    func_0x00010c036540();
    _objc_release(unaff_x25);
    unaff_x24 = ppuVar15;
LAB_106deeb28:
    _objc_release(ppuVar15);
LAB_106deeb2c:
    _objc_release(ppuVar13);
    _objc_release(ppuVar10);
    goto LAB_106deeb3c;
  }
LAB_106dee8cc:
  ppuVar16 = (undefined **)0x0;
LAB_106deeb3c:
  _objc_release(ppuVar12);
  ppuVar15 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puStack_2c8 = &UNK_106deeb8c;
    lStack_330 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuVar6 = param_4;
    ppuStack_320 = param_3;
    ppuStack_318 = unaff_x27;
    ppuStack_310 = unaff_x26;
    ppuStack_308 = unaff_x25;
    ppuStack_300 = unaff_x24;
    ppuStack_2f8 = ppuVar16;
    ppuStack_2f0 = ppuVar13;
    ppuStack_2e8 = ppuVar10;
    ppuStack_2e0 = ppuVar12;
    ppuStack_2d8 = unaff_x19;
    puStack_2d0 = &stack0xfffffffffffffff0;
    _objc_retain();
    _objc_retain(param_4);
    ppuVar13 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
    ppuVar10 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lStack_568 = 0;
    uStack_570 = 0;
    uStack_558 = 0;
    plStack_560 = (long *)0x0;
    uStack_548 = 0;
    uStack_550 = 0;
    uStack_538 = 0;
    uStack_540 = 0;
    ppuStack_648 = ppuVar15;
    ppuStack_638 = ppuVar10;
    func_0x00010bf308c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = ppuVar15;
    func_0x00010bf52a60();
    if (ppuVar10 != (undefined **)0x0) {
      lVar21 = *plStack_560;
      do {
        ppuVar12 = (undefined **)0x0;
        do {
          if (*plStack_560 != lVar21) {
            _objc_enumerationMutation(ppuVar15);
          }
          unaff_x24 = *(undefined ***)(lStack_568 + (long)ppuVar12 * 8);
          unaff_x25 = unaff_x24;
          func_0x00010c26b700();
          _objc_retainAutoreleasedReturnValue();
          unaff_x26 = unaff_x25;
          func_0x00010c08fa60();
          _objc_release(unaff_x25);
          if (unaff_x26 != (undefined **)0x0) {
            func_0x00010c26b700();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(ppuStack_638);
            _objc_release(unaff_x24);
          }
          ppuVar12 = (undefined **)((long)ppuVar12 + 1);
        } while (ppuVar10 != ppuVar12);
        ppuVar10 = ppuVar15;
        func_0x00010bf52a60();
      } while (ppuVar10 != (undefined **)0x0);
    }
    _objc_release(ppuVar15);
    if (param_4 != (undefined **)0x0) {
      ppuVar6 = (undefined **)0x0;
      ppuVar10 = param_4;
      func_0x000108020568();
      _objc_retainAutoreleasedReturnValue();
      lStack_5a8 = 0;
      uStack_5b0 = 0;
      uStack_598 = 0;
      plStack_5a0 = (long *)0x0;
      uStack_588 = 0;
      uStack_590 = 0;
      uStack_578 = 0;
      uStack_580 = 0;
      ppuVar16 = ppuVar10;
      func_0x000107e639a4();
      _objc_retainAutoreleasedReturnValue();
      ppuVar15 = ppuVar16;
      func_0x00010bf52a60();
      if (ppuVar15 != (undefined **)0x0) {
        lVar21 = *plStack_5a0;
        do {
          ppuVar12 = (undefined **)0x0;
          do {
            if (*plStack_5a0 != lVar21) {
              _objc_enumerationMutation(ppuVar16);
            }
            unaff_x26 = *(undefined ***)(lStack_5a8 + (long)ppuVar12 * 8);
            func_0x00010c0cc0c0();
            _objc_retainAutoreleasedReturnValue();
            unaff_x27 = unaff_x26;
            func_0x00010bf30500();
            _objc_retainAutoreleasedReturnValue();
            unaff_x25 = unaff_x27;
            func_0x00010c26b700();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(unaff_x27);
            _objc_release(unaff_x26);
            ppuVar14 = unaff_x25;
            func_0x00010c08fa60();
            if (ppuVar14 != (undefined **)0x0) {
              func_0x00010befa120(ppuStack_638);
            }
            _objc_release(unaff_x25);
            ppuVar12 = (undefined **)((long)ppuVar12 + 1);
          } while (ppuVar15 != ppuVar12);
          ppuVar15 = ppuVar16;
          func_0x00010bf52a60();
          unaff_x24 = (undefined **)0x0;
        } while (ppuVar15 != (undefined **)0x0);
      }
      _objc_release(ppuVar16);
      _objc_release(ppuVar10);
    }
    ppuVar16 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    ppuStack_650 = param_4;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar23 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar14 = ppuStack_638;
    dVar25 = 0.0;
    lStack_5e8 = 0;
    puStack_5f0 = (undefined *)0x0;
    uStack_5d8 = 0;
    plStack_5e0 = (long *)0x0;
    uStack_5c8 = 0;
    uStack_5d0 = 0;
    uStack_5b8 = 0;
    uStack_5c0 = 0;
    _objc_retain(ppuStack_638);
    ppuVar10 = &puStack_5f0;
    ppuVar15 = apuStack_4b0;
    func_0x00010bf52a60();
    if (ppuVar14 != (undefined **)0x0) {
      lStack_640 = *plStack_5e0;
      do {
        ppuVar12 = (undefined **)0x0;
        do {
          if (*plStack_5e0 != lStack_640) {
            _objc_enumerationMutation(ppuStack_638);
          }
          unaff_x25 = *(undefined ***)(lStack_5e8 + (long)ppuVar12 * 8);
          dVar25 = 0.0;
          lStack_628 = 0;
          uStack_630 = 0;
          uStack_618 = 0;
          puStack_620 = (undefined8 *)0x0;
          uStack_608 = 0;
          uStack_610 = 0;
          uStack_5f8 = 0;
          uStack_600 = 0;
          func_0x000108e227f4();
          _objc_retainAutoreleasedReturnValue();
          ppuVar10 = unaff_x25;
          func_0x00010bf52a60();
          if (ppuVar10 != (undefined **)0x0) {
            param_4 = (undefined **)*puStack_620;
            unaff_x26 = ppuVar10;
            do {
              ppuVar10 = (undefined **)0x0;
              do {
                if ((undefined **)*puStack_620 != param_4) {
                  _objc_enumerationMutation(unaff_x25);
                }
                unaff_x27 = *(undefined ***)(lStack_628 + (long)ppuVar10 * 8);
                ppuVar13 = unaff_x27;
                func_0x00010c0b5ac0();
                _objc_retainAutoreleasedReturnValue();
                puVar20 = puVar23;
                func_0x00010bf4b900();
                if (((ulong)puVar20 & 1) == 0) {
                  func_0x00010befa120(puVar23);
                  func_0x00010befa120(ppuVar16);
                }
                _objc_release(ppuVar13);
                ppuVar10 = (undefined **)((long)ppuVar10 + 1);
              } while (unaff_x26 != ppuVar10);
              unaff_x26 = unaff_x25;
              func_0x00010bf52a60();
            } while (unaff_x26 != (undefined **)0x0);
          }
          _objc_release(unaff_x25);
          ppuVar12 = (undefined **)((long)ppuVar12 + 1);
        } while (ppuVar12 != ppuVar14);
        ppuVar10 = &puStack_5f0;
        ppuVar15 = apuStack_4b0;
        ppuVar14 = ppuStack_638;
        func_0x00010bf52a60();
        unaff_x24 = (undefined **)0x0;
      } while (ppuVar14 != (undefined **)0x0);
    }
    ppuVar14 = ppuStack_638;
    _objc_release(ppuStack_638);
    _objc_release(puVar23);
    _objc_release(ppuVar14);
    _objc_release(ppuStack_650);
    ppuVar18 = ppuStack_648;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_330) {
      ___stack_chk_fail();
      ppuStack_668 = ppuVar14;
      pcStack_658 = FUN_106deefe4;
      pppuVar22 = &ppuStack_660;
      lStack_6c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuStack_6b0 = ppuVar13;
      ppuStack_6a8 = unaff_x27;
      ppuStack_6a0 = unaff_x26;
      ppuStack_698 = unaff_x25;
      ppuStack_690 = unaff_x24;
      puStack_688 = puVar23;
      ppuStack_680 = ppuVar16;
      ppuStack_678 = param_4;
      ppuStack_670 = ppuVar12;
      ppuStack_660 = &puStack_2d0;
      _objc_retain();
      if (ppuVar18 == (undefined **)0x0) {
        ppuVar3 = ppuVar18;
        ppuVar14 = ppuVar16;
        ppuVar16 = (undefined **)0x0;
      }
      else {
        ppuVar6 = (undefined **)0x0;
        ppuStack_788 = ppuVar18;
        func_0x000108020568();
        _objc_retainAutoreleasedReturnValue();
        dVar25 = 0.0;
        lStack_778 = 0;
        puStack_780 = (undefined *)0x0;
        uStack_768 = 0;
        plStack_770 = (long *)0x0;
        uStack_758 = 0;
        uStack_760 = 0;
        uStack_748 = 0;
        uStack_750 = 0;
        ppuStack_790 = ppuVar18;
        func_0x000107e639a4();
        _objc_retainAutoreleasedReturnValue();
        ppuVar10 = &puStack_780;
        ppuVar15 = apuStack_740;
        ppuVar16 = ppuVar18;
        func_0x00010bf52a60();
        if (ppuVar16 == (undefined **)0x0) {
          ppuVar14 = (undefined **)0x0;
        }
        else {
          ppuVar14 = (undefined **)0x0;
          lVar21 = *plStack_770;
          do {
            ppuVar12 = (undefined **)0x0;
            do {
              if (*plStack_770 != lVar21) {
                _objc_enumerationMutation(ppuVar18);
              }
              unaff_x26 = *(undefined ***)(lStack_778 + (long)ppuVar12 * 8);
              ppuVar10 = unaff_x26;
              func_0x00010c0cc0c0();
              _objc_retainAutoreleasedReturnValue();
              ppuVar15 = ppuVar10;
              func_0x00010bfae120();
              _objc_retainAutoreleasedReturnValue();
              unaff_x24 = ppuVar15;
              func_0x00010bfadfa0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(ppuVar15);
              _objc_release(ppuVar10);
              ppuVar10 = unaff_x24;
              func_0x00010bfeddc0();
              if ((int)ppuVar10 == 3) {
                ppuVar17 = unaff_x24;
                func_0x00010c297f00();
                _objc_retainAutoreleasedReturnValue();
                ppuVar10 = ppuVar17;
                func_0x00010c297e20();
                _objc_retainAutoreleasedReturnValue();
                ppuVar13 = ppuVar10;
                func_0x00010c08fa60();
                _objc_release(ppuVar10);
                if (ppuVar13 != (undefined **)0x0) {
                  ppuVar16 = (undefined **)PTR_PTR_1126c0e50;
                  _objc_alloc();
                  unaff_x25 = ppuVar17;
                  func_0x00010c297e20();
                  _objc_retainAutoreleasedReturnValue();
                  unaff_x27 = ppuVar17;
                  func_0x00010c297f60();
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar15 = &PTR____CFConstantStringClassReference_110daafd8;
                  if (unaff_x27 != (undefined **)0x0) {
                    ppuVar15 = unaff_x27;
                  }
                  ppuVar10 = unaff_x25;
                  func_0x00010c036540();
                  _objc_release(unaff_x27);
                  _objc_release(unaff_x25);
                  _objc_release(ppuVar17);
                  _objc_release(unaff_x24);
                  _objc_release(ppuVar18);
                  goto LAB_106def348;
                }
                _objc_release(ppuVar17);
              }
              func_0x00010c0cc0c0();
              _objc_retainAutoreleasedReturnValue();
              unaff_x27 = unaff_x26;
              func_0x00010bfedf20();
              _objc_retainAutoreleasedReturnValue();
              unaff_x25 = unaff_x27;
              func_0x00010c0fd520();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(unaff_x27);
              _objc_release(unaff_x26);
              ppuVar10 = unaff_x25;
              func_0x00010bfda400();
              if ((int)ppuVar10 != 0 && ppuVar14 == (undefined **)0x0) {
                ppuVar10 = unaff_x25;
                func_0x00010c0fd0e0();
                _objc_retainAutoreleasedReturnValue();
                unaff_x26 = ppuVar10;
                func_0x00010bfe2ee0();
                unaff_x27 = unaff_x25;
                func_0x00010c0fd0e0();
                _objc_retainAutoreleasedReturnValue();
                ppuVar6 = unaff_x27;
                func_0x00010c0b5940();
                func_0x000100c4a928();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(unaff_x27);
                _objc_release(ppuVar10);
                ppuVar10 = unaff_x26;
                func_0x00010c08fa60();
                if (ppuVar10 == (undefined **)0x0) {
                  ppuVar14 = (undefined **)0x0;
                }
                else {
                  ppuVar14 = (undefined **)PTR_PTR_1126c0e50;
                  _objc_alloc();
                  unaff_x27 = unaff_x25;
                  func_0x00010c0d4f60();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c036540();
                  _objc_release(unaff_x27);
                }
                _objc_release(unaff_x26);
              }
              _objc_release(unaff_x25);
              _objc_release(unaff_x24);
              ppuVar12 = (undefined **)((long)ppuVar12 + 1);
            } while (ppuVar16 != ppuVar12);
            ppuVar10 = &puStack_780;
            ppuVar15 = apuStack_740;
            ppuVar16 = ppuVar18;
            func_0x00010bf52a60();
          } while (ppuVar16 != (undefined **)0x0);
        }
        _objc_release(ppuVar18);
        _objc_retain(ppuVar14);
        ppuVar16 = ppuVar14;
        ppuVar17 = unaff_x26;
LAB_106def348:
        _objc_release(ppuVar14);
        _objc_release(ppuStack_790);
        ppuVar3 = ppuStack_788;
        param_4 = ppuVar18;
        unaff_x26 = ppuVar17;
      }
      ppuVar18 = ppuVar3;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_6c0) {
        puVar23 = &UNK_106def3a4;
        ___stack_chk_fail();
        pppuVar1 = &ppuStack_790;
        ppuVar17 = ppuVar16;
        do {
          fVar24 = SUB84(dVar25,0);
          ppuVar2 = (undefined **)((long)pppuVar1 + -0x130);
          *(undefined ***)((long)pppuVar1 + -0x60) = ppuVar13;
          *(undefined ***)((long)pppuVar1 + -0x58) = unaff_x27;
          *(undefined ***)((long)pppuVar1 + -0x50) = unaff_x26;
          *(undefined ***)((long)pppuVar1 + -0x48) = unaff_x25;
          *(undefined ***)((long)pppuVar1 + -0x40) = unaff_x24;
          *(undefined ***)((long)pppuVar1 + -0x38) = ppuVar17;
          *(undefined ***)((long)pppuVar1 + -0x30) = ppuVar14;
          *(undefined ***)((long)pppuVar1 + -0x28) = param_4;
          *(undefined ***)((long)pppuVar1 + -0x20) = ppuVar12;
          *(undefined ***)((long)pppuVar1 + -0x18) = ppuVar3;
          *(undefined1 ****)((long)pppuVar1 + -0x10) = pppuVar22;
          *(undefined **)((long)pppuVar1 + -8) = puVar23;
          *(undefined8 *)((long)pppuVar1 + -0x68) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
          _objc_retain();
          if (ppuVar18 == (undefined **)0x0) {
            ppuVar16 = (undefined **)0x0;
          }
          else {
            ppuVar12 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
            func_0x00010bf09f00();
            _objc_retainAutoreleasedReturnValue();
            uVar9 = 0;
            *(undefined8 *)((long)pppuVar1 + -0x128) = 0;
            *(undefined8 *)((long)pppuVar1 + -0x130) = 0;
            *(undefined8 *)((long)pppuVar1 + -0x118) = 0;
            *(undefined8 *)((long)pppuVar1 + -0x120) = 0;
            *(undefined8 *)((long)pppuVar1 + -0x108) = 0;
            *(undefined8 *)((long)pppuVar1 + -0x110) = 0;
            *(undefined8 *)((long)pppuVar1 + -0xf8) = 0;
            *(undefined8 *)((long)pppuVar1 + -0x100) = 0;
            ppuVar14 = ppuVar18;
            func_0x00010c0fee00();
            _objc_retainAutoreleasedReturnValue();
            ppuVar10 = ppuVar14;
            func_0x00010c0ff660();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar14);
            ppuVar15 = (undefined **)((long)pppuVar1 + -0xe8);
            ppuVar16 = ppuVar10;
            func_0x00010bf52a60();
            fVar24 = (float)uVar9;
            if (ppuVar16 != (undefined **)0x0) {
              unaff_x26 = (undefined **)**(undefined8 **)((long)pppuVar1 + -0x120);
              do {
                unaff_x27 = (undefined **)0x0;
                do {
                  if ((undefined **)**(undefined8 **)((long)pppuVar1 + -0x120) != unaff_x26) {
                    _objc_enumerationMutation(ppuVar10);
                  }
                  ppuVar17 = *(undefined ***)
                              (*(long *)((long)pppuVar1 + -0x128) + (long)unaff_x27 * 8);
                  ppuVar15 = ppuVar17;
                  func_0x00010c08c3a0();
                  if ((int)ppuVar15 == 1) {
                    unaff_x24 = ppuVar17;
                    func_0x00010c0c3fe0();
                    _objc_retainAutoreleasedReturnValue();
                    unaff_x25 = unaff_x24;
                    func_0x00010bf0b760();
                    _objc_release(unaff_x24);
                    if ((int)unaff_x25 == 5) {
                      func_0x00010c0c3fe0();
                      _objc_retainAutoreleasedReturnValue();
                      unaff_x24 = ppuVar17;
                      func_0x00010853d324();
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010befa160(ppuVar12);
                      _objc_release(unaff_x24);
                      _objc_release(ppuVar17);
                    }
                  }
                  unaff_x27 = (undefined **)((long)unaff_x27 + 1);
                } while (ppuVar16 != unaff_x27);
                ppuVar15 = (undefined **)((long)pppuVar1 + -0xe8);
                ppuVar16 = ppuVar10;
                ppuVar2 = (undefined **)((long)pppuVar1 + -0x130);
                func_0x00010bf52a60();
                fVar24 = (float)uVar9;
                ppuVar14 = (undefined **)0x0;
              } while (ppuVar16 != (undefined **)0x0);
            }
            _objc_release(ppuVar10);
            ppuVar10 = ppuVar12;
            func_0x00010bf529e0();
            ppuVar16 = (undefined **)0x0;
            if (ppuVar10 != (undefined **)0x0) {
              ppuVar16 = ppuVar12;
            }
            _objc_retain(ppuVar16);
            _objc_release(ppuVar12);
            ppuVar10 = ppuVar2;
          }
          ppuVar2 = ppuVar18;
          _objc_release();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)pppuVar1 + -0x68)) break;
          ___stack_chk_fail();
          *(double *)((long)pppuVar1 + -400) = unaff_d9;
          *(double *)((long)pppuVar1 + -0x188) = unaff_d8;
          *(undefined ***)((long)pppuVar1 + -0x180) = unaff_x26;
          *(undefined ***)((long)pppuVar1 + -0x178) = unaff_x25;
          *(undefined ***)((long)pppuVar1 + -0x170) = unaff_x24;
          *(undefined ***)((long)pppuVar1 + -0x168) = ppuVar17;
          *(undefined ***)((long)pppuVar1 + -0x160) = ppuVar14;
          *(undefined ***)((long)pppuVar1 + -0x158) = ppuVar16;
          *(undefined ***)((long)pppuVar1 + -0x150) = ppuVar12;
          *(undefined ***)((long)pppuVar1 + -0x148) = ppuVar18;
          *(undefined1 **)((long)pppuVar1 + -0x140) = (undefined1 *)((long)pppuVar1 + -0x10);
          *(undefined **)((long)pppuVar1 + -0x138) = &UNK_106def594;
          *(undefined8 *)((long)pppuVar1 + -0x198) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0
          ;
          ppuVar12 = ppuVar6;
          ppuVar18 = ppuVar10;
          _objc_retain();
          _objc_retain(ppuVar6);
          _objc_retain(ppuVar10);
          if (ppuVar2 != (undefined **)0x0) {
            ppuVar12 = ppuVar10;
            func_0x00010c23f480();
            _objc_retainAutoreleasedReturnValue();
            ppuVar16 = ppuVar12;
            func_0x00010bf529e0();
            _objc_release(ppuVar12);
            if (ppuVar16 != (undefined **)0x0) {
              ppuVar12 = ppuVar10;
              func_0x00010c23f480();
              _objc_retainAutoreleasedReturnValue();
              ppuVar16 = ppuVar12;
              func_0x00010c0dfd40();
              _objc_retainAutoreleasedReturnValue();
              unaff_x24 = ppuVar16;
              func_0x00010c2a2e80();
              _objc_retainAutoreleasedReturnValue();
              unaff_x25 = unaff_x24;
              func_0x00010c2a2ea0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c2039e0(ppuVar2);
              _objc_release(unaff_x25);
              _objc_release(unaff_x24);
              _objc_release(ppuVar16);
              _objc_release(ppuVar12);
            }
            ppuVar12 = ppuVar10;
            func_0x000106dee010(ppuVar10);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2208c0(ppuVar2);
            _objc_release(ppuVar12);
            ppuVar12 = (undefined **)PTR_PTR_1126d2a00;
            _objc_retain(ppuVar2);
            _objc_opt_class();
            ppuVar16 = ppuVar2;
            _objc_opt_isKindOfClass();
            ppuVar14 = ppuVar2;
            if (((ulong)ppuVar16 & 1) == 0) {
              ppuVar14 = (undefined **)0x0;
            }
            _objc_retain(ppuVar14);
            _objc_release(ppuVar2);
            if (((ulong)ppuVar16 & 1) != 0) {
              ppuVar16 = ppuVar10;
              func_0x00010bf0efa0(ppuVar10);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf1f3c0();
              func_0x00010c1a6de0(ppuVar2);
              _objc_release(ppuVar16);
            }
            func_0x00010bf8b160(ppuVar6);
            unaff_d8 = (double)fVar24;
            func_0x00010c1c4580(ppuVar2);
            func_0x00010bfed740(ppuVar6);
            func_0x00010c1c4920(ppuVar2);
            ppuVar16 = ppuVar6;
            func_0x00010b5fa088();
            if (ppuVar16 == (undefined **)0x9) {
              func_0x000109023974(ppuVar6);
              unaff_d9 = param_2;
            }
            else {
              ppuVar16 = ppuVar6;
              func_0x00010c2a5040();
              unaff_d8 = (double)(int)ppuVar16;
              ppuVar16 = ppuVar6;
              func_0x00010bfe0640();
              unaff_d9 = (double)(int)ppuVar16;
            }
            func_0x00010c1c56e0(ppuVar2);
            func_0x00010c1c4860(ppuVar2);
            ppuVar16 = ppuVar6;
            func_0x00010c0c5b00();
            ppuVar17 = (undefined **)PTR_PTR_1126c4550;
            if ((int)ppuVar16 < 1) {
              ppuVar18 = ppuVar10;
              func_0x00010c0c5b60();
              func_0x00010c0c5ba0();
              _objc_retainAutoreleasedReturnValue();
              if (ppuVar17 != (undefined **)0x0) {
                *(undefined ***)((long)pppuVar1 + -0x1a8) = ppuVar17;
                goto code_r0x000106def81c;
              }
            }
            else {
              ppuVar17 = (undefined **)PTR_PTR_1126c4548;
              _objc_alloc();
              func_0x00010c0c5b00(ppuVar6);
              func_0x00010c032420();
              *(undefined ***)((long)pppuVar1 + -0x1a0) = ppuVar17;
code_r0x000106def81c:
              ppuVar15 = (undefined **)0x1;
              unaff_x24 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
              func_0x00010bf0a140();
              _objc_retainAutoreleasedReturnValue();
              ppuVar18 = unaff_x24;
              func_0x00010c1c4de0(ppuVar2);
              _objc_release(unaff_x24);
            }
            _objc_release(ppuVar17);
            _objc_release(ppuVar14);
          }
          _objc_release(ppuVar10);
          _objc_release(ppuVar6);
          ppuVar3 = ppuVar2;
          _objc_release();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)pppuVar1 + -0x198)) {
            return ppuVar3;
          }
          ___stack_chk_fail();
          *(double *)((long)pppuVar1 + -0x220) = unaff_d9;
          *(double *)((long)pppuVar1 + -0x218) = unaff_d8;
          *(undefined ***)((long)pppuVar1 + -0x210) = ppuVar13;
          *(undefined ***)((long)pppuVar1 + -0x208) = unaff_x27;
          *(undefined ***)((long)pppuVar1 + -0x200) = unaff_x26;
          *(undefined ***)((long)pppuVar1 + -0x1f8) = unaff_x25;
          *(undefined ***)((long)pppuVar1 + -0x1f0) = unaff_x24;
          *(undefined ***)((long)pppuVar1 + -0x1e8) = ppuVar17;
          *(undefined ***)((long)pppuVar1 + -0x1e0) = ppuVar14;
          *(undefined ***)((long)pppuVar1 + -0x1d8) = ppuVar10;
          *(undefined ***)((long)pppuVar1 + -0x1d0) = ppuVar6;
          *(undefined ***)((long)pppuVar1 + -0x1c8) = ppuVar2;
          *(undefined1 **)((long)pppuVar1 + -0x1c0) = (undefined1 *)((long)pppuVar1 + -0x140);
          *(undefined **)((long)pppuVar1 + -0x1b8) = &UNK_106def8b0;
          pppuVar22 = (undefined1 ***)((long)pppuVar1 + -0x1c0);
          *(undefined8 *)((long)pppuVar1 + -0x228) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0
          ;
          ppuVar10 = ppuVar12;
          ppuVar16 = ppuVar18;
          _objc_retain();
          _objc_retain(ppuVar12);
          _objc_retain(ppuVar18);
          if (ppuVar3 == (undefined **)0x0) goto code_r0x000106defb14;
          uVar9 = 0;
          *(undefined8 *)((long)pppuVar1 + -0x2c8) = 0;
          *(undefined8 *)((long)pppuVar1 + -0x2d0) = 0;
          *(undefined8 *)((long)pppuVar1 + -0x2b8) = 0;
          *(undefined8 *)((long)pppuVar1 + -0x2c0) = 0;
          *(undefined8 *)((long)pppuVar1 + -0x2e8) = 0;
          *(undefined8 *)((long)pppuVar1 + -0x2f0) = 0;
          *(undefined8 *)((long)pppuVar1 + -0x2d8) = 0;
          *(undefined8 *)((long)pppuVar1 + -0x2e0) = 0;
          ppuVar10 = ppuVar18;
          func_0x00010bf0d7e0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar16 = ppuVar10;
          func_0x00010bf0d800();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar10);
          ppuVar15 = (undefined **)((long)pppuVar1 + -0x2a8);
          ppuVar10 = ppuVar16;
          func_0x00010bf52a60();
          fVar24 = (float)uVar9;
          if (ppuVar10 != (undefined **)0x0) {
            unaff_x25 = (undefined **)**(undefined8 **)((long)pppuVar1 + -0x2e0);
            do {
              unaff_x26 = (undefined **)0x0;
              do {
                if ((undefined **)**(undefined8 **)((long)pppuVar1 + -0x2e0) != unaff_x25) {
                  _objc_enumerationMutation(ppuVar16);
                }
                unaff_x24 = *(undefined ***)
                             (*(long *)((long)pppuVar1 + -0x2e8) + (long)unaff_x26 * 8);
                ppuVar6 = unaff_x24;
                func_0x00010bf0d0a0();
                fVar24 = (float)uVar9;
                if ((int)ppuVar6 == 3) {
                  func_0x00010c2a3a80();
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar10 = unaff_x24;
                  func_0x00010bdc2b80();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c2039e0(ppuVar3);
                  _objc_release(ppuVar10);
                  _objc_release(unaff_x24);
                  unaff_x24 = ppuVar10;
                  goto code_r0x000106defa04;
                }
                unaff_x26 = (undefined **)((long)unaff_x26 + 1);
              } while (ppuVar10 != unaff_x26);
              ppuVar15 = (undefined **)((long)pppuVar1 + -0x2a8);
              ppuVar10 = ppuVar16;
              func_0x00010bf52a60();
              fVar24 = (float)uVar9;
            } while (ppuVar10 != (undefined **)0x0);
          }
code_r0x000106defa04:
          _objc_release(ppuVar16);
          ppuVar6 = (undefined **)PTR_PTR_1126d2a00;
          _objc_retain(ppuVar3);
          _objc_opt_class();
          ppuVar17 = ppuVar3;
          _objc_opt_isKindOfClass();
          ppuVar14 = ppuVar3;
          if (((ulong)ppuVar17 & 1) == 0) {
            ppuVar14 = (undefined **)0x0;
          }
          _objc_retain(ppuVar14);
          _objc_release(ppuVar3);
          if (((ulong)ppuVar17 & 1) != 0) {
            func_0x000107e629e4(ppuVar18);
            func_0x00010c1a6de0(ppuVar3);
          }
          func_0x00010bf8b160(ppuVar12);
          dVar25 = (double)fVar24;
          func_0x00010c1c4580(ppuVar3);
          func_0x00010bfed740(ppuVar12);
          func_0x00010c1c4920(ppuVar3);
          ppuVar10 = ppuVar12;
          func_0x00010b5fa088();
          if (ppuVar10 == (undefined **)0x9) {
            func_0x000109023974(ppuVar12);
            unaff_d8 = dVar25;
            unaff_d9 = param_2;
          }
          else {
            ppuVar10 = ppuVar12;
            func_0x00010c2a5040();
            unaff_d8 = (double)(int)ppuVar10;
            ppuVar10 = ppuVar12;
            func_0x00010bfe0640();
            unaff_d9 = (double)(int)ppuVar10;
          }
          func_0x00010c1c56e0(ppuVar3);
          ppuVar10 = (undefined **)(long)unaff_d9;
          func_0x00010c1c4860(ppuVar3);
          puVar23 = &UNK_106defae8;
          pppuVar1 = (undefined ***)((long)pppuVar1 + -0x2f0);
          param_4 = ppuVar18;
        } while( true );
      }
    }
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar16);
  return ppuVar16;
code_r0x000106dee8a4:
  unaff_x25 = (undefined **)((long)unaff_x25 + 1);
  if (ppuVar16 == unaff_x25) goto code_r0x000106dee8b0;
  goto LAB_106dee85c;
code_r0x000106dee8b0:
  ppuVar16 = ppuVar12;
  func_0x00010bf52a60();
  unaff_x24 = (undefined **)0x0;
  ppuVar10 = (undefined **)0x0;
  if (ppuVar16 == (undefined **)0x0) goto LAB_106dee8cc;
  goto LAB_106dee858;
code_r0x000106defb14:
  _objc_release(ppuVar18);
  _objc_release(ppuVar12);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)pppuVar1 + -0x228)) {
    return ppuVar3;
  }
  ___stack_chk_fail();
  *(undefined ***)((long)pppuVar1 + -0x350) = ppuVar13;
  *(undefined ***)((long)pppuVar1 + -0x348) = unaff_x27;
  *(undefined ***)((long)pppuVar1 + -0x340) = unaff_x26;
  *(undefined ***)((long)pppuVar1 + -0x338) = unaff_x25;
  *(undefined ***)((long)pppuVar1 + -0x330) = unaff_x24;
  *(undefined ***)((long)pppuVar1 + -0x328) = ppuVar17;
  *(undefined ***)((long)pppuVar1 + -800) = ppuVar14;
  *(undefined ***)((long)pppuVar1 + -0x318) = ppuVar18;
  *(undefined ***)((long)pppuVar1 + -0x310) = ppuVar12;
  *(undefined8 *)((long)pppuVar1 + -0x308) = 0;
  *(undefined1 ****)((long)pppuVar1 + -0x300) = pppuVar22;
  *(undefined **)((long)pppuVar1 + -0x2f8) = &UNK_106defb6c;
  *(undefined8 *)((long)pppuVar1 + -0x360) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  ppuVar12 = ppuVar10;
  _objc_retain();
  *(undefined ***)((long)pppuVar1 + -0x8b0) = ppuVar10;
  _objc_retain(ppuVar10);
  _objc_retain(ppuVar16);
  _objc_retain(ppuVar15);
  puVar23 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  *(undefined **)((long)pppuVar1 + -0x8c0) = puVar23;
  puVar23 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  *(undefined **)((long)pppuVar1 + -0x8a8) = puVar23;
  *(undefined ***)((long)pppuVar1 + -0x918) = ppuVar3;
  func_0x00010bf2fba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  *(undefined ***)((long)pppuVar1 + -0x908) = ppuVar16;
  *(undefined ***)((long)pppuVar1 + -0x8b8) = ppuVar15;
  if ((ppuVar16 != (undefined **)0x0) && (ppuVar3 == (undefined **)0x0)) {
    *(undefined8 *)((long)pppuVar1 + -0x6f8) = 0;
    *(undefined8 *)((long)pppuVar1 + -0x700) = 0;
    *(undefined8 *)((long)pppuVar1 + -0x6e8) = 0;
    *(undefined8 *)((long)pppuVar1 + -0x6f0) = 0;
    *(undefined8 *)((long)pppuVar1 + -0x718) = 0;
    *(undefined8 *)((long)pppuVar1 + -0x720) = 0;
    *(undefined8 *)((long)pppuVar1 + -0x708) = 0;
    *(undefined8 *)((long)pppuVar1 + -0x710) = 0;
    lVar21 = *(long *)((long)pppuVar1 + -0x908);
    _objc_retain(lVar21);
    func_0x00010bf52a60();
    *(long *)((long)pppuVar1 + -0x8c8) = lVar21;
    if (lVar21 != 0) {
      *(undefined8 *)((long)pppuVar1 + -0x8d0) = **(undefined8 **)((long)pppuVar1 + -0x710);
      do {
        lVar21 = 0;
        do {
          if (**(long **)((long)pppuVar1 + -0x710) != *(long *)((long)pppuVar1 + -0x8d0)) {
            _objc_enumerationMutation(*(undefined8 *)((long)pppuVar1 + -0x908));
          }
          ppuVar10 = *(undefined ***)(*(long *)((long)pppuVar1 + -0x718) + lVar21 * 8);
          ppuVar17 = ppuVar10;
          func_0x00010c0cc0c0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x26 = ppuVar17;
          func_0x00010bf30500();
          _objc_retainAutoreleasedReturnValue();
          unaff_x27 = unaff_x26;
          func_0x00010c0ca860();
          _objc_release(unaff_x26);
          _objc_release(ppuVar17);
          if (unaff_x27 != (undefined **)0x0) {
            *(undefined8 *)((long)pppuVar1 + -0x738) = 0;
            *(undefined8 *)((long)pppuVar1 + -0x740) = 0;
            *(undefined8 *)((long)pppuVar1 + -0x728) = 0;
            *(undefined8 *)((long)pppuVar1 + -0x730) = 0;
            *(undefined8 *)((long)pppuVar1 + -0x758) = 0;
            *(undefined8 *)((long)pppuVar1 + -0x760) = 0;
            *(undefined8 *)((long)pppuVar1 + -0x748) = 0;
            *(undefined8 *)((long)pppuVar1 + -0x750) = 0;
            func_0x00010c0cc0c0();
            _objc_retainAutoreleasedReturnValue();
            unaff_x26 = ppuVar10;
            func_0x00010bf30500();
            _objc_retainAutoreleasedReturnValue();
            ppuVar16 = unaff_x26;
            func_0x00010c0ca840();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(unaff_x26);
            _objc_release(ppuVar10);
            ppuVar15 = ppuVar16;
            func_0x00010bf52a60();
            if (ppuVar15 != (undefined **)0x0) {
              unaff_x24 = (undefined **)**(undefined8 **)((long)pppuVar1 + -0x750);
              do {
                ppuVar6 = (undefined **)0x0;
                do {
                  if ((undefined **)**(undefined8 **)((long)pppuVar1 + -0x750) != unaff_x24) {
                    _objc_enumerationMutation(ppuVar16);
                  }
                  ppuVar18 = *(undefined ***)
                              (*(long *)((long)pppuVar1 + -0x758) + (long)ppuVar6 * 8);
                  unaff_x27 = ppuVar18;
                  func_0x00010bf96da0();
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar13 = unaff_x27;
                  func_0x00010c290fa0();
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar14 = ppuVar13;
                  func_0x00010c2923e0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release();
                  _objc_release(ppuVar13);
                  _objc_release(unaff_x27);
                  ppuVar10 = ppuVar18;
                  if (ppuVar14 != (undefined **)0x0) {
                    ppuVar14 = *(undefined ***)((long)pppuVar1 + -0x8b8);
                    func_0x00010c269d40();
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010bf96da0();
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar13 = ppuVar18;
                    func_0x00010c290fa0();
                    _objc_retainAutoreleasedReturnValue();
                    unaff_x25 = ppuVar13;
                    func_0x00010c2923e0();
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar10 = ppuVar14;
                    func_0x00010c0ee920();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(unaff_x25);
                    _objc_release(ppuVar13);
                    _objc_release(ppuVar18);
                    _objc_release(ppuVar14);
                    if (ppuVar10 != (undefined **)0x0) {
                      ppuVar18 = ppuVar10;
                      func_0x00010c2923e0();
                      _objc_retainAutoreleasedReturnValue();
                      ppuVar13 = ppuVar10;
                      func_0x00010c294420();
                      _objc_retainAutoreleasedReturnValue();
                      if (ppuVar18 != (undefined **)0x0) {
                        uVar4 = *(ulong *)((long)pppuVar1 + -0x8a8);
                        func_0x00010bf4b900();
                        if ((uVar4 & 1) == 0) {
                          uVar4 = *(ulong *)((long)pppuVar1 + -0x8b0);
                          func_0x00010bf4b900();
                          if ((uVar4 & 1) == 0) {
                            puVar23 = PTR_PTR_1126d2aa8;
                            _objc_alloc(PTR_PTR_1126d2aa8);
                            func_0x00010c05f760();
                            func_0x00010c1d0640(*(undefined8 *)((long)pppuVar1 + -0x8c0));
                            func_0x00010befa120(*(undefined8 *)((long)pppuVar1 + -0x8a8));
                            _objc_release(puVar23);
                          }
                        }
                      }
                      _objc_release(ppuVar13);
                      _objc_release(ppuVar18);
                    }
                    _objc_release(ppuVar10);
                    unaff_x27 = ppuVar18;
                  }
                  ppuVar6 = (undefined **)((long)ppuVar6 + 1);
                } while (ppuVar15 != ppuVar6);
                ppuVar15 = ppuVar16;
                func_0x00010bf52a60();
                unaff_x26 = (undefined **)0x0;
              } while (ppuVar15 != (undefined **)0x0);
            }
            _objc_release(ppuVar16);
            ppuVar17 = ppuVar10;
          }
          lVar21 = lVar21 + 1;
        } while (lVar21 != *(long *)((long)pppuVar1 + -0x8c8));
        lVar21 = *(long *)((long)pppuVar1 + -0x908);
        func_0x00010bf52a60();
        *(long *)((long)pppuVar1 + -0x8c8) = lVar21;
      } while (lVar21 != 0);
    }
    _objc_release(*(undefined8 *)((long)pppuVar1 + -0x908));
    ppuVar15 = *(undefined ***)((long)pppuVar1 + -0x8b8);
  }
  *(undefined8 *)((long)pppuVar1 + -0x778) = 0;
  *(undefined8 *)((long)pppuVar1 + -0x780) = 0;
  *(undefined8 *)((long)pppuVar1 + -0x768) = 0;
  *(undefined8 *)((long)pppuVar1 + -0x770) = 0;
  *(undefined8 *)((long)pppuVar1 + -0x798) = 0;
  *(undefined8 *)((long)pppuVar1 + -0x7a0) = 0;
  *(undefined8 *)((long)pppuVar1 + -0x788) = 0;
  *(undefined8 *)((long)pppuVar1 + -0x790) = 0;
  lVar21 = *(long *)((long)pppuVar1 + -0x918);
  func_0x00010bf308c0();
  _objc_retainAutoreleasedReturnValue();
  *(long *)((long)pppuVar1 + -0x910) = lVar21;
  func_0x00010bf52a60();
  *(long *)((long)pppuVar1 + -0x8f0) = lVar21;
  if (lVar21 != 0) {
    uVar9 = **(undefined8 **)((long)pppuVar1 + -0x790);
    *(undefined ***)((long)pppuVar1 + -0x900) = &PTR____CFConstantStringClassReference_110efb658;
    *(undefined8 *)((long)pppuVar1 + -0x8f8) = uVar9;
    do {
      lVar21 = 0;
      do {
        if (**(long **)((long)pppuVar1 + -0x790) != *(long *)((long)pppuVar1 + -0x8f8)) {
          _objc_enumerationMutation(*(undefined8 *)((long)pppuVar1 + -0x910));
        }
        *(long *)((long)pppuVar1 + -0x8e0) = lVar21;
        lVar11 = *(long *)(*(long *)((long)pppuVar1 + -0x798) + lVar21 * 8);
        puVar23 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        func_0x00010bf71e20();
        _objc_retainAutoreleasedReturnValue();
        *(undefined **)((long)pppuVar1 + -0x8d0) = puVar23;
        *(undefined8 *)((long)pppuVar1 + -0x7d8) = 0;
        *(undefined8 *)((long)pppuVar1 + -0x7e0) = 0;
        *(undefined8 *)((long)pppuVar1 + -0x7c8) = 0;
        *(undefined8 *)((long)pppuVar1 + -2000) = 0;
        *(undefined8 *)((long)pppuVar1 + -0x7b8) = 0;
        *(undefined8 *)((long)pppuVar1 + -0x7c0) = 0;
        *(undefined8 *)((long)pppuVar1 + -0x7a8) = 0;
        *(undefined8 *)((long)pppuVar1 + -0x7b0) = 0;
        *(long *)((long)pppuVar1 + -0x8e8) = lVar11;
        func_0x00010c293dc0();
        _objc_retainAutoreleasedReturnValue();
        lVar21 = lVar11;
        func_0x00010bf52a60();
        if (lVar21 != 0) {
          unaff_x24 = (undefined **)**(undefined8 **)((long)pppuVar1 + -2000);
          *(long *)((long)pppuVar1 + -0x8d8) = lVar11;
          do {
            lVar19 = 0;
            do {
              if ((undefined **)**(undefined8 **)((long)pppuVar1 + -2000) != unaff_x24) {
                _objc_enumerationMutation(lVar11);
              }
              ppuVar17 = *(undefined ***)(*(long *)((long)pppuVar1 + -0x7d8) + lVar19 * 8);
              ppuVar13 = ppuVar15;
              func_0x00010c269d40();
              _objc_retainAutoreleasedReturnValue();
              ppuVar10 = ppuVar17;
              func_0x00010c2923e0(ppuVar17);
              _objc_retainAutoreleasedReturnValue();
              unaff_x27 = ppuVar13;
              func_0x00010c0ee920();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(ppuVar10);
              _objc_release(ppuVar13);
              ppuVar10 = unaff_x27;
              func_0x00010c2923e0();
              _objc_retainAutoreleasedReturnValue();
              ppuVar13 = unaff_x27;
              func_0x00010c294420();
              _objc_retainAutoreleasedReturnValue();
              if (unaff_x27 != (undefined **)0x0 && ppuVar10 != (undefined **)0x0) {
                uVar4 = *(ulong *)((long)pppuVar1 + -0x8a8);
                func_0x00010bf4b900();
                if ((uVar4 & 1) == 0) {
                  uVar4 = *(ulong *)((long)pppuVar1 + -0x8b0);
                  func_0x00010bf4b900();
                  if ((uVar4 & 1) == 0) {
                    puVar23 = PTR_PTR_1126d2aa8;
                    _objc_alloc();
                    func_0x00010c05f760();
                    *(undefined **)((long)pppuVar1 + -0x8c8) = puVar23;
                    func_0x00010c1d0640(*(undefined8 *)((long)pppuVar1 + -0x8c0));
                    puVar23 = PTR_PTR_1126d2ab0;
                    ppuVar16 = ppuVar17;
                    func_0x00010c24ff00(ppuVar17);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c067fc0();
                    func_0x00010c08fa60(ppuVar13);
                    func_0x00010bf51620(puVar23);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c24ff00();
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c1d0640(*(undefined8 *)((long)pppuVar1 + -0x8d0));
                    _objc_release(ppuVar17);
                    lVar11 = *(long *)((long)pppuVar1 + -0x8d8);
                    _objc_release(puVar23);
                    ppuVar15 = *(undefined ***)((long)pppuVar1 + -0x8b8);
                    _objc_release(ppuVar16);
                    func_0x00010befa120(*(undefined8 *)((long)pppuVar1 + -0x8a8));
                    _objc_release(*(undefined8 *)((long)pppuVar1 + -0x8c8));
                  }
                }
              }
              _objc_release(ppuVar13);
              _objc_release(ppuVar10);
              _objc_release(unaff_x27);
              lVar19 = lVar19 + 1;
            } while (lVar21 != lVar19);
            lVar21 = lVar11;
            func_0x00010bf52a60();
            unaff_x26 = (undefined **)0x0;
          } while (lVar21 != 0);
        }
        _objc_release(lVar11);
        ppuVar10 = (undefined **)PTR_PTR_1126d1320;
        uVar9 = *(undefined8 *)((long)pppuVar1 + -0x8e8);
        func_0x00010c26b700(uVar9);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = *(undefined8 *)((long)pppuVar1 + -0x8d0);
        func_0x00010bf51e00(uVar5);
        func_0x00010bf9ef60();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar5);
        _objc_release(uVar9);
        *(undefined8 *)((long)pppuVar1 + -0x7f8) = 0;
        *(undefined8 *)((long)pppuVar1 + -0x800) = 0;
        *(undefined8 *)((long)pppuVar1 + -0x7e8) = 0;
        *(undefined8 *)((long)pppuVar1 + -0x7f0) = 0;
        *(undefined8 *)((long)pppuVar1 + -0x818) = 0;
        *(undefined8 *)((long)pppuVar1 + -0x820) = 0;
        *(undefined8 *)((long)pppuVar1 + -0x808) = 0;
        *(undefined8 *)((long)pppuVar1 + -0x810) = 0;
        unaff_x25 = ppuVar10;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar16 = unaff_x25;
        func_0x00010bf52a60();
        if (ppuVar16 != (undefined **)0x0) {
          lVar21 = **(long **)((long)pppuVar1 + -0x810);
          do {
            unaff_x24 = (undefined **)0x0;
            do {
              if (**(long **)((long)pppuVar1 + -0x810) != lVar21) {
                _objc_enumerationMutation(unaff_x25);
              }
              ppuVar6 = *(undefined ***)(*(long *)((long)pppuVar1 + -0x818) + (long)unaff_x24 * 8);
              ppuVar17 = ppuVar6;
              func_0x00010c2923e0();
              _objc_retainAutoreleasedReturnValue();
              ppuVar15 = ppuVar6;
              func_0x00010c294420(ppuVar6);
              _objc_retainAutoreleasedReturnValue();
              if (ppuVar6 != (undefined **)0x0 && ppuVar17 != (undefined **)0x0) {
                uVar4 = *(ulong *)((long)pppuVar1 + -0x8a8);
                func_0x00010bf4b900();
                if ((uVar4 & 1) == 0) {
                  uVar4 = *(ulong *)((long)pppuVar1 + -0x8b0);
                  func_0x00010bf4b900();
                  if ((uVar4 & 1) == 0) {
                    puVar23 = PTR_PTR_1126d2aa8;
                    _objc_alloc(PTR_PTR_1126d2aa8);
                    func_0x00010c05f760();
                    func_0x00010c1d0640(*(undefined8 *)((long)pppuVar1 + -0x8c0));
                    func_0x00010befa120(*(undefined8 *)((long)pppuVar1 + -0x8a8));
                    _objc_release(puVar23);
                  }
                }
              }
              _objc_release(ppuVar15);
              _objc_release(ppuVar17);
              unaff_x24 = (undefined **)((long)unaff_x24 + 1);
            } while (ppuVar16 != unaff_x24);
            ppuVar16 = unaff_x25;
            func_0x00010bf52a60();
            unaff_x26 = (undefined **)0x0;
          } while (ppuVar16 != (undefined **)0x0);
        }
        _objc_release(unaff_x25);
        _objc_release(ppuVar10);
        _objc_release(*(undefined8 *)((long)pppuVar1 + -0x8d0));
        lVar21 = *(long *)((long)pppuVar1 + -0x8e0) + 1;
        ppuVar15 = *(undefined ***)((long)pppuVar1 + -0x8b8);
      } while (lVar21 != *(long *)((long)pppuVar1 + -0x8f0));
      lVar21 = *(long *)((long)pppuVar1 + -0x910);
      func_0x00010bf52a60();
      *(long *)((long)pppuVar1 + -0x8f0) = lVar21;
    } while (lVar21 != 0);
  }
  _objc_release(*(undefined8 *)((long)pppuVar1 + -0x910));
  *(undefined8 *)((long)pppuVar1 + -0x838) = 0;
  *(undefined8 *)((long)pppuVar1 + -0x840) = 0;
  *(undefined8 *)((long)pppuVar1 + -0x828) = 0;
  *(undefined8 *)((long)pppuVar1 + -0x830) = 0;
  *(undefined8 *)((long)pppuVar1 + -0x858) = 0;
  *(undefined8 *)((long)pppuVar1 + -0x860) = 0;
  *(undefined8 *)((long)pppuVar1 + -0x848) = 0;
  *(undefined8 *)((long)pppuVar1 + -0x850) = 0;
  lVar21 = *(long *)((long)pppuVar1 + -0x918);
  func_0x00010c2553e0();
  _objc_retainAutoreleasedReturnValue();
  *(long *)((long)pppuVar1 + -0x8c8) = lVar21;
  func_0x00010bf52a60();
  if (lVar21 != 0) {
    unaff_x24 = (undefined **)**(undefined8 **)((long)pppuVar1 + -0x850);
    do {
      lVar11 = 0;
      do {
        if ((undefined **)**(undefined8 **)((long)pppuVar1 + -0x850) != unaff_x24) {
          _objc_enumerationMutation(*(undefined8 *)((long)pppuVar1 + -0x8c8));
        }
        ppuVar6 = *(undefined ***)(*(long *)((long)pppuVar1 + -0x858) + lVar11 * 8);
        ppuVar10 = ppuVar6;
        func_0x00010bfedfc0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar16 = ppuVar10;
        func_0x00010c0ca400();
        _objc_retainAutoreleasedReturnValue();
        ppuVar13 = ppuVar16;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar16);
        _objc_release(ppuVar10);
        ppuVar10 = ppuVar6;
        func_0x00010bfedfc0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar16 = ppuVar10;
        func_0x00010c0ca400();
        _objc_retainAutoreleasedReturnValue();
        ppuVar17 = ppuVar16;
        func_0x00010c294420();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar16);
        _objc_release(ppuVar10);
        ppuVar10 = ppuVar13;
        func_0x00010c08fa60();
        if (ppuVar10 == (undefined **)0x0) {
code_r0x000106df0504:
          ppuVar10 = ppuVar6;
          func_0x00010bfedfc0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar16 = ppuVar10;
          func_0x00010c244f40();
          _objc_retainAutoreleasedReturnValue();
          ppuVar14 = ppuVar16;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar13);
          _objc_release(ppuVar16);
          _objc_release(ppuVar10);
          func_0x00010bfedfc0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar15 = ppuVar6;
          func_0x00010c244f40();
          _objc_retainAutoreleasedReturnValue();
          unaff_x25 = ppuVar15;
          func_0x00010c294420();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar17);
          _objc_release(ppuVar15);
          _objc_release(ppuVar6);
          ppuVar10 = ppuVar14;
          func_0x00010c08fa60();
          if (ppuVar10 != (undefined **)0x0) {
            uVar4 = *(ulong *)((long)pppuVar1 + -0x8a8);
            func_0x00010bf4b900();
            if ((uVar4 & 1) == 0) {
              uVar4 = *(ulong *)((long)pppuVar1 + -0x8b0);
              func_0x00010bf4b900();
              if ((uVar4 & 1) == 0) {
                unaff_x27 = (undefined **)PTR_PTR_1126d2aa8;
                _objc_alloc();
                func_0x00010c05f760();
                func_0x00010c1d0640(*(undefined8 *)((long)pppuVar1 + -0x8c0));
                goto code_r0x000106df0640;
              }
            }
          }
        }
        else {
          uVar4 = *(ulong *)((long)pppuVar1 + -0x8a8);
          func_0x00010bf4b900();
          if ((uVar4 & 1) != 0) goto code_r0x000106df0504;
          uVar4 = *(ulong *)((long)pppuVar1 + -0x8b0);
          func_0x00010bf4b900();
          if ((uVar4 & 1) != 0) goto code_r0x000106df0504;
          unaff_x27 = (undefined **)PTR_PTR_1126d2aa8;
          _objc_alloc();
          func_0x00010c05f760();
          func_0x00010c1d0640(*(undefined8 *)((long)pppuVar1 + -0x8c0));
          unaff_x25 = ppuVar17;
          ppuVar14 = ppuVar13;
code_r0x000106df0640:
          func_0x00010befa120(*(undefined8 *)((long)pppuVar1 + -0x8a8));
          _objc_release(unaff_x27);
          ppuVar13 = ppuVar14;
        }
        _objc_release(unaff_x25);
        _objc_release(ppuVar14);
        lVar11 = lVar11 + 1;
      } while (lVar21 != lVar11);
      lVar21 = *(long *)((long)pppuVar1 + -0x8c8);
      func_0x00010bf52a60();
      unaff_x26 = (undefined **)0x0;
    } while (lVar21 != 0);
  }
  _objc_release(*(undefined8 *)((long)pppuVar1 + -0x8c8));
  *(undefined8 *)((long)pppuVar1 + -0x878) = 0;
  *(undefined8 *)((long)pppuVar1 + -0x880) = 0;
  *(undefined8 *)((long)pppuVar1 + -0x868) = 0;
  *(undefined8 *)((long)pppuVar1 + -0x870) = 0;
  *(undefined8 *)((long)pppuVar1 + -0x898) = 0;
  *(undefined8 *)((long)pppuVar1 + -0x8a0) = 0;
  *(undefined8 *)((long)pppuVar1 + -0x888) = 0;
  *(undefined8 *)((long)pppuVar1 + -0x890) = 0;
  ppuVar10 = *(undefined ***)((long)pppuVar1 + -0x908);
  _objc_retain(ppuVar10);
  func_0x00010bf52a60();
  if (ppuVar10 != (undefined **)0x0) {
    unaff_x27 = (undefined **)**(undefined8 **)((long)pppuVar1 + -0x890);
    do {
      ppuVar13 = (undefined **)0x0;
      do {
        if ((undefined **)**(undefined8 **)((long)pppuVar1 + -0x890) != unaff_x27) {
          _objc_enumerationMutation(*(undefined8 *)((long)pppuVar1 + -0x908));
        }
        ppuVar17 = *(undefined ***)(*(long *)((long)pppuVar1 + -0x898) + (long)ppuVar13 * 8);
        ppuVar16 = ppuVar17;
        func_0x00010c0cc0c0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar15 = ppuVar16;
        func_0x00010bfedf20();
        _objc_retainAutoreleasedReturnValue();
        unaff_x24 = ppuVar15;
        func_0x00010bfedf40();
        _objc_release(ppuVar15);
        _objc_release(ppuVar16);
        if ((int)unaff_x24 == 6) {
          ppuVar16 = ppuVar17;
          func_0x00010c0cc0c0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar15 = ppuVar16;
          func_0x00010bfedf20();
          _objc_retainAutoreleasedReturnValue();
          unaff_x25 = ppuVar15;
          func_0x00010c0ca640();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar15);
          _objc_release(ppuVar16);
          ppuVar16 = unaff_x25;
          func_0x00010bfde100();
          if ((int)ppuVar16 != 0) {
            ppuVar16 = unaff_x25;
            func_0x00010c2923e0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar15 = ppuVar16;
            func_0x00010bfe2ee0();
            unaff_x24 = unaff_x25;
            func_0x00010c2923e0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar12 = unaff_x24;
            func_0x00010c0b5940();
            ppuVar17 = ppuVar15;
            func_0x000100c4a928();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(unaff_x24);
            _objc_release(ppuVar16);
            unaff_x26 = unaff_x25;
            func_0x00010c294420();
            _objc_retainAutoreleasedReturnValue();
            ppuVar16 = ppuVar17;
            func_0x00010c08fa60();
            if (ppuVar16 != (undefined **)0x0) {
              uVar4 = *(ulong *)((long)pppuVar1 + -0x8a8);
              func_0x00010bf4b900();
              if ((uVar4 & 1) == 0) {
                uVar4 = *(ulong *)((long)pppuVar1 + -0x8b0);
                func_0x00010bf4b900();
                if ((uVar4 & 1) == 0) {
                  puVar23 = PTR_PTR_1126d2aa8;
                  _objc_alloc(PTR_PTR_1126d2aa8);
                  func_0x00010c05f760();
                  func_0x00010c1d0640(*(undefined8 *)((long)pppuVar1 + -0x8c0));
                  func_0x00010befa120(*(undefined8 *)((long)pppuVar1 + -0x8a8));
                  _objc_release(puVar23);
                }
              }
            }
            _objc_release(unaff_x26);
            _objc_release(ppuVar17);
          }
          _objc_release(unaff_x25);
        }
        ppuVar13 = (undefined **)((long)ppuVar13 + 1);
      } while (ppuVar10 != ppuVar13);
      ppuVar10 = *(undefined ***)((long)pppuVar1 + -0x908);
      func_0x00010bf52a60();
    } while (ppuVar10 != (undefined **)0x0);
  }
  uVar9 = *(undefined8 *)((long)pppuVar1 + -0x908);
  _objc_release(uVar9);
  ppuVar10 = *(undefined ***)((long)pppuVar1 + -0x8c0);
  ppuVar16 = ppuVar10;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(*(undefined8 *)((long)pppuVar1 + -0x8a8));
  _objc_release(ppuVar10);
  _objc_release(*(undefined8 *)((long)pppuVar1 + -0x8b8));
  _objc_release(uVar9);
  _objc_release(*(undefined8 *)((long)pppuVar1 + -0x8b0));
  _objc_release(*(undefined8 *)((long)pppuVar1 + -0x918));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)pppuVar1 + -0x360)) {
    ___stack_chk_fail();
    *(undefined ***)((long)pppuVar1 + -0x980) = ppuVar13;
    *(undefined ***)((long)pppuVar1 + -0x978) = unaff_x27;
    *(undefined ***)((long)pppuVar1 + -0x970) = unaff_x26;
    *(undefined ***)((long)pppuVar1 + -0x968) = unaff_x25;
    *(undefined ***)((long)pppuVar1 + -0x960) = unaff_x24;
    *(undefined ***)((long)pppuVar1 + -0x958) = ppuVar17;
    *(undefined ***)((long)pppuVar1 + -0x950) = ppuVar15;
    *(undefined ***)((long)pppuVar1 + -0x948) = ppuVar10;
    *(undefined8 *)((long)pppuVar1 + -0x940) = uVar9;
    *(undefined ***)((long)pppuVar1 + -0x938) = ppuVar16;
    *(undefined1 **)((long)pppuVar1 + -0x930) = (undefined1 *)((long)pppuVar1 + -0x300);
    *(undefined **)((long)pppuVar1 + -0x928) = &UNK_106df0944;
    *(undefined8 *)((long)pppuVar1 + -0x990) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    ppuVar10 = (undefined **)PTR_PTR_1126bc7b8;
    func_0x00010bfa7160();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar10;
    func_0x00010c0ef4a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar10);
    ppuVar10 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    *(undefined8 *)((long)pppuVar1 + -0xa48) = 0;
    *(undefined8 *)((long)pppuVar1 + -0xa50) = 0;
    *(undefined8 *)((long)pppuVar1 + -0xa38) = 0;
    *(undefined8 *)((long)pppuVar1 + -0xa40) = 0;
    *(undefined8 *)((long)pppuVar1 + -0xa28) = 0;
    *(undefined8 *)((long)pppuVar1 + -0xa30) = 0;
    *(undefined8 *)((long)pppuVar1 + -0xa18) = 0;
    *(undefined8 *)((long)pppuVar1 + -0xa20) = 0;
    ppuVar16 = ppuVar6;
    func_0x00010c2553e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar14 = ppuVar16;
    func_0x00010bf52a60();
    if (ppuVar14 != (undefined **)0x0) {
      unaff_x26 = (undefined **)**(undefined8 **)((long)pppuVar1 + -0xa40);
      unaff_x27 = &PTR_PTR_1126d2000;
      do {
        ppuVar13 = (undefined **)0x0;
        do {
          if ((undefined **)**(undefined8 **)((long)pppuVar1 + -0xa40) != unaff_x26) {
            _objc_enumerationMutation(ppuVar16);
          }
          unaff_x24 = *(undefined ***)(*(long *)((long)pppuVar1 + -0xa48) + (long)ppuVar13 * 8);
          func_0x00010bfedfc0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x25 = unaff_x24;
          func_0x00010c2751c0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar17 = unaff_x25;
          func_0x00010c275660();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(unaff_x25);
          _objc_release(unaff_x24);
          if (ppuVar17 != (undefined **)0x0) {
            unaff_x24 = (undefined **)PTR_PTR_1126d2ab8;
            _objc_alloc();
            func_0x00010c054560();
            if (unaff_x24 != (undefined **)0x0) {
              func_0x00010befa120(ppuVar10);
            }
            _objc_release(unaff_x24);
          }
          _objc_release(ppuVar17);
          ppuVar13 = (undefined **)((long)ppuVar13 + 1);
        } while (ppuVar14 != ppuVar13);
        ppuVar14 = ppuVar16;
        func_0x00010bf52a60();
        ppuVar15 = (undefined **)0x0;
      } while (ppuVar14 != (undefined **)0x0);
    }
    _objc_release(ppuVar16);
    ppuVar16 = ppuVar10;
    func_0x00010bf51e00();
    _objc_release(ppuVar10);
    _objc_release(ppuVar6);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)pppuVar1 + -0x990)) {
      ___stack_chk_fail();
      *(undefined ***)((long)pppuVar1 + -0xaa0) = unaff_x26;
      *(undefined ***)((long)pppuVar1 + -0xa98) = unaff_x25;
      *(undefined ***)((long)pppuVar1 + -0xa90) = unaff_x24;
      *(undefined ***)((long)pppuVar1 + -0xa88) = ppuVar17;
      *(undefined ***)((long)pppuVar1 + -0xa80) = ppuVar15;
      *(undefined ***)((long)pppuVar1 + -0xa78) = ppuVar16;
      *(undefined ***)((long)pppuVar1 + -0xa70) = ppuVar10;
      *(undefined ***)((long)pppuVar1 + -0xa68) = ppuVar6;
      *(undefined1 **)((long)pppuVar1 + -0xa60) = (undefined1 *)((long)pppuVar1 + -0x930);
      *(undefined **)((long)pppuVar1 + -0xa58) = &UNK_106df0b34;
      *(undefined8 *)((long)pppuVar1 + -0xaa8) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      ppuVar10 = (undefined **)PTR_PTR_1126bc7b8;
      func_0x00010bfa7160();
      _objc_retainAutoreleasedReturnValue();
      ppuVar15 = ppuVar10;
      func_0x00010c0ef4a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar10);
      *(undefined8 *)((long)pppuVar1 + -0xb48) = 0;
      *(undefined8 *)((long)pppuVar1 + -0xb50) = 0;
      *(undefined8 *)((long)pppuVar1 + -0xb38) = 0;
      *(undefined8 *)((long)pppuVar1 + -0xb40) = 0;
      *(undefined8 *)((long)pppuVar1 + -0xb68) = 0;
      *(undefined8 *)((long)pppuVar1 + -0xb70) = 0;
      *(undefined8 *)((long)pppuVar1 + -0xb58) = 0;
      *(undefined8 *)((long)pppuVar1 + -0xb60) = 0;
      ppuVar10 = ppuVar15;
      func_0x00010c2553e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = ppuVar10;
      func_0x00010bf52a60();
      if (ppuVar6 != (undefined **)0x0) {
        unaff_x24 = (undefined **)**(undefined8 **)((long)pppuVar1 + -0xb60);
        ppuVar16 = ppuVar6;
        do {
          unaff_x25 = (undefined **)0x0;
          do {
            if ((undefined **)**(undefined8 **)((long)pppuVar1 + -0xb60) != unaff_x24) {
              _objc_enumerationMutation(ppuVar10);
            }
            ppuVar17 = *(undefined ***)(*(long *)((long)pppuVar1 + -0xb68) + (long)unaff_x25 * 8);
            func_0x00010bfedfc0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar14 = ppuVar17;
            func_0x00010c25bcc0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar17);
            ppuVar6 = ppuVar16;
            if (ppuVar14 != (undefined **)0x0) goto code_r0x000106df0c58;
            unaff_x25 = (undefined **)((long)unaff_x25 + 1);
          } while (ppuVar16 != unaff_x25);
          ppuVar16 = ppuVar10;
          func_0x00010bf52a60();
        } while (ppuVar16 != (undefined **)0x0);
      }
      ppuVar6 = ppuVar16;
      ppuVar14 = (undefined **)0x0;
code_r0x000106df0c58:
      ppuVar16 = ppuVar14;
      _objc_release(ppuVar10);
      ppuVar14 = ppuVar15;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)pppuVar1 + -0xaa8)) {
        ___stack_chk_fail();
        *(undefined ***)((long)pppuVar1 + -0xbb0) = ppuVar13;
        *(undefined ***)((long)pppuVar1 + -0xba8) = unaff_x27;
        *(undefined ***)((long)pppuVar1 + -0xba0) = ppuVar16;
        *(undefined ***)((long)pppuVar1 + -0xb98) = ppuVar6;
        *(undefined ***)((long)pppuVar1 + -0xb90) = ppuVar10;
        *(undefined ***)((long)pppuVar1 + -0xb88) = ppuVar15;
        *(undefined1 **)((long)pppuVar1 + -0xb80) = (undefined1 *)((long)pppuVar1 + -0xa60);
        *(undefined **)((long)pppuVar1 + -0xb78) = &UNK_106df0ca4;
        *(undefined8 *)((long)pppuVar1 + -3000) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        _objc_retain();
        *(undefined8 *)((long)pppuVar1 + -0xc78) = 0;
        *(undefined8 *)((long)pppuVar1 + -0xc80) = 0;
        *(undefined8 *)((long)pppuVar1 + -0xc68) = 0;
        *(undefined8 *)((long)pppuVar1 + -0xc70) = 0;
        *(undefined8 *)((long)pppuVar1 + -0xc58) = 0;
        *(undefined8 *)((long)pppuVar1 + -0xc60) = 0;
        *(undefined8 *)((long)pppuVar1 + -0xc48) = 0;
        *(undefined8 *)((long)pppuVar1 + -0xc50) = 0;
        _objc_retain(ppuVar14);
        ppuVar10 = ppuVar14;
        func_0x00010bf52a60();
        if (ppuVar10 != (undefined **)0x0) {
          ppuVar6 = (undefined **)**(undefined8 **)((long)pppuVar1 + -0xc70);
          do {
            ppuVar16 = (undefined **)0x0;
            do {
              if ((undefined **)**(undefined8 **)((long)pppuVar1 + -0xc70) != ppuVar6) {
                _objc_enumerationMutation(ppuVar14);
              }
              lVar21 = *(long *)(*(long *)((long)pppuVar1 + -0xc78) + (long)ppuVar16 * 8);
              func_0x00010b5fa088();
              if (lVar21 != 1) {
                ppuVar15 = (undefined **)0x0;
                ppuVar10 = ppuVar16;
                goto code_r0x000106df0d70;
              }
              ppuVar16 = (undefined **)((long)ppuVar16 + 1);
            } while (ppuVar10 != ppuVar16);
            ppuVar10 = ppuVar14;
            func_0x00010bf52a60();
          } while (ppuVar10 != (undefined **)0x0);
        }
        ppuVar15 = (undefined **)0x1;
        ppuVar10 = ppuVar16;
code_r0x000106df0d70:
        _objc_release(ppuVar14);
        ppuVar16 = ppuVar14;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)pppuVar1 + -3000)) {
          return ppuVar15;
        }
        ___stack_chk_fail();
        *(undefined ***)((long)pppuVar1 + -0xce0) = ppuVar13;
        *(undefined ***)((long)pppuVar1 + -0xcd8) = unaff_x27;
        *(undefined ***)((long)pppuVar1 + -0xcd0) = unaff_x26;
        *(undefined ***)((long)pppuVar1 + -0xcc8) = unaff_x25;
        *(undefined ***)((long)pppuVar1 + -0xcc0) = unaff_x24;
        *(undefined ***)((long)pppuVar1 + -0xcb8) = ppuVar17;
        *(undefined ***)((long)pppuVar1 + -0xcb0) = ppuVar10;
        *(undefined ***)((long)pppuVar1 + -0xca8) = ppuVar6;
        *(undefined ***)((long)pppuVar1 + -0xca0) = ppuVar15;
        *(undefined ***)((long)pppuVar1 + -0xc98) = ppuVar14;
        *(undefined1 **)((long)pppuVar1 + -0xc90) = (undefined1 *)((long)pppuVar1 + -0xb80);
        *(undefined **)((long)pppuVar1 + -0xc88) = &UNK_106df0db8;
        *(undefined8 *)((long)pppuVar1 + -0xcf0) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        *(undefined8 *)((long)pppuVar1 + -0xda8) = 0;
        *(undefined8 *)((long)pppuVar1 + -0xdb0) = 0;
        *(undefined8 *)((long)pppuVar1 + -0xd98) = 0;
        *(undefined8 *)((long)pppuVar1 + -0xda0) = 0;
        *(undefined8 *)((long)pppuVar1 + -0xd88) = 0;
        *(undefined8 *)((long)pppuVar1 + -0xd90) = 0;
        *(undefined8 *)((long)pppuVar1 + -0xd78) = 0;
        *(undefined8 *)((long)pppuVar1 + -0xd80) = 0;
        func_0x00010c2553e0();
        _objc_retainAutoreleasedReturnValue();
        *(undefined ***)((long)pppuVar1 + -0xdd0) = ppuVar16;
        func_0x00010bf52a60();
        *(undefined ***)((long)pppuVar1 + -0xdc0) = ppuVar16;
        if (ppuVar16 != (undefined **)0x0) {
          *(undefined8 *)((long)pppuVar1 + -0xdc8) = **(undefined8 **)((long)pppuVar1 + -0xda0);
          do {
            ppuVar6 = (undefined **)0x0;
            do {
              if (**(long **)((long)pppuVar1 + -0xda0) != *(long *)((long)pppuVar1 + -0xdc8)) {
                _objc_enumerationMutation(*(undefined8 *)((long)pppuVar1 + -0xdd0));
              }
              unaff_x25 = *(undefined ***)(*(long *)((long)pppuVar1 + -0xda8) + (long)ppuVar6 * 8);
              ppuVar17 = unaff_x25;
              func_0x00010bf06320();
              _objc_retainAutoreleasedReturnValue();
              unaff_x24 = ppuVar17;
              func_0x00010c27dd80();
              _objc_retainAutoreleasedReturnValue();
              ppuVar10 = unaff_x24;
              func_0x00010b774bc4();
              _objc_release(unaff_x24);
              _objc_release(ppuVar17);
              if (ppuVar10 == (undefined **)0x3fa644c1 ||
                  ppuVar10 == (undefined **)0xfffffffff0575f4d) {
                *(undefined **)((long)pppuVar1 + -0xdb8) = PTR_PTR_1126c4978;
                ppuVar17 = unaff_x25;
                func_0x00010bf06320();
                _objc_retainAutoreleasedReturnValue();
                unaff_x24 = ppuVar17;
                func_0x00010bf05ba0();
                _objc_retainAutoreleasedReturnValue();
                unaff_x26 = unaff_x25;
                func_0x00010bf06320();
                _objc_retainAutoreleasedReturnValue();
                unaff_x27 = unaff_x26;
                func_0x00010bf0d6a0();
                _objc_retainAutoreleasedReturnValue();
                ppuVar13 = unaff_x25;
                func_0x00010bf06320();
                _objc_retainAutoreleasedReturnValue();
                ppuVar16 = ppuVar13;
                func_0x00010c27dd80();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bf06320();
                _objc_retainAutoreleasedReturnValue();
                ppuVar15 = unaff_x25;
                func_0x00010bf05300();
                _objc_retainAutoreleasedReturnValue();
                uVar9 = *(undefined8 *)((long)pppuVar1 + -0xdb8);
                func_0x00010c241c80();
                _objc_retainAutoreleasedReturnValue();
                *(undefined8 *)((long)pppuVar1 + -0xdb8) = uVar9;
                _objc_release(ppuVar15);
                _objc_release(unaff_x25);
                _objc_release(ppuVar16);
                _objc_release(ppuVar13);
                _objc_release(unaff_x27);
                _objc_release(unaff_x26);
                _objc_release(unaff_x24);
                _objc_release(ppuVar17);
              }
              ppuVar15 = (undefined **)0xfffffffff0575f4d;
              if (ppuVar10 == (undefined **)0xfffffffff0575f4d ||
                  ppuVar10 == (undefined **)0x3fa644c1) {
                ppuVar16 = *(undefined ***)((long)pppuVar1 + -0xdb8);
                goto code_r0x000106df0ffc;
              }
              ppuVar6 = (undefined **)((long)ppuVar6 + 1);
            } while (*(undefined ***)((long)pppuVar1 + -0xdc0) != ppuVar6);
            lVar21 = *(long *)((long)pppuVar1 + -0xdd0);
            func_0x00010bf52a60();
            *(long *)((long)pppuVar1 + -0xdc0) = lVar21;
          } while (lVar21 != 0);
        }
        ppuVar16 = (undefined **)0x0;
code_r0x000106df0ffc:
        lVar21 = *(long *)((long)pppuVar1 + -0xdd0);
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)pppuVar1 + -0xcf0)) {
          ___stack_chk_fail();
          *(undefined ***)((long)pppuVar1 + -0xe30) = ppuVar13;
          *(undefined ***)((long)pppuVar1 + -0xe28) = unaff_x27;
          *(undefined ***)((long)pppuVar1 + -0xe20) = unaff_x26;
          *(undefined ***)((long)pppuVar1 + -0xe18) = unaff_x25;
          *(undefined ***)((long)pppuVar1 + -0xe10) = unaff_x24;
          *(undefined ***)((long)pppuVar1 + -0xe08) = ppuVar17;
          *(undefined ***)((long)pppuVar1 + -0xe00) = ppuVar10;
          *(undefined ***)((long)pppuVar1 + -0xdf8) = ppuVar6;
          *(undefined ***)((long)pppuVar1 + -0xdf0) = ppuVar15;
          *(undefined ***)((long)pppuVar1 + -0xde8) = ppuVar16;
          *(undefined1 **)((long)pppuVar1 + -0xde0) = (undefined1 *)((long)pppuVar1 + -0xc90);
          *(undefined **)((long)pppuVar1 + -0xdd8) = &UNK_106df1044;
          *(undefined8 *)((long)pppuVar1 + -0xe40) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0
          ;
          _objc_retain();
          *(undefined ***)((long)pppuVar1 + -0x1248) = ppuVar12;
          _objc_retain(ppuVar12);
          ppuVar16 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          func_0x00010bf09f00();
          _objc_retainAutoreleasedReturnValue();
          *(undefined8 *)((long)pppuVar1 + -0x10f8) = 0;
          *(undefined8 *)((long)pppuVar1 + -0x1100) = 0;
          *(undefined8 *)((long)pppuVar1 + -0x10e8) = 0;
          *(undefined8 *)((long)pppuVar1 + -0x10f0) = 0;
          *(undefined8 *)((long)pppuVar1 + -0x10d8) = 0;
          *(undefined8 *)((long)pppuVar1 + -0x10e0) = 0;
          *(undefined8 *)((long)pppuVar1 + -0x10c8) = 0;
          *(undefined8 *)((long)pppuVar1 + -0x10d0) = 0;
          _objc_retain(lVar21);
          *(long *)((long)pppuVar1 + -0x1260) = lVar21;
          func_0x00010bf52a60();
          *(long *)((long)pppuVar1 + -0x1240) = lVar21;
          if (lVar21 == 0) {
            ppuVar6 = *(undefined ***)((long)pppuVar1 + -0x1260);
            _objc_release(ppuVar6);
            _objc_release(*(undefined8 *)((long)pppuVar1 + -0x1248));
            ppuVar15 = ppuVar6;
            _objc_release();
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)pppuVar1 + -0xe40))
            goto _objc_autoreleaseReturnValue;
            puVar23 = &UNK_106df16ec;
            ___stack_chk_fail();
          }
          else {
            *(undefined8 *)((long)pppuVar1 + -0x1250) = **(undefined8 **)((long)pppuVar1 + -0x10f0);
            if (**(long **)((long)pppuVar1 + -0x10f0) != *(long *)((long)pppuVar1 + -0x1250)) {
              _objc_enumerationMutation(*(undefined8 *)((long)pppuVar1 + -0x1260));
            }
            puVar23 = PTR_PTR_1126bc7b8;
            *(undefined8 *)((long)pppuVar1 + -0x1230) = 0;
            unaff_x26 = (undefined **)**(long **)((long)pppuVar1 + -0x10f8);
            ppuVar12 = *(undefined ***)((long)pppuVar1 + -0x1248);
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfa7160();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar12);
            *(undefined **)((long)pppuVar1 + -0x1238) = puVar23;
            func_0x00010c0ef4a0();
            _objc_retainAutoreleasedReturnValue();
            *(undefined **)((long)pppuVar1 + -0x1228) = puVar23;
            func_0x00010c2553e0();
            _objc_retainAutoreleasedReturnValue();
            *(undefined8 *)((long)pppuVar1 + -0x1138) = 0;
            *(undefined8 *)((long)pppuVar1 + -0x1140) = 0;
            *(undefined8 *)((long)pppuVar1 + -0x1128) = 0;
            *(undefined8 *)((long)pppuVar1 + -0x1130) = 0;
            *(undefined8 *)((long)pppuVar1 + -0x1118) = 0;
            *(undefined8 *)((long)pppuVar1 + -0x1120) = 0;
            *(undefined8 *)((long)pppuVar1 + -0x1108) = 0;
            *(undefined8 *)((long)pppuVar1 + -0x1110) = 0;
            *(undefined **)((long)pppuVar1 + -0x1208) = puVar23;
            func_0x00010bf52a60();
            if (puVar23 != (undefined *)0x0) {
              unaff_x24 = (undefined **)**(undefined8 **)((long)pppuVar1 + -0x1130);
              do {
                puVar20 = (undefined *)0x0;
                do {
                  if ((undefined **)**(undefined8 **)((long)pppuVar1 + -0x1130) != unaff_x24) {
                    _objc_enumerationMutation(*(undefined8 *)((long)pppuVar1 + -0x1208));
                  }
                  ppuVar12 = *(undefined ***)
                              (*(long *)((long)pppuVar1 + -0x1138) + (long)puVar20 * 8);
                  ppuVar10 = ppuVar12;
                  func_0x00010bfedfc0();
                  _objc_retainAutoreleasedReturnValue();
                  unaff_x27 = ppuVar10;
                  func_0x00010c0ca400();
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar13 = unaff_x27;
                  func_0x00010c2923e0();
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar15 = ppuVar13;
                  func_0x00010c08fa60();
                  _objc_release(ppuVar13);
                  _objc_release(unaff_x27);
                  _objc_release(ppuVar10);
                  ppuVar17 = (undefined **)0x0;
                  if (ppuVar15 != (undefined **)0x0) {
                    func_0x00010bfedfc0();
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar10 = ppuVar12;
                    func_0x00010c0ca400();
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar17 = ppuVar10;
                    func_0x00010c2923e0();
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010befa120(ppuVar16);
                    _objc_release(ppuVar17);
                    _objc_release(ppuVar10);
                    _objc_release(ppuVar12);
                  }
                  puVar20 = puVar20 + 1;
                } while (puVar23 != puVar20);
                puVar23 = *(undefined **)((long)pppuVar1 + -0x1208);
                func_0x00010bf52a60();
              } while (puVar23 != (undefined *)0x0);
            }
            unaff_x25 = *(undefined ***)((long)pppuVar1 + -0x1228);
            ppuVar15 = unaff_x25;
            func_0x00010bf2fba0();
            _objc_retainAutoreleasedReturnValue();
            puVar23 = &UNK_106df12c0;
            ppuVar6 = ppuVar15;
          }
          puVar7 = (undefined1 *)((long)pppuVar1 + -0x1390);
          *(undefined ***)((long)pppuVar1 + -0x12c0) = ppuVar13;
          *(undefined ***)((long)pppuVar1 + -0x12b8) = unaff_x27;
          *(undefined ***)((long)pppuVar1 + -0x12b0) = unaff_x26;
          *(undefined ***)((long)pppuVar1 + -0x12a8) = unaff_x25;
          *(undefined ***)((long)pppuVar1 + -0x12a0) = unaff_x24;
          *(undefined ***)((long)pppuVar1 + -0x1298) = ppuVar17;
          *(undefined ***)((long)pppuVar1 + -0x1290) = ppuVar10;
          *(undefined ***)((long)pppuVar1 + -0x1288) = ppuVar16;
          *(undefined ***)((long)pppuVar1 + -0x1280) = ppuVar12;
          *(undefined ***)((long)pppuVar1 + -0x1278) = ppuVar6;
          *(undefined1 **)((long)pppuVar1 + -0x1270) = (undefined1 *)((long)pppuVar1 + -0xde0);
          *(undefined **)((long)pppuVar1 + -0x1268) = puVar23;
          *(undefined8 *)((long)pppuVar1 + -0x12c8) =
               *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
          _objc_retain();
          ppuVar16 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          func_0x00010bf09f00();
          _objc_retainAutoreleasedReturnValue();
          *(undefined8 *)((long)pppuVar1 + -5000) = 0;
          *(undefined8 *)((long)pppuVar1 + -0x1390) = 0;
          *(undefined8 *)((long)pppuVar1 + -0x1378) = 0;
          *(undefined8 *)((long)pppuVar1 + -0x1380) = 0;
          *(undefined8 *)((long)pppuVar1 + -0x1368) = 0;
          *(undefined8 *)((long)pppuVar1 + -0x1370) = 0;
          *(undefined8 *)((long)pppuVar1 + -0x1358) = 0;
          *(undefined8 *)((long)pppuVar1 + -0x1360) = 0;
          ppuVar13 = ppuVar15;
          func_0x00010c293dc0();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = (undefined1 *)((long)pppuVar1 + -0x1348);
          ppuVar12 = ppuVar13;
          func_0x00010bf52a60();
          if (ppuVar12 != (undefined **)0x0) {
            lVar21 = **(long **)((long)pppuVar1 + -0x1380);
            do {
              ppuVar10 = (undefined **)0x0;
              do {
                if (**(long **)((long)pppuVar1 + -0x1380) != lVar21) {
                  _objc_enumerationMutation(ppuVar13);
                }
                ppuVar17 = *(undefined ***)(*(long *)((long)pppuVar1 + -5000) + (long)ppuVar10 * 8);
                unaff_x24 = ppuVar17;
                func_0x00010c2923e0();
                _objc_retainAutoreleasedReturnValue();
                ppuVar6 = unaff_x24;
                func_0x00010c08fa60();
                _objc_release(unaff_x24);
                if (ppuVar6 != (undefined **)0x0) {
                  func_0x00010c2923e0();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010befa120(ppuVar16);
                  _objc_release(ppuVar17);
                }
                ppuVar10 = (undefined **)((long)ppuVar10 + 1);
              } while (ppuVar12 != ppuVar10);
              puVar8 = (undefined1 *)((long)pppuVar1 + -0x1348);
              ppuVar12 = ppuVar13;
              puVar7 = (undefined1 *)((long)pppuVar1 + -0x1390);
              func_0x00010bf52a60();
              ppuVar10 = (undefined **)0x0;
            } while (ppuVar12 != (undefined **)0x0);
          }
          _objc_release(ppuVar13);
          ppuVar12 = ppuVar15;
          _objc_release();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)pppuVar1 + -0x12c8)) {
            ___stack_chk_fail();
            *(undefined ***)((long)pppuVar1 + -0x13d0) = unaff_x24;
            *(undefined ***)((long)pppuVar1 + -0x13c8) = ppuVar17;
            *(undefined ***)((long)pppuVar1 + -0x13c0) = ppuVar10;
            *(undefined ***)((long)pppuVar1 + -0x13b8) = ppuVar13;
            *(undefined ***)((long)pppuVar1 + -0x13b0) = ppuVar16;
            *(undefined ***)((long)pppuVar1 + -0x13a8) = ppuVar15;
            *(undefined1 **)((long)pppuVar1 + -0x13a0) = (undefined1 *)((long)pppuVar1 + -0x1270);
            *(undefined **)((long)pppuVar1 + -0x1398) = &UNK_106df1868;
            _objc_retain(puVar7);
            _objc_retain(puVar8);
            *(undefined ***)((long)pppuVar1 + -0x13e0) = ppuVar12;
            *(undefined **)((long)pppuVar1 + -0x13d8) = PTR_PTR_1126f6f30;
            ppuVar13 = (undefined **)((long)pppuVar1 + -0x13e0);
            _objc_msgSendSuper2(ppuVar13,PTR_s_init_1125d9248);
            if (ppuVar13 != (undefined **)0x0) {
              _objc_retain(puVar7);
              puVar23 = ppuVar13[1];
              ppuVar13[1] = puVar7;
              _objc_release(puVar23);
              _objc_initWeak((undefined1 *)((long)pppuVar1 + -0x13e8),ppuVar13);
              puVar23 = PTR_PTR_1126ae720;
              *(undefined **)((long)pppuVar1 + -0x1418) = PTR___NSConcreteStackBlock_11034bd00;
              *(undefined8 *)((long)pppuVar1 + -0x1410) = 0xc2000000;
              *(undefined **)((long)pppuVar1 + -0x1408) = &UNK_106df19b4;
              *(undefined **)((long)pppuVar1 + -0x1400) = &UNK_1108544e0;
              _objc_copyWeak((undefined1 *)((long)pppuVar1 + -0x13f0),
                             (undefined1 *)((long)pppuVar1 + -0x13e8));
              _objc_retain(puVar8);
              *(undefined1 **)((long)pppuVar1 + -0x13f8) = puVar8;
              func_0x00010bf11fe0();
              _objc_retainAutoreleasedReturnValue();
              puVar20 = ppuVar13[2];
              ppuVar13[2] = puVar23;
              _objc_release(puVar20);
              _objc_release(*(undefined8 *)((long)pppuVar1 + -0x13f8));
              _objc_destroyWeak((undefined1 *)((long)pppuVar1 + -0x13f0));
              _objc_destroyWeak((undefined1 *)((long)pppuVar1 + -0x13e8));
            }
            _objc_release(puVar8);
            _objc_release(puVar7);
            return ppuVar13;
          }
        }
      }
    }
  }
  goto _objc_autoreleaseReturnValue;
}



/* Entry: 106deefe4; end: 106def3a3;  */

/* WARNING: Possible PIC construction at 0x000106defae4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000106df12bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000106df134c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106df12c0) */
/* WARNING: Removing unreachable block (ram,0x000106df131c) */
/* WARNING: Removing unreachable block (ram,0x000106defae8) */
/* WARNING: Removing unreachable block (ram,0x000106defaf8) */
/* WARNING: Removing unreachable block (ram,0x000106defb04) */
/* WARNING: Removing unreachable block (ram,0x000106df1350) */
/* WARNING: Removing unreachable block (ram,0x000106df137c) */
/* WARNING: Removing unreachable block (ram,0x000106df1328) */
/* WARNING: Removing unreachable block (ram,0x000106df132c) */
/* WARNING: Removing unreachable block (ram,0x000106df133c) */
/* WARNING: Removing unreachable block (ram,0x000106df1344) */
/* WARNING: Removing unreachable block (ram,0x000106df1398) */
/* WARNING: Removing unreachable block (ram,0x000106df13bc) */
/* WARNING: Removing unreachable block (ram,0x000106df1428) */
/* WARNING: Removing unreachable block (ram,0x000106df1434) */
/* WARNING: Removing unreachable block (ram,0x000106df1438) */
/* WARNING: Removing unreachable block (ram,0x000106df144c) */
/* WARNING: Removing unreachable block (ram,0x000106df1454) */
/* WARNING: Removing unreachable block (ram,0x000106df149c) */
/* WARNING: Removing unreachable block (ram,0x000106df1504) */
/* WARNING: Removing unreachable block (ram,0x000106df1510) */
/* WARNING: Removing unreachable block (ram,0x000106df1514) */
/* WARNING: Removing unreachable block (ram,0x000106df1524) */
/* WARNING: Removing unreachable block (ram,0x000106df152c) */
/* WARNING: Removing unreachable block (ram,0x000106df1580) */
/* WARNING: Removing unreachable block (ram,0x000106df15d8) */
/* WARNING: Removing unreachable block (ram,0x000106df15e4) */
/* WARNING: Removing unreachable block (ram,0x000106df1600) */
/* WARNING: Removing unreachable block (ram,0x000106df1608) */
/* WARNING: Removing unreachable block (ram,0x000106df1618) */
/* WARNING: Removing unreachable block (ram,0x000106df1634) */
/* WARNING: Removing unreachable block (ram,0x000106df1648) */
/* WARNING: Removing unreachable block (ram,0x000106df1674) */

undefined **
FUN_106deefe4(double param_1,double param_2,undefined **param_3,undefined **param_4,
             undefined **param_5,undefined **param_6)

{
  undefined ***pppuVar1;
  undefined **ppuVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined **unaff_x20;
  undefined **ppuVar11;
  undefined **unaff_x21;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **unaff_x22;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **unaff_x24;
  undefined **unaff_x25;
  long lVar16;
  undefined *puVar17;
  undefined **unaff_x26;
  undefined **unaff_x27;
  undefined **unaff_x28;
  undefined *puVar18;
  float fVar19;
  double unaff_d8;
  double unaff_d9;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined *puStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *apuStack_f0 [16];
  long lStack_70;
  
  puVar7 = &stack0xfffffffffffffff0;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  if (param_3 == (undefined **)0x0) {
    ppuVar12 = (undefined **)0x0;
    ppuVar13 = param_3;
  }
  else {
    param_4 = (undefined **)0x0;
    ppuStack_138 = param_3;
    func_0x000108020568();
    _objc_retainAutoreleasedReturnValue();
    param_1 = 0.0;
    lStack_128 = 0;
    puStack_130 = (undefined *)0x0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    ppuStack_140 = param_3;
    func_0x000107e639a4();
    _objc_retainAutoreleasedReturnValue();
    param_5 = &puStack_130;
    param_6 = apuStack_f0;
    ppuVar12 = param_3;
    func_0x00010bf52a60();
    if (ppuVar12 == (undefined **)0x0) {
      unaff_x22 = (undefined **)0x0;
    }
    else {
      unaff_x22 = (undefined **)0x0;
      lVar9 = *plStack_120;
      do {
        unaff_x20 = (undefined **)0x0;
        do {
          if (*plStack_120 != lVar9) {
            _objc_enumerationMutation(param_3);
          }
          unaff_x26 = *(undefined ***)(lStack_128 + (long)unaff_x20 * 8);
          ppuVar13 = unaff_x26;
          func_0x00010c0cc0c0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar5 = ppuVar13;
          func_0x00010bfae120();
          _objc_retainAutoreleasedReturnValue();
          unaff_x24 = ppuVar5;
          func_0x00010bfadfa0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar5);
          _objc_release(ppuVar13);
          ppuVar13 = unaff_x24;
          func_0x00010bfeddc0();
          if ((int)ppuVar13 == 3) {
            ppuVar5 = unaff_x24;
            func_0x00010c297f00();
            _objc_retainAutoreleasedReturnValue();
            ppuVar13 = ppuVar5;
            func_0x00010c297e20();
            _objc_retainAutoreleasedReturnValue();
            unaff_x28 = ppuVar13;
            func_0x00010c08fa60();
            _objc_release(ppuVar13);
            if (unaff_x28 != (undefined **)0x0) {
              ppuVar12 = (undefined **)PTR_PTR_1126c0e50;
              _objc_alloc();
              unaff_x25 = ppuVar5;
              func_0x00010c297e20();
              _objc_retainAutoreleasedReturnValue();
              unaff_x27 = ppuVar5;
              func_0x00010c297f60();
              _objc_retainAutoreleasedReturnValue();
              param_6 = &PTR____CFConstantStringClassReference_110daafd8;
              if (unaff_x27 != (undefined **)0x0) {
                param_6 = unaff_x27;
              }
              param_5 = unaff_x25;
              func_0x00010c036540();
              _objc_release(unaff_x27);
              _objc_release(unaff_x25);
              _objc_release(ppuVar5);
              _objc_release(unaff_x24);
              _objc_release(param_3);
              goto LAB_106def348;
            }
            _objc_release(ppuVar5);
          }
          func_0x00010c0cc0c0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x27 = unaff_x26;
          func_0x00010bfedf20();
          _objc_retainAutoreleasedReturnValue();
          unaff_x25 = unaff_x27;
          func_0x00010c0fd520();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(unaff_x27);
          _objc_release(unaff_x26);
          ppuVar13 = unaff_x25;
          func_0x00010bfda400();
          if ((int)ppuVar13 != 0 && unaff_x22 == (undefined **)0x0) {
            ppuVar13 = unaff_x25;
            func_0x00010c0fd0e0();
            _objc_retainAutoreleasedReturnValue();
            unaff_x26 = ppuVar13;
            func_0x00010bfe2ee0();
            unaff_x27 = unaff_x25;
            func_0x00010c0fd0e0();
            _objc_retainAutoreleasedReturnValue();
            param_4 = unaff_x27;
            func_0x00010c0b5940();
            func_0x000100c4a928();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(unaff_x27);
            _objc_release(ppuVar13);
            ppuVar13 = unaff_x26;
            func_0x00010c08fa60();
            if (ppuVar13 == (undefined **)0x0) {
              unaff_x22 = (undefined **)0x0;
            }
            else {
              unaff_x22 = (undefined **)PTR_PTR_1126c0e50;
              _objc_alloc();
              unaff_x27 = unaff_x25;
              func_0x00010c0d4f60();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c036540();
              _objc_release(unaff_x27);
            }
            _objc_release(unaff_x26);
          }
          _objc_release(unaff_x25);
          _objc_release(unaff_x24);
          unaff_x20 = (undefined **)((long)unaff_x20 + 1);
        } while (ppuVar12 != unaff_x20);
        param_5 = &puStack_130;
        param_6 = apuStack_f0;
        ppuVar12 = param_3;
        func_0x00010bf52a60();
      } while (ppuVar12 != (undefined **)0x0);
    }
    _objc_release(param_3);
    _objc_retain(unaff_x22);
    ppuVar12 = unaff_x22;
    ppuVar5 = unaff_x26;
LAB_106def348:
    _objc_release(unaff_x22);
    _objc_release(ppuStack_140);
    ppuVar13 = ppuStack_138;
    unaff_x21 = param_3;
    unaff_x26 = ppuVar5;
  }
  ppuVar5 = ppuVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    puVar18 = &UNK_106def3a4;
    ___stack_chk_fail();
    pppuVar1 = &ppuStack_140;
    ppuVar14 = ppuVar12;
    do {
      fVar19 = SUB84(param_1,0);
      ppuVar11 = (undefined **)((long)pppuVar1 + -0x130);
      *(undefined ***)((long)pppuVar1 + -0x60) = unaff_x28;
      *(undefined ***)((long)pppuVar1 + -0x58) = unaff_x27;
      *(undefined ***)((long)pppuVar1 + -0x50) = unaff_x26;
      *(undefined ***)((long)pppuVar1 + -0x48) = unaff_x25;
      *(undefined ***)((long)pppuVar1 + -0x40) = unaff_x24;
      *(undefined ***)((long)pppuVar1 + -0x38) = ppuVar14;
      *(undefined ***)((long)pppuVar1 + -0x30) = unaff_x22;
      *(undefined ***)((long)pppuVar1 + -0x28) = unaff_x21;
      *(undefined ***)((long)pppuVar1 + -0x20) = unaff_x20;
      *(undefined ***)((long)pppuVar1 + -0x18) = ppuVar13;
      *(undefined1 **)((long)pppuVar1 + -0x10) = puVar7;
      *(undefined **)((long)pppuVar1 + -8) = puVar18;
      *(undefined8 *)((long)pppuVar1 + -0x68) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      _objc_retain();
      if (ppuVar5 == (undefined **)0x0) {
        ppuVar12 = (undefined **)0x0;
      }
      else {
        unaff_x20 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = 0;
        *(undefined8 *)((long)pppuVar1 + -0x128) = 0;
        *(undefined8 *)((long)pppuVar1 + -0x130) = 0;
        *(undefined8 *)((long)pppuVar1 + -0x118) = 0;
        *(undefined8 *)((long)pppuVar1 + -0x120) = 0;
        *(undefined8 *)((long)pppuVar1 + -0x108) = 0;
        *(undefined8 *)((long)pppuVar1 + -0x110) = 0;
        *(undefined8 *)((long)pppuVar1 + -0xf8) = 0;
        *(undefined8 *)((long)pppuVar1 + -0x100) = 0;
        unaff_x22 = ppuVar5;
        func_0x00010c0fee00();
        _objc_retainAutoreleasedReturnValue();
        ppuVar12 = unaff_x22;
        func_0x00010c0ff660();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(unaff_x22);
        param_6 = (undefined **)((long)pppuVar1 + -0xe8);
        ppuVar13 = ppuVar12;
        func_0x00010bf52a60();
        fVar19 = (float)uVar8;
        if (ppuVar13 != (undefined **)0x0) {
          unaff_x26 = (undefined **)**(undefined8 **)((long)pppuVar1 + -0x120);
          do {
            unaff_x27 = (undefined **)0x0;
            do {
              if ((undefined **)**(undefined8 **)((long)pppuVar1 + -0x120) != unaff_x26) {
                _objc_enumerationMutation(ppuVar12);
              }
              ppuVar14 = *(undefined ***)(*(long *)((long)pppuVar1 + -0x128) + (long)unaff_x27 * 8);
              ppuVar11 = ppuVar14;
              func_0x00010c08c3a0();
              if ((int)ppuVar11 == 1) {
                unaff_x24 = ppuVar14;
                func_0x00010c0c3fe0();
                _objc_retainAutoreleasedReturnValue();
                unaff_x25 = unaff_x24;
                func_0x00010bf0b760();
                _objc_release(unaff_x24);
                if ((int)unaff_x25 == 5) {
                  func_0x00010c0c3fe0();
                  _objc_retainAutoreleasedReturnValue();
                  unaff_x24 = ppuVar14;
                  func_0x00010853d324();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010befa160(unaff_x20);
                  _objc_release(unaff_x24);
                  _objc_release(ppuVar14);
                }
              }
              unaff_x27 = (undefined **)((long)unaff_x27 + 1);
            } while (ppuVar13 != unaff_x27);
            param_6 = (undefined **)((long)pppuVar1 + -0xe8);
            ppuVar13 = ppuVar12;
            ppuVar11 = (undefined **)((long)pppuVar1 + -0x130);
            func_0x00010bf52a60();
            fVar19 = (float)uVar8;
            unaff_x22 = (undefined **)0x0;
          } while (ppuVar13 != (undefined **)0x0);
        }
        _objc_release(ppuVar12);
        ppuVar13 = unaff_x20;
        func_0x00010bf529e0();
        ppuVar12 = (undefined **)0x0;
        if (ppuVar13 != (undefined **)0x0) {
          ppuVar12 = unaff_x20;
        }
        _objc_retain(ppuVar12);
        _objc_release(unaff_x20);
        param_5 = ppuVar11;
      }
      ppuVar11 = ppuVar5;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)pppuVar1 + -0x68)) break;
      ___stack_chk_fail();
      *(double *)((long)pppuVar1 + -400) = unaff_d9;
      *(double *)((long)pppuVar1 + -0x188) = unaff_d8;
      *(undefined ***)((long)pppuVar1 + -0x180) = unaff_x26;
      *(undefined ***)((long)pppuVar1 + -0x178) = unaff_x25;
      *(undefined ***)((long)pppuVar1 + -0x170) = unaff_x24;
      *(undefined ***)((long)pppuVar1 + -0x168) = ppuVar14;
      *(undefined ***)((long)pppuVar1 + -0x160) = unaff_x22;
      *(undefined ***)((long)pppuVar1 + -0x158) = ppuVar12;
      *(undefined ***)((long)pppuVar1 + -0x150) = unaff_x20;
      *(undefined ***)((long)pppuVar1 + -0x148) = ppuVar5;
      *(undefined1 **)((long)pppuVar1 + -0x140) = (undefined1 *)((long)pppuVar1 + -0x10);
      *(undefined **)((long)pppuVar1 + -0x138) = &UNK_106def594;
      *(undefined8 *)((long)pppuVar1 + -0x198) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      unaff_x20 = param_4;
      ppuVar5 = param_5;
      _objc_retain();
      _objc_retain(param_4);
      _objc_retain(param_5);
      if (ppuVar11 != (undefined **)0x0) {
        ppuVar12 = param_5;
        func_0x00010c23f480();
        _objc_retainAutoreleasedReturnValue();
        ppuVar13 = ppuVar12;
        func_0x00010bf529e0();
        _objc_release(ppuVar12);
        if (ppuVar13 != (undefined **)0x0) {
          ppuVar12 = param_5;
          func_0x00010c23f480();
          _objc_retainAutoreleasedReturnValue();
          ppuVar13 = ppuVar12;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          unaff_x24 = ppuVar13;
          func_0x00010c2a2e80();
          _objc_retainAutoreleasedReturnValue();
          unaff_x25 = unaff_x24;
          func_0x00010c2a2ea0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2039e0(ppuVar11);
          _objc_release(unaff_x25);
          _objc_release(unaff_x24);
          _objc_release(ppuVar13);
          _objc_release(ppuVar12);
        }
        ppuVar12 = param_5;
        func_0x000106dee010(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2208c0(ppuVar11);
        _objc_release(ppuVar12);
        unaff_x20 = (undefined **)PTR_PTR_1126d2a00;
        _objc_retain(ppuVar11);
        _objc_opt_class();
        ppuVar12 = ppuVar11;
        _objc_opt_isKindOfClass();
        unaff_x22 = ppuVar11;
        if (((ulong)ppuVar12 & 1) == 0) {
          unaff_x22 = (undefined **)0x0;
        }
        _objc_retain(unaff_x22);
        _objc_release(ppuVar11);
        if (((ulong)ppuVar12 & 1) != 0) {
          ppuVar12 = param_5;
          func_0x00010bf0efa0(param_5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf1f3c0();
          func_0x00010c1a6de0(ppuVar11);
          _objc_release(ppuVar12);
        }
        func_0x00010bf8b160(param_4);
        unaff_d8 = (double)fVar19;
        func_0x00010c1c4580(ppuVar11);
        func_0x00010bfed740(param_4);
        func_0x00010c1c4920(ppuVar11);
        ppuVar12 = param_4;
        func_0x00010b5fa088();
        if (ppuVar12 == (undefined **)0x9) {
          func_0x000109023974(param_4);
          unaff_d9 = param_2;
        }
        else {
          ppuVar12 = param_4;
          func_0x00010c2a5040();
          unaff_d8 = (double)(int)ppuVar12;
          ppuVar12 = param_4;
          func_0x00010bfe0640();
          unaff_d9 = (double)(int)ppuVar12;
        }
        func_0x00010c1c56e0(ppuVar11);
        func_0x00010c1c4860(ppuVar11);
        ppuVar12 = param_4;
        func_0x00010c0c5b00();
        ppuVar14 = (undefined **)PTR_PTR_1126c4550;
        if ((int)ppuVar12 < 1) {
          ppuVar5 = param_5;
          func_0x00010c0c5b60();
          func_0x00010c0c5ba0();
          _objc_retainAutoreleasedReturnValue();
          if (ppuVar14 != (undefined **)0x0) {
            *(undefined ***)((long)pppuVar1 + -0x1a8) = ppuVar14;
            goto code_r0x000106def81c;
          }
        }
        else {
          ppuVar14 = (undefined **)PTR_PTR_1126c4548;
          _objc_alloc();
          func_0x00010c0c5b00(param_4);
          func_0x00010c032420();
          *(undefined ***)((long)pppuVar1 + -0x1a0) = ppuVar14;
code_r0x000106def81c:
          param_6 = (undefined **)0x1;
          unaff_x24 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
          func_0x00010bf0a140();
          _objc_retainAutoreleasedReturnValue();
          ppuVar5 = unaff_x24;
          func_0x00010c1c4de0(ppuVar11);
          _objc_release(unaff_x24);
        }
        _objc_release(ppuVar14);
        _objc_release(unaff_x22);
      }
      _objc_release(param_5);
      _objc_release(param_4);
      ppuVar13 = ppuVar11;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)pppuVar1 + -0x198)) {
        return ppuVar13;
      }
      ___stack_chk_fail();
      *(double *)((long)pppuVar1 + -0x220) = unaff_d9;
      *(double *)((long)pppuVar1 + -0x218) = unaff_d8;
      *(undefined ***)((long)pppuVar1 + -0x210) = unaff_x28;
      *(undefined ***)((long)pppuVar1 + -0x208) = unaff_x27;
      *(undefined ***)((long)pppuVar1 + -0x200) = unaff_x26;
      *(undefined ***)((long)pppuVar1 + -0x1f8) = unaff_x25;
      *(undefined ***)((long)pppuVar1 + -0x1f0) = unaff_x24;
      *(undefined ***)((long)pppuVar1 + -0x1e8) = ppuVar14;
      *(undefined ***)((long)pppuVar1 + -0x1e0) = unaff_x22;
      *(undefined ***)((long)pppuVar1 + -0x1d8) = param_5;
      *(undefined ***)((long)pppuVar1 + -0x1d0) = param_4;
      *(undefined ***)((long)pppuVar1 + -0x1c8) = ppuVar11;
      *(undefined1 **)((long)pppuVar1 + -0x1c0) = (undefined1 *)((long)pppuVar1 + -0x140);
      *(undefined **)((long)pppuVar1 + -0x1b8) = &UNK_106def8b0;
      puVar7 = (undefined1 *)((long)pppuVar1 + -0x1c0);
      *(undefined8 *)((long)pppuVar1 + -0x228) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      ppuVar12 = unaff_x20;
      ppuVar11 = ppuVar5;
      _objc_retain();
      _objc_retain(unaff_x20);
      _objc_retain(ppuVar5);
      if (ppuVar13 == (undefined **)0x0) goto code_r0x000106defb14;
      uVar8 = 0;
      *(undefined8 *)((long)pppuVar1 + -0x2c8) = 0;
      *(undefined8 *)((long)pppuVar1 + -0x2d0) = 0;
      *(undefined8 *)((long)pppuVar1 + -0x2b8) = 0;
      *(undefined8 *)((long)pppuVar1 + -0x2c0) = 0;
      *(undefined8 *)((long)pppuVar1 + -0x2e8) = 0;
      *(undefined8 *)((long)pppuVar1 + -0x2f0) = 0;
      *(undefined8 *)((long)pppuVar1 + -0x2d8) = 0;
      *(undefined8 *)((long)pppuVar1 + -0x2e0) = 0;
      ppuVar12 = ppuVar5;
      func_0x00010bf0d7e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar14 = ppuVar12;
      func_0x00010bf0d800();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar12);
      param_6 = (undefined **)((long)pppuVar1 + -0x2a8);
      ppuVar12 = ppuVar14;
      func_0x00010bf52a60();
      fVar19 = (float)uVar8;
      if (ppuVar12 != (undefined **)0x0) {
        unaff_x25 = (undefined **)**(undefined8 **)((long)pppuVar1 + -0x2e0);
        do {
          unaff_x26 = (undefined **)0x0;
          do {
            if ((undefined **)**(undefined8 **)((long)pppuVar1 + -0x2e0) != unaff_x25) {
              _objc_enumerationMutation(ppuVar14);
            }
            unaff_x24 = *(undefined ***)(*(long *)((long)pppuVar1 + -0x2e8) + (long)unaff_x26 * 8);
            ppuVar11 = unaff_x24;
            func_0x00010bf0d0a0();
            fVar19 = (float)uVar8;
            if ((int)ppuVar11 == 3) {
              func_0x00010c2a3a80();
              _objc_retainAutoreleasedReturnValue();
              ppuVar12 = unaff_x24;
              func_0x00010bdc2b80();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c2039e0(ppuVar13);
              _objc_release(ppuVar12);
              _objc_release(unaff_x24);
              unaff_x24 = ppuVar12;
              goto code_r0x000106defa04;
            }
            unaff_x26 = (undefined **)((long)unaff_x26 + 1);
          } while (ppuVar12 != unaff_x26);
          param_6 = (undefined **)((long)pppuVar1 + -0x2a8);
          ppuVar12 = ppuVar14;
          func_0x00010bf52a60();
          fVar19 = (float)uVar8;
        } while (ppuVar12 != (undefined **)0x0);
      }
code_r0x000106defa04:
      _objc_release(ppuVar14);
      param_4 = (undefined **)PTR_PTR_1126d2a00;
      _objc_retain(ppuVar13);
      _objc_opt_class();
      ppuVar14 = ppuVar13;
      _objc_opt_isKindOfClass();
      unaff_x22 = ppuVar13;
      if (((ulong)ppuVar14 & 1) == 0) {
        unaff_x22 = (undefined **)0x0;
      }
      _objc_retain(unaff_x22);
      _objc_release(ppuVar13);
      if (((ulong)ppuVar14 & 1) != 0) {
        func_0x000107e629e4(ppuVar5);
        func_0x00010c1a6de0(ppuVar13);
      }
      func_0x00010bf8b160(unaff_x20);
      param_1 = (double)fVar19;
      func_0x00010c1c4580(ppuVar13);
      func_0x00010bfed740(unaff_x20);
      func_0x00010c1c4920(ppuVar13);
      ppuVar12 = unaff_x20;
      func_0x00010b5fa088();
      if (ppuVar12 == (undefined **)0x9) {
        func_0x000109023974(unaff_x20);
        unaff_d8 = param_1;
        unaff_d9 = param_2;
      }
      else {
        ppuVar12 = unaff_x20;
        func_0x00010c2a5040();
        unaff_d8 = (double)(int)ppuVar12;
        ppuVar12 = unaff_x20;
        func_0x00010bfe0640();
        unaff_d9 = (double)(int)ppuVar12;
      }
      func_0x00010c1c56e0(ppuVar13);
      param_5 = (undefined **)(long)unaff_d9;
      func_0x00010c1c4860(ppuVar13);
      puVar18 = &UNK_106defae8;
      pppuVar1 = (undefined ***)((long)pppuVar1 + -0x2f0);
      unaff_x21 = ppuVar5;
    } while( true );
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar12);
  return ppuVar12;
code_r0x000106defb14:
  _objc_release(ppuVar5);
  _objc_release(unaff_x20);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)pppuVar1 + -0x228)) {
    return ppuVar13;
  }
  ___stack_chk_fail();
  *(undefined ***)((long)pppuVar1 + -0x350) = unaff_x28;
  *(undefined ***)((long)pppuVar1 + -0x348) = unaff_x27;
  *(undefined ***)((long)pppuVar1 + -0x340) = unaff_x26;
  *(undefined ***)((long)pppuVar1 + -0x338) = unaff_x25;
  *(undefined ***)((long)pppuVar1 + -0x330) = unaff_x24;
  *(undefined ***)((long)pppuVar1 + -0x328) = ppuVar14;
  *(undefined ***)((long)pppuVar1 + -800) = unaff_x22;
  *(undefined ***)((long)pppuVar1 + -0x318) = ppuVar5;
  *(undefined ***)((long)pppuVar1 + -0x310) = unaff_x20;
  *(undefined8 *)((long)pppuVar1 + -0x308) = 0;
  *(undefined1 **)((long)pppuVar1 + -0x300) = puVar7;
  *(undefined **)((long)pppuVar1 + -0x2f8) = &UNK_106defb6c;
  *(undefined8 *)((long)pppuVar1 + -0x360) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  ppuVar5 = ppuVar12;
  _objc_retain();
  *(undefined ***)((long)pppuVar1 + -0x8b0) = ppuVar12;
  _objc_retain(ppuVar12);
  _objc_retain(ppuVar11);
  _objc_retain(param_6);
  puVar18 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  *(undefined **)((long)pppuVar1 + -0x8c0) = puVar18;
  puVar18 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  *(undefined **)((long)pppuVar1 + -0x8a8) = puVar18;
  *(undefined ***)((long)pppuVar1 + -0x918) = ppuVar13;
  func_0x00010bf2fba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  *(undefined ***)((long)pppuVar1 + -0x908) = ppuVar11;
  *(undefined ***)((long)pppuVar1 + -0x8b8) = param_6;
  if ((ppuVar11 != (undefined **)0x0) && (ppuVar13 == (undefined **)0x0)) {
    *(undefined8 *)((long)pppuVar1 + -0x6f8) = 0;
    *(undefined8 *)((long)pppuVar1 + -0x700) = 0;
    *(undefined8 *)((long)pppuVar1 + -0x6e8) = 0;
    *(undefined8 *)((long)pppuVar1 + -0x6f0) = 0;
    *(undefined8 *)((long)pppuVar1 + -0x718) = 0;
    *(undefined8 *)((long)pppuVar1 + -0x720) = 0;
    *(undefined8 *)((long)pppuVar1 + -0x708) = 0;
    *(undefined8 *)((long)pppuVar1 + -0x710) = 0;
    lVar9 = *(long *)((long)pppuVar1 + -0x908);
    _objc_retain(lVar9);
    func_0x00010bf52a60();
    *(long *)((long)pppuVar1 + -0x8c8) = lVar9;
    if (lVar9 != 0) {
      *(undefined8 *)((long)pppuVar1 + -0x8d0) = **(undefined8 **)((long)pppuVar1 + -0x710);
      do {
        lVar9 = 0;
        do {
          if (**(long **)((long)pppuVar1 + -0x710) != *(long *)((long)pppuVar1 + -0x8d0)) {
            _objc_enumerationMutation(*(undefined8 *)((long)pppuVar1 + -0x908));
          }
          ppuVar12 = *(undefined ***)(*(long *)((long)pppuVar1 + -0x718) + lVar9 * 8);
          ppuVar14 = ppuVar12;
          func_0x00010c0cc0c0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x26 = ppuVar14;
          func_0x00010bf30500();
          _objc_retainAutoreleasedReturnValue();
          unaff_x27 = unaff_x26;
          func_0x00010c0ca860();
          _objc_release(unaff_x26);
          _objc_release(ppuVar14);
          if (unaff_x27 != (undefined **)0x0) {
            *(undefined8 *)((long)pppuVar1 + -0x738) = 0;
            *(undefined8 *)((long)pppuVar1 + -0x740) = 0;
            *(undefined8 *)((long)pppuVar1 + -0x728) = 0;
            *(undefined8 *)((long)pppuVar1 + -0x730) = 0;
            *(undefined8 *)((long)pppuVar1 + -0x758) = 0;
            *(undefined8 *)((long)pppuVar1 + -0x760) = 0;
            *(undefined8 *)((long)pppuVar1 + -0x748) = 0;
            *(undefined8 *)((long)pppuVar1 + -0x750) = 0;
            func_0x00010c0cc0c0();
            _objc_retainAutoreleasedReturnValue();
            unaff_x26 = ppuVar12;
            func_0x00010bf30500();
            _objc_retainAutoreleasedReturnValue();
            ppuVar13 = unaff_x26;
            func_0x00010c0ca840();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(unaff_x26);
            _objc_release(ppuVar12);
            ppuVar14 = ppuVar13;
            func_0x00010bf52a60();
            if (ppuVar14 != (undefined **)0x0) {
              unaff_x24 = (undefined **)**(undefined8 **)((long)pppuVar1 + -0x750);
              do {
                ppuVar11 = (undefined **)0x0;
                do {
                  if ((undefined **)**(undefined8 **)((long)pppuVar1 + -0x750) != unaff_x24) {
                    _objc_enumerationMutation(ppuVar13);
                  }
                  ppuVar15 = *(undefined ***)
                              (*(long *)((long)pppuVar1 + -0x758) + (long)ppuVar11 * 8);
                  unaff_x27 = ppuVar15;
                  func_0x00010bf96da0();
                  _objc_retainAutoreleasedReturnValue();
                  unaff_x28 = unaff_x27;
                  func_0x00010c290fa0();
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar2 = unaff_x28;
                  func_0x00010c2923e0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release();
                  _objc_release(unaff_x28);
                  _objc_release(unaff_x27);
                  ppuVar12 = ppuVar15;
                  if (ppuVar2 != (undefined **)0x0) {
                    ppuVar2 = *(undefined ***)((long)pppuVar1 + -0x8b8);
                    func_0x00010c269d40();
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010bf96da0();
                    _objc_retainAutoreleasedReturnValue();
                    unaff_x28 = ppuVar15;
                    func_0x00010c290fa0();
                    _objc_retainAutoreleasedReturnValue();
                    unaff_x25 = unaff_x28;
                    func_0x00010c2923e0();
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar12 = ppuVar2;
                    func_0x00010c0ee920();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(unaff_x25);
                    _objc_release(unaff_x28);
                    _objc_release(ppuVar15);
                    _objc_release(ppuVar2);
                    if (ppuVar12 != (undefined **)0x0) {
                      ppuVar15 = ppuVar12;
                      func_0x00010c2923e0();
                      _objc_retainAutoreleasedReturnValue();
                      unaff_x28 = ppuVar12;
                      func_0x00010c294420();
                      _objc_retainAutoreleasedReturnValue();
                      if (ppuVar15 != (undefined **)0x0) {
                        uVar3 = *(ulong *)((long)pppuVar1 + -0x8a8);
                        func_0x00010bf4b900();
                        if ((uVar3 & 1) == 0) {
                          uVar3 = *(ulong *)((long)pppuVar1 + -0x8b0);
                          func_0x00010bf4b900();
                          if ((uVar3 & 1) == 0) {
                            puVar18 = PTR_PTR_1126d2aa8;
                            _objc_alloc(PTR_PTR_1126d2aa8);
                            func_0x00010c05f760();
                            func_0x00010c1d0640(*(undefined8 *)((long)pppuVar1 + -0x8c0));
                            func_0x00010befa120(*(undefined8 *)((long)pppuVar1 + -0x8a8));
                            _objc_release(puVar18);
                          }
                        }
                      }
                      _objc_release(unaff_x28);
                      _objc_release(ppuVar15);
                    }
                    _objc_release(ppuVar12);
                    unaff_x27 = ppuVar15;
                  }
                  ppuVar11 = (undefined **)((long)ppuVar11 + 1);
                } while (ppuVar14 != ppuVar11);
                ppuVar14 = ppuVar13;
                func_0x00010bf52a60();
                unaff_x26 = (undefined **)0x0;
              } while (ppuVar14 != (undefined **)0x0);
            }
            _objc_release(ppuVar13);
            ppuVar14 = ppuVar12;
          }
          lVar9 = lVar9 + 1;
        } while (lVar9 != *(long *)((long)pppuVar1 + -0x8c8));
        lVar9 = *(long *)((long)pppuVar1 + -0x908);
        func_0x00010bf52a60();
        *(long *)((long)pppuVar1 + -0x8c8) = lVar9;
      } while (lVar9 != 0);
    }
    _objc_release(*(undefined8 *)((long)pppuVar1 + -0x908));
    param_6 = *(undefined ***)((long)pppuVar1 + -0x8b8);
  }
  *(undefined8 *)((long)pppuVar1 + -0x778) = 0;
  *(undefined8 *)((long)pppuVar1 + -0x780) = 0;
  *(undefined8 *)((long)pppuVar1 + -0x768) = 0;
  *(undefined8 *)((long)pppuVar1 + -0x770) = 0;
  *(undefined8 *)((long)pppuVar1 + -0x798) = 0;
  *(undefined8 *)((long)pppuVar1 + -0x7a0) = 0;
  *(undefined8 *)((long)pppuVar1 + -0x788) = 0;
  *(undefined8 *)((long)pppuVar1 + -0x790) = 0;
  lVar9 = *(long *)((long)pppuVar1 + -0x918);
  func_0x00010bf308c0();
  _objc_retainAutoreleasedReturnValue();
  *(long *)((long)pppuVar1 + -0x910) = lVar9;
  func_0x00010bf52a60();
  *(long *)((long)pppuVar1 + -0x8f0) = lVar9;
  if (lVar9 != 0) {
    uVar8 = **(undefined8 **)((long)pppuVar1 + -0x790);
    *(undefined ***)((long)pppuVar1 + -0x900) = &PTR____CFConstantStringClassReference_110efb658;
    *(undefined8 *)((long)pppuVar1 + -0x8f8) = uVar8;
    do {
      lVar9 = 0;
      do {
        if (**(long **)((long)pppuVar1 + -0x790) != *(long *)((long)pppuVar1 + -0x8f8)) {
          _objc_enumerationMutation(*(undefined8 *)((long)pppuVar1 + -0x910));
        }
        *(long *)((long)pppuVar1 + -0x8e0) = lVar9;
        lVar10 = *(long *)(*(long *)((long)pppuVar1 + -0x798) + lVar9 * 8);
        puVar18 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        func_0x00010bf71e20();
        _objc_retainAutoreleasedReturnValue();
        *(undefined **)((long)pppuVar1 + -0x8d0) = puVar18;
        *(undefined8 *)((long)pppuVar1 + -0x7d8) = 0;
        *(undefined8 *)((long)pppuVar1 + -0x7e0) = 0;
        *(undefined8 *)((long)pppuVar1 + -0x7c8) = 0;
        *(undefined8 *)((long)pppuVar1 + -2000) = 0;
        *(undefined8 *)((long)pppuVar1 + -0x7b8) = 0;
        *(undefined8 *)((long)pppuVar1 + -0x7c0) = 0;
        *(undefined8 *)((long)pppuVar1 + -0x7a8) = 0;
        *(undefined8 *)((long)pppuVar1 + -0x7b0) = 0;
        *(long *)((long)pppuVar1 + -0x8e8) = lVar10;
        func_0x00010c293dc0();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar10;
        func_0x00010bf52a60();
        if (lVar9 != 0) {
          unaff_x24 = (undefined **)**(undefined8 **)((long)pppuVar1 + -2000);
          *(long *)((long)pppuVar1 + -0x8d8) = lVar10;
          do {
            lVar16 = 0;
            do {
              if ((undefined **)**(undefined8 **)((long)pppuVar1 + -2000) != unaff_x24) {
                _objc_enumerationMutation(lVar10);
              }
              ppuVar14 = *(undefined ***)(*(long *)((long)pppuVar1 + -0x7d8) + lVar16 * 8);
              ppuVar12 = param_6;
              func_0x00010c269d40();
              _objc_retainAutoreleasedReturnValue();
              ppuVar13 = ppuVar14;
              func_0x00010c2923e0(ppuVar14);
              _objc_retainAutoreleasedReturnValue();
              unaff_x27 = ppuVar12;
              func_0x00010c0ee920();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(ppuVar13);
              _objc_release(ppuVar12);
              ppuVar12 = unaff_x27;
              func_0x00010c2923e0();
              _objc_retainAutoreleasedReturnValue();
              unaff_x28 = unaff_x27;
              func_0x00010c294420();
              _objc_retainAutoreleasedReturnValue();
              if (unaff_x27 != (undefined **)0x0 && ppuVar12 != (undefined **)0x0) {
                uVar3 = *(ulong *)((long)pppuVar1 + -0x8a8);
                func_0x00010bf4b900();
                if ((uVar3 & 1) == 0) {
                  uVar3 = *(ulong *)((long)pppuVar1 + -0x8b0);
                  func_0x00010bf4b900();
                  if ((uVar3 & 1) == 0) {
                    puVar18 = PTR_PTR_1126d2aa8;
                    _objc_alloc();
                    func_0x00010c05f760();
                    *(undefined **)((long)pppuVar1 + -0x8c8) = puVar18;
                    func_0x00010c1d0640(*(undefined8 *)((long)pppuVar1 + -0x8c0));
                    puVar18 = PTR_PTR_1126d2ab0;
                    ppuVar13 = ppuVar14;
                    func_0x00010c24ff00(ppuVar14);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c067fc0();
                    func_0x00010c08fa60(unaff_x28);
                    func_0x00010bf51620(puVar18);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c24ff00();
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c1d0640(*(undefined8 *)((long)pppuVar1 + -0x8d0));
                    _objc_release(ppuVar14);
                    lVar10 = *(long *)((long)pppuVar1 + -0x8d8);
                    _objc_release(puVar18);
                    param_6 = *(undefined ***)((long)pppuVar1 + -0x8b8);
                    _objc_release(ppuVar13);
                    func_0x00010befa120(*(undefined8 *)((long)pppuVar1 + -0x8a8));
                    _objc_release(*(undefined8 *)((long)pppuVar1 + -0x8c8));
                  }
                }
              }
              _objc_release(unaff_x28);
              _objc_release(ppuVar12);
              _objc_release(unaff_x27);
              lVar16 = lVar16 + 1;
            } while (lVar9 != lVar16);
            lVar9 = lVar10;
            func_0x00010bf52a60();
            unaff_x26 = (undefined **)0x0;
          } while (lVar9 != 0);
        }
        _objc_release(lVar10);
        ppuVar12 = (undefined **)PTR_PTR_1126d1320;
        uVar8 = *(undefined8 *)((long)pppuVar1 + -0x8e8);
        func_0x00010c26b700(uVar8);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = *(undefined8 *)((long)pppuVar1 + -0x8d0);
        func_0x00010bf51e00(uVar4);
        func_0x00010bf9ef60();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
        _objc_release(uVar8);
        *(undefined8 *)((long)pppuVar1 + -0x7f8) = 0;
        *(undefined8 *)((long)pppuVar1 + -0x800) = 0;
        *(undefined8 *)((long)pppuVar1 + -0x7e8) = 0;
        *(undefined8 *)((long)pppuVar1 + -0x7f0) = 0;
        *(undefined8 *)((long)pppuVar1 + -0x818) = 0;
        *(undefined8 *)((long)pppuVar1 + -0x820) = 0;
        *(undefined8 *)((long)pppuVar1 + -0x808) = 0;
        *(undefined8 *)((long)pppuVar1 + -0x810) = 0;
        unaff_x25 = ppuVar12;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar13 = unaff_x25;
        func_0x00010bf52a60();
        if (ppuVar13 != (undefined **)0x0) {
          lVar9 = **(long **)((long)pppuVar1 + -0x810);
          do {
            unaff_x24 = (undefined **)0x0;
            do {
              if (**(long **)((long)pppuVar1 + -0x810) != lVar9) {
                _objc_enumerationMutation(unaff_x25);
              }
              ppuVar2 = *(undefined ***)(*(long *)((long)pppuVar1 + -0x818) + (long)unaff_x24 * 8);
              ppuVar14 = ppuVar2;
              func_0x00010c2923e0();
              _objc_retainAutoreleasedReturnValue();
              ppuVar11 = ppuVar2;
              func_0x00010c294420(ppuVar2);
              _objc_retainAutoreleasedReturnValue();
              if (ppuVar2 != (undefined **)0x0 && ppuVar14 != (undefined **)0x0) {
                uVar3 = *(ulong *)((long)pppuVar1 + -0x8a8);
                func_0x00010bf4b900();
                if ((uVar3 & 1) == 0) {
                  uVar3 = *(ulong *)((long)pppuVar1 + -0x8b0);
                  func_0x00010bf4b900();
                  if ((uVar3 & 1) == 0) {
                    puVar18 = PTR_PTR_1126d2aa8;
                    _objc_alloc(PTR_PTR_1126d2aa8);
                    func_0x00010c05f760();
                    func_0x00010c1d0640(*(undefined8 *)((long)pppuVar1 + -0x8c0));
                    func_0x00010befa120(*(undefined8 *)((long)pppuVar1 + -0x8a8));
                    _objc_release(puVar18);
                  }
                }
              }
              _objc_release(ppuVar11);
              _objc_release(ppuVar14);
              unaff_x24 = (undefined **)((long)unaff_x24 + 1);
            } while (ppuVar13 != unaff_x24);
            ppuVar13 = unaff_x25;
            func_0x00010bf52a60();
            unaff_x26 = (undefined **)0x0;
          } while (ppuVar13 != (undefined **)0x0);
        }
        _objc_release(unaff_x25);
        _objc_release(ppuVar12);
        _objc_release(*(undefined8 *)((long)pppuVar1 + -0x8d0));
        lVar9 = *(long *)((long)pppuVar1 + -0x8e0) + 1;
        param_6 = *(undefined ***)((long)pppuVar1 + -0x8b8);
      } while (lVar9 != *(long *)((long)pppuVar1 + -0x8f0));
      lVar9 = *(long *)((long)pppuVar1 + -0x910);
      func_0x00010bf52a60();
      *(long *)((long)pppuVar1 + -0x8f0) = lVar9;
    } while (lVar9 != 0);
  }
  _objc_release(*(undefined8 *)((long)pppuVar1 + -0x910));
  *(undefined8 *)((long)pppuVar1 + -0x838) = 0;
  *(undefined8 *)((long)pppuVar1 + -0x840) = 0;
  *(undefined8 *)((long)pppuVar1 + -0x828) = 0;
  *(undefined8 *)((long)pppuVar1 + -0x830) = 0;
  *(undefined8 *)((long)pppuVar1 + -0x858) = 0;
  *(undefined8 *)((long)pppuVar1 + -0x860) = 0;
  *(undefined8 *)((long)pppuVar1 + -0x848) = 0;
  *(undefined8 *)((long)pppuVar1 + -0x850) = 0;
  lVar9 = *(long *)((long)pppuVar1 + -0x918);
  func_0x00010c2553e0();
  _objc_retainAutoreleasedReturnValue();
  *(long *)((long)pppuVar1 + -0x8c8) = lVar9;
  func_0x00010bf52a60();
  if (lVar9 != 0) {
    unaff_x24 = (undefined **)**(undefined8 **)((long)pppuVar1 + -0x850);
    do {
      lVar10 = 0;
      do {
        if ((undefined **)**(undefined8 **)((long)pppuVar1 + -0x850) != unaff_x24) {
          _objc_enumerationMutation(*(undefined8 *)((long)pppuVar1 + -0x8c8));
        }
        ppuVar11 = *(undefined ***)(*(long *)((long)pppuVar1 + -0x858) + lVar10 * 8);
        ppuVar12 = ppuVar11;
        func_0x00010bfedfc0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar13 = ppuVar12;
        func_0x00010c0ca400();
        _objc_retainAutoreleasedReturnValue();
        unaff_x28 = ppuVar13;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar13);
        _objc_release(ppuVar12);
        ppuVar12 = ppuVar11;
        func_0x00010bfedfc0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar13 = ppuVar12;
        func_0x00010c0ca400();
        _objc_retainAutoreleasedReturnValue();
        ppuVar14 = ppuVar13;
        func_0x00010c294420();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar13);
        _objc_release(ppuVar12);
        ppuVar12 = unaff_x28;
        func_0x00010c08fa60();
        if (ppuVar12 == (undefined **)0x0) {
code_r0x000106df0504:
          ppuVar12 = ppuVar11;
          func_0x00010bfedfc0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar13 = ppuVar12;
          func_0x00010c244f40();
          _objc_retainAutoreleasedReturnValue();
          ppuVar2 = ppuVar13;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(unaff_x28);
          _objc_release(ppuVar13);
          _objc_release(ppuVar12);
          func_0x00010bfedfc0();
          _objc_retainAutoreleasedReturnValue();
          param_6 = ppuVar11;
          func_0x00010c244f40();
          _objc_retainAutoreleasedReturnValue();
          unaff_x25 = param_6;
          func_0x00010c294420();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar14);
          _objc_release(param_6);
          _objc_release(ppuVar11);
          ppuVar12 = ppuVar2;
          func_0x00010c08fa60();
          if (ppuVar12 != (undefined **)0x0) {
            uVar3 = *(ulong *)((long)pppuVar1 + -0x8a8);
            func_0x00010bf4b900();
            if ((uVar3 & 1) == 0) {
              uVar3 = *(ulong *)((long)pppuVar1 + -0x8b0);
              func_0x00010bf4b900();
              if ((uVar3 & 1) == 0) {
                unaff_x27 = (undefined **)PTR_PTR_1126d2aa8;
                _objc_alloc();
                func_0x00010c05f760();
                func_0x00010c1d0640(*(undefined8 *)((long)pppuVar1 + -0x8c0));
                goto code_r0x000106df0640;
              }
            }
          }
        }
        else {
          uVar3 = *(ulong *)((long)pppuVar1 + -0x8a8);
          func_0x00010bf4b900();
          if ((uVar3 & 1) != 0) goto code_r0x000106df0504;
          uVar3 = *(ulong *)((long)pppuVar1 + -0x8b0);
          func_0x00010bf4b900();
          if ((uVar3 & 1) != 0) goto code_r0x000106df0504;
          unaff_x27 = (undefined **)PTR_PTR_1126d2aa8;
          _objc_alloc();
          func_0x00010c05f760();
          func_0x00010c1d0640(*(undefined8 *)((long)pppuVar1 + -0x8c0));
          unaff_x25 = ppuVar14;
          ppuVar2 = unaff_x28;
code_r0x000106df0640:
          func_0x00010befa120(*(undefined8 *)((long)pppuVar1 + -0x8a8));
          _objc_release(unaff_x27);
          unaff_x28 = ppuVar2;
        }
        _objc_release(unaff_x25);
        _objc_release(ppuVar2);
        lVar10 = lVar10 + 1;
      } while (lVar9 != lVar10);
      lVar9 = *(long *)((long)pppuVar1 + -0x8c8);
      func_0x00010bf52a60();
      unaff_x26 = (undefined **)0x0;
    } while (lVar9 != 0);
  }
  _objc_release(*(undefined8 *)((long)pppuVar1 + -0x8c8));
  *(undefined8 *)((long)pppuVar1 + -0x878) = 0;
  *(undefined8 *)((long)pppuVar1 + -0x880) = 0;
  *(undefined8 *)((long)pppuVar1 + -0x868) = 0;
  *(undefined8 *)((long)pppuVar1 + -0x870) = 0;
  *(undefined8 *)((long)pppuVar1 + -0x898) = 0;
  *(undefined8 *)((long)pppuVar1 + -0x8a0) = 0;
  *(undefined8 *)((long)pppuVar1 + -0x888) = 0;
  *(undefined8 *)((long)pppuVar1 + -0x890) = 0;
  ppuVar12 = *(undefined ***)((long)pppuVar1 + -0x908);
  _objc_retain(ppuVar12);
  func_0x00010bf52a60();
  if (ppuVar12 != (undefined **)0x0) {
    unaff_x27 = (undefined **)**(undefined8 **)((long)pppuVar1 + -0x890);
    do {
      unaff_x28 = (undefined **)0x0;
      do {
        if ((undefined **)**(undefined8 **)((long)pppuVar1 + -0x890) != unaff_x27) {
          _objc_enumerationMutation(*(undefined8 *)((long)pppuVar1 + -0x908));
        }
        ppuVar14 = *(undefined ***)(*(long *)((long)pppuVar1 + -0x898) + (long)unaff_x28 * 8);
        ppuVar13 = ppuVar14;
        func_0x00010c0cc0c0();
        _objc_retainAutoreleasedReturnValue();
        param_6 = ppuVar13;
        func_0x00010bfedf20();
        _objc_retainAutoreleasedReturnValue();
        unaff_x24 = param_6;
        func_0x00010bfedf40();
        _objc_release(param_6);
        _objc_release(ppuVar13);
        if ((int)unaff_x24 == 6) {
          ppuVar13 = ppuVar14;
          func_0x00010c0cc0c0();
          _objc_retainAutoreleasedReturnValue();
          param_6 = ppuVar13;
          func_0x00010bfedf20();
          _objc_retainAutoreleasedReturnValue();
          unaff_x25 = param_6;
          func_0x00010c0ca640();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(param_6);
          _objc_release(ppuVar13);
          ppuVar13 = unaff_x25;
          func_0x00010bfde100();
          if ((int)ppuVar13 != 0) {
            ppuVar13 = unaff_x25;
            func_0x00010c2923e0();
            _objc_retainAutoreleasedReturnValue();
            param_6 = ppuVar13;
            func_0x00010bfe2ee0();
            unaff_x24 = unaff_x25;
            func_0x00010c2923e0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar5 = unaff_x24;
            func_0x00010c0b5940();
            ppuVar14 = param_6;
            func_0x000100c4a928();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(unaff_x24);
            _objc_release(ppuVar13);
            unaff_x26 = unaff_x25;
            func_0x00010c294420();
            _objc_retainAutoreleasedReturnValue();
            ppuVar13 = ppuVar14;
            func_0x00010c08fa60();
            if (ppuVar13 != (undefined **)0x0) {
              uVar3 = *(ulong *)((long)pppuVar1 + -0x8a8);
              func_0x00010bf4b900();
              if ((uVar3 & 1) == 0) {
                uVar3 = *(ulong *)((long)pppuVar1 + -0x8b0);
                func_0x00010bf4b900();
                if ((uVar3 & 1) == 0) {
                  puVar18 = PTR_PTR_1126d2aa8;
                  _objc_alloc(PTR_PTR_1126d2aa8);
                  func_0x00010c05f760();
                  func_0x00010c1d0640(*(undefined8 *)((long)pppuVar1 + -0x8c0));
                  func_0x00010befa120(*(undefined8 *)((long)pppuVar1 + -0x8a8));
                  _objc_release(puVar18);
                }
              }
            }
            _objc_release(unaff_x26);
            _objc_release(ppuVar14);
          }
          _objc_release(unaff_x25);
        }
        unaff_x28 = (undefined **)((long)unaff_x28 + 1);
      } while (ppuVar12 != unaff_x28);
      ppuVar12 = *(undefined ***)((long)pppuVar1 + -0x908);
      func_0x00010bf52a60();
    } while (ppuVar12 != (undefined **)0x0);
  }
  uVar8 = *(undefined8 *)((long)pppuVar1 + -0x908);
  _objc_release(uVar8);
  ppuVar13 = *(undefined ***)((long)pppuVar1 + -0x8c0);
  ppuVar12 = ppuVar13;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(*(undefined8 *)((long)pppuVar1 + -0x8a8));
  _objc_release(ppuVar13);
  _objc_release(*(undefined8 *)((long)pppuVar1 + -0x8b8));
  _objc_release(uVar8);
  _objc_release(*(undefined8 *)((long)pppuVar1 + -0x8b0));
  _objc_release(*(undefined8 *)((long)pppuVar1 + -0x918));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)pppuVar1 + -0x360)) {
    ___stack_chk_fail();
    *(undefined ***)((long)pppuVar1 + -0x980) = unaff_x28;
    *(undefined ***)((long)pppuVar1 + -0x978) = unaff_x27;
    *(undefined ***)((long)pppuVar1 + -0x970) = unaff_x26;
    *(undefined ***)((long)pppuVar1 + -0x968) = unaff_x25;
    *(undefined ***)((long)pppuVar1 + -0x960) = unaff_x24;
    *(undefined ***)((long)pppuVar1 + -0x958) = ppuVar14;
    *(undefined ***)((long)pppuVar1 + -0x950) = param_6;
    *(undefined ***)((long)pppuVar1 + -0x948) = ppuVar13;
    *(undefined8 *)((long)pppuVar1 + -0x940) = uVar8;
    *(undefined ***)((long)pppuVar1 + -0x938) = ppuVar12;
    *(undefined1 **)((long)pppuVar1 + -0x930) = (undefined1 *)((long)pppuVar1 + -0x300);
    *(undefined **)((long)pppuVar1 + -0x928) = &UNK_106df0944;
    *(undefined8 *)((long)pppuVar1 + -0x990) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    ppuVar12 = (undefined **)PTR_PTR_1126bc7b8;
    func_0x00010bfa7160();
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = ppuVar12;
    func_0x00010c0ef4a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar12);
    ppuVar11 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    *(undefined8 *)((long)pppuVar1 + -0xa48) = 0;
    *(undefined8 *)((long)pppuVar1 + -0xa50) = 0;
    *(undefined8 *)((long)pppuVar1 + -0xa38) = 0;
    *(undefined8 *)((long)pppuVar1 + -0xa40) = 0;
    *(undefined8 *)((long)pppuVar1 + -0xa28) = 0;
    *(undefined8 *)((long)pppuVar1 + -0xa30) = 0;
    *(undefined8 *)((long)pppuVar1 + -0xa18) = 0;
    *(undefined8 *)((long)pppuVar1 + -0xa20) = 0;
    ppuVar12 = ppuVar13;
    func_0x00010c2553e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar12;
    func_0x00010bf52a60();
    if (ppuVar2 != (undefined **)0x0) {
      unaff_x26 = (undefined **)**(undefined8 **)((long)pppuVar1 + -0xa40);
      unaff_x27 = &PTR_PTR_1126d2000;
      do {
        unaff_x28 = (undefined **)0x0;
        do {
          if ((undefined **)**(undefined8 **)((long)pppuVar1 + -0xa40) != unaff_x26) {
            _objc_enumerationMutation(ppuVar12);
          }
          unaff_x24 = *(undefined ***)(*(long *)((long)pppuVar1 + -0xa48) + (long)unaff_x28 * 8);
          func_0x00010bfedfc0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x25 = unaff_x24;
          func_0x00010c2751c0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar14 = unaff_x25;
          func_0x00010c275660();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(unaff_x25);
          _objc_release(unaff_x24);
          if (ppuVar14 != (undefined **)0x0) {
            unaff_x24 = (undefined **)PTR_PTR_1126d2ab8;
            _objc_alloc();
            func_0x00010c054560();
            if (unaff_x24 != (undefined **)0x0) {
              func_0x00010befa120(ppuVar11);
            }
            _objc_release(unaff_x24);
          }
          _objc_release(ppuVar14);
          unaff_x28 = (undefined **)((long)unaff_x28 + 1);
        } while (ppuVar2 != unaff_x28);
        ppuVar2 = ppuVar12;
        func_0x00010bf52a60();
        param_6 = (undefined **)0x0;
      } while (ppuVar2 != (undefined **)0x0);
    }
    _objc_release(ppuVar12);
    ppuVar12 = ppuVar11;
    func_0x00010bf51e00();
    _objc_release(ppuVar11);
    _objc_release(ppuVar13);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)pppuVar1 + -0x990)) {
      ___stack_chk_fail();
      *(undefined ***)((long)pppuVar1 + -0xaa0) = unaff_x26;
      *(undefined ***)((long)pppuVar1 + -0xa98) = unaff_x25;
      *(undefined ***)((long)pppuVar1 + -0xa90) = unaff_x24;
      *(undefined ***)((long)pppuVar1 + -0xa88) = ppuVar14;
      *(undefined ***)((long)pppuVar1 + -0xa80) = param_6;
      *(undefined ***)((long)pppuVar1 + -0xa78) = ppuVar12;
      *(undefined ***)((long)pppuVar1 + -0xa70) = ppuVar11;
      *(undefined ***)((long)pppuVar1 + -0xa68) = ppuVar13;
      *(undefined1 **)((long)pppuVar1 + -0xa60) = (undefined1 *)((long)pppuVar1 + -0x930);
      *(undefined **)((long)pppuVar1 + -0xa58) = &UNK_106df0b34;
      *(undefined8 *)((long)pppuVar1 + -0xaa8) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      ppuVar13 = (undefined **)PTR_PTR_1126bc7b8;
      func_0x00010bfa7160();
      _objc_retainAutoreleasedReturnValue();
      ppuVar11 = ppuVar13;
      func_0x00010c0ef4a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar13);
      *(undefined8 *)((long)pppuVar1 + -0xb48) = 0;
      *(undefined8 *)((long)pppuVar1 + -0xb50) = 0;
      *(undefined8 *)((long)pppuVar1 + -0xb38) = 0;
      *(undefined8 *)((long)pppuVar1 + -0xb40) = 0;
      *(undefined8 *)((long)pppuVar1 + -0xb68) = 0;
      *(undefined8 *)((long)pppuVar1 + -0xb70) = 0;
      *(undefined8 *)((long)pppuVar1 + -0xb58) = 0;
      *(undefined8 *)((long)pppuVar1 + -0xb60) = 0;
      ppuVar13 = ppuVar11;
      func_0x00010c2553e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = ppuVar13;
      func_0x00010bf52a60();
      if (ppuVar2 != (undefined **)0x0) {
        unaff_x24 = (undefined **)**(undefined8 **)((long)pppuVar1 + -0xb60);
        ppuVar12 = ppuVar2;
        do {
          unaff_x25 = (undefined **)0x0;
          do {
            if ((undefined **)**(undefined8 **)((long)pppuVar1 + -0xb60) != unaff_x24) {
              _objc_enumerationMutation(ppuVar13);
            }
            ppuVar14 = *(undefined ***)(*(long *)((long)pppuVar1 + -0xb68) + (long)unaff_x25 * 8);
            func_0x00010bfedfc0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar15 = ppuVar14;
            func_0x00010c25bcc0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar14);
            ppuVar2 = ppuVar12;
            if (ppuVar15 != (undefined **)0x0) goto code_r0x000106df0c58;
            unaff_x25 = (undefined **)((long)unaff_x25 + 1);
          } while (ppuVar12 != unaff_x25);
          ppuVar12 = ppuVar13;
          func_0x00010bf52a60();
        } while (ppuVar12 != (undefined **)0x0);
      }
      ppuVar2 = ppuVar12;
      ppuVar15 = (undefined **)0x0;
code_r0x000106df0c58:
      ppuVar12 = ppuVar15;
      _objc_release(ppuVar13);
      ppuVar15 = ppuVar11;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)pppuVar1 + -0xaa8)) {
        ___stack_chk_fail();
        *(undefined ***)((long)pppuVar1 + -0xbb0) = unaff_x28;
        *(undefined ***)((long)pppuVar1 + -0xba8) = unaff_x27;
        *(undefined ***)((long)pppuVar1 + -0xba0) = ppuVar12;
        *(undefined ***)((long)pppuVar1 + -0xb98) = ppuVar2;
        *(undefined ***)((long)pppuVar1 + -0xb90) = ppuVar13;
        *(undefined ***)((long)pppuVar1 + -0xb88) = ppuVar11;
        *(undefined1 **)((long)pppuVar1 + -0xb80) = (undefined1 *)((long)pppuVar1 + -0xa60);
        *(undefined **)((long)pppuVar1 + -0xb78) = &UNK_106df0ca4;
        *(undefined8 *)((long)pppuVar1 + -3000) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        _objc_retain();
        *(undefined8 *)((long)pppuVar1 + -0xc78) = 0;
        *(undefined8 *)((long)pppuVar1 + -0xc80) = 0;
        *(undefined8 *)((long)pppuVar1 + -0xc68) = 0;
        *(undefined8 *)((long)pppuVar1 + -0xc70) = 0;
        *(undefined8 *)((long)pppuVar1 + -0xc58) = 0;
        *(undefined8 *)((long)pppuVar1 + -0xc60) = 0;
        *(undefined8 *)((long)pppuVar1 + -0xc48) = 0;
        *(undefined8 *)((long)pppuVar1 + -0xc50) = 0;
        _objc_retain(ppuVar15);
        ppuVar13 = ppuVar15;
        func_0x00010bf52a60();
        if (ppuVar13 != (undefined **)0x0) {
          ppuVar2 = (undefined **)**(undefined8 **)((long)pppuVar1 + -0xc70);
          do {
            ppuVar12 = (undefined **)0x0;
            do {
              if ((undefined **)**(undefined8 **)((long)pppuVar1 + -0xc70) != ppuVar2) {
                _objc_enumerationMutation(ppuVar15);
              }
              lVar9 = *(long *)(*(long *)((long)pppuVar1 + -0xc78) + (long)ppuVar12 * 8);
              func_0x00010b5fa088();
              if (lVar9 != 1) {
                ppuVar11 = (undefined **)0x0;
                ppuVar13 = ppuVar12;
                goto code_r0x000106df0d70;
              }
              ppuVar12 = (undefined **)((long)ppuVar12 + 1);
            } while (ppuVar13 != ppuVar12);
            ppuVar13 = ppuVar15;
            func_0x00010bf52a60();
          } while (ppuVar13 != (undefined **)0x0);
        }
        ppuVar11 = (undefined **)0x1;
        ppuVar13 = ppuVar12;
code_r0x000106df0d70:
        _objc_release(ppuVar15);
        ppuVar12 = ppuVar15;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)pppuVar1 + -3000)) {
          return ppuVar11;
        }
        ___stack_chk_fail();
        *(undefined ***)((long)pppuVar1 + -0xce0) = unaff_x28;
        *(undefined ***)((long)pppuVar1 + -0xcd8) = unaff_x27;
        *(undefined ***)((long)pppuVar1 + -0xcd0) = unaff_x26;
        *(undefined ***)((long)pppuVar1 + -0xcc8) = unaff_x25;
        *(undefined ***)((long)pppuVar1 + -0xcc0) = unaff_x24;
        *(undefined ***)((long)pppuVar1 + -0xcb8) = ppuVar14;
        *(undefined ***)((long)pppuVar1 + -0xcb0) = ppuVar13;
        *(undefined ***)((long)pppuVar1 + -0xca8) = ppuVar2;
        *(undefined ***)((long)pppuVar1 + -0xca0) = ppuVar11;
        *(undefined ***)((long)pppuVar1 + -0xc98) = ppuVar15;
        *(undefined1 **)((long)pppuVar1 + -0xc90) = (undefined1 *)((long)pppuVar1 + -0xb80);
        *(undefined **)((long)pppuVar1 + -0xc88) = &UNK_106df0db8;
        *(undefined8 *)((long)pppuVar1 + -0xcf0) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        *(undefined8 *)((long)pppuVar1 + -0xda8) = 0;
        *(undefined8 *)((long)pppuVar1 + -0xdb0) = 0;
        *(undefined8 *)((long)pppuVar1 + -0xd98) = 0;
        *(undefined8 *)((long)pppuVar1 + -0xda0) = 0;
        *(undefined8 *)((long)pppuVar1 + -0xd88) = 0;
        *(undefined8 *)((long)pppuVar1 + -0xd90) = 0;
        *(undefined8 *)((long)pppuVar1 + -0xd78) = 0;
        *(undefined8 *)((long)pppuVar1 + -0xd80) = 0;
        func_0x00010c2553e0();
        _objc_retainAutoreleasedReturnValue();
        *(undefined ***)((long)pppuVar1 + -0xdd0) = ppuVar12;
        func_0x00010bf52a60();
        *(undefined ***)((long)pppuVar1 + -0xdc0) = ppuVar12;
        if (ppuVar12 != (undefined **)0x0) {
          *(undefined8 *)((long)pppuVar1 + -0xdc8) = **(undefined8 **)((long)pppuVar1 + -0xda0);
          do {
            ppuVar2 = (undefined **)0x0;
            do {
              if (**(long **)((long)pppuVar1 + -0xda0) != *(long *)((long)pppuVar1 + -0xdc8)) {
                _objc_enumerationMutation(*(undefined8 *)((long)pppuVar1 + -0xdd0));
              }
              unaff_x25 = *(undefined ***)(*(long *)((long)pppuVar1 + -0xda8) + (long)ppuVar2 * 8);
              ppuVar14 = unaff_x25;
              func_0x00010bf06320();
              _objc_retainAutoreleasedReturnValue();
              unaff_x24 = ppuVar14;
              func_0x00010c27dd80();
              _objc_retainAutoreleasedReturnValue();
              ppuVar13 = unaff_x24;
              func_0x00010b774bc4();
              _objc_release(unaff_x24);
              _objc_release(ppuVar14);
              if (ppuVar13 == (undefined **)0x3fa644c1 ||
                  ppuVar13 == (undefined **)0xfffffffff0575f4d) {
                *(undefined **)((long)pppuVar1 + -0xdb8) = PTR_PTR_1126c4978;
                ppuVar14 = unaff_x25;
                func_0x00010bf06320();
                _objc_retainAutoreleasedReturnValue();
                unaff_x24 = ppuVar14;
                func_0x00010bf05ba0();
                _objc_retainAutoreleasedReturnValue();
                unaff_x26 = unaff_x25;
                func_0x00010bf06320();
                _objc_retainAutoreleasedReturnValue();
                unaff_x27 = unaff_x26;
                func_0x00010bf0d6a0();
                _objc_retainAutoreleasedReturnValue();
                unaff_x28 = unaff_x25;
                func_0x00010bf06320();
                _objc_retainAutoreleasedReturnValue();
                ppuVar12 = unaff_x28;
                func_0x00010c27dd80();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bf06320();
                _objc_retainAutoreleasedReturnValue();
                ppuVar11 = unaff_x25;
                func_0x00010bf05300();
                _objc_retainAutoreleasedReturnValue();
                uVar8 = *(undefined8 *)((long)pppuVar1 + -0xdb8);
                func_0x00010c241c80();
                _objc_retainAutoreleasedReturnValue();
                *(undefined8 *)((long)pppuVar1 + -0xdb8) = uVar8;
                _objc_release(ppuVar11);
                _objc_release(unaff_x25);
                _objc_release(ppuVar12);
                _objc_release(unaff_x28);
                _objc_release(unaff_x27);
                _objc_release(unaff_x26);
                _objc_release(unaff_x24);
                _objc_release(ppuVar14);
              }
              ppuVar11 = (undefined **)0xfffffffff0575f4d;
              if (ppuVar13 == (undefined **)0xfffffffff0575f4d ||
                  ppuVar13 == (undefined **)0x3fa644c1) {
                ppuVar12 = *(undefined ***)((long)pppuVar1 + -0xdb8);
                goto code_r0x000106df0ffc;
              }
              ppuVar2 = (undefined **)((long)ppuVar2 + 1);
            } while (*(undefined ***)((long)pppuVar1 + -0xdc0) != ppuVar2);
            lVar9 = *(long *)((long)pppuVar1 + -0xdd0);
            func_0x00010bf52a60();
            *(long *)((long)pppuVar1 + -0xdc0) = lVar9;
          } while (lVar9 != 0);
        }
        ppuVar12 = (undefined **)0x0;
code_r0x000106df0ffc:
        lVar9 = *(long *)((long)pppuVar1 + -0xdd0);
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)pppuVar1 + -0xcf0)) {
          ___stack_chk_fail();
          *(undefined ***)((long)pppuVar1 + -0xe30) = unaff_x28;
          *(undefined ***)((long)pppuVar1 + -0xe28) = unaff_x27;
          *(undefined ***)((long)pppuVar1 + -0xe20) = unaff_x26;
          *(undefined ***)((long)pppuVar1 + -0xe18) = unaff_x25;
          *(undefined ***)((long)pppuVar1 + -0xe10) = unaff_x24;
          *(undefined ***)((long)pppuVar1 + -0xe08) = ppuVar14;
          *(undefined ***)((long)pppuVar1 + -0xe00) = ppuVar13;
          *(undefined ***)((long)pppuVar1 + -0xdf8) = ppuVar2;
          *(undefined ***)((long)pppuVar1 + -0xdf0) = ppuVar11;
          *(undefined ***)((long)pppuVar1 + -0xde8) = ppuVar12;
          *(undefined1 **)((long)pppuVar1 + -0xde0) = (undefined1 *)((long)pppuVar1 + -0xc90);
          *(undefined **)((long)pppuVar1 + -0xdd8) = &UNK_106df1044;
          *(undefined8 *)((long)pppuVar1 + -0xe40) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0
          ;
          _objc_retain();
          *(undefined ***)((long)pppuVar1 + -0x1248) = ppuVar5;
          _objc_retain(ppuVar5);
          ppuVar12 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          func_0x00010bf09f00();
          _objc_retainAutoreleasedReturnValue();
          *(undefined8 *)((long)pppuVar1 + -0x10f8) = 0;
          *(undefined8 *)((long)pppuVar1 + -0x1100) = 0;
          *(undefined8 *)((long)pppuVar1 + -0x10e8) = 0;
          *(undefined8 *)((long)pppuVar1 + -0x10f0) = 0;
          *(undefined8 *)((long)pppuVar1 + -0x10d8) = 0;
          *(undefined8 *)((long)pppuVar1 + -0x10e0) = 0;
          *(undefined8 *)((long)pppuVar1 + -0x10c8) = 0;
          *(undefined8 *)((long)pppuVar1 + -0x10d0) = 0;
          _objc_retain(lVar9);
          *(long *)((long)pppuVar1 + -0x1260) = lVar9;
          func_0x00010bf52a60();
          *(long *)((long)pppuVar1 + -0x1240) = lVar9;
          if (lVar9 == 0) {
            ppuVar2 = *(undefined ***)((long)pppuVar1 + -0x1260);
            _objc_release(ppuVar2);
            _objc_release(*(undefined8 *)((long)pppuVar1 + -0x1248));
            ppuVar11 = ppuVar2;
            _objc_release();
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)pppuVar1 + -0xe40))
            goto _objc_autoreleaseReturnValue;
            puVar18 = &UNK_106df16ec;
            ___stack_chk_fail();
          }
          else {
            *(undefined8 *)((long)pppuVar1 + -0x1250) = **(undefined8 **)((long)pppuVar1 + -0x10f0);
            if (**(long **)((long)pppuVar1 + -0x10f0) != *(long *)((long)pppuVar1 + -0x1250)) {
              _objc_enumerationMutation(*(undefined8 *)((long)pppuVar1 + -0x1260));
            }
            puVar18 = PTR_PTR_1126bc7b8;
            *(undefined8 *)((long)pppuVar1 + -0x1230) = 0;
            unaff_x26 = (undefined **)**(long **)((long)pppuVar1 + -0x10f8);
            ppuVar5 = *(undefined ***)((long)pppuVar1 + -0x1248);
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfa7160();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar5);
            *(undefined **)((long)pppuVar1 + -0x1238) = puVar18;
            func_0x00010c0ef4a0();
            _objc_retainAutoreleasedReturnValue();
            *(undefined **)((long)pppuVar1 + -0x1228) = puVar18;
            func_0x00010c2553e0();
            _objc_retainAutoreleasedReturnValue();
            *(undefined8 *)((long)pppuVar1 + -0x1138) = 0;
            *(undefined8 *)((long)pppuVar1 + -0x1140) = 0;
            *(undefined8 *)((long)pppuVar1 + -0x1128) = 0;
            *(undefined8 *)((long)pppuVar1 + -0x1130) = 0;
            *(undefined8 *)((long)pppuVar1 + -0x1118) = 0;
            *(undefined8 *)((long)pppuVar1 + -0x1120) = 0;
            *(undefined8 *)((long)pppuVar1 + -0x1108) = 0;
            *(undefined8 *)((long)pppuVar1 + -0x1110) = 0;
            *(undefined **)((long)pppuVar1 + -0x1208) = puVar18;
            func_0x00010bf52a60();
            if (puVar18 != (undefined *)0x0) {
              unaff_x24 = (undefined **)**(undefined8 **)((long)pppuVar1 + -0x1130);
              do {
                puVar17 = (undefined *)0x0;
                do {
                  if ((undefined **)**(undefined8 **)((long)pppuVar1 + -0x1130) != unaff_x24) {
                    _objc_enumerationMutation(*(undefined8 *)((long)pppuVar1 + -0x1208));
                  }
                  ppuVar5 = *(undefined ***)
                             (*(long *)((long)pppuVar1 + -0x1138) + (long)puVar17 * 8);
                  ppuVar13 = ppuVar5;
                  func_0x00010bfedfc0();
                  _objc_retainAutoreleasedReturnValue();
                  unaff_x27 = ppuVar13;
                  func_0x00010c0ca400();
                  _objc_retainAutoreleasedReturnValue();
                  unaff_x28 = unaff_x27;
                  func_0x00010c2923e0();
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar11 = unaff_x28;
                  func_0x00010c08fa60();
                  _objc_release(unaff_x28);
                  _objc_release(unaff_x27);
                  _objc_release(ppuVar13);
                  ppuVar14 = (undefined **)0x0;
                  if (ppuVar11 != (undefined **)0x0) {
                    func_0x00010bfedfc0();
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar13 = ppuVar5;
                    func_0x00010c0ca400();
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar14 = ppuVar13;
                    func_0x00010c2923e0();
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010befa120(ppuVar12);
                    _objc_release(ppuVar14);
                    _objc_release(ppuVar13);
                    _objc_release(ppuVar5);
                  }
                  puVar17 = puVar17 + 1;
                } while (puVar18 != puVar17);
                puVar18 = *(undefined **)((long)pppuVar1 + -0x1208);
                func_0x00010bf52a60();
              } while (puVar18 != (undefined *)0x0);
            }
            unaff_x25 = *(undefined ***)((long)pppuVar1 + -0x1228);
            ppuVar11 = unaff_x25;
            func_0x00010bf2fba0();
            _objc_retainAutoreleasedReturnValue();
            puVar18 = &UNK_106df12c0;
            ppuVar2 = ppuVar11;
          }
          puVar6 = (undefined1 *)((long)pppuVar1 + -0x1390);
          *(undefined ***)((long)pppuVar1 + -0x12c0) = unaff_x28;
          *(undefined ***)((long)pppuVar1 + -0x12b8) = unaff_x27;
          *(undefined ***)((long)pppuVar1 + -0x12b0) = unaff_x26;
          *(undefined ***)((long)pppuVar1 + -0x12a8) = unaff_x25;
          *(undefined ***)((long)pppuVar1 + -0x12a0) = unaff_x24;
          *(undefined ***)((long)pppuVar1 + -0x1298) = ppuVar14;
          *(undefined ***)((long)pppuVar1 + -0x1290) = ppuVar13;
          *(undefined ***)((long)pppuVar1 + -0x1288) = ppuVar12;
          *(undefined ***)((long)pppuVar1 + -0x1280) = ppuVar5;
          *(undefined ***)((long)pppuVar1 + -0x1278) = ppuVar2;
          *(undefined1 **)((long)pppuVar1 + -0x1270) = (undefined1 *)((long)pppuVar1 + -0xde0);
          *(undefined **)((long)pppuVar1 + -0x1268) = puVar18;
          *(undefined8 *)((long)pppuVar1 + -0x12c8) =
               *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
          _objc_retain();
          ppuVar12 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          func_0x00010bf09f00();
          _objc_retainAutoreleasedReturnValue();
          *(undefined8 *)((long)pppuVar1 + -5000) = 0;
          *(undefined8 *)((long)pppuVar1 + -0x1390) = 0;
          *(undefined8 *)((long)pppuVar1 + -0x1378) = 0;
          *(undefined8 *)((long)pppuVar1 + -0x1380) = 0;
          *(undefined8 *)((long)pppuVar1 + -0x1368) = 0;
          *(undefined8 *)((long)pppuVar1 + -0x1370) = 0;
          *(undefined8 *)((long)pppuVar1 + -0x1358) = 0;
          *(undefined8 *)((long)pppuVar1 + -0x1360) = 0;
          ppuVar5 = ppuVar11;
          func_0x00010c293dc0();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = (undefined1 *)((long)pppuVar1 + -0x1348);
          ppuVar2 = ppuVar5;
          func_0x00010bf52a60();
          if (ppuVar2 != (undefined **)0x0) {
            lVar9 = **(long **)((long)pppuVar1 + -0x1380);
            do {
              ppuVar13 = (undefined **)0x0;
              do {
                if (**(long **)((long)pppuVar1 + -0x1380) != lVar9) {
                  _objc_enumerationMutation(ppuVar5);
                }
                ppuVar14 = *(undefined ***)(*(long *)((long)pppuVar1 + -5000) + (long)ppuVar13 * 8);
                unaff_x24 = ppuVar14;
                func_0x00010c2923e0();
                _objc_retainAutoreleasedReturnValue();
                ppuVar15 = unaff_x24;
                func_0x00010c08fa60();
                _objc_release(unaff_x24);
                if (ppuVar15 != (undefined **)0x0) {
                  func_0x00010c2923e0();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010befa120(ppuVar12);
                  _objc_release(ppuVar14);
                }
                ppuVar13 = (undefined **)((long)ppuVar13 + 1);
              } while (ppuVar2 != ppuVar13);
              puVar7 = (undefined1 *)((long)pppuVar1 + -0x1348);
              ppuVar2 = ppuVar5;
              puVar6 = (undefined1 *)((long)pppuVar1 + -0x1390);
              func_0x00010bf52a60();
              ppuVar13 = (undefined **)0x0;
            } while (ppuVar2 != (undefined **)0x0);
          }
          _objc_release(ppuVar5);
          ppuVar2 = ppuVar11;
          _objc_release();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)pppuVar1 + -0x12c8)) {
            ___stack_chk_fail();
            *(undefined ***)((long)pppuVar1 + -0x13d0) = unaff_x24;
            *(undefined ***)((long)pppuVar1 + -0x13c8) = ppuVar14;
            *(undefined ***)((long)pppuVar1 + -0x13c0) = ppuVar13;
            *(undefined ***)((long)pppuVar1 + -0x13b8) = ppuVar5;
            *(undefined ***)((long)pppuVar1 + -0x13b0) = ppuVar12;
            *(undefined ***)((long)pppuVar1 + -0x13a8) = ppuVar11;
            *(undefined1 **)((long)pppuVar1 + -0x13a0) = (undefined1 *)((long)pppuVar1 + -0x1270);
            *(undefined **)((long)pppuVar1 + -0x1398) = &UNK_106df1868;
            _objc_retain(puVar6);
            _objc_retain(puVar7);
            *(undefined ***)((long)pppuVar1 + -0x13e0) = ppuVar2;
            *(undefined **)((long)pppuVar1 + -0x13d8) = PTR_PTR_1126f6f30;
            ppuVar12 = (undefined **)((long)pppuVar1 + -0x13e0);
            _objc_msgSendSuper2(ppuVar12,PTR_s_init_1125d9248);
            if (ppuVar12 != (undefined **)0x0) {
              _objc_retain(puVar6);
              puVar18 = ppuVar12[1];
              ppuVar12[1] = puVar6;
              _objc_release(puVar18);
              _objc_initWeak((undefined1 *)((long)pppuVar1 + -0x13e8),ppuVar12);
              puVar18 = PTR_PTR_1126ae720;
              *(undefined **)((long)pppuVar1 + -0x1418) = PTR___NSConcreteStackBlock_11034bd00;
              *(undefined8 *)((long)pppuVar1 + -0x1410) = 0xc2000000;
              *(undefined **)((long)pppuVar1 + -0x1408) = &UNK_106df19b4;
              *(undefined **)((long)pppuVar1 + -0x1400) = &UNK_1108544e0;
              _objc_copyWeak((undefined1 *)((long)pppuVar1 + -0x13f0),
                             (undefined1 *)((long)pppuVar1 + -0x13e8));
              _objc_retain(puVar7);
              *(undefined1 **)((long)pppuVar1 + -0x13f8) = puVar7;
              func_0x00010bf11fe0();
              _objc_retainAutoreleasedReturnValue();
              puVar17 = ppuVar12[2];
              ppuVar12[2] = puVar18;
              _objc_release(puVar17);
              _objc_release(*(undefined8 *)((long)pppuVar1 + -0x13f8));
              _objc_destroyWeak((undefined1 *)((long)pppuVar1 + -0x13f0));
              _objc_destroyWeak((undefined1 *)((long)pppuVar1 + -0x13e8));
            }
            _objc_release(puVar7);
            _objc_release(puVar6);
            return ppuVar12;
          }
        }
      }
    }
  }
  goto _objc_autoreleaseReturnValue;
}



/* Entry: 1070a6ccc; end: 1070a6d87;  */

void FUN_1070a6ccc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126d46c0;
  _objc_retain();
  _objc_opt_new(puVar1);
  func_0x00010c1a4000();
  func_0x00010c220700(puVar1,param_2,&PTR____CFConstantStringClassReference_110f9d1d8);
  puVar2 = PTR_PTR_1126b2930;
  func_0x00010bf5e640(PTR_PTR_1126b2930);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf38f80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eab20(puVar1,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010c1a3fe0(param_1,param_2,puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107250e18; end: 107250e23;  */

void FUN_107250e18(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__sysctlbyname_11034cca8)();
  return;
}



/* Entry: 107a0667c; end: 107a06ccb;  */

void FUN_107a0667c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  uint param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9
                  )

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  _objc_retain();
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar1 = PTR_PTR_1126be758;
  _objc_retain(param_4);
  _objc_opt_new();
  puVar2 = PTR_PTR_1126cf378;
  _objc_opt_new(PTR_PTR_1126cf378);
  func_0x00010c20d6a0(puVar1);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126cf380;
  _objc_opt_new(PTR_PTR_1126cf380);
  puVar10 = puVar1;
  func_0x00010c25a920(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20d500();
  _objc_release(puVar10);
  lVar3 = param_3;
  func_0x00010bf3cf60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213f60(puVar2);
  _objc_release(param_4);
  puVar10 = PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x00010bf5f320();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar10;
  func_0x00010c09e220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  if (puVar4 == (undefined *)0x0) {
    func_0x00010c0ac940(param_7);
  }
  func_0x00010c1bf3e0(puVar2);
  func_0x00010c17cd20(puVar2);
  lVar5 = param_3;
  func_0x00010bf30620(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c178ac0(puVar2);
  _objc_release(lVar5);
  func_0x00010bf30620(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar5 = param_3;
  func_0x00010c0c3fe0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c2592c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1786c0(puVar2);
  _objc_release(lVar6);
  _objc_release(lVar5);
  func_0x00010c0ed100();
  func_0x00010c1d6440(puVar2);
  lVar5 = param_3;
  func_0x00010c25b180();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126d5de0;
  if (lVar5 == 0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    _objc_retain(param_6);
    _objc_opt_new(puVar10);
    puVar7 = PTR_PTR_1126d5de8;
    _objc_opt_new(PTR_PTR_1126d5de8);
    func_0x00010c17cdc0(puVar10);
    func_0x00010bf3cd20(lVar5);
    func_0x00010c17cb80(puVar7);
    func_0x00010c14be40(lVar5);
    func_0x00010c1f5cc0(puVar7);
    func_0x00010c076ba0(lVar5);
    func_0x00010c1b23e0(puVar7);
    func_0x00010c13de00(lVar5);
    func_0x00010c1ed7c0(puVar7);
    lVar6 = lVar5;
    func_0x00010c2bf280(lVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c227c60(puVar7);
    _objc_release(lVar6);
    func_0x00010bf48f60();
    _objc_release(param_6);
    func_0x00010c180f60(puVar7);
    _objc_release(puVar7);
  }
  func_0x00010c1e7400(puVar2);
  _objc_release(puVar10);
  _objc_release(lVar5);
  lVar5 = param_3;
  func_0x00010c2311e0();
  if (((param_5 & 1) != 0) || ((int)lVar5 != 0)) {
    lVar5 = param_3;
    func_0x00010c1048c0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar5 == 0) {
      puVar10 = (undefined *)0x0;
    }
    else {
      puVar10 = PTR_PTR_1126bcf28;
      _objc_opt_new(PTR_PTR_1126bcf28);
      func_0x00010bf01f00(lVar5);
      func_0x00010c167920(puVar10);
      func_0x00010bfe4080(lVar5);
      func_0x00010c1a90c0(puVar10);
      func_0x00010bf51c80(lVar5);
      func_0x00010c1b9520(puVar10);
      func_0x00010bf51c80(lVar5);
      func_0x00010c1c0e80(param_2,puVar10);
      func_0x00010c249ca0(lVar5);
      func_0x00010c207c40(puVar10);
    }
    func_0x00010c1bf6c0(puVar2);
    _objc_release(puVar10);
    _objc_release(lVar5);
  }
  lVar5 = param_3;
  func_0x00010bf42a00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar6;
  func_0x00010c0811a0();
  _objc_release(lVar6);
  _objc_release(lVar5);
  if ((int)lVar8 != 0) {
    puVar10 = PTR_PTR_1126d5dd0;
    _objc_opt_new(PTR_PTR_1126d5dd0);
    func_0x00010c1b50e0();
    func_0x00010c198b40(puVar2);
    _objc_release(puVar10);
  }
  puVar10 = PTR_PTR_1126afec0;
  func_0x00010c26f320(param_8);
  func_0x00010c155420(puVar10);
  func_0x00010c1a3d60(puVar2);
  if (param_9 != 0) {
    lVar5 = param_9;
    func_0x00010c130480();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c08fa60();
    _objc_release(lVar5);
    if (lVar6 != 0) {
      lVar5 = param_9;
      func_0x00010c130480(param_9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c213f60(puVar2);
      _objc_release(lVar5);
    }
    puVar10 = puVar2;
    func_0x00010c26ed60(puVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_9;
    func_0x00010c23fe00(param_9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar10);
    _objc_release(lVar5);
    _objc_release(puVar10);
    puVar10 = PTR_PTR_1126d5dd8;
    _objc_opt_new(PTR_PTR_1126d5dd8);
    func_0x00010c214a40();
    func_0x00010c26ed80(puVar2);
    puVar7 = puVar10;
    func_0x00010c204000(puVar10);
    func_0x00010846a2f4();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar7;
    func_0x000100576e9c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c72a0(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar7);
    lVar5 = param_9;
    func_0x00010bf3cf60(param_9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17cd20(puVar10);
    _objc_release(lVar5);
    puVar7 = puVar2;
    func_0x00010c26ef60(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120();
    _objc_release(puVar7);
    _objc_release(puVar10);
  }
  puVar10 = puVar1;
  func_0x00010bf63640(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 107c3abc4; end: 107c3abc7;  */

void FUN_107c3abc4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc1fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_SC14DaysDeviceId_11254e190);
  return;
}



/* Entry: 107c3b0e0; end: 107c3b0e3;  */

void FUN_107c3b0e0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde4330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__computeDeviceIDFromUUIDBytes__112556a68);
  return;
}



/* Entry: 107c3b1c4; end: 107c3b1c7;  */

void FUN_107c3b1c4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdeac30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__createAndSaveDeviceID_1125584a8);
  return;
}



/* Entry: 107c3b718; end: 107c3b71b;  */

void FUN_107c3b718(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be15830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__fideliusDeviceIDPath_112562fa8);
  return;
}



/* Entry: 107c3bd38; end: 107c3bd3b;  */

void FUN_107c3bd38(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be4cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__loadConfigDeviceIdIntoMemoryOnS_112570d10);
  return;
}



/* Entry: 107c3bd40; end: 107c3bd43;  */

void FUN_107c3bd40(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be4d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__loadDeviceID_112570de0);
  return;
}



/* Entry: 107c3bd44; end: 107c3bd47;  */

void FUN_107c3bd44(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be4d130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__loadDeviceIDFromArchive_112570de8);
  return;
}



/* Entry: 107c3bd48; end: 107c3bd4b;  */

void FUN_107c3bd48(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be4d150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__loadDeviceIDFromKeyChain_112570df0);
  return;
}



/* Entry: 107c3c3e0; end: 107c3c3e3;  */

void FUN_107c3c3e0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be96470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__retrieveConfigDeviceIdFromKeych_1125832b8);
  return;
}



/* Entry: 107c3c3e4; end: 107c3c3e7;  */

void FUN_107c3c3e4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be96490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__retrieveConfigDeviceIdFromUserD_1125832c0);
  return;
}



/* Entry: 107c3da10; end: 107c3da13;  */

void FUN_107c3da10(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befe550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_advertisingIdentifier_11259d2f8);
  return;
}



/* Entry: 107c3e70c; end: 107c3e70f;  */

void FUN_107c3e70c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf17510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_batteryLevel_1125a36e8);
  return;
}



/* Entry: 107c3e720; end: 107c3e723;  */

void FUN_107c3e720(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf176f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_batteryState_1125a3760);
  return;
}



/* Entry: 107c3fce8; end: 107c3fceb;  */

void FUN_107c3fce8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf3f230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_cofDeviceId_1125ad630);
  return;
}



/* Entry: 107c4090c; end: 107c4090f;  */

void FUN_107c4090c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf54410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_create_queue_deviceTokenFetcher__1125b2aa8);
  return;
}



/* Entry: 107c40efc; end: 107c40eff;  */

void FUN_107c40efc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf5e650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_currentDevice_1125b5338);
  return;
}



/* Entry: 107c418f8; end: 107c418fb;  */

void FUN_107c418f8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf70630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_deviceID_1125b9b30);
  return;
}



/* Entry: 107c418fc; end: 107c418ff;  */

void FUN_107c418fc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf70650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_deviceIDBytes_1125b9b38);
  return;
}



/* Entry: 107c41900; end: 107c41903;  */

void FUN_107c41900(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf706b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_deviceIDString_1125b9b50);
  return;
}



/* Entry: 107c41904; end: 107c41907;  */

void FUN_107c41904(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf70730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_deviceId_1125b9b70);
  return;
}



/* Entry: 107c41908; end: 107c4190b;  */

void FUN_107c41908(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf70790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_deviceIdStudyEUTDedupeFixEnabled_1125b9b88);
  return;
}



/* Entry: 107c4190c; end: 107c4190f;  */

void FUN_107c4190c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf707b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_deviceIdentifierProvider_1125b9b90);
  return;
}



/* Entry: 107c4196c; end: 107c4196f;  */

void FUN_107c4196c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf71170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_deviceTokenId_1125b9e00);
  return;
}



/* Entry: 107c42374; end: 107c42377;  */

void FUN_107c42374(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf8b110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_durableDeviceIDLogger_1125c05e8);
  return;
}



/* Entry: 107c43080; end: 107c43083;  */

void FUN_107c43080(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa6490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_fetchDeviceTokenWithCompletionHa_1125c72c8);
  return;
}



/* Entry: 107c44fe0; end: 107c44fe3;  */

void FUN_107c44fe0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe5f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_identifierForVendor_1125d7188);
  return;
}



/* Entry: 107c45718; end: 107c4571b;  */

void FUN_107c45718(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bff38b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithApplication_applicationL_1125da7f0);
  return;
}



/* Entry: 107c459d4; end: 107c459d7;  */

void FUN_107c459d4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bff84d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithBlizzard_deviceIdentifie_1125dbaf8);
  return;
}



/* Entry: 107c46544; end: 107c46547;  */

void FUN_107c46544(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c00c250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithDeviceIdHoldoutStateProv_1125e0a60);
  return;
}



/* Entry: 107c46548; end: 107c4654b;  */

void FUN_107c46548(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c00c270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithDeviceIdentifierProvider_1125e0a68);
  return;
}



/* Entry: 107c46704; end: 107c46707;  */

void FUN_107c46704(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c00e990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithDurableDeviceIDLogger__1125e1430);
  return;
}



/* Entry: 107c46778; end: 107c4677b;  */

void FUN_107c46778(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c00faf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnabledSettingProvider_p_1125e1888);
  return;
}



/* Entry: 107c46d04; end: 107c46d07;  */

void FUN_107c46d04(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c01ad30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithHttpMetadataService_requ_1125e4528);
  return;
}



/* Entry: 107c47fe8; end: 107c47feb;  */

void FUN_107c47fe8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0381d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithPreferences_passwordHash_1125eba70);
  return;
}



/* Entry: 107c4878c; end: 107c4878f;  */

void FUN_107c4878c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0479d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithSnapEditor_timelineEdit__1125ef870);
  return;
}



/* Entry: 107c48ea0; end: 107c48ea3;  */

void FUN_107c48ea0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c055830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithTwoFAManager_userNetwork_1125f3018);
  return;
}



/* Entry: 107c49194; end: 107c49197;  */

void FUN_107c49194(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c05a850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithUserAgentPrefix_sessionI_1125f4420);
  return;
}



/* Entry: 107c49258; end: 107c4925b;  */

void FUN_107c49258(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c05bdb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithUserId_userAgentPrefix_d_1125f4978);
  return;
}



/* Entry: 107c4bbe4; end: 107c4bbe7;  */

void FUN_107c4bbe4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0a7e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_logIdentityInit_success_failureR_112607990);
  return;
}



/* Entry: 107c4d07c; end: 107c4d07f;  */

void FUN_107c4d07c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0cfdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_model_112611988);
  return;
}



/* Entry: 107c4d3e4; end: 107c4d3e7;  */

void FUN_107c4d3e4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d4f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_name_112612df0);
  return;
}



/* Entry: 107c4db7c; end: 107c4db7f;  */

void FUN_107c4db7c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e2ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_onComplete_uploadDeviceTokenCall_112616610);
  return;
}



/* Entry: 107c4e080; end: 107c4e083;  */

void FUN_107c4e080(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0ed110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_orientation_112618e58);
  return;
}



/* Entry: 107c4e668; end: 107c4e66b;  */

void FUN_107c4e668(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0fa430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_persistentIdentifier_11261c328);
  return;
}



/* Entry: 107c52574; end: 107c52577;  */

void FUN_107c52574(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1663b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setAdvertisingId__112637308);
  return;
}



/* Entry: 107c53534; end: 107c53537;  */

void FUN_107c53534(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c17de70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setCofDeviceId__11263d1b8);
  return;
}



/* Entry: 107c53730; end: 107c53733;  */

void FUN_107c53730(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c180850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setConfigDeviceId__11263dc30);
  return;
}



/* Entry: 107c54080; end: 107c54083;  */

void FUN_107c54080(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c18c9b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setDeviceId__112640c88);
  return;
}



/* Entry: 107c54084; end: 107c54087;  */

void FUN_107c54084(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c18c9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setDeviceIdentifierProvider__112640c90);
  return;
}



/* Entry: 107c540b4; end: 107c540b7;  */

void FUN_107c540b4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c18cf30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setDeviceToken__112640de8);
  return;
}



/* Entry: 107c54354; end: 107c54357;  */

void FUN_107c54354(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c192d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setDurableDeviceId__112642568);
  return;
}



/* Entry: 107c56ae8; end: 107c56aeb;  */

void FUN_107c56ae8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1cde10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNotificationAPNSTokenEvents__1126511a8);
  return;
}



/* Entry: 107c5732c; end: 107c5732f;  */

void FUN_107c5732c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1dacf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setPersistentDeviceId__112654560);
  return;
}



/* Entry: 107c57330; end: 107c57333;  */

void FUN_107c57330(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1dad10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setPersistentIdentifier__112654568);
  return;
}



/* Entry: 107c5aa04; end: 107c5aa07;  */

void FUN_107c5aa04(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c22bc30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_sharedManager_112668930);
  return;
}



/* Entry: 107c5ba08; end: 107c5ba0b;  */

void FUN_107c5ba08(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c24d0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_stableIntegerDeviceId_112670e58);
  return;
}



/* Entry: 107c5c620; end: 107c5c623;  */

void FUN_107c5c620(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c267130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_systemName_112677670);
  return;
}



/* Entry: 107c5c650; end: 107c5c653;  */

void FUN_107c5c650(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c267470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_systemVersion_112677740);
  return;
}



/* Entry: 107c5d9bc; end: 107c5d9bf;  */

void FUN_107c5d9bc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c292ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_userInterfaceIdiom_1126824d8);
  return;
}



/* Entry: 107c60b58; end: 107c60b5b;  */

void FUN_107c60b58(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbc6a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__SecItemAdd_1103476e8)();
  return;
}



/* Entry: 107c60b5c; end: 107c60b5f;  */

void FUN_107c60b5c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbc6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__SecItemCopyMatching_1103476f0)();
  return;
}



/* Entry: 107c60b60; end: 107c60b63;  */

void FUN_107c60b60(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbc6bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__SecItemDelete_1103476f8)();
  return;
}



/* Entry: 107c60b64; end: 107c60b67;  */

void FUN_107c60b64(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbc6c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__SecItemUpdate_110347700)();
  return;
}



/* Entry: 107c61034; end: 107c61037;  */

void FUN_107c61034(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbed68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__host_statistics_11034c460)();
  return;
}



/* Entry: 107c61660; end: 107c61663;  */

void FUN_107c61660(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc06f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__sysctl_11034cca0)();
  return;
}



/* Entry: 107c61664; end: 107c61667;  */

void FUN_107c61664(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__sysctlbyname_11034cca8)();
  return;
}



/* Entry: 107c616a0; end: 107c616a3;  */

void FUN_107c616a0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc07fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__uname_11034cd50)();
  return;
}



/* Entry: 107fdb094; end: 107fdc0df;  */

void FUN_107fdb094(float param_1,long param_2,int param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  float fVar6;
  double dVar7;
  
  _objc_retain();
  ppuVar1 = &PTR_PTR_1126d8c78;
  if (param_3 == 0) {
    ppuVar1 = &PTR_PTR_1126c4660;
  }
  puVar2 = *ppuVar1;
  _objc_opt_new(puVar2);
  lVar3 = param_2;
  func_0x00010bfa34a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19ae80(puVar2);
  _objc_release(lVar3);
  lVar3 = param_2;
  func_0x00010bfa3440(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19ae20(puVar2);
  _objc_release(lVar3);
  func_0x00010bfbada0(param_2);
  func_0x00010c226a80(puVar2);
  func_0x00010c0c9a60(param_2);
  func_0x00010c1dee00(puVar2);
  func_0x00010c29e220(param_2);
  func_0x00010c222c00(puVar2);
  lVar3 = param_2;
  func_0x00010c094540(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19c240(puVar2);
  _objc_release(lVar3);
  lVar3 = param_2;
  func_0x00010c095a20(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bc480(puVar2);
  _objc_release(lVar3);
  func_0x00010c096ca0(param_2);
  func_0x00010c1bcca0(puVar2);
  lVar3 = param_2;
  func_0x00010c091c60(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010b06f648();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bbee0(puVar2);
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_2;
  func_0x00010c095800(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bc3e0(puVar2);
  _objc_release(lVar3);
  lVar3 = param_2;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    func_0x00010bf9f120(param_2);
    func_0x00010c199b20(puVar2);
    func_0x00010bf9f040(param_2);
    func_0x00010c199a40(puVar2);
    func_0x00010c0947c0(param_2);
    func_0x00010c1bbe80(puVar2);
    func_0x00010c094800(param_2);
    func_0x00010c1bbea0(puVar2);
    lVar3 = param_2;
    func_0x00010c090320(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1baba0(puVar2);
    _objc_release(lVar3);
    lVar3 = param_2;
    func_0x00010c11fae0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 != 0) {
      puVar5 = PTR_PTR_1126c4718;
      _objc_opt_new(PTR_PTR_1126c4718);
      lVar3 = param_2;
      func_0x00010c11fae0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e74c0(puVar5);
      _objc_release(lVar3);
      lVar3 = param_2;
      func_0x00010c11fa40(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e74e0(puVar5);
      _objc_release(lVar3);
      func_0x00010c1bb300(puVar2);
      _objc_release(puVar5);
    }
  }
  func_0x00010bf30820(param_2);
  func_0x00010c178b80(puVar2);
  func_0x00010bf2fe80(param_2);
  func_0x00010c1785c0(puVar2);
  func_0x00010bf2fbe0(param_2);
  func_0x00010c178480(puVar2);
  func_0x00010bf30860(param_2);
  func_0x00010c178bc0(puVar2);
  lVar3 = param_2;
  func_0x00010bf30440(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c178920(puVar2);
  _objc_release(lVar3);
  lVar3 = param_2;
  func_0x00010bf52700(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c184460(puVar2);
  _objc_release(lVar3);
  puVar5 = PTR_PTR_1126c4720;
  _objc_opt_new(PTR_PTR_1126c4720);
  func_0x00010c282c80(param_2);
  func_0x00010c1e9680(puVar5);
  func_0x00010c2681e0(param_2);
  func_0x00010c2117e0(puVar5);
  func_0x00010bf5bb60(param_2);
  func_0x00010c1e59c0(puVar5);
  func_0x00010bfb92e0(param_2);
  func_0x00010c170060(puVar5);
  func_0x00010c268220(param_2);
  func_0x00010c211800(puVar5);
  func_0x00010c21f5a0(puVar2);
  func_0x00010c122b20(param_2);
  func_0x00010c1e88a0(puVar2);
  lVar3 = param_2;
  func_0x00010c0ce9a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c8600(puVar2);
  _objc_release(lVar3);
  func_0x00010bf89ea0(param_2);
  func_0x00010c191960(puVar2);
  func_0x00010bfae340(param_2);
  func_0x00010c19c460(puVar2);
  func_0x00010bfb2540(param_2);
  func_0x00010c19daa0(puVar2);
  func_0x00010bfd3440(param_2);
  func_0x00010c1a5460(puVar2);
  func_0x00010c0c6c20();
  func_0x00010c1c5440(puVar2);
  lVar3 = param_2;
  func_0x00010c241220(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c204680(puVar2);
  _objc_release(lVar3);
  func_0x00010c0c4ba0(param_2);
  dVar7 = (double)param_1;
  func_0x00010c205880(dVar7,puVar2);
  fVar6 = SUB84(dVar7,0);
  func_0x00010c243700(param_2);
  func_0x00010c205840(puVar2);
  func_0x00010c29e480(param_2);
  func_0x00010c222d20((double)fVar6,puVar2);
  lVar3 = param_2;
  func_0x00010c23fb00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c203d60(puVar2);
  _objc_release(lVar3);
  lVar3 = param_2;
  func_0x00010bfadfa0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108442be8();
  func_0x00010c19c1c0(puVar2);
  _objc_release(lVar3);
  func_0x00010bfae160(param_2);
  func_0x00010c19c2c0(puVar2);
  lVar3 = param_2;
  func_0x00010bfae8c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108442868();
  func_0x00010c19c760(puVar2);
  _objc_release(lVar3);
  func_0x00010c23ef00(param_2);
  func_0x00010c203740(puVar2);
  lVar3 = param_2;
  func_0x00010c0c6c20();
  if (lVar3 - 5U < 2) {
    func_0x00010c176040(puVar2);
    lVar3 = param_2;
    func_0x00010c087d20(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b73e0(puVar2);
    _objc_release(lVar3);
    lVar3 = param_2;
    func_0x00010c087b00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b7380(puVar2);
    _objc_release(lVar3);
  }
  else {
    func_0x00010bfbb160(param_2);
    func_0x00010c176040(puVar2);
  }
  func_0x00010bf037a0(param_2);
  func_0x00010c167f20(puVar2);
  func_0x00010bf03500(param_2);
  func_0x00010c167e60(puVar2);
  func_0x00010c2a8340(param_2);
  func_0x00010c225be0(puVar2);
  func_0x00010bf2fba0(param_2);
  func_0x00010c178460(puVar2);
  func_0x00010bf5c920(param_2);
  func_0x00010c226060(puVar2);
  lVar3 = param_2;
  func_0x00010befeb80(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf07d00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1861a0(puVar2);
  _objc_release(lVar4);
  _objc_release(lVar3);
  func_0x00010c253c00(param_2);
  func_0x00010c20abc0(puVar2);
  func_0x00010c2551a0(param_2);
  func_0x00010c20ba80(puVar2);
  func_0x00010c253de0(param_2);
  func_0x00010c20adc0(puVar2);
  func_0x00010c264640(param_2);
  func_0x00010c210580(puVar2);
  func_0x00010c0c6c20();
  func_0x00010c1c5440(puVar2);
  func_0x00010c247520(param_2);
  func_0x00010c206c40(puVar2);
  lVar3 = param_2;
  func_0x00010c243340(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c205660(puVar2);
  _objc_release(lVar3);
  func_0x00010bf1c3a0(param_2);
  func_0x00010c20a860(puVar2);
  func_0x00010c2441e0(param_2);
  func_0x00010c20b8c0(puVar2);
  func_0x00010bf1c3c0(param_2);
  func_0x00010c20a8a0(puVar2);
  func_0x00010c244200(param_2);
  func_0x00010c20b900(puVar2);
  lVar3 = param_2;
  func_0x00010bf8e9a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20aec0(puVar2);
  _objc_release(lVar3);
  func_0x00010c281340(param_2);
  func_0x00010c20bb20(puVar2);
  lVar3 = param_2;
  func_0x00010c281380(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20bb40(puVar2);
  _objc_release(lVar3);
  func_0x00010bfccb60(param_2);
  func_0x00010c20b040(puVar2);
  lVar3 = param_2;
  func_0x00010bfccbc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20b060(puVar2);
  _objc_release(lVar3);
  lVar3 = param_2;
  func_0x00010bf1c420(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20a8c0(puVar2);
  _objc_release(lVar3);
  lVar3 = param_2;
  func_0x00010c244220(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20b920(puVar2);
  _objc_release(lVar3);
  func_0x00010bf61f40(param_2);
  func_0x00010c20ac00(puVar2);
  func_0x00010bf61d60(param_2);
  func_0x00010c20ac20(puVar2);
  func_0x00010bf61d80(param_2);
  func_0x00010c20ac60(puVar2);
  func_0x00010bf61f60(param_2);
  func_0x00010c20acc0(puVar2);
  func_0x00010bf61da0(param_2);
  func_0x00010c20ac40(puVar2);
  func_0x00010bf61dc0(param_2);
  func_0x00010c20ac80(puVar2);
  lVar3 = param_2;
  func_0x00010bfee080(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20b1c0(puVar2);
  _objc_release(lVar3);
  func_0x00010bfee060(param_2);
  func_0x00010c20b1a0(puVar2);
  func_0x00010bf4f960(param_2);
  func_0x00010c20ab80(puVar2);
  lVar3 = param_2;
  func_0x00010bf4f980(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20aba0(puVar2);
  _objc_release(lVar3);
  func_0x00010bfedfe0(param_2);
  func_0x00010c20b1e0(puVar2);
  lVar3 = param_2;
  func_0x00010c2453c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2060e0(puVar2);
  _objc_release(lVar3);
  func_0x00010c1101a0(param_2);
  func_0x00010c1e1760(puVar2);
  func_0x00010c1084c0(param_2);
  func_0x00010c1e0780(puVar2);
  func_0x00010bf219a0(param_2);
  func_0x00010c174020(puVar2);
  lVar3 = param_2;
  func_0x00010bf219e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c174060(puVar2);
  _objc_release(lVar3);
  func_0x00010c2a8860(param_2);
  func_0x00010c225c80(puVar2);
  lVar3 = param_2;
  func_0x00010bf0f140(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16c4e0(puVar2);
  _objc_release(lVar3);
  func_0x00010c29a680(param_2);
  func_0x00010c221b20(puVar2);
  func_0x00010c2a0400(param_2);
  func_0x00010c223e80(puVar2);
  func_0x00010c1ddc60(puVar2);
  lVar3 = param_2;
  func_0x00010c0c9fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    lVar3 = param_2;
    func_0x00010c0c9fe0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067fc0();
    _objc_release(lVar3);
  }
  func_0x00010c1a1aa0(puVar2);
  lVar3 = param_2;
  func_0x00010bfbd6e0();
  if (lVar3 != 0) {
    func_0x00010bfbd6e0(param_2);
    func_0x00010c1fc3e0(puVar2);
  }
  lVar3 = param_2;
  func_0x00010bf6eec0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18c480(puVar2);
  _objc_release(lVar3);
  func_0x00010bfbd220(param_2);
  func_0x00010c1a1ba0(puVar2);
  func_0x00010c0ed100(param_2);
  func_0x00010c1d6440(puVar2);
  func_0x00010c2036e0(puVar2);
  func_0x00010bf97860(param_2);
  func_0x00010c196b80(puVar2);
  func_0x00010c0ca9a0(param_2);
  func_0x00010c1c6ba0(puVar2);
  func_0x00010bfd5ea0(param_2);
  func_0x00010c1a5c20(puVar2);
  func_0x00010c19a060(puVar2);
  func_0x00010c1ed9a0(puVar2);
  lVar3 = param_2;
  func_0x00010bf97180(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c199560(puVar2);
  _objc_release(lVar3);
  lVar3 = param_2;
  func_0x00010bfbcb60(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1a00(puVar2);
  _objc_release(lVar3);
  lVar3 = param_2;
  func_0x00010bf97200(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1968c0(puVar2);
  _objc_release(lVar3);
  lVar3 = param_2;
  func_0x00010bf97180(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1a20(puVar2);
  _objc_release(lVar3);
  func_0x00010c0c5040(param_2);
  func_0x00010c1c4760(puVar2);
  lVar3 = param_2;
  func_0x00010c2485e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2075c0(puVar2);
  _objc_release(lVar3);
  lVar3 = param_2;
  func_0x00010c297de0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2208c0(puVar2);
  _objc_release(lVar3);
  lVar3 = param_2;
  func_0x00010c0c7580(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c58e0(puVar2);
  _objc_release(lVar3);
  lVar3 = param_2;
  func_0x00010c0c75a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c5920(puVar2);
  _objc_release(lVar3);
  lVar3 = param_2;
  func_0x00010c299be0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c221480(puVar2);
  _objc_release(lVar3);
  lVar3 = param_2;
  func_0x00010bf3d2a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17cf60(puVar2);
  _objc_release(lVar3);
  lVar3 = param_2;
  func_0x00010c0d3a20(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ca440(puVar2);
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_2;
  func_0x00010c26afc0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    lVar4 = param_2;
    func_0x00010bf8a400(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212c20(puVar2);
    _objc_release(lVar4);
  }
  else {
    func_0x00010c212c20(puVar2);
  }
  _objc_release(lVar3);
  lVar3 = param_2;
  func_0x00010bf8a420(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe120(puVar2);
  _objc_release(lVar3);
  lVar3 = param_2;
  func_0x00010bf8a880(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c191e80(puVar2);
  _objc_release(lVar3);
  lVar3 = param_2;
  func_0x0001084425f0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c16c0(puVar2);
  _objc_release(lVar3);
  lVar3 = param_2;
  func_0x00010bf3f9e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bbd60(puVar2);
  _objc_release(lVar3);
  lVar3 = param_2;
  func_0x00010bfa33e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e8180(puVar2);
  _objc_release(lVar3);
  lVar3 = param_2;
  func_0x00010c07b9c0();
  if ((int)lVar3 != 0) {
    func_0x00010c206c40(puVar2);
  }
  func_0x00010c080ce0(param_2);
  func_0x00010c1b4f00(puVar2);
  func_0x00010c27c4a0(param_2);
  func_0x00010c21a480(puVar2);
  _objc_release(puVar5);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10808a3a8; end: 10808a783;  */

void FUN_10808a3a8(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain();
  _objc_opt_new(puVar1);
  puVar2 = PTR_PTR_1126d9170;
  _objc_alloc_init();
  func_0x00010c249ca0(param_2);
  puVar3 = puVar2;
  func_0x00010c207d80();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126ba8c8;
  _objc_alloc_init(PTR_PTR_1126ba8c8);
  puVar3 = puVar2;
  func_0x00010c21ace0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c207c40();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1,param_3,puVar6);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar3 = PTR_PTR_1126ba8c0;
  _objc_alloc_init(PTR_PTR_1126ba8c0);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf01f00(param_2);
  func_0x00010c0df720(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c167920(puVar3,param_3,puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c21ace0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c21b980();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(puVar3);
  puVar2 = PTR_PTR_1126ba8c8;
  _objc_alloc_init(PTR_PTR_1126ba8c8);
  puVar3 = puVar2;
  func_0x00010c21ace0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c167920();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1,param_3,puVar6);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126ba9a8;
  _objc_alloc_init(PTR_PTR_1126ba9a8);
  puVar3 = puVar2;
  func_0x00010c21ace0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_2;
  func_0x00010c2709c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c26f320(uVar9);
  puVar5 = puVar3;
  func_0x00010c2156c0(puVar3,param_3,(long)(param_1 * 1000.0));
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
  func_0x00010c09e0c0(PTR__OBJC_CLASS___NSTimeZone_1126b7518);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar5;
  func_0x00010c215860(puVar5,param_3,puVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar9);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126ba8c8;
  _objc_alloc_init(PTR_PTR_1126ba8c8);
  puVar3 = puVar2;
  func_0x00010c21ace0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c189a20();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1,param_3,puVar6);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar11);
  _objc_release(puVar8);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}


