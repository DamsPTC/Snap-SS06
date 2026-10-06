/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1040b0c3c; end: 1040b0c4b; -[_TtC30CompositeConfigServiceProvider46CompositeConfigValueProviderParamsProviderImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040b0c3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11305ed80));
  return;
}



/* Entry: 1040b0c4c; end: 1040b0c93;  */

void FUN_1040b0c4c(void)

{
  FUN_1040b0bc4();
  return;
}



/* Entry: 1040b0c94; end: 1040b0cf7; -[_TtC38SCCompositeConfigValueProviderServices38SCCompositeConfigValueProviderServices setParamsProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040b0c94(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11305ede0;
  _swift_beginAccess(param_1 + _DAT_11305ede0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  _swift_unknownObjectRetain(param_3);
  _swift_unknownObjectRelease(uVar2);
  return;
}



/* Entry: 1040b0cf8; end: 1040b0d43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040b0cf8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11305ede0) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1040b0d44; end: 1040b0da3; -[_TtC38SCCompositeConfigValueProviderServices38SCCompositeConfigValueProviderServices init] */

void FUN_1040b0d44(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCCompositeConfigValueProviderServices.SCCompositeConfigValueProviderServices",0x4d,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1040b0d70);
  (*pcVar1)();
}



/* Entry: 1040b0da4; end: 1040b0db3; -[_TtC38SCCompositeConfigValueProviderServices38SCCompositeConfigValueProviderServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040b0da4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_11305ede0));
  return;
}



/* Entry: 1040b0db4; end: 1040b0df7;  */

void FUN_1040b0db4(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_2;
  FUN_1040b0edc();
  _swift_allocObject();
  *(long *)(lVar1 + 0x10) = param_2;
  *param_1 = lVar1;
  param_1[1] = (long)&PTR_DAT_1107426d0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1040b0df8; end: 1040b0dff;  */

void FUN_1040b0df8(long *param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  FUN_1040b0edc();
  _swift_allocObject();
  *(long *)(lVar1 + 0x10) = unaff_x20;
  *param_1 = lVar1;
  param_1[1] = (long)&PTR_DAT_1107426d0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 1040b0e00; end: 1040b0e2f;  */

void FUN_1040b0e00(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 1040b0e30; end: 1040b0e53;  */

void FUN_1040b0e30(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1040b0e54; end: 1040b0e5f;  */

void FUN_1040b0e54(void)

{
  return;
}



/* Entry: 1040b0e60; end: 1040b0ebb;  */

void FUN_1040b0e60(void)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  uVar1 = uStack_28;
  func_0x000107c4e518(uStack_28);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_28);
  func_0x00010bf077e0(uVar1);
  _swift_unknownObjectRelease(uVar1);
  return;
}



/* Entry: 1040b0ebc; end: 1040b0edb;  */

void FUN_1040b0ebc(void)

{
  return;
}



/* Entry: 1040b0edc; end: 1040b0efb;  */

void FUN_1040b0edc(void)

{
  _objc_opt_self(&PTR_PTR_11305ee50);
  return;
}



/* Entry: 1040b0efc; end: 1040b0f0b;  */

undefined1  [16] FUN_1040b0efc(void)

{
  return ZEXT816(0x110742768);
}



/* Entry: 1040b0f0c; end: 1040b12bf;  */

uint FUN_1040b0f0c(uint *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = 2;
  if (0xffff < param_2 + 1U) {
    iVar1 = 4;
  }
  if (param_2 + 1U < 0x100) {
    iVar1 = 1;
  }
  if (iVar1 != 4) {
    if (iVar1 == 2) {
      return (uint)(ushort)*param_1;
    }
    return (uint)(byte)*param_1;
  }
  return *param_1;
}



/* Entry: 1040b12c0; end: 1040b14af;  */

undefined * FUN_1040b12c0(void)

{
  return &UNK_10dcd3980;
}



/* Entry: 1040b14b0; end: 1040b1557;  */

void FUN_1040b14b0(ulong *param_1,long param_2)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  undefined1 auVar25 [16];
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  
  uVar2 = *(ulong *)(param_2 + 0x10);
  if (uVar2 == 0) {
    uVar7 = 0;
  }
  else {
    if (uVar2 < 4) {
      uVar4 = 0;
      uVar7 = 0;
    }
    else {
      uVar4 = uVar2 & 0x7ffffffffffffffc;
      puVar6 = (undefined8 *)(param_2 + 0x30);
      bVar8 = 0;
      bVar9 = 0;
      bVar10 = 0;
      bVar11 = 0;
      bVar12 = 0;
      bVar13 = 0;
      bVar14 = 0;
      bVar15 = 0;
      bVar16 = 0;
      bVar17 = 0;
      bVar18 = 0;
      bVar19 = 0;
      bVar20 = 0;
      bVar21 = 0;
      bVar22 = 0;
      bVar23 = 0;
      bVar24 = 0;
      bVar26 = 0;
      bVar27 = 0;
      bVar28 = 0;
      bVar29 = 0;
      bVar30 = 0;
      bVar31 = 0;
      bVar32 = 0;
      bVar33 = 0;
      bVar34 = 0;
      bVar35 = 0;
      bVar36 = 0;
      bVar37 = 0;
      bVar38 = 0;
      bVar39 = 0;
      bVar40 = 0;
      uVar7 = uVar4;
      do {
        uVar42 = puVar6[-1];
        uVar41 = puVar6[-2];
        uVar44 = puVar6[1];
        uVar43 = *puVar6;
        bVar8 = (byte)uVar41 | bVar8;
        bVar9 = (byte)((ulong)uVar41 >> 8) | bVar9;
        bVar10 = (byte)((ulong)uVar41 >> 0x10) | bVar10;
        bVar11 = (byte)((ulong)uVar41 >> 0x18) | bVar11;
        bVar12 = (byte)((ulong)uVar41 >> 0x20) | bVar12;
        bVar13 = (byte)((ulong)uVar41 >> 0x28) | bVar13;
        bVar14 = (byte)((ulong)uVar41 >> 0x30) | bVar14;
        bVar15 = (byte)((ulong)uVar41 >> 0x38) | bVar15;
        bVar16 = (byte)uVar42 | bVar16;
        bVar17 = (byte)((ulong)uVar42 >> 8) | bVar17;
        bVar18 = (byte)((ulong)uVar42 >> 0x10) | bVar18;
        bVar19 = (byte)((ulong)uVar42 >> 0x18) | bVar19;
        bVar20 = (byte)((ulong)uVar42 >> 0x20) | bVar20;
        bVar21 = (byte)((ulong)uVar42 >> 0x28) | bVar21;
        bVar22 = (byte)((ulong)uVar42 >> 0x30) | bVar22;
        bVar23 = (byte)((ulong)uVar42 >> 0x38) | bVar23;
        bVar24 = (byte)uVar43 | bVar24;
        bVar26 = (byte)((ulong)uVar43 >> 8) | bVar26;
        bVar27 = (byte)((ulong)uVar43 >> 0x10) | bVar27;
        bVar28 = (byte)((ulong)uVar43 >> 0x18) | bVar28;
        bVar29 = (byte)((ulong)uVar43 >> 0x20) | bVar29;
        bVar30 = (byte)((ulong)uVar43 >> 0x28) | bVar30;
        bVar31 = (byte)((ulong)uVar43 >> 0x30) | bVar31;
        bVar32 = (byte)((ulong)uVar43 >> 0x38) | bVar32;
        bVar33 = (byte)uVar44 | bVar33;
        bVar34 = (byte)((ulong)uVar44 >> 8) | bVar34;
        bVar35 = (byte)((ulong)uVar44 >> 0x10) | bVar35;
        bVar36 = (byte)((ulong)uVar44 >> 0x18) | bVar36;
        bVar37 = (byte)((ulong)uVar44 >> 0x20) | bVar37;
        bVar38 = (byte)((ulong)uVar44 >> 0x28) | bVar38;
        bVar39 = (byte)((ulong)uVar44 >> 0x30) | bVar39;
        bVar40 = (byte)((ulong)uVar44 >> 0x38) | bVar40;
        puVar6 = puVar6 + 4;
        uVar7 = uVar7 - 4;
      } while (uVar7 != 0);
      bVar24 = bVar24 | bVar8;
      bVar26 = bVar26 | bVar9;
      bVar27 = bVar27 | bVar10;
      bVar28 = bVar28 | bVar11;
      bVar29 = bVar29 | bVar12;
      bVar30 = bVar30 | bVar13;
      bVar31 = bVar31 | bVar14;
      bVar32 = bVar32 | bVar15;
      auVar25[1] = bVar26;
      auVar25[0] = bVar24;
      auVar25[2] = bVar27;
      auVar25[3] = bVar28;
      auVar25[4] = bVar29;
      auVar25[5] = bVar30;
      auVar25[6] = bVar31;
      auVar25[7] = bVar32;
      auVar25[8] = bVar33 | bVar16;
      auVar25[9] = bVar34 | bVar17;
      auVar25[10] = bVar35 | bVar18;
      auVar25[0xb] = bVar36 | bVar19;
      auVar25[0xc] = bVar37 | bVar20;
      auVar25[0xd] = bVar38 | bVar21;
      auVar25[0xe] = bVar39 | bVar22;
      auVar25[0xf] = bVar40 | bVar23;
      auVar1[1] = bVar26;
      auVar1[0] = bVar24;
      auVar1[2] = bVar27;
      auVar1[3] = bVar28;
      auVar1[4] = bVar29;
      auVar1[5] = bVar30;
      auVar1[6] = bVar31;
      auVar1[7] = bVar32;
      auVar1[8] = bVar33 | bVar16;
      auVar1[9] = bVar34 | bVar17;
      auVar1[10] = bVar35 | bVar18;
      auVar1[0xb] = bVar36 | bVar19;
      auVar1[0xc] = bVar37 | bVar20;
      auVar1[0xd] = bVar38 | bVar21;
      auVar1[0xe] = bVar39 | bVar22;
      auVar1[0xf] = bVar40 | bVar23;
      auVar25 = NEON_ext(auVar25,auVar1,8,1);
      uVar7 = CONCAT17(bVar32 | auVar25[7],
                       CONCAT16(bVar31 | auVar25[6],
                                CONCAT15(bVar30 | auVar25[5],
                                         CONCAT14(bVar29 | auVar25[4],
                                                  CONCAT13(bVar28 | auVar25[3],
                                                           CONCAT12(bVar27 | auVar25[2],
                                                                    CONCAT11(bVar26 | auVar25[1],
                                                                             bVar24 | auVar25[0]))))
                                        )));
      if (uVar2 == uVar4) goto LAB_1040b1544;
    }
    lVar3 = uVar2 - uVar4;
    puVar5 = (ulong *)(param_2 + uVar4 * 8 + 0x20);
    do {
      uVar7 = *puVar5 | uVar7;
      lVar3 = lVar3 + -1;
      puVar5 = puVar5 + 1;
    } while (lVar3 != 0);
  }
LAB_1040b1544:
  _swift_bridgeObjectRelease();
  *param_1 = uVar7;
  return;
}



/* Entry: 1040b1558; end: 1040b155b;  */

void FUN_1040b1558(void)

{
  undefined *puVar1;
  
  if (puRam000000011305eeb8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcd39e8;
  _swift_getWitnessTable(&UNK_10dcd39e8,&UNK_110742a18);
  puRam000000011305eeb8 = puVar1;
  return;
}



/* Entry: 1040b155c; end: 1040b159b;  */

void FUN_1040b155c(void)

{
  undefined *puVar1;
  
  if (puRam000000011305eeb8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcd39e8;
  _swift_getWitnessTable(&UNK_10dcd39e8,&UNK_110742a18);
  puRam000000011305eeb8 = puVar1;
  return;
}



/* Entry: 1040b159c; end: 1040b159f;  */

void FUN_1040b159c(void)

{
  undefined *puVar1;
  
  if (puRam000000011305eec0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcd3a20;
  _swift_getWitnessTable(&UNK_10dcd3a20,&UNK_110742a18);
  puRam000000011305eec0 = puVar1;
  return;
}



/* Entry: 1040b15a0; end: 1040b15df;  */

void FUN_1040b15a0(void)

{
  undefined *puVar1;
  
  if (puRam000000011305eec0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcd3a20;
  _swift_getWitnessTable(&UNK_10dcd3a20,&UNK_110742a18);
  puRam000000011305eec0 = puVar1;
  return;
}



/* Entry: 1040b15e0; end: 1040b15e3;  */

void FUN_1040b15e0(void)

{
  undefined *puVar1;
  
  if (puRam000000011305eec8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcd3ae8;
  _swift_getWitnessTable(&UNK_10dcd3ae8,&UNK_110742a18);
  puRam000000011305eec8 = puVar1;
  return;
}



/* Entry: 1040b15e4; end: 1040b1623;  */

void FUN_1040b15e4(void)

{
  undefined *puVar1;
  
  if (puRam000000011305eec8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcd3ae8;
  _swift_getWitnessTable(&UNK_10dcd3ae8,&UNK_110742a18);
  puRam000000011305eec8 = puVar1;
  return;
}



/* Entry: 1040b1624; end: 1040b1627;  */

void FUN_1040b1624(void)

{
  undefined *puVar1;
  
  if (puRam000000011305eed0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcd3b10;
  _swift_getWitnessTable(&UNK_10dcd3b10,&UNK_110742a18);
  puRam000000011305eed0 = puVar1;
  return;
}



/* Entry: 1040b1628; end: 1040b1667;  */

void FUN_1040b1628(void)

{
  undefined *puVar1;
  
  if (puRam000000011305eed0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcd3b10;
  _swift_getWitnessTable(&UNK_10dcd3b10,&UNK_110742a18);
  puRam000000011305eed0 = puVar1;
  return;
}



/* Entry: 1040b1668; end: 1040b1687;  */

undefined1  [16] FUN_1040b1668(void)

{
  return ZEXT816(0x110742a18);
}



/* Entry: 1040b1688; end: 1040b16c7;  */

void FUN_1040b1688(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x11305ef08;
  func_0x0001000285a8(0x11305ef08,&UNK_10dcd3bd0);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 1040b16c8; end: 1040b16cf;  */

undefined8 FUN_1040b16c8(void)

{
  return 1;
}



/* Entry: 1040b16d0; end: 1040b174b;  */

void FUN_1040b16d0(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1040b174c; end: 1040b174f;  */

void FUN_1040b174c(void)

{
  undefined *puVar1;
  
  if (puRam000000011305ef18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcd3be0;
  _swift_getWitnessTable(&UNK_10dcd3be0,&UNK_110742be0);
  puRam000000011305ef18 = puVar1;
  return;
}



/* Entry: 1040b1750; end: 1040b17bb;  */

void FUN_1040b1750(void)

{
  undefined *puVar1;
  
  if (puRam000000011305ef18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcd3be0;
  _swift_getWitnessTable(&UNK_10dcd3be0,&UNK_110742be0);
  puRam000000011305ef18 = puVar1;
  return;
}



/* Entry: 1040b17bc; end: 1040b17bf;  */

void FUN_1040b17bc(void)

{
  undefined *puVar1;
  
  if (puRam000000011305ef30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcd3c98;
  _swift_getWitnessTable(&UNK_10dcd3c98,&UNK_110742878);
  puRam000000011305ef30 = puVar1;
  return;
}



/* Entry: 1040b17c0; end: 1040b182b;  */

void FUN_1040b17c0(void)

{
  undefined *puVar1;
  
  if (puRam000000011305ef30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcd3c98;
  _swift_getWitnessTable(&UNK_10dcd3c98,&UNK_110742878);
  puRam000000011305ef30 = puVar1;
  return;
}



/* Entry: 1040b182c; end: 1040b18af;  */

void FUN_1040b182c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSlsMc_11034dd20;
    _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 1040b18b0; end: 1040b18b3;  */

void FUN_1040b18b0(void)

{
  undefined *puVar1;
  
  if (puRam000000011305ef48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcd3d08;
  _swift_getWitnessTable(&UNK_10dcd3d08,&UNK_110742878);
  puRam000000011305ef48 = puVar1;
  return;
}



/* Entry: 1040b18b4; end: 1040b18f3;  */

void FUN_1040b18b4(void)

{
  undefined *puVar1;
  
  if (puRam000000011305ef48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcd3d08;
  _swift_getWitnessTable(&UNK_10dcd3d08,&UNK_110742878);
  puRam000000011305ef48 = puVar1;
  return;
}



/* Entry: 1040b18f4; end: 1040b18f7;  */

void FUN_1040b18f4(void)

{
  undefined *puVar1;
  
  if (puRam000000011305ef50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcd3cc0;
  _swift_getWitnessTable(&UNK_10dcd3cc0,&UNK_110742878);
  puRam000000011305ef50 = puVar1;
  return;
}



/* Entry: 1040b18f8; end: 1040b1937;  */

void FUN_1040b18f8(void)

{
  undefined *puVar1;
  
  if (puRam000000011305ef50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcd3cc0;
  _swift_getWitnessTable(&UNK_10dcd3cc0,&UNK_110742878);
  puRam000000011305ef50 = puVar1;
  return;
}



/* Entry: 1040b1938; end: 1040b1a2b;  */

uint FUN_1040b1938(uint *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = 2;
  if (0xffff < param_2 + 1U) {
    iVar1 = 4;
  }
  if (param_2 + 1U < 0x100) {
    iVar1 = 1;
  }
  if (iVar1 != 4) {
    if (iVar1 == 2) {
      return (uint)(ushort)*param_1;
    }
    return (uint)(byte)*param_1;
  }
  return *param_1;
}



/* Entry: 1040b1a2c; end: 1040b1aef;  */

void FUN_1040b1a2c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x11305f018;
  func_0x0001000285a8(0x11305f018,&UNK_10dcd3db0);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 1040b1af0; end: 1040b1af3;  */

void FUN_1040b1af0(void)

{
  undefined *puVar1;
  
  if (puRam000000011305f060 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcd3dc0;
  _swift_getWitnessTable(&UNK_10dcd3dc0,&UNK_110742ce8);
  puRam000000011305f060 = puVar1;
  return;
}



/* Entry: 1040b1af4; end: 1040b1b5f;  */

void FUN_1040b1af4(void)

{
  undefined *puVar1;
  
  if (puRam000000011305f060 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcd3dc0;
  _swift_getWitnessTable(&UNK_10dcd3dc0,&UNK_110742ce8);
  puRam000000011305f060 = puVar1;
  return;
}



/* Entry: 1040b1b60; end: 1040b1b63;  */

void FUN_1040b1b60(void)

{
  undefined *puVar1;
  
  if (puRam000000011305f078 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcd3e78;
  _swift_getWitnessTable(&UNK_10dcd3e78,&UNK_110742908);
  puRam000000011305f078 = puVar1;
  return;
}



/* Entry: 1040b1b64; end: 1040b1bcf;  */

void FUN_1040b1b64(void)

{
  undefined *puVar1;
  
  if (puRam000000011305f078 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcd3e78;
  _swift_getWitnessTable(&UNK_10dcd3e78,&UNK_110742908);
  puRam000000011305f078 = puVar1;
  return;
}



/* Entry: 1040b1bd0; end: 1040b1c53;  */

void FUN_1040b1bd0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSlsMc_11034dd20;
    _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 1040b1c54; end: 1040b1c57;  */

void FUN_1040b1c54(void)

{
  undefined *puVar1;
  
  if (puRam000000011305f090 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcd3ee8;
  _swift_getWitnessTable(&UNK_10dcd3ee8,&UNK_110742908);
  puRam000000011305f090 = puVar1;
  return;
}



/* Entry: 1040b1c58; end: 1040b1c97;  */

void FUN_1040b1c58(void)

{
  undefined *puVar1;
  
  if (puRam000000011305f090 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcd3ee8;
  _swift_getWitnessTable(&UNK_10dcd3ee8,&UNK_110742908);
  puRam000000011305f090 = puVar1;
  return;
}



/* Entry: 1040b1c98; end: 1040b1c9b;  */

void FUN_1040b1c98(void)

{
  undefined *puVar1;
  
  if (puRam000000011305f098 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcd3ea0;
  _swift_getWitnessTable(&UNK_10dcd3ea0,&UNK_110742908);
  puRam000000011305f098 = puVar1;
  return;
}



/* Entry: 1040b1c9c; end: 1040b1cdb;  */

void FUN_1040b1c9c(void)

{
  undefined *puVar1;
  
  if (puRam000000011305f098 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcd3ea0;
  _swift_getWitnessTable(&UNK_10dcd3ea0,&UNK_110742908);
  puRam000000011305f098 = puVar1;
  return;
}



/* Entry: 1040b1cdc; end: 1040b1e57;  */

int FUN_1040b1cdc(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf1 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 0xe) {
      iVar2 = 4;
    }
    if (param_2 + 0xe >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1040b1d58;
        goto LAB_1040b1d3c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1040b1d3c:
      return ((uint)*param_1 | uVar1 << 8) - 0xe;
    }
  }
LAB_1040b1d58:
  iVar2 = *param_1 - 0xf;
  if (*param_1 < 0xf) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1040b1e58; end: 1040b1e73;  */

void FUN_1040b1e58(void)

{
  code *pcVar1;
  undefined1 auStack_58 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_58,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1040b1e74);
  (*pcVar1)();
}



/* Entry: 1040b1e74; end: 1040b1e77;  */

void FUN_1040b1e74(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1040b1e78);
  (*pcVar1)();
}



/* Entry: 1040b1e78; end: 1040b1ebb;  */

void FUN_1040b1e78(void)

{
  code *pcVar1;
  undefined1 auStack_58 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_58);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1040b1e90);
  (*pcVar1)();
}



/* Entry: 1040b1ebc; end: 1040b1ebf;  */

void FUN_1040b1ebc(void)

{
  undefined *puVar1;
  
  if (puRam000000011305f0d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcd40d0;
  _swift_getWitnessTable(&UNK_10dcd40d0,&UNK_110742928);
  puRam000000011305f0d8 = puVar1;
  return;
}



/* Entry: 1040b1ec0; end: 1040b1f2b;  */

void FUN_1040b1ec0(void)

{
  undefined *puVar1;
  
  if (puRam000000011305f0d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcd40d0;
  _swift_getWitnessTable(&UNK_10dcd40d0,&UNK_110742928);
  puRam000000011305f0d8 = puVar1;
  return;
}



/* Entry: 1040b1f2c; end: 1040b1f6f;  */

void FUN_1040b1f2c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSlsMc_11034dd20;
    _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 1040b1f70; end: 1040b1f77;  */

void FUN_1040b1f70(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1040b1f74);
  (*pcVar1)();
}



/* Entry: 1040b1f78; end: 1040b1fb7;  */

void FUN_1040b1f78(void)

{
  undefined *puVar1;
  
  if (puRam000000011305f0f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcd4098;
  _swift_getWitnessTable(&UNK_10dcd4098,&UNK_110742928);
  puRam000000011305f0f0 = puVar1;
  return;
}



/* Entry: 1040b1fb8; end: 1040b1fbb;  */

void FUN_1040b1fb8(void)

{
  undefined *puVar1;
  
  if (puRam000000011305f0f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcd4050;
  _swift_getWitnessTable(&UNK_10dcd4050,&UNK_110742928);
  puRam000000011305f0f8 = puVar1;
  return;
}



/* Entry: 1040b1fbc; end: 1040b1ffb;  */

void FUN_1040b1fbc(void)

{
  undefined *puVar1;
  
  if (puRam000000011305f0f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcd4050;
  _swift_getWitnessTable(&UNK_10dcd4050,&UNK_110742928);
  puRam000000011305f0f8 = puVar1;
  return;
}



/* Entry: 1040b1ffc; end: 1040b2003;  */

void FUN_1040b1ffc(undefined8 *param_1)

{
  *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  return;
}



/* Entry: 1040b2004; end: 1040b20c7;  */

void FUN_1040b2004(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x11305f158;
  func_0x0001000285a8(0x11305f158,&UNK_10dcd4160);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 1040b20c8; end: 1040b20cb;  */

void FUN_1040b20c8(void)

{
  undefined *puVar1;
  
  if (puRam000000011305f168 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcd4170;
  _swift_getWitnessTable(&UNK_10dcd4170,&UNK_110742e88);
  puRam000000011305f168 = puVar1;
  return;
}



/* Entry: 1040b20cc; end: 1040b2137;  */

void FUN_1040b20cc(void)

{
  undefined *puVar1;
  
  if (puRam000000011305f168 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcd4170;
  _swift_getWitnessTable(&UNK_10dcd4170,&UNK_110742e88);
  puRam000000011305f168 = puVar1;
  return;
}



/* Entry: 1040b2138; end: 1040b213b;  */

void FUN_1040b2138(void)

{
  undefined *puVar1;
  
  if (puRam000000011305f180 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcd4228;
  _swift_getWitnessTable(&UNK_10dcd4228,&UNK_1107429b8);
  puRam000000011305f180 = puVar1;
  return;
}



/* Entry: 1040b213c; end: 1040b21a7;  */

void FUN_1040b213c(void)

{
  undefined *puVar1;
  
  if (puRam000000011305f180 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcd4228;
  _swift_getWitnessTable(&UNK_10dcd4228,&UNK_1107429b8);
  puRam000000011305f180 = puVar1;
  return;
}



/* Entry: 1040b21a8; end: 1040b222b;  */

void FUN_1040b21a8(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSlsMc_11034dd20;
    _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 1040b222c; end: 1040b222f;  */

void FUN_1040b222c(void)

{
  undefined *puVar1;
  
  if (puRam000000011305f198 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcd4298;
  _swift_getWitnessTable(&UNK_10dcd4298,&UNK_1107429b8);
  puRam000000011305f198 = puVar1;
  return;
}



/* Entry: 1040b2230; end: 1040b226f;  */

void FUN_1040b2230(void)

{
  undefined *puVar1;
  
  if (puRam000000011305f198 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcd4298;
  _swift_getWitnessTable(&UNK_10dcd4298,&UNK_1107429b8);
  puRam000000011305f198 = puVar1;
  return;
}



/* Entry: 1040b2270; end: 1040b2273;  */

void FUN_1040b2270(void)

{
  undefined *puVar1;
  
  if (puRam000000011305f1a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcd4250;
  _swift_getWitnessTable(&UNK_10dcd4250,&UNK_1107429b8);
  puRam000000011305f1a0 = puVar1;
  return;
}



/* Entry: 1040b2274; end: 1040b22b3;  */

void FUN_1040b2274(void)

{
  undefined *puVar1;
  
  if (puRam000000011305f1a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcd4250;
  _swift_getWitnessTable(&UNK_10dcd4250,&UNK_1107429b8);
  puRam000000011305f1a0 = puVar1;
  return;
}



/* Entry: 1040b22b4; end: 1040b2437;  */

int FUN_1040b22b4(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1040b2330;
        goto LAB_1040b2314;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1040b2314:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_1040b2330:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1040b2438; end: 1040b2447; -[_TtC24SnapTokenStorageServices24SnapTokenStorageServices store] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040b2438(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11305f238));
  return;
}



/* Entry: 1040b2448; end: 1040b24ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040b2448(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11305f238) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11305f240) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1040b24ac; end: 1040b250b; -[_TtC24SnapTokenStorageServices24SnapTokenStorageServices init] */

void FUN_1040b24ac(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SnapTokenStorageServices.SnapTokenStorageServices",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1040b24d8);
  (*pcVar1)();
}



/* Entry: 1040b250c; end: 1040b2543; -[_TtC24SnapTokenStorageServices24SnapTokenStorageServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040b250c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11305f238));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11305f240));
  return;
}



/* Entry: 1040b2544; end: 1040b2553;  */

undefined1  [16] FUN_1040b2544(void)

{
  return ZEXT816(0x1107430d8);
}



/* Entry: 1040b2554; end: 1040b2587;  */

void FUN_1040b2554(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1040b2588; end: 1040b2703; -[_TtC28SCFeatureStartupSignalerImpl26FeatureStartupSignalerImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040b2588(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11305f288));
  return;
}



/* Entry: 1040b2704; end: 1040b2a03;  */

void FUN_1040b2704(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = (ulong)*unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  func_0x0001040b25a8(uVar1);
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar1,param_2);
  _swift_bridgeObjectRelease(param_2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1040b2a04; end: 1040b2bd7;  */

bool FUN_1040b2a04(long *param_1,long *param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  lVar2 = *param_2;
  cVar1 = (char)param_2[1];
  if ((char)param_1[1] == '\0') {
    if (cVar1 == '\0') {
      return (((uint)lVar2 ^ (uint)lVar3) & 0xff) == 0;
    }
  }
  else if ((char)param_1[1] == '\x01') {
    if (cVar1 == '\x01') {
      return (uint)lVar3 == (uint)lVar2;
    }
  }
  else if (lVar3 < 3) {
    if (lVar3 == 0) {
      if ((cVar1 == '\x02') && (lVar2 == 0)) {
        return true;
      }
    }
    else if (lVar3 == 1) {
      if ((cVar1 == '\x02') && (lVar2 == 1)) {
        return true;
      }
    }
    else if ((cVar1 == '\x02') && (lVar2 == 2)) {
      return true;
    }
  }
  else if (lVar3 < 5) {
    if (lVar3 == 3) {
      if ((cVar1 == '\x02') && (lVar2 == 3)) {
        return true;
      }
    }
    else if ((cVar1 == '\x02') && (lVar2 == 4)) {
      return true;
    }
  }
  else if (lVar3 == 5) {
    if ((cVar1 == '\x02') && (lVar2 == 5)) {
      return true;
    }
  }
  else if ((cVar1 == '\x02') && (lVar2 == 6)) {
    return true;
  }
  return false;
}



/* Entry: 1040b2bd8; end: 1040b2c0f;  */

void FUN_1040b2bd8(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 1040b2c10; end: 1040b2d2f;  */

undefined8 * FUN_1040b2c10(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  uVar1 = param_2[6];
  uVar3 = param_2[7];
  param_1[6] = uVar1;
  param_1[7] = uVar3;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar3);
  return param_1;
}



/* Entry: 1040b2d30; end: 1040b2da3;  */

undefined8 * FUN_1040b2d30(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  _swift_bridgeObjectRelease(param_1[4]);
  uVar1 = param_1[5];
  uVar2 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  _swift_bridgeObjectRelease(param_1[6]);
  uVar1 = param_1[7];
  uVar2 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 1040b2da4; end: 1040b2e4b;  */

int FUN_1040b2da4(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 8);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1040b2e4c; end: 1040b2f33;  */

void FUN_1040b2e4c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1040b2f34; end: 1040b3287;  */

bool FUN_1040b2f34(long param_1,char param_2,long param_3,char param_4)

{
  if (param_2 == '\0') {
    if (param_4 == '\0') {
      return (((uint)param_3 ^ (uint)param_1) & 0xff) == 0;
    }
  }
  else if (param_2 == '\x01') {
    if (param_4 == '\x01') {
      return (uint)param_1 == (uint)param_3;
    }
  }
  else if (param_1 < 3) {
    if (param_1 == 0) {
      if ((param_4 == '\x02') && (param_3 == 0)) {
        return true;
      }
    }
    else if (param_1 == 1) {
      if ((param_4 == '\x02') && (param_3 == 1)) {
        return true;
      }
    }
    else if ((param_4 == '\x02') && (param_3 == 2)) {
      return true;
    }
  }
  else if (param_1 < 5) {
    if (param_1 == 3) {
      if ((param_4 == '\x02') && (param_3 == 3)) {
        return true;
      }
    }
    else if ((param_4 == '\x02') && (param_3 == 4)) {
      return true;
    }
  }
  else if (param_1 == 5) {
    if ((param_4 == '\x02') && (param_3 == 5)) {
      return true;
    }
  }
  else if ((param_4 == '\x02') && (param_3 == 6)) {
    return true;
  }
  return false;
}



/* Entry: 1040b3288; end: 1040b32c7;  */

void FUN_1040b3288(void)

{
  undefined *puVar1;
  
  if (puRam000000011305f428 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcd48bc;
  _swift_getWitnessTable(&UNK_10dcd48bc,&UNK_1107434e8);
  puRam000000011305f428 = puVar1;
  return;
}



/* Entry: 1040b32c8; end: 1040b3323;  */

void FUN_1040b32c8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 1040b3324; end: 1040b337f;  */

long FUN_1040b3324(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar1 = *(long *)(unaff_x20 + 0x28);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    lVar2 = unaff_x20;
    FUN_1040b3380();
    uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
    *(long *)(unaff_x20 + 0x28) = lVar2;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar3);
    lVar1 = 0;
  }
  _swift_bridgeObjectRetain(lVar1);
  return lVar2;
}



/* Entry: 1040b3380; end: 1040b370b;  */

void FUN_1040b3380(long param_1,ulong param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  
  lVar8 = *(long *)(param_1 + 0x10);
  if (*(long *)(lVar8 + 0x10) == 0) {
    return;
  }
  lVar2 = 0x44;
  func_0x0001040b7fe4();
  if ((param_2 & 1) != 0) {
    if (*(long *)(lVar8 + 0x10) == 0) {
      return;
    }
    lVar10 = *(long *)(*(long *)(lVar8 + 0x38) + lVar2 * 8);
    lVar2 = 0x41;
    func_0x0001040b7fe4();
    if ((param_2 & 1) != 0) {
      if (*(long *)(lVar8 + 0x10) == 0) {
        return;
      }
      lVar9 = *(long *)(*(long *)(lVar8 + 0x38) + lVar2 * 8);
      lVar2 = 0x45;
      func_0x0001040b7fe4();
      if ((param_2 & 1) != 0) {
        lVar6 = *(long *)(param_1 + 0x18);
        if (SBORROW8(lVar10,lVar6)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1040b368c);
          (*pcVar1)();
        }
        lVar2 = *(long *)(*(long *)(lVar8 + 0x38) + lVar2 * 8);
        lVar8 = 0x44;
        func_0x000100c8c30c();
        _objc_retainAutoreleasedReturnValue();
        if (lVar8 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1040b3704);
          (*pcVar1)();
        }
        lVar3 = lVar8;
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
        _objc_release(lVar8);
        uVar4 = 0;
        lVar5 = 1;
        FUN_1040b3758(0,1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
        uVar11 = *(ulong *)(uVar4 + 0x10);
        lVar8 = uVar11 + 1;
        uVar7 = uVar4;
        if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar11) {
          uVar7 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
          lVar5 = lVar8;
          FUN_1040b3758(uVar7,lVar8,1,uVar4);
        }
        *(long *)(uVar7 + 0x10) = lVar8;
        lVar8 = uVar7 + uVar11 * 0x18;
        *(long *)(lVar8 + 0x20) = lVar3;
        *(ulong *)(lVar8 + 0x28) = param_2;
        *(long *)(lVar8 + 0x30) = lVar10 - lVar6;
        if (SBORROW8(lVar9,lVar10)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1040b36b8);
          (*pcVar1)();
        }
        lVar8 = 0x41;
        func_0x000100c8c30c();
        _objc_retainAutoreleasedReturnValue();
        if (lVar8 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1040b3708);
          (*pcVar1)();
        }
        lVar6 = lVar8;
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
        lVar3 = lVar5;
        _objc_release(lVar8);
        uVar11 = *(ulong *)(uVar7 + 0x10);
        lVar8 = uVar11 + 1;
        uVar4 = uVar7;
        if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar11) {
          uVar4 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
          lVar3 = lVar8;
          FUN_1040b3758(uVar4,lVar8,1,uVar7);
        }
        *(long *)(uVar4 + 0x10) = lVar8;
        lVar8 = uVar4 + uVar11 * 0x18;
        *(long *)(lVar8 + 0x20) = lVar6;
        *(long *)(lVar8 + 0x28) = lVar5;
        *(long *)(lVar8 + 0x30) = lVar9 - lVar10;
        if (SBORROW8(lVar2,lVar9)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1040b36dc);
          (*pcVar1)();
        }
        lVar8 = 0x45;
        func_0x000100c8c30c();
        _objc_retainAutoreleasedReturnValue();
        if (lVar8 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1040b370c);
          (*pcVar1)();
        }
        lVar6 = lVar8;
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
        _objc_release(lVar8);
        uVar11 = *(ulong *)(uVar4 + 0x10);
        lVar10 = uVar11 + 1;
        uVar7 = uVar4;
        if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar11) {
          uVar7 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
          FUN_1040b3758(uVar7,lVar10,1,uVar4);
        }
        *(long *)(uVar7 + 0x10) = lVar10;
        lVar8 = uVar7 + uVar11 * 0x18;
        *(long *)(lVar8 + 0x20) = lVar6;
        *(long *)(lVar8 + 0x28) = lVar3;
        *(long *)(lVar8 + 0x30) = lVar2 - lVar9;
        lVar8 = *(long *)(param_1 + 0x20) - lVar2;
        if (SBORROW8(*(long *)(param_1 + 0x20),lVar2)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1040b3540);
          (*pcVar1)();
        }
        goto LAB_1040b35dc;
      }
    }
  }
  if (*(long *)(lVar8 + 0x10) == 0) {
    return;
  }
  lVar2 = 0x45;
  func_0x0001040b7fe4();
  if ((param_2 & 1) == 0) {
    return;
  }
  lVar2 = *(long *)(*(long *)(lVar8 + 0x38) + lVar2 * 8);
  lVar8 = *(long *)(param_1 + 0x18);
  if (SBORROW8(lVar2,lVar8)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1040b3664);
    (*pcVar1)();
  }
  lVar10 = 0x45;
  func_0x000100c8c30c();
  _objc_retainAutoreleasedReturnValue();
  if (lVar10 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1040b3700);
    (*pcVar1)();
  }
  lVar9 = lVar10;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  _objc_release(lVar10);
  uVar4 = 0;
  FUN_1040b3758(0,1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
  uVar11 = *(ulong *)(uVar4 + 0x10);
  lVar10 = uVar11 + 1;
  uVar7 = uVar4;
  if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar11) {
    uVar7 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
    FUN_1040b3758(uVar7,lVar10,1,uVar4);
  }
  *(long *)(uVar7 + 0x10) = lVar10;
  lVar6 = uVar7 + uVar11 * 0x18;
  *(long *)(lVar6 + 0x20) = lVar9;
  *(ulong *)(lVar6 + 0x28) = param_2;
  *(long *)(lVar6 + 0x30) = lVar2 - lVar8;
  lVar8 = *(long *)(param_1 + 0x20) - lVar2;
  if (SBORROW8(*(long *)(param_1 + 0x20),lVar2)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1040b3688);
    (*pcVar1)();
  }
LAB_1040b35dc:
  lVar2 = uVar11 + 2;
  uVar11 = uVar7;
  if ((long)(*(ulong *)(uVar7 + 0x18) >> 1) < lVar2) {
    uVar11 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
    FUN_1040b3758(uVar11,lVar2,1,uVar7);
  }
  *(long *)(uVar11 + 0x10) = lVar2;
  lVar2 = uVar11 + lVar10 * 0x18;
  *(undefined8 *)(lVar2 + 0x20) = 0xd00000000000001c;
  *(undefined8 *)(lVar2 + 0x28) = 0x800000010f1ed320;
  *(long *)(lVar2 + 0x30) = lVar8;
  return;
}



/* Entry: 1040b370c; end: 1040b3757;  */

void FUN_1040b370c(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1040b3758; end: 1040b3873;  */

undefined * FUN_1040b3758(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1040b3874);
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
    puVar3 = (undefined *)0x11305f628;
    func_0x0001000285a8(0x11305f628,&UNK_10dcd4a18);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x18) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar6,&UNK_1107435d0);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x18 <= puVar4) {
      _memmove(puVar4,puVar1,uVar6 * 0x18);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Entry: 1040b3874; end: 1040b39df;  */

void FUN_1040b3874(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1040b39e0; end: 1040b39ef;  */

undefined1  [16] FUN_1040b39e0(void)

{
  return ZEXT816(0x1107435f8);
}



/* Entry: 1040b39f0; end: 1040b3a1b;  */

long FUN_1040b39f0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1040b3a1c; end: 1040b3b3b;  */

undefined8 * FUN_1040b3a1c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  uVar3 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar3;
  uVar3 = param_2[4];
  uVar1 = param_2[5];
  param_1[4] = uVar3;
  param_1[5] = uVar1;
  uVar1 = param_2[6];
  uVar2 = param_2[7];
  param_1[6] = uVar1;
  param_1[7] = uVar2;
  uVar2 = param_2[8];
  param_1[8] = uVar2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  return param_1;
}



/* Entry: 1040b3b3c; end: 1040b3ba7;  */

undefined8 * FUN_1040b3b3c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_2[4];
  uVar2 = param_1[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[6];
  uVar2 = param_1[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[8];
  uVar2 = param_1[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Entry: 1040b3ba8; end: 1040b3c5f;  */

int FUN_1040b3ba8(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x12] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}


